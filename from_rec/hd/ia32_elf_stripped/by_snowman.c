
void fun_8048980();

void _init(int32_t a1, int32_t* a2) {
    fun_8048980();
    return;
}

int32_t g80499ec = -1;

void fun_8048980() {
    int32_t* ebx1;
    int1_t zf2;
    int32_t eax3;

    ebx1 = reinterpret_cast<int32_t*>(0x80499ec);
    zf2 = g80499ec == -1;
    if (!zf2) {
        do {
            eax3 = *ebx1;
            eax3();
            --ebx1;
        } while (*ebx1 != -1);
    }
    return;
}

int32_t __setfpucw = 0x804857e;

void __setfpucw(uint32_t a1, int32_t a2, int32_t* a3) {
    goto __setfpucw;
}

int32_t __libc_init = 0x80484fe;

void __libc_init(int32_t a1, int32_t* a2) {
    goto __libc_init;
}

int32_t atexit = 0x804855e;

void atexit(int32_t a1, int32_t a2, int32_t* a3) {
    goto atexit;
}

int32_t fun_80487f0(int32_t a1);

int32_t fun_80488e0(int32_t a1, int32_t* a2) {
    int32_t v3;
    int32_t v4;
    int32_t v5;
    int32_t eax6;

    v3 = 0;
    v4 = 1;
    while (a1 > v4) {
        v5 = a2[v4];
        eax6 = fun_80487f0(v5);
        v3 = v3 + eax6;
        ++v4;
    }
    return v3;
}

int32_t exit = 0x804856e;

void exit() {
    goto exit;
}

int32_t perror = 0x80484de;

void perror(int32_t a1) {
    goto perror;
}

int32_t g80499f8 = 0;

void fun_8048620() {
    int32_t* ebx1;
    int1_t zf2;
    int32_t eax3;

    ebx1 = reinterpret_cast<int32_t*>(0x80499f8);
    zf2 = g80499f8 == 0;
    if (!zf2) {
        do {
            eax3 = *ebx1;
            eax3();
            ++ebx1;
        } while (*ebx1);
    }
    return;
}

int32_t sprintf = 0x804854e;

void sprintf(void* a1, int32_t a2, uint32_t a3) {
    goto sprintf;
}

int32_t strlen = 0x804858e;

int32_t strlen(void* a1) {
    goto strlen;
}

int32_t strcpy = 0x80484be;

void strcpy(void* a1, int32_t a2) {
    goto strcpy;
}

int32_t printf = 0x80484ce;

void printf(int32_t a1, void* a2) {
    goto printf;
}

int32_t fopen = 0x804852e;

int32_t fopen(int32_t a1, int32_t a2) {
    goto fopen;
}

int32_t fclose = 0x804853e;

void fclose(int32_t a1) {
    goto fclose;
}

void strcat(void* a1, int32_t a2);

void fun_8048660(void* a1, uint32_t a2, uint32_t a3) {
    void* ebp4;
    uint32_t v5;
    uint32_t v6;
    uint32_t eax7;
    int32_t eax8;
    int32_t v9;
    uint32_t v10;
    signed char cl11;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    sprintf(reinterpret_cast<int32_t>(ebp4) - 80, "%08lX:", a2);
    if (reinterpret_cast<int32_t>(a3) > reinterpret_cast<int32_t>(16)) {
        a3 = 16;
    }
    v5 = 0;
    while (reinterpret_cast<int32_t>(a3) > reinterpret_cast<int32_t>(v5)) {
        v6 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(a1) + v5);
        sprintf(reinterpret_cast<int32_t>(ebp4) - 80 + (v5 + v5 + v5) + 9, " %02lX", v6);
        ++v5;
    }
    while (eax7 = v5, ++v5, reinterpret_cast<int32_t>(eax7) <= reinterpret_cast<int32_t>(15)) {
        strcat(reinterpret_cast<int32_t>(ebp4) - 80, "   ");
    }
    eax8 = strlen(reinterpret_cast<int32_t>(ebp4) - 80);
    v9 = eax8;
    strcpy(reinterpret_cast<int32_t>(ebp4) - 80 + v9, "  |");
    v10 = 0;
    while (reinterpret_cast<int32_t>(a3) > reinterpret_cast<int32_t>(v10)) {
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(a1) + v10) <= 31 || *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(a1) + v10) > 0x7e) {
            cl11 = 46;
        } else {
            cl11 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(a1) + v10);
        }
        *reinterpret_cast<signed char*>(v9 + v10 + (reinterpret_cast<int32_t>(ebp4) - 80)) = cl11;
        ++v10;
    }
    while (reinterpret_cast<int32_t>(v10) <= reinterpret_cast<int32_t>(15)) {
        *reinterpret_cast<signed char*>(v9 + v10 + (reinterpret_cast<int32_t>(ebp4) - 80)) = 32;
        ++v10;
    }
    strcpy(reinterpret_cast<int32_t>(ebp4) - 80 + v9 + v10, "|");
    printf("%s\n", reinterpret_cast<int32_t>(ebp4) - 80);
    return;
}

