
void fun_8048253(void* ecx) {
    signed char al2;
    signed char* edi3;
    signed char al4;

    while (al2) {
        *edi3 = al4;
        ++edi3;
    }
    return;
}

void fun_804821e(void* ecx) {
    int32_t ebx2;
    uint32_t eax3;
    int32_t eax4;
    int32_t v5;
    signed char* edi6;

    __asm__("retf ");
    *reinterpret_cast<signed char*>(&ebx2) = 10;
    do {
        eax3 = eax3 / ebx2;
        ecx = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx) + 1);
    } while (eax3);
    do {
        eax4 = v5;
        *edi6 = *reinterpret_cast<signed char*>(&eax4);
        ++edi6;
        ecx = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx) - 1);
    } while (ecx);
    return;
}

int32_t fun_8048236() {
    int32_t eax1;
    int32_t ebx2;
    unsigned char* ebp3;

    eax1 = 0;
    ebx2 = 0;
    while ((++ebp3, *reinterpret_cast<unsigned char*>(&ebx2) = reinterpret_cast<unsigned char>(*ebp3 - 48), *ebp3 >= 48) && *reinterpret_cast<signed char*>(&ebx2) <= reinterpret_cast<signed char>(9)) {
        eax1 = eax1 * 10 + ebx2;
    }
    return eax1;
}

void* g80492a1;

int32_t g8049299;

int32_t g8049291;

int32_t g8049261;

int32_t g8049295;

signed char g8049271;

