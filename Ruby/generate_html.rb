#! /usr/bin/env ruby

##############################################################
#
# generate html file for playing quicktime movie and flash
#
# history
# ver. 080729 - lastest
#   adding editor field
#
# ver. 080311
#   adapting new flv player (mediaplayer)
#
# ver. 080108
#   adding pmid field
#
# ver. 070904, 070824
#
# usage: ./generate_html.rb [movie file] [annotation file]
#
##############################################################

require "fileutils"
require "/home/kawano/lib/get_pubmed"
include PubMed
$KCODE = "UTF8"

# define variations
edit     = "DBCLS"
format   = ""
db       = "db name"
title    = "title"
width    = "640"
height   = "480"
keywords = ""
pmid     = ""
file     = ARGV[0]

# extract parameters from annotation file
def param(line)
  _, param = line.chomp.split(":")
  param
end

# module for date
def date
  if ARGV[2] =~ /^\d\d\d\d\d\d\d\d$/ || ARGV[0] =~ /^\d\d\d\d\d\d\d\d/ || ARGV[1] =~ /^\d\d\d\d\d\d\d\d/
    return $&
  elsif ARGV[2] =~ /^\d\d\d\d\d\d$/ || ARGV[0] =~ /^\d\d\d\d\d\d/ || ARGV[1] =~ /^\d\d\d\d\d\d/
    return "20" + $&
  else
    t = Time.now
    return t.strftime("%Y%m%d")
  end
end


# detect file format
if file =~ /\.mov/
  format = "mov"
elsif file =~ /\.flv/
  format = "flv"
  system("flvtool2 -U #{file}")
elsif file =~ /\.swf/
  bin_file = File.open(file, "r").read
  if bin_file[3] == 7
    format = "wink"
  elsif bin_file[3] == 5
    format = "swf"
  else
    raise "unknown format\n"
  end
end

references = Array.new

#set parameters
File.open(ARGV[1], "r").each do |line|
  if line =~ /^DB/i
    db = param(line)
  elsif line =~ /^title/i
    title = param(line)
  elsif line =~ /^keywords/i
    keywords = param(line)
  elsif line =~ /^size/i
    size = param(line).delete(" ")
    width, height = size.split("x")
  elsif line =~ /^edit/i
    edit = param(line).delete(" ").downcase
  elsif line =~ /^PMID/i
    if param(line)
      pmid = param(line).delete(" ")
      pmids = pmid.split(",")
      pmids.each do |id|
        references << pubmed(id)
      end
    end
  end
end

date1 = date
date2 = date1.split("")
date2 << "日"; date2[6,0] = "月"; date2[4,0] = "年"
if date2[5] == "0"
  date2[5] = ""
end
if date2[8] == "0"
  date2[8] = ""
end
date2 = date2.to_s

date3 = date1.sub(/^\d\d/, "")
if file =~ /^\d\d\d\d\d\d\d\d/ || file =~ /^\d\d\d\d\d\d/
  filename = date3 + $'
else
  filename = date3 + file
end

#arrangement of references
if references.empty?
  ref_list = ""
  pmid = ""
else
  pmid = "    <meta name=\"pmid\" content=\"#{pmid}\">"
  ref_list = "    <div id=\"references\">\n      References:\n      <ol>\n"
  references.each do |reference|
    ref_list += "        <li>#{reference[:journal]}, <b>#{reference[:volume]}</b>, #{reference[:pages]} (#{reference[:year]}) PMID:<a href=\"http://www.ncbi.nlm.nih.gov/pubmed/#{reference[:pmid]}\">#{reference[:pmid]}</a></li>\n"
  end
  ref_list += "      </ol>\n    </div>"
end

# set editor
File.open("/home/kawano/template/editor.list", "r").each do |line|
  line = line.chomp.split("\t")
  if line[0].delete(" ").downcase == edit
    edit = line
  end
end


# read template html
html = File.open("/home/kawano/template/" + format + ".html", "r").read


# replace the template
html = html.sub(/KEYWORD/, keywords).sub(/DBNAME/, db).sub(/TITLE/, title)
html = html.sub(/PUBMED_ID/, pmid).sub(/REFERENCES/, ref_list)
html = html.sub(/DATE1/, date1).sub(/DATE2/, date2)
html = html.gsub(/FILENAME/, filename).gsub(/WIDTH/, width).gsub(/HEIGHT/, height)
html = html.sub(/EDITOR/, "<a href=\"#{edit[1]}\">#{edit[0]}</a>")

# output html file
out = filename.sub(/\.mov$/, "_m.html").sub(/\.(swf|flv)$/, "_f.html")

f = File.open(out, "w")
f.write html
f.close


# copy movie file
if file != filename
  FileUtils.install(file, filename, :mode=>0644)
end
