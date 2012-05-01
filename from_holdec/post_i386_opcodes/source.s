
        .file   "a.c"
        .text

    
.globl bswap_plain
         .type   bswap_plain, @function
bswap_plain:
      bswap %eax
  mov $0x0,%eax

    ret
         .size   bswap_plain, .-bswap_plain

    
.globl bswap_allregs
         .type   bswap_allregs, @function
bswap_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  bswap %eax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   bswap_allregs, .-bswap_allregs

    
.globl bswap_constant_simple
         .type   bswap_constant_simple, @function
bswap_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  bswap %eax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   bswap_constant_simple, .-bswap_constant_simple

    
.globl bswap_constant_complex1
         .type   bswap_constant_complex1, @function
bswap_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  bswap %eax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   bswap_constant_complex1, .-bswap_constant_complex1

    
.globl bswap_constant_complex2
         .type   bswap_constant_complex2, @function
bswap_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  bswap %eax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   bswap_constant_complex2, .-bswap_constant_complex2

    
.globl cmpxchg1_mv_plain
         .type   cmpxchg1_mv_plain, @function
cmpxchg1_mv_plain:
      cmpxchg %al,%bl
  mov $0x0,%eax

    ret
         .size   cmpxchg1_mv_plain, .-cmpxchg1_mv_plain

    
.globl cmpxchg1_mv_allregs
         .type   cmpxchg1_mv_allregs, @function
cmpxchg1_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  cmpxchg %al,%bl
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg1_mv_allregs, .-cmpxchg1_mv_allregs

    
.globl cmpxchg1_mv_constant_simple
         .type   cmpxchg1_mv_constant_simple, @function
cmpxchg1_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  cmpxchg %al,%bl
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg1_mv_constant_simple, .-cmpxchg1_mv_constant_simple

    
.globl cmpxchg1_mv_constant_complex1
         .type   cmpxchg1_mv_constant_complex1, @function
cmpxchg1_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  cmpxchg %al,%bl
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg1_mv_constant_complex1, .-cmpxchg1_mv_constant_complex1

    
.globl cmpxchg1_mv_constant_complex2
         .type   cmpxchg1_mv_constant_complex2, @function
cmpxchg1_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  cmpxchg %al,%bl
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg1_mv_constant_complex2, .-cmpxchg1_mv_constant_complex2

    
.globl cmpxchg2_mv_plain
         .type   cmpxchg2_mv_plain, @function
cmpxchg2_mv_plain:
      cmpxchg %ax,%bx
  mov $0x0,%eax

    ret
         .size   cmpxchg2_mv_plain, .-cmpxchg2_mv_plain

    
.globl cmpxchg2_mv_allregs
         .type   cmpxchg2_mv_allregs, @function
cmpxchg2_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  cmpxchg %ax,%bx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg2_mv_allregs, .-cmpxchg2_mv_allregs

    
.globl cmpxchg2_mv_constant_simple
         .type   cmpxchg2_mv_constant_simple, @function
cmpxchg2_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  cmpxchg %ax,%bx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg2_mv_constant_simple, .-cmpxchg2_mv_constant_simple

    
.globl cmpxchg2_mv_constant_complex1
         .type   cmpxchg2_mv_constant_complex1, @function
cmpxchg2_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  cmpxchg %ax,%bx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg2_mv_constant_complex1, .-cmpxchg2_mv_constant_complex1

    
.globl cmpxchg2_mv_constant_complex2
         .type   cmpxchg2_mv_constant_complex2, @function
cmpxchg2_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  cmpxchg %ax,%bx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg2_mv_constant_complex2, .-cmpxchg2_mv_constant_complex2

    
.globl cmpxchg3_plain
         .type   cmpxchg3_plain, @function
cmpxchg3_plain:
      cmpxchg %eax,%ebx
  mov $0x0,%eax

    ret
         .size   cmpxchg3_plain, .-cmpxchg3_plain

    
.globl cmpxchg3_allregs
         .type   cmpxchg3_allregs, @function
cmpxchg3_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  cmpxchg %eax,%ebx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg3_allregs, .-cmpxchg3_allregs

    
.globl cmpxchg3_constant_simple
         .type   cmpxchg3_constant_simple, @function
cmpxchg3_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  cmpxchg %eax,%ebx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg3_constant_simple, .-cmpxchg3_constant_simple

    
.globl cmpxchg3_constant_complex1
         .type   cmpxchg3_constant_complex1, @function
cmpxchg3_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  cmpxchg %eax,%ebx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg3_constant_complex1, .-cmpxchg3_constant_complex1

    
.globl cmpxchg3_constant_complex2
         .type   cmpxchg3_constant_complex2, @function
cmpxchg3_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  cmpxchg %eax,%ebx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg3_constant_complex2, .-cmpxchg3_constant_complex2

    
.globl cmpxchg4_mv_plain
         .type   cmpxchg4_mv_plain, @function
cmpxchg4_mv_plain:
      cmpxchg %eax,(%ebx)
  mov $0x0,%eax

    ret
         .size   cmpxchg4_mv_plain, .-cmpxchg4_mv_plain

    
.globl cmpxchg4_mv_allregs
         .type   cmpxchg4_mv_allregs, @function
cmpxchg4_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  cmpxchg %eax,(%ebx)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg4_mv_allregs, .-cmpxchg4_mv_allregs

    
.globl cmpxchg4_mv_constant_simple
         .type   cmpxchg4_mv_constant_simple, @function
cmpxchg4_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  cmpxchg %eax,(%ebx)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg4_mv_constant_simple, .-cmpxchg4_mv_constant_simple

    
.globl cmpxchg4_mv_constant_complex1
         .type   cmpxchg4_mv_constant_complex1, @function
cmpxchg4_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  cmpxchg %eax,(%ebx)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg4_mv_constant_complex1, .-cmpxchg4_mv_constant_complex1

    
.globl cmpxchg4_mv_constant_complex2
         .type   cmpxchg4_mv_constant_complex2, @function
cmpxchg4_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  cmpxchg %eax,(%ebx)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg4_mv_constant_complex2, .-cmpxchg4_mv_constant_complex2

    
.globl cmpxchg5_mv_plain
         .type   cmpxchg5_mv_plain, @function
cmpxchg5_mv_plain:
      cmpxchg %al,%al
  mov $0x0,%eax

    ret
         .size   cmpxchg5_mv_plain, .-cmpxchg5_mv_plain

    
.globl cmpxchg5_mv_allregs
         .type   cmpxchg5_mv_allregs, @function
cmpxchg5_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  cmpxchg %al,%al
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg5_mv_allregs, .-cmpxchg5_mv_allregs

    
.globl cmpxchg5_mv_constant_simple
         .type   cmpxchg5_mv_constant_simple, @function
cmpxchg5_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  cmpxchg %al,%al
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg5_mv_constant_simple, .-cmpxchg5_mv_constant_simple

    
.globl cmpxchg5_mv_constant_complex1
         .type   cmpxchg5_mv_constant_complex1, @function
cmpxchg5_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  cmpxchg %al,%al
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg5_mv_constant_complex1, .-cmpxchg5_mv_constant_complex1

    
.globl cmpxchg5_mv_constant_complex2
         .type   cmpxchg5_mv_constant_complex2, @function
cmpxchg5_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  cmpxchg %al,%al
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg5_mv_constant_complex2, .-cmpxchg5_mv_constant_complex2

    
.globl cmpxchg_locked_mv_plain
         .type   cmpxchg_locked_mv_plain, @function
cmpxchg_locked_mv_plain:
      lock cmpxchg %eax,(%ebx)
  mov $0x0,%eax

    ret
         .size   cmpxchg_locked_mv_plain, .-cmpxchg_locked_mv_plain

    
.globl cmpxchg_locked_mv_allregs
         .type   cmpxchg_locked_mv_allregs, @function
cmpxchg_locked_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  lock cmpxchg %eax,(%ebx)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg_locked_mv_allregs, .-cmpxchg_locked_mv_allregs

    
.globl cmpxchg_locked_mv_constant_simple
         .type   cmpxchg_locked_mv_constant_simple, @function
cmpxchg_locked_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  lock cmpxchg %eax,(%ebx)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg_locked_mv_constant_simple, .-cmpxchg_locked_mv_constant_simple

    
.globl cmpxchg_locked_mv_constant_complex1
         .type   cmpxchg_locked_mv_constant_complex1, @function
cmpxchg_locked_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  lock cmpxchg %eax,(%ebx)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg_locked_mv_constant_complex1, .-cmpxchg_locked_mv_constant_complex1

    
.globl cmpxchg_locked_mv_constant_complex2
         .type   cmpxchg_locked_mv_constant_complex2, @function
cmpxchg_locked_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  lock cmpxchg %eax,(%ebx)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg_locked_mv_constant_complex2, .-cmpxchg_locked_mv_constant_complex2

    
.globl cpuid_plain
         .type   cpuid_plain, @function
cpuid_plain:
      cpuid
  mov $0x0,%eax

    ret
         .size   cpuid_plain, .-cpuid_plain

    
.globl cpuid_allregs
         .type   cpuid_allregs, @function
cpuid_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  cpuid
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cpuid_allregs, .-cpuid_allregs

    
.globl cpuid_constant_simple
         .type   cpuid_constant_simple, @function
cpuid_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  cpuid
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cpuid_constant_simple, .-cpuid_constant_simple

    
.globl cpuid_constant_complex1
         .type   cpuid_constant_complex1, @function
cpuid_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  cpuid
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cpuid_constant_complex1, .-cpuid_constant_complex1

    
.globl cpuid_constant_complex2
         .type   cpuid_constant_complex2, @function
cpuid_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  cpuid
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cpuid_constant_complex2, .-cpuid_constant_complex2

    
.globl invd_plain
         .type   invd_plain, @function
invd_plain:
      invd
  mov $0x0,%eax

    ret
         .size   invd_plain, .-invd_plain

    
.globl invd_allregs
         .type   invd_allregs, @function
invd_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  invd
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   invd_allregs, .-invd_allregs

    
.globl invd_constant_simple
         .type   invd_constant_simple, @function
invd_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  invd
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   invd_constant_simple, .-invd_constant_simple

    
.globl invd_constant_complex1
         .type   invd_constant_complex1, @function
invd_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  invd
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   invd_constant_complex1, .-invd_constant_complex1

    
.globl invd_constant_complex2
         .type   invd_constant_complex2, @function
invd_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  invd
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   invd_constant_complex2, .-invd_constant_complex2

    
.globl invlpg_plain
         .type   invlpg_plain, @function
invlpg_plain:
      invlpg (%eax)
  mov $0x0,%eax

    ret
         .size   invlpg_plain, .-invlpg_plain

    
.globl invlpg_allregs
         .type   invlpg_allregs, @function
invlpg_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  invlpg (%eax)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   invlpg_allregs, .-invlpg_allregs

    
.globl invlpg_constant_simple
         .type   invlpg_constant_simple, @function
