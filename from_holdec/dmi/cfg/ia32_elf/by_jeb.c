
int advanced_10_irreducible(unsigned int param0) {
    unsigned int v0;
    →puts(&gvar_80493F9);
    →time(0);
    if(v0 != param0) {
        →puts(&gvar_80493FF);
        →time(0);
        if(param0 + 1 != v0) {
            →puts(&gvar_80493FC);
            →puts(&gvar_8049405);
            return 0;
        }
        →puts(&gvar_8049402);
    }
    else {
        →puts(&gvar_80493FC);
    }
    →puts(&gvar_8049405);
    return 0;
}

int advanced_11_nested_loops_complex_condition(unsigned int param0) {
    unsigned int v0;
    →puts(&gvar_8049408);
    →time(0);
    if(v0 == param0) {
    alab1:
        do {
            →puts(&gvar_80493FF);
        loc_8048E39:
            do {
                →puts(&gvar_80493FC);
                →time(0);
                if(v0 + 2 == v0) {
                    goto loc_8048E59;
                }
                else {
                    →time(0);
                }
                if(v0 + 3 != v0) {
                    break alab1;
                }
                else {
                    goto loc_8048E39;
                loc_8048E59:
                    →puts(&gvar_80493F9);
                    →time(0);
                }
            }
            while(1);
        }
        while(v0 + 1 == v0);
    }
    →puts(&gvar_804940B);
    return 0;
}

int advanced_12_nested_if_in_loop(unsigned int param0) {
    unsigned int v0;
    →puts(&gvar_8049408);
loc_8048EA8:
    do {
        →puts(&gvar_80493F9);
        →time(0);
        if(v0 != param0) {
            →puts(&gvar_80493FC);
            →time(0);
            if(param0 + 2 == v0) {
                goto loc_8048EA8;
            }
        }
        else {
            →puts(&gvar_80493FF);
            →time(0);
        }
        break;
    }
    while(param0 + 1 == v0);
    →puts(&gvar_8049402);
    return 0;
}

int advanced_1_loop_with_multiple_entries(unsigned int param0) {
    unsigned int v0 = param0;
    if(v0 == 42) {
        v0 = 41;
    loc_8048C5C:
        →puts("body 2");
        if((int)v0 > 0) {
            --v0;
            →puts("body 1");
            goto loc_8048C5C;
        }
    }
    else if((int)v0 > 0) {
        --v0;
        →puts("body 1");
        goto loc_8048C5C;
    }
    return 0;
}

unsigned int advanced_20_jump_table_on_stack(unsigned int param0) {
    int* ptr0;
    char v0;
    int* ptr1 = &ptr0;
    int* ptr2 = &v0;
    char v1 = &ptr0 == 44;
    char v2 = (int)&v0 < 0;
    char v3 = __parity__((unsigned char)&ptr0 - 44);
    char v4 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x2c) ^ (int)&v0) >>> 4) & 0x1);
    char v5 = (unsigned int)&ptr0 < 44;
    char v6 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&v0) & (int)(int*)((int)&ptr0 ^ 0x2c)) < 0;
    unsigned int v7 = param0;
    int v8 = &gvar_8048F90;
    int v9 = &gvar_8049030;
    int v10 = &gvar_8049010;
    int v11 = &gvar_8048FF0;
    int v12 = &gvar_8048FD0;
    char v13 = v7 == 5;
    char v14 = (int)v7 < 5;
    char v15 = __parity__((unsigned char)v7 - 5);
    char v16 = v7 < 5;
    char v17 = (((v7 - 5) ^ v7) & (v7 ^ 0x5)) < 0;
    char v18 = (((v7 - 5) ^ (v7 ^ 0x5)) >>> 4) & 0x1;
    int v19 = &gvar_8048FB0;
    if((v16 || v13)) {
        jump *(int*)(v7 * 4 + (int)&v8);
    }
    →puts("is something else");
    return 0;
}

