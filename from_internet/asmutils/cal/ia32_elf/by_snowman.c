
int32_t fun_80482ec() {
    int32_t v1;
    int32_t eax2;
    int32_t eax3;
    int1_t cf4;

    v1 = eax2;
    eax3 = 0;
    while (cf4 = *reinterpret_cast<unsigned char*>(&eax3) < 48, *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax3) - 48), !cf4) {
    }
    return v1;
}

void fun_80482d0() {
    int32_t ecx1;
    int32_t ebx2;
    uint32_t eax3;
    uint32_t eax4;
    signed char* edi5;

    __asm__("pushad ");
    ecx1 = ebx2;
    do {
        eax3 = eax4 % 10;
        *reinterpret_cast<signed char*>(&eax3) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax3) + 48);
        *edi5 = *reinterpret_cast<signed char*>(&eax3);
        --edi5;
        eax4 = eax4 / 10;
        --ecx1;
    } while (ecx1);
    if (eax4) {
        *edi5 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax4) + 48);
    }
    __asm__("popad ");
    return;
}

struct s0 {
    signed char f0;
    signed char[116] pad117;
    unsigned char f75;
};

struct s1 {
    signed char[1] pad1;
    int32_t f1;
    signed char[96] pad101;
    unsigned char f65;
};

struct s2 {
    void* f0;
    int32_t f1;
};

struct s3 {
    signed char f0;
    signed char[116] pad117;
    unsigned char f75;
};

struct s4 {
    signed char[97] pad97;
    int32_t f61;
};

struct s5 {
    signed char[97] pad97;
    int32_t f61;
};

struct s6 {
    signed char[97] pad97;
    unsigned char f61;
    signed char[13] pad111;
    unsigned char f6f;
};

struct s7 {
    unsigned char f0;
    signed char[116] pad117;
    unsigned char f75;
};

int32_t g8048301;

uint32_t g8048321;

uint32_t g804831d;

int32_t g8048335;

int32_t g8048319;

uint32_t g8048315;

uint32_t g80480b6 = 0x20202020;

