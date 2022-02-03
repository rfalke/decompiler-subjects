
int32_t g8048d60;

signed char g8048e79;

struct s1 {
    void* f0;
    signed char[77] pad78;
    unsigned char f4e;
    signed char[18] pad97;
    unsigned char f61;
    signed char[3] pad101;
    unsigned char f65;
    signed char[8] pad110;
    int32_t f6e;
    int32_t f70;
    unsigned char f73;
    signed char[1577058185] pad1577058304;
    signed char f5e000000;
};

struct s0 {
    struct s1** f0;
    signed char[107] pad108;
    unsigned char f6c;
    signed char[2] pad111;
    unsigned char f6f;
};

void* fun_8048b8e(struct s0** ecx, struct s0** a2);

signed char* fun_8048358(struct s0** ecx);

signed char g8048d68;

signed char* fun_8048b88(struct s0** ecx, struct s0** a2);

signed char g8048fac;

struct s0** g8048d75;

struct s0** fun_8048af6();

struct s0** g8048d69;

void fun_8048b5d(struct s0** ecx);

struct s0* g8048f78;

int32_t g8048f7c;

signed char* g8048d71;

signed char g804afb2;

struct s2 {
    signed char f0;
    int16_t f1;
};

int32_t fun_8048acc(struct s0** ecx);

signed char* fun_8048b7f(struct s0** ecx, int32_t a2);

int32_t g8048f88;

signed char* g8048f8c;

signed char g804afb1;

signed char g8048058 = 45;

signed char* g8048f90;

void* fun_8048b0c(struct s0** ecx);

int32_t fun_8048ab6();

int32_t g8048f84;

int32_t g8048f80;

signed char g8048d18 = 73;

struct s0** fun_8048bd4(struct s0** ecx);

struct s0** fun_8048c29(struct s0** ecx);

int32_t fun_8048ca2(void* ecx) {
    void* esp2;
    void* esp3;
    struct s0** edi4;
    struct s0** ecx5;
    struct s0** v6;
    void* esp7;
    signed char* eax8;
    int1_t zf9;
    struct s0** v10;
    struct s0*** esp11;
    void* esp12;
    struct s0** eax13;
    struct s0** v14;
    int1_t zf15;
    struct s0** v16;
    struct s0** v17;
    int1_t zf18;
    struct s0** v19;
    uint32_t eax20;
    struct s0** v21;
    void* esp22;
    void* esp23;
    uint64_t v24;
    int16_t* esp25;
    struct s0** v26;
    signed char* edi27;
    signed char al28;
    signed char* esi29;
    int32_t ecx30;
    struct s0** v31;
    signed char* eax32;
    struct s0** v33;
    struct s0** v34;
    void* esp35;
    struct s2* edi36;
    struct s0*** esp37;
    struct s0** ecx38;
    int32_t v39;
    struct s0** v40;
    void* esp41;
    void* esp42;
    signed char* esi43;
    int1_t zf44;
    int1_t zf45;
    struct s0** v46;
    struct s0** v47;
    void* esp48;
    signed char* eax49;
    int1_t zf50;
    void* esp51;
    int32_t ecx52;
    int16_t ebx53;
    int16_t v54;
    int16_t bx55;
    int32_t ebx56;
    int16_t bx57;
    int32_t ebx58;
    int32_t ebx59;
    void* esp60;
    struct s0** v61;
    struct s0** v62;
    struct s0** v63;
    struct s0** ecx64;
    int1_t zf65;
    struct s0** eax66;
    signed char* eax67;
    int1_t zf68;
    int1_t zf69;
    int1_t zf70;
    int1_t zf71;
    int1_t zf72;
    int32_t v73;
    struct s0** v74;
    struct s0** eax75;
    struct s0** eax76;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4);
    __asm__("int 0x80");
    if (!0 && (esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 + 4 - 4 - 4 + 4 - 4 + 4), !0)) {
        g8048d60 = 0xc0;
        __asm__("int 0x80");
        return 6;
    }
    while (1) {
        addr_80482be_3:
        while (1) {
            __asm__("int 0x80");
            __asm__("int 0x80");
            esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 + 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
            if (1) 
                goto addr_80482be_3;
            esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4);
            __asm__("int 0x80");
            esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 + 4 - 4 + 4 + 8);
            if (1) 
                goto addr_80482be_3;
            fun_8048ca2(esp3);
            esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 + 4 + 4 - 4 + 4);
            __asm__("int 0x80");
            if (0) {
                while (1) {
                    g8048e79 = 16;
                    __asm__("int 0x80");
                    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
                    if (0) 
                        continue;
                    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 + 4);
                    __asm__("int 0x80");
                    if (0) 
                        break;
                }
                edi4 = reinterpret_cast<struct s0**>(0);
                ecx5 = reinterpret_cast<struct s0**>(4);
                fun_8048b8e(4, v6);
                esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 + 4);
                while (1) {
                    eax8 = fun_8048358(ecx5);
                    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 + 4);
                    if (!eax8) 
                        continue;
                    zf9 = g8048d68 == 0;
                    if (zf9) {
                        if (eax8 == 0x52455355) 
                            goto addr_80489f9_16;
                        if (eax8 == 0x53534150) 
                            goto addr_8048a06_18;
                        if (eax8 == 0x54495551) 
                            break;
                        if (eax8 == 0x54535953) 
                            goto addr_8048a13_21;
                        if (eax8 == 0x504f4f4e) 
                            goto addr_8048a1a_23;
                        ecx5 = reinterpret_cast<struct s0**>(20);
                        eax8 = fun_8048b88(20, v10);
                        esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 + 4);
                    }
                    esp11 = reinterpret_cast<struct s0***>(reinterpret_cast<int32_t>(esp7) - 4);
                    *reinterpret_cast<unsigned char*>(&g8048fac) = 1;
                    if (eax8 == 0x52544552) 
                        goto addr_8048473_26;
                    *reinterpret_cast<unsigned char*>(&g8048fac) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&g8048fac) + 1);
                    if (!reinterpret_cast<int1_t>(eax8 == 0x524f5453)) {
                        addr_8048553_28:
                        esp12 = reinterpret_cast<void*>(esp11 + 1);
                        g8048d75 = reinterpret_cast<struct s0**>(0);
                        if (reinterpret_cast<int1_t>(eax8 == 0x54534552)) {
                            eax13 = fun_8048af6();
                            g8048d75 = eax13;
                            ecx5 = reinterpret_cast<struct s0**>(15);
                            eax8 = fun_8048b88(15, v14);
                            esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 + 4 - 4 + 4);
                        }
                    } else {
                        zf15 = (reinterpret_cast<uint32_t>(g8048d69) & 1) == 0;
                        if (zf15) {
                            addr_804853f_31:
                            __asm__("int 0x80");
                            ecx5 = reinterpret_cast<struct s0**>(12);
                            eax8 = fun_8048b88(12, v16);
                            esp11 = esp11 + 1 - 1 + 1 - 1 + 1;
                            goto addr_8048553_28;
                        } else {
                            addr_8048473_26:
                            fun_8048b5d(ecx5);
                            v17 = edi4;
                            zf18 = (*reinterpret_cast<unsigned char*>(&g8048fac) & 2) == 0;
                            if (!zf18) {
                                goto addr_804848d_33;
                            }
                        }
                    }
                    *reinterpret_cast<unsigned char*>(&g8048fac) = 3;
                    if (*reinterpret_cast<int16_t*>(&eax8) != 0x494c) {
                        addr_80486d9_35:
                        if (*reinterpret_cast<int16_t*>(&eax8) == 0x4f50) 
                            goto addr_80486e3_36;
                    } else {
                        if (!v19) {
                            fun_8048358(ecx5);
                            esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 + 4);
                        }
                        eax20 = 0x6a;
                        __asm__("int 0x80");
                        if (!1) 
                            goto addr_80485b4_40;
                        fun_8048b8e(1, v21);
                        esp22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 + 4 - 4 + 4 - 4 + 4);
                        __asm__("int 0x80");
                        if (1) 
                            goto addr_80486ae_42; else 
                            goto addr_80485d0_43;
                    }
                    while (reinterpret_cast<int1_t>(eax8 == 0x56534150)) {
                        g8048f78 = reinterpret_cast<struct s0*>(2);
                        g8048f7c = 0;
                        __asm__("int 0x80");
                        esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
                        if (!0 && ((esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 20), !0) && (esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12), !0))) {
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v24) + 2) = 16;
                            __asm__("int 0x80");
                            esp25 = reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12 - 2);
                            *reinterpret_cast<int16_t*>(&v24) = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&g8048f78) + 2);
                            if (0) 
                                goto addr_8048788_47;
                            __asm__("int 0x80");
                            esp25 = esp25 - 2 - 2 - 2 + 2 - 2 + 2 + 4;
                            if (0) 
                                goto addr_8048788_47;
                            g8048d71 = reinterpret_cast<signed char*>(0x66);
                            __asm__("int 0x80");
                            esp25 = esp25 - 2 - 2 - 2 - 2 + 2 - 2 + 2 + 6;
                            if (!0) 
                                goto addr_8048861_50;
                            addr_8048788_47:
                            esp23 = reinterpret_cast<void*>(esp25 + 2 + 2);
                        }
                        ecx5 = reinterpret_cast<struct s0**>(0x1f6);
                        eax8 = fun_8048b88(0x1f6, v26);
                        esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 + 4);
                    }
                    addr_80488bb_52:
                    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4);
                    edi27 = "ISFAISF";
                    if (*reinterpret_cast<int16_t*>(&eax8) == 0x5954 || ((edi27 = "SFAISF", *reinterpret_cast<int16_t*>(&eax8) == 0x4f4d) || (edi27 = "FAISF", reinterpret_cast<int1_t>(eax8 == 0x55525453)))) {
                        al28 = g804afb2;
                        esi29 = "AISF";
                        ecx30 = 4;
                        do {
                            if (al28 == *esi29) 
                                break;
                            ++esi29;
                            --ecx30;
                        } while (ecx30);
                        goto addr_80488ec_56;
                    } else {
                        addr_8048900_57:
                        if (*reinterpret_cast<int16_t*>(&eax8) == 0x4443) 
                            goto addr_8048997_58; else 
                            goto addr_804890a_59;
                    }
                    *edi27 = al28;
                    ecx5 = reinterpret_cast<struct s0**>(2);
                    addr_80488fa_61:
                    eax8 = fun_8048b88(ecx5, v31);
                    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) + 4 - 4 + 4);
                    goto addr_8048900_57;
                    addr_80488ec_56:
                    ecx5 = reinterpret_cast<struct s0**>(11);
                    goto addr_80488fa_61;
                    addr_804890a_59:
                    fun_8048b5d(ecx5);
                    eax32 = eax8;
                    edi4 = v33;
                    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4 + 4 + 4);
                    if (*reinterpret_cast<int16_t*>(&eax32) == 0x4b4d) 
                        goto addr_80489a3_62;
                    if (*reinterpret_cast<int16_t*>(&eax32) == 0x4d52) 
                        goto addr_80489ce_64;
                    if (*reinterpret_cast<int16_t*>(&eax32) == 0x4544) 
                        goto addr_80489bb_66;
                    if (*reinterpret_cast<int16_t*>(&eax32) == 0x5743) 
                        goto addr_804899c_68;
                    if (eax32 == 0x455a4953) 
                        goto addr_804894e_70;
                    if (*reinterpret_cast<int16_t*>(&eax32) == 0x5355) 
                        goto addr_80489f9_16;
                    if (eax32 == 0x53534150) 
                        goto addr_8048a06_18;
                    if (*reinterpret_cast<int16_t*>(&eax32) == 0x5953) 
                        goto addr_8048a13_21;
                    if (*reinterpret_cast<int16_t*>(&eax32) == 0x4f4e) 
                        goto addr_8048a1a_23;
                    if (*reinterpret_cast<int16_t*>(&eax32) == 0x5551) 
                        break;
                    if (*reinterpret_cast<int16_t*>(&eax32) != 0x5750) 
                        goto addr_8048a4d_78;
                    fun_8048b8e(9, v34);
                    esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 + 4);
                    __asm__("int 0x80");
                    do {
                        __asm__("lodsb ");
                    } while (1);
                    g8048fac = reinterpret_cast<signed char>(0xa0d22);
                    ecx5 = reinterpret_cast<struct s0**>(0x8048fad);
                    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp35) - 4 + 4);
                    __asm__("int 0x80");
                    continue;
                    addr_8048861_50:
                    edi36 = reinterpret_cast<struct s2*>(0x8048fad);
                    fun_8048b8e(17, *reinterpret_cast<struct s0***>(&v24));
                    esp37 = reinterpret_cast<struct s0***>(esp25 - 2 + 2);
                    ecx38 = reinterpret_cast<struct s0**>(0);
                    *reinterpret_cast<signed char*>(&ecx38) = 4;
                    do {
                        __asm__("lodsb ");
                        fun_8048acc(ecx38);
                        esp37 = esp37 - 1 + 1;
                        edi36->f0 = 44;
                        edi36 = reinterpret_cast<struct s2*>(&edi36->f1);
                        ecx38 = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(ecx38) - 1);
                    } while (ecx38);
                    fun_8048acc(*reinterpret_cast<struct s0***>(&v24));
                    edi36->f0 = 44;
                    fun_8048acc(*reinterpret_cast<struct s0***>(&v24));
                    edi36->f1 = 0xa0d;
                    ecx5 = reinterpret_cast<struct s0**>(0x8048fad);
                    eax8 = fun_8048b7f(0x8048fad, v39);
                    esp12 = reinterpret_cast<void*>(esp37 + 1 - 1 + 1 - 1 + 1 + 1 - 1 + 1);
                    goto addr_80488bb_52;
                    do {
                        addr_80486ae_42:
                        esp22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp22) - 4 + 4 - 4 + 4);
                        __asm__("int 0x80");
                    } while (0);
                    __asm__("int 0x80");
                    ecx5 = reinterpret_cast<struct s0**>(8);
                    eax8 = fun_8048b88(8, v40);
                    esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp22) - 4 + 4 - 4 + 4);
                    goto addr_80486d9_35;
                    addr_80485d0_43:
                    __asm__("int 0x80");
                    esp41 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp22) - 4 + 4 - 4 + 4);
                    __asm__("int 0x80");
                    if (!0) 
                        goto addr_80485e3_94;
                    __asm__("int 0x80");
                    __asm__("int 0x80");
                    __asm__("int 0x80");
                    esp42 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp41) - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4);
                    g8048f88 = reinterpret_cast<int32_t>("/bin/ls");
                    esi43 = "-la";
                    g8048f8c = "-la";
                    __asm__("repne lodsb ");
                    zf44 = g804afb1 == 13;
                    if (!zf44) 
                        goto addr_8048680_96;
                    addr_8048693_97:
                    __asm__("int 0x80");
                    esp22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp42) + 4 - 4 + 4 - 4 + 4);
                    __asm__("int 0x80");
                    goto addr_80486ae_42;
                    addr_8048680_96:
                    fun_8048b5d(8);
                    esp42 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp42) - 4 + 4);
                    zf45 = g8048058 == 45;
                    if (zf45) {
                        esi43 = "..";
                    }
                    g8048f90 = esi43;
                    goto addr_8048693_97;
                    addr_804848d_33:
                    esp11 = esp11 - 1 + 1 + 1 - 1 - 1 + 1;
                    __asm__("int 0x80");
                    if (0) 
                        goto addr_804853f_31; else 
                        goto addr_80484a3_100;
                }
            } else {
                addr_8048303_101:
                continue;
            }
            addr_8048a65_102:
            fun_8048b8e(5, v46);
            esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 + 4);
            goto addr_8048303_101;
            addr_8048a4d_78:
            if (eax32 == 0x524f4241) 
                goto addr_8048a21_103;
            if (eax32 == 0x4f4241f2) 
                goto addr_8048a21_103;
            fun_8048b88(11, v47);
            esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 + 4);
            goto addr_8048a65_102;
            addr_80485e3_94:
            esp48 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp41) - 4 + 4);
            __asm__("int 0x80");
            while (esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp48) - 4 + 4), !0) {
                eax49 = fun_8048358(0x8048fad);
                zf50 = reinterpret_cast<int1_t>(eax49 == 0x524f4241);
                if (!zf50) {
                    zf50 = reinterpret_cast<int1_t>(eax49 == 0x4f4241f2);
                }
                esp51 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 + 4 + 4);
                if (zf50) 
                    goto addr_804862a_110;
                fun_8048b0c(0x8048fad);
                esp48 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp51) - 4 + 4);
            }
            goto addr_8048303_101;
        }
        addr_80486e3_36:
        ecx52 = 4;
        do {
            ebx53 = reinterpret_cast<int16_t>(0);
            fun_8048ab6();
            esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 + 4);
            --ecx52;
        } while (ecx52);
        v54 = reinterpret_cast<int16_t>(0);
        bx55 = 0;
        *reinterpret_cast<signed char*>(&ebx53) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&bx55) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx53) + 1) = 0;
        ebx56 = ebx53 << 16;
        bx57 = (&v54)[1];
        *reinterpret_cast<signed char*>(&ebx56) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&bx57) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx56) + 1) = *reinterpret_cast<signed char*>(&bx57);
        g8048f84 = ebx56;
        fun_8048ab6();
        ebx58 = 0;
        fun_8048ab6();
        *reinterpret_cast<signed char*>(&ebx58) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx58) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx58) + 1) = 0;
        ebx59 = ebx58 << 16;
        *reinterpret_cast<signed char*>(&ebx59) = 2;
        g8048f80 = ebx59;
        __asm__("int 0x80");
        esp60 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 + 2 + 2 - 4 + 4 - 4 + 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
        if (!0 && (esp60 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp60) - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12), !0)) {
            fun_8048b88(2, v61);
            esp60 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp60) + 4 - 4 + 4);
        }
        fun_8048b8e(10, v62);
        __asm__("int 0x80");
        esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp60) - 4 + 4 - 4 - 4 - 4 + 4 - 4 + 4 + 8 - 4 + 4);
        __asm__("int 0x80");
        continue;
        addr_804862a_110:
        fun_8048b8e(16, v63);
        esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp51) - 4 + 4);
    }
    addr_80484a3_100:
    ecx64 = reinterpret_cast<struct s0**>(1);
    fun_8048b8e(1, v17);
    zf65 = (*reinterpret_cast<unsigned char*>(&g8048fac) & 2) == 0;
    if (zf65) {
        eax66 = g8048d75;
        if (eax66) {
            ecx64 = eax66;
            __asm__("int 0x80");
        }
    }
    while (1) {
        eax67 = fun_8048358(ecx64);
        zf68 = reinterpret_cast<int1_t>(eax67 == 0x524f4241);
        if (!zf68) {
            zf68 = reinterpret_cast<int1_t>(eax67 == 0x4f4241f2);
        }
        if (zf68) 
            break;
        ecx64 = reinterpret_cast<struct s0**>(0x8048fad);
        __asm__("int 0x80");
        if (0) 
            goto addr_8048519_124;
        zf69 = g8048d18 == 65;
        if (!zf69) {
            ecx64 = reinterpret_cast<struct s0**>(0x8048fad);
            __asm__("int 0x80");
        } else {
            fun_8048b0c(0x8048fad);
        }
    }
    while (1) {
        fun_8048b8e(16, v17);
        addr_8048519_124:
        __asm__("int 0x80");
        __asm__("int 0x80");
        fun_8048b88(6, v17);
    }
    addr_8048997_58:
    addr_804899c_68:
    eax20 = 12;
    __asm__("int 0x80");
    goto addr_80489e3_129;
    addr_80489a3_62:
    zf70 = (reinterpret_cast<uint32_t>(g8048d69) & 2) == 0;
    if (zf70) {
        addr_80489e1_130:
        goto addr_80489ef_131;
    } else {
        eax20 = 39;
        __asm__("int 0x80");
        goto addr_80489e3_129;
    }
    addr_80489ce_64:
    zf71 = (reinterpret_cast<uint32_t>(g8048d69) & 2) == 0;
    if (zf71) 
        goto addr_80489e1_130;
    eax20 = 40;
    __asm__("int 0x80");
    goto addr_80489e3_129;
    addr_80489bb_66:
    zf72 = (reinterpret_cast<uint32_t>(g8048d69) & 2) == 0;
    if (zf72) 
        goto addr_80489e1_130;
    eax20 = 10;
    __asm__("int 0x80");
    goto addr_80489e3_129;
    addr_804894e_70:
    eax20 = 0x6a;
    __asm__("int 0x80");
    if (0) {
        addr_80489e3_129:
        if (eax20) {
            addr_80489ef_131:
            ecx5 = reinterpret_cast<struct s0**>(12);
        } else {
            ecx5 = reinterpret_cast<struct s0**>(8);
        }
    } else {
        fun_8048b8e(18, edi4);
        fun_8048acc(18);
        *reinterpret_cast<int16_t*>(&g8048fac + 1) = 0xa0d;
        fun_8048b7f(0x8048fad, v73);
        goto addr_8048997_58;
    }
    while (1) {
        addr_80489f4_140:
        fun_8048b88(ecx5, v74);
        addr_80489f9_16:
        fun_8048b5d(ecx5);
        eax75 = fun_8048bd4(ecx5);
        ecx5 = eax75;
    }
    addr_8048a06_18:
    fun_8048b5d(ecx5);
    eax76 = fun_8048c29(ecx5);
    ecx5 = eax76;
    goto addr_80489f4_140;
    addr_8048a13_21:
    ecx5 = reinterpret_cast<struct s0**>(3);
    goto addr_80489f4_140;
    addr_8048a1a_23:
    ecx5 = reinterpret_cast<struct s0**>(2);
    goto addr_80489f4_140;
    addr_80485b4_40:
    goto addr_80489e3_129;
    addr_8048a21_103:
    ecx5 = reinterpret_cast<struct s0**>(6);
    goto addr_80489f4_140;
}

