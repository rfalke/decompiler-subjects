
int32_t fun_8048157(unsigned char a1);

unsigned char fun_8048142(int32_t ecx, unsigned char a2, unsigned char a3) {
    unsigned char v4;
    unsigned char eax5;

    v4 = eax5;
    do {
        fun_8048157(v4);
        v4 = reinterpret_cast<unsigned char>(v4 - 1);
    } while (reinterpret_cast<signed char>(v4) >= reinterpret_cast<signed char>(0));
    return v4;
}

unsigned char fun_80481c8(unsigned char* ecx, unsigned char a2, unsigned char a3) {
    signed char* edx4;

    __asm__("pushad ");
    edx4 = reinterpret_cast<signed char*>(ecx - 1);
    do {
        ++edx4;
    } while (*edx4 >= 9);
    __asm__("int 0x80");
    __asm__("popad ");
    return 4;
}

int32_t fun_8048203();

unsigned char fun_80481de();

struct s0 {
    signed char[11] pad11;
    unsigned char fb;
};

struct s1 {
    signed char[11] pad11;
    unsigned char fb;
};

struct s2 {
    signed char[1] pad1;
    unsigned char f1;
};

int32_t fun_8048157(unsigned char a1) {
    unsigned char eax2;
    unsigned char eax3;
    unsigned char eax4;
    unsigned char edx5;
    unsigned char eax6;
    struct s0* ebp7;
    struct s1* ebp8;
    int16_t di9;
    unsigned char* ecx10;
    struct s2* ebp11;
    unsigned char* ecx12;
    unsigned char eax13;
    signed char* edx14;
    void* esi15;

    __asm__("rol eax, 0x8");
    fun_8048203();
    eax2 = fun_80481de();
    eax3 = fun_80481de();
    eax4 = fun_80481de();
    edx5 = eax4;
    eax6 = fun_80481de();
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebp7->fb & 0xff) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>((ebp8->fb & 0xff) == 0))) {
        if (!di9) {
            edx5 = eax6;
        }
        ecx10 = &ebp11->f1;
        *ecx10 = reinterpret_cast<unsigned char>(0x2720);
        fun_80481c8(ecx10, eax3, __return_address());
        ecx12 = ecx10 - 1;
        *ecx12 = eax2;
        fun_80481c8(ecx12, eax3, __return_address());
        *ecx12 = eax3;
        fun_80481c8(ecx12, __return_address(), a1);
        *ecx12 = edx5;
        eax13 = fun_80481c8(ecx12, __return_address(), a1);
        *ecx12 = eax13;
        fun_80481c8(ecx12, __return_address(), a1);
        *ecx12 = reinterpret_cast<unsigned char>(39);
        fun_80481c8(ecx12, __return_address(), a1);
    }
    __asm__("pushad ");
    edx14 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi15) + 18 - 1);
    do {
        ++edx14;
    } while (*edx14 >= 9);
    __asm__("int 0x80");
    __asm__("popad ");
    return 4;
}

struct s3 {
    signed char[8] pad8;
    unsigned char f8;
};

unsigned char fun_80481de() {
    uint32_t edx1;
    uint32_t eax2;
    int32_t ebx3;
    unsigned char* ecx4;
    struct s3* ebp5;
    unsigned char al6;

    __asm__("pushad ");
    edx1 = eax2;
    ebx3 = 8;
    ecx4 = &ebp5->f8;
    *ecx4 = 32;
    do {
        al6 = reinterpret_cast<unsigned char>(15 & *reinterpret_cast<unsigned char*>(&edx1));
        edx1 = edx1 >> 4;
        --ecx4;
        __asm__("das ");
        *ecx4 = reinterpret_cast<unsigned char>(al6 - reinterpret_cast<unsigned char>(0x69 + reinterpret_cast<uint1_t>(al6 < reinterpret_cast<unsigned char>(0x69 + reinterpret_cast<uint1_t>(al6 < 10)))));
        --ebx3;
    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(ebx3 < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(ebx3 == 0)));
    __asm__("int 0x80");
    __asm__("popad ");
    return 4;
}

struct s4 {
    signed char[8] pad8;
    unsigned char f8;
};

int32_t fun_8048203() {
    uint32_t edx1;
    uint32_t eax2;
    int32_t ebx3;
    unsigned char* ecx4;
    struct s4* ebp5;
    unsigned char al6;

    __asm__("pushad ");
    edx1 = eax2;
    ebx3 = 2;
    ecx4 = &ebp5->f8;
    *ecx4 = 32;
    do {
        al6 = reinterpret_cast<unsigned char>(15 & *reinterpret_cast<unsigned char*>(&edx1));
        edx1 = edx1 >> 4;
        --ecx4;
        __asm__("das ");
        *ecx4 = reinterpret_cast<unsigned char>(al6 - reinterpret_cast<unsigned char>(0x69 + reinterpret_cast<uint1_t>(al6 < reinterpret_cast<unsigned char>(0x69 + reinterpret_cast<uint1_t>(al6 < 10)))));
        --ebx3;
    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(ebx3 < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(ebx3 == 0)));
    __asm__("int 0x80");
    __asm__("popad ");
    return 4;
}

int32_t fun_8048060(int32_t a1) {
    int32_t ecx2;
    int32_t eax3;
    signed char* edi4;
    signed char al5;

    ecx2 = eax3 - 1;
    do {
        if (!ecx2) 
            break;
        --ecx2;
        ++edi4;
    } while (*edi4 != al5);
    if (*reinterpret_cast<int32_t*>(edi4 - 5) == 0x64656570 && *reinterpret_cast<int32_t*>(edi4 - 9) == 0x73757063) {
    }
    goto a1;
}

