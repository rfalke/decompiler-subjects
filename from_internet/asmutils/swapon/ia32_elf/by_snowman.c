
struct s0 {
    signed char[94] pad94;
    signed char f5e;
};

void fun_8048000(unsigned char* ecx) {
    int1_t less_or_equal2;
    struct s0* esi3;
    void* esi4;
    int32_t eax5;
    int32_t* ebx6;
    int32_t* ebx7;
    int32_t eax8;
    signed char* eax9;
    signed char* eax10;
    signed char al11;
    signed char* eax12;
    signed char* eax13;
    signed char al14;
    signed char* eax15;
    signed char* eax16;
    signed char al17;
    signed char* eax18;
    signed char* eax19;
    signed char al20;
    void** eax21;
    signed char al22;
    signed char* eax23;
    void** eax24;
    signed char dh25;
    void** tmp32_26;
    uint1_t cf27;
    void** eax28;
    signed char bl29;
    int32_t v30;

    if (less_or_equal2) {
        esi3 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esi4) + 1);
        *ecx = reinterpret_cast<unsigned char>(*ecx + eax5);
        *ebx6 = *ebx7 + eax8;
        *eax9 = reinterpret_cast<signed char>(*eax10 + al11);
        *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
        *eax15 = reinterpret_cast<signed char>(*eax16 + al17);
        *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
        *reinterpret_cast<signed char*>(&eax21) = reinterpret_cast<signed char>(al22 + *eax23);
        eax24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax21) + reinterpret_cast<int32_t>(*eax21));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<uint32_t>(eax24));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax24) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax24) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax24) + reinterpret_cast<uint32_t>(eax24)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax24) + reinterpret_cast<uint32_t>(eax24)) + dh25);
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<uint32_t>(eax24));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<unsigned char*>(eax24 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax24 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)) + 8) & *ecx);
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)) & *ecx);
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        tmp32_26 = eax24;
        cf27 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_26) < reinterpret_cast<uint32_t>(eax24));
        eax28 = tmp32_26;
    }
    *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax28))) + cf27);
    esi3->f5e = reinterpret_cast<signed char>(esi3->f5e + bl29);
    do {
        __asm__("lodsb ");
    } while (*reinterpret_cast<void**>(&eax28));
    while (v30) {
        if (*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esi3) - 7) == 0x6b6d) 
            goto addr_8048076_7;
        if (*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esi3) - 3) != 0x6666) {
            __asm__("int 0x80");
        } else {
            __asm__("int 0x80");
        }
    }
    while (1) {
        __asm__("int 0x80");
        addr_80480ad_12:
        __asm__("int 0x80");
        if (0) {
            addr_8048094_13:
            __asm__("int 0x80");
        } else {
            __asm__("int 0x80");
        }
    }
    addr_8048076_7:
    __asm__("int 0x80");
    if (!0) {
        __asm__("int 0x80");
        if (1) 
            goto addr_80480ad_12; else 
            goto addr_8048094_13;
    }
}

struct s1 {
    signed char[114] pad114;
    unsigned char f72;
};

void fun_804810d(int32_t ecx) {
    struct s1* ebp2;
    void* ebp3;
    unsigned char ah4;

    ebp2 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(ebp3) + 1);
    __asm__("outsd ");
    ebp2->f72 = reinterpret_cast<unsigned char>(ebp2->f72 & ah4);
    if (!0) {
        if (0) {
        }
    }
}
