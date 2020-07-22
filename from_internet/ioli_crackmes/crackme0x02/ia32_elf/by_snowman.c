
int32_t fun_8048354();

int32_t frame_dummy();

int32_t __do_global_ctors_aux();

int32_t _init() {
    int32_t eax1;

    fun_8048354();
    frame_dummy();
    eax1 = __do_global_ctors_aux();
    return eax1;
}

void fun_804835d(int32_t a1);

int32_t fun_8048354() {
    int32_t ebx1;
    int32_t eax2;
    int32_t edx3;

    fun_804835d(ebx1);
    eax2 = *reinterpret_cast<int32_t*>(ebx1 + 0x1c97 - 4);
    if (eax2) {
        eax2();
    }
    return edx3;
}

int32_t __JCR_END__ = 0;

int32_t printf(int32_t a1);

int32_t frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && (eax1 = 0, !1)) {
        eax1 = printf(0x8049f1c);
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

int32_t __libc_start_main = 0x8048302;

void fun_80482fc(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t printf = 0x8048322;

void fun_804831c(int32_t a1, void* a2) {
    goto printf;
}

struct s0 {
    signed char[4] pad4;
    int32_t 0x4;
};

void fun_804835d(int32_t a1) {
    int32_t eax2;
    struct s0* ebp3;

    eax2 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x1c97 - 4);
    if (eax2) {
        eax2();
    }
    goto ebp3->0x4;
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

void fun_804852d(int32_t a1, int32_t a2, int32_t a3) {
    struct s1* ebp4;

    __do_global_dtors_aux();
    goto ebp4->0x4;
}

int32_t scanf = 0x8048312;

void fun_804830c(int32_t a1, void* a2) {
    goto scanf;
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
    fun_80482fc(main, __return_address(), esp1, __libc_csu_init, 0x80484f0, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_80482f8() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_80484e3() {
    return;
}

void _fini() {
    int32_t ebx1;
    int32_t ebp2;

    fun_804852d(ebx1, ebp2, __return_address());
}

int32_t g8049ffc = 0;

void fun_8048302() {
    goto g8049ffc;
}

int32_t main() {
    void* v1;
    void* v2;
    void* v3;
    int32_t v4;

    fun_804831c("IOLI Crackme Level 0x02\n", v1);
    fun_804831c("Password: ", v2);
    v3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4);
    fun_804830c("%d", v3);
    if (v4 != 0x52b24) {
        fun_804831c("Invalid Password!\n", v3);
    } else {
        fun_804831c("Password OK :)\n", v3);
    }
    return 0;
}

void fun_8048322() {
    goto 0x80482ec;
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
    ebx5 = ebx6 + 0x1b67;
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

void fun_8048312() {
    goto 0x80482ec;
}
