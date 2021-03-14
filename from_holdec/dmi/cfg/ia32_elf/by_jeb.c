
int advanced_10_irreducible(int param0) {
    →puts((char*)&gvar_80493F9);
    time_t v0 = →time(NULL);
    if(v0 != param0) {
        →puts((char*)&gvar_80493FF);
        time_t v1 = →time(NULL);
        if(param0 + 1 != v1) {
            →puts((char*)&gvar_80493FC);
            →puts((char*)&gvar_8049405);
            return 0;
        }
        →puts((char*)&gvar_8049402);
    }
    else {
        →puts((char*)&gvar_80493FC);
    }
    →puts((char*)&gvar_8049405);
    return 0;
}

int advanced_11_nested_loops_complex_condition(int param0) {
    time_t v0;
    time_t v1;
    →puts((char*)&gvar_8049408);
    time_t v2 = →time(NULL);
    if(v2 == param0) {
    alab1:
        do {
            →puts((char*)&gvar_80493FF);
        loc_8048E39:
            do {
                →puts((char*)&gvar_80493FC);
                time_t v3 = →time(NULL);
                if(v2 + 2 == v3) {
                    goto loc_8048E59;
                }
                else {
                    v0 = →time(NULL);
                }
                if(v2 + 3 != v0) {
                    break alab1;
                }
                else {
                    goto loc_8048E39;
                loc_8048E59:
                    →puts((char*)&gvar_80493F9);
                    v1 = →time(NULL);
                }
            }
            while(1);
        }
        while(v2 + 1 == v1);
    }
    →puts((char*)&gvar_804940B);
    return 0;
}

int advanced_12_nested_if_in_loop(int param0) {
    time_t v0;
    →puts((char*)&gvar_8049408);
loc_8048EA8:
    do {
        →puts((char*)&gvar_80493F9);
        time_t v1 = →time(NULL);
        if(v1 != param0) {
            →puts((char*)&gvar_80493FC);
            time_t v2 = →time(NULL);
            if(param0 + 2 == v2) {
                goto loc_8048EA8;
            }
        }
        else {
            →puts((char*)&gvar_80493FF);
            v0 = →time(NULL);
        }
        break;
    }
    while(param0 + 1 == v0);
    →puts((char*)&gvar_8049402);
    return 0;
}

int advanced_1_loop_with_multiple_entries(int param0) {
    int v0 = param0;
    if(v0 == 42) {
        v0 = 41;
    loc_8048C5C:
        →puts("body 2");
        if(v0 > 0) {
            --v0;
            →puts("body 1");
            goto loc_8048C5C;
        }
    }
    else if(v0 > 0) {
        --v0;
        →puts("body 1");
        goto loc_8048C5C;
    }
    return 0;
}

int advanced_20_jump_table_on_stack(unsigned int param0) {
    int v0 = &sub_8048F90;
    int v1 = &sub_8049030;
    int v2 = &sub_8049010;
    int v3 = &sub_8048FF0;
    int v4 = &sub_8048FD0;
    int v5 = &sub_8048FB0;
    if(param0 <= 5) {
        jump *(int*)(param0 * 4 + (int)&v0);
    }
    return →puts("is something else");
}

int advanced_21_computed_jumps(int param0) {
    int v0;
    int v1;
    int v2;
    →puts("start");
    if((unsigned int)param0 <= 2) {
        if(param0) {
            /*BAD_CALL!*/ (param0 != 2 ? 24: 56) + &loc_8049098{sub_80490B0}(v0, v2, v1);
        }
        return →puts("is 0");
    }
    →puts("is something else");
    return 0;
}

int advanced_2_loop_with_multiple_exits(int param0) {
    int v0 = param0;
    if(v0 > 0) {
    loc_8048CBE:
        do {
            →puts("body 1");
            time_t v1 = →time(NULL);
            if(v1 == 1) {
                →puts("took exit 1");
                return 0;
            }
            →puts("body 2");
            time_t v2 = →time(NULL);
            if(v2 == 2) {
                →puts("took exit 2");
                return 0;
            }
            --v0;
            if(v0) {
                goto loc_8048CBE;
            }
        }
        while(v0);
    }
    →puts("normal exit");
    return 0;
}

int basic_1_if(int param0) {
    if(param0 == 42) {
        →puts("if block");
    }
    return 0;
}

