
struct s0 {
    unsigned char f0;
    unsigned char f1;
};

struct s0** __get_GOT(int32_t* ecx, int32_t a2);

void _fastcall(int32_t* ecx) {
    int32_t ebx2;
    struct s0** eax3;
    int32_t ebx4;

    eax3 = __get_GOT(ecx, ebx2);
    **reinterpret_cast<struct s0****>(ebx4 + 0x2bf0 - 4) = eax3;
    return;
}

uint32_t sprintf(void* a1);

int32_t printf(int32_t a1, struct s0** a2, int32_t* a3, int32_t a4, void* a5) {
    __asm__("pushad ");
    sprintf(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x1000 + 32);
    __asm__("int 0x80");
    __asm__("popad ");
    return 4;
}

int32_t* __system_call(int32_t* ecx, int32_t a2, int32_t a3, struct s0** a4);

void* read(int32_t* ecx, int32_t a2, struct s0** a3, int32_t* a4, int32_t a5, void* a6) {
    __system_call(ecx, __return_address(), a2, a3);
    __system_call(ecx, __return_address(), a2, a3);
}

struct s0** memcpy(int32_t* ecx, void* a2, void* a3, void* a4, int32_t a5) {
    signed char* edi6;
    signed char* eax7;
    signed char* esi8;
    signed char* edx9;
    int32_t ebx10;
    struct s0** eax11;
    int32_t ebx12;
    signed char* v13;
    signed char* v14;
    int32_t* v15;

    __asm__("pushad ");
    edi6 = eax7;
    esi8 = edx9;
    eax11 = __get_GOT(ecx, ebx10);
    if (!**reinterpret_cast<signed char**>(ebx12 + 0x2ba2 - 4)) {
        edi6 = v13;
        esi8 = v14;
        ecx = v15;
    }
    while (ecx) {
        ecx = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx) - 1);
        *edi6 = *esi8;
        ++edi6;
        ++esi8;
    }
    __asm__("popad ");
    return eax11;
}

struct s0** strtol(int32_t* ecx, unsigned char* a2, unsigned char* a3, int32_t* a4, int32_t a5, void* a6) {
    unsigned char* edi7;
    unsigned char* eax8;
    unsigned char* esi9;
    unsigned char* edx10;
    int32_t ebx11;
    int32_t ebx12;
    struct s0** eax13;
    struct s0** ebx14;

    edi7 = eax8;
    esi9 = edx10;
    __get_GOT(ecx, ebx11);
    if (!**reinterpret_cast<signed char**>(ebx12 + 0x2968 - 4)) {
        edi7 = a2;
        esi9 = a3;
        ecx = a4;
    }
    if (!ecx) {
        ecx = reinterpret_cast<int32_t*>(10);
    }
    eax13 = reinterpret_cast<struct s0**>(0);
    ebx14 = reinterpret_cast<struct s0**>(0);
    while (*edi7 == 32) {
        ++edi7;
    }
    if (*edi7 == 0x7830) {
        ecx = reinterpret_cast<int32_t*>(16);
        edi7 = edi7 + 2;
    }
    do {
        *reinterpret_cast<unsigned char*>(&ebx14) = reinterpret_cast<unsigned char>(*edi7 - 48);
        if (*edi7 < 48) 
            break;
        if (*reinterpret_cast<unsigned char*>(&ebx14) > 9 && (*reinterpret_cast<unsigned char*>(&ebx14) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx14) - 7), *reinterpret_cast<unsigned char*>(&ebx14) > 35)) {
            *reinterpret_cast<unsigned char*>(&ebx14) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx14) - 32);
        }
        eax13 = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(eax13) * reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<int32_t>(ebx14));
        ++edi7;
    } while (edi7 != esi9);
    return eax13;
}

int32_t memset(int32_t* ecx, signed char* a2, struct s0** a3, int32_t* a4, int32_t a5, void* a6) {
    int32_t v7;
    int32_t eax8;
    signed char* edx9;
    signed char* eax10;
    int32_t ebx11;
    struct s0** eax12;
    int32_t ebx13;
    signed char* edi14;

    v7 = eax8;
    edx9 = eax10;
    eax12 = __get_GOT(ecx, ebx11);
    if (!**reinterpret_cast<signed char**>(ebx13 + 0x2bd6 - 4)) {
        edx9 = a2;
        eax12 = a3;
        ecx = a4;
    }
    edi14 = edx9;
    while (ecx) {
        ecx = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx) - 1);
        *edi14 = *reinterpret_cast<signed char*>(&eax12);
        ++edi14;
    }
    return v7;
}

