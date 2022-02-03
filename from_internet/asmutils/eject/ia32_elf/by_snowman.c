
struct s0 {
    signed char[89] pad89;
    signed char f59;
};

struct s1 {
    signed char[89] pad89;
    signed char f59;
};

unsigned char g804812f;

unsigned char g1;

void fun_8048000(signed char* ecx, int32_t a2, unsigned char* a3, int32_t a4, unsigned char* a5) {
    unsigned char* v6;
    int1_t less_or_equal7;
    int32_t eax8;
    int32_t* ebx9;
    int32_t* ebx10;
    int32_t eax11;
    signed char* eax12;
    signed char* eax13;
    signed char al14;
    signed char* eax15;
    signed char* eax16;
    signed char al17;
    signed char* eax18;
    signed char* eax19;
    signed char al20;
    signed char* eax21;
    signed char* eax22;
    signed char al23;
    void** eax24;
    signed char al25;
    signed char* eax26;
    void** eax27;
    signed char dh28;
    signed char* ebx29;
    signed char* ebx30;
    signed char dh31;
    unsigned char* edi32;
    signed char* edi33;
    void* tmp8_34;
    uint1_t cf35;
    struct s0* edx36;
    struct s1* edx37;
    signed char bl38;
    signed char* edi39;
    int32_t ecx40;
    unsigned char* edi41;
    unsigned char* esi42;
    unsigned char* ecx43;
    int32_t eax44;
    int32_t edx45;
    int1_t zf46;
    int32_t eax47;
    int32_t eax48;
    unsigned char* ecx49;
    int32_t eax50;
    uint1_t below_or_equal51;
    unsigned char tmp8_52;
    unsigned char tmp8_53;

    v6 = reinterpret_cast<unsigned char*>(__return_address());
    if (less_or_equal7) {
        *ecx = reinterpret_cast<signed char>(*ecx + eax8);
        *ebx9 = *ebx10 + eax11;
        *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
        *eax15 = reinterpret_cast<signed char>(*eax16 + al17);
        *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
        *eax21 = reinterpret_cast<signed char>(*eax22 + al23);
        *reinterpret_cast<signed char*>(&eax24) = reinterpret_cast<signed char>(al25 + *eax26);
        eax27 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(*eax24));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<int32_t>(eax27));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(eax27)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(eax27)) + dh28);
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<int32_t>(eax27));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *reinterpret_cast<unsigned char*>(eax27 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax27 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *reinterpret_cast<void**>(&eax27) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)) + 8);
        __asm__("das ");
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<int32_t>(eax27));
        *ebx29 = reinterpret_cast<signed char>(*ebx30 + dh31);
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<int32_t>(eax27));
        *edi32 = reinterpret_cast<unsigned char>(*edi33 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    }
    tmp8_34 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    cf35 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_34) < reinterpret_cast<unsigned char>(*eax27));
    *eax27 = tmp8_34;
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27))) + cf35);
    edx36->f59 = reinterpret_cast<signed char>(edx37->f59 + bl38);
    edi39 = ecx;
    ecx40 = -1;
    do {
        if (!ecx40) 
            break;
        --ecx40;
        ++edi39;
    } while (*edi39);
    edi41 = reinterpret_cast<unsigned char*>(0x804812f);
    g804812f = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(edi39 - 4) != 0x646363);
    esi42 = reinterpret_cast<unsigned char*>("/dev/cdrom");
    ecx43 = reinterpret_cast<unsigned char*>("/cdrom");
    eax44 = edx45 - 1;
    if (!eax44) 
        goto addr_804809d_7;
    if (*v6 == 0x6463632d || (zf46 = (g804812f & 0xff) == 0, !zf46)) {
        g804812f = 0;
        --eax44;
        if (!eax44) {
            addr_804809d_7:
            if (!(*edi41 & 0xff)) {
                __asm__("int 0x80");
            }
        } else {
            goto addr_8048091_12;
        }
    } else {
        addr_8048091_12:
        eax47 = eax44 - 1;
        if (eax47 && ((ecx43 = a3, eax48 = eax47 - 1, !!eax48) && eax48 - 1)) {
            edi41 = a5;
            goto addr_804809d_7;
        }
    }
    __asm__("int 0x80");
    if (0) {
        addr_80480f0_15:
        ecx49 = ecx43;
        esi42 = reinterpret_cast<unsigned char*>(0xc0ed0001);
        __asm__("int 0x80");
        eax50 = 5;
        goto addr_8048100_16;
    } else {
        ecx49 = reinterpret_cast<unsigned char*>(0x5309);
        eax50 = 54;
        __asm__("int 0x80");
        if (*edi41 & 0xff) {
            addr_8048100_16:
            below_or_equal51 = 0;
            if (eax50 >= 0) {
                below_or_equal51 = 1;
            }
        } else {
            __asm__("int 0x80");
            __asm__("int 0x80");
            __asm__("int 0x80");
            goto addr_80480f0_15;
        }
    }
    __asm__("int 0x80");
    __asm__("das ");
    if (!below_or_equal51) {
        __asm__("arpl [edx+esi*2+0x6f], sp");
        __asm__("insd ");
        tmp8_52 = reinterpret_cast<unsigned char>(g1 + 1);
        g1 = tmp8_52;
        tmp8_53 = reinterpret_cast<unsigned char>(g1 + 1);
        g1 = tmp8_53;
        ecx49[0x73] = reinterpret_cast<unsigned char>(ecx49[0x73] + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx49) + 1));
        __asm__("outsd ");
        g1 = reinterpret_cast<unsigned char>(g1 ^ 1);
        __asm__("outsb ");
        if (!0) {
            if (!1) {
                *esi42 = 0;
            }
        }
    }
}
