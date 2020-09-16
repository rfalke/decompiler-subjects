#!/bin/sh

set -e

ulimit -c 0
# 5min
ulimit -St 600
ulimit -Ht unlimited
# 8 GB
ulimit -v 8000000

if test -z "$BOOMERANGSRCDIR"; then
    echo "\$BOOMERANGSRCDIR not set. The executable \$BOOMERANGSRCDIR/build/out/bin/boomerang-cli will be used."
    exit 1
fi

root=$(pwd)

find $root -name subject.exe | sort | grep -v ia32_com | grep -v arm | grep -v x64 | grep -v amiga | grep -v malware_via_email | grep -v int_math_with_constants | while read line
do
  dir=$(dirname $line)
  if test -f $dir/by_boomerang-ng.c -o -f $dir/by_boomerang-ng.failed; then
    echo "skipping $line" >/dev/null
  else
    echo -n "decompiling $line"
    rm -f $dir/by_boomerang-ng.c $dir/by_boomerang-ng.failed
    rm -rf _output
    mkdir _output
    if $BOOMERANGSRCDIR/build/out/bin/boomerang-cli -o _output "$line" >out 2>&1 ; then
      if test "$(cat _output/subject/subject.c)" = ""; then
      	# empty or single newline
      	echo "  failed"
        touch $dir/by_boomerang-ng.failed
      else
        echo "  ok"
        mv _output/subject/subject.c $dir/by_boomerang-ng.c
        cat _output/subject/*.c >>$dir/by_boomerang-ng.c 2>/dev/null || true
      fi
    else
      echo "  failed"
      touch $dir/by_boomerang-ng.failed
    fi
    if test -s _output/log; then
      mv _output/log $dir/by_boomerang-ng.log
    fi
    sed <out -e 's/Completed in .*/Completed in some time/g' -e "s,$root/,," -e "s;$BOOMERANGSRCDIR;BOOMERANGSRCDIR;" | \
    	cut -d'|' -f1,2,4- | \
    	grep -v 'Error.* Disassembled instruction.*but the instruction has' | \
    	grep -v 'Error.*No entry for.*in RTL dictionary' | \
    	grep -v 'Warn.*Encountered invalid or unrecognized instruction' | \
    	grep -v 'Warn.*Unknown size for named typ' >$dir/by_boomerang-ng.out
  fi
done
