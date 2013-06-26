# -*- encoding: UTF-8 -*-

require './wideashalf.rb'

describe "count wide chars as half" do
  before do
    @s = "abcあいう"
    @s2 = "あいうえお"
  end
  it {@s.length.should == 6}
  it {@s.length_as_half_chars.should == 9}
  it {@s2.length_as_half_chars.should == 10}
end
