
int32_t fun_8048073(int32_t* ecx) {
    unsigned char* edx2;
    unsigned char* esi3;
    int32_t ecx4;
    int32_t eax5;
    unsigned char* esi6;

    edx2 = esi3;
    ecx4 = 0;
    eax5 = 0;
    while (*esi6) {
        *reinterpret_cast<unsigned char*>(&ecx4) = reinterpret_cast<unsigned char>(*esi6 - 48);
        if (*esi6 < 48) 
            goto addr_804809d_4;
        if (*reinterpret_cast<unsigned char*>(&ecx4) > 7) 
            goto addr_804809d_4;
        *reinterpret_cast<int16_t*>(&eax5) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax5) * 8);
        *reinterpret_cast<int16_t*>(&edx2) = __intrinsic();
        eax5 = eax5 + ecx4;
        ++esi6;
    }
    if (edx2 != esi6) {
        addr_80480a0_8:
        return eax5;
    } else {
        addr_804809d_4:
        eax5 = -1;
        goto addr_80480a0_8;
    }
}

void fun_8048000(int32_t* ecx, int32_t a2) {
    int1_t less_or_equal3;
    int32_t eax4;
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
    signed char dh24;
    int32_t esi25;
    int32_t esi26;
    void* tmp8_27;
    uint1_t cf28;
    int32_t ebx29;
    int32_t ebx30;
    signed char bl31;
    int32_t eax32;
    int32_t v33;

    if (less_or_equal3) {
        *ecx = *ecx + eax4;
        *ebx5 = *ebx6 + eax7;
        *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
        *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
        *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
        *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
        *reinterpret_cast<signed char*>(&eax20) = reinterpret_cast<signed char>(al21 + *eax22);
        eax23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax20) + reinterpret_cast<int32_t>(*eax20));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<int32_t>(eax23));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(eax23)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(eax23)) + dh24);
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<int32_t>(eax23));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<unsigned char*>(eax23 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax23 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<void**>(&eax23) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)) + 8);
        esi25 = esi26 + 1 + 1;
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<signed char*>(esi25 + 0x5000000) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(esi25 + 0x5000000) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax23) + 1));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
    }
    tmp8_27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
    cf28 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_27) < reinterpret_cast<unsigned char>(*eax23));
    *eax23 = tmp8_27;
    *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23))) + cf28);
    *reinterpret_cast<signed char*>(ebx29 - 0x7d) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx30 - 0x7d) + bl31);
    __asm__("sti ");
    eax32 = fun_8048073(ecx);
    if (eax32 != -1) {
        while (v33) {
            __asm__("int 0x80");
        }
    }
    __asm__("int 0x80");
}
