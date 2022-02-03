
signed char g8270ba0a;

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    signed char[12] pad12;
    uint32_t fc;
    signed char[1] pad17;
    signed char f11;
    signed char f12;
};

int32_t g804826c;

struct s2 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s3 {
    int32_t f0;
    int32_t f4;
};

unsigned char g67;

struct s4 {
    signed char[46] pad46;
    signed char f2e;
};

struct s5 {
    signed char[46] pad46;
    signed char f2e;
};

unsigned char g2;

unsigned char g80481ca = 36;

void fun_8048000(int32_t* ecx) {
    void** esp2;
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
    unsigned char* edx26;
    unsigned char* edx27;
    void** tmp32_28;
    void** eax29;
    void* v30;
    unsigned char* edi31;
    signed char* edi32;
    void* tmp8_33;
    uint1_t cf34;
    signed char tmp8_35;
    int32_t* esp36;
    int32_t* esp37;
    struct s0* esp38;
    int32_t* esp39;
    struct s1* esp40;
    int32_t* esp41;
    int32_t* esp42;
    int32_t* esp43;
    void* esp44;
    int32_t* esp45;
    int32_t* esp46;
    int32_t* esp47;
    int32_t* esp48;
    int32_t* esp49;
    struct s2* esp50;
    int32_t* esp51;
    int32_t* esp52;
    int32_t* esp53;
    struct s1* esp54;
    signed char* edi55;
    int32_t ecx56;
    int32_t* esp57;
    int32_t* esp58;
    int32_t* esp59;
    int32_t* esp60;
    int32_t* esp61;
    int32_t* esp62;
    int32_t* esp63;
    struct s3* esp64;
    struct s3* esp65;
    struct s3* esp66;
    struct s3* esp67;
    struct s3* esp68;
    struct s3* esp69;
    struct s3* esp70;
    struct s3* esp71;
    unsigned char* ecx72;
    int32_t* esp73;
    int32_t* esp74;
    int32_t* esp75;
    int32_t eax76;
    uint1_t zf77;
    struct s4* ebp78;
    struct s5* ebp79;
    uint1_t zf80;

    esp2 = reinterpret_cast<void**>(__zero_stack_offset());
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
        **reinterpret_cast<signed char**>(&esi4) = reinterpret_cast<signed char>(**reinterpret_cast<signed char**>(&esi4) + 8);
        *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25))));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25))));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<int32_t>(eax25));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<unsigned char*>(eax25 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax25 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) + 8);
        *edx26 = reinterpret_cast<unsigned char>(*edx27 | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        tmp32_28 = esp2 - 1;
        esp2 = eax25;
        eax29 = tmp32_28;
        *reinterpret_cast<void**>(&eax29) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax29)) + reinterpret_cast<unsigned char>(v30));
        *edi31 = reinterpret_cast<unsigned char>(*edi32 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax29)));
        *eax29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax29) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax29)));
    }
    tmp8_33 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax29) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax29)));
    cf34 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_33) < reinterpret_cast<unsigned char>(*eax29));
    *eax29 = tmp8_33;
    *eax29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax29) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax29))) + cf34);
    tmp8_35 = reinterpret_cast<signed char>(g8270ba0a + *reinterpret_cast<signed char*>(&ecx));
    g8270ba0a = tmp8_35;
    esp36 = reinterpret_cast<int32_t*>(esp2 - 4);
    *esp36 = 54;
    __asm__("int 0x80");
    esp37 = esp36 + 1 - 1;
    *esp37 = 66;
    esp38 = reinterpret_cast<struct s0*>(esp37 + 1 - 1);
    esp38->f0 = 1;
    esp39 = &esp38->f4;
    __asm__("int 0x80");
    esp40 = reinterpret_cast<struct s1*>(esp39 + 1);
    if (*esp39 - 1) {
        esp41 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp40) + 4 + 4 - 4);
        *esp41 = 3;
        esp42 = esp41 + 1 - 1;
        *esp42 = 48;
        __asm__("int 0x80");
        esp43 = esp42 + 1 - 1;
        *esp43 = 5;
        esp44 = reinterpret_cast<void*>(esp43 + 1);
        __asm__("int 0x80");
        if (__intrinsic()) {
            esp45 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp44) - 4);
            *esp45 = 1;
            esp46 = esp45 + 1 - 1;
            *esp46 = 4;
            __asm__("int 0x80");
            esp47 = esp46 + 1 - 1;
            *esp47 = 1;
            esp48 = esp47 + 1 - 1;
            *esp48 = 1;
            esp40 = reinterpret_cast<struct s1*>(esp48 + 1);
            __asm__("int 0x80");
        } else {
            g804826c = 5;
            esp49 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp44) - 4);
            *esp49 = 54;
            esp50 = reinterpret_cast<struct s2*>(esp49 + 1);
            __asm__("int 0x80");
            esp50->f8 = esp50->f8 & 0xffffeff0;
            esp50->f8 = esp50->f8 | 13;
            esp51 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp50) - 4);
            *esp51 = 54;
            __asm__("int 0x80");
            esp52 = esp51 + 1 - 1;
            *esp52 = 54;
            __asm__("int 0x80");
            esp53 = esp52 + 1 - 1;
            *esp53 = 54;
            esp54 = reinterpret_cast<struct s1*>(esp53 + 1);
            __asm__("int 0x80");
            edi55 = &esp54->f11;
            ecx56 = 19;
            do {
                if (!ecx56) 
                    break;
                --ecx56;
                *edi55 = 0;
                ++edi55;
            } while (0);
            esp54->f12 = 28;
            esp54->fc = esp54->fc & 0xfffffff5;
            esp57 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp54) - 4);
            *esp57 = 54;
            __asm__("int 0x80");
            esp58 = esp57 + 1 - 1;
            *esp58 = 2;
            esp59 = esp58 + 1 - 1;
            *esp59 = 4;
            __asm__("int 0x80");
            esp60 = esp59 + 1 - 1;
            *esp60 = 1;
            esp61 = esp60 - 1;
            *esp61 = 0;
            esp62 = esp61 - 1;
            *esp62 = 1;
            esp63 = esp62 - 1;
            *esp63 = g804826c;
            while (1) {
                esp64 = reinterpret_cast<struct s3*>(esp63 - 1);
                esp64->f0 = 2;
                esp63 = &esp64->f4;
                __asm__("int 0x80");
                if (1) {
                    esp65 = reinterpret_cast<struct s3*>(esp63 - 1);
                    esp65->f0 = 100;
                    esp66 = reinterpret_cast<struct s3*>(&esp65->f4 - 1);
                    esp66->f0 = 3;
                    __asm__("int 0x80");
                    esp67 = reinterpret_cast<struct s3*>(&esp66->f4 - 1);
                    esp67->f0 = 4;
                    esp63 = &esp67->f4;
                    __asm__("int 0x80");
                } else {
                    if (1) {
                        esp68 = reinterpret_cast<struct s3*>(esp63 - 1);
                        esp68->f0 = 100;
                        esp69 = reinterpret_cast<struct s3*>(&esp68->f4 - 1);
                        esp69->f0 = 3;
                        __asm__("int 0x80");
                        esp70 = reinterpret_cast<struct s3*>(&esp69->f4 - 1);
                        esp70->f0 = 1;
                        esp71 = reinterpret_cast<struct s3*>(&esp70->f4 - 1);
                        esp71->f0 = 4;
                        esp63 = &esp71->f4;
                        __asm__("int 0x80");
                    }
                }
            }
        }
    }
    ecx72 = reinterpret_cast<unsigned char*>("$@ serialdevice (e.g. /dev/ttyS0)\nError opening serial device\n");
    esp73 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp40) - 4);
    *esp73 = 1;
    esp74 = esp73 + 1 - 1;
    *esp74 = 4;
    __asm__("int 0x80");
    esp75 = esp74 + 1 - 1;
    *esp75 = 2;
    *(esp75 + 1 - 1) = 1;
    eax76 = 1;
    __asm__("int 0x80");
    g67 = 0;
    zf77 = reinterpret_cast<uint1_t>(g67 == 0);
    if (!0) {
        __asm__("popad ");
        __asm__("insb ");
        if (!zf77) {
            __asm__("arpl [ebp+0x20], sp");
            ebp78->f2e = reinterpret_cast<signed char>(ebp79->f2e - *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax76) + 1));
            g2 = 0;
            zf80 = reinterpret_cast<uint1_t>(g2 == 0);
            if (!zf80) {
                if (!zf80) {
                    if (__intrinsic()) {
                        g80481ca = reinterpret_cast<unsigned char>(g80481ca ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx72) + 1));
                        if (!0) {
                            if (!0) {
                                __asm__("outsd ");
                                if (!0) {
                                    __asm__("outsb ");
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void fun_8048205() {
    __asm__("arpl [ebp+0xa], sp");
}
