
int32_t fun_8048444();

int32_t fun_80484a0();

int32_t fun_80487f0();

int32_t fun_8048388() {
    int32_t eax1;

    fun_8048444();
    fun_80484a0();
    eax1 = fun_80487f0();
    return eax1;
}

void fun_804844d(int32_t a1);

int32_t fun_8048444() {
    int32_t ebx1;
    int32_t eax2;
    int32_t edx3;

    fun_804844d(ebx1);
    eax2 = *reinterpret_cast<int32_t*>(ebx1 + 0x1ba7 - 8);
    if (eax2) {
        eax2();
    }
    return edx3;
}

int32_t g8049f18 = 0;

int32_t exit(int32_t a1);

int32_t fun_80484a0() {
    int32_t eax1;

    eax1 = g8049f18;
    if (eax1 && (eax1 = 0, !1)) {
        eax1 = exit(0x8049f18);
    }
    return eax1;
}

int32_t g8049f08 = -1;

int32_t fun_80487f0() {
    int32_t* ebx1;
    int32_t eax2;
    int32_t v3;

    ebx1 = reinterpret_cast<int32_t*>(0x8049f08);
    eax2 = g8049f08;
    while (eax2 != -1) {
        --ebx1;
        eax2();
        eax2 = *ebx1;
    }
    return v3;
}

int32_t strncmp = 0x8048406;

int32_t fun_8048400(int32_t a1, int32_t* a2, int32_t* a3) {
    goto strncmp;
}

int32_t printf = 0x80483e6;

void fun_80483e0(int32_t a1, int32_t* a2, int32_t* a3, int32_t a4) {
    goto printf;
}

int32_t sscanf = 0x80483f6;

void fun_80483f0(int32_t* a1, int32_t* a2, int32_t* a3) {
    goto sscanf;
}

void fun_8048766();

int32_t* fun_80484d4(int32_t a1, int32_t* a2, int32_t* a3);

void fun_8048410(int32_t a1, int32_t* a2, int32_t* a3, int32_t a4);

int32_t* fun_8048589(int32_t* a1, int32_t* a2, int32_t* a3) {
    void* ebp4;
    int32_t ebx5;
    int32_t ebx6;
    int32_t* v7;
    int32_t* v8;
    int32_t v9;
    int32_t* eax10;
    int32_t v11;
    uint32_t v12;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_8048766();
    ebx5 = ebx6 + 0x1a5f;
    v7 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp4) - 8);
    fun_80483f0(a1, ebx5 - 0x17a2, v7);
    v8 = a2;
    eax10 = fun_80484d4(v9, v8, v7);
    if (eax10) {
        v11 = 0;
        while (v11 <= 9) {
            if (!(v12 & 1)) {
                if (**reinterpret_cast<int32_t**>(ebx5 - 4) == 1) {
                    fun_80483e0(ebx5 - 0x179f, v8, v7, v11);
                }
                fun_8048410(0, v8, v7, v11);
            }
            eax10 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp4) - 12);
            ++v11;
        }
    }
    return eax10;
}

int32_t exit = 0x8048416;

void fun_8048410(int32_t a1, int32_t* a2, int32_t* a3, int32_t a4) {
    goto exit;
}

struct s0 {
    signed char[4] pad4;
    int32_t 0x4;
};

void fun_804844d(int32_t a1) {
    int32_t eax2;
    struct s0* ebp3;

    eax2 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x1ba7 - 8);
    if (eax2) {
        eax2();
    }
    goto ebp3->0x4;
}

void fun_804855d(int32_t* a1, int32_t* a2, int32_t* a3) {
    int32_t ebx4;
    int32_t ebx5;
    int32_t* ebx6;
    int32_t* ebp7;
    int32_t ebx8;
    int32_t* v9;
    int32_t* v10;
    int32_t v11;
    int32_t* eax12;
    int32_t v13;
    uint32_t v14;

    fun_8048766();
    ebx4 = ebx5 + 0x1a8b;
    fun_80483e0(ebx4 - 0x17b7, ebx6, ebp7, __return_address());
    fun_8048410(0, ebx6, ebp7, __return_address());
    fun_8048766();
    ebx8 = ebx4 + 0x1a5f;
    v9 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 - 8);
    fun_80483f0(ebx6, ebx8 - 0x17a2, v9);
    v10 = ebp7;
    eax12 = fun_80484d4(v11, v10, v9);
    if (eax12) {
        v13 = 0;
        while (v13 <= 9) {
            if (!(v14 & 1)) {
                if (**reinterpret_cast<int32_t**>(ebx8 - 4) == 1) {
                    fun_80483e0(ebx8 - 0x179f, v10, v9, v13);
                }
                fun_8048410(0, v10, v9, v13);
            }
            ++v13;
        }
    }
    goto 0;
}

uint32_t fun_80483d0(int32_t* a1, int32_t* a2, int32_t* a3);

