#!/bin/sh

set -e
#set -x

if test -z "$DECOMPILERDIR"; then
    echo "\$DECOMPILERDIR not set. The executable \$DECOMPILERDIR/decompile.exe will be used."
    exit 1
fi

root=$(pwd)
root2=$(pwd | sed 's,^/c,c:,')
root3="e:/"

if test ! -f _subjects
then
  echo "Updating $root/_subjects"
  find . -name subject.exe | sort >_subjects
fi

function cleanup {
  IN=$1
  OUT=$2
  sed <$IN "s|$root2/||g" | sed "s|$root3||g" | sed "s;// Generated on .* by;// Generated on TIMESTAMP by;g" | sed "s;// using Decompiler version .*;// using Decompiler version VERSION;" >$OUT
  rm $IN
}

cd $DECOMPILERDIR

cat $root/_subjects | while read line
do
  line="$root/$line"
  dir=$(dirname $line)
  if test -f $dir/by_decompiler.sf.net.out
  then
    continue
  fi
  echo -n "decompiling $line"
  rm -f $dir/by_decompiler.sf.net.*
  OPTS=""
  if [[ $dir == *"ia32_com"** ]]
  then
    OPTS=" --arch x86-real-16 --env ms-dos --base 0C00:0100 --reg ax:0"
  fi

  echo "Using options:$OPTS" >out
  ./decompile.exe "$line" $OPTS >>out 2>&1 || true
  if test -f "$dir/subject.c" ; then
    echo "  ok"
    mv "$dir/subject.asm" $dir/by_decompiler.sf.net.asm
    gzip -9 $dir/by_decompiler.sf.net.asm
    mv "$dir/subject.dis" $dir/by_decompiler.sf.net.dis
    gzip -9 $dir/by_decompiler.sf.net.dis
    cleanup "$dir/subject.h" $dir/by_decompiler.sf.net.h
    cleanup "$dir/subject.c" $dir/by_decompiler.sf.net.c
    cleanup "$dir/subject.globals.c" $dir/by_decompiler.sf.net.globals.c
  else
    echo "  failed"
    touch $dir/by_decompiler.sf.net.failed
  fi
  cleanup out $dir/by_decompiler.sf.net.out
done
