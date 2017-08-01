
void fun_8048474(int32_t a1, int32_t a2);

void fun_80484c8();

void frame_dummy();

void __do_global_ctors_aux();

int32_t _init() {
    int32_t v1;
    int32_t ebx2;
    int32_t v3;

    fun_8048474(v1, ebx2);
    if (*reinterpret_cast<int32_t*>(v3 + 0x1b80 - 4)) {
        fun_80484c8();
    }
    frame_dummy();
    __do_global_ctors_aux();
    return ebx2;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048474(int32_t a1, int32_t a2) {
    struct s0* ebp3;

    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x1b80 - 4)) {
        fun_80484c8();
    }
    frame_dummy();
    __do_global_ctors_aux();
    goto ebp3->f4;
}

int32_t __gmon_start__ = 0x80484ce;

void fun_80484c8() {
    goto __gmon_start__;
}

int32_t __JCR_END__ = 0;

void fread(int32_t a1);

void frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && !1) {
        fread(0x8049f1c);
    }
    return;
}

int32_t __init_array_start = -1;

void __do_global_ctors_aux() {
    int32_t eax1;
    int32_t* ebx2;

    eax1 = __init_array_start;
    if (eax1 != -1) {
        ebx2 = reinterpret_cast<int32_t*>(0x8049f0c);
        do {
            --ebx2;
            eax1();
            eax1 = *ebx2;
        } while (eax1 != -1);
    }
    return;
}

int32_t __libc_start_main = 0x80484de;

void fun_80484d8(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t strlen = 0x804851e;

void* fun_8048518(void* a1, int32_t a2, void* a3) {
    goto strlen;
}

int32_t memcpy = 0x804850e;

void fun_8048508(void* a1, void* a2, void* a3) {
    goto memcpy;
}

int32_t puts = 0x804855e;

void fun_8048558(void* a1, void* a2, void* a3) {
    goto puts;
}

int32_t __stack_chk_fail = 0x804853e;

uint32_t fun_8048538(void* a1, void* a2, void* a3, void* a4) {
    goto __stack_chk_fail;
}

int32_t perror = 0x80484ee;

void fun_80484e8(void* a1, void* a2) {
    goto perror;
}

uint32_t g14;

void fun_80484a8(void* a1, int32_t a2, void* a3);

void fun_8048548(void* a1, int32_t a2, void* a3);

uint32_t dumpline(void* a1, void* a2, void* a3, void* a4) {
    void* ebp5;
    void* v6;
    uint32_t eax7;
    uint32_t v8;
    void* v9;
    int32_t v10;
    void* v11;
    uint32_t eax12;
    unsigned char al13;
    void* eax14;
    void* v15;
    void* v16;
    uint32_t eax17;
    uint32_t eax18;
    uint32_t eax19;
    void* v20;
    uint32_t eax21;
    void* v22;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v6 = a1;
    eax7 = g14;
    v8 = eax7;
    v9 = a2;
    v10 = reinterpret_cast<int32_t>("%08lX:");
    fun_80484a8(reinterpret_cast<int32_t>(ebp5) - 92, "%08lX:", v9);
    if (reinterpret_cast<int32_t>(a3) > reinterpret_cast<int32_t>(16)) {
        a3 = reinterpret_cast<void*>(16);
    }
    v11 = reinterpret_cast<void*>(0);
    while (reinterpret_cast<int32_t>(v11) < reinterpret_cast<int32_t>(a3)) {
        eax12 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v11) + reinterpret_cast<uint32_t>(v6));
        v9 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax12)));
        v10 = reinterpret_cast<int32_t>(" %02lX");
        fun_80484a8(reinterpret_cast<int32_t>(ebp5) - 92 + (reinterpret_cast<uint32_t>(v11) + reinterpret_cast<uint32_t>(v11) + reinterpret_cast<uint32_t>(v11) + 9), " %02lX", v9);
        v11 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v11) + 1);
    }
    while (al13 = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v11) <= reinterpret_cast<int32_t>(15)), v11 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v11) + 1), !!al13) {
        v10 = reinterpret_cast<int32_t>("   ");
        fun_8048548(reinterpret_cast<int32_t>(ebp5) - 92, "   ", v9);
    }
    eax14 = fun_8048518(reinterpret_cast<int32_t>(ebp5) - 92, v10, v9);
    fun_8048508(reinterpret_cast<int32_t>(ebp5) - 92 + reinterpret_cast<int32_t>(eax14), "  |", 4);
    v15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax14) + 3);
    v16 = reinterpret_cast<void*>(0);
    while (reinterpret_cast<int32_t>(v16) < reinterpret_cast<int32_t>(a3)) {
        eax17 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v16) + reinterpret_cast<uint32_t>(v6));
        if (*reinterpret_cast<unsigned char*>(&eax17) <= 31 || (eax18 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v16) + reinterpret_cast<uint32_t>(v6)), *reinterpret_cast<unsigned char*>(&eax18) > 0x7e)) {
            eax19 = 46;
        } else {
            eax19 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v16) + reinterpret_cast<uint32_t>(v6));
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp5) + (reinterpret_cast<uint32_t>(v15) + reinterpret_cast<uint32_t>(v16)) - 92) = *reinterpret_cast<signed char*>(&eax19);
        v16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v16) + 1);
    }
    while (reinterpret_cast<int32_t>(v16) <= reinterpret_cast<int32_t>(15)) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp5) + (reinterpret_cast<uint32_t>(v16) + reinterpret_cast<uint32_t>(v15)) - 92) = 32;
        v16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v16) + 1);
    }
    fun_8048508(reinterpret_cast<int32_t>(ebp5) - 92 + (reinterpret_cast<uint32_t>(v15) + reinterpret_cast<uint32_t>(v16)), "|", 2);
    v20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp5) - 92);
    fun_8048558(v20, "|", 2);
    eax21 = v8 ^ g14;
    if (eax21) {
        eax21 = fun_8048538(v20, "|", 2, v22);
    }
    return eax21;
}