invlpg_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  invlpg (%eax)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   invlpg_constant_simple, .-invlpg_constant_simple

    
.globl invlpg_constant_complex1
         .type   invlpg_constant_complex1, @function
invlpg_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  invlpg (%eax)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   invlpg_constant_complex1, .-invlpg_constant_complex1

    
.globl invlpg_constant_complex2
         .type   invlpg_constant_complex2, @function
invlpg_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  invlpg (%eax)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   invlpg_constant_complex2, .-invlpg_constant_complex2

    
.globl wbinvd_plain
         .type   wbinvd_plain, @function
wbinvd_plain:
      wbinvd
  mov $0x0,%eax

    ret
         .size   wbinvd_plain, .-wbinvd_plain

    
.globl wbinvd_allregs
         .type   wbinvd_allregs, @function
wbinvd_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  wbinvd
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   wbinvd_allregs, .-wbinvd_allregs

    
.globl wbinvd_constant_simple
         .type   wbinvd_constant_simple, @function
wbinvd_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  wbinvd
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   wbinvd_constant_simple, .-wbinvd_constant_simple

    
.globl wbinvd_constant_complex1
         .type   wbinvd_constant_complex1, @function
wbinvd_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  wbinvd
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   wbinvd_constant_complex1, .-wbinvd_constant_complex1

    
.globl wbinvd_constant_complex2
         .type   wbinvd_constant_complex2, @function
wbinvd_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  wbinvd
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   wbinvd_constant_complex2, .-wbinvd_constant_complex2

    
.globl xadd1_mv_plain
         .type   xadd1_mv_plain, @function
xadd1_mv_plain:
      xadd %al,%bl
  mov $0x0,%eax

    ret
         .size   xadd1_mv_plain, .-xadd1_mv_plain

    
.globl xadd1_mv_allregs
         .type   xadd1_mv_allregs, @function
xadd1_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  xadd %al,%bl
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd1_mv_allregs, .-xadd1_mv_allregs

    
.globl xadd1_mv_constant_simple
         .type   xadd1_mv_constant_simple, @function
xadd1_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  xadd %al,%bl
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd1_mv_constant_simple, .-xadd1_mv_constant_simple

    
.globl xadd1_mv_constant_complex1
         .type   xadd1_mv_constant_complex1, @function
xadd1_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  xadd %al,%bl
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd1_mv_constant_complex1, .-xadd1_mv_constant_complex1

    
.globl xadd1_mv_constant_complex2
         .type   xadd1_mv_constant_complex2, @function
xadd1_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  xadd %al,%bl
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd1_mv_constant_complex2, .-xadd1_mv_constant_complex2

    
.globl xadd2_mv_plain
         .type   xadd2_mv_plain, @function
xadd2_mv_plain:
      xadd %ax,%bx
  mov $0x0,%eax

    ret
         .size   xadd2_mv_plain, .-xadd2_mv_plain

    
.globl xadd2_mv_allregs
         .type   xadd2_mv_allregs, @function
xadd2_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  xadd %ax,%bx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd2_mv_allregs, .-xadd2_mv_allregs

    
.globl xadd2_mv_constant_simple
         .type   xadd2_mv_constant_simple, @function
xadd2_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  xadd %ax,%bx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd2_mv_constant_simple, .-xadd2_mv_constant_simple

    
.globl xadd2_mv_constant_complex1
         .type   xadd2_mv_constant_complex1, @function
xadd2_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  xadd %ax,%bx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd2_mv_constant_complex1, .-xadd2_mv_constant_complex1

    
.globl xadd2_mv_constant_complex2
         .type   xadd2_mv_constant_complex2, @function
xadd2_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  xadd %ax,%bx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd2_mv_constant_complex2, .-xadd2_mv_constant_complex2

    
.globl xadd3_plain
         .type   xadd3_plain, @function
xadd3_plain:
      xadd %eax,%ebx
  mov $0x0,%eax

    ret
         .size   xadd3_plain, .-xadd3_plain

    
.globl xadd3_allregs
         .type   xadd3_allregs, @function
xadd3_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  xadd %eax,%ebx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd3_allregs, .-xadd3_allregs

    
.globl xadd3_constant_simple
         .type   xadd3_constant_simple, @function
xadd3_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  xadd %eax,%ebx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd3_constant_simple, .-xadd3_constant_simple

    
.globl xadd3_constant_complex1
         .type   xadd3_constant_complex1, @function
xadd3_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  xadd %eax,%ebx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd3_constant_complex1, .-xadd3_constant_complex1

    
.globl xadd3_constant_complex2
         .type   xadd3_constant_complex2, @function
xadd3_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  xadd %eax,%ebx
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd3_constant_complex2, .-xadd3_constant_complex2

    
.globl xadd4_mv_plain
         .type   xadd4_mv_plain, @function
xadd4_mv_plain:
      xadd %eax,(%ebx)
  mov $0x0,%eax

    ret
         .size   xadd4_mv_plain, .-xadd4_mv_plain

    
.globl xadd4_mv_allregs
         .type   xadd4_mv_allregs, @function
xadd4_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  xadd %eax,(%ebx)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd4_mv_allregs, .-xadd4_mv_allregs

    
.globl xadd4_mv_constant_simple
         .type   xadd4_mv_constant_simple, @function
xadd4_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  xadd %eax,(%ebx)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd4_mv_constant_simple, .-xadd4_mv_constant_simple

    
.globl xadd4_mv_constant_complex1
         .type   xadd4_mv_constant_complex1, @function
xadd4_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  xadd %eax,(%ebx)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd4_mv_constant_complex1, .-xadd4_mv_constant_complex1

    
.globl xadd4_mv_constant_complex2
         .type   xadd4_mv_constant_complex2, @function
xadd4_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  xadd %eax,(%ebx)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd4_mv_constant_complex2, .-xadd4_mv_constant_complex2

    
.globl xadd5_mv_plain
         .type   xadd5_mv_plain, @function
xadd5_mv_plain:
      xadd %al,%al
  mov $0x0,%eax

    ret
         .size   xadd5_mv_plain, .-xadd5_mv_plain

    
.globl xadd5_mv_allregs
         .type   xadd5_mv_allregs, @function
xadd5_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  xadd %al,%al
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd5_mv_allregs, .-xadd5_mv_allregs

    
.globl xadd5_mv_constant_simple
         .type   xadd5_mv_constant_simple, @function
xadd5_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  xadd %al,%al
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd5_mv_constant_simple, .-xadd5_mv_constant_simple

    
.globl xadd5_mv_constant_complex1
         .type   xadd5_mv_constant_complex1, @function
xadd5_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  xadd %al,%al
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd5_mv_constant_complex1, .-xadd5_mv_constant_complex1

    
.globl xadd5_mv_constant_complex2
         .type   xadd5_mv_constant_complex2, @function
xadd5_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  xadd %al,%al
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd5_mv_constant_complex2, .-xadd5_mv_constant_complex2

    
.globl xadd_locked_mv_plain
         .type   xadd_locked_mv_plain, @function
xadd_locked_mv_plain:
      lock xadd %eax,(%ebx)
  mov $0x0,%eax

    ret
         .size   xadd_locked_mv_plain, .-xadd_locked_mv_plain

    
.globl xadd_locked_mv_allregs
         .type   xadd_locked_mv_allregs, @function
xadd_locked_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  lock xadd %eax,(%ebx)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd_locked_mv_allregs, .-xadd_locked_mv_allregs

    
.globl xadd_locked_mv_constant_simple
         .type   xadd_locked_mv_constant_simple, @function
xadd_locked_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  lock xadd %eax,(%ebx)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd_locked_mv_constant_simple, .-xadd_locked_mv_constant_simple

    
.globl xadd_locked_mv_constant_complex1
         .type   xadd_locked_mv_constant_complex1, @function
xadd_locked_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  lock xadd %eax,(%ebx)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd_locked_mv_constant_complex1, .-xadd_locked_mv_constant_complex1

    
.globl xadd_locked_mv_constant_complex2
         .type   xadd_locked_mv_constant_complex2, @function
xadd_locked_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  lock xadd %eax,(%ebx)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   xadd_locked_mv_constant_complex2, .-xadd_locked_mv_constant_complex2

    
.globl cmpxchg8b_plain
         .type   cmpxchg8b_plain, @function
cmpxchg8b_plain:
      cmpxchg8b (%eax)
  mov $0x0,%eax

    ret
         .size   cmpxchg8b_plain, .-cmpxchg8b_plain

    
.globl cmpxchg8b_allregs
         .type   cmpxchg8b_allregs, @function
cmpxchg8b_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  cmpxchg8b (%eax)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg8b_allregs, .-cmpxchg8b_allregs

    
.globl cmpxchg8b_constant_simple
         .type   cmpxchg8b_constant_simple, @function
cmpxchg8b_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  cmpxchg8b (%eax)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg8b_constant_simple, .-cmpxchg8b_constant_simple

    
.globl cmpxchg8b_constant_complex1
         .type   cmpxchg8b_constant_complex1, @function
cmpxchg8b_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  cmpxchg8b (%eax)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg8b_constant_complex1, .-cmpxchg8b_constant_complex1

    
.globl cmpxchg8b_constant_complex2
         .type   cmpxchg8b_constant_complex2, @function
cmpxchg8b_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  cmpxchg8b (%eax)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg8b_constant_complex2, .-cmpxchg8b_constant_complex2

    
.globl cmpxchg8b_locked_mv_plain
         .type   cmpxchg8b_locked_mv_plain, @function
cmpxchg8b_locked_mv_plain:
      lock cmpxchg8b (%eax)
  mov $0x0,%eax

    ret
         .size   cmpxchg8b_locked_mv_plain, .-cmpxchg8b_locked_mv_plain

    
.globl cmpxchg8b_locked_mv_allregs
         .type   cmpxchg8b_locked_mv_allregs, @function
cmpxchg8b_locked_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  lock cmpxchg8b (%eax)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg8b_locked_mv_allregs, .-cmpxchg8b_locked_mv_allregs

    
.globl cmpxchg8b_locked_mv_constant_simple
         .type   cmpxchg8b_locked_mv_constant_simple, @function
cmpxchg8b_locked_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  lock cmpxchg8b (%eax)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg8b_locked_mv_constant_simple, .-cmpxchg8b_locked_mv_constant_simple

    
.globl cmpxchg8b_locked_mv_constant_complex1
         .type   cmpxchg8b_locked_mv_constant_complex1, @function
cmpxchg8b_locked_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  lock cmpxchg8b (%eax)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg8b_locked_mv_constant_complex1, .-cmpxchg8b_locked_mv_constant_complex1

    
.globl cmpxchg8b_locked_mv_constant_complex2
         .type   cmpxchg8b_locked_mv_constant_complex2, @function
cmpxchg8b_locked_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  lock cmpxchg8b (%eax)
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmpxchg8b_locked_mv_constant_complex2, .-cmpxchg8b_locked_mv_constant_complex2

    
.globl rdtsc_plain
         .type   rdtsc_plain, @function
