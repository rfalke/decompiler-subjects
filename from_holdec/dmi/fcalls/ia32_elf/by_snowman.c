
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx();

void fun_8048410();

void _init() {
    int32_t ebx1;

    __x86_get_pc_thunk_bx();
    if (*reinterpret_cast<int32_t*>(ebx1 + 0x2c8b - 4)) {
        fun_8048410();
    }
    return;
}

/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

int32_t __gmon_start__ = 0;

void fun_8048410() {
    goto __gmon_start__;
}

void* fun_80483a0(int32_t a1);

int32_t sum3_cdecl(void** a1, void* a2, void** a3);

void fun_80483b0(void** ecx, int32_t a2, void* a3, void** a4);

int32_t sum3_fastcall(void** ecx, void* a2, void* a3);

int32_t sum3_thiscall(void** ecx, void* a2, void* a3);

int32_t sum3_ms_abi(void** ecx, void** a2, void* a3, void** a4);

int32_t sum3_sysv_abi(void** ecx, void** a2, void* a3, void** a4);

int32_t sum3_stdcall(void** ecx, void** a2, void* a3, void** a4);

int32_t basic_1_multiple_calling_conventions_3_ints(void** ecx, void** a2) {
    void* eax3;
    int32_t eax4;
    int32_t eax5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;

    eax3 = fun_80483a0(0);
    eax4 = sum3_cdecl(a2, eax3, 42);
    if (eax4 > 0x7b) {
        fun_80483b0(ecx, "cdecl", eax3, 42);
    }
    eax5 = sum3_fastcall(a2, 42, eax3);
    if (eax5 > 0x7b) {
        fun_80483b0(a2, "fastcall", eax3, 42);
    }
    eax6 = sum3_thiscall(a2, eax3, 42);
    if (eax6 > 0x7b) {
        fun_80483b0(42, "thiscall", 42, 42);
    }
    eax7 = sum3_ms_abi(42, a2, eax3, 42);
    if (eax7 > 0x7b) {
        fun_80483b0(42, "ms_abi", eax3, 42);
    }
    eax8 = sum3_sysv_abi(42, a2, eax3, 42);
    if (eax8 > 0x7b) {
        fun_80483b0(42, "sysv_abi", eax3, 42);
    }
    eax9 = sum3_stdcall(42, a2, eax3, 42);
    if (eax9 > 0x7b) {
        fun_80483b0(42, "stdcall", eax3, 42);
    }
    return 0;
}

int32_t a_vararg(void** ecx, void** a2, int32_t a3, int32_t a4, int32_t a5, void** a6, int32_t a7, int32_t a8, int32_t a9);

int32_t basic_2_calling_varargs(void** ecx, void** a2, int32_t a3, int32_t a4, int32_t a5) {
    void** v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    void** v11;
    int32_t v12;
    int32_t v13;
    int32_t v14;
    void** v15;
    int32_t v16;
    int32_t v17;
    void** v18;
    int32_t v19;
    int32_t v20;

    a_vararg(ecx, v6, v7, v8, __return_address(), a2, a3, a4, a5);
    a_vararg(ecx, 1, v9, v10, 0x80487d8, v11, v12, v13, __return_address());
    a_vararg(ecx, 1, 2, v14, 0x80487d8, v15, v16, v17, __return_address());
    a_vararg(ecx, 1, 2, 3, 0x80487d8, v18, v19, v20, __return_address());
    a_vararg(ecx, 1, 2, 3, 4, 1, 2, 3, 0x80487d8);
    return 0;
}

void*** basic_3_accessing_all_registers(void** ecx, void** a2) {
    int32_t ebp3;

    return ecx + ebp3 * 2;
}

int32_t time = 0x80483a6;

int32_t basic_4_tail_call(void** a1) {
    goto time;
}

int32_t even_more_crude(int32_t a1, signed char a2, int32_t a3);

struct s0 {
    signed char f0;
    unsigned char f1;
};

int32_t crude_printf(void** ecx, struct s0* a2, int32_t a3, int32_t a4);

int32_t intermediate_1_accessing_varargs(void** ecx, void** a2) {
    int32_t eax3;

    even_more_crude("low: a %c b %s c\n", 48, "hello");
    eax3 = crude_printf(ecx, "higher: a %c b %s c\n", 48, "hello");
    return eax3 + 42;
}

int32_t sum3_uncommon();

