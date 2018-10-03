int main(int argc, char *argv[]);
void basic_1_if(__size32 param1);
void basic_2_if_else(__size32 param1);
void basic_3_if_elseif(int param1);
void basic_4_if_elseif_else(__size32 param1);
void basic_5_head_controlled_loop(__size32 param1);
void basic_6_tail_controlled_loop(__size32 param1);
void basic_7_for_loop();
void basic_8_forever_loop(__size32 param1);
void basic_9_dead_block();
void intermediate_1_short_circuit_and(int param1, int param2);
void intermediate_2_short_circuit_or();
void intermediate_10_loop_with_one_break(__size32 param1);
void intermediate_11_loop_with_two_breaks(int param1);
void intermediate_12_loop_with_break_and_block(__size32 param1);
void intermediate_13_loop_with_one_continue(int param1);
void intermediate_14_loop_with_two_continues(int param1);
void intermediate_15_loop_with_continue_and_block(int param1);
__size32 intermediate_16_loop_with_breaks_and_continues(__size32 param1);
void intermediate_17_forever_loop_with_extra_statement();
void intermediate_20_nested_loops(__size32 param1);
void intermediate_30_switch_case(unsigned int param1);
void advanced_1_loop_with_multiple_entries(int param1);
void advanced_2_loop_with_multiple_exits(int param1);
void advanced_10_irreducible(__size32 param1);
void advanced_11_nested_loops_complex_condition(int param1);
void advanced_12_nested_if_in_loop(__size32 param1);
void advanced_20_jump_table_on_stack(unsigned int param1);
void advanced_21_computed_jumps(unsigned int param1);

/** address: 0x080483a0 */
int main(int argc, char *argv[])
{
    unsigned char al; 		// r8
    __size32 eax; 		// r24
    __size32 ebp; 		// r29
    int ebx; 		// r27
    __size32 ecx; 		// r25
    int edi_1; 		// r31{0}
    __size32 edi_4; 		// r31{0}
    __size32 edx; 		// r26
    int esi; 		// r30
    union { __size32; __size32 *; } esp; 		// r28
    __size32 local5; 		// m[esp]

    basic_1_if(argc);
    basic_2_if_else(argc);
    basic_3_if_elseif(argc);
    basic_4_if_elseif_else(argc);
    basic_5_head_controlled_loop(argc);
    basic_6_tail_controlled_loop(argc);
    basic_7_for_loop();
    basic_8_forever_loop(argc);
    basic_9_dead_block();
    al =  (argc > 4) ? 1 : 0;
    edi_1 = 0 >> 8 & 0xffffff | (al);
    intermediate_1_short_circuit_and(edi_1,  ~argc & 0x1);
    intermediate_2_short_circuit_or();
    intermediate_10_loop_with_one_break(argc);
    intermediate_11_loop_with_two_breaks(argc);
    intermediate_12_loop_with_break_and_block(argc);
    intermediate_13_loop_with_one_continue(argc);
    intermediate_14_loop_with_two_continues(argc);
    intermediate_15_loop_with_continue_and_block(argc);
    eax = intermediate_16_loop_with_breaks_and_continues(argc); /* Warning: also results in ecx, edx */
    intermediate_17_forever_loop_with_extra_statement(al, eax, ecx, edx, argc, esp - 8,  ~argc & 0x1, edi_1, SUBFLAGS32(argc, 4, argc - 4), argc == 4, (unsigned int)argc < 4, argc, argv, local5, ebp, edi_4, esi, ebx, esp + 4, argv,  ~argc & 0x1, argc, pc);
}

/** address: 0x080485b0 */
void basic_1_if(__size32 param1)
{
    if (param1 == 42) {
        puts("if block");
    }
    else {
    }
    return;
}

/** address: 0x080485e0 */
void basic_2_if_else(__size32 param1)
{
    if (param1 == 42) {
        puts("if block");
    }
    else {
        puts("else block");
    }
    return;
}

/** address: 0x08048620 */
void basic_3_if_elseif(int param1)
{
    if (param1 == 42) {
        puts("if block");
bb0x8048631:
    }
    else {
        if (param1 == 43) {
            puts("else-if block");
        }
        else {
            goto bb0x8048631;
        }
    }
    return;
}

/** address: 0x08048680 */
void basic_4_if_elseif_else(__size32 param1)
{
    if (param1 == 42) {
        puts("if block");
bb0x80486a1:
    }
    else {
        if (param1 == 43) {
            puts("else-if block");
        }
        else {
            puts("else block");
            goto bb0x80486a1;
        }
    }
    return;
}

/** address: 0x08049110 */
void basic_5_head_controlled_loop(__size32 param1)
{
    __size32 ebx; 		// r27

    ebx = param1;
    puts("before");
    while (ebx != 42) {
        ebx++;
        puts("body");
    }
    puts("after");
    return;
}

/** address: 0x08049160 */
void basic_6_tail_controlled_loop(__size32 param1)
{
    __size32 ebx; 		// r27
    __size32 ebx_1; 		// r27{0}

    ebx = param1;
    puts("before");
    do {
        ebx_1 = ebx;
        ebx = ebx_1 + 1;
        puts("body");
    } while (ebx_1 + 1 != 42);
    puts("after");
    return;
}

