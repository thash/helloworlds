# -*- coding: utf-8 -*-
#!/Users/hash/.rvm/rubies/ruby-1.9.2-p180/bin/ruby 

require 'rubygems'
require 'rspec'

require './fizzbuzz'

describe FizzBuzz do
  
  subject { FizzBuzz.new }
  context '与えられた数字が1のとき' do
    it '1を返すこと' do
      subject.say(1).should == 1
    end
  end

  context '与えられた数字が2のとき' do
    it '2を返すこと' do
      subject.say(2).should == 2
    end
  end

  context '与えられた数字が3のとき' do
    it { subject.say(3).should == "Fizz" }
    # it 'Fizzを返すこと' do
    #   subject.say(3).should == "Fizz"
    # end
  end

  context '与えられた数字が5のとき' do
    it 'Buzzを返すこと' do
      subject.say(5).should == "Buzz"
    end
  end

  context '与えられた数字が6のとき' do
    it 'Fizzを返すこと' do
      subject.say(6).should == "Fizz"
    end
  end

  context '与えられた数字が10のとき' do
    it 'Buzzを返すこと' do
      subject.say(10).should == "Buzz"
    end
  end

  context '与えられた数字が15のとき' do
    it 'FizzBuzzを返すこと' do
      subject.say(15).should == "FizzBuzz"
    end
  end
  
  context '与えられた数字が25のとき' do
    it 'Buzzを返すこと' do
      subject.say(25).should == "Buzz"
    end
  end
  
  context '与えられた数字が30のとき' do
    it 'FizzBuzzを返すこと' do
      subject.say(30).should == "FizzBuzz"
    end
  end

  context '与えられた数字が99のとき' do
    it 'Fizzを返すこと' do
      subject.say(99).should == "Fizz"
    end
  end

  context '与えられた数字が100のとき' do
    it 'Buzzを返すこと' do
      subject.say(100).should == "Buzz"
    end
  end


end
