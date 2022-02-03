
uint32_t g8048331;

int32_t fun_80482c1() {
    uint32_t eax1;

    __asm__("int 0x80");
    eax1 = g8048331;
    g8048331 = eax1 & 0xfffffff5;
    __asm__("int 0x80");
    g8048331 = eax1;
    return 54;
}

void fun_804829f(signed char* ecx) {
    int32_t eax2;
    int32_t edx3;
    int32_t ecx4;
    int32_t ebx5;
    int32_t esi6;
    int32_t edi7;

    eax2 = 0;
    edx3 = 0;
    ecx4 = 0;
    do {
        ebx5 = 0;
        while (++edx3, *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(esi6 + edx3) - 48), *reinterpret_cast<unsigned char*>(esi6 + edx3) >= 48) {
            ebx5 = ebx5 * 10 + eax2;
        }
        *reinterpret_cast<signed char*>(edi7 + ecx4 + 4) = *reinterpret_cast<signed char*>(&ebx5);
        ++ecx4;
    } while (ecx4 != 4);
    return;
}

int32_t fun_80482f3(signed char* ecx) {
    __asm__("int 0x80");
    return 54;
}

struct s0 {
    void* f0;
    signed char[1224736770] pad1224736771;
    void* f49000003;
};

struct s1 {
    signed char[111] pad111;
    signed char f6f;
};

struct s2 {
    signed char[111] pad111;
    signed char f6f;
};

int32_t g8048315;

int32_t g8048305;

int16_t g8048309;

int32_t g804830d;

int16_t g8048311;

uint16_t g804830b;

uint16_t g8048313;

signed char g8048349;

signed char g8048347;

struct s3 {
    signed char[104] pad104;
    unsigned char f68;
};

struct s4 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s5 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s6 {
    signed char[101] pad101;
    signed char f65;
};

struct s7 {
    signed char[32] pad32;
    int32_t f20;
};

struct s8 {
    signed char[112] pad112;
    unsigned char f70;
};

struct s9 {
    signed char[112] pad112;
    unsigned char f70;
};