rdtsc_plain:
      rdtsc
  mov $0x0,%eax

    ret
         .size   rdtsc_plain, .-rdtsc_plain

    
.globl rdtsc_allregs
         .type   rdtsc_allregs, @function
rdtsc_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  rdtsc
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   rdtsc_allregs, .-rdtsc_allregs

    
.globl rdtsc_constant_simple
         .type   rdtsc_constant_simple, @function
rdtsc_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  rdtsc
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   rdtsc_constant_simple, .-rdtsc_constant_simple

    
.globl rdtsc_constant_complex1
         .type   rdtsc_constant_complex1, @function
rdtsc_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  rdtsc
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   rdtsc_constant_complex1, .-rdtsc_constant_complex1

    
.globl rdtsc_constant_complex2
         .type   rdtsc_constant_complex2, @function
rdtsc_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  rdtsc
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   rdtsc_constant_complex2, .-rdtsc_constant_complex2

    
.globl rdmsr_plain
         .type   rdmsr_plain, @function
rdmsr_plain:
      rdmsr
  mov $0x0,%eax

    ret
         .size   rdmsr_plain, .-rdmsr_plain

    
.globl rdmsr_allregs
         .type   rdmsr_allregs, @function
rdmsr_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  rdmsr
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   rdmsr_allregs, .-rdmsr_allregs

    
.globl rdmsr_constant_simple
         .type   rdmsr_constant_simple, @function
rdmsr_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  rdmsr
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   rdmsr_constant_simple, .-rdmsr_constant_simple

    
.globl rdmsr_constant_complex1
         .type   rdmsr_constant_complex1, @function
rdmsr_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  rdmsr
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   rdmsr_constant_complex1, .-rdmsr_constant_complex1

    
.globl rdmsr_constant_complex2
         .type   rdmsr_constant_complex2, @function
rdmsr_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  rdmsr
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   rdmsr_constant_complex2, .-rdmsr_constant_complex2

    
.globl wrmsr_plain
         .type   wrmsr_plain, @function
wrmsr_plain:
      wrmsr
  mov $0x0,%eax

    ret
         .size   wrmsr_plain, .-wrmsr_plain

    
.globl wrmsr_allregs
         .type   wrmsr_allregs, @function
wrmsr_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  wrmsr
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   wrmsr_allregs, .-wrmsr_allregs

    
.globl wrmsr_constant_simple
         .type   wrmsr_constant_simple, @function
wrmsr_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  wrmsr
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   wrmsr_constant_simple, .-wrmsr_constant_simple

    
.globl wrmsr_constant_complex1
         .type   wrmsr_constant_complex1, @function
wrmsr_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  wrmsr
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   wrmsr_constant_complex1, .-wrmsr_constant_complex1

    
.globl wrmsr_constant_complex2
         .type   wrmsr_constant_complex2, @function
wrmsr_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  wrmsr
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   wrmsr_constant_complex2, .-wrmsr_constant_complex2

    
.globl cmov1_plain
         .type   cmov1_plain, @function
cmov1_plain:
      cmova %bx,%ax
  mov $0x0,%eax

    ret
         .size   cmov1_plain, .-cmov1_plain

    
.globl cmov1_allregs
         .type   cmov1_allregs, @function
cmov1_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  cmova %bx,%ax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov1_allregs, .-cmov1_allregs

    
.globl cmov1_constant_simple
         .type   cmov1_constant_simple, @function
cmov1_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  cmova %bx,%ax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov1_constant_simple, .-cmov1_constant_simple

    
.globl cmov1_constant_complex1
         .type   cmov1_constant_complex1, @function
cmov1_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  cmova %bx,%ax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov1_constant_complex1, .-cmov1_constant_complex1

    
.globl cmov1_constant_complex2
         .type   cmov1_constant_complex2, @function
cmov1_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  cmova %bx,%ax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov1_constant_complex2, .-cmov1_constant_complex2

    
.globl cmov2_mv_plain
         .type   cmov2_mv_plain, @function
cmov2_mv_plain:
      cmova %ebx,%ax
  mov $0x0,%eax

    ret
         .size   cmov2_mv_plain, .-cmov2_mv_plain

    
.globl cmov2_mv_allregs
         .type   cmov2_mv_allregs, @function
cmov2_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  cmova %ebx,%ax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov2_mv_allregs, .-cmov2_mv_allregs

    
.globl cmov2_mv_constant_simple
         .type   cmov2_mv_constant_simple, @function
cmov2_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  cmova %ebx,%ax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov2_mv_constant_simple, .-cmov2_mv_constant_simple

    
.globl cmov2_mv_constant_complex1
         .type   cmov2_mv_constant_complex1, @function
cmov2_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  cmova %ebx,%ax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov2_mv_constant_complex1, .-cmov2_mv_constant_complex1

    
.globl cmov2_mv_constant_complex2
         .type   cmov2_mv_constant_complex2, @function
cmov2_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  cmova %ebx,%ax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov2_mv_constant_complex2, .-cmov2_mv_constant_complex2

    
.globl cmov3_mv_plain
         .type   cmov3_mv_plain, @function
cmov3_mv_plain:
      cmova 12(%ebx),%ax
  mov $0x0,%eax

    ret
         .size   cmov3_mv_plain, .-cmov3_mv_plain

    
.globl cmov3_mv_allregs
         .type   cmov3_mv_allregs, @function
cmov3_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  cmova 12(%ebx),%ax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov3_mv_allregs, .-cmov3_mv_allregs

    
.globl cmov3_mv_constant_simple
         .type   cmov3_mv_constant_simple, @function
cmov3_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  cmova 12(%ebx),%ax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov3_mv_constant_simple, .-cmov3_mv_constant_simple

    
.globl cmov3_mv_constant_complex1
         .type   cmov3_mv_constant_complex1, @function
cmov3_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  cmova 12(%ebx),%ax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov3_mv_constant_complex1, .-cmov3_mv_constant_complex1

    
.globl cmov3_mv_constant_complex2
         .type   cmov3_mv_constant_complex2, @function
cmov3_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  cmova 12(%ebx),%ax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov3_mv_constant_complex2, .-cmov3_mv_constant_complex2

    
.globl cmov4_mv_plain
         .type   cmov4_mv_plain, @function
cmov4_mv_plain:
      cmova 34(%ebx),%eax
  mov $0x0,%eax

    ret
         .size   cmov4_mv_plain, .-cmov4_mv_plain

    
.globl cmov4_mv_allregs
         .type   cmov4_mv_allregs, @function
cmov4_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  cmova 34(%ebx),%eax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov4_mv_allregs, .-cmov4_mv_allregs

    
.globl cmov4_mv_constant_simple
         .type   cmov4_mv_constant_simple, @function
cmov4_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  cmova 34(%ebx),%eax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov4_mv_constant_simple, .-cmov4_mv_constant_simple

    
.globl cmov4_mv_constant_complex1
         .type   cmov4_mv_constant_complex1, @function
cmov4_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  cmova 34(%ebx),%eax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov4_mv_constant_complex1, .-cmov4_mv_constant_complex1

    
.globl cmov4_mv_constant_complex2
         .type   cmov4_mv_constant_complex2, @function
cmov4_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  cmova 34(%ebx),%eax
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov4_mv_constant_complex2, .-cmov4_mv_constant_complex2

    
.globl cmov_w_with_code_0_plain
         .type   cmov_w_with_code_0_plain, @function
cmov_w_with_code_0_plain:
      .byte 0x3c,0x02,0x66,0x0f,0x40,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_0_plain, .-cmov_w_with_code_0_plain

    
.globl cmov_w_with_code_0_allregs
         .type   cmov_w_with_code_0_allregs, @function
cmov_w_with_code_0_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x40,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_0_allregs, .-cmov_w_with_code_0_allregs

    
.globl cmov_w_with_code_0_constant_simple
         .type   cmov_w_with_code_0_constant_simple, @function
cmov_w_with_code_0_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x40,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_0_constant_simple, .-cmov_w_with_code_0_constant_simple

    
.globl cmov_w_with_code_0_constant_complex1
         .type   cmov_w_with_code_0_constant_complex1, @function
cmov_w_with_code_0_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x40,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_0_constant_complex1, .-cmov_w_with_code_0_constant_complex1

    
.globl cmov_w_with_code_0_constant_complex2
         .type   cmov_w_with_code_0_constant_complex2, @function
cmov_w_with_code_0_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x40,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_0_constant_complex2, .-cmov_w_with_code_0_constant_complex2

    
.globl cmov_w_with_code_1_mv_plain
         .type   cmov_w_with_code_1_mv_plain, @function
cmov_w_with_code_1_mv_plain:
      .byte 0x3c,0x02,0x66,0x0f,0x41,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_1_mv_plain, .-cmov_w_with_code_1_mv_plain

    
.globl cmov_w_with_code_1_mv_allregs
         .type   cmov_w_with_code_1_mv_allregs, @function
cmov_w_with_code_1_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x41,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_1_mv_allregs, .-cmov_w_with_code_1_mv_allregs

    
.globl cmov_w_with_code_1_mv_constant_simple
         .type   cmov_w_with_code_1_mv_constant_simple, @function
cmov_w_with_code_1_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x41,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_1_mv_constant_simple, .-cmov_w_with_code_1_mv_constant_simple

    
.globl cmov_w_with_code_1_mv_constant_complex1
         .type   cmov_w_with_code_1_mv_constant_complex1, @function
cmov_w_with_code_1_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x41,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_1_mv_constant_complex1, .-cmov_w_with_code_1_mv_constant_complex1

    
.globl cmov_w_with_code_1_mv_constant_complex2
         .type   cmov_w_with_code_1_mv_constant_complex2, @function
cmov_w_with_code_1_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x41,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_1_mv_constant_complex2, .-cmov_w_with_code_1_mv_constant_complex2

    
.globl cmov_w_with_code_2_mv_plain
         .type   cmov_w_with_code_2_mv_plain, @function
cmov_w_with_code_2_mv_plain:
      .byte 0x3c,0x02,0x66,0x0f,0x42,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_2_mv_plain, .-cmov_w_with_code_2_mv_plain

    
.globl cmov_w_with_code_2_mv_allregs
         .type   cmov_w_with_code_2_mv_allregs, @function
cmov_w_with_code_2_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x42,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_2_mv_allregs, .-cmov_w_with_code_2_mv_allregs

    
.globl cmov_w_with_code_2_mv_constant_simple
         .type   cmov_w_with_code_2_mv_constant_simple, @function
cmov_w_with_code_2_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x42,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_2_mv_constant_simple, .-cmov_w_with_code_2_mv_constant_simple

    
.globl cmov_w_with_code_2_mv_constant_complex1
         .type   cmov_w_with_code_2_mv_constant_complex1, @function
cmov_w_with_code_2_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x42,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_2_mv_constant_complex1, .-cmov_w_with_code_2_mv_constant_complex1

    
.globl cmov_w_with_code_2_mv_constant_complex2
         .type   cmov_w_with_code_2_mv_constant_complex2, @function
