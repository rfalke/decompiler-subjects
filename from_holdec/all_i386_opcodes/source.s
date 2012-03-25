
        .file   "a.c"
        .text

    
.globl aaa
         .type   aaa, @function
aaa:
    .byte 0x37
    ret
         .size   aaa, .-aaa

    
.globl aad1
         .type   aad1, @function
aad1:
    .byte 0xd5,0x0a
    ret
         .size   aad1, .-aad1

    
.globl aad2
         .type   aad2, @function
aad2:
    .byte 0xd5,0x0f
    ret
         .size   aad2, .-aad2

    
.globl aam1
         .type   aam1, @function
aam1:
    .byte 0xd4,0x0a
    ret
         .size   aam1, .-aam1

    
.globl aam2
         .type   aam2, @function
aam2:
    .byte 0xd4,0x0f
    ret
         .size   aam2, .-aam2

    
.globl aas
         .type   aas, @function
aas:
    .byte 0x3f
    ret
         .size   aas, .-aas

    
.globl adc1
         .type   adc1, @function
adc1:
    adc $0x10,%al
    ret
         .size   adc1, .-adc1

    
.globl adc1a
         .type   adc1a, @function
adc1a:
    .byte 0x14,0x10
    ret
         .size   adc1a, .-adc1a

    
.globl adc2
         .type   adc2, @function
adc2:
    adc $0x10,%ax
    ret
         .size   adc2, .-adc2

    
.globl adc2a
         .type   adc2a, @function
adc2a:
    .byte 0x66,0x15,0x10,0x00
    ret
         .size   adc2a, .-adc2a

    
.globl adc3
         .type   adc3, @function
adc3:
    adc $0x10,%eax
    ret
         .size   adc3, .-adc3

    
.globl adc3a
         .type   adc3a, @function
adc3a:
    .byte 0x15,0x10,0x00,0x00,0x00
    ret
         .size   adc3a, .-adc3a

    
.globl adc4
         .type   adc4, @function
adc4:
    adc 8(%ebp), %eax
    ret
         .size   adc4, .-adc4

    
.globl add1
         .type   add1, @function
add1:
    .byte 0x04,0x02
    ret
         .size   add1, .-add1

    
.globl add2
         .type   add2, @function
add2:
    .byte 0x04,0xfe
    ret
         .size   add2, .-add2

    
.globl add3
         .type   add3, @function
add3:
    .byte 0x66,0x05,0x02,0x00
    ret
         .size   add3, .-add3

    
.globl add4
         .type   add4, @function
add4:
    .byte 0x66,0x05,0xfe,0xff
    ret
         .size   add4, .-add4

    
.globl add5
         .type   add5, @function
add5:
    .byte 0x05,0x02,0x00,0x00,0x00
    ret
         .size   add5, .-add5

    
.globl add6
         .type   add6, @function
add6:
    .byte 0x05,0xfe,0xff,0xff,0xff
    ret
         .size   add6, .-add6

    
.globl add7
         .type   add7, @function
add7:
    addl 8(%ebp), %eax
    ret
         .size   add7, .-add7

    
.globl and1
         .type   and1, @function
and1:
    .byte 0x24,0x02
    ret
         .size   and1, .-and1

    
.globl and2
         .type   and2, @function
and2:
    .byte 0x24,0xfe
    ret
         .size   and2, .-and2

    
.globl and3
         .type   and3, @function
and3:
    .byte 0x66,0x25,0x02,0x00
    ret
         .size   and3, .-and3

    
.globl and4
         .type   and4, @function
and4:
    .byte 0x66,0x25,0xfe,0xff
    ret
         .size   and4, .-and4

    
.globl and5
         .type   and5, @function
and5:
    .byte 0x25,0x02,0x00,0x00,0x00
    ret
         .size   and5, .-and5

    
.globl and6
         .type   and6, @function
and6:
    .byte 0x25,0xfe,0xff,0xff,0xff
    ret
         .size   and6, .-and6

    
.globl and7
         .type   and7, @function
and7:
    andl 8(%ebp), %eax
    ret
         .size   and7, .-and7

    
.globl arpl
         .type   arpl, @function
arpl:
    arpl %ax, %bx
    ret
         .size   arpl, .-arpl

    
.globl bound1
         .type   bound1, @function
bound1:
    bound %ax,(%bx)
    ret
         .size   bound1, .-bound1

    
.globl bound2
         .type   bound2, @function
bound2:
    bound %eax,(%ebx)
    ret
         .size   bound2, .-bound2

    
.globl bsf1
         .type   bsf1, @function
bsf1:
    bsf (%bx),%ax
    ret
         .size   bsf1, .-bsf1

    
.globl bsf2
         .type   bsf2, @function
bsf2:
    bsf (%ebx),%eax
    ret
         .size   bsf2, .-bsf2

    
.globl bsf3
         .type   bsf3, @function
bsf3:
    bsf (%bx),%eax
    ret
         .size   bsf3, .-bsf3

    
.globl bsf4
         .type   bsf4, @function
bsf4:
    bsf (%ebx),%ax
    ret
         .size   bsf4, .-bsf4

    
.globl bsr1
         .type   bsr1, @function
bsr1:
    bsr (%bx),%ax
    ret
         .size   bsr1, .-bsr1

    
.globl bsr2
         .type   bsr2, @function
bsr2:
    bsr (%ebx),%eax
    ret
         .size   bsr2, .-bsr2

    
.globl bsr3
         .type   bsr3, @function
bsr3:
    bsr (%bx),%eax
    ret
         .size   bsr3, .-bsr3

    
.globl bsr4
         .type   bsr4, @function
bsr4:
    bsr (%ebx),%ax
    ret
         .size   bsr4, .-bsr4

    
.globl bt1
         .type   bt1, @function
bt1:
    bt $4,%ax
    ret
         .size   bt1, .-bt1

    
.globl bt2
         .type   bt2, @function
bt2:
    bt %bx,%ax
    ret
         .size   bt2, .-bt2

    
.globl bt3
         .type   bt3, @function
bt3:
    bt $31,%eax
    ret
         .size   bt3, .-bt3

    
.globl bt4
         .type   bt4, @function
bt4:
    bt %bx,%eax
    ret
         .size   bt4, .-bt4

    
.globl bt5
         .type   bt5, @function
bt5:
    bt %ebx,(%eax)
    ret
         .size   bt5, .-bt5

    
.globl btc1
         .type   btc1, @function
btc1:
    btc $4,%ax
    ret
         .size   btc1, .-btc1

    
.globl btc2
         .type   btc2, @function
btc2:
    btc %bx,%ax
    ret
         .size   btc2, .-btc2

    
.globl btc3
         .type   btc3, @function
btc3:
    btc $31,%eax
    ret
         .size   btc3, .-btc3

    
.globl btc4
         .type   btc4, @function
btc4:
    btc %bx,%eax
    ret
         .size   btc4, .-btc4

    
.globl btc5
         .type   btc5, @function
btc5:
    btc %ebx,(%eax)
    ret
         .size   btc5, .-btc5

    
.globl btr1
         .type   btr1, @function
btr1:
    btr $4,%ax
    ret
         .size   btr1, .-btr1

    
.globl btr2
         .type   btr2, @function
btr2:
    btr %bx,%ax
    ret
         .size   btr2, .-btr2

    
.globl btr3
         .type   btr3, @function
btr3:
    btr $31,%eax
    ret
         .size   btr3, .-btr3

    
.globl btr4
         .type   btr4, @function
btr4:
    btr %bx,%eax
    ret
         .size   btr4, .-btr4

    
.globl btr5
         .type   btr5, @function
btr5:
    btr %ebx,(%eax)
    ret
         .size   btr5, .-btr5

    
.globl bts1
         .type   bts1, @function
bts1:
    bts $4,%ax
    ret
         .size   bts1, .-bts1

    
.globl bts2
         .type   bts2, @function
bts2:
    bts %bx,%ax
    ret
         .size   bts2, .-bts2

    
.globl bts3
         .type   bts3, @function
bts3:
    bts $31,%eax
    ret
         .size   bts3, .-bts3

    
.globl bts4
         .type   bts4, @function
bts4:
    bts %bx,%eax
    ret
         .size   bts4, .-bts4

    
.globl bts5
         .type   bts5, @function
bts5:
    bts %ebx,(%eax)
    ret
         .size   bts5, .-bts5

    
.globl call1
         .type   call1, @function
call1:
    .byte 0xe8,0xfb,0xff,0xff,0xff
    ret
         .size   call1, .-call1

    
.globl call2
         .type   call2, @function
call2:
    call call2
    ret
         .size   call2, .-call2

    
.globl call3
         .type   call3, @function
call3:
    call malloc
    ret
         .size   call3, .-call3

    
.globl call4
         .type   call4, @function
call4:
    call 0x1234
    ret
         .size   call4, .-call4

    
.globl call5
         .type   call5, @function
call5:
    call *%eax
    ret
         .size   call5, .-call5

    
.globl call6
         .type   call6, @function
call6:
    call *(%eax)
    ret
         .size   call6, .-call6

    
.globl cbw1
         .type   cbw1, @function
cbw1:
    .byte 0x98
    ret
         .size   cbw1, .-cbw1

    
.globl cbw2
         .type   cbw2, @function
cbw2:
    .byte 0x66,0x98
    ret
         .size   cbw2, .-cbw2

    
.globl clc
         .type   clc, @function
clc:
    clc
    ret
         .size   clc, .-clc

    
.globl cld
         .type   cld, @function
cld:
    cld
    ret
         .size   cld, .-cld

    
.globl cli
         .type   cli, @function
cli:
    cli
    ret
         .size   cli, .-cli

    
.globl clts
         .type   clts, @function
clts:
    clts
    ret
         .size   clts, .-clts

    
.globl cmc
         .type   cmc, @function
cmc:
    cmc
    ret
         .size   cmc, .-cmc

    
.globl cmp1
         .type   cmp1, @function
cmp1:
    .byte 0x3c,0x02
    ret
         .size   cmp1, .-cmp1

    
.globl cmp2
         .type   cmp2, @function
cmp2:
    .byte 0x3c,0xfe
    ret
         .size   cmp2, .-cmp2

    
.globl cmp3
         .type   cmp3, @function
cmp3:
    .byte 0x66,0x3d,0x02,0x00
    ret
         .size   cmp3, .-cmp3

    
.globl cmp4
         .type   cmp4, @function
cmp4:
    .byte 0x66,0x3d,0xfe,0xff
    ret
         .size   cmp4, .-cmp4

    
.globl cmp5
         .type   cmp5, @function
cmp5:
    .byte 0x3d,0x02,0x00,0x00,0x00
    ret
         .size   cmp5, .-cmp5

    
.globl cmp6
         .type   cmp6, @function
cmp6:
    .byte 0x3d,0xfe,0xff,0xff,0xff
    ret
         .size   cmp6, .-cmp6

    
.globl cmp7
         .type   cmp7, @function
cmp7:
    cmpl 8(%ebp), %eax
    ret
         .size   cmp7, .-cmp7

    
.globl cmp8
         .type   cmp8, @function
cmp8:
    cmpl $100, 7(%eax,%ebp)
    ret
         .size   cmp8, .-cmp8

    
.globl cmps1
         .type   cmps1, @function
cmps1:
    .byte 0xa6
    ret
         .size   cmps1, .-cmps1

    
.globl cmps2
         .type   cmps2, @function
cmps2:
    .byte 0x67,0xa6
    ret
         .size   cmps2, .-cmps2

    
.globl cmps3
         .type   cmps3, @function
cmps3:
    .byte 0xa7
    ret
         .size   cmps3, .-cmps3

    
.globl cmps4
         .type   cmps4, @function
cmps4:
    .byte 0x66,0xa7
    ret
         .size   cmps4, .-cmps4

    
.globl cmps5
         .type   cmps5, @function
cmps5:
    .byte 0x66,0x67,0xa7
    ret
         .size   cmps5, .-cmps5

    
.globl cmps6
         .type   cmps6, @function
