	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	movl	$1, %eax
	addl	$20, %eax
	addl	%eax, %eax
	ret
.LFE0:
	.size	main, .-main
	.section	.note.GNU-stack,"",@progbits
