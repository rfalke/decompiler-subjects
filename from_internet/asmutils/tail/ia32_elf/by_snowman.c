
void fun_80480fa(signed char* ecx) {
    signed char* edi2;
    signed char* esi3;
    uint32_t ecx4;

    edi2 = reinterpret_cast<signed char*>(0x8048193);
    esi3 = reinterpret_cast<signed char*>(0x804c193);
    ecx4 = reinterpret_cast<uint32_t>(ecx - 0x804c193);
    while (ecx4) {
        --ecx4;
        *edi2 = *esi3;
        ++edi2;
        ++esi3;
    }
    return;
}

struct s0 {
    signed char f0;
    signed char f1;
};

struct s1 {
    signed char f0;
    signed char[134512716] pad134512717;
    signed char f804804d;
};

struct s2 {
    signed char[1] pad1;
    signed char f1;
};

uint32_t g804818f;

uint32_t g805419b;

uint32_t g80541a7;

void fun_8048000(int32_t* ecx, int32_t a2, int32_t a3, struct s0* a4, struct s1* a5, struct s1* a6) {
    uint48_t v7;
    int1_t less_or_equal8;
    struct s1* esi9;
    struct s2* esi10;
    int32_t eax11;
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
    void* tmp8_32;
    uint1_t cf33;
    signed char bh34;
    signed char* ecx35;
    uint32_t ebx36;
    uint32_t ebx37;
    uint32_t ebx38;
    uint32_t eax39;
    int1_t cf40;
    int1_t zf41;
    uint32_t ebx42;
    uint32_t edx43;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v7) + 2) = reinterpret_cast<int32_t>(__return_address());
    if (less_or_equal8) {
        esi9 = reinterpret_cast<struct s1*>(&esi10->f1);
        *ecx = *ecx + eax11;
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
        *reinterpret_cast<void**>(&eax30) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)) + 8);
        *ecx = *reinterpret_cast<int32_t*>(&v7);
        *eax30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax30) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
        __asm__("rol ecx, cl");
        *eax30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax30) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
        *eax30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax30) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
    }
    tmp8_32 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax30) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
    cf33 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_32) < reinterpret_cast<unsigned char>(*eax30));
    *eax30 = tmp8_32;
    *eax30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax30) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30))) + cf33);
    esi9->f804804d = reinterpret_cast<signed char>(esi9->f804804d + bh34);
    *reinterpret_cast<signed char*>(&g804818f) = 10;
    if (a2 - 1) {
        if (a4->f0 != 45) {
            addr_804808d_5:
            ecx35 = reinterpret_cast<signed char*>(0);
            __asm__("int 0x80");
            if (0) {
                while (1) {
                    addr_8048111_6:
                    __asm__("int 0x80");
                    addr_8048116_7:
                    if (ecx35 == 0x8048193) 
                        continue;
                    ebx36 = g804818f;
                    ebx37 = ebx36 + 1;
                    --ecx35;
                    addr_8048128_9:
                    while (--ebx37, !!ebx37) {
                        while (--ecx35, ecx35 != 0x8048193) {
                            if (*ecx35 == 10) 
                                goto addr_8048128_9;
                        }
                        goto addr_804813c_13;
                    }
                    ++ecx35;
                    addr_804813c_13:
                    __asm__("int 0x80");
                }
            }
        } else {
            esi9 = reinterpret_cast<struct s1*>(&a4->f1);
            if (esi9->f0 == 0x6e) {
                esi9 = a5;
            }
            ebx38 = 0;
            eax39 = 0;
            while ((cf40 = *reinterpret_cast<unsigned char*>(&eax39) < 48, *reinterpret_cast<unsigned char*>(&eax39) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax39) - 48), !cf40) && *reinterpret_cast<signed char*>(&eax39) <= reinterpret_cast<signed char>(9)) {
                ebx38 = ebx38 * 10 + eax39;
            }
            g804818f = ebx38;
            if (a6) 
                goto addr_804808d_5;
        }
    }
    __asm__("int 0x80");
    zf41 = (g805419b & 0x8000) == 0;
    if (!zf41 && (ebx42 = g80541a7, ebx42 > 0x4000)) {
        __asm__("int 0x80");
    }
    ecx35 = reinterpret_cast<signed char*>(0x8048193);
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi9) - 1) == 99) {
        ecx35 = reinterpret_cast<signed char*>(0x8048193);
        while (!__intrinsic()) {
            if (0) 
                goto addr_804816f_28;
            ecx35 = ecx35 + 3;
            if (reinterpret_cast<uint32_t>(ecx35) < 0x8050193) 
                continue;
            fun_80480fa(ecx35);
        }
        goto addr_8048111_6;
    } else {
        do {
            __asm__("int 0x80");
            if (0) 
                goto addr_8048111_6;
            if (0) 
                goto addr_8048116_7;
            ecx35 = ecx35 + 3;
        } while (reinterpret_cast<int32_t>(ecx35) <= reinterpret_cast<int32_t>(0x8050193));
        goto addr_80480f5_34;
    }
    addr_804816f_28:
    edx43 = g804818f;
    ecx35 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx35) - edx43);
    if (reinterpret_cast<uint32_t>(ecx35) < 0x8048193) {
        ecx35 = reinterpret_cast<signed char*>(0x8048193);
    }
    __asm__("int 0x80");
    goto addr_8048111_6;
    addr_80480f5_34:
}
