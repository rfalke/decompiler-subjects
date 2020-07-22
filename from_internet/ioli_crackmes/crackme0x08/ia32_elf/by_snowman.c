
int32_t fun_8048424();

int32_t frame_dummy();

int32_t __do_global_ctors_aux();

int32_t _init() {
    int32_t eax1;

    fun_8048424();
    frame_dummy();
    eax1 = __do_global_ctors_aux();
    return eax1;
}

void fun_804842d(int32_t a1);

int32_t fun_8048424() {
    int32_t ebx1;
    int32_t eax2;
    int32_t edx3;

    fun_804842d(ebx1);
    eax2 = *reinterpret_cast<int32_t*>(ebx1 + 0x1bc7 - 4);
    if (eax2) {
        eax2();
    }
    return edx3;
}

int32_t __JCR_END__ = 0;

int32_t exit(int32_t a1);

int32_t frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && (eax1 = 0, !1)) {
        eax1 = exit(0x8049f1c);
    }
    return eax1;
}

int32_t __init_array_start = -1;

int32_t __do_global_ctors_aux() {
    int32_t* ebx1;
    int32_t eax2;
    int32_t v3;

    ebx1 = reinterpret_cast<int32_t*>(0x8049f0c);
    eax2 = __init_array_start;
    while (eax2 != -1) {
        --ebx1;
        eax2();
        eax2 = *ebx1;
    }
    return v3;
}

int32_t __libc_start_main = 0x804838e;

void fun_8048388(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t strncmp = 0x80483de;

int32_t fun_80483d8(int32_t a1, int32_t a2, int32_t a3) {
    goto strncmp;
}

int32_t printf = 0x80483be;

void fun_80483b8(int32_t a1, int32_t* a2, int32_t* a3, int32_t a4) {
    goto printf;
}

int32_t sscanf = 0x80483ce;

void fun_80483c8(void* a1, int32_t* a2, int32_t* a3) {
    goto sscanf;
}

int32_t* dummy(int32_t a1, int32_t* a2, int32_t* a3);

int32_t LOL = 0;

void fun_80483e8(int32_t a1, int32_t* a2, int32_t* a3, int32_t a4);

int32_t* parell(void* a1, int32_t* a2, int32_t* a3) {
    void* ebp4;
    int32_t* v5;
    int32_t* v6;
    int32_t v7;
    int32_t* eax8;
    int32_t v9;
    uint32_t v10;
    int1_t zf11;
    int32_t v12;
    int32_t v13;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v5 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp4) - 4);
    fun_80483c8(a1, "%d", v5);
    v6 = a2;
    eax8 = dummy(v7, v6, v5);
    if (eax8) {
        v9 = 0;
        while (v9 <= 9) {
            if (!(v10 & 1)) {
                zf11 = LOL == 1;
                if (zf11) {
                    fun_80483b8("Password OK!\n", v6, v5, v12);
                }
                fun_80483e8(0, v6, v5, v13);
            }
            eax8 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp4) - 8);
            ++v9;
        }
    }
    return eax8;
}

int32_t exit = 0x80483ee;

void fun_80483e8(int32_t a1, int32_t* a2, int32_t* a3, int32_t a4) {
    goto exit;
}

struct s0 {
    signed char[4] pad4;
    int32_t 0x4;
};

void fun_804842d(int32_t a1) {
    int32_t eax2;
    struct s0* ebp3;

    eax2 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x1bc7 - 4);
    if (eax2) {
        eax2();
    }
    goto ebp3->0x4;
}

void che(void* a1, int32_t* a2, int32_t* a3) {
    int32_t* v4;
    int32_t* ebp5;
    int32_t* v6;
    int32_t* v7;
    void* v8;
    int32_t* v9;
    int32_t v10;
    int32_t* eax11;
    int32_t v12;
    uint32_t v13;
    int1_t zf14;
    int32_t v15;
    int32_t v16;

    fun_80483b8("Password Incorrect!\n", v4, ebp5, __return_address());
    fun_80483e8(0, v6, ebp5, __return_address());
    v7 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8 - 4 + 4 - 4 + 4 - 4 - 4);
    fun_80483c8(v8, "%d", v7);
    v9 = ebp5;
    eax11 = dummy(v10, v9, v7);
    if (eax11) {
        v12 = 0;
        while (v12 <= 9) {
            if (!(v13 & 1)) {
                zf14 = LOL == 1;
                if (zf14) {
                    fun_80483b8("Password OK!\n", v9, v7, v15);
                }
                fun_80483e8(0, v9, v7, v16);
            }
            ++v12;
        }
    }
    goto 0;
}

uint32_t fun_80483a8(void* a1, int32_t* a2, int32_t* a3);

