
int32_t FindAtomA = 0x4164;

/* _FindAtomA@4 */
uint16_t _FindAtomA_4(void* a1) {
    goto FindAtomA;
}

struct s0 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    signed char[8] pad20;
    int32_t f20;
    signed char[4] pad28;
    int32_t f28;
    int32_t f32;
    int32_t f36;
    int32_t f40;
    int32_t f44;
};

int32_t malloc = 0x4124;

struct s0* _malloc(struct s0* a1) {
    goto malloc;
}

int32_t __data_start__ = 20;

uint32_t _abort(struct s0* a1, void* a2, void* a3);

/* .bss */
int32_t bss;

int32_t g402008 = 0;

/* _sjl_once.2 */
int32_t _sjl_once_2 = 20;

void ___w32_eh_shared_initialize(struct s0* a1) {
    int32_t ecx2;
    struct s0* ebx3;
    struct s0* edi4;
    int32_t eax5;
    int32_t eax6;
    int32_t edx7;
    int32_t eax8;

    ecx2 = 12;
    ebx3 = a1;
    edi4 = ebx3;
    while (ecx2) {
        --ecx2;
        edi4->f0 = 0;
        edi4 = reinterpret_cast<struct s0*>(&edi4->f4);
    }
    ebx3->f0 = 48;
    eax5 = __data_start__;
    ebx3->f36 = -1;
    ebx3->f4 = reinterpret_cast<int32_t>(_abort);
    ebx3->f20 = eax5;
    eax6 = bss;
    ebx3->f8 = 0x401140;
    edx7 = g402008;
    ebx3->f28 = 0;
    ebx3->f32 = eax6;
    eax8 = _sjl_once_2;
    ebx3->f44 = edx7;
    ebx3->f40 = eax8;
    return;
}

/* _AddAtomA@4 */
uint16_t _AddAtomA_4(void* a1);

struct s0* ___w32_sharedptr_get(int32_t ecx, uint16_t a2);

int16_t ___w32_sharedptr_set(struct s0* a1) {
    void* eax2;
    void* ebp3;
    uint32_t edx4;
    struct s0* ebx5;
    signed char cl6;
    int32_t ecx7;
    uint16_t ax8;
    uint32_t esi9;
    uint32_t v10;
    struct s0* eax11;
    uint32_t edx12;
    uint32_t eax13;

    eax2 = reinterpret_cast<void*>(31);
    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    edx4 = 1;
    ebx5 = a1;
    do {
        cl6 = 65;
        if (!(edx4 & reinterpret_cast<uint32_t>(ebx5))) {
            cl6 = 97;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax2) + reinterpret_cast<int32_t>(ebp3) - 88) = cl6;
        edx4 = edx4 + edx4;
        eax2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax2) - 1);
    } while (reinterpret_cast<int32_t>(eax2) >= 0);
    ecx7 = 7;
    while (ecx7) {
        --ecx7;
    }
    ax8 = _AddAtomA_4(reinterpret_cast<int32_t>(ebp3) - 88);
    esi9 = ax8;
    if (!*reinterpret_cast<int16_t*>(&esi9) || (v10 = esi9, eax11 = ___w32_sharedptr_get(ecx7, *reinterpret_cast<uint16_t*>(&v10)), edx12 = esi9, eax11 != ebx5)) {
        edx12 = 0;
    }
    eax13 = edx12;
    return *reinterpret_cast<int16_t*>(&eax13);
}

int32_t pthread_atfork = 0x4130;

void _pthread_atfork(int32_t a1, int32_t a2, int32_t a3) {
    goto pthread_atfork;
}

int32_t AddAtomA = 0x4158;

/* _AddAtomA@4 */
uint16_t _AddAtomA_4(void* a1) {
    goto AddAtomA;
}

struct s1 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t f12;
    int32_t f16;
    int32_t f20;
    int32_t f24;
    int32_t f28;
    int32_t f32;
    int32_t f36;
    int32_t f40;
    int32_t f44;
    int32_t f48;
    int32_t f52;
    int32_t f56;
    int32_t f60;
    int32_t f64;
    int32_t f68;
    int32_t f72;
    int32_t f76;
    int32_t f80;
    int32_t f84;
    signed char[32] pad120;
    int32_t f120;
    int32_t f124;
    int32_t f128;
    int32_t f132;
    signed char[28] pad164;
    int32_t f164;
};

struct s1* _cygwin_internal(int32_t a1);

int32_t __impure_ptr;

/* .text */
void text();

/* .text */
void text();