int32_t* fun_8048616(int32_t* a1, int32_t* a2) {
    void* ebp3;
    int32_t ebx4;
    int32_t ebx5;
    int32_t v6;
    uint32_t v7;
    int32_t* v8;
    int32_t* v9;
    uint32_t eax10;
    int32_t v11;
    int32_t* v12;
    int32_t v13;
    int32_t* eax14;
    int32_t v15;
    uint32_t v16;
    int32_t v17;
    int32_t v18;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_8048766();
    ebx4 = ebx5 + 0x19d2;
    v6 = 0;
    v7 = 0;
    while (eax10 = fun_80483d0(a1, v8, v9), v7 < eax10) {
        v9 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp3) - 8);
        v8 = reinterpret_cast<int32_t*>(ebx4 - 0x17a2);
        fun_80483f0(reinterpret_cast<int32_t>(ebp3) - 17, v8, v9);
        v6 = v6 + v11;
        if (v6 == 16) {
            v8 = a2;
            fun_8048589(a1, v8, v9);
        }
        ++v7;
    }
    fun_804855d(a1, v8, v9);
    v12 = a2;
    eax14 = fun_80484d4(v13, v12, v9);
    if (eax14) {
        v15 = 0;
        while (v15 <= 9) {
            if (!(v16 & 1)) {
                fun_80483e0(ebx4 - 0x1791, v12, v9, v17);
                fun_8048410(0, v12, v9, v18);
            }
            eax14 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp3) - 16);
            ++v15;
        }
    }
    return eax14;
}

void fun_8048766() {
    return;
}

int32_t* fun_80484d4(int32_t a1, int32_t* a2, int32_t* a3) {
    int32_t ebx4;
    int32_t ebx5;
    int32_t v6;
    int32_t edx7;
    int32_t* v8;
    int32_t v9;
    int32_t eax10;
    int32_t v11;

    fun_8048766();
    ebx4 = ebx5 + 0x1b14;
    v6 = 0;
    do {
        if (!a2[v6]) 
            break;
        edx7 = v6 * 4;
        ++v6;
        v8 = reinterpret_cast<int32_t*>(ebx4 - 0x17bc);
        v9 = *reinterpret_cast<int32_t*>(edx7 + reinterpret_cast<int32_t>(a2));
        eax10 = fun_8048400(v9, v8, 3);
    } while (eax10);
    goto addr_8048533_4;
    fun_8048410(-1, v8, 3, v11);
    addr_8048554_6:
    return 1;
    addr_8048533_4:
    **reinterpret_cast<int32_t**>(ebx4 - 4) = 1;
    goto addr_8048554_6;
}

void fun_8048470();

struct s1 {
    signed char[4] pad4;
    int32_t 0x4;
};

void fun_804881d(int32_t a1, int32_t a2, int32_t a3) {
    struct s1* ebp4;

    fun_8048470();
    goto ebp4->0x4;
}

int32_t scanf = 0x80483c6;

void fun_80483c0(int32_t a1, void* a2) {
    goto scanf;
}

int32_t strlen = 0x80483d6;

uint32_t fun_80483d0(int32_t* a1, int32_t* a2, int32_t* a3) {
    goto strlen;
}

signed char g804a028 = 0;

int32_t* g804a024 = reinterpret_cast<int32_t*>(0x8049f14);

void fun_8048470() {
    int1_t zf1;
    int32_t* eax2;
    int32_t edx3;

    zf1 = g804a028 == 0;
    if (zf1) {
        while (eax2 = g804a024, edx3 = *eax2, !!edx3) {
            g804a024 = eax2 + 1;
            edx3();
        }
        g804a028 = 1;
    }
    return;
}

int32_t __libc_start_main = 0x80483b6;

void fun_80483b0(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

void fun_80483ac() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_80487d3() {
    return;
}

void fun_8048814() {
    int32_t ebx1;
    int32_t ebp2;

    fun_804881d(ebx1, ebp2, __return_address());
}

int32_t g8049ffc = 0;

void fun_80483b6() {
    goto g8049ffc;
}

void fun_8048406() {
    goto 0x80483a0;
}

void fun_80483e6() {
    goto 0x80483a0;
}

void fun_80483f6() {
    goto 0x80483a0;
}

int32_t fun_80486ee() {
    void* ebp1;
    int32_t ebx2;
    int32_t ebx3;
    int32_t* v4;
    int32_t* v5;
    int32_t v6;
    int32_t* v7;
    int32_t* v8;
    int32_t v9;
    int32_t* v10;

    ebp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_8048766();
    ebx2 = ebx3 + 0x18f7;
    fun_80483e0(ebx2 - 0x178b, v4, v5, v6);
    fun_80483e0(ebx2 - 0x1772, v7, v8, v9);
    fun_80483c0(ebx2 - 0x1767, reinterpret_cast<int32_t>(ebp1) - 0x78);
    fun_8048616(reinterpret_cast<int32_t>(ebp1) - 0x78, v10);
    return 0;
}

void fun_8048416() {
    goto 0x80483a0;
}

void fun_8048770(int32_t a1, int32_t a2, int32_t a3) {
    uint32_t esi4;
    int32_t ebx5;
    int32_t ebx6;
    int32_t* eax7;
    int32_t* edx8;
    int32_t* v9;
    int32_t* edi10;

    esi4 = 0;
    fun_8048766();
    ebx5 = ebx6 + 0x1877;
    fun_8048388();
    eax7 = reinterpret_cast<int32_t*>(ebx5 - 0xec);
    edx8 = reinterpret_cast<int32_t*>(ebx5 - 0xec);
    v9 = eax7;
    if (0 < reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax7) - reinterpret_cast<int32_t>(edx8) >> 2)) {
        edi10 = edx8;
        do {
            edx8[esi4](a1, a2, a3);
            ++esi4;
            edx8 = edi10;
        } while (esi4 < reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(v9) - reinterpret_cast<int32_t>(edi10) >> 2));
    }
    return;
}

void fun_8048420() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80483b0(fun_80486ee, __return_address(), esp1, fun_8048770, 0x80487e0, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_80483c6() {
    goto 0x80483a0;
}

void fun_80483d6() {
    goto 0x80483a0;
}
