
uint32_t __get_GOT(int32_t* ecx, int32_t a2);

void _fastcall(int32_t* ecx) {
    int32_t ebx2;
    uint32_t eax3;
    int32_t ebx4;

    eax3 = __get_GOT(ecx, ebx2);
    **reinterpret_cast<uint32_t**>(ebx4 + 0x2d10 - 4) = eax3;
    return;
}

int32_t* strlen(int32_t* ecx, uint32_t a2, int32_t* a3, int32_t a4, int32_t a5) {
    int32_t ebx6;
    uint32_t eax7;
    int32_t ebx8;
    uint32_t edx9;
    void* eax10;

    eax7 = __get_GOT(ecx, ebx6);
    if (!**reinterpret_cast<signed char**>(ebx8 + 0x2c08 - 4)) {
        eax7 = a2;
    }
    edx9 = eax7;
    eax10 = reinterpret_cast<void*>(0);
    do {
        eax10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax10) + 1);
    } while (*reinterpret_cast<unsigned char*>(edx9 + reinterpret_cast<int32_t>(eax10)) >= 1);
    return reinterpret_cast<int32_t>(eax10) - 1;
}

int32_t* __system_call(int32_t* ecx, int32_t a2);

int32_t open(int32_t* ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    uint48_t v6;
    int16_t es7;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v6) + 2) = reinterpret_cast<int32_t>(__return_address());
    __system_call(ecx, *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v6) + 2));
    *ecx = *ecx + 1;
    *reinterpret_cast<int16_t*>(&v6) = es7;
    __system_call(ecx, *reinterpret_cast<int32_t*>(&v6));
    __system_call(ecx, *reinterpret_cast<int32_t*>(&v6));
}

void write(int32_t* ecx) {
    __system_call(ecx, __return_address());
}

void close(int32_t* ecx) {
    uint48_t v2;
    int16_t es3;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 2) = reinterpret_cast<int32_t>(__return_address());
    *ecx = *ecx + 1;
    *reinterpret_cast<int16_t*>(&v2) = es3;
    __system_call(ecx, *reinterpret_cast<int32_t*>(&v2));
    __system_call(ecx, *reinterpret_cast<int32_t*>(&v2));
}

void lseek(int32_t ecx) {
}

int32_t* read(int32_t* ecx) {
    __system_call(ecx, __return_address());
    __system_call(ecx, __return_address());
}

void unlink(int32_t* ecx) {
    uint32_t* edx2;
    int32_t* edx3;
    int32_t* edi4;
    int32_t* edi5;
    int32_t* eax6;
    int32_t ebp7;
    int32_t* eax8;
    int32_t* eax9;
    signed char* edx10;
    signed char* edx11;
    int32_t* ecx12;
    void** ebx13;
    int32_t edx14;
    int32_t edx15;
    int32_t edi16;

    __system_call(ecx, __return_address());
    *edx2 = *edx3 + reinterpret_cast<uint32_t>(ecx);
    __system_call(ecx, __return_address());
    *edi4 = *edi5 + (reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4 + 4);
    eax6 = __system_call(ecx, __return_address());
    *eax6 = *eax6 + ebp7;
    eax8 = __system_call(ecx, __return_address());
    *ecx = *ecx + reinterpret_cast<int32_t>(eax8);
    eax9 = __system_call(ecx, __return_address());
    *edx10 = reinterpret_cast<signed char>(*edx11 + *reinterpret_cast<signed char*>(&eax9));
    __system_call(ecx, __return_address());
    ecx12 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<int32_t>(*ebx13));
    __system_call(ecx12, __return_address());
    *reinterpret_cast<int32_t*>(edx14 - 24) = *reinterpret_cast<int32_t*>(edx15 - 24) + edi16;
}

struct s0 {
    signed char[1] pad1;
    unsigned char f1;
};

