
int advanced_10_int_literal_in_char_context(int param0) {
    int v0;
    →putchar(49);
    →strchr(param0, 49);
    if(v0) {
        →puts("contains a \'1\'");
    }
    char v1 = 97;
    char v2 = 0;
    char v3 = 49;
    →puts(&v1);
    return 0;
}

int advanced_11_printf_type_related() {
    →printf("as char %c\n");
    →printf("as int %d\n");
    →printf("as pointer %p\n");
    →printf("as octal %o\n");
    →printf("as hex %x\n");
    →printf("as unsigned %u\n");
    →printf("as signed %d\n");
    return 0;
}

int advanced_1_null_bytes_with_fixed_length(int param0) {
    int result;
    →fwrite("with null byte ", 17, 1, param0);
    →fwrite("with null byte ", 1, 17, param0);
    →memcmp(param0, "with null byte ", 17);
    return result;
}

int advanced_2_naming_enums(int param0) {
    int v0;
    →fseek(param0, 0, 0);
    →fseek(param0, 0, 1);
    →fseek(param0, 0, 2);
    →chmod("/some/path", 36);
    if((int)(unsigned int)(v0 * 4) > 4) {
        →puts("something");
    }
    return 0;
}

int basic_10_result_var_name(unsigned int param0) {
    int v0;
    if((int)param0 > 5) {
        return param0 * 4;
    }
    →time(0);
    return v0 + 10;
}

int basic_1_string_literals_quoting() {
    →puts("with \' single quote");
    →puts("with \" double quote");
    return 0;
}

int basic_2_string_literals_low_chars() {
    →puts(&gvar_8048CBC);
    →puts(&gvar_8048CD6);
    →puts(&gvar_8048CF0);
    →puts(&gvar_8048D0A);
    →puts(&gvar_8048D24);
    →puts(&gvar_8048D3E);
    →puts(&gvar_8048D58);
    →puts(&gvar_8048D72);
    →puts("hex=0x09 dec=9 char=\tFINI");
    →puts("hex=0x0a dec=10 char=\nFINI");
    →puts(&gvar_8048DC1);
    →puts(&gvar_8048DDC);
    →puts("hex=0x0d dec=13 char=\rFINI");
    →puts(&gvar_8048E12);
    →puts(&gvar_8048E2D);
    →puts(&gvar_8048E48);
    →puts(&gvar_8048E63);
    →puts(&gvar_8048E7E);
    →puts(&gvar_8048E99);
    →puts(&gvar_8048EB4);
    →puts(&gvar_8048ECF);
    →puts(&gvar_8048EEA);
    →puts(&gvar_8048F05);
    →puts(&gvar_8048F20);
    →puts(&gvar_8048F3B);
    →puts(&gvar_8048F56);
    →puts(&gvar_8048F71);
    →puts(&gvar_8048F8C);
    →puts(&gvar_8048FA7);
    →puts(&gvar_8048FC2);
    →puts(&gvar_8048FDD);
    return 0;
}

int basic_3_string_literals_high_chars() {
    →puts(&gvar_8048FF8);
    →puts(&gvar_8049014);
    →puts(&gvar_8049030);
    →puts(&gvar_804904C);
    →puts(&gvar_8049068);
    →puts(&gvar_8049084);
    →puts(&gvar_80490A0);
    →puts(&gvar_80490BC);
    →puts(&gvar_80490D8);
    →puts(&gvar_80490F4);
    →puts(&gvar_8049110);
    →puts(&gvar_804912C);
    →puts(&gvar_8049148);
    →puts(&gvar_8049164);
    →puts(&gvar_8049180);
    →puts(&gvar_804919C);
    return 0;
}

int basic_4_readonly_vs_modifiable() {
    →puts("a read only string");
    →puts(&a_modifiable_string);
    return 0;
}

int intermediate_10_int_literal_in_bit_context(int param0) {
    →putchar(param0 & 0xf0f0);
    →putchar(param0 | 0xff0000);
    →putchar(param0 ^ 0x3);
    →putchar(param0 & 0x2a);
    →putchar(param0 | 0x3e7);
    →putchar(param0 ^ 0x12d591);
    return 0;
}

int intermediate_11_int_literal_in_arithm_context(int param0) {
    →putchar(param0 + 0xf0f0);
    →putchar(param0 - 0xff0000);
    →putchar(param0 * 3);
    →putchar(param0 + 42);
    →putchar(param0 - 999);
    →putchar(param0 * 1234321);
    return 0;
}

int intermediate_1_for_loop_name(int param0) {
    if(param0 > 0) {
        int v0 = 48;
        do {
            int v1 = v0;
            ++v0;
            →putchar(v1);
        }
        while((unsigned int)(param0 + 48) != v0);
    }
    return 0;
}

int intermediate_2_parameter_names(unsigned int param0) {
    int v0;
    int v1;
    int v2;
    if(param0 != 1) {
        v1 = "/is/something/else";
        v0 = param0 < 0x80000000 ? &gvar_80491DE: &gvar_80491E0;
    }
    else {
        v1 = "/is/a/1";
        v0 = &gvar_80491DE;
    }
    →fopen(v1, v0);
    if(!v2) {
        →puts("failed");
    }
    return 0;
}

int main(unsigned int param0, int* param1) {
    int v0;
    int v1;
    int v2 = v0;
    int v3 = v1;
    int* ptr0 = &param0;
    basic_1_string_literals_quoting();
    basic_2_string_literals_low_chars();
    basic_3_string_literals_high_chars();
    basic_4_readonly_vs_modifiable();
    basic_10_result_var_name(param0);
    intermediate_1_for_loop_name((int)param0);
    intermediate_2_parameter_names(param0);
    intermediate_10_int_literal_in_bit_context((int)param0);
    intermediate_11_int_literal_in_arithm_context((int)param0);
    advanced_1_null_bytes_with_fixed_length(0);
    advanced_2_naming_enums(0);
    advanced_10_int_literal_in_char_context(param1[0]);
    /*BAD_CALL!*/ advanced_11_printf_type_related();
    return (int)*(char*)param1[0];
}

int sub_8048416() {
    return gvar_804B008();
}

int sub_80484D0() {
    return __gmon_start__();
}

int sub_80485AF() {
    return 0;
}

void sub_80485E8() {
}

int sub_8048619() {
    int v0;
    int v1 = v0;
    deregister_tm_clones();
    completed.6532 = 1;
}

void sub_804862C() {
}

int sub_8048640() {
    return register_tm_clones();
}