int32_t strcat = 0x804850e;

void strcat(void* a1, int32_t a2) {
    goto strcat;
}

int32_t fun_8048950(int32_t a1, void* a2);

uint32_t fread(void* a1, int32_t a2, int32_t a3, int32_t a4);

int32_t fun_80487f0(int32_t a1) {
    void* ebp2;
    int32_t eax3;
    int32_t eax4;
    int32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t eax8;
    int32_t eax9;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax3 = fun_8048950(a1, reinterpret_cast<int32_t>(ebp2) - 88);
    if (eax3) {
        eax4 = fopen(a1, "rb");
        v5 = eax4;
        if (v5) {
            v6 = 0;
            while (v7 > v6) {
                eax8 = fread(reinterpret_cast<int32_t>(ebp2) - 16, 1, 16, v5);
                if (!eax8) 
                    goto addr_804889d_6;
                fun_8048660(reinterpret_cast<int32_t>(ebp2) - 16, v6, eax8);
                v6 = v6 + eax8;
            }
        } else {
            perror(a1);
            eax9 = 1;
            goto addr_80488d0_9;
        }
    } else {
        perror(a1);
        eax9 = 1;
        goto addr_80488d0_9;
    }
    addr_80488c0_12:
    fclose(v5);
    eax9 = 0;
    addr_80488d0_9:
    return eax9;
    addr_804889d_6:
    goto addr_80488c0_12;
}

int32_t _xstat = 0x80484ee;

int32_t _xstat(int32_t a1, int32_t a2, void* a3) {
    goto _xstat;
}

int32_t fread = 0x804851e;

uint32_t fread(void* a1, int32_t a2, int32_t a3, int32_t a4) {
    goto fread;
}

int32_t fun_8048950(int32_t a1, void* a2) {
    int32_t eax3;

    eax3 = _xstat(1, a1, a2);
    return eax3;
}

int32_t environ = 0;

uint16_t __fpu_control = 0;

void _fini();

void fun_80485a0() {
    int32_t* esp1;
    int32_t edx2;
    uint32_t eax3;

    esp1 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    edx2 = reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>(__return_address());
    __asm__("int 0x80");
    environ = reinterpret_cast<int32_t>(esp1) + (edx2 + edx2) + 4;
    eax3 = __fpu_control;
    __setfpucw(eax3, __return_address(), esp1);
    __libc_init(__return_address(), esp1);
    atexit(_fini, __return_address(), esp1);
    _init(__return_address(), esp1);
    fun_80488e0(__return_address(), esp1);
    exit();
    while (1) {
        __asm__("int 0x80");
    }
}

void _fini() {
    fun_8048620();
    return;
}

void fun_8048619() {
}

void fun_8048647() {
    return;
}

void fun_804869a() {
}

void fun_80486dd() {
}

void fun_8048736() {
}

void fun_8048769() {
}

void fun_8048789() {
}

void fun_8048822() {
}

void fun_8048871() {
    goto 0x8048880;
}

void fun_80488fe() {
}

void fun_80489a7() {
    return;
}

void fun_80484b4() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

int32_t g8049a04 = 0;

void fun_804857e() {
    goto g8049a04;
}

void fun_80484fe() {
    goto 0x80484a8;
}

void fun_804855e() {
    goto 0x80484a8;
}

void fun_804856e() {
    goto 0x80484a8;
}

void fun_80486ce() {
}

void fun_804877a() {
}

void fun_80487e3() {
}

void fun_80484de() {
    goto 0x80484a8;
}

void fun_80488d4() {
}

void fun_80488bc() {
}

void fun_8048935() {
}

void fun_8048925() {
}

void fun_804854e() {
    goto 0x80484a8;
}

void fun_80486f3() {
}

void fun_804858e() {
    goto 0x80484a8;
}

void fun_80484be() {
    goto 0x80484a8;
}

void fun_80487a2() {
}

void fun_80484ce() {
    goto 0x80484a8;
}

void fun_804852e() {
    goto 0x80484a8;
}

void fun_804853e() {
    goto 0x80484a8;
}

void fun_8048944() {
}

void fun_804850e() {
    goto 0x80484a8;
}

void fun_80484ee() {
    goto 0x80484a8;
}

void fun_804851e() {
    goto 0x80484a8;
}

void fun_804896d() {
}
