# -*- coding: utf-8 -*-
h = {a: "hook", b: "foo", c: "keys"}

# p h.enum_for(:each_with_index)
#=> #<Enumerator: {:a=>1, :b=>2, :c=>3}:each_with_index>

h.enum_for(:each_with_index).map{|(k,v), i|
  p "#{i+1}: #{v} by #{k}"
}

# => "1: hook by a"
# => "2: foo by b"
# => "3: keys by c"
