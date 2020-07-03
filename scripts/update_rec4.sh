#!/bin/sh

set -e
#set -x

ulimit -c 0
ulimit -St 600
ulimit -Ht unlimited
ulimit -v 4000000

if test -z "$RECDIR"; then
    echo "\$RECDIR not set. This script executes the \$RECDIR/bin/RecCLI file."
    exit 1
fi

root=$(pwd)

find . -name subject.exe | sort | grep -v ppc_macho | grep -v hppa | grep -v arm64 | grep -v m68k_amiga | grep -v ia32_mz | grep -v ia32_com | while read line
do
  dir=$(dirname $line)
  dir=`pwd`/$dir
  
  if test -f $dir/by_rec4.c -o -f $dir/by_rec4.failed ; then
    echo "skipping $line" >/dev/null
  else
    /bin/echo -n "decompiling $line"
    rm -f $dir/by_rec4.c $dir/by_rec4.failed $dir/by_rec4.out $dir/by_rec4.outRaw
    $RECDIR/bin/RecCLI "$line" "$dir/by_rec4.c" > "$dir/by_rec4.outRaw" 2>&1  || true
    if test -f "$dir/by_rec4.c"; then
      if grep ' 0 Register nodes' "$dir/by_rec4.c" >/dev/null ; then
        echo "  failed (empty output)"
        rm $dir/by_rec4.c
        touch $dir/by_rec4.failed
      else
      	echo "  ok"
      fi
    else
        echo "  failed"
        touch $dir/by_rec4.failed
    fi
    (grep -v "Elapsed time" <"$dir/by_rec4.outRaw" | grep -v 'cwd:' >"$dir/by_rec4.out") || true
    rm "$dir/by_rec4.outRaw"
  fi
done
