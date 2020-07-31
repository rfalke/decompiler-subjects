	.file	"source_asm.c"
	.text
	.p2align 4,,15
	.globl	i386_memset_backward_b
	.type	i386_memset_backward_b, @function
i386_memset_backward_b:
.LFB0:
	pushl	%ebx
	pushl	%edi
	std
	movl	12(%esp), %edi
	movzbl	16(%esp), %eax
	movl	20(%esp), %ecx
	rep stosb
	popl	%edi
	popl	%ebx
	xor		%eax,%eax
	ret
.LFE0:
	.size	i386_memset_backward_b, .-i386_memset_backward_b

	.p2align 4,,15
	.globl	i386_memset_backward_w
	.type	i386_memset_backward_w, @function
i386_memset_backward_w:
.LFB1:
	pushl	%ebx
	pushl	%edi
	std
	movl	12(%esp), %edi
	movzwl	16(%esp), %eax
	movl	20(%esp), %ecx
	rep stosw
	popl	%edi
	popl	%ebx
	xor		%eax,%eax
	ret
.LFE1:
	.size	i386_memset_backward_w, .-i386_memset_backward_w
	.p2align 4,,15
	.globl	i386_memset_backward_l
	.type	i386_memset_backward_l, @function
i386_memset_backward_l:
.LFB2:
	pushl	%ebx
	pushl	%edi
	std
	movl	12(%esp), %edi
	movl	16(%esp), %eax
	movl	20(%esp), %ecx
	rep stosl
	popl	%edi
	popl	%ebx
	xor		%eax,%eax
	ret
.LFE2:
	.size	i386_memset_backward_l, .-i386_memset_backward_l
	.ident	"GCC: (GNU) 8.3.1 20190223 (Red Hat 8.3.1-2)"
	.section	.note.GNU-stack,"",@progbits
