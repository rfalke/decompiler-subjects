
int32_t fun_8048376(unsigned char* ecx, int32_t a2) {
    uint32_t edx3;
    uint32_t eax4;

    __asm__("pushad ");
    do {
        --ecx;
        edx3 = eax4 % 10;
        eax4 = eax4 / 10;
        *ecx = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx3) | 48);
    } while (eax4);
    __asm__("int 0x80");
    __asm__("popad ");
    return 4;
}

int32_t g8093ac4;

int32_t g80933ea;

int32_t g80933ee;

int32_t g80933fc;

int32_t g8093400;

int32_t g8093404;

int32_t g8093408;

int32_t g8093414;

int32_t g809349c;

int32_t g80934a0;

struct s0 {
    int16_t f0;
    signed char[126] pad128;
    int16_t f80;
    signed char[126] pad256;
    int16_t f100;
    signed char[126] pad384;
    int16_t f180;
};

struct s0* g80934a4;

struct s1 {
    int16_t f0;
    signed char[126] pad128;
    int16_t f80;
    signed char[126] pad256;
    int16_t f100;
    signed char[126] pad384;
    int16_t f180;
};

struct s1* g80934a8;

struct s2 {
    int16_t f0;
    signed char[126] pad128;
    int16_t f80;
    signed char[126] pad256;
    int16_t f100;
    signed char[126] pad384;
    int16_t f180;
};

struct s2* g80934ac;

int32_t g80934b0;

int32_t g8093ac8;

int32_t g8093acc;

void fun_8048000(int32_t* ecx) {
    int32_t v2;
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
    int32_t eax25;
    struct s0* esi26;
    struct s1* edi27;
    struct s2* ebx28;
    int32_t ecx29;
    int32_t eax30;
    int32_t ecx31;
    int32_t v32;
    int32_t* esi33;
    int32_t ecx34;
    int32_t eax35;
    int32_t eax36;
    int32_t eax37;
    uint32_t ecx38;

    v2 = reinterpret_cast<int32_t>(__return_address());
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
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
    }
    *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + 4);
    *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
    __asm__("int 0x80");
    if ((g8093ac4 = 5, 0) || ((eax25 = g8093ac4, 0) || ((g80933ea = 0xc0, g80933ee = eax25, g80933fc = 0x280, g8093400 = 0x1e0, g8093404 = 0x280, g8093408 = 0x1e0, g8093414 = 8, 0) || (g809349c = 0, g80934a0 = 0x100, g80934a4 = reinterpret_cast<struct s0*>(0x80934b4), g80934a8 = reinterpret_cast<struct s1*>(0x80936b4), g80934ac = reinterpret_cast<struct s2*>(0x80938b4), g80934b0 = 0, 0)))) {
        addr_804836f_4:
        __asm__("int 0x80");
    } else {
        g80934a4 = reinterpret_cast<struct s0*>(0x80934b4);
        g80934a8 = reinterpret_cast<struct s1*>(0x80936b4);
        g80934ac = reinterpret_cast<struct s2*>(0x80938b4);
        esi26 = g80934a4;
        edi27 = g80934a8;
        ebx28 = g80934ac;
        ecx29 = 0;
        do {
            eax30 = ecx29 << 8;
            esi26->f0 = *reinterpret_cast<int16_t*>(&eax30);
            edi27->f0 = 0;
            ebx28->f0 = 0;
            esi26->f80 = 0x3f00;
            edi27->f80 = *reinterpret_cast<int16_t*>(&eax30);
            ebx28->f80 = 0;
            esi26->f100 = 0x3f00;
            edi27->f100 = 0x3f00;
            ebx28->f100 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax30) + *reinterpret_cast<int16_t*>(&eax30));
            esi26->f180 = 0x3f00;
            edi27->f180 = 0x3f00;
            ebx28->f180 = 0x3f00;
            esi26 = reinterpret_cast<struct s0*>(&esi26->pad128);
            edi27 = reinterpret_cast<struct s1*>(&edi27->pad128);
            ebx28 = reinterpret_cast<struct s2*>(&ebx28->pad128);
            ++ecx29;
        } while (ecx29 != 64);
        __asm__("int 0x80");
        if (0) 
            goto addr_804836f_4;
    }
    g8093ac8 = 0x8088405;
    g8093acc = 0x1234567;
    __asm__("int 0x80");
    ecx31 = 0x3e8;
    do {
        v32 = ecx31;
        esi33 = reinterpret_cast<int32_t*>(0x809313c);
        ecx34 = 0xa0;
        do {
            eax35 = g8093acc;
            eax36 = eax35 * g8093ac8;
            eax37 = eax36 + 1;
            g8093acc = eax37;
            *esi33 = eax37;
            ++esi33;
            --ecx34;
        } while (ecx34);
        ecx38 = 0x95b0;
        __asm__("movq mm7, [0x80483a0]");
        __asm__("movq mm6, [0x80483a8]");
        do {
            __asm__("movq mm0, [esi+0x280]");
            __asm__("paddusb mm0, [esi+0x4ff]");
            __asm__("paddusb mm0, [esi+0x500]");
            __asm__("paddusb mm0, [esi+0x501]");
            __asm__("movq [edi], mm0");
            if (!(ecx38 & 3)) {
                __asm__("psubusb mm0, mm6");
            }
            __asm__("psrlq mm0, 0x2");
            __asm__("pand mm0, mm7");
            __asm__("movq [esi], mm0");
            --ecx38;
        } while (ecx38);
        ecx31 = v32 - 1;
    } while (ecx31);
    __asm__("int 0x80");
    __asm__("cdq ");
    fun_8048376(0x8093adc, v2);
    __asm__("int 0x80");
    __asm__("emms ");
    __asm__("int 0x80");
    goto addr_804836f_4;
}

void fun_8048398(signed char* ecx) {
    int32_t eax2;
    int32_t* eax3;
    int32_t* eax4;
    int32_t eax5;
    signed char al6;
    unsigned char tmp8_7;
    signed char* eax8;
    signed char al9;
    uint1_t cf10;
    unsigned char* eax11;
    unsigned char* eax12;
    signed char* eax13;

    __asm__("aas ");
    __asm__("aas ");
    __asm__("aas ");
    __asm__("aas ");
    __asm__("aas ");
    __asm__("aas ");
    __asm__("aas ");
    __asm__("aas ");
    *ecx = reinterpret_cast<signed char>(*ecx + eax2);
    *eax3 = *eax4 + eax5;
    *ecx = reinterpret_cast<signed char>(*ecx + al6);
    tmp8_7 = reinterpret_cast<unsigned char>(*eax8 + al9);
    cf10 = reinterpret_cast<uint1_t>(tmp8_7 < *eax11);
    *eax12 = tmp8_7;
    __asm__("das ");
    if (cf10 | reinterpret_cast<uint1_t>(*eax13 == 0)) {
    }
}
