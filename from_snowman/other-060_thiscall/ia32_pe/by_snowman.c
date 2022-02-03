
struct s0 {
    signed char[4] pad4;
    unsigned char f4;
};

int32_t fun_40100a(struct s0* ecx) {
    uint32_t eax2;
    uint32_t eax3;

    eax2 = ecx->f4;
    eax3 = -eax2;
    return reinterpret_cast<int32_t>(-(eax3 - (eax3 + reinterpret_cast<uint1_t>(eax3 < eax3 + reinterpret_cast<uint1_t>(!!eax2))))) - 1;
}

int32_t fun_40101e(int32_t ecx, uint32_t a2) {
    return -1;
}

unsigned char fun_401014(int32_t* a1, int32_t* a2, uint32_t a3) {
    return static_cast<unsigned char>(reinterpret_cast<uint1_t>(*a1 == *a2));
}

/*
 * ?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ
 * public: class std::basic_streambuf<char,struct std::char_traits<char> > * __thiscall std::basic_ios<char,struct std::char_traits<char> >::rdbuf(void)const
 */
int32_t rdbuf_basic_ios_DU_char_traits_D_std_std_QBEPAV_basic_streambuf_DU_char_traits_D_std_2_XZ = 0x857a;

struct s1 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_40102d(int32_t* ecx) {
    int32_t eax2;
    struct s1** eax3;
    int32_t edx4;

    eax2 = reinterpret_cast<int32_t>(rdbuf_basic_ios_DU_char_traits_D_std_std_QBEPAV_basic_streambuf_DU_char_traits_D_std_2_XZ());
    if (eax2) {
        eax3 = reinterpret_cast<struct s1**>(rdbuf_basic_ios_DU_char_traits_D_std_std_QBEPAV_basic_streambuf_DU_char_traits_D_std_2_XZ());
        edx4 = (*eax3)->f8;
        edx4(eax3);
    }
    return;
}

int32_t _amsg_exit = 0x87b8;

void fun_401c16() {
    goto _amsg_exit;
}

int32_t _initterm_e = 0x8816;

int32_t fun_401e92() {
    goto _initterm_e;
}

int32_t _initterm = 0x880a;

void fun_401e8c(int32_t ecx) {
    goto _initterm;
}

void* g0;

struct s2 {
    int16_t f0;
    signed char[58] pad60;
    int32_t f3c;
};

int32_t fun_401d40(struct s2* a1);

struct s3 {
    signed char[8] pad8;
    int32_t f8;
    uint32_t fc;
    signed char[20] pad36;
    uint32_t f24;
};

struct s4 {
    signed char[60] pad60;
    int32_t f3c;
};

struct s3* fun_401d80(struct s4* a1, uint32_t a2);

uint32_t fun_401dd0(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    void* eax9;
    int32_t eax10;
    struct s3* eax11;
    uint32_t eax12;

    eax9 = g0;
    g0 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16);
    eax10 = fun_401d40(0x400000);
    if (!eax10 || (eax11 = fun_401d80(0x400000, a2 - 0x400000), eax11 == 0)) {
        g0 = eax9;
        return 0;
    } else {
        eax12 = ~(eax11->f24 >> 31) & 1;
        g0 = eax9;
        return eax12;
    }
}

int32_t _XcptFilter = 0x87e8;

void fun_401d32() {
    goto _XcptFilter;
}

int32_t fun_402046(int32_t a1, int32_t a2, int32_t a3);

void fun_402040(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);

void fun_401f45(int32_t ecx) {
    int32_t eax2;

    eax2 = fun_402046(0, 0x10000, 0x30000);
    if (eax2) {
        fun_402040(0, 0, 0, 0, 0);
    }
    return;
}

int32_t _crt_debugger_hook = 0x8876;

void fun_40201c(uint32_t ecx) {
    goto _crt_debugger_hook;
}

/*
 * ?terminate@@YAXXZ
 * void __cdecl terminate(void)
 */
int32_t terminate_YAXXZ = 0x888c;

void fun_402022() {
    goto terminate_YAXXZ;
}

struct s5 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f14;
};

struct s3* fun_401d80(struct s4* a1, uint32_t a2) {
    struct s5* ecx3;
    uint32_t eax4;
    uint32_t esi5;
    uint32_t edx6;
    struct s3* eax7;
    uint32_t edi8;

    ecx3 = reinterpret_cast<struct s5*>(a1->f3c + reinterpret_cast<int32_t>(a1));
    eax4 = ecx3->f14;
    esi5 = ecx3->f6;
    edx6 = 0;
    eax7 = reinterpret_cast<struct s3*>(eax4 + reinterpret_cast<int32_t>(ecx3) + 24);
    if (!esi5) {
        addr_401dbd_2:
        eax7 = reinterpret_cast<struct s3*>(0);
    } else {
        edi8 = a2;
        do {
            if (edi8 < eax7->fc) 
                continue;
            if (edi8 < eax7->f8 + eax7->fc) 
                break;
            ++edx6;
            ++eax7;
        } while (edx6 < esi5);
        goto addr_401dbd_2;
    }
    return eax7;
}

int32_t _invoke_watson = 0x88e4;

void fun_402040(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    goto _invoke_watson;
}

struct s6 {
    signed char[4] pad4;
    uint32_t f4;
};

uint32_t fun_40100f(int32_t a1);

/*
 * ?width@ios_base@std@@QBE_JXZ
 * public: __int64 __thiscall std::ios_base::width(void)const
 */
int32_t width_ios_base_std_QBE_JXZ = 0x8638;

struct s7 {
    struct s6** f0;
    signed char f4;
};

struct s7* fun_40103c(struct s7* ecx, struct s6** a2);

/*
 * ?flags@ios_base@std@@QBEHXZ
 * public: int __thiscall std::ios_base::flags(void)const
 */
int32_t flags_ios_base_std_QBEHXZ = 0x861a;

/*
 * ?sputn@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAE_JPBD_J@Z
 * public: __int64 __thiscall std::basic_streambuf<char,struct std::char_traits<char> >::sputn(char const *,__int64)
 */
int32_t sputn_basic_streambuf_DU_char_traits_D_std_std_QAE_JPBD_J_Z = 0x84f4;

/*
 * ?fill@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEDXZ
 * public: char __thiscall std::basic_ios<char,struct std::char_traits<char> >::fill(void)const
 */
int32_t fill_basic_ios_DU_char_traits_D_std_std_QBEDXZ = 0x85e2;

/*
 * ?sputc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAEHD@Z
 * public: int __thiscall std::basic_streambuf<char,struct std::char_traits<char> >::sputc(char)
 */
int32_t sputc_basic_streambuf_DU_char_traits_D_std_std_QAEHD_Z = 0x853a;

/*
 * ?width@ios_base@std@@QAE_J_J@Z
 * public: __int64 __thiscall std::ios_base::width(__int64)
 */
int32_t width_ios_base_std_QAE_J_J_Z = 0x84d2;

