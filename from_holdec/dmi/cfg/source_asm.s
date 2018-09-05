	.section	.rodata.str1.1
.LC3:
	.string	"before"
.LC4:
	.string	"after"
.LC5:
	.string	"body"
	.text
	.p2align 4,,15
	.globl	basic_5_head_controlled_loop
	.type	basic_5_head_controlled_loop, @function
basic_5_head_controlled_loop:
.LFB15:
	pushl	%ebx
	subl	$20, %esp
	movl	28(%esp), %ebx
	pushl	$.LC3
	call	puts
	addl	$16, %esp
.L28:
	cmpl	$42, %ebx
	je	.L27
	subl	$12, %esp
	addl	$1, %ebx
	pushl	$.LC5
	call	puts
	addl	$16, %esp
	jmp	.L28
.L27:
	subl	$12, %esp
	pushl	$.LC4
	call	puts
	addl	$24, %esp
	xorl	%eax, %eax
	popl	%ebx
	ret
.LFE15:
	.size	basic_5_head_controlled_loop, .-basic_5_head_controlled_loop

	.p2align 4,,15
	.globl	basic_6_tail_controlled_loop
	.type	basic_6_tail_controlled_loop, @function
basic_6_tail_controlled_loop:
.LFB16:
	pushl	%ebx
	subl	$20, %esp
	movl	28(%esp), %ebx
	pushl	$.LC3
	call	puts
	addl	$16, %esp
.L33:
	subl	$12, %esp
	addl	$1, %ebx
	pushl	$.LC5
	call	puts
	addl	$16, %esp
	cmpl	$42, %ebx
	jne	.L33
	subl	$12, %esp
	pushl	$.LC4
	call	puts
	addl	$24, %esp
	xorl	%eax, %eax
	popl	%ebx
	ret
.LFE16:
	.size	basic_6_tail_controlled_loop, .-basic_6_tail_controlled_loop


	.section        .rodata.str1.1
.LC3a:
	.string "loop body"
	.text
	.p2align 4,,15
	.globl	basic_8_forever_loop
	.type	basic_8_forever_loop, @function
basic_8_forever_loop:
.LFB26:
	subl	$12, %esp
	cmpl	$42, 16(%esp)
	je	.L30
	xorl	%eax, %eax
	addl	$12, %esp
	ret
.L30:
	subl	$12, %esp
	pushl	$.LC3a
	call	puts
	addl	$16, %esp
	jmp	.L30
.LFE26:
	.size	basic_8_forever_loop, .-basic_8_forever_loop

	.section	.rodata
.LC3b:
	.string	"entry"
.LC4b:
	.string	"exit"
.LC5b:
	.string	"not reached"
	.text
	.globl	basic_9_dead_block
	.type	basic_9_dead_block, @function
basic_9_dead_block:
.LFB7:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$8, %esp
	subl	$12, %esp
	pushl	$.LC3b
	call	puts
	addl	$16, %esp
	jmp .L22

	subl	$12, %esp
	pushl	$.LC5b
	call	puts
	addl	$16, %esp
.L22:
	subl	$12, %esp
	pushl	$.LC4b
	call	puts
	addl	$16, %esp
	movl	$0, %eax
	leave
	ret
.LFE7:
	.size	basic_9_dead_block, .-basic_9_dead_block
