	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_intro:
	.string	"using EFLAGS=0x%0x\n"
.L_b:
	.string	"  FCMOV(below ? 1 : pi):           should=                             is=%12f/%15e\n"
.L_e:
	.string	"  FCMOV(equal ? 1 : pi):           should=                             is=%12f/%15e\n"
.L_be:
	.string	"  FCMOV(below_or_equal ? 1 : pi):  should=                             is=%12f/%15e\n"
.L_u:
	.string	"  FCMOV(unordered ? 1 : pi):       should=                             is=%12f/%15e\n"
.L_nb:
	.string	"  FCMOV(!below ? 1 : pi):          should=                             is=%12f/%15e\n"
.L_ne:
	.string	"  FCMOV(!equal ? 1 : pi):          should=                             is=%12f/%15e\n"
.L_nbe:
	.string	"  FCMOV(!below_or_equal ? 1 : pi): should=                             is=%12f/%15e\n"
.L_nu:
	.string	"  FCMOV(!unordered ? 1 : pi):      should=                             is=%12f/%15e\n"

	.text
	.p2align 4,,15
	.globl	FCMOV
	.type	FCMOV, @function
FCMOV:

    subl    $40, %esp
    movl    44(%esp),%eax
	movzbl	%ah,%eax
	pushl   %eax
    pushl   $.L_intro
    call    printf
    addl    $48, %esp

    subl    $40, %esp
    movl    44(%esp),%eax
	sahf
	fld1
	fldpi
	fcmovb  %st(1),%st(0)
    fstl    8(%esp)
    fstpl   (%esp)
	fstp    %st(0)
    pushl   $.L_b
    call    printf
    addl    $44, %esp

    subl    $40, %esp
    movl    44(%esp),%eax
	sahf
	fld1
	fldpi
	fcmove  %st(1),%st(0)
    fstl    8(%esp)
    fstpl   (%esp)
	fstp    %st(0)
    pushl   $.L_e
    call    printf
    addl    $44, %esp

    subl    $40, %esp
    movl    44(%esp),%eax
	sahf
	fld1
	fldpi
	fcmovbe  %st(1),%st(0)
    fstl    8(%esp)
    fstpl   (%esp)
	fstp    %st(0)
    pushl   $.L_be
    call    printf
    addl    $44, %esp

    subl    $40, %esp
    movl    44(%esp),%eax
	sahf
	fld1
	fldpi
	fcmovu  %st(1),%st(0)
    fstl    8(%esp)
    fstpl   (%esp)
	fstp    %st(0)
    pushl   $.L_u
    call    printf
    addl    $44, %esp

    subl    $40, %esp
    movl    44(%esp),%eax
	sahf
	fld1
	fldpi
	fcmovnb  %st(1),%st(0)
    fstl    8(%esp)
    fstpl   (%esp)
	fstp    %st(0)
    pushl   $.L_nb
    call    printf
    addl    $44, %esp

    subl    $40, %esp
    movl    44(%esp),%eax
	sahf
	fld1
	fldpi
	fcmovne  %st(1),%st(0)
    fstl    8(%esp)
    fstpl   (%esp)
	fstp    %st(0)
    pushl   $.L_ne
    call    printf
    addl    $44, %esp

    subl    $40, %esp
    movl    44(%esp),%eax
	sahf
	fld1
	fldpi
	fcmovnbe  %st(1),%st(0)
    fstl    8(%esp)
    fstpl   (%esp)
	fstp    %st(0)
    pushl   $.L_nbe
    call    printf
    addl    $44, %esp

    subl    $40, %esp
    movl    44(%esp),%eax
	sahf
	fld1
	fldpi
	fcmovnu  %st(1),%st(0)
    fstl    8(%esp)
    fstpl   (%esp)
	fstp    %st(0)
    pushl   $.L_nu
    call    printf
    addl    $44, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FCMOV, .-FCMOV