/*
 * ?setstate@?$basic_ios@DU?$char_traits@D@std@@@std@@QAEXH_N@Z
 * public: void __thiscall std::basic_ios<char,struct std::char_traits<char> >::setstate(int,bool)
 */
int32_t setstate_basic_ios_DU_char_traits_D_std_std_QAEXH_N_Z = 0x8492;

void fun_401023(int32_t* ecx);

struct s6** fun_401028(struct s6** ecx, struct s6** a2, int32_t a3, int32_t a4, struct s6*** a5) {
    void* ebp6;
    void* eax7;
    void* v8;
    int32_t v9;
    uint32_t eax10;
    uint32_t v11;
    uint32_t eax12;
    struct s6* edx13;
    uint32_t eax14;
    uint32_t v15;
    uint32_t v16;
    uint32_t eax17;
    uint32_t v18;
    uint32_t v19;
    int32_t eax20;
    uint32_t eax21;
    struct s6* edx22;
    int32_t eax23;
    uint32_t eax24;
    uint32_t ecx25;
    unsigned char al26;
    uint32_t v27;
    int32_t eax28;
    unsigned char al29;
    uint32_t edx30;
    unsigned char al31;
    uint32_t v32;
    int32_t eax33;
    unsigned char al34;
    uint32_t ecx35;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax7 = g0;
    v8 = eax7;
    g0 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) - 12);
    v9 = 0;
    eax10 = fun_40100f(a3);
    v11 = eax10;
    eax12 = reinterpret_cast<uint32_t>(width_ios_base_std_QBE_JXZ());
    if (reinterpret_cast<int32_t>(a2) < reinterpret_cast<int32_t>(0) || (reinterpret_cast<int32_t>(a2) <= reinterpret_cast<int32_t>(0) && eax12 <= 0 || ((edx13 = *a2, eax14 = reinterpret_cast<uint32_t>(width_ios_base_std_QBE_JXZ()), reinterpret_cast<int32_t>(edx13) < 0) || reinterpret_cast<int32_t>(edx13) <= 0 && eax14 <= v11))) {
        v15 = 0;
        v16 = 0;
    } else {
        eax17 = reinterpret_cast<uint32_t>(width_ios_base_std_QBE_JXZ());
        v15 = eax17 - v11;
        v16 = reinterpret_cast<uint32_t>(a2) - reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(a2) < static_cast<uint32_t>(reinterpret_cast<uint1_t>(eax17 < v11)));
    }
    v18 = v15;
    v19 = v16;
    fun_40103c(reinterpret_cast<int32_t>(ebp6) - 48, a2);
    eax20 = fun_40100a(reinterpret_cast<int32_t>(ebp6) - 48);
    if (eax20 != -1) {
        eax21 = reinterpret_cast<uint32_t>(flags_ios_base_std_QBEHXZ());
        if ((eax21 & 0x1c0) == 64) {
            addr_40132c_7:
            if (!v9 && ((edx22 = *a2, eax23 = reinterpret_cast<int32_t>(rdbuf_basic_ios_DU_char_traits_D_std_std_QBEPAV_basic_streambuf_DU_char_traits_D_std_2_XZ(a3, v11, 0)), eax24 = reinterpret_cast<uint32_t>(sputn_basic_streambuf_DU_char_traits_D_std_std_QAE_JPBD_J_Z(eax23, a3, v11, 0)), eax24 != v11) || edx22)) {
                v9 = 4;
            }
        } else {
            while (reinterpret_cast<int32_t>(v19) >= reinterpret_cast<int32_t>(0) && (reinterpret_cast<int32_t>(v19) > reinterpret_cast<int32_t>(0) || v18 > 0)) {
                ecx25 = reinterpret_cast<uint32_t>(a2) + (*a2)->f4;
                al26 = reinterpret_cast<unsigned char>(fill_basic_ios_DU_char_traits_D_std_std_QBEDXZ(ecx25));
                v27 = al26;
                eax28 = reinterpret_cast<int32_t>(rdbuf_basic_ios_DU_char_traits_D_std_std_QBEPAV_basic_streambuf_DU_char_traits_D_std_2_XZ(v27));
                sputc_basic_streambuf_DU_char_traits_D_std_std_QAEHD_Z(eax28, v27);
                fun_40101e(eax28, v27);
                al29 = fun_401014(reinterpret_cast<int32_t>(ebp6) - 56, reinterpret_cast<int32_t>(ebp6) - 52, v27);
                if (al29) 
                    goto addr_40131f_12;
                edx30 = v19 - reinterpret_cast<uint1_t>(v19 < static_cast<uint32_t>(reinterpret_cast<uint1_t>(v18 < 1)));
                --v18;
                v19 = edx30;
            }
            goto addr_40132c_7;
        }
    } else {
        goto addr_40143b_16;
    }
    if (v9) {
        addr_4013fb_18:
        width_ios_base_std_QAE_J_J_Z(0, 0);
    } else {
        while (reinterpret_cast<int32_t>(v19) >= reinterpret_cast<int32_t>(0) && (reinterpret_cast<int32_t>(v19) > reinterpret_cast<int32_t>(0) || v18 > 0)) {
            al31 = reinterpret_cast<unsigned char>(fill_basic_ios_DU_char_traits_D_std_std_QBEDXZ());
            v32 = al31;
            eax33 = reinterpret_cast<int32_t>(rdbuf_basic_ios_DU_char_traits_D_std_std_QBEPAV_basic_streambuf_DU_char_traits_D_std_2_XZ(v32));
            sputc_basic_streambuf_DU_char_traits_D_std_std_QAEHD_Z(eax33, v32);
            fun_40101e(eax33, v32);
            al34 = fun_401014(reinterpret_cast<int32_t>(ebp6) - 64, reinterpret_cast<int32_t>(ebp6) - 60, v32);
            if (al34) 
                goto addr_4013ee_22;
            ecx35 = v19 - reinterpret_cast<uint1_t>(v19 < static_cast<uint32_t>(reinterpret_cast<uint1_t>(v18 < 1)));
            --v18;
            v19 = ecx35;
        }
        goto addr_4013fb_18;
    }
    addr_40143b_16:
    setstate_basic_ios_DU_char_traits_D_std_std_QAEXH_N_Z();
    fun_401023(reinterpret_cast<int32_t>(ebp6) - 48);
    g0 = v8;
    return a2;
    addr_4013ee_22:
    goto addr_4013fb_18;
    addr_40131f_12:
    v9 = 4;
    goto addr_40132c_7;
}

uint32_t fun_4017d4(int32_t a1);

uint32_t fun_40100f(int32_t a1) {
    uint32_t eax2;

    eax2 = fun_4017d4(a1);
    return eax2;
}

struct s7* fun_401041(struct s7* ecx, struct s6** a2);

/*
 * ?good@ios_base@std@@QBE_NXZ
 * public: bool __thiscall std::ios_base::good(void)const
 */
int32_t good_ios_base_std_QBE_NXZ = 0x86fe;

