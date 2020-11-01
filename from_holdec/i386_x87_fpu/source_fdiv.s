	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_para1:
	.string	"FDIV(1/para):     should=                             is=%12f/%15e\n"
.L_para2:
	.string	"FDIV(para/12.34): should=                             is=%12f/%15e\n"
.L_recipi:
	.string	"FDIV(1/pi):       should=    0.318310/   3.183099e-01 is=%12f/%15e\n"
.L_pi_int:
	.string	"FIDIV(pi/1000):   should=    0.003142/   3.141593e-03 is=%12f/%15e\n"
.L_1234:
       .long   2061584302
       .long   1076407828
.L_1000w:
	.word 1000

	.text
	.p2align 4,,15
	.globl	FDIV
	.type	FDIV, @function
FDIV:

    subl    $40, %esp
    fldl    44(%esp)
	fld1
	fdivp
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_para1
    call    printf
    addl    $44, %esp

    subl    $40, %esp
    fldl    .L_1234
    fldl    44(%esp)
	fdivp
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_para2
    call    printf
    addl    $44, %esp

	subl	$40, %esp
	fldpi
	fld1
	fdivp
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_recipi
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fldpi
	fidiv   .L_1000w
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_pi_int
	call	printf
	addl	$44, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FDIV, .-FDIV