void write(int32_t* ecx, int32_t a2, struct s0** a3, int32_t* a4, int32_t a5, void* a6) {
    __system_call(ecx, __return_address(), a2, a3);
}

struct s0** getenv(int32_t* ecx, int32_t a2, struct s0** a3, int32_t* a4, int32_t a5, void* a6) {
    signed char* edi7;
    signed char* eax8;
    int32_t ebx9;
    int32_t ebx10;
    signed char* v11;
    signed char** ebx12;
    signed char* edx13;
    uint32_t ecx14;
    struct s0** eax15;
    struct s0** ecx16;
    signed char* esi17;
    signed char* edi18;
    int1_t zf19;

    __asm__("pushad ");
    edi7 = eax8;
    __get_GOT(ecx, ebx9);
    if (!**reinterpret_cast<signed char**>(ebx10 + 0x2b41 - 4)) {
        edi7 = v11;
    }
    __get_GOT(ecx, __return_address());
    ebx12 = **reinterpret_cast<signed char****>(ebx9 + 0x2b26 - 12);
    edx13 = edi7;
    ecx14 = 0xffffffff;
    do {
        if (!ecx14) 
            break;
        --ecx14;
        ++edi7;
    } while (*edi7);
    eax15 = reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(~ecx14) - 1);
    while (ecx16 = eax15, esi17 = edx13, edi18 = *ebx12, zf19 = edi18 == 0, !zf19) {
        do {
            if (!ecx16) 
                break;
            ecx16 = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(ecx16) - 1);
            zf19 = *esi17 == *edi18;
            ++edi18;
            ++esi17;
        } while (zf19);
        if (zf19) 
            goto addr_804950a_12;
        ++ebx12;
    }
    addr_804950b_14:
    __asm__("popad ");
    return eax15;
    addr_804950a_12:
    goto addr_804950b_14;
}

struct s1 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s0** __get_GOT(int32_t* ecx, int32_t a2) {
    uint32_t eax3;
    unsigned char** v4;
    struct s1** v5;
    struct s0** eax6;
    int32_t ebx7;
    int32_t v8;
    int32_t* v9;
    int32_t ebx10;
    int32_t v11;
    int32_t* edx12;

    eax3 = **v4;
    if (!*reinterpret_cast<signed char*>(&eax3)) {
        addr_80492f5_3:
        __asm__("int 0x80");
        if (static_cast<uint32_t>((*v5)->f1) >= 0xfffff001) {
            eax6 = __get_GOT(ecx, __return_address());
            **reinterpret_cast<struct s0****>(ebx7 + 0x2cf1 - 8) = eax6;
        }
    } else {
        if (*reinterpret_cast<signed char*>(&eax3) < 0) {
            addr_80492c9_6:
            ebx7 = v8;
            ecx = v9;
            goto addr_80492f5_3;
        } else {
            __get_GOT(ecx, __return_address());
            if (**reinterpret_cast<signed char**>(ebx10 + 0x2d48 - 4)) 
                goto addr_80492e3_9; else 
                goto addr_80492c9_6;
        }
    }
    __asm__("popad ");
    goto a2;
    addr_80492e3_9:
    ebx7 = v11;
    ecx = edx12;
    goto addr_80492f5_3;
}

int32_t* __system_call(int32_t* ecx, int32_t a2, int32_t a3, struct s0** a4) {
    uint32_t eax5;
    struct s0** eax6;
    int32_t ebx7;
    int32_t v8;
    int32_t* v9;
    int32_t ebx10;
    int32_t v11;
    int32_t* edx12;

    eax5 = (*a4)->f0;
    if (!*reinterpret_cast<signed char*>(&eax5)) {
        addr_80492f5_2:
        __asm__("int 0x80");
        if (static_cast<uint32_t>((*a4)->f1) >= 0xfffff001) {
            eax6 = __get_GOT(ecx, __return_address());
            **reinterpret_cast<struct s0****>(ebx7 + 0x2cf1 - 8) = eax6;
        }
    } else {
        if (*reinterpret_cast<signed char*>(&eax5) < 0) {
            addr_80492c9_5:
            ebx7 = v8;
            ecx = v9;
            goto addr_80492f5_2;
        } else {
            __get_GOT(ecx, __return_address());
            if (**reinterpret_cast<signed char**>(ebx10 + 0x2d48 - 4)) 
                goto addr_80492e3_8; else 
                goto addr_80492c9_5;
        }
    }
    __asm__("popad ");
    goto a2;
    addr_80492e3_8:
    ebx7 = v11;
    ecx = edx12;
    goto addr_80492f5_2;
}

