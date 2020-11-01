	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_para:
	.string	"FCOS(para):  should=                              is=%12f/%15e\n"
.L_zero:
	.string	"FCOS(0):     should=     1.000000/   1.000000e+00 is=%12f/%15e\n"
.L_pi_3:
	.string	"FCOS(pi/3):  should=     0.500000/   5.000000e-01 is=%12f/%15e\n"
.L_pi:
	.string	"FCOS(pi):    should=    -1.000000/  -1.000000e+00 is=%12f/%15e\n"

	.text
	.p2align 4,,15
	.globl	FCOS
	.type	FCOS, @function
FCOS:

    subl    $40, %esp
    fldl    44(%esp)
	fcos
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_para
    call    printf
    addl    $44, %esp

	subl	$40, %esp
	fldz
	fcos
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_zero
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fld1
	fld1
	fld1
	faddp
	faddp
	fldpi
	fdivp
	fcos
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_pi_3
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fldpi
	fcos
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_pi
	call	printf
	addl	$44, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FCOS, .-FCOS
