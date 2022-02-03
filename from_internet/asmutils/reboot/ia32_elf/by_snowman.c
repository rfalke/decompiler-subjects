
struct s0 {
    signed char[94] pad94;
    int32_t f5e;
};

void fun_8048000(signed char* ecx) {
    int1_t less_or_equal2;
    int32_t esi3;
    int32_t esi4;
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
    signed char dh29;
    struct s0* ebp30;
    signed char al31;
    int32_t ebp32;
    int16_t* v33;
    int32_t edi34;

    if (less_or_equal2) {
        esi3 = esi4 + 1;
        *ecx = reinterpret_cast<signed char>(*ecx + eax5);
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
        *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)) + 8);
        __asm__("fld dword [eax]");
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        __asm__("fld dword [eax]");
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        tmp32_26 = eax24;
        cf27 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_26) < reinterpret_cast<uint32_t>(eax24));
        eax28 = tmp32_26;
    }
    *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax28))) + cf27);
    *ecx = reinterpret_cast<signed char>(*ecx + dh29);
    al31 = reinterpret_cast<signed char>(ebp30->f5e(__return_address()));
    do {
        __asm__("lodsb ");
    } while (al31);
    while (--ebp32, !!ebp32) {
        if (*v33 == 0x702d) 
            goto addr_8048091_8;
        if (*v33 != 0x662d) 
            break;
        ++edi34;
    }
    if (*reinterpret_cast<int32_t*>(esi3 - 5) != 0x746c6168) {
        if (*reinterpret_cast<int16_t*>(esi3 - 3) != 0x6666) {
            while (1) {
                if (!edi34) {
                    __asm__("pushad ");
                    __asm__("int 0x80");
                    __asm__("int 0x80");
                    __asm__("popad ");
                    __asm__("int 0x80");
                }
                addr_80480a2_15:
                __asm__("int 0x80");
                __asm__("int 0x80");
            }
        }
    } else {
        goto addr_8048096_17;
    }
    addr_8048091_8:
    addr_8048096_17:
    __asm__("int 0x80");
    goto addr_80480a2_15;
}

void fun_80480d1() {
    signed char* eax1;
    signed char* eax2;

    eax1 = eax2;
    *eax1 = reinterpret_cast<signed char>(*eax1 + *reinterpret_cast<signed char*>(&eax1));
}
