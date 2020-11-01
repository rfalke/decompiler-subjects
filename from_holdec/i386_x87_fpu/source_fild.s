	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_2b:
	.string	"FILD(10k):  should=             10000.000000/   1.000000e+04 is=%25f/%15e\n"
.L_4b:
	.string	"FILD(1G):   should=        1000000000.000000/   1.000000e+09 is=%25f/%15e\n"
.L_8b:
	.string	"FILD(1P):   should=  1000000000000000.000000/   1.000000e+15 is=%25f/%15e\n"
.L_1k_s:
    .word 10000
.L_1G_l:
	.byte 0x00
	.byte 0xca
	.byte 0x9a
	.byte 0x3b
.L_1p_q:
	.byte 0x00
	.byte 0x80
	.byte 0xc6
	.byte 0xa4

	.byte 0x7e
	.byte 0x8d
	.byte 0x03
	.byte 0x00

	.text
	.p2align 4,,15
	.globl	FILD
	.type	FILD, @function
FILD:
	subl	$40, %esp
	filds   .L_1k_s
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_2b
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fildl   .L_1G_l
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_4b
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fildq   .L_1p_q
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_8b
	call	printf
	addl	$44, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FILD, .-FILD
