
/* MFC42.DLL:825 */
int32_t MFC42_DLL_825 = 0x80000339;

void fun_40181e(int32_t* a1) {
    goto MFC42_DLL_825;
}

/* MFC42.DLL:472 */
int32_t MFC42_DLL_472 = 0x800001d8;

void fun_401944(void* ecx, void** a2, void** a3) {
    goto MFC42_DLL_472;
}

/* MFC42.DLL:5788 */
int32_t MFC42_DLL_5788 = 0x8000169c;

void** fun_40193e(void* ecx) {
    goto MFC42_DLL_5788;
}

/* MFC42.DLL:4297 */
int32_t MFC42_DLL_4297 = 0x800010c9;

void fun_401950(void* ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29) {
    goto MFC42_DLL_4297;
}

/* MFC42.DLL:4133 */
int32_t MFC42_DLL_4133 = 0x80001025;

void fun_40194a(void* ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35, void** a36, void** a37, void** a38, void** a39, void** a40, void** a41, void** a42, void** a43, void** a44, void** a45, void** a46, ...) {
    goto MFC42_DLL_4133;
}

/* MFC42.DLL:2414 */
int32_t MFC42_DLL_2414 = 0x8000096e;

void fun_401920(int32_t* ecx) {
    goto MFC42_DLL_2414;
}

/* MFC42.DLL:755 */
int32_t MFC42_DLL_755 = 0x800002f3;

void fun_40191a(void* ecx) {
    goto MFC42_DLL_755;
}

void fun_401bf6(int32_t a1, int32_t a2);

void fun_401bb0() {
    fun_401bf6(0x10000, 0x30000);
    return;
}

int32_t _initterm = 0x44fe;

void fun_401b9c(int32_t a1, int32_t a2) {
    goto _initterm;
}

/* MFC42.DLL:283 */
int32_t MFC42_DLL_283 = 0x8000011b;

void fun_401956(void* ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto MFC42_DLL_283;
}

/* MFC42.DLL:6170 */
int32_t MFC42_DLL_6170 = 0x8000181a;

void fun_401938(void* ecx, int32_t a2) {
    goto MFC42_DLL_6170;
}

/* MFC42.DLL:5875 */
int32_t MFC42_DLL_5875 = 0x800016f3;

void fun_401932(int32_t* ecx, int32_t a2, int32_t a3) {
    goto MFC42_DLL_5875;
}

/* MFC42.DLL:5789 */
int32_t MFC42_DLL_5789 = 0x8000169d;

int32_t fun_401926(void* ecx, void* a2, int32_t a3, int32_t a4, int32_t a5) {
    goto MFC42_DLL_5789;
}

int32_t _ftol = 0x4496;

int32_t fun_4019d0(int32_t* ecx, int32_t a2) {
    goto _ftol;
}

/* MFC42.DLL:1641 */
int32_t MFC42_DLL_1641 = 0x80000669;

void fun_40192c(void* ecx, int32_t a2, int32_t a3, int32_t a4) {
    goto MFC42_DLL_1641;
}

int32_t __dllonexit = 0x449e;

int32_t fun_401b90(int32_t a1, int32_t a2, int32_t a3) {
    goto __dllonexit;
}

int32_t fun_401970(int32_t a1);

int32_t fun_4019a0(int32_t a1) {
    int32_t eax2;
    uint32_t eax3;

    eax2 = fun_401970(a1);
    eax3 = reinterpret_cast<uint32_t>(-eax2);
    return reinterpret_cast<int32_t>(-(eax3 - (eax3 + reinterpret_cast<uint1_t>(eax3 < eax3 + reinterpret_cast<uint1_t>(!!eax2))))) - 1;
}

int32_t _controlfp = 0x4572;

void fun_401bf6(int32_t a1, int32_t a2) {
    goto _controlfp;
}

int32_t fun_401c60();

int32_t fun_401bfc(int32_t a1, int32_t a2, int32_t a3, unsigned char* a4) {
    int32_t eax5;

    eax5 = fun_401c60();
    return eax5;
}

struct s0 {
    signed char[20] pad20;
    signed char f20;
    signed char[4139] pad4160;
    int32_t f4160;
};

struct s0* fun_4018f6(int32_t a1);

int32_t _setmbcp = 0x4642;

int32_t fun_401c14(int32_t a1, int32_t a2) {
    struct s0* eax3;
    int32_t ecx4;

    eax3 = fun_4018f6(__return_address());
    ecx4 = a1;
    eax3->f20 = *reinterpret_cast<signed char*>(&ecx4);
    eax3->f4160 = a2;
    if (!ecx4) {
        _setmbcp();
    }
    return 1;
}

/* MFC42.DLL:561 */
int32_t MFC42_DLL_561 = 0x80000231;

void fun_401818() {
    goto MFC42_DLL_561;
}

/* MFC42.DLL:641 */
int32_t MFC42_DLL_641 = 0x80000281;

void fun_40182a(void* ecx) {
    goto MFC42_DLL_641;
}

int32_t g403048 = 0;

void fun_401080() {
    int32_t esi1;

    fun_401818();
    g403048 = 0x402038;
    goto esi1;
}

/* MFC42.DLL:6021 */
int32_t MFC42_DLL_6021 = 0x80001785;

void fun_40195c(void* ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto MFC42_DLL_6021;
}

void** g0;

void fun_4015c0(int32_t* ecx) {
    void** eax2;

    eax2 = g0;
    g0 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4);
    *ecx = 0x402228;
    fun_401920(ecx);
    *ecx = 0x402210;
    g0 = eax2;
    return;
}

int32_t _XcptFilter = 0x44ca;

void fun_401b96(int32_t a1, int32_t** a2) {
    goto _XcptFilter;
}

int32_t g403130 = 0;

int32_t _onexit = 0x44ac;

int32_t fun_401970(int32_t a1) {
    int1_t zf2;
    int32_t eax3;
    int32_t eax4;

    zf2 = g403130 == -1;
    if (!zf2) {
        eax3 = fun_401b90(a1, 0x403130, 0x40312c);
        return eax3;
    } else {
        eax4 = reinterpret_cast<int32_t>(_onexit(a1));
        return eax4;
    }
}

/* MFC42.DLL:1576 */
int32_t MFC42_DLL_1576 = 0x80000628;

int32_t fun_401c60() {
    goto MFC42_DLL_1576;
}

/* MFC42.DLL:1168 */
int32_t MFC42_DLL_1168 = 0x80000490;

struct s0* fun_4018f6(int32_t a1) {
    goto MFC42_DLL_1168;
}

/* MFC42.DLL:815 */
int32_t MFC42_DLL_815 = 0x8000032f;

