
unsigned char** __get_GOT(unsigned char** ecx, int32_t a2);

void _fastcall(unsigned char** ecx) {
    int32_t ebx2;
    unsigned char** eax3;
    int32_t ebx4;

    eax3 = __get_GOT(ecx, ebx2);
    **reinterpret_cast<unsigned char****>(ebx4 + 0x2c00 - 4) = eax3;
    return;
}

uint32_t sprintf(void* a1);

int32_t printf(unsigned char** ecx, int32_t a2, unsigned char* a3, int32_t a4, int32_t a5) {
    __asm__("pushad ");
    sprintf(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x1000 + 32);
    __asm__("int 0x80");
    __asm__("popad ");
    return 4;
}

int32_t* __system_call(unsigned char** ecx, int32_t a2, int32_t a3, unsigned char** a4);

unsigned char** read(unsigned char** ecx, int32_t a2, unsigned char** a3) {
    __system_call(ecx, __return_address(), a2, a3);
    __system_call(ecx, __return_address(), a2, a3);
}

unsigned char** memcpy(unsigned char** ecx) {
    signed char* edi2;
    signed char* eax3;
    signed char* esi4;
    signed char* edx5;
    int32_t ebx6;
    unsigned char** eax7;
    int32_t ebx8;
    signed char* v9;
    signed char* v10;
    unsigned char** v11;

    __asm__("pushad ");
    edi2 = eax3;
    esi4 = edx5;
    eax7 = __get_GOT(ecx, ebx6);
    if (!**reinterpret_cast<signed char**>(ebx8 + 0x2bb2 - 4)) {
        edi2 = v9;
        esi4 = v10;
        ecx = v11;
    }
    while (ecx) {
        --ecx;
        *edi2 = *esi4;
        ++edi2;
        ++esi4;
    }
    __asm__("popad ");
    return eax7;
}

unsigned char* strtol(unsigned char** ecx, unsigned char** a2, unsigned char** a3, unsigned char** a4) {
    unsigned char** edi5;
    unsigned char** eax6;
    unsigned char** esi7;
    unsigned char** edx8;
    int32_t ebx9;
    int32_t ebx10;
    unsigned char* eax11;
    unsigned char* ebx12;

    edi5 = eax6;
    esi7 = edx8;
    __get_GOT(ecx, ebx9);
    if (!**reinterpret_cast<signed char**>(ebx10 + 0x2978 - 4)) {
        edi5 = a2;
        esi7 = a3;
        ecx = a4;
    }
    if (!ecx) {
        ecx = reinterpret_cast<unsigned char**>(10);
    }
    eax11 = reinterpret_cast<unsigned char*>(0);
    ebx12 = reinterpret_cast<unsigned char*>(0);
    while (reinterpret_cast<int1_t>(*edi5 == 32)) {
        ++edi5;
    }
    if (reinterpret_cast<int1_t>(*edi5 == 0x7830)) {
        ecx = reinterpret_cast<unsigned char**>(16);
        edi5 = edi5 + 2;
    }
    do {
        *reinterpret_cast<unsigned char*>(&ebx12) = reinterpret_cast<unsigned char>(*edi5 - 48);
        if (reinterpret_cast<unsigned char>(*edi5) < 48) 
            break;
        if (*reinterpret_cast<unsigned char*>(&ebx12) > 9 && (*reinterpret_cast<unsigned char*>(&ebx12) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx12) - 7), *reinterpret_cast<unsigned char*>(&ebx12) > 35)) {
            *reinterpret_cast<unsigned char*>(&ebx12) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx12) - 32);
        }
        eax11 = reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax11) * reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<int32_t>(ebx12));
        ++edi5;
    } while (edi5 != esi7);
    return eax11;
}

int32_t memset(unsigned char** ecx, signed char* a2, unsigned char** a3, unsigned char** a4) {
    int32_t v5;
    int32_t eax6;
    signed char* edx7;
    signed char* eax8;
    int32_t ebx9;
    unsigned char** eax10;
    int32_t ebx11;
    signed char* edi12;

    v5 = eax6;
    edx7 = eax8;
    eax10 = __get_GOT(ecx, ebx9);
    if (!**reinterpret_cast<signed char**>(ebx11 + 0x2be6 - 4)) {
        edx7 = a2;
        eax10 = a3;
        ecx = a4;
    }
    edi12 = edx7;
    while (ecx) {
        --ecx;
        *edi12 = *reinterpret_cast<signed char*>(&eax10);
        ++edi12;
    }
    return v5;
}

