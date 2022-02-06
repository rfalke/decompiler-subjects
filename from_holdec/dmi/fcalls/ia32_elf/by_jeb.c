
int a_vararg() {
    →puts("a_vararg called");
    return 0;
}

int advanced_1_pass_in_flags_reg(unsigned int param0) {
    advanced_1_pass_in_flags_reg_helper();
    return 0;
}

int advanced_1_pass_in_flags_reg_helper() {
    char v0;
    char v1;
    char v2;
    if(!v0 && v1 == v2) {
        →puts("is above 2");
    }
    return 0;
}

int advanced_2_return_in_flags_reg() {
    char v0;
    char v1;
    char v2;
    advanced_2_return_in_flags_reg_helper();
    if(!v0 && v1 == v2) {
        →puts("is above 2");
    }
    return 0;
}

int advanced_2_return_in_flags_reg_helper() {
    return 0;
}

int advanced_3_uneven_stack(int param0, int param1, unsigned int param2) {
    int v0;
    unsigned int* ptr0;
    int v1;
    int v2;
    unsigned int v3 = param2;
    char v4 = v3 == 42;
    char v5 = (int)v3 < 42;
    char v6 = __parity__((unsigned char)v3 - 42);
    char v7 = v3 < 42;
    char v8 = (((v3 - 42) ^ v3) & (v3 ^ 0x2a)) < 0;
    char v9 = (((v3 - 42) ^ (v3 ^ 0x2a)) >>> 4) & 0x1;
    if(!v4) {
        ptr0 = &v1;
        v1 = "it not 42";
    }
    else {
        v1 = "you should not see this";
        ptr0 = &v2;
        v2 = "is 42";
    }
    --ptr0;
    *ptr0 = &loc_8048ABA;
    /*BAD_CALL!*/ →puts(*(int*)(ptr0 + 1));
    char v10 = v3 == 42;
    char v11 = (int)v3 < 42;
    char v12 = __parity__((unsigned char)v3 - 42);
    char v13 = v3 < 42;
    char v14 = (((v3 - 42) ^ v3) & (v3 ^ 0x2a)) < 0;
    char v15 = (((v3 - 42) ^ (v3 ^ 0x2a)) >>> 4) & 0x1;
    if(!v10) {
        v0 = *ptr0;
    }
    else {
        int v16 = *ptr0;
        ++ptr0;
        v0 = *ptr0;
    }
    ++ptr0;
    int v17 = *ptr0;
    ++ptr0;
    int v18 = 0;
    char v19 = 1;
    char v20 = 0;
    char v21 = 1;
    char v22 = 0;
    char v23 = 0;
    int v24 = *ptr0;
    ++ptr0;
    jump v24;
}

int basic_1_multiple_calling_conventions_3_ints(int param0) {
    int v0;
    →time(0);
    int v1 = sum3_cdecl(param0, v0, 42);
    if(v1 > 123) {
        →puts("cdecl");
    }
    int v2 = sum3_fastcall(param0, v0, 42);
    if(v2 > 123) {
        →puts("fastcall");
    }
    int v3 = sum3_thiscall(param0, v0, 42);
    if(v3 > 123) {
        →puts("thiscall");
    }
    int v4 = sum3_ms_abi(param0, v0, 42);
    if(v4 > 123) {
        →puts("ms_abi");
    }
    int v5 = sum3_sysv_abi(param0, v0, 42);
    if(v5 > 123) {
        →puts("sysv_abi");
    }
    int v6 = sum3_stdcall(param0, v0, 42);
    if(v6 > 123) {
        →puts("stdcall");
    }
    return 0;
}

int basic_2_calling_varargs() {
    a_vararg();
    a_vararg();
    a_vararg();
    a_vararg();
    a_vararg();
    return 0;
}

int basic_3_accessing_all_registers(int param0, int param1) {
    int v0;
    return v0 * 8 + param0;
}

int basic_4_tail_call(int param0) {
    int result;
    →time(0);
    return result;
}

