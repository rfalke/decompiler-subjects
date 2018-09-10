#!/bin/sh

set -e

ulimit -c 0
ulimit -t 600
ulimit -v 4000000

if test -z "$RETDECDIR"; then
    echo "\$RETDECDIR not set. The file \$RETDECDIR/bin/retdec-decompiler.py will be used."
    exit 1
fi

root=$(pwd)

find $root -name subject.exe | grep -v amiga | grep -v sparc | grep -v _mz_ | grep -v x64 | grep -v arm64 | grep -v sharedexec | grep -v from_pouet.net | grep -v malware_via_email | grep holdec | grep dmi | sort | while read line
do
  dir=$(dirname $line)
  cfile=$(echo $line | sed 's,/subject.exe,/subject.c,')
  if test -f $dir/by_retdec.c -o -f $dir/by_retdec.failed; then
      echo "skipping $line" >/dev/null
  else
      echo -n "decompiling $line"
      rm -f $dir/by_retdec.c $dir/by_retdec.failed
      if $RETDECDIR/bin/retdec-decompiler.py --no-config --cleanup --no-config --no-memory-limit -o "$cfile" "$line" >out 2>&1 ; then
        echo "  ok"
        sed <$cfile -e "s,$root/,,g" -e "s,$RETDECDIR,RETDECDIR,g" >$dir/by_retdec.c
      else
        echo "  failed"
        touch $dir/by_retdec.failed
      fi
      sed <out -e "s,$root/,,g" -e "s,$RETDECDIR,RETDECDIR,g" >$dir/by_retdec.out
  fi
  rm -f "$cfile"
done
