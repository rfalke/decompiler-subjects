
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

void fun_8048272();

void call_gmon_start() {
    int32_t eax1;
    int32_t eax2;

    fun_8048272();
    eax1 = *reinterpret_cast<int32_t*>(eax2 + 0x12ee + 16);
    if (eax1) {
        eax1();
    }
    return;
}

int32_t __JCR_END__ = 0;

int32_t __gmon_start__(int32_t a1);

int32_t frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && (eax1 = 0, !1)) {
        eax1 = __gmon_start__(0x804955c);
    }
    return eax1;
}

int32_t __CTOR_LIST__ = -1;

int32_t __do_global_ctors_aux() {
    int32_t v1;
    int32_t edx2;
    int32_t eax3;
    int32_t* ebx4;

    v1 = edx2;
    eax3 = __CTOR_LIST__;
    ebx4 = reinterpret_cast<int32_t*>(0x804954c);
    if (eax3 != -1) {
        do {
            --ebx4;
            eax3();
            eax3 = *ebx4;
        } while (eax3 != -1);
    }
    return v1;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048272() {
    int32_t eax1;
    struct s0* ebp2;

    eax1 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x12ee + 16);
    if (eax1) {
        eax1();
    }
    goto ebp2->f4;
}

void __do_global_dtors_aux();

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_804845a(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s1* ebp5;

    __do_global_dtors_aux();
    goto ebp5->f4;
}

signed char _edata = 0;

/* p.0 */
int32_t* p_0 = reinterpret_cast<int32_t*>(0x8049558);

void __do_global_dtors_aux() {
    int1_t zf1;
    int32_t* eax2;
    int32_t edx3;

    zf1 = _edata == 0;
    if (zf1) {
        eax2 = p_0;
        edx3 = *eax2;
        if (edx3) {
            do {
                p_0 = eax2 + 1;
                edx3();
                eax2 = p_0;
                edx3 = *eax2;
            } while (edx3);
        }
        _edata = 1;
    }
    return;
}

int32_t __libc_start_main = 0x804823a;

void __libc_start_main(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

void fun_8048230() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_80482c6() {
}

void __libc_csu_fini() {
    int32_t v1;
    int32_t v2;
    int32_t ebp3;
    int32_t v4;
    int32_t ebx5;
    int32_t v6;
    int32_t eax7;
    int32_t ebx8;
    int32_t edx9;

    v1 = reinterpret_cast<int32_t>(__return_address());
    v2 = ebp3;
    v4 = ebx5;
    v6 = eax7;
    ebx8 = -1;
    if (0) {
        do {
            *reinterpret_cast<int32_t*>(ebx8 * 4 + 0x8049478)(v6);
            edx9 = ebx8;
            --ebx8;
        } while (edx9);
    }
    fun_804845a(edx9, v4, v2, v1);
}

void fun_804841a() {
}

int32_t g8049568 = 0;

void fun_804823a() {
    goto g8049568;
}

int32_t main(int32_t a1) {
    int32_t eax2;
    int32_t eax3;

    if (a1 == 5) {
        do {
            eax2 = a1;
            --a1;
            if (eax2 <= 1) {
                if (a1 == 12) 
                    break;
            } else {
                eax3 = a1;
                --a1;
                if (eax3 > 2) 
                    goto addr_8048375_6;
            }
        } while (a1 > 0);
        goto addr_8048393_8;
    } else {
        if (a1 > 5) {
            if (a1 == 9) {
                if (a1 != 10) {
                    goto addr_80483b2_13;
                } else {
                    goto addr_80483b2_13;
                }
            } else {
                goto addr_80483b9_16;
            }
        } else {
            if (a1 == 2) {
                do {
                } while (a1 > 0);
                goto addr_8048347_20;
            } else {
                goto addr_80483b9_16;
            }
        }
    }
    addr_80483b2_13:
    addr_80483b9_16:
    return 13;
    addr_8048393_8:
    goto addr_80483b9_16;
    addr_8048375_6:
    addr_8048347_20:
    goto addr_80483b9_16;
}

int32_t __libc_csu_init() {
    int32_t eax1;
    uint32_t ebx2;

    _init();
    eax1 = 0;
    ebx2 = 0;
    if (!1) {
        do {
            eax1 = reinterpret_cast<int32_t>(*reinterpret_cast<int32_t*>(ebx2 * 4 + 0x8049478)());
            ++ebx2;
        } while (ebx2 < 0);
    }
    return eax1;
}

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    __libc_start_main(main, __return_address(), esp1, __libc_csu_init, __libc_csu_fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}
