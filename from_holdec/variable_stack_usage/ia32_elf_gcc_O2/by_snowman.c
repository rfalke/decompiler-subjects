
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

struct s0 {
    int32_t f0;
    void* f4;
};

void fill();

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
    void* esp3;
    int32_t* esp4;
    int32_t* ebx5;
    int32_t** esp6;
    struct s0* esp7;
    void** esp8;
    struct s1* esp9;
    int32_t** esp10;
    struct s2* esp11;
    int32_t** esp12;
    struct s3* esp13;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 20 - (reinterpret_cast<uint32_t>(a1 * 4 + 30) & 0xfffffff0));
    esp4 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esp3) - 8 - 4);
    *esp4 = a1;
    ebx5 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esp3) + 15 & 0xfffffff0);
    esp6 = reinterpret_cast<int32_t**>(esp4 - 1);
    *esp6 = ebx5;
    esp7 = reinterpret_cast<struct s0*>(esp6 - 1);
    esp7->f0 = 0x8048505;
    fill();
    esp8 = &esp7->f4;
    *esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 16);
    esp9 = reinterpret_cast<struct s1*>(esp8 - 1);
    esp9->f0 = 0x8048510;
    use(esp9->f4);
    esp10 = &esp9->f4;
    *esp10 = ebx5;
    esp11 = reinterpret_cast<struct s2*>(esp10 - 1);
    esp11->f0 = 0x8048518;
    use(esp11->f4);
    esp12 = &esp11->f4;
    *esp12 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp2) - 12);
    esp13 = reinterpret_cast<struct s3*>(esp12 - 1);
    esp13->f0 = 0x8048523;
    use(esp13->f4);
    return;
}

struct s4 {
    int32_t f0;
    void* f4;
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
    int32_t* esp3;
    int32_t* esp4;
    int32_t** esp5;
    struct s4* esp6;
    void** esp7;
    struct s5* esp8;
    int32_t** esp9;
    struct s6* esp10;
    int32_t** esp11;
    struct s7* esp12;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    esp3 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp2) - 4 - 20 - (reinterpret_cast<uint32_t>(a1 * 4 + 18) & 0xfffffff0));
    esp4 = esp3 - 2 - 1;
    *esp4 = a1;
    esp5 = reinterpret_cast<int32_t**>(esp4 - 1);
    *esp5 = esp3;
    esp6 = reinterpret_cast<struct s4*>(esp5 - 1);
    esp6->f0 = 0x80484a0;
    fill();
    esp7 = &esp6->f4;
    *esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 16);
    esp8 = reinterpret_cast<struct s5*>(esp7 - 1);
    esp8->f0 = 0x80484ab;
    use(esp8->f4);
    esp9 = &esp8->f4;
    *esp9 = esp3;
    esp10 = reinterpret_cast<struct s6*>(esp9 - 1);
    esp10->f0 = 0x80484b3;
    use(esp10->f4);
    esp11 = &esp10->f4;
    *esp11 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp2) - 12);
    esp12 = reinterpret_cast<struct s7*>(esp11 - 1);
    esp12->f0 = 0x80484be;
    use(esp12->f4);
    return;
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

void fun_80482f0(int32_t a1, int32_t a2, int32_t a3);

void fill() {
    int32_t v1;

    fun_80482f0(__return_address(), 0x78, v1 << 2);
    return;
}

int32_t sum = 0;

void use(int32_t* a1) {
    int32_t tmp32_2;

    tmp32_2 = sum + *a1;
    sum = tmp32_2;
    return;
}

int32_t __libc_start_main = 0x80482e6;

void fun_80482e0(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t memset = 0x80482f6;

void fun_80482f0(int32_t a1, int32_t a2, int32_t a3) {
    goto memset;
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

void __libc_csu_init(int32_t a1, int32_t a2);

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482e0(main, __return_address(), esp1, __libc_csu_init, 0x8048590, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
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

void fun_804841d() {
}

void fun_804858d() {
    return;
}

int32_t g804a008 = 0;

void fun_80482e6() {
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
    ebx3 = ebx4 + 0x1ac7;
    ebp5 = a1;
    _init();
    esi6 = ebx3 - 0xf4 - (ebx3 - 0xf8) >> 2;
    if (esi6) {
        edi7 = 0;
        esi8 = esi6;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi7 * 4 - 0xf8)(ebp5, a1, a2, 0x8048551);
            ++edi7;
        } while (esi8 != edi7);
    }
    return;
}

void fun_80484c6() {
}

void fun_80483ac() {
}

signed char __TMC_END__ = 0;

int32_t fun_80483e5() {
    int1_t zf1;
    int32_t eax2;

    zf1 = __TMC_END__ == 0;
    if (zf1) {
        eax2 = deregister_tm_clones();
        __TMC_END__ = 1;
    }
    return eax2;
}

void fun_804846a() {
}

void fun_804844d() {
}

void fun_80482f6() {
    goto 0x80482d0;
}