cmps6:
    .byte 0x67,0xa7
    ret
         .size   cmps6, .-cmps6

    
.globl cwd1
         .type   cwd1, @function
cwd1:
    .byte 0x99
    ret
         .size   cwd1, .-cwd1

    
.globl cwd2
         .type   cwd2, @function
cwd2:
    .byte 0x66,0x99
    ret
         .size   cwd2, .-cwd2

    
.globl daa
         .type   daa, @function
daa:
    daa
    ret
         .size   daa, .-daa

    
.globl das
         .type   das, @function
das:
    das
    ret
         .size   das, .-das

    
.globl dec1
         .type   dec1, @function
dec1:
    dec %al
    ret
         .size   dec1, .-dec1

    
.globl dec2
         .type   dec2, @function
dec2:
    dec %ax
    ret
         .size   dec2, .-dec2

    
.globl dec3
         .type   dec3, @function
dec3:
    dec %ah
    ret
         .size   dec3, .-dec3

    
.globl dec4
         .type   dec4, @function
dec4:
    dec %eax
    ret
         .size   dec4, .-dec4

    
.globl dec5b
         .type   dec5b, @function
dec5b:
    decb (%eax)
    ret
         .size   dec5b, .-dec5b

    
.globl dec5w
         .type   dec5w, @function
dec5w:
    decw (%eax)
    ret
         .size   dec5w, .-dec5w

    
.globl dec5l
         .type   dec5l, @function
dec5l:
    decl (%eax)
    ret
         .size   dec5l, .-dec5l

    
.globl div1
         .type   div1, @function
div1:
    div %bl,%al
    ret
         .size   div1, .-div1

    
.globl div2
         .type   div2, @function
div2:
    div %bx,%ax
    ret
         .size   div2, .-div2

    
.globl div3
         .type   div3, @function
div3:
    div %ebx,%eax
    ret
         .size   div3, .-div3

    
.globl enter1
         .type   enter1, @function
enter1:
    .byte 0xc8,0x34,0x12,0x00
    ret
         .size   enter1, .-enter1

    
.globl enter2
         .type   enter2, @function
enter2:
    .byte 0xc8,0x34,0x12,0x01
    ret
         .size   enter2, .-enter2

    
.globl enter3
         .type   enter3, @function
enter3:
    .byte 0xc8,0x34,0x12,0x55
    ret
         .size   enter3, .-enter3

    
.globl hlt
         .type   hlt, @function
hlt:
    hlt
    ret
         .size   hlt, .-hlt

    
.globl idiv1
         .type   idiv1, @function
idiv1:
    idiv %bl,%al
    ret
         .size   idiv1, .-idiv1

    
.globl idiv2
         .type   idiv2, @function
idiv2:
    idiv %bx,%ax
    ret
         .size   idiv2, .-idiv2

    
.globl idiv3
         .type   idiv3, @function
idiv3:
    idiv %ebx,%eax
    ret
         .size   idiv3, .-idiv3

    
.globl imul_one_op1
         .type   imul_one_op1, @function
imul_one_op1:
    imul %bl
    ret
         .size   imul_one_op1, .-imul_one_op1

    
.globl imul_one_op2
         .type   imul_one_op2, @function
imul_one_op2:
    imul %bx
    ret
         .size   imul_one_op2, .-imul_one_op2

    
.globl imul_one_op3
         .type   imul_one_op3, @function
imul_one_op3:
    imul %ebx
    ret
         .size   imul_one_op3, .-imul_one_op3

    
.globl imul_one_op4
         .type   imul_one_op4, @function
imul_one_op4:
    imulw (%ebx)
    ret
         .size   imul_one_op4, .-imul_one_op4

    
.globl imul_two_op1
         .type   imul_two_op1, @function
imul_two_op1:
    imul %bx,%cx
    ret
         .size   imul_two_op1, .-imul_two_op1

    
.globl imul_two_op2
         .type   imul_two_op2, @function
imul_two_op2:
    imul %ebx,%ecx
    ret
         .size   imul_two_op2, .-imul_two_op2

    
.globl imul_two_op3
         .type   imul_two_op3, @function
imul_two_op3:
    imul (%ebx),%ecx
    ret
         .size   imul_two_op3, .-imul_two_op3

    
.globl imul_three_op1
         .type   imul_three_op1, @function
imul_three_op1:
    imul $10,%bx,%cx
    ret
         .size   imul_three_op1, .-imul_three_op1

    
.globl imul_three_op2
         .type   imul_three_op2, @function
imul_three_op2:
    imul $10,%ebx,%ecx
    ret
         .size   imul_three_op2, .-imul_three_op2

    
.globl imul_three_op3
         .type   imul_three_op3, @function
imul_three_op3:
    imul $10,(%ebx),%ecx
    ret
         .size   imul_three_op3, .-imul_three_op3

    
.globl in1
         .type   in1, @function
in1:
    .byte 0xe4,0x12
    ret
         .size   in1, .-in1

    
.globl in2
         .type   in2, @function
in2:
    .byte 0x66,0xe5,0x12
    ret
         .size   in2, .-in2

    
.globl in3
         .type   in3, @function
in3:
    .byte 0xe5,0x12
    ret
         .size   in3, .-in3

    
.globl in4
         .type   in4, @function
in4:
    .byte 0xec
    ret
         .size   in4, .-in4

    
.globl in5
         .type   in5, @function
in5:
    .byte 0x66,0xed
    ret
         .size   in5, .-in5

    
.globl in6
         .type   in6, @function
in6:
    .byte 0xed
    ret
         .size   in6, .-in6

    
.globl inc1
         .type   inc1, @function
inc1:
    inc %al
    ret
         .size   inc1, .-inc1

    
.globl inc2
         .type   inc2, @function
inc2:
    inc %ax
    ret
         .size   inc2, .-inc2

    
.globl inc3
         .type   inc3, @function
inc3:
    inc %ah
    ret
         .size   inc3, .-inc3

    
.globl inc4
         .type   inc4, @function
inc4:
    inc %eax
    ret
         .size   inc4, .-inc4

    
.globl inc5b
         .type   inc5b, @function
inc5b:
    incb (%eax)
    ret
         .size   inc5b, .-inc5b

    
.globl inc5w
         .type   inc5w, @function
inc5w:
    incw (%eax)
    ret
         .size   inc5w, .-inc5w

    
.globl inc5l
         .type   inc5l, @function
inc5l:
    incl (%eax)
    ret
         .size   inc5l, .-inc5l

    
.globl ins1
         .type   ins1, @function
ins1:
    .byte 0x6c
    ret
         .size   ins1, .-ins1

    
.globl ins2
         .type   ins2, @function
ins2:
    .byte 0x66,0x6d
    ret
         .size   ins2, .-ins2

    
.globl ins3
         .type   ins3, @function
ins3:
    .byte 0x6d
    ret
         .size   ins3, .-ins3

    
.globl int1
         .type   int1, @function
int1:
    .byte 0xcc
    ret
         .size   int1, .-int1

    
.globl int2
         .type   int2, @function
int2:
    .byte 0xcd,0x12
    ret
         .size   int2, .-int2

    
.globl int3
         .type   int3, @function
int3:
    .byte 0xce
    ret
         .size   int3, .-int3

    
.globl iret1
         .type   iret1, @function
iret1:
    .byte 0xcf
    ret
         .size   iret1, .-iret1

    
.globl iret2
         .type   iret2, @function
iret2:
    .byte 0x66,0xcf
    ret
         .size   iret2, .-iret2

    
.globl jcc_short_with_code_0
         .type   jcc_short_with_code_0, @function
jcc_short_with_code_0:
    .byte 0x3c,0x02,0x70,0x01,0x90,0x90
    ret
         .size   jcc_short_with_code_0, .-jcc_short_with_code_0

    
.globl jcc_short_with_code_1
         .type   jcc_short_with_code_1, @function
jcc_short_with_code_1:
    .byte 0x3c,0x02,0x71,0x01,0x90,0x90
    ret
         .size   jcc_short_with_code_1, .-jcc_short_with_code_1

    
.globl jcc_short_with_code_2
         .type   jcc_short_with_code_2, @function
jcc_short_with_code_2:
    .byte 0x3c,0x02,0x72,0x01,0x90,0x90
    ret
         .size   jcc_short_with_code_2, .-jcc_short_with_code_2

    
.globl jcc_short_with_code_3
         .type   jcc_short_with_code_3, @function
jcc_short_with_code_3:
    .byte 0x3c,0x02,0x73,0x01,0x90,0x90
    ret
         .size   jcc_short_with_code_3, .-jcc_short_with_code_3

    
.globl jcc_short_with_code_4
         .type   jcc_short_with_code_4, @function
jcc_short_with_code_4:
    .byte 0x3c,0x02,0x74,0x01,0x90,0x90
    ret
         .size   jcc_short_with_code_4, .-jcc_short_with_code_4

    
.globl jcc_short_with_code_5
         .type   jcc_short_with_code_5, @function
jcc_short_with_code_5:
    .byte 0x3c,0x02,0x75,0x01,0x90,0x90
    ret
         .size   jcc_short_with_code_5, .-jcc_short_with_code_5

    
.globl jcc_short_with_code_6
         .type   jcc_short_with_code_6, @function
jcc_short_with_code_6:
    .byte 0x3c,0x02,0x76,0x01,0x90,0x90
    ret
         .size   jcc_short_with_code_6, .-jcc_short_with_code_6

    
.globl jcc_short_with_code_7
         .type   jcc_short_with_code_7, @function
jcc_short_with_code_7:
    .byte 0x3c,0x02,0x77,0x01,0x90,0x90
    ret
         .size   jcc_short_with_code_7, .-jcc_short_with_code_7

    
.globl jcc_short_with_code_8
         .type   jcc_short_with_code_8, @function
jcc_short_with_code_8:
    .byte 0x3c,0x02,0x78,0x01,0x90,0x90
    ret
         .size   jcc_short_with_code_8, .-jcc_short_with_code_8

    
.globl jcc_short_with_code_9
         .type   jcc_short_with_code_9, @function
jcc_short_with_code_9:
    .byte 0x3c,0x02,0x79,0x01,0x90,0x90
    ret
         .size   jcc_short_with_code_9, .-jcc_short_with_code_9

    
.globl jcc_short_with_code_a
         .type   jcc_short_with_code_a, @function
jcc_short_with_code_a:
    .byte 0x3c,0x02,0x7a,0x01,0x90,0x90
    ret
         .size   jcc_short_with_code_a, .-jcc_short_with_code_a

    
.globl jcc_short_with_code_b
         .type   jcc_short_with_code_b, @function
jcc_short_with_code_b:
    .byte 0x3c,0x02,0x7b,0x01,0x90,0x90
    ret
         .size   jcc_short_with_code_b, .-jcc_short_with_code_b

    
.globl jcc_short_with_code_c
         .type   jcc_short_with_code_c, @function
jcc_short_with_code_c:
    .byte 0x3c,0x02,0x7c,0x01,0x90,0x90
    ret
         .size   jcc_short_with_code_c, .-jcc_short_with_code_c

    
.globl jcc_short_with_code_d
         .type   jcc_short_with_code_d, @function
jcc_short_with_code_d:
    .byte 0x3c,0x02,0x7d,0x01,0x90,0x90
    ret
         .size   jcc_short_with_code_d, .-jcc_short_with_code_d

    
.globl jcc_short_with_code_e
         .type   jcc_short_with_code_e, @function
jcc_short_with_code_e:
    .byte 0x3c,0x02,0x7e,0x01,0x90,0x90
    ret
         .size   jcc_short_with_code_e, .-jcc_short_with_code_e

    
.globl jcc_short_with_code_f
         .type   jcc_short_with_code_f, @function
jcc_short_with_code_f:
    .byte 0x3c,0x02,0x7f,0x01,0x90,0x90
    ret
         .size   jcc_short_with_code_f, .-jcc_short_with_code_f

    
.globl jcc_long_with_code_0
         .type   jcc_long_with_code_0, @function
