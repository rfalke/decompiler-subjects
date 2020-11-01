	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_para1:
	.string	"FXAM(para):  should=0x0400 is=0x%04x\n"
.L_pi1:
	.string	"FXAM(pi):    should=0x0400 is=0x%04x\n"
.L_zero:
	.string	"FXAM(0.0):   should=0x4000 is=0x%04x\n"
.L_nan:
	.string	"FXAM(nan):   should=0x0100 is=0x%04x\n"
.L_inf:
	.string	"FXAM(inf):   should=0x0500 is=0x%04x\n"
.L_empty:
	.string	"FXAM(empty): should=0x4100 is=0x%04x\n"

	.text
	.p2align 4,,15
	.globl	FXAM
	.type	FXAM, @function
FXAM:

    subl    $40, %esp
	fldl	44(%esp)
	fxam
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
	fxam
	fstsw   %ax
	fstp	%st(0)
	andw	$17664,%ax
	movzwl  %ax,%eax
	pushl   %eax
    pushl   $.L_pi1
    call    printf
    addl    $48, %esp

    subl    $40, %esp
	fldz
	fxam
	fstsw   %ax
	fstp	%st(0)
	andw	$17664,%ax
	movzwl  %ax,%eax
	pushl   %eax
    pushl   $.L_zero
    call    printf
    addl    $48, %esp

    subl    $40, %esp
	fldz
	fldz
	fdivp
	fxam
	fstsw   %ax
	fstp	%st(0)
	andw	$17664,%ax
	movzwl  %ax,%eax
	pushl   %eax
    pushl   $.L_nan 
    call    printf
    addl    $48, %esp

    subl    $40, %esp
	fldz
	fld1
	fdivp
	fxam
	fstsw   %ax
	fstp	%st(0)
	andw	$17664,%ax
	movzwl  %ax,%eax
	pushl   %eax
    pushl   $.L_inf
    call    printf
    addl    $48, %esp

    subl    $40, %esp
	fxam
	fstsw   %ax
	andw	$17664,%ax
	movzwl  %ax,%eax
	pushl   %eax
    pushl   $.L_empty
    call    printf
    addl    $48, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FXAM, .-FXAM
