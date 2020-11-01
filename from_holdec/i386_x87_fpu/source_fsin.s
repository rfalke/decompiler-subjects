	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_para:
	.string	"FSIN(para):  should=                              is=%12f/%15e\n"
.L_zero:
	.string	"FSIN(0):     should=     0.000000/   0.000000e+00 is=%12f/%15e\n"
.L_pi_6:
	.string	"FSIN(pi/6):  should=     0.500000/   5.000000e-01 is=%12f/%15e\n"
.L_pi_2:
	.string	"FSIN(pi/2):  should=     1.000000/   1.000000e+00 is=%12f/%15e\n"
.L_int6:
	.word 6

	.text
	.p2align 4,,15
	.globl	FSIN
	.type	FSIN, @function
FSIN:

    subl    $40, %esp
    fldl    44(%esp)
	fsin
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_para
    call    printf
    addl    $44, %esp

	subl	$40, %esp
	fldz
	fsin
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_zero
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	filds	.L_int6
	fldpi
	fdivp
	fsin
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_pi_6
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fld1
	fld1
	faddp
	fldpi
	fdivp
	fsin
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_pi_2
	call	printf
	addl	$44, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FSIN, .-FSIN