void fun_401060() {
    goto MFC42_DLL_815;
}

/* MFC42.DLL:2514 */
int32_t MFC42_DLL_2514 = 0x800009d2;

void fun_401830(void* ecx) {
    goto MFC42_DLL_2514;
}

/* MFC42.DLL:470 */
int32_t MFC42_DLL_470 = 0x800001d6;

void fun_401962(void* ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    goto MFC42_DLL_470;
}

void fun_401be0() {
    return;
}

/* MFC42.DLL:324 */
int32_t MFC42_DLL_324 = 0x80000144;

void fun_4018fc(int32_t a1) {
    goto MFC42_DLL_324;
}

/* MFC42.DLL:2621 */
int32_t MFC42_DLL_2621 = 0x80000a3d;

void fun_401836() {
    goto MFC42_DLL_2621;
}

/* MFC42.DLL:4710 */
int32_t MFC42_DLL_4710 = 0x80001266;

void fun_401902(int32_t a1, int32_t a2, int32_t a3) {
    goto MFC42_DLL_4710;
}

void fun_4016d0(int32_t* ecx) {
    void** eax2;

    eax2 = g0;
    g0 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4);
    *ecx = 0x402228;
    fun_401920(ecx);
    *ecx = 0x402210;
    g0 = eax2;
    return;
}

void fun_401120() {
    goto MFC42_DLL_641;
}

struct s1 {
    int32_t f0;
    signed char[92] pad96;
    int32_t f96;
};

int32_t fun_4018f0(int32_t a1);

int32_t LoadIconA = 0x45b4;

void fun_401150(struct s1* ecx, int32_t a2) {
    int32_t eax3;

    g0 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4);
    fun_4018fc(0x66);
    ecx->f0 = 0x402138;
    fun_4018f6(0x66);
    fun_4018f0(0x80);
    eax3 = reinterpret_cast<int32_t>(LoadIconA());
    ecx->f96 = eax3;
    g0 = reinterpret_cast<void**>(14);
    goto a2;
}

/* MFC42.DLL:1146 */
int32_t MFC42_DLL_1146 = 0x8000047a;

int32_t fun_4018f0(int32_t a1) {
    goto MFC42_DLL_1146;
}

/* MFC42.DLL:4274 */
int32_t MFC42_DLL_4274 = 0x800010b2;

int32_t fun_401000() {
    int32_t eax1;

    eax1 = MFC42_DLL_4274;
    return eax1;
}

int32_t fun_401010() {
    return 0x402000;
}

void fun_4011e0() {
    return;
}

struct s2 {
    signed char[96] pad96;
    int32_t f96;
};

int32_t fun_401560(struct s2* ecx) {
    return ecx->f96;
}

void fun_4010a0();

int32_t fun_401070() {
    int32_t eax1;

    fun_401080();
    eax1 = fun_4019a0(fun_4010a0);
    return eax1;
}

/* MFC42.DLL:4234 */
int32_t MFC42_DLL_4234 = 0x8000108a;

int32_t fun_4011f0() {
    int32_t eax1;

    eax1 = MFC42_DLL_4234;
    return eax1;
}

int32_t* fun_401570(int32_t* ecx, unsigned char a2) {
    *ecx = 0x402210;
    if (a2 & 1) {
        fun_40181e(ecx);
    }
    return ecx;
}

int32_t* fun_4015a0(int32_t* ecx, unsigned char a2) {
    fun_4015c0(ecx);
    if (a2 & 1) {
        fun_40181e(ecx);
    }
    return ecx;
}

void fun_401606(int32_t* ecx) {
    void** eax2;

    eax2 = g0;
    g0 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4);
    *ecx = 0x402228;
    fun_401920(ecx);
    *ecx = 0x402210;
    g0 = eax2;
    return;
}

struct s3 {
    signed char[32] pad32;
    int32_t f32;
};

int32_t EnableWindow = 0x45dc;

void fun_401720(struct s3* ecx) {
    int32_t eax2;

    eax2 = ecx->f32;
    EnableWindow();
    goto eax2;
}

int32_t fun_401bd0() {
    return 0;
}

void fun_401b42() {
    int32_t** eax1;
    int32_t ebp2;
    int32_t ecx3;
    int32_t ebp4;

    eax1 = *reinterpret_cast<int32_t***>(ebp2 - 20);
    ecx3 = **eax1;
    *reinterpret_cast<int32_t*>(ebp4 - 0x78) = ecx3;
    fun_401b96(ecx3, eax1);
    return;
}

int32_t fun_401c50() {
    fun_401c14(0, 0x421);
    return 0x403124;
}

int32_t* fun_401040(int32_t* ecx, unsigned char a2) {
    fun_401060();
    if (a2 & 1) {
        fun_40181e(ecx);
    }
    return ecx;
}

int32_t fun_401200() {
    return 0x4020e0;
}

int32_t __set_app_type = 0x454c;

int32_t g40312c = 0;

int32_t __p__fmode = 0x453e;

int32_t g403120 = 0;

int32_t __p__commode = 0x452e;

int32_t g40311c = 0;

int32_t* _adjust_fdiv = reinterpret_cast<int32_t*>(0x451e);

int32_t g403128 = 0;

int32_t g403040 = 1;

int32_t __setusermatherr = 0x450a;

int32_t g403114 = 0;

int32_t __getmainargs = 0x44ee;

int32_t __p__acmdln = 0x44e0;

int32_t GetStartupInfoA = 0x4594;

int32_t GetModuleHandleA = 0x4580;

int32_t exit = 0x44d8;