cmov_w_with_code_2_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x42,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_2_mv_constant_complex2, .-cmov_w_with_code_2_mv_constant_complex2

    
.globl cmov_w_with_code_3_mv_plain
         .type   cmov_w_with_code_3_mv_plain, @function
cmov_w_with_code_3_mv_plain:
      .byte 0x3c,0x02,0x66,0x0f,0x43,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_3_mv_plain, .-cmov_w_with_code_3_mv_plain

    
.globl cmov_w_with_code_3_mv_allregs
         .type   cmov_w_with_code_3_mv_allregs, @function
cmov_w_with_code_3_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x43,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_3_mv_allregs, .-cmov_w_with_code_3_mv_allregs

    
.globl cmov_w_with_code_3_mv_constant_simple
         .type   cmov_w_with_code_3_mv_constant_simple, @function
cmov_w_with_code_3_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x43,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_3_mv_constant_simple, .-cmov_w_with_code_3_mv_constant_simple

    
.globl cmov_w_with_code_3_mv_constant_complex1
         .type   cmov_w_with_code_3_mv_constant_complex1, @function
cmov_w_with_code_3_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x43,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_3_mv_constant_complex1, .-cmov_w_with_code_3_mv_constant_complex1

    
.globl cmov_w_with_code_3_mv_constant_complex2
         .type   cmov_w_with_code_3_mv_constant_complex2, @function
cmov_w_with_code_3_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x43,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_3_mv_constant_complex2, .-cmov_w_with_code_3_mv_constant_complex2

    
.globl cmov_w_with_code_4_mv_plain
         .type   cmov_w_with_code_4_mv_plain, @function
cmov_w_with_code_4_mv_plain:
      .byte 0x3c,0x02,0x66,0x0f,0x44,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_4_mv_plain, .-cmov_w_with_code_4_mv_plain

    
.globl cmov_w_with_code_4_mv_allregs
         .type   cmov_w_with_code_4_mv_allregs, @function
cmov_w_with_code_4_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x44,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_4_mv_allregs, .-cmov_w_with_code_4_mv_allregs

    
.globl cmov_w_with_code_4_mv_constant_simple
         .type   cmov_w_with_code_4_mv_constant_simple, @function
cmov_w_with_code_4_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x44,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_4_mv_constant_simple, .-cmov_w_with_code_4_mv_constant_simple

    
.globl cmov_w_with_code_4_mv_constant_complex1
         .type   cmov_w_with_code_4_mv_constant_complex1, @function
cmov_w_with_code_4_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x44,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_4_mv_constant_complex1, .-cmov_w_with_code_4_mv_constant_complex1

    
.globl cmov_w_with_code_4_mv_constant_complex2
         .type   cmov_w_with_code_4_mv_constant_complex2, @function
cmov_w_with_code_4_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x44,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_4_mv_constant_complex2, .-cmov_w_with_code_4_mv_constant_complex2

    
.globl cmov_w_with_code_5_mv_plain
         .type   cmov_w_with_code_5_mv_plain, @function
cmov_w_with_code_5_mv_plain:
      .byte 0x3c,0x02,0x66,0x0f,0x45,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_5_mv_plain, .-cmov_w_with_code_5_mv_plain

    
.globl cmov_w_with_code_5_mv_allregs
         .type   cmov_w_with_code_5_mv_allregs, @function
cmov_w_with_code_5_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x45,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_5_mv_allregs, .-cmov_w_with_code_5_mv_allregs

    
.globl cmov_w_with_code_5_mv_constant_simple
         .type   cmov_w_with_code_5_mv_constant_simple, @function
cmov_w_with_code_5_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x45,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_5_mv_constant_simple, .-cmov_w_with_code_5_mv_constant_simple

    
.globl cmov_w_with_code_5_mv_constant_complex1
         .type   cmov_w_with_code_5_mv_constant_complex1, @function
cmov_w_with_code_5_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x45,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_5_mv_constant_complex1, .-cmov_w_with_code_5_mv_constant_complex1

    
.globl cmov_w_with_code_5_mv_constant_complex2
         .type   cmov_w_with_code_5_mv_constant_complex2, @function
cmov_w_with_code_5_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x45,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_5_mv_constant_complex2, .-cmov_w_with_code_5_mv_constant_complex2

    
.globl cmov_w_with_code_6_mv_plain
         .type   cmov_w_with_code_6_mv_plain, @function
cmov_w_with_code_6_mv_plain:
      .byte 0x3c,0x02,0x66,0x0f,0x46,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_6_mv_plain, .-cmov_w_with_code_6_mv_plain

    
.globl cmov_w_with_code_6_mv_allregs
         .type   cmov_w_with_code_6_mv_allregs, @function
cmov_w_with_code_6_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x46,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_6_mv_allregs, .-cmov_w_with_code_6_mv_allregs

    
.globl cmov_w_with_code_6_mv_constant_simple
         .type   cmov_w_with_code_6_mv_constant_simple, @function
cmov_w_with_code_6_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x46,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_6_mv_constant_simple, .-cmov_w_with_code_6_mv_constant_simple

    
.globl cmov_w_with_code_6_mv_constant_complex1
         .type   cmov_w_with_code_6_mv_constant_complex1, @function
cmov_w_with_code_6_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x46,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_6_mv_constant_complex1, .-cmov_w_with_code_6_mv_constant_complex1

    
.globl cmov_w_with_code_6_mv_constant_complex2
         .type   cmov_w_with_code_6_mv_constant_complex2, @function
cmov_w_with_code_6_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x46,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_6_mv_constant_complex2, .-cmov_w_with_code_6_mv_constant_complex2

    
.globl cmov_w_with_code_7_mv_plain
         .type   cmov_w_with_code_7_mv_plain, @function
cmov_w_with_code_7_mv_plain:
      .byte 0x3c,0x02,0x66,0x0f,0x47,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_7_mv_plain, .-cmov_w_with_code_7_mv_plain

    
.globl cmov_w_with_code_7_mv_allregs
         .type   cmov_w_with_code_7_mv_allregs, @function
cmov_w_with_code_7_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x47,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_7_mv_allregs, .-cmov_w_with_code_7_mv_allregs

    
.globl cmov_w_with_code_7_mv_constant_simple
         .type   cmov_w_with_code_7_mv_constant_simple, @function
cmov_w_with_code_7_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x47,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_7_mv_constant_simple, .-cmov_w_with_code_7_mv_constant_simple

    
.globl cmov_w_with_code_7_mv_constant_complex1
         .type   cmov_w_with_code_7_mv_constant_complex1, @function
cmov_w_with_code_7_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x47,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_7_mv_constant_complex1, .-cmov_w_with_code_7_mv_constant_complex1

    
.globl cmov_w_with_code_7_mv_constant_complex2
         .type   cmov_w_with_code_7_mv_constant_complex2, @function
cmov_w_with_code_7_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x47,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_7_mv_constant_complex2, .-cmov_w_with_code_7_mv_constant_complex2

    
.globl cmov_w_with_code_8_mv_plain
         .type   cmov_w_with_code_8_mv_plain, @function
cmov_w_with_code_8_mv_plain:
      .byte 0x3c,0x02,0x66,0x0f,0x48,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_8_mv_plain, .-cmov_w_with_code_8_mv_plain

    
.globl cmov_w_with_code_8_mv_allregs
         .type   cmov_w_with_code_8_mv_allregs, @function
cmov_w_with_code_8_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x48,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_8_mv_allregs, .-cmov_w_with_code_8_mv_allregs

    
.globl cmov_w_with_code_8_mv_constant_simple
         .type   cmov_w_with_code_8_mv_constant_simple, @function
cmov_w_with_code_8_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x48,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_8_mv_constant_simple, .-cmov_w_with_code_8_mv_constant_simple

    
.globl cmov_w_with_code_8_mv_constant_complex1
         .type   cmov_w_with_code_8_mv_constant_complex1, @function
cmov_w_with_code_8_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x48,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_8_mv_constant_complex1, .-cmov_w_with_code_8_mv_constant_complex1

    
.globl cmov_w_with_code_8_mv_constant_complex2
         .type   cmov_w_with_code_8_mv_constant_complex2, @function
cmov_w_with_code_8_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x48,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_8_mv_constant_complex2, .-cmov_w_with_code_8_mv_constant_complex2

    
.globl cmov_w_with_code_9_mv_plain
         .type   cmov_w_with_code_9_mv_plain, @function
cmov_w_with_code_9_mv_plain:
      .byte 0x3c,0x02,0x66,0x0f,0x49,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_9_mv_plain, .-cmov_w_with_code_9_mv_plain

    
.globl cmov_w_with_code_9_mv_allregs
         .type   cmov_w_with_code_9_mv_allregs, @function
cmov_w_with_code_9_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x49,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_9_mv_allregs, .-cmov_w_with_code_9_mv_allregs

    
.globl cmov_w_with_code_9_mv_constant_simple
         .type   cmov_w_with_code_9_mv_constant_simple, @function
cmov_w_with_code_9_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x49,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_9_mv_constant_simple, .-cmov_w_with_code_9_mv_constant_simple

    
.globl cmov_w_with_code_9_mv_constant_complex1
         .type   cmov_w_with_code_9_mv_constant_complex1, @function
cmov_w_with_code_9_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x49,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_9_mv_constant_complex1, .-cmov_w_with_code_9_mv_constant_complex1

    
.globl cmov_w_with_code_9_mv_constant_complex2
         .type   cmov_w_with_code_9_mv_constant_complex2, @function
cmov_w_with_code_9_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x49,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_9_mv_constant_complex2, .-cmov_w_with_code_9_mv_constant_complex2

    
.globl cmov_w_with_code_a_mv_plain
         .type   cmov_w_with_code_a_mv_plain, @function
cmov_w_with_code_a_mv_plain:
      .byte 0x3c,0x02,0x66,0x0f,0x4a,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_a_mv_plain, .-cmov_w_with_code_a_mv_plain

    
.globl cmov_w_with_code_a_mv_allregs
         .type   cmov_w_with_code_a_mv_allregs, @function
cmov_w_with_code_a_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4a,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_a_mv_allregs, .-cmov_w_with_code_a_mv_allregs

    
.globl cmov_w_with_code_a_mv_constant_simple
         .type   cmov_w_with_code_a_mv_constant_simple, @function
cmov_w_with_code_a_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4a,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_a_mv_constant_simple, .-cmov_w_with_code_a_mv_constant_simple

    
.globl cmov_w_with_code_a_mv_constant_complex1
         .type   cmov_w_with_code_a_mv_constant_complex1, @function
cmov_w_with_code_a_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4a,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_a_mv_constant_complex1, .-cmov_w_with_code_a_mv_constant_complex1

    
.globl cmov_w_with_code_a_mv_constant_complex2
         .type   cmov_w_with_code_a_mv_constant_complex2, @function
cmov_w_with_code_a_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4a,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_a_mv_constant_complex2, .-cmov_w_with_code_a_mv_constant_complex2

    
.globl cmov_w_with_code_b_mv_plain
         .type   cmov_w_with_code_b_mv_plain, @function
