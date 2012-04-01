#!/bin/sh

set -e

ulimit -c 0
ulimit -t 120

if test -z "$REC16DIR"; then
    echo "\$REC16DIR not set. The executable \$REC16DIR/REC will be used."
    exit 1
fi

find . -name subject.exe | sort | grep -v ppc_macho | grep -v hppa | while read line
do
  dir=$(dirname $line)
  if test -f $dir/by_rec16.c -o -f $dir/by_rec16.failed; then
      echo "skipping $line" >/dev/null
  else
      echo -n "decompiling $line"

      rm -f $dir/by_rec16.c $dir/by_rec16.failed
      if $REC16DIR/REC -interactive "$line" >out 2>&1 ; then
	  echo "  ok"
	  mv subject.rec $dir/by_rec16.c
      else
	  echo "  failed"
	  touch $dir/by_rec16.failed
      fi
      sed <out 's/in .* sec/in some sec/g' >$dir/by_rec16.out
  fi
done