void fun_4019e0() {
    void* esp1;
    void** eax2;
    void** v3;
    int32_t* eax4;
    int32_t ecx5;
    int32_t* eax6;
    int32_t edx7;
    int32_t* eax8;
    int32_t eax9;
    int32_t ecx10;
    unsigned char** eax11;
    unsigned char* esi12;
    int32_t eax13;
    int32_t eax14;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax2 = g0;
    v3 = eax2;
    g0 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp1) - 4 - 4 - 4 - 4);
    __set_app_type(2);
    g40312c = -1;
    g403130 = -1;
    eax4 = reinterpret_cast<int32_t*>(__p__fmode());
    ecx5 = g403120;
    *eax4 = ecx5;
    eax6 = reinterpret_cast<int32_t*>(__p__commode());
    edx7 = g40311c;
    *eax6 = edx7;
    eax8 = _adjust_fdiv;
    g403128 = *eax8;
    fun_401be0();
    eax9 = g403040;
    if (!eax9) {
        __setusermatherr(fun_401bd0);
    }
    fun_401bb0();
    fun_401b9c(0x403010, 0x403014);
    ecx10 = g403114;
    __getmainargs(reinterpret_cast<int32_t>(esp1) - 96, reinterpret_cast<int32_t>(esp1) - 0x70, reinterpret_cast<int32_t>(esp1) - 100, ecx10, reinterpret_cast<int32_t>(esp1) - 0x6c);
    fun_401b9c(0x403000, 0x40300c);
    eax11 = reinterpret_cast<unsigned char**>(__p__acmdln());
    esi12 = *eax11;
    if (*esi12 != 34) {
        while (*esi12 > 32) {
            ++esi12;
        }
    } else {
        do {
            ++esi12;
            if (!*esi12) 
                break;
        } while (*esi12 != 34);
        if (*esi12 == 34) 
            goto addr_401aea_9;
    }
    addr_401aee_10:
    while (*esi12 && *esi12 <= 32) {
        ++esi12;
    }
    GetStartupInfoA();
    if (1) {
    }
    eax13 = reinterpret_cast<int32_t>(GetModuleHandleA(0, 0, esi12));
    eax14 = fun_401bfc(eax13, 0, 0, esi12);
    exit(eax14);
    g0 = v3;
    return;
    addr_401aea_9:
    ++esi12;
    goto addr_401aee_10;
}

void fun_401656(int32_t* ecx) {
    void** eax2;

    eax2 = g0;
    g0 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4);
    *ecx = 0x402228;
    fun_401920(ecx);
    *ecx = 0x402210;
    g0 = eax2;
    return;
}

struct s4 {
    signed char[32] pad32;
    int32_t f32;
};

void fun_401730(struct s4* ecx) {
    int32_t eax2;

    eax2 = ecx->f32;
    EnableWindow();
    goto eax2;
}

int32_t __CxxFrameHandler = 0x4482;

void fun_4019b5() {
    goto __CxxFrameHandler;
}

int32_t _exit = 0x44c2;

void fun_401b57() {
    int32_t* esp1;
    int32_t ebp2;
    int32_t ebp3;

    esp1 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp2 - 24)) - 4);
    *esp1 = *reinterpret_cast<int32_t*>(ebp3 - 0x78);
    *(esp1 - 1) = 0x401b64;
    _exit();
}

void fun_4010a0() {
    goto fun_401060;
}

struct s5 {
    signed char[32] pad32;
    int32_t f32;
    signed char[60] pad96;
    int32_t f96;
};

int32_t SendMessageA = 0x45c0;

void fun_401210(struct s5* ecx) {
    int32_t edi2;
    int32_t esi3;
    int32_t ecx4;
    int32_t edi5;
    int32_t v6;

    fun_401902(edi2, esi3, __return_address());
    ecx4 = ecx->f32;
    edi5 = SendMessageA;
    v6 = ecx->f96;
    edi5(ecx4, 0x80, 1, v6, edi2, esi3, __return_address());
    edi5();
    goto 0;
}

int32_t* fun_4016b0(int32_t* ecx, unsigned char a2) {
    fun_4016d0(ecx);
    if (a2 & 1) {
        fun_40181e(ecx);
    }
    return ecx;
}

/* MFC42.DLL:4673 */
int32_t MFC42_DLL_4673 = 0x80001241;

void fun_401740() {
    goto MFC42_DLL_4673;
}

void fun_401c70() {
    goto fun_401120;
}

struct s6 {
    signed char[32] pad32;
    void* f32;
};

int32_t fun_4010b0(struct s6* ecx) {
    void** eax2;
    void** esp3;
    void* esp4;
    void* esp5;

    eax2 = g0;
    esp3 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4);
    g0 = esp3;
    fun_401836();
    esp4 = reinterpret_cast<void*>(esp3 - 25 - 1 - 1 + 1 - 1);
    fun_401150(reinterpret_cast<uint32_t>(esp4) + 8, 0);
    esp5 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp4) - 4 + 4 + 4);
    ecx->f32 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp5) + 4);
    fun_401830(reinterpret_cast<uint32_t>(esp5) + 4);
    fun_40182a(reinterpret_cast<uint32_t>(esp5) - 4 + 4 + 4);
    g0 = eax2;
    return 0;
}

int32_t FillRect = 0x45d0;

int32_t SelectObject = 0x4628;

int32_t CreateFontA = 0x461a;

int32_t TextOutA = 0x460e;

int32_t GetTextExtentPointA = 0x45f8;

