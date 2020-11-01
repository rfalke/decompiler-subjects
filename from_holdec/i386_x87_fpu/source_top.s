	.file	"a.c"
	.text

	.p2align 4,,15
	.globl	TOP
	.type	TOP, @function
TOP:
	fstsw   %ax
	movzwl  %ax,%eax
	shr		$11,%eax
	andl	$7,%eax
	ret
.LFE11:
	.size	TOP, .-TOP
