
struct s0 {
    signed char[94] pad94;
    signed char f5e;
};

void** g8048102;

void** g8048106;

void fun_8048000(void** ecx) {
    uint48_t v2;
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
    void** eax23;
    struct s0* esi24;
    void* esi25;
    signed char dh26;
    void* tmp8_27;
    uint1_t cf28;
    void* dh29;
    signed char bl30;
    int32_t esi31;
    int32_t v32;
    int1_t zf33;
    void** eax34;
    void** ebx35;
    void** edx36;
    int1_t cf37;
    void** ebx38;
    void** tmp32_39;
    int32_t ebx40;
    signed char cl41;
    void** tmp32_42;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 1) = reinterpret_cast<int32_t>(__return_address());
    if (less_or_equal3) {
        *ecx = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*ecx) + reinterpret_cast<int32_t>(eax4));
        *ebx5 = *ebx6 + eax7;
        *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
        *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
        *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
        *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
        *reinterpret_cast<signed char*>(&eax20) = reinterpret_cast<signed char>(al21 + *eax22);
        eax23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax20) + reinterpret_cast<int32_t>(*eax20));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<uint32_t>(eax23));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        esi24 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esi25) + 1 - 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax23) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax23) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax23) + reinterpret_cast<uint32_t>(eax23)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax23) + reinterpret_cast<uint32_t>(eax23)) + dh26);
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<uint32_t>(eax23));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<unsigned char*>(eax23 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax23 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<void**>(&eax23) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)) + 8) + reinterpret_cast<unsigned char>(*ecx));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<void**>(&eax23) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)) | reinterpret_cast<unsigned char>(*ecx));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
    }
    tmp8_27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
    cf28 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_27) < reinterpret_cast<unsigned char>(*eax23));
    *eax23 = tmp8_27;
    *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23))) + cf28);
    *ecx = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*ecx) + reinterpret_cast<signed char>(dh29));
    esi24->f5e = reinterpret_cast<signed char>(esi24->f5e + bl30);
    do {
        __asm__("lodsb ");
    } while (*reinterpret_cast<void**>(&eax23));
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi24) - 7) == 0x75) {
        if (!*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 2)) {
        }
    }
    while (1) {
        esi31 = v32;
        zf33 = esi31 == 0;
        if (zf33) {
            addr_8048093_10:
            if (zf33) 
                break;
        } else {
            eax34 = reinterpret_cast<void**>(0);
            ebx35 = reinterpret_cast<void**>(0);
            edx36 = reinterpret_cast<void**>(0);
            while ((cf37 = *reinterpret_cast<unsigned char*>(&eax34) < 48, *reinterpret_cast<unsigned char*>(&eax34) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax34) - 48), !cf37) && *reinterpret_cast<unsigned char*>(&eax34) <= 9) {
                ebx38 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx35) * 10);
                tmp32_39 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx38) + reinterpret_cast<int32_t>(eax34));
                ebx35 = tmp32_39;
                edx36 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx36) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_39) < reinterpret_cast<uint32_t>(ebx38)));
            }
            eax23 = ebx35;
            if (!edx36) 
                goto addr_8048091_15;
        }
        ebx40 = 1;
        if (0) {
            cl41 = *reinterpret_cast<signed char*>(esi31 - 1);
            if (!cl41) 
                goto addr_80480e2_18;
            if (cl41 != 0x73) 
                goto addr_80480be_20;
        } else {
            edx36 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax23) % 0xf4240 * 0x3e8);
            eax23 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax23) / 0xf4240);
        }
        addr_80480e4_22:
        g8048102 = eax23;
        g8048106 = edx36;
        eax23 = reinterpret_cast<void**>(0);
        *reinterpret_cast<void**>(&eax23) = reinterpret_cast<void*>(0xa2);
        __asm__("int 0x80");
        continue;
        addr_80480be_20:
        ebx40 = 60;
        if (cl41 == 0x6d || ((ebx40 = 0xe10, cl41 == 0x68) || (ebx40 = 0x15180, cl41 == 100))) {
            addr_80480e2_18:
            eax23 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax23) * ebx40);
            edx36 = __intrinsic();
            goto addr_80480e4_22;
        } else {
            if (cl41 != 0x6e) 
                break;
            tmp32_42 = edx36;
            edx36 = eax23;
            eax23 = tmp32_42;
            goto addr_80480e4_22;
        }
        addr_8048091_15:
        zf33 = eax23 == 0;
        goto addr_8048093_10;
    }
    __asm__("int 0x80");
}