int32_t g804b3ad;

signed char* g804b3b5;

int16_t g804b3b1;

int16_t g804b3b9;

uint16_t g804b3bb;

uint16_t g804b3b3;

signed char* g804afad;

struct s3 {
    signed char f0;
    int16_t f1;
};

signed char* fun_8048358(struct s0** ecx) {
    signed char* eax2;
    int32_t ebp3;
    int32_t ecx4;
    signed char* eax5;
    int1_t zf6;
    int1_t zf7;
    void* esp8;
    signed char* eax9;
    void* esp10;
    struct s0** edi11;
    struct s0** ecx12;
    struct s0** v13;
    void* esp14;
    signed char* eax15;
    int1_t zf16;
    struct s0** v17;
    struct s0*** esp18;
    void* esp19;
    struct s0** eax20;
    struct s0** v21;
    int1_t zf22;
    struct s0** v23;
    struct s0** v24;
    int1_t zf25;
    struct s0** v26;
    uint32_t eax27;
    struct s0** v28;
    void* esp29;
    void* esp30;
    uint64_t v31;
    int16_t* esp32;
    struct s0** v33;
    signed char* edi34;
    signed char al35;
    signed char* esi36;
    int32_t ecx37;
    struct s0** v38;
    signed char* eax39;
    struct s0** v40;
    struct s0** v41;
    void* esp42;
    struct s3* edi43;
    struct s0*** esp44;
    struct s0** ecx45;
    int32_t v46;
    struct s0** v47;
    void* esp48;
    void* esp49;
    signed char* esi50;
    int1_t zf51;
    int1_t zf52;
    struct s0** v53;
    struct s0** v54;
    void* esp55;
    signed char* eax56;
    int1_t zf57;
    void* esp58;
    int32_t ecx59;
    int16_t ebx60;
    int16_t v61;
    int16_t bx62;
    int32_t ebx63;
    int16_t bx64;
    int32_t ebx65;
    int32_t ebx66;
    void* esp67;
    struct s0** v68;
    struct s0** v69;
    struct s0** v70;
    struct s0** ecx71;
    int1_t zf72;
    struct s0** eax73;
    signed char* eax74;
    int1_t zf75;
    int1_t zf76;
    int1_t zf77;
    int1_t zf78;
    int1_t zf79;
    int32_t v80;
    struct s0** v81;
    struct s0** eax82;
    struct s0** eax83;

    eax2 = g8048d71;
    g804b3ad = ebp3;
    g804b3b5 = eax2;
    ecx4 = 1;
    if (eax2) {
        ecx4 = 2;
    }
    g804b3b1 = 3;
    g804b3b9 = 3;
    eax5 = reinterpret_cast<signed char*>(0);
    *reinterpret_cast<signed char*>(&eax5) = -88;
    __asm__("int 0x80");
    if (0) {
        addr_80483aa_4:
        return eax5;
    } else {
        if (ecx4 - 1 && (zf6 = (g804b3bb & 3) == 0, !zf6)) {
            g8048e79 = 16;
            __asm__("int 0x80");
            __asm__("int 0x80");
            g8048d71 = reinterpret_cast<signed char*>(0);
            return 0;
        }
        zf7 = (g804b3b3 & 3) == 0;
        if (zf7) 
            goto addr_80483a8_8;
    }
    esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4);
    __asm__("int 0x80");
    if (!0) {
        eax9 = g804afad;
        return eax9;
    }
    while (1) {
        addr_80482be_11:
        while (1) {
            __asm__("int 0x80");
            __asm__("int 0x80");
            esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 + 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
            if (1) 
                goto addr_80482be_11;
            esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 - 4);
            __asm__("int 0x80");
            esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) - 4 + 4 - 4 + 4 + 8);
            if (1) 
                goto addr_80482be_11;
            fun_8048ca2(esp10);
            esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 - 4 + 4 + 4 - 4 + 4);
            __asm__("int 0x80");
            if (0) {
                while (1) {
                    g8048e79 = 16;
                    __asm__("int 0x80");
                    esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
                    if (0) 
                        continue;
                    esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 + 4);
                    __asm__("int 0x80");
                    if (0) 
                        break;
                }
                edi11 = reinterpret_cast<struct s0**>(0);
                ecx12 = reinterpret_cast<struct s0**>(4);
                fun_8048b8e(4, v13);
                esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 + 4);
                while (1) {
                    eax15 = fun_8048358(ecx12);
                    esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 + 4);
                    if (!eax15) 
                        continue;
                    zf16 = g8048d68 == 0;
                    if (zf16) {
                        if (eax15 == 0x52455355) 
                            goto addr_80489f9_24;
                        if (eax15 == 0x53534150) 
                            goto addr_8048a06_26;
                        if (eax15 == 0x54495551) 
                            break;
                        if (eax15 == 0x54535953) 
                            goto addr_8048a13_29;
                        if (eax15 == 0x504f4f4e) 
                            goto addr_8048a1a_31;
                        ecx12 = reinterpret_cast<struct s0**>(20);
                        eax15 = fun_8048b88(20, v17);
                        esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 + 4);
                    }
                    esp18 = reinterpret_cast<struct s0***>(reinterpret_cast<int32_t>(esp14) - 4);
                    *reinterpret_cast<unsigned char*>(&g8048fac) = 1;
                    if (eax15 == 0x52544552) 
                        goto addr_8048473_34;
                    *reinterpret_cast<unsigned char*>(&g8048fac) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&g8048fac) + 1);
                    if (!reinterpret_cast<int1_t>(eax15 == 0x524f5453)) {
                        addr_8048553_36:
                        esp19 = reinterpret_cast<void*>(esp18 + 1);
                        g8048d75 = reinterpret_cast<struct s0**>(0);
                        if (reinterpret_cast<int1_t>(eax15 == 0x54534552)) {
                            eax20 = fun_8048af6();
                            g8048d75 = eax20;
                            ecx12 = reinterpret_cast<struct s0**>(15);
                            eax15 = fun_8048b88(15, v21);
                            esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 + 4 - 4 + 4);
                        }
                    } else {
                        zf22 = (reinterpret_cast<uint32_t>(g8048d69) & 1) == 0;
                        if (zf22) {
                            addr_804853f_39:
                            __asm__("int 0x80");
                            ecx12 = reinterpret_cast<struct s0**>(12);
                            eax15 = fun_8048b88(12, v23);
                            esp18 = esp18 + 1 - 1 + 1 - 1 + 1;
                            goto addr_8048553_36;
                        } else {
                            addr_8048473_34:
                            fun_8048b5d(ecx12);
                            v24 = edi11;
                            zf25 = (*reinterpret_cast<unsigned char*>(&g8048fac) & 2) == 0;
                            if (!zf25) {
                                goto addr_804848d_41;
                            }
                        }
                    }
                    *reinterpret_cast<unsigned char*>(&g8048fac) = 3;
                    if (*reinterpret_cast<int16_t*>(&eax15) != 0x494c) {
                        addr_80486d9_43:
                        if (*reinterpret_cast<int16_t*>(&eax15) == 0x4f50) 
                            goto addr_80486e3_44;
                    } else {
                        if (!v26) {
                            fun_8048358(ecx12);
                            esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 + 4);
                        }
                        eax27 = 0x6a;
                        __asm__("int 0x80");
                        if (!1) 
                            goto addr_80485b4_48;
                        fun_8048b8e(1, v28);
                        esp29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 + 4 - 4 + 4 - 4 + 4);
                        __asm__("int 0x80");
                        if (1) 
                            goto addr_80486ae_50; else 
                            goto addr_80485d0_51;
                    }
                    while (reinterpret_cast<int1_t>(eax15 == 0x56534150)) {
                        g8048f78 = reinterpret_cast<struct s0*>(2);
                        g8048f7c = 0;
                        __asm__("int 0x80");
                        esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
                        if (!0 && ((esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 20), !0) && (esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12), !0))) {
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v31) + 2) = 16;
                            __asm__("int 0x80");
                            esp32 = reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12 - 2);
                            *reinterpret_cast<int16_t*>(&v31) = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&g8048f78) + 2);
                            if (0) 
                                goto addr_8048788_55;
                            __asm__("int 0x80");
                            esp32 = esp32 - 2 - 2 - 2 + 2 - 2 + 2 + 4;
                            if (0) 
                                goto addr_8048788_55;
                            g8048d71 = reinterpret_cast<signed char*>(0x66);
                            __asm__("int 0x80");
                            esp32 = esp32 - 2 - 2 - 2 - 2 + 2 - 2 + 2 + 6;
                            if (!0) 
                                goto addr_8048861_58;
                            addr_8048788_55:
                            esp30 = reinterpret_cast<void*>(esp32 + 2 + 2);
                        }
                        ecx12 = reinterpret_cast<struct s0**>(0x1f6);
                        eax15 = fun_8048b88(0x1f6, v33);
                        esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 + 4);
                    }
                    addr_80488bb_60:
                    esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4);
                    edi34 = "ISFAISF";
                    if (*reinterpret_cast<int16_t*>(&eax15) == 0x5954 || ((edi34 = "SFAISF", *reinterpret_cast<int16_t*>(&eax15) == 0x4f4d) || (edi34 = "FAISF", reinterpret_cast<int1_t>(eax15 == 0x55525453)))) {
                        al35 = g804afb2;
                        esi36 = "AISF";
                        ecx37 = 4;
                        do {
                            if (al35 == *esi36) 
                                break;
                            ++esi36;
                            --ecx37;
                        } while (ecx37);
                        goto addr_80488ec_64;
                    } else {
                        addr_8048900_65:
                        if (*reinterpret_cast<int16_t*>(&eax15) == 0x4443) 
                            goto addr_8048997_66; else 
                            goto addr_804890a_67;
                    }
                    *edi34 = al35;
                    ecx12 = reinterpret_cast<struct s0**>(2);
                    addr_80488fa_69:
                    eax15 = fun_8048b88(ecx12, v38);
                    esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) + 4 - 4 + 4);
                    goto addr_8048900_65;
                    addr_80488ec_64:
                    ecx12 = reinterpret_cast<struct s0**>(11);
                    goto addr_80488fa_69;
                    addr_804890a_67:
                    fun_8048b5d(ecx12);
                    eax39 = eax15;
                    edi11 = v40;
                    esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 - 4 + 4 + 4 + 4);
                    if (*reinterpret_cast<int16_t*>(&eax39) == 0x4b4d) 
                        goto addr_80489a3_70;
                    if (*reinterpret_cast<int16_t*>(&eax39) == 0x4d52) 
                        goto addr_80489ce_72;
                    if (*reinterpret_cast<int16_t*>(&eax39) == 0x4544) 
                        goto addr_80489bb_74;
                    if (*reinterpret_cast<int16_t*>(&eax39) == 0x5743) 
                        goto addr_804899c_76;
                    if (eax39 == 0x455a4953) 
                        goto addr_804894e_78;
                    if (*reinterpret_cast<int16_t*>(&eax39) == 0x5355) 
                        goto addr_80489f9_24;
                    if (eax39 == 0x53534150) 
                        goto addr_8048a06_26;
                    if (*reinterpret_cast<int16_t*>(&eax39) == 0x5953) 
                        goto addr_8048a13_29;
                    if (*reinterpret_cast<int16_t*>(&eax39) == 0x4f4e) 
                        goto addr_8048a1a_31;
                    if (*reinterpret_cast<int16_t*>(&eax39) == 0x5551) 
                        break;
                    if (*reinterpret_cast<int16_t*>(&eax39) != 0x5750) 
                        goto addr_8048a4d_86;
                    fun_8048b8e(9, v41);
                    esp42 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 + 4);
                    __asm__("int 0x80");
                    do {
                        __asm__("lodsb ");
                    } while (1);
                    g8048fac = reinterpret_cast<signed char>(0xa0d22);
                    ecx12 = reinterpret_cast<struct s0**>(0x8048fad);
                    esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp42) - 4 + 4);
                    __asm__("int 0x80");
                    continue;
                    addr_8048861_58:
                    edi43 = reinterpret_cast<struct s3*>(0x8048fad);
                    fun_8048b8e(17, *reinterpret_cast<struct s0***>(&v31));
                    esp44 = reinterpret_cast<struct s0***>(esp32 - 2 + 2);
                    ecx45 = reinterpret_cast<struct s0**>(0);
                    *reinterpret_cast<signed char*>(&ecx45) = 4;
                    do {
                        __asm__("lodsb ");
                        fun_8048acc(ecx45);
                        esp44 = esp44 - 1 + 1;
                        edi43->f0 = 44;
                        edi43 = reinterpret_cast<struct s3*>(&edi43->f1);
                        ecx45 = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(ecx45) - 1);
                    } while (ecx45);
                    fun_8048acc(*reinterpret_cast<struct s0***>(&v31));
                    edi43->f0 = 44;
                    fun_8048acc(*reinterpret_cast<struct s0***>(&v31));
                    edi43->f1 = 0xa0d;
                    ecx12 = reinterpret_cast<struct s0**>(0x8048fad);
                    eax15 = fun_8048b7f(0x8048fad, v46);
                    esp19 = reinterpret_cast<void*>(esp44 + 1 - 1 + 1 - 1 + 1 + 1 - 1 + 1);
                    goto addr_80488bb_60;
                    do {
                        addr_80486ae_50:
                        esp29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp29) - 4 + 4 - 4 + 4);
                        __asm__("int 0x80");
                    } while (0);
                    __asm__("int 0x80");
                    ecx12 = reinterpret_cast<struct s0**>(8);
                    eax15 = fun_8048b88(8, v47);
                    esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp29) - 4 + 4 - 4 + 4);
                    goto addr_80486d9_43;
                    addr_80485d0_51:
                    __asm__("int 0x80");
                    esp48 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp29) - 4 + 4 - 4 + 4);
                    __asm__("int 0x80");
                    if (!0) 
                        goto addr_80485e3_102;
                    __asm__("int 0x80");
                    __asm__("int 0x80");
                    __asm__("int 0x80");
                    esp49 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp48) - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4);
                    g8048f88 = reinterpret_cast<int32_t>("/bin/ls");
                    esi50 = "-la";
                    g8048f8c = "-la";
                    __asm__("repne lodsb ");
                    zf51 = g804afb1 == 13;
                    if (!zf51) 
                        goto addr_8048680_104;
                    addr_8048693_105:
                    __asm__("int 0x80");
                    esp29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp49) + 4 - 4 + 4 - 4 + 4);
                    __asm__("int 0x80");
                    goto addr_80486ae_50;
                    addr_8048680_104:
                    fun_8048b5d(8);
                    esp49 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp49) - 4 + 4);
                    zf52 = g8048058 == 45;
                    if (zf52) {
                        esi50 = "..";
                    }
                    g8048f90 = esi50;
                    goto addr_8048693_105;
                    addr_804848d_41:
                    esp18 = esp18 - 1 + 1 + 1 - 1 - 1 + 1;
                    __asm__("int 0x80");
                    if (0) 
                        goto addr_804853f_39; else 
                        goto addr_80484a3_108;
                }
            } else {
                addr_8048303_109:
                continue;
            }
            addr_8048a65_110:
            fun_8048b8e(5, v53);
            esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 + 4);
            goto addr_8048303_109;
            addr_8048a4d_86:
            if (eax39 == 0x524f4241) 
                goto addr_8048a21_111;
            if (eax39 == 0x4f4241f2) 
                goto addr_8048a21_111;
            fun_8048b88(11, v54);
            esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 + 4);
            goto addr_8048a65_110;
            addr_80485e3_102:
            esp55 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp48) - 4 + 4);
            __asm__("int 0x80");
            while (esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp55) - 4 + 4), !0) {
                eax56 = fun_8048358(0x8048fad);
                zf57 = reinterpret_cast<int1_t>(eax56 == 0x524f4241);
                if (!zf57) {
                    zf57 = reinterpret_cast<int1_t>(eax56 == 0x4f4241f2);
                }
                esp58 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 - 4 + 4 + 4);
                if (zf57) 
                    goto addr_804862a_118;
                fun_8048b0c(0x8048fad);
                esp55 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp58) - 4 + 4);
            }
            goto addr_8048303_109;
        }
        addr_80486e3_44:
        ecx59 = 4;
        do {
            ebx60 = reinterpret_cast<int16_t>(0);
            fun_8048ab6();
            esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 + 4);
            --ecx59;
        } while (ecx59);
        v61 = reinterpret_cast<int16_t>(0);
        bx62 = 0;
        *reinterpret_cast<signed char*>(&ebx60) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&bx62) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx60) + 1) = 0;
        ebx63 = ebx60 << 16;
        bx64 = (&v61)[1];
        *reinterpret_cast<signed char*>(&ebx63) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&bx64) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx63) + 1) = *reinterpret_cast<signed char*>(&bx64);
        g8048f84 = ebx63;
        fun_8048ab6();
        ebx65 = 0;
        fun_8048ab6();
        *reinterpret_cast<signed char*>(&ebx65) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx65) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx65) + 1) = 0;
        ebx66 = ebx65 << 16;
        *reinterpret_cast<signed char*>(&ebx66) = 2;
        g8048f80 = ebx66;
        __asm__("int 0x80");
        esp67 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 + 2 + 2 - 4 + 4 - 4 + 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
        if (!0 && (esp67 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp67) - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12), !0)) {
            fun_8048b88(2, v68);
            esp67 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp67) + 4 - 4 + 4);
        }
        fun_8048b8e(10, v69);
        __asm__("int 0x80");
        esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp67) - 4 + 4 - 4 - 4 - 4 + 4 - 4 + 4 + 8 - 4 + 4);
        __asm__("int 0x80");
        continue;
        addr_804862a_118:
        fun_8048b8e(16, v70);
        esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp58) - 4 + 4);
    }
    addr_80484a3_108:
    ecx71 = reinterpret_cast<struct s0**>(1);
    fun_8048b8e(1, v24);
    zf72 = (*reinterpret_cast<unsigned char*>(&g8048fac) & 2) == 0;
    if (zf72) {
        eax73 = g8048d75;
        if (eax73) {
            ecx71 = eax73;
            __asm__("int 0x80");
        }
    }
    while (1) {
        eax74 = fun_8048358(ecx71);
        zf75 = reinterpret_cast<int1_t>(eax74 == 0x524f4241);
        if (!zf75) {
            zf75 = reinterpret_cast<int1_t>(eax74 == 0x4f4241f2);
        }
        if (zf75) 
            break;
        ecx71 = reinterpret_cast<struct s0**>(0x8048fad);
        __asm__("int 0x80");
        if (0) 
            goto addr_8048519_132;
        zf76 = g8048d18 == 65;
        if (!zf76) {
            ecx71 = reinterpret_cast<struct s0**>(0x8048fad);
            __asm__("int 0x80");
        } else {
            fun_8048b0c(0x8048fad);
        }
    }
    while (1) {
        fun_8048b8e(16, v24);
        addr_8048519_132:
        __asm__("int 0x80");
        __asm__("int 0x80");
        fun_8048b88(6, v24);
    }
    addr_8048997_66:
    addr_804899c_76:
    eax27 = 12;
    __asm__("int 0x80");
    goto addr_80489e3_137;
    addr_80489a3_70:
    zf77 = (reinterpret_cast<uint32_t>(g8048d69) & 2) == 0;
    if (zf77) {
        addr_80489e1_138:
        goto addr_80489ef_139;
    } else {
        eax27 = 39;
        __asm__("int 0x80");
        goto addr_80489e3_137;
    }
    addr_80489ce_72:
    zf78 = (reinterpret_cast<uint32_t>(g8048d69) & 2) == 0;
    if (zf78) 
        goto addr_80489e1_138;
    eax27 = 40;
    __asm__("int 0x80");
    goto addr_80489e3_137;
    addr_80489bb_74:
    zf79 = (reinterpret_cast<uint32_t>(g8048d69) & 2) == 0;
    if (zf79) 
        goto addr_80489e1_138;
    eax27 = 10;
    __asm__("int 0x80");
    goto addr_80489e3_137;
    addr_804894e_78:
    eax27 = 0x6a;
    __asm__("int 0x80");
    if (0) {
        addr_80489e3_137:
        if (eax27) {
            addr_80489ef_139:
            ecx12 = reinterpret_cast<struct s0**>(12);
        } else {
            ecx12 = reinterpret_cast<struct s0**>(8);
        }
    } else {
        fun_8048b8e(18, edi11);
        fun_8048acc(18);
        *reinterpret_cast<int16_t*>(&g8048fac + 1) = 0xa0d;
        fun_8048b7f(0x8048fad, v80);
        goto addr_8048997_66;
    }
    while (1) {
        addr_80489f4_148:
        fun_8048b88(ecx12, v81);
        addr_80489f9_24:
        fun_8048b5d(ecx12);
        eax82 = fun_8048bd4(ecx12);
        ecx12 = eax82;
    }
    addr_8048a06_26:
    fun_8048b5d(ecx12);
    eax83 = fun_8048c29(ecx12);
    ecx12 = eax83;
    goto addr_80489f4_148;
    addr_8048a13_29:
    ecx12 = reinterpret_cast<struct s0**>(3);
    goto addr_80489f4_148;
    addr_8048a1a_31:
    ecx12 = reinterpret_cast<struct s0**>(2);
    goto addr_80489f4_148;
    addr_80485b4_48:
    goto addr_80489e3_137;
    addr_8048a21_111:
    ecx12 = reinterpret_cast<struct s0**>(6);
    goto addr_80489f4_148;
    addr_80483a8_8:
    eax5 = reinterpret_cast<signed char*>(0);
    goto addr_80483aa_4;
}