void fun_401250(void** ecx) {
    void** esp2;
    void** v3;
    void** ebx4;
    void** v5;
    void** ebp6;
    void** v7;
    void** esi8;
    void** v9;
    void** edi10;
    void*** esp11;
    void** v12;
    void* esp13;
    void* esp14;
    void* esp15;
    void* eax16;
    uint32_t eax17;
    void*** esp18;
    void** v19;
    uint32_t v20;
    void** v21;
    void** v22;
    void** v23;
    void* esp24;
    void** esi25;
    void** edi26;
    int32_t ebp27;
    void* esp28;
    void** v29;
    void*** esp30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void*** esp43;
    void** v44;
    void* ecx45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    int32_t v72;
    int32_t v73;
    int32_t v74;
    int32_t v75;
    int32_t v76;
    int32_t v77;
    int32_t v78;
    int32_t v79;
    int32_t v80;
    int32_t v81;
    int32_t v82;
    int32_t v83;
    int32_t v84;
    int32_t v85;
    int32_t v86;
    int32_t v87;
    int32_t v88;
    int32_t v89;
    int32_t v90;
    int32_t v91;
    int32_t v92;
    int32_t v93;
    int32_t v94;
    int32_t v95;
    int32_t v96;
    int32_t v97;
    void*** esp98;
    void** v99;
    void*** esp100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void* esp108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void* esp131;
    void* esp132;
    void** v133;
    void** eax134;
    void* esp135;
    void*** esp136;
    void** v137;
    void** v138;
    void* esp139;
    void* ecx140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    int32_t v153;
    int32_t v154;
    int32_t v155;
    int32_t v156;
    int32_t v157;
    int32_t v158;
    int32_t v159;
    int32_t v160;
    int32_t v161;
    int32_t v162;
    int32_t v163;
    int32_t v164;
    void* esp165;
    void* ecx166;
    void** v167;
    void** v168;
    void** v169;
    void** v170;
    void** v171;
    void** v172;
    void** v173;
    void** v174;
    void** v175;
    void** v176;
    int32_t v177;
    int32_t v178;
    int32_t v179;
    int32_t v180;
    int32_t v181;
    int32_t v182;
    int32_t v183;
    int32_t v184;
    int32_t v185;
    int32_t v186;
    void* esp187;
    void* ecx188;
    void** v189;
    void** v190;
    void** v191;
    void** v192;
    void** v193;
    void** v194;
    void** v195;
    void** v196;
    int32_t v197;
    int32_t v198;
    int32_t v199;
    int32_t v200;
    int32_t v201;
    int32_t v202;
    int32_t v203;
    int32_t v204;
    void* esp205;
    void* ecx206;
    void** v207;
    void** v208;
    void** v209;
    void** v210;
    void** v211;
    void** v212;
    int32_t v213;
    int32_t v214;
    int32_t v215;
    int32_t v216;
    int32_t v217;
    int32_t v218;
    void* esp219;
    void* esp220;
    void* esp221;
    int32_t* ecx222;
    void* esp223;
    int32_t ebx224;
    int32_t ebp225;
    int32_t eax226;
    int32_t eax227;
    int32_t* esp228;
    void* esp229;
    void* ecx230;
    void* v231;
    int32_t eax232;
    void* esp233;
    void* esp234;

    esp2 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4);
    g0 = esp2;
    v3 = ebx4;
    v5 = ebp6;
    v7 = esi8;
    v9 = edi10;
    esp11 = reinterpret_cast<void***>(esp2 - 34 - 1 - 1 - 1 - 1 - 1);
    v12 = ecx;
    fun_401962(esp11 + 18, v12, v9, v7, v5, v3);
    esp13 = reinterpret_cast<void*>(esp11 - 1 + 1 - 1);
    fun_40195c(reinterpret_cast<uint32_t>(esp13) + 72, 2, v12, v9, v7, v5, v3);
    esp14 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp13) - 4 + 4 - 4);
    fun_401956(reinterpret_cast<uint32_t>(esp14) + 32, 0xc0ffff, 2, v12, v9, v7, v5, v3);
    esp15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp14) - 4 + 4);
    eax16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp15) + 28);
    eax17 = -reinterpret_cast<uint32_t>(eax16);
    esp18 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp15) - 4);
    v19 = reinterpret_cast<void**>(eax17 - (eax17 + reinterpret_cast<uint1_t>(eax17 < eax17 + reinterpret_cast<uint1_t>(!!eax16))) & v20);
    v21 = reinterpret_cast<void**>(esp18 + 14);
    v22 = v23;
    FillRect(v22, v21, v19, 0xc0ffff, 2, v12, v9, v7, v5, v3);
    esp24 = reinterpret_cast<void*>(esp18 - 1 - 1 - 1 + 1);
    esi25 = reinterpret_cast<void**>(100);
    edi26 = reinterpret_cast<void**>(0xffffff9c);
    ebp27 = 11;
    do {
        esp28 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp24) - 4);
        v29 = esi25;
        esp30 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp28) - 4 - 4);
        v31 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp28) + 56);
        fun_401950(esp30 + 20, v31, v29, 0xfffffda8, v22, v21, v19, 0xc0ffff, 2, v12, v9, v7, v5, v3, v32, v33, v34, v35, v36, v37, 100, 0xffffff9c, 0x258, 0xfffffda8, v38, v39, v40, v41, v42);
        esp43 = esp30 - 1 + 1 - 1 - 1;
        v44 = edi26 + 0xaf;
        ecx45 = reinterpret_cast<void*>(esp43 + 19);
        fun_40194a(ecx45, v44, 0x9c, v31, v29, 0xfffffda8, v22, v21, v19, 0xc0ffff, 2, v12, v9, v7, v5, v3, v46, v47, v48, v49, v50, v51, 100, 0xffffff9c, 0x258, 0xfffffda8, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, ecx45, v44, 0x9c, v31, v29, 0xfffffda8, v22, v21, v19, 0xc0ffff, 2, v12, v9, v7, v5, v3, v72, v73, v74, v75, v76, v77, 100, 0xffffff9c, 0x258, 0xfffffda8, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, v92, v93, v94, v95, v96, v97);
        esp98 = esp43 - 1 + 1 - 1;
        v99 = edi26;
        esp100 = esp98 - 1 - 1;
        v101 = reinterpret_cast<void**>(esp98 + 5);
        fun_401950(esp100 + 20, v101, 100, v99, v44, 0x9c, v31, v29, 0xfffffda8, v22, v21, v19, 0xc0ffff, 2, v12, v9, v7, v5, v3, v102, v103, v104, v105, v106, v107, 100, 0xffffff9c, 0x258, 0xfffffda8);
        esp108 = reinterpret_cast<void*>(esp100 - 1 + 1);
        v109 = esi25 + 0xffffff51;
        fun_40194a(reinterpret_cast<uint32_t>(esp108) + 68, 0x258, v109, v101, 100, v99, v44, 0x9c, v31, v29, 0xfffffda8, v22, v21, v19, 0xc0ffff, 2, v12, v9, v7, v5, v3, v110, v111, v112, v113, v114, v115, 100, 0xffffff9c, 0x258, 0xfffffda8, v116, v117, v118, v119, v120, v121, v122, v123, v124, v125, v126, v127, v128, v129, v130);
        esp24 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp108) - 4 - 4 - 4 + 4);
        esi25 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi25) + 50);
        edi26 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edi26) - 50);
        --ebp27;
    } while (ebp27);
    esp131 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp24) - 4 - 4 - 4);
    fun_401944(reinterpret_cast<uint32_t>(esp131) + 56, 0, 30);
    esp132 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp131) - 4 + 4);
    v133 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp132) + 44);
    eax134 = fun_40193e(reinterpret_cast<uint32_t>(esp132) + 68);
    esp135 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp132) - 4 - 4 + 4 - 4);
    esp136 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp135) - 4 - 4);
    v137 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp135) + 56);
    fun_401950(esp136 + 20, v137, 100, 0x9c, v133, 0, 30, 0xff, 0x258, v109, v101, 100, v99, v44, eax134, v31, v29, 0xfffffda8, v22, v21, v19, 0xc0ffff, 2, v12, v9, v7, v5, v3, v138);
    esp139 = reinterpret_cast<void*>(esp136 - 1 + 1 - 1 - 1);
    ecx140 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp139) + 76);
    fun_40194a(ecx140, 100, 0xfffffda8, v137, 100, 0x9c, v133, 0, 30, 0xff, 0x258, v109, v101, 100, v99, v44, eax134, v31, v29, 0xfffffda8, v22, v21, v19, 0xc0ffff, 2, v12, v9, v7, v5, v3, v141, v142, v143, v144, v145, v146, 100, 0xffffff9c, 0x258, 0xfffffda8, v147, v148, v149, v150, v151, v152, ecx140, 100, 0xfffffda8, v137, 100, 0x9c, v133, 0, 30, 0xff, 0x258, v109, v101, 100, v99, v44, eax134, v31, v29, 0xfffffda8, v22, v21, v19, 0xc0ffff, 2, v12, v9, v7, v5, v3, v153, v154, v155, v156, v157, v158, 100, 0xffffff9c, 0x258, 0xfffffda8, v159, v160, v161, v162, v163, v164);
    esp165 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp139) - 4 + 4 - 4 - 4);
    ecx166 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp165) + 76);
    fun_40194a(ecx166, 0x258, 0xfffffda8, 100, 0xfffffda8, v137, 100, 0x9c, v133, 0, 30, 0xff, 0x258, v109, v101, 100, v99, v44, eax134, v31, v29, 0xfffffda8, v22, v21, v19, 0xc0ffff, 2, v12, v9, v7, v5, v3, v167, v168, v169, v170, v171, v172, 100, 0xffffff9c, 0x258, 0xfffffda8, v173, v174, v175, v176, ecx166, 0x258, 0xfffffda8, 100, 0xfffffda8, v137, 100, 0x9c, v133, 0, 30, 0xff, 0x258, v109, v101, 100, v99, v44, eax134, v31, v29, 0xfffffda8, v22, v21, v19, 0xc0ffff, 2, v12, v9, v7, v5, v3, v177, v178, v179, v180, v181, v182, 100, 0xffffff9c, 0x258, 0xfffffda8, v183, v184, v185, v186);
    esp187 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp165) - 4 + 4 - 4 - 4);
    ecx188 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp187) + 76);
    fun_40194a(ecx188, 0x258, 0x9c, 0x258, 0xfffffda8, 100, 0xfffffda8, v137, 100, 0x9c, v133, 0, 30, 0xff, 0x258, v109, v101, 100, v99, v44, eax134, v31, v29, 0xfffffda8, v22, v21, v19, 0xc0ffff, 2, v12, v9, v7, v5, v3, v189, v190, v191, v192, v193, v194, 100, 0xffffff9c, 0x258, 0xfffffda8, v195, v196, ecx188, 0x258, 0x9c, 0x258, 0xfffffda8, 100, 0xfffffda8, v137, 100, 0x9c, v133, 0, 30, 0xff, 0x258, v109, v101, 100, v99, v44, eax134, v31, v29, 0xfffffda8, v22, v21, v19, 0xc0ffff, 2, v12, v9, v7, v5, v3, v197, v198, v199, v200, v201, v202, 100, 0xffffff9c, 0x258, 0xfffffda8, v203, v204);
    esp205 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp187) - 4 + 4 - 4 - 4);
    ecx206 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp205) + 76);
    fun_40194a(ecx206, 100, 0x9c, 0x258, 0x9c, 0x258, 0xfffffda8, 100, 0xfffffda8, v137, 100, 0x9c, v133, 0, 30, 0xff, 0x258, v109, v101, 100, v99, v44, eax134, v31, v29, 0xfffffda8, v22, v21, v19, 0xc0ffff, 2, v12, v9, v7, v5, v3, v207, v208, v209, v210, v211, v212, 100, 0xffffff9c, 0x258, 0xfffffda8, ecx206, 100, 0x9c, 0x258, 0x9c, 0x258, 0xfffffda8, 100, 0xfffffda8, v137, 100, 0x9c, v133, 0, 30, 0xff, 0x258, v109, v101, 100, v99, v44, eax134, v31, v29, 0xfffffda8, v22, v21, v19, 0xc0ffff, 2, v12, v9, v7, v5, v3, v213, v214, v215, v216, v217, v218, 100, 0xffffff9c, 0x258, 0xfffffda8);
    esp219 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp205) - 4 + 4);
    if (reinterpret_cast<uint32_t>(esp219) + 40) {
        SelectObject(100, reinterpret_cast<uint32_t>(esp219) + 40);
        esp219 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp219) - 4 - 4 - 4 + 4);
    }
    esp220 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp219) - 4);
    fun_401938(reinterpret_cast<uint32_t>(esp220) + 72, 24);
    esp221 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp220) - 4 + 4 - 4);
    ecx222 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esp221) + 72);
    fun_401932(ecx222, 1, 24);
    esp223 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp221) - 4 + 4);
    ebx224 = CreateFontA;
    ebp225 = 0;
    do {
        __asm__("fld dword [esp+0x20]");
        __asm__("fchs ");
        eax226 = fun_4019d0(ecx222, 0);
        eax227 = reinterpret_cast<int32_t>(ebx224(ecx222, eax226, 0));
        esp228 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esp223) - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4 - 4);
        fun_40192c(esp228 + 5, eax227, eax226, 0);
        esp229 = reinterpret_cast<void*>(esp228 - 1 + 1);
        ecx230 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp229) + 68);
        v231 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp229) + 16);
        eax232 = fun_401926(ecx230, v231, eax227, eax226, 0);
        TextOutA(ecx230, 100, 0x2bc, 0xfffffda8, ebp225 + reinterpret_cast<int32_t>("Fading..."), 1, v231, eax227, eax226, 0);
        GetTextExtentPointA();
        esp233 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp229) - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4);
        if (reinterpret_cast<uint32_t>(esp233) + 36) {
            SelectObject(eax232, reinterpret_cast<uint32_t>(esp233) + 36);
            esp233 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp233) - 4 - 4 - 4 + 4);
        }
        __asm__("fld dword [esp+0x18]");
        __asm__("fmul dword [0x402134]");
        __asm__("fstp dword [esp+0x18]");
        ecx222 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esp233) + 16);
        fun_401920(ecx222);
        esp223 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp233) - 4 + 4);
        ++ebp225;
    } while (ebp225 < 9);
    fun_401920(reinterpret_cast<uint32_t>(esp223) + 44);
    esp234 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp223) - 4 + 4);
    fun_401920(reinterpret_cast<uint32_t>(esp234) + 28);
    fun_40191a(reinterpret_cast<uint32_t>(esp234) - 4 + 4 + 68);
    g0 = v133;
    goto 0xff;
}

