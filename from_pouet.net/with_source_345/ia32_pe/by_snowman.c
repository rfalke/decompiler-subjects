
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
    *reinterpret_cast<signed char*>(edi22 + 0x32d003f) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edi23 + 0x32d003f) >> *reinterpret_cast<signed char*>(&ecx));
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

unsigned char g6ace6f33;

int32_t gc1e87342;

void** gdf77eefb;

int32_t gdf77eef7;

void fun_50c93dc5();

void fun_4100d7(int32_t ecx) {
    int32_t* esp2;
    int1_t zf3;
    unsigned char bh4;
    void* esp5;
    int32_t eax6;
    signed char* edx7;
    signed char bl8;
    int32_t ebx9;
    int32_t eax10;
    int32_t eax11;
    unsigned char al12;

    esp2 = reinterpret_cast<int32_t*>(__zero_stack_offset());
    __asm__("retf 0xc6c0");
    __asm__("les eax, [eax+0x60626204]");
    if (reinterpret_cast<uint1_t>(!!(ecx - 1)) & reinterpret_cast<uint1_t>(!zf3)) {
        while (1) {
            g6ace6f33 = reinterpret_cast<unsigned char>(g6ace6f33 & bh4);
            __asm__("ror esi, cl");
            gc1e87342 = *esp2;
            esp5 = reinterpret_cast<void*>(0xdf77eeff);
            eax6 = reinterpret_cast<int32_t>(esp2 + 1);
            __asm__("out dx, eax");
            __asm__("iretd ");
            __asm__("out dx, al");
            __asm__("pshufw mm5, mm7, 0xdf");
            *(edx7 - 0xc0e0342) = reinterpret_cast<signed char>(*(edx7 - 0xc0e0342) >> 1);
            __asm__("aam 0x3c");
            if (__undefined() == __intrinsic()) 
                break;
            addr_4100ed_6:
            __asm__("out 0x3b, al");
            __asm__("sti ");
            __asm__("rcl byte [edx+0xefe7d8b6], cl");
            __asm__("retf ");
            *reinterpret_cast<int16_t*>(&edx7) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax6) % bl8);
            esp2 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp5) + 4 - 4);
            *esp2 = ebx9;
        }
        __asm__("aaa ");
        __asm__("salc ");
        __asm__("into ");
        gdf77eefb = reinterpret_cast<void**>(0xdf77eefb);
        __asm__("out 0x51, al");
        __asm__("out dx, eax");
        __asm__("outsb ");
        gdf77eef7 = 0x410148;
        fun_50c93dc5();
    } else {
        __asm__("int1 ");
        __asm__("wrmsr ");
        *reinterpret_cast<unsigned char*>(eax10 + 0x3111918) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax11 + 0x3111918) ^ al12);
        esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 1);
        __asm__("insb ");
        goto addr_4100ed_6;
    }
}

int32_t ge5f31f5b;

int32_t fun_a37803d1();

