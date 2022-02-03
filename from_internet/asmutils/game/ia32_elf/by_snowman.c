
struct s0 {
    signed char[6] pad6;
    signed char f6;
};

struct s1 {
    signed char[6] pad6;
    signed char f6;
};

void fun_8048000(int32_t* ecx) {
    uint48_t v2;
    int1_t less_or_equal3;
    int32_t esi4;
    int32_t esi5;
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
    unsigned char* eax27;
    struct s0* ebx28;
    struct s1* ebx29;
    unsigned char tmp8_30;
    uint1_t cf31;
    signed char bl32;
    int32_t edi33;
    int32_t ebp34;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 2) = reinterpret_cast<int32_t>(__return_address());
    if (less_or_equal3) {
        esi4 = esi5 + 1;
        *ecx = *ecx + eax6;
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
        eax27 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 1 - 1 + *reinterpret_cast<int32_t*>(&v2));
        ebx28->f6 = reinterpret_cast<signed char>(ebx29->f6 + *reinterpret_cast<signed char*>(&ecx));
        *eax27 = reinterpret_cast<unsigned char>(*eax27 + reinterpret_cast<int32_t>(eax27));
        *eax27 = reinterpret_cast<unsigned char>(*eax27 + *reinterpret_cast<signed char*>(&eax27));
    }
    tmp8_30 = reinterpret_cast<unsigned char>(*eax27 + *reinterpret_cast<signed char*>(&eax27));
    cf31 = reinterpret_cast<uint1_t>(tmp8_30 < *eax27);
    *eax27 = tmp8_30;
    *eax27 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax27 + *reinterpret_cast<signed char*>(&eax27)) + cf31);
    *reinterpret_cast<signed char*>(eax27 - 0x7d) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax27 - 0x7d) + bl32);
    *eax27 = reinterpret_cast<unsigned char>(*eax27 + *reinterpret_cast<signed char*>(&eax27));
    __asm__("int 0x80");
    while (1) {
        __asm__("int 0x80");
        __asm__("int 0x80");
    }
}

struct s2 {
    signed char[1] pad1;
    unsigned char f1;
};

int32_t g80483a0;

int32_t g80483a4;

int32_t g8048394;

struct s3 {
    unsigned char f0;
    signed char[23] pad24;
    int32_t f18;
    signed char[20] pad48;
    struct s2* f30;
    signed char[8] pad60;
    int32_t f3c;
    signed char[38] pad102;
    unsigned char f66;
    signed char[2] pad105;
    unsigned char f69;
    signed char[6] pad112;
    unsigned char f70;
};

struct s3* g8048430;

struct s2* g80483d8;

int32_t g80483e4;

unsigned char g80483a8;

int32_t g80483c0;

uint32_t g8048398;

uint32_t g804839c;

uint32_t g8048648;

signed char g8048387 = 0;

struct s4 {
    unsigned char f0;
    signed char[115] pad116;
    unsigned char f74;
};

unsigned char g69;

unsigned char g1;

int32_t g80483ec;

unsigned char g14;

unsigned char g6162202d;

struct s5 {
    signed char[115] pad115;
    unsigned char f73;
};

int32_t g20;

