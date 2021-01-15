#!/bin/sh

set -e
#set -x

ulimit -c 0
# 5min
ulimit -St 600
ulimit -Ht unlimited
# 8 GB
ulimit -v 8000000

if test -z "$REKODIR" -a -z "$REKOSRCDIR"; then
    echo "Neither \$REKODIR nor \$REKOSRCDIR is set. Either the executable \$REKODIR/decompile.exe or \$REKOSRCDIR/src/Drivers/CmdLine/bin/x64/UnixRelease/decompile.exe will be used by mono."
    exit 1
fi

if test -z "$REKODIR"; then
	REKODIR="$REKOSRCDIR/src/Drivers/CmdLine/bin/x64/UnixRelease"
fi

root=$(pwd)
rd2=$(echo $REKODIR | sed 's,/,.,g')

function cleanup {
  IN=$1
  OUT=$2
  sed <$IN -e "s;// using Reko decompiler version .*;// using Reko decompiler version VERSION;" -e "s;$REKODIR;REKODIR;" -e "s;$rd2;REKODIR;"  >$OUT
  rm $IN
}

# Exclude subjects that Reko can't handle right now.
exclusions="(ppc_macho|arm_pe)"

cd "$REKODIR"
find $root -name subject.exe | egrep -v $exclusions | sort | while read line
do
  dir=$(dirname $line)
  if test -f $dir/by_reko.out
  then
    continue
  fi
  /bin/echo -n "decompiling $line"
  rm -rf "$dir"/by_reko.* "$dir"/subject.reko cpulimit
  OPTS="--aggressive-branch-removal"
  if [[ $dir == *"ia32_com"** ]]
  then
    OPTS="$OPTS --arch x86-real-16 --env ms-dos --base 0C00:0100 --reg ax:0 --entry 0C00:0100"
  fi

  echo "=== Using options:$OPTS" >out
  (dotnet decompile.dll "$line" $OPTS >>out 2>&1 ; echo "$?" >error_code) || true
  if test "$(cat error_code)" -eq 152 ; then
    echo "=== Killed because of CPU time limit" >>out
  fi
  if stat -f "" "$dir"/subject.reko/subject_*.c 2>/dev/null ; then
    echo "  ok"

    (cd "$dir" && cat $(ls subject.reko/subject_*.c | env -i LANG=C sort) >subject.reko/all.c)
    (cd "$dir" && cat $(ls subject.reko/subject_*.asm | env -i LANG=C sort) >subject.reko/all.asm)
    (cd "$dir" && cat $(ls subject.reko/subject_*.dis | env -i LANG=C sort) >subject.reko/all.dis)

    mv "$dir/subject.reko/all.asm" $dir/by_reko.asm
    gzip -9 -n $dir/by_reko.asm

    mv "$dir/subject.reko/all.dis" $dir/by_reko.dis
    gzip -9 -n $dir/by_reko.dis

    cleanup "$dir/subject.reko/subject.h" $dir/by_reko.h
    gzip -9 -n "$dir/by_reko.h"

    cleanup "$dir/subject.reko/all.c" $dir/by_reko.c

    if test -f "$dir/subject.reko/subject.globals.c"; then
      cleanup "$dir/subject.reko/subject.globals.c" $dir/by_reko.globals.c
    else
      rm -f $dir/by_reko.globals.c
    fi
  else
    echo "  failed"
    touch $dir/by_reko.failed
  fi

  # Collect automatically generated unit tests in $root directory
  find $dir -type f -name "*.tests" | while read test
  do 
    cat $test >> $root/reko_$(basename $test)
  done
  cleanup out $dir/by_reko.out
  rm -rf "$dir/subject.reko"
done