signed char g8048d79;

struct s4 {
    signed char f0;
    int16_t f1;
};

signed char* fun_8048b88(struct s0** ecx, struct s0** a2) {
    void* esp3;
    struct s0** ecx4;
    int1_t zf5;
    void* esp6;
    uint32_t eax7;
    int1_t zf8;
    int1_t zf9;
    struct s0** eax10;
    struct s0** v11;
    struct s0** eax12;
    struct s0** v13;
    struct s0** ecx14;
    signed char* eax15;
    int1_t zf16;
    int1_t zf17;
    struct s0** v18;
    void* esp19;
    void* esp20;
    struct s0** edi21;
    struct s0** v22;
    signed char* eax23;
    int1_t zf24;
    struct s0** v25;
    struct s0*** esp26;
    void* esp27;
    struct s0** eax28;
    struct s0** v29;
    int1_t zf30;
    struct s0** v31;
    int1_t zf32;
    struct s0** v33;
    struct s0** v34;
    void* esp35;
    void* esp36;
    uint64_t v37;
    int16_t* esp38;
    struct s0** v39;
    signed char* edi40;
    signed char al41;
    signed char* esi42;
    int32_t ecx43;
    struct s0** v44;
    signed char* eax45;
    struct s0** v46;
    struct s0** v47;
    void* esp48;
    struct s4* edi49;
    struct s0*** esp50;
    struct s0** ecx51;
    int32_t v52;
    struct s0** v53;
    void* esp54;
    void* esp55;
    signed char* esi56;
    int1_t zf57;
    int1_t zf58;
    int32_t ecx59;
    int16_t ebx60;
    int16_t v61;
    int16_t bx62;
    int32_t ebx63;
    int16_t bx64;
    int32_t ebx65;
    int32_t ebx66;
    void* esp67;
    struct s0** v68;
    struct s0** v69;
    void* esp70;
    signed char* eax71;
    int1_t zf72;
    void* esp73;
    struct s0** v74;
    struct s0** v75;
    int1_t zf76;
    struct s0** eax77;
    int1_t zf78;
    int32_t v79;

    esp3 = __zero_stack_offset();
    g8048d79 = reinterpret_cast<signed char>(g8048d79 + 1);
    __asm__("pushad ");
    do {
        __asm__("lodsb ");
        ecx = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(ecx) - 1);
    } while (ecx);
    ecx4 = reinterpret_cast<struct s0**>(0x804805f);
    __asm__("int 0x80");
    __asm__("popad ");
    g8048d79 = reinterpret_cast<signed char>(g8048d79 - 1);
    zf5 = g8048d79 == 0;
    if (zf5) {
        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 + 4 + 4 + 4);
        goto addr_8048345_7;
    } else {
        g8048d79 = reinterpret_cast<signed char>(g8048d79 + 1);
        return 4;
    }
    addr_8048997_9:
    addr_804899c_10:
    eax7 = 12;
    __asm__("int 0x80");
    goto addr_80489e3_11;
    addr_80489ce_12:
    zf8 = (reinterpret_cast<uint32_t>(g8048d69) & 2) == 0;
    if (zf8) 
        goto addr_80489e1_13;
    eax7 = 40;
    __asm__("int 0x80");
    goto addr_80489e3_11;
    addr_80489bb_15:
    zf9 = (reinterpret_cast<uint32_t>(g8048d69) & 2) == 0;
    if (zf9) 
        goto addr_80489e1_13;
    eax7 = 10;
    __asm__("int 0x80");
    goto addr_80489e3_11;
    addr_8048a06_17:
    fun_8048b5d(ecx4);
    eax10 = fun_8048c29(ecx4);
    ecx4 = eax10;
    while (1) {
        addr_80489f4_18:
        fun_8048b88(ecx4, v11);
        addr_80489f9_19:
        fun_8048b5d(ecx4);
        eax12 = fun_8048bd4(ecx4);
        ecx4 = eax12;
    }
    addr_8048a13_20:
    ecx4 = reinterpret_cast<struct s0**>(3);
    goto addr_80489f4_18;
    addr_8048a1a_21:
    ecx4 = reinterpret_cast<struct s0**>(2);
    goto addr_80489f4_18;
    addr_8048a21_22:
    ecx4 = reinterpret_cast<struct s0**>(6);
    goto addr_80489f4_18;
    addr_80485b4_23:
    goto addr_80489e3_11;
    while (1) {
        addr_8048533_24:
        fun_8048b8e(16, v13);
        addr_8048519_25:
        __asm__("int 0x80");
        __asm__("int 0x80");
        fun_8048b88(6, v13);
    }
    while (1) {
        addr_80484cf_26:
        eax15 = fun_8048358(ecx14);
        zf16 = reinterpret_cast<int1_t>(eax15 == 0x524f4241);
        if (!zf16) {
            zf16 = reinterpret_cast<int1_t>(eax15 == 0x4f4241f2);
        }
        if (zf16) 
            goto addr_8048533_24;
        ecx14 = reinterpret_cast<struct s0**>(0x8048fad);
        __asm__("int 0x80");
        if (0) 
            goto addr_8048519_25;
        zf17 = g8048d18 == 65;
        if (!zf17) {
            ecx14 = reinterpret_cast<struct s0**>(0x8048fad);
            __asm__("int 0x80");
        } else {
            fun_8048b0c(0x8048fad);
        }
    }
    while (1) {
        addr_8048a65_33:
        fun_8048b8e(5, v18);
        esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 + 4);
        while (1) {
            addr_8048303_34:
            while (1) {
                __asm__("int 0x80");
                __asm__("int 0x80");
                esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 + 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
                if (1 || (esp20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 - 4), esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp20) - 4 + 4 - 4 + 4 + 8), 1)) {
                    addr_80482be_37:
                    continue;
                } else {
                    fun_8048ca2(esp20);
                    esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 - 4 + 4 + 4 - 4 + 4);
                    __asm__("int 0x80");
                    if (!0) 
                        goto addr_8048303_34;
                    while (1) {
                        g8048e79 = 16;
                        __asm__("int 0x80");
                        esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
                        if (0) 
                            continue;
                        esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 + 4);
                        __asm__("int 0x80");
                        if (0) 
                            break;
                    }
                    edi21 = reinterpret_cast<struct s0**>(0);
                    ecx4 = reinterpret_cast<struct s0**>(4);
                    fun_8048b8e(4, v22);
                    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 + 4);
                    while (1) {
                        addr_8048345_7:
                        eax23 = fun_8048358(ecx4);
                        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 + 4);
                        if (!eax23) 
                            continue;
                        zf24 = g8048d68 == 0;
                        if (zf24) {
                            if (eax23 == 0x52455355) 
                                goto addr_80489f9_19;
                            if (eax23 == 0x53534150) 
                                goto addr_8048a06_17;
                            if (eax23 == 0x54495551) 
                                goto addr_8048a65_33;
                            if (eax23 == 0x54535953) 
                                goto addr_8048a13_20;
                            if (eax23 == 0x504f4f4e) 
                                goto addr_8048a1a_21;
                            ecx4 = reinterpret_cast<struct s0**>(20);
                            eax23 = fun_8048b88(20, v25);
                            esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 + 4);
                        }
                        esp26 = reinterpret_cast<struct s0***>(reinterpret_cast<int32_t>(esp6) - 4);
                        *reinterpret_cast<unsigned char*>(&g8048fac) = 1;
                        if (eax23 == 0x52544552) 
                            goto addr_8048473_52;
                        *reinterpret_cast<unsigned char*>(&g8048fac) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&g8048fac) + 1);
                        if (!reinterpret_cast<int1_t>(eax23 == 0x524f5453)) {
                            addr_8048553_54:
                            esp27 = reinterpret_cast<void*>(esp26 + 1);
                            g8048d75 = reinterpret_cast<struct s0**>(0);
                            if (reinterpret_cast<int1_t>(eax23 == 0x54534552)) {
                                eax28 = fun_8048af6();
                                g8048d75 = eax28;
                                ecx4 = reinterpret_cast<struct s0**>(15);
                                eax23 = fun_8048b88(15, v29);
                                esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 + 4 - 4 + 4);
                            }
                        } else {
                            zf30 = (reinterpret_cast<uint32_t>(g8048d69) & 1) == 0;
                            if (zf30) {
                                addr_804853f_57:
                                __asm__("int 0x80");
                                ecx4 = reinterpret_cast<struct s0**>(12);
                                eax23 = fun_8048b88(12, v31);
                                esp26 = esp26 + 1 - 1 + 1 - 1 + 1;
                                goto addr_8048553_54;
                            } else {
                                addr_8048473_52:
                                fun_8048b5d(ecx4);
                                v13 = edi21;
                                zf32 = (*reinterpret_cast<unsigned char*>(&g8048fac) & 2) == 0;
                                if (!zf32) {
                                    goto addr_804848d_59;
                                }
                            }
                        }
                        *reinterpret_cast<unsigned char*>(&g8048fac) = 3;
                        if (*reinterpret_cast<int16_t*>(&eax23) != 0x494c) {
                            addr_80486d9_61:
                            if (*reinterpret_cast<int16_t*>(&eax23) == 0x4f50) 
                                break;
                        } else {
                            if (!v33) {
                                fun_8048358(ecx4);
                                esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 + 4);
                            }
                            eax7 = 0x6a;
                            __asm__("int 0x80");
                            if (!1) 
                                goto addr_80485b4_23;
                            fun_8048b8e(1, v34);
                            esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 + 4 - 4 + 4 - 4 + 4);
                            __asm__("int 0x80");
                            if (1) 
                                goto addr_80486ae_66; else 
                                goto addr_80485d0_67;
                        }
                        while (reinterpret_cast<int1_t>(eax23 == 0x56534150)) {
                            g8048f78 = reinterpret_cast<struct s0*>(2);
                            g8048f7c = 0;
                            __asm__("int 0x80");
                            esp36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
                            if (!0 && ((esp36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp36) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 20), !0) && (esp36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp36) - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12), !0))) {
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v37) + 2) = 16;
                                __asm__("int 0x80");
                                esp38 = reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp36) - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12 - 2);
                                *reinterpret_cast<int16_t*>(&v37) = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&g8048f78) + 2);
                                if (0) 
                                    goto addr_8048788_71;
                                __asm__("int 0x80");
                                esp38 = esp38 - 2 - 2 - 2 + 2 - 2 + 2 + 4;
                                if (0) 
                                    goto addr_8048788_71;
                                g8048d71 = reinterpret_cast<signed char*>(0x66);
                                __asm__("int 0x80");
                                esp38 = esp38 - 2 - 2 - 2 - 2 + 2 - 2 + 2 + 6;
                                if (!0) 
                                    goto addr_8048861_74;
                                addr_8048788_71:
                                esp36 = reinterpret_cast<void*>(esp38 + 2 + 2);
                            }
                            ecx4 = reinterpret_cast<struct s0**>(0x1f6);
                            eax23 = fun_8048b88(0x1f6, v39);
                            esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp36) - 4 + 4);
                        }
                        addr_80488bb_76:
                        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4);
                        edi40 = "ISFAISF";
                        if (*reinterpret_cast<int16_t*>(&eax23) == 0x5954 || ((edi40 = "SFAISF", *reinterpret_cast<int16_t*>(&eax23) == 0x4f4d) || (edi40 = "FAISF", reinterpret_cast<int1_t>(eax23 == 0x55525453)))) {
                            al41 = g804afb2;
                            esi42 = "AISF";
                            ecx43 = 4;
                            do {
                                if (al41 == *esi42) 
                                    break;
                                ++esi42;
                                --ecx43;
                            } while (ecx43);
                            goto addr_80488ec_80;
                        } else {
                            addr_8048900_81:
                            if (*reinterpret_cast<int16_t*>(&eax23) == 0x4443) 
                                goto addr_8048997_9; else 
                                goto addr_804890a_82;
                        }
                        *edi40 = al41;
                        ecx4 = reinterpret_cast<struct s0**>(2);
                        addr_80488fa_84:
                        eax23 = fun_8048b88(ecx4, v44);
                        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) + 4 - 4 + 4);
                        goto addr_8048900_81;
                        addr_80488ec_80:
                        ecx4 = reinterpret_cast<struct s0**>(11);
                        goto addr_80488fa_84;
                        addr_804890a_82:
                        fun_8048b5d(ecx4);
                        eax45 = eax23;
                        edi21 = v46;
                        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 - 4 + 4 + 4 + 4);
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x4b4d) 
                            goto addr_80489a3_85;
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x4d52) 
                            goto addr_80489ce_12;
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x4544) 
                            goto addr_80489bb_15;
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x5743) 
                            goto addr_804899c_10;
                        if (eax45 == 0x455a4953) 
                            goto addr_804894e_90;
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x5355) 
                            goto addr_80489f9_19;
                        if (eax45 == 0x53534150) 
                            goto addr_8048a06_17;
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x5953) 
                            goto addr_8048a13_20;
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x4f4e) 
                            goto addr_8048a1a_21;
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x5551) 
                            goto addr_8048a65_33;
                        if (*reinterpret_cast<int16_t*>(&eax45) != 0x5750) 
                            goto addr_8048a4d_98;
                        fun_8048b8e(9, v47);
                        esp48 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 + 4);
                        __asm__("int 0x80");
                        do {
                            __asm__("lodsb ");
                        } while (1);
                        g8048fac = reinterpret_cast<signed char>(0xa0d22);
                        ecx4 = reinterpret_cast<struct s0**>(0x8048fad);
                        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp48) - 4 + 4);
                        __asm__("int 0x80");
                        continue;
                        addr_8048861_74:
                        edi49 = reinterpret_cast<struct s4*>(0x8048fad);
                        fun_8048b8e(17, *reinterpret_cast<struct s0***>(&v37));
                        esp50 = reinterpret_cast<struct s0***>(esp38 - 2 + 2);
                        ecx51 = reinterpret_cast<struct s0**>(0);
                        *reinterpret_cast<signed char*>(&ecx51) = 4;
                        do {
                            __asm__("lodsb ");
                            fun_8048acc(ecx51);
                            esp50 = esp50 - 1 + 1;
                            edi49->f0 = 44;
                            edi49 = reinterpret_cast<struct s4*>(&edi49->f1);
                            ecx51 = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(ecx51) - 1);
                        } while (ecx51);
                        fun_8048acc(*reinterpret_cast<struct s0***>(&v37));
                        edi49->f0 = 44;
                        fun_8048acc(*reinterpret_cast<struct s0***>(&v37));
                        edi49->f1 = 0xa0d;
                        ecx4 = reinterpret_cast<struct s0**>(0x8048fad);
                        eax23 = fun_8048b7f(0x8048fad, v52);
                        esp27 = reinterpret_cast<void*>(esp50 + 1 - 1 + 1 - 1 + 1 + 1 - 1 + 1);
                        goto addr_80488bb_76;
                        do {
                            addr_80486ae_66:
                            esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp35) - 4 + 4 - 4 + 4);
                            __asm__("int 0x80");
                        } while (0);
                        __asm__("int 0x80");
                        ecx4 = reinterpret_cast<struct s0**>(8);
                        eax23 = fun_8048b88(8, v53);
                        esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp35) - 4 + 4 - 4 + 4);
                        goto addr_80486d9_61;
                        addr_80485d0_67:
                        __asm__("int 0x80");
                        esp54 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp35) - 4 + 4 - 4 + 4);
                        __asm__("int 0x80");
                        if (!0) 
                            goto addr_80485e3_114;
                        __asm__("int 0x80");
                        __asm__("int 0x80");
                        __asm__("int 0x80");
                        esp55 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp54) - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4);
                        g8048f88 = reinterpret_cast<int32_t>("/bin/ls");
                        esi56 = "-la";
                        g8048f8c = "-la";
                        __asm__("repne lodsb ");
                        zf57 = g804afb1 == 13;
                        if (!zf57) 
                            goto addr_8048680_116;
                        addr_8048693_117:
                        __asm__("int 0x80");
                        esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp55) + 4 - 4 + 4 - 4 + 4);
                        __asm__("int 0x80");
                        goto addr_80486ae_66;
                        addr_8048680_116:
                        fun_8048b5d(8);
                        esp55 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp55) - 4 + 4);
                        zf58 = g8048058 == 45;
                        if (zf58) {
                            esi56 = "..";
                        }
                        g8048f90 = esi56;
                        goto addr_8048693_117;
                        addr_804848d_59:
                        esp26 = esp26 - 1 + 1 + 1 - 1 - 1 + 1;
                        __asm__("int 0x80");
                        if (0) 
                            goto addr_804853f_57; else 
                            goto addr_80484a3_120;
                    }
                }
                ecx59 = 4;
                do {
                    ebx60 = reinterpret_cast<int16_t>(0);
                    fun_8048ab6();
                    esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 + 4);
                    --ecx59;
                } while (ecx59);
                v61 = reinterpret_cast<int16_t>(0);
                bx62 = 0;
                *reinterpret_cast<signed char*>(&ebx60) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&bx62) + 1);
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx60) + 1) = 0;
                ebx63 = ebx60 << 16;
                bx64 = (&v61)[1];
                *reinterpret_cast<signed char*>(&ebx63) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&bx64) + 1);
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx63) + 1) = *reinterpret_cast<signed char*>(&bx64);
                g8048f84 = ebx63;
                fun_8048ab6();
                ebx65 = 0;
                fun_8048ab6();
                *reinterpret_cast<signed char*>(&ebx65) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx65) + 1);
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx65) + 1) = 0;
                ebx66 = ebx65 << 16;
                *reinterpret_cast<signed char*>(&ebx66) = 2;
                g8048f80 = ebx66;
                __asm__("int 0x80");
                esp67 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 + 2 + 2 - 4 + 4 - 4 + 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
                if (!0 && (esp67 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp67) - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12), !0)) {
                    fun_8048b88(2, v68);
                    esp67 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp67) + 4 - 4 + 4);
                }
                fun_8048b8e(10, v69);
                __asm__("int 0x80");
                esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp67) - 4 + 4 - 4 - 4 - 4 + 4 - 4 + 4 + 8 - 4 + 4);
                __asm__("int 0x80");
                goto addr_80482be_37;
                addr_80485e3_114:
                esp70 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp54) - 4 + 4);
                __asm__("int 0x80");
                while (1) {
                    esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp70) - 4 + 4);
                    __asm__("int 0x80");
                    if (0) 
                        goto addr_8048625_127;
                    eax71 = fun_8048358(0x8048fad);
                    zf72 = reinterpret_cast<int1_t>(eax71 == 0x524f4241);
                    if (!zf72) {
                        zf72 = reinterpret_cast<int1_t>(eax71 == 0x4f4241f2);
                    }
                    esp73 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 - 4 + 4 + 4);
                    if (zf72) 
                        break;
                    fun_8048b0c(0x8048fad);
                    esp70 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp73) - 4 + 4);
                }
                fun_8048b8e(16, v74);
                esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp73) - 4 + 4);
                goto addr_80482be_37;
            }
            addr_8048625_127:
        }
        addr_8048a4d_98:
        if (eax45 == 0x524f4241) 
            goto addr_8048a21_22;
        if (eax45 == 0x4f4241f2) 
            goto addr_8048a21_22;
        fun_8048b88(11, v75);
        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 + 4);
    }
    addr_80484a3_120:
    ecx14 = reinterpret_cast<struct s0**>(1);
    fun_8048b8e(1, v13);
    zf76 = (*reinterpret_cast<unsigned char*>(&g8048fac) & 2) == 0;
    if (zf76) {
        eax77 = g8048d75;
        if (eax77) {
            ecx14 = eax77;
            __asm__("int 0x80");
            goto addr_80484cf_26;
        }
    } else {
        goto addr_80484cf_26;
    }
    addr_80489a3_85:
    zf78 = (reinterpret_cast<uint32_t>(g8048d69) & 2) == 0;
    if (zf78) {
        addr_80489e1_13:
        goto addr_80489ef_138;
    } else {
        eax7 = 39;
        __asm__("int 0x80");
        goto addr_80489e3_11;
    }
    addr_804894e_90:
    eax7 = 0x6a;
    __asm__("int 0x80");
    if (0) {
        addr_80489e3_11:
        if (eax7) {
            addr_80489ef_138:
            ecx4 = reinterpret_cast<struct s0**>(12);
            goto addr_80489f4_18;
        } else {
            ecx4 = reinterpret_cast<struct s0**>(8);
            goto addr_80489f4_18;
        }
    } else {
        fun_8048b8e(18, edi21);
        fun_8048acc(18);
        *reinterpret_cast<int16_t*>(&g8048fac + 1) = 0xa0d;
        fun_8048b7f(0x8048fad, v79);
        goto addr_8048997_9;
    }
}