int advanced_21_computed_jumps(unsigned int param0) {
    int v0;
    char v1;
    unsigned int v2;
    char v3;
    unsigned int v4 = v2;
    int* ptr0 = &v4;
    char v5 = &v0 == 24;
    char v6 = (int)&v1 < 0;
    char v7 = __parity__((unsigned char)&v0 - 24);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v4 ^ 0x14) ^ (int)&v1) >>> 4) & 0x1);
    char v9 = (unsigned int)&v4 < 20;
    char v10 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&v1) & (int)(int*)((int)&v4 ^ 0x14)) < 0;
    unsigned int v11 = param0;
    →puts("start");
    int* ptr1 = &v3;
    char v12 = v11 == 2;
    char v13 = (int)v11 < 2;
    char v14 = __parity__((unsigned char)v11 - 2);
    char v15 = v11 < 2;
    char v16 = (((v11 - 2) ^ v11) & (v11 ^ 0x2)) < 0;
    char v17 = (((v11 - 2) ^ (v11 ^ 0x2)) >>> 4) & 0x1;
    if((v15 || v12)) {
        char v18 = v11 ? 0: 1;
        char v19 = v11 >= 0x80000000;
        char v20 = __parity__((unsigned char)v11);
        char v21 = 0;
        char v22 = 0;
        if(!v18) {
            int v23 = &gvar_80490B0;
            unsigned int v24 = 24;
            char v25 = v11 == 2;
            char v26 = (int)v11 < 2;
            char v27 = __parity__((unsigned char)v11 - 2);
            char v28 = v11 < 2;
            char v29 = (((v11 - 2) ^ v11) & (v11 ^ 0x2)) < 0;
            char v30 = (((v11 - 2) ^ (v11 ^ 0x2)) >>> 4) & 0x1;
            if(v25) {
                int v31 = 134516968;
                int v32 = 134516968;
                v24 = 56;
                char v33 = 0;
                char v34 = 0;
                char v35 = 0;
                char v36 = 0;
                char v37 = 0;
                char v38 = 0;
            }
            unsigned int v39 = v24;
            int v40 = (int)(v24 + &loc_8049098);
            char v41 = v40 ? 0: 1;
            char v42 = v40 < 0;
            char v43 = __parity__((unsigned char)v40);
            char v44 = (((v39 ^ &loc_8049098) ^ v40) >>> 4) & 0x1;
            char v45 = v39 >= 4160450408;
            char v46 = ((v40 ^ v39) & ~(v39 ^ &loc_8049098)) < 0;
            jump v40;
        }
        →puts("is 0");
    }
    else {
        →puts("is something else");
    }
    return 0;
}

int advanced_2_loop_with_multiple_exits(unsigned int param0) {
    unsigned int v0;
    unsigned int v1 = param0;
    if((int)v1 > 0) {
    loc_8048CBE:
        do {
            →puts("body 1");
            →time(0);
            if(v0 == 1) {
                →puts("took exit 1");
                return 0;
            }
            →puts("body 2");
            →time(0);
            if(v0 == 2) {
                →puts("took exit 2");
                return 0;
            }
            --v1;
            if(v1) {
                goto loc_8048CBE;
            }
        }
        while(v1);
    }
    →puts("normal exit");
    return 0;
}

int basic_1_if(unsigned int param0) {
    if(param0 == 42) {
        →puts("if block");
    }
    return 0;
}

int basic_2_if_else(unsigned int param0) {
    if(param0 != 42) {
        →puts("else block");
    }
    else {
        →puts("if block");
    }
    return 0;
}

int basic_3_if_elseif(unsigned int param0) {
    if(param0 == 42) {
        →puts("if block");
    }
    else if(param0 == 43) {
        →puts(&gvar_80492BF);
    }
    return 0;
}

int basic_4_if_elseif_else(unsigned int param0) {
    if(param0 == 42) {
        →puts("if block");
    }
    else if(param0 != 43) {
        →puts("else block");
    }
    else {
        →puts(&gvar_80492BF);
    }
    return 0;
}

int basic_5_head_controlled_loop(unsigned int param0) {
    unsigned int v0 = param0;
    →puts("before");
    while(v0 != 42) {
        ++v0;
        →puts("body");
    }
    →puts("after");
    return 0;
}

