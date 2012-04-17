	.file	"source.c"
	.text
.globl fibo_normal
	.type	fibo_normal, @function
fibo_normal:
	pushl	%ebx
	subl	$24, %esp
	cmpl	$1, 32(%esp)
	jle	.L2
	movl	32(%esp), %eax
	subl	$1, %eax
	movl	%eax, (%esp)
	call	fibo_normal
	movl	%eax, %ebx
	movl	32(%esp), %eax
	subl	$2, %eax
	movl	%eax, (%esp)
	call	fibo_normal
	leal	(%ebx,%eax), %eax
	jmp	.L3
.L2:
	movl	32(%esp), %eax
.L3:
	addl	$24, %esp
	popl	%ebx
	ret
	.size	fibo_normal, .-fibo_normal
.globl fibo_return_on_stack
	.type	fibo_return_on_stack, @function
fibo_return_on_stack:
	pushl	%ebx
	subl	$24, %esp
	cmpl	$1, 32(%esp)
	jle	.L7
	movl	32(%esp), %eax
	subl	$1, %eax
	movl	%eax, (%esp)
	call	fibo_return_on_stack
	movl	(%esp), %ebx
	movl	32(%esp), %eax
	subl	$2, %eax
	movl	%eax, (%esp)
	call	fibo_return_on_stack
	movl    (%esp), %eax
	leal	(%ebx,%eax), %eax
	movl    %eax, 32(%esp)
.L7:
	addl	$24, %esp
	popl	%ebx
	ret
	.size	fibo_return_on_stack, .-fibo_return_on_stack
.globl fibo_wrapper_return_on_stack
	.type	fibo_wrapper_return_on_stack, @function
fibo_wrapper_return_on_stack:
	subl	$28, %esp
	movl	32(%esp), %eax
	movl	%eax, (%esp)
	call	fibo_return_on_stack
	movl    (%esp), %eax
	addl	$28, %esp
	ret
	.size	fibo_wrapper_return_on_stack, .-fibo_wrapper_return_on_stack
	.section	.rodata
.LC0:
	.string	"Input number: "
.LC1:
	.string	"%d"
.LC2:
	.string	"fibonacci(%d) = %d %d\n"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	movl	$.LC0, %eax
	movl	%eax, (%esp)
	call	printf
	movl	$.LC1, %eax
	leal	20(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	movl	20(%esp), %eax
	movl	%eax, (%esp)
	call	fibo_normal
	movl	%eax, 24(%esp)
	movl	20(%esp), %eax
	movl	%eax, (%esp)
	call	fibo_return_on_stack
	movl	%eax, 28(%esp)
	movl	20(%esp), %edx
	movl	$.LC2, %eax
	movl	28(%esp), %ecx
	movl	%ecx, 12(%esp)
	movl	24(%esp), %ecx
	movl	%ecx, 8(%esp)
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.5 20101112 (Red Hat 4.4.5-2)"
	.section	.note.GNU-stack,"",@progbits
