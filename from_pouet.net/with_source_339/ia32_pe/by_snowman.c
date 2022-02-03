
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
    *reinterpret_cast<signed char*>(edi22 + 0x310003f) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edi23 + 0x310003f) >> *reinterpret_cast<signed char*>(&ecx));
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
    signed char[1] pad1;
    unsigned char f1;
};

struct s2 {
    unsigned char f0;
    signed char[3] pad4;
    unsigned char f4;
    signed char[8] pad13;
    void* fd;
    signed char[1820621240] pad1820621257;
    unsigned char f6c8479c9;
};

unsigned char gdec70a52;

struct s2* gd2f0d94f;

void fun_4100ee(int32_t ecx) {
    signed char* edi2;
    signed char* edi3;
    uint1_t cf4;
    signed char* edi5;
    struct s1* eax6;
    void* eax7;
    uint32_t eax8;
    struct s2* edx9;
    struct s2* v10;
    struct s2* es11;
    void* ecx12;
    int32_t ebp13;
    unsigned char ah14;
    signed char ah15;
    unsigned char* ecx16;
    struct s2* esi17;
    struct s2* eax18;
    int1_t of19;
    int1_t less20;
    uint40_t v21;
    int16_t cs22;
    struct s2* tmp32_23;
    uint1_t cf24;
    unsigned char* esi25;
    unsigned char dl26;
    int32_t eax27;
    int32_t ebx28;
    int32_t ebp29;
    int32_t ebx30;
    int32_t ebx31;
    signed char bh32;

    *edi2 = reinterpret_cast<signed char>(*edi3 >> *reinterpret_cast<unsigned char*>(&ecx));
    __asm__("pushad ");
    __asm__("sti ");
    __asm__("fimul dword [ecx-0x5f]");
    __asm__("fmul st0, st1");
    cf4 = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("int1 ");
    __asm__("int1 ");
    if (!reinterpret_cast<uint1_t>(cf4 | reinterpret_cast<uint1_t>(*edi5 == 0))) {
        eax6 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(eax7) - (0x1b69d7cb + reinterpret_cast<uint1_t>(eax8 < 0x1b69d7cb + cf4)));
    } else {
        __asm__("fcom dword [ecx]");
        edx9 = reinterpret_cast<struct s2*>(__return_address());
        __asm__("iretd ");
        v10 = es11;
        ecx12 = reinterpret_cast<void*>(ecx + *reinterpret_cast<int32_t*>(ebp13 + 0x61c9e1f0) + reinterpret_cast<uint1_t>(ah14 < *reinterpret_cast<unsigned char*>(&ecx)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax6) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ah15 - *reinterpret_cast<unsigned char*>(&ecx)) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx9) + 1));
        __asm__("out 0xeb, eax");
        *reinterpret_cast<signed char*>(&ecx12) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ecx12) - 1);
        ecx16 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx12) - 1);
        if (!(reinterpret_cast<uint1_t>(!!ecx16) & reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&ecx12) == 0))) 
            goto addr_410120_5;
    }
    gdec70a52 = *reinterpret_cast<unsigned char*>(&eax6);
    __asm__("aad 0x29");
    addr_410120_5:
    __asm__("fistp word [edi]");
    esi17 = v10;
    eax18 = reinterpret_cast<struct s2*>(&eax6->f1);
    __asm__("fdivr st1, st0");
    of19 = __intrinsic();
    __asm__("fidiv word [ebx+0x17]");
    do {
        *reinterpret_cast<signed char*>(reinterpret_cast<uint16_t>(eax18) + 0xffffffe1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint16_t>(eax18) + 0xffffffe1) >> 1);
        less20 = __undefined() != of19;
        --ecx16;
        if (!ecx16) {
            __asm__("sti ");
            less20 = reinterpret_cast<int16_t>(edx9) < reinterpret_cast<int16_t>(reinterpret_cast<int32_t>(esi17->fd) + __intrinsic());
            edx9 = reinterpret_cast<struct s2*>(reinterpret_cast<uint16_t>(edx9) - (reinterpret_cast<int32_t>(esi17->fd) + reinterpret_cast<uint1_t>(reinterpret_cast<uint16_t>(edx9) < reinterpret_cast<uint16_t>(reinterpret_cast<int32_t>(esi17->fd) + __intrinsic()))));
        }
        *reinterpret_cast<int16_t*>(&v21) = cs22;
        __asm__("outsb ");
        __asm__("aam 0x40");
        __asm__("lds eax, [esi]");
        *reinterpret_cast<unsigned char*>(&edx9) = 0xaf;
        esi17 = esi17;
        eax18 = eax18;
        if (!less20) 
            break;
        tmp32_23 = esi17;
        esi17 = eax18;
        eax18 = tmp32_23;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(eax18) + 0x6c8479c9) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx9) + 1);
        of19 = __intrinsic();
    } while (!__intrinsic());
    goto addr_41014e_14;
    addr_41014f_15:
    gd2f0d94f = eax18;
    __asm__("out dx, al");
    cf24 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&esi17->f0) < gdec70a52);
    esi25 = &esi17->f4;
    dl26 = reinterpret_cast<unsigned char>(0xaf - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(esi25 - 66) + reinterpret_cast<uint1_t>(0xaf < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(esi25 - 66) + cf24))));
    __asm__("aam 0xc8");
    eax27 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v21) + 1);
    *esi25 = reinterpret_cast<unsigned char>(*esi25 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax27) + reinterpret_cast<uint1_t>(*esi25 < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax27) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(dl26 - 34))) < dl26)))));
    *reinterpret_cast<signed char*>(ecx16 - 1) = 5;
    *reinterpret_cast<unsigned char*>(ebx28 + 0x5bbe3850) = 0;
    *ecx16 = reinterpret_cast<unsigned char>(*ecx16 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx16) + reinterpret_cast<uint1_t>(*ecx16 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ecx16))))));
    *reinterpret_cast<int32_t*>(ebp29 + 0x216ec8c2) = 0xfd90bdfb;
    __asm__("cli ");
    *reinterpret_cast<signed char*>(ebx30 - 0x4724c881) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx31 - 0x4724c881) - bh32);
    addr_41014e_14:
    goto addr_41014f_15;
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

