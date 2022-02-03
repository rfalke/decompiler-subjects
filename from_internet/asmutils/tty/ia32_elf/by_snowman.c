
void fun_8048000(signed char* ecx) {
    uint48_t v2;
    int1_t less_or_equal3;
    unsigned char tmp8_4;
    signed char* eax5;
    signed char al6;
    uint1_t cf7;
    unsigned char* eax8;
    unsigned char* eax9;
    unsigned char* eax10;
    signed char* eax11;
    signed char al12;
    signed char dh13;
    int32_t esi14;
    int32_t esi15;
    signed char* esi16;
    int32_t eax17;
    int32_t* ebx18;
    int32_t* ebx19;
    int32_t eax20;
    signed char* eax21;
    signed char* eax22;
    signed char al23;
    signed char* eax24;
    signed char* eax25;
    signed char al26;
    signed char* eax27;
    signed char* eax28;
    signed char al29;
    signed char* eax30;
    signed char* eax31;
    signed char al32;
    void** eax33;
    signed char al34;
    signed char* eax35;
    void** eax36;
    signed char dh37;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 2) = reinterpret_cast<int32_t>(__return_address());
    if (!less_or_equal3) {
        tmp8_4 = reinterpret_cast<unsigned char>(*eax5 + al6);
        cf7 = reinterpret_cast<uint1_t>(tmp8_4 < *eax8);
        *eax9 = tmp8_4;
        *eax10 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax11 + al12) + cf7);
        *ecx = reinterpret_cast<signed char>(*ecx + dh13);
        *reinterpret_cast<signed char*>(esi14 - 0x7f7046f0) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(esi15 - 0x7f7046f0) << *reinterpret_cast<unsigned char*>(&ecx));
        __asm__("int 0x80");
        if (!0) {
            esi16 = ecx;
            do {
                __asm__("lodsb ");
            } while (1);
            *(esi16 - 1) = 10;
            __asm__("int 0x80");
        }
        __asm__("int 0x80");
        __asm__("das ");
        if (!0) {
            __asm__("outsd ");
            __asm__("arpl [edi], bp");
            if (!1) {
                __asm__("insb ");
                __asm__("o16 das ");
                __asm__("o16 das ");
            }
        }
    } else {
        *ecx = reinterpret_cast<signed char>(*ecx + eax17);
        *ebx18 = *ebx19 + eax20;
        *eax21 = reinterpret_cast<signed char>(*eax22 + al23);
        *eax24 = reinterpret_cast<signed char>(*eax25 + al26);
        *eax27 = reinterpret_cast<signed char>(*eax28 + al29);
        *eax30 = reinterpret_cast<signed char>(*eax31 + al32);
        *reinterpret_cast<signed char*>(&eax33) = reinterpret_cast<signed char>(al34 + *eax35);
        eax36 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax33) + reinterpret_cast<int32_t>(*eax33));
        *eax36 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax36) + reinterpret_cast<int32_t>(eax36));
        *eax36 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax36) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax36)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax36) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax36) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax36 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax36) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax36)));
        *eax36 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax36) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax36)));
        *eax36 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax36) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax36)));
        *eax36 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax36) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax36)));
        *eax36 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax36) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax36)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax36) + reinterpret_cast<int32_t>(eax36)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax36) + reinterpret_cast<int32_t>(eax36)) + dh37);
        *eax36 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax36) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax36)));
        *eax36 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax36) + reinterpret_cast<int32_t>(eax36));
        *eax36 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax36) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax36)));
        *eax36 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax36) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax36)));
        *eax36 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax36) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax36)));
        *reinterpret_cast<unsigned char*>(eax36 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax36 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax36)));
        *reinterpret_cast<void**>(&eax36) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax36)) + 8);
        *eax36 = *reinterpret_cast<void**>(&v2);
        *eax36 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax36) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax36)));
    }
}

void fun_8048041() {
    unsigned char* eax1;
    signed char* eax2;
    signed char al3;
    uint1_t cf4;
    signed char* edi5;
    signed char* edi6;
    signed char al7;
    signed char* eax8;
    signed char* eax9;
    signed char al10;

    *eax1 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax2 + al3) + cf4);
    *edi5 = reinterpret_cast<signed char>(*edi6 + al7);
    *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
}
