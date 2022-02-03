
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
    int32_t ebp24;
    int32_t ebp25;
    void* tmp8_26;
    uint1_t cf27;
    int32_t ebx28;
    int32_t ebx29;
    int32_t eax30;
    int32_t ecx31;

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
        __asm__("lodsd ");
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(ebp24 + 0x5000000) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp25 + 0x5000000) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    }
    tmp8_26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    cf27 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_26) < reinterpret_cast<unsigned char>(*eax22));
    *eax22 = tmp8_26;
    *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))) + cf27);
    *reinterpret_cast<unsigned char*>(ebx28 + 0x506a50ec) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(ebx29 + 0x506a50ec) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    while (eax30 = 3, !0) {
        ecx31 = 3;
        do {
            __asm__("lodsb ");
            if (*reinterpret_cast<signed char*>(&eax30) < 65 || (*reinterpret_cast<signed char*>(&eax30) > 0x7a || *reinterpret_cast<signed char*>(&eax30) > 90 && *reinterpret_cast<signed char*>(&eax30) < 97)) {
                addr_8048069_7:
            } else {
                if (*reinterpret_cast<signed char*>(&eax30) <= 77) {
                    addr_8048090_9:
                    *reinterpret_cast<signed char*>(&eax30) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax30) + 13);
                    goto addr_8048069_7;
                } else {
                    if (*reinterpret_cast<signed char*>(&eax30) <= 90) 
                        goto addr_8048094_11;
                    if (*reinterpret_cast<signed char*>(&eax30) <= 0x6d) 
                        goto addr_8048090_9; else 
                        goto addr_804808a_13;
                }
            }
            continue;
            addr_804808a_13:
            if (*reinterpret_cast<signed char*>(&eax30) <= 0x7a) {
                addr_8048094_11:
                *reinterpret_cast<signed char*>(&eax30) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax30) - 13);
                goto addr_8048069_7;
            } else {
                goto addr_8048069_7;
            }
            --ecx31;
        } while (ecx31);
        __asm__("int 0x80");
    }
    __asm__("int 0x80");
}