struct s3 {
    signed char[32] pad32;
    int32_t f20;
};

struct s4 {
    signed char[32] pad32;
    int32_t f20;
};

struct s5 {
    signed char[88] pad88;
    int32_t f58;
};

void fun_410191(void* ecx) {
    struct s3* ebx2;
    struct s4* ebx3;
    int32_t edi4;
    struct s5* ecx5;
    int32_t* esi6;
    int32_t* edi7;
    int32_t eax8;
    int32_t ebp9;
    int32_t eax10;

    ebx2->f20 = ebx3->f20 + edi4;
    __asm__("fdivr dword [ecx+0xee646c58]");
    *reinterpret_cast<int32_t*>(__return_address()) = *reinterpret_cast<int32_t*>(__return_address()) >> *reinterpret_cast<signed char*>(&ecx);
    __asm__("retf 0xeb44");
    __asm__("wait ");
    if (__undefined()) 
        goto 0x410162;
    ecx5 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(ecx) - 1);
    if (!ecx5) {
        *reinterpret_cast<int32_t*>(__return_address()) = *esi6;
        edi7 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 4);
        eax8 = ebp9;
        *reinterpret_cast<signed char*>(&eax8) = 0x7c;
        eax10 = eax8 / ecx5->f58;
        while (1) {
            *reinterpret_cast<signed char*>(&eax10) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax10) - 39);
            ++eax10;
            __asm__("lodsd ");
            __asm__("out 0xab, al");
            *edi7 = eax10;
            ++edi7;
        }
    }
}

void fun_4101cf() {
    int32_t ecx1;
    int32_t edx2;
    int32_t edx3;
    unsigned char al4;
    unsigned char* edi5;
    unsigned char* edi6;

    ecx1 = reinterpret_cast<int32_t>(__return_address());
    __asm__("out dx, eax");
    *reinterpret_cast<unsigned char*>(edx2 - 0x30d97966) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx3 - 0x30d97966) ^ *reinterpret_cast<unsigned char*>(&ecx1));
    __asm__("into ");
    if (reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(al4 & 1) + 0xd6) < reinterpret_cast<signed char>(0) != __intrinsic()) {
        *edi5 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*edi6));
        __asm__("retf ");
        __asm__("int 0x9e");
        __asm__("sti ");
    }
}

struct s6 {
    signed char[124] pad124;
    uint32_t f7c;
};

signed char* fun_63025b06();

struct s7 {
    signed char[32] pad32;
    signed char f20;
};

struct s8 {
    signed char[32] pad32;
    signed char f20;
};

void fun_4100a3(struct s6* ecx) {
    uint1_t cf2;
    uint32_t ebp3;
    int32_t edi4;
    int32_t ebp5;
    int32_t ebp6;
    signed char bh7;
    int32_t ebp8;
    signed char bh9;
    signed char* eax10;
    uint32_t edx11;
    signed char bl12;
    struct s7* edx13;
    struct s8* edx14;

    __asm__("insd ");
    cf2 = reinterpret_cast<uint1_t>(ebp3 < *reinterpret_cast<uint32_t*>(edi4 - 45));
    *reinterpret_cast<unsigned char*>(ebp5 + 0x60652281) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(ebp6 + 0x60652281) - reinterpret_cast<unsigned char>(bh7 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(ebp8 + 0x60652281) < reinterpret_cast<unsigned char>(bh9 + cf2))));
    eax10 = fun_63025b06();
    ecx->f7c = ecx->f7c & edx11;
    if (ecx) 
        goto 0x410100;
    __asm__("insd ");
    __asm__("insd ");
    *eax10 = bl12;
    edx13->f20 = reinterpret_cast<signed char>(edx14->f20 - *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
}
