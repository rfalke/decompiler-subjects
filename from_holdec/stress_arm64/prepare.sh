#!/bin/bash

set -e
#set -x

function foo {
  prefix="$1"
  size="$2"
  num="$3"
  groups="$4"
  perinst="$5"

  rm -f output

  if test $perinst -eq 1; then
    seed="1634801370"
  else
    seed="1634801372"
  fi

  python generator.py input source_asm_${prefix}.s source_${prefix}.c $size $num $seed output "$groups" $perinst
  gcc -O2 -Wall source_${prefix}.c source_asm_${prefix}.s -o pass1
  ./pass1 >output

  rm -rf arm64_macho_${prefix}
  mkdir arm64_macho_${prefix}

  python generator.py input source_asm_${prefix}.s source_${prefix}.c $size $num $seed output "$groups" $perinst
  gcc -O2 -Wall source_${prefix}.c source_asm_${prefix}.s -o arm64_macho_${prefix}/subject.exe
  ./arm64_macho_${prefix}/subject.exe
  chmod a-x arm64_macho_${prefix}/subject.exe
}

foo "simdInt_single_inst__1_var" 1 0 "simdInt" 1
foo "simdInt_single_inst__10_vars" 1 0 "simdInt" 10
