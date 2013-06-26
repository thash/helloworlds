require "thread" # 追加

ThreadNum = 10

def countup
  counter = 0
  @locker.synchronize do # 追加
    open("count.txt", "r") {|f| counter = f.read.to_i + 1}
    open("count.txt", "w") {|f| f.write counter}
  end # 追加
end

open("count.txt", "w") { |f| f.write 0 }

threads = []
@locker = Mutex::new # 追加

for i in 1..ThreadNum
  threads << Thread::start {countup}
end

for i in 0...ThreadNum
  threads[i].join
end

open("count.txt", "r") {|f| puts f.read.to_i}