void exit(int32_t* ecx, int32_t a2, struct s0** a3, void* a4, int32_t* a5) {
    int32_t* eax6;
    int32_t* eax7;
    signed char* edx8;
    signed char* edx9;
    int32_t* ecx10;
    void** ebx11;
    int32_t edx12;
    int32_t edx13;
    int32_t edi14;

    eax6 = __system_call(ecx, __return_address(), a2, a3);
    *ecx = *ecx + reinterpret_cast<int32_t>(eax6);
    eax7 = __system_call(ecx, __return_address(), a2, a3);
    *edx8 = reinterpret_cast<signed char>(*edx9 + *reinterpret_cast<signed char*>(&eax7));
    __system_call(ecx, __return_address(), a2, a3);
    ecx10 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<int32_t>(*ebx11));
    __system_call(ecx10, __return_address(), a2, a3);
    *reinterpret_cast<int32_t*>(edx12 - 24) = *reinterpret_cast<int32_t*>(edx13 - 24) + edi14;
}

/* itoa.printB */
uint32_t itoa_printB(int32_t* ecx) {
    uint32_t edx2;
    int32_t eax3;
    uint32_t eax4;
    int32_t eax5;
    signed char dl6;
    signed char* edi7;

    edx2 = eax3 % reinterpret_cast<uint32_t>(ecx);
    eax4 = eax5 / reinterpret_cast<uint32_t>(ecx);
    if (eax4) {
        eax4 = itoa_printB(ecx);
        edx2 = edx2;
    }
    dl6 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&edx2) + 48);
    if (dl6 > 57) {
        dl6 = reinterpret_cast<signed char>(dl6 + 39);
    }
    *edi7 = dl6;
    return eax4;
}

uint32_t sprintf(void* a1) {
    unsigned char* edi2;
    unsigned char* v3;
    uint32_t eax4;
    unsigned char* ebx5;
    unsigned char* v6;
    int32_t* ecx7;

    __asm__("pushad ");
    edi2 = v3;
    while (*reinterpret_cast<unsigned char*>(&eax4)) {
        if (*reinterpret_cast<unsigned char*>(&eax4) != 37) 
            goto addr_80495a3_4;
        ebx5 = v6;
        __asm__("lodsb ");
        ecx7 = reinterpret_cast<int32_t*>(10);
        if (*reinterpret_cast<unsigned char*>(&eax4) == 100 || ((ecx7 = reinterpret_cast<int32_t*>(16), *reinterpret_cast<unsigned char*>(&eax4) == 0x78) || ((ecx7 = reinterpret_cast<int32_t*>(8), *reinterpret_cast<unsigned char*>(&eax4) == 0x6f) || (ecx7 = reinterpret_cast<int32_t*>(2), *reinterpret_cast<unsigned char*>(&eax4) == 98)))) {
            __asm__("pushad ");
            eax4 = itoa_printB(ecx7);
            *edi2 = 0;
            __asm__("popad ");
            do {
                ++edi2;
            } while (*edi2 >= 1);
            --edi2;
        } else {
            if (*reinterpret_cast<unsigned char*>(&eax4) == 99) {
                addr_80495a3_4:
                goto label_10;
            } else {
                if (*reinterpret_cast<unsigned char*>(&eax4) != 0x73) 
                    continue;
                if (ebx5) 
                    goto addr_80495d1_13;
            }
        }
        addr_80495ee_14:
        continue;
        label_10:
        *edi2 = *reinterpret_cast<unsigned char*>(&eax4);
        ++edi2;
        continue;
        addr_80495d1_13:
        while (*reinterpret_cast<unsigned char*>(&eax4) = *ebx5, !!*reinterpret_cast<unsigned char*>(&eax4)) {
            *edi2 = *reinterpret_cast<unsigned char*>(&eax4);
            ++edi2;
            ++ebx5;
        }
        goto addr_80495ee_14;
    }
    *reinterpret_cast<unsigned char*>(&eax4) = 0;
    *edi2 = 0;
    __asm__("popad ");
    return eax4;
}

