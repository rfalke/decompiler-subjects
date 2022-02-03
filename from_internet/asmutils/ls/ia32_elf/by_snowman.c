
int32_t fun_80480f2() {
    signed char* edi1;
    int32_t ebp2;
    signed char al3;
    signed char al4;
    int32_t ebp5;

    edi1 = *reinterpret_cast<signed char**>(ebp2 - 27);
    do {
        __asm__("lodsb ");
        *edi1 = al3;
        ++edi1;
    } while (al4);
    *reinterpret_cast<signed char**>(ebp5 - 27) = edi1;
    __asm__("int 0x80");
    return 45;
}

struct s0 {
    signed char[134513621] pad134513621;
    void* f80483d5;
};

struct s1 {
    signed char[8] pad8;
    uint16_t f8;
    unsigned char fa;
};

struct s0* fun_80482a0(struct s1* ecx, struct s1* a2, struct s1* a3) {
    int32_t edx4;
    int32_t ebp5;
    int32_t ebp6;

    edx4 = 1;
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx4) + 1) != *reinterpret_cast<signed char*>(ebp5 - 1)) {
        *reinterpret_cast<signed char*>(ebp6 - 1) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx4) + 1);
        __asm__("int 0x80");
    }
    return 4;
}

void* fun_80480c7(struct s1* ecx);

int32_t fun_8048395(struct s1* ecx, struct s1* a2) {
    struct s1* edx3;
    int32_t ebp4;
    struct s1* esi5;
    struct s1* v6;
    int32_t ebp7;
    int32_t v8;

    fun_80482a0(ecx, __return_address(), a2);
    edx3 = *reinterpret_cast<struct s1**>(ebp4 - 27);
    while (reinterpret_cast<uint32_t>(esi5) < reinterpret_cast<uint32_t>(edx3)) {
        fun_80480c7(ecx);
        fun_8048395(ecx, edx3);
        esi5 = edx3;
        edx3 = v6;
        *reinterpret_cast<struct s1**>(ebp7 - 27) = edx3;
    }
    goto v8;
}

void* fun_804827f(struct s1* a1, struct s1* a2) {
    void* eax3;
    int32_t ebp4;
    void* ebp5;
    int32_t edi6;
    int32_t esi7;

    __asm__("int 0x80");
    eax3 = reinterpret_cast<void*>(-0x6b);
    if (1) {
        *reinterpret_cast<void**>(ebp4 - 19) = eax3;
        fun_80482a0(reinterpret_cast<int32_t>(ebp5) + 0xffffffa5, __return_address(), a1);
        *reinterpret_cast<int32_t*>(edi6 + esi7) = 0xa3f3f20;
        __asm__("int 0x80");
        return 4;
    } else {
        return eax3;
    }
}

void fun_80483b9();

struct s2 {
    void* f0;
    void* f1;
};

void* g804946c;

struct s3 {
    void* f0;
    signed char f1;
};

void fun_8048188();

void fun_8048354(void* ecx);

void fun_80483d5();

struct s4 {
    signed char[4] pad4;
    signed char f4;
};

struct s5 {
    signed char f0;
    void* f1;
};

