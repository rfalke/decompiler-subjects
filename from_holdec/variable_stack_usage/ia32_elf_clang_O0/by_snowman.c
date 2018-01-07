
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx();

void fun_8048300();

void _init() {
    int32_t ebx1;

    __x86_get_pc_thunk_bx();
    if (*reinterpret_cast<int32_t*>(ebx1 + 0x1d4b - 4)) {
        fun_8048300();
    }
    return;
}

/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

int32_t __gmon_start__ = 0;

void fun_8048300() {
    goto __gmon_start__;
}

int32_t __libc_start_main = 0x80482e6;

void fun_80482e0(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t memset(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;

    eax1 = 3;
    if (!1 && (eax1 = 0, !1)) {
        eax1 = memset(0x804a018, v2);
    }
    return eax1;
}

int32_t memset = 0x80482f6;

void fun_80482f0(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto memset;
}

void fill(int32_t a1, int32_t a2) {
    fun_80482f0(a1, 0x78, a2 << 2, 0x78);
    return;
}

int32_t sum = 0;

void use(int32_t* a1) {
    int32_t tmp32_2;

    tmp32_2 = *a1 + sum;
    sum = tmp32_2;
    return;
}

struct s0 {
    void* f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

struct s2 {
    int32_t f0;
    int32_t* f4;
};

struct s3 {
    int32_t f0;
    int32_t* f4;
};

struct s4 {
    int32_t f0;
    int32_t* f4;
};

void with_alloca(int32_t a1) {
    void* esp2;
    void* ecx3;
    struct s0* esp4;
    struct s1* esp5;
    void** esp6;
    struct s2* esp7;
    void** esp8;
    struct s3* esp9;
    void** esp10;
    struct s4* esp11;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ecx3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 24 - (reinterpret_cast<uint32_t>(a1 * 4 + 15) & 0xfffffff0));
    esp4 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ecx3) - 16);
    esp4->f0 = ecx3;
    esp4->f4 = a1;
    esp5 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(esp4) - 4);
    esp5->f0 = 0x8048535;
    fill(esp5->f4, esp5->f8);
    esp6 = reinterpret_cast<void**>(&esp5->f4 + 4 - 4);
    *esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 8);
    esp7 = reinterpret_cast<struct s2*>(esp6 - 1);
    esp7->f0 = 0x8048546;
    use(esp7->f4);
    esp8 = reinterpret_cast<void**>(&esp7->f4 + 4 - 4);
    *esp8 = ecx3;
    esp9 = reinterpret_cast<struct s3*>(esp8 - 1);
    esp9->f0 = 0x8048557;
    use(esp9->f4);
    esp10 = reinterpret_cast<void**>(&esp9->f4 + 4 - 4);
    *esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 16);
    esp11 = reinterpret_cast<struct s4*>(esp10 - 1);
    esp11->f0 = 0x8048568;
    use(esp11->f4);
    return;
}

struct s5 {
    int32_t* f0;
    int32_t f4;
};

struct s6 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

struct s7 {
    int32_t f0;
    int32_t* f4;
};

struct s8 {
    int32_t f0;
    int32_t* f4;
};

struct s9 {
    int32_t f0;
    int32_t* f4;
};

void* with_array(int32_t a1) {
    void* esp2;
    void* esp3;
    int32_t* ecx4;
    struct s5* esp5;
    struct s6* esp6;
    void** esp7;
    struct s7* esp8;
    int32_t** esp9;
    struct s8* esp10;
    void** esp11;
    struct s9* esp12;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 24);
    ecx4 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp3) - (reinterpret_cast<uint32_t>(a1 * 4 + 15) & 0xfffffff0));
    esp5 = reinterpret_cast<struct s5*>(ecx4 - 4);
    esp5->f0 = ecx4;
    esp5->f4 = a1;
    esp6 = reinterpret_cast<struct s6*>(reinterpret_cast<uint32_t>(esp5) - 4);
    esp6->f0 = 0x80484b7;
    fill(esp6->f4, esp6->f8);
    esp7 = reinterpret_cast<void**>(&esp6->f4 + 4 - 4);
    *esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 8);
    esp8 = reinterpret_cast<struct s7*>(esp7 - 1);
    esp8->f0 = 0x80484c8;
    use(esp8->f4);
    esp9 = &esp8->f4;
    *esp9 = ecx4;
    esp10 = reinterpret_cast<struct s8*>(esp9 - 1);
    esp10->f0 = 0x80484d3;
    use(esp10->f4);
    esp11 = reinterpret_cast<void**>(&esp10->f4 + 4 - 4);
    *esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 16);
    esp12 = reinterpret_cast<struct s9*>(esp11 - 1);
    esp12->f0 = 0x80484e4;
    use(esp12->f4);
    return esp3;
}

int32_t main(int32_t a1, int32_t a2);

void __libc_csu_init(int32_t a1, int32_t a2);

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482e0(main, __return_address(), esp1, __libc_csu_init, 0x8048610, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void _fini() {
    __x86_get_pc_thunk_bx();
    return;
}

void fun_80482dc() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

int32_t __JCR_END__ = 0;

int32_t frame_dummy() {
    int32_t edx1;
    int32_t v2;
    int32_t eax3;

    edx1 = __JCR_END__;
    if (!(!edx1 || 1)) {
        memset(0x8049f10, v2);
    }
    eax3 = 0;
    if (!1 && !1) {
        eax3 = memset(0x804a018, 0);
    }
    return eax3;
}

void fun_80483ed() {
}

void fun_804860d() {
    return;
}

int32_t g804a008 = 0;

void fun_80482e6() {
    goto g804a008;
}

void fun_804837c() {
}

signed char __TMC_END__ = 0;

int32_t fun_80483b5() {
    int1_t zf1;
    int32_t eax2;

    zf1 = __TMC_END__ == 0;
    if (zf1) {
        eax2 = deregister_tm_clones();
        __TMC_END__ = 1;
    }
    return eax2;
}

void fun_80482f6() {
    goto 0x80482d0;
}

int32_t main(int32_t a1, int32_t a2) {
    with_alloca(a1);
    with_array(a1);
    return 0;
}

void __libc_csu_init(int32_t a1, int32_t a2) {
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t esi6;
    int32_t edi7;
    int32_t esi8;

    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x1a47;
    ebp5 = a1;
    _init();
    esi6 = ebx3 - 0xf4 - (ebx3 - 0xf8) >> 2;
    if (esi6) {
        edi7 = 0;
        esi8 = esi6;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi7 * 4 - 0xf8)(ebp5, a1, a2, 0x80485d1);
            ++edi7;
        } while (esi8 != edi7);
    }
    return;
}