int32_t intermediate_2_use_uncommon_registers_for_parameters(void** ecx, void** a2) {
    int32_t eax3;

    fun_80483a0(0);
    eax3 = sum3_uncommon();
    if (eax3 > 0x7b) {
        fun_80483b0(ecx, "un common", __return_address(), a2);
    }
    return 0;
}

void fun_80483c0();

int32_t intermediate_3_calling_noreturn(void** ecx, void** a2) {
    fun_80483b0(ecx, "before", __return_address(), a2);
    fun_80483c0();
    fun_80483b0(ecx, "not reached", __return_address(), a2);
    return 0;
}

int32_t intermediate_4_asm_instr_with_multiple_results(int32_t a1, int32_t a2) {
    return __intrinsic() + (__intrinsic() + __intrinsic() * 2 + __intrinsic() * 2) + __intrinsic() * 4;
}

int32_t intermediate_5_pushs_in_different_blocks(void** ecx, void** a2, int32_t a3) {
    int32_t v4;
    int32_t v5;

    if (v4 == 42) {
        v5 = reinterpret_cast<int32_t>("is 42");
    } else {
        v5 = reinterpret_cast<int32_t>("it not 42");
    }
    fun_80483b0(ecx, v5, __return_address(), a2);
    return 0;
}

int32_t advanced_1_pass_in_flags_reg_helper(void** ecx, void** a2);

int32_t advanced_1_pass_in_flags_reg(void** ecx, void** a2, int32_t a3) {
    void** v4;

    advanced_1_pass_in_flags_reg_helper(ecx, v4);
    return 0;
}

int32_t advanced_2_return_in_flags_reg_helper(void* a1);

int32_t advanced_2_return_in_flags_reg(void** ecx, void** a2, int32_t a3) {
    int1_t less_or_equal4;

    advanced_2_return_in_flags_reg_helper(__return_address());
    if (!less_or_equal4) {
        fun_80483b0(ecx, "is above 2", __return_address(), a2);
    }
    return 0;
}

int32_t advanced_3_uneven_stack(void** ecx, void** a2, int32_t a3, int32_t a4) {
    int32_t v5;
    void* esi6;

    if (a4 == 42) {
        v5 = reinterpret_cast<int32_t>("you should not see this");
    } else {
        v5 = reinterpret_cast<int32_t>("it not 42");
    }
    fun_80483b0(ecx, v5, esi6, __return_address());
    if (a4 == 42) {
    }
    goto a2;
}

int32_t fputs(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;

    eax1 = 3;
    if (!1 && (eax1 = 0, !1)) {
        eax1 = fputs(0x804b02c, v2);
    }
    return eax1;
}

int32_t sum3_fastcall(void** ecx, void* a2, void* a3) {
    int32_t edx4;

    return reinterpret_cast<int32_t>(ecx) + edx4 * 2 + (reinterpret_cast<int32_t>(a2) + reinterpret_cast<int32_t>(a2) * 2) + 2;
}

int32_t sum3_thiscall(void** ecx, void* a2, void* a3) {
    return reinterpret_cast<int32_t>(ecx) + reinterpret_cast<int32_t>(a2) * 2 + (reinterpret_cast<int32_t>(a3) + reinterpret_cast<int32_t>(a3) * 2) + 3;
}

int32_t sum3_ms_abi(void** ecx, void** a2, void* a3, void** a4) {
    return reinterpret_cast<int32_t>(a2) + reinterpret_cast<int32_t>(a3) * 2 + (reinterpret_cast<int32_t>(a4) + reinterpret_cast<int32_t>(a4) * 2) + 4;
}

int32_t sum3_sysv_abi(void** ecx, void** a2, void* a3, void** a4) {
    return reinterpret_cast<int32_t>(a2) + reinterpret_cast<int32_t>(a3) * 2 + (reinterpret_cast<int32_t>(a4) + reinterpret_cast<int32_t>(a4) * 2) + 5;
}

int32_t sum3_stdcall(void** ecx, void** a2, void* a3, void** a4) {
    return reinterpret_cast<int32_t>(a2) + reinterpret_cast<int32_t>(a3) * 2 + (reinterpret_cast<int32_t>(a4) + reinterpret_cast<int32_t>(a4) * 2) + 6;
}

int32_t puts = 0x80483b6;

void fun_80483b0(void** ecx, int32_t a2, void* a3, void** a4) {
    goto puts;
}

int32_t putchar = 0x80483f6;

void fun_80483f0(int32_t a1, void* a2) {
    goto putchar;
}