void fun_8048b5d(struct s0** ecx) {
    int32_t ecx2;
    signed char* edi3;

    ecx2 = 0x400;
    edi3 = reinterpret_cast<signed char*>(0x804afad);
    do {
        if (!ecx2) 
            break;
        --ecx2;
        ++edi3;
    } while (*edi3 != 32);
    do {
        if (!ecx2) 
            break;
        --ecx2;
        ++edi3;
    } while (*edi3 != 13);
    *(edi3 - 1) = 0;
    return;
}

struct s5 {
    signed char f0;
    int16_t f1;
};

void* fun_8048b8e(struct s0** ecx, struct s0** a2) {
    void* esp3;
    struct s0** ecx4;
    int1_t zf5;
    void* esp6;
    uint32_t eax7;
    int1_t zf8;
    int1_t zf9;
    struct s0** eax10;
    struct s0** v11;
    struct s0** eax12;
    struct s0** v13;
    struct s0** ecx14;
    signed char* eax15;
    int1_t zf16;
    int1_t zf17;
    struct s0** v18;
    void* esp19;
    void* esp20;
    struct s0** edi21;
    struct s0** v22;
    signed char* eax23;
    int1_t zf24;
    struct s0** v25;
    struct s0*** esp26;
    void* esp27;
    struct s0** eax28;
    struct s0** v29;
    int1_t zf30;
    struct s0** v31;
    int1_t zf32;
    struct s0** v33;
    struct s0** v34;
    void* esp35;
    void* esp36;
    uint64_t v37;
    int16_t* esp38;
    struct s0** v39;
    signed char* edi40;
    signed char al41;
    signed char* esi42;
    int32_t ecx43;
    struct s0** v44;
    signed char* eax45;
    struct s0** v46;
    struct s0** v47;
    void* esp48;
    struct s5* edi49;
    struct s0*** esp50;
    struct s0** ecx51;
    int32_t v52;
    struct s0** v53;
    void* esp54;
    void* esp55;
    signed char* esi56;
    int1_t zf57;
    int1_t zf58;
    int32_t ecx59;
    int16_t ebx60;
    int16_t v61;
    int16_t bx62;
    int32_t ebx63;
    int16_t bx64;
    int32_t ebx65;
    int32_t ebx66;
    void* esp67;
    struct s0** v68;
    struct s0** v69;
    void* esp70;
    signed char* eax71;
    int1_t zf72;
    void* esp73;
    struct s0** v74;
    struct s0** v75;
    int1_t zf76;
    struct s0** eax77;
    int1_t zf78;
    int32_t v79;

    esp3 = __zero_stack_offset();
    __asm__("pushad ");
    do {
        __asm__("lodsb ");
        ecx = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(ecx) - 1);
    } while (ecx);
    ecx4 = reinterpret_cast<struct s0**>(0x804805f);
    __asm__("int 0x80");
    __asm__("popad ");
    g8048d79 = reinterpret_cast<signed char>(g8048d79 - 1);
    zf5 = g8048d79 == 0;
    if (zf5) {
        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 + 4 + 4 + 4);
        goto addr_8048345_6;
    } else {
        g8048d79 = reinterpret_cast<signed char>(g8048d79 + 1);
        return 4;
    }
    addr_8048997_8:
    addr_804899c_9:
    eax7 = 12;
    __asm__("int 0x80");
    goto addr_80489e3_10;
    addr_80489ce_11:
    zf8 = (reinterpret_cast<uint32_t>(g8048d69) & 2) == 0;
    if (zf8) 
        goto addr_80489e1_12;
    eax7 = 40;
    __asm__("int 0x80");
    goto addr_80489e3_10;
    addr_80489bb_14:
    zf9 = (reinterpret_cast<uint32_t>(g8048d69) & 2) == 0;
    if (zf9) 
        goto addr_80489e1_12;
    eax7 = 10;
    __asm__("int 0x80");
    goto addr_80489e3_10;
    addr_8048a06_16:
    fun_8048b5d(ecx4);
    eax10 = fun_8048c29(ecx4);
    ecx4 = eax10;
    while (1) {
        addr_80489f4_17:
        fun_8048b88(ecx4, v11);
        addr_80489f9_18:
        fun_8048b5d(ecx4);
        eax12 = fun_8048bd4(ecx4);
        ecx4 = eax12;
    }
    addr_8048a13_19:
    ecx4 = reinterpret_cast<struct s0**>(3);
    goto addr_80489f4_17;
    addr_8048a1a_20:
    ecx4 = reinterpret_cast<struct s0**>(2);
    goto addr_80489f4_17;
    addr_8048a21_21:
    ecx4 = reinterpret_cast<struct s0**>(6);
    goto addr_80489f4_17;
    addr_80485b4_22:
    goto addr_80489e3_10;
    while (1) {
        addr_8048533_23:
        fun_8048b8e(16, v13);
        addr_8048519_24:
        __asm__("int 0x80");
        __asm__("int 0x80");
        fun_8048b88(6, v13);
    }
    while (1) {
        addr_80484cf_25:
        eax15 = fun_8048358(ecx14);
        zf16 = reinterpret_cast<int1_t>(eax15 == 0x524f4241);
        if (!zf16) {
            zf16 = reinterpret_cast<int1_t>(eax15 == 0x4f4241f2);
        }
        if (zf16) 
            goto addr_8048533_23;
        ecx14 = reinterpret_cast<struct s0**>(0x8048fad);
        __asm__("int 0x80");
        if (0) 
            goto addr_8048519_24;
        zf17 = g8048d18 == 65;
        if (!zf17) {
            ecx14 = reinterpret_cast<struct s0**>(0x8048fad);
            __asm__("int 0x80");
        } else {
            fun_8048b0c(0x8048fad);
        }
    }
    while (1) {
        addr_8048a65_32:
        fun_8048b8e(5, v18);
        esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 + 4);
        while (1) {
            addr_8048303_33:
            while (1) {
                __asm__("int 0x80");
                __asm__("int 0x80");
                esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 + 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
                if (1 || (esp20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 - 4), esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp20) - 4 + 4 - 4 + 4 + 8), 1)) {
                    addr_80482be_36:
                    continue;
                } else {
                    fun_8048ca2(esp20);
                    esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 - 4 + 4 + 4 - 4 + 4);
                    __asm__("int 0x80");
                    if (!0) 
                        goto addr_8048303_33;
                    while (1) {
                        g8048e79 = 16;
                        __asm__("int 0x80");
                        esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
                        if (0) 
                            continue;
                        esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 + 4);
                        __asm__("int 0x80");
                        if (0) 
                            break;
                    }
                    edi21 = reinterpret_cast<struct s0**>(0);
                    ecx4 = reinterpret_cast<struct s0**>(4);
                    fun_8048b8e(4, v22);
                    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 + 4);
                    while (1) {
                        addr_8048345_6:
                        eax23 = fun_8048358(ecx4);
                        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 + 4);
                        if (!eax23) 
                            continue;
                        zf24 = g8048d68 == 0;
                        if (zf24) {
                            if (eax23 == 0x52455355) 
                                goto addr_80489f9_18;
                            if (eax23 == 0x53534150) 
                                goto addr_8048a06_16;
                            if (eax23 == 0x54495551) 
                                goto addr_8048a65_32;
                            if (eax23 == 0x54535953) 
                                goto addr_8048a13_19;
                            if (eax23 == 0x504f4f4e) 
                                goto addr_8048a1a_20;
                            ecx4 = reinterpret_cast<struct s0**>(20);
                            eax23 = fun_8048b88(20, v25);
                            esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 + 4);
                        }
                        esp26 = reinterpret_cast<struct s0***>(reinterpret_cast<int32_t>(esp6) - 4);
                        *reinterpret_cast<unsigned char*>(&g8048fac) = 1;
                        if (eax23 == 0x52544552) 
                            goto addr_8048473_51;
                        *reinterpret_cast<unsigned char*>(&g8048fac) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&g8048fac) + 1);
                        if (!reinterpret_cast<int1_t>(eax23 == 0x524f5453)) {
                            addr_8048553_53:
                            esp27 = reinterpret_cast<void*>(esp26 + 1);
                            g8048d75 = reinterpret_cast<struct s0**>(0);
                            if (reinterpret_cast<int1_t>(eax23 == 0x54534552)) {
                                eax28 = fun_8048af6();
                                g8048d75 = eax28;
                                ecx4 = reinterpret_cast<struct s0**>(15);
                                eax23 = fun_8048b88(15, v29);
                                esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 + 4 - 4 + 4);
                            }
                        } else {
                            zf30 = (reinterpret_cast<uint32_t>(g8048d69) & 1) == 0;
                            if (zf30) {
                                addr_804853f_56:
                                __asm__("int 0x80");
                                ecx4 = reinterpret_cast<struct s0**>(12);
                                eax23 = fun_8048b88(12, v31);
                                esp26 = esp26 + 1 - 1 + 1 - 1 + 1;
                                goto addr_8048553_53;
                            } else {
                                addr_8048473_51:
                                fun_8048b5d(ecx4);
                                v13 = edi21;
                                zf32 = (*reinterpret_cast<unsigned char*>(&g8048fac) & 2) == 0;
                                if (!zf32) {
                                    goto addr_804848d_58;
                                }
                            }
                        }
                        *reinterpret_cast<unsigned char*>(&g8048fac) = 3;
                        if (*reinterpret_cast<int16_t*>(&eax23) != 0x494c) {
                            addr_80486d9_60:
                            if (*reinterpret_cast<int16_t*>(&eax23) == 0x4f50) 
                                break;
                        } else {
                            if (!v33) {
                                fun_8048358(ecx4);
                                esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 + 4);
                            }
                            eax7 = 0x6a;
                            __asm__("int 0x80");
                            if (!1) 
                                goto addr_80485b4_22;
                            fun_8048b8e(1, v34);
                            esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 + 4 - 4 + 4 - 4 + 4);
                            __asm__("int 0x80");
                            if (1) 
                                goto addr_80486ae_65; else 
                                goto addr_80485d0_66;
                        }
                        while (reinterpret_cast<int1_t>(eax23 == 0x56534150)) {
                            g8048f78 = reinterpret_cast<struct s0*>(2);
                            g8048f7c = 0;
                            __asm__("int 0x80");
                            esp36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
                            if (!0 && ((esp36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp36) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 20), !0) && (esp36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp36) - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12), !0))) {
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v37) + 2) = 16;
                                __asm__("int 0x80");
                                esp38 = reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp36) - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12 - 2);
                                *reinterpret_cast<int16_t*>(&v37) = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&g8048f78) + 2);
                                if (0) 
                                    goto addr_8048788_70;
                                __asm__("int 0x80");
                                esp38 = esp38 - 2 - 2 - 2 + 2 - 2 + 2 + 4;
                                if (0) 
                                    goto addr_8048788_70;
                                g8048d71 = reinterpret_cast<signed char*>(0x66);
                                __asm__("int 0x80");
                                esp38 = esp38 - 2 - 2 - 2 - 2 + 2 - 2 + 2 + 6;
                                if (!0) 
                                    goto addr_8048861_73;
                                addr_8048788_70:
                                esp36 = reinterpret_cast<void*>(esp38 + 2 + 2);
                            }
                            ecx4 = reinterpret_cast<struct s0**>(0x1f6);
                            eax23 = fun_8048b88(0x1f6, v39);
                            esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp36) - 4 + 4);
                        }
                        addr_80488bb_75:
                        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4);
                        edi40 = "ISFAISF";
                        if (*reinterpret_cast<int16_t*>(&eax23) == 0x5954 || ((edi40 = "SFAISF", *reinterpret_cast<int16_t*>(&eax23) == 0x4f4d) || (edi40 = "FAISF", reinterpret_cast<int1_t>(eax23 == 0x55525453)))) {
                            al41 = g804afb2;
                            esi42 = "AISF";
                            ecx43 = 4;
                            do {
                                if (al41 == *esi42) 
                                    break;
                                ++esi42;
                                --ecx43;
                            } while (ecx43);
                            goto addr_80488ec_79;
                        } else {
                            addr_8048900_80:
                            if (*reinterpret_cast<int16_t*>(&eax23) == 0x4443) 
                                goto addr_8048997_8; else 
                                goto addr_804890a_81;
                        }
                        *edi40 = al41;
                        ecx4 = reinterpret_cast<struct s0**>(2);
                        addr_80488fa_83:
                        eax23 = fun_8048b88(ecx4, v44);
                        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) + 4 - 4 + 4);
                        goto addr_8048900_80;
                        addr_80488ec_79:
                        ecx4 = reinterpret_cast<struct s0**>(11);
                        goto addr_80488fa_83;
                        addr_804890a_81:
                        fun_8048b5d(ecx4);
                        eax45 = eax23;
                        edi21 = v46;
                        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 - 4 + 4 + 4 + 4);
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x4b4d) 
                            goto addr_80489a3_84;
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x4d52) 
                            goto addr_80489ce_11;
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x4544) 
                            goto addr_80489bb_14;
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x5743) 
                            goto addr_804899c_9;
                        if (eax45 == 0x455a4953) 
                            goto addr_804894e_89;
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x5355) 
                            goto addr_80489f9_18;
                        if (eax45 == 0x53534150) 
                            goto addr_8048a06_16;
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x5953) 
                            goto addr_8048a13_19;
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x4f4e) 
                            goto addr_8048a1a_20;
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x5551) 
                            goto addr_8048a65_32;
                        if (*reinterpret_cast<int16_t*>(&eax45) != 0x5750) 
                            goto addr_8048a4d_97;
                        fun_8048b8e(9, v47);
                        esp48 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 + 4);
                        __asm__("int 0x80");
                        do {
                            __asm__("lodsb ");
                        } while (1);
                        g8048fac = reinterpret_cast<signed char>(0xa0d22);
                        ecx4 = reinterpret_cast<struct s0**>(0x8048fad);
                        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp48) - 4 + 4);
                        __asm__("int 0x80");
                        continue;
                        addr_8048861_73:
                        edi49 = reinterpret_cast<struct s5*>(0x8048fad);
                        fun_8048b8e(17, *reinterpret_cast<struct s0***>(&v37));
                        esp50 = reinterpret_cast<struct s0***>(esp38 - 2 + 2);
                        ecx51 = reinterpret_cast<struct s0**>(0);
                        *reinterpret_cast<signed char*>(&ecx51) = 4;
                        do {
                            __asm__("lodsb ");
                            fun_8048acc(ecx51);
                            esp50 = esp50 - 1 + 1;
                            edi49->f0 = 44;
                            edi49 = reinterpret_cast<struct s5*>(&edi49->f1);
                            ecx51 = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(ecx51) - 1);
                        } while (ecx51);
                        fun_8048acc(*reinterpret_cast<struct s0***>(&v37));
                        edi49->f0 = 44;
                        fun_8048acc(*reinterpret_cast<struct s0***>(&v37));
                        edi49->f1 = 0xa0d;
                        ecx4 = reinterpret_cast<struct s0**>(0x8048fad);
                        eax23 = fun_8048b7f(0x8048fad, v52);
                        esp27 = reinterpret_cast<void*>(esp50 + 1 - 1 + 1 - 1 + 1 + 1 - 1 + 1);
                        goto addr_80488bb_75;
                        do {
                            addr_80486ae_65:
                            esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp35) - 4 + 4 - 4 + 4);
                            __asm__("int 0x80");
                        } while (0);
                        __asm__("int 0x80");
                        ecx4 = reinterpret_cast<struct s0**>(8);
                        eax23 = fun_8048b88(8, v53);
                        esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp35) - 4 + 4 - 4 + 4);
                        goto addr_80486d9_60;
                        addr_80485d0_66:
                        __asm__("int 0x80");
                        esp54 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp35) - 4 + 4 - 4 + 4);
                        __asm__("int 0x80");
                        if (!0) 
                            goto addr_80485e3_113;
                        __asm__("int 0x80");
                        __asm__("int 0x80");
                        __asm__("int 0x80");
                        esp55 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp54) - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4);
                        g8048f88 = reinterpret_cast<int32_t>("/bin/ls");
                        esi56 = "-la";
                        g8048f8c = "-la";
                        __asm__("repne lodsb ");
                        zf57 = g804afb1 == 13;
                        if (!zf57) 
                            goto addr_8048680_115;
                        addr_8048693_116:
                        __asm__("int 0x80");
                        esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp55) + 4 - 4 + 4 - 4 + 4);
                        __asm__("int 0x80");
                        goto addr_80486ae_65;
                        addr_8048680_115:
                        fun_8048b5d(8);
                        esp55 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp55) - 4 + 4);
                        zf58 = g8048058 == 45;
                        if (zf58) {
                            esi56 = "..";
                        }
                        g8048f90 = esi56;
                        goto addr_8048693_116;
                        addr_804848d_58:
                        esp26 = esp26 - 1 + 1 + 1 - 1 - 1 + 1;
                        __asm__("int 0x80");
                        if (0) 
                            goto addr_804853f_56; else 
                            goto addr_80484a3_119;
                    }
                }
                ecx59 = 4;
                do {
                    ebx60 = reinterpret_cast<int16_t>(0);
                    fun_8048ab6();
                    esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 + 4);
                    --ecx59;
                } while (ecx59);
                v61 = reinterpret_cast<int16_t>(0);
                bx62 = 0;
                *reinterpret_cast<signed char*>(&ebx60) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&bx62) + 1);
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx60) + 1) = 0;
                ebx63 = ebx60 << 16;
                bx64 = (&v61)[1];
                *reinterpret_cast<signed char*>(&ebx63) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&bx64) + 1);
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx63) + 1) = *reinterpret_cast<signed char*>(&bx64);
                g8048f84 = ebx63;
                fun_8048ab6();
                ebx65 = 0;
                fun_8048ab6();
                *reinterpret_cast<signed char*>(&ebx65) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx65) + 1);
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx65) + 1) = 0;
                ebx66 = ebx65 << 16;
                *reinterpret_cast<signed char*>(&ebx66) = 2;
                g8048f80 = ebx66;
                __asm__("int 0x80");
                esp67 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 + 2 + 2 - 4 + 4 - 4 + 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
                if (!0 && (esp67 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp67) - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12), !0)) {
                    fun_8048b88(2, v68);
                    esp67 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp67) + 4 - 4 + 4);
                }
                fun_8048b8e(10, v69);
                __asm__("int 0x80");
                esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp67) - 4 + 4 - 4 - 4 - 4 + 4 - 4 + 4 + 8 - 4 + 4);
                __asm__("int 0x80");
                goto addr_80482be_36;
                addr_80485e3_113:
                esp70 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp54) - 4 + 4);
                __asm__("int 0x80");
                while (1) {
                    esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp70) - 4 + 4);
                    __asm__("int 0x80");
                    if (0) 
                        goto addr_8048625_126;
                    eax71 = fun_8048358(0x8048fad);
                    zf72 = reinterpret_cast<int1_t>(eax71 == 0x524f4241);
                    if (!zf72) {
                        zf72 = reinterpret_cast<int1_t>(eax71 == 0x4f4241f2);
                    }
                    esp73 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 - 4 + 4 + 4);
                    if (zf72) 
                        break;
                    fun_8048b0c(0x8048fad);
                    esp70 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp73) - 4 + 4);
                }
                fun_8048b8e(16, v74);
                esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp73) - 4 + 4);
                goto addr_80482be_36;
            }
            addr_8048625_126:
        }
        addr_8048a4d_97:
        if (eax45 == 0x524f4241) 
            goto addr_8048a21_21;
        if (eax45 == 0x4f4241f2) 
            goto addr_8048a21_21;
        fun_8048b88(11, v75);
        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 + 4);
    }
    addr_80484a3_119:
    ecx14 = reinterpret_cast<struct s0**>(1);
    fun_8048b8e(1, v13);
    zf76 = (*reinterpret_cast<unsigned char*>(&g8048fac) & 2) == 0;
    if (zf76) {
        eax77 = g8048d75;
        if (eax77) {
            ecx14 = eax77;
            __asm__("int 0x80");
            goto addr_80484cf_25;
        }
    } else {
        goto addr_80484cf_25;
    }
    addr_80489a3_84:
    zf78 = (reinterpret_cast<uint32_t>(g8048d69) & 2) == 0;
    if (zf78) {
        addr_80489e1_12:
        goto addr_80489ef_137;
    } else {
        eax7 = 39;
        __asm__("int 0x80");
        goto addr_80489e3_10;
    }
    addr_804894e_89:
    eax7 = 0x6a;
    __asm__("int 0x80");
    if (0) {
        addr_80489e3_10:
        if (eax7) {
            addr_80489ef_137:
            ecx4 = reinterpret_cast<struct s0**>(12);
            goto addr_80489f4_17;
        } else {
            ecx4 = reinterpret_cast<struct s0**>(8);
            goto addr_80489f4_17;
        }
    } else {
        fun_8048b8e(18, edi21);
        fun_8048acc(18);
        *reinterpret_cast<int16_t*>(&g8048fac + 1) = 0xa0d;
        fun_8048b7f(0x8048fad, v79);
        goto addr_8048997_8;
    }
}

