	.file	"source.c"
	.section	.rodata.str1.1
.LC2:
	.string	"5) init with bytes, address of taken BEFORE and modify, 4 byte read (should=0x60524030)"
	.text
	.p2align 4,,15
	.globl	test5
	.type	test5, @function
test5:
.LFB2:
	pushl	$.LC2
	call	puts
	addl	$4, %esp

	subl	$16, %esp
	movb	$0x10,0(%esp)
	movb	$0x20,1(%esp)
	movb	$0x30,2(%esp)
	movb	$0x40,3(%esp)
	movb	$0x50,4(%esp)
	movb	$0x60,5(%esp)
	movb	$0x70,6(%esp)
	movb	$0x80,7(%esp)
	movb	$0x90,8(%esp)
	movb	$0xa0,9(%esp)
	movb	$0xb0,10(%esp)
	movb	$0xc0,11(%esp)
	movb	$0xd0,12(%esp)
	movb	$0xe0,13(%esp)
	movb	$0xf0,14(%esp)
	lea		4(%esp), %eax
	pushl	%eax
	call	modify
	addl	$4, %esp

	movl	2(%esp), %eax
	pushl	%eax
	call	dump1
	xorl	%eax, %eax
	addl	$20, %esp
	ret
.LFE2:
	.size	test5, .-test5