jcc_long_with_code_0:
    .byte 0x3c,0x02,0x0f,0x80,0x01,0x00,0x00,0x00,0x90,0x90
    ret
         .size   jcc_long_with_code_0, .-jcc_long_with_code_0

    
.globl jcc_long_with_code_1
         .type   jcc_long_with_code_1, @function
jcc_long_with_code_1:
    .byte 0x3c,0x02,0x0f,0x81,0x01,0x00,0x00,0x00,0x90,0x90
    ret
         .size   jcc_long_with_code_1, .-jcc_long_with_code_1

    
.globl jcc_long_with_code_2
         .type   jcc_long_with_code_2, @function
jcc_long_with_code_2:
    .byte 0x3c,0x02,0x0f,0x82,0x01,0x00,0x00,0x00,0x90,0x90
    ret
         .size   jcc_long_with_code_2, .-jcc_long_with_code_2

    
.globl jcc_long_with_code_3
         .type   jcc_long_with_code_3, @function
jcc_long_with_code_3:
    .byte 0x3c,0x02,0x0f,0x83,0x01,0x00,0x00,0x00,0x90,0x90
    ret
         .size   jcc_long_with_code_3, .-jcc_long_with_code_3

    
.globl jcc_long_with_code_4
         .type   jcc_long_with_code_4, @function
jcc_long_with_code_4:
    .byte 0x3c,0x02,0x0f,0x84,0x01,0x00,0x00,0x00,0x90,0x90
    ret
         .size   jcc_long_with_code_4, .-jcc_long_with_code_4

    
.globl jcc_long_with_code_5
         .type   jcc_long_with_code_5, @function
jcc_long_with_code_5:
    .byte 0x3c,0x02,0x0f,0x85,0x01,0x00,0x00,0x00,0x90,0x90
    ret
         .size   jcc_long_with_code_5, .-jcc_long_with_code_5

    
.globl jcc_long_with_code_6
         .type   jcc_long_with_code_6, @function
jcc_long_with_code_6:
    .byte 0x3c,0x02,0x0f,0x86,0x01,0x00,0x00,0x00,0x90,0x90
    ret
         .size   jcc_long_with_code_6, .-jcc_long_with_code_6

    
.globl jcc_long_with_code_7
         .type   jcc_long_with_code_7, @function
jcc_long_with_code_7:
    .byte 0x3c,0x02,0x0f,0x87,0x01,0x00,0x00,0x00,0x90,0x90
    ret
         .size   jcc_long_with_code_7, .-jcc_long_with_code_7

    
.globl jcc_long_with_code_8
         .type   jcc_long_with_code_8, @function
jcc_long_with_code_8:
    .byte 0x3c,0x02,0x0f,0x88,0x01,0x00,0x00,0x00,0x90,0x90
    ret
         .size   jcc_long_with_code_8, .-jcc_long_with_code_8

    
.globl jcc_long_with_code_9
         .type   jcc_long_with_code_9, @function
jcc_long_with_code_9:
    .byte 0x3c,0x02,0x0f,0x89,0x01,0x00,0x00,0x00,0x90,0x90
    ret
         .size   jcc_long_with_code_9, .-jcc_long_with_code_9

    
.globl jcc_long_with_code_a
         .type   jcc_long_with_code_a, @function
jcc_long_with_code_a:
    .byte 0x3c,0x02,0x0f,0x8a,0x01,0x00,0x00,0x00,0x90,0x90
    ret
         .size   jcc_long_with_code_a, .-jcc_long_with_code_a

    
.globl jcc_long_with_code_b
         .type   jcc_long_with_code_b, @function
jcc_long_with_code_b:
    .byte 0x3c,0x02,0x0f,0x8b,0x01,0x00,0x00,0x00,0x90,0x90
    ret
         .size   jcc_long_with_code_b, .-jcc_long_with_code_b

    
.globl jcc_long_with_code_c
         .type   jcc_long_with_code_c, @function
jcc_long_with_code_c:
    .byte 0x3c,0x02,0x0f,0x8c,0x01,0x00,0x00,0x00,0x90,0x90
    ret
         .size   jcc_long_with_code_c, .-jcc_long_with_code_c

    
.globl jcc_long_with_code_d
         .type   jcc_long_with_code_d, @function
jcc_long_with_code_d:
    .byte 0x3c,0x02,0x0f,0x8d,0x01,0x00,0x00,0x00,0x90,0x90
    ret
         .size   jcc_long_with_code_d, .-jcc_long_with_code_d

    
.globl jcc_long_with_code_e
         .type   jcc_long_with_code_e, @function
jcc_long_with_code_e:
    .byte 0x3c,0x02,0x0f,0x8e,0x01,0x00,0x00,0x00,0x90,0x90
    ret
         .size   jcc_long_with_code_e, .-jcc_long_with_code_e

    
.globl jcc_long_with_code_f
         .type   jcc_long_with_code_f, @function
jcc_long_with_code_f:
    .byte 0x3c,0x02,0x0f,0x8f,0x01,0x00,0x00,0x00,0x90,0x90
    ret
         .size   jcc_long_with_code_f, .-jcc_long_with_code_f

    
.globl jcxz
         .type   jcxz, @function
jcxz:
    .byte 0x67,0xe3,0x01,0x90,0x90
    ret
         .size   jcxz, .-jcxz

    
.globl jecxz
         .type   jecxz, @function
jecxz:
    .byte 0xe3,0x01,0x90,0x90
    ret
         .size   jecxz, .-jecxz

    
.globl jmp1
         .type   jmp1, @function
jmp1:
    .byte 0xeb,0x01,0x90,0x90
    ret
         .size   jmp1, .-jmp1

    
.globl jmp2
         .type   jmp2, @function
jmp2:
    .byte 0xe9,0x01,0x00,0x00,0x00,0x90,0x90
    ret
         .size   jmp2, .-jmp2

    
.globl jmp3
         .type   jmp3, @function
jmp3:
    .byte 0xff,0x23
    ret
         .size   jmp3, .-jmp3

    
.globl lahf
         .type   lahf, @function
lahf:
    lahf
    ret
         .size   lahf, .-lahf

    
.globl lar
         .type   lar, @function
lar:
    lar %ax,%ebx
    ret
         .size   lar, .-lar

    
.globl lea1
         .type   lea1, @function
lea1:
    lea 0x42(%ebx),%eax
    ret
         .size   lea1, .-lea1

    
.globl lea2
         .type   lea2, @function
lea2:
    .byte 0x66,0x8d,0x43,0x42
    ret
         .size   lea2, .-lea2

    
.globl leave1
         .type   leave1, @function
leave1:
    .byte 0xc9
    ret
         .size   leave1, .-leave1

    
.globl leave2
         .type   leave2, @function
leave2:
    .byte 0x66,0xc9
    ret
         .size   leave2, .-leave2

    
.globl lgdtl
         .type   lgdtl, @function
lgdtl:
    lgdtl (%eax)
    ret
         .size   lgdtl, .-lgdtl

    
.globl lidtl
         .type   lidtl, @function
lidtl:
    lidtl (%eax)
    ret
         .size   lidtl, .-lidtl

    
.globl lds1
         .type   lds1, @function
lds1:
    lds (%ecx),%edx
    ret
         .size   lds1, .-lds1

    
.globl lds2
         .type   lds2, @function
lds2:
    lds (%ecx),%dx
    ret
         .size   lds2, .-lds2

    
.globl les1
         .type   les1, @function
les1:
    les (%ecx),%edx
    ret
         .size   les1, .-les1

    
.globl les2
         .type   les2, @function
les2:
    les (%ecx),%dx
    ret
         .size   les2, .-les2

    
.globl lfs1
         .type   lfs1, @function
lfs1:
    lfs (%ecx),%edx
    ret
         .size   lfs1, .-lfs1

    
.globl lfs2
         .type   lfs2, @function
lfs2:
    lfs (%ecx),%dx
    ret
         .size   lfs2, .-lfs2

    
.globl lgs1
         .type   lgs1, @function
lgs1:
    lgs (%ecx),%edx
    ret
         .size   lgs1, .-lgs1

    
.globl lgs2
         .type   lgs2, @function
lgs2:
    lgs (%ecx),%dx
    ret
         .size   lgs2, .-lgs2

    
.globl lss1
         .type   lss1, @function
lss1:
    lss (%ecx),%edx
    ret
         .size   lss1, .-lss1

    
.globl lss2
         .type   lss2, @function
lss2:
    lss (%ecx),%dx
    ret
         .size   lss2, .-lss2

    
.globl lldt
         .type   lldt, @function
lldt:
    lldt (%eax)
    ret
         .size   lldt, .-lldt

    
.globl lmsw
         .type   lmsw, @function
lmsw:
    lmsw (%eax)
    ret
         .size   lmsw, .-lmsw

    
.globl lods1
         .type   lods1, @function
lods1:
    .byte 0xac
    ret
         .size   lods1, .-lods1

    
.globl lods2
         .type   lods2, @function
lods2:
    .byte 0x66,0xad
    ret
         .size   lods2, .-lods2

    
.globl lods3
         .type   lods3, @function
lods3:
    .byte 0xad
    ret
         .size   lods3, .-lods3

    
.globl loop_type_0
         .type   loop_type_0, @function
loop_type_0:
    .byte 0x90,0xe0,0xfd
    ret
         .size   loop_type_0, .-loop_type_0

    
.globl loop_type_0w
         .type   loop_type_0w, @function
loop_type_0w:
    .byte 0x90,0x67,0xe0,0xfc
    ret
         .size   loop_type_0w, .-loop_type_0w

    
.globl loop_type_1
         .type   loop_type_1, @function
loop_type_1:
    .byte 0x90,0xe1,0xfd
    ret
         .size   loop_type_1, .-loop_type_1

    
.globl loop_type_1w
         .type   loop_type_1w, @function
loop_type_1w:
    .byte 0x90,0x67,0xe1,0xfc
    ret
         .size   loop_type_1w, .-loop_type_1w

    
.globl loop_type_2
         .type   loop_type_2, @function
loop_type_2:
    .byte 0x90,0xe2,0xfd
    ret
         .size   loop_type_2, .-loop_type_2

    
.globl loop_type_2w
         .type   loop_type_2w, @function
loop_type_2w:
    .byte 0x90,0x67,0xe2,0xfc
    ret
         .size   loop_type_2w, .-loop_type_2w

    
.globl lsl
         .type   lsl, @function
lsl:
    lsl (%eax),%ebx
    ret
         .size   lsl, .-lsl

    
.globl ltr
         .type   ltr, @function
ltr:
    ltr %bx
    ret
         .size   ltr, .-ltr

    
.globl mov_b1
         .type   mov_b1, @function
mov_b1:
    mov %bh,%cl
    ret
         .size   mov_b1, .-mov_b1

    
.globl mov_b2
         .type   mov_b2, @function
mov_b2:
    mov %al,%cl
    ret
         .size   mov_b2, .-mov_b2

    
.globl mov_b3
         .type   mov_b3, @function
mov_b3:
    mov %cl,%al
    ret
         .size   mov_b3, .-mov_b3

    
.globl mov_b4
         .type   mov_b4, @function
mov_b4:
    mov $0x10,%cl
    ret
         .size   mov_b4, .-mov_b4

    
.globl mov_b5
         .type   mov_b5, @function
mov_b5:
    mov $0x10,%al
    ret
         .size   mov_b5, .-mov_b5

    
.globl mov_b6
         .type   mov_b6, @function
mov_b6:
    mov %ah,(%ebx)
    ret
         .size   mov_b6, .-mov_b6

    
.globl mov_b7
         .type   mov_b7, @function
mov_b7:
    mov (%ebx),%ah
    ret
         .size   mov_b7, .-mov_b7

    
.globl mov_w1
         .type   mov_w1, @function
mov_w1:
    mov %ax,%cx
    ret
         .size   mov_w1, .-mov_w1

    
.globl mov_w2
         .type   mov_w2, @function
mov_w2:
    mov $0x10,%ax
    ret
         .size   mov_w2, .-mov_w2

    