void* fun_8048b78(struct s0** ecx, struct s0** a2);

void* fun_8048b0c(struct s0** ecx) {
    struct s0** v2;
    signed char* edi3;
    struct s0** ecx4;
    struct s0** eax5;
    signed char* esi6;
    void* edi7;
    int32_t eax8;
    struct s0** ecx9;
    int1_t zf10;
    void* eax11;

    v2 = reinterpret_cast<struct s0**>(__return_address());
    __asm__("pushad ");
    edi3 = reinterpret_cast<signed char*>(0x8048fad);
    ecx4 = eax5;
    while (1) {
        esi6 = edi3;
        do {
            if (!ecx4) 
                break;
            ecx4 = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(ecx4) - 1);
            ++edi3;
            ++esi6;
        } while (*edi3 != 10);
        edi7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edi3) - reinterpret_cast<int32_t>(esi6));
        if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi7) + reinterpret_cast<int32_t>(esi6) - 1) != 10) 
            break;
        eax8 = 1;
        ecx9 = reinterpret_cast<struct s0**>(14);
        zf10 = *reinterpret_cast<unsigned char*>(&g8048fac) == 2;
        if (zf10) {
            eax8 = 2;
            ecx9 = reinterpret_cast<struct s0**>(13);
        }
        fun_8048b78(ecx9, ecx4);
        eax11 = fun_8048b8e(ecx9, ecx4);
        ecx4 = ecx4;
        if (!ecx4) 
            goto addr_8048b2b_9;
        edi3 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi7) - eax8 + reinterpret_cast<int32_t>(eax11) + reinterpret_cast<int32_t>(esi6));
    }
    eax11 = fun_8048b78(ecx4, v2);
    addr_8048b2b_9:
    __asm__("popad ");
    return eax11;
}

struct s0** fun_8048af6() {
    struct s0** eax1;
    struct s0** ebx2;
    int1_t cf3;

    eax1 = reinterpret_cast<struct s0**>(0);
    ebx2 = reinterpret_cast<struct s0**>(0);
    while (cf3 = *reinterpret_cast<unsigned char*>(&eax1) < 48, *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1) - 48), !cf3) {
        ebx2 = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(ebx2) * 10 + reinterpret_cast<int32_t>(eax1));
    }
    return ebx2;
}

int32_t fun_8048ab6() {
    while (!1) {
    }
    return 0xd0;
}

int32_t fun_8048acc(struct s0** ecx) {
    int32_t eax2;
    uint32_t edx3;
    int32_t eax4;
    int32_t edx5;
    uint32_t eax6;
    signed char* edi7;
    int32_t eax8;

    if (eax2) {
        edx3 = eax4 % reinterpret_cast<uint32_t>(10);
        fun_8048acc(ecx);
        goto addr_8048aeb_3;
    }
    if (!edx5) {
        addr_8048aeb_3:
        eax6 = edx3 + 48;
    } else {
        goto addr_8048af1_6;
    }
    *edi7 = *reinterpret_cast<signed char*>(&eax6);
    addr_8048af1_6:
    return eax8;
}

struct s6 {
    signed char f0;
    int16_t f1;
};