cmov_w_with_code_b_mv_plain:
      .byte 0x3c,0x02,0x66,0x0f,0x4b,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_b_mv_plain, .-cmov_w_with_code_b_mv_plain

    
.globl cmov_w_with_code_b_mv_allregs
         .type   cmov_w_with_code_b_mv_allregs, @function
cmov_w_with_code_b_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4b,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_b_mv_allregs, .-cmov_w_with_code_b_mv_allregs

    
.globl cmov_w_with_code_b_mv_constant_simple
         .type   cmov_w_with_code_b_mv_constant_simple, @function
cmov_w_with_code_b_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4b,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_b_mv_constant_simple, .-cmov_w_with_code_b_mv_constant_simple

    
.globl cmov_w_with_code_b_mv_constant_complex1
         .type   cmov_w_with_code_b_mv_constant_complex1, @function
cmov_w_with_code_b_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4b,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_b_mv_constant_complex1, .-cmov_w_with_code_b_mv_constant_complex1

    
.globl cmov_w_with_code_b_mv_constant_complex2
         .type   cmov_w_with_code_b_mv_constant_complex2, @function
cmov_w_with_code_b_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4b,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_b_mv_constant_complex2, .-cmov_w_with_code_b_mv_constant_complex2

    
.globl cmov_w_with_code_c_mv_plain
         .type   cmov_w_with_code_c_mv_plain, @function
cmov_w_with_code_c_mv_plain:
      .byte 0x3c,0x02,0x66,0x0f,0x4c,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_c_mv_plain, .-cmov_w_with_code_c_mv_plain

    
.globl cmov_w_with_code_c_mv_allregs
         .type   cmov_w_with_code_c_mv_allregs, @function
cmov_w_with_code_c_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4c,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_c_mv_allregs, .-cmov_w_with_code_c_mv_allregs

    
.globl cmov_w_with_code_c_mv_constant_simple
         .type   cmov_w_with_code_c_mv_constant_simple, @function
cmov_w_with_code_c_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4c,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_c_mv_constant_simple, .-cmov_w_with_code_c_mv_constant_simple

    
.globl cmov_w_with_code_c_mv_constant_complex1
         .type   cmov_w_with_code_c_mv_constant_complex1, @function
cmov_w_with_code_c_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4c,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_c_mv_constant_complex1, .-cmov_w_with_code_c_mv_constant_complex1

    
.globl cmov_w_with_code_c_mv_constant_complex2
         .type   cmov_w_with_code_c_mv_constant_complex2, @function
cmov_w_with_code_c_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4c,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_c_mv_constant_complex2, .-cmov_w_with_code_c_mv_constant_complex2

    
.globl cmov_w_with_code_d_mv_plain
         .type   cmov_w_with_code_d_mv_plain, @function
cmov_w_with_code_d_mv_plain:
      .byte 0x3c,0x02,0x66,0x0f,0x4d,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_d_mv_plain, .-cmov_w_with_code_d_mv_plain

    
.globl cmov_w_with_code_d_mv_allregs
         .type   cmov_w_with_code_d_mv_allregs, @function
cmov_w_with_code_d_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4d,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_d_mv_allregs, .-cmov_w_with_code_d_mv_allregs

    
.globl cmov_w_with_code_d_mv_constant_simple
         .type   cmov_w_with_code_d_mv_constant_simple, @function
cmov_w_with_code_d_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4d,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_d_mv_constant_simple, .-cmov_w_with_code_d_mv_constant_simple

    
.globl cmov_w_with_code_d_mv_constant_complex1
         .type   cmov_w_with_code_d_mv_constant_complex1, @function
cmov_w_with_code_d_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4d,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_d_mv_constant_complex1, .-cmov_w_with_code_d_mv_constant_complex1

    
.globl cmov_w_with_code_d_mv_constant_complex2
         .type   cmov_w_with_code_d_mv_constant_complex2, @function
cmov_w_with_code_d_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4d,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_d_mv_constant_complex2, .-cmov_w_with_code_d_mv_constant_complex2

    
.globl cmov_w_with_code_e_mv_plain
         .type   cmov_w_with_code_e_mv_plain, @function
cmov_w_with_code_e_mv_plain:
      .byte 0x3c,0x02,0x66,0x0f,0x4e,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_e_mv_plain, .-cmov_w_with_code_e_mv_plain

    
.globl cmov_w_with_code_e_mv_allregs
         .type   cmov_w_with_code_e_mv_allregs, @function
cmov_w_with_code_e_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4e,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_e_mv_allregs, .-cmov_w_with_code_e_mv_allregs

    
.globl cmov_w_with_code_e_mv_constant_simple
         .type   cmov_w_with_code_e_mv_constant_simple, @function
cmov_w_with_code_e_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4e,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_e_mv_constant_simple, .-cmov_w_with_code_e_mv_constant_simple

    
.globl cmov_w_with_code_e_mv_constant_complex1
         .type   cmov_w_with_code_e_mv_constant_complex1, @function
cmov_w_with_code_e_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4e,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_e_mv_constant_complex1, .-cmov_w_with_code_e_mv_constant_complex1

    
.globl cmov_w_with_code_e_mv_constant_complex2
         .type   cmov_w_with_code_e_mv_constant_complex2, @function
cmov_w_with_code_e_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4e,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_e_mv_constant_complex2, .-cmov_w_with_code_e_mv_constant_complex2

    
.globl cmov_w_with_code_f_mv_plain
         .type   cmov_w_with_code_f_mv_plain, @function
cmov_w_with_code_f_mv_plain:
      .byte 0x3c,0x02,0x66,0x0f,0x4f,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_f_mv_plain, .-cmov_w_with_code_f_mv_plain

    
.globl cmov_w_with_code_f_mv_allregs
         .type   cmov_w_with_code_f_mv_allregs, @function
cmov_w_with_code_f_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4f,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_f_mv_allregs, .-cmov_w_with_code_f_mv_allregs

    
.globl cmov_w_with_code_f_mv_constant_simple
         .type   cmov_w_with_code_f_mv_constant_simple, @function
cmov_w_with_code_f_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4f,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_f_mv_constant_simple, .-cmov_w_with_code_f_mv_constant_simple

    
.globl cmov_w_with_code_f_mv_constant_complex1
         .type   cmov_w_with_code_f_mv_constant_complex1, @function
cmov_w_with_code_f_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4f,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_f_mv_constant_complex1, .-cmov_w_with_code_f_mv_constant_complex1

    
.globl cmov_w_with_code_f_mv_constant_complex2
         .type   cmov_w_with_code_f_mv_constant_complex2, @function
cmov_w_with_code_f_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x66,0x0f,0x4f,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_w_with_code_f_mv_constant_complex2, .-cmov_w_with_code_f_mv_constant_complex2

    
.globl cmov_l_with_code_0_plain
         .type   cmov_l_with_code_0_plain, @function
cmov_l_with_code_0_plain:
      .byte 0x3c,0x02,0x0f,0x40,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_0_plain, .-cmov_l_with_code_0_plain

    
.globl cmov_l_with_code_0_allregs
         .type   cmov_l_with_code_0_allregs, @function
cmov_l_with_code_0_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x40,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_0_allregs, .-cmov_l_with_code_0_allregs

    
.globl cmov_l_with_code_0_constant_simple
         .type   cmov_l_with_code_0_constant_simple, @function
cmov_l_with_code_0_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x40,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_0_constant_simple, .-cmov_l_with_code_0_constant_simple

    
.globl cmov_l_with_code_0_constant_complex1
         .type   cmov_l_with_code_0_constant_complex1, @function
cmov_l_with_code_0_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x40,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_0_constant_complex1, .-cmov_l_with_code_0_constant_complex1

    
.globl cmov_l_with_code_0_constant_complex2
         .type   cmov_l_with_code_0_constant_complex2, @function
cmov_l_with_code_0_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x40,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_0_constant_complex2, .-cmov_l_with_code_0_constant_complex2

    
.globl cmov_l_with_code_1_mv_plain
         .type   cmov_l_with_code_1_mv_plain, @function
cmov_l_with_code_1_mv_plain:
      .byte 0x3c,0x02,0x0f,0x41,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_1_mv_plain, .-cmov_l_with_code_1_mv_plain

    
.globl cmov_l_with_code_1_mv_allregs
         .type   cmov_l_with_code_1_mv_allregs, @function
cmov_l_with_code_1_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x41,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_1_mv_allregs, .-cmov_l_with_code_1_mv_allregs

    
.globl cmov_l_with_code_1_mv_constant_simple
         .type   cmov_l_with_code_1_mv_constant_simple, @function
cmov_l_with_code_1_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x41,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_1_mv_constant_simple, .-cmov_l_with_code_1_mv_constant_simple

    
.globl cmov_l_with_code_1_mv_constant_complex1
         .type   cmov_l_with_code_1_mv_constant_complex1, @function
cmov_l_with_code_1_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x41,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_1_mv_constant_complex1, .-cmov_l_with_code_1_mv_constant_complex1

    
.globl cmov_l_with_code_1_mv_constant_complex2
         .type   cmov_l_with_code_1_mv_constant_complex2, @function
cmov_l_with_code_1_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x41,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_1_mv_constant_complex2, .-cmov_l_with_code_1_mv_constant_complex2

    
.globl cmov_l_with_code_2_mv_plain
         .type   cmov_l_with_code_2_mv_plain, @function
cmov_l_with_code_2_mv_plain:
      .byte 0x3c,0x02,0x0f,0x42,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_2_mv_plain, .-cmov_l_with_code_2_mv_plain

    
.globl cmov_l_with_code_2_mv_allregs
         .type   cmov_l_with_code_2_mv_allregs, @function
cmov_l_with_code_2_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x42,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_2_mv_allregs, .-cmov_l_with_code_2_mv_allregs

    
.globl cmov_l_with_code_2_mv_constant_simple
         .type   cmov_l_with_code_2_mv_constant_simple, @function
cmov_l_with_code_2_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x42,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_2_mv_constant_simple, .-cmov_l_with_code_2_mv_constant_simple

    
.globl cmov_l_with_code_2_mv_constant_complex1
         .type   cmov_l_with_code_2_mv_constant_complex1, @function
cmov_l_with_code_2_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x42,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_2_mv_constant_complex1, .-cmov_l_with_code_2_mv_constant_complex1

    
.globl cmov_l_with_code_2_mv_constant_complex2
         .type   cmov_l_with_code_2_mv_constant_complex2, @function
cmov_l_with_code_2_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x42,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_2_mv_constant_complex2, .-cmov_l_with_code_2_mv_constant_complex2

    
.globl cmov_l_with_code_3_mv_plain
         .type   cmov_l_with_code_3_mv_plain, @function
cmov_l_with_code_3_mv_plain:
      .byte 0x3c,0x02,0x0f,0x43,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_3_mv_plain, .-cmov_l_with_code_3_mv_plain

    