int basic_6_tail_controlled_loop(unsigned int param0) {
    unsigned int v0 = param0;
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
        int v1 = v0;
        ++v0;
        →putchar(v1);
    }
    while(v0 != 58);
    return 0;
}

int basic_8_forever_loop(unsigned int param0) {
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

int intermediate_10_loop_with_one_break(unsigned int param0) {
    unsigned int v0;
    while(1) {
        →puts("head");
        →time(0);
        if(v0 == param0) {
            return 0;
        }
        →puts("tail");
    }
    return 0;
}

int intermediate_11_loop_with_two_breaks(unsigned int param0) {
    unsigned int v0;
    unsigned int v1 = param0;
    if((int)v1 > 0) {
        do {
            →puts("head");
            →time(0);
            if(v0 == v1) {
                return 0;
            }
            →puts("tail");
            --v1;
        }
        while(!v1);
    }
    return 0;
}

int intermediate_12_loop_with_break_and_block(unsigned int param0) {
    unsigned int v0;
    while(1) {
        →puts("head");
        →time(0);
        if(v0 == param0) {
            break;
        }
        else {
            →puts("barrier");
            →rand();
            if(v0 == param0) {
                return 0;
            }
            →puts("tail");
        }
    }
    →puts("will break");
    return 0;
}

int intermediate_13_loop_with_one_continue(unsigned int param0) {
    int v0;
    if((int)param0 > 123) {
        while(1) {
            →puts("head");
            →time(0);
            if(v0 != param0) {
                →puts("tail");
            }
        }
    }
    return 0;
}

int intermediate_14_loop_with_two_continues(unsigned int param0) {
    int v0;
    if((int)param0 > 123) {
        while(1) {
            →puts("head");
            →time(0);
            if(v0 != param0) {
                →puts("barrier");
                →rand();
                if(v0 != param0) {
                    →puts("tail");
                }
            }
        }
    }
    return 0;
}

int intermediate_15_loop_with_continue_and_block(unsigned int param0) {
    int v0;
    if((int)param0 > 123) {
        while(1) {
            →puts("head");
            →time(0);
            if(v0 != param0) {
                →puts("barrier");
                →rand();
                if(v0 != param0) {
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

int intermediate_16_loop_with_breaks_and_continues(unsigned int param0) {
    int v0;
    while(1) {
        →puts("head");
        →time(0);
        if((unsigned int)(v0 + 1) != param0) {
            →puts("after first continue");
            →time(0);
            if((unsigned int)(v0 + 2) == param0) {
                return 0;
            }
            →puts("after first break");
            →time(0);
            if((unsigned int)(v0 + 3) != param0) {
                →puts("after second continue");
                →time(0);
                if((unsigned int)(v0 + 4) == param0) {
                    return 0;
                }
                →puts(&gvar_804934F);
            }
        }
    }
    return 0;
}

void intermediate_17_forever_loop_with_extra_statement() {
    while(1) {
    }
}

int intermediate_1_short_circuit_and(int param0, unsigned int param1) {
    unsigned int v0;
    →rand();
    if(param0 && v0 == param1) {
        →puts("both true");
    }
    return 0;
}

int intermediate_20_nested_loops(unsigned int param0) {
    unsigned int v0;
    →puts("before");
    do {
        →puts("outer loop");
        do {
            →puts("inner loop");
            →time(0);
        }
        while(v0 != param0);
        →rand();
    }
    while(v0 != param0);
    →puts("after");
    return 0;
}

int intermediate_2_short_circuit_or(int param0, unsigned int param1) {
    unsigned int v0;
    →rand();
    if((param0 || v0 == param1)) {
        →puts("at least one is true");
    }
    return 0;
}

int intermediate_30_switch_case(unsigned int param0) {
    switch(param0) {
        case 0: {
            →puts(134517795);
            break;
        }
        case 1: {
            →puts(&gvar_8049428);
            break;
        }
        case 2: 
        case 3: {
            →puts("2 or 3");
            break;
        }
        case 4: {
            →puts(&gvar_8049437);
            break;
        }
        case 5: {
            →puts(&gvar_804943C);
            break;
        }
        case 6: {
            →puts(&gvar_8049392);
            break;
        }
        case 7: {
            →puts("7 with fall through");
        }
        case 8: {
            →puts(&gvar_80493A8);
            break;
        }
        case 9: {
            →puts(&gvar_804940C);
            break;
        }
        default: {
            →puts("some other value");
        }
    }
    →puts("common exit");
    return 0;
}

int main(unsigned int param0, int param1) {
    int v0;
    int v1;
    void* ptr0;
    int v2;
    int v3;
    int v4;
    int* ptr1 = &param0;
    char v5 = &v0 ? 0: 1;
    char v6 = (int)&v0 < 0;
    char v7 = __parity__((unsigned char)&v0);
    char v8 = 0;
    char v9 = 0;
    int v10 = v0;
    int* ptr2 = &v2;
    int v11 = v4;
    int* ptr3 = &param0;
    int* ptr4 = &ptr3;
    char v12 = &v0 == 60;
    char v13 = (int)&v3 < 0;
    char v14 = __parity__((unsigned char)&v0 - 60);
    char v15 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr3 ^ 0x24) ^ (int)&v3) >>> 4) & 0x1);
    char v16 = (unsigned int)&ptr3 < 36;
    char v17 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&v3) & (int)(int*)((int)&ptr3 ^ 0x24)) < 0;
    unsigned int v18 = param0;
    int v19 = param1;
    unsigned int v20 = v18;
    int v21 = v19;
    unsigned int v22 = ~v20;
    int v23 = basic_1_if(v18);
    unsigned int v24 = v22 & 0x1;
    char v25 = v24 ? 0: 1;
    char v26 = v24 >= 0x80000000;
    char v27 = __parity__((unsigned char)v24);
    char v28 = 0;
    char v29 = 0;
    int v30 = basic_2_if_else(v18);
    int v31 = basic_3_if_elseif(v18);
    int v32 = basic_4_if_elseif_else(v18);
    int v33 = basic_5_head_controlled_loop(v18);
    int v34 = basic_6_tail_controlled_loop(v18);
    int v35 = basic_7_for_loop();
    int v36 = basic_8_forever_loop(v18);
    int v37 = basic_9_dead_block();
    int v38 = v1;
    char v39 = v18 == 4;
    char v40 = (int)v18 < 4;
    char v41 = __parity__((unsigned char)v18 - 4);
    char v42 = v18 < 4;
    char v43 = (((v18 - 4) ^ v18) & (v18 ^ 0x4)) < 0;
    char v44 = (((v18 - 4) ^ (v18 ^ 0x4)) >>> 4) & 0x1;
    int v45 = v3;
    int v46 = v39 || v40 != v43 ? 0: 1;
    int v47 = v39 || v40 != v43 ? 0: 1;
    int v48 = intermediate_1_short_circuit_and(v47, v24);
    int v49 = v1;
    int v50 = v3;
    int v51 = intermediate_2_short_circuit_or(v47, v24);
    int v52 = intermediate_10_loop_with_one_break(v18);
    int v53 = intermediate_11_loop_with_two_breaks(v18);
    int v54 = intermediate_12_loop_with_break_and_block(v18);
    int v55 = intermediate_13_loop_with_one_continue(v18);
    int v56 = intermediate_14_loop_with_two_continues(v18);
    int v57 = intermediate_15_loop_with_continue_and_block(v18);
    int v58 = intermediate_16_loop_with_breaks_and_continues(v18);
    int* ptr5 = &ptr0;
    /*NO_RETURN*/ intermediate_17_forever_loop_with_extra_statement();
}

int sub_8048336() {
    return gvar_804B008();
}

int sub_8048390() {
    return __gmon_start__();
}

int sub_80484FF() {
    return 0;
}

void sub_8048538() {
}

int sub_8048569() {
    int v0;
    int v1 = v0;
    deregister_tm_clones();
    completed.6532 = 1;
}

void sub_804857C() {
}

int sub_8048590() {
    return register_tm_clones();
}
