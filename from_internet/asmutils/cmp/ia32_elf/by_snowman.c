
void fun_8048070() {
    signed char* edi1;
    signed char al2;
    signed char al3;

    __asm__("lodsb ");
    do {
        *edi1 = al2;
        ++edi1;
        __asm__("lodsb ");
    } while (al3);
    *edi1 = 32;
    return;
}

void fun_804804c(int32_t a1) {
    int32_t ebx2;
    int32_t ecx3;
    signed char* edi4;
    signed char* esi5;
    int32_t esi6;
    int32_t esi7;
    int32_t edx8;
    int32_t eax9;
    int32_t ecx10;
    signed char* esi11;
    int1_t zf12;

    ebx2 = reinterpret_cast<int32_t>(__return_address());
    ecx3 = 16;
    edi4 = esi5;
    esi6 = esi7 + 16;
    do {
        edx8 = eax9 % ebx2;
        eax9 = eax9 / ebx2;
        *reinterpret_cast<signed char*>(esi6 + ecx3) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&edx8) + 48);
        --ecx3;
    } while (eax9);
    ecx10 = -(ecx3 - 16);
    esi11 = reinterpret_cast<signed char*>(esi6 + ecx3 + 1);
    zf12 = esi11 == 0;
    do {
        if (!ecx10) 
            break;
        --ecx10;
        *edi4 = *esi11;
        ++edi4;
        ++esi11;
    } while (!zf12);
    goto a1;
}

struct s0 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s1 {
    signed char[10] pad10;
    signed char fa;
};

struct s2 {
    signed char[10] pad10;
    signed char fa;
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
    void** eax22;
    void* tmp8_23;
    void** edx24;
    unsigned char* edx25;
    unsigned char* edi26;
    struct s0* edi27;
    void* tmp8_28;
    uint1_t cf29;
    struct s1* edx30;
    struct s2* edx31;

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
        if (__intrinsic()) {
            *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<int32_t>(eax22));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            tmp8_23 = *edx24;
            *edx25 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8);
            *reinterpret_cast<void**>(&eax22) = tmp8_23;
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            edi26 = &edi27->f1;
            *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))));
            *edi26 = reinterpret_cast<unsigned char>(*edi26 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        }
    }
    tmp8_28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    cf29 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_28) < reinterpret_cast<unsigned char>(*eax22));
    *eax22 = tmp8_28;
    *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))) + cf29);
    edx30->fa = reinterpret_cast<signed char>(edx31->fa + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
}

void fun_8048283() {
    __asm__("outsb ");
}

uint32_t g80482aa;

int32_t g80482a6;

signed char* g8048296;

signed char* g804829a;

int32_t g804829e;

int32_t g80482a2;

signed char g80482ae;

int32_t g8048286;

void fun_804807b(int32_t a1) {
    int32_t ebp2;
    int32_t v3;
    int32_t ebp4;
    int32_t ecx5;
    int32_t eax6;
    int32_t esi7;
    int32_t v8;
    int32_t ecx9;
    signed char* esi10;
    signed char* edi11;
    int32_t ecx12;
    int1_t less13;
    int32_t ecx14;
    int32_t ecx15;
    signed char* edi16;
    int32_t ebx17;
    int32_t v18;
    int32_t ecx19;
    int1_t zf20;
    int32_t edi21;
    int32_t esi22;

    if (reinterpret_cast<int32_t>(__return_address()) <= 2) {
        addr_80481f4_2:
    } else {
        ebp2 = 0;
        while (v3) {
            __asm__("lodsb ");
            if (1) {
                *reinterpret_cast<int32_t*>(ebp2 * 4 + 0x8048286) = v3 - 1;
                __asm__("int 0x80");
                if (__intrinsic()) 
                    goto addr_80481f4_2;
                *reinterpret_cast<int32_t*>(ebp2 * 4 + 0x804828e) = 5;
                if (ebp2) 
                    break;
                ++ebp2;
            } else {
                __asm__("lodsb ");
                if (0) {
                    *reinterpret_cast<int32_t*>(ebp2 * 4 + 0x8048286) = v3 - 1 - 1;
                    if (ebp2) 
                        break;
                    ++ebp2;
                } else {
                    if (0) {
                        g80482aa = g80482aa | 8;
                    } else {
                        if (1) 
                            goto addr_80481f4_2;
                        g80482aa = g80482aa | 16;
                    }
                }
            }
        }
        goto addr_80480f0_16;
    }
    while (1) {
        addr_80481eb_17:
        __asm__("int 0x80");
        addr_80481f0_18:
    }
    addr_80480f0_16:
    g80482a6 = 0x80484ae;
    ebp4 = -1;
    do {
        ++ebp4;
        __asm__("int 0x80");
        if (ebp4 = ebp4, ecx5 = 0xc0, eax6 = 19, __intrinsic()) {
            esi7 = g80482a6;
            v8 = esi7;
            do {
                ecx9 = esi7;
                esi7 = esi7 + 0x1000;
                __asm__("int 0x80");
                __asm__("int 0x80");
            } while (0);
            g80482a6 = esi7;
            ecx5 = v8;
            eax6 = 3 + ecx9 - ecx5;
        }
        *reinterpret_cast<int32_t*>(ebp4 * 4 + 0x8048296) = ecx5;
        *reinterpret_cast<int32_t*>(ebp4 * 4 + 0x804829e) = eax6;
    } while (!ebp4);
    esi10 = g8048296;
    edi11 = g804829a;
    ecx12 = g804829e;
    less13 = ecx12 < g80482a2;
    if (!less13) {
        ecx12 = g80482a2;
    }
    do {
        if (!ecx12) 
            break;
        --ecx12;
        ++edi11;
        ++esi10;
    } while (*esi10 == *edi11);
    if (ecx12) {
        ecx14 = g804829e;
        ecx15 = ecx14 - ecx12;
        edi16 = g8048296;
        ebx17 = 0;
        do {
            ++ebx17;
            do {
                if (!ecx15) 
                    break;
                --ecx15;
                ++edi16;
            } while (*edi16 != 10);
        } while (ecx15);
        fun_8048070();
        fun_8048070();
        fun_8048070();
        fun_804804c(ebx17);
        fun_8048070();
        fun_804804c(v18);
        g80482ae = 10;
        __asm__("int 0x80");
    } else {
        ecx19 = g804829e;
        zf20 = ecx19 == g80482a2;
        if (zf20) 
            goto addr_80481f0_18;
        __asm__("int 0x80");
        edi21 = g8048286;
        esi22 = edi21;
        do {
            __asm__("lodsb ");
        } while (1);
        *reinterpret_cast<signed char*>(esi22 - 1) = 10;
        __asm__("int 0x80");
    }
    goto addr_80481eb_17;
}

struct s3 {
    signed char[104] pad104;
    unsigned char f68;
};

struct s4 {
    signed char[104] pad104;
    unsigned char f68;
};

void fun_8048266(void* ecx) {
    int32_t ebp2;
    int32_t ebp3;
    void* edi4;
    unsigned char ah5;
    struct s3* ebx6;
    struct s4* ebx7;
    unsigned char ah8;

    __asm__("arpl [ebp+0x70], bp");
    ebp2 = ebp3 + 1;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi4) - 1 + 0x6e) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) + ebp2 * 2 + 0x66) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) + ebp2 * 2 + 0x66) & ah5);
    if (0) {
    }
    ebx6->f68 = reinterpret_cast<unsigned char>(ebx7->f68 & ah8);
    __asm__("popad ");
    __asm__("insb ");
}
