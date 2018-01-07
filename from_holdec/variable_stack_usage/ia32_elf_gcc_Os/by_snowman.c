
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx();

void fun_80482d0();

void _init() {
    int32_t ebx1;

    __x86_get_pc_thunk_bx();
    if (*reinterpret_cast<int32_t*>(ebx1 + 0x1d6b - 4)) {
        fun_80482d0();
    }
    return;
}

/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

int32_t __gmon_start__ = 0;

void fun_80482d0() {
    goto __gmon_start__;
}

struct s0 {
    int32_t f0;
    signed char* f4;
    int32_t f8;
};

void fill(signed char* a1, int32_t a2);

struct s1 {
    int32_t f0;
    int32_t* f4;
};

void use(int32_t* a1);

struct s2 {
    int32_t f0;
    int32_t* f4;
};

struct s3 {
    int32_t f0;
    int32_t* f4;
};

void with_alloca(int32_t a1) {
    void* esp2;
    uint32_t eax3;
    void* esp4;
    uint32_t* esp5;
    uint32_t* esp6;
    int32_t* esp7;
    int32_t* edx8;
    int32_t** esp9;
    struct s0* esp10;
    signed char** esp11;
    struct s1* esp12;
    int32_t** esp13;
    struct s2* esp14;
    int32_t** esp15;
    struct s3* esp16;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax3 = reinterpret_cast<uint32_t>(a1 * 4 + 30) & 0xfffffff0;
    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 24 - eax3);
    esp5 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(esp4) - 4);
    *esp5 = eax3;
    esp6 = esp5 - 1;
    *esp6 = eax3;
    esp7 = reinterpret_cast<int32_t*>(esp6 - 1);
    *esp7 = a1;
    edx8 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esp4) + 15 & 0xfffffff0);
    esp9 = reinterpret_cast<int32_t**>(esp7 - 1);
    *esp9 = edx8;
    esp10 = reinterpret_cast<struct s0*>(esp9 - 1);
    esp10->f0 = 0x80484a7;
    fill(esp10->f4, esp10->f8);
    esp11 = &esp10->f4;
    *esp11 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp2) - 16);
    esp12 = reinterpret_cast<struct s1*>(esp11 - 1);
    esp12->f0 = 0x80484b2;
    use(esp12->f4);
    esp13 = &esp12->f4;
    *esp13 = edx8;
    esp14 = reinterpret_cast<struct s2*>(esp13 - 1);
    esp14->f0 = 0x80484ba;
    use(esp14->f4);
    esp15 = &esp14->f4;
    *esp15 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp2) - 12);
    esp16 = reinterpret_cast<struct s3*>(esp15 - 1);
    esp16->f0 = 0x80484c5;
    use(esp16->f4);
    return;
}

struct s4 {
    int32_t f0;
    signed char* f4;
    int32_t f8;
};

struct s5 {
    int32_t f0;
    int32_t* f4;
};

struct s6 {
    int32_t f0;
    int32_t* f4;
};

struct s7 {
    int32_t f0;
    int32_t* f4;
};

void with_array(int32_t a1) {
    void* esp2;
    uint32_t eax3;
    int32_t* esp4;
    uint32_t* esp5;
    uint32_t* esp6;
    int32_t* esp7;
    int32_t** esp8;
    struct s4* esp9;
    signed char** esp10;
    struct s5* esp11;
    int32_t** esp12;
    struct s6* esp13;
    int32_t** esp14;
    struct s7* esp15;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax3 = reinterpret_cast<uint32_t>(a1 * 4 + 18) & 0xfffffff0;
    esp4 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp2) - 24 - eax3);
    esp5 = reinterpret_cast<uint32_t*>(esp4 - 1);
    *esp5 = eax3;
    esp6 = esp5 - 1;
    *esp6 = eax3;
    esp7 = reinterpret_cast<int32_t*>(esp6 - 1);
    *esp7 = a1;
    esp8 = reinterpret_cast<int32_t**>(esp7 - 1);
    *esp8 = esp4;
    esp9 = reinterpret_cast<struct s4*>(esp8 - 1);
    esp9->f0 = 0x8048451;
    fill(esp9->f4, esp9->f8);
    esp10 = &esp9->f4;
    *esp10 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp2) - 16);
    esp11 = reinterpret_cast<struct s5*>(esp10 - 1);
    esp11->f0 = 0x804845c;
    use(esp11->f4);
    esp12 = &esp11->f4;
    *esp12 = esp4;
    esp13 = reinterpret_cast<struct s6*>(esp12 - 1);
    esp13->f0 = 0x8048464;
    use(esp13->f4);
    esp14 = &esp13->f4;
    *esp14 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp2) - 12);
    esp15 = reinterpret_cast<struct s7*>(esp14 - 1);
    esp15->f0 = 0x804846f;
    use(esp15->f4);
    return;
}

int32_t __libc_start_main(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;

    eax1 = 3;
    if (!1 && (eax1 = 0, !1)) {
        eax1 = __libc_start_main(0x804a014, v2);
    }
    return eax1;
}

int32_t sum = 0;

void use(int32_t* a1) {
    int32_t tmp32_2;

    tmp32_2 = sum + *a1;
    sum = tmp32_2;
    return;
}

void fill(signed char* a1, int32_t a2) {
    signed char* edi3;
    int32_t ecx4;

    edi3 = a1;
    ecx4 = a2 * 4;
    while (ecx4) {
        --ecx4;
        *edi3 = 0x78;
        ++edi3;
    }
    return;
}

int32_t __libc_start_main = 0x80482c6;

void fun_80482c0(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t main(int32_t a1) {
    with_alloca(a1);
    with_array(a1);
    return 0;
}

void _fini() {
    __x86_get_pc_thunk_bx();
    return;
}

void fun_80482bc() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void __libc_csu_init(int32_t a1, int32_t a2);

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482c0(main, __return_address(), esp1, __libc_csu_init, 0x8048530, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

int32_t __JCR_END__ = 0;

int32_t frame_dummy() {
    int32_t edx1;
    int32_t v2;
    int32_t eax3;

    edx1 = __JCR_END__;
    if (!(!edx1 || 1)) {
        __libc_start_main(0x8049f10, v2);
    }
    eax3 = 0;
    if (!1 && !1) {
        eax3 = __libc_start_main(0x804a014, 0);
    }
    return eax3;
}

void fun_80483dd() {
}

void fun_804852d() {
    return;
}

int32_t g804a008 = 0;

void fun_80482c6() {
    goto g804a008;
}

void __libc_csu_init(int32_t a1, int32_t a2) {
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t esi6;
    int32_t edi7;
    int32_t esi8;

    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x1b27;
    ebp5 = a1;
    _init();
    esi6 = ebx3 - 0xf4 - (ebx3 - 0xf8) >> 2;
    if (esi6) {
        edi7 = 0;
        esi8 = esi6;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi7 * 4 - 0xf8)(ebp5, a1, a2, 0x80484f1);
            ++edi7;
        } while (esi8 != edi7);
    }
    return;
}

void fun_804836c() {
}

signed char __TMC_END__ = 0;

int32_t fun_80483a5() {
    int1_t zf1;
    int32_t eax2;

    zf1 = __TMC_END__ == 0;
    if (zf1) {
        eax2 = deregister_tm_clones();
        __TMC_END__ = 1;
    }
    return eax2;
}