.globl cmov_l_with_code_3_mv_allregs
         .type   cmov_l_with_code_3_mv_allregs, @function
cmov_l_with_code_3_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x43,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_3_mv_allregs, .-cmov_l_with_code_3_mv_allregs

    
.globl cmov_l_with_code_3_mv_constant_simple
         .type   cmov_l_with_code_3_mv_constant_simple, @function
cmov_l_with_code_3_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x43,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_3_mv_constant_simple, .-cmov_l_with_code_3_mv_constant_simple

    
.globl cmov_l_with_code_3_mv_constant_complex1
         .type   cmov_l_with_code_3_mv_constant_complex1, @function
cmov_l_with_code_3_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x43,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_3_mv_constant_complex1, .-cmov_l_with_code_3_mv_constant_complex1

    
.globl cmov_l_with_code_3_mv_constant_complex2
         .type   cmov_l_with_code_3_mv_constant_complex2, @function
cmov_l_with_code_3_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x43,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_3_mv_constant_complex2, .-cmov_l_with_code_3_mv_constant_complex2

    
.globl cmov_l_with_code_4_mv_plain
         .type   cmov_l_with_code_4_mv_plain, @function
cmov_l_with_code_4_mv_plain:
      .byte 0x3c,0x02,0x0f,0x44,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_4_mv_plain, .-cmov_l_with_code_4_mv_plain

    
.globl cmov_l_with_code_4_mv_allregs
         .type   cmov_l_with_code_4_mv_allregs, @function
cmov_l_with_code_4_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x44,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_4_mv_allregs, .-cmov_l_with_code_4_mv_allregs

    
.globl cmov_l_with_code_4_mv_constant_simple
         .type   cmov_l_with_code_4_mv_constant_simple, @function
cmov_l_with_code_4_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x44,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_4_mv_constant_simple, .-cmov_l_with_code_4_mv_constant_simple

    
.globl cmov_l_with_code_4_mv_constant_complex1
         .type   cmov_l_with_code_4_mv_constant_complex1, @function
cmov_l_with_code_4_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x44,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_4_mv_constant_complex1, .-cmov_l_with_code_4_mv_constant_complex1

    
.globl cmov_l_with_code_4_mv_constant_complex2
         .type   cmov_l_with_code_4_mv_constant_complex2, @function
cmov_l_with_code_4_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x44,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_4_mv_constant_complex2, .-cmov_l_with_code_4_mv_constant_complex2

    
.globl cmov_l_with_code_5_mv_plain
         .type   cmov_l_with_code_5_mv_plain, @function
cmov_l_with_code_5_mv_plain:
      .byte 0x3c,0x02,0x0f,0x45,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_5_mv_plain, .-cmov_l_with_code_5_mv_plain

    
.globl cmov_l_with_code_5_mv_allregs
         .type   cmov_l_with_code_5_mv_allregs, @function
cmov_l_with_code_5_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x45,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_5_mv_allregs, .-cmov_l_with_code_5_mv_allregs

    
.globl cmov_l_with_code_5_mv_constant_simple
         .type   cmov_l_with_code_5_mv_constant_simple, @function
cmov_l_with_code_5_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x45,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_5_mv_constant_simple, .-cmov_l_with_code_5_mv_constant_simple

    
.globl cmov_l_with_code_5_mv_constant_complex1
         .type   cmov_l_with_code_5_mv_constant_complex1, @function
cmov_l_with_code_5_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x45,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_5_mv_constant_complex1, .-cmov_l_with_code_5_mv_constant_complex1

    
.globl cmov_l_with_code_5_mv_constant_complex2
         .type   cmov_l_with_code_5_mv_constant_complex2, @function
cmov_l_with_code_5_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x45,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_5_mv_constant_complex2, .-cmov_l_with_code_5_mv_constant_complex2

    
.globl cmov_l_with_code_6_mv_plain
         .type   cmov_l_with_code_6_mv_plain, @function
cmov_l_with_code_6_mv_plain:
      .byte 0x3c,0x02,0x0f,0x46,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_6_mv_plain, .-cmov_l_with_code_6_mv_plain

    
.globl cmov_l_with_code_6_mv_allregs
         .type   cmov_l_with_code_6_mv_allregs, @function
cmov_l_with_code_6_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x46,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_6_mv_allregs, .-cmov_l_with_code_6_mv_allregs

    
.globl cmov_l_with_code_6_mv_constant_simple
         .type   cmov_l_with_code_6_mv_constant_simple, @function
cmov_l_with_code_6_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x46,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_6_mv_constant_simple, .-cmov_l_with_code_6_mv_constant_simple

    
.globl cmov_l_with_code_6_mv_constant_complex1
         .type   cmov_l_with_code_6_mv_constant_complex1, @function
cmov_l_with_code_6_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x46,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_6_mv_constant_complex1, .-cmov_l_with_code_6_mv_constant_complex1

    
.globl cmov_l_with_code_6_mv_constant_complex2
         .type   cmov_l_with_code_6_mv_constant_complex2, @function
cmov_l_with_code_6_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x46,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_6_mv_constant_complex2, .-cmov_l_with_code_6_mv_constant_complex2

    
.globl cmov_l_with_code_7_mv_plain
         .type   cmov_l_with_code_7_mv_plain, @function
cmov_l_with_code_7_mv_plain:
      .byte 0x3c,0x02,0x0f,0x47,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_7_mv_plain, .-cmov_l_with_code_7_mv_plain

    
.globl cmov_l_with_code_7_mv_allregs
         .type   cmov_l_with_code_7_mv_allregs, @function
cmov_l_with_code_7_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x47,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_7_mv_allregs, .-cmov_l_with_code_7_mv_allregs

    
.globl cmov_l_with_code_7_mv_constant_simple
         .type   cmov_l_with_code_7_mv_constant_simple, @function
cmov_l_with_code_7_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x47,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_7_mv_constant_simple, .-cmov_l_with_code_7_mv_constant_simple

    
.globl cmov_l_with_code_7_mv_constant_complex1
         .type   cmov_l_with_code_7_mv_constant_complex1, @function
cmov_l_with_code_7_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x47,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_7_mv_constant_complex1, .-cmov_l_with_code_7_mv_constant_complex1

    
.globl cmov_l_with_code_7_mv_constant_complex2
         .type   cmov_l_with_code_7_mv_constant_complex2, @function
cmov_l_with_code_7_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x47,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_7_mv_constant_complex2, .-cmov_l_with_code_7_mv_constant_complex2

    
.globl cmov_l_with_code_8_mv_plain
         .type   cmov_l_with_code_8_mv_plain, @function
cmov_l_with_code_8_mv_plain:
      .byte 0x3c,0x02,0x0f,0x48,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_8_mv_plain, .-cmov_l_with_code_8_mv_plain

    
.globl cmov_l_with_code_8_mv_allregs
         .type   cmov_l_with_code_8_mv_allregs, @function
cmov_l_with_code_8_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x48,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_8_mv_allregs, .-cmov_l_with_code_8_mv_allregs

    
.globl cmov_l_with_code_8_mv_constant_simple
         .type   cmov_l_with_code_8_mv_constant_simple, @function
cmov_l_with_code_8_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x48,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_8_mv_constant_simple, .-cmov_l_with_code_8_mv_constant_simple

    
.globl cmov_l_with_code_8_mv_constant_complex1
         .type   cmov_l_with_code_8_mv_constant_complex1, @function
cmov_l_with_code_8_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x48,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_8_mv_constant_complex1, .-cmov_l_with_code_8_mv_constant_complex1

    
.globl cmov_l_with_code_8_mv_constant_complex2
         .type   cmov_l_with_code_8_mv_constant_complex2, @function
cmov_l_with_code_8_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x48,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_8_mv_constant_complex2, .-cmov_l_with_code_8_mv_constant_complex2

    
.globl cmov_l_with_code_9_mv_plain
         .type   cmov_l_with_code_9_mv_plain, @function
cmov_l_with_code_9_mv_plain:
      .byte 0x3c,0x02,0x0f,0x49,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_9_mv_plain, .-cmov_l_with_code_9_mv_plain

    
.globl cmov_l_with_code_9_mv_allregs
         .type   cmov_l_with_code_9_mv_allregs, @function
cmov_l_with_code_9_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x49,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_9_mv_allregs, .-cmov_l_with_code_9_mv_allregs

    
.globl cmov_l_with_code_9_mv_constant_simple
         .type   cmov_l_with_code_9_mv_constant_simple, @function
cmov_l_with_code_9_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x49,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_9_mv_constant_simple, .-cmov_l_with_code_9_mv_constant_simple

    
.globl cmov_l_with_code_9_mv_constant_complex1
         .type   cmov_l_with_code_9_mv_constant_complex1, @function
cmov_l_with_code_9_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x49,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_9_mv_constant_complex1, .-cmov_l_with_code_9_mv_constant_complex1

    
.globl cmov_l_with_code_9_mv_constant_complex2
         .type   cmov_l_with_code_9_mv_constant_complex2, @function
cmov_l_with_code_9_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x49,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_9_mv_constant_complex2, .-cmov_l_with_code_9_mv_constant_complex2

    
.globl cmov_l_with_code_a_mv_plain
         .type   cmov_l_with_code_a_mv_plain, @function
cmov_l_with_code_a_mv_plain:
      .byte 0x3c,0x02,0x0f,0x4a,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_a_mv_plain, .-cmov_l_with_code_a_mv_plain

    
.globl cmov_l_with_code_a_mv_allregs
         .type   cmov_l_with_code_a_mv_allregs, @function
cmov_l_with_code_a_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4a,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_a_mv_allregs, .-cmov_l_with_code_a_mv_allregs

    
.globl cmov_l_with_code_a_mv_constant_simple
         .type   cmov_l_with_code_a_mv_constant_simple, @function
cmov_l_with_code_a_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4a,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_a_mv_constant_simple, .-cmov_l_with_code_a_mv_constant_simple

    
.globl cmov_l_with_code_a_mv_constant_complex1
         .type   cmov_l_with_code_a_mv_constant_complex1, @function
cmov_l_with_code_a_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4a,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_a_mv_constant_complex1, .-cmov_l_with_code_a_mv_constant_complex1

    
.globl cmov_l_with_code_a_mv_constant_complex2
         .type   cmov_l_with_code_a_mv_constant_complex2, @function
cmov_l_with_code_a_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4a,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_a_mv_constant_complex2, .-cmov_l_with_code_a_mv_constant_complex2

    
.globl cmov_l_with_code_b_mv_plain
         .type   cmov_l_with_code_b_mv_plain, @function
cmov_l_with_code_b_mv_plain:
      .byte 0x3c,0x02,0x0f,0x4b,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_b_mv_plain, .-cmov_l_with_code_b_mv_plain

    
.globl cmov_l_with_code_b_mv_allregs
         .type   cmov_l_with_code_b_mv_allregs, @function
