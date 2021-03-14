
int a_vararg() {
    →puts("a_vararg called");
    return 0;
}

int advanced_1_pass_in_flags_reg() {
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

int advanced_3_uneven_stack(int param0, int param1, int param2) {
    unsigned int* ptr0;
    int v0;
    int v1;
    int v2 = param2;
    if(v2 != 42) {
        ptr0 = &v0;
        v0 = "it not 42";
    }
    else {
        v0 = "you should not see this";
        ptr0 = &v1;
        v1 = "is 42";
    }
    --ptr0;
    *ptr0 = &loc_8048ABA;
    /*BAD_CALL!*/ →puts(*(char**)(ptr0 + 1));
    jump *((v2 != 42 ? (int*)(ptr0 + 1): (int*)(ptr0 + 2)) + 1);
}

int basic_1_multiple_calling_conventions_3_ints(int param0) {
    time_t v0 = →time(NULL);
    int v1 = sum3_cdecl(param0, (int)v0, 42);
    if(v1 > 123) {
        →puts("cdecl");
    }
    int v2 = sum3_fastcall(param0, (int)v0, 42);
    if(v2 > 123) {
        →puts("fastcall");
    }
    int v3 = sum3_thiscall(param0, (int)v0, 42);
    if(v3 > 123) {
        →puts("thiscall");
    }
    int v4 = sum3_ms_abi(param0, (int)v0, 42);
    if(v4 > 123) {
        →puts("ms_abi");
    }
    int v5 = sum3_sysv_abi(param0, (int)v0, 42);
    if(v5 > 123) {
        →puts("sysv_abi");
    }
    int v6 = sum3_stdcall(param0, (int)v0, 42);
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

int basic_3_accessing_all_registers(int param0) {
    int v0;
    return v0 * 8 + param0;
}

time_t basic_4_tail_call(int param0) {
    return →time(NULL);
}

int crude_printf(char* param0, int param1) {
    int result;
    char* ptr0 = param0;
    int __c = (int)*ptr0;
    if(*ptr0) {
        unsigned int* ptr1 = &param1;
        result = 0;
    loc_8048874:
        do {
            if((unsigned char)__c != 37) {
                char* ptr2 = ptr0;
                ++result;
                ptr0 = ptr2 + 1;
                →putchar(__c);
                __c = (int)*(ptr2 + 1);
                if(*(ptr2 + 1)) {
                    goto loc_8048874;
                }
            }
            else {
                char v0 = *(ptr0 + 1);
                if(v0 == 37) {
                    ++result;
                    →putchar(37);
                }
                else if(v0 == 99) {
                    unsigned int* ptr3 = ptr1;
                    ++ptr1;
                    ++result;
                    →putchar((int)*(char*)ptr3);
                }
                else if(v0 != 115) {
                    →puts("Not implemented");
                }
                else {
                    unsigned int* ptr4 = ptr1;
                    ++ptr1;
                    char* __s = *ptr4;
                    →fputs(__s, stdout);
                    size_t v1 = →strlen(__s);
                    result += v1;
                }
                __c = (int)*(ptr0 + 2);
                ptr0 += 2;
            }
            return result;
        }
        while(!(unsigned char)__c);
    }
    else {
        result = 0;
    }
    return result;
}

int even_more_crude(int param0, char param1, char* __s) {
    →putchar((int)param1);
    →fputs(__s, stdout);
    size_t v0 = →strlen(__s);
    return v0 + 1;
}

int intermediate_1_accessing_varargs() {
    even_more_crude("low: a %c b %s c\n", '0', "hello");
    int v0 = crude_printf("higher: a %c b %s c\n", 48);
    return v0 + 42;
}

int intermediate_2_use_uncommon_registers_for_parameters(int param0, int param1, int param2, int param3, int param4, int param5, int param6) {
    time_t v0 = →time(NULL);
    int v1 = sum3_uncommon();
    if(v1 > 123) {
        →puts("un common");
    }
    return 0;
}

int intermediate_3_calling_noreturn() {
    →puts("before");
    /*NO_RETURN*/ →exit(1);
}

int intermediate_5_pushs_in_different_blocks(int param0, int param1, int param2, int param3) {
    →puts(param3 != 42 ? "it not 42": "is 42");
    return 0;
}

int main(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6 = basic_1_multiple_calling_conventions_3_ints(param0);
    int v7 = basic_2_calling_varargs();
    int v8 = basic_3_accessing_all_registers(v5);
    time_t v9 = basic_4_tail_call(param0);
    int v10 = intermediate_1_accessing_varargs();
    int v11 = intermediate_2_use_uncommon_registers_for_parameters(param0, v0, v1, v2, v3, v4, &param0);
    /*NO_RETURN*/ intermediate_3_calling_noreturn();
}

void sub_8048390() {
    jump gvar_804B008;
}

void sub_8048410() {
    jump __gmon_start__;
}

int sub_8048472(int param0, int param1, int param2, int param3) {
    int v0;
    int v1;
    int v2 = intermediate_4_asm_instr_with_multiple_results(1, 1);
    int v3 = intermediate_5_pushs_in_different_blocks(v1, param0, param1, param2);
    int v4 = advanced_1_pass_in_flags_reg();
    int v5 = advanced_2_return_in_flags_reg();
    int v6 = advanced_3_uneven_stack(v1, param0, param1);
    jump v0;
}

int sub_8048A12(int param0) {
    →puts("not reached");
    jump param0;
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