signed char* fun_8048b7f(struct s0** ecx, int32_t a2) {
    int1_t zf3;
    void* esp4;
    uint32_t eax5;
    int1_t zf6;
    int1_t zf7;
    struct s0** eax8;
    struct s0** v9;
    struct s0** eax10;
    struct s0** v11;
    struct s0** ecx12;
    signed char* eax13;
    int1_t zf14;
    int1_t zf15;
    struct s0** v16;
    void* esp17;
    void* esp18;
    struct s0** edi19;
    struct s0** v20;
    signed char* eax21;
    int1_t zf22;
    struct s0** v23;
    struct s0*** esp24;
    void* esp25;
    struct s0** eax26;
    struct s0** v27;
    int1_t zf28;
    struct s0** v29;
    int1_t zf30;
    struct s0** v31;
    struct s0** v32;
    void* esp33;
    void* esp34;
    uint64_t v35;
    int16_t* esp36;
    struct s0** v37;
    signed char* edi38;
    signed char al39;
    signed char* esi40;
    int32_t ecx41;
    struct s0** v42;
    signed char* eax43;
    struct s0** v44;
    struct s0** v45;
    void* esp46;
    struct s6* edi47;
    struct s0*** esp48;
    struct s0** ecx49;
    int32_t v50;
    struct s0** v51;
    void* esp52;
    void* esp53;
    signed char* esi54;
    int1_t zf55;
    int1_t zf56;
    int32_t ecx57;
    int16_t ebx58;
    int16_t v59;
    int16_t bx60;
    int32_t ebx61;
    int16_t bx62;
    int32_t ebx63;
    int32_t ebx64;
    void* esp65;
    struct s0** v66;
    struct s0** v67;
    void* esp68;
    signed char* eax69;
    int1_t zf70;
    void* esp71;
    struct s0** v72;
    struct s0** v73;
    int1_t zf74;
    struct s0** eax75;
    int1_t zf76;
    int32_t v77;

    g8048d79 = reinterpret_cast<signed char>(g8048d79 + 1);
    __asm__("pushad ");
    __asm__("int 0x80");
    __asm__("popad ");
    g8048d79 = reinterpret_cast<signed char>(g8048d79 - 1);
    zf3 = g8048d79 == 0;
    if (zf3) {
        esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 + 4 + 4);
        goto addr_8048345_4;
    } else {
        g8048d79 = reinterpret_cast<signed char>(g8048d79 + 1);
        return 4;
    }
    addr_8048997_6:
    addr_804899c_7:
    eax5 = 12;
    __asm__("int 0x80");
    goto addr_80489e3_8;
    addr_80489ce_9:
    zf6 = (reinterpret_cast<uint32_t>(g8048d69) & 2) == 0;
    if (zf6) 
        goto addr_80489e1_10;
    eax5 = 40;
    __asm__("int 0x80");
    goto addr_80489e3_8;
    addr_80489bb_12:
    zf7 = (reinterpret_cast<uint32_t>(g8048d69) & 2) == 0;
    if (zf7) 
        goto addr_80489e1_10;
    eax5 = 10;
    __asm__("int 0x80");
    goto addr_80489e3_8;
    addr_8048a06_14:
    fun_8048b5d(ecx);
    eax8 = fun_8048c29(ecx);
    ecx = eax8;
    while (1) {
        addr_80489f4_15:
        fun_8048b88(ecx, v9);
        addr_80489f9_16:
        fun_8048b5d(ecx);
        eax10 = fun_8048bd4(ecx);
        ecx = eax10;
    }
    addr_8048a13_17:
    ecx = reinterpret_cast<struct s0**>(3);
    goto addr_80489f4_15;
    addr_8048a1a_18:
    ecx = reinterpret_cast<struct s0**>(2);
    goto addr_80489f4_15;
    addr_8048a21_19:
    ecx = reinterpret_cast<struct s0**>(6);
    goto addr_80489f4_15;
    addr_80485b4_20:
    goto addr_80489e3_8;
    while (1) {
        addr_8048533_21:
        fun_8048b8e(16, v11);
        addr_8048519_22:
        __asm__("int 0x80");
        __asm__("int 0x80");
        fun_8048b88(6, v11);
    }
    while (1) {
        addr_80484cf_23:
        eax13 = fun_8048358(ecx12);
        zf14 = reinterpret_cast<int1_t>(eax13 == 0x524f4241);
        if (!zf14) {
            zf14 = reinterpret_cast<int1_t>(eax13 == 0x4f4241f2);
        }
        if (zf14) 
            goto addr_8048533_21;
        ecx12 = reinterpret_cast<struct s0**>(0x8048fad);
        __asm__("int 0x80");
        if (0) 
            goto addr_8048519_22;
        zf15 = g8048d18 == 65;
        if (!zf15) {
            ecx12 = reinterpret_cast<struct s0**>(0x8048fad);
            __asm__("int 0x80");
        } else {
            fun_8048b0c(0x8048fad);
        }
    }
    while (1) {
        addr_8048a65_30:
        fun_8048b8e(5, v16);
        esp17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 + 4);
        while (1) {
            addr_8048303_31:
            while (1) {
                __asm__("int 0x80");
                __asm__("int 0x80");
                esp17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp17) - 4 + 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
                if (1 || (esp18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp17) - 4 - 4), esp17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp18) - 4 + 4 - 4 + 4 + 8), 1)) {
                    addr_80482be_34:
                    continue;
                } else {
                    fun_8048ca2(esp18);
                    esp17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp17) - 4 - 4 + 4 + 4 - 4 + 4);
                    __asm__("int 0x80");
                    if (!0) 
                        goto addr_8048303_31;
                    while (1) {
                        g8048e79 = 16;
                        __asm__("int 0x80");
                        esp17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp17) - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
                        if (0) 
                            continue;
                        esp17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp17) - 4 + 4);
                        __asm__("int 0x80");
                        if (0) 
                            break;
                    }
                    edi19 = reinterpret_cast<struct s0**>(0);
                    ecx = reinterpret_cast<struct s0**>(4);
                    fun_8048b8e(4, v20);
                    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp17) - 4 + 4);
                    while (1) {
                        addr_8048345_4:
                        eax21 = fun_8048358(ecx);
                        esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 + 4);
                        if (!eax21) 
                            continue;
                        zf22 = g8048d68 == 0;
                        if (zf22) {
                            if (eax21 == 0x52455355) 
                                goto addr_80489f9_16;
                            if (eax21 == 0x53534150) 
                                goto addr_8048a06_14;
                            if (eax21 == 0x54495551) 
                                goto addr_8048a65_30;
                            if (eax21 == 0x54535953) 
                                goto addr_8048a13_17;
                            if (eax21 == 0x504f4f4e) 
                                goto addr_8048a1a_18;
                            ecx = reinterpret_cast<struct s0**>(20);
                            eax21 = fun_8048b88(20, v23);
                            esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 + 4);
                        }
                        esp24 = reinterpret_cast<struct s0***>(reinterpret_cast<int32_t>(esp4) - 4);
                        *reinterpret_cast<unsigned char*>(&g8048fac) = 1;
                        if (eax21 == 0x52544552) 
                            goto addr_8048473_49;
                        *reinterpret_cast<unsigned char*>(&g8048fac) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&g8048fac) + 1);
                        if (!reinterpret_cast<int1_t>(eax21 == 0x524f5453)) {
                            addr_8048553_51:
                            esp25 = reinterpret_cast<void*>(esp24 + 1);
                            g8048d75 = reinterpret_cast<struct s0**>(0);
                            if (reinterpret_cast<int1_t>(eax21 == 0x54534552)) {
                                eax26 = fun_8048af6();
                                g8048d75 = eax26;
                                ecx = reinterpret_cast<struct s0**>(15);
                                eax21 = fun_8048b88(15, v27);
                                esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) - 4 + 4 - 4 + 4);
                            }
                        } else {
                            zf28 = (reinterpret_cast<uint32_t>(g8048d69) & 1) == 0;
                            if (zf28) {
                                addr_804853f_54:
                                __asm__("int 0x80");
                                ecx = reinterpret_cast<struct s0**>(12);
                                eax21 = fun_8048b88(12, v29);
                                esp24 = esp24 + 1 - 1 + 1 - 1 + 1;
                                goto addr_8048553_51;
                            } else {
                                addr_8048473_49:
                                fun_8048b5d(ecx);
                                v11 = edi19;
                                zf30 = (*reinterpret_cast<unsigned char*>(&g8048fac) & 2) == 0;
                                if (!zf30) {
                                    goto addr_804848d_56;
                                }
                            }
                        }
                        *reinterpret_cast<unsigned char*>(&g8048fac) = 3;
                        if (*reinterpret_cast<int16_t*>(&eax21) != 0x494c) {
                            addr_80486d9_58:
                            if (*reinterpret_cast<int16_t*>(&eax21) == 0x4f50) 
                                break;
                        } else {
                            if (!v31) {
                                fun_8048358(ecx);
                                esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) - 4 + 4);
                            }
                            eax5 = 0x6a;
                            __asm__("int 0x80");
                            if (!1) 
                                goto addr_80485b4_20;
                            fun_8048b8e(1, v32);
                            esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) - 4 + 4 - 4 + 4 - 4 + 4);
                            __asm__("int 0x80");
                            if (1) 
                                goto addr_80486ae_63; else 
                                goto addr_80485d0_64;
                        }
                        while (reinterpret_cast<int1_t>(eax21 == 0x56534150)) {
                            g8048f78 = reinterpret_cast<struct s0*>(2);
                            g8048f7c = 0;
                            __asm__("int 0x80");
                            esp34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
                            if (!0 && ((esp34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp34) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 20), !0) && (esp34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp34) - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12), !0))) {
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v35) + 2) = 16;
                                __asm__("int 0x80");
                                esp36 = reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp34) - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12 - 2);
                                *reinterpret_cast<int16_t*>(&v35) = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&g8048f78) + 2);
                                if (0) 
                                    goto addr_8048788_68;
                                __asm__("int 0x80");
                                esp36 = esp36 - 2 - 2 - 2 + 2 - 2 + 2 + 4;
                                if (0) 
                                    goto addr_8048788_68;
                                g8048d71 = reinterpret_cast<signed char*>(0x66);
                                __asm__("int 0x80");
                                esp36 = esp36 - 2 - 2 - 2 - 2 + 2 - 2 + 2 + 6;
                                if (!0) 
                                    goto addr_8048861_71;
                                addr_8048788_68:
                                esp34 = reinterpret_cast<void*>(esp36 + 2 + 2);
                            }
                            ecx = reinterpret_cast<struct s0**>(0x1f6);
                            eax21 = fun_8048b88(0x1f6, v37);
                            esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp34) - 4 + 4);
                        }
                        addr_80488bb_73:
                        esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) - 4);
                        edi38 = "ISFAISF";
                        if (*reinterpret_cast<int16_t*>(&eax21) == 0x5954 || ((edi38 = "SFAISF", *reinterpret_cast<int16_t*>(&eax21) == 0x4f4d) || (edi38 = "FAISF", reinterpret_cast<int1_t>(eax21 == 0x55525453)))) {
                            al39 = g804afb2;
                            esi40 = "AISF";
                            ecx41 = 4;
                            do {
                                if (al39 == *esi40) 
                                    break;
                                ++esi40;
                                --ecx41;
                            } while (ecx41);
                            goto addr_80488ec_77;
                        } else {
                            addr_8048900_78:
                            if (*reinterpret_cast<int16_t*>(&eax21) == 0x4443) 
                                goto addr_8048997_6; else 
                                goto addr_804890a_79;
                        }
                        *edi38 = al39;
                        ecx = reinterpret_cast<struct s0**>(2);
                        addr_80488fa_81:
                        eax21 = fun_8048b88(ecx, v42);
                        esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) + 4 - 4 + 4);
                        goto addr_8048900_78;
                        addr_80488ec_77:
                        ecx = reinterpret_cast<struct s0**>(11);
                        goto addr_80488fa_81;
                        addr_804890a_79:
                        fun_8048b5d(ecx);
                        eax43 = eax21;
                        edi19 = v44;
                        esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 - 4 + 4 + 4 + 4);
                        if (*reinterpret_cast<int16_t*>(&eax43) == 0x4b4d) 
                            goto addr_80489a3_82;
                        if (*reinterpret_cast<int16_t*>(&eax43) == 0x4d52) 
                            goto addr_80489ce_9;
                        if (*reinterpret_cast<int16_t*>(&eax43) == 0x4544) 
                            goto addr_80489bb_12;
                        if (*reinterpret_cast<int16_t*>(&eax43) == 0x5743) 
                            goto addr_804899c_7;
                        if (eax43 == 0x455a4953) 
                            goto addr_804894e_87;
                        if (*reinterpret_cast<int16_t*>(&eax43) == 0x5355) 
                            goto addr_80489f9_16;
                        if (eax43 == 0x53534150) 
                            goto addr_8048a06_14;
                        if (*reinterpret_cast<int16_t*>(&eax43) == 0x5953) 
                            goto addr_8048a13_17;
                        if (*reinterpret_cast<int16_t*>(&eax43) == 0x4f4e) 
                            goto addr_8048a1a_18;
                        if (*reinterpret_cast<int16_t*>(&eax43) == 0x5551) 
                            goto addr_8048a65_30;
                        if (*reinterpret_cast<int16_t*>(&eax43) != 0x5750) 
                            goto addr_8048a4d_95;
                        fun_8048b8e(9, v45);
                        esp46 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 + 4);
                        __asm__("int 0x80");
                        do {
                            __asm__("lodsb ");
                        } while (1);
                        g8048fac = reinterpret_cast<signed char>(0xa0d22);
                        ecx = reinterpret_cast<struct s0**>(0x8048fad);
                        esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp46) - 4 + 4);
                        __asm__("int 0x80");
                        continue;
                        addr_8048861_71:
                        edi47 = reinterpret_cast<struct s6*>(0x8048fad);
                        fun_8048b8e(17, *reinterpret_cast<struct s0***>(&v35));
                        esp48 = reinterpret_cast<struct s0***>(esp36 - 2 + 2);
                        ecx49 = reinterpret_cast<struct s0**>(0);
                        *reinterpret_cast<signed char*>(&ecx49) = 4;
                        do {
                            __asm__("lodsb ");
                            fun_8048acc(ecx49);
                            esp48 = esp48 - 1 + 1;
                            edi47->f0 = 44;
                            edi47 = reinterpret_cast<struct s6*>(&edi47->f1);
                            ecx49 = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(ecx49) - 1);
                        } while (ecx49);
                        fun_8048acc(*reinterpret_cast<struct s0***>(&v35));
                        edi47->f0 = 44;
                        fun_8048acc(*reinterpret_cast<struct s0***>(&v35));
                        edi47->f1 = 0xa0d;
                        ecx = reinterpret_cast<struct s0**>(0x8048fad);
                        eax21 = fun_8048b7f(0x8048fad, v50);
                        esp25 = reinterpret_cast<void*>(esp48 + 1 - 1 + 1 - 1 + 1 + 1 - 1 + 1);
                        goto addr_80488bb_73;
                        do {
                            addr_80486ae_63:
                            esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp33) - 4 + 4 - 4 + 4);
                            __asm__("int 0x80");
                        } while (0);
                        __asm__("int 0x80");
                        ecx = reinterpret_cast<struct s0**>(8);
                        eax21 = fun_8048b88(8, v51);
                        esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp33) - 4 + 4 - 4 + 4);
                        goto addr_80486d9_58;
                        addr_80485d0_64:
                        __asm__("int 0x80");
                        esp52 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp33) - 4 + 4 - 4 + 4);
                        __asm__("int 0x80");
                        if (!0) 
                            goto addr_80485e3_111;
                        __asm__("int 0x80");
                        __asm__("int 0x80");
                        __asm__("int 0x80");
                        esp53 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp52) - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4);
                        g8048f88 = reinterpret_cast<int32_t>("/bin/ls");
                        esi54 = "-la";
                        g8048f8c = "-la";
                        __asm__("repne lodsb ");
                        zf55 = g804afb1 == 13;
                        if (!zf55) 
                            goto addr_8048680_113;
                        addr_8048693_114:
                        __asm__("int 0x80");
                        esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp53) + 4 - 4 + 4 - 4 + 4);
                        __asm__("int 0x80");
                        goto addr_80486ae_63;
                        addr_8048680_113:
                        fun_8048b5d(8);
                        esp53 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp53) - 4 + 4);
                        zf56 = g8048058 == 45;
                        if (zf56) {
                            esi54 = "..";
                        }
                        g8048f90 = esi54;
                        goto addr_8048693_114;
                        addr_804848d_56:
                        esp24 = esp24 - 1 + 1 + 1 - 1 - 1 + 1;
                        __asm__("int 0x80");
                        if (0) 
                            goto addr_804853f_54; else 
                            goto addr_80484a3_117;
                    }
                }
                ecx57 = 4;
                do {
                    ebx58 = reinterpret_cast<int16_t>(0);
                    fun_8048ab6();
                    esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) - 4 + 4);
                    --ecx57;
                } while (ecx57);
                v59 = reinterpret_cast<int16_t>(0);
                bx60 = 0;
                *reinterpret_cast<signed char*>(&ebx58) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&bx60) + 1);
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx58) + 1) = 0;
                ebx61 = ebx58 << 16;
                bx62 = (&v59)[1];
                *reinterpret_cast<signed char*>(&ebx61) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&bx62) + 1);
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx61) + 1) = *reinterpret_cast<signed char*>(&bx62);
                g8048f84 = ebx61;
                fun_8048ab6();
                ebx63 = 0;
                fun_8048ab6();
                *reinterpret_cast<signed char*>(&ebx63) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx63) + 1);
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx63) + 1) = 0;
                ebx64 = ebx63 << 16;
                *reinterpret_cast<signed char*>(&ebx64) = 2;
                g8048f80 = ebx64;
                __asm__("int 0x80");
                esp65 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) - 4 + 2 + 2 - 4 + 4 - 4 + 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
                if (!0 && (esp65 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp65) - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12), !0)) {
                    fun_8048b88(2, v66);
                    esp65 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp65) + 4 - 4 + 4);
                }
                fun_8048b8e(10, v67);
                __asm__("int 0x80");
                esp17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp65) - 4 + 4 - 4 - 4 - 4 + 4 - 4 + 4 + 8 - 4 + 4);
                __asm__("int 0x80");
                goto addr_80482be_34;
                addr_80485e3_111:
                esp68 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp52) - 4 + 4);
                __asm__("int 0x80");
                while (1) {
                    esp17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp68) - 4 + 4);
                    __asm__("int 0x80");
                    if (0) 
                        goto addr_8048625_124;
                    eax69 = fun_8048358(0x8048fad);
                    zf70 = reinterpret_cast<int1_t>(eax69 == 0x524f4241);
                    if (!zf70) {
                        zf70 = reinterpret_cast<int1_t>(eax69 == 0x4f4241f2);
                    }
                    esp71 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp17) - 4 - 4 + 4 + 4);
                    if (zf70) 
                        break;
                    fun_8048b0c(0x8048fad);
                    esp68 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp71) - 4 + 4);
                }
                fun_8048b8e(16, v72);
                esp17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp71) - 4 + 4);
                goto addr_80482be_34;
            }
            addr_8048625_124:
        }
        addr_8048a4d_95:
        if (eax43 == 0x524f4241) 
            goto addr_8048a21_19;
        if (eax43 == 0x4f4241f2) 
            goto addr_8048a21_19;
        fun_8048b88(11, v73);
        esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 + 4);
    }
    addr_80484a3_117:
    ecx12 = reinterpret_cast<struct s0**>(1);
    fun_8048b8e(1, v11);
    zf74 = (*reinterpret_cast<unsigned char*>(&g8048fac) & 2) == 0;
    if (zf74) {
        eax75 = g8048d75;
        if (eax75) {
            ecx12 = eax75;
            __asm__("int 0x80");
            goto addr_80484cf_23;
        }
    } else {
        goto addr_80484cf_23;
    }
    addr_80489a3_82:
    zf76 = (reinterpret_cast<uint32_t>(g8048d69) & 2) == 0;
    if (zf76) {
        addr_80489e1_10:
        goto addr_80489ef_135;
    } else {
        eax5 = 39;
        __asm__("int 0x80");
        goto addr_80489e3_8;
    }
    addr_804894e_87:
    eax5 = 0x6a;
    __asm__("int 0x80");
    if (0) {
        addr_80489e3_8:
        if (eax5) {
            addr_80489ef_135:
            ecx = reinterpret_cast<struct s0**>(12);
            goto addr_80489f4_15;
        } else {
            ecx = reinterpret_cast<struct s0**>(8);
            goto addr_80489f4_15;
        }
    } else {
        fun_8048b8e(18, edi19);
        fun_8048acc(18);
        *reinterpret_cast<int16_t*>(&g8048fac + 1) = 0xa0d;
        fun_8048b7f(0x8048fad, v77);
        goto addr_8048997_6;
    }
}

struct s7 {
    signed char f0;
    int16_t f1;
};