cmov_l_with_code_b_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4b,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_b_mv_allregs, .-cmov_l_with_code_b_mv_allregs

    
.globl cmov_l_with_code_b_mv_constant_simple
         .type   cmov_l_with_code_b_mv_constant_simple, @function
cmov_l_with_code_b_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4b,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_b_mv_constant_simple, .-cmov_l_with_code_b_mv_constant_simple

    
.globl cmov_l_with_code_b_mv_constant_complex1
         .type   cmov_l_with_code_b_mv_constant_complex1, @function
cmov_l_with_code_b_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4b,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_b_mv_constant_complex1, .-cmov_l_with_code_b_mv_constant_complex1

    
.globl cmov_l_with_code_b_mv_constant_complex2
         .type   cmov_l_with_code_b_mv_constant_complex2, @function
cmov_l_with_code_b_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4b,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_b_mv_constant_complex2, .-cmov_l_with_code_b_mv_constant_complex2

    
.globl cmov_l_with_code_c_mv_plain
         .type   cmov_l_with_code_c_mv_plain, @function
cmov_l_with_code_c_mv_plain:
      .byte 0x3c,0x02,0x0f,0x4c,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_c_mv_plain, .-cmov_l_with_code_c_mv_plain

    
.globl cmov_l_with_code_c_mv_allregs
         .type   cmov_l_with_code_c_mv_allregs, @function
cmov_l_with_code_c_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4c,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_c_mv_allregs, .-cmov_l_with_code_c_mv_allregs

    
.globl cmov_l_with_code_c_mv_constant_simple
         .type   cmov_l_with_code_c_mv_constant_simple, @function
cmov_l_with_code_c_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4c,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_c_mv_constant_simple, .-cmov_l_with_code_c_mv_constant_simple

    
.globl cmov_l_with_code_c_mv_constant_complex1
         .type   cmov_l_with_code_c_mv_constant_complex1, @function
cmov_l_with_code_c_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4c,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_c_mv_constant_complex1, .-cmov_l_with_code_c_mv_constant_complex1

    
.globl cmov_l_with_code_c_mv_constant_complex2
         .type   cmov_l_with_code_c_mv_constant_complex2, @function
cmov_l_with_code_c_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4c,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_c_mv_constant_complex2, .-cmov_l_with_code_c_mv_constant_complex2

    
.globl cmov_l_with_code_d_mv_plain
         .type   cmov_l_with_code_d_mv_plain, @function
cmov_l_with_code_d_mv_plain:
      .byte 0x3c,0x02,0x0f,0x4d,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_d_mv_plain, .-cmov_l_with_code_d_mv_plain

    
.globl cmov_l_with_code_d_mv_allregs
         .type   cmov_l_with_code_d_mv_allregs, @function
cmov_l_with_code_d_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4d,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_d_mv_allregs, .-cmov_l_with_code_d_mv_allregs

    
.globl cmov_l_with_code_d_mv_constant_simple
         .type   cmov_l_with_code_d_mv_constant_simple, @function
cmov_l_with_code_d_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4d,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_d_mv_constant_simple, .-cmov_l_with_code_d_mv_constant_simple

    
.globl cmov_l_with_code_d_mv_constant_complex1
         .type   cmov_l_with_code_d_mv_constant_complex1, @function
cmov_l_with_code_d_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4d,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_d_mv_constant_complex1, .-cmov_l_with_code_d_mv_constant_complex1

    
.globl cmov_l_with_code_d_mv_constant_complex2
         .type   cmov_l_with_code_d_mv_constant_complex2, @function
cmov_l_with_code_d_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4d,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_d_mv_constant_complex2, .-cmov_l_with_code_d_mv_constant_complex2

    
.globl cmov_l_with_code_e_mv_plain
         .type   cmov_l_with_code_e_mv_plain, @function
cmov_l_with_code_e_mv_plain:
      .byte 0x3c,0x02,0x0f,0x4e,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_e_mv_plain, .-cmov_l_with_code_e_mv_plain

    
.globl cmov_l_with_code_e_mv_allregs
         .type   cmov_l_with_code_e_mv_allregs, @function
cmov_l_with_code_e_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4e,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_e_mv_allregs, .-cmov_l_with_code_e_mv_allregs

    
.globl cmov_l_with_code_e_mv_constant_simple
         .type   cmov_l_with_code_e_mv_constant_simple, @function
cmov_l_with_code_e_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4e,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_e_mv_constant_simple, .-cmov_l_with_code_e_mv_constant_simple

    
.globl cmov_l_with_code_e_mv_constant_complex1
         .type   cmov_l_with_code_e_mv_constant_complex1, @function
cmov_l_with_code_e_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4e,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_e_mv_constant_complex1, .-cmov_l_with_code_e_mv_constant_complex1

    
.globl cmov_l_with_code_e_mv_constant_complex2
         .type   cmov_l_with_code_e_mv_constant_complex2, @function
cmov_l_with_code_e_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4e,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_e_mv_constant_complex2, .-cmov_l_with_code_e_mv_constant_complex2

    
.globl cmov_l_with_code_f_mv_plain
         .type   cmov_l_with_code_f_mv_plain, @function
cmov_l_with_code_f_mv_plain:
      .byte 0x3c,0x02,0x0f,0x4f,0xd8
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_f_mv_plain, .-cmov_l_with_code_f_mv_plain

    
.globl cmov_l_with_code_f_mv_allregs
         .type   cmov_l_with_code_f_mv_allregs, @function
cmov_l_with_code_f_mv_allregs:
      nop
  mov 4352,%ax
  push %ax
  popfw
  mov 4096,%eax
  mov 4100,%ebx
  mov 4104,%ecx
  mov 4108,%edx
  mov 4112,%ebp
  mov 4116,%esi
  mov 4120,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4f,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_f_mv_allregs, .-cmov_l_with_code_f_mv_allregs

    
.globl cmov_l_with_code_f_mv_constant_simple
         .type   cmov_l_with_code_f_mv_constant_simple, @function
cmov_l_with_code_f_mv_constant_simple:
      nop
  pushw $0
  popfw
  mov $2,%eax
  mov $3,%ebx
  mov $4,%ecx
  mov $5,%edx
  mov $6,%ebp
  mov $7,%esi
  mov $8,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4f,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_f_mv_constant_simple, .-cmov_l_with_code_f_mv_constant_simple

    
.globl cmov_l_with_code_f_mv_constant_complex1
         .type   cmov_l_with_code_f_mv_constant_complex1, @function
cmov_l_with_code_f_mv_constant_complex1:
      nop
  pushw $0
  popfw
  mov $0xa3b17984,%eax
  mov $0x06671ad7,%ebx
  mov $0x46685248,%ecx
  mov $0x392456c4,%edx
  mov $0xbc8960a4,%ebp
  mov $0xad3c2d78,%esi
  mov $0xe465e152,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4f,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_f_mv_constant_complex1, .-cmov_l_with_code_f_mv_constant_complex1

    
.globl cmov_l_with_code_f_mv_constant_complex2
         .type   cmov_l_with_code_f_mv_constant_complex2, @function
cmov_l_with_code_f_mv_constant_complex2:
      nop
  pushw $0xfeff
  popfw
  mov $0x313ec0e8,%eax
  mov $0x496e81c3,%ebx
  mov $0x1e3f6cb2,%ecx
  mov $0x4e6925b3,%edx
  mov $0x4f312610,%ebp
  mov $0x2f37a4a5,%esi
  mov $0x91a917b4,%edi
  mov %esp,8272
  .byte 0x3c,0x02,0x0f,0x4f,0xd8
  mov %eax,8192
  mov %ebx,8196
  mov %ecx,8200
  mov %edx,8204
  mov %ebp,8208
  mov %esi,8212
  mov %edi,8216
  seto 8704
  setno 8705
  setc 8706
  setnc 8707
  setz 8708
  setnz 8709
  setbe 8710
  seta 8711
  sets 8712
  setns 8713
  setp 8714
  setnp 8715
  setl 8716
  setnl 8717
  setle 8718
  setg 8719
  pushfw
  pop %ax
  mov %ax,8448
  mov 8272,%eax
  sub %esp,%eax
  mov %eax,8224
  mov $0x0,%eax

    ret
         .size   cmov_l_with_code_f_mv_constant_complex2, .-cmov_l_with_code_f_mv_constant_complex2
  .data
  .text

.globl callAll
         .type   callAll, @function
