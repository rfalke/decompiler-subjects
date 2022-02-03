
void fun_8048083(uint32_t a1);

void fun_80480a5(uint32_t a1, uint32_t a2) {
    int32_t eax3;
    int32_t ebp4;
    signed char dl5;
    uint32_t edx6;
    uint32_t eax7;
    signed char* edi8;

    *reinterpret_cast<signed char*>(eax3 + ebp4 + 44) = dl5;
    fun_8048083(edx6);
    eax7 = edx6;
    __asm__("xlatb ");
    *edi8 = *reinterpret_cast<signed char*>(&eax7);
    return;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t fun_80480ba(uint32_t a1) {
    int32_t* edi2;
    struct s0* edi3;

    *edi2 = 0x34325b1b;
    edi3->f4 = 0xf48303b;
    __asm__("int 0x80");
    return 4;
}

struct s1 {
    int32_t f0;
    int32_t f4;
};

unsigned char g804b775;

unsigned char fun_804804c(unsigned char* ecx, uint32_t a2) {
    struct s1* edi3;
    int32_t ebp4;
    unsigned char al5;

    *ecx = 0;
    __asm__("pushad ");
    __asm__("bts [ecx], ebx");
    edi3 = reinterpret_cast<struct s1*>(ebp4 - 36);
    edi3->f0 = 0;
    edi3->f4 = 0;
    __asm__("int 0x80");
    __asm__("popad ");
    if (!__intrinsic() && static_cast<int1_t>(!0)) {
        g804b775 = 0x71;
    }
    al5 = g804b775;
    return al5;
}

struct s2 {
    signed char[4] pad4;
    uint32_t f4;
};

void fun_8048083(uint32_t a1) {
    uint16_t dx2;
    int16_t ax3;
    int32_t eax4;
    int16_t ax5;
    uint32_t eax6;
    uint32_t* edi7;
    int32_t eax8;
    uint32_t eax9;
    struct s2* edi10;

    dx2 = reinterpret_cast<uint16_t>(ax3 % reinterpret_cast<uint16_t>(78));
    *reinterpret_cast<uint16_t*>(&eax4) = reinterpret_cast<uint16_t>(ax5 / reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&dx2))));
    eax6 = reinterpret_cast<uint32_t>(eax4 + 1);
    __asm__("aam 0xa");
    *edi7 = (eax6 >> 24 | eax6 >> 8 & 0xff00 | eax6 << 8 & 0xff0000 | eax6 << 24) + 0x30305b1b;
    eax8 = eax4;
    *reinterpret_cast<signed char*>(&eax8) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax8) + 1);
    eax9 = reinterpret_cast<uint32_t>(eax8 + 1);
    __asm__("aam 0xa");
    edi10->f4 = ((eax9 >> 24 | eax9 >> 8 & 0xff00 | eax9 << 8 & 0xff0000 | eax9 << 24) >> 8) + 0x4830303b;
    return;
}

void fun_8048000(int32_t* ecx) {
    int1_t less_or_equal2;
    int32_t eax3;
    int32_t* ebx4;
    int32_t* ebx5;
    int32_t eax6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    void** eax19;
    signed char al20;
    signed char* eax21;
    void** eax22;
    void* dl23;

    if (less_or_equal2) {
        *ecx = *ecx + eax3;
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(*eax19));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<int32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        __asm__("fiadd dword [eax+0x2c0804]");
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<int32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    }
    *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<signed char>(dl23));
    *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
}

void fun_80484e9(int32_t a1) {
    __asm__("fist word [esi+esi*2+0x15]");
    __asm__("fisubr dword [eax-0x28]");
    __asm__("xlatb ");
    goto a1;
}

unsigned char* fun_fb9f0a67(int32_t a1);

