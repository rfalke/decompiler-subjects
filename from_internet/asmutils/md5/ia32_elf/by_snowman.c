
uint32_t fun_804806d(uint32_t ecx) {
    int32_t edx2;
    uint32_t ebx3;

    return (reinterpret_cast<uint32_t>(~edx2) | ebx3) ^ ecx;
}

uint32_t fun_8048066(uint32_t ecx) {
    uint32_t ebx2;
    uint32_t edx3;

    return ebx2 ^ ecx ^ edx3;
}

uint32_t fun_8048059(uint32_t ecx) {
    uint32_t edx2;
    uint32_t ebx3;
    int32_t edx4;

    return edx2 & ebx3 | reinterpret_cast<uint32_t>(~edx4) & ecx;
}

uint32_t fun_804804c(int32_t* ecx) {
    uint32_t edx2;
    uint32_t ebx3;
    int32_t edx4;

    __asm__("fdiv st0, st7");
    *ecx = *ecx << *reinterpret_cast<unsigned char*>(&ecx);
    __asm__("enter 0xd321, 0x9");
    __asm__("fcomp dword [ebx-0x3d]");
    return edx2 & ebx3 | reinterpret_cast<uint32_t>(~edx4) & reinterpret_cast<uint32_t>(ecx);
}

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
    uint1_t cf24;
    signed char* eax25;
    signed char* edx26;
    unsigned char* eax27;
    signed char* edi28;
    signed char* edi29;
    unsigned char tmp8_30;
    uint1_t cf31;
    int32_t ebx32;
    int32_t ebx33;
    signed char dl34;

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
        tmp8_23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        cf24 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_23) < reinterpret_cast<unsigned char>(*eax22));
        *eax22 = tmp8_23;
        if (!(cf24 | reinterpret_cast<uint1_t>(*eax22 == 0))) {
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
            eax25 = edx26;
            *eax25 = reinterpret_cast<signed char>(*eax25 + *reinterpret_cast<signed char*>(&eax25));
            eax27 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(eax25))));
            *edi28 = reinterpret_cast<signed char>(*edi29 + *reinterpret_cast<signed char*>(&eax27));
            *eax27 = reinterpret_cast<unsigned char>(*eax27 + *reinterpret_cast<signed char*>(&eax27));
        }
    }
    tmp8_30 = reinterpret_cast<unsigned char>(*eax27 + *reinterpret_cast<signed char*>(&eax27));
    cf31 = reinterpret_cast<uint1_t>(tmp8_30 < *eax27);
    *eax27 = tmp8_30;
    *eax27 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax27 + *reinterpret_cast<signed char*>(&eax27)) + cf31);
    *reinterpret_cast<signed char*>(ebx32 - 0x77) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx33 - 0x77) + dl34);
}

void fun_804828b() {
}

struct s0 {
    unsigned char f0;
    signed char[134513292] pad134513293;
    unsigned char f804828d;
};

int32_t g80483cd;

int32_t g80483d1;

int32_t g80483d5;

int32_t g80483d9;

void* g80483dd;

int16_t g80483e1;

struct s1 {
    void* f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
};

struct s2 {
    unsigned char f0;
    signed char[3] pad4;
    struct s0* f4;
};

struct s3 {
    unsigned char f0;
    unsigned char f1;
};

struct s4 {
    unsigned char f0;
    unsigned char f1;
};

signed char g1;

uint32_t g70c1116;

int32_t g1050001;