void fun_8048000(int32_t* ecx, int32_t a2, int32_t a3, int32_t a4) {
    void* esp5;
    int1_t less_or_equal6;
    int32_t eax7;
    int32_t* ebx8;
    int32_t* ebx9;
    int32_t eax10;
    signed char* eax11;
    signed char* eax12;
    signed char al13;
    signed char* eax14;
    signed char* eax15;
    signed char al16;
    signed char* eax17;
    signed char* eax18;
    signed char al19;
    signed char* eax20;
    signed char* eax21;
    signed char al22;
    void** eax23;
    signed char al24;
    signed char* eax25;
    void** eax26;
    signed char dh27;
    int32_t edx28;
    int32_t edx29;
    void* tmp8_30;
    uint1_t cf31;
    signed char bl32;
    int32_t* esp33;
    int32_t eax34;
    int32_t eax35;
    int32_t v36;
    void* esp37;
    int32_t v38;
    void* esp39;
    void* ecx40;
    void* esp41;
    void* esp42;
    int1_t zf43;
    signed char* edi44;
    int32_t ebp45;

    esp5 = __zero_stack_offset();
    if (less_or_equal6) {
        *ecx = *ecx + eax7;
        *ebx8 = *ebx9 + eax10;
        *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
        *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
        *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
        *eax20 = reinterpret_cast<signed char>(*eax21 + al22);
        *reinterpret_cast<signed char*>(&eax23) = reinterpret_cast<signed char>(al24 + *eax25);
        eax26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<uint32_t>(*eax23));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<uint32_t>(eax26));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 1 - 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax26) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax26) + reinterpret_cast<uint32_t>(ecx)) + 44);
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax26) + reinterpret_cast<uint32_t>(eax26)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax26) + reinterpret_cast<uint32_t>(eax26)) + dh27);
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<uint32_t>(eax26));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<unsigned char*>(eax26 + 0x80000804) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax26 + 0x80000804) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<void**>(&eax26) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)) + 8);
        __asm__("popad ");
        *reinterpret_cast<void**>(&eax26) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)) + reinterpret_cast<unsigned char>(*eax26));
        *reinterpret_cast<signed char*>(edx28 + 0x7000012) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx29 + 0x7000012) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax26) + 1));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
    }
    tmp8_30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
    cf31 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_30) < reinterpret_cast<unsigned char>(*eax26));
    *eax26 = tmp8_30;
    *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26))) + cf31);
    *reinterpret_cast<signed char*>(eax26 + 0xffffff83) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax26 + 0xffffff83) + bl32);
    *reinterpret_cast<void**>(&eax26) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)) + 0x7c);
    esp33 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp5) + 4);
    if (reinterpret_cast<int32_t>(eax26) <= reinterpret_cast<int32_t>(5)) {
        if (reinterpret_cast<int32_t>(eax26) >= reinterpret_cast<int32_t>(5)) {
            g80492a1 = *reinterpret_cast<void**>(&eax26);
            g8049299 = 0x8049271;
        }
        eax34 = fun_8048236();
        g8049291 = eax34;
        fun_8048236();
        __asm__("int 0x80");
        esp33 = esp33 + 1 + 1 - 1 + 1 + 1 - 1 + 1 - 1 - 1 - 1 - 1 - 1 + 1 - 1 + 1 + 3;
        if (0) 
            goto addr_80480b0_7;
        __asm__("int 0x80");
        esp33 = esp33 - 1 - 1 - 1 - 1 - 1 - 1 + 1 - 1 + 1 + 5;
        if (0) 
            goto addr_80480b7_9;
    }
    while (1) {
        addr_80480b0_7:
        while (1) {
            esp33 = esp33 - 1 + 1;
            __asm__("int 0x80");
            addr_80480b7_9:
            eax35 = v36;
            g8049261 = 2;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&g8049261) + 2) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax35) + 1);
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&g8049261) + 3) = *reinterpret_cast<signed char*>(&eax35);
            __asm__("int 0x80");
            esp33 = esp33 + 1 - 1 - 1 - 1 - 1 + 1 - 1 + 1 + 3;
            if (1) 
                break;
            esp37 = reinterpret_cast<void*>(esp33 - 1 - 1);
            __asm__("int 0x80");
            esp33 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp37) - 4 + 4 - 4 + 4 + 8);
            if (1) 
                break;
            g8049295 = v38;
            fun_8048253(esp37);
            __asm__("int 0x80");
            esp33 = esp33 + 1 - 1 + 1 - 1 + 1 - 1 + 1;
            __asm__("int 0x80");
            if (!0) {
                if (__intrinsic()) 
                    break;
                fun_804821e(esp37);
                g8049271 = 10;
                esp33 = esp33 - 1 - 1 + 1 + 1 - 1 + 1 - 1 + 1;
                __asm__("int 0x80");
                continue;
            }
            while (1) {
                g8049291 = 16;
                esp39 = reinterpret_cast<void*>(esp33 - 1 + 1 - 1 - 1 - 1);
                ecx40 = esp39;
                __asm__("int 0x80");
                esp33 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp39) - 4 + 4 - 4 + 4 + 12);
                if (0) 
                    continue;
                g8049291 = 0x66;
                esp41 = reinterpret_cast<void*>(esp33 - 1 + 1);
                __asm__("int 0x80");
                if (!1) 
                    break;
                __asm__("int 0x80");
                __asm__("int 0x80");
                esp33 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp41) - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4);
                __asm__("int 0x80");
            }
            esp42 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp41) - 4 + 4);
            __asm__("int 0x80");
            zf43 = g80492a1 == 0;
            if (!zf43) 
                goto addr_80481b0_19;
            addr_80481d2_20:
            __asm__("int 0x80");
            __asm__("int 0x80");
            __asm__("int 0x80");
            esp33 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp42) - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4);
            __asm__("int 0x80");
            continue;
            addr_80481b0_19:
            edi44 = reinterpret_cast<signed char*>(0x8049271);
            ebp45 = 4;
            esp42 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp42) - 4 + 4);
            do {
                fun_804821e(ecx40);
                esp42 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp42) - 4 - 4 + 4 + 4);
                *edi44 = 46;
                ++edi44;
                --ebp45;
            } while (ebp45);
            *(edi44 - 1) = 0;
            goto addr_80481d2_20;
        }
    }
}

void fun_8048259() {
    int32_t* eax1;
    int32_t* eax2;
    int32_t eax3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = *eax2 + eax3;
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_8048212() {
    int1_t sf1;

    if (!sf1) {
        __asm__("arpl [eax], sp");
        __asm__("popa ");
    }
}