void fun_8048522(int32_t ecx) {
    unsigned char* eax2;
    int16_t ax3;
    int32_t ebp4;
    int32_t eax5;
    int32_t ecx6;
    int32_t eax7;
    int32_t ebx8;
    int32_t ebp9;
    void* esp10;
    int32_t ebx11;
    void** esi12;
    void** esi13;
    void** tmp32_14;
    unsigned char* eax15;
    signed char* edi16;
    uint1_t zf17;

    *reinterpret_cast<uint16_t*>(&eax2) = reinterpret_cast<uint16_t>(ax3 / reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(ebp4 - 42))));
    *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax2) ^ 0xc6);
    *eax2 = reinterpret_cast<unsigned char>(*eax2 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax2) + 1));
    *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax2) + 78);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax5) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax2) + 1) | 0xa4);
    ecx6 = ecx - 1;
    if (!(reinterpret_cast<uint1_t>(!!ecx6) & 1)) {
    }
    eax7 = ebx8;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + ebp9) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax7) + 1);
    __asm__("ror dword [esp+edx*2], cl");
    esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 1 + 4);
    __asm__("out 0x34, eax");
    __asm__("in eax, dx");
    ebx11 = *reinterpret_cast<int32_t*>(eax5 + 1 - 13) * 0xbdf40d5d;
    __asm__("sti ");
    while (esi12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esi13) - 1), tmp32_14 = *reinterpret_cast<void***>(esi12), *reinterpret_cast<void***>(esi12) = esi12, esi13 = tmp32_14, eax15 = fun_fb9f0a67(0x342b22c2), ++edi16, !ecx6) {
        esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) - 4 - 4 + 4 - 1 - 2 - 4);
        if (1) 
            goto addr_80485d9_6;
    }
    addr_80485d9_6:
    *eax15 = reinterpret_cast<unsigned char>(*eax15 + *reinterpret_cast<signed char*>(&eax15));
    *edi16 = reinterpret_cast<signed char>(*edi16 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx11) + 1));
    *eax15 = reinterpret_cast<unsigned char>(*eax15 + *reinterpret_cast<signed char*>(&eax15));
    __asm__("pushad ");
    *eax15 = reinterpret_cast<unsigned char>(*eax15 ^ reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(esp10) - 1));
    zf17 = reinterpret_cast<uint1_t>(*eax15 == 0);
    if (!__intrinsic()) {
        __asm__("insd ");
        if (!__intrinsic()) {
            __asm__("insb ");
            if (!zf17) {
                if (!zf17) {
                    if (zf17) {
                        __asm__("outsb ");
                    }
                }
            }
        }
    }
}

void fun_fb9f0a25();

void fun_804853e() {
    int32_t* esi1;
    int32_t esi2;

    __asm__("aam 0x1c");
    __asm__("int 0xd0");
    *esi1 = esi2;
    fun_fb9f0a25();
    __asm__("out 0x64, eax");
}

void fun_80485a7() {
    __asm__("aam 0x34");
}

struct s3 {
    signed char[1] pad1;
    int32_t f1;
};

void fun_80485ab(int32_t ecx) {
    signed char* edi2;
    signed char ah3;
    uint32_t* eax4;
    signed char al5;
    int32_t* edx6;
    struct s3* edx7;
    uint16_t ds8;

    *edi2 = ah3;
    *reinterpret_cast<signed char*>(&eax4) = reinterpret_cast<signed char>(al5 + 78);
    edx6 = &edx7->f1;
    *eax4 = *eax4 >> *reinterpret_cast<signed char*>(&ecx);
    __asm__("xlatb ");
    __asm__("aam 0x35");
    *edx6 = *edx6 >> *reinterpret_cast<signed char*>(&ecx);
    __asm__("outsb ");
    __asm__("int 0xd0");
    __asm__("aam 0x38");
    __asm__("int 0xe8");
    __asm__("ror eax, cl");
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax4) - (0x635fa0da + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax4) < 0x635fa0da + __intrinsic())) - 0x37d4dd3e) = ds8;
}

uint32_t g8048604;

int32_t g804862c;

int32_t g8048620;

int32_t g8048628;

signed char g804866c;

struct s4 {
    signed char f0;
    signed char f1;
};

struct s5 {
    signed char f0;
    signed char f1;
};

struct s6 {
    signed char f0;
    signed char f1;
};

struct s8 {
    struct s8* f0;
    struct s8* f1;
    signed char[2] pad4;
    int32_t f4;
    signed char[41] pad49;
    unsigned char f31;
    signed char[28] pad78;
    unsigned char f4e;
    signed char[1915816570] pad1915816649;
    unsigned char f72310ac9;
};

struct s7 {
    signed char f0;
    struct s8* f1;
};

int32_t g8049635;

signed char g8048a3b;

int32_t g8048650;

unsigned char g8048644;

uint32_t g8048668;

int32_t g8048654;

uint32_t g804865c;

int32_t g8048658;

struct s9 {
    int32_t f0;
    signed char f4;
};

struct s10 {
    signed char f0;
    struct s8* f1;
    signed char[2] pad4;
    struct s8* f4;
};

struct s11 {
    signed char[1] pad1;
    struct s8* f1;
};

