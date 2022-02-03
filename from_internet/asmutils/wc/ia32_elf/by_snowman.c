
void fun_8048194(signed char* ecx) {
    int32_t ecx2;
    uint32_t eax3;
    int32_t eax4;
    int32_t v5;
    signed char* edi6;

    __asm__("pushad ");
    ecx2 = 0;
    do {
        eax3 = eax3 / 10;
        ++ecx2;
    } while (eax3);
    do {
        eax4 = v5;
        *edi6 = *reinterpret_cast<signed char*>(&eax4);
        ++edi6;
        --ecx2;
    } while (ecx2);
    *edi6 = reinterpret_cast<signed char>(9);
    __asm__("popad ");
    return;
}

int32_t fun_8048184();

signed char fun_8048172(signed char* ecx) {
    __asm__("pushad ");
    fun_8048184();
    __asm__("int 0x80");
    __asm__("popad ");
    return 4;
}

int32_t fun_8048184() {
    int32_t v1;
    int32_t eax2;

    v1 = eax2;
    do {
        __asm__("lodsb ");
    } while (0);
    return v1;
}

struct s0 {
    void* f0;
    signed char[71] pad72;
    signed char f48;
};

signed char g80481ca;

unsigned char g80481ba = 0;

signed char g80481c9;

int32_t g80481c5;

int32_t g80481c1;

int32_t g80481bd;

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
    struct s0* eax22;
    signed char dh23;
    void* tmp8_24;
    uint1_t cf25;
    unsigned char* edi26;
    signed char* edi27;
    void* tmp8_28;
    uint1_t cf29;
    signed char bl30;
    signed char eax31;
    signed char* ebx32;
    signed char* v33;
    int1_t zf34;
    signed char* edi35;
    int32_t ecx36;
    unsigned char dl37;
    int32_t ecx38;
    int32_t eax39;
    signed char* v40;
    int32_t ecx41;
    unsigned char bl42;
    unsigned char dl43;
    int1_t zf44;

    if (less_or_equal2) {
        *ecx = *ecx + eax3;
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(*eax19));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<int32_t>(eax22));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) + 44);
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
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
        tmp8_24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8);
        cf25 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_24) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = tmp8_24;
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<int32_t>(eax22) + cf25);
        *edi26 = reinterpret_cast<unsigned char>(*edi27 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    }
    tmp8_28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    cf29 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_28) < reinterpret_cast<unsigned char>(eax22->f0));
    eax22->f0 = tmp8_28;
    eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))) + cf29);
    eax22->f48 = reinterpret_cast<signed char>(eax22->f48 + bl30);
    if (!eax22->f48) {
        goto addr_80480a4_5;
    }
    eax31 = reinterpret_cast<signed char>(__return_address());
    while (1) {
        ebx32 = v33;
        if (!ebx32) {
            zf34 = g80481ca == 0;
            if (!zf34) 
                break;
            g80481ca = 1;
            goto addr_80480a4_5;
        }
        edi35 = reinterpret_cast<signed char*>(0x80481bd);
        ecx36 = 0;
        *reinterpret_cast<signed char*>(&ecx36) = 3;
        dl37 = 4;
        do {
            __asm__("lodsw ");
            if (*ebx32 == eax31) 
                break;
            dl37 = reinterpret_cast<unsigned char>(dl37 >> 1);
            eax31 = reinterpret_cast<signed char>(0);
            *edi35 = reinterpret_cast<signed char>(0);
            edi35 = edi35 + 4;
            --ecx36;
        } while (ecx36);
        goto addr_8048083_16;
        g80481ba = reinterpret_cast<unsigned char>(g80481ba | dl37);
        continue;
        addr_8048083_16:
        if (*ebx32 == 45) {
            addr_80480a4_5:
            g80481c9 = 1;
        } else {
            edi35 = ebx32;
            g80481ca = 1;
            __asm__("int 0x80");
            if (0) 
                goto addr_804816a_19;
        }
        while (!0) {
            if (0) 
                goto addr_80480ff_24;
            ecx38 = 3;
            eax39 = 0;
            do {
                __asm__("lodsb ");
                ++g80481c5;
                if (0) {
                    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax39) + 1)) {
                        ++g80481c1;
                        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax39) + 1) = 0;
                    }
                } else {
                    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax39) + 1) = 1;
                }
                if (!1) {
                    ++g80481bd;
                }
                --ecx38;
            } while (ecx38);
        }
        goto addr_804816a_19;
        addr_80480ff_24:
        v40 = edi35;
        ecx41 = 0;
        bl42 = g80481ba;
        *reinterpret_cast<signed char*>(&ecx41) = 3;
        dl43 = 4;
        do {
            __asm__("lodsd ");
            if (!bl42 || bl42 & dl43) {
                edi35 = reinterpret_cast<signed char*>(0x80481cb);
                fun_8048194(0x80481cb);
                fun_8048172(0x80481cb);
            }
            dl43 = reinterpret_cast<unsigned char>(dl43 >> 1);
            --ecx41;
        } while (ecx41);
        zf44 = g80481c9 == 1;
        if (!zf44) {
            fun_8048172(v40);
        }
        eax31 = fun_8048172("\n");
    }
    addr_804816d_41:
    __asm__("int 0x80");
    addr_804816a_19:
    goto addr_804816d_41;
}

void fun_80481b4() {
    __asm__("arpl [eax], ax");
}
