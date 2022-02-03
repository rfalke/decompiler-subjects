
void fun_804814f(unsigned char** ecx) {
    signed char* ebx2;
    int32_t eax3;

    *ecx = reinterpret_cast<unsigned char*>(0);
    while ((++ebx2, *reinterpret_cast<signed char*>(&eax3) = reinterpret_cast<signed char>(*ebx2 - 48), *reinterpret_cast<signed char*>(&eax3) >= 0) && *reinterpret_cast<signed char*>(&eax3) < 8) {
    }
    return;
}

uint32_t fun_8048167(void* ecx) {
    uint32_t eax2;
    int32_t ebx3;
    signed char* ebp4;

    eax2 = 0;
    ebx3 = 0;
    while ((++ebp4, *reinterpret_cast<signed char*>(&ebx3) = reinterpret_cast<signed char>(*ebp4 - 48), *reinterpret_cast<signed char*>(&ebx3) >= 0) && *reinterpret_cast<signed char*>(&ebx3) <= 9) {
        eax2 = eax2 * 10 + ebx3;
    }
    return eax2;
}

struct s0 {
    signed char[65] pad65;
    unsigned char f41;
    signed char[45] pad111;
    int32_t f6f;
};

struct s1 {
    signed char[45] pad45;
    unsigned char f2d;
};

struct s2 {
    signed char[65] pad65;
    unsigned char f41;
    signed char[7] pad73;
    unsigned char f49;
};

