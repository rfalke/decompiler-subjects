	.text

#############################################################################
	.globl	basic_1_reg_in_block
	.type	basic_1_reg_in_block, @function
basic_1_reg_in_block:
	movl	4(%esp), %eax
	movl	$48, %ebx
	addl	%ebx, %eax
	pushl	%eax
	call	putchar
	xorl	%eax, %eax
	addl	$4, %esp
	ret
	.size	basic_1_reg_in_block, .-basic_1_reg_in_block

#############################################################################
	.globl	basic_2_reg_in_prev_block
	.type	basic_2_reg_in_prev_block, @function
basic_2_reg_in_prev_block:
	movl	4(%esp), %eax
	movl	$48, %ebx
	jmp		.b2_1
.b2_2:
	addl	%ebx, %eax
	pushl	%eax
	call	putchar
	xorl	%eax, %eax
	addl	$4, %esp
	ret
.b2_1:
	addl	$1, %eax
	jmp		.b2_2

	.size	basic_2_reg_in_prev_block, .-basic_2_reg_in_prev_block

#############################################################################

    .globl  basic_3_reg_cond_overwrite
    .type   basic_3_reg_cond_overwrite, @function
basic_3_reg_cond_overwrite:
    movl    4(%esp), %eax
    movl    $65, %ebx
    cmpl    $42, %eax
    je      .b3
	movl	$97, %ebx
.b3:
    addl    %ebx, %eax
    pushl   %eax
    call    putchar
    xorl    %eax, %eax
    addl    $4, %esp
    ret
    .size   basic_3_reg_cond_overwrite, .-basic_3_reg_cond_overwrite

#############################################################################

    .globl  basic_4_reg_cond_change
    .type   basic_4_reg_cond_change, @function
basic_4_reg_cond_change:
    movl    4(%esp), %eax
    movl    $65, %ebx
    cmpl    $42, %eax
    je      .b4
	addl	$97-65, %ebx
.b4:
    addl    %ebx, %eax
    pushl   %eax
    call    putchar
    xorl    %eax, %eax
    addl    $4, %esp
    ret
    .size   basic_4_reg_cond_change, .-basic_4_reg_cond_change

#############################################################################

    .globl  basic_5_reg_different_values
    .type   basic_5_reg_different_values, @function
basic_5_reg_different_values:
    movl    4(%esp), %eax
    cmpl    $42, %eax
    je      .b5_1
	movl	$65, %ebx
	jmp		.b5_j
.b5_1:
	movl	$97, %ebx
.b5_j:
    addl    %ebx, %eax
    pushl   %eax
    call    putchar
    xorl    %eax, %eax
    addl    $4, %esp
    ret
    .size   basic_2_reg_in_prev_block, .-basic_2_reg_in_prev_block

#############################################################################

	.globl	basic_6_reg_overwrite_in_block
	.type	basic_6_reg_overwrite_in_block, @function
basic_6_reg_overwrite_in_block:
	movl	4(%esp), %eax
	movl	$123, %ebx
	movl	$48, %ebx
	addl	%ebx, %eax
	pushl	%eax
	call	putchar
	xorl	%eax, %eax
	addl	$4, %esp
	ret
	.size	basic_6_reg_overwrite_in_block, .-basic_6_reg_overwrite_in_block

#############################################################################
#############################################################################

	.globl	intermediate_1_mem_in_block
	.type	intermediate_1_mem_in_block, @function
intermediate_1_mem_in_block:
	movl	4(%esp), %eax
	movl	$48, global_var
	addl	global_var, %eax
	pushl	%eax
	call	putchar
	xorl	%eax, %eax
	addl	$4, %esp
	ret
	.size	intermediate_1_mem_in_block, .-intermediate_1_mem_in_block

#############################################################################

    .globl  intermediate_2_mem_in_prev_block
    .type   intermediate_2_mem_in_prev_block, @function
intermediate_2_mem_in_prev_block:
    pushl   %esi
    pushl   %edi
    movl    12(%esp), %edi
    movl    $48, global_var
    jmp     .i2_1
.i2_2:
    movl    %edi, %eax
    addl    global_var, %eax
    pushl   %eax
    call    putchar
    xorl    %eax, %eax
    addl    $4, %esp
    popl    %edi
    popl    %esi
    ret
.i2_1:
	addl	$1, %edi
    jmp     .i2_2

    .size   intermediate_2_mem_in_prev_block, .-intermediate_2_mem_in_prev_block

#############################################################################

    .globl  intermediate_3_mem_cond_overwrite
    .type   intermediate_3_mem_cond_overwrite, @function
