
int32_t fun_804815a(int32_t a1) {
    int32_t eax2;

    eax2 = 0;
    do {
        __asm__("lodsb ");
        if (1) 
            break;
        if (!0) 
            goto addr_8048166_4;
    } while (1);
    goto addr_804816e_6;
    addr_8048170_7:
    *reinterpret_cast<signed char*>(&eax2) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax2) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax2) + 1) = 0;
    return eax2;
    addr_8048166_4:
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax2) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax2) + 1) + 1);
    goto addr_8048170_7;
    addr_804816e_6:
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax2) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax2) + 1) + 1);
    goto addr_8048170_7;
}

int32_t fun_8048188();

int32_t fun_8048196() {
    int32_t eax1;
    int32_t ecx2;
    int32_t edx3;
    signed char* edi4;
    signed char* esi5;

    __asm__("pushad ");
    eax1 = fun_8048188();
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

int32_t fun_80481a3(int32_t a1) {
    signed char* esi2;
    signed char* esi3;
    signed char* edi4;
    int32_t edi5;
    int32_t edx6;
    int32_t eax7;
    int32_t ecx8;
    int32_t edx9;

    __asm__("pushad ");
    fun_8048188();
    esi2 = esi3;
    edi4 = reinterpret_cast<signed char*>(edi5 + edx6);
    eax7 = fun_8048188();
    ecx8 = edx9 + 1;
    while (ecx8) {
        --ecx8;
        *edi4 = *esi2;
        ++edi4;
        ++esi2;
    }
    __asm__("popad ");
    return eax7;
}

unsigned char fun_8048111(uint32_t ecx);

void fun_8048132(int32_t a1) {
    int32_t esi2;
    int32_t edi3;
    signed char al4;
    signed char al5;
    unsigned char al6;

    __asm__("pushad ");
    esi2 = edi3;
    while (al4) {
        if (al5 != 32) 
            continue;
        *reinterpret_cast<signed char*>(esi2 - 1) = 0;
    }
    while (al6) {
        al6 = fun_8048111(static_cast<uint32_t>(al6));
    }
    __asm__("popad ");
    return;
}

struct s0 {
    signed char f0;
    signed char[134513082] pad134513083;
    signed char f80481bb;
};

unsigned char fun_8048176(struct s0* ecx, int32_t a2) {
    __asm__("pushad ");
    fun_8048188();
    __asm__("int 0x80");
    __asm__("popad ");
    return 4;
}

unsigned char fun_8048111(uint32_t ecx) {
    int32_t v2;
    uint32_t v3;
    int32_t ecx4;
    struct s0* esi5;
    struct s0* edi6;
    unsigned char al7;

    v2 = reinterpret_cast<int32_t>(__return_address());
    __asm__("pushad ");
    do {
        v3 = ecx;
        ecx4 = -1;
        esi5 = edi6;
        do {
            if (!ecx4) 
                break;
            --ecx4;
            edi6 = reinterpret_cast<struct s0*>(&edi6->pad134513083);
            esi5 = reinterpret_cast<struct s0*>(&esi5->pad134513083);
        } while (edi6->f0);
        ecx = v3 - 1;
    } while (ecx);
    fun_8048176(esi5, v2);
    al7 = fun_8048176("\t", v2);
    __asm__("popad ");
    return al7;
}

int32_t fun_8048188() {
    int32_t v1;
    int32_t eax2;
    signed char al3;

    v1 = eax2;
    do {
        __asm__("lodsb ");
    } while (al3);
    return v1;
}

void fun_80481bb(int32_t ecx);

struct s1 {
    signed char[8] pad8;
    int16_t f8;
};

void fun_8048000(struct s0* ecx) {
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
    void* tmp8_25;
    uint1_t cf26;
    signed char bh27;
    struct s1* ebx28;
    struct s0* ecx29;
    int32_t eax30;
    int32_t eax31;

    v2 = reinterpret_cast<int32_t>(__return_address());
    if (less_or_equal3) {
        ecx->f0 = reinterpret_cast<signed char>(ecx->f0 + eax4);
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
        __asm__("in al, dx");
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<int32_t>(eax23));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax23) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax23) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
    }
    tmp8_25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
    cf26 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_25) < reinterpret_cast<unsigned char>(*eax23));
    *eax23 = tmp8_25;
    *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23))) + cf26);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<int32_t>(fun_80481bb)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<int32_t>(fun_80481bb)) + bh27);
    fun_8048176(ecx, v2);
    __asm__("int 0x80");
    if (!0) {
        while (!0 && !0) {
            ebx28 = reinterpret_cast<struct s1*>(0x80486ec);
            ecx29 = reinterpret_cast<struct s0*>(0x8d);
            while (1) {
                __asm__("pushad ");
                eax30 = fun_804815a(v2);
                if (!eax30 && ((fun_8048196(), fun_80481a3(v2), fun_80481a3(v2), ecx29 = reinterpret_cast<struct s0*>(0), ebx28 = reinterpret_cast<struct s1*>(0x80481ec), !0) && (ecx29 = reinterpret_cast<struct s0*>(0x80482ec), ebx28 = reinterpret_cast<struct s1*>(5), !0))) {
                    __asm__("int 0x80");
                    fun_8048132(v2);
                    ecx29 = reinterpret_cast<struct s0*>("\n");
                    fun_8048176("\n", v2);
                }
                __asm__("popad ");
                eax31 = 0;
                *reinterpret_cast<int16_t*>(&eax31) = ebx28->f8;
                ebx28 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(ebx28) + eax31);
                ecx29 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(ecx29) - eax31);
                if (!ecx29) 
                    break;
            }
        }
    }
    __asm__("int 0x80");
}

