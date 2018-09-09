
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx();

void fun_8048360();

void _init() {
    int32_t ebx1;

    __x86_get_pc_thunk_bx();
    if (*reinterpret_cast<int32_t*>(ebx1 + 0x1d0b - 4)) {
        fun_8048360();
    }
    return;
}

/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

int32_t __gmon_start__ = 0;

void fun_8048360() {
    goto __gmon_start__;
}

void fun_8048320(int32_t a1);

int32_t intermediate_1_cmp_with_are_constant(int32_t a1) {
    if (a1 == 1 && a1 == 2) {
        fun_8048320("not reached");
    }
    if (a1 == 1 && a1 > 2) {
        fun_8048320("not reached");
    }
    if (a1 < 0 && a1 > 0) {
        fun_8048320("not reached");
    }
    return 0;
}

int32_t intermediate_2_cmp_with_extra(int32_t a1) {
    if (a1 > 10 && (a1 <= 19 && a1 != 30)) {
        fun_8048320("!=30 is always true");
    }
    if (a1 == 1 && a1 != 2) {
        fun_8048320("!=2 is always true");
    }
    if (a1 > 10 && a1 > 9) {
        fun_8048320(">9 is always true");
    }
    return 0;
}

void fun_8048350(uint32_t a1);

int32_t intermediate_3_division_by_multiplication(int32_t a1) {
    fun_8048350((__intrinsic() + a1 >> 2) - reinterpret_cast<uint32_t>(a1 >> 31));
    return 0;
}

int32_t intermediate_4_swap_with_xor(uint32_t a1, uint32_t a2) {
    uint32_t ebx3;
    uint32_t esi4;

    ebx3 = a1 ^ a2;
    esi4 = a2 ^ ebx3;
    fun_8048350(ebx3 ^ esi4);
    fun_8048350(esi4);
    return 0;
}

int32_t advanced_1_boolean_minization(int32_t a1, uint32_t a2, uint32_t a3) {
    int32_t eax4;

    if (!a1 && (!a2 && a3) || (!a1 && (a2 && a3) || a1 && !a2)) {
        eax4 = 1;
    } else {
        eax4 = 0;
    }
    return eax4;
}

int32_t exit = 0x8048336;

int32_t fun_8048330() {
    goto exit;
}

int32_t __libc_start_main = 0x8048346;

void fun_8048340(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t putchar(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;

    eax1 = 3;
    if (!1 && (eax1 = 0, !1)) {
        eax1 = putchar(0x804a020, v2);
    }
    return eax1;
}

int32_t puts = 0x8048326;

void fun_8048320(int32_t a1) {
    goto puts;
}

int32_t putchar = 0x8048356;

void fun_8048350(uint32_t a1) {
    goto putchar;
}

void __libc_csu_init(int32_t a1, int32_t a2);

void main(int32_t a1, signed char** a2) {
    int32_t eax3;
    int32_t eax4;
    int32_t eax5;
    int32_t eax6;
    int32_t edx7;
    int32_t eax8;
    int32_t eax9;
    int32_t edx10;
    int32_t eax11;
    void* esp12;

    eax3 = intermediate_1_cmp_with_are_constant(a1);
    eax4 = intermediate_2_cmp_with_extra(a1);
    eax5 = intermediate_3_division_by_multiplication(a1);
    eax6 = intermediate_4_swap_with_xor(48, 97);
    edx7 = __intrinsic() - (a1 >> 31);
    eax8 = 0;
    *reinterpret_cast<unsigned char*>(&eax8) = reinterpret_cast<uint1_t>(a1 == 0);
    eax9 = advanced_1_boolean_minization(eax8, reinterpret_cast<uint32_t>(~a1) & 1, static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(a1 == edx7 + edx7 * 2))));
    edx10 = **a2;
    eax11 = fun_8048330();
    esp12 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(__zero_stack_offset()) & 0xfffffff0) - 4 - 4 - 4 - 4 - 4 - 4 - 20 - 4 - 4 + 4 - 4 + 4 - 4 + 4 + 4 + 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 4);
    fun_8048340(main, eax3 + eax4 + eax5 + eax6 + eax9 + edx10, esp12, __libc_csu_init, 0x80486c0, edx10, (reinterpret_cast<uint32_t>(esp12) & 0xfffffff0) - 4 - 4, eax11);
    __asm__("hlt ");
}

void _fini() {
    __x86_get_pc_thunk_bx();
    return;
}

void fun_804831c() {
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
        eax3 = putchar(0x804a020, 0);
    }
    return eax3;
}

void fun_80484cd() {
}

void fun_80486bd() {
    return;
}

int32_t g804a008 = 0;

void fun_8048336() {
    goto g804a008;
}

void fun_8048346() {
    goto 0x8048310;
}

void fun_804845c() {
}

signed char __TMC_END__ = 0;

int32_t fun_8048495() {
    int1_t zf1;
    int32_t eax2;

    zf1 = __TMC_END__ == 0;
    if (zf1) {
        eax2 = deregister_tm_clones();
        __TMC_END__ = 1;
    }
    return eax2;
}

void fun_8048326() {
    goto 0x8048310;
}

void __libc_csu_init(int32_t a1, int32_t a2) {
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t esi6;
    int32_t edi7;
    int32_t esi8;

    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x1997;
    ebp5 = a1;
    _init();
    esi6 = ebx3 - 0xf4 - (ebx3 - 0xf8) >> 2;
    if (esi6) {
        edi7 = 0;
        esi8 = esi6;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi7 * 4 - 0xf8)(ebp5, a1, a2, 0x8048681);
            ++edi7;
        } while (esi8 != edi7);
    }
    return;
}

void fun_8048356() {
    goto 0x8048310;
}
