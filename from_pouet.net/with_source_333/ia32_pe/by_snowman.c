
struct s0 {
    signed char[88] pad88;
    int32_t f58;
};

void fun_0(void* a1, int32_t a2, int32_t a3, void* a4, int32_t a5);

void fun_1e(void* a1, int32_t a2, int32_t a3, void* a4, int32_t a5);

void fun_410000(signed char* ecx) {
    unsigned char* edx2;
    unsigned char* edx3;
    unsigned char al4;
    signed char al5;
    signed char dl6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    int32_t* eax13;
    int32_t* eax14;
    int32_t eax15;
    signed char* edx16;
    signed char* edx17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    int32_t edi22;
    int32_t edi23;
    signed char* eax24;
    signed char* eax25;
    signed char al26;
    signed char* eax27;
    signed char al28;
    signed char* ebx29;
    signed char* ebx30;
    void* ebx31;
    void* ebx32;
    signed char* eax33;
    int32_t v34;
    struct s0* ebx35;
    int32_t v36;

    *edx2 = reinterpret_cast<unsigned char>(*edx3 ^ al4);
    *ecx = reinterpret_cast<signed char>(*ecx + al5);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1) + dl6);
    __asm__("insd ");
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = *eax14 + eax15;
    *edx16 = reinterpret_cast<signed char>(*edx17 + al18);
    *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
    *reinterpret_cast<signed char*>(edi22 + 0x2ca003f) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edi23 + 0x2ca003f) >> *reinterpret_cast<signed char*>(&ecx));
    *eax24 = reinterpret_cast<signed char>(*eax25 + al26);
    *reinterpret_cast<signed char*>(&eax27) = reinterpret_cast<signed char>(static_cast<int32_t>(al28));
    *eax27 = reinterpret_cast<signed char>(*eax27 + *reinterpret_cast<signed char*>(&eax27));
    *eax27 = reinterpret_cast<signed char>(*eax27 + *reinterpret_cast<signed char*>(&eax27));
    *eax27 = reinterpret_cast<signed char>(*eax27 + *reinterpret_cast<signed char*>(&eax27));
    *ebx29 = reinterpret_cast<signed char>(*ebx30 + *reinterpret_cast<signed char*>(&eax27));
    *eax27 = reinterpret_cast<signed char>(*eax27 + *reinterpret_cast<signed char*>(&eax27));
    *eax27 = reinterpret_cast<signed char>(*eax27 + reinterpret_cast<int32_t>(eax27));
    if (!(ecx - 1)) {
        ebx31 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx32) + 1);
        *reinterpret_cast<signed char*>(&eax33) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax27) + *eax27);
        *eax33 = reinterpret_cast<signed char>(*eax33 + *reinterpret_cast<signed char*>(&eax33));
        *eax33 = reinterpret_cast<signed char>(*eax33 + *reinterpret_cast<signed char*>(&eax33));
        *eax33 = reinterpret_cast<signed char>(*eax33 + *reinterpret_cast<signed char*>(&eax33));
        *eax33 = reinterpret_cast<signed char>(*eax33 + reinterpret_cast<int32_t>(eax33));
        *eax33 = reinterpret_cast<signed char>(*eax33 + *reinterpret_cast<signed char*>(&eax33));
        *eax33 = reinterpret_cast<signed char>(*eax33 + *reinterpret_cast<signed char*>(&eax33));
        v34 = reinterpret_cast<int32_t>(ebx31) + 100;
        ebx35 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(ebx31) - 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx35) + 1) = 0x68;
        fun_0(ebx31, v34, 56, ebx31, __return_address());
        fun_1e(ebx31, v34, 56, ebx31, __return_address());
        v36 = ebx35->f58;
        goto v36;
    }
}

struct s1 {
    signed char[25] pad25;
    unsigned char f19;
};

struct s2 {
    signed char[25] pad25;
    unsigned char f19;
};

struct s3 {
    signed char[25] pad25;
    signed char f19;
};

void fun_4100ab(unsigned char cl) {
    uint1_t cf2;
    struct s1* eax3;
    struct s2* eax4;
    struct s3* eax5;
    int32_t edx6;
    int32_t edx7;
    signed char bh8;
    int32_t edx9;
    signed char bh10;

    __asm__("das ");
    cf2 = reinterpret_cast<uint1_t>(eax3->f19 < cl);
    eax4->f19 = reinterpret_cast<unsigned char>(eax5->f19 - cl);
    *reinterpret_cast<unsigned char*>(edx6 + 0x44b05694) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(edx7 + 0x44b05694) - reinterpret_cast<unsigned char>(bh8 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(edx9 + 0x44b05694) < reinterpret_cast<unsigned char>(bh10 + cf2))));
    __asm__("aam 0x1a");
    __asm__("hlt ");
}

