	.file	"source.c"
	.text
	.p2align 4,,15
	.globl	count_zeros
	.type	count_zeros, @function
count_zeros:
.LFB0:
	.cfi_startproc
	movl	4(%esp), %eax
	testl	%eax, %eax
	jle	.L5
	movl	8(%esp), %edx
	leal	(%edx,%eax,4), %ecx
	xorl	%eax, %eax
	.p2align 4,,10
	.p2align 3
.L4:
	movl	(%edx),%ebx
	negl	%ebx
	adcl	$-1, %eax
	addl	$4, %edx
	cmpl	%ecx, %edx
	jne	.L4
	negl	%eax
	ret
	.p2align 4,,10
	.p2align 3
.L5:
	xorl	%eax, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	count_zeros, .-count_zeros
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"count_zeros: %d\n"
	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x7c,0x6
	leal	-44(%ebp), %eax
	subl	$52, %esp
	movl	$0, -44(%ebp)
	pushl	%eax
	pushl	$4
	movl	$1, -40(%ebp)
	movl	$2, -36(%ebp)
	movl	$3, -32(%ebp)
	movl	$0, -28(%ebp)
	movl	$1, -24(%ebp)
	movl	$2, -20(%ebp)
	movl	$0, -16(%ebp)
	movl	$3, -12(%ebp)
	call	count_zeros
	pushl	%eax
	pushl	$.LC0
	call	printf
	popl	%eax
	leal	-28(%ebp), %eax
	popl	%edx
	pushl	%eax
	pushl	$5
	call	count_zeros
	popl	%ecx
	popl	%edx
	pushl	%eax
	pushl	$.LC0
	call	printf
	movl	-4(%ebp), %ecx
	.cfi_def_cfa 1, 0
	addl	$16, %esp
	xorl	%eax, %eax
	leave
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (GNU) 8.3.1 20190223 (Red Hat 8.3.1-2)"
	.section	.note.GNU-stack,"",@progbits