/** address: 0x080486f0 */
void basic_7_for_loop()
{
    __size32 ebx; 		// r27
    __size32 ebx_1; 		// r27{0}

    ebx = 48;
    do {
        ebx_1 = ebx;
        ebx = ebx_1 + 1;
        putchar();
    } while (ebx_1 + 1 != 58);
    return;
}

/** address: 0x080491b0 */
void basic_8_forever_loop(__size32 param1)
{
    if (param1 == 42) {
        for(;;) {
            puts("loop body");
        }
    }
    return;
}

/** address: 0x080491d2 */
void basic_9_dead_block()
{
    puts("entry");
    puts("exit");
    return;
}

/** address: 0x08048720 */
void intermediate_1_short_circuit_and(int param1, int param2)
{
    int eax; 		// r24

    eax = rand();
    if ( ~(param1 == 0 || eax != param2)) {
        puts("both true");
    }
    return;
}

/** address: 0x08048750 */
void intermediate_2_short_circuit_or()
{
    rand();
    if () {
        puts("at least one is true");
    }
    else {
    }
    return;
}

/** address: 0x08048790 */
void intermediate_10_loop_with_one_break(__size32 param1)
{
    time_t eax; 		// r24

    for(;;) {
        puts("head");
        eax = time(0);
        if (eax != param1) {
            puts("tail");
        }
    }
    return;
}

/** address: 0x080487e0 */
void intermediate_11_loop_with_two_breaks(int param1)
{
    time_t eax; 		// r24
    int ebx; 		// r27
    int ebx_1; 		// r27{0}

    ebx = param1;
    if (param1 > 0) {
        do {
            ebx_1 = ebx;
            puts("head");
            eax = time(0);
            if (eax != ebx_1) {
                puts("tail");
                ebx = ebx_1 - 1;
            }
        } while (ebx_1 == 1);
    }
    else {
    }
    return;
}

/** address: 0x08048830 */
void intermediate_12_loop_with_break_and_block(__size32 param1)
{
    int eax; 		// r24

    for(;;) {
        puts("head");
        eax = time(0);
        if (eax != param1) {
            puts("barrier");
            eax = rand();
            if (param1 != eax) {
                puts("tail");
            }
        }
        else {
            goto bb0x8048889;
        }
        return;
    }
bb0x8048889:
    puts("will break");
    return;
}

/** address: 0x080488a0 */
void intermediate_13_loop_with_one_continue(int param1)
{
    int eax; 		// r24

    if (param1 > 123) {
        for(;;) {
            puts("head");
            eax = time(0);
            if (param1 == eax) {
                continue;
            }
            puts("tail");
        }
    }
    return;
}

/** address: 0x080488f0 */
void intermediate_14_loop_with_two_continues(int param1)
{
    int eax; 		// r24

    if (param1 > 123) {
        for(;;) {
            puts("head");
            eax = time(0);
            if (param1 == eax) {
                continue;
            }
            puts("barrier");
            eax = rand();
            if (param1 == eax) {
                continue;
            }
            puts("tail");
        }
    }
    return;
}

/** address: 0x08048960 */
void intermediate_15_loop_with_continue_and_block(int param1)
{
    int eax; 		// r24

    if (param1 > 123) {
        for(;;) {
bb0x8048970:
            puts("head");
            eax = time(0);
            if (param1 != eax) {
                puts("barrier");
                eax = rand();
                if (param1 == eax) {
                    goto bb0x8048970;
                }
                puts("tail");
                goto bb0x8048970;
            }
            puts("will continue");
        }
    }
    return;
}

