=begin
require 'thread'

q = Queue.new
t = Thread.new do
    loop do
        n = q.pop
        if n.to_i >=0
            val = Math.sqrt(n)
            puts "Square(#{n}) = #{val}"
        else
            puts "?"
        end
    end
end

while line = gets
    if line.chop! == "."
        break
    else
        q.push(line)
    end
end

=end


require "thread"

q = Queue.new

t = Thread.new do
  loop do
    n = q.pop
    if n.to_i>=0
      val = Math::sqrt(n)
      puts "Square(#{n}) = #{val}"
    else
      puts "?"
    end
  end
end

while line = gets
  if line.chop! == "."
    break
  else
    q.push(line)
  end
end
