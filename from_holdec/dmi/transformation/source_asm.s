	.text
	.globl	intermediate_1_ternary_blocks
	.type	intermediate_1_ternary_blocks, @function
intermediate_1_ternary_blocks:
	pushl	%ebp
	movl	%esp, %ebp
	cmpl	$42, 8(%ebp)
	jne	.L8
	movl	$0, %eax
	jmp	.L9
.L8:
	movl	$1, %eax
.L9:
	popl	%ebp
	ret
	.size	intermediate_1_ternary_blocks, .-intermediate_1_ternary_blocks


	.globl	intermediate_2_other_in_blocks
	.type	intermediate_2_other_in_blocks, @function
intermediate_2_other_in_blocks:
	pushl	%ebp
	movl	%esp, %ebp
	cmpl	$42, 8(%ebp)
	jne	.L11
	movl	$100, %eax
	jmp	.L12
.L11:
	movl	$201, %eax
.L12:
	popl	%ebp
	ret
	.size	intermediate_2_other_in_blocks, .-intermediate_2_other_in_blocks