intermediate_3_mem_cond_overwrite:
    movl    4(%esp), %eax
    movl    $65, global_var
    cmpl    $42, %eax
    je      .i3
	movl	$97, global_var
.i3:
    addl    global_var, %eax
    pushl   %eax
    call    putchar
    xorl    %eax, %eax
    addl    $4, %esp
    ret
    .size   intermediate_3_mem_cond_overwrite, .-intermediate_3_mem_cond_overwrite

#############################################################################

    .globl  intermediate_4_mem_cond_change
    .type   intermediate_4_mem_cond_change, @function
intermediate_4_mem_cond_change:
    movl    4(%esp), %eax
    movl    $65, global_var
    cmpl    $42, %eax
    je      .i4
	addl	$97-65, global_var
.i4:
    addl    global_var, %eax
    pushl   %eax
    call    putchar
    xorl    %eax, %eax
    addl    $4, %esp
    ret
    .size   intermediate_4_mem_cond_change, .-intermediate_4_mem_cond_change

#############################################################################

    .globl  intermediate_5_mem_different_values
    .type   intermediate_5_mem_different_values, @function
intermediate_5_mem_different_values:
    movl    4(%esp), %eax
    cmpl    $42, %eax
    je      .i5_1
	movl	$65, global_var
	jmp		.i5_j
.i5_1:
	movl	$97, global_var
.i5_j:
    addl    global_var, %eax
    pushl   %eax
    call    putchar
    xorl    %eax, %eax
    addl    $4, %esp
    ret
    .size   intermediate_2_mem_in_prev_block, .-intermediate_2_mem_in_prev_block

#############################################################################

	.globl	intermediate_6_mem_overwrite_in_block
	.type	intermediate_6_mem_overwrite_in_block, @function
intermediate_6_mem_overwrite_in_block:
	movl	4(%esp), %eax
	movl	$123, global_var
	movl	$48, global_var
	addl	global_var, %eax
	pushl	%eax
	call	putchar
	xorl	%eax, %eax
	addl	$4, %esp
	ret
	.size	intermediate_6_mem_overwrite_in_block, .-intermediate_6_mem_overwrite_in_block

#############################################################################

	.globl	intermediate_10_subregs
	.type	intermediate_10_subregs, @function
intermediate_10_subregs:
	mov	global_char1, %ah
	mov global_char2, %al
	mov %ax, %bx
	mov %ebx, %ecx
	mov %ecx, %eax
	add %ah, %ah
	add %al, %al
	add %al, %al

	movzbl %al, %ebx
	movzbl %ah, %ecx
	mov $0, %eax
	add %ebx, %eax
	add %ecx, %eax
	pushl %eax
	call putchar
	xorl	%eax, %eax
	addl	$4, %esp
	ret
	.size	intermediate_10_subregs, .-intermediate_10_subregs

#############################################################################
#############################################################################

        .globl  advanced_1_writes_can_be_omitted_for_non_mem_access_calls
        .type   advanced_1_writes_can_be_omitted_for_non_mem_access_calls, @function
advanced_1_writes_can_be_omitted_for_non_mem_access_calls:
        pushl   %ebp
        movl    %esp, %ebp
        subl    $24, %esp
        movl    $1, global_var
        subl    $12, %esp
        pushl   8(%ebp)
        call    abs
        addl    $16, %esp
        movl    %eax, -12(%ebp)
        movl    $2, global_var
        movl    global_var, %edx
        movl    -12(%ebp), %eax
        addl    %edx, %eax
        leave
        ret
        .size   advanced_1_writes_can_be_omitted_for_non_mem_access_calls, .-advanced_1_writes_can_be_omitted_for_non_mem_access_calls

        .globl  advanced_2_mem_values_can_be_propagated_for_non_write_calls
        .type   advanced_2_mem_values_can_be_propagated_for_non_write_calls, @function
advanced_2_mem_values_can_be_propagated_for_non_write_calls:
        pushl   %ebp
        movl    %esp, %ebp
        subl    $24, %esp
        movl    $1, global_var
        subl    $12, %esp
        pushl   8(%ebp)
        call    strlen
        addl    $16, %esp
        movl    %eax, -12(%ebp)
        movl    global_var, %eax
        addl    %eax, -12(%ebp)
        movl    -12(%ebp), %eax
        leave
        ret
        .size   advanced_2_mem_values_can_be_propagated_for_non_write_calls, .-advanced_2_mem_values_can_be_propagated_for_non_write_calls