.globl mov_w3
         .type   mov_w3, @function
mov_w3:
    mov %ax,(%ebx)
    ret
         .size   mov_w3, .-mov_w3

    
.globl mov_w4
         .type   mov_w4, @function
mov_w4:
    mov (%ebx),%ax
    ret
         .size   mov_w4, .-mov_w4

    
.globl mov_l1
         .type   mov_l1, @function
mov_l1:
    mov %eax,%ecx
    ret
         .size   mov_l1, .-mov_l1

    
.globl mov_l2
         .type   mov_l2, @function
mov_l2:
    mov $0x10,%eax
    ret
         .size   mov_l2, .-mov_l2

    
.globl mov_l3
         .type   mov_l3, @function
mov_l3:
    mov %eax,(%ebx)
    ret
         .size   mov_l3, .-mov_l3

    
.globl mov_l4
         .type   mov_l4, @function
mov_l4:
    mov (%ebx),%eax
    ret
         .size   mov_l4, .-mov_l4

    
.globl mov_from_cr
         .type   mov_from_cr, @function
mov_from_cr:
    mov %cr4,%eax
    ret
         .size   mov_from_cr, .-mov_from_cr

    
.globl mov_to_cr
         .type   mov_to_cr, @function
mov_to_cr:
    mov %eax,%cr4
    ret
         .size   mov_to_cr, .-mov_to_cr

    
.globl mov_from_dr
         .type   mov_from_dr, @function
mov_from_dr:
    mov %dr4,%eax
    ret
         .size   mov_from_dr, .-mov_from_dr

    
.globl mov_to_dr
         .type   mov_to_dr, @function
mov_to_dr:
    mov %eax,%dr4
    ret
         .size   mov_to_dr, .-mov_to_dr

    
.globl mov_from_tr
         .type   mov_from_tr, @function
mov_from_tr:
    mov %tr6,%eax
    ret
         .size   mov_from_tr, .-mov_from_tr

    
.globl mov_to_tr
         .type   mov_to_tr, @function
mov_to_tr:
    mov %eax,%tr6
    ret
         .size   mov_to_tr, .-mov_to_tr

    
.globl movs1
         .type   movs1, @function
movs1:
    .byte 0xa4
    ret
         .size   movs1, .-movs1

    
.globl movs2
         .type   movs2, @function
movs2:
    .byte 0x66,0xa5
    ret
         .size   movs2, .-movs2

    
.globl movs3
         .type   movs3, @function
movs3:
    .byte 0xa5
    ret
         .size   movs3, .-movs3

    
.globl movsx1
         .type   movsx1, @function
movsx1:
    movsx %al,%cx
    ret
         .size   movsx1, .-movsx1

    
.globl movsx2
         .type   movsx2, @function
movsx2:
    movsx %ax,%ecx
    ret
         .size   movsx2, .-movsx2

    
.globl movsx3
         .type   movsx3, @function
movsx3:
    movsx %al,%ecx
    ret
         .size   movsx3, .-movsx3

    
.globl movzx1
         .type   movzx1, @function
movzx1:
    movzx %al,%cx
    ret
         .size   movzx1, .-movzx1

    
.globl movzx2
         .type   movzx2, @function
movzx2:
    movzx %ax,%ecx
    ret
         .size   movzx2, .-movzx2

    
.globl movzx3
         .type   movzx3, @function
movzx3:
    movzx %al,%ecx
    ret
         .size   movzx3, .-movzx3

    
.globl mul1
         .type   mul1, @function
mul1:
    mul %bl
    ret
         .size   mul1, .-mul1

    
.globl mul2
         .type   mul2, @function
mul2:
    mul %bx
    ret
         .size   mul2, .-mul2

    
.globl mul3
         .type   mul3, @function
mul3:
    mul %ebx
    ret
         .size   mul3, .-mul3

    
.globl neg1
         .type   neg1, @function
neg1:
    neg %bl
    ret
         .size   neg1, .-neg1

    
.globl neg2
         .type   neg2, @function
neg2:
    neg %bx
    ret
         .size   neg2, .-neg2

    
.globl neg3
         .type   neg3, @function
neg3:
    neg %ebx
    ret
         .size   neg3, .-neg3

    
.globl nop1
         .type   nop1, @function
nop1:
    .byte 0x90
    ret
         .size   nop1, .-nop1

    
.globl nop2
         .type   nop2, @function
nop2:
    .byte 0x66,0x90
    ret
         .size   nop2, .-nop2

    
.globl nop3
         .type   nop3, @function
nop3:
    .byte 0x0f,0x1f,0x00
    ret
         .size   nop3, .-nop3

    
.globl nop4
         .type   nop4, @function
nop4:
    .byte 0x0f,0x1f,0x40,0x00
    ret
         .size   nop4, .-nop4

    
.globl nop5
         .type   nop5, @function
nop5:
    .byte 0x0f,0x1f,0x44,0x00,0x00
    ret
         .size   nop5, .-nop5

    
.globl nop6
         .type   nop6, @function
nop6:
    .byte 0x66,0x0f,0x1f,0x44,0x00,0x00
    ret
         .size   nop6, .-nop6

    
.globl nop7
         .type   nop7, @function
nop7:
    .byte 0x0f,0x1f,0x80,0x00,0x00,0x00,0x00
    ret
         .size   nop7, .-nop7

    
.globl not1
         .type   not1, @function
not1:
    not %bl
    ret
         .size   not1, .-not1

    
.globl not2
         .type   not2, @function
not2:
    not %bx
    ret
         .size   not2, .-not2

    
.globl not3
         .type   not3, @function
not3:
    not %ebx
    ret
         .size   not3, .-not3

    
.globl or1
         .type   or1, @function
or1:
    .byte 0x0c,0x02
    ret
         .size   or1, .-or1

    
.globl or2
         .type   or2, @function
or2:
    .byte 0x0c,0xfe
    ret
         .size   or2, .-or2

    
.globl or3
         .type   or3, @function
or3:
    .byte 0x66,0x0d,0x02,0x00
    ret
         .size   or3, .-or3

    
.globl or4
         .type   or4, @function
or4:
    .byte 0x66,0x0d,0xfe,0xff
    ret
         .size   or4, .-or4

    
.globl or5
         .type   or5, @function
or5:
    .byte 0x0d,0x02,0x00,0x00,0x00
    ret
         .size   or5, .-or5

    
.globl or6
         .type   or6, @function
or6:
    .byte 0x0d,0xfe,0xff,0xff,0xff
    ret
         .size   or6, .-or6

    
.globl or7
         .type   or7, @function
or7:
    orl 8(%ebp), %eax
    ret
         .size   or7, .-or7

    
.globl or8
         .type   or8, @function
or8:
    orl $0x02,%eax
    ret
         .size   or8, .-or8

    
.globl or9
         .type   or9, @function
or9:
    orl $0xf2,%eax
    ret
         .size   or9, .-or9

    
.globl out1
         .type   out1, @function
out1:
    .byte 0xe6,0x12
    ret
         .size   out1, .-out1

    
.globl out2
         .type   out2, @function
out2:
    .byte 0x66,0xe7,0x12
    ret
         .size   out2, .-out2

    
.globl out3
         .type   out3, @function
out3:
    .byte 0xe7,0x12
    ret
         .size   out3, .-out3

    
.globl out4
         .type   out4, @function
out4:
    .byte 0xee
    ret
         .size   out4, .-out4

    
.globl out5
         .type   out5, @function
out5:
    .byte 0x66,0xef
    ret
         .size   out5, .-out5

    
.globl out6
         .type   out6, @function
out6:
    .byte 0xef
    ret
         .size   out6, .-out6

    
.globl outs1
         .type   outs1, @function
outs1:
    .byte 0x6e
    ret
         .size   outs1, .-outs1

    
.globl outs2
         .type   outs2, @function
outs2:
    .byte 0x66,0x6f
    ret
         .size   outs2, .-outs2

    
.globl outs3
         .type   outs3, @function
outs3:
    .byte 0x6f
    ret
         .size   outs3, .-outs3

    
.globl pop1
         .type   pop1, @function
pop1:
    popw (%eax)
    ret
         .size   pop1, .-pop1

    
.globl pop2
         .type   pop2, @function
pop2:
    pop (%eax)
    ret
         .size   pop2, .-pop2

    
.globl pop3
         .type   pop3, @function
pop3:
    pop %ax
    ret
         .size   pop3, .-pop3

    
.globl pop4
         .type   pop4, @function
pop4:
    pop %eax
    ret
         .size   pop4, .-pop4

    
.globl pop_seg1
         .type   pop_seg1, @function
pop_seg1:
    pop %ds
    ret
         .size   pop_seg1, .-pop_seg1

    
.globl pop_seg2
         .type   pop_seg2, @function
pop_seg2:
    pop %es
    ret
         .size   pop_seg2, .-pop_seg2

    
.globl pop_seg3
         .type   pop_seg3, @function
pop_seg3:
    pop %fs
    ret
         .size   pop_seg3, .-pop_seg3

    
.globl pop_seg4
         .type   pop_seg4, @function
pop_seg4:
    pop %gs
    ret
         .size   pop_seg4, .-pop_seg4

    
.globl pop_seg5
         .type   pop_seg5, @function
pop_seg5:
    pop %ss
    ret
         .size   pop_seg5, .-pop_seg5

    
.globl popa1
         .type   popa1, @function
popa1:
    .byte 0x61
    ret
         .size   popa1, .-popa1

    
.globl popa2
         .type   popa2, @function
popa2:
    .byte 0x66,0x61
    ret
         .size   popa2, .-popa2

    
.globl popf1
         .type   popf1, @function
popf1:
    .byte 0x9d
    ret
         .size   popf1, .-popf1

    
.globl popf2
         .type   popf2, @function
popf2:
    .byte 0x66,0x9d
    ret
         .size   popf2, .-popf2

    
.globl push1
         .type   push1, @function
push1:
    pushw (%eax)
    ret
         .size   push1, .-push1

    
.globl push2
         .type   push2, @function
push2:
    push (%eax)
    ret
         .size   push2, .-push2

    
.globl push3
         .type   push3, @function
push3:
    push %ax
    ret
         .size   push3, .-push3

    
.globl push4
         .type   push4, @function
push4:
    push %eax
    ret
         .size   push4, .-push4

    
.globl push5
         .type   push5, @function
push5:
    push $0x11
    ret
         .size   push5, .-push5

    
.globl push6
         .type   push6, @function
push6:
    push $0x1122
    ret
         .size   push6, .-push6

    
.globl push7
         .type   push7, @function
push7:
    push $0x11223344
    ret
         .size   push7, .-push7

    
.globl push_seg1
         .type   push_seg1, @function
push_seg1:
    push %ds
    ret
         .size   push_seg1, .-push_seg1

    
.globl push_seg2
         .type   push_seg2, @function
push_seg2:
    push %es
    ret
         .size   push_seg2, .-push_seg2

    
.globl push_seg3
         .type   push_seg3, @function
push_seg3:
    push %fs
    ret
         .size   push_seg3, .-push_seg3

    
.globl push_seg4
         .type   push_seg4, @function
push_seg4:
    push %gs
    ret
         .size   push_seg4, .-push_seg4

    
.globl push_seg5
         .type   push_seg5, @function
push_seg5:
    push %ss
    ret
         .size   push_seg5, .-push_seg5

    
.globl pusha1
         .type   pusha1, @function
pusha1:
    .byte 0x60
    ret
         .size   pusha1, .-pusha1

    
.globl pusha2
         .type   pusha2, @function
pusha2:
    .byte 0x66,0x60
    ret
         .size   pusha2, .-pusha2

    
.globl pushf1
         .type   pushf1, @function
pushf1:
    .byte 0x9c
    ret
         .size   pushf1, .-pushf1

    
.globl pushf2
         .type   pushf2, @function
pushf2:
    .byte 0x66,0x9c
    ret
         .size   pushf2, .-pushf2

    
.globl rotate_once_rol_b
         .type   rotate_once_rol_b, @function
