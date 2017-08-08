#!/usr/bin/python

import sys,re

content=sys.stdin.read()
content=re.sub('<0x[0-9a-f]+ . 0x[0-9a-f]+>',"", content)
content=re.sub('in <filename unknown>:0',"",content)
content=re.sub(" +\n", "\n",content)
m={}
for key in [" #;# ".join(x) for x in re.findall("^ *([^a ].*)\n +(at .*)\n +(at .*)\n +(at .*)", content, re.M)]:
  m[key]=m.get(key,0)+1
keys=sorted(m.keys(), lambda x,y:cmp(m[y], m[x]))
for key in keys:
  print "%4d times"%m[key]
  for i in key.split(" #;# "):
    print "    %s"%i
