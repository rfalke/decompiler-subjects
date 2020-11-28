#!/bin/sh

set -e
#set -x

ulimit -c 0
# 5min
ulimit -St 600
ulimit -Ht unlimited
# 8 GB
ulimit -v 8000000

if test -z "$IDADIR"; then
    echo "The \$IDADIR is not set. The executables \$IDADIR/idat and \$IDADIR/idat64 will be used."
    exit 1
fi

root=$(pwd)
rd2=$(echo $IDADIR | sed 's,/,.,g')

function cleanup {
  IN=$1
  OUT=$2
  sed <$IN -e "s;$IDADIR;IDADIR;" -e "s;$rd2;IDADIR;" -e "s;$root;SUBJECTS;g" -e 's/20[0-9][0-9]-[0-9][0-9]-[0-9][0-9] [0-9][0-9]:[0-9][0-9]:[0-9][0-9]/TIMESTAMP/g' | grep -v License >$OUT
  rm $IN
}

find $root -name subject.exe | grep -e '/\(ia32\|x64\)_' | grep -v ia32_com | grep -v ia32_mz | sort | while read line
do
  dir=$(dirname $line)
  if test -f $dir/by_hex-rays.out
  then
    continue
  fi
  echo -n "decompiling $line"
  rm -rf "$dir"/by_hex-rays.* "$dir"/subject.exe.{id0,id1,id2,nam,til,idb,i64} cpulimit hexout.c hexlog error_code

  IDAT=idat
  if [[ $line == *"/x64"* ]]; then
    IDAT=idat64
  fi
  ($IDADIR/$IDAT -Ohexrays:-nosave:hexout:ALL -A -Lhexlog "$line" >out 2>&1 </dev/null ; echo "$?" >error_code) || true
  if test "$(cat error_code)" -eq 152 ; then
  	echo "=== Killed because of CPU time limit" >>out
  fi
  if test -s hexout.c ; then
    echo "  ok"
    cp hexout.c $dir/by_hex-rays.c
  else
    echo "  failed (empty output)"
    touch $dir/by_hex-rays.failed
  fi

  cleanup hexlog $dir/by_hex-rays.out
  rm -rf "$dir"/subject.exe.{id0,id1,id2,nam,til,idb,i64} cpulimit hexout.c error_code
done