int32_t _except_handler3 = 0x455e;

void fun_401bf0() {
    goto _except_handler3;
}

/* MFC42.DLL:6375 */
int32_t MFC42_DLL_6375 = 0x800018e7;

void fun_401746() {
    goto MFC42_DLL_6375;
}

void fun_401c78() {
    goto 0x4019c0;
}

/* MFC42.DLL:5265 */
int32_t MFC42_DLL_5265 = 0x80001491;

void fun_40183c() {
    goto MFC42_DLL_5265;
}

/* MFC42.DLL:3663 */
int32_t MFC42_DLL_3663 = 0x80000e4f;

void fun_401908() {
    goto MFC42_DLL_3663;
}

/* MFC42.DLL:4486 */
int32_t MFC42_DLL_4486 = 0x80001186;

void fun_40174c() {
    goto MFC42_DLL_4486;
}

void fun_401130() {
    return;
}

void fun_401c90() {
    goto fun_40182a;
}

/* MFC42.DLL:4376 */
int32_t MFC42_DLL_4376 = 0x80001118;

void fun_401842() {
    goto MFC42_DLL_4376;
}

int32_t* fun_4011c0(int32_t* ecx, unsigned char a2) {
    fun_401120();
    if (a2 & 1) {
        fun_40181e(ecx);
    }
    return ecx;
}