void* fun_80483a0(int32_t a1) {
    goto time;
}

int32_t sum3_cdecl(void** a1, void* a2, void** a3) {
    return reinterpret_cast<int32_t>(a1) + reinterpret_cast<int32_t>(a2) * 2 + (reinterpret_cast<int32_t>(a3) + reinterpret_cast<int32_t>(a3) * 2) + 1;
}

int32_t a_vararg(void** ecx, void** a2, int32_t a3, int32_t a4, int32_t a5, void** a6, int32_t a7, int32_t a8, int32_t a9) {
    void* v10;
    void** v11;

    fun_80483b0(ecx, "a_vararg called", v10, v11);
    return 0;
}

int32_t sum3_uncommon() {
    int32_t esi1;
    int32_t edi2;
    int32_t edi3;
    int32_t ebp4;
    int32_t ebp5;
    int32_t ebp6;

    return esi1 + edi2 + edi3 + ebp4 + ebp5 + ebp6 + 10;
}

void* stdout = reinterpret_cast<void*>(0);

void fun_8048400(int32_t a1, void* a2);

int32_t fun_80483d0(int32_t a1, void* a2);

int32_t even_more_crude(int32_t a1, signed char a2, int32_t a3) {
    void* v4;
    void* v5;
    int32_t eax6;

    fun_80483f0(static_cast<int32_t>(a2), v4);
    v5 = stdout;
    fun_8048400(a3, v5);
    eax6 = fun_80483d0(a3, v5);
    return eax6 + 1;
}

struct s1 {
    unsigned char f0;
    signed char f1;
};

int32_t crude_printf(void** ecx, struct s0* a2, int32_t a3, int32_t a4) {
    struct s0* ebp5;
    int32_t eax6;
    int32_t ebx7;
    uint32_t eax8;
    struct s1* edi9;
    void* v10;
    signed char v11;
    int32_t v12;
    int32_t eax13;
    void** v14;
    struct s0* edi15;

    ebp5 = a2;
    eax6 = ebp5->f0;
    if (!*reinterpret_cast<signed char*>(&eax6)) {
        ebx7 = 0;
    } else {
        ebx7 = 0;
        while (1) {
            if (*reinterpret_cast<signed char*>(&eax6) == 37) {
                eax8 = ebp5->f1;
                edi9 = reinterpret_cast<struct s1*>(&ebp5->f1);
                if (*reinterpret_cast<signed char*>(&eax8) == 37) {
                    ++ebx7;
                    fun_80483f0(37, v10);
                } else {
                    if (*reinterpret_cast<signed char*>(&eax8) == 99) {
                        ++ebx7;
                        fun_80483f0(static_cast<int32_t>(v11), v10);
                    } else {
                        if (*reinterpret_cast<signed char*>(&eax8) == 0x73) {
                            v10 = stdout;
                            fun_8048400(v12, v10);
                            eax13 = fun_80483d0(v12, v10);
                            ebx7 = ebx7 + eax13;
                        } else {
                            fun_80483b0(ecx, "Not implemented", v10, v14);
                        }
                    }
                }
                eax6 = edi9->f1;
                ebp5 = reinterpret_cast<struct s0*>(&edi9->f1);
                if (!*reinterpret_cast<signed char*>(&eax6)) 
                    break;
            } else {
                edi15 = ebp5;
                ++ebx7;
                ebp5 = reinterpret_cast<struct s0*>(&edi15->f1);
                fun_80483f0(eax6, v10);
                eax6 = reinterpret_cast<signed char>(edi15->f1);
                if (!*reinterpret_cast<signed char*>(&eax6)) 
                    break;
            }
        }
    }
    return ebx7;
}

int32_t exit = 0x80483c6;

void fun_80483c0() {
    goto exit;
}

int32_t advanced_1_pass_in_flags_reg_helper(void** ecx, void** a2) {
    int1_t less_or_equal3;

    if (!less_or_equal3) {
        fun_80483b0(ecx, "is above 2", __return_address(), a2);
    }
    return 0;
}

int32_t advanced_2_return_in_flags_reg_helper(void* a1) {
    return 0;
}

int32_t __libc_start_main = 0x80483e6;

