#!/bin/sh

set -e

ulimit -c 0
# 5min
ulimit -St 600
ulimit -Ht unlimited
# 8 GB
ulimit -v 8000000

if test -z "$SNOWMANDIR"; then
    echo "\$SNOWMANDIR not set. The executable \$SNOWMANDIR/build/nocode/nocode will be used."
    exit 1
fi

root=$(pwd)

find $root -name subject.exe | grep -v ppc_ | grep -v m68k_ | grep -v sparc_ | grep -v _mz | grep -v ia32_com | grep -v hppa_sharedexe | grep -v arm64 | sort | while read line
do
  dir=$(dirname $line)
  if test -f $dir/by_snowman.c -o -f $dir/by_snowman.failed; then
      echo "skipping $line" >/dev/null
  else
      echo -n "decompiling $line"
      rm -f $dir/by_snowman.c $dir/by_snoman.failed
      if $SNOWMANDIR/build/nocode/nocode  --print-cxx=$dir/by_snowman.c -- "$line" >/tmp/tmp.out 2>&1 ; then
      	if test -s $dir/by_snowman.c ; then
	        echo "  ok"
	    else
	    	echo "  failed (empty output)"
	    	touch $dir/by_snowman.failed
	    	rm $dir/by_snowman.c
	    fi
      else
        echo "  failed"
        touch $dir/by_snowman.failed
      fi
      sed </tmp/tmp.out "s,$root/,,g" | sed "s,$SNOWMANDIR,...,g" >$dir/by_snowman.out
  fi
done
rm -f /tmp/tmp.out
