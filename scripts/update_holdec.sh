#!/bin/sh

set -e

ulimit -c 0
# 5min
ulimit -St 600
ulimit -Ht unlimited
# 8 GB
ulimit -v 8000000

if test -z "$HOLDECJAR"; then
    echo "\$HOLDECJAR not set."
    exit 1
fi

find . -name subject.exe | sort | grep ia32 | while read line
do
  dir=$(dirname $line)
  if test -f $dir/by_holdec_hinted.hints; then
      echo -n "decompiling $line using hints"
      rm -f $dir/by_holdec_hinted.c $dir/by_holdec_hinted.failed
      rm -f "${line}.info" "${line}.info.canonFormat"
      cp $dir/by_holdec_hinted.hints $dir/input.info
      if java -Xmx1000m -jar $HOLDECJAR -e "$line" -c activeOrMostFunctions --repeatable -i --info $dir/input.info >out 2>&1 ; then
	  echo "  ok"
	  mv all_decompiled_source_code.c $dir/by_holdec_hinted.c
      else
	  echo "  failed"
	  touch $dir/by_holdec_hinted.failed
      fi
      mv out $dir/by_holdec_hinted.out
      mv holdec_log.txt $dir/by_holdec_hinted.log
      rm -f "${line}.info" "${line}.info.canonFormat" $dir/input.info*
  fi
done

find . -name subject.exe | sort | grep ia32 | while read line
do
  echo -n "decompiling $line"
  dir=$(dirname $line)
  rm -f $dir/by_holdec.c $dir/by_holdec.failed
  rm -f "${line}.info" "${line}.info.canonFormat"
  if java -Xmx1000m -jar $HOLDECJAR -e "$line" -c activeOrMostFunctions --repeatable -i >out 2>&1 ; then
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