signed char* fun_145e1b9d();

signed char* fun_ccbc7469();

signed char ge6cd5f72;

int32_t g315cd434;

void fun_4100f6(void* ecx) {
    signed char* esi2;
    uint48_t v3;
    void* eax4;
    signed char al5;
    unsigned char al6;
    uint1_t cf7;
    int16_t cs8;
    signed char* edi9;
    void* edi10;
    int32_t ebp11;
    signed char* edx12;
    unsigned char tmp8_13;
    signed char tmp8_14;
    signed char* ebx15;
    int1_t zf16;
    signed char* eax17;

    __asm__("fistp qword [ebx-0x9]");
    esi2 = reinterpret_cast<signed char*>(0xb67e7b9f);
    __asm__("iretd ");
    __asm__("das ");
    __asm__("cdq ");
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v3) + 2) = 0xed3463e7;
    *reinterpret_cast<unsigned char*>(&eax4) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(al5 - 31) + 23) + reinterpret_cast<uint1_t>(al6 < 31)) & 0x8f);
    cf7 = 0;
    *reinterpret_cast<int16_t*>(&v3) = cs8;
    edi9 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi10) - 1 + 1);
    ebp11 = 0x36f9324e;
    __asm__("retf ");
    if (reinterpret_cast<int32_t>(edi9) >= 0) {
    }
    __asm__("fisttp qword [ecx+0xe935f7a4]");
    edx12 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax4) - 1);
    if (__intrinsic()) {
        ecx = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx) - 1);
        __asm__("out 0xe, eax");
        __asm__("fsub qword [eax+0x10c597bd]");
        do {
            fun_145e1b9d();
            tmp8_13 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx12 - 90) + *reinterpret_cast<signed char*>(&ecx)) + cf7);
            cf7 = reinterpret_cast<uint1_t>(tmp8_13 < *reinterpret_cast<unsigned char*>(edx12 - 90));
            *reinterpret_cast<unsigned char*>(edx12 - 90) = tmp8_13;
        } while (cf7 | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(edx12 - 90) == 0));
        goto addr_410179_9;
    }
    if (!0) {
        __asm__("fild dword [ecx-0x2a]");
        __asm__("lodsd ");
        goto *reinterpret_cast<int16_t*>(&v3);
    }
    while (1) {
        __asm__("xlatb ");
        __asm__("int 0xd8");
        do {
            __asm__("popad ");
            __asm__("in eax, dx");
            if (!__intrinsic()) 
                goto addr_4101e3_14;
            tmp8_14 = *ebx15;
            *ebx15 = 51;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx12) + 1) = tmp8_14;
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ecx) + ebp11 * 2 + 59) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx) + ebp11 * 2 + 59) - (reinterpret_cast<int32_t>(ebx15) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ecx) + ebp11 * 2 + 59) < reinterpret_cast<int32_t>(ebx15) + cf7));
            ebp11 = 0x225e8c9d;
            *ebx15 = reinterpret_cast<signed char>(*ebx15 - *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx12) + 1));
            zf16 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1) == *edx12;
            *edi9 = *esi2;
            ++esi2;
            __asm__("cli ");
            eax17 = fun_ccbc7469();
            if (!zf16) 
                goto addr_4101ed_19;
            --ebx15;
            ecx = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx) - 1);
            cf7 = reinterpret_cast<uint1_t>(!!edx12);
            edx12 = reinterpret_cast<signed char*>(-reinterpret_cast<int32_t>(edx12));
            edi9 = eax17;
        } while (!__intrinsic());
        __asm__("sti ");
        ++edx12;
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx12) < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(edx12 == 0))) 
            goto addr_4101c1_22;
        addr_410179_9:
        __asm__("aad 0x8b");
        ebx15 = reinterpret_cast<signed char*>(0x5ebbe97a);
        __asm__("cli ");
        cf7 = __intrinsic();
    }
    addr_4101e3_14:
    addr_4101ed_19:
    addr_4101c1_22:
    *edi9 = *reinterpret_cast<signed char*>(&eax17);
    __asm__("lodsb ");
    __asm__("fcomip st0, st0");
    __asm__("salc ");
    ge6cd5f72 = *reinterpret_cast<signed char*>(&eax17);
    __asm__("arpl [ebx+0x2c85765c], si");
    __asm__("out 0x38, eax");
    __asm__("lahf ");
    __asm__("insd ");
    g315cd434 = 0x225e8c9d;
    goto addr_4101e3_14;
}