/* MFC42.DLL:3619 */
int32_t MFC42_DLL_3619 = 0x80000e23;

void fun_40190e() {
    goto MFC42_DLL_3619;
}

/* MFC42.DLL:2554 */
int32_t MFC42_DLL_2554 = 0x800009fa;

void fun_401752() {
    goto MFC42_DLL_2554;
}

void fun_401140() {
    return;
}

void fun_401c98() {
    goto 0x4019c0;
}

/* MFC42.DLL:4853 */
int32_t MFC42_DLL_4853 = 0x800012f5;

void fun_401848() {
    goto MFC42_DLL_4853;
}

/* MFC42.DLL:3626 */
int32_t MFC42_DLL_3626 = 0x80000e2a;

void fun_401914() {
    goto MFC42_DLL_3626;
}

/* MFC42.DLL:2512 */
int32_t MFC42_DLL_2512 = 0x800009d0;

void fun_401758() {
    goto MFC42_DLL_2512;
}

void fun_401cb0() {
    goto fun_40191a;
}

/* MFC42.DLL:4998 */
int32_t MFC42_DLL_4998 = 0x80001386;

void fun_40184e() {
    goto MFC42_DLL_4998;
}

/* MFC42.DLL:5731 */
int32_t MFC42_DLL_5731 = 0x80001663;

void fun_40175e() {
    goto MFC42_DLL_5731;
}

void fun_401cb8() {
    goto 0x401660;
}

/* MFC42.DLL:6052 */
int32_t MFC42_DLL_6052 = 0x800017a4;

void fun_401854() {
    goto MFC42_DLL_6052;
}

/* MFC42.DLL:3922 */
int32_t MFC42_DLL_3922 = 0x80000f52;

void fun_401764() {
    goto MFC42_DLL_3922;
}

void fun_401cc3() {
    goto 0x401610;
}

/* MFC42.DLL:4078 */
int32_t MFC42_DLL_4078 = 0x80000fee;

void fun_40185a() {
    goto MFC42_DLL_4078;
}

/* MFC42.DLL:1089 */
int32_t MFC42_DLL_1089 = 0x80000441;

void fun_40176a() {
    goto MFC42_DLL_1089;
}

void fun_401ccb() {
    goto fun_4016d0;
}

/* MFC42.DLL:1775 */
int32_t MFC42_DLL_1775 = 0x800006ef;

void fun_401860() {
    goto MFC42_DLL_1775;
}

/* MFC42.DLL:5199 */
int32_t MFC42_DLL_5199 = 0x8000144f;

void fun_401770() {
    goto MFC42_DLL_5199;
}

void fun_401cd6() {
    int32_t ebp1;

    *reinterpret_cast<int32_t*>(ebp1 - 0x94) = 0x402210;
    return;
}

/* MFC42.DLL:4407 */
int32_t MFC42_DLL_4407 = 0x80001137;

void fun_401866() {
    goto MFC42_DLL_4407;
}

/* MFC42.DLL:2396 */
int32_t MFC42_DLL_2396 = 0x8000095c;

void fun_401776() {
    goto MFC42_DLL_2396;
}

void fun_401ce1() {
    goto 0x401590;
}

/* MFC42.DLL:5241 */
int32_t MFC42_DLL_5241 = 0x80001479;

void fun_40186c() {
    goto MFC42_DLL_5241;
}

/* MFC42.DLL:3346 */
int32_t MFC42_DLL_3346 = 0x80000d12;

void fun_40177c() {
    goto MFC42_DLL_3346;
}

void fun_401ce9() {
    goto 0x401590;
}

/* MFC42.DLL:2385 */
int32_t MFC42_DLL_2385 = 0x80000951;

void fun_401872() {
    goto MFC42_DLL_2385;
}

/* MFC42.DLL:5300 */
int32_t MFC42_DLL_5300 = 0x800014b4;

void fun_401782() {
    goto MFC42_DLL_5300;
}

void fun_401cf4() {
    goto 0x4019c0;
}

/* MFC42.DLL:5163 */
int32_t MFC42_DLL_5163 = 0x8000142b;

void fun_401878() {
    goto MFC42_DLL_5163;
}

/* MFC42.DLL:5302 */
int32_t MFC42_DLL_5302 = 0x800014b6;

void fun_401788() {
    goto MFC42_DLL_5302;
}

void fun_401d00() {
    goto 0x401590;
}

/* MFC42.DLL:6374 */
int32_t MFC42_DLL_6374 = 0x800018e6;

void fun_40187e() {
    goto MFC42_DLL_6374;
}

/* MFC42.DLL:2725 */
int32_t MFC42_DLL_2725 = 0x80000aa5;

void fun_40178e() {
    goto MFC42_DLL_2725;
}

void fun_401d08() {
    goto 0x4019c0;
}

/* MFC42.DLL:4353 */
int32_t MFC42_DLL_4353 = 0x80001101;

void fun_401884() {
    goto MFC42_DLL_4353;
}

/* MFC42.DLL:4079 */
int32_t MFC42_DLL_4079 = 0x80000fef;

void fun_401794() {
    goto MFC42_DLL_4079;
}

void fun_401d20() {
    goto 0x401590;
}

/* MFC42.DLL:5280 */
int32_t MFC42_DLL_5280 = 0x800014a0;

void fun_40188a() {
    goto MFC42_DLL_5280;
}

/* MFC42.DLL:4698 */
int32_t MFC42_DLL_4698 = 0x8000125a;

void fun_40179a() {
    goto MFC42_DLL_4698;
}

void fun_401d28() {
    goto 0x4019c0;
}

/* MFC42.DLL:3798 */
int32_t MFC42_DLL_3798 = 0x80000ed6;

void fun_401890() {
    goto MFC42_DLL_3798;
}

/* MFC42.DLL:5307 */
int32_t MFC42_DLL_5307 = 0x800014bb;