uint32_t __get_GOT(int32_t* ecx, int32_t a2) {
    uint32_t eax3;
    unsigned char** v4;
    struct s0** v5;
    uint32_t eax6;
    int32_t ebx7;
    int32_t v8;
    int32_t* v9;
    int32_t ebx10;
    int32_t v11;
    int32_t* edx12;

    eax3 = **v4;
    if (!*reinterpret_cast<signed char*>(&eax3)) {
        addr_80491d5_3:
        __asm__("int 0x80");
        if (static_cast<uint32_t>((*v5)->f1) >= 0xfffff001) {
            eax6 = __get_GOT(ecx, __return_address());
            **reinterpret_cast<uint32_t**>(ebx7 + 0x2e11 - 8) = eax6;
        }
    } else {
        if (*reinterpret_cast<signed char*>(&eax3) < 0) {
            addr_80491a9_6:
            ebx7 = v8;
            ecx = v9;
            goto addr_80491d5_3;
        } else {
            __get_GOT(ecx, __return_address());
            if (**reinterpret_cast<signed char**>(ebx10 + 0x2e68 - 4)) 
                goto addr_80491c3_9; else 
                goto addr_80491a9_6;
        }
    }
    __asm__("popad ");
    goto a2;
    addr_80491c3_9:
    ebx7 = v11;
    ecx = edx12;
    goto addr_80491d5_3;
}

struct s1 {
    signed char[1] pad1;
    unsigned char f1;
};

int32_t* __system_call(int32_t* ecx, int32_t a2) {
    uint32_t eax3;
    unsigned char** v4;
    struct s1** v5;
    uint32_t eax6;
    int32_t ebx7;
    int32_t v8;
    int32_t* v9;
    int32_t ebx10;
    int32_t v11;
    int32_t* edx12;

    eax3 = **v4;
    if (!*reinterpret_cast<signed char*>(&eax3)) {
        addr_80491d5_2:
        __asm__("int 0x80");
        if (static_cast<uint32_t>((*v5)->f1) >= 0xfffff001) {
            eax6 = __get_GOT(ecx, __return_address());
            **reinterpret_cast<uint32_t**>(ebx7 + 0x2e11 - 8) = eax6;
        }
    } else {
        if (*reinterpret_cast<signed char*>(&eax3) < 0) {
            addr_80491a9_5:
            ebx7 = v8;
            ecx = v9;
            goto addr_80491d5_2;
        } else {
            __get_GOT(ecx, __return_address());
            if (**reinterpret_cast<signed char**>(ebx10 + 0x2e68 - 4)) 
                goto addr_80491c3_8; else 
                goto addr_80491a9_5;
        }
    }
    __asm__("popad ");
    goto a2;
    addr_80491c3_8:
    ebx7 = v11;
    ecx = edx12;
    goto addr_80491d5_2;
}

void exit(int32_t* ecx, int32_t a2, uint32_t a3, void* a4, int32_t* a5) {
    int32_t* eax6;
    int32_t* eax7;
    signed char* edx8;
    signed char* edx9;
    int32_t* ecx10;
    void** ebx11;
    int32_t edx12;
    int32_t edx13;
    int32_t edi14;

    eax6 = __system_call(ecx, __return_address());
    *ecx = *ecx + reinterpret_cast<int32_t>(eax6);
    eax7 = __system_call(ecx, __return_address());
    *edx8 = reinterpret_cast<signed char>(*edx9 + *reinterpret_cast<signed char*>(&eax7));
    __system_call(ecx, __return_address());
    ecx10 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<int32_t>(*ebx11));
    __system_call(ecx10, __return_address());
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
            goto addr_8049483_4;
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
                addr_8049483_4:
                goto label_10;
            } else {
                if (*reinterpret_cast<unsigned char*>(&eax4) != 0x73) 
                    continue;
                if (ebx5) 
                    goto addr_80494b1_13;
            }
        }
        addr_80494ce_14:
        continue;
        label_10:
        *edi2 = *reinterpret_cast<unsigned char*>(&eax4);
        ++edi2;
        continue;
        addr_80494b1_13:
        while (*reinterpret_cast<unsigned char*>(&eax4) = *ebx5, !!*reinterpret_cast<unsigned char*>(&eax4)) {
            *edi2 = *reinterpret_cast<unsigned char*>(&eax4);
            ++edi2;
            ++ebx5;
        }
        goto addr_80494ce_14;
    }
    *reinterpret_cast<unsigned char*>(&eax4) = 0;
    *edi2 = 0;
    __asm__("popad ");
    return eax4;
}

