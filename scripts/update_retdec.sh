#!/bin/sh

set -e

ulimit -c 0
# 5min
ulimit -St 600
ulimit -Ht unlimited
# 8 GB
ulimit -v 8000000

if test -z "$RETDECDIR"; then
    echo "\$RETDECDIR not set. The file \$RETDECDIR/bin/retdec-decompiler.py will be used."
    exit 1
fi

root=$(pwd)

find $root -name subject.exe | grep -v amiga | grep -v sparc | grep -v _mz_ | grep -v sharedexec | grep -v from_pouet.net | grep -v malware_via_email | sort | while read line
do
  dir=$(dirname $line)
  cfile=$(echo $line | sed 's,/subject.exe,/retdec_subject.c,')
  if test -f $dir/by_retdec.c -o -f $dir/by_retdec.failed; then
      echo "skipping $line" >/dev/null
  else
      echo -n "decompiling $line"
      rm -f $dir/by_retdec.c $dir/by_retdec.failed $dir/retdec_subject.*
      $RETDECDIR/bin/retdec-decompiler --cleanup --no-memory-limit -o "$cfile" "$line" >out 2>&1 || true
      if test -s "$cfile" ; then
        echo "  ok"
        sed <$cfile -e "s,$root/,,g" -e "s,$RETDECDIR,RETDECDIR,g" >$dir/by_retdec.c
      else
        echo "  failed"
        touch $dir/by_retdec.failed
      fi
      sed <out -e "s,$root/,,g" -e "s,$RETDECDIR,RETDECDIR,g" -e 's/\x1b\[[0-9;]*m//g' -e 's/[0-9]\+[.][0-9][0-9]s/some time/g' >$dir/by_retdec.out
  fi
  rm -f $dir/retdec_subject.*
done
