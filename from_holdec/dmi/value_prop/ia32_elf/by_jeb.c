
unsigned int advanced_2_mem_values_can_be_propagated_for_non_write_calls(char* __s) {
    global_var = 1;
    size_t v0 = →strlen(__s);
    return global_var + v0;
}

int advanced_3_value_range_analysis(int param0) {
    if(param0 > 10) {
        →putchar(param0 > 10 ? 98: 97);
        →putchar(param0 <= 10 ? 66: 65);
        →putchar(param0 > 9 ? 49: 48);
        if(param0 > 8) {
            →puts((char*)&gvar_8048964);
        }
    }
    if(param0 == 42) {
        →putchar(98);
        →putchar(65);
        →putchar(48);
        →puts("= 42");
    }
    return 0;
}

int basic_1_reg_in_block(int param0) {
    →putchar(param0 + 48);
    return 0;
}

int basic_2_reg_in_prev_block(int param0) {
    →putchar(param0 + 49);
    return 0;
}

int basic_3_reg_cond_overwrite(int param0) {
    →putchar((param0 == 42 ? 65: 97) + param0);
    return 0;
}

int basic_4_reg_cond_change(int param0) {
    →putchar((param0 == 42 ? 65: 97) + param0);
    return 0;
}

int basic_5_reg_different_values(int param0) {
    →putchar((param0 != 42 ? 65: 97) + param0);
    return 0;
}

int basic_6_reg_overwrite_in_block(int param0) {
    →putchar(param0 + 48);
    return 0;
}

int intermediate_10_subregs() {
    →putchar((unsigned int)(global_char2 * 4) + (unsigned int)(global_char1 * 2));
    return 0;
}

int intermediate_1_mem_in_block(int param0) {
    global_var = 48;
    →putchar((int)(global_var + param0));
    return 0;
}

int intermediate_2_mem_in_prev_block(int param0) {
    global_var = 48;
    →putchar(global_var + param0 + 1);
    return 0;
}

int intermediate_3_mem_cond_overwrite(int param0) {
    global_var = param0 == 42 ? 65: 97;
    →putchar((int)(global_var + param0));
    return 0;
}

int intermediate_4_mem_cond_change(int param0) {
    global_var = param0 == 42 ? 65: global_var + 32;
    →putchar((int)(global_var + param0));
    return 0;
}

int intermediate_5_mem_different_values(int param0) {
    global_var = param0 != 42 ? 65: 97;
    →putchar((int)(global_var + param0));
    return 0;
}

int intermediate_6_mem_overwrite_in_block(int param0) {
    global_var = 48;
    →putchar((int)(global_var + param0));
    return 0;
}

int main(int __x, char** param1) {
    int v0;
    int v1;
    int v2 = v0;
    int v3 = v1;
    int* ptr0 = &__x;
    int v4 = basic_1_reg_in_block(__x);
    int v5 = /*BAD_CALL!*/ basic_2_reg_in_prev_block(__x);
    int v6 = /*BAD_CALL!*/ basic_3_reg_cond_overwrite(__x);
    int v7 = /*BAD_CALL!*/ basic_4_reg_cond_change(__x);
    int v8 = /*BAD_CALL!*/ basic_5_reg_different_values(__x);
    int v9 = /*BAD_CALL!*/ basic_6_reg_overwrite_in_block(__x);
    int v10 = /*BAD_CALL!*/ intermediate_1_mem_in_block(__x);
    int v11 = /*BAD_CALL!*/ intermediate_2_mem_in_prev_block(__x);
    int v12 = /*BAD_CALL!*/ intermediate_3_mem_cond_overwrite(__x);
    int v13 = /*BAD_CALL!*/ intermediate_4_mem_cond_change(__x);
    int v14 = /*BAD_CALL!*/ intermediate_5_mem_different_values(__x);
    int v15 = /*BAD_CALL!*/ intermediate_6_mem_overwrite_in_block(__x);
    int v16 = /*BAD_CALL!*/ intermediate_10_subregs();
    int v17 = /*BAD_CALL!*/ advanced_1_writes_can_be_omitted_for_non_mem_access_calls(__x);
    unsigned int v18 = /*BAD_CALL!*/ advanced_2_mem_values_can_be_propagated_for_non_write_calls(param1[0]);
    int v19 = /*BAD_CALL!*/ advanced_3_value_range_analysis(__x);
    /*NO_RETURN*/ →exit((int)param1[0][0] + v5 + (v14 + v15) + (v16 + v17 + (v18 + v19)) + (v6 + v7 + (v8 + v9) + (v10 + v11 + (v12 + v13))) + v4);
}

void sub_8048350() {
    jump gvar_804A008;
}

void sub_80483C0() {
    jump __gmon_start__;
}
