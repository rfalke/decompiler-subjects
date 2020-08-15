	.file	"source.c"
	.text
	.globl	sub
	.type	sub, @function
sub:
.LFB0:
	.cfi_startproc
        movzbl  4(%esp), %eax
        movzbl  8(%esp), %edx
        subb    %dl, %al
        mov $0,%edx
		seto %dl
		setc %dh
        shl $16,%edx
        and $0xff,%eax
        add %edx,%eax
        ret
	.cfi_endproc
.LFE0:
	.size	sub, .-sub



	.globl	sbb_set
	.type	sbb_set, @function
sbb_set:
.LFB1:
	.cfi_startproc
        movzbl  4(%esp), %eax
        movzbl  8(%esp), %edx
		stc
        sbbb    %dl, %al
        mov $0,%edx
        seto %dl
        setc %dh
        shl $16,%edx
        and $0xff,%eax
        add %edx,%eax
        ret
	.cfi_endproc
.LFE1:
	.size	sbb_set, .-sbb_set


	.globl	sbb_clear
	.type	sbb_clear, @function
sbb_clear:
.LFB2:
	.cfi_startproc
        movzbl  4(%esp), %eax
        movzbl  8(%esp), %edx
		clc
        sbbb    %dl, %al
        mov $0,%edx
        seto %dl
        setc %dh
        shl $16,%edx
        and $0xff,%eax
        add %edx,%eax
        ret

	.cfi_endproc
.LFE2:
	.size	sbb_clear, .-sbb_clear
