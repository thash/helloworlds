#!/Users/hash/.rvm/rubies/ruby-1.9.2-p180/bin/ruby

require 'socket'

s = TCPSocket.open("localhost", 9999)
s.puts ("homuhomu")
s.close
