
struct s0 {
    int32_t f0;
    signed char[75] pad79;
    unsigned char f4f;
    signed char[31] pad111;
    unsigned char f6f;
    signed char[3] pad115;
    unsigned char f73;
};

signed char g8048381;

int32_t fun_8048149(struct s0* ecx) {
    signed char al2;
    signed char al3;
    int32_t eax4;

    do {
        __asm__("lodsb ");
        if (!al2) 
            break;
    } while (al3 != 61);
    goto addr_8048152_3;
    __asm__("int 0x80");
    g8048381 = 1;
    return 1;
    addr_8048152_3:
    return eax4;
}

unsigned char g8048382;

void fun_80482a7(signed char* ecx) {
    int1_t zf2;
    int16_t* edi3;
    uint32_t ecx4;
    signed char tmp8_5;
    int16_t ax6;

    zf2 = (g8048382 & 1) == 0;
    if (!zf2) {
        __asm__("pushad ");
        edi3 = reinterpret_cast<int16_t*>(0x804838b);
        ecx4 = reinterpret_cast<uint32_t>(ecx - 0x804838b);
        if (ecx4) {
            do {
                __asm__("lodsw ");
                tmp8_5 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ax6) + 1);
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ax6) + 1) = *reinterpret_cast<signed char*>(&ax6);
                *reinterpret_cast<signed char*>(&ax6) = tmp8_5;
                *edi3 = ax6;
                ++edi3;
                --ecx4;
            } while (ecx4);
        }
        __asm__("popad ");
    }
    return;
}

void fun_8048318();

signed char g804837f;

int32_t g804838b;

int32_t g804838f;

signed char g8048380;

int32_t g8048393;

int32_t g8048397;

int32_t fun_80482c8(signed char* ecx) {
    int32_t eax2;
    int32_t eax3;

    fun_8048318();
    eax2 = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax2) + 1) = g804837f;
    g804838b = eax2 + 0x20302b;
    g804838f = 0xa2c6e69;
    fun_8048318();
    eax3 = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax3) + 1) = g8048380;
    g8048393 = eax3 + 0x20302b;
    g8048397 = 0xa74756f;
    __asm__("int 0x80");
    return 4;
}

void fun_8048318() {
    int32_t ecx1;
    uint32_t eax2;
    int32_t eax3;
    int32_t v4;
    signed char* edi5;

    ecx1 = 0;
    do {
        eax2 = eax2 / 10;
        ++ecx1;
    } while (eax2);
    do {
        eax3 = v4;
        *edi5 = *reinterpret_cast<signed char*>(&eax3);
        ++edi5;
        --ecx1;
    } while (ecx1);
    return;
}

int32_t fun_804832f(struct s0* ecx) {
    int32_t eax2;
    int32_t ebx3;

    eax2 = 0;
    ebx3 = 0;
    while (*reinterpret_cast<unsigned char*>(&eax2)) {
        if (*reinterpret_cast<unsigned char*>(&eax2) > 57) 
            goto addr_8048347_4;
        *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax2) - 48);
        ebx3 = ebx3 * 10 + eax2;
    }
    addr_8048345_6:
    return ebx3;
    addr_8048347_4:
    if (*reinterpret_cast<unsigned char*>(&eax2) != 0x77) {
        if (*reinterpret_cast<unsigned char*>(&eax2) != 98) {
            if (*reinterpret_cast<unsigned char*>(&eax2) != 0x6b) {
                if (*reinterpret_cast<unsigned char*>(&eax2) != 0x6d) {
                    __asm__("int 0x80");
                    g8048381 = 1;
                    return 1;
                } else {
                    ebx3 = ebx3 << 10;
                }
            }
            ebx3 = ebx3 << 1;
        }
        ebx3 = ebx3 << 8;
    }
    ebx3 = ebx3 << 1;
    goto addr_8048345_6;
}

int32_t fun_8048116(struct s0* ecx) {
    int32_t ebp2;

    fun_8048149(ecx);
    __asm__("int 0x80");
    if (0) {
        __asm__("int 0x80");
        fun_80482c8(0x8048079);
        __asm__("int 0x80");
        g8048381 = 1;
        return 1;
    } else {
        return ebp2;
    }
}

