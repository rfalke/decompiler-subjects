
uint32_t g8048493;

uint32_t g8048497;

uint32_t fun_804831c();

uint32_t fun_80483b8(uint32_t ecx) {
    uint32_t edx2;
    uint32_t eax3;
    uint32_t tmp32_4;
    uint32_t edx5;
    signed char* edi6;
    uint32_t edx7;
    uint32_t v8;
    uint32_t ecx9;
    signed char* esi10;
    uint32_t v11;
    int32_t ecx12;

    __asm__("pushad ");
    edx2 = g8048493;
    eax3 = edx2 + ecx * 8;
    g8048493 = eax3;
    if (eax3 < edx2) {
        ++g8048497;
    }
    tmp32_4 = g8048497 + (ecx >> 29);
    g8048497 = tmp32_4;
    edx5 = edx2 >> 3 & 63;
    if (!edx5) {
        addr_80483fe_4:
        edi6 = reinterpret_cast<signed char*>(0x804849b);
    } else {
        edi6 = reinterpret_cast<signed char*>(0x8048493 + edx5 + 8);
        eax3 = 64 - edx5;
        edx7 = eax3;
        if (reinterpret_cast<int32_t>(ecx) < reinterpret_cast<int32_t>(edx7)) {
            addr_804841b_6:
            goto label_7;
        } else {
            v8 = ecx;
            ecx9 = edx7;
            while (ecx9) {
                --ecx9;
                *edi6 = *esi10;
                ++edi6;
                ++esi10;
            }
            eax3 = fun_804831c();
            ecx = v8 - edx7;
            goto addr_80483fe_4;
        }
    }
    while (reinterpret_cast<int32_t>(ecx) >= reinterpret_cast<int32_t>(64)) {
        v11 = ecx;
        ecx12 = 16;
        while (ecx12) {
            --ecx12;
            *edi6 = *esi10;
            edi6 = edi6 + 4;
            esi10 = esi10 + 4;
        }
        edi6 = reinterpret_cast<signed char*>(0x804849b);
        eax3 = fun_804831c();
        ecx = v11 - 64;
    }
    goto addr_804841b_6;
    label_7:
    while (ecx) {
        --ecx;
        *edi6 = *esi10;
        ++edi6;
        ++esi10;
    }
    __asm__("popad ");
    return eax3;
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s3 {
    int32_t f0;
    int32_t f4;
};

struct s4 {
    int32_t f0;
    int32_t f4;
};

signed char fun_80482b3(int32_t* ecx) {
    int32_t* edi2;
    struct s0* edi3;
    struct s1* edi4;
    struct s2* edi5;
    struct s3* edi6;
    struct s4* edi7;
    int32_t* edi8;
    int32_t ecx9;

    *edi2 = 0x67452301;
    edi3 = reinterpret_cast<struct s0*>(&edi4->f4);
    edi3->f0 = 0xefcdab89;
    edi5 = reinterpret_cast<struct s2*>(&edi3->f4);
    edi5->f0 = 0x98badcfe;
    edi6 = reinterpret_cast<struct s3*>(&edi5->f4);
    edi6->f0 = 0x10325476;
    edi7 = reinterpret_cast<struct s4*>(&edi6->f4);
    edi7->f0 = 0;
    edi7->f4 = 0;
    edi8 = reinterpret_cast<int32_t*>(0x804849b);
    ecx9 = 16;
    while (ecx9) {
        --ecx9;
        *edi8 = 0;
        ++edi8;
    }
    __asm__("popad ");
    return 0;
}

int32_t g8048483;

int32_t g8048487;

int32_t g804848b;

uint32_t g804848f;

uint32_t fun_804831c() {
    int32_t v1;
    int32_t eax2;
    int32_t v3;
    int32_t eax4;
    int32_t ecx5;
    int32_t v6;
    int32_t v7;
    int32_t eax8;
    int32_t ecx9;
    int32_t eax10;
    uint32_t eax11;
    int32_t eax12;
    int32_t tmp32_13;
    int32_t tmp32_14;
    int32_t tmp32_15;
    uint32_t tmp32_16;

    __asm__("pushad ");
    __asm__("lodsd ");
    __asm__("lodsd ");
    v1 = eax2;
    __asm__("lodsd ");
    v3 = eax4;
    __asm__("lodsd ");
    ecx5 = 4;
    do {
        v6 = ecx5;
        __asm__("lodsd ");
        v7 = eax8;
        ecx9 = 4;
        do {
            eax10 = reinterpret_cast<int32_t>(v7(v3));
            eax11 = reinterpret_cast<uint32_t>(v7(v1));
            eax12 = reinterpret_cast<int32_t>(v7(eax10));
            v3 = eax12;
            eax8 = reinterpret_cast<int32_t>(v7(eax11));
            v1 = eax8;
            --ecx9;
        } while (ecx9);
        ecx5 = v6 - 1;
    } while (ecx5);
    tmp32_13 = g8048483 + eax10;
    g8048483 = tmp32_13;
    tmp32_14 = g8048487 + v1;
    g8048487 = tmp32_14;
    tmp32_15 = g804848b + v3;
    g804848b = tmp32_15;
    tmp32_16 = g804848f + eax11;
    g804848f = tmp32_16;
    __asm__("popad ");
    return eax11;
}

struct s5 {
    signed char f0;
    signed char f1;
};

uint32_t g80484d3;

uint32_t g80484d7;

unsigned char fun_804841f(int32_t ecx) {
    int32_t* v2;
    int32_t* edi3;
    uint32_t edx4;
    uint32_t edx5;
    struct s5* edi6;
    uint32_t edx7;
    signed char* edi8;
    uint32_t eax9;
    uint32_t ecx10;
    uint32_t ecx11;
    uint32_t* edi12;
    int32_t ecx13;
    uint32_t eax14;
    int32_t* edi15;
    int32_t ecx16;
    int32_t* esi17;

    __asm__("pushad ");
    v2 = edi3;
    edx4 = g8048493;
    edx5 = edx4 >> 3 & 63;
    edi6 = reinterpret_cast<struct s5*>(0x8048493 + edx5 + 8);
    edi6->f0 = 0x80;
    edx7 = 63 - edx5;
    edi8 = &edi6->f1;
    eax9 = 0;
    if (edx7 > 7) {
        ecx10 = edx7 - 8;
        while (ecx10) {
            --ecx10;
            *edi8 = 0;
            ++edi8;
        }
    } else {
        ecx11 = edx7;
        while (ecx11) {
            --ecx11;
            *edi8 = 0;
            ++edi8;
        }
        edi12 = reinterpret_cast<uint32_t*>(0x804849b);
        eax9 = fun_804831c();
        ecx13 = 14;
        while (ecx13) {
            --ecx13;
            *edi12 = eax9;
            ++edi12;
        }
    }
    __asm__("lodsd ");
    g80484d3 = eax9;
    __asm__("lodsd ");
    g80484d7 = eax9;
    eax14 = fun_804831c();
    edi15 = v2;
    ecx16 = 4;
    esi17 = reinterpret_cast<int32_t*>(0x804847b);
    while (ecx16) {
        --ecx16;
        *edi15 = *esi17;
        ++edi15;
        ++esi17;
    }
    __asm__("popad ");
    return *reinterpret_cast<unsigned char*>(&eax14);
}

int32_t g70000;

struct s6 {
    int32_t f0;
    int32_t f4;
};

struct s7 {
    int32_t f0;
    int32_t f4;
};

int32_t g804a50f;

void fun_8048000(int32_t* ecx) {
    void* esp2;
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
    uint32_t tmp32_25;
    uint1_t cf26;
    void* tmp32_27;
    void* dl28;
    struct s6* esp29;
    int32_t* esp30;
    int32_t* esp31;
    int32_t ebx32;
    int32_t* esp33;
    struct s7* esp34;
    struct s7* esp35;
    struct s7* esp36;
    struct s7* esp37;
    struct s7* esp38;
    unsigned char al39;
    struct s7* esp40;
    int32_t ecx41;
    int32_t* esp42;
    unsigned char* edi43;
    struct s7* esp44;
    int32_t edx45;
    unsigned char ah46;
    struct s7* esp47;
    struct s7* esp48;
    struct s7* esp49;
    struct s7* esp50;
    signed char al51;
    int32_t esi52;
    struct s7* esp53;
    int32_t* esp54;
    struct s7* esp55;
    int32_t* esp56;
    int32_t* esp57;
    int32_t* esp58;
    struct s7* esp59;
    struct s7* esp60;

    esp2 = __zero_stack_offset();
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
        tmp32_25 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(eax23));
        cf26 = reinterpret_cast<uint1_t>(tmp32_25 < *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(eax23)));
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(eax23)) = tmp32_25;
        tmp32_27 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp2) - 1 - 1 + g70000 + cf26);
        esp2 = tmp32_27;
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
    }
    *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<signed char>(dl28));
    *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
    esp29 = reinterpret_cast<struct s6*>(reinterpret_cast<uint32_t>(esp2) - 4);
    esp29->f0 = 0x8048051;
    fun_80482b3(ecx);
    esp30 = &esp29->f4;
    esp31 = esp30 + 1 + 1;
    if (!(*esp30 - 1)) 
        goto addr_804807c_4; else 
        goto addr_804805a_5;
    while (1) {
        addr_8048079_6:
        while (1) {
            addr_804805a_5:
            ebx32 = *esp31;
            esp33 = esp31 + 1;
            if (!ebx32) {
                ebx32 = 0;
                esp34 = reinterpret_cast<struct s7*>(esp33 - 1);
                esp34->f0 = 1;
                esp33 = &esp34->f4;
                __asm__("int 0x80");
            }
            g804a50f = ebx32;
            esp35 = reinterpret_cast<struct s7*>(esp33 - 1);
            esp35->f0 = 5;
            esp31 = &esp35->f4;
            __asm__("int 0x80");
            if (!1) 
                break;
            while (1) {
                addr_804807c_4:
                esp36 = reinterpret_cast<struct s7*>(esp31 - 1);
                esp36->f0 = 3;
                esp31 = &esp36->f4;
                __asm__("int 0x80");
                if (0) 
                    goto addr_8048079_6;
                if (0) 
                    break;
                esp37 = reinterpret_cast<struct s7*>(esp31 - 1);
                esp37->f0 = 0x804809e;
                fun_80483b8(3);
                esp31 = &esp37->f4;
            }
            __asm__("pushad ");
            esp38 = reinterpret_cast<struct s7*>(esp31 - 1);
            esp38->f0 = 0x80480ab;
            al39 = fun_804841f(0x80484db);
            esp40 = reinterpret_cast<struct s7*>(&esp38->f4 - 1);
            esp40->f0 = 16;
            ecx41 = 16;
            esp42 = &esp40->f4;
            edi43 = reinterpret_cast<unsigned char*>(0x804a4eb);
            do {
                __asm__("lodsb ");
                esp44 = reinterpret_cast<struct s7*>(esp42 - 1);
                esp44->f0 = 2;
                edx45 = 2;
                esp42 = &esp44->f4;
                ah46 = al39;
                do {
                    __asm__("rol ah, 0x4");
                    al39 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ah46 & 15) + 48);
                    if (reinterpret_cast<signed char>(al39) > reinterpret_cast<signed char>(57)) {
                        al39 = reinterpret_cast<unsigned char>(al39 + 39);
                    }
                    *edi43 = al39;
                    ++edi43;
                    --edx45;
                } while (edx45);
                --ecx41;
            } while (ecx41);
            *edi43 = reinterpret_cast<unsigned char>(0xa2d2020);
            esp47 = reinterpret_cast<struct s7*>(esp42 - 1);
            esp47->f0 = 34;
            esp48 = reinterpret_cast<struct s7*>(&esp47->f4 - 1);
            esp48->f0 = 1;
            esp49 = reinterpret_cast<struct s7*>(&esp48->f4 - 1);
            esp49->f0 = 4;
            __asm__("int 0x80");
            esp50 = reinterpret_cast<struct s7*>(&esp49->f4 - 1);
            esp50->f0 = 0x80480e9;
            al51 = fun_80482b3(0x804a4eb);
            esi52 = g804a50f;
            esp53 = reinterpret_cast<struct s7*>(&esp50->f4 - 1);
            esp53->f0 = 2;
            esp54 = &esp53->f4;
            if (esi52) {
                esp55 = reinterpret_cast<struct s7*>(esp54 - 1);
                esp55->f0 = 0x804a50d;
                esp56 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esp55) - 4);
                *esp56 = esi52;
                do {
                    __asm__("lodsb ");
                } while (al51);
                esp57 = esp56 + 1 - 1;
                *esp57 = 1;
                esp58 = esp57 + 1 - 1;
                *esp58 = 4;
                __asm__("int 0x80");
                esp54 = esp58 + 1 + 1;
            }
            esp59 = reinterpret_cast<struct s7*>(esp54 - 1);
            esp59->f0 = 1;
            esp60 = reinterpret_cast<struct s7*>(&esp59->f4 - 1);
            esp60->f0 = 4;
            esp31 = &esp60->f4;
            __asm__("int 0x80");
            __asm__("popad ");
        }
    }
}

