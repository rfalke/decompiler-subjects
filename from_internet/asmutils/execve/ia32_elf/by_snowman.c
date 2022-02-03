
void fun_804805c() {
    int16_t* edi1;
    unsigned char* edi2;
    void* edi3;
    unsigned char* v4;
    uint32_t v5;
    uint32_t eax6;
    uint32_t esi7;
    uint32_t edx8;
    uint32_t ecx9;
    unsigned char* edi10;
    unsigned char* esi11;
    unsigned char tmp8_12;

    __asm__("pushad ");
    *edi1 = 0x7830;
    edi2 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi3) + 1 + 1);
    v4 = edi2;
    v5 = eax6;
    esi7 = 0;
    do {
        edx8 = v5 % 16;
        v5 = v5 / 16;
        __asm__("das ");
        *edi2 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx8) - reinterpret_cast<unsigned char>(0x69 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx8) < reinterpret_cast<unsigned char>(0x69 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx8) < 10)))));
        ++edi2;
        esi7 = esi7 + 1 + 1;
    } while (v5);
    *edi2 = 0;
    ecx9 = esi7 + 1 >> 1;
    if (ecx9) {
        edi10 = v4;
        esi11 = edi2 + 1 - 1 - 1;
        do {
            tmp8_12 = *esi11;
            *esi11 = *edi10;
            *edi10 = tmp8_12;
            ++edi10;
            esi11 = esi11 + 1 - 1;
            --ecx9;
        } while (ecx9);
    }
    __asm__("popad ");
    return;
}

struct s0 {
    unsigned char f0;
    signed char[8] pad9;
    unsigned char f9;
    signed char[87] pad97;
    unsigned char f61;
    signed char[23] pad121;
    unsigned char f79;
    signed char[134513212] pad134513334;
    unsigned char f80482b6;
};

void fun_80480f3(int32_t ecx, uint32_t* a2, uint32_t* a3);

void fun_804804c(int32_t a1);

int32_t fun_80480a7(int32_t ecx, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, int24_t a7) {
    signed char* ebp8;
    int32_t v9;

    ebp8 = reinterpret_cast<signed char*>(fun_80480f3);
    do {
        v9 = ecx;
        do {
            ++ebp8;
        } while (*ebp8);
        __asm__("int 0x80");
        ++ebp8;
        __asm__("lodsd ");
        fun_804805c();
        fun_804804c(v9);
        __asm__("int 0x80");
        __asm__("int 0x80");
        ecx = v9 - 1;
    } while (ecx);
    return 4;
}

void fun_804804c(int32_t a1) {
    signed char* edi2;
    void* edi3;

    __asm__("cli ");
    edi2 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi3) - 1);
    do {
        ++edi2;
    } while (*edi2);
    goto a1;
}

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
    signed char* ebx23;
    void* tmp8_24;
    uint1_t cf25;
    int32_t edi26;
    int32_t edi27;
    signed char dl28;

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
        __asm__("retf 0x481");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(eax22)) = 0xff;
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<int32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) - *ebx23);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    }
    tmp8_24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    cf25 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_24) < reinterpret_cast<unsigned char>(*eax22));
    *eax22 = tmp8_24;
    *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))) + cf25);
    *reinterpret_cast<signed char*>(edi26 - 0x77) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edi27 - 0x77) + dl28);
}

struct s1 {
    uint32_t f0;
    unsigned char f1;
};

struct s2 {
    signed char[1] pad1;
    uint32_t f1;
};

struct s3 {
    uint32_t f0;
    struct s0* f4;
    int32_t f8;
    struct s0* fc;
    struct s0* f10;
    struct s0* f14;
    struct s0* f18;
    struct s0** f1c;
    signed char[4] pad36;
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
    uint32_t f30;
    uint32_t f34;
    uint32_t f38;
    struct s0* f3c;
    struct s0* f40;
    struct s0* f44;
    struct s0* f48;
    signed char[38] pad114;
    unsigned char f72;
};

struct s4 {
    signed char[1] pad1;
    unsigned char f1;
};

uint32_t g80482d6;

int32_t g80482ba;

int32_t* g80482be;

uint32_t g80482c2;

int32_t g80482c6;

int32_t g80482ca;

int32_t g80482ce;

