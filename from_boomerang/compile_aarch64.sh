#!/bin/bash

set -e
#set -x

find . -name source.c | sort | grep -v bswap | grep -v daysofxmas | grep -v regalias | grep -v twoproc3 | while read line
do
	echo "=== $line"
	for opt in O0 O1 O2 O3 Os
	do
        for cc in gcc clang
        do
        	echo " == $opt $cc"
        	bdir=$(dirname $line)
			edir="$bdir/arm64_elf_${cc}_${opt}_from_rfalke"
			mkdir -p "$edir"
			${cc} -w -$opt -g $line -o "$edir/subject.exe"
			chmod a-x "$edir/subject.exe"
        done
	done
done
