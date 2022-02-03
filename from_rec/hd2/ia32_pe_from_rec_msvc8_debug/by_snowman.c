
int32_t fun_41100a() {
    return 0;
}

struct s0 {
    unsigned char f0;
    signed char[3] pad4;
    struct s0* f4;
    signed char[4] pad12;
    struct s0* fc;
    signed char[4] pad20;
    unsigned char f14;
    signed char[3] pad24;
    unsigned char f18;
    signed char[3] pad28;
    unsigned char f1c;
};

struct s0* fun_4111e0(struct s0* a1, struct s0* a2, struct s0* a3, void* a4);

void* fun_411168() {
    int1_t zf1;
    struct s0* edi2;
    void* esi3;
    void* eax4;
    void* eax5;

    if (!zf1) {
        fun_4111e0(__return_address(), 0, edi2, esi3);
        return eax4;
    } else {
        return eax5;
    }
}

int32_t strcat = 0x18372;

void fun_4110aa(void* a1, int32_t a2) {
    goto strcat;
}

int32_t _stat64i32 = 0x183aa;

void* fun_411860(int32_t a1, void* a2) {
    int32_t ecx3;
    void* eax4;

    ecx3 = 48;
    while (ecx3) {
        --ecx3;
    }
    _stat64i32(a1, a2);
    fun_411168();
    eax4 = fun_411168();
    return eax4;
}

uint32_t g417000 = 0xbb40e64e;

int32_t fopen = 0x18398;

int32_t fread = 0x18390;

void* fun_4110c3(void* a1, uint32_t a2, void* a3);

int32_t perror = 0x183a0;

int32_t fclose = 0x18386;

void fun_411096(void* ecx);

struct s0* fun_411023(uint32_t ecx, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, void* a8, int32_t a9, void* a10, void* a11, int32_t a12, void* a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, void* a18, int32_t a19, int32_t a20);

void* fun_411163(int32_t a1) {
    void* ebp2;
    int32_t ecx3;
    uint32_t eax4;
    uint32_t v5;
    void* eax6;
    void* eax7;
    void* v8;
    uint32_t v9;
    uint32_t v10;
    void* eax11;
    struct s0* v12;
    struct s0* v13;
    struct s0* v14;
    struct s0* v15;
    struct s0* v16;
    struct s0* v17;
    void* v18;
    int32_t v19;
    void* v20;
    void* v21;
    int32_t v22;
    void* v23;
    int32_t v24;
    int32_t v25;
    int32_t v26;
    int32_t v27;
    void* v28;
    int32_t v29;
    int32_t v30;
    void* eax31;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ecx3 = 78;
    while (ecx3) {
        --ecx3;
    }
    eax4 = g417000;
    v5 = eax4 ^ reinterpret_cast<uint32_t>(ebp2);
    eax6 = fun_411860(a1, reinterpret_cast<uint32_t>(ebp2) - 0x68);
    if (!eax6) {
        fopen(a1, "rb");
        eax7 = fun_411168();
        v8 = eax7;
        if (v8) {
            v9 = 0;
            while (v9 < v10) {
                fread(reinterpret_cast<uint32_t>(ebp2) - 24, 1, 16, v8);
                eax11 = fun_411168();
                if (!eax11) 
                    goto addr_411773_10;
                fun_4110c3(reinterpret_cast<uint32_t>(ebp2) - 24, v9, eax11);
                v9 = v9 + reinterpret_cast<uint32_t>(eax11);
            }
        } else {
            perror(a1);
            fun_411168();
            goto addr_4117ac_13;
        }
    } else {
        perror(a1);
        fun_411168();
        goto addr_4117ac_13;
    }
    addr_411794_15:
    fclose(v8);
    fun_411168();
    addr_4117ac_13:
    fun_411096(ebp2);
    fun_411023(v5 ^ reinterpret_cast<uint32_t>(ebp2), v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30);
    eax31 = fun_411168();
    return eax31;
    addr_411773_10:
    goto addr_411794_15;
}

int32_t g417010 = 1;

struct s0* fun_4123f0(struct s0* a1, int32_t a2, struct s0* a3, void* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, void* a10);

struct s1 {
    signed char[4283284] pad4283284;
    signed char f415b94;
};

struct s0* fun_4110f0(struct s0* a1, signed char* a2) {
    void* ebp3;
    uint32_t eax4;
    uint32_t v5;
    int1_t zf6;
    struct s0* v7;
    signed char* eax8;
    struct s0* v9;
    struct s0* v10;
    struct s0* v11;
    struct s0* v12;
    struct s0* v13;
    void* v14;
    int32_t v15;
    void* v16;
    void* v17;
    int32_t v18;
    void* v19;
    int32_t v20;
    int32_t v21;
    int32_t v22;
    int32_t v23;
    void* v24;
    int32_t v25;
    int32_t v26;
    struct s0* eax27;
    int1_t zf28;
    struct s0* v29;
    struct s0* ebx30;
    struct s0* v31;
    struct s0* esi32;
    void* ebx33;
    signed char* ecx34;
    int32_t esi35;
    int32_t eax36;
    struct s0* v37;
    struct s0* v38;
    void* v39;
    struct s1* ecx40;
    signed char dl41;
    signed char* edx42;
    uint32_t eax43;
    signed char v44;
    uint32_t ecx45;
    uint32_t ecx46;
    signed char* eax47;
    uint32_t eax48;
    signed char v49;
    uint32_t ecx50;
    uint32_t ecx51;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax4 = g417000;
    v5 = eax4 ^ reinterpret_cast<uint32_t>(ebp3);
    zf6 = g417010 == -1;
    v7 = a1;
    eax8 = a2;
    if (zf6) {
        addr_41283e_3:
        eax27 = fun_411023(v5 ^ reinterpret_cast<uint32_t>(ebp3), v7, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26);
        return eax27;
    } else {
        zf28 = *eax8 == 0;
        v29 = ebx30;
        v31 = esi32;
        if (zf28) {
            addr_41281f_5:
            ebx33 = reinterpret_cast<void*>("Stack corrupted near unknown variable");
        } else {
            ecx34 = eax8;
            esi35 = reinterpret_cast<int32_t>(ecx34 + 1);
            do {
                ++ecx34;
            } while (*ecx34);
            if (reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(ecx34) - esi35 + 45) > 0x400) 
                goto addr_41281f_5; else 
                goto addr_4127a4_9;
        }
    }
    addr_412824_10:
    eax36 = g417010;
    fun_4123f0(v7, eax36, 2, ebx33, v31, v29, v7, v37, v38, v39);
    goto addr_41283e_3;
    addr_4127a4_9:
    ebx33 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp3) - 0x404);
    ecx40 = reinterpret_cast<struct s1*>(0);
    do {
        dl41 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx40) + reinterpret_cast<int32_t>("Stack around the variable '"));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp3) + reinterpret_cast<int32_t>(ecx40) - 0x404) = dl41;
        ecx40 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(ecx40) + 1);
    } while (dl41);
    edx42 = eax8;
    do {
        ++eax8;
    } while (*eax8);
    eax43 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax8) - reinterpret_cast<int32_t>(edx42));
    do {
    } while (v44);
    ecx45 = eax43 >> 2;
    while (ecx45) {
        --ecx45;
    }
    ecx46 = eax43 & 3;
    eax47 = "' was corrupted.";
    while (ecx46) {
        --ecx46;
    }
    do {
        ++eax47;
    } while (*eax47);
    eax48 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax47) - reinterpret_cast<int32_t>("' was corrupted."));
    do {
    } while (v49);
    ecx50 = eax48 >> 2;
    while (ecx50) {
        --ecx50;
    }
    ecx51 = eax48 & 3;
    while (ecx51) {
        --ecx51;
    }
    goto addr_412824_10;
}

int32_t g417018 = 1;

int32_t LoadLibraryA = 0x186a4;

int32_t GetProcAddress = 0x18692;

int32_t g417534;

void fun_412a10(unsigned char* a1, void* a2, void* a3, void* a4, void* a5, int32_t a6, int32_t a7, int32_t a8, void* a9, int32_t a10, void* a11, int32_t a12, int32_t a13, int32_t a14);

int32_t lstrlenA = 0x18686;

struct s0* fun_4111e5(struct s0* a1, struct s0* a2, int32_t a3) {
    void* ebp4;
    uint32_t eax5;
    uint32_t v6;
    int32_t ebx7;
    int32_t eax8;
    int32_t eax9;
    struct s0* edi10;
    struct s0* esi11;
    struct s0* ebx12;
    void* v13;
    struct s0* edx14;
    void* v15;
    void* edi16;
    void* v17;
    void* v18;
    void* v19;
    struct s0* v20;
    struct s0* v21;
    void* eax22;
    struct s0* v23;
    struct s0* v24;
    void* v25;
    int32_t v26;
    void* v27;
    void* v28;
    int32_t v29;
    void* v30;
    int32_t v31;
    int32_t v32;
    int32_t v33;
    int32_t v34;
    void* v35;
    int32_t v36;
    int32_t v37;
    struct s0* eax38;
    struct s0* v39;
    struct s0* v40;
    struct s0* v41;
    struct s0* v42;
    struct s0* v43;
    void* v44;
    int32_t v45;
    void* v46;
    void* v47;
    int32_t v48;
    void* v49;
    int32_t v50;
    int32_t v51;
    int32_t v52;
    int32_t v53;
    void* v54;
    int32_t v55;
    int32_t v56;
    struct s0* eax57;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax5 = g417000;
    v6 = eax5 ^ reinterpret_cast<uint32_t>(ebp4);
    ebx7 = g417018;
    if (ebx7 != -1) {
        eax8 = reinterpret_cast<int32_t>(LoadLibraryA("user32.dll"));
        if (!eax8 || ((eax9 = reinterpret_cast<int32_t>(GetProcAddress()), g417534 = eax9, a2 == 0) || !eax9)) {
            fun_4123f0(a1, ebx7, 4, "Stack area around _alloca memory reserved by this function is corrupted\n", "user32.dll", edi10, esi11, ebx12, a1, v13);
        } else {
            edx14 = a2->fc;
            v15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx14) - 36);
            edi16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a2) + 32);
            v17 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp4) - 0x140);
            eax9(v17, "%s%s%p%s%ld%s%d%s", "Stack area around _alloca memory reserved by this function is corrupted", "\nAddress: 0x", edi16, "\nSize: ", v15, "\nAllocation number within this function: ", a3, "\nData: <");
            v18 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a2->fc) - 36);
            fun_412a10(reinterpret_cast<uint32_t>(ebp4) - 24, reinterpret_cast<uint32_t>(ebp4) - 76, edi16, v18, v17, "%s%s%p%s%ld%s%d%s", "Stack area around _alloca memory reserved by this function is corrupted", "\nAddress: 0x", edi16, "\nSize: ", v15, "\nAllocation number within this function: ", a3, "\nData: <");
            v19 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp4) - 76);
            v20 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebp4) - 24);
            v21 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebp4) - 0x140);
            eax22 = reinterpret_cast<void*>(lstrlenA(v21, "%s%s%s%s", v20, "> ", v19));
            v23 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<int32_t>(eax22) - 0x140);
            g417534(v23, v21, "%s%s%s%s", v20, "> ", v19);
            fun_4123f0(a1, ebx7, 4, reinterpret_cast<uint32_t>(ebp4) - 0x140, v23, v21, "%s%s%s%s", v20, "> ", v19);
            eax38 = fun_411023(v6 ^ reinterpret_cast<uint32_t>(ebp4), "user32.dll", edi10, esi11, ebx12, a1, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37);
            return eax38;
        }
    }
    eax57 = fun_411023(v6 ^ reinterpret_cast<uint32_t>(ebp4), a1, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56);
    return eax57;
}

