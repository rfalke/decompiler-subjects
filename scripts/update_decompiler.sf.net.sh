#!/bin/sh

set -e

if test -z "$DECOMPILERDIR"; then
    echo "\$DECOMPILERDIR not set. The executable \$DECOMPILERDIR/decompile.exe will be used."
    exit 1
fi

root=$(pwd)
root2=$(pwd | sed 's,^/c,c:,')

cd $DECOMPILERDIR

find $root -name subject.exe | sort | while read line
do
  dir=$(dirname $line)
  echo -n "decompiling $line"
  rm -f $dir/by_decompiler.sf.net.*
  ./decompile.exe "$line" >out 2>&1
  if test -f "$dir/subject.c" ; then
    echo "  ok"
	mv "$dir/subject.asm" $dir/by_decompiler.sf.net.asm
	gzip -9 $dir/by_decompiler.sf.net.asm
	mv "$dir/subject.dis" $dir/by_decompiler.sf.net.dis
	gzip -9 $dir/by_decompiler.sf.net.dis
	sed "s|$root2/||g" <"$dir/subject.h" >$dir/by_decompiler.sf.net.h
	sed "s|$root2/||g" <"$dir/subject.c" >$dir/by_decompiler.sf.net.c
	sed "s|$root2/||g" <"$dir/subject.globals.c" >$dir/by_decompiler.sf.net.globals.c
	rm "$dir/subject.c" "$dir/subject.globals.c" "$dir/subject.h" 
  else
	echo "  failed"
	touch $dir/by_decompiler.sf.net.failed
  fi
  sed "s|$root2/||g" <out >$dir/by_decompiler.sf.net.out
  rm out
done
