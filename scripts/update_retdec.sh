#!/bin/sh

set -e

ulimit -c 0
ulimit -t 600

if test -z "$RETDECAPIKEY"; then
    echo "\$RETDECAPIKEY not set. The API key from \$RETDECAPIKEY will be used."
    exit 1
fi

root=$(pwd)

find $root -name subject.exe | grep -v amiga | grep -v sparc | grep -v _mz_ | grep -v x64 | grep -v sharedexec | grep -v from_pouet.net | grep -v malware_via_email | sort | while read line
do
  dir=$(dirname $line)
  cfile=$(echo $line | sed 's,/subject.exe,/subject.c,')
  if test -f $dir/by_retdec.c -o -f $dir/by_retdec.failed; then
      echo "skipping $line" >/dev/null
  else
      echo -n "decompiling $line"
      rm -f $dir/by_retdec.c $dir/by_retdec.failed
      if $root/scripts/update_retdec_helper.sh -k "$RETDECAPIKEY" "$line" >out 2>&1 ; then
	  echo "  ok"
	  sed <$cfile -e "s,// Decompilation date:.*,// Decompilation date: DATE," -e "s,// Decompiler release: .*,// Decompiler release: VERSION,">$dir/by_retdec.c
      else
	  echo "  failed"
	  if grep "You have reached your limit" out >/dev/null; then
	  	echo "=== limit reached; aborting"
	  	rm -f out "$cfile"
	  	exit 1
	  fi
	  touch $dir/by_retdec.failed
      fi
      sed <out -e "s,$root/,," >$dir/by_retdec.out
  fi
  rm -f "$cfile"
done
