	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_para1:
	.string	"FCOM(1,para): should=0x0000 is=0x%04x\n"
.L_para2:
	.string	"FCOM(para,1): should=0x0100 is=0x%04x\n"
.L_pi1:
	.string	"FCOM(pi,1):   should=0x0000 is=0x%04x\n"
.L_pi2:
	.string	"FCOM(1,pi):   should=0x0100 is=0x%04x\n"
.L_eq:
	.string	"FCOM(1,1):    should=0x4000 is=0x%04x\n"
.L_nan:
	.string	"FCOM(1,nan):  should=0x4500 is=0x%04x\n"
.L_int1:
	.string	"FICOM(pi,3):  should=0x0000 is=0x%04x\n"
.L_int2:
	.string	"FICOM(pi,4):  should=0x0100 is=0x%04x\n"
.L_3w:
    .word 3
.L_4w:
    .word 4

	.text
	.p2align 4,,15
	.globl	FCOM
	.type	FCOM, @function
FCOM:

    subl    $40, %esp
    fld1
	fcomp   44(%esp)
	fstsw   %ax
	andw	$17664,%ax
	movzwl  %ax,%eax
	pushl   %eax
    pushl   $.L_para1
    call    printf
    addl    $48, %esp

    subl    $40, %esp
	fld1
	fldl	44(%esp)
	fcompp
	fstsw   %ax
	andw	$17664,%ax
	movzwl  %ax,%eax
	pushl   %eax
    pushl   $.L_para2
    call    printf
    addl    $48, %esp

    subl    $40, %esp
	fld1
	fldpi
	fcompp
	fstsw   %ax
	andw	$17664,%ax
	movzwl  %ax,%eax
	pushl   %eax
    pushl   $.L_pi1
    call    printf
    addl    $48, %esp

    subl    $40, %esp
	fldpi
	fld1
	fcompp
	fstsw   %ax
	andw	$17664,%ax
	movzwl  %ax,%eax
	pushl   %eax
    pushl   $.L_pi2
    call    printf
    addl    $48, %esp

    subl    $40, %esp
	fld1
	fld1
	fcompp
	fstsw   %ax
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
	fld1
	fcompp
	fstsw   %ax
	andw	$17664,%ax
	movzwl  %ax,%eax
	pushl   %eax
    pushl   $.L_nan 
    call    printf
    addl    $48, %esp

    subl    $40, %esp
	fldpi
	ficomp .L_3w
	fstsw   %ax
	andw	$17664,%ax
	movzwl  %ax,%eax
	pushl   %eax
    pushl   $.L_int1
    call    printf
    addl    $48, %esp

    subl    $40, %esp
	fldpi
	ficomp .L_4w
	fstsw   %ax
	andw	$17664,%ax
	movzwl  %ax,%eax
	pushl   %eax
    pushl   $.L_int2
    call    printf
    addl    $48, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FCOM, .-FCOM
