
void fun_804817c(void* ecx, int32_t a2, int32_t a3) {
    int32_t eax4;
    int32_t edx5;
    int32_t ecx6;
    int32_t ebx7;
    int32_t esi8;
    int32_t edi9;

    eax4 = 0;
    edx5 = 0;
    ecx6 = 0;
    do {
        ebx7 = 0;
        while (++edx5, *reinterpret_cast<unsigned char*>(&eax4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(esi8 + edx5) - 48), *reinterpret_cast<unsigned char*>(esi8 + edx5) >= 48) {
            ebx7 = ebx7 * 10 + eax4;
        }
        *reinterpret_cast<signed char*>(edi9 + ecx6 + 4) = *reinterpret_cast<signed char*>(&ebx7);
        ++ecx6;
    } while (ecx6 != 4);
    return;
}

struct s0 {
    int32_t f0;
    signed char[90] pad94;
    signed char f5e;
};

int32_t g804819e;

int32_t g80481a2;

void fun_8048000(struct s0* ecx, int32_t a2) {
    void* esp3;
    int1_t less_or_equal4;
    int32_t esi5;
    int32_t esi6;
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
    void* tmp8_28;
    uint1_t cf29;
    signed char bl30;
    int32_t ecx31;
    signed char v32;
    int16_t v33;
    int32_t v34;

    esp3 = __zero_stack_offset();
    if (less_or_equal4) {
        esi5 = esi6 + 1;
        ecx->f0 = ecx->f0 + eax7;
        *ebx8 = *ebx9 + eax10;
        *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
        *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
        *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
        *eax20 = reinterpret_cast<signed char>(*eax21 + al22);
        *reinterpret_cast<signed char*>(&eax23) = reinterpret_cast<signed char>(al24 + *eax25);
        eax26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(*eax23));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<int32_t>(eax26));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 1 - 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<int32_t>(eax26)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<int32_t>(eax26)) + dh27);
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<int32_t>(eax26));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<unsigned char*>(eax26 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax26 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<void**>(&eax26) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)) + 8);
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<int32_t>(eax26));
        *reinterpret_cast<signed char*>(esi5 + 0x7000001) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(esi5 + 0x7000001) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax26) + 1));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
    }
    tmp8_28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
    cf29 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_28) < reinterpret_cast<unsigned char>(*eax26));
    *eax26 = tmp8_28;
    *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26))) + cf29);
    ecx->f5e = reinterpret_cast<signed char>(ecx->f5e + bl30);
    if (!reinterpret_cast<int1_t>(ecx == 3) || (g804819e = 0x66, fun_804817c(reinterpret_cast<int32_t>(esp3) + 4 + 4 - 4 - 4 - 4, 2, 0x5000), 1)) {
        addr_8048175_4:
        __asm__("int 0x80");
    } else {
        do {
            __asm__("lodsb ");
        } while (1);
        __asm__("int 0x80");
        __asm__("int 0x80");
        if (1) 
            goto addr_8048175_4;
        if (1) 
            goto addr_8048175_4;
    }
    ecx31 = 3;
    do {
        do {
            if (!ecx31) 
                break;
            --ecx31;
        } while (v32 != 13);
        if (!ecx31) 
            goto addr_8048175_4;
    } while (v33 != 0xa0a && v34 != 0xa0d0a0d);
    __asm__("int 0x80");
    if (!0) {
        g80481a2 = 5;
        do {
            __asm__("int 0x80");
            __asm__("int 0x80");
        } while (1);
        goto addr_8048175_4;
    }
}
