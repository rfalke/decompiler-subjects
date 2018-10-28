int main(int argc, char *argv[]);
__size32 basic_1_multiple_calling_conventions_3_ints(__size32 param1);
__size32 basic_2_calling_varargs();
__size32 basic_3_accessing_all_registers(unsigned int param1, unsigned int param2);
void basic_4_tail_call();
void intermediate_1_accessing_varargs(__size32 param1);
void intermediate_2_use_uncommon_registers_for_parameters(__size32 param1);
void intermediate_3_calling_noreturn();
void intermediate_4_asm_instr_with_multiple_results();
void intermediate_5_pushs_in_different_blocks(__size32 param1);
void advanced_1_pass_in_flags_reg();
void advanced_2_return_in_flags_reg();
void advanced_2_return_in_flags_reg_helper();
void advanced_3_uneven_stack(__size32 param1);
__size32 sum3_cdecl(__size32 param1, unsigned int param2, unsigned int param3);
__size32 sum3_fastcall(unsigned int param1, __size32 param2, unsigned int param3);
__size32 sum3_thiscall(unsigned int param1, unsigned int param2, __size32 param3);
__size32 sum3_ms_abi(__size32 param1, unsigned int param2, unsigned int param3);
__size32 sum3_sysv_abi(__size32 param1, unsigned int param2, unsigned int param3);
__size32 sum3_stdcall(__size32 param1, unsigned int param2, unsigned int param3);
__size32 a_vararg();
void even_more_crude(char param1, union { char *; __size32; } param2);
void crude_printf(__size32 param1, union { char *; __size32; } param2);
__size32 sum3_uncommon(__size32 param1, __size32 param2, __size32 param3);
void advanced_1_pass_in_flags_reg_helper();

/** address: 0x08048420 */
int main(int argc, char *argv[])
{
    __size32 eax; 		// r24
    __size32 eax_1; 		// r24{5}
    __size32 eax_2; 		// r24{6}
    union { __size32 *; unsigned int; } ebp; 		// r29
    __size32 ebx; 		// r27
    unsigned int ecx; 		// r25
    union { char *[] *; __size32; } edi; 		// r31
    __size32 edx; 		// r26
    int esi; 		// r30
    union { __size32; __size32 *; } esp; 		// r28
    __size32 local0; 		// m[esp - 68]
    __size32 local4; 		// m[esp - 4]
    __size32 local5; 		// m[esp]

    eax_1 = basic_1_multiple_calling_conventions_3_ints(argc);
    eax_2 = basic_2_calling_varargs(); /* Warning: also results in ecx, edx */
    eax = basic_3_accessing_all_registers(ecx, esp - 8);
    esp = basic_4_tail_call(eax, ecx, edx, eax_1 + eax_2 + eax, esp - 8, argc, argv, ADDFLAGS32(eax_1 + eax_2, eax, eax_1 + eax_2 + eax), ADDFLAGS32(eax_1 + eax_2, eax, eax_1 + eax_2 + eax), ADDFLAGS32(eax_1 + eax_2, eax, eax_1 + eax_2 + eax), argc, argv, local5, ebp, edi, esi, ebx, esp + 4, argc, pc, local0); /* Warning: also results in esi */
    intermediate_1_accessing_varargs(*(esp - 76));
    local5 = esi;
    intermediate_2_use_uncommon_registers_for_parameters(*(esp + 24));
    intermediate_3_calling_noreturn();
}

/** address: 0x08048680 */
__size32 basic_1_multiple_calling_conventions_3_ints(__size32 param1)
{
    int eax; 		// r24
    time_t eax_1; 		// r24{3}
    int eax_10; 		// r24{8}
    int eax_13; 		// r24{10}
    int eax_16; 		// r24{12}
    int eax_4; 		// r24{4}
    int eax_7; 		// r24{6}

    eax_1 = time(0);
    eax_4 = sum3_cdecl(param1, eax_1, 42);
    if (eax_4 > 123) {
        puts("cdecl");
    }
    eax_7 = sum3_fastcall(42, param1, eax_1);
    if (eax_7 > 123) {
        puts("fastcall");
    }
    eax_10 = sum3_thiscall(eax_1, 42, param1);
    if (eax_10 > 123) {
        puts("thiscall");
    }
    eax_13 = sum3_ms_abi(param1, eax_1, 42);
    if (eax_13 > 123) {
        puts("ms_abi");
    }
    eax_16 = sum3_sysv_abi(param1, eax_1, 42);
    if (eax_16 > 123) {
        puts("sysv_abi");
    }
    eax = sum3_stdcall(param1, eax_1, 42);
    if (eax > 123) {
        puts("stdcall");
    }
    return 0;
}

