# -*- coding: utf-8 -*-

require './method_name'

a = BigClass.new

case ARGV.size
when 2
    if ARGV[0] == "--type"
begin
        #puts a.respond_to?(ARGV[1])
        raise unless a.respond_to?(ARGV[1])
        a.__send__(ARGV[1])
rescue => ex
puts  "ERROR: #{ARGV[1]} is undefined method for ReportMailer class"
end
    else
        puts "ERROR: flag should be '--type'"
    end
else
    puts "ERROR: wrong number of arguments"
end
