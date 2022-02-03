
int32_t g8048bb8;

unsigned char fun_804816c(uint32_t ecx);

unsigned char g8048b53;

int32_t fun_8048194(int32_t ecx) {
    int1_t zf2;
    void* edx3;
    void* ecx4;
    int1_t zf5;
    int1_t zf6;

    while (!0) {
        zf2 = g8048bb8 == 0x61747375;
        if (!zf2) 
            continue;
        fun_804816c(0x8048ab7);
        edx3 = reinterpret_cast<void*>(0);
        ecx4 = reinterpret_cast<void*>(0x80489b3);
        while (1) {
            edx3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx3) + 1);
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx4) + reinterpret_cast<int32_t>(edx3)) >= 1) 
                continue;
            *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(ecx4) + reinterpret_cast<int32_t>(edx3) - 1) = 10;
            __asm__("int 0x80");
            zf5 = g8048b53 == 50;
            if (zf5) 
                goto addr_80481eb_6;
            zf6 = g8048b53 == 49;
            if (!zf6) 
                break;
            addr_80481eb_6:
            __asm__("int 0x80");
            edx3 = reinterpret_cast<void*>(0);
            ecx4 = reinterpret_cast<void*>(0x8048b54);
            g8048b53 = 0;
        }
    }
    return 3;
}

unsigned char fun_804816c(uint32_t ecx) {
    signed char* edi2;
    int32_t ecx3;
    signed char al4;
    signed char al5;
    unsigned char* edi6;
    unsigned char al7;
    signed char al8;

    __asm__("pushad ");
    edi2 = reinterpret_cast<signed char*>(0x80489b3);
    ecx3 = 0;
    *reinterpret_cast<signed char*>(&ecx3) = -100;
    do {
        __asm__("lodsb ");
        *edi2 = al4;
        ++edi2;
        --ecx3;
    } while (reinterpret_cast<uint1_t>(!!ecx3) & reinterpret_cast<uint1_t>(!!al5));
    edi6 = reinterpret_cast<unsigned char*>(edi2 - 1);
    *reinterpret_cast<signed char*>(&ecx3) = 100;
    do {
        __asm__("lodsb ");
        *edi6 = al7;
        ++edi6;
        --ecx3;
    } while (reinterpret_cast<uint1_t>(!!ecx3) & reinterpret_cast<uint1_t>(!!al8));
    *edi6 = 0;
    __asm__("popad ");
    return 0;
}

void fun_8048118();

int32_t g804886b;

unsigned char* g8048b33;

struct s0 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s1 {
    signed char[114] pad114;
    unsigned char f72;
};

int32_t g8048466 = 0x45204f49;

signed char gb;

int32_t fun_8048227(int32_t ecx);