int32_t _CRT_RTC_INITW = 0x183c6;

void* fun_411195(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    goto _CRT_RTC_INITW;
}

void* g41753c;

int32_t g417538;

void* fun_411113(void* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    void* eax7;

    eax7 = g41753c;
    g41753c = a1;
    g417538 = 0;
    return eax7;
}

int32_t fun_41117c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8);

void fun_41112c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);

void fun_411005() {
    int32_t eax1;

    eax1 = fun_41117c(0, 0x10000, 0x30000, "_", "_", "f", 31, 0);
    fun_41112c(eax1, "_", "_", "f", 31, 0);
    return;
}

int32_t _amsg_exit = 0x18454;

void fun_4111a9(int32_t a1) {
    goto _amsg_exit;
}

int32_t _initterm_e = 0x184d8;

int32_t fun_4111fe(int32_t a1, int32_t a2) {
    goto _initterm_e;
}

int32_t _initterm = 0x184cc;

void fun_4110b9(int32_t a1, int32_t a2) {
    goto _initterm;
}

struct s2 {
    int32_t f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t fc;
};

struct s2* g0;

struct s3 {
    uint16_t f0;
    signed char[58] pad60;
    int32_t f3c;
};

int32_t fun_411104(struct s3* a1);

struct s4 {
    signed char[8] pad8;
    int32_t f8;
    uint32_t fc;
    signed char[20] pad36;
    uint32_t f24;
};

struct s5 {
    signed char[60] pad60;
    int32_t f3c;
};

struct s4* fun_4110e1(struct s5* a1, uint32_t a2);

uint32_t fun_41119f(int32_t a1) {
    struct s2* eax2;
    int32_t eax3;
    struct s4* eax4;
    uint32_t edx5;
    uint32_t edx6;
    uint32_t eax7;

    eax2 = g0;
    g0 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16);
    eax3 = fun_411104(0x400000);
    if (eax3) {
        eax4 = fun_4110e1(0x400000, a1 - 0x400000);
        if (eax4) {
            edx5 = eax4->f24 & 0x80000000;
            edx6 = -edx5;
            eax7 = edx6 - (edx6 + reinterpret_cast<uint1_t>(edx6 < edx6 + reinterpret_cast<uint1_t>(!!edx5))) + 1;
        } else {
            eax7 = 0;
        }
    } else {
        eax7 = 0;
    }
    g0 = eax2;
    return eax7;
}

int32_t _crt_debugger_hook = 0x184e6;

void fun_4110ff(int32_t a1, uint32_t a2, int32_t a3, uint32_t a4, int32_t a5) {
    goto _crt_debugger_hook;
}

int32_t RaiseException = 0x1863a;

int32_t fun_4122d0(int32_t a1) {
    struct s2* eax2;

    eax2 = g0;
    g0 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16);
    RaiseException();
    g0 = eax2;
    return 0;
}

void* fun_41103c(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4);

int32_t fun_411203(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4);

int32_t MultiByteToWideChar = 0x18670;

int32_t fun_412680(struct s0* a1, int32_t a2, struct s0* a3, void* a4);

int32_t IsDebuggerPresent = 0x18626;

int32_t DebugBreak = 0x1864c;

uint32_t* fun_411190(uint32_t a1, int16_t* a2, int32_t a3, uint32_t* a4, void* a5, int32_t a6);

int32_t WideCharToMultiByte = 0x1865a;

struct s0* fun_4123f0(struct s0* a1, int32_t a2, struct s0* a3, void* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, void* a10) {
    void* ebp11;
    uint32_t eax12;
    int32_t v13;
    struct s0* edi14;
    struct s0* esi15;
    struct s0* ebx16;
    void* eax17;
    int32_t eax18;
    int32_t esi19;
    uint32_t eax20;
    int32_t eax21;
    void* v22;
    int32_t eax23;
    signed char al24;
    int32_t eax25;
    int32_t eax26;
    int32_t v27;
    struct s0* eax28;
    int32_t eax29;
    int32_t edi30;
    void* v31;
    void* v32;
    void* ebx33;
    int32_t eax34;
    void* v35;
    void* v36;
    void* esi37;
    int32_t eax38;
    int32_t eax39;

    ebp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax12 = g417000;
    v13 = 0;
    eax17 = fun_41103c(a1, edi14, esi15, ebx16);
    if (!eax17) {
        eax18 = fun_411203(a1, edi14, esi15, ebx16);
        v13 = eax18;
    }
    esi19 = MultiByteToWideChar;
    eax20 = reinterpret_cast<uint32_t>(esi19());
    if (eax20 >= 0x200 || (eax21 = reinterpret_cast<int32_t>(esi19(0xfde9, 0, a4, 0xff, reinterpret_cast<uint32_t>(ebp11) - 0xe2c, eax20)), eax21 == 0)) {
        v22 = reinterpret_cast<void*>("R");
    } else {
        v22 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp11) - 0xe2c);
    }
    eax23 = fun_4122d0(0x1002);
    if (!eax23) {
        al24 = 1;
    } else {
        eax25 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(a3) * 4 + 0x415b7c);
        eax26 = fun_412680(a3, eax25, a1, v22);
        if (eax26) {
            addr_4125e6_9:
            eax28 = fun_411023(eax12 ^ reinterpret_cast<uint32_t>(ebp11) ^ reinterpret_cast<uint32_t>(ebp11), 0xff, 0, 0, edi14, esi15, ebx16, a4, v13, v22, eax17, 0x30a, 0, 0, 0xfde9, 0, v27, 0xff, 0, 0);
            return eax28;
        } else {
            al24 = 0;
        }
    }
    if (!v13 && !eax17 || al24 && (eax29 = reinterpret_cast<int32_t>(IsDebuggerPresent()), !!eax29)) {
        addr_4125e0_12:
        DebugBreak();
        goto addr_4125e6_9;
    } else {
        fun_411190(reinterpret_cast<uint32_t>(a1) - 5, reinterpret_cast<uint32_t>(ebp11) - 0x20c, 0x104, reinterpret_cast<uint32_t>(ebp11) - 0xe30, reinterpret_cast<uint32_t>(ebp11) - 0x414, 0x104);
        if (!eax17) {
            edi30 = WideCharToMultiByte;
            v31 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp11) - 0xa2c);
            v32 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp11) - 0x20c);
            ebx33 = reinterpret_cast<void*>("Unknown Filename");
            eax34 = reinterpret_cast<int32_t>(edi30(0xfde9, 0, v32, 0xff, v31, 0x30a, 0, 0));
            if (eax34) {
                ebx33 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp11) - 0xa2c);
            }
            v35 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp11) - 0x720);
            v36 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp11) - 0x414);
            esi37 = reinterpret_cast<void*>("Unknown Module Name");
            eax38 = reinterpret_cast<int32_t>(edi30(0xfde9, 0, v36, 0xff, v35, 0x30a, 0, 0, 0xfde9, 0, v32, 0xff, v31, 0x30a, 0, 0));
            if (eax38) {
                esi37 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp11) - 0x720);
            }
            eax39 = reinterpret_cast<int32_t>(v13(a2, ebx33, eax17, esi37, "Run-Time Check Failure #%d - %s", a3, a4, 0xfde9, 0, v36, 0xff, v35, 0x30a, 0, 0, 0xfde9, 0, v32, 0xff, v31, 0x30a, 0, 0));
        } else {
            eax39 = reinterpret_cast<int32_t>(eax17(a2, reinterpret_cast<uint32_t>(ebp11) - 0x20c, eax17, reinterpret_cast<uint32_t>(ebp11) - 0x414, "R", a3, v22));
        }
        if (eax39 != 1) 
            goto addr_4125e6_9; else 
            goto addr_4125e0_12;
    }
}

int32_t fun_411203(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4) {
    int32_t eax5;

    eax5 = g417538;
    return eax5;
}

int32_t fun_412680(struct s0* a1, int32_t a2, struct s0* a3, void* a4) {
    struct s2* eax5;

    eax5 = g0;
    g0 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16);
    RaiseException();
    g0 = eax5;
    return 0;
}

int32_t VirtualQuery = 0x18764;

int32_t GetModuleFileNameW = 0x1874e;

struct s6 {
    int16_t f0;
    signed char[58] pad60;
    int32_t f3c;
};

struct s7 {
    int32_t f0;
    signed char[2] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f14;
};

signed char g417558;

struct s0* g417554;

struct s0* fun_413770();

struct s8 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s9 {
    signed char[40] pad40;
    int32_t f28;
};

struct s10 {
    signed char[32] pad32;
    int32_t f20;
};

struct s11 {
    signed char[56] pad56;
    int32_t f38;
};

struct s12 {
    signed char[104] pad104;
    int32_t f68;
};

struct s13 {
    signed char[64] pad64;
    int32_t f40;
};

int32_t GetProcessHeap = 0x1873c;

int32_t HeapFree = 0x18724;

int32_t HeapAlloc = 0x18730;

struct s14 {
    signed char[112] pad112;
    int32_t f70;
};

