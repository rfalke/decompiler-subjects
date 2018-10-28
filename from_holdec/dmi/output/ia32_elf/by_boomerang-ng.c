int main(int argc, char *argv[]);
void basic_1_string_literals_quoting();
void basic_2_string_literals_low_chars();
void basic_3_string_literals_high_chars();
void basic_4_readonly_vs_modifiable();
void basic_10_result_var_name(int param1);
void intermediate_1_for_loop_name(int param1);
void intermediate_2_parameter_names(__size32 param1);
void intermediate_10_int_literal_in_bit_context(int param1);
void intermediate_11_int_literal_in_arithm_context(unsigned int param1);
void advanced_1_null_bytes_with_fixed_length(union { FILE *; __size32; } param1);
void advanced_2_naming_enums(union { FILE *; __size32; } param1);
void advanced_10_int_literal_in_char_context(union { char *; __size32; } param1);
void advanced_11_printf_type_related();

/** address: 0x080484e0 */
int main(int argc, char *argv[])
{
    char *eax[]; 		// r24
    int eax_1; 		// r24
    char *local1[]; 		// m[esp - 48]

    basic_1_string_literals_quoting();
    basic_2_string_literals_low_chars();
    basic_3_string_literals_high_chars();
    basic_4_readonly_vs_modifiable();
    basic_10_result_var_name(argc);
    intermediate_1_for_loop_name(argc);
    intermediate_2_parameter_names(argc);
    intermediate_10_int_literal_in_bit_context(argc);
    intermediate_11_int_literal_in_arithm_context(argc);
    advanced_1_null_bytes_with_fixed_length(0);
    advanced_2_naming_enums(0);
    local1 = *argv;
    advanced_10_int_literal_in_char_context(local1);
    advanced_11_printf_type_related();
    eax = *argv;
    eax_1 = (int) *eax;
    return eax_1;
}

/** address: 0x08048660 */
void basic_1_string_literals_quoting()
{
    puts("with ' single quote");
    puts("with \" double quote");
    return;
}

/** address: 0x08048680 */
void basic_2_string_literals_low_chars()
{
    puts("hex=0x01 dec=1 char=\1FINI");
    puts("hex=0x02 dec=2 char=\2FINI");
    puts("hex=0x03 dec=3 char=\3FINI");
    puts("hex=0x04 dec=4 char=\4FINI");
    puts("hex=0x05 dec=5 char=\5FINI");
    puts("hex=0x06 dec=6 char=\6FINI");
    puts("hex=0x07 dec=7 char=\aFINI");
    puts("hex=0x08 dec=8 char=\bFINI");
    puts("hex=0x09 dec=9 char=\tFINI");
    puts("hex=0x0a dec=10 char=\nFINI");
    puts("hex=0x0b dec=11 char=\vFINI");
    puts("hex=0x0c dec=12 char=\fFINI");
    puts("hex=0x0d dec=13 char=\rFINI");
    puts("hex=0x0e dec=14 char=\eFINI");
    puts("hex=0x0f dec=15 char=\fFINI");
    puts("hex=0x10 dec=16 char=\10FINI");
    puts("hex=0x11 dec=17 char=\11FINI");
    puts("hex=0x12 dec=18 char=\12FINI");
    puts("hex=0x13 dec=19 char=\13FINI");
    puts("hex=0x14 dec=20 char=\14FINI");
    puts("hex=0x15 dec=21 char=\15FINI");
    puts("hex=0x16 dec=22 char=\16FINI");
    puts("hex=0x17 dec=23 char=\17FINI");
    puts("hex=0x18 dec=24 char=\18FINI");
    puts("hex=0x19 dec=25 char=\19FINI");
    puts("hex=0x1a dec=26 char=\1aFINI");
    puts("hex=0x1b dec=27 char=\1bFINI");
    puts("hex=0x1c dec=28 char=\1cFINI");
    puts("hex=0x1d dec=29 char=\1dFINI");
    puts("hex=0x1e dec=30 char=\1eFINI");
    puts("hex=0x1f dec=31 char=\1fFINI");
    return;
}

