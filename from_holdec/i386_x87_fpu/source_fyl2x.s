	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_para1:
	.string	"FYL2X(para, base=2):  should=                             is=%12f/%15e\n"
.L_const1:
	.string	"FYL2X(1000, base=2):  should=    9.965784/   9.965784e+00 is=%12f/%15e\n"
.L_const2:
	.string	"FYL2X(1000, base=e):  should=    6.907755/   6.907755e+00 is=%12f/%15e\n"
.L_const3:
	.string	"FYL2X(1000, base=10): should=    3.000000/   3.000000e+00 is=%12f/%15e\n"
.L_1k:
	.word 1000

	.text
	.p2align 4,,15
	.globl	FYL2X
	.type	FYL2X, @function
FYL2X:

    subl    $40, %esp
	fld1
    fldl    44(%esp)
	fyl2x
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_para1
    call    printf
    addl    $44, %esp

    subl    $40, %esp
	fld1
    filds	.L_1k
	fyl2x
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_const1
    call    printf
    addl    $44, %esp

    subl    $40, %esp
	fldln2
    filds	.L_1k
	fyl2x
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_const2
    call    printf
    addl    $44, %esp

    subl    $40, %esp
	fldlg2
    filds	.L_1k
	fyl2x
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_const3
    call    printf
    addl    $44, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FYL2X, .-FYL2X