int32_t* len = reinterpret_cast<int32_t*>(0);

int32_t fname = 0x804a000;

int32_t fd = 0;

int32_t* main(int32_t* ecx) {
    uint32_t v2;
    int32_t edx3;
    int32_t eax4;
    int32_t* eax5;
    int32_t eax6;
    int32_t eax7;
    int32_t* eax8;
    int32_t eax9;
    int32_t eax10;
    int32_t* eax11;
    int32_t* eax12;
    int32_t* eax13;
    int32_t* eax14;
    int32_t* eax15;
    int32_t* eax16;

    _fastcall(ecx);
    eax5 = strlen(ecx, v2, ecx, edx3, eax4);
    len = eax5;
    eax6 = fname;
    eax7 = open(ecx, eax6, 66, 0x180, 0x804902f);
    fd = eax7;
    eax8 = len;
    write(eax8);
    close(eax8);
    eax9 = fname;
    eax10 = open(eax8, eax9, 0, 0x180, 0x8049072);
    fd = eax10;
    lseek(0);
    eax11 = len;
    eax12 = read(eax11);
    len = eax12;
    close(eax11);
    unlink(eax11);
    eax13 = len;
    write(eax13);
    eax14 = read(10);
    len = eax14;
    eax15 = len;
    write(eax15);
    eax16 = len;
    return eax16;
}

void fun_8049227() {
    int32_t* ebx1;
    int32_t* ebx2;

    *ebx1 = *ebx2 + 1;
}

void fun_804922e() {
    int32_t* edx1;
    int32_t* edx2;

    *edx1 = *edx2 + 1;
    __asm__("psubsb mm1, [ebp-0x1]");
}

void fun_8049235() {
    int32_t* edx1;
    int32_t* edx2;

    *edx1 = *edx2 + 1;
}

void fun_804923c(int32_t* ecx) {
    *ecx = *ecx + 1;
    __asm__("aas ");
}

void fun_8049243() {
    int32_t* edx1;
    int32_t* edx2;

    *edx1 = *edx2 + 1;
}

void fun_804924a() {
    int32_t* edx1;
    int32_t* edx2;

    *edx1 = *edx2 + 1;
}

void fun_8049282(int32_t* ecx) {
    int32_t* ebx2;
    int32_t* ebx3;
    int32_t* ebx4;
    int32_t* ebx5;
    int32_t ebx6;
    int32_t* edx7;
    int32_t* edx8;
    int32_t* edx9;
    int32_t* edx10;

    *ebx2 = *ebx3 + 1;
    __system_call(ecx, __return_address());
    *ebx4 = *ebx5 + ebx6;
    __system_call(ecx, __return_address());
    *edx7 = *edx8 + 1;
    *edx9 = *edx10 + 1;
}

void fun_80492a5(int32_t* ecx) {
    int32_t* edx2;
    int32_t esi3;
    int32_t* edx4;
    int32_t esi5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edx2) + esi3 * 2) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edx4) + esi5 * 2) + 1;
    __system_call(ecx, __return_address());
}

void fun_80492b3() {
    int32_t* edx1;
    int32_t* edx2;

    *edx1 = *edx2 + 1;
}

