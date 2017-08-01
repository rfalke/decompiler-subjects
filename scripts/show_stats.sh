#!/bin/sh

set -e

echo "=== Architecture"
find . -name 'subject.exe' | rev | cut -d'/' -f2 | rev | cut -d_ -f1 | sort | uniq -c 
echo

echo "=== File formats"
find . -name 'subject.exe' | rev | cut -d'/' -f2 | rev | cut -d_ -f2 | sort | uniq -c 
echo

printf "===     decompiler   | failed | success\n"

for decomp in boomerang rec16 rec4 holdec dcc nemerle_dcc decompiler.sf.net snowman
do
  ok=$(find . -name "by_$decomp.c" | wc -l)
  failed=$(find . -name "by_$decomp.failed" | wc -l)
  printf "  %18s | %6d | %7d\n" "$decomp" $failed $ok
done