uint32_t g8048648;

uint32_t g8048640;

struct s12 {
    struct s8* f0;
    struct s8* f1;
    signed char[2] pad4;
    signed char f4;
};

struct s13 {
    signed char f0;
    int16_t f1;
};

struct s14 {
    int16_t f0;
    struct s8* f2;
};

signed char g804864c;

struct s15 {
    struct s8* f0;
    struct s8* f1;
};

uint32_t g8048660;

struct s8* fun_ffd8ba05();

unsigned char g5422;

void fun_80480da(uint32_t a1) {
    uint32_t v2;
    uint32_t eflags3;
    uint32_t* ebp4;
    uint32_t eax5;
    struct s4* edi6;
    int32_t ecx7;
    void* esp8;
    signed char* edi9;
    struct s5* edi10;
    struct s6* edi11;
    struct s7* esi12;
    signed char* edi13;
    struct s8* esi14;
    struct s8* edi15;
    void* esp16;
    unsigned char al17;
    uint32_t eax18;
    int32_t edx19;
    int1_t zf20;
    unsigned char tmp8_21;
    uint1_t cf22;
    int32_t esi23;
    int1_t sf24;
    void* esi25;
    void* tmp32_26;
    uint1_t cf27;
    void* esi28;
    void* tmp32_29;
    int32_t eax30;
    uint32_t eax31;
    uint32_t eax32;
    struct s9* edi33;
    int32_t eax34;
    struct s10* edi35;
    struct s11* esi36;
    int32_t ecx37;
    uint32_t ecx38;
    uint32_t tmp32_39;
    uint32_t tmp32_40;
    uint32_t eax41;
    struct s8* edx42;
    uint32_t v43;
    struct s12* edi44;
    struct s8* eax45;
    struct s13* edi46;
    uint32_t eax47;
    struct s14* edi48;
    int1_t zf49;
    int1_t zf50;
    uint32_t ecx51;
    int1_t zf52;
    struct s12* edi53;
    struct s15* edi54;
    uint32_t ebx55;
    void* ecx56;
    unsigned char dl57;
    uint32_t eax58;
    struct s9* edi59;
    int32_t eax60;
    signed char tmp8_61;
    struct s10* edi62;
    unsigned char dl63;
    unsigned char dh64;
    int32_t eax65;
    unsigned char dl66;
    unsigned char al67;
    unsigned char al68;
    struct s9* edi69;
    int32_t eax70;
    struct s10* edi71;
    int1_t zf72;
    uint32_t v73;
    int32_t eax74;
    uint32_t eax75;
    int1_t below_or_equal76;
    struct s8* edx77;
    struct s8* eax78;
    uint32_t ecx79;
    int32_t ebx80;
    int32_t v81;
    uint1_t less_or_equal82;
    struct s8* tmp32_83;
    int1_t zf84;
    void* edx85;
    struct s8* tmp32_86;

    v2 = reinterpret_cast<uint32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags3) + 1) = 0;
    ebp4 = reinterpret_cast<uint32_t*>(0x8048640);
    __asm__("int 0x80");
    eax5 = g8048604;
    g8048604 = eax5 & 0xfffffff5;
    __asm__("int 0x80");
    g8048604 = eax5;
    g804862c = 0x80480d9;
    __asm__("int 0x80");
    g8048620 = 0x30d40;
    g8048628 = 0x30d40;
    __asm__("int 0x80");
    g804866c = 6;
    edi6 = reinterpret_cast<struct s4*>(0x804866d);
    ecx7 = 76;
    esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4 - 4 + 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4);
    while (ecx7) {
        --ecx7;
        edi6->f0 = 10;
        edi6 = reinterpret_cast<struct s4*>(&edi6->f1);
    }
    edi6->f0 = 12;
    edi9 = &edi6->f1;
    *edi9 = 5;
    edi10 = reinterpret_cast<struct s5*>(edi9 + 1 + 76);
    edi10->f0 = 5;
    edi11 = reinterpret_cast<struct s6*>(&edi10->f1);
    esi12 = reinterpret_cast<struct s7*>(edi9 + 1 + 1);
    *reinterpret_cast<signed char*>(&ecx7) = 0x66;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx7) + 1) = 6;
    while (ecx7) {
        --ecx7;
        edi11->f0 = esi12->f0;
        edi11 = reinterpret_cast<struct s6*>(&edi11->f1);
        esi12 = reinterpret_cast<struct s7*>(&esi12->f1);
    }
    edi11->f0 = 3;
    edi13 = &edi11->f1;
    esi14 = reinterpret_cast<struct s8*>(&esi12->f1);
    *reinterpret_cast<signed char*>(&ecx7) = 76;
    while (ecx7) {
        --ecx7;
        *edi13 = 10;
        ++edi13;
        esi14 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esi14) + 1);
    }
    *edi13 = 9;
    edi15 = reinterpret_cast<struct s8*>(0x8048dbc);
    g8049635 = 0x3cf;
    g8048a3b = 10;
    g8048650 = 0x3cf;
    esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 + 4);
    __asm__("int 0x80");
    al17 = 8;
    if (!__intrinsic()) {
        al17 = 2;
    }
    g8048644 = al17;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g8048668) + 1) = 12;
    while (1) {
        *reinterpret_cast<unsigned char*>(&eax18) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g8048668) + 1);
        if (!*reinterpret_cast<unsigned char*>(&eax18)) {
            *reinterpret_cast<unsigned char*>(&eax18) = fun_804804c(0x8048668, v2);
            esp16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp16) - 4 + 4);
            if (*reinterpret_cast<unsigned char*>(&eax18) == 27 && (((*reinterpret_cast<unsigned char*>(&eax18) = fun_804804c(0x8048669, v2), esp16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp16) - 4 + 4), *reinterpret_cast<unsigned char*>(&eax18) == 91) || *reinterpret_cast<unsigned char*>(&eax18) == 79) && ((*reinterpret_cast<unsigned char*>(&eax18) = fun_804804c(0x804866a, v2), esp16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp16) - 4 + 4), *reinterpret_cast<unsigned char*>(&eax18) == 67) || *reinterpret_cast<unsigned char*>(&eax18) == 68))) {
                eax18 = *reinterpret_cast<unsigned char*>(&eax18) + 42;
                g8048668 = eax18;
            }
        } else {
            edx19 = 0;
            zf20 = 0 == *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g8048668) + 2);
            if (!zf20) {
                tmp8_21 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g8048668) + 2);
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g8048668) + 2) = 0;
                *reinterpret_cast<unsigned char*>(&edx19) = tmp8_21;
            }
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g8048668) + 1) = *reinterpret_cast<unsigned char*>(&edx19);
            *reinterpret_cast<unsigned char*>(&g8048668) = *reinterpret_cast<unsigned char*>(&eax18);
        }
        if (*reinterpret_cast<unsigned char*>(&eax18) == 0x71) 
            goto addr_804843d_35;
        cf22 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax18) < 12);
        if (*reinterpret_cast<unsigned char*>(&eax18) != 12) {
            esi23 = g8048654;
            --g804865c;
            sf24 = reinterpret_cast<int32_t>(g804865c) < reinterpret_cast<int32_t>(0);
            if (sf24) {
                ++g804865c;
                fun_80480a5(v2, a1);
                esp16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp16) - 4 + 4);
                *reinterpret_cast<signed char*>(&g8048658) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&g8048658) + 1);
            }
            esi25 = *reinterpret_cast<void**>(esi23 * 4 + 0x8049635);
            __asm__("rcr eax, 1");
            if (cf22) {
                cf22 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(esi25) < 78);
                esi25 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi25) - 78);
            }
            __asm__("rcr eax, 1");
            tmp32_26 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi25) + cf22);
            cf27 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_26) < reinterpret_cast<uint32_t>(esi25));
            esi28 = tmp32_26;
            __asm__("rcr eax, 1");
            if (cf27) {
                tmp32_29 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi28) + 78);
                cf27 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_29) < reinterpret_cast<uint32_t>(esi28));
                esi28 = tmp32_29;
            }
            __asm__("rcr eax, 1");
            esi14 = reinterpret_cast<struct s8*>(reinterpret_cast<uint32_t>(esi28) - reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(esi28) < static_cast<uint32_t>(cf27)));
            eax30 = g8048650;
            eax31 = eax30 - reinterpret_cast<unsigned char>(esi14);
            if (reinterpret_cast<int32_t>(eax31) < reinterpret_cast<int32_t>(0)) {
                eax31 = -eax31;
            }
            eax32 = eax31 - 1;
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax32) < reinterpret_cast<int32_t>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(eax32 == 0))) 
                goto addr_804825a_46;
        } else {
            *reinterpret_cast<struct s8**>(edi15) = reinterpret_cast<struct s8*>(0x1b485b1b);
            edi33 = reinterpret_cast<struct s9*>(reinterpret_cast<unsigned char>(edi15) + 4);
            eax34 = 0xe0e4a5b;
            edi33->f0 = 0xe0e4a5b;
            edi35 = reinterpret_cast<struct s10*>(&edi33->f4);
            esi36 = reinterpret_cast<struct s11*>(0x804866c);
            ecx37 = 24;
            esp16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp16) - 4 + 4);
            while (1) {
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx37) + 1) = 78;
                do {
                    __asm__("lodsb ");
                    __asm__("xlatb ");
                    edi35->f0 = *reinterpret_cast<signed char*>(&eax34);
                    edi35 = reinterpret_cast<struct s10*>(&edi35->f1);
                    esi36 = reinterpret_cast<struct s11*>(&esi36->f1);
                    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx37) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx37) + 1) - 1);
                } while (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx37) + 1));
                --ecx37;
                if (!ecx37) 
                    break;
                *reinterpret_cast<signed char*>(&eax34) = 10;
                edi35->f0 = 10;
                edi35 = reinterpret_cast<struct s10*>(&edi35->f1);
                esi36 = reinterpret_cast<struct s11*>(&esi36->f1);
            }
            edi35->f0 = 15;
            edi15 = reinterpret_cast<struct s8*>(&edi35->f1);
            esi14 = reinterpret_cast<struct s8*>(&esi36->f1);
            goto addr_8048296_68;
        }
        ecx38 = g8048648;
        tmp32_39 = g804865c + ecx38;
        g804865c = tmp32_39;
        g804865c = g804865c << 1;
        tmp32_40 = g8048640 + ecx38;
        g8048640 = tmp32_40;
        addr_8048296_68:
        eax41 = g8048640;
        edx42 = reinterpret_cast<struct s8*>(0x373b3a5b);
        do {
            *reinterpret_cast<uint16_t*>(&edx42) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax41) % 10);
            *reinterpret_cast<uint16_t*>(&eax41) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax41) / 10);
            v43 = eax41;
            *reinterpret_cast<struct s8**>(&eax41) = reinterpret_cast<struct s8*>(27);
            *reinterpret_cast<struct s8**>(edi15) = reinterpret_cast<struct s8*>(27);
            edi44 = reinterpret_cast<struct s12*>(reinterpret_cast<unsigned char>(edi15) + 1);
            eax45 = edx42;
            *reinterpret_cast<signed char*>(&eax45 + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax45 + 1) - 1);
            edi44->f0 = eax45;
            edi46 = reinterpret_cast<struct s13*>(&edi44->f4);
            edx42 = eax45;
            eax47 = eax41;
            *reinterpret_cast<signed char*>(&eax47) = 57;
            edi46->f0 = 57;
            edi48 = reinterpret_cast<struct s14*>(&edi46->f1);
            edi48->f0 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax47) + 0x300f);
            edi15 = reinterpret_cast<struct s8*>(&edi48->f2);
            esi14 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esi14) + 1 + 4 + 1 + 2);
            eax41 = v43;
            esp16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp16) - 4 + 4);
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax41) + 1) = 0;
        } while (eax41);
        goto addr_80482bb_83;
        addr_804825a_46:
        g804864c = reinterpret_cast<signed char>(g804864c - 1);
        zf49 = g804864c == 0;
        if (!zf49) {
            addr_8048285_84:
        } else {
            *reinterpret_cast<signed char*>(&g8048648) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&g8048648) - 1);
            zf50 = *reinterpret_cast<signed char*>(&g8048648) == 0;
            if (zf50) {
                addr_80482bb_83:
                ecx51 = g8048648;
                zf52 = *reinterpret_cast<unsigned char*>(&g8048668) == 12;
                if (!zf52) {
                    fun_8048083(v2);
                    esp16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp16) - 4 + 4);
                    *reinterpret_cast<struct s8**>(edi15) = reinterpret_cast<struct s8*>(32);
                    edi53 = reinterpret_cast<struct s12*>(reinterpret_cast<unsigned char>(edi15) + 1);
                    edi53->f0 = reinterpret_cast<struct s8*>(32);
                    edi54 = reinterpret_cast<struct s15*>(&edi53->f1);
                    edi54->f0 = reinterpret_cast<struct s8*>(32);
                    edi15 = reinterpret_cast<struct s8*>(&edi54->f1);
                    esi14 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esi14) + 1 + 1 + 1);
                    *reinterpret_cast<unsigned char*>(0x8048640 + reinterpret_cast<unsigned char>(esi14) + 44) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(0x8048640 + reinterpret_cast<unsigned char>(esi14) + 44) ^ 32);
                    ebx55 = 0;
                    ecx56 = reinterpret_cast<void*>(0x702);
                    do {
                        *reinterpret_cast<void**>(ebx55 * 4 + 0x8049a35) = ecx56;
                        ebx55 = ebx55 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(0x8048640 + reinterpret_cast<int32_t>(ecx56) + 42) < 0x100);
                        ecx56 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx56) - 1);
                    } while (ecx56);
                    *reinterpret_cast<unsigned char*>(0x8048640 + reinterpret_cast<unsigned char>(esi14) + 44) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(0x8048640 + reinterpret_cast<unsigned char>(esi14) + 44) ^ 32);
                    dl57 = 0x65;
                    if (!ebx55) 
                        goto addr_8048414_98;
                    __asm__("fld dword [0x80485e3]");
                    __asm__("fimul dword [esp]");
                    eax58 = g8048660;
                    g8048660 = eax58 * 0x41c64e6d + 0x3039 << 1 >> 1;
                    __asm__("fimul dword [ebp+0x20]");
                    __asm__("fsub dword [0x80485df]");
                    __asm__("fistp dword [esp]");
                    esp16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp16) - 4 + 4);
                    __asm__("cdq ");
                    *reinterpret_cast<signed char*>(&ecx56) = 7;
                    g8048650 = *reinterpret_cast<int32_t*>(ebx55 / reinterpret_cast<uint32_t>(ecx56) * 4 + 0x8049a35);
                    ecx51 = ebx55 % reinterpret_cast<uint32_t>(ecx56) + 3;
                    *reinterpret_cast<signed char*>(&g8048648) = *reinterpret_cast<signed char*>(&ecx51);
                    g804864c = 42;
                    goto addr_804834a_100;
                }
            } else {
                g804864c = 42;
                fun_8048083(v2);
                esp16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp16) - 4 + 4);
                *reinterpret_cast<struct s8**>(edi15) = reinterpret_cast<struct s8*>(0x6d375b1b);
                edi59 = reinterpret_cast<struct s9*>(reinterpret_cast<unsigned char>(edi15) + 4);
                eax60 = 0x5b1b2030;
                tmp8_61 = reinterpret_cast<signed char>(48 + *reinterpret_cast<signed char*>(&g8048648));
                *reinterpret_cast<signed char*>(&eax60) = tmp8_61;
                edi59->f0 = eax60;
                edi62 = reinterpret_cast<struct s10*>(&edi59->f4);
                edi62->f0 = reinterpret_cast<signed char>(0xf6d3732);
                edi15 = reinterpret_cast<struct s8*>(&edi62->f4);
                esi14 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esi14) + 4 + 4 + 4);
                goto addr_8048285_84;
            }
        }
        *reinterpret_cast<struct s8**>(edi15) = reinterpret_cast<struct s8*>(14);
        edi15 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(edi15) + 1);
        esi14 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esi14) + 1);
        dl63 = g8048644;
        dh64 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(dl63 << 4) | dl63) >> 2) & 15);
        if (*reinterpret_cast<unsigned char*>(0x8048640 + reinterpret_cast<unsigned char>(esi14) + 44)) 
            break;
        *reinterpret_cast<signed char*>(&g8048654) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&g8048654) + 1);
        eax65 = g8048654;
        *reinterpret_cast<struct s8**>(eax65 * 4 + 0x8049635) = esi14;
        dl66 = reinterpret_cast<unsigned char>(dl63 | reinterpret_cast<unsigned char>(dl63 << 4));
        al67 = *reinterpret_cast<unsigned char*>(&g8048668);
        if (al67 == 52) {
            addr_80483bb_115:
            dl66 = reinterpret_cast<unsigned char>(dl66 >> 1);
            goto addr_80483bd_116;
        } else {
            if (al67 == 54) 
                goto addr_80483b8_118;
            al68 = reinterpret_cast<unsigned char>(al67 | 32);
            if (al68 == 0x6e) 
                goto addr_80483bb_115;
        }
        if (al68 != 0x6d) {
            addr_80483bd_116:
            g8048644 = reinterpret_cast<unsigned char>(dl66 & 15);
            fun_80480a5(v2, a1);
            fun_80480ba(v2);
            esp16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp16) - 4 + 4 - 4 + 4 - 4 + 4);
            __asm__("int 0x80");
            continue;
        } else {
            addr_80483b8_118:
            dl66 = reinterpret_cast<unsigned char>(dl66 >> 2);
            goto addr_80483bb_115;
        }
        addr_804834a_100:
        fun_8048083(v2);
        esp16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp16) - 4 + 4);
        *reinterpret_cast<struct s8**>(edi15) = reinterpret_cast<struct s8*>(0x6d375b1b);
        edi69 = reinterpret_cast<struct s9*>(reinterpret_cast<unsigned char>(edi15) + 4);
        eax70 = 0x1b203020;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax70) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax70) + 1) + *reinterpret_cast<signed char*>(&ecx51));
        edi69->f0 = eax70;
        edi71 = reinterpret_cast<struct s10*>(&edi69->f4);
        edi71->f0 = reinterpret_cast<signed char>(0x6d37325b);
        edi15 = reinterpret_cast<struct s8*>(&edi71->f4);
        esi14 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esi14) + 4 + 4 + 4);
        zf72 = *reinterpret_cast<unsigned char*>(&g8048668) == 12;
        if (zf72) {
            fun_80480ba(v2);
            esp16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp16) - 4 + 4);
        }
    }
    *reinterpret_cast<int1_t*>(&eflags3) = 0;
    *reinterpret_cast<int1_t*>(&eflags3) = __intrinsic();
    *reinterpret_cast<int1_t*>(&eflags3) = (*reinterpret_cast<unsigned char*>(0x8048640 + reinterpret_cast<unsigned char>(esi14) + 44) & dh64) == 0;
    *reinterpret_cast<int1_t*>(&eflags3) = reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(0x8048640 + reinterpret_cast<unsigned char>(esi14) + 44) & dh64) < reinterpret_cast<signed char>(0);
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags3) + 1) = 0;
    *reinterpret_cast<int1_t*>(&eflags3) = __undefined();
    v73 = eflags3 & 0xfcffff;
    fun_80480a5(v73, v2);
    eflags3 = v73;
    esp16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp16) - 4 - 4 + 4 + 4);
    if ((*reinterpret_cast<int1_t*>(&eflags3) || (dl57 = 0x87, eax74 = g8048658, esi14 != *reinterpret_cast<struct s8**>(eax74 * 4 + 0x8049635))) && ((eax75 = g8048640, dl57 = 51, !!eax75) && ((dl57 = 0xd1, eax75 != 100) && (dl57 = 0xac, below_or_equal76 = g804865c <= 15, below_or_equal76)))) {
        dl57 = 91;
    }
    addr_8048414_98:
    edx77 = reinterpret_cast<struct s8*>(static_cast<uint32_t>(dl57));
    eax78 = reinterpret_cast<struct s8*>(0x315b1b0f);
    *reinterpret_cast<struct s8**>(edi15) = reinterpret_cast<struct s8*>(0x315b1b0f);
    edi15 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(edi15) + 4);
    esi14 = reinterpret_cast<struct s8*>(0x8048457 + reinterpret_cast<unsigned char>(edx77) + 4);
    goto addr_8048425_135;
    addr_80484ae_136:
    __asm__("salc ");
    addr_80484b1_137:
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax78) + 0x72310ac9) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax78) + 0x72310ac9) + *reinterpret_cast<unsigned char*>(&edx77 + 1));
    while (1) {
        do {
            *reinterpret_cast<struct s8**>(edx77) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx77)) - ecx79);
            if (!__intrinsic()) 
                break;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx79) + 1) = -41;
            fun_ffd8ba05();
            --ecx79;
            ebx80 = v81;
            esp16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp16) - 4 + 4 + 4 + 4);
            __asm__("fld dword [edx+ebp]");
            *reinterpret_cast<unsigned char*>(&edx77 + 1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx77) + 78);
            less_or_equal82 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(esp16) & 0xae8b000) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(esp16) & 0xae8b000) == 0));
            *reinterpret_cast<struct s8**>(edx77) = *reinterpret_cast<struct s8**>(reinterpret_cast<int32_t>(&ebx80) + 1);
        } while (less_or_equal82);
        break;
    }
    __asm__("aaa ");
    if (less_or_equal82) 
        goto 0x8048552;
    addr_80484a6_143:
    while (1) {
        addr_804842b_144:
        *reinterpret_cast<signed char*>(&ecx79) = 4;
        tmp32_83 = edx77;
        edx77 = eax78;
        eax78 = tmp32_83;
        while (1) {
            eax78 = reinterpret_cast<struct s8*>(63 & *reinterpret_cast<unsigned char*>(&edx77));
            __asm__("xlatb ");
            while (1) {
                *reinterpret_cast<struct s8**>(edi15) = eax78;
                edi15 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(edi15) + 1);
                esi14 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esi14) + 1);
                edx77 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(edx77) >> 6);
                *reinterpret_cast<signed char*>(&ecx79) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ecx79) - 1);
                if (*reinterpret_cast<signed char*>(&ecx79)) 
                    break;
                addr_8048425_135:
                __asm__("lodsd ");
                esi14 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esi14) - 1);
                zf84 = eax78 == 0;
                while (1) {
                    if (!zf84) 
                        goto addr_804842b_144;
                    addr_804843d_35:
                    fun_80480ba(v2);
                    edx85 = reinterpret_cast<void*>(ebp4 - 18);
                    __asm__("int 0x80");
                    __asm__("int 0x80");
                    ebp4 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ebp4) + 1);
                    ecx79 = 0x5401;
                    edx77 = reinterpret_cast<struct s8*>(reinterpret_cast<int32_t>(edx85) - 1);
                    esi14 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esi14) - 1);
                    edi15 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(edi15) + 1 - 1);
                    eax78 = edi15;
                    g5422 = 0;
                    __asm__("o16 daa ");
                    esp16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp16) - 4 + 4 - 4 + 4 - 4 + 4 - 4 - 4 - 4 - 4 + 4 + 4 - 4);
                    __asm__("insd ");
                    __asm__("outsb ");
                    do {
                        __asm__("das ");
                        __asm__("outsd ");
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax78) + 49) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax78) + 49) ^ *reinterpret_cast<unsigned char*>(&edx77 + 1));
                        if (0) 
                            goto addr_80484ae_136;
                        if (1) 
                            goto addr_80484b1_137;
                        eax78 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax78) ^ 0x74);
                        eax78 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax78) ^ 0x77367675 ^ 0xdf36c7a7);
                        zf84 = eax78 == 0;
                        __asm__("fdiv dword [esi+ebx-0x29]");
                        if (__intrinsic()) 
                            goto 0x80484fd;
                        if (1) 
                            break;
                    } while (1);
                    break;
                }
                tmp32_86 = esi14;
                esi14 = eax78;
                eax78 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(tmp32_86) | 0x3aa835fa);
                if (!0) 
                    goto addr_80484a6_143;
            }
        }
    }
}

