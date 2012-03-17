#!/bin/sh

set -e

boomerangOk=$(find . -name 'by_boomerang.c' | wc -l)
boomerangFailed=$(find . -name 'by_boomerang.failed' | wc -l)

rec16Ok=$(find . -name 'by_rec16.c' | wc -l)
rec16Failed=$(find . -name 'by_rec16.failed' | wc -l)

holdecOk=$(find . -name 'by_holdec.c' | wc -l)
holdecFailed=$(find . -name 'by_holdec.failed' | wc -l)

printf " decompiler | failed | success\n"
printf " %10s | %6d | %7d\n" "boomerang" $boomerangFailed $boomerangOk
printf " %10s | %6d | %7d\n" "rec16" $rec16Failed $rec16Ok
printf " %10s | %6d | %7d\n" "holdec" $holdecFailed $holdecOk
