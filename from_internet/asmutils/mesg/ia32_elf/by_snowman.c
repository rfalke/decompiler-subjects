
signed char* g80481e9;

void fun_8048000(signed char* ecx) {
    int1_t less_or_equal2;
    void* tmp8_3;
    void** eax4;
    uint1_t cf5;
    signed char dh6;
    int32_t esi7;
    signed char* eax8;
    signed char* ebx9;
    signed char* v10;
    int32_t esi11;
    int32_t eax12;
    int32_t* ebx13;
    int32_t* ebx14;
    int32_t eax15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    signed char* eax22;
    signed char* eax23;
    signed char al24;
    signed char* eax25;
    signed char* eax26;
    signed char al27;
    void** eax28;
    signed char al29;
    signed char* eax30;
    signed char dh31;
    uint32_t* edx32;
    uint32_t* edx33;

    if (!less_or_equal2) {
        addr_8048047_2:
        tmp8_3 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax4)));
        cf5 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_3) < reinterpret_cast<unsigned char>(*eax4));
        *eax4 = tmp8_3;
        *eax4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax4))) + cf5);
        *ecx = reinterpret_cast<signed char>(*ecx + dh6);
        *reinterpret_cast<signed char*>(esi7 - 0x7f1e46ff) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(esi7 - 0x7f1e46ff) << *reinterpret_cast<unsigned char*>(&ecx));
        eax8 = reinterpret_cast<signed char*>(85);
        __asm__("int 0x80");
        if (0) {
            while (1) {
                addr_804809e_3:
                ebx9 = eax8;
                eax8 = reinterpret_cast<signed char*>(1);
                __asm__("int 0x80");
                addr_80480a5_4:
                if (*ebx9 != 0x6e) {
                    if (*ebx9 != 0x79) 
                        continue;
                }
                eax8 = reinterpret_cast<signed char*>(15);
                __asm__("int 0x80");
            }
        } else {
            __asm__("int 0x80");
            eax8 = g80481e9;
            ebx9 = v10;
            if (ebx9) 
                goto addr_80480a5_4;
            if ((reinterpret_cast<uint32_t>(eax8) & 16) == 16) 
                goto addr_8048087_11;
        }
    } else {
        esi7 = esi11 + 1;
        *ecx = reinterpret_cast<signed char>(*ecx + eax12);
        *ebx13 = *ebx14 + eax15;
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
        *eax22 = reinterpret_cast<signed char>(*eax23 + al24);
        *eax25 = reinterpret_cast<signed char>(*eax26 + al27);
        *reinterpret_cast<signed char*>(&eax28) = reinterpret_cast<signed char>(al29 + *eax30);
        eax4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax28) + reinterpret_cast<int32_t>(*eax28));
        *eax4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax4) + reinterpret_cast<uint32_t>(eax4));
        *eax4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax4)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax4) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax4) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax4)));
        *eax4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax4)));
        *eax4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax4)));
        *eax4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax4)));
        *eax4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax4)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax4) + reinterpret_cast<uint32_t>(eax4)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax4) + reinterpret_cast<uint32_t>(eax4)) + dh31);
        *eax4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax4) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax4)));
        *eax4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax4) + reinterpret_cast<uint32_t>(eax4));
        *eax4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax4)));
        *eax4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax4)));
        *eax4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax4)));
        *reinterpret_cast<unsigned char*>(eax4 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax4 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax4)));
        *reinterpret_cast<void**>(&eax4) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax4)) + 8);
        --ecx;
        if (reinterpret_cast<uint1_t>(!!ecx) & reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&eax4) == 0)) 
            goto addr_804803e_13; else 
            goto addr_804803e_13;
    }
    addr_8048093_15:
    eax8 = reinterpret_cast<signed char*>(4);
    __asm__("int 0x80");
    goto addr_804809e_3;
    addr_8048087_11:
    goto addr_8048093_15;
    addr_804803e_13:
    *eax4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax4)));
    *edx32 = *edx33 & reinterpret_cast<uint32_t>(eax4);
    *eax4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax4)));
    *eax4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax4)));
    goto addr_8048047_2;
}

struct s0 {
    signed char[32] pad32;
    int32_t f20;
};

void fun_80480c8() {
    int32_t esi1;
    struct s0* ebx2;
    unsigned char ch3;

    esi1 = ebx2->f20 * 0x73690a79;
    *reinterpret_cast<unsigned char*>(esi1 + 10) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(esi1 + 10) & ch3);
    __asm__("das ");
    if (!0) {
        __asm__("outsd ");
        __asm__("arpl [edi], bp");
        if (!1) {
            __asm__("insb ");
            __asm__("o16 das ");
            __asm__("o16 das ");
        }
    }
}