struct s2 {
    signed char[48] pad48;
    struct s0* f30;
};

struct s0** errno = reinterpret_cast<struct s0**>(0);

int32_t main(int32_t a1, struct s0*** a2, struct s0*** a3) {
    int32_t* ecx4;
    void* ebp5;
    void* v6;
    void* v7;
    void* v8;
    void* eax9;
    struct s0** eax10;
    struct s0** v11;
    void* v12;
    struct s2* v13;
    struct s0** eax14;
    struct s0** eax15;
    struct s0** v16;
    int32_t v17;
    struct s0** eax18;
    struct s0** v19;
    int32_t v20;

    ecx4 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(__zero_stack_offset()) + 4);
    ebp5 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(__zero_stack_offset()) & 0xfffffff0) - 4 - 4);
    _fastcall(ecx4);
    printf("\n\tprintf() test\nhex: %x, octal: %o, decimal: %d\n", 16, 8, 10, v6);
    printf("\n\tstrtol() test\nInput some decimal number: ", 16, 8, 10, v7);
    eax9 = read(ecx4, 0, reinterpret_cast<uint32_t>(ebp5) - 26, 10, 10, v8);
    memcpy(ecx4, reinterpret_cast<uint32_t>(ebp5) - 36, reinterpret_cast<uint32_t>(ebp5) - 26, eax9, 10);
    eax10 = strtol(ecx4, reinterpret_cast<uint32_t>(ebp5) - 36, reinterpret_cast<uint32_t>(ebp5) - 40, 10, 10, reinterpret_cast<uint32_t>(ebp5) - 36 + (reinterpret_cast<int32_t>(eax9) - 1));
    printf("You have entered %d\n", eax10, 10, 10, reinterpret_cast<uint32_t>(ebp5) - 36 + (reinterpret_cast<int32_t>(eax9) - 1));
    printf("\n\tmemset() test\n", eax10, 10, 10, reinterpret_cast<uint32_t>(ebp5) - 36 + (reinterpret_cast<int32_t>(eax9) - 1));
    v11 = reinterpret_cast<struct s0**>(0);
    memset(ecx4, reinterpret_cast<uint32_t>(ebp5) - 36, 0, 10, 10, reinterpret_cast<uint32_t>(ebp5) - 36 + (reinterpret_cast<int32_t>(eax9) - 1));
    v12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp5) - 36 + 5);
    v13 = reinterpret_cast<struct s2*>(9);
    while (reinterpret_cast<int32_t>(v13) > 0) {
        memset(ecx4, reinterpret_cast<uint32_t>(ebp5) - 36, &v13->f30, 5, 10, v12);
        eax14 = strtol(ecx4, reinterpret_cast<uint32_t>(ebp5) - 36, reinterpret_cast<uint32_t>(ebp5) - 40, 10, 10, v12);
        v11 = eax14;
        printf("%d ", v11, 10, 10, v12);
        v13 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(v13) - 1);
    }
    printf("\n\n\tvariable test\n", v11, 10, 10, v12);
    write(ecx4, 0xff, 0, 0, 10, v12);
    eax15 = errno;
    printf("errno: %d\n", eax15, 0, 10, v12);
    printf("\n\tenvironment test\nPress ENTER to print envrionment\n", eax15, 0, 10, v12);
    v16 = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(ebp5) - 26);
    read(ecx4, 0, v16, 1, 10, v12);
    v17 = 0;
    while (a3[v17]) {
        v16 = a3[v17];
        printf("%s\n", v16, 1, 10, v12);
        ++v17;
    }
    eax18 = getenv(ecx4, "HOME", v16, 1, 10, v12);
    v19 = eax18;
    printf("\n\tgetenv(\"HOME\") test\n%s\n", v19, 1, 10, v12);
    if (a1 > 1) {
        printf("\n\targuments test\n", v19, 1, 10, v12);
        v20 = 0;
        while (v20 < a1) {
            v19 = a2[v20];
            printf("%s\n", v19, 1, 10, v12);
            ++v20;
        }
    }
    printf("\n\tall tests done\n", v19, 1, 10, v12);
    return 0;
}

void fun_8049347() {
    int32_t* ebx1;
    int32_t* ebx2;

    *ebx1 = *ebx2 + 1;
}

