
int advanced_10_int_literal_in_char_context(char* __s) {
    →putchar(49);
    char* ptr0 = →strchr(__s, 49);
    if(ptr0) {
        →puts("contains a \'1\'");
    }
    char v0 = 97;
    char v1 = 0;
    char v2 = 49;
    →puts(&v0);
    return 0;
}

int advanced_11_printf_type_related() {
    →printf("as char %c\n", 48);
    →printf("as int %d\n", 48);
    →printf("as pointer %p\n", 48);
    →printf("as octal %o\n", 48);
    →printf("as hex %x\n", 48);
    →printf("as unsigned %u\n", -1);
    →printf("as signed %d\n", -1);
    return 0;
}

int advanced_1_null_bytes_with_fixed_length(FILE* __s) {
    →fwrite("with null byte ", 17, 1, __s);
    →fwrite("with null byte ", 1, 17, __s);
    return →memcmp(__s, "with null byte ", 17);
}

int advanced_2_naming_enums(FILE* __stream) {
    int v0 = →fseek(__stream, 0, 0);
    int v1 = /*BAD_CALL!*/ →fseek(__stream, 0, 1);
    int v2 = /*BAD_CALL!*/ →fseek(__stream, 0, 2);
    int v3 = →chmod("/some/path", 36);
    if(v1 + v2 + (v3 + v0) > 4) {
        →puts("something");
    }
    return 0;
}

int basic_10_result_var_name(int param0) {
    if(param0 > 5) {
        return param0 * 4;
    }
    time_t v0 = →time(NULL);
    return v0 + 10;
}

int basic_1_string_literals_quoting() {
    →puts("with \' single quote");
    →puts("with \" double quote");
    return 0;
}

int basic_2_string_literals_low_chars() {
    →puts((char*)&gvar_8048CBC);
    →puts((char*)&gvar_8048CD6);
    →puts((char*)&gvar_8048CF0);
    →puts((char*)&gvar_8048D0A);
    →puts((char*)&gvar_8048D24);
    →puts((char*)&gvar_8048D3E);
    →puts((char*)&gvar_8048D58);
    →puts((char*)&gvar_8048D72);
    →puts("hex=0x09 dec=9 char=\tFINI");
    →puts("hex=0x0a dec=10 char=\nFINI");
    →puts((char*)&gvar_8048DC1);
    →puts((char*)&gvar_8048DDC);
    →puts("hex=0x0d dec=13 char=\rFINI");
    →puts((char*)&gvar_8048E12);
    →puts((char*)&gvar_8048E2D);
    →puts((char*)&gvar_8048E48);
    →puts((char*)&gvar_8048E63);
    →puts((char*)&gvar_8048E7E);
    →puts((char*)&gvar_8048E99);
    →puts((char*)&gvar_8048EB4);
    →puts((char*)&gvar_8048ECF);
    →puts((char*)&gvar_8048EEA);
    →puts((char*)&gvar_8048F05);
    →puts((char*)&gvar_8048F20);
    →puts((char*)&gvar_8048F3B);
    →puts((char*)&gvar_8048F56);
    →puts((char*)&gvar_8048F71);
    →puts((char*)&gvar_8048F8C);
    →puts((char*)&gvar_8048FA7);
    →puts((char*)&gvar_8048FC2);
    →puts((char*)&gvar_8048FDD);
    return 0;
}

int basic_3_string_literals_high_chars() {
    →puts((char*)&gvar_8048FF8);
    →puts((char*)&gvar_8049014);
    →puts((char*)&gvar_8049030);
    →puts((char*)&gvar_804904C);
    →puts((char*)&gvar_8049068);
    →puts((char*)&gvar_8049084);
    →puts((char*)&gvar_80490A0);
    →puts((char*)&gvar_80490BC);
    →puts((char*)&gvar_80490D8);
    →puts((char*)&gvar_80490F4);
    →puts((char*)&gvar_8049110);
    →puts((char*)&gvar_804912C);
    →puts((char*)&gvar_8049148);
    →puts((char*)&gvar_8049164);
    →puts((char*)&gvar_8049180);
    →puts((char*)&gvar_804919C);
    return 0;
}

int basic_4_readonly_vs_modifiable() {
    →puts("a read only string");
    →puts((char*)&a_modifiable_string);
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
            int __c = v0;
            ++v0;
            →putchar(__c);
        }
        while(param0 + 48 != v0);
    }
    return 0;
}

int intermediate_2_parameter_names(int param0) {
    char* __modes;
    char* __filename;
    if(param0 != 1) {
        __filename = "/is/something/else";
        __modes = param0 < 0 ? (char*)&gvar_80491E0: (char*)&gvar_80491DE;
    }
    else {
        __filename = "/is/a/1";
        __modes = (char*)&gvar_80491DE;
    }
    FILE* ptr0 = →fopen(__filename, __modes);
    if(!ptr0) {
        →puts("failed");
    }
    return 0;
}

int main(int param0, char** param1) {
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
    intermediate_1_for_loop_name(param0);
    intermediate_2_parameter_names(param0);
    intermediate_10_int_literal_in_bit_context(param0);
    intermediate_11_int_literal_in_arithm_context(param0);
    advanced_1_null_bytes_with_fixed_length(NULL);
    advanced_2_naming_enums(NULL);
    advanced_10_int_literal_in_char_context(param1[0]);
    /*BAD_CALL!*/ advanced_11_printf_type_related();
    return (int)param1[0][0];
}

void sub_8048410() {
    jump gvar_804B008;
}

void sub_80484D0() {
    jump __gmon_start__;
}
