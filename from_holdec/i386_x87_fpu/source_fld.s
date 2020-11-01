	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_s32:
	.string	"FLD(float=12.34...):       should=   12.345679/   1.234568e+01 is=%12f/%15e\n"
.L_s64:
	.string	"FLD(double=12.34...):      should=   12.345679/   1.234568e+01 is=%12f/%15e\n"
.L_s80:
	.string	"FLD(long double=12.34...): should=   12.345679/   1.234568e+01 is=%12f/%15e\n"
.L_f32:
        .long   1095075815              # float 12.3456793
.L_f64:
        .quad   4623139617417162874     # double 12.345678901234567
.L_f80:
        .quad   -4213145379505188864    # x86_fp80 12.3456789012345673484
        .short  16386
        .zero   2

	.text
	.p2align 4,,15
	.globl	FLD
	.type	FLD, @function
FLD:
	subl	$40, %esp
	flds   .L_f32
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_s32
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fldl   .L_f64
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_s64
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fldt   .L_f80
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_s80
	call	printf
	addl	$44, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FLD, .-FLD