/*
 * ?tie@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_ostream@DU?$char_traits@D@std@@@2@XZ
 * public: class std::basic_ostream<char,struct std::char_traits<char> > * __thiscall std::basic_ios<char,struct std::char_traits<char> >::tie(void)const
 */
int32_t tie_basic_ios_DU_char_traits_D_std_std_QBEPAV_basic_ostream_DU_char_traits_D_std_2_XZ = 0x869a;

/*
 * ?flush@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV12@XZ
 * public: class std::basic_ostream<char,struct std::char_traits<char> > & __thiscall std::basic_ostream<char,struct std::char_traits<char> >::flush(void)
 */
int32_t flush_basic_ostream_DU_char_traits_D_std_std_QAEAAV12_XZ = 0x8658;

struct s7* fun_40103c(struct s7* ecx, struct s6** a2) {
    unsigned char al3;
    int32_t eax4;
    uint32_t ecx5;
    int32_t eax6;
    uint32_t ecx7;
    signed char al8;

    fun_401041(ecx, a2);
    al3 = reinterpret_cast<unsigned char>(good_ios_base_std_QBE_NXZ());
    if (al3 && (eax4 = reinterpret_cast<int32_t>(tie_basic_ios_DU_char_traits_D_std_std_QBEPAV_basic_ostream_DU_char_traits_D_std_2_XZ()), !!eax4)) {
        ecx5 = reinterpret_cast<uint32_t>(a2) + (*a2)->f4;
        eax6 = reinterpret_cast<int32_t>(tie_basic_ios_DU_char_traits_D_std_std_QBEPAV_basic_ostream_DU_char_traits_D_std_2_XZ(ecx5));
        flush_basic_ostream_DU_char_traits_D_std_std_QAEAAV12_XZ(eax6);
    }
    ecx7 = reinterpret_cast<uint32_t>(a2) + (*a2)->f4;
    al8 = reinterpret_cast<signed char>(good_ios_base_std_QBE_NXZ(ecx7));
    ecx->f4 = al8;
    return ecx;
}

/*
 * ?uncaught_exception@std@@YA_NXZ
 * bool __cdecl std::uncaught_exception(void)
 */
int32_t uncaught_exception_std_YA_NXZ = 0x875a;

/*
 * ?_Osfx@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEXXZ
 * public: void __thiscall std::basic_ostream<char,struct std::char_traits<char> >::_Osfx(void)
 */
int32_t _Osfx_basic_ostream_DU_char_traits_D_std_std_QAEXXZ = 0x871c;

void fun_401023(int32_t* ecx) {
    unsigned char al2;
    int32_t ecx3;

    al2 = reinterpret_cast<unsigned char>(uncaught_exception_std_YA_NXZ());
    if (!al2) {
        ecx3 = *ecx;
        _Osfx_basic_ostream_DU_char_traits_D_std_std_QAEXXZ(ecx3);
    }
    fun_40102d(ecx);
    return;
}

/*
 * ?endl@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@1@AAV21@@Z
 * class std::basic_ostream<char,struct std::char_traits<char> > & __cdecl std::endl(class std::basic_ostream<char,struct std::char_traits<char> > &)
 */
int32_t endl_std_YAAAV_basic_ostream_DU_char_traits_D_std_1_AAV21_Z = 0x840c;

/* ?cout@std@@3V?$basic_ostream@DU?$char_traits@D@std@@@1@A */
struct s6** cout_std_3V_basic_ostream_DU_char_traits_D_std_1_A = reinterpret_cast<struct s6**>(0x83d0);

/*
 * ??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@H@Z
 * public: class std::basic_ostream<char,struct std::char_traits<char> > & __thiscall std::basic_ostream<char,struct std::char_traits<char> >::operator<<(int)
 */
int32_t _6_basic_ostream_DU_char_traits_D_std_std_QAEAAV01_H_Z = 0x8452;

/*
 * ??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@P6AAAV01@AAV01@@Z@Z
 * public: class std::basic_ostream<char,struct std::char_traits<char> > & __thiscall std::basic_ostream<char,struct std::char_traits<char> >::operator<<(class std::basic_ostream<char,struct std::char_traits<char> > & (__cdecl*)(class std::basic_ostream<char,struct std::char_traits<char> > &))
 */
int32_t _6_basic_ostream_DU_char_traits_D_std_std_QAEAAV01_P6AAAV01_AAV01_Z_Z = 0x8380;

void fun_401019(int32_t* ecx, int32_t a2, int32_t* a3) {
    int32_t eax4;
    int32_t v5;
    struct s6** ecx6;
    int32_t eax7;

    eax4 = endl_std_YAAAV_basic_ostream_DU_char_traits_D_std_1_AAV21_Z;
    v5 = *ecx + a2;
    ecx6 = cout_std_3V_basic_ostream_DU_char_traits_D_std_1_A;
    eax7 = reinterpret_cast<int32_t>(_6_basic_ostream_DU_char_traits_D_std_std_QAEAAV01_H_Z(ecx6, v5, eax4));
    _6_basic_ostream_DU_char_traits_D_std_std_QAEAAV01_P6AAAV01_AAV01_Z_Z(eax7, v5, eax4);
    return;
}

struct s6*** fun_401037(struct s6*** ecx, struct s6** a2, int32_t* a3);

void fun_401005(struct s6*** ecx, int32_t* a2);

int32_t fun_401032(int32_t* ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10) {
    void* ebp11;

    ebp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_401037(reinterpret_cast<int32_t>(ebp11) - 4, 10, ecx);
    fun_401019(reinterpret_cast<int32_t>(ebp11) - 4, 20, ecx);
    fun_401005(reinterpret_cast<int32_t>(ebp11) - 4, ecx);
    return 0;
}

uint32_t g407000 = 0xbb40e64e;

void fun_401ea0(int32_t a1, int32_t a2, int32_t a3) {
    void* esp4;
    void* ebp5;
    int32_t* esp6;
    int32_t ebx7;
    int32_t* esp8;
    int32_t esi9;
    int32_t* esp10;
    int32_t edi11;
    uint32_t eax12;
    uint32_t* esp13;
    int32_t* esp14;

    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4);
    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) + 16);
    esp6 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp4) - a2 - 4);
    *esp6 = ebx7;
    esp8 = esp6 - 1;
    *esp8 = esi9;
    esp10 = esp8 - 1;
    *esp10 = edi11;
    eax12 = g407000;
    esp13 = reinterpret_cast<uint32_t*>(esp10 - 1);
    *esp13 = eax12 ^ reinterpret_cast<uint32_t>(ebp5);
    esp14 = reinterpret_cast<int32_t*>(esp13 - 1);
    *esp14 = reinterpret_cast<int32_t>(__return_address());
    g0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp5) - 16);
    goto *esp14;
}

void fun_401ee5(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t ebp6;
    int32_t* esp7;
    void* ebp8;

    g0 = *reinterpret_cast<void**>(ebp6 - 16);
    esp7 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp8) + 4 - 4);
    *esp7 = reinterpret_cast<int32_t>(__return_address());
    goto *esp7;
}

struct s8 {
    int32_t f0;
    signed char[20] pad24;
    int16_t f18;
};