void write(unsigned char** ecx, int32_t a2, unsigned char** a3) {
    __system_call(ecx, __return_address(), a2, a3);
}

unsigned char* getenv(unsigned char** ecx) {
    signed char* edi2;
    signed char* eax3;
    int32_t ebx4;
    int32_t ebx5;
    signed char* v6;
    signed char** ebx7;
    signed char* edx8;
    uint32_t ecx9;
    unsigned char* eax10;
    unsigned char* ecx11;
    signed char* esi12;
    signed char* edi13;
    int1_t zf14;

    __asm__("pushad ");
    edi2 = eax3;
    __get_GOT(ecx, ebx4);
    if (!**reinterpret_cast<signed char**>(ebx5 + 0x2b51 - 4)) {
        edi2 = v6;
    }
    __get_GOT(ecx, __return_address());
    ebx7 = **reinterpret_cast<signed char****>(ebx4 + 0x2b36 - 12);
    edx8 = edi2;
    ecx9 = 0xffffffff;
    do {
        if (!ecx9) 
            break;
        --ecx9;
        ++edi2;
    } while (*edi2);
    eax10 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(~ecx9) - 1);
    while (ecx11 = eax10, esi12 = edx8, edi13 = *ebx7, zf14 = edi13 == 0, !zf14) {
        do {
            if (!ecx11) 
                break;
            --ecx11;
            zf14 = *esi12 == *edi13;
            ++edi13;
            ++esi12;
        } while (zf14);
        if (zf14) 
            goto addr_80494fa_12;
        ++ebx7;
    }
    addr_80494fb_14:
    __asm__("popad ");
    return eax10;
    addr_80494fa_12:
    goto addr_80494fb_14;
}

struct s0 {
    signed char[1] pad1;
    unsigned char f1;
};

unsigned char** __get_GOT(unsigned char** ecx, int32_t a2) {
    uint32_t eax3;
    unsigned char** v4;
    struct s0** v5;
    unsigned char** eax6;
    int32_t ebx7;
    int32_t v8;
    unsigned char** v9;
    int32_t ebx10;
    int32_t v11;
    unsigned char** edx12;

    eax3 = **v4;
    if (!*reinterpret_cast<signed char*>(&eax3)) {
        addr_80492e5_3:
        __asm__("int 0x80");
        if (static_cast<uint32_t>((*v5)->f1) >= 0xfffff001) {
            eax6 = __get_GOT(ecx, __return_address());
            **reinterpret_cast<unsigned char****>(ebx7 + 0x2d01 - 8) = eax6;
        }
    } else {
        if (*reinterpret_cast<signed char*>(&eax3) < 0) {
            addr_80492b9_6:
            ebx7 = v8;
            ecx = v9;
            goto addr_80492e5_3;
        } else {
            __get_GOT(ecx, __return_address());
            if (**reinterpret_cast<signed char**>(ebx10 + 0x2d58 - 4)) 
                goto addr_80492d3_9; else 
                goto addr_80492b9_6;
        }
    }
    __asm__("popad ");
    goto a2;
    addr_80492d3_9:
    ebx7 = v11;
    ecx = edx12;
    goto addr_80492e5_3;
}

int32_t* __system_call(unsigned char** ecx, int32_t a2, int32_t a3, unsigned char** a4) {
    uint32_t eax5;
    unsigned char** eax6;
    int32_t ebx7;
    int32_t v8;
    unsigned char** v9;
    int32_t ebx10;
    int32_t v11;
    unsigned char** edx12;

    eax5 = **a4;
    if (!*reinterpret_cast<signed char*>(&eax5)) {
        addr_80492e5_2:
        __asm__("int 0x80");
        if (static_cast<uint32_t>((*a4)[1]) >= 0xfffff001) {
            eax6 = __get_GOT(ecx, __return_address());
            **reinterpret_cast<unsigned char****>(ebx7 + 0x2d01 - 8) = eax6;
        }
    } else {
        if (*reinterpret_cast<signed char*>(&eax5) < 0) {
            addr_80492b9_5:
            ebx7 = v8;
            ecx = v9;
            goto addr_80492e5_2;
        } else {
            __get_GOT(ecx, __return_address());
            if (**reinterpret_cast<signed char**>(ebx10 + 0x2d58 - 4)) 
                goto addr_80492d3_8; else 
                goto addr_80492b9_5;
        }
    }
    __asm__("popad ");
    goto a2;
    addr_80492d3_8:
    ebx7 = v11;
    ecx = edx12;
    goto addr_80492e5_2;
}

