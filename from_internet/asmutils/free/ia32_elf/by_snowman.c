
struct s0 {
    signed char[7] pad7;
    signed char f7;
};

struct s1 {
    signed char f0;
    signed char[8] pad9;
    signed char f9;
};

void fun_804804c(int32_t ecx, int32_t a2) {
    int32_t ebx3;
    int32_t ecx4;
    int32_t eax5;
    int32_t eax6;
    int32_t edx7;
    void* edi8;
    struct s0* edi9;
    struct s1* edi10;
    void* edi11;
    int32_t ecx12;
    int1_t zf13;
    signed char* edi14;
    int1_t zf15;
    int32_t ecx16;

    ebx3 = reinterpret_cast<int32_t>(__return_address());
    ecx4 = 7;
    if (eax5) {
        do {
            if (!eax6) 
                break;
            edx7 = eax6 % ebx3;
            eax6 = eax6 / ebx3;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi8) + ecx4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&edx7) + 48);
            --ecx4;
        } while (ecx4);
    } else {
        edi9->f7 = 48;
        ecx4 = 6;
    }
    edi10 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(edi11) + ecx4);
    ecx12 = ecx4 + 1;
    zf13 = ecx12 == 0;
    do {
        if (!ecx12) 
            break;
        --ecx12;
        edi10->f0 = 32;
        edi10 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(edi10) - 1);
    } while (!zf13);
    edi14 = &edi10->f9;
    zf15 = edi14 == 0;
    ecx16 = 3;
    do {
        if (!ecx16) 
            break;
        --ecx16;
        *edi14 = 32;
        ++edi14;
    } while (!zf15);
    goto a2;
}

struct s2 {
    void* f0;
    signed char[2885635] pad2885636;
    signed char f2c0804;
};

struct s3 {
    signed char[10] pad10;
    signed char fa;
};

struct s4 {
    signed char[10] pad10;
    signed char fa;
};

void fun_8048000(unsigned char* ecx) {
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
    struct s2* eax22;
    signed char dh23;
    unsigned char* eax24;
    unsigned char* eax25;
    unsigned char* tmp32_26;
    uint1_t cf27;
    unsigned char* eax28;
    struct s3* edx29;
    struct s4* edx30;

    if (less_or_equal2) {
        *ecx = reinterpret_cast<unsigned char>(*ecx + eax3);
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(*eax19));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<int32_t>(eax22));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f2c0804 = reinterpret_cast<signed char>(static_cast<int32_t>(eax22->f2c0804));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(eax22)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(eax22)) + dh23);
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<int32_t>(eax22));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax22) - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax22) - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax24 = ecx;
        *eax24 = reinterpret_cast<unsigned char>(*eax24 + *reinterpret_cast<signed char*>(&eax24));
        eax25 = ecx;
        *eax25 = reinterpret_cast<unsigned char>(*eax25 + *reinterpret_cast<signed char*>(&eax25));
        tmp32_26 = eax25;
        cf27 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_26) < reinterpret_cast<uint32_t>(eax25));
        eax28 = tmp32_26;
    }
    *eax28 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax28 + *reinterpret_cast<signed char*>(&eax28)) + cf27);
    edx29->fa = reinterpret_cast<signed char>(edx30->fa + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
}

unsigned char g1;

struct s5 {
    signed char[114] pad114;
    unsigned char f72;
};

unsigned char g68;

unsigned char g77;

void fun_8048080() {
    int32_t v1;
    int32_t v2;
    int32_t v3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int1_t zf7;
    struct s5* esi8;

    __asm__("int 0x80");
    __asm__("int 0x80");
    fun_804804c("             total       used       free     shared    buffers\nMem:      Swap:     ", v1);
    fun_804804c("             total       used       free     shared    buffers\nMem:      Swap:     ", v2);
    fun_804804c("             total       used       free     shared    buffers\nMem:      Swap:     ", v3);
    fun_804804c("             total       used       free     shared    buffers\nMem:      Swap:     ", v4);
    fun_804804c("             total       used       free     shared    buffers\nMem:      Swap:     ", v5);
    *reinterpret_cast<signed char*>(&v6) = 10;
    __asm__("int 0x80");
    __asm__("int 0x80");
    fun_804804c("Swap:     ", v6);
    fun_804804c("Swap:     ", v6);
    fun_804804c("Swap:     ", v6);
    __asm__("int 0x80");
    __asm__("int 0x80");
    g1 = reinterpret_cast<unsigned char>(g1 | reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4 + 4 - 4 + 4 - 80 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4));
    g1 = 0;
    g1 = 0;
    g1 = 0;
    g1 = 0;
    g1 = 0;
    g1 = 0;
    zf7 = g1 == 0;
    if (!zf7) {
        if (!zf7) {
            __asm__("insb ");
            g1 = 0;
            g1 = 0;
            g1 = 0;
            g1 = 0;
            g1 = 0;
            g1 = 0;
            esi8->f72 = 0;
            g1 = 0;
            g1 = 0;
            g68 = 0;
            __asm__("popad ");
            if (!0) {
                g1 = 0;
                g1 = 0;
                if (!0) {
                    __asm__("insd ");
                    g1 = 0;
                    g1 = 0;
                    g77 = reinterpret_cast<unsigned char>(g77 & 34);
                    __asm__("popad ");
                    if (!0) {
                        g1 = 0;
                        g1 = 0;
                    }
                }
            }
        }
    }
}