/* __i686.get_pc_thunk.bx */
int32_t __i686_get_pc_thunk_bx() {
    int32_t eax1;

    return eax1;
}

int32_t sprintf = 0x80484ae;

void fun_80484a8(void* a1, int32_t a2, void* a3) {
    goto sprintf;
}

int32_t strcat = 0x804854e;

void fun_8048548(void* a1, int32_t a2, void* a3) {
    goto strcat;
}

int32_t stat(void* a1, void* a2);

void* fun_8048528(void* a1, void* a2);

void* fun_8048568(void* a1, void* a2, void* a3, void* a4);

void fun_80484f8(void* a1, void* a2, void* a3, void* a4);

uint32_t hexdump(void* a1) {
    void* ebp2;
    uint32_t eax3;
    uint32_t v4;
    void* v5;
    int32_t eax6;
    void* eax7;
    void* v8;
    void* v9;
    void* v10;
    void* v11;
    void* v12;
    void* eax13;
    void* v14;
    uint32_t eax15;
    uint32_t edx16;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax3 = g14;
    v4 = eax3;
    v5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp2) - 0x80);
    eax6 = stat(a1, v5);
    if (!eax6) {
        v5 = reinterpret_cast<void*>("rb");
        eax7 = fun_8048528(a1, "rb");
        v8 = eax7;
        if (v8) {
            v9 = reinterpret_cast<void*>(0);
            while (reinterpret_cast<uint32_t>(v10) > reinterpret_cast<uint32_t>(v9)) {
                v11 = v8;
                v12 = reinterpret_cast<void*>(16);
                v5 = reinterpret_cast<void*>(1);
                eax13 = fun_8048568(reinterpret_cast<int32_t>(ebp2) - 28, 1, 16, v11);
                if (!eax13) 
                    goto addr_80488a6_6;
                v12 = eax13;
                v5 = v9;
                dumpline(reinterpret_cast<int32_t>(ebp2) - 28, v5, v12, v11);
                v9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v9) + reinterpret_cast<uint32_t>(eax13));
            }
        } else {
            v14 = a1;
            fun_80484e8(v14, "rb");
            eax15 = 1;
            goto addr_80488b7_9;
        }
    } else {
        v14 = a1;
        fun_80484e8(v14, v5);
        eax15 = 1;
        goto addr_80488b7_9;
    }
    addr_80488a7_12:
    v14 = v8;
    fun_80484f8(v14, v5, v12, v11);
    eax15 = 0;
    addr_80488b7_9:
    edx16 = v4 ^ g14;
    if (edx16) {
        eax15 = fun_8048538(v14, v5, v12, v11);
    }
    return eax15;
    addr_80488a6_6:
    goto addr_80488a7_12;
}

