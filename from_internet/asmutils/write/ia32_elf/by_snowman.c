
unsigned char g70000;

struct s0 {
    signed char f0;
    signed char[113] pad114;
    unsigned char f72;
};

struct s0* g8048270;

int32_t g8048278;

int32_t g73;

struct s1 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s2 {
    signed char[114] pad114;
    unsigned char f72;
};

unsigned char g0;

struct s3 {
    signed char[110] pad110;
    unsigned char f6e;
};

unsigned char g66;

int32_t g804827c;

struct s0* g8048274;

void fun_8048000(int32_t* ecx) {
    int1_t less_or_equal2;
    int32_t eax3;
    int32_t* ebx4;
    int32_t* ebx5;
    int32_t eax6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    void** eax19;
    signed char al20;
    signed char* eax21;
    void** eax22;
    signed char dh23;
    unsigned char tmp8_24;
    void* dl25;
    struct s0* eax26;
    int32_t v27;
    struct s0* esi28;
    struct s0* v29;
    struct s0* edi30;
    struct s0* v31;
    struct s0* v32;
    int32_t ecx33;
    struct s0* ecx34;
    int32_t edx35;
    struct s0* v36;
    struct s0* ecx37;
    int32_t ecx38;
    struct s0* ecx39;
    uint1_t below_or_equal40;
    int32_t eax41;
    int1_t zf42;
    struct s1* ebp43;
    struct s1* ebp44;
    int32_t ebp45;
    signed char* esi46;
    int32_t ecx47;

    if (less_or_equal2) {
        *ecx = *ecx + eax3;
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(*eax19));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<int32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(eax22)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(eax22)) + dh23);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<int32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8);
        if (!__intrinsic()) {
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        }
        tmp8_24 = reinterpret_cast<unsigned char>(g70000 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        g70000 = tmp8_24;
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    }
    *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<signed char>(dl25));
    *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    addr_804804c_6:
    __asm__("int 0x80");
    eax26 = reinterpret_cast<struct s0*>(1);
    __asm__("int 0x80");
    if (v27 > 3) 
        goto addr_804804c_6;
    if (v27 == 1) 
        goto addr_804804c_6;
    do {
        __asm__("lodsd ");
        if (!eax26) 
            break;
    } while (eax26->f0 != 0x52455355 || (eax26 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(eax26) + 5), *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax26) - 1) != 61));
    goto addr_804808b_11;
    addr_8048090_12:
    esi28 = v29;
    edi30 = esi28;
    g8048270 = v31;
    v32 = esi28;
    ecx33 = 32;
    do {
        if (!ecx33) 
            break;
        --ecx33;
        edi30 = reinterpret_cast<struct s0*>(&edi30->pad114);
        esi28 = reinterpret_cast<struct s0*>(&esi28->pad114);
    } while (edi30->f0);
    ecx34 = reinterpret_cast<struct s0*>(~(ecx33 - 32));
    if (!ecx34) {
        addr_80481d4_16:
        edx35 = 40;
    } else {
        v36 = ecx34;
        __asm__("int 0x80");
        g8048278 = 5;
        __asm__("int 0x80");
        do {
            addr_80480d0_18:
            __asm__("int 0x80");
            if (0) 
                goto addr_80481d4_16;
            edi30 = reinterpret_cast<struct s0*>(0x80482ac);
            esi28 = v32;
            ecx37 = v36;
            do {
                if (!ecx37) 
                    break;
                ecx37 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(ecx37) - 1);
                edi30 = reinterpret_cast<struct s0*>(&edi30->pad114);
                esi28 = reinterpret_cast<struct s0*>(&esi28->pad114);
            } while (esi28->f0 == edi30->f0);
            if (ecx37) 
                goto addr_80480d0_18;
            esi28 = g8048270;
            if (esi28) {
                edi30 = reinterpret_cast<struct s0*>(0x8048288);
                ecx38 = 6;
                do {
                    if (!ecx38) 
                        break;
                    --ecx38;
                    edi30 = reinterpret_cast<struct s0*>(&edi30->pad114);
                    esi28 = reinterpret_cast<struct s0*>(&esi28->pad114);
                } while (esi28->f0 == edi30->f0);
                if (ecx38) 
                    goto addr_80480d0_18;
            }
            __asm__("int 0x80");
            if (1) 
                goto addr_8048139_29;
            ecx39 = g8048270;
        } while (!ecx39);
        goto addr_8048134_31;
    }
    addr_80481e1_32:
    __asm__("int 0x80");
    below_or_equal40 = 1;
    eax41 = 1;
    __asm__("int 0x80");
    if (1) {
        addr_8048251_33:
        __asm__("das ");
    } else {
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax41) + 1) > **reinterpret_cast<unsigned char**>(&esi28)) {
            addr_8048268_35:
            __asm__("insd ");
            __asm__("insb ");
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g73) + 1) = 0;
            zf42 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g73) + 1) == 0;
            if (zf42) {
            }
            __asm__("outsb ");
            __asm__("popad ");
            __asm__("insd ");
            ebp43 = ebp44;
            if (0) 
                goto addr_804822e_39; else 
                goto addr_804820e_40;
        }
    }
    ebp45 = reinterpret_cast<int32_t>(ebp43) + 1;
    if (!1) {
        __asm__("popad ");
        *reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s2**>(&ebp45))->f72) = 0;
        __asm__("outsd ");
        __asm__("insd ");
        g0 = 0;
        goto addr_8048268_35;
    }
    addr_804822e_39:
    goto addr_8048232_44;
    addr_804820e_40:
    __asm__("outsb ");
    __asm__("outsd ");
    if (!(*reinterpret_cast<unsigned char*>(&edx35) | ebp43->f73)) {
        addr_8048232_44:
        __asm__("insd ");
        __asm__("outsb ");
        below_or_equal40 = reinterpret_cast<uint1_t>(__intrinsic() | __undefined());
        if (!__intrinsic()) {
            if (!__intrinsic()) {
                __asm__("outsb ");
                __asm__("das ");
                if (!__undefined()) {
                }
                __asm__("insd ");
                if (__intrinsic()) 
                    goto addr_8048251_33; else 
                    goto addr_8048251_33;
            }
        }
    } else {
        __asm__("insb ");
        __asm__("outsd ");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int16_t>(&(*reinterpret_cast<struct s3**>(&edi30))->pad110) + 0x6e) = 0;
        edi30->f72 = 0;
        g66 = 0;
        if (!0) {
            __asm__("outsb ");
            goto addr_804822e_39;
        }
    }
    addr_8048139_29:
    g804827c = 5;
    edi30 = reinterpret_cast<struct s0*>(0x8048400);
    esi46 = reinterpret_cast<signed char*>(0x804825a);
    ecx47 = 13;
    do {
        if (!ecx47) 
            break;
        --ecx47;
        edi30->f0 = *esi46;
        edi30 = reinterpret_cast<struct s0*>(&edi30->pad114);
        ++esi46;
    } while (1);
    esi28 = g8048274;
    if (esi28) {
        do {
            __asm__("lodsb ");
            edi30->f0 = 5;
            edi30 = reinterpret_cast<struct s0*>(&edi30->pad114);
            esi28 = reinterpret_cast<struct s0*>(&esi28->pad114);
        } while (1);
        edi30->f0 = 10;
        __asm__("int 0x80");
    }
    __asm__("int 0x80");
    while (!0) {
        __asm__("int 0x80");
    }
    edx35 = 4;
    goto addr_80481e1_32;
    addr_8048134_31:
    edx35 = 18;
    goto addr_80481e1_32;
    addr_804808b_11:
    g8048274 = eax26;
    goto addr_8048090_12;
}
