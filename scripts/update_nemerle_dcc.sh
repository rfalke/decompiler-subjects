#!/bin/sh

set -e

ulimit -c 0
# 5min
ulimit -St 600
ulimit -Ht unlimited
# 8 GB
ulimit -v 8000000

if test -z "$DCCDIR"; then
    echo "\$DCCDIR not set. The executable \$DCCDIR/dcc_original will be used."
    exit 1
fi

root=$(pwd)

# to access the sigs
cd $DCCDIR

find $root -name subject.exe | grep -e 'ia32_\(mz\|com\)' | sort | while read line
do
  dir=$(dirname $line)
  echo -n "decompiling $line"
  rm -f $dir/by_nemerle_dcc.c $dir/by_nemerle_dcc.failed $dir/by_nemerle_dcc.out subject.b
  if $DCCDIR/dcc_original -c -s "$line" >out 2>&1 ; then
    echo "  ok"
    sed <$dir/subject.b "s|$root/||g" >$dir/by_nemerle_dcc.c
  else
    echo "  failed"
    touch $dir/by_nemerle_dcc.failed
  fi
  sed <out "s|$root/||g" >$dir/by_nemerle_dcc.out
  rm -f $dir/subject.b
done