void* fun_804810a() {
    void* v1;
    void* esi2;
    void* v3;
    void* edi4;
    void* esi5;
    struct s2* edi6;
    uint32_t eax7;
    uint32_t edi8;
    signed char dh9;
    int32_t ebp10;
    int32_t ebp11;
    signed char dh12;
    int32_t ebp13;
    int32_t ebp14;
    signed char dh15;
    int32_t ebp16;
    int32_t edx17;
    int32_t ebp18;
    int1_t cf19;
    uint32_t v20;
    struct s3* edi21;
    void* esi22;
    void* ecx23;
    uint32_t ebx24;
    struct s1* edx25;
    void* v26;
    void* esi27;
    uint32_t eax28;
    struct s0* eax29;
    int32_t ebp30;
    int32_t ebp31;
    int32_t ebp32;
    int32_t ebp33;
    int32_t ebp34;
    struct s1* ecx35;
    int32_t ebp36;
    int32_t ebp37;
    int32_t ebp38;
    int32_t eax39;
    int32_t ecx40;
    struct s1* eax41;
    int32_t ebp42;
    struct s4* ebx43;
    void* al44;
    struct s5* edi45;

    v1 = esi2;
    v3 = edi4;
    esi5 = reinterpret_cast<void*>(fun_80483b9);
    edi6 = reinterpret_cast<struct s2*>(0x804946c);
    eax7 = edi8;
    __asm__("cdq ");
    if (dh9 != *reinterpret_cast<signed char*>(ebp10 - 9)) {
        eax7 = *reinterpret_cast<uint32_t*>(ebp11 - 87);
        fun_80483b9();
        g804946c = reinterpret_cast<void*>(32);
        edi6 = reinterpret_cast<struct s2*>(0x804946d);
        esi5 = reinterpret_cast<void*>(0x80483ba);
    }
    if (dh12 != *reinterpret_cast<signed char*>(ebp13 - 7)) {
        eax7 = *reinterpret_cast<uint32_t*>(ebp14 - 63) >> 1;
        esi5();
        edi6->f0 = reinterpret_cast<void*>(32);
        edi6 = reinterpret_cast<struct s2*>(&edi6->f1);
        esi5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi5) + 1);
    }
    if (dh15 != *reinterpret_cast<signed char*>(ebp16 - 5)) {
        edx17 = *reinterpret_cast<int32_t*>(ebp18 - 83);
        *reinterpret_cast<void**>(&eax7) = reinterpret_cast<void*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx17) + 1) >> 4);
        cf19 = __intrinsic();
        v20 = eax7;
        __asm__("xlatb ");
        edi6->f0 = *reinterpret_cast<void**>(&eax7);
        edi21 = reinterpret_cast<struct s3*>(&edi6->f1);
        esi22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi5) + 1);
        ecx23 = reinterpret_cast<void*>(0x124);
        __asm__("rcr dh, 1");
        while (1) {
            *reinterpret_cast<void**>(&eax7) = reinterpret_cast<void*>(7);
            if (cf19) {
                *reinterpret_cast<void**>(&eax7) = reinterpret_cast<void*>(7 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx23)));
            }
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx23)) & 1 && !1) {
                *reinterpret_cast<void**>(&eax7) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx23))) & 31);
                ++eax7;
            }
            __asm__("xlatb ");
            edi21->f0 = *reinterpret_cast<void**>(&eax7);
            edi21 = reinterpret_cast<struct s3*>(&edi21->f1);
            esi22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi22) + 1);
            ecx23 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx23) >> 1);
            cf19 = __intrinsic();
            if (!ecx23) 
                break;
            __asm__("rcl dl, 1");
        }
        ebx24 = reinterpret_cast<uint32_t>(ecx23) + 3;
        edx25 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(ecx23) + 4);
        v26 = esi22;
        __asm__("lodsw ");
        do {
            fun_8048188();
            __asm__("lodsw ");
            --ebx24;
        } while (ebx24);
        esi27 = v26;
        eax28 = v20;
        if ((*reinterpret_cast<unsigned char*>(&eax28) & 0xfb) != 2) 
            goto addr_80481a7_27; else 
            goto addr_804819c_28;
    }
    addr_80481d2_29:
    fun_8048354(v3);
    eax29 = reinterpret_cast<struct s0*>(*reinterpret_cast<uint32_t*>(ebp30 - 85) >> 29);
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void**>(&eax29) == 5) || *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1) == *reinterpret_cast<signed char*>(ebp31 - 5)) {
        if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1) != *reinterpret_cast<signed char*>(ebp32 - 6) && (!reinterpret_cast<int1_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(fun_80483d5)) == 42) || *reinterpret_cast<unsigned char*>(ebp33 - 83) & 73)) {
            edi6->f0 = *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(fun_80483d5));
            edi6 = reinterpret_cast<struct s2*>(&edi6->f1);
        }
    } else {
        edi6->f0 = reinterpret_cast<void*>(0x203e2d20);
        edi6 = edi6 + 2;
        __asm__("cdq ");
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx25) + 1) = 16;
        __asm__("int 0x80");
        eax29 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(v1) + 4);
        fun_8048354(85);
    }
    *reinterpret_cast<void**>(&eax29) = reinterpret_cast<void*>(10);
    if (!*reinterpret_cast<signed char*>(ebp34 - 4)) {
        ecx35 = reinterpret_cast<struct s1*>((reinterpret_cast<uint32_t>(edi6 - 0x4024a36) >> 3) + 1);
        *reinterpret_cast<void**>(&edx25) = reinterpret_cast<void*>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(ebp36 - 1)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx35)));
        if (10 < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx25))) {
            eax29 = fun_80482a0(ecx35, ecx35, 0x804946c);
            edx25 = ecx35;
        }
        *reinterpret_cast<void**>(&eax29) = reinterpret_cast<void*>(9);
        if (9 <= reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx25))) {
            eax29 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(eax29) + 1);
            *reinterpret_cast<void**>(&edx25) = reinterpret_cast<void*>(0);
        }
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx25)) & 1) {
            edi6->f0 = *reinterpret_cast<void**>(&eax29);
            edi6 = reinterpret_cast<struct s2*>(&edi6->f1);
            edx25 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(edx25) + 1);
        }
        *reinterpret_cast<void**>(ebp37 - 1) = *reinterpret_cast<void**>(&edx25);
    }
    edi6->f0 = *reinterpret_cast<void**>(&eax29);
    *reinterpret_cast<void**>(ebp38 - 2) = *reinterpret_cast<void**>(&eax29);
    __asm__("int 0x80");
    return 4;
    addr_80481a7_27:
    eax39 = reinterpret_cast<int32_t>(esi27());
    ecx40 = eax39;
    __asm__("int 0x80");
    eax41 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(edi21->f0) - *reinterpret_cast<uint32_t*>(ebp42 - 51));
    ebx43 = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(esi27) + 61);
    do {
        __asm__("cdq ");
        ebx43 = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(ebx43) - 1);
        *reinterpret_cast<signed char*>(&ecx40) = ebx43->f4;
        if (!ecx40) 
            break;
        edx25 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(eax41) % ecx40);
        eax41 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(eax41) / ecx40);
    } while (eax41);
    goto addr_80481c8_55;
    addr_80481c9_56:
    al44 = reinterpret_cast<void*>(esi27());
    __asm__("xlatb ");
    edi21->f0 = al44;
    edi45 = reinterpret_cast<struct s5*>(&edi21->f1);
    edi45->f0 = 32;
    edi6 = reinterpret_cast<struct s2*>(&edi45->f1);
    goto addr_80481d2_29;
    addr_80481c8_55:
    edx25 = eax41;
    goto addr_80481c9_56;
    addr_804819c_28:
    esi27();
    goto addr_80481a7_27;
}