uint32_t* fun_411190(uint32_t a1, int16_t* a2, int32_t a3, uint32_t* a4, void* a5, int32_t a6) {
    void* ebp7;
    int32_t eax8;
    int32_t eax9;
    struct s6* v10;
    struct s7* eax11;
    uint32_t ecx12;
    uint32_t esi13;
    uint32_t edi14;
    uint32_t ebx15;
    uint32_t* eax16;
    uint32_t ebx17;
    int1_t zf18;
    int1_t zf19;
    struct s0* eax20;
    uint32_t* eax21;
    uint32_t* esi22;
    int32_t eax23;
    int32_t edx24;
    int32_t** v25;
    uint32_t* v26;
    int32_t eax27;
    int32_t eax28;
    struct s8** v29;
    void* v30;
    int32_t eax31;
    int32_t edx32;
    struct s9** v33;
    int32_t edx34;
    struct s10** v35;
    void* v36;
    uint32_t v37;
    uint32_t v38;
    int32_t eax39;
    int32_t edx40;
    struct s11** v41;
    int32_t eax42;
    struct s12** v43;
    void* v44;
    signed char al45;
    int32_t edx46;
    struct s13** v47;
    struct s2* edx48;
    int32_t eax49;
    int32_t eax50;
    uint32_t* v51;
    void* v52;
    void* eax53;
    void* v54;
    struct s2* edx55;
    int32_t edx56;
    void* v57;
    void* v58;
    signed char al59;
    uint32_t v60;
    int32_t v61;
    struct s2* edx62;
    int32_t eax63;
    int32_t eax64;
    uint32_t v65;
    uint32_t v66;
    int32_t eax67;
    int32_t v68;
    uint32_t* eax69;
    struct s2* eax70;
    int32_t edx71;
    struct s2* edx72;
    int32_t edx73;
    uint32_t* v74;
    void* v75;
    void* v76;
    signed char al77;
    uint32_t edi78;
    int32_t v79;
    uint32_t eax80;
    uint32_t v81;
    uint32_t ecx82;
    uint32_t eax83;
    int32_t edx84;
    struct s14** v85;
    int32_t v86;
    signed char al87;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    *a4 = 0;
    *a2 = 0;
    eax8 = reinterpret_cast<int32_t>(VirtualQuery());
    if (!eax8 || ((eax9 = reinterpret_cast<int32_t>(GetModuleFileNameW()), eax9 == 0) || (v10->f0 != 0x5a4d || (reinterpret_cast<uint1_t>(v10->f3c < 0) | reinterpret_cast<uint1_t>(v10->f3c == 0) || (eax11 = reinterpret_cast<struct s7*>(v10->f3c + reinterpret_cast<int32_t>(v10)), eax11->f0 != 0x4550))))) {
        return 0;
    }
    ecx12 = eax11->f6;
    esi13 = a1 - 1 - reinterpret_cast<int32_t>(v10);
    edi14 = 0;
    ebx15 = 0;
    if (ecx12) {
        eax16 = reinterpret_cast<uint32_t*>(eax11->f14 + reinterpret_cast<int32_t>(eax11) + 24 + 12);
        do {
            if (esi13 < *eax16) 
                continue;
            edi14 = esi13 - *eax16;
            if (esi13 < *(eax16 - 1)) 
                break;
            ++ebx15;
            eax16 = eax16 + 10;
        } while (ebx15 < ecx12);
    }
    if (ebx15 == ecx12) 
        goto addr_4134fb_10;
    ebx17 = ebx15 + 1;
    zf18 = g417558 == 0;
    if (zf18) {
        zf19 = g417554 == 0;
        if (!zf19) 
            goto addr_4134fb_10;
        eax20 = fun_413770();
        g417554 = eax20;
        if (!eax20) 
            goto addr_4134fb_10;
        g417558 = 1;
    }
    eax21 = reinterpret_cast<uint32_t*>(GetProcAddress());
    esi22 = reinterpret_cast<uint32_t*>(0);
    if (!eax21 || (eax23 = reinterpret_cast<int32_t>(eax21(a5, 0, 0, 0, reinterpret_cast<int32_t>(ebp7) - 40, 0, 0, reinterpret_cast<int32_t>(ebp7) - 16)), !eax23)) {
        addr_4134fb_10:
        return 0;
    } else {
        edx24 = **v25;
        v26 = reinterpret_cast<uint32_t*>(0);
        eax27 = reinterpret_cast<int32_t>(edx24());
        if (eax27 != 0x131a5b5 || (eax28 = (*v29)->f1c, v30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp7) - 24), eax31 = reinterpret_cast<int32_t>(eax28(0, "r", v30)), eax31 == 0)) {
            addr_4136ac_18:
            edx32 = (*v33)->f28;
            edx32();
            return v26;
        } else {
            edx34 = (*v35)->f20;
            v36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp7) - 12);
            v37 = edi14;
            v38 = ebx17;
            eax39 = reinterpret_cast<int32_t>(edx34(v38, v37, v36, 0, 0, 0, 0, "r", v30));
            if (!eax39) {
                addr_4136a2_20:
                edx40 = (*v41)->f38;
                edx40(v38, v37, v36, 0, 0, 0, 0, "r", v30);
                goto addr_4136ac_18;
            } else {
                eax42 = (*v43)->f68;
                v44 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp7) - 4);
                al45 = reinterpret_cast<signed char>(eax42(v44, v38, v37, v36, 0, 0, 0, 0, "r", v30));
                if (!al45 || 1) {
                    addr_413698_22:
                    edx46 = (*v47)->f40;
                    edx46(v44, v38, v37, v36, 0, 0, 0, 0, "r", v30);
                    goto addr_4136a2_20;
                } else {
                    edx48 = g0;
                    eax49 = edx48->f8;
                    eax50 = reinterpret_cast<int32_t>(eax49(v44, v38, v37, v36, 0, 0, 0, 0, "r", v30));
                    if (!eax50) {
                        addr_41367f_24:
                        v51 = esi22;
                        v52 = reinterpret_cast<void*>(0);
                        eax53 = reinterpret_cast<void*>(GetProcessHeap(0, v51, v44, v38, v37, v36, 0, 0, 0, 0, "r", v30));
                        v54 = eax53;
                        HeapFree(v54, 0, v51, v44, v38, v37, v36, 0, 0, 0, 0, "r", v30);
                        goto addr_41368f_25;
                    } else {
                        do {
                            edx55 = g0;
                            edx56 = edx55->fc;
                            v51 = reinterpret_cast<uint32_t*>(0);
                            v52 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp7) - 8);
                            v54 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp7) - 32);
                            v57 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp7) + 8);
                            v58 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp7) - 20);
                            al59 = reinterpret_cast<signed char>(edx56(0, v58, v57, v54, v52, 0, v44, v38, v37, v36, 0, 0, 0, 0, "r", v30));
                            if (!al59) 
                                goto addr_41368f_25;
                            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&a1)) != ebx17) 
                                continue;
                            if (v60 > edi14) 
                                continue;
                            if (edi14 < v60 + v61) 
                                break;
                            edx62 = g0;
                            eax63 = edx62->f8;
                            eax64 = reinterpret_cast<int32_t>(eax63(0, v58, v57, v54, v52, 0, v44, v38, v37, v36, 0, 0, 0, 0, "r", v30));
                        } while (eax64);
                        goto addr_4135d1_31;
                    }
                }
            }
        }
    }
    if (!v65 || (v65 >= 0x1fffffff || (v66 = v65 * 8, eax67 = reinterpret_cast<int32_t>(GetProcessHeap(0, v66, 0, v58, v57, v54, v52, 0, v44, v38, v37, v36, 0, 0, 0, 0, "r", v30)), v68 = eax67, eax69 = reinterpret_cast<uint32_t*>(HeapAlloc(v68, 0, v66, 0, v58, v57, v54, v52, 0, v44, v38, v37, v36, 0, 0, 0, 0, "r", v30)), esi22 = eax69, esi22 == 0))) {
        addr_41368f_25:
        eax70 = g0;
        edx71 = eax70->f0;
        edx71(v54, v52, v51, v44, v38, v37, v36, 0, 0, 0, 0, "r", v30);
        goto addr_413698_22;
    } else {
        edx72 = g0;
        edx73 = edx72->fc;
        v74 = esi22;
        v75 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp7) - 8);
        v76 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp7) - 36);
        al77 = reinterpret_cast<signed char>(edx73(v76, 0, 0, 0, v75, v74, v68, 0, v66, 0, v58, v57, v54, v52, 0, v44, v38, v37, v36, 0, 0, 0, 0, "r", v30));
        if (al77 && (edi78 = edi14 - v79, edi78 >= *esi22)) {
            eax80 = 1;
            if (v81 > 1) {
                ecx82 = v81;
                do {
                    if (edi78 < esi22[eax80 * 2]) 
                        break;
                    ++eax80;
                } while (eax80 < ecx82);
            }
            eax83 = *(esi22 + eax80 * 2 - 1);
            *a4 = eax83 & 0xffffff;
            edx84 = (*v85)->f70;
            al87 = reinterpret_cast<signed char>(edx84(v86, a2, reinterpret_cast<int32_t>(ebp7) + 16, 0, 0, 0, v76, 0, 0, 0, v75, v74, v68, 0, v66, 0, v58, v57, v54, v52, 0, v44, v38, v37, v36, 0, 0, 0, 0, "r", v30));
            if (al87) {
                v26 = reinterpret_cast<uint32_t*>(1);
                goto addr_41367f_24;
            }
        }
    }
    addr_4135d1_31:
    goto addr_41367f_24;
}

void fun_412a10(unsigned char* a1, void* a2, void* a3, void* a4, void* a5, int32_t a6, int32_t a7, int32_t a8, void* a9, int32_t a10, void* a11, int32_t a12, int32_t a13, int32_t a14) {
    unsigned char* esi15;
    void* v16;
    void* eax17;
    void* v18;
    void* edi19;
    void* ecx20;
    unsigned char bl21;

    esi15 = a1;
    v16 = a2;
    eax17 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a3) - reinterpret_cast<uint32_t>(esi15));
    v18 = eax17;
    edi19 = reinterpret_cast<void*>(0);
    while (1) {
        ecx20 = a4;
        if (reinterpret_cast<uint32_t>(ecx20) >= 16) {
            ecx20 = reinterpret_cast<void*>(16);
        }
        if (reinterpret_cast<uint32_t>(edi19) >= reinterpret_cast<uint32_t>(ecx20)) 
            break;
        bl21 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax17) + reinterpret_cast<uint32_t>(esi15));
        g417534(v16, "%.2X ", static_cast<uint32_t>(bl21));
        v16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v16) + 3);
        eax17 = v18;
        *esi15 = bl21;
        edi19 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi19) + 1);
        ++esi15;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi19) + reinterpret_cast<uint32_t>(a1)) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi19) + (reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(edi19) * 2)) = 0;
    return;
}

int32_t g417278;

uint32_t g417274;

int32_t g417270;

int32_t g41726c;

int32_t g417268;

int32_t g417264;

int16_t g417290;

int16_t g417284;

int16_t g417260;

int16_t g41725c;

int16_t g417258;

int16_t g417254;

uint32_t g417288;

int32_t g41727c;

int32_t g417280;

void* g41728c;

int32_t g4171c8 = 0;

int32_t g41717c = 0;

int32_t g417170 = 0;

int32_t g417174 = 0;

int32_t g417004 = 0x44bf19b1;

int32_t g4171c0 = 0;

int32_t SetUnhandledExceptionFilter = 0x18608;

int32_t UnhandledExceptionFilter = 0x185ec;

int32_t GetCurrentProcess = 0x185d8;

