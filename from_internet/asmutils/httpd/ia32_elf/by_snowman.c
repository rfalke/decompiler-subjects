
struct s0 {
    int32_t f0;
    signed char[106] pad110;
    signed char f6e;
};

unsigned char* g8048410;

int32_t g8048414;

signed char g8048311;

void fun_8048000(struct s0* ecx, unsigned char* a2, int32_t a3) {
    uint40_t v4;
    int1_t less_or_equal5;
    int32_t eax6;
    int32_t* ebx7;
    int32_t* ebx8;
    int32_t eax9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    void** eax22;
    signed char al23;
    signed char* eax24;
    void** eax25;
    void** edx26;
    void* tmp8_27;
    unsigned char* edi28;
    unsigned char* edi29;
    void* tmp8_30;
    uint1_t cf31;
    int32_t ebp32;
    int32_t ebp33;
    signed char bl34;
    int32_t eax35;
    int32_t ebx36;
    int1_t cf37;
    signed char tmp8_38;
    int32_t ebx39;
    unsigned char* ebx40;
    unsigned char* ecx41;
    unsigned char* edx42;
    unsigned char* ecx43;
    unsigned char dl44;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v4) + 1) = reinterpret_cast<int32_t>(__return_address());
    if (less_or_equal5) {
        ecx->f0 = ecx->f0 + eax6;
        *ebx7 = *ebx8 + eax9;
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
        *reinterpret_cast<signed char*>(&eax22) = reinterpret_cast<signed char>(al23 + *eax24);
        eax25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(*eax22));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<int32_t>(eax25));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        edx26 = *reinterpret_cast<void***>(&v4);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(eax25)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(eax25)) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx26) + 1));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<int32_t>(eax25));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<unsigned char*>(eax25 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax25 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        tmp8_27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) + 8);
        *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(tmp8_27) + reinterpret_cast<signed char>(*edx26)) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_27) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25))));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(0);
        *edi28 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*edi29));
        *eax25 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax25)));
    }
    tmp8_30 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax25)));
    cf31 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_30) < reinterpret_cast<unsigned char>(*eax25));
    *eax25 = tmp8_30;
    *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax25))) + cf31);
    ecx->f6e = reinterpret_cast<signed char>(ecx->f6e + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
    if (ecx->f6e >= 0) {
        *eax25 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax25)));
        *reinterpret_cast<signed char*>(ebp32 - 0x7d) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp33 - 0x7d) + bl34);
        g8048410 = a2;
        eax35 = 0;
        ebx36 = 0;
        while ((cf37 = *reinterpret_cast<unsigned char*>(&eax35) < 48, *reinterpret_cast<unsigned char*>(&eax35) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax35) - 48), !cf37) && *reinterpret_cast<unsigned char*>(&eax35) <= 9) {
            ebx36 = ebx36 * 10 + eax35;
        }
        tmp8_38 = *reinterpret_cast<signed char*>(&ebx36);
        *reinterpret_cast<signed char*>(&ebx36) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx36) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx36) + 1) = tmp8_38;
        ebx39 = ebx36 << 16;
    }
    *reinterpret_cast<signed char*>(&ebx39) = 2;
    g8048414 = ebx39;
    __asm__("int 0x80");
    if (0) 
        goto addr_80480be_9;
    __asm__("int 0x80");
    if (0) 
        goto addr_80480c6_11;
    while (1) {
        addr_80480be_9:
        while (1) {
            __asm__("int 0x80");
            addr_80480c6_11:
            __asm__("int 0x80");
            if (1) 
                break;
            __asm__("int 0x80");
            if (1) 
                break;
            __asm__("int 0x80");
            if (0) {
                while (1) {
                    g8048311 = 16;
                    __asm__("int 0x80");
                    if (0) 
                        continue;
                    __asm__("int 0x80");
                    __asm__("int 0x80");
                    __asm__("int 0x80");
                    if (0) 
                        break;
                    __asm__("int 0x80");
                }
                __asm__("int 0x80");
                if (!1) 
                    goto addr_8048166_19;
            } else {
                addr_80480fc_20:
                continue;
            }
            addr_804820d_21:
            goto addr_80480fc_20;
            addr_8048166_19:
            a3 = 3;
            ebx40 = reinterpret_cast<unsigned char*>(0x8048424);
            ecx41 = g8048410;
            edx42 = ecx41;
            do {
                *ebx40 = *ecx41;
                ++ebx40;
                ++ecx41;
            } while (*ecx41);
            if (reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(ecx41) - reinterpret_cast<int32_t>(edx42) + a3) > 0xfff) 
                goto addr_804820d_21;
            ecx43 = reinterpret_cast<unsigned char*>(0x8049438);
            while (*reinterpret_cast<int16_t*>(ebx40 - 2) != 0x2e2e) {
                dl44 = *ecx43;
                if (dl44 == 32) 
                    goto addr_80481c8_27;
                *ebx40 = dl44;
                if (!dl44) 
                    goto addr_80481c8_27;
                if (dl44 < 32) 
                    break;
                if (dl44 == 32) 
                    goto addr_80481c8_27;
                if (dl44 == 63) 
                    goto addr_80481c8_27;
                if (dl44 == 13) 
                    goto addr_80481c8_27;
                if (dl44 == 10) 
                    goto addr_80481c8_27;
                ++ebx40;
                ++ecx43;
            }
            goto addr_804820d_21;
            addr_80481c8_27:
            *ebx40 = 0;
            if (*reinterpret_cast<signed char*>(ebx40 - 1) == 47) {
                __asm__("fld tword [eax]");
                __asm__("fstp tword [ebx]");
            }
            __asm__("int 0x80");
            if (!0) {
                __asm__("int 0x80");
                __asm__("int 0x80");
                goto addr_804820d_21;
            }
        }
    }
}