int32_t fun_401d40(struct s2* a1) {
    struct s8* eax2;
    int32_t edx3;

    if (a1->f0 != 0x5a4d || (eax2 = reinterpret_cast<struct s8*>(a1->f3c + reinterpret_cast<int32_t>(a1)), eax2->f0 != 0x4550)) {
        return 0;
    } else {
        edx3 = 0;
        *reinterpret_cast<unsigned char*>(&edx3) = reinterpret_cast<uint1_t>(eax2->f18 == 0x10b);
        return edx3;
    }
}

void fun_401cda() {
    int32_t* edi1;
    int32_t eax2;

    edi1 = reinterpret_cast<int32_t*>(0x405c60);
    if (!0) {
        do {
            eax2 = *edi1;
            if (eax2) {
                eax2();
            }
            ++edi1;
        } while (reinterpret_cast<uint32_t>(edi1) < 0x405d60);
    }
    return;
}

int32_t fun_401f77() {
    return 0;
}

int32_t _controlfp_s = 0x88f6;

int32_t fun_402046(int32_t a1, int32_t a2, int32_t a3) {
    goto _controlfp_s;
}

int32_t _unlock = 0x88a0;

void fun_402028() {
    goto _unlock;
}

void fun_401cba(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    fun_402028();
    return;
}

int32_t _lock = 0x88b8;

void fun_402034() {
    goto _lock;
}

int32_t __dllonexit = 0x88aa;

int32_t fun_40202e(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    goto __dllonexit;
}

struct s9 {
    signed char[4] pad4;
    int32_t f4;
};

struct s7* fun_401041(struct s7* ecx, struct s6** a2) {
    uint32_t ecx3;
    int32_t eax4;
    struct s9** eax5;
    int32_t edx6;

    ecx->f0 = a2;
    ecx3 = reinterpret_cast<uint32_t>(ecx->f0) + (*ecx->f0)->f4;
    eax4 = reinterpret_cast<int32_t>(rdbuf_basic_ios_DU_char_traits_D_std_std_QBEPAV_basic_streambuf_DU_char_traits_D_std_2_XZ(ecx3));
    if (eax4) {
        eax5 = reinterpret_cast<struct s9**>(rdbuf_basic_ios_DU_char_traits_D_std_std_QBEPAV_basic_streambuf_DU_char_traits_D_std_2_XZ());
        edx6 = (*eax5)->f4;
        edx6(eax5);
    }
    return ecx;
}

struct s6*** fun_401037(struct s6*** ecx, struct s6** a2, int32_t* a3) {
    int32_t edx4;
    struct s6** eax5;
    struct s6** eax6;

    *ecx = a2;
    edx4 = endl_std_YAAAV_basic_ostream_DU_char_traits_D_std_1_AAV21_Z;
    eax5 = cout_std_3V_basic_ostream_DU_char_traits_D_std_1_A;
    eax6 = fun_401028(a2, eax5, "MyClass::MyClass()", edx4, ecx);
    _6_basic_ostream_DU_char_traits_D_std_std_QAEAAV01_P6AAAV01_AAV01_Z_Z(eax6, edx4);
    return ecx;
}

int32_t g407498;

int32_t DecodePointer = 0x89de;

int32_t g407488;

struct s10 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t EncodePointer = 0x8958;

struct s11 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t _onexit = 0x88c0;

int32_t fun_401c22() {
    int32_t v1;
    int32_t esi2;
    int32_t eax3;
    int32_t ebp4;
    int32_t ecx5;
    int32_t ebp6;
    int32_t v7;
    int32_t eax8;
    int32_t ebp9;
    int32_t v10;
    int32_t eax11;
    int32_t ebp12;
    int32_t v13;
    int32_t ebp14;
    int32_t v15;
    int32_t ebp16;
    int32_t v17;
    struct s10* ebp18;
    int32_t esi19;
    int32_t eax20;
    int32_t eax21;
    int32_t ebp22;
    int32_t v23;
    int32_t ebp24;
    int32_t eax25;
    int32_t v26;
    int32_t ebp27;
    int32_t eax28;
    int32_t ebp29;
    int32_t v30;
    struct s11* ebp31;

    fun_401ea0(0x4060f0, 20, __return_address());
    v1 = g407498;
    esi2 = DecodePointer;
    eax3 = reinterpret_cast<int32_t>(esi2());
    *reinterpret_cast<int32_t*>(ebp4 - 28) = eax3;
    if (eax3 != -1) {
        fun_402034();
        ecx5 = 8;
        *reinterpret_cast<uint32_t*>(ebp6 - 4) = 0;
        v7 = g407498;
        eax8 = reinterpret_cast<int32_t>(esi2(8, v7));
        *reinterpret_cast<int32_t*>(ebp9 - 28) = eax8;
        v10 = g407488;
        eax11 = reinterpret_cast<int32_t>(esi2(8, v10, v7));
        *reinterpret_cast<int32_t*>(ebp12 - 32) = eax11;
        v13 = ebp14 - 32;
        v15 = ebp16 - 28;
        v17 = ebp18->f8;
        esi19 = EncodePointer;
        eax20 = reinterpret_cast<int32_t>(esi19(8, v17, v15, v13, v10, v7));
        eax21 = fun_40202e(8, eax20, v17, v15, v13, v10, v7);
        *reinterpret_cast<int32_t*>(ebp22 - 36) = eax21;
        v23 = *reinterpret_cast<int32_t*>(ebp24 - 28);
        eax25 = reinterpret_cast<int32_t>(esi19(8, v23, v13, v10, v7));
        g407498 = eax25;
        v26 = *reinterpret_cast<int32_t*>(ebp27 - 32);
        eax28 = reinterpret_cast<int32_t>(esi19(8, v26, v23, v13, v10, v7));
        g407488 = eax28;
        *reinterpret_cast<int32_t*>(ebp29 - 4) = -2;
        fun_401cba(8, v26, v23, v13, v10, v7);
    } else {
        v30 = ebp31->f8;
        _onexit();
        ecx5 = v30;
    }
    fun_401ee5(ecx5, v1, 0x4060f0, 20, __return_address());
    goto v1;
}

int32_t GetSystemTimeAsFileTime = 0x8a44;

int32_t GetCurrentProcessId = 0x8a2e;

int32_t GetCurrentThreadId = 0x8a18;

int32_t GetTickCount = 0x8a08;

int32_t QueryPerformanceCounter = 0x89ee;

int32_t g407004 = 0x44bf19b1;