void fun_804934e() {
    int32_t* edx1;
    int32_t* edx2;

    *edx1 = *edx2 + 1;
    __asm__("psubsb mm1, [ebp-0x1]");
}

void fun_8049355() {
    int32_t* edx1;
    int32_t* edx2;

    *edx1 = *edx2 + 1;
}

void fun_804935c(int32_t* ecx) {
    *ecx = *ecx + 1;
    __asm__("aas ");
}

void fun_8049363() {
    int32_t* edx1;
    int32_t* edx2;

    *edx1 = *edx2 + 1;
}

void fun_804936a(int32_t* ecx, struct s0** a2) {
    int32_t* edx3;
    int32_t* edx4;
    int32_t ebx5;
    uint32_t* edx6;
    int32_t* edx7;
    int32_t* edi8;
    int32_t* edi9;
    int32_t* eax10;
    int32_t ebp11;

    *edx3 = *edx4 + 1;
    __system_call(ecx, ebx5, __return_address(), a2);
    *edx6 = *edx7 + reinterpret_cast<uint32_t>(ecx);
    __system_call(ecx, ebx5, __return_address(), a2);
    *edi8 = *edi9 + (reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 + 4 - 4 + 4);
    eax10 = __system_call(ecx, ebx5, __return_address(), a2);
    *eax10 = *eax10 + ebp11;
}

void fun_80493a2(int32_t* ecx, int32_t a2, struct s0** a3) {
    int32_t* ebx4;
    int32_t* ebx5;
    int32_t* ebx6;
    int32_t* ebx7;
    int32_t ebx8;
    int32_t* edx9;
    int32_t* edx10;
    int32_t* edx11;
    int32_t* edx12;

    *ebx4 = *ebx5 + 1;
    __system_call(ecx, __return_address(), a2, a3);
    *ebx6 = *ebx7 + ebx8;
    __system_call(ecx, __return_address(), a2, a3);
    *edx9 = *edx10 + 1;
    *edx11 = *edx12 + 1;
}

void fun_80493c5(int32_t* ecx, int32_t a2, struct s0** a3) {
    int32_t* edx4;
    int32_t esi5;
    int32_t* edx6;
    int32_t esi7;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edx4) + esi5 * 2) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edx6) + esi7 * 2) + 1;
    __system_call(ecx, __return_address(), a2, a3);
}

void fun_80493d3() {
    int32_t* edx1;
    int32_t* edx2;

    *edx1 = *edx2 + 1;
}

void fun_80493da(int32_t a1, int32_t a2) {
    int32_t* eax3;
    int32_t* eax4;
    int32_t* eax5;
    signed char al6;
    signed char ch7;
    unsigned char al8;
    signed char ch9;
    uint1_t cf10;
    void* esp11;
    int32_t* ecx12;
    struct s0** eax13;
    int32_t ebx14;
    int32_t eax15;

    *eax3 = *eax4 + 1;
    *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<unsigned char>(al6 - reinterpret_cast<unsigned char>(ch7 + reinterpret_cast<uint1_t>(al8 < reinterpret_cast<unsigned char>(ch9 + cf10))));
    *eax5 = *eax5 + 1;
    __asm__("das ");
    esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4 + 4);
    ecx12 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp11) + a1 * 4 + 4);
    eax13 = __get_GOT(ecx12, a2);
    **reinterpret_cast<int32_t***>(ebx14 + 0x2c11 - 12) = ecx12;
    eax15 = reinterpret_cast<int32_t>(__return_address()(eax13, reinterpret_cast<int32_t>(esp11) - 4 + 4, ecx12));
    exit(ecx12, eax15, eax13, reinterpret_cast<int32_t>(esp11) - 4 + 4, ecx12);
}

void _start() {
    goto 0x80493e4;
}

void open(int32_t* ecx, int32_t a2, struct s0** a3) {
    __system_call(ecx, __return_address(), a2, a3);
    *ecx = *ecx + 1;
}

struct s0** memcmp(int32_t* ecx, unsigned char* a2, unsigned char* a3, int32_t* a4) {
    int32_t ebx5;
    struct s0** eax6;
    uint1_t cf7;
    int32_t ebx8;
    int1_t zf9;
    unsigned char* esi10;
    unsigned char* edi11;

