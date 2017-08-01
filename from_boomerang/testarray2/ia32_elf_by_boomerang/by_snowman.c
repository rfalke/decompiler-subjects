
int32_t call_gmon_start();

void frame_dummy();

int32_t __do_global_ctors_aux();

int32_t _init() {
    int32_t eax1;

    call_gmon_start();
    frame_dummy();
    eax1 = __do_global_ctors_aux();
    return eax1;
}

void fun_80482ed(int32_t a1);

int32_t call_gmon_start() {
    int32_t ebx1;
    int32_t eax2;
    int32_t edx3;

    fun_80482ed(ebx1);
    eax2 = *reinterpret_cast<int32_t*>(ebx1 + 0x1347 - 4);
    if (eax2) {
        eax2();
    }
    return edx3;
}

int32_t __JCR_END__ = 0;

void __gmon_start__(int32_t a1);

void frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && !1) {
        __gmon_start__(0x8049564);
    }
    return;
}

int32_t __preinit_array_start = -1;

int32_t __do_global_ctors_aux() {
    int32_t v1;
    int32_t edx2;
    int32_t* ebx3;
    int32_t eax4;

    v1 = edx2;
    ebx3 = reinterpret_cast<int32_t*>(0x8049554);
    eax4 = __preinit_array_start;
    while (eax4 != -1) {
        --ebx3;
        eax4();
        eax4 = *ebx3;
    }
    return v1;
}

int32_t fun_80484fd(int32_t a1);

void __do_global_dtors_aux();

void _fini() {
    int32_t ebx1;

    fun_80484fd(ebx1);
    __do_global_dtors_aux();
    return;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80482ed(int32_t a1) {
    int32_t eax2;
    struct s0* ebp3;

    eax2 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x1347 - 4);
    if (eax2) {
        eax2();
    }
    goto ebp3->f4;
}

int32_t printf = 0x80482b6;

void fun_80482b0(int32_t a1, int32_t a2) {
    goto printf;
}

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048497(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t ebx6;
    int32_t* edi7;
    int32_t esi8;
    struct s1* ebp9;

    ebx6 = reinterpret_cast<int32_t>(__return_address()) + 0x119d;
    edi7 = reinterpret_cast<int32_t*>(ebx6 - 0xe0);
    esi8 = (ebx6 - 0xe0 - reinterpret_cast<int32_t>(edi7) >> 2) - 1;
    while (esi8 != -1) {
        edi7[esi8]();
        --esi8;
    }
    _fini();
    goto ebp9->f4;
}

struct s2 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t fun_80484fd(int32_t a1) {
    struct s2* ebp2;

    __do_global_dtors_aux();
    goto ebp2->f4;
}

struct s3 {
    signed char[10] pad10;
    signed char f10;
};

void fst(struct s3* a1) {
    int32_t v2;

    v2 = a1->f10;
    fun_80482b0("First element is %d\n", v2);
    return;
}

struct s4 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048446() {
    int32_t ebx1;
    int32_t* eax2;
    int32_t* edx3;
    int32_t ebp4;
    int32_t* edi5;
    uint32_t esi6;
    int32_t ebp7;
    struct s4* ebp8;

    ebx1 = reinterpret_cast<int32_t>(__return_address()) + 0x11ee;
    _init();
    eax2 = reinterpret_cast<int32_t*>(ebx1 - 0xe0);
    edx3 = reinterpret_cast<int32_t*>(ebx1 - 0xe0);
    *reinterpret_cast<int32_t**>(ebp4 - 16) = eax2;
    if (0 < reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax2) - reinterpret_cast<int32_t>(edx3) >> 2)) {
        edi5 = edx3;
        esi6 = 0;
        do {
            edx3[esi6]();
            ++esi6;
            edx3 = edi5;
        } while (esi6 < reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(ebp7 - 16) - reinterpret_cast<int32_t>(edi5) >> 2));
    }
    goto ebp8->f4;
}

signed char _edata = 0;

/* p.0 */
int32_t* p_0 = reinterpret_cast<int32_t*>(0x8049560);

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

struct s5 {
    signed char[2] pad2;
    signed char f2;
};

void mid(struct s5* a1) {
    int32_t v2;

    v2 = a1->f2;
    fun_80482b0("Middle elment is %d\n", v2);
    return;
}

int32_t __libc_start_main = 0x80482a6;

void fun_80482a0(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
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

void fun_8048319() {
}

void fun_804848a() {
    int32_t ebx1;
    int32_t esi2;
    int32_t edi3;
    int32_t ebp4;

    fun_8048497(ebx1, esi2, edi3, ebp4, __return_address());
}

void fun_80484e1() {
}

int32_t g804963c = 0;

void fun_80482a6() {
    goto g804963c;
}

void fun_804833a() {
}

void __libc_csu_init() {
    fun_8048446();
}

void fun_80482b6() {
    goto 0x8048290;
}

int32_t main() {
    int32_t v1;
    signed char* v2;
    int32_t v3;

    v1 = 0;
    mid(0x8049654);
    fst(0x804964a);
    v2 = reinterpret_cast<signed char*>(0x8049654);
    v3 = 0;
    while (v3 <= 4) {
        v1 = v1 + *v2;
        ++v2;
        ++v3;
    }
    fun_80482b0("Sum is %d\n", v1);
    return 0;
}

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482a0(main, __return_address(), esp1, __libc_csu_init, 0x804848c, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}