int32_t TerminateProcess = 0x185c4;

struct s0* fun_411023(uint32_t ecx, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, void* a8, int32_t a9, void* a10, void* a11, int32_t a12, void* a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, void* a18, int32_t a19, int32_t a20) {
    uint32_t eflags21;
    int1_t zf22;
    struct s0* eax23;
    int32_t* esp24;
    void* esp25;
    int32_t eax26;
    int32_t edx27;
    int32_t ebx28;
    int32_t esi29;
    int32_t edi30;
    int16_t ss31;
    int16_t cs32;
    int16_t ds33;
    int16_t es34;
    int16_t fs35;
    int16_t gs36;
    int32_t ebp37;
    int32_t eax38;
    uint32_t ecx39;
    int32_t edx40;
    int32_t eax41;
    uint32_t v42;
    int32_t v43;
    int1_t zf44;
    int32_t eax45;
    struct s0* eax46;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags21) + 1) = 0;
    zf22 = ecx == g417000;
    if (zf22) {
        return eax23;
    }
    esp24 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    *reinterpret_cast<int1_t*>(&eflags21) = reinterpret_cast<uint32_t>(esp24) < 0x328;
    esp25 = reinterpret_cast<void*>(esp24 - 0xca);
    *reinterpret_cast<int1_t*>(&eflags21) = __intrinsic();
    *reinterpret_cast<int1_t*>(&eflags21) = esp25 == 0;
    *reinterpret_cast<int1_t*>(&eflags21) = reinterpret_cast<int32_t>(esp25) < reinterpret_cast<int32_t>(0);
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags21) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&eflags21) = __intrinsic();
    g417278 = eax26;
    g417274 = ecx;
    g417270 = edx27;
    g41726c = ebx28;
    g417268 = esi29;
    g417264 = edi30;
    g417290 = ss31;
    g417284 = cs32;
    g417260 = ds33;
    g41725c = es34;
    g417258 = fs35;
    g417254 = gs36;
    g417288 = eflags21 & 0xfcffff;
    g41727c = ebp37;
    g417280 = reinterpret_cast<int32_t>(__return_address());
    g41728c = reinterpret_cast<void*>(esp24 + 2);
    g4171c8 = 0x10001;
    eax38 = g417280;
    g41717c = eax38;
    g417170 = 0xc0000409;
    g417174 = 1;
    ecx39 = g417000;
    edx40 = g417004;
    eax41 = reinterpret_cast<int32_t>(IsDebuggerPresent(ecx39, edx40));
    g4171c0 = eax41;
    fun_4110ff(1, ecx39, edx40, v42, v43);
    SetUnhandledExceptionFilter(0, ecx39, edx40);
    UnhandledExceptionFilter("pqA", 0, ecx39, edx40);
    zf44 = g4171c0 == 0;
    if (zf44) 
        goto addr_41222e_7;
    addr_412238_8:
    eax45 = reinterpret_cast<int32_t>(GetCurrentProcess(0xc0000409, "pqA", 0, ecx39, edx40));
    eax46 = reinterpret_cast<struct s0*>(TerminateProcess(eax45, 0xc0000409, "pqA", 0, ecx39, edx40));
    return eax46;
    addr_41222e_7:
    fun_4110ff(1, "pqA", 0, ecx39, edx40);
    goto addr_412238_8;
}

/*
 * ?terminate@@YAXXZ
 * void __cdecl terminate(void)
 */
int32_t terminate_YAXXZ = 0x184fc;

void fun_4110a5() {
    goto terminate_YAXXZ;
}

int32_t g41755c;

/* (image base) */
struct s0* image_base_ = reinterpret_cast<struct s0*>(0x416144);

int32_t FreeLibrary = 0x18774;

struct s0* fun_413770() {
    void* ebp1;
    uint32_t eax2;
    uint32_t v3;
    int1_t zf4;
    struct s0* eax5;
    int32_t esi6;
    int32_t eax7;
    int32_t eax8;
    int32_t ebx9;
    struct s0* eax10;
    struct s0* v11;
    int32_t eax12;
    int32_t v13;
    int32_t eax14;
    void* v15;
    int32_t eax16;
    void* v17;
    int32_t v18;
    void* v19;
    void* v20;
    void* v21;
    int32_t eax22;
    int32_t v23;
    struct s0* v24;
    struct s0* v25;
    struct s0* v26;
    struct s0* v27;
    struct s0* v28;
    int32_t eax29;
    void* ecx30;
    void* v31;
    struct s0* esi32;
    void* eax33;
    void* ecx34;
    struct s0* eax35;
    struct s0* ebx36;
    struct s0* esi37;
    struct s0* v38;
    void* v39;
    int32_t v40;
    void* v41;
    void* v42;
    int32_t v43;
    void* v44;
    int32_t v45;
    int32_t v46;
    int32_t v47;
    int32_t v48;
    void* v49;
    int32_t v50;
    int32_t v51;
    struct s0* eax52;
    struct s0* v53;
    struct s0* v54;
    struct s0* v55;
    struct s0* v56;
    void* v57;
    int32_t v58;
    void* v59;
    void* v60;
    int32_t v61;
    void* v62;
    int32_t v63;
    int32_t v64;
    int32_t v65;
    int32_t v66;
    void* v67;
    int32_t v68;
    int32_t v69;
    struct s0* eax70;
    struct s0* v71;
    struct s0* v72;
    struct s0* v73;
    struct s0* v74;
    void* v75;
    int32_t v76;
    void* v77;
    void* v78;
    int32_t v79;
    void* v80;
    int32_t v81;
    int32_t v82;
    int32_t v83;
    int32_t v84;
    void* v85;
    int32_t v86;
    int32_t v87;
    struct s0* eax88;
    struct s0* v89;
    struct s0* v90;
    struct s0* v91;
    struct s0* v92;
    struct s0* v93;
    struct s0* v94;
    void* v95;
    int32_t v96;
    void* v97;
    void* v98;
    int32_t v99;
    void* v100;
    int32_t v101;
    int32_t v102;
    int32_t v103;
    int32_t v104;
    void* v105;
    int32_t v106;
    int32_t v107;
    struct s0* eax108;

    ebp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax2 = g417000;
    v3 = eax2 ^ reinterpret_cast<uint32_t>(ebp1);
    zf4 = g41755c == 0;
    if (zf4) {
        eax5 = image_base_;
        esi6 = LoadLibraryA;
        g41755c = 1;
        eax7 = reinterpret_cast<int32_t>(esi6());
        if (!eax7) {
            eax8 = reinterpret_cast<int32_t>(esi6());
            if (eax8) {
                ebx9 = GetProcAddress;
                eax10 = reinterpret_cast<struct s0*>(ebx9());
                v11 = eax10;
                if (eax10) {
                    eax12 = reinterpret_cast<int32_t>(ebx9());
                    if (eax12 && (v13 = eax8, eax14 = reinterpret_cast<int32_t>(ebx9(v13, "RegCloseKey")), !!eax14)) {
                        v15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp1) - 0x110);
                        eax16 = reinterpret_cast<int32_t>(v11(0x80000002, "SOFTWARE\\Microsoft\\VisualStudio\\9.0\\Setup\\VS", 0, 1, v15, v13, "RegCloseKey"));
                        if (eax16 || ((v17 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp1) - 0x10c), v18 = eax16, v19 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp1) - 0x118), v20 = v21, eax22 = reinterpret_cast<int32_t>(eax12(v20, "EnvironmentDirectory", 0, v19, v18, v17, 0x80000002, "SOFTWARE\\Microsoft\\VisualStudio\\9.0\\Setup\\VS", 0, 1, v15, v13, "RegCloseKey")), !!eax22) || (reinterpret_cast<uint32_t>(0x7fffffff - v23) < 13 || reinterpret_cast<uint32_t>(v23 + 13) >= 0x104))) {
                            FreeLibrary(eax8, 0x80000002, "SOFTWARE\\Microsoft\\VisualStudio\\9.0\\Setup\\VS", 0, 1, v15, v13, "RegCloseKey");
                        } else {
                            v24 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebp1) - 0x10c);
                            v25 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebp1) - 0x108);
                            v26 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebp1) - 0x118);
                            v27 = v28;
                            eax29 = reinterpret_cast<int32_t>(eax12(v27, "EnvironmentDirectory", 0, v26, v25, v24, v20, "EnvironmentDirectory", 0, v19, v18, v17, 0x80000002, "SOFTWARE\\Microsoft\\VisualStudio\\9.0\\Setup\\VS", 0, 1, v15, v13, "RegCloseKey"));
                            eax14();
                            FreeLibrary();
                            if (!eax29) {
                                ecx30 = v31;
                                if (*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp1) + reinterpret_cast<int32_t>(ecx30) - 0x10a) == 92) {
                                    ecx30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx30) - 1);
                                } else {
                                    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp1) + reinterpret_cast<int32_t>(ecx30) - 0x109) = 92;
                                }
                                esi32 = image_base_;
                                eax33 = reinterpret_cast<void*>(0);
                                ecx34 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp1) + reinterpret_cast<int32_t>(ecx30) - 0x108);
                                do {
                                    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx34) + reinterpret_cast<uint32_t>(eax33)) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi32) + reinterpret_cast<uint32_t>(eax33));
                                    eax33 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax33) + 1);
                                } while (reinterpret_cast<int32_t>(eax33) <= reinterpret_cast<int32_t>(11));
                                LoadLibraryA();
                                eax35 = fun_411023(v3 ^ reinterpret_cast<uint32_t>(ebp1), v27, "EnvironmentDirectory", 0, v26, v25, v24, v20, "EnvironmentDirectory", 0, v19, v18, v17, 0x80000002, "SOFTWARE\\Microsoft\\VisualStudio\\9.0\\Setup\\VS", 0, 1, v15, v13, "RegCloseKey");
                                return eax35;
                            }
                        }
                    }
                } else {
                    eax52 = fun_411023(v3 ^ reinterpret_cast<uint32_t>(ebp1), ebx36, "ADVAPI32.DLL", eax5, esi37, v38, v11, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51);
                    return eax52;
                }
            } else {
                eax70 = fun_411023(v3 ^ reinterpret_cast<uint32_t>(ebp1), eax5, esi37, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69);
                return eax70;
            }
        }
        eax88 = fun_411023(v3 ^ reinterpret_cast<uint32_t>(ebp1), esi37, v71, v11, v72, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87);
        return eax88;
    } else {
        eax108 = fun_411023(v3 ^ reinterpret_cast<uint32_t>(ebp1), v89, v90, v91, v92, v93, v94, v95, v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107);
        return eax108;
    }
}

int32_t _controlfp_s = 0x18510;

int32_t fun_41117c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    goto _controlfp_s;
}

void fun_41118b(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);

void fun_41112c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    if (a1) {
        fun_41118b(a2, a3, a4, a5, a6);
    }
    return;
}

