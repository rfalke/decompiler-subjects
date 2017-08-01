
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

void fun_8048651(int32_t a1);

int32_t call_gmon_start() {
    int32_t ebx1;
    int32_t eax2;
    int32_t edx3;

    fun_8048651(ebx1);
    eax2 = *reinterpret_cast<int32_t*>(ebx1 + 0x1463 - 4);
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
        __gmon_start__(0x80499c8);
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
    ebx3 = reinterpret_cast<int32_t*>(0x80499b8);
    eax4 = __preinit_array_start;
    while (eax4 != -1) {
        --ebx3;
        eax4();
        eax4 = *ebx3;
    }
    return v1;
}

int32_t fun_8048961(int32_t a1);

void __do_global_dtors_aux();

void _fini() {
    int32_t ebx1;

    fun_8048961(ebx1);
    __do_global_dtors_aux();
    return;
}

int32_t __cxa_atexit = 0x80485aa;

void fun_80485a4(int32_t a1, int32_t a2, int32_t a3) {
    goto __cxa_atexit;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048651(int32_t a1) {
    int32_t eax2;
    struct s0* ebp3;

    eax2 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x1463 - 4);
    if (eax2) {
        eax2();
    }
    goto ebp3->f4;
}

int32_t s_wsle = 0x804861a;

void fun_8048614(int32_t a1) {
    goto s_wsle;
}

int32_t do_lio = 0x804856a;

void fun_8048564(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5) {
    goto do_lio;
}

int32_t e_wsle = 0x804857a;

