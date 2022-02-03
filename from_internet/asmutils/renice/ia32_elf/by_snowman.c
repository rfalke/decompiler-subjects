
int32_t* fun_80480be(int32_t* ecx) {
    signed char* v2;
    signed char* esi3;
    int32_t* eax4;
    int32_t* ebx5;
    signed char* esi6;

    v2 = esi3;
    eax4 = reinterpret_cast<int32_t*>(0);
    ebx5 = reinterpret_cast<int32_t*>(0);
    if (*esi6 == 45) {
        __asm__("lodsb ");
    }
    while (*reinterpret_cast<signed char*>(&eax4)) {
        *reinterpret_cast<signed char*>(&eax4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax4) - 48);
        ebx5 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebx5) * 10 + reinterpret_cast<int32_t>(eax4));
    }
    if (*v2 == 45) {
        return -reinterpret_cast<int32_t>(ebx5);
    } else {
        return ebx5;
    }
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    signed char[115] pad115;
    signed char f73;
};

struct s2 {
    signed char[115] pad115;
    signed char f73;
};

struct s3 {
    signed char[101] pad101;
    int32_t f65;
};

struct s4 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s5 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s6 {
    signed char[75] pad75;
    unsigned char f4b;
};

int32_t* g80480e6;

int32_t* g80480e2;

void fun_8048000(int32_t* ecx) {
    struct s0* esp2;
    int1_t less_or_equal3;
    unsigned char tmp8_4;
    signed char* eax5;
    signed char al6;
    uint1_t cf7;
    unsigned char* eax8;
    unsigned char* eax9;
    unsigned char* eax10;
    signed char* eax11;
    signed char al12;
    struct s1* ebp13;
    struct s2* ebp14;
    signed char dh15;
    unsigned char ah16;
    int16_t bx17;
    int16_t si18;
    int32_t* esp19;
    struct s0* esp20;
    int32_t* esp21;
    struct s0* esp22;
    struct s0* esp23;
    struct s0* esp24;
    int32_t esp25;
    struct s3* ebx26;
    struct s4* eax27;
    struct s5* eax28;
    unsigned char dh29;
    unsigned char bl30;
    struct s6* ebx31;
    struct s0* esp32;
    int32_t* eax33;
    int32_t* esp34;
    struct s0* esp35;
    int32_t* eax36;
    struct s0* esp37;
    int32_t* esp38;
    int32_t esi39;
    int32_t esi40;
    int32_t eax41;
    int32_t* ebx42;
    int32_t* ebx43;
    int32_t eax44;
    signed char* eax45;
    signed char* eax46;
    signed char al47;
    signed char* eax48;
    signed char* eax49;
    signed char al50;
    signed char* eax51;
    signed char* eax52;
    signed char al53;
    signed char* eax54;
    signed char* eax55;
    signed char al56;
    void** eax57;
    signed char al58;
    signed char* eax59;
    void** eax60;

    esp2 = reinterpret_cast<struct s0*>(__zero_stack_offset());
    if (!less_or_equal3) {
        tmp8_4 = reinterpret_cast<unsigned char>(*eax5 + al6);
        cf7 = reinterpret_cast<uint1_t>(tmp8_4 < *eax8);
        *eax9 = tmp8_4;
        *eax10 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax11 + al12) + cf7);
        ebp13->f73 = reinterpret_cast<signed char>(ebp14->f73 + dh15);
        __asm__("popad ");
        if (ah16 < *reinterpret_cast<unsigned char*>(bx17 + si18)) {
            while (1) {
                esp19 = &esp2->f4;
                addr_80480a4_4:
                esp20 = reinterpret_cast<struct s0*>(esp19 - 1);
                esp20->f0 = 1;
                esp21 = &esp20->f4;
                __asm__("int 0x80");
                addr_80480a9_5:
                esp22 = reinterpret_cast<struct s0*>(esp21 - 1);
                esp22->f0 = 27;
                esp23 = reinterpret_cast<struct s0*>(&esp22->f4 - 1);
                esp23->f0 = 1;
                esp24 = reinterpret_cast<struct s0*>(&esp23->f4 - 1);
                esp24->f0 = 4;
                esp19 = &esp24->f4;
                __asm__("int 0x80");
                addr_80480b9_6:
                esp2 = reinterpret_cast<struct s0*>(esp19 - 1);
                esp2->f0 = 1;
            }
        } else {
            __asm__("outsb ");
            esp25 = ebx26->f65 * 0x69727020;
            __asm__("outsd ");
            if (__intrinsic()) 
                goto 0x80480c9;
            if (__undefined()) 
                goto 0x80480db;
            eax27->f69 = reinterpret_cast<unsigned char>(eax28->f69 & dh29);
            esp21 = reinterpret_cast<int32_t*>(esp25 + 4);
            if (!(bl30 | ebx31->f4b)) 
                goto addr_80480a9_5;
            esp19 = esp21 + 1;
            if (!*esp21) 
                goto addr_80480b9_6;
            esp32 = reinterpret_cast<struct s0*>(esp19 - 1);
            esp32->f0 = 0x8048076;
            eax33 = fun_80480be(ecx);
            esp34 = &esp32->f4;
            g80480e6 = eax33;
            esp19 = esp34 + 1;
            if (!*esp34) 
                goto addr_80480b9_6;
            do {
                esp35 = reinterpret_cast<struct s0*>(esp19 - 1);
                esp35->f0 = 0x8048085;
                eax36 = fun_80480be(ecx);
                g80480e2 = eax36;
                ecx = g80480e2;
                esp37 = reinterpret_cast<struct s0*>(&esp35->f4 - 1);
                esp37->f0 = 97;
                esp38 = &esp37->f4;
                __asm__("int 0x80");
                esp19 = esp38 + 1;
            } while (*esp38);
            goto addr_80480a4_4;
        }
    }
    esi39 = esi40 + 1;
    *ecx = *ecx + eax41;
    *ebx42 = *ebx43 + eax44;
    *eax45 = reinterpret_cast<signed char>(*eax46 + al47);
    *eax48 = reinterpret_cast<signed char>(*eax49 + al50);
    *eax51 = reinterpret_cast<signed char>(*eax52 + al53);
    *eax54 = reinterpret_cast<signed char>(*eax55 + al56);
    *reinterpret_cast<signed char*>(&eax57) = reinterpret_cast<signed char>(al58 + *eax59);
    eax60 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax57) + reinterpret_cast<int32_t>(*eax57));
    *eax60 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax60) + reinterpret_cast<int32_t>(eax60));
    *eax60 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax60) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax60)));
    **reinterpret_cast<signed char**>(&esi39) = reinterpret_cast<signed char>(**reinterpret_cast<signed char**>(&esi39) + 8);
    *reinterpret_cast<void**>(&eax60) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax60))));
    *eax60 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax60) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax60)));
    *eax60 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax60) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax60)));
    *eax60 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax60) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax60)));
    *eax60 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax60) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax60)));
    *eax60 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax60) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax60)));
    *reinterpret_cast<void**>(&eax60) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax60))));
    *eax60 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax60) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax60)));
    *eax60 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax60) + reinterpret_cast<int32_t>(eax60));
    *eax60 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax60) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax60)));
    *eax60 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax60) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax60)));
    *eax60 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax60) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax60)));
    *reinterpret_cast<unsigned char*>(eax60 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax60 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax60)));
    *reinterpret_cast<void**>(&eax60) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax60)) + 8);
    *eax60 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax60) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax60)));
}
