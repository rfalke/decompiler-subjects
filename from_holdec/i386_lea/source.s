	.file	"source.c"
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"lea1 should=0x55667788/1432778632 is=0x%08x\n"
.LC1:
	.string	"lea2 should=0x11227788/ 287471496 is=0x%08x\n"
.LC2:
	.string	"lea3 should=0x00007788/     30600 is=0x%08x\n"
.LC3:
	.string	"lea4 should=0x11227788/ 287471496 is=0x%08x\n"
	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB11:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x7c,0x6
	subl	$12, %esp
	mov $287454020,%eax
	mov $1432778632,%ebx
	.byte 0x8d,0x03
	pushl %eax
	pushl	$.LC0
	call	printf
	popl	%eax
	popl	%edx

	mov $287454020,%eax
	mov $1432778632,%ebx
	.byte 0x66, 0x8d,0x03
	pushl %eax
	pushl	$.LC1
	call	printf
	popl	%ecx
	popl	%eax

	mov $287454020,%eax
	mov $1432778632,%ebx
	.byte 0x67, 0x8d,0x07
	pushl %eax
	pushl	$.LC2
	call	printf
	popl	%eax
	popl	%edx

	mov $287454020,%eax
	mov $1432778632,%ebx
	.byte 0x66, 0x67,0x8d,0x07
	pushl %eax
	pushl	$.LC3
	call	printf
	movl	-4(%ebp), %ecx
	.cfi_def_cfa 1, 0
	addl	$16, %esp
	xorl	%eax, %eax
	leave
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE11:
	.size	main, .-main
	.ident	"GCC: (GNU) 8.3.1 20190223 (Red Hat 8.3.1-2)"
	.section	.note.GNU-stack,"",@progbits