struct s1 {
    int16_t f0;
    signed char[3] pad5;
    int32_t f5;
    signed char[102] pad111;
    int32_t f6f;
};

struct s2 {
    signed char[1] pad1;
    int16_t f1;
};

struct s3 {
    void* f0;
    signed char[2885635] pad2885636;
    signed char f2c0804;
};

struct s4 {
    uint32_t f0;
    int32_t f4;
};

uint32_t g804836b;

int32_t g804836f;

struct s5 {
    int32_t f0;
    int32_t f4;
};

int32_t g8048367;

int32_t g8048377;

int32_t g804837b;

struct s6 {
    int32_t f0;
    int32_t f4;
};

struct s7 {
    int32_t f0;
    struct s1* f4;
};

struct s8 {
    signed char[115] pad115;
    int32_t f73;
};

struct s9 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s10 {
    signed char[111] pad111;
    signed char f6f;
};

struct s11 {
    int32_t f0;
    struct s1* f4;
};

void fun_8048000(struct s0* ecx) {
    struct s1** esp2;
    int1_t less_or_equal3;
    struct s1* esi4;
    struct s2* esi5;
    int32_t eax6;
    int32_t* ebx7;
    int32_t* ebx8;
    int32_t eax9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    void** eax22;
    signed char al23;
    signed char* eax24;
    struct s3* eax25;
    signed char dh26;
    signed char* eax27;
    int16_t bx28;
    void* ebx29;
    void* ebx30;
    signed char dl31;
    int1_t zf32;
    struct s4* esp33;
    unsigned char bh34;
    int1_t cf35;
    int32_t ebp36;
    int1_t zf37;
    uint32_t eax38;
    struct s4* esp39;
    int32_t* esp40;
    int32_t* esp41;
    int1_t sf42;
    uint32_t edx43;
    struct s5* esp44;
    void* esp45;
    int32_t esi46;
    signed char* ecx47;
    uint32_t edx48;
    int32_t* esp49;
    int1_t below_or_equal50;
    int32_t* esp51;
    signed char* edx52;
    int32_t* esp53;
    struct s4* esp54;
    struct s6* esp55;
    struct s7* esp56;
    struct s8* edx57;
    struct s9* ebx58;
    struct s10* ebx59;
    int32_t* edx60;
    struct s4* esp61;
    struct s6* esp62;
    int32_t eax63;
    int32_t* esi64;
    struct s4* esp65;
    struct s11* esp66;
    int1_t zf67;
    int1_t zf68;
    signed char* edi69;
    uint32_t ecx70;
    int32_t* esp71;
    int32_t* esp72;
    int32_t* esp73;
    int32_t* esp74;
    int32_t* esp75;

    esp2 = reinterpret_cast<struct s1**>(__zero_stack_offset());
    if (less_or_equal3) {
        esp2 = reinterpret_cast<struct s1**>(reinterpret_cast<int32_t>(esp2) - 1);
        esi4 = reinterpret_cast<struct s1*>(&esi5->f1);
        ecx->f0 = ecx->f0 + eax6;
        *ebx7 = *ebx8 + eax9;
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
        *reinterpret_cast<signed char*>(&eax22) = reinterpret_cast<signed char>(al23 + *eax24);
        eax25 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(*eax22));
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<int32_t>(eax25));
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        eax25->f2c0804 = reinterpret_cast<signed char>(static_cast<int32_t>(eax25->f2c0804));
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(eax25)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(eax25)) + dh26);
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<int32_t>(eax25));
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax25) - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax25) - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) + 8);
        eax27 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(bx28 + *reinterpret_cast<int16_t*>(&esi4))));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebx29) + reinterpret_cast<uint32_t>(eax27) + 0x70000) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebx30) + reinterpret_cast<uint32_t>(eax27) + 0x70000) + *reinterpret_cast<unsigned char*>(&ecx));
        *eax27 = reinterpret_cast<signed char>(*eax27 + *reinterpret_cast<signed char*>(&eax27));
    }
    *eax27 = reinterpret_cast<signed char>(*eax27 + dl31);
    *eax27 = reinterpret_cast<signed char>(*eax27 + *reinterpret_cast<signed char*>(&eax27));
    zf32 = *eax27 == 0;
    if (!zf32) {
        addr_80480c1_4:
        if (zf32) {
            esp33 = reinterpret_cast<struct s4*>(esp2 - 1);
            esp33->f0 = 0x8048107;
            fun_8048116(0x8000);
            goto esp33->f4;
        }
    } else {
        __asm__("popad ");
        ecx->f73 = 0;
        ecx->f6f = reinterpret_cast<unsigned char>(ecx->f6f & bh34);
        cf35 = 0;
        if (ecx->f6f) {
            addr_804807d_7:
            if (cf35) 
                goto addr_804808c_8; else 
                goto addr_8048082_9;
        } else {
            ebp36 = esi4->f6f * 0x77;
            *reinterpret_cast<unsigned char*>(ebp36 + 0x78) = 0;
            zf37 = *reinterpret_cast<unsigned char*>(ebp36 + 0x78) == 0;
            __asm__("arpl [ebp+0x70], sp");
            if (zf37) {
                addr_8048089_11:
                ++esp2;
                if (!zf37) {
                    addr_80480a2_12:
                    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&g804836b) + 1) = 2;
                    esi4 = *esp2;
                    ++esp2;
                    if (!esi4) {
                        eax38 = g804836b;
                        esp39 = reinterpret_cast<struct s4*>(esp2 - 1);
                        esp39->f0 = eax38;
                        esp40 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp39) - 4);
                        *esp40 = 45;
                        __asm__("int 0x80");
                        esp41 = esp40 + 1 + 1 - 1;
                        *esp41 = 0;
                        __asm__("int 0x80");
                        if (__intrinsic()) {
                            while (--g804836f, sf42 = g804836f < 0, !sf42) {
                                edx43 = g804836b;
                                do {
                                    esp44 = reinterpret_cast<struct s5*>(esp41 - 1);
                                    esp44->f0 = 3;
                                    esp41 = &esp44->f4;
                                    __asm__("int 0x80");
                                    if (0) 
                                        goto 0x8048153;
                                    edx43 = edx43 - 3;
                                } while (edx43);
                            }
                        }
                        __asm__("int 0x80");
                        esp45 = reinterpret_cast<void*>(esp41 + 1);
                        esi46 = g8048367;
                        do {
                            ecx47 = reinterpret_cast<signed char*>(0x804838b);
                            edx48 = g804836b;
                            do {
                                esp49 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp45) - 4);
                                *esp49 = 3;
                                esp45 = reinterpret_cast<void*>(esp49 + 1);
                                __asm__("int 0x80");
                                if (0) 
                                    goto addr_8048245_23;
                                if (0) 
                                    goto 0x8048153;
                                ecx47 = ecx47 + 3;
                                below_or_equal50 = edx48 <= 3;
                                edx48 = edx48 - 3;
                            } while (!below_or_equal50);
                            ++g8048377;
                            esp51 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp45) - 4);
                            *esp51 = 0x8048222;
                            fun_80482a7(ecx47);
                            edx52 = ecx47;
                            ecx47 = reinterpret_cast<signed char*>(0x804838b);
                            edx48 = reinterpret_cast<uint32_t>(edx52 - 0x804838b);
                            esp53 = esp51 + 1 - 1;
                            *esp53 = 4;
                            esp45 = reinterpret_cast<void*>(esp53 + 1);
                            __asm__("int 0x80");
                            if (4 != edx48) 
                                goto 0x8048153;
                            ++g804837b;
                            --esi46;
                        } while (esi46);
                        goto addr_8048243_28;
                    } else {
                        addr_80480b2_29:
                        --esp2;
                        *esp2 = reinterpret_cast<struct s1*>(0x80480a9);
                        goto addr_80480b5_30;
                    }
                } else {
                    addr_804808c_8:
                    esp54 = reinterpret_cast<struct s4*>(esp2 - 1);
                    esp54->f0 = 45;
                    ecx = reinterpret_cast<struct s0*>(0x804804c);
                    esp55 = reinterpret_cast<struct s6*>(&esp54->f4 - 1);
                    esp55->f0 = 4;
                    __asm__("int 0x80");
                    esp56 = reinterpret_cast<struct s7*>(&esp55->f4 - 1);
                    esp56->f0 = 1;
                    esp2 = &esp56->f4;
                    __asm__("int 0x80");
                    goto addr_80480a2_12;
                }
            } else {
                esp2 = reinterpret_cast<struct s1**>(edx57->f73 * 0x626f203d);
                if (!__intrinsic()) {
                    goto addr_80480b2_29;
                }
                ebx58->f6f = 0;
                __asm__("outsb ");
                if (!ebx59->f6f) 
                    goto addr_80480b5_30; else 
                    goto addr_8048078_34;
            }
        }
    }
    edx60 = reinterpret_cast<int32_t*>(0x8048367);
    if (esi4->f0 == 0x6e756f63 || ((edx60 = reinterpret_cast<int32_t*>(0x804836b), esi4->f0 == 0x7362) || ((edx60 = reinterpret_cast<int32_t*>(0x804836f), esi4->f0 == 0x70696b73) || (edx60 = reinterpret_cast<int32_t*>(0x8048373), esi4->f0 == 0x6b656573)))) {
        esp61 = reinterpret_cast<struct s4*>(esp2 - 1);
        esp61->f0 = 0x804812d;
        fun_8048149(ecx);
        esp62 = reinterpret_cast<struct s6*>(&esp61->f4 - 1);
        esp62->f0 = 0x8048132;
        eax63 = fun_804832f(ecx);
        *edx60 = eax63;
        goto esp62->f4;
    }
    if (esi4->f0 != 0x766e6f63) {
        goto *esp2;
    }
    esi64 = &esi4->f5;
    if (*esi64 == 0x636e7973) 
        goto 0x8048172;
    if (*esi64 != 0x62617773) 
        goto addr_8048148_41;
    g8048382 = 1;
    goto *esp2;
    addr_8048148_41:
    goto *esp2;
    addr_8048082_9:
    esp65 = reinterpret_cast<struct s4*>(esp2 - 1);
    esp65->f0 = 1;
    esp66 = reinterpret_cast<struct s11*>(&esp65->f4);
    esp2 = &esp66->f4;
    zf37 = esp66->f0 - 1 == 0;
    goto addr_8048089_11;
    addr_8048245_23:
    zf67 = edx48 == g804836b;
    if (!zf67) {
        g804837f = reinterpret_cast<signed char>(g804837f + 1);
        g8048380 = reinterpret_cast<signed char>(g8048380 + 1);
        zf68 = g8048381 == 1;
        if (zf68) {
            edi69 = ecx47;
            ecx70 = edx48;
            while (ecx70) {
                --ecx70;
                *edi69 = 0;
                ++edi69;
            }
            ecx47 = edi69;
            g8048380 = reinterpret_cast<signed char>(g8048380 - 1);
            *reinterpret_cast<signed char*>(&g804837b) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&g804837b) + 1);
        }
        esp71 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp45) - 4);
        *esp71 = 0x804827d;
        fun_80482a7(ecx47);
        ecx47 = reinterpret_cast<signed char*>(0x804838b);
        esp72 = esp71 + 1 - 1;
        *esp72 = 4;
        esp45 = reinterpret_cast<void*>(esp72 + 1);
        __asm__("int 0x80");
    }
    esp73 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp45) - 4);
    *esp73 = 6;
    __asm__("int 0x80");
    esp74 = esp73 + 1 - 1;
    *esp74 = 6;
    __asm__("int 0x80");
    esp75 = esp74 + 1 - 1;
    *esp75 = 0x80482a0;
    fun_80482c8(ecx47);
    *(esp75 + 1 - 1) = 1;
    __asm__("int 0x80");
    addr_8048243_28:
    goto addr_8048245_23;
    addr_80480b5_30:
    if (esi4->f0 != 0x666f) {
        zf32 = esi4->f0 == 0x6669;
        goto addr_80480c1_4;
    }
    addr_8048078_34:
    *reinterpret_cast<unsigned char*>(&ecx) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx) | ecx->f4f);
    cf35 = reinterpret_cast<uint32_t>(eax27) < 0x6f727265;
    goto addr_804807d_7;
}
