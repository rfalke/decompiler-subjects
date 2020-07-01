#!/usr/bin/python

import sys,re

m={}
for fn in open("files").readlines():
  fn=fn.strip()
  content=open(fn).read()
  content=re.sub('in <[0-9a-f]+>:0',"",content).strip()
  content=re.sub(" +\n", "\n",content)
  for key in [" #;# ".join(x) for x in re.findall("^ *([^a ].*)\n +(at .*)\n +(at .*)\n +(at .*)", content, re.M)]:
    list=m.get(key, [])
    list.append(fn)
    m[key]=list
keys=sorted(m.keys(), lambda x,y:cmp(len(m[y]), len(m[x])))
for key in keys:
  print "==== %4d times"%len(m[key])
  for i in key.split(" #;# "):
    print "    %s"%i
  for fn in m[key]:
    print "      ",fn
  print