void* fun_41116d(int32_t a1, int32_t* a2, int32_t a3) {
    int32_t ecx4;
    int32_t v5;
    int32_t v6;
    void* eax7;

    ecx4 = 54;
    while (ecx4) {
        --ecx4;
    }
    v5 = 1;
    while (v5 < a1) {
        v6 = a2[v5];
        fun_411163(v6);
        ++v5;
    }
    eax7 = fun_411168();
    return eax7;
}

int32_t strlen = 0x18368;

void* fun_4110be(void* a1) {
    goto strlen;
}

int32_t strcpy = 0x1835e;

void fun_4110c8(uint32_t a1, int32_t a2) {
    goto strcpy;
}

struct s15 {
    int32_t f0;
    int32_t f4;
};

void fun_411096(void* ecx) {
    struct s0* v2;
    int32_t edi3;
    struct s15* esi4;
    struct s15* edx5;
    int1_t less_or_equal6;
    void* ebx7;
    int32_t v8;
    signed char* v9;
    int32_t eax10;
    int1_t less11;

    v2 = reinterpret_cast<struct s0*>(__return_address());
    edi3 = 0;
    esi4 = edx5;
    less_or_equal6 = esi4->f0 <= 0;
    ebx7 = ecx;
    v8 = 0;
    if (!less_or_equal6) {
        do {
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(esi4->f4 + edi3)) + reinterpret_cast<uint32_t>(ebx7) - 4) != 0xcccccccc || *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(esi4->f4 + edi3 + 4)) + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(esi4->f4 + edi3)) + reinterpret_cast<uint32_t>(ebx7)) != 0xcccccccc) {
                v9 = *reinterpret_cast<signed char**>(esi4->f4 + edi3 + 8);
                fun_4110f0(v2, v9);
            }
            eax10 = v8 + 1;
            edi3 = edi3 + 12;
            less11 = eax10 < esi4->f0;
            v8 = eax10;
        } while (less11);
    }
    return;
}

int32_t sprintf = 0x1837c;

int32_t printf = 0x18354;

void* fun_4110c3(void* a1, uint32_t a2, void* a3) {
    void* ebp4;
    int32_t ecx5;
    uint32_t eax6;
    uint32_t v7;
    void* v8;
    uint32_t v9;
    void* eax10;
    struct s0* v11;
    void* eax12;
    void* v13;
    void* v14;
    struct s0* v15;
    struct s0* v16;
    struct s0* v17;
    struct s0* v18;
    struct s0* v19;
    void* v20;
    int32_t v21;
    void* v22;
    void* v23;
    int32_t v24;
    void* v25;
    int32_t v26;
    int32_t v27;
    int32_t v28;
    int32_t v29;
    void* v30;
    int32_t v31;
    int32_t v32;
    void* eax33;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ecx5 = 78;
    while (ecx5) {
        --ecx5;
    }
    eax6 = g417000;
    v7 = eax6 ^ reinterpret_cast<uint32_t>(ebp4);
    sprintf(reinterpret_cast<uint32_t>(ebp4) - 88, "%08lX:", a2);
    fun_411168();
    if (reinterpret_cast<int32_t>(a3) > reinterpret_cast<int32_t>(16)) {
        a3 = reinterpret_cast<void*>(16);
    }
    v8 = reinterpret_cast<void*>(0);
    while (reinterpret_cast<int32_t>(v8) < reinterpret_cast<int32_t>(a3)) {
        v9 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(a1) + reinterpret_cast<uint32_t>(v8));
        sprintf(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<uint32_t>(v8) * 3 - 79, " %02lX", v9);
        fun_411168();
        v8 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v8) + 1);
    }
    while (1) {
        eax10 = v8;
        v8 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v8) + 1);
        if (reinterpret_cast<int32_t>(eax10) >= reinterpret_cast<int32_t>(16)) {
            v11 = reinterpret_cast<struct s0*>(0);
        } else {
            v11 = reinterpret_cast<struct s0*>(1);
        }
        if (!v11) 
            break;
        fun_4110aa(reinterpret_cast<uint32_t>(ebp4) - 88, "   ");
    }
    eax12 = fun_4110be(reinterpret_cast<uint32_t>(ebp4) - 88);
    fun_4110c8(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<int32_t>(eax12) - 88, "  |");
    v13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax12) + 3);
    v14 = reinterpret_cast<void*>(0);
    while (reinterpret_cast<int32_t>(v14) < reinterpret_cast<int32_t>(a3)) {
        if (reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(a1) + reinterpret_cast<uint32_t>(v14)))) < reinterpret_cast<int32_t>(32) || reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(a1) + reinterpret_cast<uint32_t>(v14)))) > reinterpret_cast<int32_t>(0x7e)) {
            v11 = reinterpret_cast<struct s0*>(46);
        } else {
            v11 = reinterpret_cast<struct s0*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(a1) + reinterpret_cast<uint32_t>(v14))));
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp4) + (reinterpret_cast<int32_t>(v13) + reinterpret_cast<uint32_t>(v14)) - 88) = *reinterpret_cast<signed char*>(&v11);
        v14 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v14) + 1);
    }
    while (reinterpret_cast<int32_t>(v14) < reinterpret_cast<int32_t>(16)) {
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp4) + (reinterpret_cast<int32_t>(v13) + reinterpret_cast<uint32_t>(v14)) - 88) = 32;
        v14 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v14) + 1);
    }
    fun_4110c8(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<int32_t>(v13) - 88 + reinterpret_cast<uint32_t>(v14), "|");
    printf("%s\n", reinterpret_cast<uint32_t>(ebp4) - 88);
    fun_411168();
    fun_411096(ebp4);
    fun_411023(v7 ^ reinterpret_cast<uint32_t>(ebp4), v11, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32);
    eax33 = fun_411168();
    return eax33;
}

struct s0* fun_4111e0(struct s0* a1, struct s0* a2, struct s0* a3, void* a4) {
    struct s0* eax5;
    struct s0* ebp6;
    struct s0* eax7;
    int32_t ecx8;
    void* v9;

    eax5 = a2;
    if (reinterpret_cast<uint32_t>(eax5) > 4) {
        eax7 = fun_4123f0(a1, 1, 5, "Unknown Runtime Check Error\n\r", ebp6, __return_address(), a1, a2, a3, a4);
        return eax7;
    } else {
        ecx8 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax5) * 4 + 0x417008);
        if (ecx8 != -1) {
            v9 = *reinterpret_cast<void**>("XZA" + reinterpret_cast<uint32_t>(eax5) * 4);
            eax5 = fun_4123f0(a1, ecx8, eax5, v9, ebp6, __return_address(), a1, a2, a3, a4);
        }
        return eax5;
    }
}

int32_t g417584;

int32_t _decode_pointer = 0x1855c;

void fun_41108c(int32_t a1);

int32_t g417574;

int32_t _encode_pointer = 0x18430;

int32_t fun_4111f4(int32_t a1, void* a2, void* a3);

void fun_412f55();

int32_t _onexit = 0x18552;

int32_t fun_411118(int32_t a1) {
    void* ebp2;
    struct s2* eax3;
    int32_t eax4;
    int32_t eax5;
    int32_t edx6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    void* v10;
    void* v11;
    int32_t eax12;
    int32_t eax13;
    int32_t eax14;
    int32_t eax15;
    int32_t eax16;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax3 = g0;
    g0 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(ebp2) - 16);
    eax4 = g417584;
    eax5 = reinterpret_cast<int32_t>(_decode_pointer(eax4));
    if (eax5 != -1) {
        fun_41108c(8);
        edx6 = g417584;
        eax7 = reinterpret_cast<int32_t>(_decode_pointer(edx6));
        eax8 = g417574;
        eax9 = reinterpret_cast<int32_t>(_decode_pointer(eax8));
        v10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp2) - 36);
        v11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp2) - 28);
        eax12 = reinterpret_cast<int32_t>(_encode_pointer(a1, v11, v10));
        eax13 = fun_4111f4(eax12, v11, v10);
        eax14 = reinterpret_cast<int32_t>(_encode_pointer(eax7));
        g417584 = eax14;
        eax15 = reinterpret_cast<int32_t>(_encode_pointer(eax9));
        g417574 = eax15;
        fun_412f55();
        eax16 = eax13;
    } else {
        eax16 = reinterpret_cast<int32_t>(_onexit(a1));
    }
    g0 = eax3;
    return eax16;
}

int32_t _XcptFilter = 0x1847a;

void fun_4111ae(int32_t a1, int32_t a2) {
    goto _XcptFilter;
}

int32_t GetSystemTimeAsFileTime = 0x1870a;

int32_t GetCurrentProcessId = 0x186f4;

int32_t GetCurrentThreadId = 0x186de;

int32_t GetTickCount = 0x186ce;

int32_t QueryPerformanceCounter = 0x186b4;

void fun_411055() {
    void* ebp1;
    int1_t zf2;
    uint32_t eax3;
    void* v4;
    uint32_t eax5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t ecx11;

    ebp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    zf2 = g417000 == 0xbb40e64e;
    if (zf2 || (eax3 = g417000, (eax3 & 0xffff0000) == 0)) {
        v4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp1) - 8);
        GetSystemTimeAsFileTime(v4);
        eax5 = reinterpret_cast<uint32_t>(GetCurrentProcessId(v4));
        eax6 = reinterpret_cast<uint32_t>(GetCurrentThreadId(v4));
        eax7 = reinterpret_cast<uint32_t>(GetTickCount(v4));
        QueryPerformanceCounter(reinterpret_cast<int32_t>(ebp1) - 24, v4);
        v8 = eax7 ^ (eax6 ^ eax5) ^ v9 ^ v10;
        if (v8 != 0xbb40e64e) {
            if (!(v8 & 0xffff0000)) {
                v8 = v8 << 16 | v8;
            }
        } else {
            v8 = 0xbb40e64f;
        }
        g417000 = v8;
        g417004 = reinterpret_cast<int32_t>(~v8);
    } else {
        ecx11 = g417000;
        g417004 = reinterpret_cast<int32_t>(~ecx11);
    }
    return;
}

struct s16 {
    signed char[4] pad4;
    int32_t f4;
};

struct s16* fun_41111d();

int32_t InterlockedCompareExchange = 0x185a6;

int32_t Sleep = 0x1859e;

int32_t g417560;

int32_t g417160 = 0;

int32_t _CrtDbgReportW = 0x184ba;

int32_t InterlockedExchange = 0x18588;

int32_t g417594;

int32_t _CrtSetCheckCount = 0x184a6;

int32_t* __initenv = reinterpret_cast<int32_t*>(0x1849a);

int32_t g417148 = 0;

int32_t* g41714c = reinterpret_cast<int32_t*>(0);

int32_t g417144 = 0;

