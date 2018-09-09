#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <sys/stat.h>
#include <stdint.h>
#include <stdarg.h>

int basic_1_reg_in_block(int arg);
int basic_2_reg_in_prev_block(int arg);
int basic_3_reg_cond_overwrite(int arg);
int basic_4_reg_cond_change(int arg);
int basic_5_reg_different_values(int arg);
int basic_6_reg_overwrite_in_block(int arg);

int global_var;

int intermediate_1_mem_in_block(int arg);
int intermediate_2_mem_in_prev_block(int arg);
int intermediate_3_mem_cond_overwrite(int arg);
int intermediate_4_mem_cond_change(int arg);
int intermediate_5_mem_different_values(int arg);
int intermediate_6_mem_overwrite_in_block(int arg);

char global_char1, global_char2;
int intermediate_10_subregs();

/*
{
	char tmp = global_char1 * 2 + global_char2 * 4;
	putchar(tmp);
	return 0;
}
*/

int advanced_1_writes_can_be_omitted_for_non_mem_access_calls(int arg);

/*
{
	// write can be ommitted
	global_var = 1;
	int result=abs(arg);
	global_var = 2;
	return global_var + result;
}
*/

int advanced_2_mem_values_can_be_propagated_for_non_write_calls(char *arg);

/*
{
	global_var = 1;
	int result = strlen(arg);

	// can be expressed as "result=strlen() + 1;
	result += global_var;
	return result;
}
*/

int __attribute__ ((optimize(0))) advanced_3_value_range_analysis(int arg)
{
	if (arg > 10) {
		putchar('a' + (arg > 10));
		putchar('A' + (arg <= 10));
		putchar('0' + (arg > 9));
		if (arg > 8) {
			puts(">10");
		}
	}
	if (arg == 42) {
		putchar('a' + (arg == 42));
		putchar('A' + (arg != 42));
		putchar('0' + (arg == 100));
		if (arg != 101) {
			puts("= 42");
		}
	}
	return 0;
}


int main(int argc, char *argv[])
{
	int result = 0;
	result += basic_1_reg_in_block(argc);
	result += basic_2_reg_in_prev_block(argc);
	result += basic_3_reg_cond_overwrite(argc);
	result += basic_4_reg_cond_change(argc);
	result += basic_5_reg_different_values(argc);
	result += basic_6_reg_overwrite_in_block(argc);

	result += intermediate_1_mem_in_block(argc);
	result += intermediate_2_mem_in_prev_block(argc);
	result += intermediate_3_mem_cond_overwrite(argc);
	result += intermediate_4_mem_cond_change(argc);
	result += intermediate_5_mem_different_values(argc);
	result += intermediate_6_mem_overwrite_in_block(argc);
	result+=intermediate_10_subregs();

	result +=
	    advanced_1_writes_can_be_omitted_for_non_mem_access_calls(argc);
	result +=
	    advanced_2_mem_values_can_be_propagated_for_non_write_calls(argv
									[0]);
	result += advanced_3_value_range_analysis(argc);

	exit(result + argv[0][0]);
	return 0;
}
