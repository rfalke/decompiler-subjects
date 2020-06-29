#!/bin/sh

set -e
#set -x

ulimit -c 0
# 5min
ulimit -St 600
ulimit -Ht unlimited
# 8 GB
ulimit -v 8000000

if test -z "$GHIDRADIR"; then
    echo "\$GHIDRADIR is not set. The script \$GHIDRADIR/support/analyzeHeadless will be used."
    exit 1
fi

root=$(pwd)
rd2=$(echo $GHIDRADIR | sed 's,/,.,g')

function cleanup {
  IN=$1
  OUT=$2
  sed <$IN -e "s;$GHIDRADIR;GHIDRADIR;g" -e "s;$rd2;GHIDRADIR;g" -e "s;$root;SUBJECTS;g" \
  	-e "s;$HOME;HOME;g"  -e 's/ [0-9]\+[.][0-9][0-9][0-9] secs/ some time/g' -e 's/ [0-9]\+ secs/some time/g' \
  	-e 's/[0-9]\+ms/some time/g' -e 's/[0-9]\+ ms/some time/g' | grep -v 'Packed database cache' >$OUT
  rm $IN
}

find $root -name subject.exe | sort | grep -v malware_via_email | grep -v ia32_com | grep -v m68k_amiga | grep -v hppa_sharedexec_by_boomerang | while read line
do
  dir=$(dirname $line)  
  if test -f $dir/by_ghidra.out
  then
    continue
  fi
  echo -n "decompiling $line"
  rm -rf "$dir"/by_ghidra.* "$dir/"{subject.ghidra,ghidra.c,error_code,project_loc,out}
  mkdir "$dir"/project_loc
  
  (cd "$dir" && "$GHIDRADIR/support/analyzeHeadless" project_loc project_name -import subject.exe -scriptPath $root/scripts -postScript ghidra_script.java >>out 2>&1 ; echo "$?" >error_code) || true
  if test "$(cat $dir/error_code)" -eq 152 ; then
  	echo "=== Killed because of CPU time limit" >>out
  fi
  if test -f "$dir"/ghidra.c; then
    echo "  ok"

    mv "$dir/ghidra.c" $dir/by_ghidra.c
  else
    echo "  failed"
    touch $dir/by_ghidra.failed
  fi
  cleanup "$dir/out" $dir/by_ghidra.out
  rm -rf "$dir/project_loc" "$dir/error_code"
done
