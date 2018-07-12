#!/bin/bash

set -e
#set -x

find . -name source.c | sort | grep -v condition_eval_order | grep -v /rev/ | while read line
do
	echo "=== $line"
	for opt in O0 O1 O2 O3 Os
	do
        for cc in gcc clang
        do
        	extra=""
	        case "$line $cc" in 
  			*otc*clang)
  				echo " == skipping $opt $cc"
		    	;;
		    *otcc*)
		    	extra="-ldl"
		    	;;&
		    *movfuscator/sin*)
		    	extra="-lm"
		    	;;&
		    *)
	        	echo " == $opt $cc"
    	    	bdir=$(dirname $line)
				edir="$bdir/arm64_elf_${cc}_${opt}"
				mkdir -p "$edir"
				${cc} $extra -w -$opt -g $line -o "$edir/subject.exe"
				chmod a-x "$edir/subject.exe"
				;;
			esac
        done
	done
done
