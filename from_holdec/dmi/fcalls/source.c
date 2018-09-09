#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <sys/stat.h>
#include <stdint.h>

#include <stdarg.h>

int __attribute__ ((__cdecl__)) sum3_cdecl(int a, int b, int c)
{
	return a + 2 * b + 3 * c + 1;
}

int __attribute__ ((__fastcall__)) sum3_fastcall(int a, int b, int c)
{
	return a + 2 * b + 3 * c + 2;
}

int __attribute__ ((__thiscall__)) sum3_thiscall(int a, int b, int c)
{
	return a + 2 * b + 3 * c + 3;
}

int __attribute__ ((__ms_abi__)) sum3_ms_abi(int a, int b, int c)
{
	return a + 2 * b + 3 * c + 4;
}

int __attribute__ ((__sysv_abi__)) sum3_sysv_abi(int a, int b, int c)
{
	return a + 2 * b + 3 * c + 5;
}

int __attribute__ ((__stdcall__)) sum3_stdcall(int a, int b, int c)
{
	return a + 2 * b + 3 * c + 6;
}

int basic_1_multiple_calling_conventions_3_ints(int arg)
{
	time_t t = time(0);
	if (sum3_cdecl(arg, t, 42) > 123) {
		puts("cdecl");
	}

	if (sum3_fastcall(arg, t, 42) > 123) {
		puts("fastcall");
	}

	if (sum3_thiscall(arg, t, 42) > 123) {
		puts("thiscall");
	}

	if (sum3_ms_abi(arg, t, 42) > 123) {
		puts("ms_abi");
	}
	if (sum3_sysv_abi(arg, t, 42) > 123) {
		puts("sysv_abi");
	}

	if (sum3_stdcall(arg, t, 42) > 123) {
		puts("stdcall");
	}

	return 0;
}

int a_vararg()
{
	puts("a_vararg called");
	return 0;
}

int basic_2_calling_varargs()
{
	a_vararg();
	a_vararg(1);
	a_vararg(1, 2);
	a_vararg(1, 2, 3);
	a_vararg(1, 2, 3, 4);
	return 0;
}

int basic_3_accessing_all_registers();

/* {
	register int eax asm("eax");
    register int ebx asm("ebx");
    register int ecx asm("ecx");
    register int edx asm("edx");
    register int esi asm("esi");
    register int edi asm("edi");
    register int ebp asm("ebp");
    return 2*eax + 3*ebx + 4*ecx + 5*edx + 6*esi + 7*edi + 8*ebp;
}
*/

int basic_4_tail_call(int arg)
{
	return time((arg - arg == 0) ? NULL : NULL);
}

int crude_printf(char *format, ...)
{
	int result = 0;
	va_list argp;
	va_start(argp, format);
	while (*format != '\0') {
		if (*format == '%') {
			format++;
			if (*format == '%') {
				putchar('%');
				result++;
			} else if (*format == 'c') {
				char char_to_print = va_arg(argp, int);
				putchar(char_to_print);
				result++;
			} else if (*format == 's') {
				char *string = va_arg(argp, char *);
				fputs(string, stdout);
				result += strlen(string);
			} else {
				puts("Not implemented");
			}
		} else {
			putchar(*format);
			result++;
		}
		format++;
	}
	va_end(argp);
	return result;
}

int even_more_crude(char *format, ...)
{
	int result = 0;
	va_list argp;
	va_start(argp, format);
	char char_to_print = va_arg(argp, int);
	putchar(char_to_print);
	result++;
	char *string = va_arg(argp, char *);
	fputs(string, stdout);
	result += strlen(string);
	va_end(argp);
	return result;
}

int intermediate_1_accessing_varargs()
{
	even_more_crude("low: a %c b %s c\n", 48, "hello");
	return 42 + crude_printf("higher: a %c b %s c\n", 48, "hello");
}

// a in rsi, b in rdi, c in ebp
int sum3_uncommon(int a, int b, int c);

/*
{
	return a + 2 * b + 3 * c + 10;
}
*/

int intermediate_2_use_uncommon_registers_for_parameters(int arg);

/*{
	time_t t = time(0);
	if (sum3_fastcall2(arg, t, 42) > 123) {
		puts("un common");
	}

	return 0;
}*/

int intermediate_3_calling_noreturn();

/* {
	puts("before");
	exit(1);
	puts("not reached");
}*/

int intermediate_4_asm_instr_with_multiple_results(int arg_eax, int arg_ecx)
{
	unsigned int eax;
	unsigned int ebx;
	unsigned int ecx;
	unsigned int edx;

	asm volatile ("cpuid":	//
		      "=a" (eax), "=b"(ebx), "=c"(ecx), "=d"(edx):	//
		      "0"(arg_eax), "2"(arg_ecx));
	return eax + 2 * ebx + 3 * ecx + 4 * edx;
}

int intermediate_5_pushs_in_different_blocks(int arg);

/*
{
	if (arg == 42) {
		puts("is 42");
	} else {
		puts("it not 42");
	}
	return 0;
}
*/

int advanced_1_pass_in_flags_reg_helper();

/* {
	if(flags) {
		puts("is above 2");
	}
	return 0;
}
*/

int advanced_1_pass_in_flags_reg(int arg);

/* {
	test arg>2;
	advanced_1_pass_in_flags_reg_helper();
	return 0;
}*/

int advanced_2_return_in_flags_reg_helper();
/* {
	test arg>2;
	return 0;
}
*/

int advanced_2_return_in_flags_reg(int arg);

/* {
	advanced_2_return_in_flags_reg_helper();
	if(flags) {
		puts("is above 2");
	}
	return 0;
}*/

int advanced_3_uneven_stack(int arg);

/*
{
	if (arg == 42) {
		puts("is 42");
	} else {
		puts("it not 42");
	}
	return 0;
}
*/

int main(int argc, char *argv[])
{
	int result = 0;
	result += basic_1_multiple_calling_conventions_3_ints(argc);
	result += basic_2_calling_varargs(argc);
	result += basic_3_accessing_all_registers();
	result += basic_4_tail_call(argc);

	result += intermediate_1_accessing_varargs();
	result += intermediate_2_use_uncommon_registers_for_parameters(argc);
	result += intermediate_3_calling_noreturn();
	result += intermediate_4_asm_instr_with_multiple_results(1, 1);
	result += intermediate_5_pushs_in_different_blocks(argc);

	result += advanced_1_pass_in_flags_reg(argc);
	result += advanced_2_return_in_flags_reg(argc);
	result += advanced_3_uneven_stack(argc);

	return result + argv[0][0];
}