rotate_once_rol_b:
    .byte 0xd0,0x00
    ret
         .size   rotate_once_rol_b, .-rotate_once_rol_b

    
.globl rotate_once_rol_w
         .type   rotate_once_rol_w, @function
rotate_once_rol_w:
    .byte 0x66,0xd1,0x00
    ret
         .size   rotate_once_rol_w, .-rotate_once_rol_w

    
.globl rotate_once_rol_l
         .type   rotate_once_rol_l, @function
rotate_once_rol_l:
    .byte 0xd1,0x00
    ret
         .size   rotate_once_rol_l, .-rotate_once_rol_l

    
.globl rotate_once_ror_b
         .type   rotate_once_ror_b, @function
rotate_once_ror_b:
    .byte 0xd0,0x08
    ret
         .size   rotate_once_ror_b, .-rotate_once_ror_b

    
.globl rotate_once_ror_w
         .type   rotate_once_ror_w, @function
rotate_once_ror_w:
    .byte 0x66,0xd1,0x08
    ret
         .size   rotate_once_ror_w, .-rotate_once_ror_w

    
.globl rotate_once_ror_l
         .type   rotate_once_ror_l, @function
rotate_once_ror_l:
    .byte 0xd1,0x08
    ret
         .size   rotate_once_ror_l, .-rotate_once_ror_l

    
.globl rotate_once_rcl_b
         .type   rotate_once_rcl_b, @function
rotate_once_rcl_b:
    .byte 0xd0,0x10
    ret
         .size   rotate_once_rcl_b, .-rotate_once_rcl_b

    
.globl rotate_once_rcl_w
         .type   rotate_once_rcl_w, @function
rotate_once_rcl_w:
    .byte 0x66,0xd1,0x10
    ret
         .size   rotate_once_rcl_w, .-rotate_once_rcl_w

    
.globl rotate_once_rcl_l
         .type   rotate_once_rcl_l, @function
rotate_once_rcl_l:
    .byte 0xd1,0x10
    ret
         .size   rotate_once_rcl_l, .-rotate_once_rcl_l

    
.globl rotate_once_rcr_b
         .type   rotate_once_rcr_b, @function
rotate_once_rcr_b:
    .byte 0xd0,0x18
    ret
         .size   rotate_once_rcr_b, .-rotate_once_rcr_b

    
.globl rotate_once_rcr_w
         .type   rotate_once_rcr_w, @function
rotate_once_rcr_w:
    .byte 0x66,0xd1,0x18
    ret
         .size   rotate_once_rcr_w, .-rotate_once_rcr_w

    
.globl rotate_once_rcr_l
         .type   rotate_once_rcr_l, @function
rotate_once_rcr_l:
    .byte 0xd1,0x18
    ret
         .size   rotate_once_rcr_l, .-rotate_once_rcr_l

    
.globl rotate_once_shl_b
         .type   rotate_once_shl_b, @function
rotate_once_shl_b:
    .byte 0xd0,0x20
    ret
         .size   rotate_once_shl_b, .-rotate_once_shl_b

    
.globl rotate_once_shl_w
         .type   rotate_once_shl_w, @function
rotate_once_shl_w:
    .byte 0x66,0xd1,0x20
    ret
         .size   rotate_once_shl_w, .-rotate_once_shl_w

    
.globl rotate_once_shl_l
         .type   rotate_once_shl_l, @function
rotate_once_shl_l:
    .byte 0xd1,0x20
    ret
         .size   rotate_once_shl_l, .-rotate_once_shl_l

    
.globl rotate_once_shr_b
         .type   rotate_once_shr_b, @function
rotate_once_shr_b:
    .byte 0xd0,0x28
    ret
         .size   rotate_once_shr_b, .-rotate_once_shr_b

    
.globl rotate_once_shr_w
         .type   rotate_once_shr_w, @function
rotate_once_shr_w:
    .byte 0x66,0xd1,0x28
    ret
         .size   rotate_once_shr_w, .-rotate_once_shr_w

    
.globl rotate_once_shr_l
         .type   rotate_once_shr_l, @function
rotate_once_shr_l:
    .byte 0xd1,0x28
    ret
         .size   rotate_once_shr_l, .-rotate_once_shr_l

    
.globl rotate_once_sar_b
         .type   rotate_once_sar_b, @function
rotate_once_sar_b:
    .byte 0xd0,0x38
    ret
         .size   rotate_once_sar_b, .-rotate_once_sar_b

    
.globl rotate_once_sar_w
         .type   rotate_once_sar_w, @function
rotate_once_sar_w:
    .byte 0x66,0xd1,0x38
    ret
         .size   rotate_once_sar_w, .-rotate_once_sar_w

    
.globl rotate_once_sar_l
         .type   rotate_once_sar_l, @function
rotate_once_sar_l:
    .byte 0xd1,0x38
    ret
         .size   rotate_once_sar_l, .-rotate_once_sar_l

    
.globl rotate_cl_controlled_rol_b
         .type   rotate_cl_controlled_rol_b, @function
rotate_cl_controlled_rol_b:
    .byte 0xd2,0x00
    ret
         .size   rotate_cl_controlled_rol_b, .-rotate_cl_controlled_rol_b

    
.globl rotate_cl_controlled_rol_w
         .type   rotate_cl_controlled_rol_w, @function
rotate_cl_controlled_rol_w:
    .byte 0x66,0xd3,0x00
    ret
         .size   rotate_cl_controlled_rol_w, .-rotate_cl_controlled_rol_w

    
.globl rotate_cl_controlled_rol_l
         .type   rotate_cl_controlled_rol_l, @function
rotate_cl_controlled_rol_l:
    .byte 0xd3,0x00
    ret
         .size   rotate_cl_controlled_rol_l, .-rotate_cl_controlled_rol_l

    
.globl rotate_cl_controlled_ror_b
         .type   rotate_cl_controlled_ror_b, @function
rotate_cl_controlled_ror_b:
    .byte 0xd2,0x08
    ret
         .size   rotate_cl_controlled_ror_b, .-rotate_cl_controlled_ror_b

    
.globl rotate_cl_controlled_ror_w
         .type   rotate_cl_controlled_ror_w, @function
rotate_cl_controlled_ror_w:
    .byte 0x66,0xd3,0x08
    ret
         .size   rotate_cl_controlled_ror_w, .-rotate_cl_controlled_ror_w

    
.globl rotate_cl_controlled_ror_l
         .type   rotate_cl_controlled_ror_l, @function
rotate_cl_controlled_ror_l:
    .byte 0xd3,0x08
    ret
         .size   rotate_cl_controlled_ror_l, .-rotate_cl_controlled_ror_l

    
.globl rotate_cl_controlled_rcl_b
         .type   rotate_cl_controlled_rcl_b, @function
rotate_cl_controlled_rcl_b:
    .byte 0xd2,0x10
    ret
         .size   rotate_cl_controlled_rcl_b, .-rotate_cl_controlled_rcl_b

    
.globl rotate_cl_controlled_rcl_w
         .type   rotate_cl_controlled_rcl_w, @function
rotate_cl_controlled_rcl_w:
    .byte 0x66,0xd3,0x10
    ret
         .size   rotate_cl_controlled_rcl_w, .-rotate_cl_controlled_rcl_w

    
.globl rotate_cl_controlled_rcl_l
         .type   rotate_cl_controlled_rcl_l, @function
rotate_cl_controlled_rcl_l:
    .byte 0xd3,0x10
    ret
         .size   rotate_cl_controlled_rcl_l, .-rotate_cl_controlled_rcl_l

    
.globl rotate_cl_controlled_rcr_b
         .type   rotate_cl_controlled_rcr_b, @function
rotate_cl_controlled_rcr_b:
    .byte 0xd2,0x18
    ret
         .size   rotate_cl_controlled_rcr_b, .-rotate_cl_controlled_rcr_b

    
.globl rotate_cl_controlled_rcr_w
         .type   rotate_cl_controlled_rcr_w, @function
rotate_cl_controlled_rcr_w:
    .byte 0x66,0xd3,0x18
    ret
         .size   rotate_cl_controlled_rcr_w, .-rotate_cl_controlled_rcr_w

    
.globl rotate_cl_controlled_rcr_l
         .type   rotate_cl_controlled_rcr_l, @function
rotate_cl_controlled_rcr_l:
    .byte 0xd3,0x18
    ret
         .size   rotate_cl_controlled_rcr_l, .-rotate_cl_controlled_rcr_l

    
.globl rotate_cl_controlled_shl_b
         .type   rotate_cl_controlled_shl_b, @function
rotate_cl_controlled_shl_b:
    .byte 0xd2,0x20
    ret
         .size   rotate_cl_controlled_shl_b, .-rotate_cl_controlled_shl_b

    
.globl rotate_cl_controlled_shl_w
         .type   rotate_cl_controlled_shl_w, @function
rotate_cl_controlled_shl_w:
    .byte 0x66,0xd3,0x20
    ret
         .size   rotate_cl_controlled_shl_w, .-rotate_cl_controlled_shl_w

    
.globl rotate_cl_controlled_shl_l
         .type   rotate_cl_controlled_shl_l, @function
rotate_cl_controlled_shl_l:
    .byte 0xd3,0x20
    ret
         .size   rotate_cl_controlled_shl_l, .-rotate_cl_controlled_shl_l

    
.globl rotate_cl_controlled_shr_b
         .type   rotate_cl_controlled_shr_b, @function
rotate_cl_controlled_shr_b:
    .byte 0xd2,0x28
    ret
         .size   rotate_cl_controlled_shr_b, .-rotate_cl_controlled_shr_b

    
.globl rotate_cl_controlled_shr_w
         .type   rotate_cl_controlled_shr_w, @function
rotate_cl_controlled_shr_w:
    .byte 0x66,0xd3,0x28
    ret
         .size   rotate_cl_controlled_shr_w, .-rotate_cl_controlled_shr_w

    
.globl rotate_cl_controlled_shr_l
         .type   rotate_cl_controlled_shr_l, @function
rotate_cl_controlled_shr_l:
    .byte 0xd3,0x28
    ret
         .size   rotate_cl_controlled_shr_l, .-rotate_cl_controlled_shr_l

    
.globl rotate_cl_controlled_sar_b
         .type   rotate_cl_controlled_sar_b, @function
rotate_cl_controlled_sar_b:
    .byte 0xd2,0x38
    ret
         .size   rotate_cl_controlled_sar_b, .-rotate_cl_controlled_sar_b

    
.globl rotate_cl_controlled_sar_w
         .type   rotate_cl_controlled_sar_w, @function
rotate_cl_controlled_sar_w:
    .byte 0x66,0xd3,0x38
    ret
         .size   rotate_cl_controlled_sar_w, .-rotate_cl_controlled_sar_w

    
.globl rotate_cl_controlled_sar_l
         .type   rotate_cl_controlled_sar_l, @function
rotate_cl_controlled_sar_l:
    .byte 0xd3,0x38
    ret
         .size   rotate_cl_controlled_sar_l, .-rotate_cl_controlled_sar_l

    
.globl rotate_imm8_rol_b
         .type   rotate_imm8_rol_b, @function
rotate_imm8_rol_b:
    .byte 0xc0,0x00,0x04
    ret
         .size   rotate_imm8_rol_b, .-rotate_imm8_rol_b

    
.globl rotate_imm8_rol_w
         .type   rotate_imm8_rol_w, @function
rotate_imm8_rol_w:
    .byte 0x66,0xc1,0x00,0x04
    ret
         .size   rotate_imm8_rol_w, .-rotate_imm8_rol_w

    
.globl rotate_imm8_rol_l
         .type   rotate_imm8_rol_l, @function
rotate_imm8_rol_l:
    .byte 0xc1,0x00,0x04
    ret
         .size   rotate_imm8_rol_l, .-rotate_imm8_rol_l

    
.globl rotate_imm8_ror_b
         .type   rotate_imm8_ror_b, @function
rotate_imm8_ror_b:
    .byte 0xc0,0x08,0x04
    ret
         .size   rotate_imm8_ror_b, .-rotate_imm8_ror_b

    