void fun_80485a2(int32_t ecx) {
    int1_t of2;

    if (of2) {
    }
}

void fun_8048501() {
    uint32_t eflags1;
    unsigned char tmp8_2;
    int32_t eax3;
    signed char dh4;
    uint1_t cf5;
    int32_t eax6;
    int32_t eax7;
    int32_t tmp32_8;
    int32_t* esi9;
    int32_t* esi10;
    int32_t esi11;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags1) + 1) = 0;
    tmp8_2 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(eax3 - 0x1a37f518) + dh4);
    cf5 = reinterpret_cast<uint1_t>(tmp8_2 < *reinterpret_cast<unsigned char*>(eax6 - 0x1a37f518));
    *reinterpret_cast<unsigned char*>(eax7 - 0x1a37f518) = tmp8_2;
    __asm__("aad 0x48");
    __asm__("fist word [esi+esi-0x23]");
    tmp32_8 = *esi9;
    *esi10 = esi11;
    *reinterpret_cast<uint1_t*>(&eflags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(tmp32_8 + 0x35370d69) < reinterpret_cast<int32_t>(__zero_stack_offset()) + cf5);
    *reinterpret_cast<uint32_t*>(tmp32_8 + 0x35370d69) = *reinterpret_cast<uint32_t*>(tmp32_8 + 0x35370d69) - (reinterpret_cast<int32_t>(__zero_stack_offset()) + *reinterpret_cast<uint1_t*>(&eflags1));
    *reinterpret_cast<int1_t*>(&eflags1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&eflags1) = *reinterpret_cast<uint32_t*>(tmp32_8 + 0x35370d69) == static_cast<uint32_t>(*reinterpret_cast<uint1_t*>(&eflags1));
    *reinterpret_cast<int1_t*>(&eflags1) = *reinterpret_cast<int32_t*>(tmp32_8 + 0x35370d69) < reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<uint1_t*>(&eflags1)));
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&eflags1) = __intrinsic();
    goto eflags1 & 0xfcffff;
}

void fun_8048520() {
}
