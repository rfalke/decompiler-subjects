
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx();

void fun_8048390();

void _init() {
    int32_t ebx1;

    __x86_get_pc_thunk_bx();
    if (*reinterpret_cast<int32_t*>(ebx1 + 0x2cef - 4)) {
        fun_8048390();
    }
    return;
}

/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

int32_t __gmon_start__ = 0;

void fun_8048390() {
    goto __gmon_start__;
}

void fun_8048350(int32_t a1);

int32_t basic_1_if(uint32_t a1) {
    if (a1 == 42) {
        fun_8048350("if block");
        return 0;
    } else {
        return 0;
    }
}

int32_t basic_2_if_else(uint32_t a1) {
    if (a1 == 42) {
        fun_8048350("if block");
        return 0;
    } else {
        fun_8048350("else block");
        return 0;
    }
}

int32_t basic_3_if_elseif(uint32_t a1) {
    if (a1 == 42) {
        fun_8048350("if block");
    } else {
        if (a1 == 43) {
            fun_8048350("else-if block");
            return 0;
        }
    }
    return 0;
}

int32_t basic_4_if_elseif_else(uint32_t a1) {
    if (a1 == 42) {
        fun_8048350("if block");
    } else {
        if (a1 == 43) {
            fun_8048350("else-if block");
            return 0;
        } else {
            fun_8048350("else block");
        }
    }
    return 0;
}

int32_t basic_5_head_controlled_loop(uint32_t a1) {
    uint32_t ebx2;

    ebx2 = a1;
    fun_8048350("before");
    while (ebx2 != 42) {
        ++ebx2;
        fun_8048350("body");
    }
    fun_8048350("after");
    return 0;
}

int32_t basic_6_tail_controlled_loop(uint32_t a1) {
    uint32_t ebx2;

    ebx2 = a1;
    fun_8048350("before");
    do {
        ++ebx2;
        fun_8048350("body");
    } while (ebx2 != 42);
    fun_8048350("after");
    return 0;
}

void fun_8048370(int32_t a1);

int32_t basic_7_for_loop(uint32_t a1) {
    int32_t ebx2;
    int32_t v3;

    ebx2 = 48;
    do {
        v3 = ebx2;
        ++ebx2;
        fun_8048370(v3);
    } while (ebx2 != 58);
    return 0;
}

int32_t basic_8_forever_loop(uint32_t a1) {
    if (a1 == 42) {
        while (1) {
            fun_8048350("loop body");
        }
    } else {
        return 0;
    }
}

int32_t basic_9_dead_block() {
    fun_8048350("entry");
    fun_8048350("exit");
    return 0;
}

uint32_t fun_8048380(int32_t a1);

int32_t intermediate_1_short_circuit_and(int32_t a1, uint32_t a2) {
    int32_t v3;
    uint32_t eax4;

    eax4 = fun_8048380(v3);
    if (a1 && eax4 == a2) {
        fun_8048350("both true");
    }
    return 0;
}

int32_t intermediate_2_short_circuit_or(int32_t ecx, int32_t a2, uint32_t a3) {
    int32_t v4;
    uint32_t eax5;

    eax5 = fun_8048380(v4);
    if (a2 || eax5 == a3) {
        fun_8048350("at least one is true");
        return 0;
    } else {
        return 0;
    }
}

uint32_t fun_8048340(int32_t a1);

int32_t intermediate_10_loop_with_one_break(int32_t ecx, uint32_t a2, uint32_t a3) {
    uint32_t ebx4;
    uint32_t eax5;

    ebx4 = a2;
    while (fun_8048350("head"), eax5 = fun_8048340(0), eax5 != ebx4) {
        fun_8048350("tail");
    }
    return 0;
}

int32_t intermediate_11_loop_with_two_breaks(int32_t ecx, uint32_t a2, uint32_t a3) {
    uint32_t ebx4;
    uint32_t eax5;

    ebx4 = a2;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx4) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ebx4 == 0))) {
        do {
            fun_8048350("head");
            eax5 = fun_8048340(0);
            if (eax5 == ebx4) 
                break;
            fun_8048350("tail");
            --ebx4;
        } while (ebx4);
    }
    return 0;
}