void fun_401f80(int32_t a1) {
    uint32_t eax2;
    void* v3;
    int32_t esi4;
    uint32_t eax5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t esi8;
    uint32_t v9;
    uint32_t v10;

    eax2 = g407000;
    if (eax2 == 0xbb40e64e || !(0xffff0000 & eax2)) {
        v3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8);
        GetSystemTimeAsFileTime(v3, esi4);
        eax5 = reinterpret_cast<uint32_t>(GetCurrentProcessId(v3, esi4));
        eax6 = reinterpret_cast<uint32_t>(GetCurrentThreadId(v3, esi4));
        eax7 = reinterpret_cast<uint32_t>(GetTickCount(v3, esi4));
        QueryPerformanceCounter();
        esi8 = eax5 ^ eax6 ^ eax7 ^ (v9 ^ v10);
        if (esi8 != 0xbb40e64e) {
            if (!(0xffff0000 & esi8)) {
                esi8 = esi8 | (esi8 | 0x4711) << 16;
            }
        } else {
            esi8 = 0xbb40e64f;
        }
        g407000 = esi8;
        g407004 = reinterpret_cast<int32_t>(~esi8);
    } else {
        g407004 = reinterpret_cast<int32_t>(~eax2);
    }
    return;
}

int32_t fun_401cc3(int32_t a1) {
    int32_t eax2;
    uint32_t eax3;

    eax2 = fun_401c22();
    eax3 = reinterpret_cast<uint32_t>(-eax2);
    return reinterpret_cast<int32_t>(-(eax3 - (eax3 + reinterpret_cast<uint1_t>(eax3 < eax3 + reinterpret_cast<uint1_t>(!!eax2))))) - 1;
}

int32_t _except_handler4_common = 0x88ca;

void fun_40203a(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    goto _except_handler4_common;
}

int32_t strlen = 0x87a0;

uint32_t fun_4017d4(int32_t a1) {
    goto strlen;
}

void fun_401005(struct s6*** ecx, int32_t* a2) {
    int32_t eax3;
    struct s6** ecx4;
    struct s6** eax5;

    eax3 = endl_std_YAAAV_basic_ostream_DU_char_traits_D_std_1_AAV21_Z;
    ecx4 = cout_std_3V_basic_ostream_DU_char_traits_D_std_1_A;
    eax5 = fun_401028(ecx4, ecx4, "MyClass::~MyClass()", eax3, ecx);
    _6_basic_ostream_DU_char_traits_D_std_std_QAEAAV01_P6AAAV01_AAV01_Z_Z(eax5, eax3, ecx);
    return;
}

int32_t g407248;

uint32_t g407244;

int32_t g407240;

int32_t g40723c;

int32_t g407238;

int32_t g407234;

int16_t g407260;

int16_t g407254;

int16_t g407230;

int16_t g40722c;

int16_t g407228;

int16_t g407224;

uint32_t g407258;

int32_t g40724c;

int32_t g407250;

void* g40725c;

int32_t g407198 = 0;

int32_t g40714c = 0;

int32_t g407140 = 0;

int32_t g407144 = 0;

int32_t IsDebuggerPresent = 0x89ca;

int32_t g407190 = 0;

int32_t SetUnhandledExceptionFilter = 0x89ac;

int32_t UnhandledExceptionFilter = 0x8990;

int32_t GetCurrentProcess = 0x897c;

int32_t TerminateProcess = 0x8968;

void fun_4017c4(uint32_t ecx, int32_t a2) {
    uint32_t eflags3;
    int1_t zf4;
    int32_t* esp5;
    void* esp6;
    int32_t eax7;
    int32_t edx8;
    int32_t ebx9;
    int32_t esi10;
    int32_t edi11;
    int16_t ss12;
    int16_t cs13;
    int16_t ds14;
    int16_t es15;
    int16_t fs16;
    int16_t gs17;
    int32_t ebp18;
    int32_t eax19;
    uint32_t eax20;
    int32_t eax21;
    int32_t eax22;
    int1_t zf23;
    int32_t eax24;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags3) + 1) = 0;
    zf4 = ecx == g407000;
    if (zf4) {
        return;
    }
    esp5 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    *reinterpret_cast<int1_t*>(&eflags3) = reinterpret_cast<uint32_t>(esp5) < 0x328;
    esp6 = reinterpret_cast<void*>(esp5 - 0xca);
    *reinterpret_cast<int1_t*>(&eflags3) = __intrinsic();
    *reinterpret_cast<int1_t*>(&eflags3) = esp6 == 0;
    *reinterpret_cast<int1_t*>(&eflags3) = reinterpret_cast<int32_t>(esp6) < reinterpret_cast<int32_t>(0);
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags3) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&eflags3) = __intrinsic();
    g407248 = eax7;
    g407244 = ecx;
    g407240 = edx8;
    g40723c = ebx9;
    g407238 = esi10;
    g407234 = edi11;
    g407260 = ss12;
    g407254 = cs13;
    g407230 = ds14;
    g40722c = es15;
    g407228 = fs16;
    g407224 = gs17;
    g407258 = eflags3 & 0xfcffff;
    g40724c = ebp18;
    g407250 = reinterpret_cast<int32_t>(__return_address());
    g40725c = reinterpret_cast<void*>(esp5 + 2);
    g407198 = 0x10001;
    eax19 = g407250;
    g40714c = eax19;
    g407140 = 0xc0000409;
    g407144 = 1;
    eax20 = g407000;
    eax21 = g407004;
    eax22 = reinterpret_cast<int32_t>(IsDebuggerPresent(eax20, eax21));
    g407190 = eax22;
    fun_40201c(ecx);
    SetUnhandledExceptionFilter(1, 0, eax20, eax21);
    UnhandledExceptionFilter(1, "@q@", 0, eax20, eax21);
    zf23 = g407190 == 0;
    if (zf23) 
        goto addr_401baa_5;
    addr_401bb2_6:
    eax24 = reinterpret_cast<int32_t>(GetCurrentProcess(1, 0xc0000409, "@q@", 0, eax20, eax21));
    TerminateProcess(1, eax24, 0xc0000409, "@q@", 0, eax20, eax21);
    return;
    addr_401baa_5:
    fun_40201c(1);
    goto addr_401bb2_6;
}

void fun_40175e() {
    goto _6_basic_ostream_DU_char_traits_D_std_std_QAEAAV01_P6AAAV01_AAV01_Z_Z;
}

int32_t g407138 = 0;

int32_t g40712c = 0;

struct s12 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
};

struct s13 {
    int32_t f0;
    int32_t f4;
};

int32_t _exit = 0x87e0;

int32_t g40713c = 0;

int32_t _cexit = 0x87d6;

void fun_401979(int32_t ecx) {
    int32_t* esp2;
    int32_t ebp3;
    int32_t eax4;
    int32_t ebp5;
    int1_t zf6;
    struct s12* esp7;
    struct s13* esp8;
    int1_t zf9;
    struct s12* esp10;
    int32_t ebp11;
    struct s12* esp12;

    esp2 = *reinterpret_cast<int32_t**>(ebp3 - 24);
    eax4 = *reinterpret_cast<int32_t*>(ebp5 - 32);
    g407138 = eax4;
    zf6 = g40712c == 0;
    if (zf6) {
        esp7 = reinterpret_cast<struct s12*>(esp2 - 1);
        esp7->f0 = eax4;
        esp8 = reinterpret_cast<struct s13*>(reinterpret_cast<int32_t>(esp7) - 4);
        esp8->f0 = 0x401995;
        _exit();
        esp2 = &esp8->f4;
    }
    zf9 = g40713c == 0;
    if (zf9) {
        esp10 = reinterpret_cast<struct s12*>(esp2 - 1);
        esp10->f0 = 0x4019a3;
        _cexit();
        esp2 = &esp10->f4;
    }
    *reinterpret_cast<int32_t*>(ebp11 - 4) = -2;
    esp12 = reinterpret_cast<struct s12*>(esp2 - 1);
    esp12->f0 = 0x4019b4;
    fun_401ee5(ecx, esp12->f4, esp12->f8, esp12->fc, esp12->f10);
    goto esp12->f4;
}