void fun_410149() {
    uint32_t* esp1;
    uint32_t eflags2;
    int32_t ecx3;
    signed char dl4;
    int32_t eax5;
    uint32_t* edi6;
    uint32_t edi7;
    uint1_t cf8;
    uint32_t ebx9;
    int32_t ebx10;
    int1_t sf11;
    int32_t esi12;
    int32_t* esp13;
    int32_t eax14;
    uint32_t** esp15;
    uint32_t eax16;
    void* esp17;
    int1_t pf18;
    uint32_t tmp32_19;
    uint32_t eax20;
    signed char* eax21;
    signed char* eax22;
    void* tmp32_23;
    int32_t ebp24;
    int32_t ebp25;
    int32_t edx26;
    uint32_t* esp27;
    int32_t ebp28;
    int32_t ebp29;
    int32_t ebp30;
    int32_t* esp31;
    uint32_t eax32;
    void* ebp33;

    esp1 = reinterpret_cast<uint32_t*>(__zero_stack_offset());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags2) + 1) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx3) + 1) = dl4;
    __asm__("fidivr word [ebx+0x556f8a77]");
    ge5f31f5b = eax5;
    edi6 = reinterpret_cast<uint32_t*>(edi7 & *reinterpret_cast<uint32_t*>(ecx3 - 25));
    cf8 = 0;
    ebx9 = ebx10 - 1;
    sf11 = reinterpret_cast<int32_t>(ebx9) < reinterpret_cast<int32_t>(0);
    esi12 = 0xa83db4c;
    if (sf11) {
        addr_4101dc_2:
    } else {
        if (sf11) {
            while (esp13 = reinterpret_cast<int32_t*>(esp1 - 1), *esp13 = 0x4101a8, eax14 = fun_a37803d1(), esp15 = reinterpret_cast<uint32_t**>(esp13 + 1 - 1), *esp15 = edi6, eax16 = eax14 - 0x2deba0d2 + cf8, cf8 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(esp15) < reinterpret_cast<uint32_t>(esp15)), esp17 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp15) - reinterpret_cast<uint32_t>(esp15)), pf18 = __intrinsic(), !1) {
                __asm__("in eax, dx");
                __asm__("lds edi, [ecx+edi*8-0x3c]");
                tmp32_19 = ebx9;
                ebx9 = eax16;
                eax20 = tmp32_19;
                __asm__("in al, dx");
                if (__intrinsic()) 
                    goto addr_4101be_6;
                esp1 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(esp17) - 4);
                *esp1 = eax20;
            }
            goto addr_410170_9;
        } else {
            __asm__("outsd ");
            *eax21 = reinterpret_cast<signed char>(*eax22 - 83);
            tmp32_23 = *reinterpret_cast<void**>(ebp24 - 0x2f4cb5f2);
            *reinterpret_cast<void**>(ebp25 - 0x2f4cb5f2) = reinterpret_cast<void*>(esp1 + 1);
            esp17 = tmp32_23;
            esi12 = 0xa83db4d;
            goto addr_410170_9;
        }
    }
    addr_410170_9:
    __asm__("iretd ");
    __asm__("in eax, 0xc7");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx26) + 1) = 0x9a;
    esp27 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(esp17) - 4);
    *esp27 = ebx9;
    *reinterpret_cast<uint32_t*>(ebp28 - 0x532a4ac7) = *reinterpret_cast<uint32_t*>(ebp29 - 0x532a4ac7) ^ reinterpret_cast<uint32_t>(esp27);
    if (!(reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(ebp30 - 0x532a4ac7) == 0))) {
        esp31 = reinterpret_cast<int32_t*>(esp27 - 1);
        *esp31 = esi12;
        *(esp31 - 1) = edx26;
    }
    addr_4101be_6:
    do {
        __asm__("in al, dx");
    } while (!pf18);
    *reinterpret_cast<unsigned char*>(&eax20) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax20) + 69) + 1);
    *reinterpret_cast<int1_t*>(&eflags2) = eax20 < 0x2b4516e3;
    eax32 = eax20 - 0x2b4516e3;
    *reinterpret_cast<int1_t*>(&eflags2) = __intrinsic();
    *reinterpret_cast<int1_t*>(&eflags2) = eax32 == 0;
    *reinterpret_cast<int1_t*>(&eflags2) = reinterpret_cast<int32_t>(eax32) < reinterpret_cast<int32_t>(0);
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&eflags2) = __intrinsic();
    *edi6 = eax32;
    __asm__("popad ");
    __asm__("aaa ");
    __asm__("lodsd ");
    __asm__("lodsd ");
    __asm__("fsub st0, st5");
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ebp33) + 4 - 4) = eflags2 & 0xfcffff;
    __asm__("lds ebp, [edi+edx*8+0xc34b502]");
    __asm__("lds ebx, [ecx+ecx*4+0x4ad6afb9]");
    goto addr_4101dc_2;
}

void fun_41018e(int32_t ecx) {
    int1_t zf2;

    __asm__("salc ");
    if (reinterpret_cast<uint1_t>(!!(ecx - 1)) & reinterpret_cast<uint1_t>(!zf2)) 
        goto 0x4101d9;
}

void fun_410199() {
    int1_t less1;
    int1_t of2;

    if (less1) 
        goto 0x41017e;
    if (!of2) 
        goto "???";
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

unsigned char gc1420311;

unsigned char gb76d76d6;

void fun_4100a3() {
    int1_t zf1;
    unsigned char* edi2;
    unsigned char* edi3;
    signed char* edi4;
    signed char* esi5;
    uint32_t* eax6;
    unsigned char al7;
    uint1_t below_or_equal8;

    if (!zf1) 
        goto 0x410038;
    *edi2 = reinterpret_cast<unsigned char>(*edi3 >> 80);
    *edi4 = *esi5;
    *reinterpret_cast<unsigned char*>(&eax6) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(al7 | 12) - 5) + 75);
    *eax6 = *eax6 ^ reinterpret_cast<uint32_t>(eax6);
    below_or_equal8 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*eax6 == 0)));
    gc1420311 = *reinterpret_cast<unsigned char*>(&eax6);
    if (below_or_equal8) 
        goto 0x410115;
    gb76d76d6 = *reinterpret_cast<unsigned char*>(&eax6);
    __asm__("les eax, [edx-0x74]");
}

void fun_4101f9() {
    int32_t ebp1;
    int32_t ebp2;
    signed char ah3;

    *reinterpret_cast<signed char*>(ebp1 + 0x1744cb0c) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp2 + 0x1744cb0c) - ah3);
}
