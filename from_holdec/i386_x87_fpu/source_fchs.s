	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_para:
	.string	"FCHS(para):  should=                             is=%12f/%15e\n"
.L_pi:
	.string	"FCHS(pi):    should=   -3.141593/  -3.141593e+00 is=%12f/%15e\n"
.L_npi:
	.string	"FCHS(0-pi):  should=    3.141593/   3.141593e+00 is=%12f/%15e\n"

	.text
	.p2align 4,,15
	.globl	FCHS
	.type	FCHS, @function
FCHS:

    subl    $40, %esp
    fldl    44(%esp)
	fchs
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_para
    call    printf
    addl    $44, %esp

	subl	$40, %esp
	fldpi
	fchs
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_pi
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fldpi
	fldz
	fsubp
	fchs
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_npi
	call	printf
	addl	$44, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FCHS, .-FCHS
