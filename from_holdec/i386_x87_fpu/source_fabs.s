	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_para:
	.string	"FABS(para):   should=                            is=%12f/%15e\n"
.L_mone:
	.string	"FABS(-1):   should=     1.000000/   1.000000e+00 is=%12f/%15e\n"
.L_mzero:
	.string	"FABS(-0):    should=    0.000000/   0.000000e+00 is=%12f/%15e\n"
.L_one:
	.string	"FABS(+1):   should=     1.000000/   1.000000e+00 is=%12f/%15e\n"

	.text
	.p2align 4,,15
	.globl	FABS
	.type	FABS, @function
FABS:

    subl    $40, %esp
    fldl    44(%esp)
	fabs
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_para
    call    printf
    addl    $44, %esp

	subl	$40, %esp
	fld1
	fchs
	fabs
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_mone
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fldz
	fchs
	fabs
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_mzero
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fld1
	fabs
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_one
	call	printf
	addl	$44, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FABS, .-FABS
