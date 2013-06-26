#!/Users/hash/.rvm/rubies/ruby-1.9.2-p180/bin/ruby

require 'socket'
require 'thread'

gs = TCPServer.open(9999)
puts gs.methods
addr = gs.addr
p addr
addr.shift
p addr

printf("server is on %s\n", addr.join(":"))

while true
  Thread.start(gs.accept) do |s|
    print(s, " is accepted\n")
    puts s.gets
    pring(s, " is gone\n")
    s.close
  end
end
