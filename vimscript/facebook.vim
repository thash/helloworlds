set rtp+=webapi-vim

let ctx = {}
let configfile = expand('~/twitter-vim')
if filereadable(configfile)
  let ctx = eval(join(readfile(configfile), ""))
else
  let ctx.consumer_key = input("consumer_key:")
  let ctx.consumer_secret = input("consumer_secret:")
  .....
endif
