	.file	"source.c"
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
        .asciz  "got an 'a'"

.L.str.1:
        .asciz  "no 'a'"

.L.str.2:
        .asciz  "not enough args or too small"

	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
	pushl %ebx
        subl    $12, %esp
        cmpl    $2, 20(%esp)
        jne     .LBB0_5
        movl    24(%esp), %eax
		movl	%eax, %ebx
        movl    4(%eax), %eax
        cmpb    $0, (%eax)
        je      .LBB0_5

		movl    4(%ebx), %eax
		movb	1(%eax), %dl
		subb	$97, %dl
		jz		.Lgood

        movl    $.L.str.1, (%esp)
        jmp     .LBB0_6
.LBB0_5:
        movl    $.L.str.2, (%esp)
.LBB0_6:
        calll   puts
        xorl    %eax, %eax
        addl    $12, %esp
		popl %ebx
        retl
.Lgood:
        movl    $.L.str, (%esp)
        jmp     .LBB0_6

.LFE11:
	.size	main, .-main
