=begin

puts "Test start"

puts "Create thread"

t = Thread.new do
    puts "Start thread"
    sleep 3
    puts "End thread"
end

puts "Waiting for the thread to complete"
t.join #join?

puts "Test Completed"



puts "Test start"

puts "Create thread"

t = Thread.new("Apple", 10) do |param1, param2| ####K<<<<<<<<<<===== you can pass param to threads
    puts "Start thread - #{param1}, #{param2}"
    sleep 3
    puts "End thread"
end

puts "Waiting for the thread to complete"
t.join


puts "Test start"

puts "Create thread"

t = Thread.new do
    puts "Start thread"
    sleep 5
    puts "End thread"
end

# puts "Waiting for the thread to complete"
# t.join

while line = gets
  if line.chop == "."
    Thread::kill(t)
    puts "the thread killed"
    break
  end
end

puts "Test Completed"



puts "Test start"
puts "Create thread"

t = Thread.new do
    puts "Start thread"
    Thread.stop
    puts "End thread"
end

gets
t.run
t.join

puts "Test Completed"


=end

puts "Test start"

puts "Create thread 1"
t1 = Thread.new do
  sleep 10
  puts "End thread 1"
end

puts "Create thread 2"
t2 = Thread.new do
  sleep 10
  puts "End thread 2"
end

Thread::list.each {|t| Thread::kill(t) if t != Thread::current}

p t1.join
p t2.join

puts "Test compleated"
