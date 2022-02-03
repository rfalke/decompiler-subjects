
struct s0 {
    signed char[1] pad1;
    unsigned char f1;
};

int32_t fun_804804c(int32_t ecx, int32_t a2, int32_t a3) {
    int32_t ebx4;
    unsigned char cl5;
    unsigned char* esi6;
    unsigned char* esi7;
    struct s0* esi8;

    ebx4 = 0;
    cl5 = *esi6;
    if (cl5 == 45) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx4) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx4) + 1) + 1);
        esi7 = &esi8->f1;
        goto addr_8048063_3;
    }
    while (cl5 >= 48 && reinterpret_cast<unsigned char>(cl5 - 48) <= 9) {
        ++esi7;
        addr_8048063_3:
        cl5 = *esi7;
    }
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx4) + 1)) 
        goto addr_804807c_7;
    addr_804807e_8:
    goto a3;
    addr_804807c_7:
    goto addr_804807e_8;
}

struct s1 {
    int32_t f0;
    signed char[83] pad87;
    signed char f57;
};

void fun_8048000(struct s1* ecx) {
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
    unsigned char* edx23;
    void* tmp8_24;
    uint1_t cf25;
    signed char dl26;

    if (less_or_equal2) {
        ecx->f0 = ecx->f0 + eax3;
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(*eax19));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<int32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) + 44;
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
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8) - 2);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) ^ *edx23);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    }
    tmp8_24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    cf25 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_24) < reinterpret_cast<unsigned char>(*eax22));
    *eax22 = tmp8_24;
    *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))) + cf25);
    ecx->f57 = reinterpret_cast<signed char>(ecx->f57 + dl26);
}

struct s2 {
    signed char[84] pad84;
    unsigned char f54;
};

struct s3 {
    signed char[1] pad1;
    signed char f1;
};

signed char g1d044f49;

struct s4 {
    signed char[1] pad1;
    int32_t f1;
    signed char[79] pad84;
    signed char f54;
};

struct s5 {
    signed char[79] pad79;
    unsigned char f4f;
};

struct s6 {
    signed char f0;
    signed char f1;
};

