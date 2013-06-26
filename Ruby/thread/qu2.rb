require 'thread'

q = Queue.new

# ここで待ち構えている
th1 = Thread.start do
  while resource = q.pop
    puts resource
  end
end

# ぽんぽん放り込む
[:resource1, :resource2, :resource3, nil].each{|r|
  q.push(r)
}

# 放り込み終わったらthreadをmainにjoinする
th1.join
