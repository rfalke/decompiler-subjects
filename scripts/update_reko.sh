#!/bin/sh

set -e
#set -x

ulimit -c 0
ulimit -t 600
ulimit -v 4000000

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

cd "$REKODIR"

find $root -name subject.exe | grep -v ppc_macho | sort | while read line
do
  dir=$(dirname $line)
  if test -f $dir/by_reko.out
  then
    continue
  fi
  echo -n "decompiling $line"
  rm -f $dir/by_reko.*
  OPTS=""
  if [[ $dir == *"ia32_com"** ]]
  then
    OPTS=" --arch x86-real-16 --env ms-dos --base 0C00:0100 --reg ax:0"
  fi

  echo "Using options:$OPTS" >out
  mono decompile.exe "$line" $OPTS >>out 2>&1 || true
  if test -f "$dir/subject.c" ; then
    echo "  ok"
    mv "$dir/subject.asm" $dir/by_reko.asm
    gzip -9 $dir/by_reko.asm
    mv "$dir/subject.dis" $dir/by_reko.dis
    gzip -9 $dir/by_reko.dis
    rm -f "$dir/subject.exe.sufa-raw.ubj"
    cleanup "$dir/subject.h" $dir/by_reko.h
    cleanup "$dir/subject.c" $dir/by_reko.c
    cleanup "$dir/subject.globals.c" $dir/by_reko.globals.c
    gzip -9 "$dir/by_reko.h"
  else
    echo "  failed"
    touch $dir/by_reko.failed
    rm -f "$dir/subject.asm" "$dir/subject.dis" "$dir/subject.h"
  fi
  cleanup out $dir/by_reko.out
  rm -f "$dir/subject.{asm,dis,exe.sufa-raw.ubj,c,h}"
  
done
