	.file	"source.c"
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC_yes:
	.string	" yes"
.LC_no:
	.string	"  no"
	.text


	.p2align 4
	.globl	char_or1
	.type	char_or1, @function
char_or1:
.LFB11:
	subl	$12, %esp
	movzbl	gchar1, %eax
	orb	gchar2, %al
	je	.L6
	subl	$12, %esp
	pushl	$.LC_no
	call	printf
	addl	$16, %esp
	addl	$12, %esp
	ret
	.p2align 4,,10
	.p2align 3
.L6:
	subl	$12, %esp
	pushl	$.LC_yes
	call	printf
	addl	$16, %esp
	addl	$12, %esp
	ret
.LFE11:
	.size	char_or1, .-char_or1


	.p2align 4
	.globl	char_or2
	.type	char_or2, @function
char_or2:
.LFB12:
	subl	$12, %esp
	movw	gshort1, %ax
	orb		%ah,%al
	jne	.L8
	subl	$12, %esp
	pushl	$.LC_yes
	call	printf
	addl	$16, %esp
	addl	$12, %esp
	ret
	.p2align 4,,10
	.p2align 3
.L8:
	subl	$12, %esp
	pushl	$.LC_no
	call	printf
	addl	$16, %esp
	addl	$12, %esp
	ret
.LFE12:
	.size	char_or2, .-char_or2


	.p2align 4
	.globl	char_and1
	.type	char_and1, @function
char_and1:
.LFB13:
	subl	$12, %esp
	movzbl	gchar1, %eax
	andb	gchar2, %al
	cmpb	$-1, %al
	je	.L15
	subl	$12, %esp
	pushl	$.LC_no
	call	printf
	addl	$16, %esp
	addl	$12, %esp
	ret
	.p2align 4,,10
	.p2align 3
.L15:
	subl	$12, %esp
	pushl	$.LC_yes
	call	printf
	addl	$16, %esp
	addl	$12, %esp
	ret
.LFE13:
	.size	char_and1, .-char_and1


	.p2align 4
	.globl	char_and2
	.type	char_and2, @function
char_and2:
.LFB19:
	subl	$12, %esp
	movzbl	gchar1, %eax
	andb	gchar2, %al
	incb	%al
	je	.L20
	subl	$12, %esp
	pushl	$.LC_no
	call	printf
	addl	$16, %esp
	addl	$12, %esp
	ret
	.p2align 4,,10
	.p2align 3
.L20:
	subl	$12, %esp
	pushl	$.LC_yes
	call	printf
	addl	$16, %esp
	addl	$12, %esp
	ret
.LFE19:
	.size	char_and2, .-char_and2


	.p2align 4
	.globl	char_and3
	.type	char_and3, @function
char_and3:
.LFB15:
	subl	$12, %esp
	movw	gshort1, %ax
	andb	%ah,%al
	incb	%al
	je	.L25
	subl	$12, %esp
	pushl	$.LC_no
	call	printf
	addl	$16, %esp
	addl	$12, %esp
	ret
	.p2align 4,,10
	.p2align 3
.L25:
	subl	$12, %esp
	pushl	$.LC_yes
	call	printf
	addl	$16, %esp
	addl	$12, %esp
	ret
.LFE15:
	.size	char_and3, .-char_and3


	.p2align 4
	.globl	char_xor1
	.type	char_xor1, @function
char_xor1:
.LFB16:
	subl	$12, %esp
	movb	gchar1, %al
	movb	gchar2, %bl
	xorb	%al, %bl
	je	.L30
	subl	$12, %esp
	pushl	$.LC_no
	call	printf
	addl	$16, %esp
	addl	$12, %esp
	ret
	.p2align 4,,10
	.p2align 3
.L30:
	subl	$12, %esp
	pushl	$.LC_yes
	call	printf
	addl	$16, %esp
	addl	$12, %esp
	ret
.LFE16:
	.size	char_xor1, .-char_xor1
	.section	.rodata.str1.1
.LC2:
	.string	"both (%d,%d) zero:"
.LC3:
	.string	""
.LC4:
	.string	"short (%d) zero:"
.LC5:
	.string	"both (%d,%d) 255:"
.LC6:
	.string	"short (%d) -1:"
.LC7:
	.string	"both (%d,%d) equal:"
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB17:
	leal	4(%esp), %ecx
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%ecx
	subl	$8, %esp
	movb	$1, gchar1
	pushl	$0
	pushl	$1
	pushl	$.LC2
	movb	$0, gchar2
	call	printf
	call	char_or1
	movl	$.LC3, (%esp)
	call	puts
	popl	%edx
	popl	%ecx
	pushl	$0
	pushl	$.LC4
	xorl	%eax, %eax
	movw	%ax, gshort1
	call	printf
	call	char_or2
	movl	$.LC3, (%esp)
	call	puts
	addl	$12, %esp
	movb	$1, gchar1
	pushl	$255
	pushl	$1
	pushl	$.LC5
	movb	$-1, gchar2
	call	printf
	call	char_and1
	call	char_and1
	movl	$.LC3, (%esp)
	call	puts
	xorl	%eax, %eax
	movw	%ax, gshort1
	popl	%eax
	popl	%edx
	pushl	$0
	pushl	$.LC6
	call	printf
	call	char_and3
	movl	$.LC3, (%esp)
	call	puts
	addl	$12, %esp
	movb	$1, gchar1
	pushl	$2
	pushl	$1
	pushl	$.LC7
	movb	$2, gchar2
	call	printf
	call	char_xor1
	movl	$.LC3, (%esp)
	call	puts
	movl	-4(%ebp), %ecx
	addl	$16, %esp
	xorl	%eax, %eax
	leave
	leal	-4(%ecx), %esp
	ret
.LFE17:
	.size	main, .-main
	.globl	gshort2
	.bss
	.align 2
	.type	gshort2, @object
	.size	gshort2, 2
gshort2:
	.zero	2
	.globl	gshortdummy
	.align 2
	.type	gshortdummy, @object
	.size	gshortdummy, 2
gshortdummy:
	.zero	2
	.globl	gshort1
	.align 2
	.type	gshort1, @object
	.size	gshort1, 2
gshort1:
	.zero	2
	.globl	gchar2
	.type	gchar2, @object
	.size	gchar2, 1
gchar2:
	.zero	1
	.globl	gchardummy
	.type	gchardummy, @object
	.size	gchardummy, 1
gchardummy:
	.zero	1
	.globl	gchar1
	.type	gchar1, @object
	.size	gchar1, 1
gchar1:
	.zero	1
	.ident	"GCC: (GNU) 11.2.1 20210728 (Red Hat 11.2.1-1)"
	.section	.note.GNU-stack,"",@progbits