/** address: 0x080487d0 */
__size32 basic_2_calling_varargs()
{
    __size32 ecx; 		// r25
    __size32 edx; 		// r26

    a_vararg();
    a_vararg();
    a_vararg();
    a_vararg();
    ecx = a_vararg(); /* Warning: also results in edx */
    return 0; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x08048990 */
__size32 basic_3_accessing_all_registers(unsigned int param1, unsigned int param2)
{
    return param1 + param2 * 8;
}

/** address: 0x08048810 */
void basic_4_tail_call()
{
    time(0);
    return;
}

/** address: 0x08048940 */
void intermediate_1_accessing_varargs(__size32 param1)
{
    even_more_crude('0', 0x8048ba4);
    crude_printf(param1, 0x8048bbc);
    return;
}

/** address: 0x080489d0 */
void intermediate_2_use_uncommon_registers_for_parameters(__size32 param1)
{
    int eax; 		// r24

    eax = time(0);
    eax = sum3_uncommon(42, param1, eax);
    if (eax > 123) {
        puts("un common");
    }
    return;
}

/** address: 0x08048a00 */
void intermediate_3_calling_noreturn()
{
    puts("before");
    exit(1);
    return;
}

/** address: 0x08048970 */
void intermediate_4_asm_instr_with_multiple_results()
{
    return;
}

/** address: 0x08048a30 */
void intermediate_5_pushs_in_different_blocks(__size32 param1)
{
    __size32 local0; 		// m[esp - 4]

    if (param1 == 42) {
        local0 = 0x8048bee;
    }
    else {
        local0 = 0x8048bf4;
    }
    puts(local0);
    return;
}

/** address: 0x08048a62 */
void advanced_1_pass_in_flags_reg()
{
    advanced_1_pass_in_flags_reg_helper();
    return;
}

/** address: 0x08048a83 */
void advanced_2_return_in_flags_reg()
{
    advanced_2_return_in_flags_reg_helper();
    if ( ~flags) {
        puts("is above 2");
    }
    return;
}

/** address: 0x08048a75 */
void advanced_2_return_in_flags_reg_helper()
{
    return;
}

/** address: 0x08048a9a */
void advanced_3_uneven_stack(__size32 param1)
{
    union { __size32; char **; } esp_1; 		// r28{7}
    __size32 esp_4; 		// r28{4}
    __size32 esp_5; 		// r28{6}
    __size32 esp_6; 		// r28{1}
    union { char **; __size32; } local2; 		// esp_1{7}

    if (param1 == 42) {
        esp_5 = (esp_6 - 12);
        local2 = esp_5;
    }
    else {
        esp_4 = (esp_6 - 8);
        local2 = esp_4;
    }
    esp_1 = local2;
    puts(*esp_1);
    if (param1 != 42) {
    }
    return;
}

/** address: 0x080485c0 */
__size32 sum3_cdecl(__size32 param1, unsigned int param2, unsigned int param3)
{
    return param1 + param2 * 2 + param3 * 3 + 1;
}

/** address: 0x080485e0 */
__size32 sum3_fastcall(unsigned int param1, __size32 param2, unsigned int param3)
{
    return param2 + param3 * 2 + param1 * 3 + 2;
}

/** address: 0x08048600 */
__size32 sum3_thiscall(unsigned int param1, unsigned int param2, __size32 param3)
{
    return param3 + param1 * 2 + param2 * 3 + 3;
}

/** address: 0x08048620 */
__size32 sum3_ms_abi(__size32 param1, unsigned int param2, unsigned int param3)
{
    return param1 + param2 * 2 + param3 * 3 + 4;
}

/** address: 0x08048640 */
__size32 sum3_sysv_abi(__size32 param1, unsigned int param2, unsigned int param3)
{
    return param1 + param2 * 2 + param3 * 3 + 5;
}

/** address: 0x08048660 */
__size32 sum3_stdcall(__size32 param1, unsigned int param2, unsigned int param3)
{
    return param1 + param2 * 2 + param3 * 3 + 6;
}

/** address: 0x080487b0 */
__size32 a_vararg()
{
    int ecx; 		// r25
    int edx; 		// r26

    ecx = puts("a_vararg called"); /* Warning: also results in edx */
    return ecx; /* WARNING: Also returning: edx := edx */
}

/** address: 0x08048900 */
void even_more_crude(char param1, union { char *; __size32; } param2)
{
    union { __size32; FILE *; } local1; 		// m[esp - 24]

    putchar((int) param1);
    local1 = *0x804b02c;
    fputs(param2, local1);
    strlen(param2);
    return;
}

/** address: 0x08048820 */
void crude_printf(__size32 param1, union { char *; __size32; } param2)
{
    char al; 		// r8
    int eax; 		// r24
    __size32 ebp; 		// r29
    __size32 ebp_1; 		// r29{26}
    __size32 ebp_2; 		// r29{31}
    union { char *; int; } ebp_5; 		// r29{38}
    __size32 ebx; 		// r27
    __size32 esi; 		// r30
    union { __size32 *; char *; __size32; } esi_1; 		// r30{27}
    __size32 esi_2; 		// r30{47}
    __size32 esi_5; 		// r30{37}
    int esp; 		// r28
    __size32 local1; 		// m[esp - 40]
    __size32 local3; 		// esi{17}
    __size32 local4; 		// local1{18}
    __size32 local5; 		// ebp_1{26}
    union { __size32; char *; __size32 *; } local6; 		// esi_1{27}
    __size32 local7; 		// param1{28}

    ebp = param2;
    eax = (int) *param2;
    al = (unsigned char) eax;
    local5 = ebp;
    local7 = param1;
    if ((unsigned char) eax == 0) {
    }
    else {
        esi = (esp + 8);
        ebx = 0;
        local6 = esi;
        do {
bb0x8048872:
            ebp_1 = local5;
            esi_1 = local6;
            param1 = local7;
            local3 = esi_1;
            local3 = esi_1;
            local4 = param1;
            local4 = param1;
            local4 = param1;
            local6 = esi_1;
            local7 = param1;
            if (al == 37) {
                eax = *(unsigned char*)(ebp_1 + 1);
                if ((unsigned char) eax == 37) {
                    ebx++;
                    putchar('%');
                }
                else {
                    if ((unsigned char) eax == 99) {
                        esi_2 = esi_1 + 4;
                        eax = (int) *esi_1;
                        ebx++;
                        putchar(eax);
                        local3 = esi_2;
                        goto bb0x8048867;
                    }
                    else {
                        if ((unsigned char) eax == 115) {
                            esi_5 = esi_1 + 4;
                            ebp_5 = *esi_1;
                            local1 = *0x804b02c;
                            fputs(ebp_5, local1);
                            local3 = esi_5;
                            local4 = local1;
                            eax = strlen(ebp_5);
                            ebx += eax;
                            goto bb0x8048867;
                        }
                        else {
                            puts("Not implemented");
                        }
                    }
                }
bb0x8048867:
                esi = local3;
                local1 = local4;
                eax = (int) *(ebp_1 + 2);
                al = (unsigned char) eax;
                ebp = ebp_1 + 2;
                local5 = ebp;
                local6 = esi;
                local7 = local1;
            }
            else {
                ebx++;
                ebp_2 = ebp_1 + 1;
                putchar(eax);
                local5 = ebp_2;
                eax = (int) *(ebp_1 + 1);
                al = (unsigned char) eax;
                if ((unsigned char) eax != 0) {
                    goto bb0x8048872;
                }
            }
        } while ((unsigned char) eax == 0);
    }
    return;
}

/** address: 0x080489b1 */
__size32 sum3_uncommon(__size32 param1, __size32 param2, __size32 param3)
{
    __size32 eax; 		// r24

    eax = param2 + param3 + param3 + param1;
    return param2 + param3 + param3 + param1 + param1 + param1 + 10;
}

/** address: 0x08048a50 */
void advanced_1_pass_in_flags_reg_helper()
{
    if ( ~flags) {
        puts("is above 2");
    }
    return;
}