void fun_4017a0() {
    goto MFC42_DLL_5307;
}

void fun_401d40() {
    goto 0x401590;
}

/* MFC42.DLL:4837 */
int32_t MFC42_DLL_4837 = 0x800012e5;

void fun_401896() {
    goto MFC42_DLL_4837;
}

/* MFC42.DLL:5289 */
int32_t MFC42_DLL_5289 = 0x800014a9;

void fun_4017a6() {
    goto MFC42_DLL_5289;
}

void fun_401d48() {
    goto 0x4019c0;
}

/* MFC42.DLL:4441 */
int32_t MFC42_DLL_4441 = 0x80001159;

void fun_40189c() {
    goto MFC42_DLL_4441;
}

/* MFC42.DLL:5714 */
int32_t MFC42_DLL_5714 = 0x80001652;

void fun_4017ac() {
    goto MFC42_DLL_5714;
}

void fun_401d60() {
    goto 0x401590;
}

/* MFC42.DLL:2648 */
int32_t MFC42_DLL_2648 = 0x80000a58;

void fun_4018a2() {
    goto MFC42_DLL_2648;
}

/* MFC42.DLL:2982 */
int32_t MFC42_DLL_2982 = 0x80000ba6;

void fun_4017b2() {
    goto MFC42_DLL_2982;
}

void fun_401d68() {
    goto 0x4019c0;
}

/* MFC42.DLL:2055 */
int32_t MFC42_DLL_2055 = 0x80000807;

void fun_4018a8() {
    goto MFC42_DLL_2055;
}

/* MFC42.DLL:3147 */
int32_t MFC42_DLL_3147 = 0x80000c4b;

void fun_4017b8() {
    goto MFC42_DLL_3147;
}

void fun_401d72() {
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
    signed char* eax73;
    signed char* eax74;
    signed char al75;
    signed char* eax76;
    signed char* eax77;
    signed char al78;
    signed char* eax79;
    signed char* eax80;
    signed char al81;
    signed char* eax82;
    signed char* eax83;
    signed char al84;
    signed char* eax85;
    signed char* eax86;
    signed char al87;
    signed char* eax88;
    signed char* eax89;
    signed char al90;
    signed char* eax91;
    signed char* eax92;
    signed char al93;
    signed char* eax94;
    signed char* eax95;
    signed char al96;
    signed char* eax97;
    signed char* eax98;
    signed char al99;
    signed char* eax100;
    signed char* eax101;
    signed char al102;
    signed char* eax103;
    signed char* eax104;
    signed char al105;
    signed char* eax106;
    signed char* eax107;
    signed char al108;
    signed char* eax109;
    signed char* eax110;
    signed char al111;
    signed char* eax112;
    signed char* eax113;
    signed char al114;
    signed char* eax115;
    signed char* eax116;
    signed char al117;
    signed char* eax118;
    signed char* eax119;
    signed char al120;
    signed char* eax121;
    signed char* eax122;
    signed char al123;
    signed char* eax124;
    signed char* eax125;
    signed char al126;
    signed char* eax127;
    signed char* eax128;
    signed char al129;
    signed char* eax130;
    signed char* eax131;
    signed char al132;
    signed char* eax133;
    signed char* eax134;
    signed char al135;
    signed char* eax136;
    signed char* eax137;
    signed char al138;
    signed char* eax139;
    signed char* eax140;
    signed char al141;
    signed char* eax142;
    signed char* eax143;
    signed char al144;
    signed char* eax145;
    signed char* eax146;
    signed char al147;
    signed char* eax148;
    signed char* eax149;
    signed char al150;
    signed char* eax151;
    signed char* eax152;
    signed char al153;
    signed char* eax154;
    signed char* eax155;
    signed char al156;
    signed char* eax157;
    signed char* eax158;
    signed char al159;
    signed char* eax160;
    signed char* eax161;
    signed char al162;
    signed char* eax163;
    signed char* eax164;
    signed char al165;
    signed char* eax166;
    signed char* eax167;
    signed char al168;
    signed char* eax169;
    signed char* eax170;
    signed char al171;
    signed char* eax172;
    signed char* eax173;
    signed char al174;
    signed char* eax175;
    signed char* eax176;
    signed char al177;
    signed char* eax178;
    signed char* eax179;
    signed char al180;
    signed char* eax181;
    signed char* eax182;
    signed char al183;
    signed char* eax184;
    signed char* eax185;
    signed char al186;
    signed char* eax187;
    signed char* eax188;
    signed char al189;
    signed char* eax190;
    signed char* eax191;
    signed char al192;
    signed char* eax193;
    signed char* eax194;
    signed char al195;
    signed char* eax196;
    signed char* eax197;
    signed char al198;
    signed char* eax199;
    signed char* eax200;
    signed char al201;
    signed char* eax202;
    signed char* eax203;
    signed char al204;
    signed char* eax205;
    signed char* eax206;
    signed char al207;
    signed char* eax208;
    signed char* eax209;
    signed char al210;
    signed char* eax211;
    signed char* eax212;
    signed char al213;

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
    *eax73 = reinterpret_cast<signed char>(*eax74 + al75);
    *eax76 = reinterpret_cast<signed char>(*eax77 + al78);
    *eax79 = reinterpret_cast<signed char>(*eax80 + al81);
    *eax82 = reinterpret_cast<signed char>(*eax83 + al84);
    *eax85 = reinterpret_cast<signed char>(*eax86 + al87);
    *eax88 = reinterpret_cast<signed char>(*eax89 + al90);
    *eax91 = reinterpret_cast<signed char>(*eax92 + al93);
    *eax94 = reinterpret_cast<signed char>(*eax95 + al96);
    *eax97 = reinterpret_cast<signed char>(*eax98 + al99);
    *eax100 = reinterpret_cast<signed char>(*eax101 + al102);
    *eax103 = reinterpret_cast<signed char>(*eax104 + al105);
    *eax106 = reinterpret_cast<signed char>(*eax107 + al108);
    *eax109 = reinterpret_cast<signed char>(*eax110 + al111);
    *eax112 = reinterpret_cast<signed char>(*eax113 + al114);
    *eax115 = reinterpret_cast<signed char>(*eax116 + al117);
    *eax118 = reinterpret_cast<signed char>(*eax119 + al120);
    *eax121 = reinterpret_cast<signed char>(*eax122 + al123);
    *eax124 = reinterpret_cast<signed char>(*eax125 + al126);
    *eax127 = reinterpret_cast<signed char>(*eax128 + al129);
    *eax130 = reinterpret_cast<signed char>(*eax131 + al132);
    *eax133 = reinterpret_cast<signed char>(*eax134 + al135);
    *eax136 = reinterpret_cast<signed char>(*eax137 + al138);
    *eax139 = reinterpret_cast<signed char>(*eax140 + al141);
    *eax142 = reinterpret_cast<signed char>(*eax143 + al144);
    *eax145 = reinterpret_cast<signed char>(*eax146 + al147);
    *eax148 = reinterpret_cast<signed char>(*eax149 + al150);
    *eax151 = reinterpret_cast<signed char>(*eax152 + al153);
    *eax154 = reinterpret_cast<signed char>(*eax155 + al156);
    *eax157 = reinterpret_cast<signed char>(*eax158 + al159);
    *eax160 = reinterpret_cast<signed char>(*eax161 + al162);
    *eax163 = reinterpret_cast<signed char>(*eax164 + al165);
    *eax166 = reinterpret_cast<signed char>(*eax167 + al168);
    *eax169 = reinterpret_cast<signed char>(*eax170 + al171);
    *eax172 = reinterpret_cast<signed char>(*eax173 + al174);
    *eax175 = reinterpret_cast<signed char>(*eax176 + al177);
    *eax178 = reinterpret_cast<signed char>(*eax179 + al180);
    *eax181 = reinterpret_cast<signed char>(*eax182 + al183);
    *eax184 = reinterpret_cast<signed char>(*eax185 + al186);
    *eax187 = reinterpret_cast<signed char>(*eax188 + al189);
    *eax190 = reinterpret_cast<signed char>(*eax191 + al192);
    *eax193 = reinterpret_cast<signed char>(*eax194 + al195);
    *eax196 = reinterpret_cast<signed char>(*eax197 + al198);
    *eax199 = reinterpret_cast<signed char>(*eax200 + al201);
    *eax202 = reinterpret_cast<signed char>(*eax203 + al204);
    *eax205 = reinterpret_cast<signed char>(*eax206 + al207);
    *eax208 = reinterpret_cast<signed char>(*eax209 + al210);
    *eax211 = reinterpret_cast<signed char>(*eax212 + al213);
}

