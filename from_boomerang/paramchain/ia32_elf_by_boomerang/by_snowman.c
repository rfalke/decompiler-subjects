
int32_t atexit = 0x80487de;

void atexit(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto atexit;
}

int32_t __fpstart = 0x80487ee;

void __fpstart(int32_t a1, void* a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    goto __fpstart;
}

signed char g8049b2b = 61;

int32_t __fnonstd_used = 0;

int32_t __fsr(int32_t ecx, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    int32_t eax9;

    if (!1) {
        __asm__("wait ");
        __asm__("fnstcw word [esp+0x0]");
        eax9 = 0;
        *reinterpret_cast<signed char*>(&eax9) = g8049b2b;
        if (0) {
            __asm__("btc edx, 0xb");
        }
        __asm__("fldcw word [esp+0x0]");
        __asm__("fldcw word [esp+0x0]");
        if (!1) {
            __fnonstd_used = 1;
        }
    }
    return eax9;
}

void fun_8048982(int32_t a1, int32_t a2);

void _init(int32_t a1, void* a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    int32_t ebx8;
    int32_t* edx9;
    void* v10;

    fun_8048982(ebx8, __return_address());
    edx9 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebx8 + 0x1052 + 28)) - 8);
    if (*edx9) {
        v10 = *reinterpret_cast<void**>(ebx8 + 0x1052 + 28);
        *edx9(v10);
    }
    goto a1;
}

void passem(int32_t a1, int32_t a2, int32_t a3, void* a4);

int32_t printf(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, void* a6);

int32_t main(int32_t a1, void* a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    void* v8;
    int32_t v9;
    int32_t eax10;

    v8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4);
    passem(5, 10, 40, v8);
    eax10 = printf("Fifty five is %d\n", v9, 5, 10, 40, v8);
    return eax10 - eax10;
}

int32_t exit = 0x80487fe;

void exit(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    goto exit;
}

void fun_80489aa(int32_t a1, int32_t a2) {
    void* ecx3;
    int32_t* edx4;

    ecx3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(__return_address()) + 0x102a + 32)) - 16);
    edx4 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx3) - 4);
    if (*edx4) {
        *edx4(ecx3);
    }
    goto a2;
}

void fun_8048982(int32_t a1, int32_t a2) {
    int32_t* edx3;
    void* v4;

    edx3 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(__return_address()) + 0x1052 + 28)) - 8);
    if (*edx3) {
        v4 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(__return_address()) + 0x1052 + 28);
        *edx3(v4);
    }
    goto a2;
}

void addem(int32_t a1, int32_t a2, int32_t a3, void* a4);

void passem(int32_t a1, int32_t a2, int32_t a3, void* a4) {
    addem(a1, a2, a3, a4);
    return;
}

int32_t printf = 0x804880e;

int32_t printf(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, void* a6) {
    goto printf;
}

struct s0 {
    signed char[20] pad20;
    int32_t* f20;
};

struct s1 {
    signed char[8] pad8;
    int32_t f8;
};

struct s2 {
    signed char[12] pad12;
    int32_t f12;
};

struct s3 {
    signed char[16] pad16;
    int32_t f16;
};

struct s4 {
    signed char[4] pad4;
    int32_t f4;
};

void addem(int32_t a1, int32_t a2, int32_t a3, void* a4) {
    struct s0* ebp5;
    struct s1* ebp6;
    struct s2* ebp7;
    struct s3* ebp8;
    struct s4* ebp9;

    __asm__("in al, dx");
    *ebp5->f20 = ebp6->f8 + ebp7->f12 + ebp8->f16;
    goto ebp9->f4;
}

void _fini() {
    int32_t ebx1;

    fun_80489aa(ebx1, __return_address());
}

void fun_80487d4() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void _mcount() {
    return;
}

void fun_8048923() {
    int32_t ebp1;
    int32_t ebp2;
    signed char dl3;

    *reinterpret_cast<signed char*>(ebp1 - 0x75) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp2 - 0x75) + dl3);
}

int32_t g80499dc = 0;

void fun_80487de() {
    goto g80499dc;
}

void fun_80487ee() {
    goto 0x80487c8;
}

void fun_80487fe() {
    goto 0x80487c8;
}

void fun_804880e() {
    goto 0x80487c8;
}

int32_t environ = 0;

void* ___Argv = reinterpret_cast<void*>(0);

void fun_70(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);

void _start(int32_t ecx) {
    void* ebp2;
    int32_t edx3;
    int32_t edx4;
    void* edx5;
    int32_t eax6;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4);
    if (!0) {
        atexit(edx3, 0, 0, __return_address());
    }
    atexit(_fini, edx3, 0, 0);
    edx4 = reinterpret_cast<int32_t>(ebp2) + reinterpret_cast<int32_t>(__return_address()) * 4 + 16;
    environ = edx4;
    edx5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp2) + 12);
    ___Argv = edx5;
    __fpstart(__return_address(), edx5, edx4, _fini, edx3, 0, 0);
    __fsr(ecx, __return_address(), edx5, edx4, _fini, edx3, 0, 0);
    _init(__return_address(), edx5, edx4, _fini, edx3, 0, 0);
    eax6 = main(__return_address(), edx5, edx4, _fini, edx3, 0, 0);
    exit(eax6, _fini, edx3, 0, 0);
    fun_70(0, eax6, _fini, edx3, 0, 0);
    __asm__("hlt ");
}
