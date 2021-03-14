
int advanced_1_boolean_minization(int param0, int param1, int param2) {
    return (!param0 && !param1 && param2) || (!param0 && param1 && param2) || (param0 && !param1) ? 1: 0;
}

int intermediate_1_cmp_with_are_constant(int param0) {
    if(0) {
        →puts("not reached");
    }
    return 0;
}

int intermediate_2_cmp_with_extra(int param0) {
    if(param0 > 10 && param0 <= 19) {
        →puts("!=30 is always true");
    }
    if(param0 == 1) {
        →puts("!=2 is always true");
    }
    if(param0 > 10) {
        →puts(">9 is always true");
    }
    return 0;
}

int intermediate_3_division_by_multiplication(int param0) {
    →putchar(param0 / 7);
    return 0;
}

int intermediate_4_swap_with_xor(int param0, int param1) {
    int v0 = param0 ^ param1;
    int __c = v0 ^ param1;
    →putchar(v0 ^ __c);
    →putchar(__c);
    return 0;
}

int main(int param0, unsigned int* param1) {
    int v0;
    int v1;
    int v2 = v0;
    int v3 = v1;
    int* ptr0 = &param0;
    int v4 = intermediate_1_cmp_with_are_constant(param0);
    int v5 = /*BAD_CALL!*/ intermediate_2_cmp_with_extra(param0);
    int v6 = /*BAD_CALL!*/ intermediate_3_division_by_multiplication(param0);
    int v7 = /*BAD_CALL!*/ intermediate_4_swap_with_xor(48, 97);
    int v8 = /*BAD_CALL!*/ advanced_1_boolean_minization(param0 ? 0: 1, ~param0 & 0x1, param0 / 3 * 3 == param0 ? 1: 0);
    /*NO_RETURN*/ →exit((int)**param1 + v5 + (v8 + v6) + (v7 + v4));
}

void sub_8048310() {
    jump gvar_804A008;
}

void sub_8048360() {
    jump __gmon_start__;
}