void fun_8048076(int32_t a1, int32_t a2) {
    unsigned char** edi3;
    unsigned char* edx4;
    struct s0* ebp5;
    struct s0* edi6;
    struct s0* ecx7;
    struct s0* ebx8;
    struct s0* eax9;
    struct s0* edx10;
    void* tmp32_11;
    struct s0* v12;
    struct s0* edx13;
    struct s0* ecx14;
    struct s0* ebx15;
    struct s0* eax16;
    struct s1* esi17;
    int32_t ebp18;
    uint32_t v19;
    int1_t zf20;
    int1_t zf21;
    struct s2* eax22;
    struct s2* edi23;
    void* eax24;
    void* ecx25;
    struct s0* ecx26;
    struct s2* edi27;
    void* eax28;
    struct s3* edi29;
    int32_t ecx30;
    struct s4* edi31;
    struct s0* v32;
    signed char tmp8_33;
    signed char tmp8_34;
    signed char tmp8_35;
    uint32_t ecx36;
    uint32_t tmp32_37;
    uint32_t eax38;

    __asm__("wait ");
    __asm__("fnstcw word [esp]");
    __asm__("fldcw word [esp]");
    edi3 = reinterpret_cast<unsigned char**>(0x80482cd);
    do {
        ++edx4;
        __asm__("fild dword [esp]");
        __asm__("fsin ");
        __asm__("fabs ");
        __asm__("fmul qword [0x804825b]");
        __asm__("fistp qword [esp]");
        *edi3 = edx4;
        ++edi3;
    } while (reinterpret_cast<int32_t>(edx4) < reinterpret_cast<int32_t>(64));
    ebp5 = reinterpret_cast<struct s0*>(0);
    if (a2) 
        goto addr_80480ab_7;
    while (1) {
        g80483cd = 0x67452301;
        g80483d1 = 0xefcdab89;
        g80483d5 = 0x98badcfe;
        g80483d9 = 0x10325476;
        g80483dd = reinterpret_cast<void*>(0);
        g80483e1 = 0;
        while (1) {
            edi6 = reinterpret_cast<struct s0*>(0x804828d);
            edx4 = reinterpret_cast<unsigned char*>(64);
            do {
                ecx7 = edi6;
                ebx8 = ebp5;
                eax9 = reinterpret_cast<struct s0*>(3);
                __asm__("int 0x80");
                edx4 = edx4 - 3;
                edi6 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(edi6) + 3);
                if (__intrinsic()) 
                    goto addr_8048255_28;
            } while (1);
            edx10 = reinterpret_cast<struct s0*>(-reinterpret_cast<uint32_t>(edx4 - 64));
            tmp32_11 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(g80483dd) + reinterpret_cast<uint32_t>(edx10));
            g80483dd = tmp32_11;
            if (reinterpret_cast<int32_t>(edx10) >= reinterpret_cast<int32_t>(64)) {
                addr_804816f_31:
                v12 = ebp5;
                __asm__("lodsd ");
                edx13 = eax9;
                __asm__("lodsd ");
                ecx14 = edx10;
                __asm__("lodsd ");
                ebx15 = ecx7;
                eax16 = ebx8;
                __asm__("lodsd ");
                esi17 = reinterpret_cast<struct s1*>(0x80482cd);
                ebp18 = 3;
                v19 = 15;
            } else {
                if (edx10) 
                    goto addr_8048129_33;
                zf20 = *reinterpret_cast<signed char*>(&g80483e1) == 0;
                if (!zf20) 
                    break;
                addr_8048129_33:
                zf21 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&g80483e1) + 1) == 0;
                if (!zf21) 
                    goto addr_804813d_35; else 
                    goto addr_8048132_36;
            }
            do {
                eax22 = reinterpret_cast<struct s2*>(0);
                *reinterpret_cast<signed char*>(&eax22) = *reinterpret_cast<signed char*>(ebp18 + 0x8048279);
                edi23 = eax22;
                eax16 = eax16;
                do {
                    eax24 = reinterpret_cast<void*>(*reinterpret_cast<int32_t*>(ebp18 * 4 + 0x804827d)());
                    ecx25 = reinterpret_cast<void*>(v19 & 3);
                    __asm__("rol eax, cl");
                    *reinterpret_cast<signed char*>(&ecx25) = *reinterpret_cast<signed char*>(ebp18 + 0x8048275);
                    edi23 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(edi23) + reinterpret_cast<uint32_t>(ecx25) & 15);
                    esi17 = reinterpret_cast<struct s1*>(&esi17->f4);
                    ecx26 = edx13;
                    edx13 = ecx14;
                    ecx14 = ebx15;
                    ebx15 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(eax16) + reinterpret_cast<uint32_t>(eax24) + reinterpret_cast<uint32_t>(esi17->f0) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edi23) * 4 + 0x804828d)) + reinterpret_cast<uint32_t>(ebx15));
                    eax16 = ecx26;
                    --v19;
                } while (reinterpret_cast<int32_t>(v19) >= reinterpret_cast<int32_t>(0));
                v19 = v19 & 15;
                --ebp18;
            } while (ebp18 >= 0);
            esi17->f0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi17->f0) + reinterpret_cast<uint32_t>(eax16));
            esi17->f4 = esi17->f4 + reinterpret_cast<uint32_t>(ebx15);
            esi17->f8 = esi17->f8 + reinterpret_cast<uint32_t>(ecx14);
            esi17->fc = esi17->fc + reinterpret_cast<uint32_t>(edx13);
            ebp5 = v12;
            continue;
            addr_804813d_35:
            if (reinterpret_cast<int32_t>(edx10) > reinterpret_cast<int32_t>(56)) {
                edi23 = reinterpret_cast<struct s2*>(&edx10->f804828d);
                ecx7 = reinterpret_cast<struct s0*>(64 - reinterpret_cast<uint32_t>(edx10));
                *reinterpret_cast<unsigned char*>(&eax9) = 0;
                while (ecx7) {
                    ecx7 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ecx7) - 1);
                    edi23->f0 = 0;
                    edi23 = reinterpret_cast<struct s2*>(&edi23->pad4);
                }
                goto addr_804816f_31;
            } else {
                edi27 = reinterpret_cast<struct s2*>(&edx10->f804828d);
                ecx7 = reinterpret_cast<struct s0*>(56 - reinterpret_cast<uint32_t>(edx10));
                while (ecx7) {
                    ecx7 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ecx7) - 1);
                    edi27->f0 = 0;
                    edi27 = reinterpret_cast<struct s2*>(&edi27->pad4);
                }
                eax28 = g80483dd;
                edi27->f0 = reinterpret_cast<unsigned char>(reinterpret_cast<uint32_t>(eax28) << 3);
                eax9 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(eax28) >> 29);
                edi27->f4 = eax9;
                *reinterpret_cast<signed char*>(&g80483e1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&g80483e1) + 1);
                goto addr_804816f_31;
            }
            addr_8048132_36:
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&g80483e1) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&g80483e1) + 1) + 1);
            edx10->f804828d = 0x80;
            edx10 = reinterpret_cast<struct s0*>(&edx10->pad134513293);
            goto addr_804813d_35;
        }
        edi29 = reinterpret_cast<struct s3*>(0x80483e3);
        ecx30 = 16;
        do {
            __asm__("lodsb ");
            __asm__("aam 0xa");
            __asm__("aad 0x31");
            *reinterpret_cast<unsigned char*>(&eax9) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax9) >> 4) + 48);
            edi29->f0 = *reinterpret_cast<unsigned char*>(&eax9);
            edi31 = reinterpret_cast<struct s4*>(&edi29->f1);
            __asm__("aam 0xa");
            __asm__("aad 0x31");
            *reinterpret_cast<unsigned char*>(&eax9) = 51;
            edi31->f0 = 51;
            edi29 = reinterpret_cast<struct s3*>(&edi31->f1);
            --ecx30;
        } while (ecx30);
        __asm__("int 0x80");
        if (ebp5) {
            __asm__("int 0x80");
            do {
                __asm__("lodsb ");
            } while (1);
            __asm__("int 0x80");
        }
        edx4 = reinterpret_cast<unsigned char*>(1);
        ecx7 = reinterpret_cast<struct s0*>(0x8048264);
        __asm__("int 0x80");
        addr_80480ab_7:
        ebx8 = v32;
        if (!ebx8) 
            goto addr_8048256_67;
        ecx7 = reinterpret_cast<struct s0*>(0);
        eax9 = reinterpret_cast<struct s0*>(5);
        __asm__("int 0x80");
        if (__intrinsic()) 
            break;
        ebp5 = reinterpret_cast<struct s0*>(5);
    }
    addr_8048255_28:
    ebx8 = eax9;
    addr_8048256_67:
    __asm__("int 0x80");
    tmp8_33 = reinterpret_cast<signed char>(g1 + 1);
    g1 = tmp8_33;
    tmp8_34 = reinterpret_cast<signed char>(g1 + 1);
    g1 = tmp8_34;
    tmp8_35 = reinterpret_cast<signed char>(g1 + 1);
    g1 = tmp8_35;
    ecx36 = reinterpret_cast<uint32_t>(&ecx7->pad134513293);
    *edx4 = reinterpret_cast<unsigned char>(*edx4 & *reinterpret_cast<unsigned char*>(&ecx36));
    ebx8->f0 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(ebx8->f0 + *reinterpret_cast<unsigned char*>(&ecx36))));
    g70c1116 = g70c1116 | 0x17060a24;
    tmp32_37 = 0x17060a24 + g1050001;
    eax38 = tmp32_37;
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp5) + 0xffffff80) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp5) + 0xffffff80) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx36) + 1));
    *reinterpret_cast<signed char*>(&eax38) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax38) + 8);
    *reinterpret_cast<signed char*>(eax38 + ecx36) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax38 + ecx36) + 89);
    *reinterpret_cast<signed char*>(eax38 + ecx36) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax38 + ecx36) + 76);
}
