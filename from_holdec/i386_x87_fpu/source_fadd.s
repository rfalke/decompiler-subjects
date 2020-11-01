	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_para1:
	.string	"FADD(para+1):     should=                             is=%12f/%15e\n"
.L_para2:
	.string	"FADD(para+12.34): should=                             is=%12f/%15e\n"
.L_pi:
	.string	"FADD(pi+1/pi):    should=    3.459903/   3.459903e+00 is=%12f/%15e\n"
.L_two:
	.string	"FADD(1+1+-0):     should=    2.000000/   2.000000e+00 is=%12f/%15e\n"
.L_int:
	.string	"FADD(pi+1000):    should= 1003.141593/   1.003142e+03 is=%12f/%15e\n"
.L_1234:
        .long   2061584302
        .long   1076407828
.L_1000w:
	.word 1000

	.text
	.p2align 4,,15
	.globl	FADD
	.type	FADD, @function
FADD:

    subl    $40, %esp
    fldl    44(%esp)
	fld1
	faddp
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_para1
    call    printf
    addl    $44, %esp

    subl    $40, %esp
    fldl    44(%esp)
    faddl    .L_1234
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_para2
    call    printf
    addl    $44, %esp

	subl	$40, %esp
	fld1
	fldpi
	fdivrp
	fldpi
	faddp
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_pi
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fldz
	fchs
	fld1
	fld1
	faddp
	faddp
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_two
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fldpi
	fiadd	.L_1000w
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_int
	call	printf
	addl	$44, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FADD, .-FADD
