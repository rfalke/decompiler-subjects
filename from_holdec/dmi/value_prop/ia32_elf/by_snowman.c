
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx();

void fun_80483c0();

void _init() {
    int32_t ebx1;

    __x86_get_pc_thunk_bx();
    if (*reinterpret_cast<int32_t*>(ebx1 + 0x1ccf - 4)) {
        fun_80483c0();
    }
    return;
}

/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

int32_t __gmon_start__ = 0;

void fun_80483c0() {
    goto __gmon_start__;
}

void fun_80483b0(uint32_t a1);

int32_t basic_1_reg_in_block(int32_t a1) {
    fun_80483b0(a1 + 48);
    return 0;
}

int32_t basic_2_reg_in_prev_block(int32_t a1) {
    fun_80483b0(a1 + 1 + 48);
    return 0;
}

int32_t basic_3_reg_cond_overwrite(int32_t a1) {
    uint32_t ebx2;

    ebx2 = 65;
    if (a1 != 42) {
        ebx2 = 97;
    }
    fun_80483b0(a1 + ebx2);
    return 0;
}

int32_t basic_4_reg_cond_change(int32_t a1) {
    uint32_t ebx2;

    ebx2 = 65;
    if (a1 != 42) {
        ebx2 = 97;
    }
    fun_80483b0(a1 + ebx2);
    return 0;
}

int32_t basic_5_reg_different_values(int32_t a1) {
    uint32_t ebx2;

    if (a1 == 42) {
        ebx2 = 97;
    } else {
        ebx2 = 65;
    }
    fun_80483b0(a1 + ebx2);
    return 0;
}

int32_t basic_6_reg_overwrite_in_block(int32_t a1) {
    fun_80483b0(a1 + 48);
    return 0;
}

uint32_t global_var = 0;

int32_t intermediate_1_mem_in_block(int32_t a1) {
    uint32_t tmp32_2;

    global_var = 48;
    tmp32_2 = a1 + global_var;
    fun_80483b0(tmp32_2);
    return 0;
}

int32_t intermediate_2_mem_in_prev_block(int32_t a1) {
    uint32_t tmp32_2;

    global_var = 48;
    tmp32_2 = a1 + 1 + global_var;
    fun_80483b0(tmp32_2);
    return 0;
}

int32_t intermediate_3_mem_cond_overwrite(int32_t a1) {
    uint32_t tmp32_2;

    global_var = 65;
    if (a1 != 42) {
        global_var = 97;
    }
    tmp32_2 = a1 + global_var;
    fun_80483b0(tmp32_2);
    return 0;
}

int32_t intermediate_4_mem_cond_change(int32_t a1) {
    uint32_t tmp32_2;
    uint32_t tmp32_3;

    global_var = 65;
    if (a1 != 42) {
        tmp32_2 = global_var + 32;
        global_var = tmp32_2;
    }
    tmp32_3 = a1 + global_var;
    fun_80483b0(tmp32_3);
    return 0;
}

int32_t intermediate_5_mem_different_values(int32_t a1) {
    uint32_t tmp32_2;

    if (a1 == 42) {
        global_var = 97;
    } else {
        global_var = 65;
    }
    tmp32_2 = a1 + global_var;
    fun_80483b0(tmp32_2);
    return 0;
}

int32_t intermediate_6_mem_overwrite_in_block(int32_t a1) {
    uint32_t tmp32_2;

    global_var = 0x7b;
    global_var = 48;
    tmp32_2 = a1 + global_var;
    fun_80483b0(tmp32_2);
    return 0;
}

signed char global_char1 = 0;

signed char global_char2 = 0;

int32_t intermediate_10_subregs(int32_t a1) {
    int16_t ax2;
    int32_t ebx3;
    int32_t eax4;
    signed char al5;

    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ax2) + 1) = global_char1;
    *reinterpret_cast<signed char*>(&ax2) = global_char2;
    *reinterpret_cast<int16_t*>(&ebx3) = ax2;
    eax4 = ebx3;
    al5 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax4) + *reinterpret_cast<signed char*>(&eax4));
    fun_80483b0(reinterpret_cast<unsigned char>(al5 + al5) + reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax4) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax4) + 1)));
    return 0;
}

int32_t fun_8048360(int32_t a1);

uint32_t advanced_1_writes_can_be_omitted_for_non_mem_access_calls(int32_t a1) {
    int32_t eax2;
    uint32_t edx3;

    global_var = 1;
    eax2 = fun_8048360(a1);
    global_var = 2;
    edx3 = global_var;
    return eax2 + edx3;
}

int32_t fun_8048390(signed char* a1);

uint32_t advanced_2_mem_values_can_be_propagated_for_non_write_calls(signed char* a1) {
    int32_t eax2;
    uint32_t eax3;

    global_var = 1;
    eax2 = fun_8048390(a1);
    eax3 = global_var;
    return eax2 + eax3;
}

void fun_8048370(int32_t a1);

int32_t advanced_3_value_range_analysis(int32_t a1) {
    uint32_t eax2;
    uint32_t eax3;
    uint32_t eax4;
    uint32_t eax5;
    uint32_t eax6;
    uint32_t eax7;

    if (a1 > 10) {
        if (a1 <= 10) {
            eax2 = 97;
        } else {
            eax2 = 98;
        }
        fun_80483b0(eax2);
        if (a1 > 10) {
            eax3 = 65;
        } else {
            eax3 = 66;
        }
        fun_80483b0(eax3);
        if (a1 <= 9) {
            eax4 = 48;
        } else {
            eax4 = 49;
        }
        fun_80483b0(eax4);
        if (a1 > 8) {
            fun_8048370(">10");
        }
    }
    if (a1 == 42) {
        if (a1 != 42) {
            eax5 = 97;
        } else {
            eax5 = 98;
        }
        fun_80483b0(eax5);
        if (a1 == 42) {
            eax6 = 65;
        } else {
            eax6 = 66;
        }
        fun_80483b0(eax6);
        if (a1 != 100) {
            eax7 = 48;
        } else {
            eax7 = 49;
        }
        fun_80483b0(eax7);
        if (a1 != 0x65) {
            fun_8048370("= 42");
        }
    }
    return 0;
}