void* g41715c = reinterpret_cast<void*>(0);

int32_t g417150 = 0;

int32_t exit = 0x18492;

int32_t _cexit = 0x18488;

void* fun_411d70() {
    struct s2* eax1;
    struct s2* v2;
    struct s16* eax3;
    int32_t v4;
    int32_t v5;
    int32_t eax6;
    int1_t zf7;
    int1_t zf8;
    int32_t eax9;
    void* eax10;
    int1_t zf11;
    int1_t zf12;
    int32_t eax13;
    int1_t zf14;
    uint32_t eax15;
    int32_t* ecx16;
    int32_t edx17;
    int32_t eax18;
    int32_t* ecx19;
    int32_t edx20;
    void* eax21;
    int1_t zf22;
    void* eax23;
    int1_t zf24;

    eax1 = g0;
    v2 = eax1;
    g0 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16);
    eax3 = fun_41111d();
    v4 = eax3->f4;
    v5 = 0;
    while (eax6 = reinterpret_cast<int32_t>(InterlockedCompareExchange()), !!eax6) {
        if (eax6 == v4) 
            goto addr_411de7_4;
        Sleep(0x3e8);
    }
    addr_411dfd_6:
    zf7 = g417560 == 1;
    if (!zf7) {
        zf8 = g417560 == 0;
        if (!zf8) {
            g417160 = 1;
        } else {
            g417560 = 1;
            eax9 = fun_4111fe(0x41530c, 0x415618);
            if (eax9) {
                eax10 = reinterpret_cast<void*>(0xff);
                goto addr_411fa4_12;
            }
        }
    } else {
        fun_4111a9(31);
    }
    zf11 = g417560 == 1;
    if (zf11) {
        fun_4110b9(0x415000, 0x415208);
        g417560 = 2;
    }
    zf12 = g417560 == 2;
    if (!zf12 && (eax13 = reinterpret_cast<int32_t>(_CrtDbgReportW(2, "f", 0x1f4, 0, "_")), eax13 == 1)) {
    }
    if (!v5) {
        InterlockedExchange(0x417570, 0);
    }
    zf14 = g417594 == 0;
    if (!zf14 && (eax15 = fun_41119f(0x417594), !!eax15)) {
        g417594(0, 2, 0);
    }
    _CrtSetCheckCount(1);
    ecx16 = __initenv;
    edx17 = g417148;
    *ecx16 = edx17;
    eax18 = g417148;
    ecx19 = g41714c;
    edx20 = g417144;
    eax21 = fun_41116d(edx20, ecx19, eax18);
    g41715c = eax21;
    zf22 = g417150 == 0;
    if (zf22) {
        eax23 = g41715c;
        exit(eax23);
    }
    zf24 = g417160 == 0;
    if (zf24) {
        _cexit();
    }
    eax10 = g41715c;
    addr_411fa4_12:
    g0 = v2;
    return eax10;
    addr_411de7_4:
    v5 = 1;
    goto addr_411dfd_6;
}

struct s17 {
    int32_t f0;
    signed char[20] pad24;
    uint16_t f18;
};

int32_t fun_411104(struct s3* a1) {
    struct s17* v2;
    int32_t eax3;

    if (static_cast<uint32_t>(a1->f0) == 0x5a4d) {
        v2 = reinterpret_cast<struct s17*>(reinterpret_cast<int32_t>(a1) + a1->f3c);
        if (v2->f0 == 0x4550) {
            if (static_cast<uint32_t>(v2->f18) == 0x10b) {
                eax3 = 1;
            } else {
                eax3 = 0;
            }
        } else {
            eax3 = 0;
        }
    } else {
        eax3 = 0;
    }
    return eax3;
}

void* fun_41103c(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4) {
    void* eax5;

    eax5 = g41753c;
    return eax5;
}

int32_t _invoke_watson = 0x18520;

void fun_41118b(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    goto _invoke_watson;
}

int32_t _lock = 0x1854a;

void fun_41108c(int32_t a1) {
    goto _lock;
}

int32_t __dllonexit = 0x1853c;

int32_t fun_4111f4(int32_t a1, void* a2, void* a3) {
    goto __dllonexit;
}

void fun_41114f(int32_t a1);

void fun_412f55() {
    fun_41114f(8);
    return;
}

struct s18 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f14;
};

struct s4* fun_4110e1(struct s5* a1, uint32_t a2) {
    struct s18* v3;
    uint32_t v4;
    struct s4* v5;
    struct s4* eax6;

    v3 = reinterpret_cast<struct s18*>(reinterpret_cast<int32_t>(a1) + a1->f3c);
    v4 = 0;
    v5 = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(v3) + v3->f14 + 24);
    while (v4 < static_cast<uint32_t>(v3->f6)) {
        if (a2 < v5->fc) 
            goto addr_41321d_5;
        if (a2 < v5->fc + v5->f8) 
            goto addr_413218_7;
        addr_41321d_5:
        ++v4;
        ++v5;
    }
    eax6 = reinterpret_cast<struct s4*>(0);
    addr_413221_10:
    return eax6;
    addr_413218_7:
    eax6 = v5;
    goto addr_413221_10;
}

void** fun_411172() {
    void** esi1;
    void** eax2;

    esi1 = reinterpret_cast<void**>(0x4164a0);
    eax2 = reinterpret_cast<void**>(0x4164a0);
    if (!0) {
        do {
            eax2 = *reinterpret_cast<void***>(esi1);
            if (eax2) {
                eax2 = reinterpret_cast<void**>(eax2());
            }
            ++esi1;
        } while (reinterpret_cast<uint32_t>(esi1) < 0x4166a4);
    }
    return eax2;
}

struct s16* g18;

struct s16* fun_41111d() {
    struct s16* eax1;

    eax1 = g18;
    return eax1;
}

int32_t fun_411073(int32_t a1) {
    int32_t eax2;
    uint32_t eax3;

    eax2 = fun_411118(a1);
    eax3 = reinterpret_cast<uint32_t>(-eax2);
    return reinterpret_cast<int32_t>(-(eax3 - (eax3 + reinterpret_cast<uint1_t>(eax3 < eax3 + reinterpret_cast<uint1_t>(!!eax2))))) - 1;
}

int32_t _unlock = 0x18532;

void fun_41114f(int32_t a1) {
    goto _unlock;
}

int32_t _except_handler4_common = 0x1856e;

void fun_4111c7(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    goto _except_handler4_common;
}

/* (image base) */
uint16_t image_base_;

struct s19 {
    int32_t f0;
    signed char[20] pad24;
    uint16_t f18;
};

int32_t g40003c;

int32_t fun_412060() {
    uint32_t ecx1;
    struct s19* tmp32_2;
    uint32_t v3;
    int32_t ecx4;
    int32_t eax5;

    ecx1 = image_base_;
    if (ecx1 == 0x5a4d) {
        tmp32_2 = reinterpret_cast<struct s19*>(0x400000 + g40003c);
        if (tmp32_2->f0 == 0x4550) {
            v3 = tmp32_2->f18;
            if (v3 == 0x10b) {
                if (*reinterpret_cast<uint32_t*>(&tmp32_2->f18 + 46) > 14) {
                    ecx4 = 0;
                    *reinterpret_cast<unsigned char*>(&ecx4) = reinterpret_cast<uint1_t>(!!*reinterpret_cast<int32_t*>(&tmp32_2->f18 + 0x68));
                    eax5 = ecx4;
                } else {
                    eax5 = 0;
                }
            } else {
                if (v3 == 0x20b) {
                    if (*reinterpret_cast<uint32_t*>(&tmp32_2->f18 + 54) > 14) {
                        eax5 = 0;
                        *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>(!!*reinterpret_cast<int32_t*>(&tmp32_2->f18 + 0x70));
                    } else {
                        eax5 = 0;
                    }
                } else {
                    eax5 = 0;
                }
            }
        } else {
            eax5 = 0;
        }
    } else {
        eax5 = 0;
    }
    return eax5;
}

void fun_411608() {
}

void fun_41160b() {
    int32_t* eax1;
    signed char* eax2;

    eax2 = reinterpret_cast<signed char*>(*eax1(__return_address()));
    *eax2 = reinterpret_cast<signed char>(*eax2 + *reinterpret_cast<signed char*>(&eax2));
}

void fun_411617(signed char cl) {
}

struct s20 {
    signed char f0;
    signed char[822083582] pad822083583;
    signed char f30ffffff;
};

struct s20* fun_114117e8();

struct s21 {
    signed char[116] pad116;
    signed char f74;
};

struct s22 {
    signed char[117] pad117;
    signed char f75;
};

struct s23 {
    signed char[117] pad117;
    signed char f75;
};

void fun_4117e4(int32_t ecx) {
    struct s20* eax2;
    struct s21* ebx3;
    signed char bh4;
    signed char bh5;
    signed char bl6;
    signed char dh7;
    struct s22* edx8;
    struct s23* edx9;

    eax2 = fun_114117e8();
    *reinterpret_cast<signed char*>(eax2) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax2) + *reinterpret_cast<signed char*>(&eax2));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx3) + 1) = reinterpret_cast<signed char>(bh4 + bh5);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax2) + 0x30ffffff) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax2) + 0x30ffffff) + bl6);
    *reinterpret_cast<signed char*>(eax2) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax2) + *reinterpret_cast<signed char*>(&eax2));
    ebx3->f74 = reinterpret_cast<signed char>(ebx3->f74 + dh7);
    edx8->f75 = reinterpret_cast<signed char>(edx9->f75 + reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax2) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx3) + 1)));
}

struct s24 {
    signed char f0;
    signed char[3] pad4;
    struct s24* f4;
    signed char[4] pad12;
    int32_t fc;
};

void fun_411a1f(struct s24* ecx, struct s24** a2) {
    struct s24* esi3;
    int32_t edx4;
    struct s24** ebx5;
    struct s24* edi6;
    int32_t ecx7;
    int32_t edx8;
    int32_t edx9;

    esi3 = ecx;
    if (esi3 && edx4) {
        ebx5 = a2;
        if (ebx5) {
            edi6 = esi3;
            ecx7 = edx8;
            while (ecx7) {
                --ecx7;
                edi6->f0 = -52;
                edi6 = reinterpret_cast<struct s24*>(&edi6->pad4);
                esi3 = reinterpret_cast<struct s24*>(&esi3->pad4);
            }
            esi3->f4 = *ebx5;
            esi3->fc = edx9;
            *ebx5 = esi3;
        }
    }
    return;
}

signed char g417140 = 0;

void* fun_411b55() {
    int1_t zf1;
    void* eax2;
    void* eax3;

    zf1 = g417140 == 0;
    if (zf1) {
        g417140 = 1;
        eax2 = fun_411195(0, 0, 0, 1, 0);
        eax3 = fun_411113(eax2, 0, 0, 0, 1, 0);
    }
    return eax3;
}