/* .text */
void text();

void _free(struct s0* a1);

void _calloc();

/* _GetModuleHandleA@4 */
int32_t _GetModuleHandleA_4(int32_t a1);

void __pei386_runtime_relocator(int32_t a1);

/* .text */
int32_t text(int32_t a1, struct s1* a2, int32_t a3) {
    int32_t eax4;
    struct s1* ebx5;
    struct s1* eax6;
    int32_t eax7;
    int32_t ebp8;
    int32_t eax9;

    eax4 = 0;
    ebx5 = a2;
    if (!ebx5) {
        eax6 = _cygwin_internal(8);
        eax7 = 0;
        if (eax6 == -1) {
            addr_40161d_3:
            return eax7;
        } else {
            ebx5 = eax6;
            eax4 = 1;
        }
    }
    ebx5->f4 = 0xa8;
    ebx5->f8 = 0x3ed;
    ebx5->f12 = 9;
    ebx5->f128 = 0;
    ebx5->f132 = 0x70;
    ebx5->f44 = 0x4017a0;
    ebx5->f48 = 0x4017ac;
    ebx5->f20 = 0x403020;
    if (!eax4) {
        ebx5->f16 = 0x403024;
    } else {
        __impure_ptr = ebx5->f164;
    }
    ebx5->f120 = 0;
    ebx5->f72 = reinterpret_cast<int32_t>(text);
    ebx5->f76 = reinterpret_cast<int32_t>(text);
    ebx5->f40 = a1;
    ebx5->f80 = reinterpret_cast<int32_t>(text);
    ebx5->f84 = 0x401700;
    ebx5->f36 = 0x403028;
    ebx5->f0 = ebp8;
    ebx5->f24 = reinterpret_cast<int32_t>(_malloc);
    ebx5->f28 = reinterpret_cast<int32_t>(_free);
    ebx5->f32 = 0x4016f0;
    ebx5->f68 = reinterpret_cast<int32_t>(_calloc);
    eax9 = _GetModuleHandleA_4(0);
    ebx5->f124 = eax9;
    ebx5->f52 = 0x402000;
    ebx5->f56 = 0x402010;
    ebx5->f60 = 0x403000;
    ebx5->f64 = 0x403080;
    __pei386_runtime_relocator(0);
    eax7 = 1;
    goto addr_40161d_3;
}

int32_t GetModuleHandleA = 0x4180;

/* _GetModuleHandleA@4 */
int32_t _GetModuleHandleA_4(int32_t a1) {
    goto GetModuleHandleA;
}

struct s2 {
    int32_t f0;
    int32_t f4;
};

/* .text */
void text(struct s2* a1, struct s2* a2, int32_t a3);

void __pei386_runtime_relocator(int32_t a1) {
    text(0x403000, 0x403000, 0x400000);
    return;
}

int32_t dll_crt0__FP11per_process = 0x4100;

/* .text */
void text(int32_t a1) {
    int32_t esi2;
    int32_t v3;
    int32_t v4;
    int32_t eax5;
    int32_t* esp6;
    int32_t* esp7;

    esi2 = a1;
    v3 = esi2;
    eax5 = text(v3, 0, v4);
    esp6 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 24 - 4 + 8 + 4 - 8);
    if (!eax5) {
        while (1) {
            esp7 = esp6 - 44;
            text(esi2, esp7 + 2, 0);
            esp6 = esp7 - 1 + 2 + 1 - 2;
            addr_40149d_3:
            dll_crt0__FP11per_process(v3, 0);
            esp6 = esp6 - 1 + 1;
        }
    } else {
        v3 = 0;
        goto addr_40149d_3;
    }
}

int32_t __alloca(int32_t ecx) {
    int32_t v2;
    void* ecx3;
    uint32_t eax4;
    uint32_t* ecx5;

    v2 = reinterpret_cast<int32_t>(__return_address());
    ecx3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 8);
    while (eax4 >= 0x1000) {
        ecx3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx3) - 0x1000);
        eax4 = eax4 - 0x1000;
    }
    ecx5 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ecx3) - eax4);
    *ecx5 = *ecx5;
    return v2;
}

int32_t __main = 0x40cc;

void ___main() {
    goto __main;
}

/* _GetAtomNameA@12 */
int32_t _GetAtomNameA_12();

struct s0* ___w32_sharedptr;

