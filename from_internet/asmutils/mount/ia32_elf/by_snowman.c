
int32_t fun_8048140(signed char* ecx) {
    __asm__("int 0x80");
    if (1) {
        while (1) {
            __asm__("int 0x80");
            __asm__("int 0x80");
            if (1) 
                goto addr_8048089_4;
            __asm__("int 0x80");
            if (0) 
                continue;
            addr_8048089_4:
            __asm__("int 0x80");
            __asm__("int 0x80");
        }
    } else {
        return 21;
    }
}

struct s0 {
    int32_t f0;
    signed char[69] pad73;
    signed char f49;
};

uint32_t g80481d1;

struct s1 {
    signed char* f0;
    void** f4;
};

void fun_8048156(int32_t ecx);

signed char g80481d5;

void fun_8048000(struct s0* ecx, int16_t* a2, signed char* a3, int16_t* a4, int32_t a5, int32_t a6, signed char* a7) {
    int1_t less_or_equal8;
    int32_t eax9;
    int32_t* ebx10;
    int32_t* ebx11;
    int32_t eax12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    signed char* eax22;
    signed char* eax23;
    signed char al24;
    void** eax25;
    signed char al26;
    signed char* eax27;
    void** eax28;
    signed char dh29;
    void* tmp8_30;
    uint1_t cf31;
    signed char bl32;
    int32_t esi33;
    int16_t* ebx34;
    signed char* ebp35;
    signed char* esi36;
    int32_t ebx37;
    int1_t zf38;
    struct s1* edx39;
    signed char* esi40;
    signed char* edi41;
    int32_t ecx42;
    int1_t zf43;

    if (less_or_equal8) {
        ecx->f0 = ecx->f0 + eax9;
        *ebx10 = *ebx11 + eax12;
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
        *eax22 = reinterpret_cast<signed char>(*eax23 + al24);
        *reinterpret_cast<signed char*>(&eax25) = reinterpret_cast<signed char>(al26 + *eax27);
        eax28 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(*eax25));
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<uint32_t>(eax28));
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax28) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax28) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax28) + reinterpret_cast<uint32_t>(eax28)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax28) + reinterpret_cast<uint32_t>(eax28)) + dh29);
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<uint32_t>(eax28));
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *reinterpret_cast<unsigned char*>(eax28 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax28 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *reinterpret_cast<void**>(&eax28) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)) + 8);
        __asm__("rol dword [ecx], 1");
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        __asm__("aad 0x21");
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
    }
    tmp8_30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
    cf31 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_30) < reinterpret_cast<unsigned char>(*eax28));
    *eax28 = tmp8_30;
    *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28))) + cf31);
    ecx->f49 = reinterpret_cast<signed char>(ecx->f49 + bl32);
    if (!ecx->f49) 
        goto 0x804806b;
    esi33 = reinterpret_cast<int32_t>(__return_address());
    ebx34 = a2;
    do {
        __asm__("lodsb ");
    } while (*reinterpret_cast<void**>(&eax28));
    if (*reinterpret_cast<signed char*>(esi33 - 7) == 0x75) {
        __asm__("int 0x80");
    }
    if (*reinterpret_cast<unsigned char*>(&ecx) < 2) 
        goto 0x804806b;
    if (*ebx34 == 0x6f2d) 
        goto addr_80480b3_10;
    addr_80480fc_11:
    if (*ebx34 == 0x742d) {
    }
    fun_8048140(a7);
    g80481d1 = g80481d1 | 1;
    fun_8048140(a7);
    g80481d1 = g80481d1 & 0xfffffffe;
    g80481d1 = g80481d1 | 4;
    fun_8048140(a7);
    g80481d1 = g80481d1 | 1;
    fun_8048140(a7);
    goto 0x8048064;
    addr_80480b3_10:
    ebp35 = a3;
    do {
        esi36 = ebp35;
        do {
            __asm__("lodsb ");
            if (*reinterpret_cast<void**>(&eax28) == 44) 
                break;
        } while (*reinterpret_cast<void**>(&eax28));
        goto addr_80480bf_17;
        addr_80480c5_18:
        ebx37 = reinterpret_cast<int32_t>(esi36) - reinterpret_cast<int32_t>(ebp35) - 1;
        zf38 = ebx37 == 0;
        edx39 = reinterpret_cast<struct s1*>(fun_8048156);
        do {
            __asm__("pushad ");
            esi40 = ebp35;
            edi41 = edx39->f0;
            ecx42 = ebx37;
            do {
                if (!ecx42) 
                    break;
                --ecx42;
                zf38 = *esi40 == *edi41;
                ++edi41;
                ++esi40;
            } while (zf38);
            __asm__("popad ");
            if (zf38) 
                break;
            ++edx39;
            zf38 = edx39 == 0;
        } while (ecx42 - 1);
        continue;
        eax28 = edx39->f4;
        g80481d1 = g80481d1 | reinterpret_cast<uint32_t>(eax28);
        continue;
        addr_80480bf_17:
        g80481d5 = reinterpret_cast<signed char>(g80481d5 + 1);
        goto addr_80480c5_18;
        ebp35 = esi40;
        zf43 = g80481d5 == 1;
    } while (!zf43);
    ebx34 = a4;
    goto addr_80480fc_11;
}