/** address: 0x08048800 */
void basic_3_string_literals_high_chars()
{
    puts("hex=0xf0 dec=240 char=\ffffffffffffffef\ffffffffffffffbf\ffffffffffffffbdFINI");
    puts("hex=0xf1 dec=241 char=\ffffffffffffffef\ffffffffffffffbf\ffffffffffffffbdFINI");
    puts("hex=0xf2 dec=242 char=\ffffffffffffffef\ffffffffffffffbf\ffffffffffffffbdFINI");
    puts("hex=0xf3 dec=243 char=\ffffffffffffffef\ffffffffffffffbf\ffffffffffffffbdFINI");
    puts("hex=0xf4 dec=244 char=\ffffffffffffffef\ffffffffffffffbf\ffffffffffffffbdFINI");
    puts("hex=0xf5 dec=245 char=\ffffffffffffffef\ffffffffffffffbf\ffffffffffffffbdFINI");
    puts("hex=0xf6 dec=246 char=\ffffffffffffffef\ffffffffffffffbf\ffffffffffffffbdFINI");
    puts("hex=0xf7 dec=247 char=\ffffffffffffffef\ffffffffffffffbf\ffffffffffffffbdFINI");
    puts("hex=0xf8 dec=248 char=\ffffffffffffffef\ffffffffffffffbf\ffffffffffffffbdFINI");
    puts("hex=0xf9 dec=249 char=\ffffffffffffffef\ffffffffffffffbf\ffffffffffffffbdFINI");
    puts("hex=0xfa dec=250 char=\ffffffffffffffef\ffffffffffffffbf\ffffffffffffffbdFINI");
    puts("hex=0xfb dec=251 char=\ffffffffffffffef\ffffffffffffffbf\ffffffffffffffbdFINI");
    puts("hex=0xfc dec=252 char=\ffffffffffffffef\ffffffffffffffbf\ffffffffffffffbdFINI");
    puts("hex=0xfd dec=253 char=\ffffffffffffffef\ffffffffffffffbf\ffffffffffffffbdFINI");
    puts("hex=0xfe dec=254 char=\ffffffffffffffef\ffffffffffffffbf\ffffffffffffffbdFINI");
    puts("hex=0xff dec=255 char=\ffffffffffffffef\ffffffffffffffbf\ffffffffffffffbdFINI");
    return;
}

/** address: 0x080488d0 */
void basic_4_readonly_vs_modifiable()
{
    puts("a read only string");
    puts("a modifiable string");
    return;
}

/** address: 0x080488f0 */
void basic_10_result_var_name(int param1)
{
    if (param1 <= 5) {
        time(0);
    }
    return;
}

/** address: 0x08048920 */
void intermediate_1_for_loop_name(int param1)
{
    __size32 ebx; 		// r27
    __size32 ebx_1; 		// r27{4}
    __size32 ebx_2; 		// r27{5}
    __size32 local1; 		// ebx_1{4}

    if (param1 > 0) {
        ebx = 48;
        local1 = ebx;
        do {
            ebx_1 = local1;
            ebx_2 = ebx_1 + 1;
            putchar(ebx_1);
            local1 = ebx_2;
        } while (ebx_1 + 1 != param1 + 48);
    }
    return;
}

/** address: 0x08048960 */
void intermediate_2_parameter_names(__size32 param1)
{
    FILE *eax_1; 		// r24{4}

    if (param1 != 1) {
    }
    eax_1 = fopen("/is/a/1", "r");
    if (eax_1 == 0) {
        puts("failed");
    }
    return;
}

/** address: 0x080489d0 */
void intermediate_10_int_literal_in_bit_context(int param1)
{
    putchar(param1 & 0xf0f0);
    putchar(param1 | 0xff0000);
    putchar(param1 ^ 3);
    putchar(param1 & 0x2a);
    putchar(param1 | 999);
    putchar(param1 ^ 0x12d591);
    return;
}

/** address: 0x08048a40 */
void intermediate_11_int_literal_in_arithm_context(unsigned int param1)
{
    putchar(param1 + 0xf0f0);
    putchar(param1 - 0xff0000);
    putchar(param1 * 3);
    putchar(param1 + 42);
    putchar(param1 - 999);
    putchar(param1 * 0x12d591);
    return;
}

/** address: 0x08048aa0 */
void advanced_1_null_bytes_with_fixed_length(union { FILE *; __size32; } param1)
{
    fwrite("with null byte ", 17, 1, param1);
    fwrite("with null byte ", 1, 17, param1);
    memcmp(param1, 0x8049271, 17);
    return;
}

/** address: 0x08048ae0 */
void advanced_2_naming_enums(union { FILE *; __size32; } param1)
{
    int eax; 		// r24
    int eax_1; 		// r24{3}
    int eax_2; 		// r24{4}
    int eax_3; 		// r24{5}

    eax_1 = fseek(param1, 0, 0);
    eax_2 = fseek(param1, 0, 1);
    eax_3 = fseek(param1, 0, 2);
    eax = chmod("/some/path", 36);
    if (eax + eax_1 + eax_2 + eax_3 > 4) {
        puts("something");
    }
    return;
}

/** address: 0x08048b50 */
void advanced_10_int_literal_in_char_context(union { char *; __size32; } param1)
{
    char *eax; 		// r24

    putchar('1');
    eax = strchr(param1, 49);
    if (eax != 0) {
        puts("contains a '1'");
    }
    puts(&'a');
    return;
}

/** address: 0x08048ba0 */
void advanced_11_printf_type_related()
{
    printf("as char %c\n", '0');
    printf("as int %d\n", 48);
    printf("as pointer %p\n");
    printf("as octal %o\n", 48);
    printf("as hex %x\n", 48);
    printf("as unsigned %u\n", (unsigned int)-1);
    printf("as signed %d\n", -1);
    return;
}