void fun_80492ba(int32_t a1, int32_t a2) {
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
    uint32_t eax13;
    int32_t ebx14;
    int32_t eax15;

    *eax3 = *eax4 + 1;
    *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<unsigned char>(al6 - reinterpret_cast<unsigned char>(ch7 + reinterpret_cast<uint1_t>(al8 < reinterpret_cast<unsigned char>(ch9 + cf10))));
    *eax5 = *eax5 + 1;
    __asm__("das ");
    esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4 + 4);
    ecx12 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp11) + a1 * 4 + 4);
    eax13 = __get_GOT(ecx12, a2);
    **reinterpret_cast<int32_t***>(ebx14 + 0x2d31 - 12) = ecx12;
    eax15 = reinterpret_cast<int32_t>(__return_address()(eax13, reinterpret_cast<int32_t>(esp11) - 4 + 4, ecx12));
    exit(ecx12, eax15, eax13, reinterpret_cast<int32_t>(esp11) - 4 + 4, ecx12);
}

void _start() {
    goto 0x80492c4;
}

uint32_t memcpy(int32_t* ecx) {
    signed char* edi2;
    signed char* eax3;
    signed char* esi4;
    signed char* edx5;
    int32_t ebx6;
    uint32_t eax7;
    int32_t ebx8;
    signed char* v9;
    signed char* v10;
    int32_t* v11;

    __asm__("pushad ");
    edi2 = eax3;
    esi4 = edx5;
    eax7 = __get_GOT(ecx, ebx6);
    if (!**reinterpret_cast<signed char**>(ebx8 + 0x2cc2 - 4)) {
        edi2 = v9;
        esi4 = v10;
        ecx = v11;
    }
    while (ecx) {
        ecx = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx) - 1);
        *edi2 = *esi4;
        ++edi2;
        ++esi4;
    }
    __asm__("popad ");
    return eax7;
}

uint32_t memcmp(int32_t* ecx, unsigned char* a2, unsigned char* a3, int32_t* a4) {
    int32_t ebx5;
    uint32_t eax6;
    uint1_t cf7;
    int32_t ebx8;
    int1_t zf9;
    unsigned char* esi10;
    unsigned char* edi11;

    eax6 = __get_GOT(ecx, ebx5);
    cf7 = reinterpret_cast<uint1_t>(**reinterpret_cast<unsigned char**>(ebx8 + 0x2c96 - 4) < 0);
    zf9 = **reinterpret_cast<unsigned char**>(ebx8 + 0x2c96 - 4) == 0;
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
        eax6 = eax6 - (eax6 + reinterpret_cast<uint1_t>(eax6 < eax6 + cf7)) | 1;
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
    if (!**reinterpret_cast<signed char**>(ebx5 + 0x2bdb - 4)) {
        edi2 = v6;
        ecx = v7;
    }
    eax8 = itoa_printB(ecx);
    *edi2 = 0;
    __asm__("popad ");
    return eax8;
}

int32_t printf() {
    __asm__("pushad ");
    sprintf(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x1000 + 32);
    __asm__("int 0x80");
    __asm__("popad ");
    return 4;
}

uint32_t strtol(int32_t* ecx, unsigned char* a2, unsigned char* a3, int32_t* a4) {
    unsigned char* edi5;
    unsigned char* eax6;
    unsigned char* esi7;
    unsigned char* edx8;
    int32_t ebx9;
    int32_t ebx10;
    uint32_t eax11;
    int32_t ebx12;

    edi5 = eax6;
    esi7 = edx8;
    __get_GOT(ecx, ebx9);
    if (!**reinterpret_cast<signed char**>(ebx10 + 0x2a88 - 4)) {
        edi5 = a2;
        esi7 = a3;
        ecx = a4;
    }
    if (!ecx) {
        ecx = reinterpret_cast<int32_t*>(10);
    }
    eax11 = 0;
    ebx12 = 0;
    while (*edi5 == 32) {
        ++edi5;
    }
    if (*edi5 == 0x7830) {
        ecx = reinterpret_cast<int32_t*>(16);
        edi5 = edi5 + 2;
    }
    do {
        *reinterpret_cast<unsigned char*>(&ebx12) = reinterpret_cast<unsigned char>(*edi5 - 48);
        if (*edi5 < 48) 
            break;
        if (*reinterpret_cast<unsigned char*>(&ebx12) > 9 && (*reinterpret_cast<unsigned char*>(&ebx12) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx12) - 7), *reinterpret_cast<unsigned char*>(&ebx12) > 35)) {
            *reinterpret_cast<unsigned char*>(&ebx12) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx12) - 32);
        }
        eax11 = eax11 * reinterpret_cast<uint32_t>(ecx) + ebx12;
        ++edi5;
    } while (edi5 != esi7);
    return eax11;
}

