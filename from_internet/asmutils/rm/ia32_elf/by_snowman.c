
uint16_t g80481db;

uint32_t fun_8048177() {
    uint32_t eax1;
    uint32_t eax2;

    __asm__("pushad ");
    eax1 = 0x6b;
    __asm__("int 0x80");
    if (!0) {
        eax2 = g80481db;
        eax1 = eax2 & 0x4000;
    }
    __asm__("popad ");
    return eax1;
}

struct s0 {
    signed char[8] pad8;
    int16_t f8;
    signed char fa;
};

struct s1 {
    signed char f0;
    signed char f1;
};

int32_t fun_8048148();

uint32_t fun_8048094(void* a1) {
    void* esp2;
    void* ebp3;
    uint32_t eax4;
    struct s0* edi5;
    uint32_t ecx6;
    struct s1* edx7;
    signed char ax8;
    int1_t zf9;
    int32_t eax10;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebp3 = esp2;
    eax4 = fun_8048177();
    if (reinterpret_cast<int32_t>(esp2) - 0x110e || (eax4 = 5, 0)) {
        addr_8048140_2:
        return eax4;
    } else {
        while (eax4 = 0, *reinterpret_cast<signed char*>(&eax4) = 0x8d, !0) {
            if (0) 
                goto addr_8048138_6;
            edi5 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(ebp3) - 0x10e);
            ecx6 = 0x8d;
            do {
                edx7 = reinterpret_cast<struct s1*>(&edi5->fa);
                ax8 = reinterpret_cast<signed char>(46);
                zf9 = edx7->f0 == 46;
                if (!zf9 || edx7->f1 != (&ax8)[1] && (zf9 = edx7->f1 == 46, !zf9)) {
                    fun_8048148();
                    fun_8048177();
                    if (!zf9) {
                        __asm__("int 0x80");
                    } else {
                        __asm__("pushad ");
                        fun_8048094(reinterpret_cast<int32_t>(ebp3) - 0x110e);
                        __asm__("int 0x80");
                        __asm__("popad ");
                    }
                    edi5 = edi5;
                }
                eax10 = 0;
                *reinterpret_cast<int16_t*>(&eax10) = edi5->f8;
                edi5 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(edi5) + eax10);
                ecx6 = ecx6 - eax10;
            } while (ecx6);
        }
        goto addr_8048140_2;
    }
    addr_8048138_6:
    eax4 = 6;
    __asm__("int 0x80");
    goto addr_8048140_2;
}

int32_t fun_80481ae();

void fun_804815c();

int32_t fun_80481bb();

int32_t fun_8048148() {
    int32_t eax1;

    __asm__("pushad ");
    fun_80481ae();
    fun_804815c();
    eax1 = fun_80481bb();
    __asm__("popad ");
    return eax1;
}

int32_t fun_804819e();

int32_t fun_80481ae() {
    int32_t eax1;
    int32_t ecx2;
    int32_t edx3;
    signed char* edi4;
    signed char* esi5;

    __asm__("pushad ");
    eax1 = fun_804819e();
    ecx2 = edx3 + 1;
    while (ecx2) {
        --ecx2;
        *edi4 = *esi5;
        ++edi4;
        ++esi5;
    }
    __asm__("popad ");
    return eax1;
}

int32_t fun_80481bb() {
    signed char* esi1;
    signed char* esi2;
    signed char* edi3;
    int32_t edi4;
    int32_t edx5;
    int32_t eax6;
    int32_t ecx7;
    int32_t edx8;

    __asm__("pushad ");
    fun_804819e();
    esi1 = esi2;
    edi3 = reinterpret_cast<signed char*>(edi4 + edx5);
    eax6 = fun_804819e();
    ecx7 = edx8 + 1;
    while (ecx7) {
        --ecx7;
        *edi3 = *esi1;
        ++edi3;
        ++esi1;
    }
    __asm__("popad ");
    return eax6;
}

void fun_804815c() {
    int32_t edx1;
    int32_t edx2;
    int32_t edi3;
    int32_t edi4;

    fun_804819e();
    edx1 = edx2 - 1;
    if (*reinterpret_cast<signed char*>(edi3 + edx1) != 47) {
        *reinterpret_cast<int16_t*>(edi4 + (edx1 + 1)) = 47;
    }
    return;
}

int32_t fun_804819e() {
    int32_t v1;
    int32_t eax2;

    v1 = eax2;
    do {
        __asm__("lodsb ");
    } while (0);
    return v1;
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
    signed char dh23;
    void* tmp8_24;
    uint1_t cf25;
    signed char bl26;

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
        __asm__("rol dword [ecx], cl");
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    }
    tmp8_24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    cf25 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_24) < reinterpret_cast<unsigned char>(*eax22));
    *eax22 = tmp8_24;
    *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))) + cf25);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) - 0x7d) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) - 0x7d) + bl26);
}

struct s2 {
    signed char[73] pad73;
    signed char f49;
};

struct s3 {
    signed char[73] pad73;
    signed char f49;
};

void fun_8048052() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    struct s2* eax4;
    struct s3* eax5;
    signed char bl6;
    int32_t ebp7;
    int1_t zf8;
    void* v9;

    __asm__("aaa ");
    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    eax4->f49 = reinterpret_cast<signed char>(eax5->f49 + bl6);
    ebp7 = 0;
    if (*reinterpret_cast<int16_t*>(__return_address()) == 0x722d) {
        ebp7 = 1;
    }
    while (zf8 = v9 == 0, !zf8) {
        fun_8048177();
        if (!zf8) {
            __asm__("int 0x80");
        } else {
            if (!ebp7) 
                continue;
            fun_8048094(v9);
            __asm__("int 0x80");
        }
    }
    __asm__("int 0x80");
}
