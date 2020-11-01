	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_1:
	.string	"FLD1:   should=    1.000000/   1.000000e+00 is=%12f/%15e\n"
.L_l2e:
	.string	"FLDL2E: should=    1.442695/   1.442695e+00 is=%12f/%15e\n"
.L_l2t:
	.string	"FLDL2T: should=    3.321928/   3.321928e+00 is=%12f/%15e\n"
.L_lg2:
	.string	"FLDLG2: should=    0.301030/   3.010300e-01 is=%12f/%15e\n"
.L_ln2:
	.string	"FLDLN2: should=    0.693147/   6.931472e-01 is=%12f/%15e\n"
.L_pi:
	.string	"FLDPI:  should=    3.141593/   3.141593e+00 is=%12f/%15e\n"
.L_z:
	.string	"FLDZ:   should=    0.000000/   0.000000e+00 is=%12f/%15e\n"

	.text
	.p2align 4,,15
	.globl	FLDC
	.type	FLDC, @function
FLDC:
	subl	$40, %esp
	fld1
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_1
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fldl2e
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_l2e
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fldl2t
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_l2t
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fldlg2
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_lg2
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fldln2
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_ln2
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fldpi
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_pi
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fldz
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_z
	call	printf
	addl	$44, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FLDC, .-FLDC