int32_t intermediate_12_loop_with_break_and_block(int32_t ecx, uint32_t a2, uint32_t a3) {
    uint32_t ebx4;
    uint32_t eax5;
    uint32_t eax6;

    ebx4 = a2;
    while (fun_8048350("head"), eax5 = fun_8048340(0), eax5 != ebx4) {
        fun_8048350("barrier");
        eax6 = fun_8048380("barrier");
        if (ebx4 == eax6) 
            goto addr_8048899_4;
        fun_8048350("tail");
    }
    fun_8048350("will break");
    addr_8048899_4:
    return 0;
}

int32_t intermediate_13_loop_with_one_continue(int32_t ecx, uint32_t a2, uint32_t a3) {
    uint32_t ebx4;
    uint32_t eax5;

    ebx4 = a2;
    if (reinterpret_cast<int32_t>(ebx4) <= reinterpret_cast<int32_t>(0x7b)) {
        return 0;
    } else {
        while (1) {
            fun_8048350("head");
            eax5 = fun_8048340(0);
            if (ebx4 == eax5) 
                continue;
            fun_8048350("tail");
        }
    }
}

int32_t intermediate_14_loop_with_two_continues(int32_t ecx, uint32_t a2, uint32_t a3) {
    uint32_t ebx4;
    uint32_t eax5;
    uint32_t eax6;

    ebx4 = a2;
    if (reinterpret_cast<int32_t>(ebx4) <= reinterpret_cast<int32_t>(0x7b)) {
        return 0;
    } else {
        while (1) {
            fun_8048350("head");
            eax5 = fun_8048340(0);
            if (ebx4 == eax5) 
                continue;
            fun_8048350("barrier");
            eax6 = fun_8048380("barrier");
            if (ebx4 == eax6) 
                continue;
            fun_8048350("tail");
        }
    }
}

int32_t intermediate_15_loop_with_continue_and_block(int32_t ecx, uint32_t a2, uint32_t a3) {
    uint32_t ebx4;
    uint32_t eax5;
    uint32_t eax6;

    ebx4 = a2;
    if (reinterpret_cast<int32_t>(ebx4) <= reinterpret_cast<int32_t>(0x7b)) {
        return 0;
    } else {
        while (1) {
            fun_8048350("head");
            eax5 = fun_8048340(0);
            if (ebx4 == eax5) {
                fun_8048350("will continue");
            } else {
                fun_8048350("barrier");
                eax6 = fun_8048380("barrier");
                if (ebx4 == eax6) 
                    continue;
                fun_8048350("tail");
            }
        }
    }
}

int32_t intermediate_16_loop_with_breaks_and_continues(int32_t ecx, uint32_t a2, uint32_t a3) {
    uint32_t ebx4;
    uint32_t eax5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t eax8;

    ebx4 = a2;
    while (1) {
        fun_8048350("head");
        eax5 = fun_8048340(0);
        if (eax5 + 1 == ebx4) 
            continue;
        fun_8048350("after first continue");
        eax6 = fun_8048340(0);
        if (ebx4 == eax6 + 2) 
            break;
        fun_8048350("after first break");
        eax7 = fun_8048340(0);
        if (ebx4 == eax7 + 3) 
            continue;
        fun_8048350("after second continue");
        eax8 = fun_8048340(0);
        if (ebx4 == eax8 + 4) 
            break;
        fun_8048350("after second break; tail");
    }
    return 0;
}

void intermediate_17_forever_loop_with_extra_statement(int32_t ecx, uint32_t a2, uint32_t a3) {
    while (1) {
    }
}

int32_t intermediate_20_nested_loops(int32_t ecx, uint32_t a2, uint32_t a3) {
    uint32_t ebx4;
    uint32_t eax5;
    int32_t v6;
    uint32_t eax7;

    ebx4 = a2;
    fun_8048350("before");
    do {
        fun_8048350("outer loop");
        do {
            fun_8048350("inner loop");
            eax5 = fun_8048340(0);
        } while (eax5 != ebx4);
        eax7 = fun_8048380(v6);
    } while (ebx4 != eax7);
    fun_8048350("after");
    return 0;
}