void fun_8048000(signed char* ecx) {
    void* esp2;
    int1_t less_or_equal3;
    int32_t eax4;
    int32_t* ebx5;
    int32_t* ebx6;
    int32_t eax7;
    signed char* eax8;
    signed char* eax9;
    signed char al10;
    signed char* eax11;
    signed char* eax12;
    signed char al13;
    signed char* eax14;
    signed char* eax15;
    signed char al16;
    signed char* eax17;
    signed char* eax18;
    signed char al19;
    void** eax20;
    signed char al21;
    signed char* eax22;
    struct s0* eax23;
    signed char dh24;
    void** eax25;
    void* tmp8_26;
    uint1_t cf27;
    struct s1* ebx28;
    struct s2* ebx29;
    unsigned char* edx30;
    unsigned char* edx31;
    unsigned char bh32;
    int1_t cf33;
    int1_t zf34;
    void* esp35;
    int32_t ebx36;
    int32_t v37;
    int32_t eax38;
    int1_t cf39;
    signed char* esp40;
    int32_t eax41;
    int32_t ebp42;
    signed char* esp43;
    signed char* esp44;
    signed char* esp45;
    void* esp46;
    int1_t zf47;
    int1_t zf48;
    int1_t zf49;
    int1_t zf50;
    struct s3* ebx51;
    struct s4* edx52;
    struct s5* edx53;
    unsigned char dh54;
    struct s6* edx55;
    unsigned char* edx56;
    unsigned char* edx57;
    unsigned char bh58;
    signed char* edx59;
    signed char* edx60;
    int32_t v61;
    int32_t esi62;
    struct s7* ebx63;
    int1_t zf64;
    unsigned char* bx65;
    struct s8* ebx66;
    struct s9* ebx67;
    unsigned char bl68;

    esp2 = reinterpret_cast<void*>(__zero_stack_offset());
    if (less_or_equal3) {
        *ecx = reinterpret_cast<signed char>(*ecx + eax4);
        *ebx5 = *ebx6 + eax7;
        *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
        *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
        *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
        *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
        *reinterpret_cast<signed char*>(&eax20) = reinterpret_cast<signed char>(al21 + *eax22);
        eax23 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(eax20) + reinterpret_cast<int32_t>(*eax20));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<int32_t>(eax23));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<uint32_t>(ecx)) + 44);
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(eax23)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(eax23)) + dh24);
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<int32_t>(eax23));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax23) - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax23) - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<void**>(&eax23) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)) + 8);
        eax25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax23) + 0x49000003);
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax25)));
        esp2 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esp2) - 1 + 4 + 2 + 2);
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax25)));
    }
    tmp8_26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax25)));
    cf27 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_26) < reinterpret_cast<unsigned char>(*eax25));
    *eax25 = tmp8_26;
    *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax25))) + cf27);
    ebx28->f6f = reinterpret_cast<signed char>(ebx29->f6f + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax25)));
    __asm__("outsb ");
    __asm__("outsb ");
    __asm__("arpl [gs:ebp+0x64], si");
    *edx30 = reinterpret_cast<unsigned char>(*edx31 & bh32);
    cf33 = reinterpret_cast<unsigned char>(*eax25) < reinterpret_cast<unsigned char>(esp2);
    *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) - reinterpret_cast<unsigned char>(esp2));
    zf34 = *eax25 == 0;
    if (!cf33) {
        while (1) {
            if (zf34) {
                esp2 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esp2) - 4 + 4);
                addr_80480c4_6:
                ecx = reinterpret_cast<signed char*>(0x8048087);
                esp2 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esp2) - 4 + 4 - 4 + 4);
                __asm__("int 0x80");
            }
            do {
                fun_80482f3(ecx);
                esp2 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esp2) - 4 + 4);
                addr_80480d3_8:
                esp2 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esp2) - 4);
                addr_80480d9_9:
                esp2 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esp2) + 4);
                __asm__("int 0x80");
                addr_80480dd_10:
                esp35 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esp2) - 4 + 4);
                __asm__("int 0x80");
                addr_80480e4_11:
                fun_804829f(ecx);
                esp2 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp35) + 4 + 4 - 4 + 4 + 4);
                *reinterpret_cast<signed char*>(&ebx36) = 23;
                if (v37) {
                    ebx36 = 0;
                    addr_80480f9_13:
                    eax38 = 0;
                    while ((cf39 = *reinterpret_cast<unsigned char*>(&eax38) < 48, *reinterpret_cast<unsigned char*>(&eax38) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax38) - 48), !cf39) && *reinterpret_cast<unsigned char*>(&eax38) <= 9) {
                        ebx36 = ebx36 * 10 + eax38;
                    }
                }
                addr_804810b_16:
                g8048315 = 2;
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&g8048315) + 3) = *reinterpret_cast<signed char*>(&ebx36);
                esp40 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esp2) - 4 - 4 - 4);
                ecx = esp40;
                eax41 = 0x66;
                __asm__("int 0x80");
                esp2 = reinterpret_cast<void*>(esp40 - 4 + 4 - 4 + 4 + 12);
                do {
                    if (0) 
                        goto addr_80480b8_18;
                    ebp42 = eax41;
                    esp43 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esp2) - 4 - 4 - 4 - 4 - 4 - 4);
                    ecx = esp43;
                    __asm__("int 0x80");
                    eax41 = 16;
                    esp2 = reinterpret_cast<void*>(esp43 - 4 + 4 - 4 + 4 + 20 + 4);
                } while ((esp44 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esp2) - 4 - 4 - 4), ecx = esp44, eax41 = 0x66, esp2 = reinterpret_cast<void*>(esp44 - 4 + 4 - 4 + 4 + 12), 0) || (esp45 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esp2) - 4 - 4 - 4 - 4 - 4 - 4), ecx = esp45, eax41 = 1, esp2 = reinterpret_cast<void*>(esp45 - 4 + 4 - 4 + 4 + 20 + 4), 0));
                esp46 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esp2) - 4 + 4 - 4 + 4);
                __asm__("int 0x80");
                while (1) {
                    g8048305 = ebp42;
                    g8048309 = 3;
                    g804830d = 0;
                    g8048311 = 3;
                    esp46 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp46) - 4 + 4);
                    __asm__("int 0x80");
                    zf47 = (g804830b & 3) == 0;
                    if (zf47) {
                        zf48 = (g8048313 & 3) == 0;
                        if (!zf48) {
                            __asm__("int 0x80");
                            esp46 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp46) - 4 + 4 - 4 + 4);
                            __asm__("int 0x80");
                            continue;
                        } else {
                            continue;
                        }
                    }
                    ecx = reinterpret_cast<signed char*>(0x8048349);
                    eax41 = 3;
                    esp2 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp46) - 4 + 4);
                    __asm__("int 0x80");
                    if (0) 
                        break;
                    zf49 = g8048349 == -1;
                    if (!zf49) 
                        goto addr_8048228_27;
                    while (!0) {
                        __asm__("lodsb ");
                        if (*reinterpret_cast<signed char*>(&eax41) != -1) 
                            goto addr_8048273_30;
                        __asm__("lodsb ");
                        if (*reinterpret_cast<signed char*>(&eax41) == -2 || (*reinterpret_cast<signed char*>(&eax41) == -5 || *reinterpret_cast<signed char*>(&eax41) == -4)) {
                            __asm__("lodsb ");
                            continue;
                        }
                        if (*reinterpret_cast<signed char*>(&eax41) != -3) 
                            continue;
                        __asm__("lodsb ");
                        zf50 = *reinterpret_cast<signed char*>(&eax41) == 8;
                        *reinterpret_cast<signed char*>(&eax41) = -4;
                        if (zf50) 
                            goto addr_804825b_35;
                        addr_804825d_36:
                        g8048347 = *reinterpret_cast<signed char*>(&eax41);
                        continue;
                        addr_804825b_35:
                        *reinterpret_cast<signed char*>(&eax41) = -5;
                        goto addr_804825d_36;
                    }
                    esp46 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esp2) - 4 + 4);
                    __asm__("int 0x80");
                    continue;
                    addr_8048273_30:
                    __asm__("int 0x80");
                    esp46 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esp2) - 4 - 4 - 4 - 4 + 4 + 4 + 4 + 4 - 4 + 4 - 4 + 4);
                    __asm__("int 0x80");
                    continue;
                    addr_8048228_27:
                    esp46 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esp2) - 4 + 4 - 4 + 4);
                    __asm__("int 0x80");
                }
                addr_80480b8_18:
            } while (!eax41);
            zf34 = 0;
        }
    }
    __asm__("popad ");
    if (__intrinsic()) 
        goto addr_80480c4_6;
    ebx51->f68 = 0;
    __asm__("popad ");
    if (0) 
        goto addr_80480d9_9;
    if (!0) 
        goto addr_8048068_42;
    addr_8048088_43:
    __asm__("outsb ");
    __asm__("outsb ");
    __asm__("arpl [gs:ecx+ebp*2+0x6f], si");
    __asm__("outsb ");
    edx52->f65 = reinterpret_cast<unsigned char>(edx53->f65 & dh54);
    if (edx55->f65) {
        goto addr_804810b_16;
    } else {
        *edx56 = reinterpret_cast<unsigned char>(*edx57 & bh58);
        *edx59 = reinterpret_cast<signed char>(*edx60 - *reinterpret_cast<signed char*>(&ecx));
    }
    addr_804809d_46:
    fun_80482c1();
    esp35 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esp2) - 4 + 4 + 4);
    if (v61 - 1) 
        goto addr_80480e4_11;
    ecx = reinterpret_cast<signed char*>(0x804806f);
    esp2 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp35) - 4 + 4 - 4 + 4 - 4 + 4);
    __asm__("int 0x80");
    eax41 = 0;
    goto addr_80480b8_18;
    addr_8048068_42:
    esi62 = ebx63->f20 * 0xa49594e;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esp2) - 4);
    if (!__intrinsic()) 
        goto addr_80480d3_8;
    zf64 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax25) + 1) == *reinterpret_cast<unsigned char*>(reinterpret_cast<int16_t>(bx65) + *reinterpret_cast<int16_t*>(&esi62));
    if (zf64) 
        goto addr_80480dd_10;
    __asm__("insb ");
    __asm__("outsb ");
    if (zf64) 
        goto addr_804809d_46;
    --ecx;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esp2) - 4);
    ebx66->f70 = reinterpret_cast<unsigned char>(ebx67->f70 & bl68);
    __asm__("outsd ");
    if (0) 
        goto addr_80480f9_13;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esp2) + 4);
    goto addr_8048088_43;
}