int32_t fun_80483cf() {
    int32_t eax1;
    unsigned char* esi2;
    uint32_t edx3;
    int1_t below_or_equal4;
    unsigned char* edi5;
    void* edi6;
    struct s0* ebp7;
    struct s1* ebp8;
    int32_t tmp32_9;
    int32_t tmp32_10;
    int32_t tmp32_11;
    int32_t tmp32_12;
    int32_t tmp32_13;
    int32_t tmp32_14;
    int32_t tmp32_15;
    int32_t tmp32_16;
    signed char tmp8_17;
    int32_t ecx18;
    int32_t eax19;

    fun_8048118();
    eax1 = 5;
    __asm__("int 0x80");
    if (0) {
        addr_804844e_2:
        return eax1;
    } else {
        g804886b = 5;
        esi2 = g8048b33;
        edx3 = 0;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1) = 2;
        while (esi2) {
            do {
                __asm__("int 0x80");
                if (0) 
                    goto addr_804844f_6;
                below_or_equal4 = edx3 <= 3;
                edx3 = edx3 - 3;
            } while (!below_or_equal4);
            edx3 = 0;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1) = 2;
            esi2 = esi2 - 0x200;
            if (reinterpret_cast<int32_t>(esi2) < reinterpret_cast<int32_t>(0)) 
                goto addr_8048437_9;
            __asm__("int 0x80");
        }
    }
    addr_8048449_11:
    eax1 = 6;
    __asm__("int 0x80");
    goto addr_804844e_2;
    addr_804844f_6:
    __asm__("int 0x80");
    __asm__("int 0x80");
    edi5 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi6) - 1);
    ebp7->f72 = reinterpret_cast<unsigned char>(ebp8->f72 & 1);
    if (!0) {
        if (!0) {
            __asm__("iretd ");
            tmp32_9 = g8048466 + 72;
            g8048466 = tmp32_9;
            tmp32_10 = g8048466 + 93;
            g8048466 = tmp32_10;
            tmp32_11 = g8048466 - 0x71;
            g8048466 = tmp32_11;
        }
        tmp32_12 = g8048466 - 96;
        g8048466 = tmp32_12;
        tmp32_13 = g8048466 + 48;
        g8048466 = tmp32_13;
        tmp32_14 = g8048466 + 0x72;
        g8048466 = tmp32_14;
        tmp32_15 = g8048466 + 46;
        g8048466 = tmp32_15;
        tmp32_16 = g8048466 + 46;
        g8048466 = tmp32_16;
        tmp8_17 = reinterpret_cast<signed char>(gb + 2);
        gb = tmp8_17;
        __asm__("fisttp dword [edi]");
    }
    __asm__("int 0x80");
    __asm__("int 0x80");
    fun_8048227(0x8048ab7);
    __asm__("int 0x80");
    ecx18 = 0;
    eax19 = 0;
    do {
        if (!*esi2) 
            break;
        if (*esi2 != 32) {
            *reinterpret_cast<unsigned char*>(&ecx18) = reinterpret_cast<unsigned char>(*esi2 - 48);
            if (*esi2 < 48) 
                goto addr_804810d_22;
            if (*reinterpret_cast<unsigned char*>(&ecx18) > 7) 
                goto addr_804810d_22;
            eax19 = eax19 * 8 + ecx18;
        }
        ++esi2;
    } while (reinterpret_cast<uint32_t>(esi2) < reinterpret_cast<uint32_t>(edi5));
    goto addr_804810b_26;
    addr_8048116_27:
    return eax19;
    addr_804810b_26:
    goto addr_8048116_27;
    addr_804810d_22:
    eax19 = 1;
    __asm__("int 0x80");
    goto addr_8048116_27;
    addr_8048437_9:
    __asm__("int 0x80");
    goto addr_8048449_11;
}

void fun_8048144();

int32_t fun_8048348() {
    fun_8048144();
    __asm__("int 0x80");
    return 9;
}

int32_t fun_804835d() {
    fun_8048144();
    __asm__("int 0x80");
    return 83;
}

void fun_8048129();

unsigned char* g8048b1b;

int32_t fun_804838f() {
    fun_8048129();
    g8048b1b = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(g8048b1b) | 0x2000);
    __asm__("int 0x80");
    return 14;
}

int32_t fun_80483a0() {
    fun_8048129();
    g8048b1b = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(g8048b1b) | 0x6000);
    __asm__("int 0x80");
    return 14;
}

int32_t fun_8048330() {
    fun_8048144();
    __asm__("int 0x80");
    return 0;
}

int32_t fun_8048372() {
    fun_8048144();
    g8048b1b = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(g8048b1b) | 0x1000);
    __asm__("int 0x80");
    return 14;
}

int32_t fun_804832e() {
    fun_8048144();
    __asm__("int 0x80");
    return 0;
}

int32_t g8048867;

signed char g8048bbe;

struct s2 {
    unsigned char* f0;
    signed char[110] pad114;
    unsigned char f72;
};

struct s2* g8048ab3;