struct s0* ___w32_sharedptr_get(int32_t ecx, uint16_t a2) {
    void* esp3;
    void* ebp4;
    struct s0* ebx5;
    void* v6;
    struct s0* v7;
    int32_t eax8;
    void* esp9;
    void* eax10;
    uint32_t edx11;
    struct s0* eax12;
    struct s0* v13;
    int16_t ax14;
    void* v15;
    uint32_t eax16;
    void* ecx17;
    uint32_t* ecx18;

    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebp4 = esp3;
    ebx5 = reinterpret_cast<struct s0*>(0);
    v6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp4) - 72);
    v7 = reinterpret_cast<struct s0*>(static_cast<uint32_t>(a2));
    eax8 = _GetAtomNameA_12();
    esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 - 84 - 4 + 12 + 4 - 12);
    if (!eax8) {
        addr_4013fc_2:
        _abort(v7, v6, 63);
    } else {
        eax10 = reinterpret_cast<void*>(31);
        edx11 = 1;
        do {
            if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax10) + reinterpret_cast<int32_t>(ebp4) - 72) == 65) {
                ebx5 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebx5) | edx11);
            }
            edx11 = edx11 + edx11;
            eax10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax10) - 1);
        } while (reinterpret_cast<int32_t>(eax10) >= 0);
        if (ebx5->f0 != 48) 
            goto addr_4013fc_2; else 
            goto addr_4013f1_8;
    }
    eax12 = ___w32_sharedptr;
    v13 = eax12;
    ax14 = ___w32_sharedptr_set(v13);
    if (!ax14) {
        eax16 = _abort(v13, v15, ebp4);
        ecx17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp9) - 4 + 4 - 4 - 8 - 4 + 4 - 4 + 4 - 4 + 8);
        while (eax16 >= 0x1000) {
            ecx17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx17) - 0x1000);
            eax16 = eax16 - 0x1000;
        }
        ecx18 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ecx17) - eax16);
        *ecx18 = *ecx18;
        goto v13;
    } else {
        goto v7;
    }
    addr_4013f1_8:
    return ebx5;
}

int32_t abort = 0x40d8;

uint32_t _abort(struct s0* a1, void* a2, void* a3) {
    goto abort;
}

int32_t free = 0x411c;

void _free(struct s0* a1) {
    goto free;
}

/* .text */
void text(struct s2* a1, struct s2* a2, int32_t a3) {
    struct s2* ecx4;
    struct s2* ebx5;
    int32_t esi6;
    int32_t* edx7;

    ecx4 = a1;
    ebx5 = a2;
    if (reinterpret_cast<uint32_t>(ecx4) < reinterpret_cast<uint32_t>(ebx5)) {
        esi6 = a3;
        do {
            edx7 = reinterpret_cast<int32_t*>(esi6 + ecx4->f4);
            ++ecx4;
            *edx7 = *edx7 + ecx4->f0;
        } while (reinterpret_cast<uint32_t>(ecx4) < reinterpret_cast<uint32_t>(ebx5));
    }
    return;
}

int32_t puts = 0x4144;

void _puts(unsigned char* a1, int32_t a2) {
    goto puts;
}

int32_t GetAtomNameA = 0x4170;

/* _GetAtomNameA@12 */
int32_t _GetAtomNameA_12() {
    goto GetAtomNameA;
}

int32_t cygwin_internal = 0x40ec;

struct s1* _cygwin_internal(int32_t a1) {
    goto cygwin_internal;
}

int32_t __bss_start__;

void __RUNTIME_PSEUDO_RELOC_LIST_END__() {
    int32_t eax1;

    eax1 = __bss_start__;
    if (eax1) {
    }
    __asm__("fnstcw word [ebp-0x2]");
    __asm__("fldcw word [ebp-0x2]");
    text(0x401080);
    return;
}

void fun_4017a3() {
    int32_t eax1;
    signed char* eax2;

    eax2 = reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(eax1 + 0x4017)(__return_address()));
    *eax2 = reinterpret_cast<signed char>(*eax2 + *reinterpret_cast<signed char*>(&eax2));
}