/** address: 0x080489e0 */
__size32 intermediate_16_loop_with_breaks_and_continues(__size32 param1)
{
    int eax; 		// r24
    int ecx; 		// r25
    int edx; 		// r26

    for(;;) {
        puts("head");
        eax = time(0);
        if (eax + 1 == param1) {
            continue;
        }
        puts("after first continue");
        eax = time(0); /* Warning: also results in ecx, edx */
        if (param1 != eax + 2) {
            puts("after first break");
            eax = time(0);
            if (param1 == eax + 3) {
                continue;
            }
            puts("after second continue");
            eax = time(0); /* Warning: also results in ecx, edx */
            if (param1 != eax + 4) {
                puts("after second break; tail");
            }
        }
    }
    return 0; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x08049211 */
void intermediate_17_forever_loop_with_extra_statement()
{
bb0x8049214:
    goto bb0x8049214;
}

/** address: 0x08048aa0 */
void intermediate_20_nested_loops(__size32 param1)
{
    int eax; 		// r24

    puts("before");
    do {
        puts("outer loop");
        do {
            puts("inner loop");
            eax = time(0);
        } while (eax != param1);
        eax = rand();
    } while (param1 != eax);
    puts("after");
    return;
}

/** address: 0x08048b10 */
void intermediate_30_switch_case(unsigned int param1)
{
    if (param1 > 9) {
        puts("some other value");
    }
    else {
        switch(param1) {
        case 0:
            puts("0");
            goto bb0x8048b50;
        case 1:
            puts("1");
            goto bb0x8048b50;
        case 2:
bb0x8048bb0:
            puts("2 or 3");
            goto bb0x8048b50;
        case 3:
            goto bb0x8048bb0;
        case 4:
            puts("4");
            goto bb0x8048b50;
        case 5:
            puts("5");
            goto bb0x8048b50;
        case 6:
            puts("6");
            goto bb0x8048b50;
        case 7:
            puts("7 with fall through");
        case 8:
            puts("8");
            goto bb0x8048b50;
        case 9:
            puts("9");
            goto bb0x8048b50;
        }
    }
bb0x8048b50:
    puts("common exit");
    return;
}

/** address: 0x08048c30 */
void advanced_1_loop_with_multiple_entries(int param1)
{
    int ebx; 		// r27
    int esp; 		// r28
    __size32 esp_1; 		// r28{0}
    __size32 esp_4; 		// r28{0}
    __size32 local1; 		// esp{0}
    __size32 local2; 		// esp{0}

    esp_1 = (esp_4 - 12);
    ebx = param1;
    local1 = esp_1;
    local2 = esp_1;
    if (param1 == 42) {
        ebx = 41;
        for(;;) {
            esp = local2;
            *(__size32*)(esp - 16) = 0x80493ce;
            puts(*(esp - 16));
            local1 = esp;
            if (ebx > 0) {
                do {
bb0x8048c41:
                    esp = local1;
                    ebx--;
                    *(__size32*)(esp - 16) = 0x80493c7;
                    puts(*(esp - 16));
                    local2 = esp;
                } while (ebx > 0);
            }
            return;
        }
    }
    else {
        if (param1 > 0) {
            goto bb0x8048c41;
        }
    }
    return;
}

/** address: 0x08048c80 */
void advanced_2_loop_with_multiple_exits(int param1)
{
    int eax; 		// r24
    int ebx; 		// r27
    int ebx_1; 		// r27{0}

    ebx = param1;
    if (param1 > 0) {
        do {
            ebx_1 = ebx;
            puts("body 1");
            eax = time(0);
            if (eax != 1) {
                puts("body 2");
                eax = time(0);
                if (eax == 2) {
                    puts("took exit 2");
                    return;
                }
                ebx = ebx_1 - 1;
            }
            else {
                puts("took exit 1");
            }
            return;
        } while (ebx_1 == 1);
bb0x8048cf0:
        puts("normal exit");
    }
    else {
        goto bb0x8048cf0;
    }
    return;
}

/** address: 0x08048d30 */
void advanced_10_irreducible(__size32 param1)
{
    int eax; 		// r24

    puts("b1");
    eax = time(0);
    if (eax == param1) {
bb0x8048d78:
        puts("b3");
    }
    else {
        puts("b2");
        eax = time(0);
        if (eax == param1 + 1) {
            puts("b4");
        }
        else {
            goto bb0x8048d78;
        }
    }
    puts("b5");
    return;
}

/** address: 0x08048dc0 */
void advanced_11_nested_loops_complex_condition(int param1)
{
    int eax; 		// r24
    time_t eax_1; 		// r24{0}
    time_t eax_4; 		// r24{0}
    time_t eax_7; 		// r24{0}

    puts("b0");
    eax_1 = time(0);
    if (eax_1 == param1) {
        do {
            puts("b2");
bb0x8048e31:
            puts("b3");
            eax_4 = time(0);
            if (eax_4 != eax_1 + 2) {
                eax = time(0);
                if (eax == eax_1 + 3) {
                    goto bb0x8048e31;
                }
            }
            else {
                puts("b1");
                eax_7 = time(0);
            }
            goto bb0x8048de5;
        } while (eax_7 == eax_1 + 1);
    }
bb0x8048de5:
    puts("b9");
    return;
}

/** address: 0x08048e80 */
void advanced_12_nested_if_in_loop(__size32 param1)
{
    time_t eax; 		// r24

    puts("b0");
    do {
bb0x8048ea0:
        puts("b1");
        eax = time(0);
        if (eax == param1) {
            puts("b2");
            eax = time(0);
        }
        else {
            puts("b3");
            eax = time(0);
            if (eax == param1 + 2) {
                goto bb0x8048ea0;
            }
        }
bb0x8048ee0:
        puts("b4");
        return;
    } while (eax == param1 + 1);
    goto bb0x8048ee0;
}

/** address: 0x08048f30 */
void advanced_20_jump_table_on_stack(unsigned int param1)
{
    int esp; 		// r28

    if (param1 <= 5) {
/* goto m[a[m[esp - 44]] + ((param1 * 4) + 8)] */
    }
    puts("is something else");
    return;
}

/** address: 0x08049050 */
void advanced_21_computed_jumps(unsigned int param1)
{
    int eax; 		// r24

    puts("start");
    if (param1 > 2) {
        puts("is something else");
    }
    else {
        if (param1 != 0) {
            eax = 24;
            if (param1 == 2) {
                eax = 56;
            }
/* goto eax + 0x8049098 */
        }
        puts("is 0");
    }
    return;
}

