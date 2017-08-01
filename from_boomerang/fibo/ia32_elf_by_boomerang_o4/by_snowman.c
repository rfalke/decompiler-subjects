
void __do_global_ctors_aux();

void _init(int32_t a1, void* a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    __do_global_ctors_aux();
    return;
}

int32_t atexit = 0x8048692;

void atexit(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto atexit;
}

struct s0 {
    signed char[8] pad8;
    int32_t f8;
};

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t fib(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t ebx5;
    struct s0* ebp6;
    int32_t v7;
    int32_t ebx8;
    struct s1* ebp9;

    __asm__("in eax, 0x56");
    ebx5 = ebp6->f8;
    if (ebx5 > 1) {
        v7 = ebx5 - 1;
        fib(v7, ebx8, __return_address(), a1);
        fib(ebx5 - 2, v7, ebx8, __return_address());
    }
    goto ebp9->f4;
}

void fun_804883a(int32_t a1, int32_t a2, int32_t a3);

struct s2 {
    signed char[4] pad4;
    int32_t f4;
};

void __do_global_ctors_aux() {
    int32_t v1;
    int32_t v2;
    int32_t esi3;
    int32_t ebx4;
    int32_t eax5;
    int32_t* esi6;
    int32_t eax7;
    struct s2* ebp8;

    v1 = reinterpret_cast<int32_t>(__return_address());
    __asm__("in al, dx");
    v2 = esi3;
    fun_804883a(ebx4, v2, v1);
    eax5 = ebx4 + 0x10a6 + 0xc0;
    esi6 = reinterpret_cast<int32_t*>(eax5 - 4);
    if (*reinterpret_cast<int32_t*>(eax5 - 4) != -1) {
        do {
            eax7 = *esi6;
            eax7(v2, v1);
            --esi6;
        } while (*esi6 != -1);
    }
    goto ebp8->f4;
}

void fun_8048756();

struct s3 {
    signed char[4] pad4;
    int32_t f4;
};

void __do_global_dtors_aux() {
    struct s3* eax1;
    int32_t ebx2;
    int32_t* esi3;
    int32_t eax4;

    fun_8048756();
    eax1 = reinterpret_cast<struct s3*>(ebx2 + 0x118a + 0xc4);
    esi3 = &eax1->f4;
    if (eax1->f4) {
        do {
            eax4 = *esi3;
            eax4();
            ++esi3;
        } while (*esi3);
    }
    return;
}

int32_t __fpstart = 0x80486a2;

void __fpstart(int32_t a1, void* a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    goto __fpstart;
}

void printf(int32_t a1, int32_t a2, int32_t a3);

void scanf(int32_t a1, void* a2, int32_t a3);

int32_t main(int32_t a1, void* a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    int32_t ebx8;
    int32_t esi9;
    int32_t v10;
    int32_t eax11;
    int32_t v12;
    int32_t v13;
    int32_t eax14;
    int32_t eax15;
    int32_t v16;

    printf("Input number: ", ebx8, esi9);
    scanf("%d", reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4, "Input number: ");
    if (v10 <= 1) {
        eax11 = v10;
    } else {
        v12 = v10 - 1;
        eax14 = fib(v12, ebx8, esi9, v13);
        eax15 = fib(v10 - 2, v12, ebx8, esi9);
        eax11 = eax15 + eax14;
    }
    printf("fibonacci(%d) = %d\n", v16, eax11);
    return 0;
}

int32_t exit = 0x80486b2;

void exit(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    goto exit;
}

struct s4 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048789(int32_t a1, int32_t a2, int32_t a3) {
    struct s4* ebp4;

    goto ebp4->f4;
}

int32_t printf = 0x80486c2;

void printf(int32_t a1, int32_t a2, int32_t a3) {
    goto printf;
}

struct s5 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_804886d(int32_t a1, int32_t a2, int32_t a3) {
    struct s5* ebp4;

    goto ebp4->f4;
}

struct s6 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_804883a(int32_t a1, int32_t a2, int32_t a3) {
    int32_t eax4;
    int32_t* esi5;
    int32_t eax6;
    struct s6* ebp7;

    eax4 = reinterpret_cast<int32_t>(__return_address()) + 0x10a6 + 0xc0;
    esi5 = reinterpret_cast<int32_t*>(eax4 - 4);
    if (*reinterpret_cast<int32_t*>(eax4 - 4) != -1) {
        do {
            eax6 = *esi5;
            eax6(a1, a2);
            --esi5;
        } while (*esi5 != -1);
    }
    goto ebp7->f4;
}

struct s7 {
    signed char[4] pad4;
    int32_t f4;
};

struct s8 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048756() {
    struct s7* eax1;
    int32_t* esi2;
    int32_t eax3;
    struct s8* ebp4;

    eax1 = reinterpret_cast<struct s7*>(reinterpret_cast<int32_t>(__return_address()) + 0x118a + 0xc4);
    esi2 = &eax1->f4;
    if (eax1->f4) {
        do {
            eax3 = *esi2;
            eax3();
            ++esi2;
        } while (*esi2);
    }
    goto ebp4->f4;
}

int32_t scanf = 0x80486d2;

void scanf(int32_t a1, void* a2, int32_t a3) {
    goto scanf;
}

void _fini() {
    __do_global_dtors_aux();
    return;
}

int32_t _cleanup = 0x8048682;

void fun_8048678() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    goto _cleanup;
}

void fini_dummy() {
    int32_t ebx1;
    int32_t ebp2;

    fun_8048789(ebx1, ebp2, __return_address());
}

void fun_80487bd() {
}

void fun_8048812() {
}

void init_dummy() {
    int32_t ebx1;
    int32_t ebp2;

    fun_804886d(ebx1, ebp2, __return_address());
}

int32_t g80498e8 = 0;

void fun_8048682() {
    goto g80498e8;
}

void fun_8048692() {
    goto 0x804866c;
}

void _mcount() {
    return;
}

void fun_80487c9() {
}

void fun_804882d() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    int32_t ebp4;
    int32_t ebp5;
    signed char dl6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *reinterpret_cast<signed char*>(ebp4 - 0x75) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp5 - 0x75) + dl6);
}

void fun_80486a2() {
    goto 0x804866c;
}

void fun_80486b2() {
    goto 0x804866c;
}

void fun_8048795() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    int32_t ebp4;
    int32_t ebp5;
    signed char dl6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *reinterpret_cast<signed char*>(ebp4 - 0x77) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp5 - 0x77) + dl6);
}

void fun_80486c2() {
    goto 0x804866c;
}

void fun_80486d2() {
    goto 0x804866c;
}

int32_t _environ = 0;

void fun_70(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);

void _start() {
    void* ebp1;
    int32_t edx2;
    int32_t edx3;
    void* v4;
    int32_t eax5;

    ebp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4);
    if (!0) {
        atexit(0x804867c, edx2, 0, 0);
    }
    if (!0) {
        atexit(edx2, 0, 0, __return_address());
    }
    atexit(_fini, edx2, 0, 0);
    edx3 = reinterpret_cast<int32_t>(ebp1) + reinterpret_cast<int32_t>(__return_address()) * 4 + 16;
    _environ = edx3;
    v4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp1) + 12);
    _init(__return_address(), v4, edx3, _fini, edx2, 0, 0);
    __fpstart(__return_address(), v4, edx3, _fini, edx2, 0, 0);
    eax5 = main(__return_address(), v4, edx3, _fini, edx2, 0, 0);
    exit(eax5, _fini, edx2, 0, 0);
    fun_70(0, eax5, _fini, edx2, 0, 0);
    __asm__("hlt ");
}