/* (image base) */
int16_t image_base_;

int32_t g40003c;

int32_t __set_app_type = 0x8864;

int32_t g407470;

int32_t* _fmode = reinterpret_cast<int32_t*>(0x885a);

int32_t* _commode = reinterpret_cast<int32_t*>(0x884e);

int32_t g40746c;

int32_t g407014 = 1;

int32_t __setusermatherr = 0x883a;

int32_t fun_401f74();

int32_t g407010 = -2;

int32_t _configthreadlocale = 0x8824;

void fun_4019fc() {
    int1_t zf1;
    int32_t eax2;
    int32_t eax3;
    int32_t ecx4;
    int32_t eax5;
    int32_t ecx6;
    int32_t* eax7;
    int32_t* eax8;
    int32_t ecx9;
    int1_t zf10;
    int1_t zf11;

    zf1 = image_base_ == 0x5a4d;
    if (!zf1 || ((eax2 = g40003c, *reinterpret_cast<int32_t*>(eax2 + 0x400000) != 0x4550) || (*reinterpret_cast<int16_t*>(eax2 + 0x400018) != 0x10b || *reinterpret_cast<uint32_t*>(eax2 + 0x400074) <= 14))) {
        eax3 = 0;
    } else {
        ecx4 = 0;
        *reinterpret_cast<unsigned char*>(&ecx4) = reinterpret_cast<uint1_t>(!!*reinterpret_cast<int32_t*>(eax2 + 0x4000e8));
        eax3 = ecx4;
    }
    g40712c = eax3;
    __set_app_type();
    eax5 = reinterpret_cast<int32_t>(EncodePointer(1));
    ecx6 = g407470;
    g407488 = eax5;
    g407498 = eax5;
    eax7 = _fmode;
    *eax7 = ecx6;
    eax8 = _commode;
    ecx9 = g40746c;
    *eax8 = ecx9;
    fun_401cda();
    fun_401f77();
    zf10 = g407014 == 0;
    if (zf10) {
        __setusermatherr();
        ecx9 = reinterpret_cast<int32_t>(fun_401f74);
    }
    fun_401f45(ecx9);
    zf11 = g407010 == -1;
    if (zf11) {
        _configthreadlocale(ecx9);
    }
    goto 0xff;
}

struct s14 {
    int32_t f0;
    signed char[12] pad16;
    int32_t f10;
    int32_t f14;
};

int32_t fun_401bc6(struct s14** a1) {
    if ((*a1)->f0 == 0xe06d7363 && ((*a1)->f10 == 3 && ((*a1)->f14 == 0x19930520 || ((*a1)->f14 == 0x19930521 || ((*a1)->f14 == 0x19930522 || (*a1)->f14 == 0x1994000))))) {
        fun_402022();
    }
    return 0;
}

void fun_401d00() {
    int32_t* edi1;
    int32_t eax2;

    edi1 = reinterpret_cast<int32_t*>(0x405e68);
    if (!0) {
        do {
            eax2 = *edi1;
            if (eax2) {
                eax2();
            }
            ++edi1;
        } while (reinterpret_cast<uint32_t>(edi1) < 0x405f68);
    }
    return;
}

void fun_401d26() {
    goto _cexit;
}

int32_t fun_401e5b() {
    int32_t edx1;
    int32_t ebp2;

    edx1 = 0;
    *reinterpret_cast<unsigned char*>(&edx1) = reinterpret_cast<uint1_t>(***reinterpret_cast<int32_t***>(ebp2 - 20) == 0xc0000005);
    return edx1;
}

void fun_401f6e() {
    goto __setusermatherr;
}

void fun_401412() {
    int32_t ebp1;

    setstate_basic_ios_DU_char_traits_D_std_std_QAEXH_N_Z();
    *reinterpret_cast<int32_t*>(ebp1 - 4) = -1;
    goto 4;
}

void fun_401764() {
    goto endl_std_YAAAV_basic_ostream_DU_char_traits_D_std_1_AAV21_Z;
}

int32_t __getmainargs = 0x87c6;

void fun_401c1c() {
    goto __getmainargs;
}

int32_t fun_4019b5() {
    int1_t zf1;
    int32_t eax2;
    int32_t ecx3;

    zf1 = image_base_ == 0x5a4d;
    if (!zf1 || ((eax2 = g40003c, *reinterpret_cast<int32_t*>(eax2 + 0x400000) != 0x4550) || (*reinterpret_cast<int16_t*>(eax2 + 0x400018) != 0x10b || *reinterpret_cast<uint32_t*>(eax2 + 0x400074) <= 14))) {
        return 0;
    } else {
        ecx3 = 0;
        *reinterpret_cast<unsigned char*>(&ecx3) = reinterpret_cast<uint1_t>(!!*reinterpret_cast<int32_t*>(eax2 + 0x4000e8));
        return ecx3;
    }
}

int32_t exit = 0x87f6;

void fun_401d38() {
    goto exit;
}

int32_t g40749c;

int32_t HeapSetInformation = 0x8942;

struct s15 {
    signed char[4] pad4;
    int32_t f4;
};

struct s15* g18;

int32_t InterlockedCompareExchange = 0x8924;

int32_t Sleep = 0x891c;

int32_t g407474;

int32_t InterlockedExchange = 0x8906;

int32_t g4074a0;

int32_t g407124 = 0;

int32_t* __initenv = reinterpret_cast<int32_t*>(0x87fe);

int32_t g407128 = 0;

int32_t g407120 = 0;

