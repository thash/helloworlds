# -*- encoding: UTF-8 -*-

class String
  def length_as_half_chars
    result = 0
    self.split(//).each do |v|
      result += v.bytesize > 1 ? 2 : 1
    end
    return result
  end
end
