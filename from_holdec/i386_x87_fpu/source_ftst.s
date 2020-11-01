	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_para1:
	.string	"FTST(para): should=0x0100 is=0x%04x\n"
.L_pi1:
	.string	"FTST(pi):   should=0x0000 is=0x%04x\n"
.L_pi2:
	.string	"FTST(-pi):  should=0x0100 is=0x%04x\n"
.L_eq:
	.string	"FTST(0.0):  should=0x4000 is=0x%04x\n"
.L_nan:
	.string	"FTST(nan):  should=0x4500 is=0x%04x\n"

	.text
	.p2align 4,,15
	.globl	FTST
	.type	FTST, @function
FTST:

    subl    $40, %esp
	fldl	44(%esp)
	ftst
	fstsw   %ax
	fstp	%st(0)
	andw	$17664,%ax
	movzwl  %ax,%eax
	pushl   %eax
    pushl   $.L_para1
    call    printf
    addl    $48, %esp

    subl    $40, %esp
	fldpi
	ftst
	fstsw   %ax
	fstp	%st(0)
	andw	$17664,%ax
	movzwl  %ax,%eax
	pushl   %eax
    pushl   $.L_pi1
    call    printf
    addl    $48, %esp

    subl    $40, %esp
	fldpi
	fchs
	ftst
	fstsw   %ax
	fstp	%st(0)
	andw	$17664,%ax
	movzwl  %ax,%eax
	pushl   %eax
    pushl   $.L_pi2
    call    printf
    addl    $48, %esp

    subl    $40, %esp
	fldz
	ftst
	fstsw   %ax
	fstp	%st(0)
	andw	$17664,%ax
	movzwl  %ax,%eax
	pushl   %eax
    pushl   $.L_eq
    call    printf
    addl    $48, %esp

    subl    $40, %esp
	fldz
	fldz
	fdivp
	ftst
	fstsw   %ax
	fstp	%st(0)
	andw	$17664,%ax
	movzwl  %ax,%eax
	pushl   %eax
    pushl   $.L_nan 
    call    printf
    addl    $48, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FTST, .-FTST