int basic_2_if_else(int param0) {
    if(param0 != 42) {
        →puts("else block");
    }
    else {
        →puts("if block");
    }
    return 0;
}

int basic_3_if_elseif(int param0) {
    if(param0 == 42) {
        →puts("if block");
    }
    else if(param0 == 43) {
        →puts((char*)&gvar_80492BF);
    }
    return 0;
}

int basic_4_if_elseif_else(int param0) {
    if(param0 == 42) {
        →puts("if block");
    }
    else if(param0 != 43) {
        →puts("else block");
    }
    else {
        →puts((char*)&gvar_80492BF);
    }
    return 0;
}

int basic_5_head_controlled_loop(int param0) {
    int v0 = param0;
    →puts("before");
    while(v0 != 42) {
        ++v0;
        →puts("body");
    }
    →puts("after");
    return 0;
}

int basic_6_tail_controlled_loop(int param0) {
    int v0 = param0;
    →puts("before");
    do {
        ++v0;
        →puts("body");
    }
    while(v0 != 42);
    →puts("after");
    return 0;
}

int basic_7_for_loop() {
    int v0 = 48;
    do {
        int __c = v0;
        ++v0;
        →putchar(__c);
    }
    while(v0 != 58);
    return 0;
}

int basic_8_forever_loop(int param0) {
    if(param0 != 42) {
        return 0;
    }
    while(1) {
        →puts("loop body");
    }
}

int basic_9_dead_block() {
    →puts("entry");
    →puts("exit");
    return 0;
}

int intermediate_10_loop_with_one_break(int param0) {
    while(1) {
        →puts("head");
        time_t v0 = →time(NULL);
        if(v0 == param0) {
            return 0;
        }
        →puts("tail");
    }
    return 0;
}

int intermediate_11_loop_with_two_breaks(int param0) {
    int v0 = param0;
    if(v0 > 0) {
        do {
            →puts("head");
            int v1 = (int)→time(NULL);
            if(v1 == v0) {
                return 0;
            }
            →puts("tail");
            --v0;
        }
        while(!v0);
    }
    return 0;
}

int intermediate_12_loop_with_break_and_block(int param0) {
    while(1) {
        →puts("head");
        time_t v0 = →time(NULL);
        if(v0 == param0) {
            break;
        }
        else {
            →puts("barrier");
            int v1 = →rand();
            if(v1 == param0) {
                return 0;
            }
            →puts("tail");
        }
    }
    →puts("will break");
    return 0;
}

int intermediate_13_loop_with_one_continue(int param0) {
    if(param0 > 123) {
        while(1) {
            →puts("head");
            time_t v0 = →time(NULL);
            if(v0 != param0) {
                →puts("tail");
            }
        }
    }
    return 0;
}

int intermediate_14_loop_with_two_continues(int param0) {
    if(param0 > 123) {
        while(1) {
            →puts("head");
            time_t v0 = →time(NULL);
            if(v0 != param0) {
                →puts("barrier");
                int v1 = →rand();
                if(v1 != param0) {
                    →puts("tail");
                }
            }
        }
    }
    return 0;
}

int intermediate_15_loop_with_continue_and_block(int param0) {
    if(param0 > 123) {
        while(1) {
            →puts("head");
            time_t v0 = →time(NULL);
            if(v0 != param0) {
                →puts("barrier");
                int v1 = →rand();
                if(v1 != param0) {
                    →puts("tail");
                }
            }
            else {
                →puts("will continue");
            }
        }
    }
    return 0;
}

int intermediate_16_loop_with_breaks_and_continues(int param0) {
    while(1) {
        →puts("head");
        time_t v0 = →time(NULL);
        if(v0 + 1 != param0) {
            →puts("after first continue");
            time_t v1 = →time(NULL);
            if(v1 + 2 == param0) {
                return 0;
            }
            →puts("after first break");
            time_t v2 = →time(NULL);
            if(v2 + 3 != param0) {
                →puts("after second continue");
                time_t v3 = →time(NULL);
                if(v3 + 4 == param0) {
                    return 0;
                }
                →puts((char*)&gvar_804934F);
            }
        }
    }
    return 0;
}

void intermediate_17_forever_loop_with_extra_statement() {
    while(1) {
    }
}