void fun_401ab6() {
    int32_t v1;
    int1_t zf2;
    int32_t ebp3;
    struct s15* eax4;
    int32_t esi5;
    int32_t ebp6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    int32_t eax10;
    int32_t ecx11;
    int32_t ebp12;
    int32_t eax13;
    int32_t ebp14;
    int1_t zf15;
    uint32_t eax16;
    int32_t eax17;
    int32_t* ecx18;
    int32_t v19;
    int32_t v20;
    int32_t v21;
    int32_t eax22;
    int1_t zf23;
    int32_t ebp24;
    int32_t ebp25;
    int32_t ebp26;

    v1 = reinterpret_cast<int32_t>(__return_address());
    fun_401f80(v1);
    fun_401ea0(0x4060d0, 16, v1);
    zf2 = g40749c == 0;
    if (zf2) {
        HeapSetInformation(0, 1, 0, 0, 0x4060d0, 16, v1);
    }
    *reinterpret_cast<int32_t*>(ebp3 - 4) = 0;
    eax4 = g18;
    esi5 = eax4->f4;
    *reinterpret_cast<int32_t*>(ebp6 - 28) = 0;
    while (eax7 = reinterpret_cast<int32_t>(InterlockedCompareExchange(0x407484, esi5, 0, 0x4060d0, 16, v1)), !!eax7) {
        if (eax7 == esi5) 
            goto addr_401872_7;
        Sleep(0x3e8, 0x407484, esi5, 0, 0x4060d0, 16, v1);
    }
    addr_40188a_10:
    eax8 = g407474;
    if (eax8 != 1) {
        eax9 = g407474;
        if (eax9) {
            g40713c = 1;
        } else {
            g407474 = 1;
            eax10 = fun_401e92();
            ecx11 = 0x405618;
            if (eax10) {
                *reinterpret_cast<int32_t*>(ebp12 - 4) = -2;
                goto 0x4019af;
            }
        }
    } else {
        fun_401c16();
        ecx11 = 31;
    }
    eax13 = g407474;
    if (eax13 == 1) {
        fun_401e8c(ecx11);
        ecx11 = 0x405208;
        g407474 = 2;
    }
    if (!*reinterpret_cast<int32_t*>(ebp14 - 28)) {
        InterlockedExchange(ecx11, 0x407484, 0, 0x407484, esi5, 0, 0x4060d0, 16, v1);
    }
    zf15 = g4074a0 == 0;
    if (!zf15 && (eax16 = fun_401dd0(ecx11, 0x4074a0, 0x407484, esi5, 0, 0x4060d0, 16, v1), !!eax16)) {
        g4074a0(0x4074a0, 0, 2, 0, 0x407484, esi5, 0, 0x4060d0, 16, v1);
    }
    eax17 = g407124;
    ecx18 = __initenv;
    *ecx18 = eax17;
    v19 = g407124;
    v20 = g407128;
    v21 = g407120;
    eax22 = fun_401032(ecx18, v21, v20, v19, 0x407484, esi5, 0, 0x4060d0, 16, v1);
    g407138 = eax22;
    zf23 = g40712c == 0;
    if (!zf23) 
        goto 0x401995;
    exit();
    *reinterpret_cast<int32_t*>(ebp24 - 32) = ***reinterpret_cast<int32_t***>(ebp25 - 20);
    fun_401d32();
    goto eax22;
    addr_401872_7:
    *reinterpret_cast<int32_t*>(ebp26 - 28) = 1;
    goto addr_40188a_10;
}

void fun_401c08() {
    SetUnhandledExceptionFilter();
    goto fun_401bc6;
}

void fun_401d2c() {
    goto _exit;
}

void fun_401e6e() {
}

int32_t fun_401f74() {
    return 0;
}

void fun_40176a() {
    goto _6_basic_ostream_DU_char_traits_D_std_std_QAEAAV01_H_Z;
}

struct s15* fun_4017da() {
    struct s15* eax1;

    eax1 = g18;
    return eax1;
}

void fun_401ef9(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    fun_40203a(0x407000, fun_4017c4, a1, a2, a3, a4);
    return;
}

void fun_401f7a() {
    goto __set_app_type;
}

void fun_40204c() {
    goto InterlockedExchange;
}

void fun_401770() {
    goto setstate_basic_ios_DU_char_traits_D_std_std_QAEXH_N_Z;
}

int32_t g407468;

int32_t g407464;

int32_t g407134 = 0;

int32_t g407130 = 0;

void fun_4017e1() {
    int32_t eax1;
    int32_t v2;
    int32_t eax3;

    fun_401cc3(fun_401d00);
    eax1 = g407468;
    v2 = g407464;
    g407134 = eax1;
    eax3 = reinterpret_cast<int32_t>(__getmainargs(0x407120, 0x407128, 0x407124, v2, 0x407134));
    g407130 = eax3;
    if (eax3 < 0) {
        fun_401c16();
    }
    return;
}

void fun_401f1e() {
    goto _configthreadlocale;
}

void fun_402052() {
    goto Sleep;
}

void fun_401776() {
    goto width_ios_base_std_QAE_J_J_Z;
}

void fun_401f24(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    if (a1) {
        fun_402040(a2, a3, a4, a5, a6);
    }
    return;
}

void fun_402058() {
    goto InterlockedCompareExchange;
}

void fun_40177c() {
    goto sputn_basic_streambuf_DU_char_traits_D_std_std_QAE_JPBD_J_Z;
}

void fun_40205e() {
    goto HeapSetInformation;
}

void fun_401782() {
    goto sputc_basic_streambuf_DU_char_traits_D_std_std_QAEHD_Z;
}

void fun_402064() {
    goto EncodePointer;
}

void fun_401788() {
    goto rdbuf_basic_ios_DU_char_traits_D_std_std_QBEPAV_basic_streambuf_DU_char_traits_D_std_2_XZ;
}

void fun_40206a() {
    goto TerminateProcess;
}

void fun_40178e() {
    goto fill_basic_ios_DU_char_traits_D_std_std_QBEDXZ;
}

void fun_402070() {
    goto GetCurrentProcess;
}

void fun_401794() {
    goto flags_ios_base_std_QBEHXZ;
}

void fun_402076() {
    goto UnhandledExceptionFilter;
}

void fun_40179a() {
    goto width_ios_base_std_QBE_JXZ;
}

void fun_40207c() {
    goto SetUnhandledExceptionFilter;
}

void fun_4017a0() {
    goto flush_basic_ostream_DU_char_traits_D_std_std_QAEAAV12_XZ;
}

void fun_402082() {
    goto IsDebuggerPresent;
}

void fun_4017a6() {
    goto tie_basic_ios_DU_char_traits_D_std_std_QBEPAV_basic_ostream_DU_char_traits_D_std_2_XZ;
}

void fun_402088() {
    goto DecodePointer;
}

void fun_4017ac() {
    goto good_ios_base_std_QBE_NXZ;
}

void fun_40208e() {
    goto QueryPerformanceCounter;
}

void fun_4017b2() {
    goto _Osfx_basic_ostream_DU_char_traits_D_std_std_QAEXXZ;
}

void fun_402094() {
    goto GetTickCount;
}

void fun_4017b8() {
    goto uncaught_exception_std_YA_NXZ;
}

void fun_40209a() {
    goto GetCurrentThreadId;
}

void fun_4020a0() {
    goto GetCurrentProcessId;
}

void fun_4020a6() {
    goto GetSystemTimeAsFileTime;
}

int32_t __CxxFrameHandler3 = 0x878a;

void fun_4032f0() {
    uint32_t ecx1;
    int32_t v2;

    ecx1 = *reinterpret_cast<uint32_t*>(v2 - 0x68) ^ reinterpret_cast<uint32_t>(v2 + 12);
    fun_4017c4(ecx1, __return_address());
    goto __CxxFrameHandler3;
}

