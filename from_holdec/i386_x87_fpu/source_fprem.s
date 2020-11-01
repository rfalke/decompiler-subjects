	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_red:
	.string	"reduced para using FPREM: should=                             is=%12f/%15e\n"
.L_prem:
	.string	"FPREM(11 mod 7):          should=    4.000000/   4.000000e+00 is=%12f/%15e\n"
.L_prem1:
	.string	"FPREM1(11 mod 7):         should=   -3.000000/  -3.000000e+00 is=%12f/%15e\n"
.L_11_s:
    .word 11
.L_7_s:
    .word 7

	.text
	.p2align 4,,15
	.globl	FPREM
	.type	FPREM, @function
FPREM:

    subl    $40, %esp
    filds	.L_7_s
	filds	.L_11_s
	fprem
	fstp	%st(1)
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_prem
    call    printf
    addl    $44, %esp

    subl    $40, %esp
    filds	.L_7_s
	filds	.L_11_s
	fprem1
	fstp	%st(1)
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_prem1
    call    printf
    addl    $44, %esp

; http://www.website.masmforum.com/tutorials/fptute/fpuchap12.htm
    subl    $40, %esp
    fldl    44(%esp)
    fldpi
    fadd   %st(0),%st(0)
    fxch
.Lloop:
    fprem
    fstsw  %ax
    fwait
    sahf
    jpe    .Lloop
    fstp   %st(1)
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_red
    call    printf
    addl    $44, %esp


	xorl	%eax, %eax
	ret
.LFE11:
	.size	FPREM, .-FPREM
