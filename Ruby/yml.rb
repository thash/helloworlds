# -*- coding: utf-8 -*-

require 'yaml'
require 'pp'

settings_yaml = File.expand_path(File.dirname(__FILE__))+"/config/settings.yml"
settings = YAML::load(File.open(settings_yaml))

#p settings.class #=> Hash
p settings.keys
store = {}
settings.each{|env, val|
  #p env.class #=> String
  #p val.class #=> Hash
  next if env == "common"
  #p val.keys.size #=> all 24
  #p val.values.class #=> Array
  val.each{|what, content|
    #pp what
    store[what] = [] unless store[what]
    store[what] << content
  }
}

store.each{|what, content|
  if content.uniq.size == 1
    p what
  end
}