.globl rotate_imm8_ror_w
         .type   rotate_imm8_ror_w, @function
rotate_imm8_ror_w:
    .byte 0x66,0xc1,0x08,0x04
    ret
         .size   rotate_imm8_ror_w, .-rotate_imm8_ror_w

    
.globl rotate_imm8_ror_l
         .type   rotate_imm8_ror_l, @function
rotate_imm8_ror_l:
    .byte 0xc1,0x08,0x04
    ret
         .size   rotate_imm8_ror_l, .-rotate_imm8_ror_l

    
.globl rotate_imm8_rcl_b
         .type   rotate_imm8_rcl_b, @function
rotate_imm8_rcl_b:
    .byte 0xc0,0x10,0x04
    ret
         .size   rotate_imm8_rcl_b, .-rotate_imm8_rcl_b

    
.globl rotate_imm8_rcl_w
         .type   rotate_imm8_rcl_w, @function
rotate_imm8_rcl_w:
    .byte 0x66,0xc1,0x10,0x04
    ret
         .size   rotate_imm8_rcl_w, .-rotate_imm8_rcl_w

    
.globl rotate_imm8_rcl_l
         .type   rotate_imm8_rcl_l, @function
rotate_imm8_rcl_l:
    .byte 0xc1,0x10,0x04
    ret
         .size   rotate_imm8_rcl_l, .-rotate_imm8_rcl_l

    
.globl rotate_imm8_rcr_b
         .type   rotate_imm8_rcr_b, @function
rotate_imm8_rcr_b:
    .byte 0xc0,0x18,0x04
    ret
         .size   rotate_imm8_rcr_b, .-rotate_imm8_rcr_b

    
.globl rotate_imm8_rcr_w
         .type   rotate_imm8_rcr_w, @function
rotate_imm8_rcr_w:
    .byte 0x66,0xc1,0x18,0x04
    ret
         .size   rotate_imm8_rcr_w, .-rotate_imm8_rcr_w

    
.globl rotate_imm8_rcr_l
         .type   rotate_imm8_rcr_l, @function
rotate_imm8_rcr_l:
    .byte 0xc1,0x18,0x04
    ret
         .size   rotate_imm8_rcr_l, .-rotate_imm8_rcr_l

    
.globl rotate_imm8_shl_b
         .type   rotate_imm8_shl_b, @function
rotate_imm8_shl_b:
    .byte 0xc0,0x20,0x04
    ret
         .size   rotate_imm8_shl_b, .-rotate_imm8_shl_b

    
.globl rotate_imm8_shl_w
         .type   rotate_imm8_shl_w, @function
rotate_imm8_shl_w:
    .byte 0x66,0xc1,0x20,0x04
    ret
         .size   rotate_imm8_shl_w, .-rotate_imm8_shl_w

    
.globl rotate_imm8_shl_l
         .type   rotate_imm8_shl_l, @function
rotate_imm8_shl_l:
    .byte 0xc1,0x20,0x04
    ret
         .size   rotate_imm8_shl_l, .-rotate_imm8_shl_l

    
.globl rotate_imm8_shr_b
         .type   rotate_imm8_shr_b, @function
rotate_imm8_shr_b:
    .byte 0xc0,0x28,0x04
    ret
         .size   rotate_imm8_shr_b, .-rotate_imm8_shr_b

    
.globl rotate_imm8_shr_w
         .type   rotate_imm8_shr_w, @function
rotate_imm8_shr_w:
    .byte 0x66,0xc1,0x28,0x04
    ret
         .size   rotate_imm8_shr_w, .-rotate_imm8_shr_w

    
.globl rotate_imm8_shr_l
         .type   rotate_imm8_shr_l, @function
rotate_imm8_shr_l:
    .byte 0xc1,0x28,0x04
    ret
         .size   rotate_imm8_shr_l, .-rotate_imm8_shr_l

    
.globl rotate_imm8_sar_b
         .type   rotate_imm8_sar_b, @function
rotate_imm8_sar_b:
    .byte 0xc0,0x38,0x04
    ret
         .size   rotate_imm8_sar_b, .-rotate_imm8_sar_b

    
.globl rotate_imm8_sar_w
         .type   rotate_imm8_sar_w, @function
rotate_imm8_sar_w:
    .byte 0x66,0xc1,0x38,0x04
    ret
         .size   rotate_imm8_sar_w, .-rotate_imm8_sar_w

    
.globl rotate_imm8_sar_l
         .type   rotate_imm8_sar_l, @function
rotate_imm8_sar_l:
    .byte 0xc1,0x38,0x04
    ret
         .size   rotate_imm8_sar_l, .-rotate_imm8_sar_l

    
.globl rep_ins1b
         .type   rep_ins1b, @function
rep_ins1b:
    .byte 0xf2,0x6c
    ret
         .size   rep_ins1b, .-rep_ins1b

    
.globl rep_ins1w
         .type   rep_ins1w, @function
rep_ins1w:
    .byte 0xf2,0x66,0x6d
    ret
         .size   rep_ins1w, .-rep_ins1w

    
.globl rep_ins1l
         .type   rep_ins1l, @function
rep_ins1l:
    .byte 0xf2,0x6d
    ret
         .size   rep_ins1l, .-rep_ins1l

    
.globl rep_ins2b
         .type   rep_ins2b, @function
rep_ins2b:
    .byte 0xf3,0x6c
    ret
         .size   rep_ins2b, .-rep_ins2b

    
.globl rep_ins2w
         .type   rep_ins2w, @function
rep_ins2w:
    .byte 0xf3,0x66,0x6d
    ret
         .size   rep_ins2w, .-rep_ins2w

    
.globl rep_ins2l
         .type   rep_ins2l, @function
rep_ins2l:
    .byte 0xf3,0x6d
    ret
         .size   rep_ins2l, .-rep_ins2l

    
.globl rep_movs1b
         .type   rep_movs1b, @function
rep_movs1b:
    .byte 0xf2,0xa4
    ret
         .size   rep_movs1b, .-rep_movs1b

    
.globl rep_movs1w
         .type   rep_movs1w, @function
rep_movs1w:
    .byte 0xf2,0x66,0xa5
    ret
         .size   rep_movs1w, .-rep_movs1w

    
.globl rep_movs1l
         .type   rep_movs1l, @function
rep_movs1l:
    .byte 0xf2,0xa5
    ret
         .size   rep_movs1l, .-rep_movs1l

    
.globl rep_movs2b
         .type   rep_movs2b, @function
rep_movs2b:
    .byte 0xf3,0xa4
    ret
         .size   rep_movs2b, .-rep_movs2b

    
.globl rep_movs2w
         .type   rep_movs2w, @function
rep_movs2w:
    .byte 0xf3,0x66,0xa5
    ret
         .size   rep_movs2w, .-rep_movs2w

    
.globl rep_movs2l
         .type   rep_movs2l, @function
rep_movs2l:
    .byte 0xf3,0xa5
    ret
         .size   rep_movs2l, .-rep_movs2l

    
.globl rep_outs1b
         .type   rep_outs1b, @function
rep_outs1b:
    .byte 0xf2,0x6e
    ret
         .size   rep_outs1b, .-rep_outs1b

    
.globl rep_outs1w
         .type   rep_outs1w, @function
rep_outs1w:
    .byte 0xf2,0x66,0x6f
    ret
         .size   rep_outs1w, .-rep_outs1w

    
.globl rep_outs1l
         .type   rep_outs1l, @function
rep_outs1l:
    .byte 0xf2,0x6f
    ret
         .size   rep_outs1l, .-rep_outs1l

    
.globl rep_outs2b
         .type   rep_outs2b, @function
rep_outs2b:
    .byte 0xf3,0x6e
    ret
         .size   rep_outs2b, .-rep_outs2b

    
.globl rep_outs2w
         .type   rep_outs2w, @function
rep_outs2w:
    .byte 0xf3,0x66,0x6f
    ret
         .size   rep_outs2w, .-rep_outs2w

    
.globl rep_outs2l
         .type   rep_outs2l, @function
rep_outs2l:
    .byte 0xf3,0x6f
    ret
         .size   rep_outs2l, .-rep_outs2l

    
.globl rep_stos1b
         .type   rep_stos1b, @function
rep_stos1b:
    .byte 0xf2,0xaa
    ret
         .size   rep_stos1b, .-rep_stos1b

    
.globl rep_stos1w
         .type   rep_stos1w, @function
rep_stos1w:
    .byte 0xf2,0x66,0xab
    ret
         .size   rep_stos1w, .-rep_stos1w

    
.globl rep_stos1l
         .type   rep_stos1l, @function
rep_stos1l:
    .byte 0xf2,0xab
    ret
         .size   rep_stos1l, .-rep_stos1l

    
.globl rep_stos2b
         .type   rep_stos2b, @function
rep_stos2b:
    .byte 0xf3,0xaa
    ret
         .size   rep_stos2b, .-rep_stos2b

    
.globl rep_stos2w
         .type   rep_stos2w, @function
rep_stos2w:
    .byte 0xf3,0x66,0xab
    ret
         .size   rep_stos2w, .-rep_stos2w

    
.globl rep_stos2l
         .type   rep_stos2l, @function
rep_stos2l:
    .byte 0xf3,0xab
    ret
         .size   rep_stos2l, .-rep_stos2l

    
.globl rep_cmps1b
         .type   rep_cmps1b, @function
rep_cmps1b:
    .byte 0xf2,0xa6
    ret
         .size   rep_cmps1b, .-rep_cmps1b

    
.globl rep_cmps1w
         .type   rep_cmps1w, @function
rep_cmps1w:
    .byte 0xf2,0x66,0xa7
    ret
         .size   rep_cmps1w, .-rep_cmps1w

    
.globl rep_cmps1l
         .type   rep_cmps1l, @function
rep_cmps1l:
    .byte 0xf2,0xa7
    ret
         .size   rep_cmps1l, .-rep_cmps1l

    
.globl rep_cmps2b
         .type   rep_cmps2b, @function
rep_cmps2b:
    .byte 0xf3,0xa6
    ret
         .size   rep_cmps2b, .-rep_cmps2b

    
.globl rep_cmps2w
         .type   rep_cmps2w, @function
rep_cmps2w:
    .byte 0xf3,0x66,0xa7
    ret
         .size   rep_cmps2w, .-rep_cmps2w

    
.globl rep_cmps2l
         .type   rep_cmps2l, @function
rep_cmps2l:
    .byte 0xf3,0xa7
    ret
         .size   rep_cmps2l, .-rep_cmps2l

    
.globl rep_scas1b
         .type   rep_scas1b, @function
rep_scas1b:
    .byte 0xf2,0xae
    ret
         .size   rep_scas1b, .-rep_scas1b

    
.globl rep_scas1w
         .type   rep_scas1w, @function
rep_scas1w:
    .byte 0xf2,0x66,0xaf
    ret
         .size   rep_scas1w, .-rep_scas1w

    
.globl rep_scas1l
         .type   rep_scas1l, @function
rep_scas1l:
    .byte 0xf2,0xaf
    ret
         .size   rep_scas1l, .-rep_scas1l

    
.globl rep_scas2b
         .type   rep_scas2b, @function
rep_scas2b:
    .byte 0xf3,0xae
    ret
         .size   rep_scas2b, .-rep_scas2b

    
.globl rep_scas2w
         .type   rep_scas2w, @function
rep_scas2w:
    .byte 0xf3,0x66,0xaf
    ret
         .size   rep_scas2w, .-rep_scas2w

    
.globl rep_scas2l
         .type   rep_scas2l, @function
rep_scas2l:
    .byte 0xf3,0xaf
    ret
         .size   rep_scas2l, .-rep_scas2l

    
.globl ret1
         .type   ret1, @function
ret1:
    .byte 0xc3
    ret
         .size   ret1, .-ret1

    
.globl ret2
         .type   ret2, @function
ret2:
    .byte 0x66,0xc3
    ret
         .size   ret2, .-ret2

    
.globl ret3
         .type   ret3, @function