void* fun_411bb9() {
    void* eax1;

    eax1 = fun_411195(0, 0, 0, 1, 1);
    return eax1;
}

void* fun_411d3a() {
    void* eax1;

    fun_411055();
    eax1 = fun_411d70();
    return eax1;
}

int32_t fun_41224e() {
    int32_t eax1;
    int32_t eax2;

    eax1 = reinterpret_cast<int32_t>(IsDebuggerPresent());
    if (!eax1 || (eax2 = fun_4122d0(0x1004), eax2 == 0)) {
        return 0;
    } else {
        return 1;
    }
}

void** fun_412e26() {
    void** esi1;
    void** eax2;

    esi1 = reinterpret_cast<void**>(0x4167ac);
    eax2 = reinterpret_cast<void**>(0x4167ac);
    if (!0) {
        do {
            eax2 = *reinterpret_cast<void***>(esi1);
            if (eax2) {
                eax2 = reinterpret_cast<void**>(eax2());
            }
            ++esi1;
        } while (reinterpret_cast<uint32_t>(esi1) < 0x4169b0);
    }
    return eax2;
}

int32_t __p__commode = 0x18412;

void fun_412e56() {
    goto __p__commode;
}

void fun_41100f() {
    goto fread;
}

int32_t _exit = 0x18472;

void fun_4110af() {
    goto _exit;
}

void fun_4115fd(int32_t ecx) {
    int32_t* eax2;
    int32_t* eax3;
    int32_t eax4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;

    *eax2 = *eax3 + eax4;
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
}

void fun_4117dc() {
    signed char* eax1;
    signed char al2;
    signed char* eax3;

    *reinterpret_cast<signed char*>(&eax1) = reinterpret_cast<signed char>(al2 + *eax3);
    *eax1 = reinterpret_cast<signed char>(*eax1 + *reinterpret_cast<signed char*>(&eax1));
}

void fun_411930() {
    goto printf;
}

void fun_4110f5() {
    goto LoadLibraryA;
}

struct s25 {
    struct s25* f0;
    int32_t f4;
};

struct s0* fun_411a72(int32_t ecx, struct s0* a2) {
    struct s0* v3;
    struct s25* esi4;
    struct s25* edx5;
    struct s25* edi6;
    int1_t less_or_equal7;
    struct s25* v8;
    int32_t ebx9;
    signed char* v10;
    struct s25* eax11;
    int1_t less12;
    struct s0* esi13;
    int32_t edi14;
    struct s0* eax15;

    v3 = reinterpret_cast<struct s0*>(__return_address());
    esi4 = edx5;
    edi6 = reinterpret_cast<struct s25*>(0);
    if (!(!esi4 || (less_or_equal7 = reinterpret_cast<int32_t>(esi4->f0) <= 0, v8 = reinterpret_cast<struct s25*>(0), less_or_equal7))) {
        ebx9 = ecx;
        do {
            if (*reinterpret_cast<unsigned char*>(*reinterpret_cast<int32_t*>(esi4->f4 + reinterpret_cast<int32_t>(edi6)) + ebx9 - 4) != 0xcccccccc || *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(esi4->f4 + reinterpret_cast<int32_t>(edi6) + 4)) + *reinterpret_cast<int32_t*>(esi4->f4 + reinterpret_cast<int32_t>(edi6)) + ebx9) != 0xcccccccc) {
                v10 = *reinterpret_cast<signed char**>(reinterpret_cast<int32_t>(edi6) + esi4->f4 + 8);
                fun_4110f0(v3, v10);
            }
            eax11 = reinterpret_cast<struct s25*>(reinterpret_cast<int32_t>(v8) + 1);
            edi6 = reinterpret_cast<struct s25*>(reinterpret_cast<int32_t>(edi6) + 12);
            less12 = reinterpret_cast<int32_t>(eax11) < reinterpret_cast<int32_t>(esi4->f0);
            v8 = eax11;
        } while (less12);
    }
    esi13 = a2;
    edi14 = 0;
    eax15 = esi13;
    if (!esi13) {
        addr_411b4c_10:
        return eax15;
    } else {
        do {
            eax15 = eax15->f4;
            ++edi14;
        } while (eax15);
        if (!esi13) 
            goto addr_411b4c_10;
    }
    do {
        if (esi13->f0 != 0xcccccccc || (esi13->f14 != 0xcccccccc || (esi13->f18 != 0xcccccccc || esi13->f1c != 0xcccccccc))) {
            fun_4111e5(v3, esi13, edi14);
        }
        eax15 = esi13->fc;
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax15) + reinterpret_cast<uint32_t>(esi13) - 4) != 0xcccccccc) {
            eax15 = fun_4111e5(v3, esi13, edi14);
        }
        esi13 = esi13->f4;
        --edi14;
    } while (esi13);
    goto addr_411b4c_10;
}

void fun_4111ea() {
    goto 0x4122a0;
}

void fun_41119a() {
    goto GetTickCount;
}

void fun_411be3() {
    goto fclose;
}

void fun_41102d();

int32_t g417550;

int32_t g417158 = 0;

int32_t g41754c;

int32_t __getmainargs = 0x18462;

int32_t g417154 = 0;

void fun_411ce0() {
    int32_t eax1;
    int32_t ecx2;
    int32_t eax3;
    int1_t less4;

    fun_411073(fun_41102d);
    eax1 = g417550;
    g417158 = eax1;
    ecx2 = g41754c;
    eax3 = reinterpret_cast<int32_t>(__getmainargs(0x417144, 0x41714c, 0x417148, ecx2, 0x417158));
    g417154 = eax3;
    less4 = g417154 < 0;
    if (less4) {
        fun_4111a9(8);
    }
    return;
}

void fun_4111a4() {
    goto HeapAlloc;
}

void fun_411f4d() {
    int32_t ebp1;
    int32_t ebp2;
    int32_t v3;
    int32_t ebp4;
    int32_t v5;
    int32_t ebp6;

    *reinterpret_cast<int32_t*>(ebp1 - 40) = ***reinterpret_cast<int32_t***>(ebp2 - 20);
    v3 = *reinterpret_cast<int32_t*>(ebp4 - 20);
    v5 = *reinterpret_cast<int32_t*>(ebp6 - 40);
    fun_4111ae(v5, v3);
    return;
}

int32_t fun_412334() {
    return 1;
}

int32_t fun_4126f6() {
    return 1;
}

void fun_411028() {
    goto IsDebuggerPresent;
}

int32_t g417014 = 1;

struct s26 {
    signed char[4283332] pad4283332;
    signed char f415bc4;
};

struct s0* fun_412a7f(signed char* a1) {
    struct s0* v2;
    void* ebp3;
    uint32_t eax4;
    uint32_t v5;
    int1_t zf6;
    signed char* eax7;
    struct s0* v8;
    struct s0* v9;
    struct s0* v10;
    struct s0* v11;
    struct s0* v12;
    struct s0* v13;
    void* v14;
    int32_t v15;
    void* v16;
    void* v17;
    int32_t v18;
    void* v19;
    int32_t v20;
    int32_t v21;
    int32_t v22;
    int32_t v23;
    void* v24;
    int32_t v25;
    int32_t v26;
    struct s0* eax27;
    struct s0* v28;
    struct s0* ebx29;
    struct s0* v30;
    struct s0* esi31;
    void* ebx32;
    signed char* ecx33;
    int32_t esi34;
    int32_t eax35;
    struct s0* v36;
    struct s0* v37;
    struct s0* v38;
    void* v39;
    struct s26* ecx40;
    signed char dl41;
    signed char* edx42;
    uint32_t eax43;
    signed char v44;
    uint32_t ecx45;
    uint32_t ecx46;
    signed char* eax47;
    uint32_t eax48;
    signed char v49;
    uint32_t ecx50;
    uint32_t ecx51;

    v2 = reinterpret_cast<struct s0*>(__return_address());
    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax4 = g417000;
    v5 = eax4 ^ reinterpret_cast<uint32_t>(ebp3);
    zf6 = g417014 == -1;
    eax7 = a1;
    if (zf6) {
        addr_412b7b_3:
        eax27 = fun_411023(v5 ^ reinterpret_cast<uint32_t>(ebp3), v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26);
        return eax27;
    } else {
        v28 = ebx29;
        v30 = esi31;
        if (!eax7) {
            addr_412b5f_5:
            ebx32 = reinterpret_cast<void*>("A variable is being used without being initialized.");
        } else {
            ecx33 = eax7;
            esi34 = reinterpret_cast<int32_t>(ecx33 + 1);
            do {
                ++ecx33;
            } while (*ecx33);
            if (reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(ecx33) - esi34 + 58) > 0x400) 
                goto addr_412b5f_5; else 
                goto addr_412ae8_9;
        }
    }
    addr_412b64_10:
    eax35 = g417014;
    fun_4123f0(v2, eax35, 3, ebx32, v30, v28, v36, v37, v38, v39);
    goto addr_412b7b_3;
    addr_412ae8_9:
    ebx32 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp3) - 0x404);
    ecx40 = reinterpret_cast<struct s26*>(0);
    do {
        dl41 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx40) + reinterpret_cast<int32_t>("The variable '"));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp3) + reinterpret_cast<int32_t>(ecx40) - 0x404) = dl41;
        ecx40 = reinterpret_cast<struct s26*>(reinterpret_cast<int32_t>(ecx40) + 1);
    } while (dl41);
    edx42 = eax7;
    do {
        ++eax7;
    } while (*eax7);
    eax43 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax7) - reinterpret_cast<int32_t>(edx42));
    do {
    } while (v44);
    ecx45 = eax43 >> 2;
    while (ecx45) {
        --ecx45;
    }
    ecx46 = eax43 & 3;
    eax47 = "' is being used without being initialized.";
    while (ecx46) {
        --ecx46;
    }
    do {
        ++eax47;
    } while (*eax47);
    eax48 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax47) - reinterpret_cast<int32_t>("' is being used without being initialized."));
    do {
    } while (v49);
    ecx50 = eax48 >> 2;
    while (ecx50) {
        --ecx50;
    }
    ecx51 = eax48 & 3;
    while (ecx51) {
        --ecx51;
    }
    goto addr_412b64_10;
}

int32_t fun_412b89() {
    return 5;
}

int32_t fun_412bfa(uint32_t a1, int32_t a2) {
    int32_t eax3;

    if (a1 > 4) {
        return -1;
    } else {
        eax3 = *reinterpret_cast<int32_t*>(a1 * 4 + 0x417008);
        *reinterpret_cast<int32_t*>(a1 * 4 + 0x417008) = a2;
        return eax3;
    }
}

int32_t fun_412c25(int32_t a1) {
    int32_t eax2;

    eax2 = g417538;
    g417538 = a1;
    g41753c = reinterpret_cast<void*>(0);
    return eax2;
}

