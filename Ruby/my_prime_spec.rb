require './my_prime.rb'

describe "MyPrime" do
  before do
    @pr = MyPrime.new
  end
  it {@pr.is_prime(1).should be_false}
  it {@pr.is_prime(2).should be_true}
  it {@pr.is_prime(3).should be_true}
  it {@pr.is_prime(4).should be_false}
  it {@pr.is_prime(5).should be_true}
  it {@pr.is_prime("str").should be_false}
end

