#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <sys/stat.h>

int basic_1_string_literals_quoting()
{
	puts("with ' single quote");
	puts("with \" double quote");
	return 0;
}

int basic_2_string_literals_low_chars()
{
	puts("hex=0x01 dec=1 char=\1FINI");
	puts("hex=0x02 dec=2 char=\2FINI");
	puts("hex=0x03 dec=3 char=\3FINI");
	puts("hex=0x04 dec=4 char=\4FINI");
	puts("hex=0x05 dec=5 char=\5FINI");
	puts("hex=0x06 dec=6 char=\6FINI");
	puts("hex=0x07 dec=7 char=\7FINI");
	puts("hex=0x08 dec=8 char=\10FINI");
	puts("hex=0x09 dec=9 char=\11FINI");
	puts("hex=0x0a dec=10 char=\12FINI");
	puts("hex=0x0b dec=11 char=\13FINI");
	puts("hex=0x0c dec=12 char=\14FINI");
	puts("hex=0x0d dec=13 char=\15FINI");
	puts("hex=0x0e dec=14 char=\16FINI");
	puts("hex=0x0f dec=15 char=\17FINI");
	puts("hex=0x10 dec=16 char=\20FINI");
	puts("hex=0x11 dec=17 char=\21FINI");
	puts("hex=0x12 dec=18 char=\22FINI");
	puts("hex=0x13 dec=19 char=\23FINI");
	puts("hex=0x14 dec=20 char=\24FINI");
	puts("hex=0x15 dec=21 char=\25FINI");
	puts("hex=0x16 dec=22 char=\26FINI");
	puts("hex=0x17 dec=23 char=\27FINI");
	puts("hex=0x18 dec=24 char=\30FINI");
	puts("hex=0x19 dec=25 char=\31FINI");
	puts("hex=0x1a dec=26 char=\32FINI");
	puts("hex=0x1b dec=27 char=\33FINI");
	puts("hex=0x1c dec=28 char=\34FINI");
	puts("hex=0x1d dec=29 char=\35FINI");
	puts("hex=0x1e dec=30 char=\36FINI");
	puts("hex=0x1f dec=31 char=\37FINI");
	return 0;
}

int basic_3_string_literals_high_chars()
{
	puts("hex=0xf0 dec=240 char=\360FINI");
	puts("hex=0xf1 dec=241 char=\361FINI");
	puts("hex=0xf2 dec=242 char=\362FINI");
	puts("hex=0xf3 dec=243 char=\363FINI");
	puts("hex=0xf4 dec=244 char=\364FINI");
	puts("hex=0xf5 dec=245 char=\365FINI");
	puts("hex=0xf6 dec=246 char=\366FINI");
	puts("hex=0xf7 dec=247 char=\367FINI");
	puts("hex=0xf8 dec=248 char=\370FINI");
	puts("hex=0xf9 dec=249 char=\371FINI");
	puts("hex=0xfa dec=250 char=\372FINI");
	puts("hex=0xfb dec=251 char=\373FINI");
	puts("hex=0xfc dec=252 char=\374FINI");
	puts("hex=0xfd dec=253 char=\375FINI");
	puts("hex=0xfe dec=254 char=\376FINI");
	puts("hex=0xff dec=255 char=\377FINI");
	return 0;
}

char a_modifiable_string[]="a modifiable string";

int basic_4_readonly_vs_modifiable() {
	puts("a read only string");
	puts(a_modifiable_string);
	return 0;
}

int basic_10_result_var_name(int arg)
{
	int x;
	if (arg > 5) {
		x = arg * 4;
	} else {
		x = 10 + time(0);
	}
	return x;
}

int intermediate_1_for_loop_name(int arg)
{
	for (int i = 0; i < arg; i++) {
		putchar('0' + i);
	}
	return 0;
}

int intermediate_2_parameter_names(int arg)
{
	char *n;
	char *m;
	if (arg == 1) {
		n = "/is/a/1";
	} else {
		n = "/is/something/else";
	}
	if (arg >= 0) {
		m = "r";
	} else {
		m = "w";
	}
	if (!fopen(n, m)) {
		puts("failed");
	}
	return 0;
}

int intermediate_10_int_literal_in_bit_context(int arg)
{
	// abusing putchar() here
	putchar(arg & 0x00f0f0);
	putchar(arg | 0xff0000);
	putchar(arg ^ 3);
	putchar(arg & 42);
	putchar(arg | 999);
	putchar(arg ^ 1234321);
	return 0;
}

int intermediate_11_int_literal_in_arithm_context(int arg)
{
	// abusing putchar() here
	putchar(arg + 0x00f0f0);
	putchar(arg - 0xff0000);
	putchar(arg * 3);
	putchar(arg + 42);
	putchar(arg - 999);
	putchar(arg * 1234321);

	return 0;
}

int advanced_1_null_bytes_with_fixed_length(FILE * file)
{
	fwrite("with null byte \0x", 17, 1, file);
	fwrite("with null byte \0x", 1, 17, file);
	return memcmp(file, "with null byte \0x", 17);
}

int advanced_2_naming_enums(FILE * file)
{
	int result = 0;
	result += fseek(file, 0, SEEK_SET);
	result += fseek(file, 0, SEEK_CUR);
	result += fseek(file, 0, SEEK_END);
	result += chmod("/some/path", S_IRGRP | S_IROTH);
	if (result > 4) {
		puts("something");
	}
	return 0;
}

int advanced_10_int_literal_in_char_context(char *str)
{
	putchar(49);

	if (strchr(str, 49)) {
		puts("contains a '1'");
	}

	char arr[] = { 'a', 'b', 0 };
	arr[1] = 49;
	puts(arr);

	return 0;
}

int advanced_11_printf_type_related()
{
	printf("as char %c\n", '0');
	printf("as int %d\n", 48);
	printf("as pointer %p\n", (void *)0x30);
	printf("as octal %o\n", 060);
	printf("as hex %x\n", 0x30);

	printf("as unsigned %u\n", (unsigned)4294967295);
	printf("as signed %d\n", -1);
	return 0;
}

int main(int argc, char *argv[])
{
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

	advanced_10_int_literal_in_char_context(argv[0]);
	advanced_11_printf_type_related();

	return 0 + argv[0][0];
}
