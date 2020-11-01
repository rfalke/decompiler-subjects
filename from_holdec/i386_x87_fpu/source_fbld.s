	.file	"b.c"
	.text
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.LC1:
	.string	"FBLD(0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x): should=-123456789088776656.000000/  -1.234568e+17 is=%12f/%15e\n"
readbuffer:
        .byte   0x55
        .byte   0x66
        .byte   0x77
        .byte   0x88
        .byte   0x90
        .byte   0x78
        .byte   0x56
        .byte   0x34
		.byte   0x12
		.byte   0x80

	.text
	.p2align 4,,15
	.globl	FBLD
	.type	FBLD, @function
FBLD:
	subl	$32, %esp
	fbld   readbuffer
    fstl    8(%esp)
    fstpl   (%esp)

	movzbl	readbuffer+9, %eax
	pushl	%eax
	movzbl	readbuffer+8, %eax
	pushl	%eax
	movzbl	readbuffer+7, %eax
	pushl	%eax
	movzbl	readbuffer+6, %eax
	pushl	%eax
	movzbl	readbuffer+5, %eax
	pushl	%eax
	movzbl	readbuffer+4, %eax
	pushl	%eax
	movzbl	readbuffer+3, %eax
	pushl	%eax
	movzbl	readbuffer+2, %eax
	pushl	%eax
	movzbl	readbuffer+1, %eax
	pushl	%eax
	movzbl	readbuffer, %eax
	pushl	%eax

	pushl	$.LC1
	call	printf
	xorl	%eax, %eax
	addl	$76, %esp
	ret
.LFE11:
	.size	FBLD, .-FBLD