void fun_8048000(unsigned char** ecx, int32_t a2, signed char* a3, int16_t* a4, unsigned char* a5, int16_t* a6, unsigned char* a7, unsigned char* a8, unsigned char* a9) {
    int1_t less_or_equal10;
    void* eax11;
    int32_t* ebx12;
    int32_t* ebx13;
    int32_t eax14;
    signed char* eax15;
    signed char* eax16;
    signed char al17;
    signed char* eax18;
    signed char* eax19;
    signed char al20;
    signed char* eax21;
    signed char* eax22;
    signed char al23;
    signed char* eax24;
    signed char* eax25;
    signed char al26;
    void** eax27;
    signed char al28;
    signed char* eax29;
    void** eax30;
    signed char dh31;
    unsigned char* eax32;
    unsigned char* eax33;
    unsigned char* tmp32_34;
    uint1_t cf35;
    unsigned char* eax36;
    void* dh37;
    struct s0* esi38;
    signed char* ebx39;
    int1_t cf40;
    unsigned char* ebp41;
    uint32_t edx42;
    void* ecx43;
    struct s1* ebx44;
    int32_t ebp45;
    struct s2* ebp46;
    uint32_t ecx47;
    uint32_t eax48;
    uint32_t eax49;
    uint32_t tmp32_50;

    if (less_or_equal10) {
        *ecx = reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(*ecx) + reinterpret_cast<int32_t>(eax11));
        *ebx12 = *ebx13 + eax14;
        *eax15 = reinterpret_cast<signed char>(*eax16 + al17);
        *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
        *eax21 = reinterpret_cast<signed char>(*eax22 + al23);
        *eax24 = reinterpret_cast<signed char>(*eax25 + al26);
        *reinterpret_cast<signed char*>(&eax27) = reinterpret_cast<signed char>(al28 + *eax29);
        eax30 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(*eax27));
        *eax30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax30) + reinterpret_cast<int32_t>(eax30));
        *eax30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax30) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax30) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax30) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax30) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
        *eax30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax30) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
        *eax30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax30) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
        *eax30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax30) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
        *eax30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax30) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax30) + reinterpret_cast<int32_t>(eax30)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax30) + reinterpret_cast<int32_t>(eax30)) + dh31);
        *eax30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax30) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
        *eax30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax30) + reinterpret_cast<int32_t>(eax30));
        *eax30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax30) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
        *eax30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax30) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
        *eax30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax30) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
        *reinterpret_cast<unsigned char*>(eax30 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax30 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
        eax32 = *ecx;
        *eax32 = reinterpret_cast<unsigned char>(*eax32 + *reinterpret_cast<signed char*>(&eax32));
        eax33 = *ecx;
        *eax33 = reinterpret_cast<unsigned char>(*eax33 + *reinterpret_cast<signed char*>(&eax33));
        tmp32_34 = eax33;
        cf35 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_34) < reinterpret_cast<unsigned char>(eax33));
        eax36 = tmp32_34;
    }
    *eax36 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax36 + *reinterpret_cast<signed char*>(&eax36)) + cf35);
    *ecx = reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(*ecx) + reinterpret_cast<signed char>(dh37));
    __asm__("fld tword [edx+0x3c]");
    __asm__("int 0x80");
    esi38 = reinterpret_cast<struct s0*>(0x1b6 ^ reinterpret_cast<uint32_t>(__return_address()));
    ebx39 = a3;
    do {
        ++ebx39;
    } while (*ebx39);
    if (*(ebx39 - 1) == 0x6f) {
        cf40 = 0;
        if (!a4) 
            goto addr_80480cd_7;
        if (*a4 == 0x6d2d) 
            goto addr_80480b5_9;
    } else {
        cf40 = 0;
        if (!a4) 
            goto addr_80480cd_7;
        if (*a4 != 0x6d2d) 
            goto addr_804808a_12;
        if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(a4) + 1 + 1)) 
            goto addr_8048080_14;
        cf40 = 0;
        if (!a5) 
            goto addr_80480cd_7;
        addr_8048080_14:
        fun_804814f(ecx);
        cf40 = 0;
        if (!a6) 
            goto addr_80480cd_7;
        addr_804808a_12:
        ebp41 = a7;
        cf40 = 0;
        if (!ebp41) 
            goto addr_80480cd_7;
        if (*ebp41 == 98) 
            goto addr_80480e3_17; else 
            goto addr_8048095_18;
    }
    addr_80480ef_19:
    edx42 = 0;
    ecx43 = reinterpret_cast<void*>(0x1000 | reinterpret_cast<uint32_t>(esi38));
    cf40 = 0;
    addr_8048117_20:
    __asm__("int 0x80");
    ebx44 = reinterpret_cast<struct s1*>(14);
    addr_804811d_21:
    __asm__("int 0x80");
    if (cf40) {
        __asm__("insd ");
        ebp45 = esi38->f6f * 100;
        ebx44->f2d = reinterpret_cast<unsigned char>(ebx44->f2d & *reinterpret_cast<unsigned char*>(&ebx44));
        __asm__("insd ");
        *reinterpret_cast<unsigned char*>(ebp45 + 0x6f) = 0;
        esi38->f41 = reinterpret_cast<unsigned char>(esi38->f41 & *reinterpret_cast<unsigned char*>(&ecx43));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx43) + reinterpret_cast<int32_t>(ebx44) * 2 + 80) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx43) + reinterpret_cast<int32_t>(ebx44) * 2 + 80) & *reinterpret_cast<unsigned char*>(&edx42));
        ebp46 = reinterpret_cast<struct s2*>(ebp41 - 1 + 1 + 1);
        ebp46->f41 = reinterpret_cast<unsigned char>(ebp46->f41 & *reinterpret_cast<unsigned char*>(&ecx43));
        ebp46->f49 = reinterpret_cast<unsigned char>(ebp46->f49 & *reinterpret_cast<unsigned char*>(&ecx43));
    }
    addr_80480b5_9:
    if (!*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(a4) + 1 + 1) && (cf40 = 0, a5 == 0) || (fun_804814f(ecx), cf40 = 0, a6 == 0)) {
        addr_80480cd_7:
        edx42 = 45;
        ecx43 = reinterpret_cast<void*>(0x8048122);
        ebx44 = reinterpret_cast<struct s1*>(2);
        __asm__("int 0x80");
        *reinterpret_cast<unsigned char*>(&ebx44) = 1;
        goto addr_804811d_21;
    } else {
        goto addr_80480ef_19;
    }
    addr_80480e3_17:
    ecx47 = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx47) + 1) = 96;
    addr_80480f9_25:
    ecx43 = reinterpret_cast<void*>(ecx47 | reinterpret_cast<uint32_t>(esi38));
    ebp41 = a8;
    cf40 = 0;
    if (!ebp41) 
        goto addr_80480cd_7;
    eax48 = fun_8048167(ecx43);
    ebp41 = a9;
    cf40 = 0;
    if (!ebp41) 
        goto addr_80480cd_7;
    eax49 = fun_8048167(ecx43);
    tmp32_50 = (eax48 << 8) + eax49;
    cf40 = tmp32_50 < eax48 << 8;
    edx42 = tmp32_50;
    goto addr_8048117_20;
    addr_8048095_18:
    if (*ebp41 == 99 || *ebp41 == 0x75) {
        ecx47 = 0;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx47) + 1) = 32;
        goto addr_80480f9_25;
    } else {
        cf40 = *ebp41 < 0x70;
        if (*ebp41 != 0x70) {
            goto addr_80480cd_7;
        }
    }
}
