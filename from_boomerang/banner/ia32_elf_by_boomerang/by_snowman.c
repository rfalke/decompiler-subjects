
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

void fun_804830e();

void call_gmon_start() {
    int32_t eax1;
    int32_t eax2;

    fun_804830e();
    eax1 = *reinterpret_cast<int32_t*>(eax2 + 0x2a5e + 28);
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
        eax1 = __gmon_start__(0x804ad68);
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
    ebx4 = reinterpret_cast<int32_t*>(0x804ad58);
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

void fun_804830e() {
    int32_t eax1;
    struct s0* ebp2;

    eax1 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x2a5e + 28);
    if (eax1) {
        eax1();
    }
    goto ebp2->f4;
}

int32_t strlen = 0x80482c6;

int32_t strlen(void* a1) {
    goto strlen;
}

int32_t puts = 0x80482a6;

void puts(void* a1) {
    goto puts;
}

void __do_global_dtors_aux();

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80485fe(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s1* ebp5;

    __do_global_dtors_aux();
    goto ebp5->f4;
}

int32_t malloc = 0x80482b6;

void** malloc(int32_t a1) {
    goto malloc;
}

signed char _edata = 0;

/* p.0 */
int32_t* p_0 = reinterpret_cast<int32_t*>(0x804ad64);

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

int32_t __libc_start_main = 0x80482d6;

void __libc_start_main(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

void fun_804829c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8048362() {
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
            *reinterpret_cast<int32_t*>(ebx8 * 4 + 0x804ab0c)(v6);
            edx9 = ebx8;
            --ebx8;
        } while (edx9);
    }
    fun_80485fe(edx9, v4, v2, v1);
}

void fun_80485be() {
}

int32_t g804ad74 = 0;

void fun_80482a6() {
    goto g804ad74;
}

int32_t main() {
    void* ebp1;
    void** eax2;
    int32_t v3;
    void** v4;
    void* v5;
    int32_t eax6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    void* v11;
    int32_t v12;
    int32_t edx13;
    int32_t v14;
    int32_t edx15;
    void* v16;

    ebp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax2 = malloc(12);
    eax2[1] = reinterpret_cast<void*>("HelloWorld");
    v3 = 2;
    v4 = eax2 + 1;
    while (--v3, !!v3) {
        v5 = *v4;
        eax6 = strlen(v5);
        v7 = eax6;
        if (v7 > 10) {
            v7 = 10;
        }
        v8 = 0;
        while (v8 <= 6) {
            v9 = 0;
            while (v9 < v7) {
                v10 = *reinterpret_cast<signed char*>(v9 + reinterpret_cast<int32_t>(*v4)) - 32;
                if (v10 < 0) {
                    v10 = 0;
                }
                v11 = reinterpret_cast<void*>(0);
                while (reinterpret_cast<int32_t>(v11) <= 6) {
                    v12 = v10;
                    if (v12 < 0) {
                        v12 = v12 + 7;
                    }
                    edx13 = v12 >> 3;
                    v14 = v10;
                    if (v14 < 0) {
                        v14 = v14 + 7;
                    }
                    edx15 = v10 - (v14 >> 3 << 3);
                    *reinterpret_cast<signed char*>((v9 << 3) + (reinterpret_cast<int32_t>(ebp1) - 8) + reinterpret_cast<int32_t>(v11) - 0x70) = *reinterpret_cast<signed char*>((edx15 << 3) - edx15 + reinterpret_cast<int32_t>(v11) + reinterpret_cast<int32_t>(*reinterpret_cast<void**>((v8 + ((edx13 << 3) - edx13)) * 4 + 0x804ab40)));
                    v11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v11) + 1);
                }
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp1) + v9 * 8 - 0x71) = 32;
                ++v9;
            }
            v16 = reinterpret_cast<void*>((v7 << 3) - 1);
            while (reinterpret_cast<int32_t>(v16) >= 0) {
                if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp1) - 0x78 + reinterpret_cast<int32_t>(v16)) != 32) 
                    goto addr_804851f_24;
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp1) - 0x78 + reinterpret_cast<int32_t>(v16)) = 0;
                v16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v16) - 1);
            }
            addr_8048531_27:
            puts(reinterpret_cast<int32_t>(ebp1) - 0x78);
            ++v8;
            continue;
            addr_804851f_24:
            goto addr_8048531_27;
        }
        puts(0x8049b04);
        ++v4;
    }
    return 0;
}

int32_t __libc_csu_init() {
    int32_t eax1;
    uint32_t ebx2;

    _init();
    eax1 = 0;
    ebx2 = 0;
    if (!1) {
        do {
            eax1 = reinterpret_cast<int32_t>(*reinterpret_cast<int32_t*>(ebx2 * 4 + 0x804ab0c)());
            ++ebx2;
        } while (ebx2 < 0);
    }
    return eax1;
}

void fun_80482c6() {
    goto 0x8048290;
}

void fun_80482b6() {
    goto 0x8048290;
}

void fun_80482d6() {
    goto 0x8048290;
}

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    __libc_start_main(main, __return_address(), esp1, __libc_csu_init, __libc_csu_fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}
