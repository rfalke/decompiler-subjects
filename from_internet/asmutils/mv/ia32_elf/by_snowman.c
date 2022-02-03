
uint16_t g804814c;

uint32_t fun_80480e7() {
    uint32_t eax1;
    uint32_t eax2;

    __asm__("pushad ");
    eax1 = 0x6a;
    __asm__("int 0x80");
    if (!0) {
        eax2 = g804814c;
        eax1 = eax2 & 0x4000;
    }
    __asm__("popad ");
    return eax1;
}

int32_t fun_804810e() {
    int32_t v1;
    int32_t eax2;

    v1 = eax2;
    do {
        __asm__("lodsb ");
    } while (0);
    return v1;
}

int32_t fun_804811f() {
    int32_t eax1;
    int32_t ecx2;
    int32_t edx3;
    signed char* edi4;
    signed char* esi5;

    __asm__("pushad ");
    eax1 = fun_804810e();
    ecx2 = edx3 + 1;
    while (ecx2) {
        --ecx2;
        *edi4 = *esi5;
        ++edi4;
        ++esi5;
    }
    __asm__("popad ");
    return eax1;
}

int32_t fun_804812c() {
    signed char* esi1;
    signed char* esi2;
    signed char* edi3;
    int32_t edi4;
    int32_t edx5;
    int32_t eax6;
    int32_t ecx7;
    int32_t edx8;

    __asm__("pushad ");
    fun_804810e();
    esi1 = esi2;
    edi3 = reinterpret_cast<signed char*>(edi4 + edx5);
    eax6 = fun_804810e();
    ecx7 = edx8 + 1;
    while (ecx7) {
        --ecx7;
        *edi3 = *esi1;
        ++edi3;
        ++esi1;
    }
    __asm__("popad ");
    return eax6;
}

int32_t fun_80480b8();

int32_t fun_8048071() {
    int1_t zf1;
    int16_t ax2;
    int32_t ecx3;
    int32_t edx4;
    signed char* edi5;
    int32_t esi6;
    int32_t edx7;
    int1_t zf8;

    __asm__("pushad ");
    fun_80480e7();
    if (zf1) {
        fun_804810e();
        ax2 = 47;
        ecx3 = edx4;
        edi5 = reinterpret_cast<signed char*>(esi6 + (edx7 - 1));
        zf8 = *edi5 == 47;
        if (zf8) {
            *edi5 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ax2) + 1);
        }
        do {
            if (!ecx3) 
                break;
            --ecx3;
            zf8 = *edi5 == 47;
            --edi5;
        } while (!zf8);
        if (zf8) {
        }
        fun_80480b8();
    }
    __asm__("int 0x80");
    __asm__("popad ");
    return 38;
}

void fun_80480cc();

int32_t fun_80480b8() {
    int32_t eax1;

    __asm__("pushad ");
    fun_804811f();
    fun_80480cc();
    eax1 = fun_804812c();
    __asm__("popad ");
    return eax1;
}

void fun_80480cc() {
    int32_t edx1;
    int32_t edx2;
    int32_t edi3;
    int32_t edi4;

    fun_804810e();
    edx1 = edx2 - 1;
    if (*reinterpret_cast<signed char*>(edi3 + edx1) != 47) {
        *reinterpret_cast<int16_t*>(edi4 + (edx1 + 1)) = 47;
    }
    return;
}

void fun_8048000(int32_t* ecx, int32_t a2) {
    int32_t* esp3;
    int1_t less_or_equal4;
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
    signed char dh25;
    void* edx26;
    void* edx27;
    void* dl28;
    int32_t v29;

    esp3 = reinterpret_cast<int32_t*>(__zero_stack_offset());
    if (less_or_equal4) {
        *ecx = *ecx + eax5;
        *ebx6 = *ebx7 + eax8;
        *eax9 = reinterpret_cast<signed char>(*eax10 + al11);
        *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
        *eax15 = reinterpret_cast<signed char>(*eax16 + al17);
        *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
        *reinterpret_cast<signed char*>(&eax21) = reinterpret_cast<signed char>(al22 + *eax23);
        eax24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax21) + reinterpret_cast<int32_t>(*eax21));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<int32_t>(eax24));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(eax24)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(eax24)) + dh25);
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<int32_t>(eax24));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<unsigned char*>(eax24 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax24 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)) + 8);
        esp3 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp3) - 1 - 1 + 1);
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<int32_t>(eax24));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<int32_t>(edx26) + 0x70000) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<int32_t>(edx27) + 0x70000) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    }
    *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<signed char>(dl28));
    *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    if (reinterpret_cast<int32_t>(__return_address()) >= 3) {
        (esp3 + 1 + 1)[reinterpret_cast<int32_t>(__return_address()) - 1 - 1] = 0;
        while (v29) {
            fun_8048071();
        }
    }
    __asm__("int 0x80");
}
