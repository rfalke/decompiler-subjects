#!/bin/bash

set -e
#set -x

ulimit -c 0

# 5min
#ulimit -St 60
#ulimit -Ht unlimited

# 8 GB
#ulimit -v 8000000

if test -z "$RADARE2DIR"; then
    echo "\$RADARE2DIR is not set. The file \$RADARE2DIR/radare2 will be executed."
    exit 1
fi

root=$(pwd)
rd2=$(echo $R2DECDIR | sed 's,/,.,g')

function cleanup {
  IN=$1
  OUT=$2
  sed <$IN -e "s;$root;SUBJECTS;" -e "s;$R2DECDIR;R2DECDIR;" | grep -v "Please analyze the function/binary first" | grep -v 'Error: no data available' >$OUT || true
  rm $IN
}

echo 'pdd @@f >r2dec.c' >$root/r2dec_cmd
find $root -name subject.exe | grep -v malware_via_email | sort | while read line
do
  dir=$(dirname $line)
  if test -f $dir/by_r2dec.out
  then
    continue
  fi
  /bin/echo -n "decompiling $line  "
  rm -rf "$dir"/by_r2dec.* r2dec_output

  (timeout -k 1s 5m $RADARE2DIR/radare2 <$root/r2dec_cmd -e scr.color=0 -e scr.interactive=no -A $line >out 2>&1 ; echo "$?" >error_code) || true

  # 124 for timeout, 137 if killing the timed out process was required
  if test '(' "$(cat error_code)" -eq 124 ')' -o '(' "$(cat error_code)" -eq 137 ')'; then
    echo >>out
    echo "=== Killed because of time limit" >>out
    /bin/echo -n "(timeout) "
  fi

  if test -f r2dec.c 2>/dev/null ; then
    echo "ok"
    cleanup r2dec.c $dir/by_r2dec.c
  else
    echo "failed"
    touch $dir/by_r2dec.failed
  fi

  cleanup out $dir/by_r2dec.out
  rm -rf r2dec_output error_code
done