struct s8 {
    signed char[5] pad5;
    void* f5;
};

struct s9 {
    signed char[5] pad5;
    int32_t f5;
};

struct s10 {
    unsigned char f0;
    signed char[193551574] pad193551575;
    uint32_t fb895cd7;
};

void fun_8048141(int32_t ecx) {
    int1_t less2;
    int32_t eax3;
    signed char al4;
    signed char dh5;
    void* tmp32_6;
    struct s8* edi7;
    struct s9* edi8;
    void* eax9;
    unsigned char* edi10;
    void* edi11;
    struct s10* esi12;
    void* esi13;
    int32_t* edx14;
    int32_t* edx15;
    uint32_t* ecx16;
    uint32_t eax17;
    uint1_t cf18;
    unsigned char dh19;
    uint32_t eax20;

    if (less2) {
        __asm__("into ");
    } else {
        *reinterpret_cast<signed char*>(&eax3) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(al4 + 7) - dh5);
        tmp32_6 = edi7->f5;
        edi8->f5 = eax3;
        eax9 = tmp32_6;
        *reinterpret_cast<unsigned char*>(&eax9) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax9) | 19);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax9) - 0x6afeeefa) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax9) - 0x6afeeefa) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
        __asm__("fcomp dword [eax+0x7086980]");
        edi10 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi11) - 4);
        esi12 = reinterpret_cast<struct s10*>(reinterpret_cast<int32_t>(esi13) + 1 + 1 - 4);
        *edx14 = *edx15 - 1;
        esi12->fb895cd7 = esi12->fb895cd7 + reinterpret_cast<int32_t>(edi10);
        ecx16 = reinterpret_cast<uint32_t*>(*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi10) + reinterpret_cast<uint32_t>(eax9)) * 0xffffff93);
        if (!__intrinsic()) 
            goto 0x8048110;
        eax17 = reinterpret_cast<uint32_t>(eax9) | 0x79438e0c;
        cf18 = reinterpret_cast<uint1_t>(esi12->f0 < *edi10);
        *ecx16 = *ecx16 + (reinterpret_cast<int32_t>(__zero_stack_offset()) + 2 - 2 - 2 - 2) + cf18;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx16) + reinterpret_cast<int32_t>(ecx16) * 2 - 0x7d11e9f1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx16) + reinterpret_cast<int32_t>(ecx16) * 2 - 0x7d11e9f1) | dh19);
        *reinterpret_cast<signed char*>(&eax17) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax17) + 8);
        eax20 = eax17 + 1;
        __asm__("rol byte [esi], 0x9");
        *reinterpret_cast<signed char*>(edi10 - 1) = *reinterpret_cast<signed char*>(&eax20);
    }
}