callAll:
          call bswap_plain
          call bswap_allregs
          call bswap_constant_simple
          call bswap_constant_complex1
          call bswap_constant_complex2
          call cmpxchg1_mv_plain
          call cmpxchg1_mv_allregs
          call cmpxchg1_mv_constant_simple
          call cmpxchg1_mv_constant_complex1
          call cmpxchg1_mv_constant_complex2
          call cmpxchg2_mv_plain
          call cmpxchg2_mv_allregs
          call cmpxchg2_mv_constant_simple
          call cmpxchg2_mv_constant_complex1
          call cmpxchg2_mv_constant_complex2
          call cmpxchg3_plain
          call cmpxchg3_allregs
          call cmpxchg3_constant_simple
          call cmpxchg3_constant_complex1
          call cmpxchg3_constant_complex2
          call cmpxchg4_mv_plain
          call cmpxchg4_mv_allregs
          call cmpxchg4_mv_constant_simple
          call cmpxchg4_mv_constant_complex1
          call cmpxchg4_mv_constant_complex2
          call cmpxchg5_mv_plain
          call cmpxchg5_mv_allregs
          call cmpxchg5_mv_constant_simple
          call cmpxchg5_mv_constant_complex1
          call cmpxchg5_mv_constant_complex2
          call cmpxchg_locked_mv_plain
          call cmpxchg_locked_mv_allregs
          call cmpxchg_locked_mv_constant_simple
          call cmpxchg_locked_mv_constant_complex1
          call cmpxchg_locked_mv_constant_complex2
          call cpuid_plain
          call cpuid_allregs
          call cpuid_constant_simple
          call cpuid_constant_complex1
          call cpuid_constant_complex2
          call invd_plain
          call invd_allregs
          call invd_constant_simple
          call invd_constant_complex1
          call invd_constant_complex2
          call invlpg_plain
          call invlpg_allregs
          call invlpg_constant_simple
          call invlpg_constant_complex1
          call invlpg_constant_complex2
          call wbinvd_plain
          call wbinvd_allregs
          call wbinvd_constant_simple
          call wbinvd_constant_complex1
          call wbinvd_constant_complex2
          call xadd1_mv_plain
          call xadd1_mv_allregs
          call xadd1_mv_constant_simple
          call xadd1_mv_constant_complex1
          call xadd1_mv_constant_complex2
          call xadd2_mv_plain
          call xadd2_mv_allregs
          call xadd2_mv_constant_simple
          call xadd2_mv_constant_complex1
          call xadd2_mv_constant_complex2
          call xadd3_plain
          call xadd3_allregs
          call xadd3_constant_simple
          call xadd3_constant_complex1
          call xadd3_constant_complex2
          call xadd4_mv_plain
          call xadd4_mv_allregs
          call xadd4_mv_constant_simple
          call xadd4_mv_constant_complex1
          call xadd4_mv_constant_complex2
          call xadd5_mv_plain
          call xadd5_mv_allregs
          call xadd5_mv_constant_simple
          call xadd5_mv_constant_complex1
          call xadd5_mv_constant_complex2
          call xadd_locked_mv_plain
          call xadd_locked_mv_allregs
          call xadd_locked_mv_constant_simple
          call xadd_locked_mv_constant_complex1
          call xadd_locked_mv_constant_complex2
          call cmpxchg8b_plain
          call cmpxchg8b_allregs
          call cmpxchg8b_constant_simple
          call cmpxchg8b_constant_complex1
          call cmpxchg8b_constant_complex2
          call cmpxchg8b_locked_mv_plain
          call cmpxchg8b_locked_mv_allregs
          call cmpxchg8b_locked_mv_constant_simple
          call cmpxchg8b_locked_mv_constant_complex1
          call cmpxchg8b_locked_mv_constant_complex2
          call rdtsc_plain
          call rdtsc_allregs
          call rdtsc_constant_simple
          call rdtsc_constant_complex1
          call rdtsc_constant_complex2
          call rdmsr_plain
          call rdmsr_allregs
          call rdmsr_constant_simple
          call rdmsr_constant_complex1
          call rdmsr_constant_complex2
          call wrmsr_plain
          call wrmsr_allregs
          call wrmsr_constant_simple
          call wrmsr_constant_complex1
          call wrmsr_constant_complex2
          call cmov1_plain
          call cmov1_allregs
          call cmov1_constant_simple
          call cmov1_constant_complex1
          call cmov1_constant_complex2
          call cmov2_mv_plain
          call cmov2_mv_allregs
          call cmov2_mv_constant_simple
          call cmov2_mv_constant_complex1
          call cmov2_mv_constant_complex2
          call cmov3_mv_plain
          call cmov3_mv_allregs
          call cmov3_mv_constant_simple
          call cmov3_mv_constant_complex1
          call cmov3_mv_constant_complex2
          call cmov4_mv_plain
          call cmov4_mv_allregs
          call cmov4_mv_constant_simple
          call cmov4_mv_constant_complex1
          call cmov4_mv_constant_complex2
          call cmov_w_with_code_0_plain
          call cmov_w_with_code_0_allregs
          call cmov_w_with_code_0_constant_simple
          call cmov_w_with_code_0_constant_complex1
          call cmov_w_with_code_0_constant_complex2
          call cmov_w_with_code_1_mv_plain
          call cmov_w_with_code_1_mv_allregs
          call cmov_w_with_code_1_mv_constant_simple
          call cmov_w_with_code_1_mv_constant_complex1
          call cmov_w_with_code_1_mv_constant_complex2
          call cmov_w_with_code_2_mv_plain
          call cmov_w_with_code_2_mv_allregs
          call cmov_w_with_code_2_mv_constant_simple
          call cmov_w_with_code_2_mv_constant_complex1
          call cmov_w_with_code_2_mv_constant_complex2
          call cmov_w_with_code_3_mv_plain
          call cmov_w_with_code_3_mv_allregs
          call cmov_w_with_code_3_mv_constant_simple
          call cmov_w_with_code_3_mv_constant_complex1
          call cmov_w_with_code_3_mv_constant_complex2
          call cmov_w_with_code_4_mv_plain
          call cmov_w_with_code_4_mv_allregs
          call cmov_w_with_code_4_mv_constant_simple
          call cmov_w_with_code_4_mv_constant_complex1
          call cmov_w_with_code_4_mv_constant_complex2
          call cmov_w_with_code_5_mv_plain
          call cmov_w_with_code_5_mv_allregs
          call cmov_w_with_code_5_mv_constant_simple
          call cmov_w_with_code_5_mv_constant_complex1
          call cmov_w_with_code_5_mv_constant_complex2
          call cmov_w_with_code_6_mv_plain
          call cmov_w_with_code_6_mv_allregs
          call cmov_w_with_code_6_mv_constant_simple
          call cmov_w_with_code_6_mv_constant_complex1
          call cmov_w_with_code_6_mv_constant_complex2
          call cmov_w_with_code_7_mv_plain
          call cmov_w_with_code_7_mv_allregs
          call cmov_w_with_code_7_mv_constant_simple
          call cmov_w_with_code_7_mv_constant_complex1
          call cmov_w_with_code_7_mv_constant_complex2
          call cmov_w_with_code_8_mv_plain
          call cmov_w_with_code_8_mv_allregs
          call cmov_w_with_code_8_mv_constant_simple
          call cmov_w_with_code_8_mv_constant_complex1
          call cmov_w_with_code_8_mv_constant_complex2
          call cmov_w_with_code_9_mv_plain
          call cmov_w_with_code_9_mv_allregs
          call cmov_w_with_code_9_mv_constant_simple
          call cmov_w_with_code_9_mv_constant_complex1
          call cmov_w_with_code_9_mv_constant_complex2
          call cmov_w_with_code_a_mv_plain
          call cmov_w_with_code_a_mv_allregs
          call cmov_w_with_code_a_mv_constant_simple
          call cmov_w_with_code_a_mv_constant_complex1
          call cmov_w_with_code_a_mv_constant_complex2
          call cmov_w_with_code_b_mv_plain
          call cmov_w_with_code_b_mv_allregs
          call cmov_w_with_code_b_mv_constant_simple
          call cmov_w_with_code_b_mv_constant_complex1
          call cmov_w_with_code_b_mv_constant_complex2
          call cmov_w_with_code_c_mv_plain
          call cmov_w_with_code_c_mv_allregs
          call cmov_w_with_code_c_mv_constant_simple
          call cmov_w_with_code_c_mv_constant_complex1
          call cmov_w_with_code_c_mv_constant_complex2
          call cmov_w_with_code_d_mv_plain
          call cmov_w_with_code_d_mv_allregs
          call cmov_w_with_code_d_mv_constant_simple
          call cmov_w_with_code_d_mv_constant_complex1
          call cmov_w_with_code_d_mv_constant_complex2
          call cmov_w_with_code_e_mv_plain
          call cmov_w_with_code_e_mv_allregs
          call cmov_w_with_code_e_mv_constant_simple
          call cmov_w_with_code_e_mv_constant_complex1
          call cmov_w_with_code_e_mv_constant_complex2
          call cmov_w_with_code_f_mv_plain
          call cmov_w_with_code_f_mv_allregs
          call cmov_w_with_code_f_mv_constant_simple
          call cmov_w_with_code_f_mv_constant_complex1
          call cmov_w_with_code_f_mv_constant_complex2
          call cmov_l_with_code_0_plain
          call cmov_l_with_code_0_allregs
          call cmov_l_with_code_0_constant_simple
          call cmov_l_with_code_0_constant_complex1
          call cmov_l_with_code_0_constant_complex2
          call cmov_l_with_code_1_mv_plain
          call cmov_l_with_code_1_mv_allregs
          call cmov_l_with_code_1_mv_constant_simple
          call cmov_l_with_code_1_mv_constant_complex1
          call cmov_l_with_code_1_mv_constant_complex2
          call cmov_l_with_code_2_mv_plain
          call cmov_l_with_code_2_mv_allregs
          call cmov_l_with_code_2_mv_constant_simple
          call cmov_l_with_code_2_mv_constant_complex1
          call cmov_l_with_code_2_mv_constant_complex2
          call cmov_l_with_code_3_mv_plain
          call cmov_l_with_code_3_mv_allregs
          call cmov_l_with_code_3_mv_constant_simple
          call cmov_l_with_code_3_mv_constant_complex1
          call cmov_l_with_code_3_mv_constant_complex2
          call cmov_l_with_code_4_mv_plain
          call cmov_l_with_code_4_mv_allregs
          call cmov_l_with_code_4_mv_constant_simple
          call cmov_l_with_code_4_mv_constant_complex1
          call cmov_l_with_code_4_mv_constant_complex2
          call cmov_l_with_code_5_mv_plain
          call cmov_l_with_code_5_mv_allregs
          call cmov_l_with_code_5_mv_constant_simple
          call cmov_l_with_code_5_mv_constant_complex1
          call cmov_l_with_code_5_mv_constant_complex2
          call cmov_l_with_code_6_mv_plain
          call cmov_l_with_code_6_mv_allregs
          call cmov_l_with_code_6_mv_constant_simple
          call cmov_l_with_code_6_mv_constant_complex1
          call cmov_l_with_code_6_mv_constant_complex2
          call cmov_l_with_code_7_mv_plain
          call cmov_l_with_code_7_mv_allregs
          call cmov_l_with_code_7_mv_constant_simple
          call cmov_l_with_code_7_mv_constant_complex1
          call cmov_l_with_code_7_mv_constant_complex2
          call cmov_l_with_code_8_mv_plain
          call cmov_l_with_code_8_mv_allregs
          call cmov_l_with_code_8_mv_constant_simple
          call cmov_l_with_code_8_mv_constant_complex1
          call cmov_l_with_code_8_mv_constant_complex2
          call cmov_l_with_code_9_mv_plain
          call cmov_l_with_code_9_mv_allregs
          call cmov_l_with_code_9_mv_constant_simple
          call cmov_l_with_code_9_mv_constant_complex1
          call cmov_l_with_code_9_mv_constant_complex2
          call cmov_l_with_code_a_mv_plain
          call cmov_l_with_code_a_mv_allregs
          call cmov_l_with_code_a_mv_constant_simple
          call cmov_l_with_code_a_mv_constant_complex1
          call cmov_l_with_code_a_mv_constant_complex2
          call cmov_l_with_code_b_mv_plain
          call cmov_l_with_code_b_mv_allregs
          call cmov_l_with_code_b_mv_constant_simple
          call cmov_l_with_code_b_mv_constant_complex1
          call cmov_l_with_code_b_mv_constant_complex2
          call cmov_l_with_code_c_mv_plain
          call cmov_l_with_code_c_mv_allregs
          call cmov_l_with_code_c_mv_constant_simple
          call cmov_l_with_code_c_mv_constant_complex1
          call cmov_l_with_code_c_mv_constant_complex2
          call cmov_l_with_code_d_mv_plain
          call cmov_l_with_code_d_mv_allregs
          call cmov_l_with_code_d_mv_constant_simple
          call cmov_l_with_code_d_mv_constant_complex1
          call cmov_l_with_code_d_mv_constant_complex2
          call cmov_l_with_code_e_mv_plain
          call cmov_l_with_code_e_mv_allregs
          call cmov_l_with_code_e_mv_constant_simple
          call cmov_l_with_code_e_mv_constant_complex1
          call cmov_l_with_code_e_mv_constant_complex2
          call cmov_l_with_code_f_mv_plain
          call cmov_l_with_code_f_mv_allregs
          call cmov_l_with_code_f_mv_constant_simple
          call cmov_l_with_code_f_mv_constant_complex1
          call cmov_l_with_code_f_mv_constant_complex2
         .size   callAll, .-callAll