int intermediate_1_short_circuit_and(int param0, int param1) {
    int v0 = →rand();
    if(param0 && v0 == param1) {
        →puts("both true");
    }
    return 0;
}

int intermediate_20_nested_loops(int param0) {
    int v0;
    time_t v1;
    →puts("before");
    do {
        →puts("outer loop");
        do {
            →puts("inner loop");
            v1 = →time(NULL);
        }
        while(v1 != param0);
        v0 = →rand();
    }
    while(v0 != param0);
    →puts("after");
    return 0;
}

int intermediate_2_short_circuit_or(int param0, int param1) {
    int v0 = →rand();
    if((param0 || v0 == param1)) {
        →puts("at least one is true");
    }
    return 0;
}

int intermediate_30_switch_case(unsigned int param0) {
    switch(param0) {
        case 0: {
            →puts((char*)0x8049423);
            break;
        }
        case 1: {
            →puts((char*)&gvar_8049428);
            break;
        }
        case 2: 
        case 3: {
            →puts("2 or 3");
            break;
        }
        case 4: {
            →puts((char*)&gvar_8049437);
            break;
        }
        case 5: {
            →puts((char*)&gvar_804943C);
            break;
        }
        case 6: {
            →puts((char*)&gvar_8049392);
            break;
        }
        case 7: {
            →puts("7 with fall through");
        }
        case 8: {
            →puts((char*)&gvar_80493A8);
            break;
        }
        case 9: {
            →puts((char*)&gvar_804940C);
            break;
        }
        default: {
            →puts("some other value");
        }
    }
    →puts("common exit");
    return 0;
}

int main(int param0, int param1) {
    basic_1_if(param0);
    basic_2_if_else(param0);
    basic_3_if_elseif(param0);
    basic_4_if_elseif_else(param0);
    basic_5_head_controlled_loop(param0);
    basic_6_tail_controlled_loop(param0);
    basic_7_for_loop();
    basic_8_forever_loop(param0);
    basic_9_dead_block();
    intermediate_1_short_circuit_and(param0 <= 4 ? 0: 1, ~param0 & 0x1);
    intermediate_2_short_circuit_or(param0 <= 4 ? 0: 1, ~param0 & 0x1);
    intermediate_10_loop_with_one_break(param0);
    intermediate_11_loop_with_two_breaks(param0);
    intermediate_12_loop_with_break_and_block(param0);
    intermediate_13_loop_with_one_continue(param0);
    intermediate_14_loop_with_two_continues(param0);
    intermediate_15_loop_with_continue_and_block(param0);
    intermediate_16_loop_with_breaks_and_continues(param0);
    /*NO_RETURN*/ intermediate_17_forever_loop_with_extra_statement();
}

void sub_8048330() {
    jump gvar_804B008;
}

void sub_8048390() {
    jump __gmon_start__;
}

int sub_804845C(int param0, int param1, int param2, int param3) {
    int v0;
    int v1;
    intermediate_20_nested_loops(v1);
    intermediate_30_switch_case((unsigned int)v1);
    advanced_1_loop_with_multiple_entries(v1);
    advanced_2_loop_with_multiple_exits(v1);
    advanced_10_irreducible(v1);
    advanced_11_nested_loops_complex_condition(v1);
    advanced_12_nested_if_in_loop(v1);
    advanced_20_jump_table_on_stack((unsigned int)v1);
    advanced_21_computed_jumps(v1);
    jump v0;
}

int sub_8048F90(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10) {
    →puts("is 0");
    jump param10;
}

int sub_8048FB0(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10) {
    →puts((char*)&gvar_8049439);
    jump param10;
}

int sub_8048FD0(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10) {
    →puts((char*)&gvar_8049434);
    jump param10;
}

int sub_8048FF0(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10) {
    →puts("is 3");
    jump param10;
}

int sub_8049010(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10) {
    →puts("is 2");
    jump param10;
}

int sub_8049030(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10) {
    →puts((char*)&gvar_8049425);
    jump param10;
}

int sub_80490B0(int param0, int param1, int param2) {
    →puts((char*)&gvar_8049425);
    jump param2;
}

int sub_80490D0(int param0, int param1, int param2) {
    →puts("is 2");
    jump param2;
}

int sub_80491EA() {
    int v0;
    →puts("not reached");
    →puts("exit");
    jump v0;
}

int sub_8049216() {
    →puts("unreached");
    return 0;
}
