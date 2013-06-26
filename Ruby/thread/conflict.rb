ThreadNum = 10

def countup
  counter = 0
  open("count.txt", "r") {|f| counter = f.read.to_i + 1}
  open("count.txt", "w") {|f| f.write counter}
end

open("count.txt", "w") { |f| f.write 0 }

threads = []

for i in 1..ThreadNum
  threads << Thread::start {countup}
end

for i in i..ThreadNum
  threads[i-1].join
end

open("count.txt", "r") {|f| puts f.read.to_i}