struct s5 {
    signed char[8] pad8;
    unsigned char f8;
};

struct s6 {
    signed char[11] pad11;
    signed char fb;
};

struct s7 {
    signed char[11] pad11;
    signed char fb;
};

struct s8 {
    signed char[11] pad11;
    signed char fb;
};

struct s9 {
    signed char[9] pad9;
    unsigned char f9;
};

void fun_8048000(unsigned char* ecx, unsigned char a2) {
    unsigned char v3;
    int1_t less_or_equal4;
    struct s5* esi5;
    void* esi6;
    int32_t eax7;
    int32_t* ebx8;
    int32_t* ebx9;
    int32_t eax10;
    signed char* eax11;
    signed char* eax12;
    signed char al13;
    signed char* eax14;
    signed char* eax15;
    signed char al16;
    signed char* eax17;
    signed char* eax18;
    signed char al19;
    signed char* eax20;
    signed char* eax21;
    signed char al22;
    void** eax23;
    signed char al24;
    signed char* eax25;
    void** eax26;
    unsigned char* edx27;
    unsigned char* edx28;
    unsigned char* edx29;
    unsigned char* edx30;
    void** tmp32_31;
    uint1_t cf32;
    void** eax33;
    struct s6* ebp34;
    struct s7* ebp35;
    struct s8* ebp36;
    uint32_t eax37;
    unsigned char v38;
    unsigned char* ecx39;
    struct s9* ebp40;
    uint32_t edx41;
    int32_t eax42;
    signed char al43;
    unsigned char* edi44;

    v3 = reinterpret_cast<unsigned char>(__return_address());
    if (less_or_equal4) {
        esi5 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(esi6) + 1);
        *ecx = reinterpret_cast<unsigned char>(*ecx + eax7);
        *ebx8 = *ebx9 + eax10;
        *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
        *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
        *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
        *eax20 = reinterpret_cast<signed char>(*eax21 + al22);
        *reinterpret_cast<signed char*>(&eax23) = reinterpret_cast<signed char>(al24 + *eax25);
        eax26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<uint32_t>(*eax23));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<uint32_t>(eax26));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*eax26) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*eax26 == 0))) {
            *reinterpret_cast<void**>(&eax26) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)) + 8)));
            *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            *reinterpret_cast<void**>(&eax26) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26))));
            *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<uint32_t>(eax26));
            *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            *reinterpret_cast<unsigned char*>(eax26 + 0x80000804) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax26 + 0x80000804) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            *reinterpret_cast<void**>(&eax26) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)) + 8);
            *edx27 = reinterpret_cast<unsigned char>(*edx28 | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            *edx29 = reinterpret_cast<unsigned char>(*edx30 | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            tmp32_31 = eax26;
            cf32 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_31) < reinterpret_cast<uint32_t>(eax26));
            eax33 = tmp32_31;
        }
    }
    *eax33 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax33) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax33))) + cf32);
    *ecx = reinterpret_cast<unsigned char>(*ecx + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax33)));
    *eax33 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax33) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax33)));
    *reinterpret_cast<void**>(&eax33) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax33)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax33)));
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax33)) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&eax33) == 0)) {
        if (reinterpret_cast<int1_t>(eax33 == 0x69742d2d)) {
            ebp34->fb = -ebp35->fb;
        }
        if (0) {
            while (1) {
                fun_80481c8(&esi5->f8, v3, a2);
                addr_80480f6_10:
                __asm__("int 0x80");
            }
        } else {
            if (0 > ebp36->fb) {
                __asm__("rdtsc ");
                __asm__("int 0x80");
                __asm__("rdtsc ");
                eax37 = 81;
                v38 = reinterpret_cast<unsigned char>(0);
                ecx39 = &ebp40->f9;
                *ecx39 = reinterpret_cast<unsigned char>(10);
                do {
                    --ecx39;
                    v38 = reinterpret_cast<unsigned char>(v38 + 1);
                    edx41 = eax37 % reinterpret_cast<unsigned char>(10);
                    eax37 = eax37 / reinterpret_cast<unsigned char>(10);
                    *ecx39 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx41) | 48);
                } while (eax37);
                fun_80481c8(ecx39, v38, v3);
                goto addr_80480f6_10;
            } else {
                fun_8048142(__intrinsic(), __intrinsic(), v3);
                if (__intrinsic() < 0) {
                    fun_8048142(__intrinsic(), __intrinsic(), v3);
                }
                if (__intrinsic() < reinterpret_cast<unsigned char>(2)) 
                    goto addr_80480f6_10;
                eax42 = __intrinsic();
                al43 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax42) - 1);
                if (reinterpret_cast<uint1_t>(al43 < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(al43 == 0)) 
                    goto addr_80480f6_10;
                fun_8048142(__intrinsic(), v3, a2);
                goto addr_80480f6_10;
            }
        }
    } else {
        *edi44 = 0;
        __asm__("arpl [eax+0x75], si");
    }
}

void fun_804807f(int32_t a1, int32_t* a2) {
    int32_t eax3;
    int32_t eax4;
    int32_t eax5;

    eax3 = fun_8048060(a1);
    eax4 = eax3 - 1;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4 + reinterpret_cast<int32_t>(__return_address()) * 4 + 4 + 11) = *reinterpret_cast<signed char*>(&eax4);
    if (reinterpret_cast<uint1_t>(eax4 < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(eax4 == 0)) 
        goto 0x80480ab;
    eax5 = *a2;
    if (*reinterpret_cast<int16_t*>(&eax5) == 0x742d) 
        goto 0x80480a8; else 
        goto "???";
}
