#!/bin/bash

find . -name 'subject.exe.id0' \
	-o -name 'subject.exe.id1' \
	-o -name 'subject.exe.id2' \
	-o -name 'subject.exe.nam' \
	-o -name 'subject.exe.til' \
	-o -name 'subject.exe.idb' \
	-o -name 'subject.exe.i64' \
	| xargs rm
