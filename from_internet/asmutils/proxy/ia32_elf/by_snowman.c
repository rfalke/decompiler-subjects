
void fun_80480e5() {
    int32_t eax1;
    int1_t cf2;

    eax1 = 0;
    while ((cf2 = *reinterpret_cast<unsigned char*>(&eax1) < 48, *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1) - 48), !cf2) && *reinterpret_cast<unsigned char*>(&eax1) <= 9) {
    }
    return;
}

void fun_80480d1() {
    int32_t ecx1;

    ecx1 = 4;
    do {
        fun_80480e5();
        __asm__("ror edx, 0x8");
        --ecx1;
    } while (ecx1);
    return;
}

struct s0 {
    signed char[1] pad1;
    signed char f1;
};

int32_t g8048211;

int32_t g804820d;

int32_t g80481fd;

signed char g804a21d;

void fun_8048000(unsigned char* ecx, int32_t a2, int32_t a3, int32_t a4) {
    int1_t less_or_equal5;
    signed char* esi6;
    struct s0* esi7;
    int32_t eax8;
    int32_t* ebx9;
    int32_t* ebx10;
    int32_t eax11;
    signed char* eax12;
    signed char* eax13;
    signed char al14;
    signed char* eax15;
    signed char* eax16;
    signed char al17;
    signed char* eax18;
    signed char* eax19;
    signed char al20;
    signed char* eax21;
    signed char* eax22;
    signed char al23;
    void** eax24;
    signed char al25;
    signed char* eax26;
    void** eax27;
    signed char dh28;
    signed char bl29;
    unsigned char* edi30;
    signed char* edi31;
    void* tmp8_32;
    uint1_t cf33;
    int32_t ebp34;
    int32_t ebp35;
    signed char bl36;
    int32_t edx37;
    int32_t ebx38;
    signed char bh39;
    signed char bl40;
    int32_t ebx41;
    int32_t ebx42;
    int32_t ebx43;
    signed char tmp8_44;
    int32_t ebx45;

    if (less_or_equal5) {
        esi6 = &esi7->f1;
        *ecx = reinterpret_cast<unsigned char>(*ecx + eax8);
        *ebx9 = *ebx10 + eax11;
        *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
        *eax15 = reinterpret_cast<signed char>(*eax16 + al17);
        *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
        *eax21 = reinterpret_cast<signed char>(*eax22 + al23);
        *reinterpret_cast<signed char*>(&eax24) = reinterpret_cast<signed char>(al25 + *eax26);
        eax27 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(*eax24));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<int32_t>(eax27));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(eax27)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax27) + reinterpret_cast<int32_t>(eax27)) + dh28);
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<int32_t>(eax27));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *reinterpret_cast<unsigned char*>(eax27 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax27 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *reinterpret_cast<void**>(&eax27) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)) + 8);
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<int32_t>(eax27));
        *esi6 = reinterpret_cast<signed char>(*esi6 + bl29);
        *reinterpret_cast<void**>(&eax27) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)) & reinterpret_cast<unsigned char>(*eax27));
        *edi30 = reinterpret_cast<unsigned char>(*edi31 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
        *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    }
    tmp8_32 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    cf33 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_32) < reinterpret_cast<unsigned char>(*eax27));
    *eax27 = tmp8_32;
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27))) + cf33);
    *ecx = reinterpret_cast<unsigned char>(*ecx + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax27)));
    *reinterpret_cast<signed char*>(ebp34 - 0x7d) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp35 - 0x7d) + bl36);
    fun_80480e5();
    fun_80480d1();
    g8048211 = edx37;
    fun_80480e5();
    *reinterpret_cast<signed char*>(&ebx38) = bh39;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx38) + 1) = bl40;
    ebx41 = ebx38 << 16;
    *reinterpret_cast<signed char*>(&ebx41) = 2;
    g804820d = ebx41;
    ebx42 = ebx43;
    tmp8_44 = *reinterpret_cast<signed char*>(&ebx42);
    *reinterpret_cast<signed char*>(&ebx42) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx42) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx42) + 1) = tmp8_44;
    ebx45 = ebx42 << 16;
    *reinterpret_cast<signed char*>(&ebx45) = 2;
    g80481fd = ebx45;
    __asm__("int 0x80");
    __asm__("int 0x80");
    __asm__("int 0x80");
    if (!1) {
        __asm__("int 0x80");
        __asm__("int 0x80");
        if (0) {
            while (1) {
                g804a21d = 16;
                __asm__("int 0x80");
                if (0) 
                    continue;
                __asm__("int 0x80");
                __asm__("int 0x80");
                __asm__("int 0x80");
                if (0) 
                    break;
                __asm__("int 0x80");
            }
            __asm__("int 0x80");
            __asm__("int 0x80");
            if (0) 
                goto addr_80481b0_11; else 
                goto addr_80481ab_12;
        } else {
            addr_804812c_13:
        }
    }
    __asm__("int 0x80");
    addr_80481b0_11:
    __asm__("int 0x80");
    if (!0) {
    }
    while (!0) {
        __asm__("int 0x80");
    }
    __asm__("int 0x80");
    goto addr_804812c_13;
    addr_80481ab_12:
    __asm__("int 0x80");
    goto addr_80481b0_11;
}
