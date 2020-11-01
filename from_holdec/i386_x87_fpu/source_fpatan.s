	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_para:
	.string	"FPATAN(y=1 x=para): should=                             is=%12f/%15e\n"
.L_1_0:
	.string	"FPATAN(y=1 x=0):    should=    1.570796/   1.570796e+00 is=%12f/%15e\n"
.L_1_1:
	.string	"FPATAN(y=1 x=1):    should=    0.785398/   7.853982e-01 is=%12f/%15e\n"


	.text
	.p2align 4,,15
	.globl	FPATAN
	.type	FPATAN, @function
FPATAN:

    subl    $40, %esp
	fld1
    fldl    44(%esp)
	fpatan
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_para
    call    printf
    addl    $44, %esp

    subl    $40, %esp
    fld1
	fldz
	fpatan
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_1_0
    call    printf
    addl    $44, %esp

    subl    $40, %esp
    fld1
	fld1
	fpatan
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_1_1
    call    printf
    addl    $44, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FPATAN, .-FPATAN