int32_t memset(int32_t* ecx, signed char* a2, uint32_t a3, int32_t* a4) {
    int32_t v5;
    int32_t eax6;
    signed char* edx7;
    signed char* eax8;
    int32_t ebx9;
    uint32_t eax10;
    int32_t ebx11;
    signed char* edi12;

    v5 = eax6;
    edx7 = eax8;
    eax10 = __get_GOT(ecx, ebx9);
    if (!**reinterpret_cast<signed char**>(ebx11 + 0x2cf6 - 4)) {
        edx7 = a2;
        eax10 = a3;
        ecx = a4;
    }
    edi12 = edx7;
    while (ecx) {
        ecx = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx) - 1);
        *edi12 = *reinterpret_cast<signed char*>(&eax10);
        ++edi12;
    }
    return v5;
}

/* fb_fix.reserved */
unsigned char fb_fix_reserved;

/* vt_mode.waitv */
int32_t vt_mode_waitv;

struct s2 {
    signed char[32] pad32;
    unsigned char f20;
};

void fun_8049140(int32_t* ecx) {
    int32_t ebx2;
    struct s2* ebp3;

    __get_GOT(ecx, __return_address());
    __asm__("int 0x80");
    __asm__("int 0x80");
    __asm__("popad ");
    fb_fix_reserved = 0;
    *reinterpret_cast<unsigned char*>(&vt_mode_waitv) = 0;
    *reinterpret_cast<unsigned char*>(ebx2 + 0x2ebb - 0x2e9b + 32) = 0;
    __asm__("outsd ");
    ebp3->f20 = 0;
    *reinterpret_cast<unsigned char*>(&vt_mode_waitv) = 0;
    if (1) 
        goto 0x8049197;
    __asm__("aas ");
}

void getenv(int32_t* ecx) {
    signed char* edi2;
    signed char* eax3;
    int32_t ebx4;
    int32_t ebx5;
    signed char* v6;
    signed char** ebx7;
    signed char* edx8;
    uint32_t ecx9;
    int32_t eax10;
    int32_t ecx11;
    signed char* esi12;
    signed char* edi13;
    int1_t zf14;

    __asm__("pushad ");
    edi2 = eax3;
    __get_GOT(ecx, ebx4);
    if (!**reinterpret_cast<signed char**>(ebx5 + 0x2c61 - 4)) {
        edi2 = v6;
    }
    __get_GOT(ecx, __return_address());
    ebx7 = **reinterpret_cast<signed char****>(ebx4 + 0x2c46 - 12);
    edx8 = edi2;
    ecx9 = 0xffffffff;
    do {
        if (!ecx9) 
            break;
        --ecx9;
        ++edi2;
    } while (*edi2);
    eax10 = reinterpret_cast<int32_t>(~ecx9) - 1;
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
            goto addr_80493ea_12;
        ++ebx7;
    }
    addr_80493eb_14:
    __asm__("popad ");
    return;
    addr_80493ea_12:
    goto addr_80493eb_14;
}

int32_t inet_aton(int32_t* ecx, int32_t a2, unsigned char* a3) {
    unsigned char* edi4;
    unsigned char* edx5;
    int32_t ebx6;
    uint32_t eax7;
    int32_t ebx8;
    int32_t ecx9;
    int32_t edx10;
    int1_t cf11;
    int32_t edx12;

    edi4 = edx5;
    eax7 = __get_GOT(ecx, ebx6);
    if (!**reinterpret_cast<signed char**>(ebx8 + 0x2acf - 4)) {
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