void fun_80483e0(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t fputs = 0x8048406;

void fun_8048400(int32_t a1, void* a2) {
    goto fputs;
}

int32_t strlen = 0x80483d6;

int32_t fun_80483d0(int32_t a1, void* a2) {
    goto strlen;
}

int32_t main(void** a1, signed char** a2) {
    void** ecx3;
    int32_t eax4;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t eax8;
    void*** eax9;
    int32_t eax10;
    int32_t eax11;
    int32_t eax12;
    int32_t eax13;
    int32_t eax14;
    int32_t eax15;
    int32_t eax16;
    int32_t eax17;
    int32_t v18;
    int32_t eax19;

    ecx3 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    eax4 = basic_1_multiple_calling_conventions_3_ints(ecx3, a1);
    eax8 = basic_2_calling_varargs(ecx3, a1, v5, v6, v7);
    eax9 = basic_3_accessing_all_registers(ecx3, a1);
    eax10 = basic_4_tail_call(a1);
    eax11 = intermediate_1_accessing_varargs(ecx3, a1);
    eax12 = intermediate_2_use_uncommon_registers_for_parameters(ecx3, a1);
    eax13 = intermediate_3_calling_noreturn(ecx3, a1);
    eax14 = intermediate_4_asm_instr_with_multiple_results(1, 1);
    eax15 = intermediate_5_pushs_in_different_blocks(ecx3, a1, 1);
    eax16 = advanced_1_pass_in_flags_reg(ecx3, a1, 1);
    eax17 = advanced_2_return_in_flags_reg(ecx3, a1, 1);
    eax19 = advanced_3_uneven_stack(ecx3, a1, 1, v18);
    return eax19 + (eax4 + eax8 + reinterpret_cast<int32_t>(eax9) + eax10 + eax11 + eax12 + eax13 + eax14 + eax15 + eax16 + eax17) + **a2;
}

void _fini() {
    __x86_get_pc_thunk_bx();
    return;
}

void fun_804839c() {
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
    fun_80483e0(main, __return_address(), esp1, __libc_csu_init, 0x8048b30, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

int32_t __JCR_END__ = 0;

int32_t frame_dummy() {
    int32_t edx1;
    int32_t v2;
    int32_t eax3;

    edx1 = __JCR_END__;
    if (!(!edx1 || 1)) {
        fputs(0x804af10, v2);
    }
    eax3 = 0;
    if (!1 && !1) {
        eax3 = fputs(0x804b02c, 0);
    }
    return eax3;
}

void fun_804859d() {
}

void fun_804889c() {
}

void fun_80489fc() {
}

void fun_8048b2d() {
    return;
}

int32_t g804b008 = 0;

void fun_80483a6() {
    goto g804b008;
}

void fun_804881d() {
}

void fun_8048a21() {
    goto intermediate_5_pushs_in_different_blocks;
}

void fun_804852c() {
}

/* completed.6532 */
signed char completed_6532 = 0;

int32_t fun_8048565() {
    int1_t zf1;
    int32_t eax2;

    zf1 = completed_6532 == 0;
    if (zf1) {
        eax2 = deregister_tm_clones();
        completed_6532 = 1;
    }
    return eax2;
}

void fun_80485f1() {
    goto sum3_thiscall;
}

void fun_804878d() {
}

void fun_8048615() {
}

void fun_8048775() {
}

void fun_8048637() {
}

void fun_804875a() {
}

void fun_8048657() {
}

void fun_8048742() {
}

void fun_8048679() {
}

void fun_80483b6() {
    goto 0x8048390;
}

void fun_80488c5() {
}

void fun_80483f6() {
    goto 0x8048390;
}

void __libc_csu_init(int32_t a1, int32_t a2) {
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t esi6;
    int32_t edi7;
    int32_t esi8;

    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x2527;
    ebp5 = a1;
    _init();
    esi6 = ebx3 - 0xf4 - (ebx3 - 0xf8) >> 2;
    if (esi6) {
        edi7 = 0;
        esi8 = esi6;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi7 * 4 - 0xf8)(ebp5, a1, a2, 0x8048af1);
            ++edi7;
        } while (esi8 != edi7);
    }
    return;
}

void fun_80485d7() {
}

void fun_80487a5() {
}

void fun_80487c3() {
}

void fun_80489c1() {
    goto intermediate_2_use_uncommon_registers_for_parameters;
}

void fun_8048931() {
    goto intermediate_1_accessing_varargs;
}

void fun_80483c6() {
    goto 0x8048390;
}

void fun_80483e6() {
    goto 0x8048390;
}

void fun_8048406() {
    goto 0x8048390;
}

void fun_80483d6() {
    goto 0x8048390;
}

void fun_80488da() {
}
