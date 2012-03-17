#!/bin/sh

set -e

ulimit -c 0

if test -z "$HOLDECJAR"; then
    echo "\$HOLDECJAR not set."
    exit 1
fi

find . -name subject.exe | sort | grep ia32 | while read line
do
  echo -n "decompiling $line"
  dir=$(dirname $line)
  rm -f $dir/by_holdec.c $dir/by_holdec.failed
  if java -Xmx1000m -jar $HOLDECJAR -e "$line" -c allmethods -i >out 2>&1 ; then
      echo "  ok"
      mv all_decompiled_source_code.c $dir/by_holdec.c
  else
      echo "  failed"
      touch $dir/by_holdec.failed
  fi
  mv out $dir/by_holdec.out
  mv holdec_log.txt $dir/by_holdec.log
  rm -f "${line}.info" "${line}.info.canonFormat"
done