void fun_412d17() {
    int32_t ebp1;

    SetUnhandledExceptionFilter();
    goto ebp1;
}

int32_t __setusermatherr = 0x183ee;

void fun_412dcb() {
    goto __setusermatherr;
}

void fun_413362() {
    goto _CrtDbgReportW;
}

void fun_413310() {
    int32_t ebp1;

    *reinterpret_cast<int32_t*>(ebp1 - 4) = -2;
    goto 0x413350;
}

void fun_411181() {
    goto GetSystemTimeAsFileTime;
}

void fun_411131() {
    goto TerminateProcess;
}

void fun_411014() {
    goto DebugBreak;
}

void fun_4110b4() {
    goto GetCurrentThreadId;
}

void fun_4110cd() {
    goto GetCurrentProcess;
}

void fun_41109b() {
    goto fopen;
}

void fun_4110fa() {
    goto RaiseException;
}

void fun_4111ef() {
    goto exit;
}

struct s27 {
    int32_t f0;
    signed char[12] pad16;
    int32_t f10;
    int32_t f14;
};

int32_t fun_412cac(struct s27** a1) {
    int32_t eax2;

    if ((*a1)->f0 != 0xe06d7363 || ((*a1)->f10 != 3 || (*a1)->f14 != 0x19930520 && ((*a1)->f14 != 0x19930521 && ((*a1)->f14 != 0x19930522 && (*a1)->f14 != 0x1994000)))) {
        eax2 = 0;
    } else {
        fun_4110a5();
        eax2 = 1;
    }
    return eax2;
}

void fun_4111b3() {
    goto _CrtSetCheckCount;
}

void fun_41105a() {
    goto 0x411be8;
}

void fun_4133b8(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    fun_4111c7(0x417000, fun_411023, a1, a2, a3, a4);
    return;
}

void fun_411f68() {
    void* esp1;
    int32_t ebp2;
    int32_t ebp3;
    int1_t zf4;
    void* ecx5;
    void** esp6;
    int32_t* esp7;
    int1_t zf8;
    int32_t ebp9;

    esp1 = *reinterpret_cast<void**>(ebp2 - 24);
    g41715c = *reinterpret_cast<void**>(ebp3 - 40);
    zf4 = g417150 == 0;
    if (zf4) {
        ecx5 = g41715c;
        esp6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp1) - 4);
        *esp6 = ecx5;
        esp7 = reinterpret_cast<int32_t*>(esp6 - 1);
        *esp7 = 0x411f89;
        _exit();
        esp1 = reinterpret_cast<void*>(esp7 + 1);
    }
    zf8 = g417160 == 0;
    if (zf8) {
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp1) - 4) = reinterpret_cast<void*>(0x411f98);
        _cexit();
    }
    *reinterpret_cast<int32_t*>(ebp9 - 4) = -2;
}

void fun_411109() {
    goto InterlockedCompareExchange;
}

void fun_41233a() {
}

void fun_411041() {
    goto 0x412bd0;
}

void fun_4126fc() {
}

void fun_41102d() {
    goto 0x412e30;
}

int32_t fun_412bd6(uint32_t a1) {
    if (a1 > 4) {
        return 0;
    } else {
        return *reinterpret_cast<int32_t*>(a1 * 4 + 0x415fec);
    }
}

int32_t _configthreadlocale = 0x183d8;

void fun_412d44() {
    goto _configthreadlocale;
}

int32_t fun_412ddc() {
    return 0;
}

void fun_412fdc() {
    goto _encode_pointer;
}

void fun_411091() {
    goto GetProcAddress;
}

void fun_4111f9() {
    goto FreeLibrary;
}

void fun_4110e6() {
    goto 0x412d4a;
}

int32_t fun_413319() {
    int32_t ebp1;
    int32_t ebp2;
    int32_t ecx3;
    int32_t ebp4;

    *reinterpret_cast<int32_t*>(ebp1 - 40) = ***reinterpret_cast<int32_t***>(ebp2 - 20);
    ecx3 = 0;
    *reinterpret_cast<unsigned char*>(&ecx3) = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(ebp4 - 40) == 0xc0000005);
    return ecx3;
}

void fun_411186() {
    goto _decode_pointer;
}

void fun_411136() {
    goto 0x411d50;
}

void fun_411019() {
    goto 0x412be0;
}

void fun_411177() {
    goto sprintf;
}

void fun_4110d2() {
    goto 0x412fe4;
}

void fun_411122() {
    goto HeapFree;
}

void fun_411078() {
    goto MultiByteToWideChar;
}

void fun_4111b8() {
    goto InterlockedExchange;
}

void fun_41105f() {
    goto SetUnhandledExceptionFilter;
}

void fun_41110e() {
    goto GetProcessHeap;
}

void fun_411046() {
    goto 0x412dd6;
}

void fun_411032() {
    goto WideCharToMultiByte;
}

void fun_411154() {
    goto GetCurrentProcessId;
}

void fun_4110eb() {
    goto 0x411b90;
}

void fun_413333() {
    int32_t ebp1;
    int32_t ebp2;

    *reinterpret_cast<int32_t*>(ebp1 - 56) = 0;
    *reinterpret_cast<int32_t*>(ebp2 - 4) = -2;
    goto 0x413350;
}

void fun_41113b() {
    goto 0x412cb0;
}

int32_t __p__fmode = 0x18422;

void fun_41101e() {
    goto __p__fmode;
}

void fun_4110d7() {
    goto 0x412aa0;
}

void fun_411127() {
    goto 0x412c30;
}

void fun_41107d() {
    goto perror;
}

void fun_4111bd() {
    goto UnhandledExceptionFilter;
}

void fun_411064() {
    goto _cexit;
}

void fun_4111cc() {
    goto _stat64i32;
}

void fun_41104b() {
    goto Sleep;
}

void fun_411037() {
    goto 0x411a40;
}

void fun_4149cf() {
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
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    signed char* eax22;
    signed char* eax23;
    signed char al24;
    signed char* eax25;
    signed char* eax26;
    signed char al27;
    signed char* eax28;
    signed char* eax29;
    signed char al30;
    signed char* eax31;
    signed char* eax32;
    signed char al33;
    signed char* eax34;
    signed char* eax35;
    signed char al36;
    signed char* eax37;
    signed char* eax38;
    signed char al39;
    signed char* eax40;
    signed char* eax41;
    signed char al42;
    signed char* eax43;
    signed char* eax44;
    signed char al45;
    signed char* eax46;
    signed char* eax47;
    signed char al48;
    signed char* eax49;
    signed char* eax50;
    signed char al51;
    signed char* eax52;
    signed char* eax53;
    signed char al54;
    signed char* eax55;
    signed char* eax56;
    signed char al57;
    signed char* eax58;
    signed char* eax59;
    signed char al60;
    signed char* eax61;
    signed char* eax62;
    signed char al63;
    signed char* eax64;
    signed char* eax65;
    signed char al66;
    signed char* eax67;
    signed char* eax68;
    signed char al69;
    signed char* eax70;
    signed char* eax71;
    signed char al72;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
    *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
    *eax22 = reinterpret_cast<signed char>(*eax23 + al24);
    *eax25 = reinterpret_cast<signed char>(*eax26 + al27);
    *eax28 = reinterpret_cast<signed char>(*eax29 + al30);
    *eax31 = reinterpret_cast<signed char>(*eax32 + al33);
    *eax34 = reinterpret_cast<signed char>(*eax35 + al36);
    *eax37 = reinterpret_cast<signed char>(*eax38 + al39);
    *eax40 = reinterpret_cast<signed char>(*eax41 + al42);
    *eax43 = reinterpret_cast<signed char>(*eax44 + al45);
    *eax46 = reinterpret_cast<signed char>(*eax47 + al48);
    *eax49 = reinterpret_cast<signed char>(*eax50 + al51);
    *eax52 = reinterpret_cast<signed char>(*eax53 + al54);
    *eax55 = reinterpret_cast<signed char>(*eax56 + al57);
    *eax58 = reinterpret_cast<signed char>(*eax59 + al60);
    *eax61 = reinterpret_cast<signed char>(*eax62 + al63);
    *eax64 = reinterpret_cast<signed char>(*eax65 + al66);
    *eax67 = reinterpret_cast<signed char>(*eax68 + al69);
    *eax70 = reinterpret_cast<signed char>(*eax71 + al72);
}

void fun_411159() {
    goto 0x411a80;
}

void fun_413349() {
    int32_t ebp1;

    *reinterpret_cast<int32_t*>(ebp1 - 4) = -2;
}

void fun_411140() {
    goto 0x412d30;
}

void fun_4110dc() {
    goto 0x411bd0;
}

void fun_411082() {
    goto 0x412c00;
}

void fun_4111c2() {
    goto 0x41194c;
}

void fun_411069() {
    goto 0x4133a6;
}

void fun_4111d1() {
    goto 0x412de0;
}

void fun_411050() {
    goto GetModuleFileNameW;
}

int32_t __set_app_type = 0x18442;

void fun_41115e() {
    goto __set_app_type;
}

void fun_411145() {
    goto QueryPerformanceCounter;
}

int32_t g417548;

int32_t g417544;

int32_t* _adjust_fdiv = reinterpret_cast<int32_t*>(0x18402);

int32_t g417588;

int32_t g417024 = 1;

int32_t g417020 = -2;

int32_t fun_411c10() {
    int32_t eax1;
    int32_t eax2;
    int32_t eax3;
    int32_t* eax4;
    int32_t ecx5;
    int32_t* eax6;
    int32_t edx7;
    int32_t* eax8;
    int1_t zf9;
    int1_t zf10;

    eax1 = fun_412060();
    g417150 = eax1;
    __set_app_type(1);
    eax2 = reinterpret_cast<int32_t>(_encode_pointer(0xff));
    g417574 = eax2;
    eax3 = g417574;
    g417584 = eax3;
    eax4 = reinterpret_cast<int32_t*>(__p__fmode());
    ecx5 = g417548;
    *eax4 = ecx5;
    eax6 = reinterpret_cast<int32_t*>(__p__commode());
    edx7 = g417544;
    *eax6 = edx7;
    eax8 = _adjust_fdiv;
    g417588 = *eax8;
    fun_411172();
    fun_41100a();
    zf9 = g417024 == 0;
    if (zf9) {
        __setusermatherr(fun_4111d1);
    }
    fun_411005();
    zf10 = g417020 == -1;
    if (zf10) {
        _configthreadlocale(0xff);
    }
    return 0;
}

void fun_411087() {
    goto 0x4133c0;
}

void fun_41106e() {
    goto VirtualQuery;
}

void fun_4111d6() {
    goto __getmainargs;
}

void fun_41114a() {
    goto 0x412e60;
}

void fun_4111db() {
    goto lstrlenA;
}
