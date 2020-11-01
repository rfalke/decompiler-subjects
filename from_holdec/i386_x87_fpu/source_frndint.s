	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_intro:
	.string	"FRNDINT:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n"
.L_para:
	.string	"  FRNDINT(para):              should=                             is=%12f/%15e\n"
.L_a_rc00:
	.string	"  FRNDINT(%f,RC=00):   should=   13.000000/   1.300000e+01 is=%12f/%15e\n"
.L_a_rc01:
	.string	"  FRNDINT(%f,RC=01):   should=   12.000000/   1.200000e+01 is=%12f/%15e\n"
.L_a_rc10:
	.string	"  FRNDINT(%f,RC=10):   should=   13.000000/   1.300000e+01 is=%12f/%15e\n"
.L_a_rc11:
	.string	"  FRNDINT(%f,RC=11):   should=   12.000000/   1.200000e+01 is=%12f/%15e\n"

.L_b_rc00:
	.string	"  FRNDINT(%f,RC=00):   should=   -7.000000/  -7.000000e+00 is=%12f/%15e\n"
.L_b_rc01:
	.string	"  FRNDINT(%f,RC=01):   should=   -8.000000/  -8.000000e+00 is=%12f/%15e\n"
.L_b_rc10:
	.string	"  FRNDINT(%f,RC=10):   should=   -7.000000/  -7.000000e+00 is=%12f/%15e\n"
.L_b_rc11:
	.string	"  FRNDINT(%f,RC=11):   should=   -7.000000/  -7.000000e+00 is=%12f/%15e\n"


.L_127:
    .quad 4623339082463209062
.L_m71:
	.quad -4603692129088805274

	.text
	.p2align 4,,15
	.globl	FRNDINT
	.type	FRNDINT, @function
FRNDINT:
    pushl   $.L_intro
    calll   puts
	addl	$4,%esp

	subl	$40, %esp
    fldl    44(%esp)
	frndint
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_para
    call    printf
    addl    $44, %esp

	subl	$40, %esp
	fldl	.L_127
	fstl	4(%esp)
	fnstcw	32(%esp)
	movzwl	32(%esp), %eax
	movw	$127, 32(%esp)
	fldcw	32(%esp)
	movw	%ax, 32(%esp)
	frndint
	fldcw	32(%esp)
	fstl	12(%esp)
	fstpl	20(%esp)
	movl	$.L_a_rc00, (%esp)
	calll	printf
	addl	$40, %esp

	subl	$40, %esp
	fldl	.L_127
	fstl	4(%esp)
	fnstcw	32(%esp)
	movzwl	32(%esp), %eax
	movw	$1151, 32(%esp)
	fldcw	32(%esp)
	movw	%ax, 32(%esp)
	frndint
	fldcw	32(%esp)
	fstl	12(%esp)
	fstpl	20(%esp)
	movl	$.L_a_rc01, (%esp)
	calll	printf
	addl	$40, %esp

	subl	$40, %esp
	fldl	.L_127
	fstl	4(%esp)
	fnstcw	32(%esp)
	movzwl	32(%esp), %eax
	movw	$2175, 32(%esp)
	fldcw	32(%esp)
	movw	%ax, 32(%esp)
	frndint
	fldcw	32(%esp)
	fstl	12(%esp)
	fstpl	20(%esp)
	movl	$.L_a_rc10, (%esp)
	calll	printf
	addl	$40, %esp

	subl	$40, %esp
	fldl	.L_127
	fstl	4(%esp)
	fnstcw	32(%esp)
	movzwl	32(%esp), %eax
	movw	$3199, 32(%esp)
	fldcw	32(%esp)
	movw	%ax, 32(%esp)
	frndint
	fldcw	32(%esp)
	fstl	12(%esp)
	fstpl	20(%esp)
	movl	$.L_a_rc11, (%esp)
	calll	printf
	addl	$40, %esp


; #################################################

	subl	$40, %esp
	fldl	.L_m71
	fstl	4(%esp)
	fnstcw	32(%esp)
	movzwl	32(%esp), %eax
	movw	$127, 32(%esp)
	fldcw	32(%esp)
	movw	%ax, 32(%esp)
	frndint
	fldcw	32(%esp)
	fstl	12(%esp)
	fstpl	20(%esp)
	movl	$.L_b_rc00, (%esp)
	calll	printf
	addl	$40, %esp

	subl	$40, %esp
	fldl	.L_m71
	fstl	4(%esp)
	fnstcw	32(%esp)
	movzwl	32(%esp), %eax
	movw	$1151, 32(%esp)
	fldcw	32(%esp)
	movw	%ax, 32(%esp)
	frndint
	fldcw	32(%esp)
	fstl	12(%esp)
	fstpl	20(%esp)
	movl	$.L_b_rc01, (%esp)
	calll	printf
	addl	$40, %esp

	subl	$40, %esp
	fldl	.L_m71
	fstl	4(%esp)
	fnstcw	32(%esp)
	movzwl	32(%esp), %eax
	movw	$2175, 32(%esp)
	fldcw	32(%esp)
	movw	%ax, 32(%esp)
	frndint
	fldcw	32(%esp)
	fstl	12(%esp)
	fstpl	20(%esp)
	movl	$.L_b_rc10, (%esp)
	calll	printf
	addl	$40, %esp

	subl	$40, %esp
	fldl	.L_m71
	fstl	4(%esp)
	fnstcw	32(%esp)
	movzwl	32(%esp), %eax
	movw	$3199, 32(%esp)
	fldcw	32(%esp)
	movw	%ax, 32(%esp)
	frndint
	fldcw	32(%esp)
	fstl	12(%esp)
	fstpl	20(%esp)
	movl	$.L_b_rc11, (%esp)
	calll	printf
	addl	$40, %esp



	xorl	%eax, %eax
	ret
.LFE11:
	.size	FRNDINT, .-FRNDINT
