#!/bin/sh

set -e
ulimit -c 0
ulimit -t 120

if test -z "$RECBINDIR"; then
    echo "\$RECBINDIR not set. This script executes
the \$RECBINDIR/RecStudio4CLI file."
    exit 1
fi

find . -name subject.exe | sort | grep -v ppc_macho | grep -v hppa | while read line
do
  dir=$(dirname $line)
  dir=`pwd`/$dir
  echo -n "decompiling $line"
  rm -f $dir/by_rec4.c $dir/by_rec4.failed $dir/by_rec4.out
  if $RECBINDIR/RecStudio4CLI "$line" "$dir/by_rec4.c" > "$dir/by_rec4.out" 2>&1 ; then
      if test -f "$dir/by_rec4.c"; then
	  echo "  ok"
      else
	  echo "no .c file"
	  exit 1
      fi
  else
      echo "  failed"
      touch $dir/by_rec4.failed
  fi
done

find . -name by_rec4.failed -print
