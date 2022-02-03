
struct s0 {
    signed char[2] pad2;
    int32_t f2;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

struct s2 {
    void** f0;
    int32_t f4;
};

signed char g1;

void fun_8048000(int32_t* ecx) {
    int32_t* esp2;
    int1_t less_or_equal3;
    int32_t eax4;
    int32_t* ebx5;
    int32_t* ebx6;
    int32_t eax7;
    signed char* eax8;
    signed char* eax9;
    signed char al10;
    signed char* eax11;
    signed char* eax12;
    signed char al13;
    signed char* eax14;
    signed char* eax15;
    signed char al16;
    signed char* eax17;
    signed char* eax18;
    signed char al19;
    void** eax20;
    signed char al21;
    signed char* eax22;
    void** eax23;
    signed char dh24;
    struct s0* esp25;
    void* tmp8_26;
    uint1_t cf27;
    int32_t edi28;
    int32_t edi29;
    signed char bh30;
    int32_t* esp31;
    int32_t ecx32;
    struct s1* esp33;
    int32_t* edi34;
    struct s1* esp35;
    int32_t* esp36;
    int32_t* esp37;
    int32_t* esp38;
    struct s2* esp39;
    struct s1* esp40;
    struct s1* esp41;
    struct s1* esp42;
    struct s1* esp43;
    signed char tmp32_44;
    signed char tmp8_45;
    signed char tmp8_46;
    signed char tmp8_47;
    signed char tmp8_48;
    signed char tmp8_49;
    signed char tmp8_50;
    signed char tmp8_51;

    esp2 = reinterpret_cast<int32_t*>(__zero_stack_offset());
    if (less_or_equal3) {
        *ecx = *ecx + eax4;
        *ebx5 = *ebx6 + eax7;
        *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
        *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
        *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
        *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
        *reinterpret_cast<signed char*>(&eax20) = reinterpret_cast<signed char>(al21 + *eax22);
        eax23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax20) + reinterpret_cast<int32_t>(*eax20));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<int32_t>(eax23));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(eax23)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(eax23)) + dh24);
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<int32_t>(eax23));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<unsigned char*>(eax23 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax23 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<void**>(&eax23) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)) + 8);
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + 1);
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        esp25 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp2) - 1 - 1 + *ecx);
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        esp2 = &esp25->f2;
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
    }
    tmp8_26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
    cf27 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_26) < reinterpret_cast<unsigned char>(*eax23));
    *eax23 = tmp8_26;
    *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23))) + cf27);
    *reinterpret_cast<signed char*>(edi28 + 0x804a0ff) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edi29 + 0x804a0ff) + bh30);
    esp31 = esp2 + 1 + 1;
    if (!(*esp2 - 1)) {
        addr_80480b1_4:
    } else {
        ecx32 = 0x241;
        ++esp31;
        __asm__("lodsb ");
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void**>(&eax23) == 45)) {
            do {
                esp33 = reinterpret_cast<struct s1*>(esp31 - 1);
                esp33->f0 = 5;
                esp31 = &esp33->f4;
                __asm__("int 0x80");
                if (1) {
                    *edi34 = 5;
                    ++edi34;
                }
                addr_8048098_12:
                ++esp31;
            } while (*esp31);
            goto addr_80480b1_4;
        } else {
            while (1) {
                __asm__("lodsb ");
                if (!*reinterpret_cast<void**>(&eax23)) 
                    goto addr_8048098_12;
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void**>(&eax23) == 97)) {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void**>(&eax23) == 0x69)) 
                        goto addr_80480e8_16;
                    esp35 = reinterpret_cast<struct s1*>(esp31 - 1);
                    esp35->f0 = ecx32;
                    esp36 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp35) - 4);
                    *esp36 = 13;
                    esp37 = esp36 + 1 - 1;
                    *esp37 = 67;
                    __asm__("int 0x80");
                    esp38 = esp37 + 1 - 1;
                    *esp38 = 2;
                    esp39 = reinterpret_cast<struct s2*>(esp38 + 1 - 1);
                    esp39->f0 = reinterpret_cast<void**>(67);
                    eax23 = reinterpret_cast<void**>(67);
                    __asm__("int 0x80");
                    ecx32 = 0x241;
                    esp31 = &esp39->f4 + 1;
                } else {
                    ecx32 = 0x441;
                }
            }
        }
    }
    *edi34 = 0;
    while (esp40 = reinterpret_cast<struct s1*>(esp31 - 1), esp40->f0 = 3, esp31 = &esp40->f4, !0) {
        if (0) 
            goto addr_80480e8_16;
        esp41 = reinterpret_cast<struct s1*>(esp31 - 1);
        esp41->f0 = 1;
        esp42 = reinterpret_cast<struct s1*>(&esp41->f4 - 1);
        esp42->f0 = 4;
        esp31 = &esp42->f4;
        __asm__("int 0x80");
        while (!0) {
            esp43 = reinterpret_cast<struct s1*>(esp31 - 1);
            esp43->f0 = 4;
            esp31 = &esp43->f4;
            __asm__("int 0x80");
        }
    }
    addr_80480e8_16:
    *(esp31 - 1) = 1;
    __asm__("int 0x80");
    tmp32_44 = reinterpret_cast<signed char>(g1 + 1);
    g1 = tmp32_44;
    tmp8_45 = reinterpret_cast<signed char>(g1 + 1);
    g1 = tmp8_45;
    tmp8_46 = reinterpret_cast<signed char>(g1 + 1);
    g1 = tmp8_46;
    tmp8_47 = reinterpret_cast<signed char>(g1 + 1);
    g1 = tmp8_47;
    tmp8_48 = reinterpret_cast<signed char>(g1 + 1);
    g1 = tmp8_48;
    tmp8_49 = reinterpret_cast<signed char>(g1 + 1);
    g1 = tmp8_49;
    tmp8_50 = reinterpret_cast<signed char>(g1 + 1);
    g1 = tmp8_50;
    tmp8_51 = reinterpret_cast<signed char>(g1 + 1);
    g1 = tmp8_51;
}