void exit(unsigned char** ecx, int32_t a2, unsigned char** a3, void* a4, unsigned char** a5) {
    int32_t* eax6;
    int32_t* eax7;
    signed char* edx8;
    signed char* edx9;
    unsigned char** ecx10;
    void** ebx11;
    int32_t edx12;
    int32_t edx13;
    int32_t edi14;

    eax6 = __system_call(ecx, __return_address(), a2, a3);
    *ecx = reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(*ecx) + reinterpret_cast<int32_t>(eax6));
    eax7 = __system_call(ecx, __return_address(), a2, a3);
    *edx8 = reinterpret_cast<signed char>(*edx9 + *reinterpret_cast<signed char*>(&eax7));
    __system_call(ecx, __return_address(), a2, a3);
    ecx10 = reinterpret_cast<unsigned char**>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<int32_t>(*ebx11));
    __system_call(ecx10, __return_address(), a2, a3);
    *reinterpret_cast<int32_t*>(edx12 - 24) = *reinterpret_cast<int32_t*>(edx13 - 24) + edi14;
}

/* itoa.printB */
uint32_t itoa_printB(unsigned char** ecx) {
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
    unsigned char** ecx7;

    __asm__("pushad ");
    edi2 = v3;
    while (*reinterpret_cast<unsigned char*>(&eax4)) {
        if (*reinterpret_cast<unsigned char*>(&eax4) != 37) 
            goto addr_8049593_4;
        ebx5 = v6;
        __asm__("lodsb ");
        ecx7 = reinterpret_cast<unsigned char**>(10);
        if (*reinterpret_cast<unsigned char*>(&eax4) == 100 || ((ecx7 = reinterpret_cast<unsigned char**>(16), *reinterpret_cast<unsigned char*>(&eax4) == 0x78) || ((ecx7 = reinterpret_cast<unsigned char**>(8), *reinterpret_cast<unsigned char*>(&eax4) == 0x6f) || (ecx7 = reinterpret_cast<unsigned char**>(2), *reinterpret_cast<unsigned char*>(&eax4) == 98)))) {
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
                addr_8049593_4:
                goto label_10;
            } else {
                if (*reinterpret_cast<unsigned char*>(&eax4) != 0x73) 
                    continue;
                if (ebx5) 
                    goto addr_80495c1_13;
            }
        }
        addr_80495de_14:
        continue;
        label_10:
        *edi2 = *reinterpret_cast<unsigned char*>(&eax4);
        ++edi2;
        continue;
        addr_80495c1_13:
        while (*reinterpret_cast<unsigned char*>(&eax4) = *ebx5, !!*reinterpret_cast<unsigned char*>(&eax4)) {
            *edi2 = *reinterpret_cast<unsigned char*>(&eax4);
            ++edi2;
            ++ebx5;
        }
        goto addr_80495de_14;
    }
    *reinterpret_cast<unsigned char*>(&eax4) = 0;
    *edi2 = 0;
    __asm__("popad ");
    return eax4;
}

unsigned char* errno = reinterpret_cast<unsigned char*>(0);

