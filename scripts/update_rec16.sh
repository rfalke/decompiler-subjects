#!/bin/sh

set -e

ulimit -c 0

if test -z "$REC16DIR"; then
    echo "\$REC16DIR not set. The executable \$REC16DIR/REC will be used."
    exit 1
fi

find . -name subject.exe | grep -v ppc_macho | grep -v hppa | while read line
do
  echo -n "decompiling $line"
  dir=$(dirname $line)
  rm -f $dir/by_rec16.c $dir/by_rec16.failed
  if $REC16DIR/REC -interactive "$line" >out 2>&1 ; then
      echo "  ok"
      mv subject.rec $dir/by_rec16.c
  else
      echo "  failed"
      touch $dir/by_rec16.failed
  fi
  mv out $dir/by_rec16.out
done
