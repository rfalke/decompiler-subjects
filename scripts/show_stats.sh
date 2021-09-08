#!/bin/sh

set -e

echo "=== Architecture"
find . -name 'subject.exe' | rev | cut -d'/' -f2 | rev | cut -d_ -f1 | sort | uniq -c | sort -n
echo

echo "=== File formats"
find . -name 'subject.exe' | rev | cut -d'/' -f2 | rev | cut -d_ -f2 | sort | uniq -c | sort -n
echo

printf "===     decompiler   | failed | success\n"

for decomp in boomerang boomerang-ng rec16 rec4 holdec dcc nemerle_dcc decompiler.sf.net reko snowman retdec hex-rays ghidra jeb
do
  ok=$(find . -name "by_$decomp.c" | wc -l)
  failed=$(find . -name "by_$decomp.failed" | wc -l)
  printf "  %18s | %6d | %7d\n" "$decomp" $failed $ok
done
