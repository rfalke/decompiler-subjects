
struct s0 {
    signed char[110] pad110;
    signed char f6e;
};

struct s1 {
    signed char[110] pad110;
    unsigned char f6e;
};

struct s2 {
    signed char[110] pad110;
    unsigned char f6e;
};

struct s3 {
    signed char[110] pad110;
    signed char f6e;
};

signed char g804810e;

void fun_8048000(signed char* ecx, int32_t a2) {
    int1_t less_or_equal3;
    int32_t esi4;
    int32_t esi5;
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
    signed char dh26;
    int32_t ebp27;
    int32_t ebp28;
    signed char dl29;
    void* tmp8_30;
    uint1_t cf31;
    unsigned char tmp8_32;
    struct s0* ebx33;
    signed char dh34;
    int1_t cf35;
    struct s1* ebx36;
    struct s2* ebx37;
    int1_t zf38;
    struct s3* ebx39;
    int32_t ecx40;
    int32_t v41;
    int32_t ebx42;
    int1_t zf43;
    int32_t ecx44;
    void** edi45;

    if (less_or_equal3) {
        esi4 = esi5 + 1;
        *ecx = reinterpret_cast<signed char>(*ecx + eax6);
        *ebx7 = *ebx8 + eax9;
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
        *reinterpret_cast<signed char*>(&eax22) = reinterpret_cast<signed char>(al23 + *eax24);
        eax25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(*eax22));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<int32_t>(eax25));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(eax25)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(eax25)) + dh26);
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<int32_t>(eax25));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<unsigned char*>(eax25 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax25 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) + 8);
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<int32_t>(eax25));
        *reinterpret_cast<signed char*>(ebp27 + 0x7000002) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp28 + 0x7000002) + dl29);
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    }
    tmp8_30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    cf31 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_30) < reinterpret_cast<unsigned char>(*eax25));
    *eax25 = tmp8_30;
    *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25))) + cf31);
    tmp8_32 = reinterpret_cast<unsigned char>(ebx33->f6e + dh34);
    cf35 = tmp8_32 < ebx36->f6e;
    ebx37->f6e = tmp8_32;
    zf38 = ebx39->f6e == 0;
    if (cf35) {
        while (1) {
            if (!zf38) {
                ecx = reinterpret_cast<signed char*>(0x804810e);
                eax25 = reinterpret_cast<void**>(4);
                __asm__("int 0x80");
            }
            *ecx = 32;
            do {
                __asm__("lodsb ");
            } while (*reinterpret_cast<void**>(&eax25));
            eax25 = reinterpret_cast<void**>(4);
            __asm__("int 0x80");
            ecx40 = v41;
            do {
                --ecx40;
                if (!ecx40) 
                    goto addr_80480fa_10;
                addr_80480bb_11:
            } while (!__intrinsic());
            ecx = reinterpret_cast<signed char*>(0x804810e);
            zf38 = g804810e == 0;
        }
    } else {
        __asm__("insd ");
        if (__intrinsic()) {
            while (!zf38) {
                addr_804805a_15:
                __asm__("lodsb ");
                zf38 = *reinterpret_cast<void**>(&eax25) == 0;
            }
            if (*reinterpret_cast<int32_t*>(esi4 - 5) != 0x68637261) 
                goto addr_80480aa_17; else 
                goto addr_8048068_18;
        } else {
            esi4 = a2;
            ebx42 = reinterpret_cast<int32_t>(__return_address()) - 1;
            if (!ebx42) {
                goto addr_804805a_15;
            }
            do {
                __asm__("lodsb ");
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void**>(&eax25) == 45)) 
                    break;
                while (zf43 = *reinterpret_cast<void**>(&eax25) == 0, !zf43) {
                    ecx44 = 5;
                    edi45 = reinterpret_cast<void**>(0x804804c);
                    do {
                        if (!ecx44) 
                            break;
                        --ecx44;
                        zf43 = *edi45 == *reinterpret_cast<void**>(&eax25);
                        ++edi45;
                    } while (!zf43);
                    if (!zf43) {
                        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void**>(&eax25) == 97)) 
                            goto addr_80480fa_10;
                    } else {
                        __asm__("bts edx, ecx");
                    }
                }
                if (0) 
                    break;
                --ebx42;
            } while (ebx42);
            goto addr_80480aa_17;
        }
    }
    addr_80480fa_10:
    __asm__("int 0x80");
    __asm__("int 0x80");
    addr_80480aa_17:
    ecx40 = 5;
    eax25 = reinterpret_cast<void**>(0x7a);
    __asm__("int 0x80");
    goto addr_80480bb_11;
    addr_8048068_18:
    goto addr_80480aa_17;
}
