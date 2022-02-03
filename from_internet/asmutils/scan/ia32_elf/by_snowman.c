
struct s0 {
    signed char[3] pad3;
    signed char f3;
};

struct s1 {
    signed char[2] pad2;
    signed char f2;
};

void fun_804817a(void* ecx);

int32_t fun_8048105() {
    int16_t dx1;
    int16_t si2;
    struct s0* edi3;
    struct s1* edi4;

    __asm__("int 0x80");
    dx1 = si2;
    edi3->f3 = *reinterpret_cast<signed char*>(&dx1);
    edi4->f2 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&dx1) + 1);
    __asm__("int 0x80");
    if (!1) {
        fun_804817a(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12 - 4 - 4 - 4 - 4);
        __asm__("int 0x80");
        __asm__("int 0x80");
    }
    __asm__("int 0x80");
    return 6;
}

void fun_804817a(void* ecx) {
    uint32_t v2;
    uint32_t eax3;
    int32_t ecx4;
    signed char* edi5;
    uint32_t eax6;
    uint32_t edx7;

    v2 = eax3;
    ecx4 = 6;
    while (ecx4) {
        --ecx4;
        *edi5 = 32;
        ++edi5;
    }
    eax6 = v2;
    *reinterpret_cast<signed char*>(&ecx4) = 10;
    do {
        __asm__("cdq ");
        edx7 = eax6 % ecx4;
        eax6 = eax6 / ecx4;
        --edi5;
        *edi5 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&edx7) + 48);
    } while (eax6);
    return;
}

struct s2 {
    signed char[116] pad116;
    unsigned char f74;
};

struct s3 {
    signed char[116] pad116;
    unsigned char f74;
};

struct s4 {
    signed char[116] pad116;
    signed char f74;
};

uint48_t g80481ab;

int16_t g8048195;

void fun_8048000(int32_t* ecx) {
    int1_t less_or_equal2;
    int32_t eax3;
    int32_t* ebx4;
    int32_t* ebx5;
    int32_t eax6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    void** eax19;
    signed char al20;
    signed char* eax21;
    void** eax22;
    signed char dh23;
    void** ebp24;
    void** eax25;
    void** ebp26;
    int32_t edi27;
    int32_t edi28;
    void* tmp8_29;
    uint1_t cf30;
    signed char* edx31;
    signed char* edx32;
    int32_t eax33;
    int32_t ebx34;
    struct s2* ebx35;
    struct s3* ebx36;
    unsigned char dh37;
    int1_t zf38;
    struct s4* ebx39;
    void** ebx40;
    int16_t si41;
    int1_t zf42;
    int32_t eax43;
    int32_t ecx44;
    int32_t ebx45;
    int1_t cf46;

    if (less_or_equal2) {
        *ecx = *ecx + eax3;
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(*eax19));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<int32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        __asm__("outsb ");
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(eax22)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(eax22)) + dh23);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<int32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8);
        ebp24 = eax22;
        eax25 = ebp26;
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<int32_t>(eax25));
        *reinterpret_cast<signed char*>(edi27 + 0x7000001) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edi28 + 0x7000001) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax25)));
    }
    tmp8_29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax25)));
    cf30 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_29) < reinterpret_cast<unsigned char>(*eax25));
    *eax25 = tmp8_29;
    *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax25))) + cf30);
    *edx31 = reinterpret_cast<signed char>(*edx32 + *reinterpret_cast<signed char*>(&ecx));
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax25) + 1)) >= reinterpret_cast<unsigned char>(*eax25)) {
        addr_80480b9_4:
        eax33 = 0;
        ebx34 = 0;
    } else {
        __asm__("popad ");
        __asm__("outsb ");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) + 1 + 0x70) = 0;
        ebx35->f74 = reinterpret_cast<unsigned char>(ebx36->f74 & dh37);
        zf38 = ebx39->f74 == 0;
        __asm__("popad ");
        if (0) {
            addr_80480d5_6:
            goto addr_80480d6_7;
        } else {
            if (0) {
                addr_80480d2_9:
                eax25 = reinterpret_cast<void**>(0);
                ebx40 = reinterpret_cast<void**>(0);
                goto addr_80480d5_6;
            } else {
                if (0) 
                    goto addr_80480d9_11;
                *reinterpret_cast<unsigned char*>(ebp24 + 1 + 0x6e) = 0;
                if (0) 
                    goto addr_80480da_13; else 
                    goto addr_804806b_14;
            }
        }
    }
    while (*reinterpret_cast<signed char*>(&eax33)) {
        *reinterpret_cast<signed char*>(&eax33) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax33) - 48);
        ebx34 = ebx34 * 10 + eax33;
    }
    *reinterpret_cast<int32_t*>(&g80481ab) = ebx34;
    goto addr_80480d2_9;
    while (1) {
        addr_80480d6_7:
        __asm__("lodsb ");
        zf38 = *reinterpret_cast<void**>(&eax25) == 0;
        addr_80480d9_11:
        if (zf38) 
            break;
        addr_80480db_18:
        *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax25)) - 48);
        ebx40 = eax25 + reinterpret_cast<int32_t>(ebx40) * 10;
        addr_80480e1_19:
    }
    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&g80481ab) + 2) = ebx40;
    si41 = *reinterpret_cast<int16_t*>(&g80481ab);
    do {
        fun_8048105();
        si41 = reinterpret_cast<int16_t>(si41 + 1);
        zf42 = si41 == *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&g80481ab) + 2);
    } while (!zf42);
    __asm__("int 0x80");
    addr_80480da_13:
    goto addr_80480db_18;
    addr_804806b_14:
    if (0) 
        goto addr_80480e1_19;
    __asm__("cli ");
    __asm__("int 0x80");
    __asm__("int 0x80");
    eax43 = 0;
    ecx44 = 0;
    do {
        ebx45 = 0;
        while (cf46 = *reinterpret_cast<unsigned char*>(&eax43) < 48, *reinterpret_cast<unsigned char*>(&eax43) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax43) - 48), !cf46) {
            ebx45 = ebx45 * 10 + eax43;
        }
        *reinterpret_cast<signed char*>(0x8048195 + ecx44 + 4) = *reinterpret_cast<signed char*>(&ebx45);
        ++ecx44;
    } while (ecx44 != 4);
    g8048195 = 2;
    goto addr_80480b9_4;
}
