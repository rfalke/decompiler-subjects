	.file	"source.c"
	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB21:
	.cfi_startproc
	xorl	%eax, %eax
	movl 	$1, %ebx
	addl	%ebx, %eax
	addl	$40, %eax
	cmpl	$4, %edi
	jle     .L2
	addl	%ebx, %eax
.L2:
	ret
	.cfi_endproc
.LFE21:
	.size	main, .-main
	.section	.note.GNU-stack,"",@progbits