int32_t main(unsigned char** ecx) {
    int32_t v2;
    int32_t eax3;
    unsigned char** v4;
    unsigned char** edx5;
    unsigned char** v6;
    int32_t v7;
    unsigned char** eax8;
    unsigned char** v9;
    unsigned char* eax10;
    unsigned char* v11;
    int32_t v12;
    signed char* v13;
    int32_t v14;
    signed char* v15;
    unsigned char** v16;
    unsigned char* eax17;
    int32_t v18;
    unsigned char* eax19;
    int32_t v20;
    int32_t v21;
    unsigned char* v22;
    unsigned char* eax23;
    unsigned char* v24;
    int32_t v25;

    v2 = eax3;
    v4 = edx5;
    v6 = ecx;
    _fastcall(ecx);
    printf(ecx, "\n\tprintf() test\nhex: %x, octal: %o, decimal: %d\n", 16, 8, 10);
    printf(ecx, "\n\tstrtol() test\nInput some decimal number: ", 16, 8, 10);
    eax8 = read(10, v7, v6);
    memcpy(eax8);
    eax10 = strtol(10, v9, v6, v4);
    v11 = eax10;
    printf(10, "You have entered %d\n", v11, 8, 0x804908b);
    printf(10, "\n\tmemset() test\n", v11, 8, 0x804908b);
    v12 = 0x80490be;
    memset(10, v13, v6, v4);
    v14 = 9;
    while (v14 > 0) {
        memset(5, v15, v6, v4);
        v12 = 0x80490f3;
        eax17 = strtol(10, v16, v6, v4);
        v11 = eax17;
        printf(10, "%d ", v11, 8, 0x80490f3);
        --v14;
    }
    printf(10, "\n\n\tvariable test\n", v11, 8, v12);
    write(0, v18, v6);
    eax19 = errno;
    printf(0, "errno: %d\n", eax19, 8, 0x8049131);
    printf(0, "\n\tenvironment test\nPress ENTER to print envrionment\n", eax19, 8, 0x8049131);
    read(1, v20, v6);
    v21 = 0;
    while (v6[v21 * 4]) {
        v22 = v6[v21 * 4];
        printf(1, "%s\n", v22, 8, 0x804916b);
        ++v21;
    }
    eax23 = getenv(1);
    v24 = eax23;
    printf(1, "\n\tgetenv(\"HOME\") test\n%s\n", v24, 8, 0x80491b8);
    if (v2 > 1) {
        printf(1, "\n\targuments test\n", v24, 8, 0x80491b8);
        v25 = 0;
        while (v25 < v2) {
            v24 = v4[v25 * 4];
            printf(1, "%s\n", v24, 8, 0x80491b8);
            ++v25;
        }
    }
    printf(1, "\n\tall tests done\n", v24, 8, 0x80491b8);
    return 0;
}

void fun_8049337() {
    int32_t* ebx1;
    int32_t* ebx2;

    *ebx1 = *ebx2 + 1;
}

void fun_804933e() {
    int32_t* edx1;
    int32_t* edx2;

    *edx1 = *edx2 + 1;
    __asm__("psubsb mm1, [ebp-0x1]");
}

void fun_8049345() {
    int32_t* edx1;
    int32_t* edx2;

    *edx1 = *edx2 + 1;
}

void fun_804934c(int32_t* ecx) {
    *ecx = *ecx + 1;
    __asm__("aas ");
}

void fun_8049353() {
    int32_t* edx1;
    int32_t* edx2;

    *edx1 = *edx2 + 1;
}

void fun_804935a(unsigned char** ecx, unsigned char** a2) {
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

void fun_8049392(unsigned char** ecx, int32_t a2, unsigned char** a3) {
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

void fun_80493b5(unsigned char** ecx, int32_t a2, unsigned char** a3) {
    int32_t* edx4;
    int32_t esi5;
    int32_t* edx6;
    int32_t esi7;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edx4) + esi5 * 2) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edx6) + esi7 * 2) + 1;
    __system_call(ecx, __return_address(), a2, a3);
}

void fun_80493c3() {
    int32_t* edx1;
    int32_t* edx2;

    *edx1 = *edx2 + 1;
}

void fun_80493ca(int32_t a1, int32_t a2) {
    int32_t* eax3;
    int32_t* eax4;
    int32_t* eax5;
    signed char al6;
    signed char ch7;
    unsigned char al8;
    signed char ch9;
    uint1_t cf10;
    void* esp11;
    unsigned char** ecx12;
    unsigned char** eax13;
    int32_t ebx14;
    int32_t eax15;

    *eax3 = *eax4 + 1;
    *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<unsigned char>(al6 - reinterpret_cast<unsigned char>(ch7 + reinterpret_cast<uint1_t>(al8 < reinterpret_cast<unsigned char>(ch9 + cf10))));
    *eax5 = *eax5 + 1;
    __asm__("das ");
    esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4 + 4);
    ecx12 = reinterpret_cast<unsigned char**>(reinterpret_cast<int32_t>(esp11) + a1 * 4 + 4);
    eax13 = __get_GOT(ecx12, a2);
    **reinterpret_cast<unsigned char****>(ebx14 + 0x2c21 - 12) = ecx12;
    eax15 = reinterpret_cast<int32_t>(__return_address()(eax13, reinterpret_cast<int32_t>(esp11) - 4 + 4, ecx12));
    exit(ecx12, eax15, eax13, reinterpret_cast<int32_t>(esp11) - 4 + 4, ecx12);
}