int32_t* check(void* a1, int32_t* a2) {
    void* ebp3;
    int32_t v4;
    uint32_t v5;
    int32_t* v6;
    int32_t* v7;
    uint32_t eax8;
    int32_t v9;
    int32_t* v10;
    int32_t v11;
    int32_t* eax12;
    int32_t v13;
    uint32_t v14;
    int32_t v15;
    int32_t v16;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v4 = 0;
    v5 = 0;
    while (eax8 = fun_80483a8(a1, v6, v7), v5 < eax8) {
        v7 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp3) - 4);
        v6 = reinterpret_cast<int32_t*>("%d");
        fun_80483c8(reinterpret_cast<int32_t>(ebp3) - 13, "%d", v7);
        v4 = v4 + v9;
        if (v4 == 16) {
            v6 = a2;
            parell(a1, v6, v7);
        }
        ++v5;
    }
    che(a1, v6, v7);
    v10 = a2;
    eax12 = dummy(v11, v10, v7);
    if (eax12) {
        v13 = 0;
        while (v13 <= 9) {
            if (!(v14 & 1)) {
                fun_80483b8("wtf?\n", v10, v7, v15);
                fun_80483e8(0, v10, v7, v16);
            }
            eax12 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp3) - 12);
            ++v13;
        }
    }
    return eax12;
}

int32_t* dummy(int32_t a1, int32_t* a2, int32_t* a3) {
    int32_t v4;
    int32_t ecx5;
    int32_t v6;
    int32_t eax7;
    int32_t* v8;

    v4 = 0;
    do {
        if (!a2[v4]) 
            break;
        ecx5 = v4 * 4;
        ++v4;
        v6 = *reinterpret_cast<int32_t*>(ecx5 + reinterpret_cast<int32_t>(a2));
        eax7 = fun_80483d8(v6, "LOLO", 3);
    } while (eax7);
    goto addr_8048505_4;
    v8 = reinterpret_cast<int32_t*>(0);
    addr_804851f_6:
    return v8;
    addr_8048505_4:
    LOL = 1;
    v8 = reinterpret_cast<int32_t*>(1);
    goto addr_804851f_6;
}

/* __i686.get_pc_thunk.bx */
void __i686_get_pc_thunk_bx() {
    return;
}

void __do_global_dtors_aux();

struct s1 {
    signed char[4] pad4;
    int32_t 0x4;
};

void fun_804878d(int32_t a1, int32_t a2, int32_t a3) {
    struct s1* ebp4;

    __do_global_dtors_aux();
    goto ebp4->0x4;
}

int32_t scanf = 0x804839e;

void fun_8048398(int32_t a1, void* a2) {
    goto scanf;
}

int32_t strlen = 0x80483ae;

uint32_t fun_80483a8(void* a1, int32_t* a2, int32_t* a3) {
    goto strlen;
}

signed char _edata = 0;

/* p.0 */
int32_t* p_0 = reinterpret_cast<int32_t*>(0x8049f18);

void __do_global_dtors_aux() {
    int1_t zf1;
    int32_t* eax2;
    int32_t edx3;

    zf1 = _edata == 0;
    if (zf1) {
        while (eax2 = p_0, edx3 = *eax2, !!edx3) {
            p_0 = eax2 + 1;
            edx3();
        }
        _edata = 1;
    }
    return;
}

int32_t main();

void __libc_csu_init(int32_t a1, int32_t a2, int32_t a3);

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_8048388(main, __return_address(), esp1, __libc_csu_init, 0x8048750, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_8048384() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8048743() {
    return;
}

void _fini() {
    int32_t ebx1;
    int32_t ebp2;

    fun_804878d(ebx1, ebp2, __return_address());
}

int32_t g8049ffc = 0;

void fun_804838e() {
    goto g8049ffc;
}

void fun_80483de() {
    goto 0x8048378;
}

void fun_80483be() {
    goto 0x8048378;
}

void fun_80483ce() {
    goto 0x8048378;
}

int32_t main() {
    void* ebp1;
    int32_t* v2;
    int32_t* v3;
    int32_t v4;
    int32_t* v5;
    int32_t* v6;
    int32_t v7;
    int32_t* v8;

    ebp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_80483b8("IOLI Crackme Level 0x08\n", v2, v3, v4);
    fun_80483b8("Password: ", v5, v6, v7);
    fun_8048398("%s", reinterpret_cast<int32_t>(ebp1) - 0x78);
    check(reinterpret_cast<int32_t>(ebp1) - 0x78, v8);
    return 0;
}

void fun_80483ee() {
    goto 0x8048378;
}

void __libc_csu_init(int32_t a1, int32_t a2, int32_t a3) {
    uint32_t esi4;
    int32_t ebx5;
    int32_t ebx6;
    int32_t* eax7;
    int32_t* edx8;
    int32_t* v9;
    int32_t* edi10;

    esi4 = 0;
    __i686_get_pc_thunk_bx();
    ebx5 = ebx6 + 0x1907;
    _init();
    eax7 = reinterpret_cast<int32_t*>(ebx5 - 0xe8);
    edx8 = reinterpret_cast<int32_t*>(ebx5 - 0xe8);
    v9 = eax7;
    if (0 < reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax7) - reinterpret_cast<int32_t>(edx8) >> 2)) {
        edi10 = edx8;
        do {
            edx8[esi4](a1, a2, a3);
            ++esi4;
            edx8 = edi10;
        } while (esi4 < reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(v9) - reinterpret_cast<int32_t>(edi10) >> 2));
    }
    return;
}

void fun_804839e() {
    goto 0x8048378;
}

void fun_80483ae() {
    goto 0x8048378;
}
