	.file	"source.c"
	.text
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align 8
.LC0:
	.string	"lea1 should=0x1a2a3a4a5a6a7b8b/1885383485026892683 is=0x%016lx\n"
	.align 8
.LC1:
	.string	"lea2 should=0x1a2a3a4a5a6a7b8b/1885383485026892683 is=0x%016lx\n"
	.align 8
.LC2:
	.string	"lea3 should=0x000000005b6b7b8b/         1533770635 is=0x%016lx\n"
	.align 8
.LC3:
	.string	"lea4 should=0x000000005b6b7b8b/         1533770635 is=0x%016lx\n"
	.align 8
.LC4:
	.string	"lea5 should=0x1b2b3b4b5b6b7b8b/1957723657864969099 is=0x%016lx\n"
	.align 8
.LC5:
	.string	"lea6 should=0x000000005b6b7b8b/         1533770635 is=0x%016lx\n"
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
	movabsq	$1885383485026892426, %rax
	movabsq	$1957723657864969099, %rbx
	.byte 0x66,0x8d,0x03
	movq %rax,%rsi
	xorl	%eax, %eax
	call	printf

	movl	$.LC1, %edi
	movabsq	$1885383485026892426, %rax
	movabsq	$1957723657864969099, %rbx
	.byte 0x67,0x66,0x8d,0x03
	movq %rax,%rsi
	xorl	%eax, %eax
	call	printf

	movl	$.LC2, %edi
	movabsq	$1885383485026892426, %rax
	movabsq	$1957723657864969099, %rbx
	.byte 0x8d,0x03
	movq %rax,%rsi
	xorl	%eax, %eax
	call	printf

	movl	$.LC3, %edi
	movabsq	$1885383485026892426, %rax
	movabsq	$1957723657864969099, %rbx
	.byte 0x67,0x8d,0x03
	movq %rax,%rsi
	xorl	%eax, %eax
	call	printf

	movl	$.LC4, %edi
	movabsq	$1885383485026892426, %rax
	movabsq	$1957723657864969099, %rbx
	.byte 0x48,0x8d,0x03
	movq %rax,%rsi
	xorl	%eax, %eax
	call	printf

	movl	$.LC5, %edi
	movabsq	$1885383485026892426, %rax
	movabsq	$1957723657864969099, %rbx
	.byte 0x67,0x48,0x8d,0x03
	movq %rax,%rsi
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