struct s6 {
    unsigned char f0;
    unsigned char f1;
};

struct s7 {
    unsigned char f0;
    unsigned char f1;
};

void fun_8048354(void* ecx) {
    int32_t edx2;
    int32_t ebp3;
    struct s6* edi4;
    int32_t eax5;
    struct s7* edi6;

    edx2 = *reinterpret_cast<int32_t*>(ebp3 - 12);
    do {
        __asm__("lodsb ");
        if (*reinterpret_cast<signed char*>(&edx2)) 
            goto addr_8048390_3;
        if (0) {
            addr_8048385_5:
            if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx2) + 1)) {
                edi4->f0 = 92;
                edi4 = reinterpret_cast<struct s6*>(&edi4->f1);
                goto addr_8048390_3;
            }
        } else {
            if (*reinterpret_cast<unsigned char*>(&eax5) > 0x7e || *reinterpret_cast<unsigned char*>(&eax5) < 32) {
                if (!*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx2) + 1)) {
                    *reinterpret_cast<unsigned char*>(&eax5) = 63;
                    goto addr_8048390_3;
                } else {
                    __asm__("ror eax, 0x8");
                    edi4->f0 = *reinterpret_cast<unsigned char*>(&eax5);
                    edi6 = reinterpret_cast<struct s7*>(&edi4->f1);
                    __asm__("rol eax, 0x2");
                    edi6->f0 = 12;
                    edi4 = reinterpret_cast<struct s6*>(&edi6->f1);
                    __asm__("aam 0x8");
                    *reinterpret_cast<int16_t*>(&eax5) = 0x3030;
                    goto addr_8048385_5;
                }
            } else {
                addr_8048390_3:
            }
        }
        edi4->f0 = *reinterpret_cast<unsigned char*>(&eax5);
        edi4 = reinterpret_cast<struct s6*>(&edi4->f1);
        ecx = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx) - 1);
    } while (ecx);
    return;
}

