	.file	"source.c"
	.text
	.globl	add
	.type	add, @function
add:
.LFB0:
	.cfi_startproc
        movzbl  4(%esp), %eax
        movzbl  8(%esp), %edx
        addb    %dl, %al
        mov $0,%edx
		seto %dl
		setc %dh
        shl $16,%edx
        and $0xff,%eax
        add %edx,%eax
        ret
	.cfi_endproc
.LFE0:
	.size	add, .-add



	.globl	adc_set
	.type	adc_set, @function
adc_set:
.LFB1:
	.cfi_startproc
        movzbl  4(%esp), %eax
        movzbl  8(%esp), %edx
		stc
        adcb    %dl, %al
        mov $0,%edx
        seto %dl
        setc %dh
        shl $16,%edx
        and $0xff,%eax
        add %edx,%eax
        ret
	.cfi_endproc
.LFE1:
	.size	adc_set, .-adc_set


	.globl	adc_clear
	.type	adc_clear, @function
adc_clear:
.LFB2:
	.cfi_startproc
        movzbl  4(%esp), %eax
        movzbl  8(%esp), %edx
		clc
        adcb    %dl, %al
        mov $0,%edx
        seto %dl
        setc %dh
        shl $16,%edx
        and $0xff,%eax
        add %edx,%eax
        ret

	.cfi_endproc
.LFE2:
	.size	adc_clear, .-adc_clear