int32_t intermediate_30_switch_case(int32_t ecx, uint32_t a2, uint32_t a3) {
    switch (a2) {
    default:
        fun_8048350("some other value");
        break;
    case 0:
        fun_8048350("0");
        break;
    case 1:
        fun_8048350("1");
        break;
    case 2:
    case 3:
        fun_8048350("2 or 3");
        break;
    case 4:
        fun_8048350("4");
        break;
    case 5:
        fun_8048350("5");
        break;
    case 6:
        fun_8048350("6");
        break;
    case 7:
        fun_8048350("7 with fall through");
    case 8:
        fun_8048350("8");
        break;
    case 9:
        fun_8048350("9");
    }
    fun_8048350("common exit");
    return 0;
}

int32_t advanced_1_loop_with_multiple_entries(int32_t ecx, uint32_t a2, uint32_t a3) {
    uint32_t ebx4;

    ebx4 = a2;
    if (ebx4 == 42) {
        ebx4 = 41;
        while (fun_8048350("body 2"), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx4) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ebx4 == 0))) {
            addr_8048c41_4:
            --ebx4;
            fun_8048350("body 1");
        }
    } else {
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx4) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ebx4 == 0))) 
            goto addr_8048c41_4;
    }
    return 0;
}

int32_t advanced_2_loop_with_multiple_exits(int32_t ecx, uint32_t a2, uint32_t a3) {
    uint32_t ebx4;
    uint32_t eax5;
    uint32_t eax6;

    ebx4 = a2;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx4) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ebx4 == 0))) {
        do {
            fun_8048350("body 1");
            eax5 = fun_8048340(0);
            if (eax5 == 1) 
                break;
            fun_8048350("body 2");
            eax6 = fun_8048340(0);
            if (eax6 == 2) 
                goto addr_8048d10_4;
            --ebx4;
        } while (ebx4);
        goto addr_8048cf0_6;
    } else {
        goto addr_8048cf0_6;
    }
    fun_8048350("took exit 1");
    return 0;
    addr_8048d10_4:
    fun_8048350("took exit 2");
    return 0;
    addr_8048cf0_6:
    fun_8048350("normal exit");
    return 0;
}

int32_t advanced_10_irreducible(int32_t ecx, uint32_t a2, uint32_t a3) {
    uint32_t eax4;
    uint32_t eax5;

    fun_8048350("b1");
    eax4 = fun_8048340(0);
    if (eax4 == a2 || (fun_8048350("b2"), eax5 = fun_8048340(0), eax5 != a2 + 1)) {
        fun_8048350("b3");
    } else {
        fun_8048350("b4");
    }
    fun_8048350("b5");
    return 0;
}

int32_t advanced_11_nested_loops_complex_condition(int32_t ecx, uint32_t a2, uint32_t a3) {
    uint32_t eax4;
    uint32_t ebx5;
    uint32_t esi6;
    uint32_t edi7;
    uint32_t eax8;
    uint32_t eax9;
    uint32_t eax10;

    fun_8048350("b0");
    eax4 = fun_8048340(0);
    if (eax4 == a2) {
        ebx5 = eax4 + 2;
        esi6 = eax4 + 3;
        edi7 = eax4;
        do {
            fun_8048350("b2");
            do {
                fun_8048350("b3");
                eax8 = fun_8048340(0);
                if (eax8 == ebx5) 
                    break;
                eax9 = fun_8048340(0);
            } while (eax9 == esi6);
            goto addr_8048de5_6;
            fun_8048350("b1");
            eax10 = fun_8048340(0);
        } while (eax10 == edi7 + 1);
    } else {
        addr_8048de5_6:
        fun_8048350("b9");
        return 0;
    }
    goto addr_8048de5_6;
}

int32_t advanced_12_nested_if_in_loop(int32_t ecx, uint32_t a2, uint32_t a3) {
    uint32_t ebx4;
    uint32_t edi5;
    uint32_t esi6;
    uint32_t eax7;
    uint32_t eax8;
    uint32_t eax9;

    ebx4 = a2;
    edi5 = ebx4 + 1;
    fun_8048350("b0");
    esi6 = ebx4 + 2;
    while (1) {
        fun_8048350("b1");
        eax7 = fun_8048340(0);
        if (eax7 == ebx4) {
            fun_8048350("b2");
            eax8 = fun_8048340(0);
            if (eax8 != edi5) 
                break;
        } else {
            fun_8048350("b3");
            eax9 = fun_8048340(0);
            if (eax9 != esi6) 
                goto addr_8048ee0_5;
        }
    }
    addr_8048ee0_5:
    fun_8048350("b4");
    return 0;
}

