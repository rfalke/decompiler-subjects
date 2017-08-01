
void fun_80482ae();

void call_gmon_start() {
    int32_t eax1;
    int32_t eax2;

    fun_80482ae();
    eax1 = *reinterpret_cast<int32_t*>(eax2 + 0x12aa + 20);
    if (eax1) {
        eax1();
    }
    return;
}

int32_t fun_804833d();

int32_t __gmon_start__(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);

int32_t __JCR_END__ = 0;

int32_t frame_dummy() {
    int32_t eax1;
    int32_t v2;
    int32_t ebp3;
    int32_t eax4;

    eax1 = fun_804833d();
    if (eax1) {
        v2 = ebp3 + 0x121b;
        __gmon_start__(0x8049478, 0x8049574, 0, v2, fun_804833d);
    }
    eax4 = __JCR_END__;
    if (eax4 && (eax4 = 0, !1)) {
        eax4 = __gmon_start__(0x8049554, 0x8049574, 0, v2, fun_804833d);
    }
    return eax4;
}

int32_t __CTOR_LIST__ = -1;

int32_t __do_global_ctors_aux() {
    int32_t eax1;
    int32_t* ebx2;
    int32_t v3;

    eax1 = __CTOR_LIST__;
    ebx2 = reinterpret_cast<int32_t*>(0x8049544);
    if (eax1 != -1) {
        do {
            --ebx2;
            eax1();
            eax1 = *ebx2;
        } while (eax1 != -1);
    }
    return v3;
}

int32_t __libc_start_main = 0x804825e;

void __libc_start_main(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t fib(int32_t a1) {
    int32_t v2;
    int32_t eax3;
    int32_t eax4;

    if (a1 <= 1) {
        v2 = a1;
    } else {
        eax3 = fib(a1 - 1);
        eax4 = fib(a1 - 2);
        v2 = eax3 + eax4;
    }
    return v2;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80482ae() {
    int32_t eax1;
    struct s0* ebp2;

    eax1 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x12aa + 20);
    if (eax1) {
        eax1();
    }
    goto ebp2->f4;
}

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t fun_804833d() {
    int32_t eax1;
    int32_t v2;
    int32_t v3;
    int32_t eax4;
    int32_t v5;
    struct s1* ebp6;

    if (eax1) {
        v2 = reinterpret_cast<int32_t>(__return_address()) + 0x121b;
        __gmon_start__(0x8049478, 0x8049574, 0, v2, v3);
    }
    eax4 = __JCR_END__;
    if (eax4 && !1) {
        __gmon_start__(0x8049554, 0x8049574, 0, v2, v5);
    }
    goto ebp6->f4;
}

int32_t __do_global_dtors_aux(int32_t a1);

struct s2 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_804844a(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s2* ebp5;

    __do_global_dtors_aux(a1);
    goto ebp5->f4;
}

int32_t printf = 0x804826e;

void printf(int32_t a1, int32_t a2) {
    goto printf;
}

signed char _edata = 0;

/* p.0 */
int32_t* p_0 = reinterpret_cast<int32_t*>(0x8049550);

int32_t __do_global_dtors_aux(int32_t a1) {
    int32_t v2;
    int32_t v3;
    int32_t ebp4;
    int1_t zf5;
    int32_t* eax6;
    int32_t edx7;
    int32_t eax8;
    int32_t v9;

    v2 = reinterpret_cast<int32_t>(__return_address());
    v3 = ebp4;
    zf5 = _edata == 0;
    if (zf5) {
        eax6 = p_0;
        edx7 = *eax6;
        if (edx7) {
            do {
                p_0 = eax6 + 1;
                edx7();
                eax6 = p_0;
                edx7 = *eax6;
            } while (edx7);
        }
        eax8 = 0;
        if (!1) {
            eax8 = __gmon_start__(0x8049478, v9, v3, v2, a1);
        }
        _edata = 1;
    }
    return eax8;
}

int32_t _init() {
    int32_t eax1;

    call_gmon_start();
    frame_dummy();
    eax1 = __do_global_ctors_aux();
    return eax1;
}

int32_t main();

void _fini();

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    __libc_start_main(main, __return_address(), esp1, _init, _fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_80482a2() {
}

void fun_80482c6() {
}

void _fini() {
    int32_t edx1;
    int32_t ebx2;
    int32_t ebp3;

    fun_804844a(edx1, ebx2, ebp3, __return_address());
}

void fun_8048254() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

int32_t g8049560 = 0;

void fun_804825e() {
    goto g8049560;
}

int32_t main() {
    int32_t eax1;

    eax1 = fib(10);
    printf("%i\n", eax1);
    return 0;
}

void fun_8048323() {
}

void fun_804826e() {
    goto 0x8048248;
}
