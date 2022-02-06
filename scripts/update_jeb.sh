#!/bin/bash

set -e
#set -x

ulimit -c 0

# 5min
#ulimit -St 60
#ulimit -Ht unlimited

# 8 GB
ulimit -v 8000000

if test -z "$JEBDIR"; then
    echo "\$JEBDIR is not set. The script \$JEBDIR/jeb_macos.sh will be executed."
    exit 1
fi

root=$(pwd)
rd2=$(echo $JEBDIR | sed 's,/,.,g')

echo "-Xmx6G" >$JEBDIR/jvmopt.txt

function cleanup {
  IN=$1
  OUT=$2
  sed <$IN -e "s;$root;SUBJECTS;" -e "s;$JEBDIR;JEBDIR;" | grep -v "// Decompiled by JEB" | grep -v '^System:' >$OUT
  rm $IN
}

find $root -name subject.exe | egrep "(ia32|x64)" | egrep -v '(ia32_mz|ia32_com)' | grep -v 'from_holdec/int_math_with_constants' | grep -v malware_via_email | sort | while read line
do
  dir=$(dirname $line)
  if test -f $dir/by_jeb.out
  then
    continue
  fi
  /bin/echo -n "decompiling $line  "
  rm -rf "$dir"/by_jeb.* jeb_output
  (timeout -k 1s 5m $JEBDIR/jeb_macos.sh -c --srv2 --script=$root/scripts/jeb_DecompileFile.py -- "$line" jeb_output >out 2>&1 ; echo "$?" >error_code) || true

  # 124 for timeout, 137 if killing the timed out process was required
  if test '(' "$(cat error_code)" -eq 124 ')' -o '(' "$(cat error_code)" -eq 137 ')'; then
    echo >>out
    echo "=== Killed because of time limit" >>out
    /bin/echo -n "(timeout) "
  fi

  if stat -f "" jeb_output/*.c 2>/dev/null ; then
    echo "ok"

    find jeb_output -type f -print0 | env -i LANG=C sort -z | xargs -0 cat >jeb_all.c

    cleanup jeb_all.c $dir/by_jeb.all.c
    gzip -9 -n $dir/by_jeb.all.c

    rm -f jeb_output/{__do_global_ctors_aux.c,__do_global_dtors_aux.c,__libc_csu_fini.c,__libc_csu_init.c,_start.c,call_gmon_start.c,finalizer_0.c,frame_dummy.c,initializer_0.c,__x86.get_pc_thunk.bx.c,_dl_relocate_static_pie.c,register_tm_clones.c,deregister_tm_clones.c,finalizer_1.c,initializer_1.c}
    rm -rf jeb_output/→* jeb_output/r→*

    find jeb_output -type f -print0 | env -i LANG=C sort -z | xargs -0 cat >jeb_all.c

    cleanup jeb_all.c $dir/by_jeb.c
  else
    echo "failed"
    touch $dir/by_jeb.failed
  fi

  cleanup out $dir/by_jeb.out
  rm -rf jeb_output error_code
done