int32_t fun_8048233(int32_t ecx) {
    uint32_t edx2;
    uint32_t ecx3;
    int32_t ebx4;
    int1_t below_or_equal5;
    int32_t eax6;
    int1_t zf7;
    int1_t zf8;
    unsigned char al9;
    struct s2* ebp10;
    unsigned char* edi11;
    int1_t cf12;
    int32_t eax13;
    int32_t tmp32_14;
    unsigned char* esi15;
    unsigned char* ebp16;
    int1_t zf17;
    unsigned char* edi18;
    int32_t tmp32_19;
    int32_t tmp32_20;
    int32_t tmp32_21;
    int32_t tmp32_22;
    int32_t tmp32_23;
    int32_t tmp32_24;
    int32_t tmp32_25;
    int32_t tmp32_26;
    signed char tmp8_27;
    int32_t ecx28;
    int32_t eax29;

    while (1) {
        edx2 = 0;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx2) + 1) = 2;
        ecx3 = 0x8048ab7;
        do {
            ebx4 = g8048867;
            __asm__("int 0x80");
            if (0) 
                goto addr_804844f_3;
            ecx3 = ecx3 + 3;
            below_or_equal5 = edx2 <= 3;
            edx2 = edx2 - 3;
        } while (!below_or_equal5);
        eax6 = 0;
        zf7 = g8048bbe == 32;
        if (!zf7) 
            goto addr_8048266_6;
        zf8 = g8048bb8 == 0x61747375;
        if (!zf8) 
            goto addr_80482f9_8;
        al9 = fun_804816c(ecx3);
        ebp10 = g8048ab3;
        edi11 = ebp10->f0;
        if (!edi11) {
            addr_80482a6_10:
            eax6 = 0;
            *reinterpret_cast<unsigned char*>(&eax6) = g8048b53;
            if (!*reinterpret_cast<unsigned char*>(&eax6)) 
                goto addr_80482b9_11;
            if (*reinterpret_cast<unsigned char*>(&eax6) > 55) 
                goto addr_80482f9_8;
            cf12 = *reinterpret_cast<unsigned char*>(&eax6) < 48;
            *reinterpret_cast<unsigned char*>(&eax6) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax6) - 48);
            if (cf12) 
                goto addr_80482f9_8;
            addr_80482b9_11:
            eax13 = reinterpret_cast<int32_t>(*reinterpret_cast<int32_t*>(eax6 * 4 + 0x804846f)());
            tmp32_14 = ebx4;
            eax6 = tmp32_14;
            if (eax13 < 0) 
                goto addr_80482f9_8;
        } else {
            esi15 = reinterpret_cast<unsigned char*>(0x80489b3);
            edi11 = ebp10->f0;
            if (!edi11) {
                addr_80482fc_15:
                fun_8048118();
                ebp16 = g8048b33;
                ebp10 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(ebp16 + 0x1ff) >> 9);
                if (ebp10) {
                    do {
                        __asm__("int 0x80");
                        ebp10 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(ebp10) - 1);
                    } while (ebp10);
                    goto addr_8048329_18;
                }
            } else {
                ebp10 = reinterpret_cast<struct s2*>(&ebp10->pad114);
                do {
                    __asm__("lodsb ");
                    ++edi11;
                    if (al9 != *edi11) 
                        goto addr_80482fc_15;
                    al9 = reinterpret_cast<unsigned char>(al9 | *edi11);
                } while (al9);
                goto addr_80482a6_10;
            }
        }
        __asm__("int 0x80");
        zf17 = g8048b53 == 50;
        if (!zf17) {
            __asm__("int 0x80");
        }
        continue;
        addr_8048329_18:
    }
    addr_804844f_3:
    __asm__("int 0x80");
    __asm__("int 0x80");
    edi18 = edi11 - 1;
    ebp10->f72 = reinterpret_cast<unsigned char>(ebp10->f72 & 1);
    if (!0) {
        if (!0) {
            __asm__("iretd ");
            tmp32_19 = g8048466 + 72;
            g8048466 = tmp32_19;
            tmp32_20 = g8048466 + 93;
            g8048466 = tmp32_20;
            tmp32_21 = g8048466 - 0x71;
            g8048466 = tmp32_21;
        }
        tmp32_22 = g8048466 - 96;
        g8048466 = tmp32_22;
        tmp32_23 = g8048466 + 48;
        g8048466 = tmp32_23;
        tmp32_24 = g8048466 + 0x72;
        g8048466 = tmp32_24;
        tmp32_25 = g8048466 + 46;
        g8048466 = tmp32_25;
        tmp32_26 = g8048466 + 46;
        g8048466 = tmp32_26;
        tmp8_27 = reinterpret_cast<signed char>(gb + 2);
        gb = tmp8_27;
        __asm__("fisttp dword [edi]");
    }
    __asm__("int 0x80");
    __asm__("int 0x80");
    fun_8048227(0x8048ab7);
    __asm__("int 0x80");
    ecx28 = 0;
    eax29 = 0;
    do {
        if (!*esi15) 
            break;
        if (*esi15 != 32) {
            *reinterpret_cast<unsigned char*>(&ecx28) = reinterpret_cast<unsigned char>(*esi15 - 48);
            if (*esi15 < 48) 
                goto addr_804810d_35;
            if (*reinterpret_cast<unsigned char*>(&ecx28) > 7) 
                goto addr_804810d_35;
            eax29 = eax29 * 8 + ecx28;
        }
        ++esi15;
    } while (reinterpret_cast<uint32_t>(esi15) < reinterpret_cast<uint32_t>(edi18));
    goto addr_804810b_39;
    addr_8048116_40:
    return eax29;
    addr_804810b_39:
    goto addr_8048116_40;
    addr_804810d_35:
    eax29 = 1;
    __asm__("int 0x80");
    goto addr_8048116_40;
    addr_8048266_6:
    return 0;
    addr_80482f9_8:
    return eax6;
}