struct s2 {
    signed char[84] pad84;
    uint32_t f54;
};

struct s3 {
    signed char[84] pad84;
    uint32_t f54;
};

struct s4 {
    signed char[83] pad83;
    uint32_t f53;
};

struct s5 {
    signed char[83] pad83;
    uint32_t f53;
};

struct s6 {
    signed char[79] pad79;
    uint32_t f4f;
};

struct s7 {
    signed char[79] pad79;
    uint32_t f4f;
};

void fun_80481bb(int32_t ecx) {
    void* esp2;
    int32_t edx3;
    int32_t edx4;
    uint32_t edx5;
    struct s2* ebx6;
    struct s3* ebx7;
    uint32_t edx8;
    struct s4* edx9;
    struct s5* edx10;
    uint32_t edx11;
    struct s6* ebx12;
    struct s7* ebx13;
    uint32_t eax14;
    int32_t ecx15;
    unsigned char* eax16;
    unsigned char al17;
    unsigned char* eax18;
    unsigned char tmp8_19;
    signed char* edi20;
    int1_t cf21;
    unsigned char* edi22;
    unsigned char* edi23;
    signed char* edi24;
    uint32_t* eax25;
    uint32_t* edi26;
    int32_t* edi27;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 1);
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(esp2) + edx3 * 2 + 89) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(esp2) + edx4 * 2 + 89) | edx5;
    ebx6->f54 = ebx7->f54 | edx8;
    edx9->f53 = edx10->f53 | edx11;
    ebx12->f4f = ebx13->f4f | eax14;
    ecx15 = ecx - 1 + 1 + 1;
    *reinterpret_cast<unsigned char*>(&eax16) = reinterpret_cast<unsigned char>(al17 | *eax18);
    __asm__("das ");
    if (!0) {
        __asm__("outsd ");
        __asm__("arpl [edi], bp");
        tmp8_19 = reinterpret_cast<unsigned char>(*edi20 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx15) + 1));
        cf21 = tmp8_19 < *edi22;
        *edi23 = tmp8_19;
        if (!cf21) {
        }
        __asm__("popad ");
        *reinterpret_cast<unsigned char*>(&eax25) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax16) | *eax16);
        *eax25 = *eax25 | reinterpret_cast<uint32_t>(eax25);
        *edi26 = *edi27 + reinterpret_cast<uint32_t>(eax25);
    }
}