void* fun_8048b78(struct s0** ecx, struct s0** a2) {
    struct s0** ecx3;
    struct s0** esi4;
    int1_t zf5;
    void* esp6;
    uint32_t eax7;
    int1_t zf8;
    int1_t zf9;
    struct s0** eax10;
    struct s0** v11;
    struct s0** eax12;
    struct s0** v13;
    struct s0** ecx14;
    signed char* eax15;
    int1_t zf16;
    int1_t zf17;
    struct s0** v18;
    void* esp19;
    void* esp20;
    struct s0** edi21;
    struct s0** v22;
    signed char* eax23;
    int1_t zf24;
    struct s0** v25;
    struct s0*** esp26;
    void* esp27;
    struct s0** eax28;
    struct s0** v29;
    int1_t zf30;
    struct s0** v31;
    int1_t zf32;
    struct s0** v33;
    struct s0** v34;
    void* esp35;
    void* esp36;
    uint64_t v37;
    int16_t* esp38;
    struct s0** v39;
    signed char* edi40;
    signed char al41;
    signed char* esi42;
    int32_t ecx43;
    struct s0** v44;
    signed char* eax45;
    struct s0** v46;
    struct s0** v47;
    void* esp48;
    struct s7* edi49;
    struct s0*** esp50;
    struct s0** ecx51;
    int32_t v52;
    struct s0** v53;
    void* esp54;
    void* esp55;
    signed char* esi56;
    int1_t zf57;
    int1_t zf58;
    int32_t ecx59;
    int16_t ebx60;
    int16_t v61;
    int16_t bx62;
    int32_t ebx63;
    int16_t bx64;
    int32_t ebx65;
    int32_t ebx66;
    void* esp67;
    struct s0** v68;
    struct s0** v69;
    void* esp70;
    signed char* eax71;
    int1_t zf72;
    void* esp73;
    struct s0** v74;
    struct s0** v75;
    int1_t zf76;
    struct s0** eax77;
    int1_t zf78;
    int32_t v79;

    __asm__("pushad ");
    ecx3 = esi4;
    __asm__("int 0x80");
    __asm__("popad ");
    g8048d79 = reinterpret_cast<signed char>(g8048d79 - 1);
    zf5 = g8048d79 == 0;
    if (zf5) {
        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 + 4 + 4);
        goto addr_8048345_4;
    } else {
        g8048d79 = reinterpret_cast<signed char>(g8048d79 + 1);
        return 4;
    }
    addr_8048997_6:
    addr_804899c_7:
    eax7 = 12;
    __asm__("int 0x80");
    goto addr_80489e3_8;
    addr_80489ce_9:
    zf8 = (reinterpret_cast<uint32_t>(g8048d69) & 2) == 0;
    if (zf8) 
        goto addr_80489e1_10;
    eax7 = 40;
    __asm__("int 0x80");
    goto addr_80489e3_8;
    addr_80489bb_12:
    zf9 = (reinterpret_cast<uint32_t>(g8048d69) & 2) == 0;
    if (zf9) 
        goto addr_80489e1_10;
    eax7 = 10;
    __asm__("int 0x80");
    goto addr_80489e3_8;
    addr_8048a06_14:
    fun_8048b5d(ecx3);
    eax10 = fun_8048c29(ecx3);
    ecx3 = eax10;
    while (1) {
        addr_80489f4_15:
        fun_8048b88(ecx3, v11);
        addr_80489f9_16:
        fun_8048b5d(ecx3);
        eax12 = fun_8048bd4(ecx3);
        ecx3 = eax12;
    }
    addr_8048a13_17:
    ecx3 = reinterpret_cast<struct s0**>(3);
    goto addr_80489f4_15;
    addr_8048a1a_18:
    ecx3 = reinterpret_cast<struct s0**>(2);
    goto addr_80489f4_15;
    addr_8048a21_19:
    ecx3 = reinterpret_cast<struct s0**>(6);
    goto addr_80489f4_15;
    addr_80485b4_20:
    goto addr_80489e3_8;
    while (1) {
        addr_8048533_21:
        fun_8048b8e(16, v13);
        addr_8048519_22:
        __asm__("int 0x80");
        __asm__("int 0x80");
        fun_8048b88(6, v13);
    }
    while (1) {
        addr_80484cf_23:
        eax15 = fun_8048358(ecx14);
        zf16 = reinterpret_cast<int1_t>(eax15 == 0x524f4241);
        if (!zf16) {
            zf16 = reinterpret_cast<int1_t>(eax15 == 0x4f4241f2);
        }
        if (zf16) 
            goto addr_8048533_21;
        ecx14 = reinterpret_cast<struct s0**>(0x8048fad);
        __asm__("int 0x80");
        if (0) 
            goto addr_8048519_22;
        zf17 = g8048d18 == 65;
        if (!zf17) {
            ecx14 = reinterpret_cast<struct s0**>(0x8048fad);
            __asm__("int 0x80");
        } else {
            fun_8048b0c(0x8048fad);
        }
    }
    while (1) {
        addr_8048a65_30:
        fun_8048b8e(5, v18);
        esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 + 4);
        while (1) {
            addr_8048303_31:
            while (1) {
                __asm__("int 0x80");
                __asm__("int 0x80");
                esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 + 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
                if (1 || (esp20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 - 4), esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp20) - 4 + 4 - 4 + 4 + 8), 1)) {
                    addr_80482be_34:
                    continue;
                } else {
                    fun_8048ca2(esp20);
                    esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 - 4 + 4 + 4 - 4 + 4);
                    __asm__("int 0x80");
                    if (!0) 
                        goto addr_8048303_31;
                    while (1) {
                        g8048e79 = 16;
                        __asm__("int 0x80");
                        esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
                        if (0) 
                            continue;
                        esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 + 4);
                        __asm__("int 0x80");
                        if (0) 
                            break;
                    }
                    edi21 = reinterpret_cast<struct s0**>(0);
                    ecx3 = reinterpret_cast<struct s0**>(4);
                    fun_8048b8e(4, v22);
                    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 + 4);
                    while (1) {
                        addr_8048345_4:
                        eax23 = fun_8048358(ecx3);
                        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 + 4);
                        if (!eax23) 
                            continue;
                        zf24 = g8048d68 == 0;
                        if (zf24) {
                            if (eax23 == 0x52455355) 
                                goto addr_80489f9_16;
                            if (eax23 == 0x53534150) 
                                goto addr_8048a06_14;
                            if (eax23 == 0x54495551) 
                                goto addr_8048a65_30;
                            if (eax23 == 0x54535953) 
                                goto addr_8048a13_17;
                            if (eax23 == 0x504f4f4e) 
                                goto addr_8048a1a_18;
                            ecx3 = reinterpret_cast<struct s0**>(20);
                            eax23 = fun_8048b88(20, v25);
                            esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 + 4);
                        }
                        esp26 = reinterpret_cast<struct s0***>(reinterpret_cast<int32_t>(esp6) - 4);
                        *reinterpret_cast<unsigned char*>(&g8048fac) = 1;
                        if (eax23 == 0x52544552) 
                            goto addr_8048473_49;
                        *reinterpret_cast<unsigned char*>(&g8048fac) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&g8048fac) + 1);
                        if (!reinterpret_cast<int1_t>(eax23 == 0x524f5453)) {
                            addr_8048553_51:
                            esp27 = reinterpret_cast<void*>(esp26 + 1);
                            g8048d75 = reinterpret_cast<struct s0**>(0);
                            if (reinterpret_cast<int1_t>(eax23 == 0x54534552)) {
                                eax28 = fun_8048af6();
                                g8048d75 = eax28;
                                ecx3 = reinterpret_cast<struct s0**>(15);
                                eax23 = fun_8048b88(15, v29);
                                esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 + 4 - 4 + 4);
                            }
                        } else {
                            zf30 = (reinterpret_cast<uint32_t>(g8048d69) & 1) == 0;
                            if (zf30) {
                                addr_804853f_54:
                                __asm__("int 0x80");
                                ecx3 = reinterpret_cast<struct s0**>(12);
                                eax23 = fun_8048b88(12, v31);
                                esp26 = esp26 + 1 - 1 + 1 - 1 + 1;
                                goto addr_8048553_51;
                            } else {
                                addr_8048473_49:
                                fun_8048b5d(ecx3);
                                v13 = edi21;
                                zf32 = (*reinterpret_cast<unsigned char*>(&g8048fac) & 2) == 0;
                                if (!zf32) {
                                    goto addr_804848d_56;
                                }
                            }
                        }
                        *reinterpret_cast<unsigned char*>(&g8048fac) = 3;
                        if (*reinterpret_cast<int16_t*>(&eax23) != 0x494c) {
                            addr_80486d9_58:
                            if (*reinterpret_cast<int16_t*>(&eax23) == 0x4f50) 
                                break;
                        } else {
                            if (!v33) {
                                fun_8048358(ecx3);
                                esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 + 4);
                            }
                            eax7 = 0x6a;
                            __asm__("int 0x80");
                            if (!1) 
                                goto addr_80485b4_20;
                            fun_8048b8e(1, v34);
                            esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 + 4 - 4 + 4 - 4 + 4);
                            __asm__("int 0x80");
                            if (1) 
                                goto addr_80486ae_63; else 
                                goto addr_80485d0_64;
                        }
                        while (reinterpret_cast<int1_t>(eax23 == 0x56534150)) {
                            g8048f78 = reinterpret_cast<struct s0*>(2);
                            g8048f7c = 0;
                            __asm__("int 0x80");
                            esp36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
                            if (!0 && ((esp36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp36) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 20), !0) && (esp36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp36) - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12), !0))) {
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v37) + 2) = 16;
                                __asm__("int 0x80");
                                esp38 = reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp36) - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12 - 2);
                                *reinterpret_cast<int16_t*>(&v37) = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&g8048f78) + 2);
                                if (0) 
                                    goto addr_8048788_68;
                                __asm__("int 0x80");
                                esp38 = esp38 - 2 - 2 - 2 + 2 - 2 + 2 + 4;
                                if (0) 
                                    goto addr_8048788_68;
                                g8048d71 = reinterpret_cast<signed char*>(0x66);
                                __asm__("int 0x80");
                                esp38 = esp38 - 2 - 2 - 2 - 2 + 2 - 2 + 2 + 6;
                                if (!0) 
                                    goto addr_8048861_71;
                                addr_8048788_68:
                                esp36 = reinterpret_cast<void*>(esp38 + 2 + 2);
                            }
                            ecx3 = reinterpret_cast<struct s0**>(0x1f6);
                            eax23 = fun_8048b88(0x1f6, v39);
                            esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp36) - 4 + 4);
                        }
                        addr_80488bb_73:
                        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4);
                        edi40 = "ISFAISF";
                        if (*reinterpret_cast<int16_t*>(&eax23) == 0x5954 || ((edi40 = "SFAISF", *reinterpret_cast<int16_t*>(&eax23) == 0x4f4d) || (edi40 = "FAISF", reinterpret_cast<int1_t>(eax23 == 0x55525453)))) {
                            al41 = g804afb2;
                            esi42 = "AISF";
                            ecx43 = 4;
                            do {
                                if (al41 == *esi42) 
                                    break;
                                ++esi42;
                                --ecx43;
                            } while (ecx43);
                            goto addr_80488ec_77;
                        } else {
                            addr_8048900_78:
                            if (*reinterpret_cast<int16_t*>(&eax23) == 0x4443) 
                                goto addr_8048997_6; else 
                                goto addr_804890a_79;
                        }
                        *edi40 = al41;
                        ecx3 = reinterpret_cast<struct s0**>(2);
                        addr_80488fa_81:
                        eax23 = fun_8048b88(ecx3, v44);
                        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) + 4 - 4 + 4);
                        goto addr_8048900_78;
                        addr_80488ec_77:
                        ecx3 = reinterpret_cast<struct s0**>(11);
                        goto addr_80488fa_81;
                        addr_804890a_79:
                        fun_8048b5d(ecx3);
                        eax45 = eax23;
                        edi21 = v46;
                        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 - 4 + 4 + 4 + 4);
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x4b4d) 
                            goto addr_80489a3_82;
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x4d52) 
                            goto addr_80489ce_9;
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x4544) 
                            goto addr_80489bb_12;
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x5743) 
                            goto addr_804899c_7;
                        if (eax45 == 0x455a4953) 
                            goto addr_804894e_87;
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x5355) 
                            goto addr_80489f9_16;
                        if (eax45 == 0x53534150) 
                            goto addr_8048a06_14;
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x5953) 
                            goto addr_8048a13_17;
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x4f4e) 
                            goto addr_8048a1a_18;
                        if (*reinterpret_cast<int16_t*>(&eax45) == 0x5551) 
                            goto addr_8048a65_30;
                        if (*reinterpret_cast<int16_t*>(&eax45) != 0x5750) 
                            goto addr_8048a4d_95;
                        fun_8048b8e(9, v47);
                        esp48 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 + 4);
                        __asm__("int 0x80");
                        do {
                            __asm__("lodsb ");
                        } while (1);
                        g8048fac = reinterpret_cast<signed char>(0xa0d22);
                        ecx3 = reinterpret_cast<struct s0**>(0x8048fad);
                        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp48) - 4 + 4);
                        __asm__("int 0x80");
                        continue;
                        addr_8048861_71:
                        edi49 = reinterpret_cast<struct s7*>(0x8048fad);
                        fun_8048b8e(17, *reinterpret_cast<struct s0***>(&v37));
                        esp50 = reinterpret_cast<struct s0***>(esp38 - 2 + 2);
                        ecx51 = reinterpret_cast<struct s0**>(0);
                        *reinterpret_cast<signed char*>(&ecx51) = 4;
                        do {
                            __asm__("lodsb ");
                            fun_8048acc(ecx51);
                            esp50 = esp50 - 1 + 1;
                            edi49->f0 = 44;
                            edi49 = reinterpret_cast<struct s7*>(&edi49->f1);
                            ecx51 = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(ecx51) - 1);
                        } while (ecx51);
                        fun_8048acc(*reinterpret_cast<struct s0***>(&v37));
                        edi49->f0 = 44;
                        fun_8048acc(*reinterpret_cast<struct s0***>(&v37));
                        edi49->f1 = 0xa0d;
                        ecx3 = reinterpret_cast<struct s0**>(0x8048fad);
                        eax23 = fun_8048b7f(0x8048fad, v52);
                        esp27 = reinterpret_cast<void*>(esp50 + 1 - 1 + 1 - 1 + 1 + 1 - 1 + 1);
                        goto addr_80488bb_73;
                        do {
                            addr_80486ae_63:
                            esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp35) - 4 + 4 - 4 + 4);
                            __asm__("int 0x80");
                        } while (0);
                        __asm__("int 0x80");
                        ecx3 = reinterpret_cast<struct s0**>(8);
                        eax23 = fun_8048b88(8, v53);
                        esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp35) - 4 + 4 - 4 + 4);
                        goto addr_80486d9_58;
                        addr_80485d0_64:
                        __asm__("int 0x80");
                        esp54 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp35) - 4 + 4 - 4 + 4);
                        __asm__("int 0x80");
                        if (!0) 
                            goto addr_80485e3_111;
                        __asm__("int 0x80");
                        __asm__("int 0x80");
                        __asm__("int 0x80");
                        esp55 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp54) - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4);
                        g8048f88 = reinterpret_cast<int32_t>("/bin/ls");
                        esi56 = "-la";
                        g8048f8c = "-la";
                        __asm__("repne lodsb ");
                        zf57 = g804afb1 == 13;
                        if (!zf57) 
                            goto addr_8048680_113;
                        addr_8048693_114:
                        __asm__("int 0x80");
                        esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp55) + 4 - 4 + 4 - 4 + 4);
                        __asm__("int 0x80");
                        goto addr_80486ae_63;
                        addr_8048680_113:
                        fun_8048b5d(8);
                        esp55 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp55) - 4 + 4);
                        zf58 = g8048058 == 45;
                        if (zf58) {
                            esi56 = "..";
                        }
                        g8048f90 = esi56;
                        goto addr_8048693_114;
                        addr_804848d_56:
                        esp26 = esp26 - 1 + 1 + 1 - 1 - 1 + 1;
                        __asm__("int 0x80");
                        if (0) 
                            goto addr_804853f_54; else 
                            goto addr_80484a3_117;
                    }
                }
                ecx59 = 4;
                do {
                    ebx60 = reinterpret_cast<int16_t>(0);
                    fun_8048ab6();
                    esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 + 4);
                    --ecx59;
                } while (ecx59);
                v61 = reinterpret_cast<int16_t>(0);
                bx62 = 0;
                *reinterpret_cast<signed char*>(&ebx60) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&bx62) + 1);
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx60) + 1) = 0;
                ebx63 = ebx60 << 16;
                bx64 = (&v61)[1];
                *reinterpret_cast<signed char*>(&ebx63) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&bx64) + 1);
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx63) + 1) = *reinterpret_cast<signed char*>(&bx64);
                g8048f84 = ebx63;
                fun_8048ab6();
                ebx65 = 0;
                fun_8048ab6();
                *reinterpret_cast<signed char*>(&ebx65) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx65) + 1);
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx65) + 1) = 0;
                ebx66 = ebx65 << 16;
                *reinterpret_cast<signed char*>(&ebx66) = 2;
                g8048f80 = ebx66;
                __asm__("int 0x80");
                esp67 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 + 2 + 2 - 4 + 4 - 4 + 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12);
                if (!0 && (esp67 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp67) - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12), !0)) {
                    fun_8048b88(2, v68);
                    esp67 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp67) + 4 - 4 + 4);
                }
                fun_8048b8e(10, v69);
                __asm__("int 0x80");
                esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp67) - 4 + 4 - 4 - 4 - 4 + 4 - 4 + 4 + 8 - 4 + 4);
                __asm__("int 0x80");
                goto addr_80482be_34;
                addr_80485e3_111:
                esp70 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp54) - 4 + 4);
                __asm__("int 0x80");
                while (1) {
                    esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp70) - 4 + 4);
                    __asm__("int 0x80");
                    if (0) 
                        goto addr_8048625_124;
                    eax71 = fun_8048358(0x8048fad);
                    zf72 = reinterpret_cast<int1_t>(eax71 == 0x524f4241);
                    if (!zf72) {
                        zf72 = reinterpret_cast<int1_t>(eax71 == 0x4f4241f2);
                    }
                    esp73 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 - 4 + 4 + 4);
                    if (zf72) 
                        break;
                    fun_8048b0c(0x8048fad);
                    esp70 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp73) - 4 + 4);
                }
                fun_8048b8e(16, v74);
                esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp73) - 4 + 4);
                goto addr_80482be_34;
            }
            addr_8048625_124:
        }
        addr_8048a4d_95:
        if (eax45 == 0x524f4241) 
            goto addr_8048a21_19;
        if (eax45 == 0x4f4241f2) 
            goto addr_8048a21_19;
        fun_8048b88(11, v75);
        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 + 4);
    }
    addr_80484a3_117:
    ecx14 = reinterpret_cast<struct s0**>(1);
    fun_8048b8e(1, v13);
    zf76 = (*reinterpret_cast<unsigned char*>(&g8048fac) & 2) == 0;
    if (zf76) {
        eax77 = g8048d75;
        if (eax77) {
            ecx14 = eax77;
            __asm__("int 0x80");
            goto addr_80484cf_23;
        }
    } else {
        goto addr_80484cf_23;
    }
    addr_80489a3_82:
    zf78 = (reinterpret_cast<uint32_t>(g8048d69) & 2) == 0;
    if (zf78) {
        addr_80489e1_10:
        goto addr_80489ef_135;
    } else {
        eax7 = 39;
        __asm__("int 0x80");
        goto addr_80489e3_8;
    }
    addr_804894e_87:
    eax7 = 0x6a;
    __asm__("int 0x80");
    if (0) {
        addr_80489e3_8:
        if (eax7) {
            addr_80489ef_135:
            ecx3 = reinterpret_cast<struct s0**>(12);
            goto addr_80489f4_15;
        } else {
            ecx3 = reinterpret_cast<struct s0**>(8);
            goto addr_80489f4_15;
        }
    } else {
        fun_8048b8e(18, edi21);
        fun_8048acc(18);
        *reinterpret_cast<int16_t*>(&g8048fac + 1) = 0xa0d;
        fun_8048b7f(0x8048fad, v79);
        goto addr_8048997_6;
    }
}

unsigned char fun_8048bc5() {
    signed char al1;
    signed char al2;
    unsigned char al3;

    addr_8048bc5_1:
    __asm__("lodsb ");
    if (al1 == 32) 
        goto addr_8048bc5_1;
    if (al2 == 9) 
        goto addr_8048bc5_1;
    return al3;
}

void fun_8048d0c();

void fun_8048cf0(struct s0** ecx) {
    signed char* edi2;
    signed char* edi3;
    signed char* esi4;

    fun_8048d0c();
    fun_8048d0c();
    if (reinterpret_cast<uint32_t>(ecx) < reinterpret_cast<uint32_t>(ecx)) {
        ecx = ecx;
    }
    edi2 = edi3;
    do {
        if (!ecx) 
            break;
        ecx = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(ecx) - 1);
        ++edi2;
        ++esi4;
    } while (*esi4 == *edi2);
    return;
}

void fun_8048d0c() {
    unsigned char* edi1;

    do {
        ++edi1;
    } while (*edi1 >= 33);
    return;
}

struct s0** fun_8048bd4(struct s0** ecx) {
    int32_t ebx2;
    int32_t ebx3;

    *reinterpret_cast<signed char*>(ebx2 + 0x48d6035) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx3 + 0x48d6035) - 1);
    if (ecx) {
    }
}

signed char* g8048d64;

struct s0** fun_8048c29(struct s0** ecx) {
    signed char* esi2;
    struct s0** eax3;
    void* esi4;
    unsigned char al5;

    g8048d68 = 0;
    esi2 = g8048d64;
    if (!esi2) {
        addr_8048c54_2:
        return 20;
    } else {
        fun_8048bc5();
        if (*esi2 == 42 || (fun_8048cf0(ecx), ecx == 0)) {
            fun_8048bc5();
            eax3 = fun_8048af6();
            g8048d69 = eax3;
            esi4 = reinterpret_cast<void*>(esi2 + 1 + 1);
            al5 = fun_8048bc5();
            do {
                __asm__("lodsb ");
            } while (al5 >= 33);
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi4) - 1) = 0;
            __asm__("int 0x80");
            if (0) 
                goto addr_8048c54_2;
            __asm__("int 0x80");
            if (0) 
                goto addr_8048c54_2;
        } else {
            goto addr_8048c54_2;
        }
    }
    g8048d68 = 1;
    return 7;
}

void fun_8048bbf() {
    signed char al1;

    do {
        __asm__("lodsb ");
    } while (al1 != 10);
    return;
}

struct s8 {
    unsigned char f0;
    signed char[98] pad99;
    unsigned char f63;
    signed char[15] pad115;
    unsigned char f73;
};

struct s9 {
    signed char[101] pad101;
    unsigned char f65;
    int32_t f66;
    int32_t f67;
    unsigned char f69;
    unsigned char f6f;
};

unsigned char g22131017;

signed char g31142404;

struct s10 {
    signed char[107] pad107;
    unsigned char f6b;
};

struct s11 {
    signed char[107] pad107;
    unsigned char f6b;
};

struct s12 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s13 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s14 {
    signed char[107] pad107;
    unsigned char f6b;
};

struct s15 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s16 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s17 {
    signed char[101] pad101;
    signed char f65;
};

unsigned char g20333132;

struct s18 {
    signed char[107] pad107;
    unsigned char f6b;
};

