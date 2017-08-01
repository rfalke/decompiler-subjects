
struct s0 {
    signed char[88] pad88;
    int32_t f88;
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
    *reinterpret_cast<signed char*>(edi22 + 0x30f003f) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edi23 + 0x30f003f) >> *reinterpret_cast<signed char*>(&ecx));
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
        v36 = ebx35->f88;
        goto v36;
    }
}

struct s1 {
    signed char f0;
    unsigned char f1;
};

struct s2 {
    signed char[1] pad1;
    signed char f1;
};

struct s3 {
    unsigned char f0;
    void** f1;
};

struct s4 {
    unsigned char f0;
    void** f1;
};

struct s5 {
    signed char[1] pad1;
    unsigned char f1;
};

int32_t g39adcee;

void fun_4100b9() {
    struct s1* edi1;
    struct s2* edi2;
    signed char* esi3;
    struct s3* edi4;
    struct s4* esi5;
    struct s5* esi6;
    uint32_t eax7;
    uint32_t eax8;
    uint32_t eax9;
    void*** edi10;
    void** esi11;
    int1_t less12;
    uint16_t cs13;
    int32_t ebp14;
    int32_t ebp15;

    __asm__("int1 ");
    edi1 = reinterpret_cast<struct s1*>(&edi2->f1);
    edi1->f0 = *esi3;
    edi4 = reinterpret_cast<struct s3*>(&edi1->f1);
    esi5 = reinterpret_cast<struct s4*>(&esi6->f1);
    eax7 = eax8 ^ 0x3115fa96;
    __asm__("aam 0x40");
    *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax7) & esi5->f0);
    eax9 = eax7 - 0x4a93ae25;
    edi4->f0 = *reinterpret_cast<unsigned char*>(&eax9);
    edi10 = &edi4->f1;
    esi11 = reinterpret_cast<void**>(&esi5->f1);
    __asm__("arpl [edx-0x58], sp");
    *reinterpret_cast<unsigned char*>(&eax9) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax9) + 0xea);
    *reinterpret_cast<void***>(esi11) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi11)) | eax9);
    less12 = *reinterpret_cast<signed char*>(eax9 - 0x74) < reinterpret_cast<signed char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax9)));
    *reinterpret_cast<unsigned char*>(eax9 - 0x74) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax9 - 0x74) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax9) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(eax9 - 0x74) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax9))))));
    *reinterpret_cast<uint32_t*>(eax9 - 0x19ff805b) = cs13;
    if (!less12) {
        __asm__("aaa ");
        __asm__("rcl dword [eax], 0xa0");
        __asm__("aad 0xbf");
        *reinterpret_cast<uint32_t*>(ebp14 - 0x3801265d) = *reinterpret_cast<uint32_t*>(ebp15 - 0x3801265d) | reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 + 1 - 4 - 4 - 4 + 4 + 4 - 2);
        *edi10 = *reinterpret_cast<void***>(esi11);
    } else {
        __asm__("lodsb ");
        g39adcee = g39adcee << 1;
        *edi10 = esi11;
        __asm__("ror esp, 1");
        __asm__("fild dword [ecx+edi*8]");
    }
}

uint32_t* gfae7693;

void fun_41016e(uint32_t* ecx) {
    void* esp2;
    int32_t eflags3;
    int32_t ebx4;
    int32_t ebx5;
    signed char al6;
    unsigned char al7;
    unsigned char* eax8;
    unsigned char* eax9;
    unsigned char bh10;

    __asm__("out 0xb8, al");
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 1);
    *reinterpret_cast<uint1_t*>(&eflags3) = reinterpret_cast<uint1_t>(esp2 == 0);
    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esp2) < 0 != __intrinsic()) | *reinterpret_cast<uint1_t*>(&eflags3))) {
        if (!*reinterpret_cast<uint1_t*>(&eflags3)) {
            *reinterpret_cast<uint32_t*>(ebx4 + 0x63afb114) = *reinterpret_cast<int32_t*>(ebx5 + 0x63afb114) + 0x6b + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(al6 + 50) < al7);
        } else {
            __asm__("outsb ");
            __asm__("lds ebx, [ecx+0x9d42cd6e]");
            *eax8 = reinterpret_cast<unsigned char>(*eax9 & bh10);
            gfae7693 = ecx;
            *ecx = *ecx + 0x4e2aa675;
        }
    }
}

void fun_4101ad(int32_t a1) {
    int1_t below_or_equal2;
    int1_t below_or_equal3;
    uint32_t* esi4;
    uint32_t* edi5;
    int32_t* edi6;
    int32_t* esi7;

    if (below_or_equal2) {
        __asm__("int 0xc");
        below_or_equal3 = *esi4 <= *edi5;
        *edi6 = *esi7;
        if (below_or_equal3) 
            goto 0x41018f;
        __asm__("lodsd ");
    } else {
        __asm__("hlt ");
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

void fun_410127(int32_t ecx) {
    uint32_t tmp32_2;
    int32_t esi3;
    uint32_t esi4;
    uint1_t cf5;
    uint32_t esi6;
    uint1_t zf7;
    uint1_t less_or_equal8;
    uint32_t eax9;
    uint1_t cf10;
    uint32_t eax11;
    uint32_t eax12;
    int32_t eax13;
    signed char* edi14;

    tmp32_2 = esi3 + esi4;
    cf5 = reinterpret_cast<uint1_t>(tmp32_2 < esi6);
    zf7 = reinterpret_cast<uint1_t>(tmp32_2 == 0);
    less_or_equal8 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(tmp32_2) < reinterpret_cast<int32_t>(0) != __intrinsic()) | zf7);
    if (less_or_equal8) 
        goto 0x410194;
    if (!cf5) {
        less_or_equal8 = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax9) <= reinterpret_cast<int32_t>(0x49e1586a - cf5));
        cf10 = reinterpret_cast<uint1_t>(eax11 < 0x49e1586a - cf5);
        eax12 = eax13 - (0x49e1586a - cf10);
        zf7 = reinterpret_cast<uint1_t>(eax12 == static_cast<uint32_t>(cf10));
    }
    if (!less_or_equal8) {
        __asm__("in al, 0x64");
    }
    if (reinterpret_cast<uint1_t>(!!(ecx - 1)) & reinterpret_cast<uint1_t>(!zf7)) 
        goto 0x41017d;
    *edi14 = *reinterpret_cast<signed char*>(&eax12);
}

void fun_410166(int32_t ecx) {
    if (ecx + 1 - 1) 
        goto 0x4100ef;
}

void fun_4101b9() {
    __asm__("iretd ");
    do {
        __asm__("fadd qword [esi-0x68]");
        __asm__("fidivr dword [si+0x2]");
    } while (__undefined());
    __asm__("fisub dword [ebx+0x1267cdab]");
    if (!__undefined()) {
        __asm__("wait ");
        __asm__("out dx, eax");
        __asm__("popad ");
    }
}

signed char g5666558e;

void fun_4100a3() {
    int1_t zf1;

    if (!zf1) 
        goto 0x4100f8;
    g5666558e = reinterpret_cast<signed char>(g5666558e << 1);
    __asm__("insb ");
}

void fun_41011c(int32_t ecx) {
    int1_t less_or_equal2;

    do {
    } while (less_or_equal2);
    if (ecx) 
        goto 0x410109;
}
