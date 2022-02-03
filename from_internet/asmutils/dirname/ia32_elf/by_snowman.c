
void fun_80480a5() {
    signed char al1;
    signed char* eax2;

    do {
    } while (al1 != *eax2);
    return;
}

int32_t fun_80480b1() {
    int32_t v1;
    int32_t eax2;
    signed char* edx3;
    signed char* edi4;
    signed char* edi5;
    int32_t edx6;

    v1 = eax2;
    edx3 = edi4;
    edi5 = reinterpret_cast<signed char*>(edx6 + reinterpret_cast<int32_t>(edx3) - 1);
    do {
        if (edi5 == edx3) 
            break;
        --edi5;
    } while (*edi5 == 47);
    goto addr_80480c1_7;
    addr_80480c2_8:
    return v1;
    addr_80480c1_7:
    goto addr_80480c2_8;
}

struct s0 {
    int32_t f0;
    signed char[69] pad73;
    signed char f49;
};

unsigned char g0;

void fun_8048000(struct s0* ecx, int32_t a2) {
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
    unsigned char tmp8_25;
    uint1_t cf26;
    signed char bl27;
    int32_t v28;
    signed char* edi29;
    int32_t edx30;
    int1_t zf31;
    int32_t ecx32;
    int32_t edx33;

    if (less_or_equal3) {
        ecx->f0 = ecx->f0 + eax4;
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
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<signed char*>(&ecx) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ecx) + *reinterpret_cast<signed char*>(&ecx));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        tmp8_25 = reinterpret_cast<unsigned char>(g0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        cf26 = reinterpret_cast<uint1_t>(tmp8_25 < g0);
        g0 = tmp8_25;
    }
    *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23))) + cf26);
    ecx->f49 = reinterpret_cast<signed char>(ecx->f49 + bl27);
    if (reinterpret_cast<int32_t>(ecx) - 1) {
        addr_804809e_4:
        __asm__("int 0x80");
    } else {
        fun_80480a5();
        fun_80480b1();
        v28 = a2;
        edi29 = reinterpret_cast<signed char*>(a2 + edx30 - 1);
        zf31 = edi29 == 0;
        ecx32 = edx33;
        do {
            if (!ecx32) 
                break;
            --ecx32;
            zf31 = *edi29 == 47;
            ++edi29;
        } while (!zf31);
        if (zf31) 
            goto addr_804806a_9;
    }
    addr_804808c_10:
    __asm__("int 0x80");
    goto addr_804809e_4;
    addr_804806a_9:
    if (!ecx32) {
        ++ecx32;
    }
    fun_80480b1();
    *reinterpret_cast<signed char*>(ecx32 - 1 + 1 + v28) = 10;
    __asm__("int 0x80");
    __asm__("int 0x80");
    goto addr_804808c_10;
}
