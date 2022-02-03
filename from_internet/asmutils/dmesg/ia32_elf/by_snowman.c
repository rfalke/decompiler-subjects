
struct s0 {
    signed char[1] pad1;
    signed char f1;
};

void fun_8048000(signed char* ecx, int32_t a2, int16_t* a3, unsigned char* a4) {
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
    signed char dh26;
    void* tmp8_27;
    uint1_t cf28;
    signed char dh29;
    int32_t edi30;
    int32_t ebp31;
    int32_t ebp32;
    signed char* edi33;
    struct s0* esi34;
    int32_t ecx35;
    int1_t zf36;

    if (less_or_equal5) {
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
        __asm__("rol dword [eax], 1");
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        __asm__("rol dword [eax], 1");
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<int32_t>(eax25));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    }
    tmp8_27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    cf28 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_27) < reinterpret_cast<unsigned char>(*eax25));
    *eax25 = tmp8_27;
    *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25))) + cf28);
    *ecx = reinterpret_cast<signed char>(*ecx + dh29);
    __asm__("in eax, dx");
    edi30 = reinterpret_cast<int32_t>(__return_address()) - 1;
    if (!edi30) 
        goto addr_804807d_4;
    if (*a3 != 0x6e2d) {
        if (*a3 == 0x632d) {
            ebp31 = ebp32 + 1;
            goto addr_804807d_4;
        }
    } else {
        if (!(edi30 - 1) || (*a4 <= 48 || reinterpret_cast<unsigned char>(*a4 - 48) > 8)) {
            addr_804807d_4:
        }
        __asm__("int 0x80");
        if (0) {
            addr_80480ca_11:
            __asm__("int 0x80");
        } else {
            edi33 = reinterpret_cast<signed char*>(0x80500d1);
            esi34 = reinterpret_cast<struct s0*>(0x80480d1);
            ecx35 = 0x67;
            do {
                __asm__("lodsb ");
                zf36 = 0;
                if (!1 && (zf36 = esi34->f1 == 62, zf36)) {
                    __asm__("lodsw ");
                    __asm__("lodsb ");
                    ecx35 = ecx35 - 3;
                    zf36 = ecx35 == 0;
                }
                *edi33 = 0x67;
                ++edi33;
                esi34 = reinterpret_cast<struct s0*>(&esi34->f1);
                --ecx35;
            } while (reinterpret_cast<uint1_t>(!!ecx35) & reinterpret_cast<uint1_t>(!zf36));
            __asm__("int 0x80");
            if (!ebp31) 
                goto addr_80480ca_11;
        }
        __asm__("int 0x80");
        goto addr_80480ca_11;
    }
}
