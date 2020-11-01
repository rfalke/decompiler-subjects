	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_para:
	.string	"FXCH(para):  should=                             is=%12f/%15e\n"
.L_pi:
	.string	"FXCH(pi):    should=    3.141593/   3.141593e+00 is=%12f/%15e\n"

	.text
	.p2align 4,,15
	.globl	FXCH
	.type	FXCH, @function
FXCH:

    subl    $40, %esp
    fldl    44(%esp)
	fldpi
	fldz
	fxch
	fxch	%st(2)
    fstl    8(%esp)
    fstpl   (%esp)
	fstp	%st(0)
	fstp	%st(0)
    pushl   $.L_para
    call    printf
    addl    $44, %esp

	subl	$40, %esp
	fldpi
	fld1
	fxch
	fstl	8(%esp)
	fstpl	(%esp)
	fstp	%st(0)
	pushl	$.L_pi
	call	printf
	addl	$44, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FXCH, .-FXCH
