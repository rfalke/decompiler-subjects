
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx();

void fun_80482f0();

void _init() {
    int32_t ebx1;

    __x86_get_pc_thunk_bx();
    if (*reinterpret_cast<int32_t*>(ebx1 + 0x1457 - 4)) {
        fun_80482f0();
    }
    return;
}

/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

int32_t __gmon_start__ = 0x80482f6;

void fun_80482f0() {
    goto __gmon_start__;
}

int32_t putchar(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;
    int32_t eax3;

    eax1 = 3;
    if (!0 || (eax1 = 0, 1)) {
        return eax1;
    } else {
        eax3 = putchar(0x8049738, v2);
        return eax3;
    }
}

int32_t putchar = 0x8048326;

void fun_8048320(int32_t a1) {
    goto putchar;
}

int32_t strlen = 0x8048306;

uint32_t fun_8048300(int32_t a1) {
    goto strlen;
}

int32_t __libc_start_main = 0x8048316;

void fun_8048310(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

void _fini() {
    __x86_get_pc_thunk_bx();
    return;
}

void fun_80482ec() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

int32_t fun_804839a() {
    int32_t eax1;

    if (!0 || 1) {
        return 0;
    } else {
        eax1 = putchar(0x8049738, 0);
        return eax1;
    }
}

signed char __TMC_END__ = 0;

int32_t fun_80483d7() {
    int1_t zf1;
    int32_t eax2;

    zf1 = __TMC_END__ == 0;
    if (zf1) {
        eax2 = deregister_tm_clones();
        __TMC_END__ = 1;
    }
    return eax2;
}

int32_t __JCR_END__ = 0;

void frame_dummy() {
    int32_t eax1;
    int32_t v2;

    eax1 = __JCR_END__;
    if (!eax1 || 1) {
        goto 0x80483a0;
    } else {
        putchar(0x8049624, v2);
        goto 0x80483a0;
    }
}

void __libc_csu_init(int32_t a1, int32_t a2, int32_t a3) {
    int32_t edi4;
    int32_t ebx5;
    int32_t ebx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t esi9;

    edi4 = 0;
    __x86_get_pc_thunk_bx();
    ebx5 = ebx6 + 0x1269;
    ebp7 = a1;
    _init();
    esi8 = ebx5 - 0xf4 - (ebx5 - 0xf8) >> 2;
    if (esi8) {
        esi9 = esi8;
        do {
            *reinterpret_cast<int32_t*>(ebx5 + edi4 * 4 - 0xf8)(ebp7, a2, a3);
            ++edi4;
        } while (edi4 != esi9);
    }
    return;
}

void fun_8048501() {
    return;
}

int32_t g804971c = 0;

void fun_80482f6() {
    goto g804971c;
}

int32_t main() {
    uint32_t eax1;
    uint32_t v2;
    uint32_t v3;
    uint32_t eax4;

    eax1 = fun_8048300("Hello, World!");
    v2 = eax1;
    v3 = 0;
    while (v3 < v2) {
        eax4 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>("Hello, World!") + v3);
        fun_8048320(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax4)));
        ++v3;
    }
    fun_8048320(10);
    return 0;
}

void fun_8048326() {
    goto 0x80482e0;
}

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_8048310(main, __return_address(), esp1, __libc_csu_init, 0x8048510, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_8048306() {
    goto 0x80482e0;
}

void fun_8048316() {
    goto 0x80482e0;
}
