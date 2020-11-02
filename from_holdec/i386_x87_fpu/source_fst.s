	.file	"b.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_4b:
	.string	"FST(pi as float)       should=0xdb 0x0f 0x49 0x40                               is=0x%02x 0x%02x 0x%02x 0x%02x\n"
.L_8b:
	.string	"FST(pi as double)      should=0x18 0x2d 0x44 0x54 0xfb 0x21 0x09 0x40           is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n"
.L_10b:
	.string	"FST(pi as long double) should=0x35 0xc2 0x68 0x21 0xa2 0xda 0x0f 0xc9 0x00 0x40 is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n"

	.text
	.p2align 4,,15
	.globl	FST
	.type	FST, @function
FST:
	subl	$24, %esp
	fldpi
	fstps   buffer
	movzbl	buffer+3, %eax
	pushl	%eax
	movzbl	buffer+2, %eax
	pushl	%eax
	movzbl	buffer+1, %eax
	pushl	%eax
	movzbl	buffer, %eax
	pushl	%eax
	pushl	$.L_4b
	call	printf
	addl	$44, %esp

	subl	$24, %esp
	fldpi
	fstpl   buffer
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
	pushl	$.L_8b
	call	printf
	addl	$60, %esp

	subl	$24, %esp
	fldpi
	fstpt   buffer
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
	pushl	$.L_10b
	call	printf
	addl	$68, %esp

	xorl	%eax, %eax
	ret

.LFE11:
	.size	FST, .-FST
	.comm	buffer,10,4