void fun_404311() {
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
    signed char* eax214;
    signed char* eax215;
    signed char al216;
    signed char* eax217;
    signed char* eax218;
    signed char al219;
    signed char* eax220;
    signed char* eax221;
    signed char al222;
    signed char* eax223;
    signed char* eax224;
    signed char al225;
    signed char* eax226;
    signed char* eax227;
    signed char al228;
    signed char* eax229;
    signed char* eax230;
    signed char al231;
    signed char* eax232;
    signed char* eax233;
    signed char al234;
    signed char* eax235;
    signed char* eax236;
    signed char al237;
    signed char* eax238;
    signed char* eax239;
    signed char al240;
    signed char* eax241;
    signed char* eax242;
    signed char al243;
    signed char* eax244;
    signed char* eax245;
    signed char al246;
    signed char* eax247;
    signed char* eax248;
    signed char al249;
    signed char* eax250;
    signed char* eax251;
    signed char al252;
    signed char* eax253;
    signed char* eax254;
    signed char al255;
    signed char* eax256;
    signed char* eax257;
    signed char al258;
    signed char* eax259;
    signed char* eax260;
    signed char al261;
    signed char* eax262;
    signed char* eax263;
    signed char al264;
    signed char* eax265;
    signed char* eax266;
    signed char al267;
    signed char* eax268;
    signed char* eax269;
    signed char al270;
    signed char* eax271;
    signed char* eax272;
    signed char al273;
    signed char* eax274;
    signed char* eax275;
    signed char al276;
    signed char* eax277;
    signed char* eax278;
    signed char al279;
    signed char* eax280;
    signed char* eax281;
    signed char al282;
    signed char* eax283;
    signed char* eax284;
    signed char al285;
    signed char* eax286;
    signed char* eax287;
    signed char al288;
    signed char* eax289;
    signed char* eax290;
    signed char al291;
    signed char* eax292;
    signed char* eax293;
    signed char al294;
    signed char* eax295;
    signed char* eax296;
    signed char al297;
    signed char* eax298;
    signed char* eax299;
    signed char al300;
    signed char* eax301;
    signed char* eax302;
    signed char al303;
    signed char* eax304;
    signed char* eax305;
    signed char al306;
    signed char* eax307;
    signed char* eax308;
    signed char al309;
    signed char* eax310;
    signed char* eax311;
    signed char al312;
    signed char* eax313;
    signed char* eax314;
    signed char al315;
    signed char* eax316;
    signed char* eax317;
    signed char al318;
    signed char* eax319;
    signed char* eax320;
    signed char al321;
    signed char* eax322;
    signed char* eax323;
    signed char al324;
    signed char* eax325;
    signed char* eax326;
    signed char al327;
    signed char* eax328;
    signed char* eax329;
    signed char al330;
    signed char* eax331;
    signed char* eax332;
    signed char al333;
    signed char* eax334;
    signed char* eax335;
    signed char al336;
    signed char* eax337;
    signed char* eax338;
    signed char al339;
    signed char* eax340;
    signed char* eax341;
    signed char al342;
    signed char* eax343;
    signed char* eax344;
    signed char al345;
    signed char* eax346;
    signed char* eax347;
    signed char al348;
    signed char* eax349;
    signed char* eax350;
    signed char al351;
    signed char* eax352;
    signed char* eax353;
    signed char al354;
    signed char* eax355;
    signed char* eax356;
    signed char al357;

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
    *eax214 = reinterpret_cast<signed char>(*eax215 + al216);
    *eax217 = reinterpret_cast<signed char>(*eax218 + al219);
    *eax220 = reinterpret_cast<signed char>(*eax221 + al222);
    *eax223 = reinterpret_cast<signed char>(*eax224 + al225);
    *eax226 = reinterpret_cast<signed char>(*eax227 + al228);
    *eax229 = reinterpret_cast<signed char>(*eax230 + al231);
    *eax232 = reinterpret_cast<signed char>(*eax233 + al234);
    *eax235 = reinterpret_cast<signed char>(*eax236 + al237);
    *eax238 = reinterpret_cast<signed char>(*eax239 + al240);
    *eax241 = reinterpret_cast<signed char>(*eax242 + al243);
    *eax244 = reinterpret_cast<signed char>(*eax245 + al246);
    *eax247 = reinterpret_cast<signed char>(*eax248 + al249);
    *eax250 = reinterpret_cast<signed char>(*eax251 + al252);
    *eax253 = reinterpret_cast<signed char>(*eax254 + al255);
    *eax256 = reinterpret_cast<signed char>(*eax257 + al258);
    *eax259 = reinterpret_cast<signed char>(*eax260 + al261);
    *eax262 = reinterpret_cast<signed char>(*eax263 + al264);
    *eax265 = reinterpret_cast<signed char>(*eax266 + al267);
    *eax268 = reinterpret_cast<signed char>(*eax269 + al270);
    *eax271 = reinterpret_cast<signed char>(*eax272 + al273);
    *eax274 = reinterpret_cast<signed char>(*eax275 + al276);
    *eax277 = reinterpret_cast<signed char>(*eax278 + al279);
    *eax280 = reinterpret_cast<signed char>(*eax281 + al282);
    *eax283 = reinterpret_cast<signed char>(*eax284 + al285);
    *eax286 = reinterpret_cast<signed char>(*eax287 + al288);
    *eax289 = reinterpret_cast<signed char>(*eax290 + al291);
    *eax292 = reinterpret_cast<signed char>(*eax293 + al294);
    *eax295 = reinterpret_cast<signed char>(*eax296 + al297);
    *eax298 = reinterpret_cast<signed char>(*eax299 + al300);
    *eax301 = reinterpret_cast<signed char>(*eax302 + al303);
    *eax304 = reinterpret_cast<signed char>(*eax305 + al306);
    *eax307 = reinterpret_cast<signed char>(*eax308 + al309);
    *eax310 = reinterpret_cast<signed char>(*eax311 + al312);
    *eax313 = reinterpret_cast<signed char>(*eax314 + al315);
    *eax316 = reinterpret_cast<signed char>(*eax317 + al318);
    *eax319 = reinterpret_cast<signed char>(*eax320 + al321);
    *eax322 = reinterpret_cast<signed char>(*eax323 + al324);
    *eax325 = reinterpret_cast<signed char>(*eax326 + al327);
    *eax328 = reinterpret_cast<signed char>(*eax329 + al330);
    *eax331 = reinterpret_cast<signed char>(*eax332 + al333);
    *eax334 = reinterpret_cast<signed char>(*eax335 + al336);
    *eax337 = reinterpret_cast<signed char>(*eax338 + al339);
    *eax340 = reinterpret_cast<signed char>(*eax341 + al342);
    *eax343 = reinterpret_cast<signed char>(*eax344 + al345);
    *eax346 = reinterpret_cast<signed char>(*eax347 + al348);
    *eax349 = reinterpret_cast<signed char>(*eax350 + al351);
    *eax352 = reinterpret_cast<signed char>(*eax353 + al354);
    *eax355 = reinterpret_cast<signed char>(*eax356 + al357);
}