ret3:
    .byte 0xcb
    ret
         .size   ret3, .-ret3

    
.globl ret4
         .type   ret4, @function
ret4:
    .byte 0x66,0xcb
    ret
         .size   ret4, .-ret4

    
.globl ret_pop1
         .type   ret_pop1, @function
ret_pop1:
    .byte 0xc2,0x34,0x12
    ret
         .size   ret_pop1, .-ret_pop1

    
.globl ret_pop2
         .type   ret_pop2, @function
ret_pop2:
    .byte 0x66,0xc2,0x34,0x12
    ret
         .size   ret_pop2, .-ret_pop2

    
.globl ret_pop3
         .type   ret_pop3, @function
ret_pop3:
    .byte 0xca,0x34,0x12
    ret
         .size   ret_pop3, .-ret_pop3

    
.globl ret_pop4
         .type   ret_pop4, @function
ret_pop4:
    .byte 0x66,0xca,0x34,0x12
    ret
         .size   ret_pop4, .-ret_pop4

    
.globl sahf
         .type   sahf, @function
sahf:
    sahf
    ret
         .size   sahf, .-sahf

    
.globl sbb1
         .type   sbb1, @function
sbb1:
    sbb $0xe8,%al
    ret
         .size   sbb1, .-sbb1

    
.globl sbb2
         .type   sbb2, @function
sbb2:
    sbb $0xe8,%ax
    ret
         .size   sbb2, .-sbb2

    
.globl sbb3
         .type   sbb3, @function
sbb3:
    sbb $0xe8,%eax
    ret
         .size   sbb3, .-sbb3

    
.globl sbb4
         .type   sbb4, @function
sbb4:
    sbbb $0xe8,(%eax)
    ret
         .size   sbb4, .-sbb4

    
.globl sbb5
         .type   sbb5, @function
sbb5:
    sbbw $0xe8,(%eax)
    ret
         .size   sbb5, .-sbb5

    
.globl sbb6
         .type   sbb6, @function
sbb6:
    sbbl $0xe8,(%eax)
    ret
         .size   sbb6, .-sbb6

    
.globl sbb7
         .type   sbb7, @function
sbb7:
    sbb %ax,%bx
    ret
         .size   sbb7, .-sbb7

    
.globl scas1
         .type   scas1, @function
scas1:
    .byte 0xae
    ret
         .size   scas1, .-scas1

    
.globl scas2
         .type   scas2, @function
scas2:
    .byte 0x66,0xaf
    ret
         .size   scas2, .-scas2

    
.globl scas3
         .type   scas3, @function
scas3:
    .byte 0xaf
    ret
         .size   scas3, .-scas3

    
.globl setcc_with_code_0
         .type   setcc_with_code_0, @function
setcc_with_code_0:
    .byte 0x0f,0x90,0x01
    ret
         .size   setcc_with_code_0, .-setcc_with_code_0

    
.globl setcc_with_code_1
         .type   setcc_with_code_1, @function
setcc_with_code_1:
    .byte 0x0f,0x91,0x01
    ret
         .size   setcc_with_code_1, .-setcc_with_code_1

    
.globl setcc_with_code_2
         .type   setcc_with_code_2, @function
setcc_with_code_2:
    .byte 0x0f,0x92,0x01
    ret
         .size   setcc_with_code_2, .-setcc_with_code_2

    
.globl setcc_with_code_3
         .type   setcc_with_code_3, @function
setcc_with_code_3:
    .byte 0x0f,0x93,0x01
    ret
         .size   setcc_with_code_3, .-setcc_with_code_3

    
.globl setcc_with_code_4
         .type   setcc_with_code_4, @function
setcc_with_code_4:
    .byte 0x0f,0x94,0x01
    ret
         .size   setcc_with_code_4, .-setcc_with_code_4

    
.globl setcc_with_code_5
         .type   setcc_with_code_5, @function
setcc_with_code_5:
    .byte 0x0f,0x95,0x01
    ret
         .size   setcc_with_code_5, .-setcc_with_code_5

    
.globl setcc_with_code_6
         .type   setcc_with_code_6, @function
setcc_with_code_6:
    .byte 0x0f,0x96,0x01
    ret
         .size   setcc_with_code_6, .-setcc_with_code_6

    
.globl setcc_with_code_7
         .type   setcc_with_code_7, @function
setcc_with_code_7:
    .byte 0x0f,0x97,0x01
    ret
         .size   setcc_with_code_7, .-setcc_with_code_7

    
.globl setcc_with_code_8
         .type   setcc_with_code_8, @function
setcc_with_code_8:
    .byte 0x0f,0x98,0x01
    ret
         .size   setcc_with_code_8, .-setcc_with_code_8

    
.globl setcc_with_code_9
         .type   setcc_with_code_9, @function
setcc_with_code_9:
    .byte 0x0f,0x99,0x01
    ret
         .size   setcc_with_code_9, .-setcc_with_code_9

    
.globl setcc_with_code_a
         .type   setcc_with_code_a, @function
setcc_with_code_a:
    .byte 0x0f,0x9a,0x01
    ret
         .size   setcc_with_code_a, .-setcc_with_code_a

    
.globl setcc_with_code_b
         .type   setcc_with_code_b, @function
setcc_with_code_b:
    .byte 0x0f,0x9b,0x01
    ret
         .size   setcc_with_code_b, .-setcc_with_code_b

    
.globl setcc_with_code_c
         .type   setcc_with_code_c, @function
setcc_with_code_c:
    .byte 0x0f,0x9c,0x01
    ret
         .size   setcc_with_code_c, .-setcc_with_code_c

    
.globl setcc_with_code_d
         .type   setcc_with_code_d, @function
setcc_with_code_d:
    .byte 0x0f,0x9d,0x01
    ret
         .size   setcc_with_code_d, .-setcc_with_code_d

    
.globl setcc_with_code_e
         .type   setcc_with_code_e, @function
setcc_with_code_e:
    .byte 0x0f,0x9e,0x01
    ret
         .size   setcc_with_code_e, .-setcc_with_code_e

    
.globl setcc_with_code_f
         .type   setcc_with_code_f, @function
setcc_with_code_f:
    .byte 0x0f,0x9f,0x01
    ret
         .size   setcc_with_code_f, .-setcc_with_code_f

    
.globl sgdt
         .type   sgdt, @function
sgdt:
    sgdt (%eax)
    ret
         .size   sgdt, .-sgdt

    
.globl sidt
         .type   sidt, @function
sidt:
    sidt (%eax)
    ret
         .size   sidt, .-sidt

    
.globl shld1
         .type   shld1, @function
shld1:
    shld $4,%ax,%bx
    ret
         .size   shld1, .-shld1

    
.globl shld2
         .type   shld2, @function
shld2:
    shld $4,%eax,%ebx
    ret
         .size   shld2, .-shld2

    
.globl shld3
         .type   shld3, @function
shld3:
    shld %cl,%ax,%bx
    ret
         .size   shld3, .-shld3

    
.globl shld4
         .type   shld4, @function
shld4:
    shld %cl,%eax,%ebx
    ret
         .size   shld4, .-shld4

    
.globl shrd1
         .type   shrd1, @function
shrd1:
    shrd $4,%ax,%bx
    ret
         .size   shrd1, .-shrd1

    
.globl shrd2
         .type   shrd2, @function
shrd2:
    shrd $4,%eax,%ebx
    ret
         .size   shrd2, .-shrd2

    
.globl shrd3
         .type   shrd3, @function
shrd3:
    shrd %cl,%ax,%bx
    ret
         .size   shrd3, .-shrd3

    
.globl shrd4
         .type   shrd4, @function
shrd4:
    shrd %cl,%eax,%ebx
    ret
         .size   shrd4, .-shrd4

    
.globl sldt
         .type   sldt, @function
sldt:
    sldt (%eax)
    ret
         .size   sldt, .-sldt

    
.globl smsw
         .type   smsw, @function
smsw:
    smsw (%eax)
    ret
         .size   smsw, .-smsw

    
.globl stc
         .type   stc, @function
stc:
    stc
    ret
         .size   stc, .-stc

    
.globl std
         .type   std, @function
std:
    std
    ret
         .size   std, .-std

    
.globl sti
         .type   sti, @function
sti:
    sti
    ret
         .size   sti, .-sti

    
.globl stos1
         .type   stos1, @function
stos1:
    .byte 0xaa
    ret
         .size   stos1, .-stos1

    
.globl stos2
         .type   stos2, @function
stos2:
    .byte 0x66,0xab
    ret
         .size   stos2, .-stos2

    
.globl stos3
         .type   stos3, @function
stos3:
    .byte 0xab
    ret
         .size   stos3, .-stos3

    
.globl str
         .type   str, @function
str:
    str (%eax)
    ret
         .size   str, .-str

    
.globl sub1
         .type   sub1, @function
sub1:
    .byte 0x2c,0x02
    ret
         .size   sub1, .-sub1

    
.globl sub2
         .type   sub2, @function
sub2:
    .byte 0x2c,0xfe
    ret
         .size   sub2, .-sub2

    
.globl sub3
         .type   sub3, @function
sub3:
    .byte 0x66,0x2d,0x02,0x00
    ret
         .size   sub3, .-sub3

    
.globl sub4
         .type   sub4, @function
sub4:
    .byte 0x66,0x2d,0xfe,0xff
    ret
         .size   sub4, .-sub4

    
.globl sub5
         .type   sub5, @function
sub5:
    .byte 0x2d,0x02,0x00,0x00,0x00
    ret
         .size   sub5, .-sub5

    
.globl sub6
         .type   sub6, @function
sub6:
    .byte 0x2d,0xfe,0xff,0xff,0xff
    ret
         .size   sub6, .-sub6

    
.globl sub7
         .type   sub7, @function
sub7:
    subl 8(%ebp), %eax
    ret
         .size   sub7, .-sub7

    
.globl test1
         .type   test1, @function
test1:
    test $0x42,%al
    ret
         .size   test1, .-test1

    
.globl test2
         .type   test2, @function
test2:
    test $0x42,%ax
    ret
         .size   test2, .-test2

    
.globl test3
         .type   test3, @function
test3:
    test $0x42,%eax
    ret
         .size   test3, .-test3

    
.globl test4
         .type   test4, @function
test4:
    testb $0x42,(%ecx)
    ret
         .size   test4, .-test4

    
.globl test5
         .type   test5, @function
test5:
    testw $0x42,(%ecx)
    ret
         .size   test5, .-test5

    
.globl test6
         .type   test6, @function
test6:
    testl $0x42,(%ecx)
    ret
         .size   test6, .-test6

    
.globl test7
         .type   test7, @function
test7:
    test %bl,(%ecx)
    ret
         .size   test7, .-test7

    
.globl test8
         .type   test8, @function
test8:
    test %bx,(%ecx)
    ret
         .size   test8, .-test8

    
.globl test9
         .type   test9, @function
test9:
    test %ebx,(%ecx)
    ret
         .size   test9, .-test9

    
.globl verr
         .type   verr, @function
verr:
    verr (%eax)
    ret
         .size   verr, .-verr

    
.globl verw
         .type   verw, @function
verw:
    verw (%eax)
    ret
         .size   verw, .-verw

    
.globl wait
         .type   wait, @function
wait:
    .byte 0x9b
    ret
         .size   wait, .-wait

    
.globl xchg1
         .type   xchg1, @function
xchg1:
    xchg %ax,%bx
    ret
         .size   xchg1, .-xchg1

    
.globl xchg2
         .type   xchg2, @function
xchg2:
    xchg %eax,%ebx
    ret
         .size   xchg2, .-xchg2

    
.globl xchg3
         .type   xchg3, @function
xchg3:
    xchg %bl,(%ecx)
    ret
         .size   xchg3, .-xchg3

    
.globl xchg4
         .type   xchg4, @function
xchg4:
    xchg %bx,(%ecx)
    ret
         .size   xchg4, .-xchg4

    
.globl xchg5
         .type   xchg5, @function
xchg5:
    xchg %ebx,(%ecx)
    ret
         .size   xchg5, .-xchg5

    
