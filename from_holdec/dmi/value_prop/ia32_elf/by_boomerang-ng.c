__size32 global_var;// 4 bytes
union { unsigned char x1; __size8 *; unsigned int *; } global_char1;
int main(int argc, char *argv[]);
void basic_1_reg_in_block();
void basic_2_reg_in_prev_block();
void basic_3_reg_cond_overwrite(__size32 param1);
void basic_4_reg_cond_change(__size32 param1);
void basic_5_reg_different_values(__size32 param1);
__size32 basic_6_reg_overwrite_in_block();
__size32 intermediate_1_mem_in_block();
__size32 intermediate_2_mem_in_prev_block();
__size32 intermediate_3_mem_cond_overwrite(__size32 param1);
__size32 intermediate_4_mem_cond_change(__size32 param1);
__size32 intermediate_5_mem_different_values(__size32 param1);
__size32 intermediate_6_mem_overwrite_in_block();
__size32 intermediate_10_subregs(short param1, __size32 param2);
__size32 advanced_1_writes_can_be_omitted_for_non_mem_access_calls();
__size32 advanced_2_mem_values_can_be_propagated_for_non_write_calls(union { char[] *; __size32; } param1);
__size32 advanced_3_value_range_analysis(int param1);

/** address: 0x080483d0 */
int main(int argc, char *argv[])
{
    short ax; 		// r0
    __size32 eax; 		// r24
    __size32 eax_1; 		// r24{0}
    __size32 eax_2; 		// r24{0}
    __size32 eax_3; 		// r24{0}
    __size32 eax_4; 		// r24{0}
    __size32 eax_5; 		// r24{0}
    __size32 eax_6; 		// r24{0}
    __size32 eax_7; 		// r24{0}
    __size32 eax_8; 		// r24{0}
    __size32 eax_9; 		// r24{0}
    __size32 ebx; 		// r27
    int edx; 		// r26
    int edx_1; 		// r26
    char *local1[]; 		// m[esp - 48]

    basic_1_reg_in_block();
    basic_2_reg_in_prev_block();
    basic_3_reg_cond_overwrite(argc);
    basic_4_reg_cond_change(argc);
    basic_5_reg_different_values(argc);
    eax_1 = basic_6_reg_overwrite_in_block(); /* Warning: also results in ebx */
    eax_2 = intermediate_1_mem_in_block();
    eax_3 = intermediate_2_mem_in_prev_block();
    eax_4 = intermediate_3_mem_cond_overwrite(argc);
    eax_5 = intermediate_4_mem_cond_change(argc);
    eax_6 = intermediate_5_mem_different_values(argc);
    eax = intermediate_6_mem_overwrite_in_block();
    eax_7 = intermediate_10_subregs(ax, ebx + eax_1 + eax_2 + eax_3 + eax_4 + eax_5 + eax_6 + eax); /* Warning: also results in ebx */
    eax_8 = advanced_1_writes_can_be_omitted_for_non_mem_access_calls();
    local1 = *argv;
    eax_9 = advanced_2_mem_values_can_be_propagated_for_non_write_calls(local1);
    eax = advanced_3_value_range_analysis(argc);
    edx = *argv;
    edx_1 = (int) *edx;
    exit(ebx + eax_7 + eax_8 + eax_9 + eax + edx_1);
    return;
}

/** address: 0x0804868d */
void basic_1_reg_in_block()
{
    putchar();
    return;
}

/** address: 0x080486a4 */
void basic_2_reg_in_prev_block()
{
    putchar();
    return;
}

/** address: 0x080486c2 */
void basic_3_reg_cond_overwrite(__size32 param1)
{
    if (param1 != 42) {
    }
    putchar();
    return;
}

/** address: 0x080486e3 */
void basic_4_reg_cond_change(__size32 param1)
{
    if (param1 != 42) {
    }
    putchar();
    return;
}

/** address: 0x08048702 */
void basic_5_reg_different_values(__size32 param1)
{
    if (param1 == 42) {
    }
    else {
    }
    putchar();
    return;
}

/** address: 0x08048725 */
__size32 basic_6_reg_overwrite_in_block()
{
    putchar();
    return 0; /* WARNING: Also returning: ebx := 48 */
}

/** address: 0x08048741 */
__size32 intermediate_1_mem_in_block()
{
    global_var = 48;
    putchar();
    return 0;
}

/** address: 0x08048761 */
__size32 intermediate_2_mem_in_prev_block()
{
    global_var = 48;
    putchar();
    return 0;
}

/** address: 0x0804878e */
__size32 intermediate_3_mem_cond_overwrite(__size32 param1)
{
    global_var = 65;
    if (param1 != 42) {
        global_var = 97;
    }
    putchar();
    return 0;
}

/** address: 0x080487bd */
__size32 intermediate_4_mem_cond_change(__size32 param1)
{
    global_var = 65;
    if (param1 != 42) {
        global_var += 32;
    }
    putchar();
    return 0;
}

/** address: 0x080487e9 */
__size32 intermediate_5_mem_different_values(__size32 param1)
{
    if (param1 == 42) {
        global_var = 97;
    }
    else {
        global_var = 65;
    }
    putchar();
    return 0;
}

/** address: 0x0804881a */
__size32 intermediate_6_mem_overwrite_in_block()
{
    global_var = 123;
    global_var = 48;
    putchar();
    return 0;
}

/** address: 0x08048844 */
__size32 intermediate_10_subregs(short param1, __size32 param2)
{
    unsigned int ah_1; 		// r12{0}
    unsigned char al; 		// r8

    ah_1 = *0x804a030;
    al = *(&global_char1 + 1);
    putchar();
    return 0; /* WARNING: Also returning: ebx := (tmp1 + tmp1 + (unsigned char) (param2 >> 16 & 0xffff | ((param1 & 0xff | ah_1 * 256) >> 8 & 0xff | (al)))) */
}

/** address: 0x08048877 */
__size32 advanced_1_writes_can_be_omitted_for_non_mem_access_calls()
{
    __size32 eax; 		// r24

    global_var = 1;
    eax = abs();
    global_var = 2;
    return eax + global_var;
}

/** address: 0x080488af */
__size32 advanced_2_mem_values_can_be_propagated_for_non_write_calls(union { char[] *; __size32; } param1)
{
    int eax; 		// r24

    global_var = 1;
    eax = strlen(param1);
    return eax + global_var;
}

/** address: 0x0804858b */
__size32 advanced_3_value_range_analysis(int param1)
{
    if (param1 > 10) {
        if (param1 <= 10) {
        }
        else {
        }
        putchar();
        if (param1 > 10) {
        }
        else {
        }
        putchar();
        if (param1 <= 9) {
        }
        else {
        }
        putchar();
        if (param1 > 8) {
            puts(">10");
        }
    }
    if (param1 == 42) {
        if (param1 != 42) {
        }
        else {
        }
        putchar();
        if (param1 == 42) {
        }
        else {
        }
        putchar();
        if (param1 != 100) {
        }
        else {
        }
        putchar();
        if (param1 != 101) {
            puts("= 42");
        }
    }
    return 0;
}

