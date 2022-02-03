
int32_t fun_8048106() {
    int32_t eax1;
    int32_t ebx2;

    eax1 = 0;
    ebx2 = 0;
    while (*reinterpret_cast<signed char*>(&eax1)) {
        *reinterpret_cast<signed char*>(&eax1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax1) - 48);
        ebx2 = ebx2 * 10 + eax1;
    }
    return ebx2;
}

struct s0 {
    void* f0;
    signed char[134512925] pad134512926;
    signed char f804811e;
};

int32_t g804811a;

int32_t g804811e;

void fun_8048000(void** ecx, int32_t a2) {
    int1_t less_or_equal3;
    void* eax4;
    int32_t* ebx5;
    int32_t* ebx6;
    int32_t eax7;
    signed char* eax8;
    signed char* eax9;
    signed char al10;
    signed char* eax11;
    signed char* eax12;
    signed char al13;
    signed char* eax14;
    signed char* eax15;
    signed char al16;
    signed char* eax17;
    signed char* eax18;
    signed char al19;
    void** eax20;
    signed char al21;
    signed char* eax22;
    struct s0* eax23;
    signed char dh24;
    void* tmp8_25;
    void* tmp8_26;
    uint1_t cf27;
    signed char* eax28;
    int16_t* edi29;
    int32_t ebp30;
    int16_t* ebx31;
    int16_t* v32;
    int32_t eax33;
    int32_t eax34;
    int32_t esi35;
    int32_t esi36;
    int32_t eax37;

    if (less_or_equal3) {
        *ecx = reinterpret_cast<void*>(reinterpret_cast<signed char>(*ecx) + reinterpret_cast<int32_t>(eax4));
        *ebx5 = *ebx6 + eax7;
        *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
        *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
        *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
        *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
        *reinterpret_cast<signed char*>(&eax20) = reinterpret_cast<signed char>(al21 + *eax22);
        eax23 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(eax20) + reinterpret_cast<int32_t>(*eax20));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<int32_t>(eax23));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(ecx)) + 44);
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(eax23)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(eax23)) + dh24);
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<int32_t>(eax23));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax23) - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax23) - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        tmp8_25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)) + 8);
        *reinterpret_cast<void**>(&eax23) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(tmp8_25) - reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*ecx) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_25) < reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*ecx) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_25) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)))))));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax23) + 1) = 0;
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
    }
    tmp8_26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
    cf27 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_26) < reinterpret_cast<unsigned char>(eax23->f0));
    eax23->f0 = tmp8_26;
    eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23))) + cf27);
    eax28 = &eax23->f804811e;
    *eax28 = reinterpret_cast<signed char>(*eax28 + *reinterpret_cast<signed char*>(&eax28));
    *eax28 = reinterpret_cast<signed char>(*eax28 + *reinterpret_cast<signed char*>(&eax28));
    g804811a = 10;
    edi29 = reinterpret_cast<int16_t*>(0);
    ebp30 = 0;
    if (!(reinterpret_cast<int32_t>(__return_address()) - 1)) 
        goto addr_80480ba_4;
    goto addr_804808d_6;
    while (1) {
        edi29 = reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(edi29) + 1);
        while (1) {
            while (1) {
                addr_804808d_6:
                ebx31 = v32;
                if (!ebx31) {
                    if (!ebp30) 
                        goto addr_80480ba_4;
                    ebx31 = edi29;
                    __asm__("int 0x80");
                }
                if (*ebx31 == 0x6e2d) {
                    eax33 = fun_8048106();
                    g804811a = eax33;
                } else {
                    if (*ebx31 != 0x632d) 
                        break;
                    eax34 = fun_8048106();
                    g804811e = eax34;
                }
            }
            __asm__("int 0x80");
            ebp30 = 5;
            if (!1) 
                break;
            addr_80480ba_4:
            __asm__("int 0x80");
            if (0) 
                break;
            if (0) {
                __asm__("int 0x80");
                ++ebp30;
            } else {
                esi35 = g804811e;
                if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(esi35 < 0) | reinterpret_cast<uint1_t>(esi35 == 0))) {
                    esi36 = -1;
                    do {
                        ++esi36;
                        if (esi36 > 3) 
                            break;
                    } while (*reinterpret_cast<signed char*>(0x8048122 + esi36) != 10 || (--g804811a, eax37 = g804811a, !!eax37));
                }
                __asm__("int 0x80");
            }
        }
    }
}