struct s2 {
    signed char f0;
    unsigned char f1;
};

struct s3 {
    signed char[4] pad4;
    signed char f4;
};

struct s4 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s5 {
    signed char[111] pad111;
    signed char f6f;
};

void fun_8048156(int32_t ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    int32_t ecx5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;
    int32_t* edi9;
    int32_t* esi10;
    struct s2* edi11;
    struct s3* edi12;
    unsigned char* edi13;
    struct s4* esi14;
    void* esi15;
    struct s5* edx16;
    signed char dh17;
    unsigned char tmp8_18;
    int1_t cf19;
    unsigned char tmp8_20;
    int1_t cf21;
    int1_t zf22;
    int1_t zf23;
    int1_t zf24;

    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    ecx5 = eax6;
    eax7 = ecx;
    *reinterpret_cast<int32_t*>(eax7 + ecx5) = *reinterpret_cast<int32_t*>(eax7 + ecx5) + 2;
    eax8 = *reinterpret_cast<int16_t*>(&eax7);
    *reinterpret_cast<int32_t*>(eax8 + ecx5) = *reinterpret_cast<int32_t*>(eax8 + ecx5) + 4;
    *reinterpret_cast<int32_t*>(eax8 + ecx5) = *reinterpret_cast<int32_t*>(eax8 + ecx5) + 8;
    *edi9 = *esi10;
    edi11 = reinterpret_cast<struct s2*>(&edi12->f4);
    *reinterpret_cast<int32_t*>(eax8 + ecx5) = *reinterpret_cast<int32_t*>(eax8 + ecx5) + 16;
    edi11->f0 = *reinterpret_cast<signed char*>(&eax8);
    edi13 = &edi11->f1;
    esi14 = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(esi15) + 4 + 1);
    *reinterpret_cast<int32_t*>(eax8 + ecx5) = *reinterpret_cast<int32_t*>(eax8 + ecx5) + 32;
    *reinterpret_cast<signed char*>(&edx16) = 0x81;
    *reinterpret_cast<signed char*>(&eax8) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax8) + 8);
    *reinterpret_cast<signed char*>(eax8 + eax8) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax8 + eax8) + *reinterpret_cast<signed char*>(&eax8));
    edx16->f6f = reinterpret_cast<signed char>(edx16->f6f + dh17);
    tmp8_18 = reinterpret_cast<unsigned char>(esi14->f6f + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx5) + 1));
    cf19 = tmp8_18 < esi14->f6f;
    esi14->f6f = tmp8_18;
    if (cf19) {
        tmp8_20 = reinterpret_cast<unsigned char>(esi14->f6f + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx5) + 1));
        cf21 = tmp8_20 < esi14->f6f;
        esi14->f6f = tmp8_20;
        zf22 = esi14->f6f == 0;
        if (reinterpret_cast<signed char>(esi14->f6f) >= reinterpret_cast<signed char>(0)) {
            __asm__("arpl [eax], ax");
            if (cf21) {
                __asm__("outsb ");
                __asm__("arpl [eax], ax");
                if (!cf21) {
                    __asm__("insd ");
                    __asm__("outsd ");
                    if (zf22) {
                        __asm__("outsb ");
                        __asm__("outsd ");
                        __asm__("popad ");
                        if (!zf22) {
                            __asm__("insd ");
                            *edi13 = reinterpret_cast<unsigned char>(*edi13 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx5) + 1));
                            zf23 = *edi13 == 0;
                            if (!__intrinsic()) {
                                __asm__("outsd ");
                                __asm__("arpl [edi], bp");
                                __asm__("insd ");
                                __asm__("outsd ");
                                if (zf23) {
                                    if (!zf23) {
                                        *edi13 = reinterpret_cast<unsigned char>(*edi13 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx5) + 1));
                                        zf24 = *edi13 == 0;
                                        if (!zf24) {
                                            __asm__("das ");
                                            __asm__("insd ");
                                            if (zf24) {
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
