	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_para1:
	.string	"FCOMI(1,para): should=0x00 is=0x%02x\n"
.L_para2:
	.string	"FCOMI(para,1): should=0x01 is=0x%02x\n"
.L_pi1:
	.string	"FCOMI(pi,1):   should=0x00 is=0x%02x\n"
.L_pi2:
	.string	"FCOMI(1,pi):   should=0x01 is=0x%02x\n"
.L_eq:
	.string	"FCOMI(1,1):    should=0x40 is=0x%02x\n"
.L_nan:
	.string	"FCOMI(1,nan):  should=0x45 is=0x%02x\n"

	.text
	.p2align 4,,15
	.globl	FCOMI
	.type	FCOMI, @function
FCOMI:

    subl    $40, %esp
	fldl	44(%esp)
	fld1
	fcomip
	fstp	%st(0)
	lahf
	andb	$69,%ah
	movzbl  %ah,%eax
	pushl   %eax
    pushl   $.L_para1
    call    printf
    addl    $48, %esp

    subl    $40, %esp
	fld1
	fldl	44(%esp)
	fcomip
	fstp	%st(0)
	lahf
	andb	$69,%ah
	movzbl  %ah,%eax
	pushl   %eax
    pushl   $.L_para2
    call    printf
    addl    $48, %esp

    subl    $40, %esp
	fld1
	fldpi
	fcomip
	fstp	%st(0)
	lahf
	andb	$69,%ah
	movzbl  %ah,%eax
	pushl   %eax
    pushl   $.L_pi1
    call    printf
    addl    $48, %esp

    subl    $40, %esp
	fldpi
	fld1
	fcomip
	fstp	%st(0)
	lahf
	andb	$69,%ah
	movzbl  %ah,%eax
	pushl   %eax
    pushl   $.L_pi2
    call    printf
    addl    $48, %esp

    subl    $40, %esp
	fld1
	fld1
	fcomip
	fstp	%st(0)
	lahf
	andb	$69,%ah
	movzbl  %ah,%eax
	pushl   %eax
    pushl   $.L_eq
    call    printf
    addl    $48, %esp

    subl    $40, %esp
	fldz
	fldz
	fdivp
	fld1

	fcomip
	fstp	%st(0)
	lahf
	andb	$69,%ah
	movzbl  %ah,%eax
	pushl   %eax
    pushl   $.L_nan 
    call    printf
    addl    $48, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FCOMI, .-FCOMI
