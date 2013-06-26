# -*- coding: utf-8 -*-
#!/Users/hash/.rvm/rubies/ruby-1.9.2-p180/bin/ruby 

require 'rubygems'
require 'rspec'
require './bookshelf'

describe BookShelf do
  it "本を追加できること" do
    shelf = BookShelf.new
    lambda {
      shelf.add(Book.new("坊ちゃん", "夏目漱石"))
    }.should_not raise_error
  end
  
  it "追加した本を著者で検索出来ること" do
    shelf = BookShelf.new
    shelf.add(Book.new("坊ちゃん", "夏目漱石"))
    shelf.search("夏目").should == <<-EOF
1件ヒットしました
坊ちゃん: 夏目漱石著
    EOF
  end

    it "追加した本をタイトルで検索出来ること" do
      shelf = BookShelf.new
      shelf.add(Book.new("人間失格", "太宰治"))
      shelf.search("失格").should == <<-EOF
1件ヒットしました
人間失格: 太宰治著
      EOF
    end
end