struct s8 {
    unsigned char f0;
    unsigned char f1;
};

struct s9 {
    void* f0;
    void* f1;
};

struct s10 {
    void* f0;
    signed char f1;
};

struct s11 {
    signed char[4] pad4;
    signed char f4;
};

struct s12 {
    signed char f0;
    void* f1;
};

void* fun_80480c7(struct s1* ecx) {
    struct s1* v2;
    struct s8* ebp3;
    unsigned char* edi4;
    struct s1* esi5;
    void* esi6;
    unsigned char* ebx7;
    struct s1* v8;
    struct s1* v9;
    unsigned char* esi10;
    void* edi11;
    void* eax12;
    int32_t ebp13;
    unsigned char* v14;
    void* v15;
    void* esi16;
    struct s9* edi17;
    void* eax18;
    signed char dh19;
    int32_t ebp20;
    int32_t ebp21;
    signed char dh22;
    int32_t ebp23;
    int32_t ebp24;
    signed char dh25;
    int32_t ebp26;
    int32_t edx27;
    int32_t eax28;
    int32_t eax29;
    int32_t ebp30;
    int32_t ebp31;
    int1_t zf32;
    void* edx33;
    void* eax34;
    unsigned char* edi35;
    unsigned char* v36;
    int1_t cf37;
    int1_t zf38;
    int32_t ebp39;
    int32_t ebp40;
    int32_t ebp41;
    int1_t less_or_equal42;
    void* eax43;
    int32_t ebp44;
    int32_t edx45;
    int32_t ebp46;
    int32_t ebp47;
    signed char* edi48;
    int32_t ebp49;
    int32_t ebp50;
    struct s0* eax51;
    int32_t ebp52;
    int32_t ebp53;
    int32_t ebp54;
    int32_t ebp55;
    struct s1* edx56;
    int32_t ebp57;
    struct s1* ecx58;
    int32_t ebp59;
    int32_t ebp60;
    int32_t ebp61;
    int32_t edx62;
    int32_t ebp63;
    int1_t cf64;
    void* v65;
    struct s10* edi66;
    void* esi67;
    void* ecx68;
    uint32_t ebx69;
    void* v70;
    void* esi71;
    void* eax72;
    int32_t eax73;
    int32_t ecx74;
    struct s1* eax75;
    int32_t ebp76;
    struct s11* ebx77;
    void* al78;
    struct s12* edi79;

    v2 = reinterpret_cast<struct s1*>(__return_address());
    ebp3->f0 = 10;
    edi4 = &ebp3->f1;
    esi5 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(esi6) + 1);
    ebx7 = edi4;
    do {
        __asm__("lodsb ");
        *edi4 = 10;
        ++edi4;
        esi5 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(esi5) + 1);
    } while (1);
    v8 = esi5;
    v9 = v2;
    esi10 = ebx7;
    edi11 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi4) - reinterpret_cast<uint32_t>(ebx7) - 1);
    eax12 = fun_804827f(v9, v8);
    if (reinterpret_cast<uint32_t>(edi4) < reinterpret_cast<uint32_t>(ebx7)) {
        addr_8048109_10:
        return eax12;
    } else {
        if (edi11 || *reinterpret_cast<signed char*>(&eax12) != *reinterpret_cast<signed char*>(ebp13 - 14)) {
            v14 = esi10;
            v15 = edi11;
            esi16 = reinterpret_cast<void*>(fun_80483b9);
            edi17 = reinterpret_cast<struct s9*>(0x804946c);
            eax18 = edi11;
            __asm__("cdq ");
            if (dh19 != *reinterpret_cast<signed char*>(ebp20 - 9)) {
                eax18 = *reinterpret_cast<void**>(ebp21 - 87);
                fun_80483b9();
                g804946c = reinterpret_cast<void*>(32);
                edi17 = reinterpret_cast<struct s9*>(0x804946d);
                esi16 = reinterpret_cast<void*>(0x80483ba);
            }
            if (dh22 != *reinterpret_cast<signed char*>(ebp23 - 7)) {
                eax18 = reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(ebp24 - 63) >> 1);
                esi16();
                edi17->f0 = reinterpret_cast<void*>(32);
                edi17 = reinterpret_cast<struct s9*>(&edi17->f1);
                esi16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi16) + 1);
            }
            if (dh25 != *reinterpret_cast<signed char*>(ebp26 - 5)) 
                goto addr_804813e_21;
        } else {
            if (!edx27) {
                eax28 = 5;
                __asm__("int 0x80");
                if (!__intrinsic()) {
                    eax29 = *reinterpret_cast<int32_t*>(ebp30 - 3);
                    if (*reinterpret_cast<signed char*>(&eax29)) {
                        *reinterpret_cast<signed char*>(ebp31 - 2) = *reinterpret_cast<signed char*>(&eax29);
                        zf32 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1) == 0;
                        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1) = 10;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi10) + reinterpret_cast<uint32_t>(edi11)) = eax29;
                        if (!zf32) {
                        }
                        __asm__("int 0x80");
                    }
                    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi10) + reinterpret_cast<uint32_t>(edi11)) = 47;
                    edi11 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi11) + 1);
                    while (ecx = reinterpret_cast<struct s1*>(0x80514ac), edx33 = reinterpret_cast<void*>(0), *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx33) + 1) = 32, eax34 = reinterpret_cast<void*>(0), *reinterpret_cast<unsigned char*>(&eax34) = 0x8d, !__intrinsic()) {
                        while (1) {
                            __asm__("pushad ");
                            __asm__("cdq ");
                            edi35 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi11) + reinterpret_cast<uint32_t>(esi10));
                            v36 = &ecx->fa;
                            do {
                                __asm__("lodsb ");
                                *edi35 = *reinterpret_cast<unsigned char*>(&eax34);
                                ++edi35;
                                edx33 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx33) + 1);
                            } while (*reinterpret_cast<unsigned char*>(&eax34));
                            edi11 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx33) + 0xffffffff);
                            esi10 = v36;
                            cf37 = *esi10 < 46;
                            zf38 = *esi10 == 46;
                            if ((!zf38 || (cf37 = *reinterpret_cast<unsigned char*>(&eax34) < *reinterpret_cast<unsigned char*>(ebp39 - 13), zf38 = *reinterpret_cast<unsigned char*>(&eax34) == *reinterpret_cast<unsigned char*>(ebp40 - 13), !zf38)) && (eax34 = fun_804827f(v9, v8), !cf37)) {
                                if (zf38 && *reinterpret_cast<unsigned char*>(&eax34) != *reinterpret_cast<unsigned char*>(ebp41 - 10)) {
                                    __asm__("lodsb ");
                                    if (*reinterpret_cast<unsigned char*>(&eax34) != 46) {
                                        addr_8048338_38:
                                        fun_80480f2();
                                        edi11 = edi11;
                                    } else {
                                        __asm__("lodsb ");
                                        if (*reinterpret_cast<unsigned char*>(&eax34) == 46) {
                                            __asm__("lodsb ");
                                        }
                                        if (*reinterpret_cast<unsigned char*>(&eax34)) 
                                            goto addr_8048338_38;
                                    }
                                    esi10 = esi10;
                                }
                                eax34 = fun_804810a();
                            }
                            __asm__("popad ");
                            edx33 = reinterpret_cast<void*>(static_cast<uint32_t>(ecx->f8));
                            ecx = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<uint32_t>(edx33));
                            less_or_equal42 = reinterpret_cast<int32_t>(eax34) <= reinterpret_cast<int32_t>(edx33);
                            eax34 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax34) - reinterpret_cast<uint32_t>(edx33));
                            if (less_or_equal42) 
                                break;
                        }
                    }
                    __asm__("int 0x80");
                    eax28 = 0x8d;
                }
                eax43 = reinterpret_cast<void*>(-eax28);
                if (1) {
                    *reinterpret_cast<void**>(ebp44 - 19) = eax43;
                    fun_80482a0(ecx, v9, v8);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi11) + reinterpret_cast<uint32_t>(esi10)) = 0xa3f3f20;
                    __asm__("int 0x80");
                    return 4;
                } else {
                    edx45 = 1;
                    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx45) + 1) != *reinterpret_cast<signed char*>(ebp46 - 1)) {
                        *reinterpret_cast<signed char*>(ebp47 - 1) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx45) + 1);
                        eax43 = reinterpret_cast<void*>(4);
                        __asm__("int 0x80");
                    }
                    return eax43;
                }
            } else {
                edi48 = *reinterpret_cast<signed char**>(ebp49 - 27);
                do {
                    __asm__("lodsb ");
                    *edi48 = *reinterpret_cast<signed char*>(&eax12);
                    ++edi48;
                } while (*reinterpret_cast<signed char*>(&eax12));
                *reinterpret_cast<signed char**>(ebp50 - 27) = edi48;
                eax12 = reinterpret_cast<void*>(45);
                __asm__("int 0x80");
                goto addr_8048109_10;
            }
        }
    }
    addr_80481d2_59:
    fun_8048354(v15);
    eax51 = reinterpret_cast<struct s0*>(*reinterpret_cast<uint32_t*>(ebp52 - 85) >> 29);
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void**>(&eax51) == 5) || *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax51) + 1) == *reinterpret_cast<signed char*>(ebp53 - 5)) {
        if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax51) + 1) != *reinterpret_cast<signed char*>(ebp54 - 6) && (!reinterpret_cast<int1_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax51) + reinterpret_cast<int32_t>(fun_80483d5)) == 42) || *reinterpret_cast<unsigned char*>(ebp55 - 83) & 73)) {
            edi17->f0 = *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax51) + reinterpret_cast<int32_t>(fun_80483d5));
            edi17 = reinterpret_cast<struct s9*>(&edi17->f1);
        }
    } else {
        edi17->f0 = reinterpret_cast<void*>(0x203e2d20);
        edi17 = edi17 + 2;
        __asm__("cdq ");
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx56) + 1) = 16;
        __asm__("int 0x80");
        eax51 = reinterpret_cast<struct s0*>(v14 + 4);
        fun_8048354(85);
    }
    *reinterpret_cast<void**>(&eax51) = reinterpret_cast<void*>(10);
    if (!*reinterpret_cast<signed char*>(ebp57 - 4)) {
        ecx58 = reinterpret_cast<struct s1*>((reinterpret_cast<uint32_t>(edi17 - 0x4024a36) >> 3) + 1);
        *reinterpret_cast<void**>(&edx56) = reinterpret_cast<void*>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(ebp59 - 1)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx58)));
        if (10 < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx56))) {
            eax51 = fun_80482a0(ecx58, ecx58, 0x804946c);
            edx56 = ecx58;
        }
        *reinterpret_cast<void**>(&eax51) = reinterpret_cast<void*>(9);
        if (9 <= reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx56))) {
            eax51 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(eax51) + 1);
            *reinterpret_cast<void**>(&edx56) = reinterpret_cast<void*>(0);
        }
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx56)) & 1) {
            edi17->f0 = *reinterpret_cast<void**>(&eax51);
            edi17 = reinterpret_cast<struct s9*>(&edi17->f1);
            edx56 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(edx56) + 1);
        }
        *reinterpret_cast<void**>(ebp60 - 1) = *reinterpret_cast<void**>(&edx56);
    }
    edi17->f0 = *reinterpret_cast<void**>(&eax51);
    *reinterpret_cast<void**>(ebp61 - 2) = *reinterpret_cast<void**>(&eax51);
    __asm__("int 0x80");
    return 4;
    addr_804813e_21:
    edx62 = *reinterpret_cast<int32_t*>(ebp63 - 83);
    *reinterpret_cast<void**>(&eax18) = reinterpret_cast<void*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx62) + 1) >> 4);
    cf64 = __intrinsic();
    v65 = eax18;
    __asm__("xlatb ");
    edi17->f0 = *reinterpret_cast<void**>(&eax18);
    edi66 = reinterpret_cast<struct s10*>(&edi17->f1);
    esi67 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi16) + 1);
    ecx68 = reinterpret_cast<void*>(0x124);
    __asm__("rcr dh, 1");
    while (1) {
        *reinterpret_cast<void**>(&eax18) = reinterpret_cast<void*>(7);
        if (cf64) {
            *reinterpret_cast<void**>(&eax18) = reinterpret_cast<void*>(7 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx68)));
        }
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx68)) & 1 && !1) {
            *reinterpret_cast<void**>(&eax18) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax18)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx68))) & 31);
            eax18 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax18) + 1);
        }
        __asm__("xlatb ");
        edi66->f0 = *reinterpret_cast<void**>(&eax18);
        edi66 = reinterpret_cast<struct s10*>(&edi66->f1);
        esi67 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi67) + 1);
        ecx68 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx68) >> 1);
        cf64 = __intrinsic();
        if (!ecx68) 
            break;
        __asm__("rcl dl, 1");
    }
    ebx69 = reinterpret_cast<uint32_t>(ecx68) + 3;
    edx56 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(ecx68) + 4);
    v70 = esi67;
    __asm__("lodsw ");
    do {
        fun_8048188();
        __asm__("lodsw ");
        --ebx69;
    } while (ebx69);
    esi71 = v70;
    eax72 = v65;
    if ((*reinterpret_cast<unsigned char*>(&eax72) & 0xfb) == 2) 
        goto addr_804819c_98;
    addr_80481a7_99:
    eax73 = reinterpret_cast<int32_t>(esi71());
    ecx74 = eax73;
    __asm__("int 0x80");
    eax75 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(edi66->f0) - *reinterpret_cast<uint32_t*>(ebp76 - 51));
    ebx77 = reinterpret_cast<struct s11*>(reinterpret_cast<int32_t>(esi71) + 61);
    do {
        __asm__("cdq ");
        ebx77 = reinterpret_cast<struct s11*>(reinterpret_cast<int32_t>(ebx77) - 1);
        *reinterpret_cast<signed char*>(&ecx74) = ebx77->f4;
        if (!ecx74) 
            break;
        edx56 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(eax75) % ecx74);
        eax75 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(eax75) / ecx74);
    } while (eax75);
    goto addr_80481c8_102;
    addr_80481c9_103:
    al78 = reinterpret_cast<void*>(esi71());
    __asm__("xlatb ");
    edi66->f0 = al78;
    edi79 = reinterpret_cast<struct s12*>(&edi66->f1);
    edi79->f0 = 32;
    edi17 = reinterpret_cast<struct s9*>(&edi79->f1);
    goto addr_80481d2_59;
    addr_80481c8_102:
    edx56 = eax75;
    goto addr_80481c9_103;
    addr_804819c_98:
    esi71();
    goto addr_80481a7_99;
}

