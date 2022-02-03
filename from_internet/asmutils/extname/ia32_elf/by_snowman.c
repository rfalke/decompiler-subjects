
struct s0 {
    signed char[75] pad75;
    unsigned char f4b;
};

void fun_8048000(int32_t* ecx, void** a2, void*** a3) {
    int32_t v4;
    int1_t less_or_equal5;
    int32_t eax6;
    int32_t* ebx7;
    int32_t* ebx8;
    int32_t eax9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    void** eax22;
    signed char al23;
    signed char* eax24;
    void** eax25;
    signed char dh26;
    unsigned char tmp8_27;
    signed char bl28;
    signed char bl29;
    struct s0* ebx30;
    unsigned char bl31;
    unsigned char* edi32;
    signed char* edi33;
    void* tmp8_34;
    uint1_t cf35;
    int32_t ebx36;
    int1_t sf37;
    void** edi38;
    int32_t ecx39;
    void* ecx40;
    signed char* edi41;
    void* edx42;
    int1_t zf43;
    void* edx44;
    void* ecx45;
    void** edi46;
    void* edx47;
    int1_t zf48;
    uint32_t eax49;

    v4 = reinterpret_cast<int32_t>(__return_address());
    if (less_or_equal5) {
        *ecx = *ecx + eax6;
        *ebx7 = *ebx8 + eax9;
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
        *reinterpret_cast<signed char*>(&eax22) = reinterpret_cast<signed char>(al23 + *eax24);
        eax25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<uint32_t>(*eax22));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<uint32_t>(eax25));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) + 44);
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(eax25)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(eax25)) + dh26);
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<uint32_t>(eax25));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<unsigned char*>(eax25 + 0x80000804) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax25 + 0x80000804) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) + 8);
        __asm__("xlatb ");
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        tmp8_27 = reinterpret_cast<unsigned char>(bl28 + bl29);
        *reinterpret_cast<unsigned char*>(&ebx30) = tmp8_27;
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25))) + reinterpret_cast<uint1_t>(tmp8_27 < bl31));
        *edi32 = reinterpret_cast<unsigned char>(*edi33 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    }
    tmp8_34 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    cf35 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_34) < reinterpret_cast<unsigned char>(*eax25));
    *eax25 = tmp8_34;
    *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25))) + cf35);
    ebx30->f4b = reinterpret_cast<unsigned char>(ebx30->f4b + *reinterpret_cast<unsigned char*>(&ebx30));
    ebx36 = reinterpret_cast<int32_t>(ebx30) - 1;
    sf37 = ebx36 < 0;
    if (sf37) {
        addr_8048071_4:
        if (sf37) {
            addr_80480d2_5:
            __asm__("int 0x80");
        } else {
            ebx36 = v4;
            goto addr_8048074_7;
        }
    } else {
        eax25 = a2;
        if (!reinterpret_cast<int1_t>(*eax25 == 45)) {
            addr_8048074_7:
            *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax25) + 1) = reinterpret_cast<void*>(46);
            edi38 = a2;
            if (ebx36 - 1 >= 0) {
                eax25 = *a3;
                if (*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax25) + 1) != *reinterpret_cast<void**>(&eax25)) {
                    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax25) + 1) = *reinterpret_cast<void**>(&eax25);
                }
            }
        } else {
            a2 = reinterpret_cast<void**>(0x80480d7);
            v4 = ebx36;
            eax25 = reinterpret_cast<void**>(3);
            __asm__("int 0x80");
            sf37 = 0;
            goto addr_8048071_4;
        }
    }
    __asm__("rcl eax, 1");
    __asm__("ror eax, 1");
    ecx39 = -1;
    do {
        if (!ecx39) 
            break;
        --ecx39;
        ++edi38;
    } while (*edi38);
    ecx40 = reinterpret_cast<void*>(~ecx39);
    edi41 = reinterpret_cast<signed char*>(edi38 - 1);
    edx42 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx40) - 1);
    zf43 = edx42 == 0;
    do {
        if (!ecx40) 
            break;
        ecx40 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx40) - 1);
        zf43 = *edi41 == 47;
        --edi41;
    } while (!zf43);
    if (!zf43) {
        --edi41;
    }
    edx44 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx42) - reinterpret_cast<int32_t>(ecx40));
    ecx45 = edx44;
    *reinterpret_cast<void**>(&eax25) = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax25) + 1);
    edi46 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edx44) + reinterpret_cast<uint32_t>(edi41) + 2 - 1);
    edx47 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx44) - 1);
    zf48 = edx47 == 0;
    do {
        if (!ecx45) 
            break;
        ecx45 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx45) - 1);
        zf48 = *edi46 == *reinterpret_cast<void**>(&eax25);
        --edi46;
    } while (!zf48);
    if (!zf48) 
        goto addr_80480af_25;
    while (!ecx45) {
        addr_80480af_25:
        ecx45 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx47) + 1);
    }
    eax49 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax25) >> 31);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi46 + 1) - eax49 + (reinterpret_cast<int32_t>(edx47) - (reinterpret_cast<int32_t>(ecx45) - 1 - eax49))) = 10;
    __asm__("int 0x80");
    goto addr_80480d2_5;
}