    eax6 = __get_GOT(ecx, ebx5);
    cf7 = reinterpret_cast<uint1_t>(**reinterpret_cast<unsigned char**>(ebx8 + 0x2b76 - 4) < 0);
    zf9 = **reinterpret_cast<unsigned char**>(ebx8 + 0x2b76 - 4) == 0;
    if (zf9) {
        esi10 = a2;
        edi11 = a3;
        ecx = a4;
    }
    do {
        if (!ecx) 
            break;
        ecx = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx) - 1);
        cf7 = reinterpret_cast<uint1_t>(*esi10 < *edi11);
        zf9 = *esi10 == *edi11;
        ++edi11;
        ++esi10;
    } while (zf9);
    if (!zf9) {
        eax6 = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(eax6) - (reinterpret_cast<uint32_t>(eax6) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax6) < reinterpret_cast<uint32_t>(eax6) + cf7)) | 1);
    }
    return eax6;
}

uint32_t itoa(int32_t* ecx) {
    signed char* edi2;
    signed char* edx3;
    int32_t ebx4;
    int32_t ebx5;
    signed char* v6;
    int32_t* v7;
    uint32_t eax8;

    __asm__("pushad ");
    edi2 = edx3;
    __get_GOT(ecx, ebx4);
    if (!**reinterpret_cast<signed char**>(ebx5 + 0x2abb - 4)) {
        edi2 = v6;
        ecx = v7;
    }
    eax8 = itoa_printB(ecx);
    *edi2 = 0;
    __asm__("popad ");
    return eax8;
}

int32_t inet_aton(int32_t* ecx, int32_t a2, unsigned char* a3) {
    unsigned char* edi4;
    unsigned char* edx5;
    int32_t ebx6;
    struct s0** eax7;
    int32_t ebx8;
    int32_t ecx9;
    int32_t edx10;
    int1_t cf11;
    int32_t edx12;

    edi4 = edx5;
    eax7 = __get_GOT(ecx, ebx6);
    if (!**reinterpret_cast<signed char**>(ebx8 + 0x29af - 4)) {
        edi4 = a3;
    }
    ecx9 = 4;
    edx10 = 0;
    while (1) {
        __asm__("lodsb ");
        cf11 = *reinterpret_cast<unsigned char*>(&eax7) < 48;
        *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax7) - 48);
        if (cf11) {
            *reinterpret_cast<unsigned char*>(&eax7) = *reinterpret_cast<unsigned char*>(&edx10);
            *edi4 = *reinterpret_cast<unsigned char*>(&eax7);
            ++edi4;
            --ecx9;
            if (!ecx9) 
                break;
        } else {
            edx12 = edx10 + edx10;
            edx10 = edx12 + edx12 * 4;
            *reinterpret_cast<unsigned char*>(&edx10) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx10) + *reinterpret_cast<unsigned char*>(&eax7));
        }
    }
    return 0;
}

/* fb_fix.reserved */
unsigned char fb_fix_reserved;

/* vt_mode.waitv */
int32_t vt_mode_waitv;

struct s3 {
    signed char[32] pad32;
    unsigned char f20;
};

void fun_8049260(int32_t* ecx) {
    int32_t ebx2;
    struct s3* ebp3;

    __get_GOT(ecx, __return_address());
    __asm__("int 0x80");
    __asm__("int 0x80");
    __asm__("popad ");
    fb_fix_reserved = 0;
    *reinterpret_cast<unsigned char*>(&vt_mode_waitv) = 0;
    *reinterpret_cast<unsigned char*>(ebx2 + 0x2d9b - 0x2d7b + 32) = 0;
    __asm__("outsd ");
    ebp3->f20 = 0;
    *reinterpret_cast<unsigned char*>(&vt_mode_waitv) = 0;
    if (1) 
        goto 0x80492b7;
    __asm__("aas ");
}

int32_t strlen(int32_t* ecx, struct s0** a2) {
    int32_t ebx3;
    struct s0** eax4;
    int32_t ebx5;
    struct s0** edx6;
    void* eax7;

    eax4 = __get_GOT(ecx, ebx3);
    if (!**reinterpret_cast<signed char**>(ebx5 + 0x2ae8 - 4)) {
        eax4 = a2;
    }
    edx6 = eax4;
    eax7 = reinterpret_cast<void*>(0);
    do {
        eax7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax7) + 1);
    } while (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx6) + reinterpret_cast<int32_t>(eax7)) >= 1);
    return reinterpret_cast<int32_t>(eax7) - 1;
}