/* MFC42.DLL:6376 */
int32_t MFC42_DLL_6376 = 0x800018e8;

void fun_4018ae() {
    goto MFC42_DLL_6376;
}

/* MFC42.DLL:3259 */
int32_t MFC42_DLL_3259 = 0x80000cbb;

void fun_4017be() {
    goto MFC42_DLL_3259;
}

/* MFC42.DLL:3749 */
int32_t MFC42_DLL_3749 = 0x80000ea5;

void fun_4018b4() {
    goto MFC42_DLL_3749;
}

/* MFC42.DLL:4465 */
int32_t MFC42_DLL_4465 = 0x80001171;

void fun_4017c4() {
    goto MFC42_DLL_4465;
}

/* MFC42.DLL:5065 */
int32_t MFC42_DLL_5065 = 0x800013c9;

void fun_4018ba() {
    goto MFC42_DLL_5065;
}

/* MFC42.DLL:3136 */
int32_t MFC42_DLL_3136 = 0x80000c40;

void fun_4017ca() {
    goto MFC42_DLL_3136;
}

/* MFC42.DLL:1727 */
int32_t MFC42_DLL_1727 = 0x800006bf;

void fun_4018c0() {
    goto MFC42_DLL_1727;
}

/* MFC42.DLL:3262 */
int32_t MFC42_DLL_3262 = 0x80000cbe;

void fun_4017d0() {
    goto MFC42_DLL_3262;
}

/* MFC42.DLL:5261 */
int32_t MFC42_DLL_5261 = 0x8000148d;

void fun_4018c6() {
    goto MFC42_DLL_5261;
}

/* MFC42.DLL:2985 */
int32_t MFC42_DLL_2985 = 0x80000ba9;

void fun_4017d6() {
    goto MFC42_DLL_2985;
}

/* MFC42.DLL:2446 */
int32_t MFC42_DLL_2446 = 0x8000098e;

void fun_4018cc() {
    goto MFC42_DLL_2446;
}

/* MFC42.DLL:3081 */
int32_t MFC42_DLL_3081 = 0x80000c09;

void fun_4017dc() {
    goto MFC42_DLL_3081;
}

/* MFC42.DLL:2124 */
int32_t MFC42_DLL_2124 = 0x8000084c;

void fun_4018d2() {
    goto MFC42_DLL_2124;
}

/* MFC42.DLL:2976 */
int32_t MFC42_DLL_2976 = 0x80000ba0;

void fun_4017e2() {
    goto MFC42_DLL_2976;
}

/* MFC42.DLL:5277 */
int32_t MFC42_DLL_5277 = 0x8000149d;

void fun_4018d8() {
    goto MFC42_DLL_5277;
}

/* MFC42.DLL:3830 */
int32_t MFC42_DLL_3830 = 0x80000ef6;

void fun_4017e8() {
    goto MFC42_DLL_3830;
}

/* MFC42.DLL:4627 */
int32_t MFC42_DLL_4627 = 0x80001213;

void fun_4018de() {
    goto MFC42_DLL_4627;
}

/* MFC42.DLL:3831 */
int32_t MFC42_DLL_3831 = 0x80000ef7;

void fun_4017ee() {
    goto MFC42_DLL_3831;
}

/* MFC42.DLL:4425 */
int32_t MFC42_DLL_4425 = 0x80001149;

void fun_4018e4() {
    goto MFC42_DLL_4425;
}

/* MFC42.DLL:3825 */
int32_t MFC42_DLL_3825 = 0x80000ef1;

void fun_4017f4() {
    goto MFC42_DLL_3825;
}

/* MFC42.DLL:3597 */
int32_t MFC42_DLL_3597 = 0x80000e0d;

void fun_4018ea() {
    goto MFC42_DLL_3597;
}

/* MFC42.DLL:3079 */
int32_t MFC42_DLL_3079 = 0x80000c07;

void fun_4017fa() {
    goto MFC42_DLL_3079;
}

/* MFC42.DLL:4080 */
int32_t MFC42_DLL_4080 = 0x80000ff0;

void fun_401800() {
    goto MFC42_DLL_4080;
}

/* MFC42.DLL:4622 */
int32_t MFC42_DLL_4622 = 0x8000120e;

void fun_401806() {
    goto MFC42_DLL_4622;
}

/* MFC42.DLL:4424 */
int32_t MFC42_DLL_4424 = 0x80001148;

void fun_40180c() {
    goto MFC42_DLL_4424;
}

/* MFC42.DLL:3738 */
int32_t MFC42_DLL_3738 = 0x80000e9a;

void fun_401812() {
    goto MFC42_DLL_3738;
}
