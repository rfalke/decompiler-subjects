
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

void fun_80482f0(int32_t a1, int32_t a2, int32_t a3);

void fill() {
    int32_t v1;

    fun_80482f0(__return_address(), 0x78, v1 << 2);
    return;
}

int32_t memset = 0x80482f6;

void fun_80482f0(int32_t a1, int32_t a2, int32_t a3) {
    goto memset;
}

struct s0 {
    int32_t f0;
    int32_t* f4;
};

void use(int32_t* a1);

struct s1 {
    int32_t f0;
    int32_t* f4;
};

struct s2 {
    int32_t f0;
    int32_t* f4;
};

void with_array(int32_t a1) {
    void* esp2;
    void* ebx3;
    int32_t* esp4;
    void** esp5;
    int32_t* esp6;
    void** esp7;
    struct s0* esp8;
    void** esp9;
    struct s1* esp10;
    void** esp11;
    struct s2* esp12;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebx3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 - 12 - (reinterpret_cast<uint32_t>(a1 * 4 + 15) & 0xfffffff0));
    esp4 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx3) - 8 - 4);
    *esp4 = a1;
    esp5 = reinterpret_cast<void**>(esp4 - 1);
    *esp5 = ebx3;
    esp6 = reinterpret_cast<int32_t*>(esp5 - 1);
    *esp6 = 0x8048470;
    fill();
    esp7 = reinterpret_cast<void**>(esp6 + 1 + 1 - 1);
    *esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 16);
    esp8 = reinterpret_cast<struct s0*>(esp7 - 1);
    esp8->f0 = 0x804847c;
    use(esp8->f4);
    esp9 = reinterpret_cast<void**>(&esp8->f4 + 1 - 1);
    *esp9 = ebx3;
    esp10 = reinterpret_cast<struct s1*>(esp9 - 1);
    esp10->f0 = 0x8048485;
    use(esp10->f4);
    esp11 = reinterpret_cast<void**>(&esp10->f4 + 1 - 1);
    *esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 20);
    esp12 = reinterpret_cast<struct s2*>(esp11 - 1);
    esp12->f0 = 0x804848e;
    use(esp12->f4);
    return;
}

int32_t sum = 0;

void use(int32_t* a1) {
    int32_t tmp32_2;

    tmp32_2 = sum + *a1;
    sum = tmp32_2;
    return;
}

struct s3 {
    int32_t f0;
    int32_t* f4;
};

struct s4 {
    int32_t f0;
    int32_t* f4;
};

struct s5 {
    int32_t f0;
    int32_t* f4;
};

void with_alloca(int32_t a1) {
    void* esp2;
    void* edi3;
    int32_t* esp4;
    void** esp5;
    int32_t* esp6;
    void** esp7;
    struct s3* esp8;
    void** esp9;
    struct s4* esp10;
    void** esp11;
    struct s5* esp12;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    edi3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 - 12 - (reinterpret_cast<uint32_t>(a1 * 4 + 15) & 0xfffffff0));
    esp4 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi3) - 8 - 4);
    *esp4 = a1;
    esp5 = reinterpret_cast<void**>(esp4 - 1);
    *esp5 = edi3;
    esp6 = reinterpret_cast<int32_t*>(esp5 - 1);
    *esp6 = 0x80484d3;
    fill();
    esp7 = reinterpret_cast<void**>(esp6 + 1 + 1 - 1);
    *esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 20);
    esp8 = reinterpret_cast<struct s3*>(esp7 - 1);
    esp8->f0 = 0x80484dc;
    use(esp8->f4);
    esp9 = reinterpret_cast<void**>(&esp8->f4 + 1 - 1);
    *esp9 = edi3;
    esp10 = reinterpret_cast<struct s4*>(esp9 - 1);
    esp10->f0 = 0x80484e5;
    use(esp10->f4);
    esp11 = reinterpret_cast<void**>(&esp10->f4 + 1 - 1);
    *esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 16);
    esp12 = reinterpret_cast<struct s5*>(esp11 - 1);
    esp12->f0 = 0x80484ee;
    use(esp12->f4);
    return;
}

int32_t main(int32_t a1);

void __libc_csu_init(int32_t a1, int32_t a2);

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482e0(main, __return_address(), esp1, __libc_csu_init, 0x8048580, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
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

void fun_804857d() {
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

int32_t main(int32_t a1) {
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
    ebx3 = ebx4 + 0x1ad7;
    ebp5 = a1;
    _init();
    esi6 = ebx3 - 0xf4 - (ebx3 - 0xf8) >> 2;
    if (esi6) {
        edi7 = 0;
        esi8 = esi6;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi7 * 4 - 0xf8)(ebp5, a1, a2, 0x8048541);
            ++edi7;
        } while (esi8 != edi7);
    }
    return;
}