int32_t exit = 0x8048386;

int32_t fun_8048380() {
    goto exit;
}

int32_t __libc_start_main = 0x80483a6;

void fun_80483a0(int32_t a1, uint32_t a2, void* a3, int32_t a4, int32_t a5, uint32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t putchar(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;

    eax1 = 3;
    if (!1 && (eax1 = 0, !1)) {
        eax1 = putchar(0x804a028, v2);
    }
    return eax1;
}

int32_t puts = 0x8048376;

void fun_8048370(int32_t a1) {
    goto puts;
}

int32_t putchar = 0x80483b6;

void fun_80483b0(uint32_t a1) {
    goto putchar;
}

int32_t abs = 0x8048366;

int32_t fun_8048360(int32_t a1) {
    goto abs;
}

int32_t strlen = 0x8048396;

int32_t fun_8048390(signed char* a1) {
    goto strlen;
}

void __libc_csu_init(int32_t a1, int32_t a2);

void main(int32_t a1, signed char** a2) {
    int32_t eax3;
    int32_t eax4;
    int32_t eax5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    int32_t eax10;
    int32_t eax11;
    int32_t eax12;
    int32_t eax13;
    int32_t eax14;
    int32_t eax15;
    uint32_t eax16;
    signed char* v17;
    uint32_t eax18;
    int32_t eax19;
    uint32_t edx20;
    int32_t eax21;
    void* esp22;

    eax3 = basic_1_reg_in_block(a1);
    eax4 = basic_2_reg_in_prev_block(a1);
    eax5 = basic_3_reg_cond_overwrite(a1);
    eax6 = basic_4_reg_cond_change(a1);
    eax7 = basic_5_reg_different_values(a1);
    eax8 = basic_6_reg_overwrite_in_block(a1);
    eax9 = intermediate_1_mem_in_block(a1);
    eax10 = intermediate_2_mem_in_prev_block(a1);
    eax11 = intermediate_3_mem_cond_overwrite(a1);
    eax12 = intermediate_4_mem_cond_change(a1);
    eax13 = intermediate_5_mem_different_values(a1);
    eax14 = intermediate_6_mem_overwrite_in_block(a1);
    eax15 = intermediate_10_subregs(a1);
    eax16 = advanced_1_writes_can_be_omitted_for_non_mem_access_calls(a1);
    v17 = *a2;
    eax18 = advanced_2_mem_values_can_be_propagated_for_non_write_calls(v17);
    eax19 = advanced_3_value_range_analysis(a1);
    edx20 = reinterpret_cast<uint32_t>(static_cast<int32_t>(**a2));
    eax21 = fun_8048380();
    esp22 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(__zero_stack_offset()) & 0xfffffff0) - 4 - 4 - 4 - 4 - 4 - 4 - 20 - 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 + 4 - 4 - 4 + 4 - 4 + 4 - 4 + 4 + 4);
    fun_80483a0(main, eax3 + eax4 + eax5 + eax6 + eax7 + eax8 + eax9 + eax10 + eax11 + eax12 + eax13 + eax14 + eax15 + eax16 + eax18 + eax19 + edx20, esp22, __libc_csu_init, 0x8048940, edx20, (reinterpret_cast<uint32_t>(esp22) & 0xfffffff0) - 4 - 4, eax21);
    __asm__("hlt ");
}

void _fini() {
    __x86_get_pc_thunk_bx();
    return;
}

void fun_804835c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

int32_t __JCR_END__ = 0;

int32_t frame_dummy() {
    int32_t edx1;
    int32_t v2;
    int32_t eax3;

    edx1 = __JCR_END__;
    if (!(!edx1 || 1)) {
        putchar(0x8049f10, v2);
    }
    eax3 = 0;
    if (!1 && !1) {
        eax3 = putchar(0x804a028, 0);
    }
    return eax3;
}

void fun_804856d() {
}

void fun_804893d() {
    return;
}

int32_t g804a008 = 0;

void fun_8048366() {
    goto g804a008;
}

void __libc_csu_init(int32_t a1, int32_t a2) {
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t esi6;
    int32_t edi7;
    int32_t esi8;

    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x1717;
    ebp5 = a1;
    _init();
    esi6 = ebx3 - 0xf4 - (ebx3 - 0xf8) >> 2;
    if (esi6) {
        edi7 = 0;
        esi8 = esi6;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi7 * 4 - 0xf8)(ebp5, a1, a2, 0x8048901);
            ++edi7;
        } while (esi8 != edi7);
    }
    return;
}

void fun_8048386() {
    goto 0x8048350;
}

void fun_80483a6() {
    goto 0x8048350;
}

void fun_80484fc() {
}

signed char __TMC_END__ = 0;

int32_t fun_8048535() {
    int1_t zf1;
    int32_t eax2;

    zf1 = __TMC_END__ == 0;
    if (zf1) {
        eax2 = deregister_tm_clones();
        __TMC_END__ = 1;
    }
    return eax2;
}

void fun_8048376() {
    goto 0x8048350;
}

void fun_80483b6() {
    goto 0x8048350;
}

void fun_8048396() {
    goto 0x8048350;
}
