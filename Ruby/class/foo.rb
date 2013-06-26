# -*- encoding: UTF-8 -*-

=begin
obj = Object.new
class << obj
  def test
    p "waaaaaaaaaaaaaaaaaaaaaaaai"
  end
end

obj.test
obj.clone.test
#obj.dup.test
obj2 = Object.new
obj2.test
=end

# Class and Class methods
class Profile
  @@count = 0

  def Profile.count
#  def self.count #=> OK. it's same as Profile.count
#  def count # => NG at Profile.count

    return @@count
  end

  def initialize(name_one)
    @name = name_one
    @@count += 1
  end
  attr_accessor :name
  #  attr_reader :name
end

tom = Profile.new("tommy")

wil = Profile.new("William")
puts wil.name
wil.name = "RealWilliam"
puts wil.name

p Profile.count
p Profile::count # same meaning


# Instance Method (receiver is instance)


class MyCar
  def dispString(str)
    print(str)
    # use data related to "self" here,
    # so that you can.
  end
end


car = MyCar.new
car.dispString("hoge")
MyCar.new.dispString("hoge")

#MyCar.dispString("hoge") #=> NG