void fun_8048081(int32_t* ecx) {
    void* eax2;
    int32_t eax3;
    void* eax4;
    void** edx5;
    void** ecx6;
    int32_t* eax7;
    void* edx8;
    void* edx9;
    int32_t ecx10;
    int32_t ecx11;
    void* esp12;
    uint128_t v13;
    uint32_t eax14;
    struct s2* ebx15;
    void* ebx16;
    int32_t* esi17;
    void* esi18;
    uint32_t eax19;
    int32_t* edi20;
    void* edi21;
    uint32_t tmp32_22;
    int32_t edx23;
    struct s3* ebx24;
    signed char tmp8_25;
    uint48_t v26;
    int32_t eax27;
    signed char* ebx28;
    struct s4* esi29;
    signed char* edx30;
    int32_t ecx31;
    int32_t ebp32;
    int32_t ebp33;
    struct s5* edi34;
    int32_t ebx35;
    uint160_t v36;
    int32_t ebx37;
    int32_t ebx38;
    signed char* esi39;
    int32_t eax40;
    int32_t eax41;
    int32_t ebx42;
    int32_t edx43;
    int32_t esi44;
    int32_t eax45;
    unsigned char* edi46;
    uint32_t esi47;

    eax2 = reinterpret_cast<void*>(eax3 + *ecx - 1);
    eax4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax2) + reinterpret_cast<int32_t>(*edx5));
    *reinterpret_cast<signed char*>(&eax4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax4) + 3);
    ecx6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ecx) - 1 - 1);
    eax7 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax4) + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(ecx6) + reinterpret_cast<int32_t>(ecx6) * 2)));
    *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax7) + 6);
    edx8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx9) + 1);
    ecx10 = reinterpret_cast<int32_t>(ecx6) + 1 + *eax7;
    *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax7) + 9) + 11) + 14) + 13);
    ecx11 = ecx10 - 1 + 1 - 1;
    *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax7) + 15) + 10);
    esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 1 - 1 - 4 - 4 - 4 - 1 - 1 - 4 - 4 - 1 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4);
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(esp12) + ecx11) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(esp12) + ecx11) ^ reinterpret_cast<uint32_t>(eax7);
    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&v13) + 12) = edx8;
    *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax7) ^ *reinterpret_cast<unsigned char*>(ecx11 + reinterpret_cast<int32_t>(edx8)));
    eax14 = reinterpret_cast<uint32_t>(eax7) - 1;
    ebx15 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(ebx16) - 1 + 1 + 1);
    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v13) + 8) = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp12) - 4 - 4 - 4 - 1 + 1 - 4);
    *reinterpret_cast<signed char*>(&eax14) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax14) + 18) + 19);
    *reinterpret_cast<struct s2**>(reinterpret_cast<int32_t>(&v13) + 4) = ebx15;
    *reinterpret_cast<signed char*>(&eax14) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax14) + 20);
    esi17 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi18) - 1 + 1 - 1 - 1);
    *reinterpret_cast<signed char*>(&eax14) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax14) + 21) + 22) + 5);
    eax19 = eax14 + *esi17;
    edi20 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi21) + 1 - 1 - 1 - 1 - 1);
    tmp32_22 = eax19 + *edi20;
    edx23 = reinterpret_cast<int32_t>(edx8) + 1;
    ebx15->f54 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ebx15->f54 + *reinterpret_cast<signed char*>(&edx23)) + reinterpret_cast<uint1_t>(tmp32_22 < eax19));
    ebx24 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(ebx15) - 1);
    tmp8_25 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ebx24) + g1d044f49);
    *reinterpret_cast<signed char*>(&ebx24) = tmp8_25;
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v26) + 2) = tmp32_22;
    eax27 = *reinterpret_cast<int32_t*>(&v26);
    ebx28 = &ebx24->f1;
    esi29 = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(esi17) + 1 + 1);
    edx30 = ebx28;
    *reinterpret_cast<unsigned char*>(&edx30) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx30) - reinterpret_cast<unsigned char>(esi29->f54 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx30) < reinterpret_cast<unsigned char>(esi29->f54 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax27) + 25) < *reinterpret_cast<unsigned char*>(&eax27))))));
    ecx31 = ecx11 - 1 + 1 - 1 + 1;
    ebp32 = ebp33 + 1 + 1 - 1 + 1 + 1 - 1 - 1;
    edi34 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(edi20) + 1 - 1 - 1);
    ebx35 = reinterpret_cast<int32_t>(ebx28) + esi29->f1;
    *reinterpret_cast<struct s5**>(reinterpret_cast<int32_t>(&v36) + 16) = edi34;
    *reinterpret_cast<signed char**>(reinterpret_cast<int32_t>(&v36) + 12) = edx30;
    ebx37 = ebx35 + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v36) + 8) = ebp32;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v36) + 4) = ebp32;
    *edx30 = reinterpret_cast<signed char>(*edx30 + *reinterpret_cast<signed char*>(&ecx31));
    edi34->f4f = reinterpret_cast<unsigned char>(edi34->f4f & *reinterpret_cast<unsigned char*>(&ebx37));
    if (!edi34->f4f) 
        goto addr_8048227_2;
    *reinterpret_cast<signed char*>(&ebx38) = (*reinterpret_cast<struct s6**>(reinterpret_cast<int32_t>(&v36) + 5))->f0;
    if (*reinterpret_cast<signed char*>(&ebx38) != 45) {
        ecx31 = 15;
        goto addr_8048214_5;
    }
    esi39 = &(*reinterpret_cast<struct s6**>(reinterpret_cast<int32_t>(&v36) + 5))->f1;
    *reinterpret_cast<signed char*>(&ebx38) = *esi39;
    if (*reinterpret_cast<signed char*>(&ebx38) == 0x6c) 
        goto addr_804816a_7;
    edi34 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(edi34) - 1);
    if (!edi34) 
        goto addr_8048227_2;
    eax40 = fun_804804c(ecx31, *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v36) + 9), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v36) + 13));
    if (!*reinterpret_cast<signed char*>(&ebx38)) {
        eax41 = 0;
        while (*esi39) {
            *reinterpret_cast<signed char*>(eax41 + 0x804822c) = *esi39;
            if (*reinterpret_cast<signed char*>(&eax41) == 5) 
                goto addr_80481df_13;
            *reinterpret_cast<signed char*>(&eax41) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax41) + 1);
            ++esi39;
        }
        if (!*reinterpret_cast<signed char*>(&eax41)) {
            addr_8048227_2:
            __asm__("int 0x80");
        } else {
            addr_80481df_13:
            ebx42 = 0;
            edx43 = -2;
        }
        while (1) {
            *reinterpret_cast<signed char*>(&ecx31) = *reinterpret_cast<signed char*>(&eax41);
            esi44 = 0;
            do {
                edx43 = edx43 + 1 + 1;
                *reinterpret_cast<signed char*>(&edx43) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&edx43) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx42) + 1));
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx42) + 1) = *reinterpret_cast<signed char*>(edx43 + reinterpret_cast<int32_t>(fun_8048081));
                if (!*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx42) + 1)) 
                    goto addr_8048227_2;
            } while (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx42) + 1) != *reinterpret_cast<signed char*>(&ecx31));
            do {
                *reinterpret_cast<signed char*>(&ebx38) = *reinterpret_cast<signed char*>(esi44 + 0x804822c);
                if (*reinterpret_cast<signed char*>(&ebx38) != *reinterpret_cast<signed char*>(edx43 + esi44 + 0x8048083)) 
                    break;
                ++esi44;
                --ecx31;
            } while (ecx31);
            break;
        }
        *reinterpret_cast<signed char*>(&ecx31) = *reinterpret_cast<signed char*>(edx43 + 0x8048082);
    } else {
        ecx31 = eax40;
    }
    do {
        addr_8048214_5:
        eax45 = fun_804804c(ecx31, *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v13) + 5), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v13) + 9));
    } while (*reinterpret_cast<signed char*>(&ebx38) && (ebx38 = eax45, edi34 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(edi34) - 1), !!edi34));
    goto addr_8048227_2;
    addr_804816a_7:
    edi46 = reinterpret_cast<unsigned char*>(fun_8048081);
    while (*edi46) {
        esi47 = *edi46 & 15;
        __asm__("int 0x80");
        __asm__("int 0x80");
        edi46 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi46 + 1 + 1) + esi47);
    }
    __asm__("int 0x80");
    goto addr_8048227_2;
}
