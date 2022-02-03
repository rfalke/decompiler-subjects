
uint16_t g80492f3;

int32_t* fun_804828e(int32_t* ecx) {
    int32_t* eax2;
    uint32_t eax3;

    __asm__("pushad ");
    eax2 = reinterpret_cast<int32_t*>(0x6a);
    __asm__("int 0x80");
    if (!0) {
        eax3 = g80492f3;
        eax2 = reinterpret_cast<int32_t*>(eax3 & 0x4000);
    }
    __asm__("popad ");
    return eax2;
}

struct s0 {
    signed char[8] pad8;
    int16_t f8;
    signed char fa;
};

struct s1 {
    signed char f0;
    signed char f1;
};

void fun_804825f(int32_t* ecx);

int32_t* fun_80480d7();

int32_t* fun_804816b(int32_t* ecx, int32_t* a2, int32_t* a3) {
    void* esp4;
    void* ebp5;
    int1_t zf6;
    int32_t* eax7;
    struct s0* edi8;
    int32_t* ecx9;
    struct s1* edx10;
    signed char ax11;
    int1_t zf12;
    void* eax13;

    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebp5 = esp4;
    zf6 = reinterpret_cast<int32_t>(esp4) - 0x110e == 0;
    eax7 = fun_804828e(ecx);
    if (!zf6 || ((fun_804828e(ecx), !zf6) && (eax7 = reinterpret_cast<int32_t*>(39), 0) || (eax7 = reinterpret_cast<int32_t*>(5), 0))) {
        addr_8048257_2:
        return eax7;
    } else {
        while (eax7 = reinterpret_cast<int32_t*>(0), *reinterpret_cast<signed char*>(&eax7) = 0x8d, !0) {
            if (0) 
                goto addr_804824f_6;
            edi8 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(ebp5) - 0x10e);
            ecx9 = reinterpret_cast<int32_t*>(0x8d);
            do {
                edx10 = reinterpret_cast<struct s1*>(&edi8->fa);
                ax11 = reinterpret_cast<signed char>(46);
                zf12 = edx10->f0 == 46;
                if (!zf12 || edx10->f1 != (&ax11)[1] && (zf12 = edx10->f1 == 46, !zf12)) {
                    fun_804825f(ecx9);
                    fun_804825f(ecx9);
                    fun_804828e(ecx9);
                    if (!zf12) {
                        fun_80480d7();
                    } else {
                        __asm__("pushad ");
                        fun_804816b(ecx9, reinterpret_cast<int32_t>(ebp5) - 0x90e, reinterpret_cast<int32_t>(ebp5) - 0x110e);
                        __asm__("popad ");
                    }
                    edi8 = edi8;
                }
                eax13 = reinterpret_cast<void*>(0);
                *reinterpret_cast<int16_t*>(&eax13) = edi8->f8;
                edi8 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(edi8) + reinterpret_cast<int32_t>(eax13));
                ecx9 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx9) - reinterpret_cast<int32_t>(eax13));
            } while (ecx9);
        }
        goto addr_8048257_2;
    }
    addr_804824f_6:
    eax7 = reinterpret_cast<int32_t*>(6);
    __asm__("int 0x80");
    goto addr_8048257_2;
}

void fun_80482c1();

void fun_8048273();

void fun_80482ce();

void fun_804825f(int32_t* ecx) {
    __asm__("pushad ");
    fun_80482c1();
    fun_8048273();
    fun_80482ce();
    __asm__("popad ");
    return;
}

void fun_80482b5();

void fun_80482c1() {
    int32_t ecx1;
    int32_t edx2;
    signed char* edi3;
    signed char* esi4;

    __asm__("pushad ");
    fun_80482b5();
    ecx1 = edx2 + 1;
    while (ecx1) {
        --ecx1;
        *edi3 = *esi4;
        ++edi3;
        ++esi4;
    }
    __asm__("popad ");
    return;
}

void fun_80482ce() {
    signed char* esi1;
    signed char* esi2;
    signed char* edi3;
    int32_t edi4;
    int32_t edx5;
    int32_t ecx6;
    int32_t edx7;

    __asm__("pushad ");
    fun_80482b5();
    esi1 = esi2;
    edi3 = reinterpret_cast<signed char*>(edi4 + edx5);
    fun_80482b5();
    ecx6 = edx7 + 1;
    while (ecx6) {
        --ecx6;
        *edi3 = *esi1;
        ++edi3;
        ++esi1;
    }
    __asm__("popad ");
    return;
}

