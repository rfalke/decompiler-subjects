#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int basic_1_if(int arg)
{
	if (arg == 42) {
		puts("if block");
	}
	return 0;
}

int basic_2_if_else(int arg)
{
	if (arg == 42) {
		puts("if block");
	} else {
		puts("else block");
	}
	return 0;
}

int basic_3_if_elseif(int arg)
{
	if (arg == 42) {
		puts("if block");
	} else if (arg == 43) {
		puts("else-if block");
	}
	return 0;
}

int basic_4_if_elseif_else(int arg)
{
	if (arg == 42) {
		puts("if block");
	} else if (arg == 43) {
		puts("else-if block");
	} else {
		puts("else block");
	}
	return 0;
}

int basic_5_head_controlled_loop(int arg);

/*
{
	puts("before");
	while (arg != 42) {
		puts("body");
		arg++;
	}
	puts("after");
	return 0;
}
*/

int basic_6_tail_controlled_loop(int arg);

/*
{
	puts("before");
	do {
		puts("body");
		arg++;
	} while (arg != 42);
	puts("after");
	return 0;
}
*/

int basic_7_for_loop()
{
	for (int i = 0; i < 10; i++) {
		putchar('0' + i);
	}
	return 0;
}

int basic_8_forever_loop(int arg);

/*
{
	if (arg == 42) {
		while (1) {
			puts("loop body");
		}
	}
	return 0;
}
*/

int basic_9_dead_block();

/*
{
	puts("entry");
	goto exit;
	puts("not reached");
exit:
	puts("exit");
	return 0;
}
*/

int intermediate_1_short_circuit_and(int a, int b)
{
	int x = rand();
	if (a && x == b) {
		puts("both true");
	}
	return 0;
}

int intermediate_2_short_circuit_or(int a, int b)
{
	int x = rand();
	if (a || x == b) {
		puts("at least one is true");
	}
	return 0;
}

int intermediate_10_loop_with_one_break(int arg)
{
	while (1) {
		puts("head");
		if (time(0) == arg) {
			break;
		}
		puts("tail");
	}
	return 0;
}

int intermediate_11_loop_with_two_breaks(int arg)
{
	while (arg > 0) {
		puts("head");
		if (time(0) == arg) {
			break;
		}
		puts("tail");
		arg--;
	}
	return 0;
}

int intermediate_12_loop_with_break_and_block(int arg)
{
	while (1) {
		puts("head");
		if (time(0) == arg) {
			puts("will break");
			break;
		}
		puts("barrier");
		if (rand() == arg) {
			break;
		}
		puts("tail");
	}
	return 0;
}

int intermediate_13_loop_with_one_continue(int arg)
{
	if (arg > 123) {
		while (1) {
			puts("head");
			if (time(0) == arg) {
				continue;
			}
			puts("tail");
		}
	}
	return 0;
}

int intermediate_14_loop_with_two_continues(int arg)
{
	if (arg > 123) {
		while (1) {
			puts("head");
			if (time(0) == arg) {
				continue;
			}
			puts("barrier");
			if (rand() == arg) {
				continue;
			}
			puts("tail");
		}
	}
	return 0;
}

int intermediate_15_loop_with_continue_and_block(int arg)
{
	if (arg > 123) {
		while (1) {
			puts("head");
			if (time(0) == arg) {
				puts("will continue");
				continue;
			}
			puts("barrier");
			if (rand() == arg) {
				continue;
			}
			puts("tail");
		}
	}
	return 0;
}

int intermediate_16_loop_with_breaks_and_continues(int arg)
{
	while (1) {
		puts("head");

		if (time(0) + 1 == arg) {
			continue;
		}
		puts("after first continue");

		if (time(0) + 2 == arg) {
			break;
		}
		puts("after first break");

		if (time(0) + 3 == arg) {
			continue;
		}
		puts("after second continue");

		if (time(0) + 4 == arg) {
			break;
		}
		puts("after second break; tail");
	}
	return 0;
}

int intermediate_20_nested_loops(int arg)
{
	puts("before");
	do {
		puts("outer loop");
		do {
			puts("inner loop");
		} while (time(0) != arg);
	} while (rand() != arg);
	puts("after");
	return 0;
}

int advanced_1_loop_with_multiple_entries(int arg)
{
	if (arg == 42) {
		goto b1;
	}
	while (arg > 0) {
		puts("body 1");
 b1:
		puts("body 2");
		arg--;
	}
	return 0;
}

int advanced_2_loop_with_multiple_exits(int arg)
{
	while (arg > 0) {
		puts("body 1");
		if (time(0) == 1) {
			goto b1;
		}
		puts("body 2");
		if (time(0) == 2) {
			goto b2;
		}
		arg--;
	}
	puts("normal exit");
	goto exit;
 b1:
	puts("took exit 1");
	goto exit;
 b2:
	puts("took exit 2");
	goto exit;
 exit:
	return 0;
}

int advanced_10_irreducible(int arg)
{
	puts("b1");
	if (time(0) == arg) {
		goto b3;
	}
	puts("b2");
	if (time(0) == arg + 1) {
		goto b4;
	}
 b3:
	puts("b3");
	goto b5;
 b4:
	puts("b4");
	goto b5;
 b5:
	puts("b5");
	return 0;
}

int advanced_11_nested_loops_complex_condition(int arg)
{
	puts("b0");
	if (time(0) == arg) {
		goto b2;
	}
	goto b9;
 b1:
	puts("b1");
	if (time(0) == arg + 1) {
		goto b2;
	}
	goto b9;
 b2:
	puts("b2");
 b3:
	puts("b3");
	if (time(0) == arg + 2) {
		goto b1;
	}
	if (time(0) == arg + 3) {
		goto b3;
	}
	goto b9;
 b9:
	puts("b9");
	return 0;
}

int advanced_12_nested_if_in_loop(int arg)
{
	puts("b0");
 b1:
	puts("b1");
	if (time(0) == arg) {
		goto b2;
	}
	goto b3;
 b2:
	puts("b2");
	if (time(0) == arg + 1) {
		goto b1;
	}
	goto b4;
 b3:
	puts("b3");
	if (time(0) == arg + 2) {
		goto b1;
	}
	goto b4;
 b4:
	puts("b4");
	return 0;
}

int main(int argc, char *argv[])
{
	basic_1_if(argc);
	basic_2_if_else(argc);
	basic_3_if_elseif(argc);
	basic_4_if_elseif_else(argc);
	basic_5_head_controlled_loop(argc);
	basic_6_tail_controlled_loop(argc);
	basic_7_for_loop();
	basic_8_forever_loop(argc);
	basic_9_dead_block();

	intermediate_1_short_circuit_and(argc > 4, argc % 2 == 0);
	intermediate_2_short_circuit_or(argc > 4, argc % 2 == 0);

	intermediate_10_loop_with_one_break(argc);
	intermediate_11_loop_with_two_breaks(argc);
	intermediate_12_loop_with_break_and_block(argc);
	intermediate_13_loop_with_one_continue(argc);
	intermediate_14_loop_with_two_continues(argc);
	intermediate_15_loop_with_continue_and_block(argc);
	intermediate_16_loop_with_breaks_and_continues(argc);

	intermediate_20_nested_loops(argc);

	advanced_1_loop_with_multiple_entries(argc);
	advanced_2_loop_with_multiple_exits(argc);

	advanced_10_irreducible(argc);
	advanced_11_nested_loops_complex_condition(argc);
	advanced_12_nested_if_in_loop(argc);

	return 0 + argv[0][0];
}
