	.file	"source.c"
	.text

	.globl	do_cmp
	.type	do_cmp, @function
do_cmp:
.LFB0:
	.cfi_startproc
        movzbl  4(%esp), %eax
        movzbl  8(%esp), %edx

        cmpb    %dl, %al
        mov $0,%eax
		setl %al
        ret
	.cfi_endproc
.LFE0:
	.size	do_cmp, .-do_cmp



	.globl	do_signed
	.type	do_signed, @function
do_signed:
.LFB1:
	.cfi_startproc
        movzbl  4(%esp), %eax
        movzbl  8(%esp), %edx
	
		cmpb    %dl, %al
		mov $0,%eax
        sets %al
        ret
	.cfi_endproc
.LFE1:
	.size	do_signed, .-do_signed

	.globl	do_cmp_const
	.type	do_cmp_const, @function
do_cmp_const:
	.cfi_startproc
        movzbl  4(%esp), %eax

        cmpb    $10, %al
        mov $0,%eax
		setl %al
        ret
	.cfi_endproc
	.size	do_cmp_const, .-do_cmp_const



	.globl	do_signed_const
	.type	do_signed_const, @function
do_signed_const:
	.cfi_startproc
        movzbl  4(%esp), %eax
	
		cmpb    $10, %al
		mov $0,%eax
        sets %al
        ret
	.cfi_endproc
	.size	do_signed_const, .-do_signed_const
