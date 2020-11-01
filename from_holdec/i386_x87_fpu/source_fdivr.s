	.file	"a.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.L_para1:
	.string	"FDIVR(1/para):     should=                             is=%12f/%15e\n"
.L_para2:
	.string	"FDIVR(para/12.34): should=                             is=%12f/%15e\n"
.L_recipi:
	.string	"FDIVR(1/pi):       should=    0.318310/   3.183099e-01 is=%12f/%15e\n"
.L_pi_int:
	.string	"FIDIVR(1000/pi):   should=  318.309886/   3.183099e+02 is=%12f/%15e\n"
.L_1234:
       .long   2061584302
       .long   1076407828
.L_1000w:
	.word 1000

	.text
	.p2align 4,,15
	.globl	FDIVR
	.type	FDIVR, @function
FDIVR:

    subl    $40, %esp
	fld1
    fldl    44(%esp)
	fdivrp
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_para1
    call    printf
    addl    $44, %esp

    subl    $40, %esp
    fldl    44(%esp)
    fldl    .L_1234
	fdivrp
    fstl    8(%esp)
    fstpl   (%esp)
    pushl   $.L_para2
    call    printf
    addl    $44, %esp

	subl	$40, %esp
	fld1
	fldpi
	fdivrp
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_recipi
	call	printf
	addl	$44, %esp

	subl	$40, %esp
	fldpi
	fidivr   .L_1000w
	fstl	8(%esp)
	fstpl	(%esp)
	pushl	$.L_pi_int
	call	printf
	addl	$44, %esp

	xorl	%eax, %eax
	ret
.LFE11:
	.size	FDIVR, .-FDIVR
