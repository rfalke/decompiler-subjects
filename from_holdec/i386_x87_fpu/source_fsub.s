	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_para1:
	.string	"FSUB(1-para):     should=                             is=%12f/%15e\n"
.L_para2:
	.string	"FSUB(para-12.34): should=                             is=%12f/%15e\n"
.L_recipi:
	.string	"FSUB(1-pi):       should=   -2.141593/  -2.141593e+00 is=%12f/%15e\n"
.L_pi_int:
	.string	"FISUB(pi-1000):   should= -996.858407/  -9.968584e+02 is=%12f/%15e\n"
.L_1234:
       .long   2061584302
       .long   1076407828
.L_1000w:
	.word 1000

	.text
	.p2align 4,,15
	.globl	FSUB
	.type	FSUB, @function
FSUB:

    subl    $40, %esp
    fldl    44(%esp)
	fld1
	fsubp
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_para1
    call    printf
    addl    $44, %esp

    subl    $40, %esp
    fldl    .L_1234
    fldl    44(%esp)
	fsubp
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_para2
    call    printf
    addl    $44, %esp

	subl	$40, %esp
	fldpi
	fld1
	fsubp
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_recipi
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fldpi
	fisub   .L_1000w
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_pi_int
	call	printf
	addl	$44, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FSUB, .-FSUB
