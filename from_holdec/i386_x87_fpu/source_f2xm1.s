	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_mone:
	.string	"F2XM1(-1):   should=   -0.500000/  -5.000000e-01 is=%12f/%15e\n"
.L_zero:
	.string	"F2XM1(0):    should=    0.000000/   0.000000e+00 is=%12f/%15e\n"
.L_one:
	.string	"F2XM1(+1):   should=    1.000000/   1.000000e+00 is=%12f/%15e\n"
.L_recipi:
	.string	"F2XM1(1/pi): should=    0.246869/   2.468690e-01 is=%12f/%15e\n"
	.text
	.p2align 4,,15
	.globl	F2XM1
	.type	F2XM1, @function
F2XM1:
	subl	$40, %esp
	fld1
	fchs
	f2xm1
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_mone
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fldz
	f2xm1
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_zero
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fld1
	f2xm1
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_one
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fldpi
	fld1
	fdivp
	f2xm1	
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_recipi
	call	printf
	addl	$44, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	F2XM1, .-F2XM1
