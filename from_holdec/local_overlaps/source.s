	.file	"source.c"
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"got 0x%08x\n"
	.text
	.p2align 4,,15
	.globl	dump1
	.type	dump1, @function
dump1:
.LFB0:
	subl	$20, %esp
	pushl	24(%esp)
	pushl	$.LC0
	call	printf
	xorl	%eax, %eax
	addl	$28, %esp
	ret
.LFE0:
	.size	dump1, .-dump1
	.section	.rodata.str1.1
.LC1:
	.string	"got 0x%08x, 0x%08x\n"
	.text
	.p2align 4,,15
	.globl	dump2
	.type	dump2, @function
dump2:
.LFB1:
	subl	$16, %esp
	pushl	24(%esp)
	pushl	24(%esp)
	pushl	$.LC1
	call	printf
	xorl	%eax, %eax
	addl	$28, %esp
	ret
.LFE1:
	.size	dump2, .-dump2

	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB4:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	call	test1
	call	test2
	call	test3
	call	test4
	call	test5
	call	test6
	xorl	%eax, %eax
	leave
	ret
.LFE4:
	.size	main, .-main

	.globl	modify
	.type	modify, @function
modify:
	movl	4(%esp),%eax
	incb	(%eax)
	incb	(%eax)
	xorl	%eax, %eax
	ret
	.size	modify, .-modify


	.ident	"GCC: (GNU) 8.3.1 20190223 (Red Hat 8.3.1-2)"
	.section	.note.GNU-stack,"",@progbits