int32_t fopen = 0x804852e;

void* fun_8048528(void* a1, void* a2) {
    goto fopen;
}

int32_t fread = 0x804856e;

void* fun_8048568(void* a1, void* a2, void* a3, void* a4) {
    goto fread;
}

int32_t fclose = 0x80484fe;

void fun_80484f8(void* a1, void* a2, void* a3, void* a4) {
    goto fclose;
}

void __do_global_dtors_aux();

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048a08(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s1* ebp5;

    __do_global_dtors_aux();
    goto ebp5->f4;
}

int32_t fun_80484b8(int32_t a1, void* a2, int32_t a3);

int32_t stat(void* a1, void* a2) {
    int32_t eax3;
    int32_t eax4;

    eax3 = __i686_get_pc_thunk_bx();
    eax4 = fun_80484b8(3, a1, eax3);
    return eax4;
}

signed char _edata = 0;

/* dtor_idx.7023 */
uint32_t dtor_idx_7023 = 0;

void __do_global_dtors_aux() {
    int1_t zf1;
    uint32_t eax2;
    uint32_t eax3;

    zf1 = _edata == 0;
    if (zf1) {
        eax2 = dtor_idx_7023;
        if (eax2 < 0) {
            do {
                eax3 = eax2 + 1;
                dtor_idx_7023 = eax3;
                *reinterpret_cast<int32_t*>(eax3 * 4 + 0x8049f14)();
                eax2 = dtor_idx_7023;
            } while (eax2 < 0);
        }
        _edata = 1;
    }
    return;
}

int32_t __xstat = 0x80484be;

int32_t fun_80484b8(int32_t a1, void* a2, int32_t a3) {
    goto __xstat;
}

uint32_t main(int32_t a1, void** a2);

void __libc_csu_fini();

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80484d8(main, __return_address(), esp1, 0x8048930, __libc_csu_fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_8048605() {
}

uint32_t main(int32_t a1, void** a2) {
    uint32_t v3;
    int32_t v4;
    void* v5;
    uint32_t eax6;

    v3 = 0;
    v4 = 1;
    while (v4 < a1) {
        v5 = *reinterpret_cast<void**>((v4 << 2) + reinterpret_cast<int32_t>(a2));
        eax6 = hexdump(v5);
        v3 = v3 + eax6;
        ++v4;
    }
    return v3;
}

void __libc_csu_fini() {
    return;
}

void _fini() {
    int32_t v1;
    int32_t ebx2;
    int32_t ebp3;

    fun_8048a08(v1, ebx2, ebp3, __return_address());
}

int32_t g8049ffc = 0;

void fun_80484ce() {
    goto g8049ffc;
}

void fun_80484a4() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_80484de() {
    goto 0x8048498;
}

void fun_804851e() {
    goto 0x8048498;
}

void fun_804850e() {
    goto 0x8048498;
}

void fun_804855e() {
    goto 0x8048498;
}

void fun_804853e() {
    goto 0x8048498;
}

void fun_80484ee() {
    goto 0x8048498;
}

void fun_8048925(int32_t a1, int32_t a2, int32_t a3) {
    int32_t ebx4;
    int32_t ebx5;
    uint32_t edi6;
    uint32_t esi7;

    __i686_get_pc_thunk_bx();
    ebx4 = ebx5 + 0x16b9;
    _init();
    edi6 = reinterpret_cast<uint32_t>(ebx4 - 0xe8 - (ebx4 - 0xe8) >> 2);
    if (edi6) {
        esi7 = 0;
        do {
            *reinterpret_cast<int32_t*>(ebx4 + esi7 * 4 - 0xe8)(a1, a2, a3);
            ++esi7;
        } while (esi7 < edi6);
    }
    return;
}

void fun_80484ae() {
    goto 0x8048498;
}

void fun_804854e() {
    goto 0x8048498;
}

void fun_804852e() {
    goto 0x8048498;
}

void fun_804856e() {
    goto 0x8048498;
}

void fun_80484fe() {
    goto 0x8048498;
}

void fun_80484be() {
    goto 0x8048498;
}
