	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_para:
	.string	"FMUL(para*pi):  should=                             is=%12f/%15e\n"
.L_constpi:
	.string	"FMUL(12.34*pi): should=   38.767253/   3.876725e+01 is=%12f/%15e\n"
.L_intpi:
	.string	"FIMUL(1000*pi): should= 3141.592654/   3.141593e+03 is=%12f/%15e\n"
.L_1234:
       .long   2061584302
       .long   1076407828
.L_1000w:
	.word 1000

	.text
	.p2align 4,,15
	.globl	FMUL
	.type	FMUL, @function
FMUL:

    subl    $40, %esp
    fldl    44(%esp)
	fldpi
	fmulp
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_para
    call    printf
    addl    $44, %esp

    subl    $40, %esp
    fldl    .L_1234
	fldpi
	fmulp
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_constpi
    call    printf
    addl    $44, %esp

	subl	$40, %esp
	fldpi
	fimul   .L_1000w
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_intpi
	call	printf
	addl	$44, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FMUL, .-FMUL