void fun_8048522() {
    signed char* edi1;
    signed char al2;
    signed char al3;

    do {
        __asm__("lodsb ");
        *edi1 = al2;
        ++edi1;
    } while (al3);
    return;
}

struct s3 {
    struct s3* f0;
    signed char[1020] pad1024;
    int32_t f400;
};

struct s4 {
    signed char[577] pad577;
    signed char f241;
};

void fun_8048514(struct s4* ecx);

void fun_80484fd(int32_t ecx);

uint32_t g804899b;

int32_t g8048b94;

int32_t g8048b98;

int16_t g804897b;

void fun_804865e();

void fun_8048660();

int32_t fun_8048622();

int32_t g8048987;

struct s5 {
    signed char[8] pad8;
    uint16_t f8;
    signed char fa;
};

struct s6 {
    signed char f0;
    signed char f1;
};

struct s3* fun_8048788();

struct s7 {
    signed char f0;
    signed char[1] pad2;
    signed char f2;
};

struct s3* fun_80487b2(struct s5* ecx);

struct s3* fun_8048529() {
    uint32_t eax1;
    void* eax2;
    struct s3* eax3;
    int32_t esi4;
    uint32_t esi5;
    struct s3* eax6;
    signed char* edi7;
    struct s5* ecx8;
    struct s6* edi9;
    signed char* edi10;
    struct s5* v11;
    struct s5* ecx12;
    uint32_t eax13;
    struct s7* esi14;
    uint32_t edx15;
    int1_t below_or_equal16;
    struct s3* eax17;
    signed char* edi18;
    int32_t ecx19;
    int32_t ecx20;