int32_t advanced_20_jump_table_on_stack(int32_t ecx, uint32_t a2, uint32_t a3) {
    if (a2 > 5) {
        fun_8048350("is something else");
        return 0;
    } else {
        goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 44 + a2 * 4 + 8);
    }
}

int32_t advanced_21_computed_jumps(int32_t ecx, uint32_t a2, uint32_t a3) {
    int32_t eax4;

    fun_8048350("start");
    if (a2 > 2) {
        fun_8048350("is something else");
        return 0;
    } else {
        if (!a2) {
            fun_8048350("is 0");
            return 0;
        } else {
            eax4 = 24;
            if (a2 == 2) {
                eax4 = 56;
            }
            goto eax4 + 0x8049098;
        }
    }
}

int32_t rand(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;

    eax1 = 3;
    if (!1 && (eax1 = 0, !1)) {
        eax1 = rand(0x804b024, v2);
    }
    return eax1;
}

int32_t puts = 0x8048356;

void fun_8048350(int32_t a1) {
    goto puts;
}

int32_t time = 0x8048346;

uint32_t fun_8048340(int32_t a1) {
    goto time;
}

int32_t rand = 0x8048386;

uint32_t fun_8048380(int32_t a1) {
    goto rand;
}

int32_t putchar = 0x8048376;

void fun_8048370(int32_t a1) {
    goto putchar;
}

int32_t __libc_start_main = 0x8048366;

void fun_8048360(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t main(uint32_t a1, signed char** a2) {
    uint32_t esi3;
    int32_t eax4;

    basic_1_if(a1);
    esi3 = ~a1 & 1;
    basic_2_if_else(a1);
    basic_3_if_elseif(a1);
    basic_4_if_elseif_else(a1);
    basic_5_head_controlled_loop(a1);
    basic_6_tail_controlled_loop(a1);
    basic_7_for_loop(a1);
    basic_8_forever_loop(a1);
    basic_9_dead_block();
    eax4 = 0;
    *reinterpret_cast<unsigned char*>(&eax4) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(a1) > reinterpret_cast<int32_t>(4));
    intermediate_1_short_circuit_and(eax4, esi3);
    intermediate_2_short_circuit_or(eax4, eax4, esi3);
    intermediate_10_loop_with_one_break(eax4, a1, esi3);
    intermediate_11_loop_with_two_breaks(eax4, a1, esi3);
    intermediate_12_loop_with_break_and_block(eax4, a1, esi3);
    intermediate_13_loop_with_one_continue(eax4, a1, esi3);
    intermediate_14_loop_with_two_continues(eax4, a1, esi3);
    intermediate_15_loop_with_continue_and_block(eax4, a1, esi3);
    intermediate_16_loop_with_breaks_and_continues(eax4, a1, esi3);
    intermediate_17_forever_loop_with_extra_statement(eax4, a1, esi3);
    intermediate_20_nested_loops(eax4, a1, esi3);
    intermediate_30_switch_case(eax4, a1, esi3);
    advanced_1_loop_with_multiple_entries(eax4, a1, esi3);
    advanced_2_loop_with_multiple_exits(eax4, a1, esi3);
    advanced_10_irreducible(eax4, a1, esi3);
    advanced_11_nested_loops_complex_condition(eax4, a1, esi3);
    advanced_12_nested_if_in_loop(eax4, a1, esi3);
    advanced_20_jump_table_on_stack(eax4, a1, esi3);
    advanced_21_computed_jumps(eax4, a1, esi3);
    return static_cast<int32_t>(**a2);
}

void _fini() {
    __x86_get_pc_thunk_bx();
    return;
}

