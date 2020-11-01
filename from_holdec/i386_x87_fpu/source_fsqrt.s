	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_para:
	.string	"FSQRT(para):     should=                             is=%12f/%15e\n"
.L_pi:
	.string	"FSQRT(pi):       should=    1.772454/   1.772454e+00 is=%12f/%15e\n"
.L_1234:
	.string	"FSQRT(152.2756): should=   12.340000/   1.234000e+01 is=%12f/%15e\n"
.L_1234_squared:
	.quad   4639561737934690530

	.text
	.p2align 4,,15
	.globl	FSQRT
	.type	FSQRT, @function
FSQRT:

    subl    $40, %esp
    fldl    44(%esp)
	fsqrt
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_para
    call    printf
    addl    $44, %esp

	subl	$40, %esp
	fldpi
	fsqrt
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_pi
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fldl	.L_1234_squared
	fsqrt
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_1234
	call	printf
	addl	$44, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FSQRT, .-FSQRT
