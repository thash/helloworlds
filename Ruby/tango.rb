#!/usr/bin/ruby -Ku

require 'csv'

=begin
CSV.open("hogetan.csv","r"){|row|
  puts "#{row[0]} :: #{row[1]}"
}
=end

in_word = ARGV[0]; in_meaning = ARGV[1]


nestary = []
begin
  CSV.open("hogetan2.csv","r"){|row|
    nestary << row
  }
rescue => ex
  puts ex.message
end


nestary << ["n", "#{in_word}", "#{in_meaning}"] unless (in_word == nil) || (in_meaning == nil)

p nestary


  num = 0 #ナンバリング

  writer = CSV.open("hogetan2.csv","w")
  nestary.each{|pair|
    writer << ["#{num}", "#{pair[1]}", "#{pair[2]}"]
    num += 1
  }
