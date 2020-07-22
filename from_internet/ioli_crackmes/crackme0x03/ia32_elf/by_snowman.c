
int32_t fun_8048384();

int32_t frame_dummy();

int32_t __do_global_ctors_aux();

int32_t _init() {
    int32_t eax1;

    fun_8048384();
    frame_dummy();
    eax1 = __do_global_ctors_aux();
    return eax1;
}

void fun_804838d(int32_t a1);

int32_t fun_8048384() {
    int32_t ebx1;
    int32_t eax2;
    int32_t edx3;

    fun_804838d(ebx1);
    eax2 = *reinterpret_cast<int32_t*>(ebx1 + 0x1c67 - 4);
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

uint32_t fun_8048340(void* a1);

void fun_8048350(int32_t a1, void* a2);

void shift(void* a1) {
    void* ebp2;
    uint32_t v3;
    uint32_t eax4;
    uint32_t eax5;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v3 = 0;
    while (eax4 = fun_8048340(a1), v3 < eax4) {
        eax5 = *reinterpret_cast<unsigned char*>(v3 + reinterpret_cast<int32_t>(a1));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp2) - 0x78 + v3) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax5) - 3);
        ++v3;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp2) - 0x78 + v3) = 0;
    fun_8048350("%s\n", reinterpret_cast<int32_t>(ebp2) - 0x78);
    return;
}

struct s0 {
    signed char[4] pad4;
    int32_t 0x4;
};

void fun_804838d(int32_t a1) {
    int32_t eax2;
    struct s0* ebp3;

    eax2 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x1c67 - 4);
    if (eax2) {
        eax2();
    }
    goto ebp3->0x4;
}

int32_t strlen = 0x8048346;

uint32_t fun_8048340(void* a1) {
    goto strlen;
}

int32_t printf = 0x8048356;

void fun_8048350(int32_t a1, void* a2) {
    goto printf;
}

void test(int32_t a1, int32_t a2) {
    if (a1 == a2) {
        shift("Sdvvzrug#RN$$$#=,");
    } else {
        shift("Lqydolg#Sdvvzrug$");
    }
    return;
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

void fun_80485cd(int32_t a1, int32_t a2, int32_t a3) {
    struct s1* ebp4;

    __do_global_dtors_aux();
    goto ebp4->0x4;
}

int32_t scanf = 0x8048336;

void fun_8048330(int32_t a1, void* a2) {
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

int32_t __libc_start_main = 0x8048326;

void fun_8048320(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
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

void fun_8048583() {
    return;
}

void _fini() {
    int32_t ebx1;
    int32_t ebp2;

    fun_80485cd(ebx1, ebp2, __return_address());
}

int32_t g8049ffc = 0;

void fun_8048326() {
    goto g8049ffc;
}

int32_t main() {
    void* v1;
    void* v2;
    int32_t v3;

    fun_8048350("IOLI Crackme Level 0x03\n", v1);
    fun_8048350("Password: ", v2);
    fun_8048330("%d", reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4);
    test(v3, 0x52b24);
    return 0;
}

void fun_8048346() {
    goto 0x8048310;
}

void fun_8048356() {
    goto 0x8048310;
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
    ebx5 = ebx6 + 0x1ac7;
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

void fun_8048336() {
    goto 0x8048310;
}

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_8048320(main, __return_address(), esp1, __libc_csu_init, 0x8048590, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}