void fun_8048000(struct s8* ecx) {
    struct s1** esp2;
    uint48_t v3;
    int1_t less_or_equal4;
    struct s9* esi5;
    void* esi6;
    int32_t eax7;
    int32_t* ebx8;
    int32_t* ebx9;
    int32_t eax10;
    signed char* eax11;
    signed char* eax12;
    signed char al13;
    signed char* eax14;
    signed char* eax15;
    signed char al16;
    signed char* eax17;
    signed char* eax18;
    signed char al19;
    signed char* eax20;
    signed char* eax21;
    signed char al22;
    void** eax23;
    signed char al24;
    signed char* eax25;
    void** eax26;
    signed char dh27;
    unsigned char* eax28;
    unsigned char tmp8_29;
    uint1_t cf30;
    unsigned char tmp8_31;
    signed char* edi32;
    int1_t cf33;
    unsigned char* edi34;
    unsigned char* edi35;
    uint32_t eax36;
    unsigned char tmp8_37;
    signed char dl38;
    uint1_t cf39;
    uint1_t cf40;
    int32_t edx41;
    signed char dl42;
    int32_t edx43;
    int32_t edx44;
    signed char dl45;
    struct s1** esp46;
    struct s1* v47;
    signed char* eax48;
    struct s0* ebx49;
    signed char bh50;
    struct s1* eax51;
    struct s10* edi52;
    struct s1* ebp53;
    struct s11* edi54;
    unsigned char dl55;
    int32_t edi56;
    int32_t edi57;
    unsigned char dl58;
    int1_t cf59;
    unsigned char* edx60;
    void* di61;
    int1_t zf62;
    unsigned char dl63;
    int16_t di64;
    unsigned char* edx65;
    struct s12* edx66;
    struct s13* edx67;
    unsigned char dl68;
    struct s14* edi69;
    int1_t zf70;
    void* di71;
    int1_t cf72;
    struct s15* edx73;
    struct s16* edx74;
    unsigned char dl75;
    struct s17* edx76;
    unsigned char dh77;
    struct s1** esp78;
    struct s1** esp79;
    struct s1** esp80;
    struct s1** esp81;
    struct s1** esp82;
    struct s1** esp83;
    unsigned char dh84;
    int1_t zf85;
    int1_t cf86;
    int1_t sf87;
    int32_t* esp88;
    int32_t* esp89;
    int32_t* esp90;
    int32_t* esp91;
    int32_t* esp92;
    int32_t* esp93;
    struct s1** esp94;
    struct s1** esp95;
    struct s1** esp96;
    struct s1** esp97;
    int16_t di98;
    struct s18* edi99;
    int1_t cf100;
    unsigned char tmp8_101;

    esp2 = reinterpret_cast<struct s1**>(__zero_stack_offset());
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v3) + 1) = reinterpret_cast<int32_t>(__return_address());
    if (less_or_equal4) {
        esi5 = reinterpret_cast<struct s9*>(reinterpret_cast<int32_t>(esi6) + 1);
        ecx->f0 = reinterpret_cast<unsigned char>(ecx->f0 + eax7);
        *ebx8 = *ebx9 + eax10;
        *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
        *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
        *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
        *eax20 = reinterpret_cast<signed char>(*eax21 + al22);
        *reinterpret_cast<signed char*>(&eax23) = reinterpret_cast<signed char>(al24 + *eax25);
        eax26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(*eax23));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<uint32_t>(eax26));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        __asm__("das ");
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax26) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax26) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax26) + reinterpret_cast<uint32_t>(eax26)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax26) + reinterpret_cast<uint32_t>(eax26)) + dh27);
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<uint32_t>(eax26));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<unsigned char*>(eax26 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax26 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<void**>(&eax26) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)) + 8);
        eax28 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax26) | 0x33bd0000);
        *eax28 = reinterpret_cast<unsigned char>(*eax28 + *reinterpret_cast<signed char*>(&eax28));
        esp2 = reinterpret_cast<struct s1**>(reinterpret_cast<int32_t>(esp2) - 1 + 2 + 2);
        *eax28 = reinterpret_cast<unsigned char>(*eax28 + *reinterpret_cast<signed char*>(&eax28));
    }
    tmp8_29 = reinterpret_cast<unsigned char>(*eax28 + *reinterpret_cast<signed char*>(&eax28));
    cf30 = reinterpret_cast<uint1_t>(tmp8_29 < *eax28);
    *eax28 = tmp8_29;
    *eax28 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax28 + *reinterpret_cast<signed char*>(&eax28)) + cf30);
    ecx->f0 = reinterpret_cast<unsigned char>(ecx->f0 + *reinterpret_cast<signed char*>(&eax28));
    *eax28 = reinterpret_cast<unsigned char>(*eax28 + *reinterpret_cast<signed char*>(&eax28));
    tmp8_31 = reinterpret_cast<unsigned char>(*edi32 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
    cf33 = tmp8_31 < *edi34;
    *edi35 = tmp8_31;
    __asm__("das ");
    __asm__("insb ");
    eax36 = reinterpret_cast<uint32_t>(eax28 - 0x2e00616c);
    tmp8_37 = reinterpret_cast<unsigned char>(g22131017 + dl38);
    cf39 = reinterpret_cast<uint1_t>(tmp8_37 < g22131017);
    g22131017 = tmp8_37;
    cf40 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp2) + edx41) < reinterpret_cast<unsigned char>(dl42 + cf39));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp2) + edx43) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp2) + edx44) - reinterpret_cast<unsigned char>(dl45 + cf40));
    *reinterpret_cast<unsigned char*>(&eax36) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax36) + 5) + cf40);
    esp46 = reinterpret_cast<struct s1**>(esp2 + 1 - 1);
    v47 = *reinterpret_cast<struct s1**>(reinterpret_cast<int32_t>(&v3) + 4);
    eax48 = reinterpret_cast<signed char*>(eax36 & ecx->f0);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx49) + 1) = reinterpret_cast<unsigned char>(bh50 + *eax48);
    *reinterpret_cast<signed char*>(&eax48) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax48) - g31142404);
    eax51 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(eax48) ^ 0x72542030);
    __asm__("popad ");
    __asm__("outsb ");
    if (1) {
        addr_80480e4_5:
        __asm__("outsb ");
        goto addr_80480e6_6;
    } else {
        if (!0) {
            if (1) {
                addr_80480f7_9:
                edi52->f6b = 0;
                goto addr_80480fa_10;
            } else {
                __asm__("popad ");
                if (0) 
                    goto addr_80480fa_10;
                ebp53 = reinterpret_cast<struct s1*>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi5) + 0x67) * 0x30320a0d);
                *reinterpret_cast<struct s1***>(eax51) = reinterpret_cast<struct s1**>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1***>(eax51)) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax51) + 1));
                ebx49 = reinterpret_cast<struct s0*>(&ebx49->pad108);
                __asm__("outsd ");
                __asm__("insd ");
                __asm__("insd ");
                __asm__("popad ");
                __asm__("outsb ");
                edi54->f6b = 0;
                *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebp53) + 78) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebp53) + 78) & dl55);
            }
        }
        ecx = reinterpret_cast<struct s8*>(reinterpret_cast<int32_t>(ecx) - 1);
        eax51 = v47;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) + edi56 * 2 + 0x70) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) + edi57 * 2 + 0x70) & dl58);
        esp46 = reinterpret_cast<struct s1**>(reinterpret_cast<uint32_t>(esp46 + 2) - 1);
        ecx->f73 = 0;
        __asm__("insd ");
        if (ecx->f73) {
            addr_804812b_14:
            *reinterpret_cast<struct s1***>(eax51) = reinterpret_cast<struct s1**>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1***>(eax51)) ^ reinterpret_cast<unsigned char>(esp46));
            cf59 = 0;
            goto addr_804812d_15;
        } else {
            ebp53 = reinterpret_cast<struct s1*>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx49) + reinterpret_cast<uint32_t>(esi5) * 2 + 32) * 0x20505446);
            cf59 = __intrinsic();
            if (!cf59) {
                addr_8048126_17:
                *edx60 = 0;
                *reinterpret_cast<unsigned char*>(&eax51) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax51) ^ 50);
                goto addr_804812b_14;
            } else {
                if (cf59) {
                    addr_8048139_19:
                    __asm__("outsb ");
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp53) + reinterpret_cast<int16_t>(di61)) + 0x6f) = 0;
                    __asm__("outsb ");
                    __asm__("outsb ");
                    __asm__("arpl [gs:ecx+ebp*2+0x6f], si");
                    goto addr_8048142_20;
                } else {
                    if (cf59) {
                        addr_80480e6_6:
                        eax51 = reinterpret_cast<struct s1*>(reinterpret_cast<uint16_t>(eax51) | 0x3632320a);
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi5) + 0x69) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi5) + 0x69) & *reinterpret_cast<unsigned char*>(&eax51));
                        __asm__("insb ");
                        ecx->f63 = 0;
                        zf62 = ecx->f63 == 0;
                        if (zf62) {
                            addr_804815e_22:
                            goto addr_804815f_23;
                        } else {
                            __asm__("outsd ");
                            __asm__("outsb ");
                            goto addr_80480f7_9;
                        }
                    } else {
                        if (cf59) {
                            addr_804812d_15:
                            ebp53 = reinterpret_cast<struct s1*>(reinterpret_cast<uint16_t>(ebp53) + 1);
                            zf62 = ebp53 == 0;
                            if (cf59) 
                                goto addr_80481a2_26;
                        } else {
                            __asm__("popad ");
                            if (!__undefined()) {
                                addr_80480fa_10:
                                eax51 = reinterpret_cast<struct s1*>(reinterpret_cast<uint16_t>(eax51) | 0x3033320a);
                                *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebp53) + 0x73) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(ebp53) + 0x73) & dl63);
                                if (0) {
                                    addr_8048125_28:
                                    goto addr_8048126_17;
                                } else {
                                    __asm__("insb ");
                                    __asm__("outsd ");
                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx49) + di64) + 0x6e) = 0;
                                    eax51 = reinterpret_cast<struct s1*>(reinterpret_cast<uint16_t>(eax51) | 0x3035320a);
                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi5) + 0x69) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi5) + 0x69) & *reinterpret_cast<unsigned char*>(&eax51));
                                    __asm__("insb ");
                                    ecx->f63 = 0;
                                    if (!ecx->f63) {
                                        addr_8048186_30:
                                        *reinterpret_cast<unsigned char*>(&ecx) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx) | *edx65);
                                        eax51 = reinterpret_cast<struct s1*>(reinterpret_cast<uint16_t>(eax51) | 0x3035330a);
                                        edx66->f65 = reinterpret_cast<unsigned char>(edx67->f65 & dl68);
                                        if (1) {
                                            goto addr_804820a_32;
                                        }
                                    } else {
                                        __asm__("outsd ");
                                        __asm__("outsb ");
                                        edi69->f6b = 0;
                                        eax51 = reinterpret_cast<struct s1*>(reinterpret_cast<uint16_t>(eax51) | 0x3735320a);
                                        goto addr_8048125_28;
                                    }
                                }
                            } else {
                                eax51 = reinterpret_cast<struct s1*>(reinterpret_cast<uint16_t>(eax51) | 0x3132320a);
                                ebx49->f6c = reinterpret_cast<unsigned char>(ebx49->f6c & *reinterpret_cast<unsigned char*>(&eax51));
                                __asm__("outsd ");
                                if (1) {
                                    addr_8048142_20:
                                    __asm__("outsb ");
                                    eax51 = reinterpret_cast<struct s1*>(reinterpret_cast<uint16_t>(eax51) | 0x3230350a);
                                    ebx49->f6f = reinterpret_cast<unsigned char>(ebx49->f6f & *reinterpret_cast<unsigned char*>(&eax51));
                                    __asm__("insd ");
                                    __asm__("insd ");
                                    __asm__("popad ");
                                    __asm__("outsb ");
                                    esi5->f6f = 0;
                                    zf70 = esi5->f6f == 0;
                                    if (zf70) {
                                        addr_8048178_35:
                                        if (zf70) 
                                            goto addr_80481e4_36; else 
                                            goto addr_804817b_37;
                                    } else {
                                        ebp53 = reinterpret_cast<struct s1*>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint16_t>(ebp53) + 0x70) * 0x656d656c);
                                        zf62 = __undefined();
                                        goto addr_804815e_22;
                                    }
                                } else {
                                    __asm__("outsb ");
                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp53) + reinterpret_cast<int16_t>(di71)) + 0x6f) = 0;
                                    __asm__("outsb ");
                                    __asm__("outsb ");
                                    __asm__("arpl [gs:ecx+ebp*2+0x6f], si");
                                    goto addr_80480e4_5;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __asm__("outsd ");
    if (cf59) {
        addr_804815f_23:
        __asm__("outsb ");
        if (zf62) {
            addr_80481c7_41:
            ebx49->f6f = reinterpret_cast<unsigned char>(ebx49->f6f & *reinterpret_cast<unsigned char*>(&eax51));
            __asm__("outsb ");
            __asm__("outsb ");
            __asm__("arpl [gs:ecx+ebp*2+0x6f], si");
            __asm__("outsb ");
            ebx49->f6c = 0;
            cf72 = 0;
            __asm__("outsd ");
            goto addr_80481d6_42;
        } else {
            eax51 = reinterpret_cast<struct s1*>(reinterpret_cast<uint16_t>(eax51) | 0x3035350a);
            edx73->f65 = reinterpret_cast<unsigned char>(edx74->f65 & dl75);
            zf70 = edx76->f65 == 0;
            if (1) {
                goto addr_80481e4_36;
            }
            if (1) 
                goto addr_80481e5_46;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi5) + 0x69) = 0;
            __asm__("insb ");
            ecx->f63 = 0;
            zf70 = ecx->f63 == 0;
            goto addr_8048178_35;
        }
    } else {
        ebx49->f6c = 0;
        __asm__("outsd ");
        if (1) 
            goto addr_80481a2_26; else 
            goto addr_8048139_19;
    }
    if (1) {
        addr_804820b_50:
        goto addr_804820c_51;
    } else {
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi5) + 0x69) = 0;
        __asm__("insb ");
        ecx->f63 = 0;
        if (!ecx->f63) {
            addr_804820c_51:
            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(eax51) + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(eax51) + 97) & dh77);
            if (1) {
                addr_8048287_53:
                esp78 = esp46 - 2;
                *esp78 = reinterpret_cast<struct s1*>(6);
                esp79 = esp78 - 2;
                *esp79 = reinterpret_cast<struct s1*>(1);
                esp80 = esp79 - 2;
                *esp80 = reinterpret_cast<struct s1*>(2);
                esp81 = esp80 - 2;
                *esp81 = reinterpret_cast<struct s1*>(1);
                esp82 = esp81 + 2 - 2;
                *esp82 = reinterpret_cast<struct s1*>(0x66);
                __asm__("int 0x80");
                if (0) 
                    goto 0x80482be;
            } else {
                if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(eax51) + 97) == 0)))) {
                    addr_8048285_55:
                    esp46 = esp46 + 2;
                    __asm__("int 0x80");
                    goto addr_8048287_53;
                } else {
                    if (0) {
                        addr_804827c_57:
                        __asm__("int 0x80");
                        esp83 = esp46 + 2 - 2;
                        *esp83 = reinterpret_cast<struct s1*>(2);
                        esp46 = esp83 + 2 - 2;
                        *esp46 = reinterpret_cast<struct s1*>(6);
                        goto addr_8048285_55;
                    } else {
                        goto addr_804821b_59;
                    }
                }
            }
        } else {
            addr_80481a3_60:
            __asm__("outsd ");
            __asm__("outsb ");
            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(eax51) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(eax51) + 0x65) & dh84);
            __asm__("outsb ");
            ebp53 = reinterpret_cast<struct s1*>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi5) + 0x67) * 0x72756620);
            cf72 = __intrinsic();
            if (__undefined()) {
                addr_804821b_59:
                esi5->f6f = reinterpret_cast<unsigned char>(esi5->f6f & *reinterpret_cast<unsigned char*>(&ecx));
                zf85 = esi5->f6f == 0;
                goto addr_8048220_61;
            } else {
                if (cf72) {
                    addr_80481d6_42:
                    if (!cf72) {
                        addr_804823d_63:
                        esp46 = esp46 + 2 - 2;
                        *esp46 = reinterpret_cast<struct s1*>(1);
                        goto addr_8048243_64;
                    } else {
                        cf86 = reinterpret_cast<unsigned char>(esp46) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1***>(eax51));
                        zf70 = esp46 == *reinterpret_cast<struct s1***>(eax51);
                        sf87 = reinterpret_cast<signed char>(esp46) < reinterpret_cast<signed char>(*reinterpret_cast<struct s1***>(eax51));
                        if (zf70) 
                            goto addr_804824f_66;
                        __asm__("popad ");
                        __asm__("outsb ");
                        if (!cf86) 
                            goto addr_8048247_68; else 
                            goto addr_80481e1_69;
                    }
                } else {
                    ebp53 = reinterpret_cast<struct s1*>(esi5->f66 * 0x616d726f);
                    if (__undefined()) {
                        addr_8048228_71:
                        *reinterpret_cast<signed char*>(reinterpret_cast<uint16_t>(ebp53) + 0x5e000000) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint16_t>(ebp53) + 0x5e000000) - 0x71);
                        goto addr_8048236_72;
                    } else {
                        __asm__("outsd ");
                        __asm__("outsb ");
                        eax51 = reinterpret_cast<struct s1*>(reinterpret_cast<uint16_t>(eax51) | 0x3632340a);
                        goto addr_80481c7_41;
                    }
                }
            }
        }
    }
    esp88 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esp82 + 2 + 6) - 4);
    *esp88 = 4;
    esp89 = esp88 - 1;
    *esp89 = 0x804804c;
    esp90 = esp89 - 1;
    *esp90 = 2;
    esp91 = esp90 - 1;
    *esp91 = 1;
    esp92 = esp91 - 1;
    *esp92 = 0x66;
    esp93 = esp92 - 1;
    *esp93 = 14;
    *(esp93 + 1 - 1) = 0x66;
    __asm__("int 0x80");
    if (0) 
        goto 0x80482c6; else 
        goto "???";
    addr_8048247_68:
    esp94 = esp46 - 2;
    *esp94 = reinterpret_cast<struct s1*>(48);
    esp46 = esp94 + 2;
    __asm__("int 0x80");
    eax51 = reinterpret_cast<struct s1*>(0);
    ebx49 = reinterpret_cast<struct s0*>(0);
    goto addr_804824f_66;
    addr_80481e1_69:
    if (cf86) {
        addr_8048204_75:
        __asm__("popad ");
        if (!sf87) {
            addr_8048236_72:
            goto addr_804823d_63;
        } else {
            addr_804820a_32:
            esi5->f65 = 0;
            goto addr_804820b_50;
        }
    } else {
        addr_80481e4_36:
        __asm__("popad ");
        goto addr_80481e5_46;
    }
    addr_804817b_37:
    __asm__("outsd ");
    __asm__("outsb ");
    esi5->f6f = 0;
    zf70 = esi5->f6f == 0;
    if (zf70) {
        addr_80481a2_26:
        goto addr_80481a3_60;
    } else {
        if (zf70) {
            addr_80481e5_46:
            if (zf70) {
                addr_804824f_66:
            } else {
                eax51 = reinterpret_cast<struct s1*>(reinterpret_cast<uint16_t>(eax51) | 0x3732320a);
                g20333132 = reinterpret_cast<unsigned char>(g20333132 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx49) + 1));
                esi5 = reinterpret_cast<struct s9*>(reinterpret_cast<uint32_t>(esi5) ^ reinterpret_cast<unsigned char>(ebx49->f0));
                *reinterpret_cast<struct s1***>(eax51) = reinterpret_cast<struct s1**>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1***>(eax51)) ^ reinterpret_cast<unsigned char>(esp46));
                zf85 = *reinterpret_cast<struct s1***>(eax51) == 0;
                esp46 = esp46 - 2;
                *esp46 = ebp53;
                if (1) {
                    addr_8048263_78:
                    g8048f78 = ebx49;
                    g8048f7c = 0;
                    esp95 = esp46 - 2;
                    *esp95 = reinterpret_cast<struct s1*>(1);
                    esp96 = esp95 + 2 - 2;
                    *esp96 = reinterpret_cast<struct s1*>(6);
                    __asm__("int 0x80");
                    esp46 = esp96 + 2 - 2;
                    *esp46 = reinterpret_cast<struct s1*>(6);
                    goto addr_804827c_57;
                } else {
                    if (0) {
                        addr_8048220_61:
                        if (zf85) {
                            addr_8048243_64:
                            esp97 = esp46 + 2 - 2;
                            *esp97 = reinterpret_cast<struct s1*>(17);
                            esp46 = esp97 + 2;
                            goto addr_8048247_68;
                        } else {
                            __asm__("insb ");
                            __asm__("outsd ");
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx49) + di98) + 0x6e) = 0;
                            goto addr_8048228_71;
                        }
                    } else {
                        __asm__("outsb ");
                        __asm__("popad ");
                        __asm__("insd ");
                        edi99->f6b = 0;
                        sf87 = __intrinsic();
                        goto addr_8048204_75;
                    }
                }
            }
        } else {
            esp46 = reinterpret_cast<struct s1**>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint16_t>(ebp53) + 0x6e) * 13);
            goto addr_8048186_30;
        }
    }
    while (cf100 = *reinterpret_cast<unsigned char*>(&eax51) < 48, *reinterpret_cast<unsigned char*>(&eax51) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax51) - 48), !cf100) {
        ebx49 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebx49) * 10 + reinterpret_cast<uint16_t>(eax51));
    }
    tmp8_101 = *reinterpret_cast<unsigned char*>(&ebx49);
    *reinterpret_cast<unsigned char*>(&ebx49) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx49) + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx49) + 1) = tmp8_101;
    ebx49 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebx49) << 16);
    *reinterpret_cast<unsigned char*>(&ebx49) = 2;
    goto addr_8048263_78;
}

void fun_8048be2(struct s0** ecx, int32_t a2) {
    signed char al3;
    signed char* esi4;

    if (al3 != 59) {
        fun_8048cf0(ecx);
        if (!ecx) {
            g8048d64 = reinterpret_cast<signed char*>(0);
            goto a2;
        } else {
            fun_8048cf0(ecx);
            if (!ecx) {
                g8048d64 = esi4;
                goto a2;
            }
        }
    }
    fun_8048bbf();
    goto 0x8048bdd;
}

void fun_8048bd0() {
    int32_t edi1;
    int32_t edi2;
    signed char dl3;

    edi1 = edi2 - 1;
    *reinterpret_cast<signed char*>(edi1 - 0x79) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edi1 - 0x79) + dl3);
}

void fun_8048d16(int32_t ecx) {
}
