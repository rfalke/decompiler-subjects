	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_fnop:
	.string	"before FNOP"
.L_fninit:
	.string	"before FNINIT"
.L_fnclex:
	.string	"before FNCLEX"
.L_fdecstp:
	.string	"before FDECSTP"
.L_ffree:
	.string	"before FFREE(st(4))"
.L_fincstp:
	.string	"before FINCSTP"
.L_fnsave:
	.string	"before FNSAVE"
.L_fnstcw:
	.string	"before FNSTCW"
.L_fnstenv:
	.string	"before FNSTENV"
.L_fnstsw:
	.string	"before FNSTSW"
.L_frstor:
	.string	"before FRSTOR"
.L_fwait:
	.string	"before FWAIT"
.L_fxrstor:
    .string "before FXRSTOR"
.L_fxsave:
    .string "before FXSAVE"

	.text
	.p2align 4,,15
	.globl	NOT_EXECUTED
	.type	NOT_EXECUTED, @function
NOT_EXECUTED:
    pushl   $.L_fnop
    calll   puts
	addl	$4,%esp
	fnop

    pushl   $.L_fnclex
    calll   puts
	addl	$4,%esp
	fnclex

    pushl   $.L_fdecstp
    calll   puts
	addl	$4,%esp
	fdecstp

    pushl   $.L_ffree
    calll   puts
	addl	$4,%esp
	ffree %st(4)

    pushl   $.L_fincstp
    calll   puts
	addl	$4,%esp
	fincstp

    pushl   $.L_fninit
    calll   puts
	addl	$4,%esp
	fninit

    pushl   $.L_fnsave
    calll   puts
	addl	$4,%esp
	fnsave buffer

    pushl   $.L_fnstcw
    calll   puts
	addl	$4,%esp
	fnstcw buffer

    pushl   $.L_fnstenv
    calll   puts
	addl	$4,%esp
	fnstenv buffer

    pushl   $.L_fnstsw
    calll   puts
	addl	$4,%esp
	fnstsw buffer

    pushl   $.L_frstor
    calll   puts
	addl	$4,%esp
	frstor buffer

    pushl   $.L_fwait
    calll   puts
	addl	$4,%esp
	fwait

    pushl   $.L_fxrstor
    calll   puts
	addl	$4,%esp
	fxrstor buffer

    pushl   $.L_fxsave
    calll   puts
	addl	$4,%esp
	fxsave buffer

	xorl	%eax, %eax
	ret
.LFE11:
	.size	NOT_EXECUTED, .-NOT_EXECUTED

    .comm   buffer,1024,4