void fun_41014f() {
    __asm__("aam 0x2a");
}

void fun_4101f1() {
    __asm__("in eax, 0xfa");
    if (!__intrinsic()) {
    }
}

void fun_41004e(unsigned char* ecx) {
    signed char* edx2;
    signed char* edx3;
    signed char al4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;
    int32_t eax8;
    int32_t eax9;
    int32_t eax10;
    int32_t eax11;
    signed char bl12;
    int32_t* eax13;
    int32_t* eax14;
    int32_t eax15;
    int32_t* eax16;
    int32_t* eax17;
    int32_t* eax18;
    int32_t eax19;
    unsigned char* eax20;
    signed char al21;
    int32_t eax22;
    signed char* esi23;
    uint32_t esi24;
    int32_t edx25;
    int32_t edx26;
    signed char bh27;

    *edx2 = reinterpret_cast<signed char>(*edx3 + al4);
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
    *reinterpret_cast<signed char*>(eax8 + eax9 + 0x940001) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax10 + eax11 + 0x940001) + bl12);
    *eax13 = *eax14 + eax15;
    *eax17 = *eax18 + eax19;
    *reinterpret_cast<int16_t*>(&eax20) = reinterpret_cast<int16_t>(al21 * *reinterpret_cast<signed char*>(eax22 + 0xe000d));
    *eax20 = reinterpret_cast<unsigned char>(*eax20 + *reinterpret_cast<unsigned char*>(&eax20));
    esi23 = reinterpret_cast<signed char*>(esi24 ^ *eax20);
    *eax20 = reinterpret_cast<unsigned char>(*eax20 + *reinterpret_cast<unsigned char*>(&eax20));
    edx25 = edx26 + 1;
    *eax20 = reinterpret_cast<unsigned char>(*eax20 + *reinterpret_cast<unsigned char*>(&eax20));
    *ecx = reinterpret_cast<unsigned char>(*ecx + *reinterpret_cast<unsigned char*>(&eax20));
    *eax20 = reinterpret_cast<unsigned char>(*eax20 + *reinterpret_cast<unsigned char*>(&eax20));
    *reinterpret_cast<unsigned char*>(&eax20) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax20) + *eax20);
    *ecx = reinterpret_cast<unsigned char>(*ecx + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx25) + 1));
    *eax20 = reinterpret_cast<unsigned char>(*eax20 + *reinterpret_cast<unsigned char*>(&eax20));
    *esi23 = reinterpret_cast<signed char>(*esi23 + bh27);
}

struct s4 {
    signed char f0;
    signed char[609223426] pad609223427;
    signed char f24500303;
};

struct s5 {
    signed char[1] pad1;
    int32_t f1;
};

void fun_4100c1(struct s4* ecx) {
    int32_t* eax2;
    struct s5* ebp3;
    int32_t edx4;
    int32_t edx5;
    int32_t ebx6;
    signed char tmp8_7;
    int32_t eax8;
    unsigned char* ebx9;
    signed char* ebx10;

    eax2 = &ebp3->f1;
    edx4 = edx5 + ecx->f0;
    *eax2 = ebx6;
    __asm__("ficom dword [esi-0x4f]");
    tmp8_7 = *reinterpret_cast<signed char*>(edx4 - 96);
    *reinterpret_cast<signed char*>(edx4 - 96) = *reinterpret_cast<signed char*>(&ecx);
    *reinterpret_cast<signed char*>(&ecx) = tmp8_7;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax8) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + 0x24500303);
    ecx->f0 = reinterpret_cast<signed char>(ecx->f0 + 1);
    *ebx9 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*ebx10 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax8) + 1)) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax2) < 0xaab129db));
    __asm__("les esp, [esi-0x62]");
    __asm__("iretd ");
}

void fun_410124(int32_t ecx) {
    int32_t eax2;
    unsigned char ah3;
    unsigned char bl4;

    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax2) + 1) = reinterpret_cast<unsigned char>(ah3 | bl4);
    __asm__("int1 ");
    if (ecx <= eax2) 
        goto 0x410115;
}

void fun_410140(int32_t ecx) {
    __asm__("outsb ");
    *reinterpret_cast<unsigned char*>(ecx + ecx - 0x7bda0815) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ecx + ecx - 0x7bda0815) & 44);
    __asm__("salc ");
}

void fun_4100a3() {
    int1_t zf1;

    if (!zf1) 
        goto 0x410039;
}