void fun_80480f3(int32_t ecx, uint32_t* a2, uint32_t* a3) {
    uint32_t eflags4;
    uint32_t* edx5;
    uint32_t* edx6;
    uint32_t edi7;
    struct s1* edx8;
    struct s2* edx9;
    uint32_t edi10;
    uint32_t edi11;
    struct s3* eax12;
    struct s3* v13;
    uint32_t edi14;
    uint32_t edi15;
    uint32_t edi16;
    struct s0* edx17;
    uint32_t edi18;
    uint32_t edi19;
    int32_t ecx20;
    struct s4* edi21;
    void* edi22;
    struct s0* ebx23;
    void* ebx24;
    struct s0* v25;
    struct s0* v26;
    struct s0* ebp27;
    void* ebp28;
    struct s0* v29;
    struct s0* esi30;
    void* esi31;
    struct s0* v32;
    struct s0* edi33;
    struct s0* v34;
    struct s0* v35;
    struct s0** esp36;
    unsigned char tmp8_37;
    unsigned char tmp8_38;
    uint16_t cs39;
    unsigned char tmp8_40;
    uint1_t cf41;
    uint16_t ds42;
    uint16_t es43;
    uint16_t fs44;
    uint16_t gs45;
    uint16_t ss46;
    void* eax47;
    int1_t cf48;
    uint32_t ebp49;
    struct s0* v50;
    int32_t* esp51;
    int32_t v52;
    struct s0* v53;
    struct s0* v54;
    struct s0* v55;
    struct s0* v56;
    struct s0* v57;
    int24_t v58;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags4) + 1) = 0;
    *edx5 = *edx6 | edi7;
    *reinterpret_cast<uint32_t*>(__return_address()) = *reinterpret_cast<uint32_t*>(__return_address()) | reinterpret_cast<uint32_t>(__return_address());
    edx8 = reinterpret_cast<struct s1*>(&edx9->f1);
    edx8->f0 = edx8->f0 | edi10;
    *a2 = *a2 | reinterpret_cast<uint32_t>(a2);
    edx8->f0 = edx8->f0 | edi11;
    *a3 = *a3 | reinterpret_cast<uint32_t>(a3);
    eax12 = v13;
    edx8->f0 = edx8->f0 | edi14;
    eax12->f0 = eax12->f0 | reinterpret_cast<uint32_t>(eax12);
    edx8->f0 = edx8->f0 | edi15;
    eax12->f0 = eax12->f0 | reinterpret_cast<uint32_t>(eax12);
    edx8->f0 = edx8->f0 | edi16;
    eax12->f0 = eax12->f0 | reinterpret_cast<uint32_t>(eax12);
    edx17 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(edx8) + 1);
    edx17->f0 = reinterpret_cast<unsigned char>(edx17->f0 | edi18);
    eax12->f0 = eax12->f0 | reinterpret_cast<uint32_t>(eax12);
    edx17->f0 = reinterpret_cast<unsigned char>(edx17->f0 | edi19);
    eax12->f0 = eax12->f0 | reinterpret_cast<uint32_t>(eax12);
    ecx20 = ecx + 1 - 1 - 1 + 1;
    edi21 = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(edi22) + 1);
    edx17->f0 = reinterpret_cast<unsigned char>(edx17->f0 | reinterpret_cast<uint32_t>(edi21));
    eax12->f0 = eax12->f0 | reinterpret_cast<uint32_t>(eax12);
    ebx23 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(ebx24) + 1 + 1);
    v25 = ebx23;
    edx17->f0 = reinterpret_cast<unsigned char>(edx17->f0 | reinterpret_cast<uint32_t>(edi21));
    eax12->f0 = eax12->f0 | reinterpret_cast<uint32_t>(eax12);
    v26 = ebx23;
    edx17->f0 = reinterpret_cast<unsigned char>(edx17->f0 | reinterpret_cast<uint32_t>(edi21));
    eax12->f0 = eax12->f0 | reinterpret_cast<uint32_t>(eax12);
    ebp27 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(ebp28) + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1);
    v29 = ebx23;
    edx17->f0 = reinterpret_cast<unsigned char>(edx17->f0 | reinterpret_cast<uint32_t>(edi21));
    eax12->f0 = eax12->f0 | reinterpret_cast<uint32_t>(eax12);
    esi30 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esi31) + 1 + 1);
    v32 = ebx23;
    edx17->f0 = reinterpret_cast<unsigned char>(edx17->f0 | reinterpret_cast<uint32_t>(edi21));
    eax12->f0 = eax12->f0 | reinterpret_cast<uint32_t>(eax12);
    edi33 = reinterpret_cast<struct s0*>(&edi21->f1);
    v34 = ebx23;
    edx17->f0 = reinterpret_cast<unsigned char>(edx17->f0 | reinterpret_cast<uint32_t>(edi33));
    eax12->f0 = eax12->f0 | reinterpret_cast<uint32_t>(eax12);
    v35 = ebx23;
    esp36 = reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4 + 4 + 4 + 1 + 4 - 4 + 1 - 4 - 4 - 4 - 1 - 4 - 4 + 1 - 4 - 4 - 4 - 4 - 4 - 4);
    edx17->f0 = reinterpret_cast<unsigned char>(edx17->f0 | reinterpret_cast<uint32_t>(edi33));
    eax12->f0 = eax12->f0 | reinterpret_cast<uint32_t>(eax12);
    *reinterpret_cast<uint1_t*>(&eflags4) = 0;
    __asm__("popad ");
    if (0) {
        addr_80481c3_2:
        __asm__("outsd ");
        if (*reinterpret_cast<uint1_t*>(&eflags4)) {
            addr_8048229_3:
        } else {
            __asm__("insd ");
            *reinterpret_cast<uint1_t*>(&eflags4) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax12) + 1) < ebx23->f80482b6);
            *reinterpret_cast<int1_t*>(&eflags4) = __intrinsic();
            *reinterpret_cast<uint1_t*>(&eflags4) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax12) + 1) == ebx23->f80482b6);
            *reinterpret_cast<int1_t*>(&eflags4) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax12) + 1) < reinterpret_cast<signed char>(ebx23->f80482b6);
            *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags4) + 1) = __intrinsic();
            *reinterpret_cast<int1_t*>(&eflags4) = __intrinsic();
            goto addr_80481cc_5;
        }
    } else {
        __asm__("arpl [ecx], cx");
        tmp8_37 = reinterpret_cast<unsigned char>(esi30->f0 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax12) + 1));
        *reinterpret_cast<uint1_t*>(&eflags4) = reinterpret_cast<uint1_t>(tmp8_37 < esi30->f0);
        esi30->f0 = tmp8_37;
        *reinterpret_cast<int1_t*>(&eflags4) = __intrinsic();
        *reinterpret_cast<uint1_t*>(&eflags4) = reinterpret_cast<uint1_t>(esi30->f0 == 0);
        *reinterpret_cast<int1_t*>(&eflags4) = reinterpret_cast<signed char>(esi30->f0) < reinterpret_cast<signed char>(0);
        *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags4) + 1) = __intrinsic();
        *reinterpret_cast<int1_t*>(&eflags4) = __intrinsic();
        __asm__("popad ");
        if (*reinterpret_cast<uint1_t*>(&eflags4)) {
            addr_80481cc_5:
            goto addr_80481ce_7;
        } else {
            if (*reinterpret_cast<uint1_t*>(&eflags4) | *reinterpret_cast<uint1_t*>(&eflags4)) {
                addr_80481c2_9:
                goto addr_80481c3_2;
            } else {
                ebp27->f9 = reinterpret_cast<unsigned char>(ebp27->f9 ^ *reinterpret_cast<unsigned char*>(&ebx23));
                tmp8_38 = reinterpret_cast<unsigned char>(esi30->f0 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax12) + 1));
                *reinterpret_cast<uint1_t*>(&eflags4) = reinterpret_cast<uint1_t>(tmp8_38 < esi30->f0);
                esi30->f0 = tmp8_38;
                *reinterpret_cast<int1_t*>(&eflags4) = __intrinsic();
                *reinterpret_cast<uint1_t*>(&eflags4) = reinterpret_cast<uint1_t>(esi30->f0 == 0);
                *reinterpret_cast<int1_t*>(&eflags4) = reinterpret_cast<signed char>(esi30->f0) < reinterpret_cast<signed char>(0);
                *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags4) + 1) = __intrinsic();
                *reinterpret_cast<int1_t*>(&eflags4) = __intrinsic();
                __asm__("popad ");
                if (*reinterpret_cast<uint1_t*>(&eflags4)) {
                    addr_80481d8_11:
                    eax12->f4 = ebx23;
                    eax12->f8 = ecx20;
                    eax12->fc = edx17;
                    eax12->f10 = esi30;
                    eax12->f14 = edi33;
                    eax12->f18 = ebp27;
                    eax12->f1c = esp36;
                    eax12->f24 = cs39;
                    goto addr_80481ee_12;
                } else {
                    if (*reinterpret_cast<uint1_t*>(&eflags4) | *reinterpret_cast<uint1_t*>(&eflags4)) {
                        addr_80481ce_7:
                        eax12 = reinterpret_cast<struct s3*>(0x80482b6);
                        g80482d6 = eflags4 & 0xfcffff;
                        esp36 = esp36 - 1 + 1;
                        goto addr_80481d8_11;
                    } else {
                        ebp27->f9 = reinterpret_cast<unsigned char>(ebp27->f9 ^ reinterpret_cast<uint32_t>(ebx23));
                        tmp8_40 = reinterpret_cast<unsigned char>(esi30->f0 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax12) + 1));
                        cf41 = reinterpret_cast<uint1_t>(tmp8_40 < esi30->f0);
                        esi30->f0 = tmp8_40;
                        __asm__("outsb ");
                        if (cf41 | reinterpret_cast<uint1_t>(esi30->f0 == 0)) {
                            addr_80481ee_12:
                            eax12->f28 = ds42;
                            eax12->f2c = es43;
                            eax12->f30 = fs44;
                            eax12->f34 = gs45;
                            eax12->f38 = ss46;
                            ebp27 = v35;
                            eax12->f3c = ebp27;
                            esi30 = v34;
                            eax12->f40 = esi30;
                            edi33 = v32;
                            esp36 = esp36 + 1 + 1 + 1;
                            eax12->f44 = edi33;
                            goto addr_804820b_15;
                        } else {
                            ebx23 = ebx23;
                            ++esp36;
                            ebp27->f9 = reinterpret_cast<unsigned char>(ebp27->f9 ^ *reinterpret_cast<unsigned char*>(&ebx23));
                            edx17->f0 = reinterpret_cast<unsigned char>(edx17->f0 + *reinterpret_cast<unsigned char*>(&ecx20));
                            eax47 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax12) - 0x2d2d2d2d - 0x2d2d2d2d - 0x2d2d2d2d - 0x2d2d2d2d - 0x2d2d2d2d);
                            eax12 = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(eax47) - 0x6665420a);
                            __asm__("outsd ");
                            if (reinterpret_cast<uint32_t>(eax47) < 0x6665420a) {
                                addr_804820c_17:
                                eax12->f48 = edx17;
                                v32 = edi33;
                                v34 = esi30;
                                esp36 = esp36 - 1 - 1 - 1;
                                v35 = ebp27;
                                goto addr_8048214_18;
                            } else {
                                ebx23->f79 = 0;
                                if (1) {
                                    addr_804820b_15:
                                    edx17 = esp36[static_cast<uint32_t>(ebp27)];
                                    goto addr_804820c_17;
                                } else {
                                    if (__intrinsic()) {
                                        do {
                                            addr_8048214_18:
                                            __asm__("lodsb ");
                                        } while (*reinterpret_cast<signed char*>(&eax12));
                                        goto addr_8048219_21;
                                    } else {
                                        __asm__("arpl [esi+0x65], si");
                                        cf48 = *reinterpret_cast<unsigned char*>(&ecx20) < edx17->f0;
                                        --ecx20;
                                        __asm__("outsb ");
                                        if (!cf48) {
                                            goto addr_8048222_24;
                                        } else {
                                            ebx23->f61 = 0;
                                            __asm__("insb ");
                                            __asm__("insb ");
                                            eax12->f72 = 0;
                                            *reinterpret_cast<uint1_t*>(&eflags4) = 0;
                                            goto addr_80481c2_9;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    do {
        esp36 = esp36 - 1 + 1;
        __asm__("int 0x80");
        addr_8048231_27:
        ++esp36;
        ebp49 = reinterpret_cast<uint32_t>(v50) - 1;
    } while (!ebp49);
    esp51 = reinterpret_cast<int32_t*>(esp36 + 1);
    g80482ba = v52;
    g80482be = esp51;
    g80482c2 = reinterpret_cast<uint32_t>(esp51 + ebp49 + 1);
    g80482c6 = 0x11223344;
    g80482ca = 0x55667788;
    g80482ce = 0x9900aabb;
    __asm__("pushad ");
    __asm__("int 0x80");
    __asm__("int 0x80");
    fun_80480a7(15, v53, v54, v55, v56, v57, v58);
    __asm__("int 0x80");
    __asm__("int 0x80");
    __asm__("popad ");
    __asm__("int 0x80");
    addr_8048219_21:
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi30) - 5) != 0x73676572) 
        goto addr_8048231_27;
    addr_8048222_24:
    fun_80480a7(19, v35, v34, v32, v29, v26, *reinterpret_cast<int24_t*>(reinterpret_cast<int32_t>(&v25) + 1));
    esp36 = esp36 - 1 + 1 - 1 + 1;
    goto addr_8048229_3;
}