int32_t g8048440;

void* g8048456;

void fun_8048000(int32_t* ecx, int32_t a2) {
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
    void** eax23;
    void* esp24;
    signed char dh25;
    signed char* eax26;
    signed char dl27;
    struct s1* ecx28;
    signed char* v29;
    signed char* edi30;
    signed char* v31;
    struct s1* v32;

    if (less_or_equal3) {
        *ecx = *ecx + eax4;
        *ebx5 = *ebx6 + eax7;
        *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
        *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
        *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
        *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
        *reinterpret_cast<signed char*>(&eax20) = reinterpret_cast<signed char>(al21 + *eax22);
        eax23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax20) + reinterpret_cast<int32_t>(*eax20));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<int32_t>(eax23));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 1 - 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(eax23)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(eax23)) + dh25);
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<int32_t>(eax23));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<unsigned char*>(eax23 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax23 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<void**>(&eax23) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)) + 8);
        __asm__("cli ");
        eax26 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<unsigned char>(*eax23));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp24) + reinterpret_cast<uint32_t>(eax26) * 8 + 0x70000) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp24) + reinterpret_cast<uint32_t>(eax26) * 8 + 0x70000) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
        *eax26 = reinterpret_cast<signed char>(*eax26 + *reinterpret_cast<signed char*>(&eax26));
    }
    *eax26 = reinterpret_cast<signed char>(*eax26 + dl27);
    *eax26 = reinterpret_cast<signed char>(*eax26 + *reinterpret_cast<signed char*>(&eax26));
    g8048440 = 0x80534ac;
    ecx28 = reinterpret_cast<struct s1*>(0x5401);
    __asm__("int 0x80");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&g8048456) + 1) = 54;
    while (v29) {
        if (*v29 != 45) 
            goto addr_80480a3_6;
        __asm__("lodsb ");
        if (54 == *v29) 
            goto addr_8048099_8;
        while (!0) {
            edi30 = "1lFsSiRbNadhms";
            ecx28 = reinterpret_cast<struct s1*>(12);
            do {
                if (!ecx28) 
                    break;
                ecx28 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(ecx28) - 1);
                ++edi30;
            } while (*edi30 != 54);
            *reinterpret_cast<signed char*>(0x804845b + reinterpret_cast<uint32_t>(ecx28) - 15) = 54;
            if (1) 
                continue;
            g8048456 = reinterpret_cast<void*>(0);
        }
    }
    goto addr_804809e_15;
    addr_8048099_8:
    if (v31) {
        addr_80480a3_6:
    } else {
        addr_804809e_15:
        goto addr_80480a3_6;
    }
    do {
        fun_80480c7(ecx28);
    } while (1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&g8048456) + 2) = 58;
    fun_8048395(ecx28, v32);
    __asm__("int 0x80");
}

void fun_80483b9() {
    int32_t v1;
    int32_t eax2;
    int32_t ecx3;
    int32_t edx4;
    signed char* edi5;
    int32_t eax6;
    int32_t edx7;

    v1 = eax2;
    ecx3 = edx4;
    while (ecx3) {
        --ecx3;
        *edi5 = 32;
        ++edi5;
    }
    eax6 = v1;
    *reinterpret_cast<signed char*>(&ecx3) = 10;
    do {
        __asm__("cdq ");
        edx7 = eax6 % ecx3;
        eax6 = eax6 / ecx3;
        --edi5;
        *edi5 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&edx7) + 48);
    } while (eax6);
    return;
}

void fun_80483d5() {
    int1_t less1;
    void* esp2;
    int32_t edi3;
    int32_t edi4;
    signed char bh5;
    int32_t edi6;
    signed char bh7;

    if (!less1) {
        __asm__("das ");
        if (__intrinsic()) {
        }
        esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
        __asm__("insd ");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp2) + edi3) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp2) + edi4) - reinterpret_cast<unsigned char>(bh5 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp2) + edi6) < reinterpret_cast<unsigned char>(bh7 + __intrinsic()))));
    }
}