int crude_printf(char* param0, int param1) {
    int result;
    int v0;
    char* ptr0 = param0;
    int v1 = (int)*ptr0;
    if(*ptr0) {
        int* ptr1 = &param1;
        result = 0;
    loc_8048874:
        do {
            if((unsigned char)v1 != 37) {
                char* ptr2 = ptr0;
                ++result;
                ptr0 = ptr2 + 1;
                →putchar(v1);
                v1 = (int)*(ptr2 + 1);
                if(*(ptr2 + 1)) {
                    goto loc_8048874;
                }
            }
            else {
                unsigned char v2 = *(unsigned char*)(ptr0 + 1);
                if(v2 == 37) {
                    ++result;
                    →putchar(37);
                }
                else if(v2 == 99) {
                    int* ptr3 = ptr1;
                    ++ptr1;
                    ++result;
                    →putchar((int)*(char*)ptr3);
                }
                else if(v2 != 115) {
                    →puts("Not implemented");
                }
                else {
                    int* ptr4 = ptr1;
                    ++ptr1;
                    int v3 = *ptr4;
                    →fputs(v3, stdout);
                    →strlen(v3);
                    result += v0;
                }
                v1 = (int)*(ptr0 + 2);
                ptr0 += 2;
            }
            return result;
        }
        while(!(unsigned char)v1);
    }
    else {
        result = 0;
    }
    return result;
}

int even_more_crude(int param0, char param1, int param2) {
    int v0;
    →putchar((int)param1);
    →fputs(param2, stdout);
    →strlen(param2);
    return v0 + 1;
}

int intermediate_1_accessing_varargs() {
    char v0;
    *(int*)&v0 = 48;
    even_more_crude("low: a %c b %s c\n", '0', "hello");
    *(int*)&v0 = 48;
    int v1 = crude_printf("higher: a %c b %s c\n", *(int*)&v0);
    return v1 + 42;
}

int intermediate_2_use_uncommon_registers_for_parameters(int param0, int param1, int param2, int param3, int param4, int param5, int param6) {
    →time(0);
    int v0 = sum3_uncommon();
    if(v0 > 123) {
        →puts("un common");
    }
    return 0;
}

int intermediate_3_calling_noreturn() {
    int v0;
    void* ptr0;
    →puts("before");
    int v1 = v0;
    int* ptr1 = &ptr0;
    /*NO_RETURN*/ →exit(1);
}

int intermediate_4_asm_instr_with_multiple_results(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    (int v3, int v0, int v1, int v2) = cpuid(param0, param1);
    return v1 * 3 + v2 * 4 + (v0 * 2 + v3);
}

int intermediate_5_pushs_in_different_blocks(int param0, int param1, int param2, unsigned int param3) {
    →puts(param3 == 42 ? "is 42": "it not 42");
    return 0;
}

int main(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9 = v0;
    int v10 = v2;
    int v11 = &param0;
    int v12 = param0;
    int v13 = basic_1_multiple_calling_conventions_3_ints(v12);
    int v14 = v13;
    int v15 = basic_2_calling_varargs();
    int v16 = v14;
    int v17 = v15 + v14;
    int v18 = basic_3_accessing_all_registers(v4, v8);
    int v19 = v17;
    int v20 = v18 + v17;
    int v21 = basic_4_tail_call(v12);
    int v22 = v20;
    int v23 = v21 + v20;
    int v24 = intermediate_1_accessing_varargs();
    int v25 = v23;
    int v26 = v24 + v23;
    int v27 = intermediate_2_use_uncommon_registers_for_parameters(v12, v6, v5, v3, v1, v7, v11);
    int v28 = v26;
    int v29 = v27 + v26;
    /*NO_RETURN*/ intermediate_3_calling_noreturn();
}

int sub_8048396() {
    return gvar_804B008();
}

int sub_8048410() {
    return __gmon_start__();
}

int sub_804850F() {
    return 0;
}

void sub_8048548() {
}

int sub_8048579() {
    int v0;
    int v1 = v0;
    deregister_tm_clones();
    completed.6532 = 1;
}

void sub_804858C() {
}

int sub_80485A0() {
    return register_tm_clones();
}

int sum3_cdecl(int param0, int param1, int param2) {
    return param1 * 2 + param2 * 3 + (param0 + 1);
}

int sum3_fastcall(int param0, int param1, int param2) {
    return param1 * 2 + param2 * 3 + (param0 + 2);
}

int sum3_ms_abi(int param0, int param1, int param2) {
    return param1 * 2 + param2 * 3 + (param0 + 4);
}

int sum3_stdcall(int param0, int param1, int param2) {
    return param1 * 2 + param2 * 3 + (param0 + 6);
}

int sum3_sysv_abi(int param0, int param1, int param2) {
    return param1 * 2 + param2 * 3 + (param0 + 5);
}

int sum3_thiscall(int param0, int param1, int param2) {
    return param1 * 2 + param2 * 3 + (param0 + 3);
}

int sum3_uncommon() {
    int v0;
    int v1;
    int v2;
    return v0 * 2 + v1 * 2 + (v0 + v2) + 10;
}