struct s11 {
    void* f0;
    signed char[229237733] pad229237737;
    unsigned char fda9e3e9;
};

struct s12 {
    signed char[38016083] pad38016083;
    void* f2441453;
};

uint32_t gc33707d6;

int32_t g71f68104;

void fun_804819f(unsigned char* ecx) {
    void* esp2;
    uint32_t* edx3;
    int32_t ebx4;
    int32_t ebx5;
    signed char dl6;
    struct s11* eax7;
    struct s12* eax8;
    void* ecx9;
    int32_t edi10;
    int32_t edi11;
    void* ebp12;
    void* ebp13;
    unsigned char dl14;
    int16_t cs15;

    esp2 = __zero_stack_offset();
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx3) + 1) = -23;
    *reinterpret_cast<signed char*>(ebx4 * 2 + 0x5d62f10) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx5 * 2 + 0x5d62f10) + dl6);
    eax7 = reinterpret_cast<struct s11*>(&eax8->f2441453);
    *reinterpret_cast<unsigned char*>(&ecx) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx) | *ecx);
    __asm__("enter 0xd3fb, 0xe7");
    *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax7) + 20);
    __asm__("out 0xcd, al");
    ecx9 = reinterpret_cast<void*>(ecx - 1);
    if (!(reinterpret_cast<uint1_t>(!!ecx9) & reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax7) == 0))) {
        gc33707d6 = gc33707d6 | reinterpret_cast<uint32_t>(eax7);
        *reinterpret_cast<uint32_t*>(edi10 + 0x3f4d50d) = *reinterpret_cast<uint32_t*>(edi11 + 0x3f4d50d) | reinterpret_cast<uint32_t>(eax7);
        esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 2 - 2);
        __asm__("in eax, dx");
        *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax7) + 90)));
        ebp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp13) + 1);
        eax7->fda9e3e9 = reinterpret_cast<unsigned char>(eax7->fda9e3e9 | dl14);
        eax7 = reinterpret_cast<struct s11*>(reinterpret_cast<uint32_t>(eax7) - 0x3105c08);
        __asm__("fld dword [edx]");
    }
    __asm__("outsd ");
    *reinterpret_cast<signed char*>(&ecx9) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edx3) + reinterpret_cast<int32_t>(ebp12) - 0x73);
    *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax7) | 20);
    __asm__("cli ");
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax7) + reinterpret_cast<int32_t>(ecx9)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax7) + reinterpret_cast<int32_t>(ecx9)) + 66);
    ++g71f68104;
    eax7->f0 = ecx9;
    __asm__("popad ");
    __asm__("insd ");
    __asm__("in eax, 0xfd");
    *reinterpret_cast<int16_t*>((reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(esp2) + 2 - 2) | *edx3) + 4 - 2) = cs15;
}

