# -*- coding: utf-8 -*-

score = 2
ans = [1,2,4,3]
res = [1,2,3,3]

out = []
for i in 0...ans.length do
  out << (ans[i] == res[i])
end

puts out.select{|a| a }.size * score


