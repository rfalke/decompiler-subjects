
struct s0 {
    signed char[111] pad111;
    signed char f6f;
};

struct s1 {
    signed char[111] pad111;
    signed char f6f;
};

struct s2 {
    signed char[111] pad111;
    signed char f6f;
};

int32_t g804811c;

struct s3 {
    signed char[121] pad121;
    unsigned char f79;
};

void fun_8048000(unsigned char* ecx) {
    int1_t less_or_equal2;
    int32_t esi3;
    int32_t esi4;
    int32_t eax5;
    int32_t* ebx6;
    int32_t* ebx7;
    int32_t eax8;
    signed char* eax9;
    signed char* eax10;
    signed char al11;
    signed char* eax12;
    signed char* eax13;
    signed char al14;
    signed char* eax15;
    signed char* eax16;
    signed char al17;
    signed char* eax18;
    signed char* eax19;
    signed char al20;
    void** eax21;
    signed char al22;
    signed char* eax23;
    void** eax24;
    void* tmp8_25;
    int1_t cf26;
    void* tmp8_27;
    void* tmp8_28;
    uint1_t cf29;
    struct s0* ebp30;
    struct s1* ebp31;
    struct s2* ebp32;
    int32_t ecx33;
    struct s3* edx34;
    int32_t ebp35;
    int32_t ebp36;

    if (less_or_equal2) {
        esi3 = esi4 + 1;
        *ecx = reinterpret_cast<unsigned char>(*ecx + eax5);
        *ebx6 = *ebx7 + eax8;
        *eax9 = reinterpret_cast<signed char>(*eax10 + al11);
        *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
        *eax15 = reinterpret_cast<signed char>(*eax16 + al17);
        *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
        *reinterpret_cast<signed char*>(&eax21) = reinterpret_cast<signed char>(al22 + *eax23);
        eax24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax21) + reinterpret_cast<int32_t>(*eax21));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<int32_t>(eax24));
        tmp8_25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        cf26 = reinterpret_cast<unsigned char>(tmp8_25) < reinterpret_cast<unsigned char>(*eax24);
        *eax24 = tmp8_25;
        if (!cf26) {
            *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)) + 8)));
            *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
            *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
            *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
            *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
            *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
            *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24))));
            *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
            *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<int32_t>(eax24));
            *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
            *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
            *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
            *reinterpret_cast<unsigned char*>(eax24 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax24 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
            tmp8_27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)) + 8);
            *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(tmp8_27) - reinterpret_cast<unsigned char>(1 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_27) < reinterpret_cast<unsigned char>(1 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_27) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)))))));
            *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
            *ecx = 0;
            *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
            *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        }
    }
    tmp8_28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    cf29 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_28) < reinterpret_cast<unsigned char>(*eax24));
    *eax24 = tmp8_28;
    *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24))) + cf29);
    ebp30->f6f = reinterpret_cast<signed char>(ebp31->f6f + *reinterpret_cast<signed char*>(&ecx));
    if (ebp32->f6f) {
        while (1) {
            __asm__("int 0x80");
            while (1) {
                __asm__("int 0x80");
                do {
                    addr_8048092_9:
                    __asm__("int 0x80");
                    addr_8048099_10:
                    __asm__("int 0x80");
                    __asm__("int 0x80");
                    if (!0) 
                        goto addr_80480b9_11;
                    __asm__("int 0x80");
                } while (0);
                ecx33 = g804811c;
                addr_80480fb_14:
                __asm__("lodsb ");
                if (1) 
                    goto addr_80480fb_14;
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&g804811c) + 3) = 10;
                --ecx33;
                if (ecx33) 
                    goto addr_80480fb_14;
            }
            addr_80480b9_11:
        }
    } else {
        *eax24 = reinterpret_cast<void*>(0);
        *eax24 = reinterpret_cast<void*>(0);
        *eax24 = reinterpret_cast<void*>(0);
        *eax24 = reinterpret_cast<void*>(0);
        *eax24 = reinterpret_cast<void*>(0);
        *eax24 = reinterpret_cast<void*>(0);
        *eax24 = reinterpret_cast<void*>(0);
        *eax24 = reinterpret_cast<void*>(0);
        *eax24 = reinterpret_cast<void*>(0);
        edx34->f79 = 0;
        do {
            __asm__("lodsb ");
        } while (*reinterpret_cast<void**>(&eax24));
        if (*reinterpret_cast<int16_t*>(esi3 - 6) == 0x736c) 
            goto addr_8048099_10;
        ebp35 = ebp36 - 1;
        if (!ebp35) 
            goto addr_8048092_9;
        while (1) {
            __asm__("int 0x80");
            if (0) 
                goto addr_8048092_9;
            --ebp35;
            if (!ebp35) 
                goto addr_8048092_9;
        }
    }
}

void fun_804810e() {
    int1_t of1;
    int1_t zf2;
    int1_t cf3;

    __asm__("das ");
    if (!of1) {
        __asm__("outsd ");
        __asm__("arpl [edi], bp");
        __asm__("insd ");
        __asm__("outsd ");
        if (!zf2) {
        }
    }
}