void fun_804833c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void __libc_csu_init(int32_t a1, int32_t a2);

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_8048360(main, __return_address(), esp1, __libc_csu_init, 0x8049290, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

int32_t __JCR_END__ = 0;

int32_t frame_dummy() {
    int32_t edx1;
    int32_t v2;
    int32_t eax3;

    edx1 = __JCR_END__;
    if (!(!edx1 || 1)) {
        rand(0x804af10, v2);
    }
    eax3 = 0;
    if (!1 && !1) {
        eax3 = rand(0x804b024, 0);
    }
    return eax3;
}

void fun_804858d() {
}

void fun_8048637() {
}

void fun_80486a7() {
}

void fun_804871c() {
}

void fun_804876c() {
}

void fun_80487d7() {
}

void fun_804882c() {
}

void fun_80489bc() {
}

void fun_8048a91() {
}

void fun_8048b0d() {
}

void fun_8048b27() {
}

void fun_8048d9c() {
}

void fun_8048dfc() {
}

void fun_8048e79() {
}

void fun_8048ef6() {
}

void fun_8048f22() {
}

void fun_80491a1() {
    goto basic_8_forever_loop;
}

void fun_804928d() {
    return;
}

void fun_80491ea() {
    fun_8048350("not reached");
}

void fun_804879a() {
}

void fun_804883a() {
}

int32_t fun_8049216() {
    fun_8048350("unreached");
    return 0;
}

void fun_804851c() {
}

signed char __TMC_END__ = 0;

int32_t fun_8048555() {
    int1_t zf1;
    int32_t eax2;

    zf1 = __TMC_END__ == 0;
    if (zf1) {
        eax2 = deregister_tm_clones();
        __TMC_END__ = 1;
    }
    return eax2;
}

void fun_80485d6() {
}

int32_t g804b008 = 0;

void fun_8048356() {
    goto g804b008;
}

void fun_8048616() {
}

void fun_8048656() {
}

void fun_80486c6() {
}

void fun_804874c() {
}

void fun_8048786() {
}

void fun_8048346() {
    goto 0x8048330;
}

void fun_80488e9() {
}

void fun_8048386() {
    goto 0x8048330;
}

void fun_8048952() {
}

void fun_8048b92() {
}

void fun_8048baa() {
}

void fun_8048bc2() {
}

void fun_8048bdd() {
}

void fun_8048bf5() {
}

void fun_8048c0d() {
}

void fun_8048b7a() {
}

void fun_8048d07() {
}

void fun_8048db2() {
}

void fun_8048e1a() {
}

void fun_8048f86() {
    int32_t v1;

    fun_8048350("is 0");
    goto v1;
}

void fun_80490b0() {
    int32_t v1;

    fun_8048350("is 1");
    goto v1;
}

void fun_8049092() {
}

void fun_8049153() {
}

void fun_8048672() {
}

void fun_80486e2() {
}

void fun_8048376() {
    goto 0x8048330;
}

void fun_80489d9() {
}

void __libc_csu_init(int32_t a1, int32_t a2) {
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t esi6;
    int32_t edi7;
    int32_t esi8;

    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x1dc7;
    ebp5 = a1;
    _init();
    esi6 = ebx3 - 0xf4 - (ebx3 - 0xf8) >> 2;
    if (esi6) {
        edi7 = 0;
        esi8 = esi6;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi7 * 4 - 0xf8)(ebp5, a1, a2, 0x8049251);
            ++edi7;
        } while (esi8 != edi7);
    }
    return;
}

void fun_8048c25() {
}

void fun_8048c77() {
}

void fun_8048366() {
    goto 0x8048330;
}

void fun_8048b64() {
}

void fun_8048d27() {
}

void fun_8048fa6() {
    int32_t v1;

    fun_8048350("is 5");
    goto v1;
}

void fun_80490c7() {
    int32_t v1;

    fun_8048350("is 2");
    goto v1;
}

void fun_8048fc6() {
    int32_t v1;

    fun_8048350("is 4");
    goto v1;
}

void fun_80490e7() {
}

void fun_8048fe6() {
    int32_t v1;

    fun_8048350("is 3");
    goto v1;
}

void fun_8049006() {
    int32_t v1;

    fun_8048350("is 2");
    goto v1;
}

void fun_8049026() {
    int32_t v1;

    fun_8048350("is 1");
    goto v1;
}

void fun_8049046() {
}
