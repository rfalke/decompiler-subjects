
void call_gmon_start();

int32_t frame_dummy();

int32_t __do_global_ctors_aux();

int32_t _init() {
    int32_t eax1;

    call_gmon_start();
    frame_dummy();
    eax1 = __do_global_ctors_aux();
    return eax1;
}

int32_t fun_80483ad();

void call_gmon_start() {
    int32_t eax1;
    int32_t eax2;
    int32_t ebx3;

    eax1 = fun_80483ad();
    eax2 = *reinterpret_cast<int32_t*>(ebx3 + 0x1397 + 36);
    if (eax2) {
        eax2(eax1);
    }
    return;
}

int32_t __JCR_END__ = 0;

int32_t __gmon_start__(int32_t a1);

int32_t frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && (eax1 = 0, !1)) {
        eax1 = __gmon_start__(0x8049740);
    }
    return eax1;
}

int32_t __CTOR_LIST__ = -1;

int32_t __do_global_ctors_aux() {
    int32_t* ebx1;
    int32_t eax2;
    int32_t v3;

    ebx1 = reinterpret_cast<int32_t*>(0x8049730);
    eax2 = __CTOR_LIST__;
    if (eax2 != -1) {
        do {
            --ebx1;
            eax2();
            eax2 = *ebx1;
        } while (eax2 != -1);
    }
    return v3;
}

int32_t fopen = 0x8048376;

int32_t fopen(int32_t a1, int32_t a2) {
    goto fopen;
}

int32_t fgets = 0x8048346;

int32_t fgets(void* a1, int32_t a2, int32_t a3) {
    goto fgets;
}

int32_t strchr = 0x8048326;

signed char* strchr(int32_t a1, int32_t a2, int32_t a3) {
    goto strchr;
}

void fun_8048639();

void __do_global_dtors_aux(int32_t a1);

void _fini() {
    int32_t edx1;

    fun_8048639();
    __do_global_dtors_aux(edx1);
    return;
}

/* __i686.get_pc_thunk.bx */
void __i686_get_pc_thunk_bx() {
    return;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t fun_80483ad() {
    int32_t eax1;
    int32_t eax2;
    struct s0* ebp3;

    eax1 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x1397 + 36);
    if (eax1) {
        eax1(eax2);
    }
    goto ebp3->f4;
}

int32_t fclose = 0x8048366;

int32_t fclose(int32_t a1, int32_t a2, int32_t a3) {
    goto fclose;
}

int32_t puts = 0x8048336;

void puts(void* a1, int32_t a2, int32_t a3) {
    goto puts;
}

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048639() {
    int32_t edx1;
    struct s1* ebp2;

    __do_global_dtors_aux(edx1);
    goto ebp2->f4;
}

int32_t __libc_start_main = 0x8048356;

void __libc_start_main(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

signed char _edata = 0;

/* p.0 */
int32_t* p_0 = reinterpret_cast<int32_t*>(0x804973c);

void __do_global_dtors_aux(int32_t a1) {
    int1_t zf2;
    int32_t* eax3;
    int32_t edx4;

    zf2 = _edata == 0;
    if (zf2) {
        eax3 = p_0;
        edx4 = *eax3;
        if (edx4) {
            do {
                p_0 = eax3 + 1;
                edx4();
                eax3 = p_0;
                edx4 = *eax3;
            } while (edx4);
        }
        _edata = 1;
    }
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

void fun_804840e() {
}

void fun_8048594() {
    int32_t ebx1;
    int32_t ebx2;
    int32_t eax3;
    int32_t esi4;
    int32_t eax5;

    __i686_get_pc_thunk_bx();
    ebx1 = ebx2 + 0x1196;
    eax3 = ebx1 - 0xec - (ebx1 - 0xec) >> 2;
    esi4 = eax3 - 1;
    if (eax3) {
        do {
            *reinterpret_cast<int32_t*>(ebx1 + esi4 * 4 - 0xec)();
            eax5 = esi4;
            --esi4;
        } while (eax5);
    }
    _fini();
    return;
}

struct s2 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t main(int32_t a1, struct s2* a2) {
    int32_t eax3;
    int32_t v4;
    int32_t eax5;
    void* esi6;
    int32_t v7;
    int32_t eax8;
    signed char* eax9;

    if (a1 <= 1) {
        eax3 = 1;
    } else {
        v4 = a2->f4;
        eax5 = fopen(v4, "r");
        eax3 = 1;
        if (eax5) {
            esi6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x408);
            v7 = 0x400;
            eax8 = fgets(esi6, 0x400, eax5);
            if (eax8) {
                v7 = 10;
                eax9 = strchr(eax8, 10, eax5);
                if (eax9) {
                    *eax9 = 0;
                }
                puts(esi6, 10, eax5);
            }
            eax3 = fclose(eax5, v7, eax5);
        }
    }
    return eax3;
}

int32_t g804974c = 0;

void fun_8048376() {
    goto g804974c;
}

void fun_80484dc() {
}

void fun_8048346() {
    goto 0x8048310;
}

void fun_8048326() {
    goto 0x8048310;
}

void __libc_csu_init() {
    int32_t ebx1;
    int32_t ebx2;
    uint32_t edx3;
    uint32_t esi4;
    uint32_t edi5;

    __i686_get_pc_thunk_bx();
    ebx1 = ebx2 + 0x11f4;
    _init();
    edx3 = reinterpret_cast<uint32_t>(ebx1 - 0xec - (ebx1 - 0xec) >> 2);
    if (0 < edx3) {
        esi4 = 0;
        edi5 = edx3;
        do {
            *reinterpret_cast<int32_t*>(ebx1 + esi4 * 4 - 0xec)();
            ++esi4;
        } while (esi4 < edi5);
    }
    return;
}

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    __libc_start_main(main, __return_address(), esp1, __libc_csu_init, 0x80485a0, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_8048366() {
    goto 0x8048310;
}

void fun_8048336() {
    goto 0x8048310;
}

int32_t fun_80484e7(void* a1, int32_t a2, int32_t a3) {
    int32_t eax4;
    signed char* eax5;

    eax4 = fgets(a1, a2, a3);
    if (eax4 && (eax5 = strchr(eax4, 10, a3), !!eax5)) {
        *eax5 = 0;
    }
    return eax4;
}

void fun_8048356() {
    goto 0x8048310;
}
