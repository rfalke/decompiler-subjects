#!/usr/bin/python

import sys,re

content=sys.stdin.read()
m={}
for key in [" ; ".join(x) for x in re.findall("^    ([^ ].*)\n       (at .*)\n   (at .*)", content, re.M)]:
  m[key]=m.get(key,0)+1
keys=sorted(m.keys(), lambda x,y:cmp(m[y], m[x]))
for key in keys:
  print "%4d %s"%(m[key],key)