void fun_4017af() {
    int32_t* eax1;
    int32_t* eax2;
    signed char* eax3;
    signed char* eax4;
    signed char al5;
    signed char* eax6;
    signed char* eax7;
    signed char al8;
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
    signed char* eax21;
    signed char* eax22;
    signed char al23;
    signed char* eax24;
    signed char* eax25;
    signed char al26;
    signed char* eax27;
    signed char* eax28;
    signed char al29;
    signed char* eax30;
    signed char* eax31;
    signed char al32;
    signed char* eax33;
    signed char* eax34;
    signed char al35;
    signed char* eax36;
    signed char* eax37;
    signed char al38;
    signed char* eax39;
    signed char* eax40;
    signed char al41;
    signed char* eax42;
    signed char* eax43;
    signed char al44;
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
    signed char* eax57;
    signed char* eax58;
    signed char al59;
    signed char* eax60;
    signed char* eax61;
    signed char al62;
    signed char* eax63;
    signed char* eax64;
    signed char al65;
    signed char* eax66;
    signed char* eax67;
    signed char al68;
    signed char* eax69;
    signed char* eax70;
    signed char al71;
    signed char* eax72;
    signed char* eax73;
    signed char al74;
    signed char* eax75;
    signed char* eax76;
    signed char al77;
    signed char* eax78;
    signed char* eax79;
    signed char al80;
    signed char* eax81;
    signed char* eax82;
    signed char al83;
    signed char* eax84;
    signed char* eax85;
    signed char al86;
    signed char* eax87;
    signed char* eax88;
    signed char al89;
    signed char* eax90;
    signed char* eax91;
    signed char al92;
    signed char* eax93;
    signed char* eax94;
    signed char al95;
    signed char* eax96;
    signed char* eax97;
    signed char al98;
    signed char* eax99;
    signed char* eax100;
    signed char al101;
    signed char* eax102;
    signed char* eax103;
    signed char al104;
    signed char* eax105;
    signed char* eax106;
    signed char al107;
    signed char* eax108;
    signed char* eax109;
    signed char al110;
    signed char* eax111;
    signed char* eax112;
    signed char al113;
    signed char* eax114;
    signed char* eax115;
    signed char al116;
    signed char* eax117;
    signed char* eax118;
    signed char al119;

    *eax1 = *eax2 + 1;
    *eax3 = reinterpret_cast<signed char>(*eax4 + al5);
    *eax6 = reinterpret_cast<signed char>(*eax7 + al8);
    *eax9 = reinterpret_cast<signed char>(*eax10 + al11);
    *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
    *eax15 = reinterpret_cast<signed char>(*eax16 + al17);
    *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
    *eax21 = reinterpret_cast<signed char>(*eax22 + al23);
    *eax24 = reinterpret_cast<signed char>(*eax25 + al26);
    *eax27 = reinterpret_cast<signed char>(*eax28 + al29);
    *eax30 = reinterpret_cast<signed char>(*eax31 + al32);
    *eax33 = reinterpret_cast<signed char>(*eax34 + al35);
    *eax36 = reinterpret_cast<signed char>(*eax37 + al38);
    *eax39 = reinterpret_cast<signed char>(*eax40 + al41);
    *eax42 = reinterpret_cast<signed char>(*eax43 + al44);
    *eax45 = reinterpret_cast<signed char>(*eax46 + al47);
    *eax48 = reinterpret_cast<signed char>(*eax49 + al50);
    *eax51 = reinterpret_cast<signed char>(*eax52 + al53);
    *eax54 = reinterpret_cast<signed char>(*eax55 + al56);
    *eax57 = reinterpret_cast<signed char>(*eax58 + al59);
    *eax60 = reinterpret_cast<signed char>(*eax61 + al62);
    *eax63 = reinterpret_cast<signed char>(*eax64 + al65);
    *eax66 = reinterpret_cast<signed char>(*eax67 + al68);
    *eax69 = reinterpret_cast<signed char>(*eax70 + al71);
    *eax72 = reinterpret_cast<signed char>(*eax73 + al74);
    *eax75 = reinterpret_cast<signed char>(*eax76 + al77);
    *eax78 = reinterpret_cast<signed char>(*eax79 + al80);
    *eax81 = reinterpret_cast<signed char>(*eax82 + al83);
    *eax84 = reinterpret_cast<signed char>(*eax85 + al86);
    *eax87 = reinterpret_cast<signed char>(*eax88 + al89);
    *eax90 = reinterpret_cast<signed char>(*eax91 + al92);
    *eax93 = reinterpret_cast<signed char>(*eax94 + al95);
    *eax96 = reinterpret_cast<signed char>(*eax97 + al98);
    *eax99 = reinterpret_cast<signed char>(*eax100 + al101);
    *eax102 = reinterpret_cast<signed char>(*eax103 + al104);
    *eax105 = reinterpret_cast<signed char>(*eax106 + al107);
    *eax108 = reinterpret_cast<signed char>(*eax109 + al110);
    *eax111 = reinterpret_cast<signed char>(*eax112 + al113);
    *eax114 = reinterpret_cast<signed char>(*eax115 + al116);
    *eax117 = reinterpret_cast<signed char>(*eax118 + al119);
}

