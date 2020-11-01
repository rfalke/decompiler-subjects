	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_para1:
	.string	"FXTRACT(para)[0=signi]:  should=                             is=%12f/%15e\n"
.L_para2:
	.string	"FXTRACT(para)[1=exp]:    should=                             is=%12f/%15e\n"
.L_const1:
	.string	"FXTRACT(12.34)[0=signi]: should=    1.542500/   1.542500e+00 is=%12f/%15e\n"
.L_const2:
	.string	"FXTRACT(12.34)[1=exp]:   should=    3.000000/   3.000000e+00 is=%12f/%15e\n"
.L_1234:
       .long   2061584302
       .long   1076407828

	.text
	.p2align 4,,15
	.globl	FXTRACT
	.type	FXTRACT, @function
FXTRACT:

    subl    $40, %esp
    fldl    44(%esp)
	fxtract
    fstl    8(%esp)
    fstpl   (%esp)
	fstp	%st(0)
    pushl   $.L_para1
    call    printf
    addl    $44, %esp

    subl    $40, %esp
    fldl    44(%esp)
	fxtract
	fstp	%st(0)
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_para2
    call    printf
    addl    $44, %esp

    subl    $40, %esp
    fldl    .L_1234
    fxtract
    fstl    8(%esp)
    fstpl   (%esp)
	fstp	%st(0)
    pushl   $.L_const1
    call    printf
    addl    $44, %esp

    subl    $40, %esp
    fldl    .L_1234
    fxtract
	fstp	%st(0)
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_const2
    call    printf
    addl    $44, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FXTRACT, .-FXTRACT
