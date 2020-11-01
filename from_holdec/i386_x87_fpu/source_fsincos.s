	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_para_0:
	.string	"FSINCOS(para)[0=cos]:  should=                              is=%12f/%15e\n"
.L_para_1:
	.string	"FSINCOS(para)[1=sin]:  should=                              is=%12f/%15e\n"

.L_zero_0:
	.string	"FSINCOS(0)[0=cos]:     should=     1.000000/   1.000000e+00 is=%12f/%15e\n"
.L_zero_1:
	.string	"FSINCOS(0)[1=sin]:     should=     0.000000/   0.000000e+00 is=%12f/%15e\n"

	.text
	.p2align 4,,15
	.globl	FSINCOS
	.type	FSINCOS, @function
FSINCOS:

    subl    $40, %esp
    fldl    44(%esp)
	fsincos
    fstl    8(%esp)
    fstpl   (%esp)
	fstp	%st(0)
    pushl   $.L_para_0
    call    printf
    addl    $44, %esp

    subl    $40, %esp
    fldl    44(%esp)
	fsincos
	fstp	%st(0)
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_para_1
    call    printf
    addl    $44, %esp

	subl	$40, %esp
	fldz
	fsincos
	fstl	8(%esp)
	fstpl	(%esp)
	fstp	%st(0)
	pushl	$.L_zero_0
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fldz
	fsincos
	fstp	%st(0)
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_zero_1
	call	printf
	addl	$44, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FSINCOS, .-FSINCOS
