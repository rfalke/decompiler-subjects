	.file	"source.c"
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"mov eax: 0x%016lx\n"
.LC1:
	.string	"mov  ax: 0x%016lx\n"
	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB11:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movl	$.LC0, %edi
	xorl	%eax, %eax
	movabsq	$1234605616436508552, %rsi
	mov		$30292, %esi
	call	printf
	movabsq	$1234605616436508552, %rsi
	mov		$30292, %si
	movl	$.LC1, %edi
	xorl	%eax, %eax
	call	printf
	xorl	%eax, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE11:
	.size	main, .-main
	.ident	"GCC: (GNU) 8.3.1 20190223 (Red Hat 8.3.1-2)"
	.section	.note.GNU-stack,"",@progbits
