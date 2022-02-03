
struct s0 {
    int32_t f0;
    int32_t f4;
};

signed char g80483f9;

int32_t g804826b;

void fun_8048070(int32_t ecx) {
    signed char* edi2;
    int32_t eax3;
    struct s0* edi4;
    int32_t eax5;

    edi2 = reinterpret_cast<signed char*>(0x80483f9);
    eax3 = 5;
    __asm__("int 0x80");
    if (__intrinsic() || (eax3 = 19, __intrinsic())) {
        addr_8048147_2:
    } else {
        *reinterpret_cast<signed char*>(&eax3) = -64;
        __asm__("int 0x80");
        edi2 = reinterpret_cast<signed char*>(0x80483f9);
        if (__intrinsic()) 
            goto addr_8048147_2; else 
            goto addr_80480c0_5;
    }
    do {
        __asm__("lodsb ");
        *edi2 = *reinterpret_cast<signed char*>(&eax3);
        ++edi2;
    } while (*reinterpret_cast<signed char*>(&eax3));
    edi4 = reinterpret_cast<struct s0*>(edi2 - 1);
    edi4->f0 = 0x676f6c20;
    edi4->f4 = 0x203a6e69;
    return;
    addr_80480c0_5:
    *reinterpret_cast<signed char*>(&eax5) = 10;
    g80483f9 = 10;
    edi2 = reinterpret_cast<signed char*>(0x80483fa);
    while (*reinterpret_cast<signed char*>(&eax5)) {
        if (*reinterpret_cast<signed char*>(&eax5) != 92) 
            goto addr_8048131_15;
        __asm__("lodsb ");
        if (*reinterpret_cast<signed char*>(&eax5) != 0x73) {
            if (*reinterpret_cast<signed char*>(&eax5) != 0x6e) {
                if (*reinterpret_cast<signed char*>(&eax5) != 0x6d) {
                    if (*reinterpret_cast<signed char*>(&eax5) != 0x6f) {
                        if (*reinterpret_cast<signed char*>(&eax5) != 0x72) {
                            if (*reinterpret_cast<signed char*>(&eax5) != 0x76) {
                                if (*reinterpret_cast<signed char*>(&eax5) != 0x6c) {
                                    addr_8048131_15:
                                } else {
                                    eax5 = g804826b;
                                    goto addr_8048124_24;
                                }
                            } else {
                                eax5 = 0x8048336;
                                goto addr_8048124_24;
                            }
                        } else {
                            eax5 = 0x80482f5;
                            goto addr_8048124_24;
                        }
                    } else {
                        eax5 = 0x80483b8;
                        goto addr_8048124_24;
                    }
                } else {
                    eax5 = 0x8048377;
                    goto addr_8048124_24;
                }
            } else {
                eax5 = 0x80482b4;
                goto addr_8048124_24;
            }
        } else {
            eax5 = 0x8048273;
            goto addr_8048124_24;
        }
        *edi2 = *reinterpret_cast<signed char*>(&eax5);
        ++edi2;
        continue;
        addr_8048124_24:
        do {
            __asm__("lodsb ");
            *edi2 = *reinterpret_cast<signed char*>(&eax5);
            ++edi2;
        } while (*reinterpret_cast<signed char*>(&eax5));
        --edi2;
    }
    __asm__("int 0x80");
    eax3 = 6;
    __asm__("int 0x80");
    goto addr_8048147_2;
}

struct s1 {
    void* f0;
    signed char[458751] pad458752;
    signed char f70000;
};

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
    struct s1* eax22;
    signed char* eax23;
    signed char dl24;

    if (less_or_equal2) {
        *ecx = *ecx + eax3;
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(*eax19));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<int32_t>(eax22));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) + 44;
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<int32_t>(eax22));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax22) - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax22) - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8);
        __asm__("arpl [edx], ax");
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax23 = &eax22->f70000;
        *eax23 = reinterpret_cast<signed char>(*eax23 + *reinterpret_cast<signed char*>(&eax23));
    }
    *eax23 = reinterpret_cast<signed char>(*eax23 + dl24);
    *eax23 = reinterpret_cast<signed char>(*eax23 + *reinterpret_cast<signed char*>(&eax23));
    __asm__("das ");
    if (!*eax23) 
        goto 0x80480b3;
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("insb ");
    __asm__("outsd ");
}

int32_t g804826f;

signed char g80483fb;

void fun_8048164(int32_t a1, int32_t a2) {
    g804826f = reinterpret_cast<int32_t>(__zero_stack_offset()) + 4 + reinterpret_cast<int32_t>(__return_address()) * 4 + 4;
    if (reinterpret_cast<int32_t>(__return_address()) - 1 && ((g804826b = a2, !__intrinsic()) && (!1 && (fun_8048070(0x804806a), !__intrinsic())))) {
        g80483fb = 0;
        __asm__("int 0x80");
    }
    __asm__("int 0x80");
}