struct s3 {
    signed char[1] pad1;
    unsigned char f1;
};

signed char gc7004011;

struct s4 {
    signed char[4] pad4;
    int32_t f4;
};

struct s5 {
    signed char[1] pad1;
    unsigned char f1;
};

void fun_4010a8(int32_t ecx) {
    int32_t ecx2;
    int1_t zf3;
    unsigned char* eax4;
    signed char* eax5;
    signed char al6;
    uint1_t cf7;
    struct s3* eax8;
    signed char al9;
    unsigned char* eax10;
    signed char tmp8_11;
    unsigned char tmp8_12;
    uint1_t cf13;
    struct s4* ebp14;
    unsigned char* eax15;
    struct s5* eax16;
    unsigned char tmp8_17;
    uint1_t cf18;

    ecx2 = ecx - 1;
    if (reinterpret_cast<uint1_t>(!!ecx2) & reinterpret_cast<uint1_t>(!zf3)) {
        __asm__("sti ");
        *eax4 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax5 + al6) + cf7);
        *reinterpret_cast<signed char*>(&eax8) = reinterpret_cast<signed char>(al9 + 17);
        eax10 = &eax8->f1;
        tmp8_11 = reinterpret_cast<signed char>(gc7004011 + *reinterpret_cast<signed char*>(&ecx2));
        gc7004011 = tmp8_11;
        tmp8_12 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax10) + 36);
        cf13 = reinterpret_cast<uint1_t>(tmp8_12 < *reinterpret_cast<unsigned char*>(&eax10));
        *reinterpret_cast<unsigned char*>(&eax10) = tmp8_12;
        *eax10 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax10 + *reinterpret_cast<unsigned char*>(&eax10)) + cf13);
        _puts(eax10, __return_address());
        goto ebp14->f4;
    } else {
        eax15 = &eax16->f1;
        tmp8_17 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax15) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax15) + 1));
        cf18 = reinterpret_cast<uint1_t>(tmp8_17 < *reinterpret_cast<unsigned char*>(&eax15));
        *reinterpret_cast<unsigned char*>(&eax15) = tmp8_17;
        *eax15 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax15 + *reinterpret_cast<unsigned char*>(&eax15)) + cf18);
        __asm__("enter 0x4010, 0x0");
    }
}

void fun_4010b9() {
    unsigned char* eax1;
    signed char* eax2;
    signed char al3;
    uint1_t cf4;

    *eax1 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*eax2 + al3) + cf4);
}

int32_t* ___w32_sharedptr_terminate;

int32_t* ___w32_sharedptr_unexpected;

void fun_4011ca() {
    void* ebp1;
    struct s0* eax2;
    int32_t ecx3;
    void* edi4;
    uint16_t ax5;
    uint32_t eax6;
    uint32_t v7;
    struct s0* eax8;
    struct s0* esi9;
    struct s0* eax10;
    void* v11;
    void* v12;
    int16_t ax13;
    uint16_t ax14;

    ebp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax2 = ___w32_sharedptr;
    if (!eax2) {
        ecx3 = 7;
        while (ecx3) {
            --ecx3;
        }
        edi4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp1) - 72);
        ax5 = _FindAtomA_4(edi4);
        eax6 = ax5;
        if (!*reinterpret_cast<int16_t*>(&eax6)) 
            goto addr_401266_7;
    } else {
        addr_4011e5_8:
        return;
    }
    addr_4012f0_9:
    v7 = eax6;
    eax8 = ___w32_sharedptr_get(ecx3, *reinterpret_cast<uint16_t*>(&v7));
    esi9 = eax8;
    addr_4012b0_10:
    ___w32_sharedptr = esi9;
    ___w32_sharedptr_terminate = &esi9->f4;
    ___w32_sharedptr_unexpected = &esi9->f8;
    goto addr_4011e5_8;
    addr_401266_7:
    eax10 = _malloc(48);
    if (!eax10) {
        _abort(48, v11, v12);
        goto ___w32_sharedptr_set;
    }
    ___w32_eh_shared_initialize(eax10);
    ax13 = ___w32_sharedptr_set(eax10);
    if (!ax13) {
        _free(eax10);
        ax14 = _FindAtomA_4(edi4);
        eax6 = ax14;
        goto addr_4012f0_9;
    } else {
        _pthread_atfork(0, 0, 0x401410);
        esi9 = eax10;
        goto addr_4012b0_10;
    }
}

