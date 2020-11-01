	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_para1:
	.string	"FSCALE(para*2^4):   should=                             is=%12f/%15e\n"
.L_para2:
	.string	"FSCALE(pi*2^para):  should=                             is=%12f/%15e\n"
.L_pi1:
	.string	"FSCALE(pi*2^4):     should=   50.265482/   5.026548e+01 is=%12f/%15e\n"
.L_pi2:
	.string	"FSCALE(pi*2^-4):    should=    0.196350/   1.963495e-01 is=%12f/%15e\n"
.L_pi3:
	.string	"FSCALE(pi*2^12.34): should=12867.963509/   1.286796e+04 is=%12f/%15e\n"
.L_1234:
       .long   2061584302
       .long   1076407828

.L_4:
	.word 4

	.text
	.p2align 4,,15
	.globl	FSCALE
	.type	FSCALE, @function
FSCALE:

    subl    $40, %esp
	filds	.L_4
    fldl    44(%esp)
	fscale
    fstl    8(%esp)
    fstpl   (%esp)
	fstp	%st(0)
    pushl   $.L_para1
    call    printf
    addl    $44, %esp

    subl    $40, %esp
    fldl    44(%esp)
	fldpi
	fscale
    fstl    8(%esp)
    fstpl   (%esp)
	fstp	%st(0)
    pushl   $.L_para2
    call    printf
    addl    $44, %esp

    subl    $40, %esp
	filds	.L_4
    fldpi
	fscale
    fstl    8(%esp)
    fstpl   (%esp)
	fstp	%st(0)
    pushl   $.L_pi1
    call    printf
    addl    $44, %esp

    subl    $40, %esp
	filds	.L_4
	fchs
    fldpi
	fscale
    fstl    8(%esp)
    fstpl   (%esp)
	fstp	%st(0)
    pushl   $.L_pi2
    call    printf
    addl    $44, %esp

    subl    $40, %esp
    fldl    .L_1234
    fldpi
	fscale
    fstl    8(%esp)
    fstpl   (%esp)
	fstp	%st(0)
    pushl   $.L_pi3
    call    printf
    addl    $44, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FSCALE, .-FSCALE