void fun_8048081() {
    void* esp1;
    int32_t* edi2;
    int32_t ecx3;
    struct s2* edi4;
    struct s2* esi5;
    int32_t* esp6;
    void* esp7;
    int32_t v8;
    struct s2* tmp32_9;
    struct s3* tmp32_10;
    void* esp11;
    struct s3* tmp32_12;
    struct s3* ebp13;
    int32_t ecx14;
    struct s3* tmp32_15;
    uint32_t eax16;
    signed char bl17;
    int1_t below_or_equal18;
    uint32_t eax19;
    int1_t below_or_equal20;
    unsigned char* edx21;
    unsigned char* eax22;
    struct s4* ecx23;
    struct s3* edi24;
    void* ebp25;
    int1_t zf26;
    struct s3** esp27;
    unsigned char tmp8_28;
    int32_t ebp29;
    int1_t zf30;

    esp1 = __zero_stack_offset();
    edi2 = reinterpret_cast<int32_t*>(0x804864c);
    ecx3 = 0x3fff;
    while (ecx3) {
        --ecx3;
        *edi2 = 0x90909090;
        ++edi2;
    }
    __asm__("int 0x80");
    __asm__("rcr eax, cl");
    __asm__("rcl edi, cl");
    __asm__("rcr esi, cl");
    edi4 = reinterpret_cast<struct s2*>(0x8056505);
    esi5 = reinterpret_cast<struct s2*>(0x8054547);
    esp6 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp1) - 4 + 4 + 4);
    while (esp7 = reinterpret_cast<void*>(esp6 + 1), !!v8) {
        __asm__("int 0x80");
        if (0) 
            goto 0x804806d;
        __asm__("int 0x80");
        g80483a0 = 3;
        esp6 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp7) - 4 + 4 - 4 + 4 - 4 + 4);
        __asm__("int 0x80");
        tmp32_9 = edi4;
        edi4 = esi5;
        esi5 = tmp32_9;
    }
    __asm__("int 0x80");
    if (!1) {
        g80483a0 = 2;
        g80483a4 = 2;
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
        while (1) {
        }
    }
    g8048394 = 2;
    __asm__("int 0x80");
    g8048430 = reinterpret_cast<struct s3*>(0x80483ec);
    __asm__("int 0x80");
    g80483d8 = esi5;
    g80483e4 = 0x8048534;
    g80483a8 = reinterpret_cast<unsigned char>(0x80483a0);
    g80483c0 = 0x804864c;
    tmp32_10 = g8048430;
    g8048430 = reinterpret_cast<struct s3*>(0x80483a8);
    __asm__("int 0x80");
    tmp32_10->f30 = edi4;
    esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 + 4 - 4 + 4 - 4 + 4 + 4);
    tmp32_10->f3c = 0x8048634;
    tmp32_10->f0 = reinterpret_cast<unsigned char>(0x80483a4);
    tmp32_10->f18 = 0x804864c;
    tmp32_12 = g8048430;
    g8048430 = tmp32_10;
    ebp13 = tmp32_12;
    ecx14 = 40;
    g8048398 = 0;
    g804839c = 0;
    while (1) {
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
        tmp32_15 = g8048430;
        g8048430 = ebp13;
        ebp13 = tmp32_15;
        esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp11) - 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 + 4);
        --ecx14;
        if (ecx14) 
            continue;
        __asm__("int 0x80");
        esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp11) - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4);
        __asm__("int 0x80");
        eax16 = g8048648;
        bl17 = 50;
        below_or_equal18 = eax16 <= g8048398;
        if (below_or_equal18) 
            break;
        g8048398 = eax16;
        ecx14 = g8048394;
        esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp11) - 4 + 4 - 4 + 4);
        __asm__("int 0x80");
        eax19 = g8048648;
        bl17 = 49;
        below_or_equal20 = eax19 <= g804839c;
        if (below_or_equal20) 
            break;
        g804839c = eax19;
    }
    g8048387 = bl17;
    __asm__("int 0x80");
    __asm__("int 0x80");
    edx21 = reinterpret_cast<unsigned char*>(20);
    __asm__("int 0x80");
    eax22 = reinterpret_cast<unsigned char*>(1);
    __asm__("int 0x80");
    ecx23 = reinterpret_cast<struct s4*>("Player ");
    edi24 = reinterpret_cast<struct s3*>(&edi4->f1);
    ebp25 = reinterpret_cast<void*>(&ebp13->pad24);
    __asm__("a16 popad ");
    __asm__("insd ");
    g69 = 0;
    zf26 = g69 == 0;
    __asm__("insb ");
    __asm__("insb ");
    if (!0) 
        goto addr_80482e1_17;
    addr_8048340_18:
    __asm__("outsb ");
    __asm__("popad ");
    if (!zf26) {
        edi24->f70 = reinterpret_cast<unsigned char>(edi24->f70 & 0xff);
        goto addr_804834d_21;
    }
    addr_80482e1_17:
    if (0) {
        addr_8048355_22:
        __asm__("insb ");
        edi24->f69 = 0;
        if (edi24->f69) {
            g69 = 0;
            goto addr_8048362_25;
        }
    } else {
        edi24 = reinterpret_cast<struct s3*>(0);
        esp27 = reinterpret_cast<struct s3**>(reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(esp11) - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 - 4) + 4);
        g1 = reinterpret_cast<unsigned char>(g1 ^ reinterpret_cast<uint32_t>(esp27));
        ebp25 = reinterpret_cast<void*>(g80483ec * 0x6c);
        if (__intrinsic()) {
            addr_804834d_21:
            __asm__("outsb ");
            *reinterpret_cast<unsigned char*>(1 + reinterpret_cast<uint32_t>(ebp25) * 2 + 0x65) = 0;
            g69 = 0;
            goto addr_8048355_22;
        } else {
            if (__intrinsic()) 
                goto addr_8048362_25;
            edi24 = ebp13;
            *reinterpret_cast<unsigned char*>(&ecx23) = reinterpret_cast<unsigned char>(0x80 ^ g14);
            esp27 = esp27 + 1 - 1;
            __asm__("popad ");
            if (!1) 
                goto addr_80482f8_29;
        }
    }
    addr_8048363_30:
    __asm__("arpl [edi+0x64], bp");
    g6162202d = reinterpret_cast<unsigned char>(g6162202d & 0xff);
    addr_8048371_31:
    g69 = 0;
    __asm__("insb ");
    __asm__("outsb ");
    goto addr_8048377_32;
    addr_80482f8_29:
    edi24->f66 = 0;
    g69 = 0;
    __asm__("insb ");
    __asm__("insb ");
    if (0) {
        addr_8048362_25:
        goto addr_8048363_30;
    } else {
        if (0) 
            goto addr_8048377_32;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int16_t>(&(*reinterpret_cast<struct s5**>(&edi24))->pad115) + 0x73) = 0;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi24) + reinterpret_cast<uint32_t>(ebp25) * 2 + 32) = 0;
        if (0) 
            goto addr_8048371_31;
    }
    if (1) {
        addr_8048377_32:
        __asm__("popad ");
        __asm__("insd ");
        edi24->f0 = 0;
        g14 = reinterpret_cast<unsigned char>(g14 & reinterpret_cast<uint32_t>(ecx23));
        __asm__("popad ");
        if (__intrinsic()) {
            if (!0) {
                tmp8_28 = reinterpret_cast<unsigned char>(g1 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax22) + 1));
                g1 = tmp8_28;
                goto addr_8048389_40;
            }
        }
    } else {
        ecx23->f74 = 0;
        if (1) {
            addr_8048337_42:
            if (!0) {
                ebp25 = reinterpret_cast<void*>(g1 * 50);
                g1 = reinterpret_cast<unsigned char>(g1 ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx21) + 1));
                goto addr_804833f_45;
            }
        } else {
            __asm__("outsd ");
            if (0) {
                addr_8048389_40:
                __asm__("outsd ");
                __asm__("outsb ");
                ecx23->f0 = 0;
            } else {
                __asm__("outsb ");
                __asm__("outsb ");
                if (!ecx23->f74) {
                    addr_804833f_45:
                    g1 = reinterpret_cast<unsigned char>(g1 ^ reinterpret_cast<uint32_t>(ebp25));
                    zf26 = g1 == 0;
                    goto addr_8048340_18;
                } else {
                    ebp29 = g20 * 0x6f6d656d;
                    if (!__intrinsic()) {
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx23) + 1) = 0xff;
                        g1 = reinterpret_cast<unsigned char>(g1 - reinterpret_cast<uint32_t>(esp27));
                        zf30 = g1 == 0;
                        if (zf30) {
                            __asm__("outsd ");
                            __asm__("insb ");
                            *reinterpret_cast<unsigned char*>(ebp29 + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp29 + 97) & *reinterpret_cast<unsigned char*>(&ecx23));
                            goto addr_8048337_42;
                        }
                    }
                }
            }
        }
    }
}