signed char ga127fa04;

void fun_8048220(signed char cl) {
    int1_t less_or_equal2;

    if (less_or_equal2) 
        goto 0x80481bd;
    ga127fa04 = reinterpret_cast<signed char>(ga127fa04 - cl);
}

void fun_8048265() {
    return;
}

struct s13 {
    signed char[13] pad13;
    unsigned char fd;
};

struct s14 {
    signed char[13] pad13;
    unsigned char fd;
};

uint32_t g83bffc60;

void fun_804828e(int16_t cx) {
    uint32_t edx2;
    unsigned char dl3;
    unsigned char* ebx4;
    int32_t eax5;
    int32_t ebx6;
    int32_t ebx7;
    struct s13* esi8;
    struct s14* esi9;

    *reinterpret_cast<unsigned char*>(&edx2) = reinterpret_cast<unsigned char>(dl3 | ebx4[eax5 * 2]);
    *reinterpret_cast<int32_t*>(ebx6 + 0x11a10f06) = *reinterpret_cast<int32_t*>(ebx7 + 0x11a10f06) + reinterpret_cast<int32_t>(__zero_stack_offset());
    esi8->fd = reinterpret_cast<unsigned char>(esi9->fd | *reinterpret_cast<unsigned char*>(&cx));
    g83bffc60 = g83bffc60 | edx2;
}

