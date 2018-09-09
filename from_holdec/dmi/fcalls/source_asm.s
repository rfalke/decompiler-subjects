	.globl  basic_3_accessing_all_registers
	.type   basic_3_accessing_all_registers, @function
basic_3_accessing_all_registers:
.LFB11:
	addl    %eax, %eax

	leal    (%eax,%ebx,2), %eax
	addl	%ebx, %eax

	leal    (%eax,%ecx,4), %eax

	leal    (%eax,%edx,4), %eax
	addl	%edx, %eax

	leal    (%eax,%esi,4), %eax
	leal    (%eax,%esi,2), %eax

	leal    (%ecx,%edi,4), %eax
	leal    (%ecx,%edi,2), %eax
	addl	%edi, %eax

	leal    (%ecx,%ebp,8), %eax
	ret
.LFE11:
	.size   basic_3_accessing_all_registers, .-basic_3_accessing_all_registers

	.globl  sum3_uncommon
	.type   sum3_uncommon, @function
sum3_uncommon:
.LFB3:
	movl	%esi, %eax
	addl	%edi, %eax
	addl	%edi, %eax
	addl	%ebp, %eax
	addl	%ebp, %eax
	addl	%ebp, %eax
	addl	$10, %eax
	ret
.LFE3:
	.size   sum3_uncommon, .-sum3_uncommon

	.section	.rodata.str1.1
.LC11:
	.string	"un common"
	.text
	.p2align 4,,15
	.globl	intermediate_2_use_uncommon_registers_for_parameters
	.type	intermediate_2_use_uncommon_registers_for_parameters, @function
intermediate_2_use_uncommon_registers_for_parameters:
.LFB15:
	pushl	$0
	call	time
	movl	32(%esp), %esi
	popl	%ebx

	movl	%eax, %edi
	movl	$42, %ebp
	call	sum3_uncommon
	cmpl	$123, %eax
	jle	.L46
	pushl	$.LC11
	call	puts
	popl	%ebx
.L46:
	xorl	%eax, %eax
	ret
.LFE15:
	.size	intermediate_2_use_uncommon_registers_for_parameters, .-intermediate_2_use_uncommon_registers_for_parameters

	.section	.rodata.str1.1
.LC11b:
	.string	"before"
.LC11c:
	.string	"not reached"
	.text
	.p2align 4,,15
        .globl  intermediate_3_calling_noreturn
        .type   intermediate_3_calling_noreturn, @function
intermediate_3_calling_noreturn:
        pushl   $.LC11b
        call    puts
		popl %eax

        pushl	$1
        call    exit
		popl %eax

        pushl   $.LC11c
        call    puts
		popl %eax
		xorl	%eax, %eax
		ret
        .size   intermediate_3_calling_noreturn, .-intermediate_3_calling_noreturn

        .section        .rodata.str1.1
.LC11x:
        .string "is 42"
.LC12x:
        .string "it not 42"
.LC13x:
        .string "you should not see this"
        .text
        .p2align 4,,15
        .globl  intermediate_5_pushs_in_different_blocks
        .type   intermediate_5_pushs_in_different_blocks, @function
intermediate_5_pushs_in_different_blocks:
        cmpl    $42, 16(%esp)
        je      .L51
        pushl   $.LC12x
		jmp 	.LC12join
.L51:
		pushl	$.LC11x
.LC12join:
        call    puts
        addl    $4, %esp
        xorl    %eax, %eax
        ret
        .size   intermediate_5_pushs_in_different_blocks, .-intermediate_5_pushs_in_different_blocks


	.section	.rodata.str1.1
.LC11s:
	.string	"is above 2"
	.text
	.p2align 4,,15
	.globl	advanced_1_pass_in_flags_reg_helper
	.type	advanced_1_pass_in_flags_reg_helper, @function
advanced_1_pass_in_flags_reg_helper:
	jle .Lover
	pushl	$.LC11s
	call	puts
	addl	$4, %esp
.Lover:
	xorl	%eax, %eax
	ret
	.size	advanced_1_pass_in_flags_reg_helper, .-advanced_1_pass_in_flags_reg_helper

	.globl	advanced_1_pass_in_flags_reg
	.type	advanced_1_pass_in_flags_reg, @function
advanced_1_pass_in_flags_reg:
	subl	$12, %esp
	cmpl	$2, 16(%esp)
	call	advanced_1_pass_in_flags_reg_helper
	xorl	%eax, %eax
	addl	$12, %esp
	ret
	.size	advanced_1_pass_in_flags_reg, .-advanced_1_pass_in_flags_reg

	.globl	advanced_2_return_in_flags_reg_helper
	.type	advanced_2_return_in_flags_reg_helper, @function
advanced_2_return_in_flags_reg_helper:
	subl	$12, %esp
	cmpl	$2, 16(%esp)
	xorl	%eax, %eax
	addl	$12, %esp
	ret
	.size	advanced_2_return_in_flags_reg_helper, .-advanced_2_return_in_flags_reg_helper

	.globl	advanced_2_return_in_flags_reg
	.type	advanced_2_return_in_flags_reg, @function
advanced_2_return_in_flags_reg:
	call	advanced_2_return_in_flags_reg_helper
	jle .Lover2
	pushl	$.LC11s
	call	puts
	addl	$4, %esp
.Lover2:
	xorl	%eax, %eax
	ret
	.size	advanced_2_return_in_flags_reg, .-advanced_2_return_in_flags_reg


        .globl  advanced_3_uneven_stack
        .type   advanced_3_uneven_stack, @function
advanced_3_uneven_stack:
		push	%esi
		movl	16(%esp), %esi
        cmpl    $42, %esi
        je      .L51a
        pushl   $.LC12x
		jmp 	.LC12joina
.L51a:
		pushl	$.LC13x
		pushl	$.LC11x
.LC12joina:
        call    puts

        cmpl    $42, %esi
        je      .L51b
		popl	%eax
		jmp		.LC12joinb
.L51b:
		popl	%eax
		popl	%eax
.LC12joinb:
		popl	%esi
        xorl    %eax, %eax
        ret
        .size   advanced_3_uneven_stack, .-advanced_3_uneven_stack