.globl xlat1
         .type   xlat1, @function
xlat1:
    .byte 0xd7
    ret
         .size   xlat1, .-xlat1

    
.globl xlat2
         .type   xlat2, @function
xlat2:
    .byte 0x67,0xd7
    ret
         .size   xlat2, .-xlat2

    
.globl xor1
         .type   xor1, @function
xor1:
    .byte 0x34,0x02
    ret
         .size   xor1, .-xor1

    
.globl xor2
         .type   xor2, @function
xor2:
    .byte 0x34,0xfe
    ret
         .size   xor2, .-xor2

    
.globl xor3
         .type   xor3, @function
xor3:
    .byte 0x66,0x35,0x02,0x00
    ret
         .size   xor3, .-xor3

    
.globl xor4
         .type   xor4, @function
xor4:
    .byte 0x66,0x35,0xfe,0xff
    ret
         .size   xor4, .-xor4

    
.globl xor5
         .type   xor5, @function
xor5:
    .byte 0x35,0x02,0x00,0x00,0x00
    ret
         .size   xor5, .-xor5

    
.globl xor6
         .type   xor6, @function
xor6:
    .byte 0x35,0xfe,0xff,0xff,0xff
    ret
         .size   xor6, .-xor6

    
.globl xor7
         .type   xor7, @function
xor7:
    xorl 8(%ebp), %eax
    ret
         .size   xor7, .-xor7

    
.globl xor8
         .type   xor8, @function
xor8:
    xorl $0x02,%eax
    ret
         .size   xor8, .-xor8

    
.globl xor9
         .type   xor9, @function
xor9:
    xorl $0xf2,%eax
    ret
         .size   xor9, .-xor9

.globl main
         .type   main, @function
main:
          call aaa
          call aad1
          call aad2
          call aam1
          call aam2
          call aas
          call adc1
          call adc1a
          call adc2
          call adc2a
          call adc3
          call adc3a
          call adc4
          call add1
          call add2
          call add3
          call add4
          call add5
          call add6
          call add7
          call and1
          call and2
          call and3
          call and4
          call and5
          call and6
          call and7
          call arpl
          call bound1
          call bound2
          call bsf1
          call bsf2
          call bsf3
          call bsf4
          call bsr1
          call bsr2
          call bsr3
          call bsr4
          call bt1
          call bt2
          call bt3
          call bt4
          call bt5
          call btc1
          call btc2
          call btc3
          call btc4
          call btc5
          call btr1
          call btr2
          call btr3
          call btr4
          call btr5
          call bts1
          call bts2
          call bts3
          call bts4
          call bts5
          call call1
          call call2
          call call3
          call call4
          call call5
          call call6
          call cbw1
          call cbw2
          call clc
          call cld
          call cli
          call clts
          call cmc
          call cmp1
          call cmp2
          call cmp3
          call cmp4
          call cmp5
          call cmp6
          call cmp7
          call cmp8
          call cmps1
          call cmps2
          call cmps3
          call cmps4
          call cmps5
          call cmps6
          call cwd1
          call cwd2
          call daa
          call das
          call dec1
          call dec2
          call dec3
          call dec4
          call dec5b
          call dec5w
          call dec5l
          call div1
          call div2
          call div3
          call enter1
          call enter2
          call enter3
          call hlt
          call idiv1
          call idiv2
          call idiv3
          call imul_one_op1
          call imul_one_op2
          call imul_one_op3
          call imul_one_op4
          call imul_two_op1
          call imul_two_op2
          call imul_two_op3
          call imul_three_op1
          call imul_three_op2
          call imul_three_op3
          call in1
          call in2
          call in3
          call in4
          call in5
          call in6
          call inc1
          call inc2
          call inc3
          call inc4
          call inc5b
          call inc5w
          call inc5l
          call ins1
          call ins2
          call ins3
          call int1
          call int2
          call int3
          call iret1
          call iret2
          call jcc_short_with_code_0
          call jcc_short_with_code_1
          call jcc_short_with_code_2
          call jcc_short_with_code_3
          call jcc_short_with_code_4
          call jcc_short_with_code_5
          call jcc_short_with_code_6
          call jcc_short_with_code_7
          call jcc_short_with_code_8
          call jcc_short_with_code_9
          call jcc_short_with_code_a
          call jcc_short_with_code_b
          call jcc_short_with_code_c
          call jcc_short_with_code_d
          call jcc_short_with_code_e
          call jcc_short_with_code_f
          call jcc_long_with_code_0
          call jcc_long_with_code_1
          call jcc_long_with_code_2
          call jcc_long_with_code_3
          call jcc_long_with_code_4
          call jcc_long_with_code_5
          call jcc_long_with_code_6
          call jcc_long_with_code_7
          call jcc_long_with_code_8
          call jcc_long_with_code_9
          call jcc_long_with_code_a
          call jcc_long_with_code_b
          call jcc_long_with_code_c
          call jcc_long_with_code_d
          call jcc_long_with_code_e
          call jcc_long_with_code_f
          call jcxz
          call jecxz
          call jmp1
          call jmp2
          call jmp3
          call lahf
          call lar
          call lea1
          call lea2
          call leave1
          call leave2
          call lgdtl
          call lidtl
          call lds1
          call lds2
          call les1
          call les2
          call lfs1
          call lfs2
          call lgs1
          call lgs2
          call lss1
          call lss2
          call lldt
          call lmsw
          call lods1
          call lods2
          call lods3
          call loop_type_0
          call loop_type_0w
          call loop_type_1
          call loop_type_1w
          call loop_type_2
          call loop_type_2w
          call lsl
          call ltr
          call mov_b1
          call mov_b2
          call mov_b3
          call mov_b4
          call mov_b5
          call mov_b6
          call mov_b7
          call mov_w1
          call mov_w2
          call mov_w3
          call mov_w4
          call mov_l1
          call mov_l2
          call mov_l3
          call mov_l4
          call mov_from_cr
          call mov_to_cr
          call mov_from_dr
          call mov_to_dr
          call mov_from_tr
          call mov_to_tr
          call movs1
          call movs2
          call movs3
          call movsx1
          call movsx2
          call movsx3
          call movzx1
          call movzx2
          call movzx3
          call mul1
          call mul2
          call mul3
          call neg1
          call neg2
          call neg3
          call nop1
          call nop2
          call nop3
          call nop4
          call nop5
          call nop6
          call nop7
          call not1
          call not2
          call not3
          call or1
          call or2
          call or3
          call or4
          call or5
          call or6
          call or7
          call or8
          call or9
          call out1
          call out2
          call out3
          call out4
          call out5
          call out6
          call outs1
          call outs2
          call outs3
          call pop1
          call pop2
          call pop3
          call pop4
          call pop_seg1
          call pop_seg2
          call pop_seg3
          call pop_seg4
          call pop_seg5
          call popa1
          call popa2
          call popf1
          call popf2
          call push1
          call push2
          call push3
          call push4
          call push5
          call push6
          call push7
          call push_seg1
          call push_seg2
          call push_seg3
          call push_seg4
          call push_seg5
          call pusha1
          call pusha2
          call pushf1
          call pushf2
          call rotate_once_rol_b
          call rotate_once_rol_w
          call rotate_once_rol_l
          call rotate_once_ror_b
          call rotate_once_ror_w
          call rotate_once_ror_l
          call rotate_once_rcl_b
          call rotate_once_rcl_w
          call rotate_once_rcl_l
          call rotate_once_rcr_b
          call rotate_once_rcr_w
          call rotate_once_rcr_l
          call rotate_once_shl_b
          call rotate_once_shl_w
          call rotate_once_shl_l
          call rotate_once_shr_b
          call rotate_once_shr_w
          call rotate_once_shr_l
          call rotate_once_sar_b
          call rotate_once_sar_w
          call rotate_once_sar_l
          call rotate_cl_controlled_rol_b
          call rotate_cl_controlled_rol_w
          call rotate_cl_controlled_rol_l
          call rotate_cl_controlled_ror_b
          call rotate_cl_controlled_ror_w
          call rotate_cl_controlled_ror_l
          call rotate_cl_controlled_rcl_b
          call rotate_cl_controlled_rcl_w
          call rotate_cl_controlled_rcl_l
          call rotate_cl_controlled_rcr_b
          call rotate_cl_controlled_rcr_w
          call rotate_cl_controlled_rcr_l
          call rotate_cl_controlled_shl_b
          call rotate_cl_controlled_shl_w
          call rotate_cl_controlled_shl_l
          call rotate_cl_controlled_shr_b
          call rotate_cl_controlled_shr_w
          call rotate_cl_controlled_shr_l
          call rotate_cl_controlled_sar_b
          call rotate_cl_controlled_sar_w
          call rotate_cl_controlled_sar_l
          call rotate_imm8_rol_b
          call rotate_imm8_rol_w
          call rotate_imm8_rol_l
          call rotate_imm8_ror_b
          call rotate_imm8_ror_w
          call rotate_imm8_ror_l
          call rotate_imm8_rcl_b
          call rotate_imm8_rcl_w
          call rotate_imm8_rcl_l
          call rotate_imm8_rcr_b
          call rotate_imm8_rcr_w
          call rotate_imm8_rcr_l
          call rotate_imm8_shl_b
          call rotate_imm8_shl_w
          call rotate_imm8_shl_l
          call rotate_imm8_shr_b
          call rotate_imm8_shr_w
          call rotate_imm8_shr_l
          call rotate_imm8_sar_b
          call rotate_imm8_sar_w
          call rotate_imm8_sar_l
          call rep_ins1b
          call rep_ins1w
          call rep_ins1l
          call rep_ins2b
          call rep_ins2w
          call rep_ins2l
          call rep_movs1b
          call rep_movs1w
          call rep_movs1l
          call rep_movs2b
          call rep_movs2w
          call rep_movs2l
          call rep_outs1b
          call rep_outs1w
          call rep_outs1l
          call rep_outs2b
          call rep_outs2w
          call rep_outs2l
          call rep_stos1b
          call rep_stos1w
          call rep_stos1l
          call rep_stos2b
          call rep_stos2w
          call rep_stos2l
          call rep_cmps1b
          call rep_cmps1w
          call rep_cmps1l
          call rep_cmps2b
          call rep_cmps2w
          call rep_cmps2l
          call rep_scas1b
          call rep_scas1w
          call rep_scas1l
          call rep_scas2b
          call rep_scas2w
          call rep_scas2l
          call ret1
          call ret2
          call ret3
          call ret4
          call ret_pop1
          call ret_pop2
          call ret_pop3
          call ret_pop4
          call sahf
          call sbb1
          call sbb2
          call sbb3
          call sbb4
          call sbb5
          call sbb6
          call sbb7
          call scas1
          call scas2
          call scas3
          call setcc_with_code_0
          call setcc_with_code_1
          call setcc_with_code_2
          call setcc_with_code_3
          call setcc_with_code_4
          call setcc_with_code_5
          call setcc_with_code_6
          call setcc_with_code_7
          call setcc_with_code_8
          call setcc_with_code_9
          call setcc_with_code_a
          call setcc_with_code_b
          call setcc_with_code_c
          call setcc_with_code_d
          call setcc_with_code_e
          call setcc_with_code_f
          call sgdt
          call sidt
          call shld1
          call shld2
          call shld3
          call shld4
          call shrd1
          call shrd2
          call shrd3
          call shrd4
          call sldt
          call smsw
          call stc
          call std
          call sti
          call stos1
          call stos2
          call stos3
          call str
          call sub1
          call sub2
          call sub3
          call sub4
          call sub5
          call sub6
          call sub7
          call test1
          call test2
          call test3
          call test4
          call test5
          call test6
          call test7
          call test8
          call test9
          call verr
          call verw
          call wait
          call xchg1
          call xchg2
          call xchg3
          call xchg4
          call xchg5
          call xlat1
          call xlat2
          call xor1
          call xor2
          call xor3
          call xor4
          call xor5
          call xor6
          call xor7
          call xor8
          call xor9
         .size   main, .-main