int32_t* fun_80480d7() {
    int32_t* eax1;

    __asm__("pushad ");
    __asm__("int 0x80");
    if (!1) {
    }
    fun_804828e(0x80492eb);
    if (!1) {
        fun_804825f(0x80492eb);
    }
    eax1 = reinterpret_cast<int32_t*>(5);
    __asm__("int 0x80");
    if (!1) {
        goto addr_8048168_8;
    }
    eax1 = reinterpret_cast<int32_t*>(5);
    __asm__("int 0x80");
    if (0) {
        addr_8048168_8:
    } else {
        do {
            eax1 = reinterpret_cast<int32_t*>(3);
            __asm__("int 0x80");
            if (0) 
                goto addr_8048168_8;
        } while (!0 && 0);
        goto addr_8048157_13;
    }
    addr_8048169_14:
    __asm__("popad ");
    return eax1;
    addr_8048157_13:
    __asm__("int 0x80");
    eax1 = reinterpret_cast<int32_t*>(6);
    __asm__("int 0x80");
    goto addr_8048169_14;
}

void fun_8048273() {
    int32_t edx1;
    int32_t edx2;
    int32_t edi3;
    int32_t edi4;

    fun_80482b5();
    edx1 = edx2 - 1;
    if (*reinterpret_cast<signed char*>(edi3 + edx1) != 47) {
        *reinterpret_cast<int16_t*>(edi4 + (edx1 + 1)) = 47;
    }
    return;
}

void fun_80482b5() {
    signed char* edx1;
    void* esi2;

    edx1 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi2) - 1);
    do {
        ++edx1;
    } while (*edx1);
    return;
}

struct s2 {
    signed char[115] pad115;
    signed char f73;
};

struct s3 {
    signed char[115] pad115;
    signed char f73;
};

signed char g80482ea;

int32_t* g80482e6;

void fun_8048000(int32_t* ecx) {
    void* esp2;
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
    int32_t edx26;
    int32_t edx27;
    int32_t* ebx28;
    void* tmp8_29;
    uint1_t cf30;
    struct s2* ebp31;
    struct s3* ebp32;
    int32_t** esp33;
    void* esp34;
    int1_t zf35;
    int32_t* v36;
    void* ecx37;
    int16_t* v38;
    int32_t* tmp32_39;
    int1_t zf40;
    int32_t* v41;

    esp2 = __zero_stack_offset();
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
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<uint32_t>(eax25));
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
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<uint32_t>(eax25));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<unsigned char*>(eax25 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax25 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) + 8);
        __asm__("out 0x2, al");
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        edx26 = edx27 - *ebx28;
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 1 + 2);
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    }
    tmp8_29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    cf30 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_29) < reinterpret_cast<unsigned char>(*eax25));
    *eax25 = tmp8_29;
    *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25))) + cf30);
    ebp31->f73 = reinterpret_cast<signed char>(ebp32->f73 + *reinterpret_cast<signed char*>(&edx26));
    __asm__("popad ");
    __asm__("arpl [eax+0x20], si");
    esp33 = reinterpret_cast<int32_t**>(reinterpret_cast<int32_t>(esp2) + 4);
    __asm__("outsd ");
    if (eax25 - 0x73205d72) {
        while (1) {
            while (1) {
                esp34 = reinterpret_cast<void*>(esp33 + 1);
                zf35 = v36 == 0;
                if (zf35) {
                    addr_804807d_6:
                    __asm__("int 0x80");
                    ecx37 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx) - 1);
                    esp33 = reinterpret_cast<int32_t**>(reinterpret_cast<int32_t>(esp34) - 4 + 4 + 4 + 4);
                    if (*v38 != 0x722d) {
                        --esp33;
                    } else {
                        g80482ea = reinterpret_cast<signed char>(g80482ea + 1);
                        ecx37 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx37) - 1);
                    }
                    ecx = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx37) - 1);
                    tmp32_39 = esp33[static_cast<uint32_t>(ecx)];
                    esp33[static_cast<uint32_t>(ecx)] = reinterpret_cast<int32_t*>(0);
                    g80482e6 = tmp32_39;
                } else {
                    fun_804828e(ecx);
                    esp33 = reinterpret_cast<int32_t**>(reinterpret_cast<int32_t>(esp34) - 4 + 4);
                    if (!zf35) 
                        break;
                    zf40 = g80482ea == 1;
                    if (!zf40) 
                        continue;
                    v41 = g80482e6;
                    fun_804816b(ecx, v36, v41);
                    esp33 = esp33 - 1 - 1 - 1 + 1 + 1 + 1;
                }
            }
            fun_80480d7();
            esp33 = esp33 - 1 + 1 - 1 + 1;
        }
    } else {
        __asm__("arpl [ebp+0x20], sp");
        if (reinterpret_cast<uint32_t>(eax25) >= 0x73205d72) 
            goto 0x80480da;
        ecx = reinterpret_cast<int32_t*>(0x804804c);
        esp34 = reinterpret_cast<void*>(esp33 - 1 + 1 - 1 + 1 - 1 + 1);
        __asm__("int 0x80");
        goto addr_804807d_6;
    }
}