    __asm__("int 0x80");
    if (1) {
        return 0x6b;
    }
    fun_8048514(0x8048973);
    fun_80484fd(8);
    fun_80484fd(8);
    fun_80484fd(8);
    eax1 = g804899b;
    fun_80484fd(12);
    g8048b94 = 0x61747375;
    g8048b98 = 0x202072;
    fun_8048522();
    *reinterpret_cast<int16_t*>(&eax1) = g804897b;
    eax2 = reinterpret_cast<void*>(eax1 >> 12);
    if (*reinterpret_cast<signed char*>(&eax2) == 10) {
        fun_804865e();
        g8048b53 = 50;
        __asm__("int 0x80");
    } else {
        if (*reinterpret_cast<signed char*>(&eax2) == 8) {
            fun_8048660();
            g8048b53 = 48;
            eax3 = reinterpret_cast<struct s3*>(5);
            __asm__("int 0x80");
            if (__intrinsic()) {
                addr_804865d_7:
                return eax3;
            } else {
                fun_8048622();
                esi4 = g8048987;
                esi5 = reinterpret_cast<uint32_t>(esi4 + 0x1ff) & 0xfffffe00;
                if (!esi5) 
                    goto addr_80486ef_9;
                while (!0) {
                    esi5 = esi5 - 3;
                    if (reinterpret_cast<int32_t>(esi5) < reinterpret_cast<int32_t>(0)) 
                        goto addr_80486d4_13;
                    __asm__("int 0x80");
                }
                goto addr_80486d8_15;
                addr_80486d4_13:
                esi5 = esi5 + 3;
                if (!esi5) {
                    addr_80486ef_9:
                    eax6 = reinterpret_cast<struct s3*>(6);
                    __asm__("int 0x80");
                    goto addr_80486f6_16;
                } else {
                    addr_80486d8_15:
                    fun_8048514(0x8048cab);
                    __asm__("int 0x80");
                    goto addr_80486ef_9;
                }
            }
        } else {
            if (*reinterpret_cast<signed char*>(&eax2) == 6) {
                g8048b53 = 52;
                goto addr_80485f9_19;
            } else {
                if (*reinterpret_cast<signed char*>(&eax2) == 4) {
                    g8048b53 = 53;
                    fun_8048622();
                    __asm__("int 0x80");
                    eax6 = reinterpret_cast<struct s3*>(0x8048873);
                    if (!__intrinsic()) {
                        edi7 = reinterpret_cast<signed char*>(0x8048873);
                        ecx8 = reinterpret_cast<struct s5*>(0xffffffff);
                        do {
                            if (!ecx8) 
                                break;
                            ecx8 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(ecx8) - 1);
                            ++edi7;
                        } while (*edi7);
                        edi9 = reinterpret_cast<struct s6*>(edi7 - 1);
                        edi9->f0 = 47;
                        edi10 = &edi9->f1;
                        *edi10 = 0;
                        fun_8048788();
                        v11 = ecx8;
                        while (ecx12 = v11, eax13 = 0, *reinterpret_cast<signed char*>(&eax13) = 0x8d, !0) {
                            v11 = ecx12;
                            while (1) {
                                esi14 = reinterpret_cast<struct s7*>(&ecx12->fa);
                                if (esi14->f0 && (esi14->f0 != 46 && (esi14->f0 != 0x2e2e || esi14->f2))) {
                                    fun_8048522();
                                    if (reinterpret_cast<uint32_t>(edi10) <= 0x80488d7) {
                                        fun_8048529();
                                    }
                                    edi10 = edi10;
                                    ecx12 = ecx12;
                                    eax13 = eax13;
                                }
                                edx15 = ecx12->f8;
                                ecx12 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(ecx12) + edx15);
                                below_or_equal16 = eax13 <= edx15;
                                eax13 = eax13 - edx15;
                                if (below_or_equal16) 
                                    break;
                            }
                        }
                        __asm__("int 0x80");
                        eax17 = fun_80487b2(ecx12);
                        return eax17;
                    }
                } else {
                    if (*reinterpret_cast<signed char*>(&eax2) == 2) {
                        g8048b53 = 51;
                        goto addr_80485f9_19;
                    } else {
                        eax3 = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(eax2) - 1);
                        if (eax3) 
                            goto addr_804865d_7;
                        fun_804865e();
                        g8048b53 = 54;
                    }
                }
            }
        }
    }
    addr_8048622_42:
    __asm__("cdq ");
    edi18 = reinterpret_cast<signed char*>(0x8048b4b);
    ecx19 = 8;
    while (ecx19) {
        --ecx19;
        *edi18 = 32;
        ++edi18;
    }
    ecx20 = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx20) + 1) = 2;
    do {
        __asm__("lodsb ");
        --ecx20;
    } while (ecx20);
    *reinterpret_cast<signed char*>(&ecx20) = 7;
    fun_80484fd(ecx20);
    eax3 = reinterpret_cast<struct s3*>(4);
    __asm__("int 0x80");
    goto addr_804865d_7;
    addr_80486f6_16:
    return eax6;
    addr_80485f9_19:
    fun_804865e();
    fun_80484fd(8);
    fun_80484fd(8);
    goto addr_8048622_42;
}

void fun_8048514(struct s4* ecx) {
    int32_t ecx2;
    int32_t* edi3;

    ecx2 = 0;
    *reinterpret_cast<signed char*>(&ecx2) = 0x80;
    edi3 = reinterpret_cast<int32_t*>(0x8048ab7);
    while (ecx2) {
        --ecx2;
        *edi3 = 0;
        ++edi3;
    }
    return;
}

void fun_80484fd(int32_t ecx) {
    int32_t ecx2;
    int32_t eax3;
    int32_t v4;
    signed char* edi5;
    int32_t v6;

    ecx2 = ecx - 1;
    do {
        --ecx2;
    } while (ecx2);
    do {
        eax3 = v4;
        *edi5 = *reinterpret_cast<signed char*>(&eax3);
        ++edi5;
    } while (eax3);
    goto v6;
}

void fun_804865e() {
    fun_80484fd(11);
    return;
}

int32_t fun_8048622() {
    signed char* edi1;
    int32_t ecx2;
    int32_t ecx3;

    __asm__("cdq ");
    edi1 = reinterpret_cast<signed char*>(0x8048b4b);
    ecx2 = 8;
    while (ecx2) {
        --ecx2;
        *edi1 = 32;
        ++edi1;
    }
    ecx3 = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx3) + 1) = 2;
    do {
        __asm__("lodsb ");
        --ecx3;
    } while (ecx3);
    *reinterpret_cast<signed char*>(&ecx3) = 7;
    fun_80484fd(ecx3);
    __asm__("int 0x80");
    return 4;
}