void fun_401397() {
}

void _dll_crt0__FP11per_process() {
    goto dll_crt0__FP11per_process;
}

void fun_4016a6() {
}

void fun_4010de() {
    goto 0x4010d0;
}

struct s6 {
    signed char[4] pad4;
    int32_t f4;
};

struct s7 {
    signed char[4] pad4;
    int32_t f4;
};

/* .text */
void text(int32_t ecx) {
    int32_t edx2;
    int32_t edx3;
    struct s6* eax4;
    void* eax5;
    struct s7* ebp6;

    edx2 = edx3 - 1 - 1;
    eax4 = reinterpret_cast<struct s6*>(reinterpret_cast<int32_t>(eax5) - 0x4742494c - 0x532d4845 - 0x52485447 - 0x57475943);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax4) - 0x7c1a76ab) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax4) - 0x7c1a76ab) + *reinterpret_cast<signed char*>(&edx2));
    __asm__("in al, dx");
    *reinterpret_cast<unsigned char*>(ecx - 1 + 0x403040) = 0xff;
    eax4->f4();
    goto ebp6->f4;
}

void fun_401758() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_401518() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_401508() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_401768() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_401788() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    goto 0x4011d0;
}

int32_t calloc = 0x40e0;

void _calloc() {
    goto calloc;
}

void fun_401668() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

struct s8 {
    signed char[101] pad101;
    signed char f101;
};

struct s9 {
    signed char[101] pad101;
    unsigned char f101;
};

struct s10 {
    signed char[101] pad101;
    unsigned char f101;
};

struct s11 {
    signed char[101] pad101;
    signed char f101;
};

/* .text */
void text(int32_t ecx) {
    int1_t below_or_equal2;
    uint32_t* eax3;
    uint32_t* eax4;
    uint32_t eax5;
    int32_t edi6;
    int32_t ebx7;
    void* eax8;
    int32_t ebp9;
    void* eax10;
    int32_t ebp11;
    signed char dl12;
    uint32_t* eax13;
    uint32_t* eax14;
    uint32_t eax15;
    int32_t esi16;
    uint32_t* eax17;
    uint32_t* eax18;
    uint32_t eax19;
    unsigned char tmp8_20;
    struct s8* ebx21;
    signed char dl22;
    uint1_t cf23;
    struct s9* ebx24;
    struct s10* ebx25;
    struct s11* ebx26;
    uint32_t* eax27;
    uint32_t* eax28;
    uint32_t eax29;

    if (!below_or_equal2) 
        goto "@";
    *eax3 = *eax4 & eax5;
    if (!(edi6 - 1)) 
        goto 0x4010c0;
    if (0) {
        addr_40107c_4:
        ebx7 = reinterpret_cast<int32_t>(__return_address());
        __alloca(ecx);
    } else {
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax8) + ebp9 * 2 + 0x72) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax10) + ebp11 * 2 + 0x72) + dl12);
        *eax13 = *eax14 & eax15;
        __asm__("outsd ");
        if (esi16 + 1) 
            goto 0x4010d9;
        *eax17 = *eax18 & eax19;
        if (!__undefined()) 
            goto addr_401073_7;
    }
    ___main();
    switch (ebx7) {
    case 3:
        goto 0x4010d0;
    case 4:
        goto 0x4010d0;
    case 5:
        goto 0x4010d0;
    case 6:
        goto 0x4010d0;
    case 7:
        goto 0x4010d0;
    case 2:
        goto 0x4010c8;
    case 0:
    case 1:
        goto 0x4010e0;
    }
    addr_401073_7:
    tmp8_20 = reinterpret_cast<unsigned char>(ebx21->f101 + dl22);
    cf23 = reinterpret_cast<uint1_t>(tmp8_20 < ebx24->f101);
    ebx25->f101 = tmp8_20;
    if (cf23 | reinterpret_cast<uint1_t>(ebx26->f101 == 0)) 
        goto 0x4010dd;
    __asm__("outsb ");
    *eax27 = *eax28 & eax29;
    goto addr_40107c_4;
}

void fun_4014d8() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_401152() {
}

void fun_401528() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_4014f8() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

int32_t realloc = 0x414c;

void fun_4016e8() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    goto realloc;
}

void fun_4014e8() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_401778() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_401748() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_4016f8() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    return;
}

/* .text */
void text() {
    return;
}

/* .text */
void text() {
    return;
}

/* .text */
void text() {
    return;
}
