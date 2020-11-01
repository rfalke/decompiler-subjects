	.file	"b.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.LC1:
	.string	"FBSTP(%f) should=0x44 0x33 0x22 0x11 0x90 0x78 0x56 0x34 0x12 0x80 is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n"
	.text
	.p2align 4,,15
	.globl	FBSTP
	.type	FBSTP, @function
FBSTP:
	subl	$24, %esp
	fldl	.LC0
	fchs
	fbstp   buffer

	movzbl	buffer+9, %eax
	pushl	%eax
	movzbl	buffer+8, %eax
	pushl	%eax
	movzbl	buffer+7, %eax
	pushl	%eax
	movzbl	buffer+6, %eax
	pushl	%eax
	movzbl	buffer+5, %eax
	pushl	%eax
	movzbl	buffer+4, %eax
	pushl	%eax
	movzbl	buffer+3, %eax
	pushl	%eax
	movzbl	buffer+2, %eax
	pushl	%eax
	movzbl	buffer+1, %eax
	pushl	%eax
	movzbl	buffer, %eax
	pushl	%eax

	fldl	.LC0
	fchs
	subl	$8, %esp
	fstpl	(%esp)
	pushl	$.LC1
	call	printf
	xorl	%eax, %eax
	addl	$76, %esp
	ret
.LFE11:
	.size	FBSTP, .-FBSTP
	.comm	buffer,10,4
	.section	.rodata.cst8,"aM",@progbits,8
	.align 8
.LC0:
        .long   3126983987
        .long   1132161460