struct s3* g8048eaf;

struct s3* fun_80487c3(void* ecx);

struct s3* fun_8048788() {
    struct s3* ecx1;
    struct s3* eax2;
    struct s3* eax3;

    ecx1 = g8048eaf;
    if (!ecx1) {
        eax2 = fun_80487c3(0x404);
        ecx1 = eax2;
        eax3 = reinterpret_cast<struct s3*>(0x404);
    } else {
        eax3 = ecx1->f0;
        g8048eaf = eax3;
    }
    ecx1->f400 = 0;
    return eax3;
}

void fun_8048205(int32_t ecx) {
    int32_t eax2;
    int16_t* ebx3;

    eax2 = 0;
    if (*ebx3 != 45 && (eax2 = 5, !1)) {
        eax2 = 1;
        __asm__("int 0x80");
    }
    g8048867 = eax2;
    return;
}

int32_t fun_8048227(int32_t ecx) {
    __asm__("int 0x80");
    return 6;
}

unsigned char* fun_80480e5();

unsigned char* g8048b23;

unsigned char* g8048b2b;

void fun_8048118() {
    unsigned char* eax1;
    unsigned char* eax2;
    unsigned char* eax3;
    unsigned char* eax4;

    eax1 = fun_80480e5();
    g8048b33 = eax1;
    eax2 = fun_80480e5();
    g8048b1b = eax2;
    eax3 = fun_80480e5();
    g8048b23 = eax3;
    eax4 = fun_80480e5();
    g8048b2b = eax4;
    return;
}

void fun_8048144() {
    unsigned char* eax1;
    unsigned char* eax2;
    unsigned char* eax3;

    eax1 = fun_80480e5();
    g8048b1b = eax1;
    eax2 = fun_80480e5();
    g8048b23 = eax2;
    eax3 = fun_80480e5();
    g8048b2b = eax3;
    return;
}

unsigned char* g8048c00;

unsigned char* g8048c08;

void fun_8048129() {
    unsigned char* eax1;
    unsigned char* eax2;
    unsigned char* eax3;
    unsigned char* eax4;
    unsigned char* eax5;

    eax1 = fun_80480e5();
    g8048c00 = eax1;
    eax2 = fun_80480e5();
    g8048c08 = eax2;
    eax3 = fun_80480e5();
    g8048b1b = eax3;
    eax4 = fun_80480e5();
    g8048b23 = eax4;
    eax5 = fun_80480e5();
    g8048b2b = eax5;
    return;
}

void fun_8048660() {
    fun_80484fd(11);
    return;
}

struct s3* fun_80487b2(struct s5* ecx) {
    struct s3* ecx2;
    struct s3* eax3;

    ecx2 = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(ecx) - 4);
    eax3 = g8048eaf;
    ecx2->f0 = eax3;
    g8048eaf = ecx2;
    return eax3;
}

struct s3* g80487fe = reinterpret_cast<struct s3*>(0x8048eb3);

struct s8 {
    unsigned char f0;
    signed char[113] pad114;
    unsigned char f72;
};

struct s9 {
    signed char[73] pad73;
    unsigned char f49;
};

unsigned char g48;

struct s10 {
    signed char[250] pad250;
    unsigned char ffa;
};

unsigned char g80487f8 = 0x6f;

uint32_t g72632063;

uint32_t g696c2074;

uint32_t g78652078;

struct s3* fun_80487c3(void* ecx) {
    struct s3* ebx2;
    struct s8* ecx3;
    int32_t eax4;
    struct s9* esi5;
    void* esi6;
    void* ebp7;
    void* ebp8;
    uint1_t below_or_equal9;
    int1_t zf10;
    int1_t zf11;
    struct s3* eax12;