void _start() {
    goto 0x80493d4;
}

void open(unsigned char** ecx, int32_t a2, unsigned char** a3) {
    __system_call(ecx, __return_address(), a2, a3);
    *ecx = *ecx + 1;
}

unsigned char** memcmp(unsigned char** ecx, unsigned char* a2, unsigned char* a3, unsigned char** a4) {
    int32_t ebx5;
    unsigned char** eax6;
    uint1_t cf7;
    int32_t ebx8;
    int1_t zf9;
    unsigned char* esi10;
    unsigned char* edi11;

    eax6 = __get_GOT(ecx, ebx5);
    cf7 = reinterpret_cast<uint1_t>(**reinterpret_cast<unsigned char**>(ebx8 + 0x2b86 - 4) < 0);
    zf9 = **reinterpret_cast<unsigned char**>(ebx8 + 0x2b86 - 4) == 0;
    if (zf9) {
        esi10 = a2;
        edi11 = a3;
        ecx = a4;
    }
    do {
        if (!ecx) 
            break;
        --ecx;
        cf7 = reinterpret_cast<uint1_t>(*esi10 < *edi11);
        zf9 = *esi10 == *edi11;
        ++edi11;
        ++esi10;
    } while (zf9);
    if (!zf9) {
        eax6 = reinterpret_cast<unsigned char**>(reinterpret_cast<uint32_t>(eax6) - (reinterpret_cast<uint32_t>(eax6) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax6) < reinterpret_cast<uint32_t>(eax6) + cf7)) | 1);
    }
    return eax6;
}

uint32_t itoa(unsigned char** ecx) {
    signed char* edi2;
    signed char* edx3;
    int32_t ebx4;
    int32_t ebx5;
    signed char* v6;
    unsigned char** v7;
    uint32_t eax8;

    __asm__("pushad ");
    edi2 = edx3;
    __get_GOT(ecx, ebx4);
    if (!**reinterpret_cast<signed char**>(ebx5 + 0x2acb - 4)) {
        edi2 = v6;
        ecx = v7;
    }
    eax8 = itoa_printB(ecx);
    *edi2 = 0;
    __asm__("popad ");
    return eax8;
}

int32_t inet_aton(unsigned char** ecx, int32_t a2, unsigned char* a3) {
    unsigned char* edi4;
    unsigned char* edx5;
    int32_t ebx6;
    unsigned char** eax7;
    int32_t ebx8;
    int32_t ecx9;
    int32_t edx10;
    int1_t cf11;
    int32_t edx12;

    edi4 = edx5;
    eax7 = __get_GOT(ecx, ebx6);
    if (!**reinterpret_cast<signed char**>(ebx8 + 0x29bf - 4)) {
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

struct s1 {
    signed char[32] pad32;
    unsigned char f20;
};

void fun_8049250(unsigned char** ecx) {
    int32_t ebx2;
    struct s1* ebp3;

    __get_GOT(ecx, __return_address());
    __asm__("int 0x80");
    __asm__("int 0x80");
    __asm__("popad ");
    fb_fix_reserved = 0;
    *reinterpret_cast<unsigned char*>(&vt_mode_waitv) = 0;
    *reinterpret_cast<unsigned char*>(ebx2 + 0x2dab - 0x2d8b + 32) = 0;
    __asm__("outsd ");
    ebp3->f20 = 0;
    *reinterpret_cast<unsigned char*>(&vt_mode_waitv) = 0;
    if (1) 
        goto 0x80492a7;
    __asm__("aas ");
}

int32_t strlen(unsigned char** ecx, unsigned char** a2) {
    int32_t ebx3;
    unsigned char** eax4;
    int32_t ebx5;
    unsigned char** edx6;
    void* eax7;

    eax4 = __get_GOT(ecx, ebx3);
    if (!**reinterpret_cast<signed char**>(ebx5 + 0x2af8 - 4)) {
        eax4 = a2;
    }
    edx6 = eax4;
    eax7 = reinterpret_cast<void*>(0);
    do {
        eax7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax7) + 1);
    } while (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx6) + reinterpret_cast<int32_t>(eax7)) >= 1);
    return reinterpret_cast<int32_t>(eax7) - 1;
}