uint32_t gce6db99;

void fun_804822f(int16_t a1) {
    int32_t* edx2;
    int32_t edx3;
    int32_t* eax4;
    uint32_t eax5;
    int32_t eax6;
    int32_t ebx7;
    int32_t ebx8;
    signed char* esi9;
    signed char* esi10;

    edx2 = reinterpret_cast<int32_t*>(edx3 + *eax4);
    eax5 = reinterpret_cast<uint32_t>(eax6 + 0x604881d);
    __asm__("aam 0xd9");
    gce6db99 = gce6db99 | eax5;
    if (__intrinsic()) 
        goto 0x80481e8;
    __asm__("movups xmm4, [ebp+0x56]");
    __asm__("lodsb ");
    __asm__("les eax, [edx]");
    *reinterpret_cast<signed char*>(ebx7 + 0x22440804) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx8 + 0x22440804) + *reinterpret_cast<signed char*>(&eax5));
    *esi9 = reinterpret_cast<signed char>(*esi10 + *reinterpret_cast<signed char*>(&eax5));
    goto *edx2;
}

void fun_804825c() {
}

void fun_804826c() {
    int32_t ecx1;
    int32_t* eax2;
    int32_t* tmp32_3;
    int32_t* edx4;
    unsigned char* esi5;
    unsigned char* esi6;
    signed char* esi7;

    ecx1 = reinterpret_cast<int32_t>(__return_address());
    while (1) {
        *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax2) | 6);
        do {
            tmp32_3 = edx4;
            edx4 = eax2;
            eax2 = tmp32_3;
            *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax2) | 0x8f);
            ecx1 = ecx1 + *edx4;
            if (ecx1 < 0 == __intrinsic()) 
                break;
            __asm__("out dx, eax");
            *edx4 = *edx4 - 1;
            __asm__("psrlw mm3, [ebp-0x7c]");
            eax2 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + 0x6fa87e4f);
            *esi5 = reinterpret_cast<unsigned char>(*esi6 | *reinterpret_cast<unsigned char*>(&eax2));
            --ecx1;
        } while (reinterpret_cast<uint1_t>(!!ecx1) & reinterpret_cast<uint1_t>(!!*esi7));
        break;
    }
}

