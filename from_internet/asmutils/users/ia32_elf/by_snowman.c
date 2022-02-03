
unsigned char g80480e0;

void fun_8048000(int32_t* ecx, unsigned char* a2) {
    int1_t less_or_equal3;
    void* tmp8_4;
    void** eax5;
    uint1_t cf6;
    int32_t ebx7;
    int32_t ebx8;
    signed char bl9;
    signed char bl10;
    unsigned char* edx11;
    int32_t eax12;
    int32_t* ebx13;
    int32_t* ebx14;
    int32_t eax15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    signed char* eax22;
    signed char* eax23;
    signed char al24;
    signed char* eax25;
    signed char* eax26;
    signed char al27;
    void** eax28;
    signed char al29;
    signed char* eax30;
    signed char dh31;
    int32_t ecx32;
    int1_t zf33;
    unsigned char* edi34;
    signed char* edi35;

    if (!less_or_equal3) {
        addr_8048047_2:
        tmp8_4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax5) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax5)));
        cf6 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_4) < reinterpret_cast<unsigned char>(*eax5));
        *eax5 = tmp8_4;
        *eax5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax5) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax5))) + cf6);
        *reinterpret_cast<signed char*>(ebx7 - 2) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx8 - 2) + bl9);
        __asm__("retf ");
        if (!(bl10 - 1)) {
            edx11 = a2;
        } else {
            edx11 = reinterpret_cast<unsigned char*>("/var/run/utmp");
        }
    } else {
        *ecx = *ecx + eax12;
        *ebx13 = *ebx14 + eax15;
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
        *eax22 = reinterpret_cast<signed char>(*eax23 + al24);
        *eax25 = reinterpret_cast<signed char>(*eax26 + al27);
        *reinterpret_cast<signed char*>(&eax28) = reinterpret_cast<signed char>(al29 + *eax30);
        eax5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax28) + reinterpret_cast<int32_t>(*eax28));
        *eax5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax5) + reinterpret_cast<int32_t>(eax5));
        *eax5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax5) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax5)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax5) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax5) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax5) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax5)));
        *eax5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax5) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax5)));
        *eax5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax5) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax5)));
        *eax5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax5) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax5)));
        *eax5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax5) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax5)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax5) + reinterpret_cast<int32_t>(eax5)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax5) + reinterpret_cast<int32_t>(eax5)) + dh31);
        *eax5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax5) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax5)));
        *eax5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax5) + reinterpret_cast<int32_t>(eax5));
        *eax5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax5) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax5)));
        *eax5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax5) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax5)));
        *eax5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax5) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax5)));
        *reinterpret_cast<unsigned char*>(eax5 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax5 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax5)));
        *reinterpret_cast<void**>(&eax5) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax5)) + 8);
        if (reinterpret_cast<uint1_t>(!!(reinterpret_cast<int32_t>(ecx) - 1)) & reinterpret_cast<uint1_t>(!!*reinterpret_cast<void**>(&eax5))) 
            goto addr_804803e_6; else 
            goto addr_804803e_6;
    }
    ecx32 = 0;
    __asm__("int 0x80");
    if (!0) {
        while (!0) {
            g80480e0 = reinterpret_cast<unsigned char>(g80480e0 ^ 7);
            zf33 = g80480e0 == 0;
            if (!zf33) 
                continue;
            __asm__("int 0x80");
            __asm__("int 0x80");
        }
        edx11 = reinterpret_cast<unsigned char*>(1);
        ecx32 = reinterpret_cast<int32_t>("\n");
        __asm__("int 0x80");
    }
    __asm__("int 0x80");
    __asm__("int 0x80");
    __asm__("das ");
    if (!1) {
        if (!0) {
            if (!0) {
                __asm__("outsb ");
                __asm__("das ");
                if (0) {
                }
                __asm__("insd ");
                *edx11 = reinterpret_cast<unsigned char>(*edx11 & *reinterpret_cast<unsigned char*>(&ecx32));
            }
        }
    }
    addr_804803e_6:
    *eax5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax5) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax5)));
    __asm__("pushad ");
    *reinterpret_cast<void**>(&eax5) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax5)) + reinterpret_cast<unsigned char>(*eax5));
    *edi34 = reinterpret_cast<unsigned char>(*edi35 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax5)));
    *eax5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax5) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax5)));
    goto addr_8048047_2;
}
