	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_para:
	.string	"FPTAN(para): should=                             is=%12f/%15e\n"
.L_0:
	.string	"FPTAN(0):    should=    0.000000/   0.000000e+00 is=%12f/%15e\n"
.L_0b:
	.string	"FPTAN(0)[1]: should=    1.000000/   1.000000e+00 is=%12f/%15e\n"
.L_pi4:
	.string	"FPTAN(pi/4): should=    1.000000/   1.000000e+00 is=%12f/%15e\n"


	.text
	.p2align 4,,15
	.globl	FPTAN
	.type	FPTAN, @function
FPTAN:

    subl    $40, %esp
    fldl    44(%esp)
	fptan
	fstp	%st(0)
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_para
    call    printf
    addl    $44, %esp

    subl    $40, %esp
	fldz
	fptan
	fstp	%st(0)
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_0
    call    printf
    addl    $44, %esp

    subl    $40, %esp
	fldz
	fptan
	fstp	%st(1)
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_0b
    call    printf
    addl    $44, %esp

    subl    $40, %esp
    fld1
	fld1
	faddp
    fld1
	faddp
	fld1
	faddp
	fldpi
	fdivp
	fptan
	fstp	%st(0)
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_pi4
    call    printf
    addl    $44, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FPTAN, .-FPTAN