struct s15 {
    signed char[4] pad4;
    unsigned char f4;
};

uint32_t fun_80482e2(uint32_t ecx) {
    uint32_t ebx2;
    int32_t ebx3;
    int32_t eax4;
    uint32_t ebx5;
    uint32_t edx6;
    int32_t* esi7;
    int32_t* edi8;
    struct s15* esi9;

    ebx2 = reinterpret_cast<uint32_t>(~ebx3);
    __asm__("rol eax, cl");
    return eax4 + ((ecx & ebx5 | edx6 & ebx2) + *esi7 + edi8[esi9->f4]) + ~ebx2;
}

int32_t fun_78df8d36(int32_t a1, int32_t a2, int32_t a3);

void fun_8048123(int32_t ecx) {
    signed char al2;
    signed char al3;
    signed char* edi4;
    signed char* edi5;
    int32_t esi6;
    int32_t eax7;
    int32_t edx8;

    if (ecx - 1) 
        goto 0x80480a7;
    al2 = reinterpret_cast<signed char>(al3 + 8);
    if (al2 >= 0) {
        *edi4 = reinterpret_cast<signed char>(*edi5 + al2);
        eax7 = fun_78df8d36(esi6, 0xd7, __return_address());
        *reinterpret_cast<unsigned char*>(edx8 + eax7) = 0;
    }
}

void fun_804820f() {
    __asm__("fimul word [ebx+0x4]");
}

void fun_80482ee(int32_t ecx) {
    goto 0x8048306;
}

void fun_80482fa(int32_t ecx) {
    goto 0x8048306;
}

void fun_8048300(int32_t ecx) {
}
