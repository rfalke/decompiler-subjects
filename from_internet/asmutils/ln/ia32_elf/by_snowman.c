
struct s0 {
    signed char[94] pad94;
    signed char f5e;
};

struct s1 {
    signed char[94] pad94;
    signed char f5e;
};

void fun_8048000(int32_t* ecx, int32_t a2, int32_t a3) {
    int16_t* v4;
    int1_t less_or_equal5;
    int32_t esi6;
    int32_t esi7;
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
    void** tmp32_29;
    uint1_t cf30;
    void** eax31;
    struct s0* ebx32;
    struct s1* ebx33;
    signed char bl34;
    uint32_t ebx35;

    v4 = reinterpret_cast<int16_t*>(__return_address());
    if (less_or_equal5) {
        esi6 = esi7 + 1;
        *ecx = *ecx + eax8;
        *ebx9 = *ebx10 + eax11;
        *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
        *eax15 = reinterpret_cast<signed char>(*eax16 + al17);
        *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
        *eax21 = reinterpret_cast<signed char>(*eax22 + al23);
        *reinterpret_cast<signed char*>(&eax24) = reinterpret_cast<signed char>(al25 + *eax26);
        eax27 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(*eax24));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<uint32_t>(eax27));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax27) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax27) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax27) + reinterpret_cast<uint32_t>(eax27)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax27) + reinterpret_cast<uint32_t>(eax27)) + dh28);
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<uint32_t>(eax27));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *reinterpret_cast<unsigned char*>(eax27 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax27 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *reinterpret_cast<void**>(&eax27) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)) + 8);
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        tmp32_29 = eax27;
        cf30 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_29) < reinterpret_cast<uint32_t>(eax27));
        eax31 = tmp32_29;
    }
    *eax31 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax31) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax31))) + cf30);
    ebx32->f5e = reinterpret_cast<signed char>(ebx33->f5e + bl34);
    do {
        __asm__("lodsb ");
    } while (*reinterpret_cast<void**>(&eax31));
    if (ebx35 < 3) {
        while (1) {
            addr_8048071_6:
            __asm__("int 0x80");
            addr_8048078_7:
            __asm__("int 0x80");
            addr_8048068_8:
            __asm__("int 0x80");
        }
    } else {
        if (*reinterpret_cast<signed char*>(esi6 - 4) == 0x73) 
            goto addr_8048078_7;
        if (*v4 == 0x732d) 
            goto addr_8048067_11;
    }
    __asm__("int 0x80");
    goto addr_8048071_6;
    addr_8048067_11:
    goto addr_8048068_8;
}
