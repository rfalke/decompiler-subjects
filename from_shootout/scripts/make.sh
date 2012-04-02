#!/bin/sh

set -e
#set -x

ls */source.ml | sort | grep -v prodcons_ocaml | grep -v regexmatch_ocaml | while read line
do
	dir=$(dirname $line)
	echo "Compile $line"
	mkdir -p $dir/ia32_elf $dir/x64_elf
	/usr/local/bin/ocamlopt -noassert -unsafe -ccopt -O3  -o $dir/ia32_elf/subject.exe unix.cmxa $line
	rm $dir/source.{cmi,cmx,o}
	/usr/bin/ocamlopt -noassert -unsafe -ccopt -O3  -o $dir/x64_elf/subject.exe unix.cmxa $line
	rm $dir/source.{cmi,cmx,o}
done