void fun_8048574(int32_t a1) {
    goto e_wsle;
}

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80488cb(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t ebx6;
    int32_t* edi7;
    int32_t esi8;
    struct s1* ebp9;

    ebx6 = reinterpret_cast<int32_t>(__return_address()) + 0x11e9;
    edi7 = reinterpret_cast<int32_t*>(ebx6 - 0xfc);
    esi8 = (ebx6 - 0xfc - reinterpret_cast<int32_t>(edi7) >> 2) - 1;
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

int32_t fun_8048961(int32_t a1) {
    struct s2* ebp2;

    __do_global_dtors_aux();
    goto ebp2->f4;
}

struct s3 {
    signed char[8] pad8;
    int32_t f8;
};

struct s4 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_804890d() {
    int32_t eax1;
    int32_t v2;
    struct s3* ebp3;
    struct s4* ebp4;

    eax1 = 0;
    if (*reinterpret_cast<int32_t**>(reinterpret_cast<int32_t>(__return_address()) + 0x11a7 - 8)) {
        eax1 = **reinterpret_cast<int32_t**>(reinterpret_cast<int32_t>(__return_address()) + 0x11a7 - 8);
    }
    v2 = ebp3->f8;
    fun_80485a4(v2, 0, eax1);
    goto ebp4->f4;
}

int32_t s_rsle = 0x804859a;

void fun_8048594(int32_t a1, int32_t a2, void* a3, int32_t a4) {
    goto s_rsle;
}

int32_t e_rsle = 0x80485ba;

void fun_80485b4() {
    goto e_rsle;
}

signed char _edata = 0;

/* p.0 */
int32_t* p_0 = reinterpret_cast<int32_t*>(0x80499c4);

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

int32_t f_setarg = 0x804860a;

void fun_8048604(int32_t a1, int32_t a2) {
    goto f_setarg;
}

int32_t f_setsig = 0x80485ea;

void fun_80485e4(int32_t a1, int32_t a2) {
    goto f_setsig;
}

int32_t f_init = 0x80485da;

void fun_80485d4(int32_t a1, int32_t a2) {
    goto f_init;
}

void atexit(int32_t a1, int32_t a2) {
    int32_t eax3;
    int32_t ebx4;

    fun_804890d();
    eax3 = 0;
    if (*reinterpret_cast<int32_t**>(ebx4 + 0x11a7 - 8)) {
        eax3 = **reinterpret_cast<int32_t**>(ebx4 + 0x11a7 - 8);
    }
    fun_80485a4(a1, 0, eax3);
    return;
}

void fun_8048760();

void fun_8048793();

void fun_80487c3();

void fun_80487f3();

void MAIN__(int32_t a1, int32_t a2) {
    int32_t v3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;

    fun_8048614(0x8049afc);
    fun_8048564("\t", 0x80489a8, "Input num:Input out of rangeTwo!Three!Four!", 10, v3);
    fun_8048574(v4);
    fun_8048594(0x8049b10, 0x80489a8, "Input num:Input out of rangeTwo!Three!Four!", 0x8048700);
    fun_8048564(0x80489b0, 0x80489a8, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4, 4, v5);
    fun_80485b4();
    v6 = reinterpret_cast<int32_t>(fun_8048760);
    if (v7 == 2) {
        v6 = reinterpret_cast<int32_t>(fun_8048793);
    }
    if (v8 == 3) {
        v6 = reinterpret_cast<int32_t>(fun_80487c3);
    }
    if (v9 == 4) {
        v6 = reinterpret_cast<int32_t>(fun_80487f3);
    }
    goto v6;
}

int32_t exit = 0x80485fa;

void fun_80485f4(int32_t a1, int32_t a2) {
    goto exit;
}

struct s5 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_804887a() {
    int32_t ebx1;
    int32_t* eax2;
    int32_t* edx3;
    int32_t ebp4;
    int32_t* edi5;
    uint32_t esi6;
    int32_t ebp7;
    struct s5* ebp8;

    ebx1 = reinterpret_cast<int32_t>(__return_address()) + 0x123a;
    _init();
    eax2 = reinterpret_cast<int32_t*>(ebx1 - 0xfc);
    edx3 = reinterpret_cast<int32_t*>(ebx1 - 0xfc);
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

int32_t __libc_start_main = 0x80485ca;

void fun_80485c4(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

void fun_8048560() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_804867d() {
}

struct s6 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048760() {
    struct s6* ebp1;

    fun_8048614(0x8049b24);
    fun_8048564("\t", 0x80489a8, "Input out of rangeTwo!Three!Four!", 18, __return_address());
    fun_8048574(__return_address());
    goto ebp1->f4;
}

void fun_80488be() {
    int32_t ebx1;
    int32_t esi2;
    int32_t edi3;
    int32_t ebp4;

    fun_80488cb(ebx1, esi2, edi3, ebp4, __return_address());
}

void fun_8048945() {
}

int32_t g8049abc = 0;

void fun_804856a() {
    goto g8049abc;
}

void fun_804869e() {
}

void fun_8048793() {
    fun_8048614(0x8049b38);
    fun_8048564("\t", 0x80489a8, "Two!Three!Four!", 4, __return_address());
    fun_8048574(__return_address());
    goto 0x8048821;
}

void fun_80485aa() {
    goto 0x8048554;
}

void fun_804861a() {
    goto 0x8048554;
}

void fun_804857a() {
    goto 0x8048554;
}

void f_exit();

void main(int32_t a1, int32_t a2) {
    fun_8048604(a1, a2);
    fun_80485e4(a1, a2);
    fun_80485d4(a1, a2);
    atexit(f_exit, a2);
    MAIN__(f_exit, a2);
    fun_80485f4(0, a2);
    fun_804887a();
}

void fun_80487c3() {
    fun_8048614(0x8049b4c);
    fun_8048564("\t", 0x80489a8, "Three!Four!", 6, __return_address());
    fun_8048574(__return_address());
    goto 0x8048821;
}

void fun_804859a() {
    goto 0x8048554;
}

void fun_80485ba() {
    goto 0x8048554;
}

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80485c4(main, __return_address(), esp1, 0x804886c, 0x80488c0, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

int32_t f_exit = 0x804858a;

void f_exit() {
    goto f_exit;
}

void fun_80487f3() {
    fun_8048614(0x8049b60);
    fun_8048564("\t", 0x80489a8, "Four!", 5, __return_address());
    fun_8048574(__return_address());
}

void fun_804858a() {
    goto 0x8048554;
}

void fun_804860a() {
    goto 0x8048554;
}

void fun_80485ea() {
    goto 0x8048554;
}

void fun_80485da() {
    goto 0x8048554;
}

void fun_80485fa() {
    goto 0x8048554;
}

void fun_80485ca() {
    goto 0x8048554;
}