    ebx2 = g80487fe;
    __asm__("int 0x80");
    if (0) {
        ecx3 = reinterpret_cast<struct s8*>(0x80487f7);
        __asm__("int 0x80");
        eax4 = 1;
        __asm__("int 0x80");
        esi5 = reinterpret_cast<struct s9*>(reinterpret_cast<int32_t>(esi6) - 1);
        __asm__("outsd ");
        g48 = reinterpret_cast<unsigned char>(g48 & 7);
        ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp8) - 1);
        if (!1) {
            below_or_equal9 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax4) + 1) <= *reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s10**>(&esi5))->ffa));
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax4) + 1) != *reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s10**>(&esi5))->ffa)) {
                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax4) + 1) >= *reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s10**>(&esi5))->ffa)) {
                    esi5->f49 = reinterpret_cast<unsigned char>(esi5->f49 & 1);
                    ecx3 = reinterpret_cast<struct s8*>(0x80487f8);
                    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 + 4 - 4 - 4 + 1 - 1 + 1);
                    *reinterpret_cast<unsigned char*>(&ecx3) = reinterpret_cast<unsigned char>(0xf8 | g80487f8);
                    g72632063 = g72632063 | reinterpret_cast<uint32_t>(ebp7);
                    zf10 = g72632063 == 0;
                    __asm__("popad ");
                    if (!zf10) {
                        ecx3->f72 = reinterpret_cast<unsigned char>(ecx3->f72 & 0xff);
                        ecx3->f72 = 0;
                        below_or_equal9 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(ecx3->f72 == 0)));
                    }
                }
                __asm__("arpl [eax+0x69], bp");
                if (!below_or_equal9) {
                    *reinterpret_cast<unsigned char*>(&ecx3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx3) | ecx3->f0);
                    g696c2074 = g696c2074 | reinterpret_cast<uint32_t>(ebp7);
                    if (!1) {
                        ecx3->f72 = reinterpret_cast<unsigned char>(ecx3->f72 & 0xff);
                        ecx3->f72 = 0;
                        __asm__("arpl [eax+0x69], bp");
                        if (ecx3->f72) {
                            g78652078 = g78652078 | reinterpret_cast<uint32_t>(ebp7);
                            zf11 = g78652078 == 0;
                            if (!zf11) {
                                __asm__("popad ");
                                __asm__("arpl [eax+0x74], si");
                                __asm__("popad ");
                                if (!0) {
                                    __asm__("popad ");
                                    if (0) {
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        eax12 = g80487fe;
        g80487fe = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(ebx2) + reinterpret_cast<int32_t>(ecx));
        return eax12;
    }
}

unsigned char* fun_80480e5() {
    unsigned char* ecx1;
    unsigned char* eax2;
    unsigned char* esi3;
    unsigned char* edi4;

    ecx1 = reinterpret_cast<unsigned char*>(0);
    eax2 = reinterpret_cast<unsigned char*>(0);
    do {
        if (!*esi3) 
            break;
        if (*esi3 != 32) {
            *reinterpret_cast<unsigned char*>(&ecx1) = reinterpret_cast<unsigned char>(*esi3 - 48);
            if (*esi3 < 48) 
                goto addr_804810d_5;
            if (*reinterpret_cast<unsigned char*>(&ecx1) > 7) 
                goto addr_804810d_5;
            eax2 = ecx1 + reinterpret_cast<uint32_t>(eax2) * 8;
        }
        ++esi3;
    } while (reinterpret_cast<uint32_t>(esi3) < reinterpret_cast<uint32_t>(edi4));
    goto addr_804810b_9;
    addr_8048116_10:
    return eax2;
    addr_804810b_9:
    goto addr_8048116_10;
    addr_804810d_5:
    eax2 = reinterpret_cast<unsigned char*>(1);
    __asm__("int 0x80");
    goto addr_8048116_10;
}

struct s11 {
    signed char[24] pad24;
    signed char f18;
};

struct s12 {
    signed char[24] pad24;
    signed char f18;
};

int32_t g804886f;

void fun_8048000(int32_t* ecx, int32_t a2, int32_t a3, int16_t* a4, int32_t a5) {
    int32_t* esp6;
    int1_t less_or_equal7;
    int32_t esi8;
    int32_t esi9;
    int32_t eax10;
    int32_t* ebx11;
    int32_t* ebx12;
    int32_t eax13;
    signed char* eax14;
    signed char* eax15;
    signed char al16;
    signed char* eax17;
    signed char* eax18;
    signed char al19;
    signed char* eax20;
    signed char* eax21;
    signed char al22;
    signed char* eax23;
    signed char* eax24;
    signed char al25;
    void** eax26;
    signed char al27;
    signed char* eax28;
    void** eax29;
    signed char dh30;
    int16_t bx31;
    int16_t bx32;
    int32_t ebx33;
    int32_t ebx34;
    signed char dh35;
    void* tmp8_36;
    uint1_t cf37;
    struct s11* edx38;
    struct s12* edx39;
    int32_t ecx40;

    esp6 = reinterpret_cast<int32_t*>(__zero_stack_offset());
    if (less_or_equal7) {
        esi8 = esi9 + 1;
        *ecx = *ecx + eax10;
        *ebx11 = *ebx12 + eax13;
        *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
        *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
        *eax20 = reinterpret_cast<signed char>(*eax21 + al22);
        *eax23 = reinterpret_cast<signed char>(*eax24 + al25);
        *reinterpret_cast<signed char*>(&eax26) = reinterpret_cast<signed char>(al27 + *eax28);
        eax29 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<int32_t>(*eax26));
        *eax29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax29) + reinterpret_cast<int32_t>(eax29));
        *eax29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax29) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax29)));
        esp6 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp6) - 1 - 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax29) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax29)));
        *eax29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax29) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax29)));
        *eax29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax29) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax29)));
        *eax29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax29) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax29)));
        *eax29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax29) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax29)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax29) + reinterpret_cast<int32_t>(eax29)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax29) + reinterpret_cast<int32_t>(eax29)) + dh30);
        *eax29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax29) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax29)));
        *eax29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax29) + reinterpret_cast<int32_t>(eax29));
        *eax29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax29) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax29)));
        *eax29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax29) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax29)));
        *eax29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax29) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax29)));
        *reinterpret_cast<unsigned char*>(eax29 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax29 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax29)));
        *reinterpret_cast<void**>(&eax29) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax29)) + 8);
        *reinterpret_cast<unsigned char*>(bx31 + *reinterpret_cast<int16_t*>(&esi8)) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(bx32 + *reinterpret_cast<int16_t*>(&esi8)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax29)));
        *reinterpret_cast<signed char*>(ebx33 + 0x700000e) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx34 + 0x700000e) + dh35);
        *eax29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax29) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax29)));
    }
    tmp8_36 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax29) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax29)));
    cf37 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_36) < reinterpret_cast<unsigned char>(*eax29));
    *eax29 = tmp8_36;
    *eax29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax29) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax29))) + cf37);
    edx38->f18 = reinterpret_cast<signed char>(edx39->f18 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
    __asm__("int 0x80");
    ecx40 = reinterpret_cast<int32_t>(__return_address());
    g804886f = 0;
    __asm__("int 0x80");
    if (a4) {
        if (*a4 == 0x742d) {
            addr_8048098_5:
            fun_8048205(ecx40);
            fun_8048194(ecx40);
            fun_8048227(ecx40);
            goto 0x80480e0;
        } else {
            if (*a4 == 0x782d) {
                fun_8048205(ecx40);
                __asm__("int 0x80");
                __asm__("int 0x80");
                __asm__("int 0x80");
                g8048ab3 = reinterpret_cast<struct s2*>(esp6 + 1 - 1 + 1 + 1 + 1 + 1 + 1 - 1 + 1 - 1 + 1 - 1 + 1 - 1 + 1);
                fun_8048233(ecx40);
                fun_8048227(ecx40);
            } else {
                if (*a4 == 0x632d) 
                    goto 0x8048491;
            }
        }
    }
    ecx40 = reinterpret_cast<int32_t>("Usage: tar [OPT] FILENAME\n\t\t-c create tar archive\n\t\t-t list tar archive\n\t\t-x extract tar arcive\n |-> ");
    __asm__("int 0x80");
    __asm__("int 0x80");
    goto addr_8048098_5;
}

void fun_8048499(struct s4* ecx) {
    int32_t* eax2;
    int32_t* eax3;
    int32_t eax4;
    signed char bh5;
    int32_t v6;

    __asm__("rol byte [eax+0x66], 0x83");
    *eax2 = *eax3 + eax4;
    ecx->f241 = reinterpret_cast<signed char>(ecx->f241 + bh5);
    __asm__("int 0x80");
    if (__intrinsic()) 
        goto 0x80480e0;
    g8048867 = 5;
    while (v6) {
        fun_8048522();
        fun_8048529();
    }
    fun_8048514(ecx);
}
