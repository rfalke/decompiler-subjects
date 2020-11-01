	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_intro:
	.string	"FIST:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n"
.L_para:
	.string	"FIST(para): should=                             is=%12f/%15e\n"

.L_a_rc00:
	.string	"  FIST(%f,RC=00):   should=13 is=%d\n"
.L_a_rc01:
	.string	"  FIST(%f,RC=01):   should=12 is=%d\n"
.L_a_rc10:
	.string	"  FIST(%f,RC=10):   should=13 is=%d\n"
.L_a_rc11:
	.string	"  FIST(%f,RC=11):   should=12 is=%d\n"
.L_a_trunc:
	.string	"  FISTT(%f):        should=12 is=%d\n"

.L_b_rc00:
	.string	"  FIST(%f,RC=00):   should=-7 is=%d\n"
.L_b_rc01:
	.string	"  FIST(%f,RC=01):   should=-8 is=%d\n"
.L_b_rc10:
	.string	"  FIST(%f,RC=10):   should=-7 is=%d\n"
.L_b_rc11:
	.string	"  FIST(%f,RC=11):   should=-7 is=%d\n"
.L_b_trunc:
	.string	"  FISTT(%f):        should=-7 is=%d\n"

.L_127:
    .quad 4623339082463209062
.L_m71:
	.quad -4603692129088805274

	.text
	.p2align 4,,15
	.globl	FIST
	.type	FIST, @function
FIST:
    pushl   $.L_intro
    calll   puts
	addl	$4,%esp

	subl	$28, %esp
	fldl	.L_127
	fisttpl	24(%esp)
	movl	24(%esp), %eax
	fldl	.L_127
	fstpl	4(%esp)
	movl	$.L_a_trunc, (%esp)
	movl	%eax, 12(%esp)
	calll	printf
	addl	$28, %esp

	subl	$28, %esp
	fldl	.L_127
	fnstcw	22(%esp)
	movzwl	22(%esp), %eax
	movw	$127, 22(%esp)
	fldcw	22(%esp)
	movw	%ax, 22(%esp)
	fistl	24(%esp)
	fldcw	22(%esp)
	movl	24(%esp), %eax
	fstpl	4(%esp)
	movl	$.L_a_rc00, (%esp)
	movl	%eax, 12(%esp)
	calll	printf
	addl	$28, %esp

	subl	$28, %esp
	fldl	.L_127
	fnstcw	22(%esp)
	movzwl	22(%esp), %eax
	movw	$1151, 22(%esp)
	fldcw	22(%esp)
	movw	%ax, 22(%esp)
	fistl	24(%esp)
	fldcw	22(%esp)
	movl	24(%esp), %eax
	fstpl	4(%esp)
	movl	$.L_a_rc01, (%esp)
	movl	%eax, 12(%esp)
	calll	printf
	addl	$28, %esp

	subl	$28, %esp
	fldl	.L_127
	fnstcw	22(%esp)
	movzwl	22(%esp), %eax
	movw	$2175, 22(%esp)
	fldcw	22(%esp)
	movw	%ax, 22(%esp)
	fistl	24(%esp)
	fldcw	22(%esp)
	movl	24(%esp), %eax
	fstpl	4(%esp)
	movl	$.L_a_rc10, (%esp)
	movl	%eax, 12(%esp)
	calll	printf
	addl	$28, %esp

	subl	$28, %esp
	fldl	.L_127
	fnstcw	22(%esp)
	movzwl	22(%esp), %eax
	movw	$3199, 22(%esp)
	fldcw	22(%esp)
	movw	%ax, 22(%esp)
	fistl	24(%esp)
	fldcw	22(%esp)
	movl	24(%esp), %eax
	fstpl	4(%esp)
	movl	$.L_a_rc11, (%esp)
	movl	%eax, 12(%esp)
	calll	printf
	addl	$28, %esp

; #################################################

	subl	$28, %esp
	fldl	.L_m71
	fisttpl	24(%esp)
	movl	24(%esp), %eax
	fldl	.L_m71
	fstpl	4(%esp)
	movl	$.L_b_trunc, (%esp)
	movl	%eax, 12(%esp)
	calll	printf
	addl	$28, %esp

	subl	$28, %esp
	fldl	.L_m71
	fnstcw	22(%esp)
	movzwl	22(%esp), %eax
	movw	$127, 22(%esp)
	fldcw	22(%esp)
	movw	%ax, 22(%esp)
	fistl	24(%esp)
	fldcw	22(%esp)
	movl	24(%esp), %eax
	fstpl	4(%esp)
	movl	$.L_b_rc00, (%esp)
	movl	%eax, 12(%esp)
	calll	printf
	addl	$28, %esp

	subl	$28, %esp
	fldl	.L_m71
	fnstcw	22(%esp)
	movzwl	22(%esp), %eax
	movw	$1151, 22(%esp)
	fldcw	22(%esp)
	movw	%ax, 22(%esp)
	fistl	24(%esp)
	fldcw	22(%esp)
	movl	24(%esp), %eax
	fstpl	4(%esp)
	movl	$.L_b_rc01, (%esp)
	movl	%eax, 12(%esp)
	calll	printf
	addl	$28, %esp

	subl	$28, %esp
	fldl	.L_m71
	fnstcw	22(%esp)
	movzwl	22(%esp), %eax
	movw	$2175, 22(%esp)
	fldcw	22(%esp)
	movw	%ax, 22(%esp)
	fistl	24(%esp)
	fldcw	22(%esp)
	movl	24(%esp), %eax
	fstpl	4(%esp)
	movl	$.L_b_rc10, (%esp)
	movl	%eax, 12(%esp)
	calll	printf
	addl	$28, %esp

	subl	$28, %esp
	fldl	.L_m71
	fnstcw	22(%esp)
	movzwl	22(%esp), %eax
	movw	$3199, 22(%esp)
	fldcw	22(%esp)
	movw	%ax, 22(%esp)
	fistl	24(%esp)
	fldcw	22(%esp)
	movl	24(%esp), %eax
	fstpl	4(%esp)
	movl	$.L_b_rc11, (%esp)
	movl	%eax, 12(%esp)
	calll	printf
	addl	$28, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FIST, .-FIST
