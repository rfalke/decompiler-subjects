
int32_t atexit = 0x80487aa;

void atexit(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto atexit;
}

int32_t __fpstart = 0x80487ba;

void __fpstart(int32_t a1, void* a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    goto __fpstart;
}

signed char g8049ad3 = 61;

int32_t __fnonstd_used = 0;

int32_t __fsr(int32_t ecx, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    int32_t eax9;

    if (!1) {
        __asm__("wait ");
        __asm__("fnstcw word [esp+0x0]");
        eax9 = 0;
        *reinterpret_cast<signed char*>(&eax9) = g8049ad3;
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

void fun_804892a(int32_t a1, int32_t a2);

void _init(int32_t a1, void* a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    int32_t ebx8;
    int32_t* edx9;
    void* v10;

    fun_804892a(ebx8, __return_address());
    edx9 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebx8 + 0x1052 + 28)) - 8);
    if (*edx9) {
        v10 = *reinterpret_cast<void**>(ebx8 + 0x1052 + 28);
        *edx9(v10);
    }
    goto a1;
}

struct s0 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t printf(int32_t a1, int32_t a2, int32_t a3);

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t main(int32_t a1, void* a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    int32_t eax8;
    struct s0* ebp9;
    struct s1* ebp10;

    __asm__("in al, dx");
    eax8 = ebp9->f8;
    if (eax8 >= -2) {
        if (eax8 > 3) {
            eax8 = 3;
        }
    } else {
        eax8 = -2;
    }
    printf("MinMax adjusted number of arguments is %d\n", eax8, __return_address());
    goto ebp10->f4;
}

int32_t exit = 0x80487ca;

void exit(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    goto exit;
}

void fun_8048952(int32_t a1, int32_t a2) {
    void* ecx3;
    int32_t* edx4;

    ecx3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(__return_address()) + 0x102a + 32)) - 16);
    edx4 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx3) - 4);
    if (*edx4) {
        *edx4(ecx3);
    }
    goto a2;
}

void fun_804892a(int32_t a1, int32_t a2) {
    int32_t* edx3;
    void* v4;

    edx3 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(__return_address()) + 0x1052 + 28)) - 8);
    if (*edx3) {
        v4 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(__return_address()) + 0x1052 + 28);
        *edx3(v4);
    }
    goto a2;
}

int32_t printf = 0x80487da;

int32_t printf(int32_t a1, int32_t a2, int32_t a3) {
    goto printf;
}

void _fini() {
    int32_t ebx1;

    fun_8048952(ebx1, __return_address());
}

void fun_80487a0() {
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

void fun_80488ef() {
    int32_t ebp1;
    int32_t ebp2;
    signed char dl3;

    *reinterpret_cast<signed char*>(ebp1 - 0x75) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp2 - 0x75) + dl3);
}

int32_t g8049984 = 0;

void fun_80487aa() {
    goto g8049984;
}

void fun_80487ba() {
    goto 0x8048794;
}

void fun_80487ca() {
    goto 0x8048794;
}

void fun_80487da() {
    goto 0x8048794;
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