void fun_8048000(struct s0* ecx) {
    uint48_t v2;
    int1_t less_or_equal3;
    struct s1* esi4;
    void* esi5;
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
    int32_t* eax22;
    signed char al23;
    signed char* eax24;
    signed char* eax25;
    struct s2* eax26;
    int32_t* ebx27;
    int32_t* ebx28;
    void* tmp8_29;
    uint1_t cf30;
    signed char* edi31;
    signed char* edi32;
    signed char bl33;
    signed char* ebx34;
    signed char* ebx35;
    signed char bh36;
    signed char* edx37;
    signed char* edx38;
    signed char bl39;
    signed char* edx40;
    struct s2* edi41;
    int32_t* eax42;
    int32_t* edi43;
    int32_t ebp44;
    int32_t ebp45;
    signed char dh46;
    signed char dl47;
    void* bl48;
    signed char bh49;
    struct s3* ebx50;
    struct s3* v51;
    unsigned char* eax52;
    signed char dh53;
    signed char* edx54;
    signed char* edx55;
    signed char dl56;
    struct s4* edx57;
    struct s5* edx58;
    struct s6* ebp59;
    void* ebp60;
    struct s7* edx61;
    void* edx62;
    int32_t ebx63;
    int32_t edx64;
    int32_t eax65;
    uint32_t eax66;
    uint32_t eax67;
    uint32_t esi68;
    uint32_t eax69;
    uint32_t ebx70;
    uint32_t eax71;
    int32_t ecx72;
    uint32_t eax73;
    uint32_t ecx74;
    uint32_t ecx75;
    uint32_t ecx76;
    int32_t eax77;
    int32_t ecx78;
    int32_t ecx79;
    int32_t ecx80;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 1) = reinterpret_cast<int32_t>(__return_address());
    if (less_or_equal3) {
        esi4 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(esi5) + 1);
        ecx->f0 = reinterpret_cast<signed char>(ecx->f0 + eax6);
        *ebx7 = *ebx8 + eax9;
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
        *reinterpret_cast<signed char*>(&eax22) = reinterpret_cast<signed char>(al23 + *eax24);
        eax25 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + *eax22);
        *eax25 = reinterpret_cast<signed char>(*eax25 + reinterpret_cast<int32_t>(eax25));
        *eax25 = reinterpret_cast<signed char>(*eax25 + *reinterpret_cast<signed char*>(&eax25));
        eax26 = *reinterpret_cast<struct s2**>(&v2);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<int32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<int32_t>(ecx)) + 44;
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<void**>(&eax26) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26))));
        eax26->f0 = reinterpret_cast<void*>(0);
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<int32_t>(eax26));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax26) - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax26) - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<void**>(&eax26) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)) + 8);
        *ebx27 = *ebx28 + reinterpret_cast<int32_t>(eax26);
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
    }
    tmp8_29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
    cf30 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_29) < reinterpret_cast<unsigned char>(eax26->f0));
    eax26->f0 = tmp8_29;
    eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26))) + cf30);
    eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
    *edi31 = reinterpret_cast<signed char>(*edi32 + bl33);
    *ebx34 = reinterpret_cast<signed char>(*ebx35 + bh36);
    *edx37 = reinterpret_cast<signed char>(*edx38 + bl39);
    edi41 = eax26;
    eax42 = edi43;
    *reinterpret_cast<signed char*>(ebp44 - 0xcff2c00) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp45 - 0xcff2c00) + dh46);
    ecx->f0 = reinterpret_cast<signed char>(ecx->f0 + dl47);
    *eax42 = *eax42 + reinterpret_cast<int32_t>(esi4);
    esi4->f1 = esi4->f1 + reinterpret_cast<int32_t>(ecx);
    __asm__("insd ");
    *eax42 = *eax42 + reinterpret_cast<int32_t>(eax42);
    edi41->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi41->f0) + reinterpret_cast<signed char>(bl48));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax42) + reinterpret_cast<int32_t>(eax42)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax42) + reinterpret_cast<int32_t>(eax42)) + bh49);
    ebx50 = v51;
    ecx->f0 = reinterpret_cast<signed char>(ecx->f0 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx50) + 1));
    eax52 = reinterpret_cast<unsigned char*>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax42)));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi4) - 0xbff2b00) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi4) - 0xbff2b00) + dh53);
    *edx54 = reinterpret_cast<signed char>(*edx55 + dl56);
    ecx->f0 = reinterpret_cast<signed char>(ecx->f0 + reinterpret_cast<int32_t>(esi4));
    edi41->f1 = edi41->f1 + reinterpret_cast<int32_t>(ecx);
    __asm__("outsb ");
    edx57->f61 = edx58->f61 + reinterpret_cast<int32_t>(ecx);
    __asm__("outsb ");
    esi4->f65 = reinterpret_cast<unsigned char>(esi4->f65 & *reinterpret_cast<unsigned char*>(&eax52));
    ebp59 = reinterpret_cast<struct s6*>(reinterpret_cast<int32_t>(ebp60) - 1);
    __asm__("popad ");
    if (0) 
        goto addr_80480ac_5;
    ecx = reinterpret_cast<struct s0*>(&ecx->pad117);
    if (__intrinsic()) {
        addr_8048101_7:
        *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax52) + 1) = 0xff;
        goto addr_8048105_8;
    } else {
        ebp59->f61 = reinterpret_cast<unsigned char>(ebp59->f61 & *reinterpret_cast<unsigned char*>(&ecx));
        if (!__intrinsic()) {
            addr_80480b4_10:
            *eax52 = 0;
            *eax52 = 0;
            *eax52 = 0;
            *eax52 = 0;
            *eax52 = 0;
            *eax52 = 0;
            *eax52 = 0;
            *eax52 = 0;
            goto addr_80480c4_11;
        } else {
            edx61 = reinterpret_cast<struct s7*>(reinterpret_cast<int32_t>(edx62) - 1);
            if (edx61) {
                addr_8048105_8:
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                edx61->f0 = reinterpret_cast<unsigned char>(edx61->f0 & *reinterpret_cast<unsigned char*>(&ecx));
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax52) + 1) = 0xff;
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                edx61->f0 = reinterpret_cast<unsigned char>(edx61->f0 & *reinterpret_cast<unsigned char*>(&ecx));
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                *reinterpret_cast<unsigned char*>(&ebx50) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx50) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi4) - 0x7d));
                ebx50->f0 = reinterpret_cast<signed char>(ebx50->f0 + 1);
                if (ebx50->f0) {
                    __asm__("int 0x80");
                } else {
                    fun_80482ec();
                    ebx63 = reinterpret_cast<int32_t>(edx61) - 1;
                    fun_80482ec();
                    edx64 = __intrinsic();
                    *reinterpret_cast<int16_t*>(&edx64) = *reinterpret_cast<int16_t*>(ebx63 + ebx63 + 0x804804c);
                    g8048301 = 0x15180 * (edx64 + 20) + 0x1e13380 * (reinterpret_cast<int32_t>(edx61) - 0x7b2);
                }
            } else {
                edx61->f75 = reinterpret_cast<unsigned char>(edx61->f75 & *reinterpret_cast<unsigned char*>(&ecx));
                __asm__("insb ");
                ecx->f75 = reinterpret_cast<unsigned char>(ecx->f75 & *reinterpret_cast<unsigned char*>(&eax52));
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp59) + *reinterpret_cast<int16_t*>(&edi41)) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp59) + *reinterpret_cast<int16_t*>(&edi41)) + 0x65) & *reinterpret_cast<unsigned char*>(&edx61));
                if (0) {
                    addr_80480c4_11:
                    *reinterpret_cast<unsigned char*>(&edx61) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx61) | ebx50->f75);
                    ebp59->f6f = reinterpret_cast<unsigned char>(ebp59->f6f & *reinterpret_cast<unsigned char*>(&ecx));
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebp59) + reinterpret_cast<int32_t>(esi4) * 2 + 32) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebp59) + reinterpret_cast<int32_t>(esi4) * 2 + 32) & *reinterpret_cast<unsigned char*>(&edx61));
                    goto addr_80480cc_16;
                } else {
                    edi41 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(edi41) - 1);
                    __asm__("arpl [eax+0x4e], si");
                    __asm__("outsd ");
                    if (!edi41) {
                        addr_80480cc_16:
                        (eax52 + reinterpret_cast<int32_t>(ebp59) * 2)[32] = reinterpret_cast<unsigned char>((eax52 + reinterpret_cast<int32_t>(ebp59) * 2)[32] & *reinterpret_cast<unsigned char*>(&edx61));
                        esi4 = reinterpret_cast<struct s1*>(&esi4->f1);
                        if (!0) {
                            __asm__("popad ");
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax52) + 1) = 0xff;
                            *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                            *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                            *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                            *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                            *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                            *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                            *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                            *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                            *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                            edx61->f0 = reinterpret_cast<unsigned char>(edx61->f0 & *reinterpret_cast<unsigned char*>(&ecx));
                            *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                            *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                            *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                            *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
                            goto addr_80480f7_19;
                        }
                    } else {
                        addr_80480ac_5:
                        __asm__("arpl [gs:eax], sp");
                        *eax52 = 0;
                        *eax52 = 0;
                        goto addr_80480b4_10;
                    }
                }
            }
        }
    }
    eax65 = g8048301;
    eax66 = (eax65 - 0x4650) / reinterpret_cast<uint32_t>(0x15180);
    g8048321 = (eax66 + 4) % 7;
    eax67 = eax66 / 0x16d;
    esi68 = eax67 + 0x7b2;
    g804831d = esi68;
    eax69 = eax67 + 2;
    ebx70 = eax66 % 0x16d - eax69 / 4;
    eax71 = esi68;
    if (!(eax69 % 4)) {
        ++ebx70;
        g8048335 = 1;
    }
    ecx72 = 12;
    do {
        __asm__("lodsw ");
        if (*reinterpret_cast<int16_t*>(&ebx70) > *reinterpret_cast<int16_t*>(&eax71)) 
            break;
        --ecx72;
    } while (ecx72);
    g8048319 = ecx72 - 1;
    *reinterpret_cast<int16_t*>(&ebx70) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx70) - *reinterpret_cast<int16_t*>(&eax71));
    g8048315 = ebx70 + 1;
    __asm__("rep lodsd ");
    g80480b6 = eax71;
    fun_80482d0();
    eax73 = g8048315;
    ecx74 = g8048321;
    ecx75 = ecx74 - (eax73 % 7 - 1);
    if (__intrinsic()) {
        ecx75 = ecx75 + 7;
    }
    ecx76 = ecx75 + 1;
    do {
        --ecx76;
    } while (ecx76);
    eax77 = g8048335;
    if (eax77 == 1) {
    }
    ecx78 = g8048319;
    __asm__("lodsw ");
    ecx79 = ecx78 + 1;
    do {
        __asm__("lodsw ");
        --ecx79;
    } while (ecx79);
    ecx80 = 0;
    do {
        fun_80482d0();
        --ecx80;
    } while (ecx80);
    __asm__("int 0x80");
    __asm__("int 0x80");
    addr_80480f7_19:
    *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
    *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
    *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
    *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
    *eax52 = reinterpret_cast<unsigned char>(*eax52 & 0xff);
    goto addr_8048101_7;
}
