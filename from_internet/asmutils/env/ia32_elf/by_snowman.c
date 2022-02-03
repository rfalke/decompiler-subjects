
struct s0 {
    signed char[69] pad69;
    signed char f45;
};

struct s1 {
    signed char[69] pad69;
    signed char f45;
};

void fun_8048000(int32_t* ecx) {
    int32_t* esp2;
    int1_t less_or_equal3;
    void** eax4;
    uint1_t cf5;
    struct s0* ebp6;
    struct s1* ebp7;
    signed char bl8;
    int32_t eax9;
    int32_t* ebx10;
    int32_t* ebx11;
    int32_t eax12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    signed char* eax22;
    signed char* eax23;
    signed char al24;
    void** eax25;
    signed char al26;
    signed char* eax27;
    void** eax28;
    signed char dh29;
    void* tmp8_30;
    uint1_t cf31;
    int32_t esi32;
    int32_t ebp33;
    void* tmp8_34;
    uint1_t cf35;
    void** tmp32_36;

    esp2 = reinterpret_cast<int32_t*>(__zero_stack_offset());
    if (!less_or_equal3) {
        addr_8048047_2:
        *eax4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax4) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax4))) + cf5);
        ebp6->f45 = reinterpret_cast<signed char>(ebp7->f45 + bl8);
    } else {
        *ecx = *ecx + eax9;
        *ebx10 = *ebx11 + eax12;
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
        *eax22 = reinterpret_cast<signed char>(*eax23 + al24);
        *reinterpret_cast<signed char*>(&eax25) = reinterpret_cast<signed char>(al26 + *eax27);
        eax28 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(*eax25));
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<uint32_t>(eax28));
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        esp2 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp2) - 1 - 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax28) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax28) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax28) + reinterpret_cast<uint32_t>(eax28)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax28) + reinterpret_cast<uint32_t>(eax28)) + dh29);
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<uint32_t>(eax28));
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *reinterpret_cast<unsigned char*>(eax28 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax28 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        tmp8_30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)) + 8);
        cf31 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_30) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *reinterpret_cast<void**>(&eax28) = tmp8_30;
        if (cf31 | reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&eax28) == 0)) 
            goto addr_804803e_4; else 
            goto addr_804803e_4;
    }
    while (esi32 = esp2[ebp33], !!esi32) {
        do {
            __asm__("lodsb ");
        } while (*reinterpret_cast<void**>(&eax4));
        *reinterpret_cast<signed char*>(esi32 - 1) = 10;
        eax4 = reinterpret_cast<void**>(4);
        esp2 = esp2 - 1 + 1 - 1 + 1;
        __asm__("int 0x80");
    }
    __asm__("int 0x80");
    addr_804803e_4:
    tmp8_34 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
    cf35 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_34) < reinterpret_cast<unsigned char>(*eax28));
    *eax28 = tmp8_34;
    *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
    tmp32_36 = eax28;
    cf5 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_36) < reinterpret_cast<uint32_t>(eax28));
    eax4 = tmp32_36;
    goto addr_8048047_2;
}
