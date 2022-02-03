
int32_t LoadStringA = 0x45de;

void fun_4010c0(int32_t a1);

int32_t fun_401150(int32_t a1, int32_t a2, int32_t a3);

int32_t LoadAcceleratorsA = 0x45ca;

int32_t GetMessageA = 0x45bc;

int32_t TranslateAcceleratorA = 0x45a4;

int32_t TranslateMessage = 0x4590;

int32_t DispatchMessageA = 0x457c;

int32_t fun_401000(void** ecx, int32_t a2, int32_t a3, int32_t a4, void** a5, uint32_t a6, void** a7, void** a8, void** a9, void** a10) {
    int32_t edi11;
    int32_t edi12;
    int32_t v13;
    int32_t eax14;
    int32_t eax15;
    int32_t edi16;
    int32_t esi17;
    int32_t eax18;
    int32_t v19;
    int32_t ebx20;
    int32_t ebx21;
    int32_t* esp22;
    int32_t v23;
    int32_t ebp24;
    int32_t ebp25;
    void* v26;
    int32_t eax27;
    void* esp28;
    void* v29;
    void* esp30;
    int32_t eax31;
    int32_t esi32;

    edi11 = LoadStringA;
    edi11(a2, 0x67, 0x4054f4, 100, edi12);
    edi11();
    fun_4010c0(a2);
    eax14 = fun_401150(a2, v13, a2);
    if (eax14) {
        eax15 = reinterpret_cast<int32_t>(LoadAcceleratorsA());
        edi16 = GetMessageA;
        esi17 = eax15;
        eax18 = reinterpret_cast<int32_t>(edi16());
        if (eax18) {
            v19 = ebx20;
            ebx21 = TranslateAcceleratorA;
            esp22 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 28 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4);
            v23 = ebp24;
            ebp25 = TranslateMessage;
            do {
                v26 = reinterpret_cast<void*>(esp22 + 4);
                eax27 = reinterpret_cast<int32_t>(ebx21(0, esi17, v26, v23, v19));
                esp28 = reinterpret_cast<void*>(esp22 - 1 - 1 - 1 - 1 + 1);
                if (!eax27) {
                    v29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp28) + 16);
                    ebp25(v29, 0, esi17, v26, v23, v19);
                    esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp28) - 4 - 4 + 4);
                    DispatchMessageA(reinterpret_cast<int32_t>(esp30) + 16, v29, 0, esi17, v26, v23, v19);
                    esp28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 + 4);
                }
                eax31 = reinterpret_cast<int32_t>(edi16());
                esp22 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp28) - 4 - 4 - 4 - 4 - 4 + 4);
            } while (eax31);
        }
        goto 100;
    } else {
        goto esi32;
    }
}

int32_t LoadIconA = 0x460e;

int32_t LoadCursorA = 0x4600;

int32_t RegisterClassExA = 0x45ec;

void fun_4010c0(int32_t a1) {
    int32_t esi2;
    int32_t esi3;
    int32_t eax4;

    esi2 = LoadIconA;
    esi2(a1, 0x6b, esi3, 48);
    LoadCursorA(0, 0x7f00, a1, 0x6b, esi3, 48);
    eax4 = reinterpret_cast<int32_t>(esi2(3, 0x6c, 0, 0x7f00, a1, 0x6b, esi3, 48));
    RegisterClassExA();
    goto eax4;
}

int32_t g405558 = 0;

int32_t CreateWindowExA = 0x4638;

int32_t ShowWindow = 0x462a;

int32_t UpdateWindow = 0x461a;

int32_t fun_401150(int32_t a1, int32_t a2, int32_t a3) {
    int32_t eax4;

    g405558 = a1;
    eax4 = reinterpret_cast<int32_t>(CreateWindowExA());
    if (eax4) {
        ShowWindow();
        UpdateWindow();
        goto eax4;
    } else {
        goto 0x405490;
    }
}

int32_t g405564 = 0;

void fun_401f5c(void** ecx);

void fun_401f95(void** ecx, int32_t a2);

int32_t ExitProcess = 0x4724;

void fun_40146b(void** ecx) {
    int1_t zf2;

    zf2 = g405564 == 1;
    if (zf2) {
        fun_401f5c(ecx);
    }
    fun_401f95(ecx, __return_address());
    ExitProcess(__return_address());
    goto 0xff;
}

void** fun_402630(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

void fun_401446(void** ecx);

void** g405960 = reinterpret_cast<void**>(0);

uint32_t g405a60 = 0;

int32_t GetStartupInfoA = 0x46f2;

struct s0 {
    uint32_t f0;
    unsigned char f4;
};

struct s1 {
    void** f0;
    signed char[3] pad4;
    unsigned char f4;
};

int32_t GetStdHandle = 0x481a;

int32_t GetFileType = 0x482a;

int32_t SetHandleCount = 0x4808;

struct s2 {
    void** f0;
    signed char[3] pad4;
    unsigned char f4;
};

void fun_401ba5(void** ecx, void** a2, void** a3, void** a4) {
    void** v5;
    void** ebx6;
    void** v7;
    void** ebp8;
    void** v9;
    void** esi10;
    void** v11;
    void** edi12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** eax20;
    void** esi21;
    void** ecx22;
    void* esp23;
    void** eax24;
    void** eax25;
    void** v26;
    int16_t v27;
    struct s0* v28;
    int32_t ebx29;
    uint32_t esi30;
    unsigned char* ebp31;
    void*** ebx32;
    int1_t less33;
    void** eax34;
    struct s1* esi35;
    int32_t eax36;
    uint32_t eax37;
    uint32_t eax38;
    void** eax39;
    uint32_t eax40;
    uint32_t eax41;
    int32_t v42;
    uint32_t edi43;
    void** v44;
    int32_t eax45;
    struct s2* eax46;
    void*** edi47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** eax54;
    uint32_t tmp32_55;
    int1_t less56;

    v5 = ebx6;
    v7 = ebp8;
    v9 = esi10;
    v11 = edi12;
    eax20 = fun_402630(ecx, 0x100, v11, v9, v7, v5, v13, v14, v15, v16, v17, v18, v19);
    esi21 = eax20;
    ecx22 = reinterpret_cast<void**>(0x100);
    esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 68 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 4);
    if (!esi21) {
        fun_401446(0x100);
        ecx22 = reinterpret_cast<void**>(27);
        esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 + 4 + 4);
    }
    g405960 = esi21;
    g405a60 = 32;
    eax24 = esi21 + 0x100;
    while (reinterpret_cast<unsigned char>(esi21) < reinterpret_cast<unsigned char>(eax24)) {
        *reinterpret_cast<void***>(esi21 + 4) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(esi21) = reinterpret_cast<void**>(0xffffffff);
        *reinterpret_cast<signed char*>(esi21 + 5) = 10;
        eax25 = g405960;
        esi21 = esi21 + 8;
        eax24 = eax25 + 0x100;
    }
    v26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp23) + 16);
    GetStartupInfoA(ecx22);
    if (!v27 || !v28) {
        addr_401cd5_7:
        ebx29 = 0;
    } else {
        esi30 = v28->f0;
        ebp31 = &v28->f4;
        ebx32 = reinterpret_cast<void***>(esi30 + reinterpret_cast<uint32_t>(ebp31));
        if (reinterpret_cast<int32_t>(esi30) >= reinterpret_cast<int32_t>(0x800)) {
            esi30 = 0x800;
        }
        less33 = reinterpret_cast<int32_t>(g405a60) < reinterpret_cast<int32_t>(esi30);
        if (!less33) 
            goto addr_401c89_11; else 
            goto addr_401c37_12;
    }
    do {
        eax34 = g405960;
        esi35 = reinterpret_cast<struct s1*>(eax34 + ebx29 * 8);
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax34 + ebx29 * 8) == 0xffffffff)) {
            esi35->f4 = reinterpret_cast<unsigned char>(esi35->f4 | 0x80);
        } else {
            esi35->f4 = 0x81;
            if (ebx29) {
                eax36 = ebx29 - 1;
                eax37 = reinterpret_cast<uint32_t>(-eax36);
                eax38 = eax37 - (eax37 + reinterpret_cast<uint1_t>(eax37 < eax37 + reinterpret_cast<uint1_t>(!!eax36))) - 11;
            } else {
                eax38 = 0xf6;
            }
            eax39 = reinterpret_cast<void**>(GetStdHandle(ecx22, eax38));
            if (eax39 == 0xffffffff || ((eax40 = reinterpret_cast<uint32_t>(GetFileType(ecx22, eax39, eax38)), eax40 == 0) || (eax41 = eax40 & 0xff, esi35->f0 = eax39, eax41 == 2))) {
                esi35->f4 = reinterpret_cast<unsigned char>(esi35->f4 | 64);
            } else {
                if (eax41 == 3) {
                    esi35->f4 = reinterpret_cast<unsigned char>(esi35->f4 | 8);
                }
            }
        }
        ++ebx29;
    } while (ebx29 < 3);
    SetHandleCount(ecx22);
    goto v42;
    addr_401c89_11:
    edi43 = 0;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi30) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi30 == 0))) {
        do {
            if (*ebx32 != 0xffffffff && ((*reinterpret_cast<unsigned char*>(&ecx22) = *ebp31, !!(*reinterpret_cast<unsigned char*>(&ecx22) & 1)) && (*reinterpret_cast<unsigned char*>(&ecx22) & 8 || (v44 = *ebx32, eax45 = reinterpret_cast<int32_t>(GetFileType(v44)), !!eax45)))) {
                eax46 = reinterpret_cast<struct s2*>(*reinterpret_cast<void****>((reinterpret_cast<int32_t>(edi43) >> 5) * 4 + 0x405960) + (edi43 & 31) * 8);
                ecx22 = *ebx32;
                eax46->f0 = ecx22;
                *reinterpret_cast<unsigned char*>(&ecx22) = *ebp31;
                eax46->f4 = *reinterpret_cast<unsigned char*>(&ecx22);
            }
            ++edi43;
            ++ebp31;
            ebx32 = ebx32 + 4;
        } while (reinterpret_cast<int32_t>(edi43) < reinterpret_cast<int32_t>(esi30));
        goto addr_401cd5_7;
    }
    addr_401c37_12:
    edi47 = reinterpret_cast<void***>(0x405964);
    do {
        eax54 = fun_402630(ecx22, 0x100, v26, v11, v9, v7, v5, v48, v49, v50, v51, v52, v53);
        ecx22 = reinterpret_cast<void**>(0x100);
        if (!eax54) 
            break;
        tmp32_55 = g405a60 + 32;
        g405a60 = tmp32_55;
        *edi47 = eax54;
        ecx22 = eax54 + 0x100;
        while (reinterpret_cast<unsigned char>(eax54) < reinterpret_cast<unsigned char>(ecx22)) {
            *reinterpret_cast<void***>(eax54 + 4) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(eax54) = reinterpret_cast<void**>(0xffffffff);
            *reinterpret_cast<signed char*>(eax54 + 5) = 10;
            eax54 = eax54 + 8;
            ecx22 = *edi47 + 0x100;
        }
        edi47 = edi47 + 4;
        less56 = reinterpret_cast<int32_t>(g405a60) < reinterpret_cast<int32_t>(esi30);
    } while (less56);
    goto addr_401c81_32;
    esi30 = g405a60;
    goto addr_401c89_11;
    addr_401c81_32:
    goto addr_401c89_11;
}

void** g4056bc = reinterpret_cast<void**>(0);

int32_t GetEnvironmentStringsW = 0x47ee;

int32_t GetEnvironmentStrings = 0x47d6;

void** fun_402730(void** ecx, void** a2, void** a3, void** a4);

int32_t FreeEnvironmentStringsA = 0x478c;

int32_t WideCharToMultiByte = 0x47c0;

void fun_40250a(void** ecx, void** a2, void** a3, void** a4, void** a5);

int32_t FreeEnvironmentStringsW = 0x47a6;

void** fun_401a73(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** eax9;
    void** v10;
    void** ebx11;
    void** v12;
    void** ebp13;
    int32_t ebp14;
    void** v15;
    void** esi16;
    void** v17;
    void** edi18;
    void** ebx19;
    void** esi20;
    void** edi21;
    void** eax22;
    void** eax23;
    void** eax24;
    void** eax25;
    void** eax26;
    void** ebp27;
    void** eax28;
    void** esi29;
    void** eax30;
    void** eax31;
    int32_t edi32;
    void** v33;
    void** v34;
    void** eax35;
    void** eax36;
    void** v37;
    int32_t eax38;

    v6 = reinterpret_cast<void**>(__return_address());
    v7 = ecx;
    v8 = ecx;
    eax9 = g4056bc;
    v10 = ebx11;
    v12 = ebp13;
    ebp14 = GetEnvironmentStringsW;
    v15 = esi16;
    v17 = edi18;
    ebx19 = reinterpret_cast<void**>(0);
    esi20 = reinterpret_cast<void**>(0);
    edi21 = reinterpret_cast<void**>(0);
    if (eax9) {
        if (!reinterpret_cast<int1_t>(eax9 == 1)) {
            if (!reinterpret_cast<int1_t>(eax9 == 2)) 
                goto addr_401b9c_4;
        } else {
            addr_401aca_5:
            if (esi20) 
                goto addr_401ada_6;
            eax22 = reinterpret_cast<void**>(ebp14());
            esi20 = eax22;
            if (!esi20) 
                goto addr_401b9c_4; else 
                goto addr_401ada_6;
        }
    } else {
        eax23 = reinterpret_cast<void**>(ebp14());
        esi20 = eax23;
        if (!esi20) {
            eax24 = reinterpret_cast<void**>(GetEnvironmentStrings());
            edi21 = eax24;
            if (!edi21) 
                goto addr_401b9c_4;
            g4056bc = reinterpret_cast<void**>(2);
        } else {
            g4056bc = reinterpret_cast<void**>(1);
            goto addr_401aca_5;
        }
    }
    if (edi21 || (eax25 = reinterpret_cast<void**>(GetEnvironmentStrings()), edi21 = eax25, !!edi21)) {
        eax26 = edi21;
        if (*reinterpret_cast<void***>(edi21)) {
            addr_401b66_14:
            ++eax26;
            if (*reinterpret_cast<void***>(eax26)) 
                goto addr_401b66_14;
            ++eax26;
            if (*reinterpret_cast<void***>(eax26)) 
                goto addr_401b66_14;
        }
        ebp27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax26) - reinterpret_cast<unsigned char>(edi21) + 1);
        eax28 = fun_402630(ecx, ebp27, v17, v15, v12, v10, v8, v7, v6, a2, a3, a4, a5);
        esi29 = eax28;
        if (esi29) {
            fun_402730(ebp27, esi29, edi21, ebp27);
        } else {
            esi29 = reinterpret_cast<void**>(0);
        }
        FreeEnvironmentStringsA(ebp27, edi21);
        eax30 = esi29;
    } else {
        addr_401b9c_4:
        eax30 = reinterpret_cast<void**>(0);
    }
    addr_401b9e_20:
    return eax30;
    addr_401ada_6:
    eax31 = esi20;
    if (*reinterpret_cast<void***>(esi20)) {
        addr_401ae1_21:
        eax31 = eax31 + 1 + 1;
        if (*reinterpret_cast<void***>(eax31)) 
            goto addr_401ae1_21;
        eax31 = eax31 + 1 + 1;
        if (*reinterpret_cast<void***>(eax31)) 
            goto addr_401ae1_21;
    }
    edi32 = WideCharToMultiByte;
    v33 = reinterpret_cast<void**>(0);
    v34 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax31) - reinterpret_cast<unsigned char>(esi20)) >> 1) + 1);
    eax35 = reinterpret_cast<void**>(edi32(0, 0, esi20, v34, 0, 0, 0, 0));
    if (eax35 && (eax36 = fun_402630(ecx, eax35, 0, 0, esi20, v34, 0, 0, 0, 0, v17, v15, v12), ecx = eax35, v33 = eax36, !!eax36)) {
        v37 = eax36;
        eax38 = reinterpret_cast<int32_t>(edi32(ecx, 0, 0, esi20));
        if (!eax38) {
            fun_40250a(ecx, v33, 0, 0, esi20);
            ecx = v33;
            v37 = reinterpret_cast<void**>(0);
        }
        ebx19 = v37;
    }
    FreeEnvironmentStringsW(ecx, esi20, 0, 0, esi20, v34, v33, 0, 0, 0);
    eax30 = ebx19;
    goto addr_401b9e_20;
}

void** g405a68 = reinterpret_cast<void**>(0);

uint32_t fun_4024ee(void** a1, void** a2, void** a3);

int32_t GetModuleFileNameA = 0x4776;

void** g405a78 = reinterpret_cast<void**>(0);

void** g4055a0 = reinterpret_cast<void**>(0);

void fun_4018bf(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6);

void** g405588 = reinterpret_cast<void**>(0);

void** g405584 = reinterpret_cast<void**>(0);

void fun_401826(void** ecx, void** a2, void** a3, void** a4) {
    void* ebp5;
    int1_t zf6;
    void** edi7;
    void** esi8;
    void** ebx9;
    void** eax10;
    void** edi11;
    void** v12;
    void** v13;
    void** ecx14;
    void** eax15;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    zf6 = g405a68 == 0;
    if (zf6) {
        fun_4024ee(edi7, esi8, ebx9);
    }
    GetModuleFileNameA();
    eax10 = g405a78;
    g4055a0 = reinterpret_cast<void**>(0x4055b8);
    edi11 = reinterpret_cast<void**>(0x4055b8);
    if (*reinterpret_cast<void***>(eax10)) {
        edi11 = eax10;
    }
    v12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffffff8);
    v13 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffffffc);
    fun_4018bf(ecx, edi11, 0, 0, v13, v12);
    ecx14 = ecx;
    eax15 = fun_402630(ecx14, ecx + reinterpret_cast<unsigned char>(ecx14) * 4, edi11, 0, 0, v13, v12, 0, 0x4055b8, 0x104, edi7, esi8, ebx9);
    if (!eax15) {
        fun_401446(ecx14);
        ecx14 = reinterpret_cast<void**>(8);
    }
    fun_4018bf(ecx14, edi11, eax15, eax15 + reinterpret_cast<unsigned char>(ecx) * 4, reinterpret_cast<int32_t>(ebp5) + 0xfffffffc, reinterpret_cast<int32_t>(ebp5) + 0xfffffff8);
    g405588 = eax15;
    g405584 = ecx - 1;
    return;
}

void** g40555c = reinterpret_cast<void**>(0);

struct s3 {
    signed char[1] pad1;
    void** f1;
};

struct s3* fun_4026b0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6);

void** g405590 = reinterpret_cast<void**>(0);

void** fun_402540(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

int32_t g405a64 = 0;

void fun_40176d(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** v10;
    void** ebx11;
    int1_t zf12;
    void** v13;
    void** esi14;
    void** v15;
    void** edi16;
    void** esi17;
    int32_t edi18;
    struct s3* eax19;
    void** v20;
    void** eax21;
    void** esi22;
    void** ecx23;
    void** edi24;
    void** v25;
    void** ebp26;
    struct s3* eax27;
    void** ebp28;
    void** eax29;
    void** ecx30;
    void** v31;
    void** v32;

    v9 = reinterpret_cast<void**>(__return_address());
    v10 = ebx11;
    zf12 = g405a68 == 0;
    v13 = esi14;
    v15 = edi16;
    if (zf12) {
        fun_4024ee(v15, v13, v10);
    }
    esi17 = g40555c;
    edi18 = 0;
    while (*reinterpret_cast<void***>(esi17)) {
        if (*reinterpret_cast<void***>(esi17) != 61) {
            ++edi18;
        }
        eax19 = fun_4026b0(ecx, esi17, v15, v13, v10, v9);
        ecx = esi17;
        esi17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi17) + reinterpret_cast<uint32_t>(eax19) + 1);
    }
    v20 = reinterpret_cast<void**>(edi18 * 4 + 4);
    eax21 = fun_402630(ecx, v20, v15, v13, v10, v9, a2, a3, a4, a5, a6, a7, a8);
    esi22 = eax21;
    ecx23 = v20;
    g405590 = esi22;
    if (!esi22) {
        fun_401446(ecx23);
        ecx23 = reinterpret_cast<void**>(9);
    }
    edi24 = g40555c;
    if (*reinterpret_cast<void***>(edi24)) {
        v25 = ebp26;
        do {
            eax27 = fun_4026b0(ecx23, edi24, v25, v15, v13, v10);
            ecx23 = edi24;
            ebp28 = reinterpret_cast<void**>(&eax27->f1);
            if (*reinterpret_cast<void***>(edi24) != 61) {
                eax29 = fun_402630(ecx23, ebp28, v25, v15, v13, v10, v9, a2, a3, a4, a5, a6, a7);
                ecx30 = ebp28;
                *reinterpret_cast<void***>(esi22) = eax29;
                if (!eax29) {
                    fun_401446(ecx30);
                    ecx30 = reinterpret_cast<void**>(9);
                }
                v31 = *reinterpret_cast<void***>(esi22);
                fun_402540(ecx30, v31, edi24, v25, v15, v13, v10);
                esi22 = esi22 + 4;
                ecx23 = edi24;
            }
            edi24 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi24) + reinterpret_cast<unsigned char>(ebp28));
        } while (*reinterpret_cast<void***>(edi24));
    }
    v32 = g40555c;
    fun_40250a(ecx23, v32, v15, v13, v10);
    g40555c = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(esi22) = reinterpret_cast<void**>(0);
    g405a64 = 1;
    return;
}

int32_t g405a74 = 0;

void fun_401577(void** ecx, void** a2, void** a3, void** a4, void** a5);

void fun_40148f(void** ecx, void** a2, void** a3, void** a4) {
    int32_t eax5;

    eax5 = g405a74;
    if (eax5) {
        eax5();
    }
    fun_401577(ecx, 0x405008, 0x405010, __return_address(), a2);
    fun_401577(ecx, 0x405000, 0x405004, 0x405008, 0x405010);
    return;
}

uint32_t fun_4020e8(void** ecx);

void** fun_401715(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    int1_t zf6;
    void** esi7;
    void** v8;
    uint32_t eax9;

    zf6 = g405a68 == 0;
    if (zf6) {
        fun_4024ee(__return_address(), a2, a3);
    }
    esi7 = g405a78;
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi7) == 34)) {
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi7)) > 32) {
            do {
                ++esi7;
            } while (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi7)) > 32);
        }
    } else {
        while ((++esi7, *reinterpret_cast<void***>(esi7 + 1) != 34) && *reinterpret_cast<void***>(esi7 + 1)) {
            v8 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi7 + 1))));
            eax9 = fun_4020e8(ecx);
            ecx = v8;
            if (!eax9) 
                continue;
            ++esi7;
        }
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi7) == 34)) 
            goto addr_401752_10;
    }
    while (*reinterpret_cast<void***>(esi7) && reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi7)) <= 32) {
        addr_401752_10:
        ++esi7;
    }
    return esi7;
}

int32_t g405034 = 2;

int32_t g4056c0 = 0;

void fun_401f5c(void** ecx) {
    int32_t eax2;
    int1_t zf3;
    int32_t eax4;

    eax2 = g405564;
    if (eax2 == 1 || !eax2 && (zf3 = g405034 == 1, zf3)) {
        fun_401f95(ecx, 0xfc);
        eax4 = g4056c0;
        if (eax4) {
            eax4(0xfc);
        }
        fun_401f95(0xfc, 0xff);
    }
    return;
}

int32_t WriteFile = 0x487a;

void** fun_403340(void** ecx, void** a2, void*** a3, uint32_t a4, void** a5);

void** fun_402550(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

void fun_4032ae(void** ecx, void* a2, int32_t a3, int32_t a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12);

void fun_401f95(void** ecx, int32_t a2) {
    void* ebp3;
    int32_t edx4;
    void** ecx5;
    int32_t* eax6;
    uint32_t esi7;
    int32_t eax8;
    int1_t zf9;
    void*** esi10;
    void** v11;
    void** v12;
    void** esi13;
    void** v14;
    struct s3* eax15;
    void** v16;
    int32_t eax17;
    void** v18;
    int32_t eax19;
    void** v20;
    void** edi21;
    void** edi22;
    struct s3* eax23;
    void** v24;
    struct s3* eax25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    edx4 = a2;
    ecx5 = reinterpret_cast<void**>(0);
    eax6 = reinterpret_cast<int32_t*>(0x4050e0);
    do {
        if (edx4 == *eax6) 
            break;
        eax6 = eax6 + 2;
        ++ecx5;
    } while (reinterpret_cast<int32_t>(eax6) < 0x405170);
    esi7 = reinterpret_cast<unsigned char>(ecx5) << 3;
    if (edx4 == *reinterpret_cast<int32_t*>(esi7 + 0x4050e0)) {
        eax8 = g405564;
        if (eax8 == 1 || !eax8 && (zf9 = g405034 == 1, zf9)) {
            esi10 = reinterpret_cast<void***>(esi7 + reinterpret_cast<uint32_t>("`C@"));
            v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 8);
            v12 = *esi10;
            eax15 = fun_4026b0(ecx5, v12, v11, 0, esi13, v14);
            v16 = *esi10;
            eax17 = reinterpret_cast<int32_t>(GetStdHandle(v12, 0xf4, v16, eax15, v11, 0));
            WriteFile(v12, eax17, 0xf4, v16, eax15, v11, 0);
        } else {
            if (edx4 != 0xfc) {
                v18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffe5c);
                eax19 = reinterpret_cast<int32_t>(GetModuleFileNameA(0, v18, 0x104));
                if (!eax19) {
                    fun_402540(ecx5, reinterpret_cast<int32_t>(ebp3) + 0xfffffe5c, "<program name unknown>", 0, v18, 0x104, esi13);
                    ecx5 = reinterpret_cast<void**>("<program name unknown>");
                }
                v20 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffe5c);
                edi21 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffe5c);
                eax23 = fun_4026b0(ecx5, v20, edi22, 0, v18, 0x104);
                if (reinterpret_cast<unsigned char>(&eax23->f1) > reinterpret_cast<unsigned char>(60)) {
                    v24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffe5c);
                    eax25 = fun_4026b0(v20, v24, edi22, 0, v18, 0x104);
                    edi21 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax25) + (reinterpret_cast<int32_t>(ebp3) - 0x1a4 - 59));
                    fun_403340(v20, edi21, "...", 3, v24);
                }
                v26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffff60);
                fun_402540(v20, v26, "Runtime Error!\n\nProgram: ", edi22, 0, v18, 0x104);
                v27 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffff60);
                fun_402550(v20, v27, edi21, v26, "Runtime Error!\n\nProgram: ", edi22, 0, v18, 0x104, esi13, v28, v29, v30);
                v31 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffff60);
                fun_402550(v20, v31, "\n\n", v27, edi21, v26, "Runtime Error!\n\nProgram: ", edi22, 0, v18, 0x104, esi13, v32);
                v33 = *reinterpret_cast<void***>(esi7 + reinterpret_cast<uint32_t>("`C@"));
                v34 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffff60);
                fun_402550(v20, v34, v33, v31, "\n\n", v27, edi21, v26, "Runtime Error!\n\nProgram: ", edi22, 0, v18, 0x104);
                fun_4032ae(v20, reinterpret_cast<int32_t>(ebp3) - 0xa0, "Microsoft Visual C++ Runtime Library", 0x12010, v34, v33, v31, "\n\n", v27, edi21, v26, "Runtime Error!\n\nProgram: ");
            }
        }
    }
    return;
}

void fun_401577(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** esi6;
    void** eax7;

    esi6 = a2;
    while (reinterpret_cast<unsigned char>(esi6) < reinterpret_cast<unsigned char>(a3)) {
        eax7 = *reinterpret_cast<void***>(esi6);
        if (eax7) {
            eax7();
        }
        esi6 = esi6 + 4;
    }
    return;
}

void fun_4014de(int32_t a1, int32_t a2, int32_t a3);

void fun_4014bc(void** ecx) {
    fun_4014de(__return_address(), 0, 0);
    return;
}

struct s5 {
    signed char[12] pad12;
    int32_t fc;
};

struct s4 {
    struct s4* f0;
    signed char[3] pad4;
    int32_t f4;
    int32_t f8;
    struct s5* fc;
    signed char[4215136] pad4215152;
    unsigned char f405170;
    signed char[1487] pad4216640;
    unsigned char f405740;
    signed char[256] pad4216897;
    unsigned char f405841;
};

uint32_t fun_40212a(struct s4* a1);

uint32_t fun_4024ee(void** a1, void** a2, void** a3) {
    int1_t zf4;
    uint32_t eax5;

    zf4 = g405a68 == 0;
    if (zf4) {
        eax5 = fun_40212a(0xfd);
        g405a68 = reinterpret_cast<void**>(1);
    }
    return eax5;
}

uint32_t fun_4020f9(unsigned char a1, uint32_t a2, unsigned char a3);

uint32_t fun_4020e8(void** ecx) {
    int32_t v2;
    uint32_t eax3;

    v2 = reinterpret_cast<int32_t>(__return_address());
    eax3 = fun_4020f9(*reinterpret_cast<unsigned char*>(&v2), 0, 4);
    return eax3;
}

int32_t g405030 = 0x4014cd;

void fun_401446(void** ecx) {
    int1_t zf2;

    zf2 = g405564 == 1;
    if (zf2) {
        fun_401f5c(ecx);
    }
    fun_401f95(ecx, __return_address());
    g405030();
    return;
}

struct s3* fun_4026b0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** ecx7;
    void** eax8;

    ecx7 = a2;
    if (!(reinterpret_cast<unsigned char>(ecx7) & 3)) {
        while (1) {
            addr_4026d0_2:
            ecx7 = ecx7 + 4;
            if (!((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx7)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx7) + 0x7efefeff)) & 0x81010100)) 
                continue;
            eax8 = *reinterpret_cast<void***>(ecx7 + 0xfffffffc);
            if (!*reinterpret_cast<signed char*>(&eax8)) 
                break;
            if (!*reinterpret_cast<signed char*>(&eax8 + 1)) 
                goto addr_402717_5;
            if (!(reinterpret_cast<unsigned char>(eax8) & 0xff0000)) 
                goto addr_40270d_7;
            if (!(reinterpret_cast<unsigned char>(eax8) & 0xff000000)) 
                goto addr_402703_9;
        }
    } else {
        do {
            ++ecx7;
            if (!*reinterpret_cast<void***>(ecx7)) 
                goto addr_402703_9;
        } while (reinterpret_cast<unsigned char>(ecx7) & 3);
        goto addr_4026cb_13;
    }
    return reinterpret_cast<unsigned char>(ecx7 + 0xfffffffc) - reinterpret_cast<unsigned char>(a2);
    addr_402717_5:
    return reinterpret_cast<unsigned char>(ecx7 + 0xfffffffd) - reinterpret_cast<unsigned char>(a2);
    addr_40270d_7:
    return reinterpret_cast<unsigned char>(ecx7 + 0xfffffffe) - reinterpret_cast<unsigned char>(a2);
    addr_402703_9:
    return reinterpret_cast<unsigned char>(ecx7 + 0xffffffff) - reinterpret_cast<unsigned char>(a2);
    addr_4026cb_13:
    goto addr_4026d0_2;
}

void** g4056fc = reinterpret_cast<void**>(0);

void** fun_402642(uint32_t a1, void** a2);

void** fun_402630(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** eax15;

    v14 = g4056fc;
    eax15 = fun_402642(__return_address(), v14);
    return eax15;
}

void fun_4018bf(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** ecx7;
    void** esi8;
    void** edi9;
    void** eax10;
    void** dl11;
    uint32_t v12;
    uint32_t v13;
    uint32_t ebx14;
    uint32_t edx15;
    uint32_t ebx16;

    ecx7 = a6;
    *reinterpret_cast<void***>(ecx7) = reinterpret_cast<void**>(0);
    esi8 = a4;
    edi9 = a3;
    *reinterpret_cast<void***>(a5) = reinterpret_cast<void**>(1);
    eax10 = a2;
    if (edi9) {
        *reinterpret_cast<void***>(edi9) = esi8;
        edi9 = edi9 + 4;
        a3 = edi9;
    }
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax10) == 34)) {
        do {
            *reinterpret_cast<void***>(ecx7) = *reinterpret_cast<void***>(ecx7) + 1;
            if (esi8) {
                *reinterpret_cast<void***>(esi8) = *reinterpret_cast<void***>(eax10);
                ++esi8;
            }
            dl11 = *reinterpret_cast<void***>(eax10);
            ++eax10;
            if (*reinterpret_cast<unsigned char*>(dl11 + 0x405841) & 4) {
                *reinterpret_cast<void***>(ecx7) = *reinterpret_cast<void***>(ecx7) + 1;
                if (esi8) {
                    *reinterpret_cast<void***>(esi8) = *reinterpret_cast<void***>(eax10);
                    ++esi8;
                }
                ++eax10;
            }
            if (dl11 == 32) 
                break;
            if (!dl11) 
                goto addr_40196a_12;
        } while (!reinterpret_cast<int1_t>(dl11 == 9));
        if (dl11) {
            if (esi8) {
                *reinterpret_cast<void***>(esi8 + 0xffffffff) = reinterpret_cast<void**>(0);
            }
        } else {
            addr_40196a_12:
            --eax10;
        }
    } else {
        while ((++eax10, *reinterpret_cast<void***>(eax10 + 1) != 34) && *reinterpret_cast<void***>(eax10 + 1)) {
            if (*reinterpret_cast<unsigned char*>(*reinterpret_cast<void***>(eax10 + 1) + 0x405841) & 4 && (*reinterpret_cast<void***>(ecx7) = *reinterpret_cast<void***>(ecx7) + 1, !!esi8)) {
                *reinterpret_cast<void***>(esi8) = *reinterpret_cast<void***>(eax10);
                ++esi8;
                ++eax10;
            }
            *reinterpret_cast<void***>(ecx7) = *reinterpret_cast<void***>(ecx7) + 1;
            if (!esi8) 
                continue;
            *reinterpret_cast<void***>(esi8) = *reinterpret_cast<void***>(eax10);
            ++esi8;
        }
        *reinterpret_cast<void***>(ecx7) = *reinterpret_cast<void***>(ecx7) + 1;
        if (!esi8) 
            goto addr_40192a_23; else 
            goto addr_401926_24;
    }
    addr_401975_25:
    v12 = 0;
    while (*reinterpret_cast<void***>(eax10)) {
        while (*reinterpret_cast<void***>(eax10) == 32 || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax10) == 9)) {
            ++eax10;
        }
        if (!*reinterpret_cast<void***>(eax10)) 
            break;
        if (edi9) {
            *reinterpret_cast<void***>(edi9) = esi8;
            edi9 = edi9 + 4;
            a3 = edi9;
        }
        *reinterpret_cast<void***>(a5) = *reinterpret_cast<void***>(a5) + 1;
        while (1) {
            v13 = 1;
            ebx14 = 0;
            while (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax10) == 92)) {
                ++eax10;
                ++ebx14;
            }
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax10) == 34)) {
                if (!(*reinterpret_cast<unsigned char*>(&ebx14) & 1)) {
                    if (!v12 || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax10 + 1) == 34)) {
                        v13 = 0;
                    } else {
                        ++eax10;
                    }
                    edi9 = a3;
                    edx15 = 0;
                    *reinterpret_cast<unsigned char*>(&edx15) = reinterpret_cast<uint1_t>(v12 == 0);
                    v12 = edx15;
                }
                ebx14 = ebx14 >> 1;
            }
            if (ebx14) {
                ebx16 = ebx14 - 1 + 1;
                do {
                    if (esi8) {
                        *reinterpret_cast<void***>(esi8) = reinterpret_cast<void**>(92);
                        ++esi8;
                    }
                    *reinterpret_cast<void***>(ecx7) = *reinterpret_cast<void***>(ecx7) + 1;
                    --ebx16;
                } while (ebx16);
            }
            if (!*reinterpret_cast<void***>(eax10)) 
                break;
            if (v12) 
                goto addr_401a19_50;
            if (*reinterpret_cast<void***>(eax10) == 32) 
                break;
            if (*reinterpret_cast<void***>(eax10) == 9) 
                break;
            addr_401a19_50:
            if (v13) {
                if (!esi8) {
                    if (*reinterpret_cast<unsigned char*>(*reinterpret_cast<void***>(eax10) + 0x405841) & 4) {
                        ++eax10;
                        *reinterpret_cast<void***>(ecx7) = *reinterpret_cast<void***>(ecx7) + 1;
                    }
                } else {
                    if (*reinterpret_cast<unsigned char*>(*reinterpret_cast<void***>(eax10) + 0x405841) & 4) {
                        *reinterpret_cast<void***>(esi8) = *reinterpret_cast<void***>(eax10);
                        ++esi8;
                        ++eax10;
                        *reinterpret_cast<void***>(ecx7) = *reinterpret_cast<void***>(ecx7) + 1;
                    }
                    *reinterpret_cast<void***>(esi8) = *reinterpret_cast<void***>(eax10);
                    ++esi8;
                }
                *reinterpret_cast<void***>(ecx7) = *reinterpret_cast<void***>(ecx7) + 1;
            }
            ++eax10;
        }
        if (esi8) {
            *reinterpret_cast<void***>(esi8) = reinterpret_cast<void**>(0);
            ++esi8;
        }
        *reinterpret_cast<void***>(ecx7) = *reinterpret_cast<void***>(ecx7) + 1;
    }
    if (edi9) {
        *reinterpret_cast<void***>(edi9) = reinterpret_cast<void**>(0);
    }
    *reinterpret_cast<void***>(a5) = *reinterpret_cast<void***>(a5) + 1;
    return;
    addr_40192a_23:
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax10) == 34)) {
        ++eax10;
        goto addr_401975_25;
    }
    addr_401926_24:
    *reinterpret_cast<void***>(esi8) = reinterpret_cast<void**>(0);
    ++esi8;
    goto addr_40192a_23;
}

struct s7 {
    uint32_t f0;
    signed char[63] pad67;
    signed char f43;
    uint32_t f44;
    signed char[124] pad196;
    uint32_t fc4;
};

struct s6 {
    struct s6* f0;
    signed char f1;
    signed char f2;
    signed char f3;
    uint32_t f4;
    uint32_t f8;
    void* fc;
    struct s7* f10;
};

struct s6* fun_402aa3(void** a1);

int32_t g405948 = 0;

int32_t HeapFree = 0x4862;

void fun_402ace(void** ecx, struct s6* a2, void** a3);

void fun_40250a(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    struct s6* eax6;
    int32_t v7;

    if (a2) {
        eax6 = fun_402aa3(a2);
        if (!eax6) {
            v7 = g405948;
            HeapFree(a2, v7, 0);
        } else {
            fun_402ace(a2, eax6, a2);
            return;
        }
    }
    return;
}

int32_t HeapCreate = 0x4846;

int32_t fun_402a65();

int32_t HeapDestroy = 0x4838;

int32_t fun_401d50(void** a1, void** a2, void** a3, void** a4) {
    void** eax5;
    int32_t eax6;
    int32_t eax7;
    int32_t v8;

    eax5 = reinterpret_cast<void**>(0);
    *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>(a1 == 0);
    eax6 = reinterpret_cast<int32_t>(HeapCreate());
    g405948 = eax6;
    if (eax6) {
        eax7 = fun_402a65();
        if (eax7) {
            goto eax5;
        } else {
            v8 = g405948;
            HeapDestroy(v8);
        }
    }
    goto eax5;
}

int32_t HeapAlloc = 0x48a8;

struct s6* g405718 = reinterpret_cast<struct s6*>(0);

struct s6* g405710 = reinterpret_cast<struct s6*>(0);

uint32_t g405714 = 0;

struct s6* g40570c = reinterpret_cast<struct s6*>(0);

uint32_t g405704 = 0;

int32_t fun_402a65() {
    int32_t v1;
    struct s6* eax2;

    v1 = g405948;
    eax2 = reinterpret_cast<struct s6*>(HeapAlloc());
    g405718 = eax2;
    if (eax2) {
        g405710 = reinterpret_cast<struct s6*>(0);
        g405714 = 0;
        g40570c = eax2;
        g405704 = 16;
        goto v1;
    } else {
        goto v1;
    }
}

struct s8 {
    signed char[4] pad4;
    int32_t f4;
    int32_t* f8;
    int32_t fc;
};

struct s4* g0;

void fun_401e62(int32_t ecx, int32_t a2);

void fun_401dce(struct s8* a1, int32_t a2) {
    struct s4* v3;
    int32_t* ebx4;
    int32_t esi5;
    int32_t ecx6;

    v3 = g0;
    g0 = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 4);
    while ((ebx4 = a1->f8, a1->fc != -1) && a1->fc != a2) {
        esi5 = a1->fc + a1->fc * 2;
        ecx6 = ebx4[esi5];
        a1->fc = ecx6;
        if (!(ebx4 + esi5)[1]) {
            fun_401e62(ecx6, 0x101);
            (ebx4 + esi5)[2]();
        }
    }
    g0 = v3;
    return;
}

int32_t g4050d4 = 0;

struct s9 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t g4050d0 = 0;

int32_t g4050d8 = 0;

void fun_401e62(int32_t ecx, int32_t a2) {
    struct s9* ebp3;
    int32_t eax4;
    int32_t ebp5;

    g4050d4 = ebp3->f8;
    g4050d0 = eax4;
    g4050d8 = ebp5;
    return;
}

void fun_403bc8();

void fun_401d8c(struct s8* a1) {
    fun_403bc8();
    goto a1->f4;
}

void** fun_402540(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** edi8;
    void** ecx9;
    void** edx10;

    edi8 = a2;
    ecx9 = a3;
    if (!(reinterpret_cast<unsigned char>(ecx9) & 3)) {
        while (1) {
            addr_4025d6_3:
            edx10 = *reinterpret_cast<void***>(ecx9);
            ecx9 = ecx9 + 4;
            if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx9)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx9) + 0x7efefeff)) & 0x81010100) {
                if (!edx10) 
                    break;
                if (!*reinterpret_cast<signed char*>(&edx10 + 1)) 
                    goto addr_40261f_6;
                if (!(reinterpret_cast<unsigned char>(edx10) & 0xff0000)) 
                    goto addr_402612_8;
                if (!(reinterpret_cast<unsigned char>(edx10) & 0xff000000)) 
                    goto addr_40260a_10;
            }
            *reinterpret_cast<void***>(edi8) = edx10;
            edi8 = edi8 + 4;
        }
    } else {
        do {
            edx10 = *reinterpret_cast<void***>(ecx9);
            ++ecx9;
            if (!edx10) 
                break;
            *reinterpret_cast<void***>(edi8) = edx10;
            ++edi8;
        } while (reinterpret_cast<unsigned char>(ecx9) & 3);
        goto addr_4025cf_15;
    }
    *reinterpret_cast<void***>(edi8) = edx10;
    return a2;
    addr_40261f_6:
    *reinterpret_cast<void***>(edi8) = edx10;
    return a2;
    addr_402612_8:
    *reinterpret_cast<void***>(edi8) = edx10;
    *reinterpret_cast<signed char*>(edi8 + 2) = 0;
    return a2;
    addr_40260a_10:
    *reinterpret_cast<void***>(edi8) = edx10;
    return a2;
    addr_4025cf_15:
    goto addr_4025d6_3;
}

void** fun_403340(void** ecx, void** a2, void*** a3, uint32_t a4, void** a5) {
    uint32_t ecx6;
    uint32_t ebx7;
    void*** esi8;
    void** edi9;
    uint32_t ecx10;
    void** eax11;
    uint32_t ecx12;
    void** edx13;

    ecx6 = a4;
    if (!ecx6) {
        addr_4033c3_2:
        return a2;
    } else {
        ebx7 = ecx6;
        esi8 = a3;
        edi9 = a2;
        if (!(reinterpret_cast<uint32_t>(esi8) & 3)) {
            ecx10 = ecx6 >> 2;
            if (!ecx10) {
                goto addr_403385_6;
            }
        }
        do {
            eax11 = *esi8;
            ++esi8;
            *reinterpret_cast<void***>(edi9) = eax11;
            ++edi9;
            --ecx6;
            if (!ecx6) 
                goto addr_403392_8;
            if (!eax11) 
                break;
        } while (reinterpret_cast<uint32_t>(esi8) & 3);
        goto addr_403379_11;
    }
    if (reinterpret_cast<unsigned char>(edi9) & 3) {
        do {
            *reinterpret_cast<void***>(edi9) = eax11;
            ++edi9;
            --ecx6;
            if (!ecx6) 
                goto addr_403436_14;
        } while (reinterpret_cast<unsigned char>(edi9) & 3);
    }
    ebx7 = ecx6;
    ecx12 = ecx6 >> 2;
    if (ecx12) 
        goto addr_403427_17; else 
        goto addr_4033bb_18;
    addr_403379_11:
    ebx7 = ecx6;
    ecx10 = ecx6 >> 2;
    if (ecx10) {
        do {
            edx13 = *esi8;
            esi8 = esi8 + 4;
            if ((reinterpret_cast<unsigned char>(*esi8) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*esi8 + 0x7efefeff)) & 0x81010100) {
                if (!*reinterpret_cast<signed char*>(&edx13)) 
                    break;
                if (!*reinterpret_cast<signed char*>(&edx13 + 1)) 
                    goto addr_403411_22;
                if (!(reinterpret_cast<unsigned char>(edx13) & 0xff0000)) 
                    goto addr_403407_24;
                if (!(reinterpret_cast<unsigned char>(edx13) & 0xff000000)) 
                    goto addr_403403_26;
            }
            *reinterpret_cast<void***>(edi9) = edx13;
            edi9 = edi9 + 4;
            --ecx10;
        } while (ecx10);
        goto addr_403380_28;
    } else {
        addr_403380_28:
        ebx7 = ebx7 & 3;
        if (!ebx7) {
            addr_403392_8:
            return a2;
        } else {
            do {
                addr_403385_6:
                eax11 = *esi8;
                ++esi8;
                *reinterpret_cast<void***>(edi9) = eax11;
                ++edi9;
                if (!eax11) 
                    goto addr_4033be_29;
                --ebx7;
            } while (ebx7);
            goto addr_403392_8;
        }
    }
    *reinterpret_cast<void***>(edi9) = reinterpret_cast<void**>(0);
    addr_40341f_32:
    edi9 = edi9 + 4;
    eax11 = reinterpret_cast<void**>(0);
    ecx12 = ecx10 - 1;
    if (!ecx12) {
        addr_403431_33:
        ebx7 = ebx7 & 3;
        if (ebx7) {
            do {
                addr_4033bb_18:
                *reinterpret_cast<void***>(edi9) = eax11;
                ++edi9;
                addr_4033be_29:
                --ebx7;
            } while (ebx7);
        } else {
            addr_403436_14:
            return a2;
        }
    } else {
        addr_403427_17:
        eax11 = reinterpret_cast<void**>(0);
        goto addr_403429_34;
    }
    goto addr_4033c3_2;
    do {
        addr_403429_34:
        *reinterpret_cast<void***>(edi9) = reinterpret_cast<void**>(0);
        edi9 = edi9 + 4;
        --ecx12;
    } while (ecx12);
    goto addr_403431_33;
    addr_403411_22:
    *reinterpret_cast<void***>(edi9) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx13) & 0xff);
    goto addr_40341f_32;
    addr_403407_24:
    *reinterpret_cast<void***>(edi9) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx13) & 0xffff);
    goto addr_40341f_32;
    addr_403403_26:
    *reinterpret_cast<void***>(edi9) = edx13;
    goto addr_40341f_32;
}

void** fun_402550(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** ecx14;
    void** eax15;
    void** edi16;
    void** ecx17;
    void** edx18;

    ecx14 = a2;
    if (!(reinterpret_cast<unsigned char>(ecx14) & 3)) {
        while (1) {
            addr_40256c_2:
            ecx14 = ecx14 + 4;
            if (!((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx14)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx14) + 0x7efefeff)) & 0x81010100)) 
                continue;
            eax15 = *reinterpret_cast<void***>(ecx14 + 0xfffffffc);
            if (!*reinterpret_cast<signed char*>(&eax15)) 
                break;
            if (!*reinterpret_cast<signed char*>(&eax15 + 1)) 
                goto addr_4025a9_5;
            if (!(reinterpret_cast<unsigned char>(eax15) & 0xff0000)) 
                goto addr_4025a4_7;
            if (!(reinterpret_cast<unsigned char>(eax15) & 0xff000000)) 
                goto addr_40259f_9;
        }
    } else {
        do {
            ++ecx14;
            if (!*reinterpret_cast<void***>(ecx14)) 
                goto addr_40259f_9;
        } while (reinterpret_cast<unsigned char>(ecx14) & 3);
        goto addr_40256c_2;
    }
    edi16 = ecx14 + 0xfffffffc;
    addr_4025b1_14:
    ecx17 = a3;
    if (!(reinterpret_cast<unsigned char>(ecx17) & 3)) {
        while (1) {
            addr_4025d6_15:
            edx18 = *reinterpret_cast<void***>(ecx17);
            ecx17 = ecx17 + 4;
            if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx17)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx17) + 0x7efefeff)) & 0x81010100) {
                if (!edx18) 
                    break;
                if (!*reinterpret_cast<signed char*>(&edx18 + 1)) 
                    goto addr_40261f_18;
                if (!(reinterpret_cast<unsigned char>(edx18) & 0xff0000)) 
                    goto addr_402612_20;
                if (!(reinterpret_cast<unsigned char>(edx18) & 0xff000000)) 
                    goto addr_40260a_22;
            }
            *reinterpret_cast<void***>(edi16) = edx18;
            edi16 = edi16 + 4;
        }
    } else {
        do {
            edx18 = *reinterpret_cast<void***>(ecx17);
            ++ecx17;
            if (!edx18) 
                break;
            *reinterpret_cast<void***>(edi16) = edx18;
            ++edi16;
        } while (reinterpret_cast<unsigned char>(ecx17) & 3);
        goto addr_4025cf_27;
    }
    *reinterpret_cast<void***>(edi16) = edx18;
    return a2;
    addr_40261f_18:
    *reinterpret_cast<void***>(edi16) = edx18;
    return a2;
    addr_402612_20:
    *reinterpret_cast<void***>(edi16) = edx18;
    *reinterpret_cast<signed char*>(edi16 + 2) = 0;
    return a2;
    addr_40260a_22:
    *reinterpret_cast<void***>(edi16) = edx18;
    return a2;
    addr_4025cf_27:
    goto addr_4025d6_15;
    addr_4025a9_5:
    edi16 = ecx14 + 0xfffffffd;
    goto addr_4025b1_14;
    addr_4025a4_7:
    edi16 = ecx14 + 0xfffffffe;
    goto addr_4025b1_14;
    addr_40259f_9:
    edi16 = ecx14 + 0xffffffff;
    goto addr_4025b1_14;
}

int32_t g4056c8 = 0;

int32_t g4056cc = 0;

int32_t g4056d0 = 0;

int32_t LoadLibraryA = 0x48e4;

int32_t GetProcAddress = 0x48d2;

void fun_4032ae(void** ecx, void* a2, int32_t a3, int32_t a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    int32_t ebx13;
    int1_t zf14;
    int32_t eax15;
    int32_t eax16;
    int32_t eax17;
    int32_t eax18;
    int32_t eax19;
    int32_t esi20;
    int32_t eax21;
    int32_t eax22;
    int32_t eax23;
    int32_t ebx24;

    ebx13 = 0;
    zf14 = g4056c8 == 0;
    if (!zf14) {
        addr_4032fd_2:
        eax15 = g4056cc;
        if (eax15 && ((eax16 = reinterpret_cast<int32_t>(eax15()), ebx13 = eax16, !!ebx13) && (eax17 = g4056d0, !!eax17))) {
            eax18 = reinterpret_cast<int32_t>(eax17(ebx13));
            ebx13 = eax18;
        }
    } else {
        eax19 = reinterpret_cast<int32_t>(LoadLibraryA());
        if (!eax19 || (esi20 = GetProcAddress, eax21 = reinterpret_cast<int32_t>(esi20(eax19, "MessageBoxA")), g4056c8 = eax21, eax21 == 0)) {
            goto addr_40332f_6;
        } else {
            eax22 = reinterpret_cast<int32_t>(esi20(eax19, "GetActiveWindow", eax19, "MessageBoxA"));
            g4056cc = eax22;
            eax23 = reinterpret_cast<int32_t>(esi20(eax19, "GetLastActivePopup", eax19, "GetActiveWindow", eax19, "MessageBoxA"));
            g4056d0 = eax23;
            goto addr_4032fd_2;
        }
    }
    g4056c8(ebx13, __return_address(), a2);
    addr_40332f_6:
    goto ebx24;
}

struct s4* fun_40230d(struct s4* a1, struct s4* a2, void* a3) {
    uint32_t eax4;
    uint32_t eax5;
    uint32_t eax6;

    eax4 = reinterpret_cast<unsigned char>(a1) - 0x3a4;
    if (!eax4) {
        return 0x411;
    } else {
        eax5 = eax4 - 4;
        if (!eax5) {
            return 0x804;
        } else {
            eax6 = eax5 - 13;
            if (!eax6) {
                return 0x412;
            } else {
                if (!(eax6 - 1)) {
                    return 0x404;
                } else {
                    return 0;
                }
            }
        }
    }
}

struct s4* g40571c = reinterpret_cast<struct s4*>(0);

struct s4* g40572c = reinterpret_cast<struct s4*>(0);

struct s4* g405944 = reinterpret_cast<struct s4*>(0);

struct s4* g405720 = reinterpret_cast<struct s4*>(0);

struct s4* g405724 = reinterpret_cast<struct s4*>(0);

struct s4* g405728 = reinterpret_cast<struct s4*>(0);

void fun_402340(struct s4* ecx) {
    int32_t ecx2;
    signed char* edi3;

    ecx2 = 64;
    edi3 = reinterpret_cast<signed char*>(0x405840);
    while (ecx2) {
        --ecx2;
        *edi3 = reinterpret_cast<signed char>(0);
        edi3 = edi3 + 4;
    }
    *edi3 = 0;
    g40571c = reinterpret_cast<struct s4*>(0);
    g40572c = reinterpret_cast<struct s4*>(0);
    g405944 = reinterpret_cast<struct s4*>(0);
    g405720 = reinterpret_cast<struct s4*>(0);
    g405724 = reinterpret_cast<struct s4*>(0);
    g405728 = reinterpret_cast<struct s4*>(0);
    return;
}

int32_t GetCPInfo = 0x4886;

int32_t fun_40368d(struct s4* ecx, struct s4* a2, struct s4* a3, struct s4* a4, struct s4* a5, struct s4* a6, struct s4* a7, struct s4* a8);

struct s4* fun_40343e(struct s4* a1, struct s4* a2, struct s4* a3, struct s4* a4, struct s4* a5, struct s4* a6, struct s4* a7, struct s4* a8, struct s4* a9, struct s4* a10, struct s4* a11, struct s4* a12, struct s4* a13, struct s4* a14, struct s4* a15, struct s4* a16, struct s4* a17, struct s4* a18, struct s4* a19, struct s4* a20, struct s4* a21, struct s4* a22, struct s4* a23);

void fun_402369(struct s4* ecx) {
    int32_t v2;
    int32_t ebp3;
    int32_t* ebp4;
    struct s4* v5;
    struct s4* esi6;
    struct s4* v7;
    struct s4* v8;
    int32_t eax9;
    uint32_t eax10;
    unsigned char cl11;
    struct s4* eax12;
    struct s4* esi13;
    unsigned char al14;
    unsigned char v15;
    struct s4* v16;
    struct s4* v17;
    struct s4* v18;
    struct s4* v19;
    struct s4* v20;
    struct s4* v21;
    struct s4* v22;
    struct s4* v23;
    struct s4* v24;
    struct s4* v25;
    struct s4* v26;
    struct s4* v27;
    struct s4* v28;
    struct s4* v29;
    struct s4* v30;
    struct s4* eax31;
    int16_t dx32;
    int16_t v33;
    unsigned char dl34;
    unsigned char v35;
    struct s4* eax36;
    signed char* edi37;
    void* ecx38;
    void* ebx39;
    uint32_t ecx40;

    v2 = ebp3;
    ebp4 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v5 = esi6;
    v7 = reinterpret_cast<struct s4*>(ebp4 + 0xfffffffb);
    v8 = g40571c;
    eax9 = reinterpret_cast<int32_t>(GetCPInfo());
    if (eax9 != 1) {
        eax10 = 0;
        do {
            if (eax10 < 65 || eax10 > 90) {
                if (eax10 < 97 || eax10 > 0x7a) {
                    *reinterpret_cast<unsigned char*>(eax10 + 0x405740) = 0;
                    continue;
                } else {
                    *reinterpret_cast<unsigned char*>(eax10 + 0x405841) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax10 + 0x405841) | 32);
                    cl11 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&eax10) - 32);
                }
            } else {
                *reinterpret_cast<unsigned char*>(eax10 + 0x405841) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax10 + 0x405841) | 16);
                cl11 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&eax10) + 32);
            }
            *reinterpret_cast<unsigned char*>(eax10 + 0x405740) = cl11;
            ++eax10;
        } while (eax10 < 0x100);
    } else {
        eax12 = reinterpret_cast<struct s4*>(0);
        esi13 = reinterpret_cast<struct s4*>(0x100);
        do {
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp4) + reinterpret_cast<unsigned char>(eax12) + 0xfffffeec) = *reinterpret_cast<signed char*>(&eax12);
            eax12 = reinterpret_cast<struct s4*>(&eax12->pad4);
        } while (reinterpret_cast<unsigned char>(eax12) < reinterpret_cast<unsigned char>(0x100));
        al14 = v15;
        if (!al14) 
            goto addr_4023e4_13; else 
            goto addr_4023ad_14;
    }
    addr_4024eb_15:
    return;
    addr_4023e4_13:
    v16 = g405944;
    v17 = g40571c;
    v18 = reinterpret_cast<struct s4*>(ebp4 + 0xfffffebb);
    v19 = reinterpret_cast<struct s4*>(ebp4 + 0xffffffbb);
    fun_40368d(ecx, 1, v19, esi13, v18, v17, v16, 0);
    v20 = g40571c;
    v21 = reinterpret_cast<struct s4*>(ebp4 + 0xffffff7b);
    v22 = reinterpret_cast<struct s4*>(ebp4 + 0xffffffbb);
    v23 = g405944;
    fun_40343e(v23, esi13, v22, esi13, v21, esi13, v20, 0, 1, v19, esi13, v18, v17, v16, 0, v8, v7, v5, v24, v25, v26, v27, v28);
    v29 = g40571c;
    v30 = g405944;
    fun_40343e(v30, 0x200, ebp4 + 0xffffffbb, esi13, ebp4 + 0xffffff3b, esi13, v29, 0, v23, esi13, v22, esi13, v21, esi13, v20, 0, 1, v19, esi13, v18, v17, v16, 0);
    eax31 = reinterpret_cast<struct s4*>(0);
    do {
        dx32 = v33;
        if (!(*reinterpret_cast<unsigned char*>(&dx32) & 1)) {
            if (!(*reinterpret_cast<unsigned char*>(&dx32) & 2)) {
                eax31->f405740 = 0;
                continue;
            } else {
                eax31->f405841 = reinterpret_cast<unsigned char>(eax31->f405841 | 32);
                dl34 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebp4) + reinterpret_cast<unsigned char>(eax31) + 0xfffffcec);
            }
        } else {
            eax31->f405841 = reinterpret_cast<unsigned char>(eax31->f405841 | 16);
            dl34 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebp4) + reinterpret_cast<unsigned char>(eax31) + 0xfffffdec);
        }
        eax31->f405740 = dl34;
        eax31 = reinterpret_cast<struct s4*>(&eax31->pad4);
    } while (reinterpret_cast<unsigned char>(eax31) < reinterpret_cast<unsigned char>(esi13));
    goto addr_4024eb_15;
    addr_4023ad_14:
    do {
        ecx = reinterpret_cast<struct s4*>(static_cast<uint32_t>(v35));
        eax36 = reinterpret_cast<struct s4*>(static_cast<uint32_t>(al14));
        if (reinterpret_cast<unsigned char>(eax36) <= reinterpret_cast<unsigned char>(ecx)) {
            edi37 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp4) + reinterpret_cast<unsigned char>(eax36) + 0xfffffeec);
            ecx38 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx) - reinterpret_cast<unsigned char>(eax36) + 1);
            ebx39 = ecx38;
            ecx40 = reinterpret_cast<uint32_t>(ecx38) >> 2;
            while (ecx40) {
                --ecx40;
                *edi37 = reinterpret_cast<signed char>(0x20202020);
                edi37 = edi37 + 4;
                esi13 = reinterpret_cast<struct s4*>(&esi13->f4);
            }
            ecx = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(ebx39) & 3);
            while (ecx) {
                ecx = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(ecx) - 1);
                *edi37 = 32;
                ++edi37;
                esi13 = reinterpret_cast<struct s4*>(&esi13->pad4);
            }
        }
        al14 = *reinterpret_cast<unsigned char*>(&v2);
    } while (al14);
    goto addr_4023e4_13;
}

struct s4* fun_4022c3(struct s4* a1);

struct s10 {
    unsigned char f0;
    unsigned char f1;
};

struct s11 {
    struct s4* f0;
    signed char[3] pad4;
    struct s4* f4;
};

struct s12 {
    struct s4* f0;
    signed char[3] pad4;
    struct s4* f4;
};

struct s4* g4056c4 = reinterpret_cast<struct s4*>(0);

uint32_t fun_40212a(struct s4* a1) {
    void* ebp2;
    void* v3;
    void* esi4;
    struct s4* v5;
    struct s4* edi6;
    struct s4* eax7;
    struct s4* esi8;
    struct s4* ecx9;
    int1_t zf10;
    struct s4* v11;
    uint32_t eax12;
    int32_t edx13;
    struct s4** eax14;
    int32_t ecx15;
    signed char* edi16;
    struct s4* v17;
    int32_t esi18;
    struct s10* ebx19;
    struct s10* ecx20;
    uint32_t eax21;
    uint32_t edi22;
    unsigned char dl23;
    struct s4* eax24;
    struct s11* esi25;
    struct s12* esi26;
    void* v27;
    struct s4* v28;
    uint32_t eax29;
    int1_t zf30;
    signed char* edi31;
    int1_t below_or_equal32;
    uint32_t v33;
    struct s4* esi34;
    signed char v35;
    unsigned char v36;
    uint32_t eax37;
    unsigned char v38;
    uint32_t edx39;
    signed char v40;
    uint32_t eax41;
    struct s4* eax42;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v3 = esi4;
    v5 = edi6;
    eax7 = fun_4022c3(a1);
    esi8 = eax7;
    ecx9 = a1;
    zf10 = esi8 == g40571c;
    v11 = esi8;
    if (zf10) {
        addr_4022b7_2:
        eax12 = 0;
    } else {
        if (!esi8) 
            goto addr_4022ad_4;
        edx13 = 0;
        eax14 = reinterpret_cast<struct s4**>(0x405178);
        do {
            if (*eax14 == esi8) 
                goto addr_4021d4_7;
            eax14 = eax14 + 48;
            ++edx13;
        } while (reinterpret_cast<int32_t>(eax14) < 0x405268);
        goto addr_40216d_9;
    }
    addr_4022be_10:
    return eax12;
    addr_4021d4_7:
    ecx15 = 64;
    edi16 = reinterpret_cast<signed char*>(0x405840);
    while (ecx15) {
        --ecx15;
        *edi16 = reinterpret_cast<signed char>(0);
        edi16 = edi16 + 4;
    }
    v17 = reinterpret_cast<struct s4*>(0);
    *edi16 = 0;
    esi18 = (edx13 + edx13 * 2 << 4) + 1;
    ebx19 = reinterpret_cast<struct s10*>(esi18 + 0x405188);
    do {
        ecx20 = ebx19;
        if (ebx19->f0) {
            do {
                if (!ecx20->f1) 
                    break;
                eax21 = ecx20->f0;
                edi22 = ecx20->f1;
                if (eax21 <= edi22) {
                    dl23 = v17->f405170;
                    do {
                        *reinterpret_cast<unsigned char*>(eax21 + 0x405841) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax21 + 0x405841) | dl23);
                        ++eax21;
                    } while (eax21 <= edi22);
                }
                ecx20 = reinterpret_cast<struct s10*>(&ecx20->f1 + 1);
            } while (ecx20->f0);
        }
        v17 = reinterpret_cast<struct s4*>(&v17->pad4);
        ebx19 = ebx19 + 4;
    } while (reinterpret_cast<unsigned char>(v17) < reinterpret_cast<unsigned char>(4));
    g40572c = reinterpret_cast<struct s4*>(1);
    g40571c = v11;
    eax24 = fun_40230d(v11, v5, v3);
    esi25 = reinterpret_cast<struct s11*>(esi18 + 0x40517c);
    g405720 = esi25->f0;
    esi26 = reinterpret_cast<struct s12*>(&esi25->f4);
    g405724 = esi26->f0;
    ecx9 = v11;
    g405944 = eax24;
    g405728 = esi26->f4;
    addr_4022b2_34:
    fun_402369(ecx9);
    goto addr_4022b7_2;
    addr_40216d_9:
    v27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp2) - 24);
    v28 = esi8;
    eax29 = reinterpret_cast<uint32_t>(GetCPInfo(ecx9, v28, v27));
    if (eax29 != 1) {
        zf30 = g4056c4 == 0;
        if (zf30) {
            eax12 = 0xffffffff;
            goto addr_4022be_10;
        } else {
            addr_4022ad_4:
            fun_402340(ecx9);
            goto addr_4022b2_34;
        }
    } else {
        ecx9 = reinterpret_cast<struct s4*>(64);
        edi31 = reinterpret_cast<signed char*>(0x405840);
        below_or_equal32 = v33 <= 1;
        g40571c = esi8;
        while (ecx9) {
            ecx9 = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(ecx9) - 1);
            *edi31 = reinterpret_cast<signed char>(0);
            edi31 = edi31 + 4;
            esi8 = reinterpret_cast<struct s4*>(&esi8->f4);
        }
        *edi31 = 0;
        esi34 = reinterpret_cast<struct s4*>(&esi8->pad4);
        g405944 = reinterpret_cast<struct s4*>(0);
        if (!below_or_equal32) 
            goto addr_4021a4_44;
    }
    g40572c = reinterpret_cast<struct s4*>(0);
    addr_402299_46:
    g405720 = reinterpret_cast<struct s4*>(0);
    g405724 = reinterpret_cast<struct s4*>(0);
    g405728 = reinterpret_cast<struct s4*>(0);
    goto addr_4022b2_34;
    addr_4021a4_44:
    if (v35) {
        do {
            if (!v36) 
                break;
            eax37 = v38;
            edx39 = v36;
            while (eax37 <= edx39) {
                *reinterpret_cast<unsigned char*>(eax37 + 0x405841) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax37 + 0x405841) | 4);
                ++eax37;
            }
        } while (v40);
    }
    eax41 = 1;
    do {
        *reinterpret_cast<unsigned char*>(eax41 + 0x405841) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax41 + 0x405841) | 8);
        ++eax41;
    } while (eax41 < 0xff);
    eax42 = fun_40230d(esi34, v28, v27);
    ecx9 = esi34;
    g405944 = eax42;
    g40572c = reinterpret_cast<struct s4*>(1);
    goto addr_402299_46;
}

struct s6* fun_402aa3(void** a1) {
    uint32_t eax2;
    struct s6* eax3;
    struct s6* ecx4;

    eax2 = g405714;
    eax3 = g405718;
    ecx4 = reinterpret_cast<struct s6*>(reinterpret_cast<unsigned char>(eax3) + (eax2 + eax2 * 4) * 4);
    while (reinterpret_cast<unsigned char>(eax3) < reinterpret_cast<unsigned char>(ecx4)) {
        if (reinterpret_cast<unsigned char>(a1) - reinterpret_cast<uint32_t>(eax3->fc) < 0x100000) 
            goto addr_402acd_4;
        ++eax3;
    }
    eax3 = reinterpret_cast<struct s6*>(0);
    addr_402acd_4:
    return eax3;
}

struct s13 {
    signed char[4] pad4;
    int32_t f4;
};

struct s14 {
    signed char[8] pad8;
    int32_t f8;
};

uint32_t g405708 = 0;

int32_t VirtualFree = 0x4854;

struct s6* fun_403800(struct s6* a1, struct s6* a2, void* a3, int32_t a4, int32_t a5, struct s7* a6, void* a7, int32_t a8, int32_t a9, void* a10, int32_t a11, int32_t a12);

void fun_402ace(void** ecx, struct s6* a2, void** a3) {
    struct s7* eax4;
    void* esi5;
    void** ebx6;
    void** edx7;
    uint32_t esi8;
    void** ebx9;
    void** v10;
    void** v11;
    void*** v12;
    void* ecx13;
    void** ecx14;
    void** ecx15;
    uint32_t ecx16;
    signed char* ecx17;
    uint32_t edi18;
    signed char* ecx19;
    uint32_t edi20;
    void** edi21;
    uint32_t ecx22;
    void** v23;
    void** ecx24;
    void** ecx25;
    uint32_t ecx26;
    signed char* ecx27;
    uint32_t edx28;
    signed char* ecx29;
    uint32_t edx30;
    void** ecx31;
    signed char cl32;
    uint32_t ecx33;
    uint32_t ecx34;
    uint32_t* eax35;
    void** ecx36;
    void** ecx37;
    uint32_t* eax38;
    struct s6* eax39;
    struct s6* eax40;
    uint32_t ecx41;
    int32_t edi42;
    void* ecx43;
    uint32_t ecx44;
    struct s6* eax45;
    struct s6* eax46;
    uint32_t ecx47;
    struct s6* eax48;
    struct s6* eax49;
    void* v50;
    struct s6* eax51;
    struct s7* v52;
    int32_t v53;
    uint32_t eax54;
    struct s6* edx55;
    struct s6* eax56;
    int1_t below_or_equal57;
    struct s6* ecx58;

    eax4 = a2->f10;
    esi5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a3) - reinterpret_cast<uint32_t>(a2->fc));
    ebx6 = *reinterpret_cast<void***>(a3 + 0xfffffffc);
    edx7 = a3 + 0xfffffffc;
    esi8 = reinterpret_cast<uint32_t>(esi5) >> 15;
    ebx9 = ebx6 - 1;
    v10 = *reinterpret_cast<void***>(edx7 + 0xfffffffc);
    v11 = ebx9;
    v12 = reinterpret_cast<void***>(esi8 * 0x204 + reinterpret_cast<uint32_t>(eax4) + 0x144);
    ecx13 = *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx9) + reinterpret_cast<unsigned char>(edx7));
    if (!(*reinterpret_cast<unsigned char*>(&ecx13) & 1)) {
        ecx14 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(ecx13) >> 4) - 1);
        a3 = ecx14;
        if (reinterpret_cast<unsigned char>(ecx14) > reinterpret_cast<unsigned char>(63)) {
            a3 = reinterpret_cast<void**>(63);
        }
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebx9) + reinterpret_cast<unsigned char>(edx7) + 4) == *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebx9) + reinterpret_cast<unsigned char>(edx7) + 8)) {
            ecx15 = a3;
            if (reinterpret_cast<unsigned char>(ecx15) >= reinterpret_cast<unsigned char>(32)) {
                ecx16 = reinterpret_cast<uint32_t>(ecx15 + 0xffffffe0);
                ecx17 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<uint32_t>(eax4) + 4);
                edi18 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx16));
                *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax4) + esi8 * 4 + 0xc4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax4) + esi8 * 4 + 0xc4) & edi18;
                *ecx17 = reinterpret_cast<signed char>(*ecx17 - 1);
                if (!*ecx17) {
                    a2->f4 = a2->f4 & edi18;
                }
            } else {
                ecx19 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx15) + reinterpret_cast<uint32_t>(eax4) + 4);
                edi20 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx15));
                *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax4) + esi8 * 4 + 68) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax4) + esi8 * 4 + 68) & edi20;
                *ecx19 = reinterpret_cast<signed char>(*ecx19 - 1);
                if (!*ecx19) {
                    *reinterpret_cast<struct s6**>(&a2->f0) = reinterpret_cast<struct s6*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s6**>(&a2->f0)) & edi20);
                }
            }
        }
        (*reinterpret_cast<struct s13**>(reinterpret_cast<unsigned char>(ebx9) + reinterpret_cast<unsigned char>(edx7) + 8))->f4 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebx9) + reinterpret_cast<unsigned char>(edx7) + 4);
        ebx9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx9) + reinterpret_cast<uint32_t>(ecx13));
        (*reinterpret_cast<struct s14**>(reinterpret_cast<unsigned char>(ebx9) + reinterpret_cast<unsigned char>(edx7) + 4))->f8 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebx9) + reinterpret_cast<unsigned char>(edx7) + 8);
        v11 = ebx9;
    }
    edi21 = reinterpret_cast<void**>((reinterpret_cast<signed char>(ebx9) >> 4) - 1);
    if (reinterpret_cast<unsigned char>(edi21) > reinterpret_cast<unsigned char>(63)) {
        edi21 = reinterpret_cast<void**>(63);
    }
    ecx22 = reinterpret_cast<unsigned char>(v10) & 1;
    if (!ecx22) {
        v23 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx7) - reinterpret_cast<unsigned char>(v10));
        ecx24 = reinterpret_cast<void**>((reinterpret_cast<signed char>(v10) >> 4) - 1);
        a3 = ecx24;
        if (reinterpret_cast<unsigned char>(ecx24) > reinterpret_cast<unsigned char>(63)) {
            a3 = reinterpret_cast<void**>(63);
            ecx24 = reinterpret_cast<void**>(63);
        }
        ebx9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx9) + reinterpret_cast<unsigned char>(v10));
        v11 = ebx9;
        edi21 = reinterpret_cast<void**>((reinterpret_cast<signed char>(ebx9) >> 4) - 1);
        if (reinterpret_cast<unsigned char>(edi21) > reinterpret_cast<unsigned char>(63)) {
            edi21 = reinterpret_cast<void**>(63);
        }
        if (ecx24 != edi21) {
            if (*reinterpret_cast<void***>(v23 + 4) == *reinterpret_cast<void***>(v23 + 8)) {
                ecx25 = a3;
                if (reinterpret_cast<unsigned char>(ecx25) >= reinterpret_cast<unsigned char>(32)) {
                    ecx26 = reinterpret_cast<uint32_t>(ecx25 + 0xffffffe0);
                    ecx27 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<uint32_t>(eax4) + 4);
                    edx28 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx26));
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax4) + esi8 * 4 + 0xc4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax4) + esi8 * 4 + 0xc4) & edx28;
                    *ecx27 = reinterpret_cast<signed char>(*ecx27 - 1);
                    if (!*ecx27) {
                        a2->f4 = a2->f4 & edx28;
                    }
                } else {
                    ecx29 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx25) + reinterpret_cast<uint32_t>(eax4) + 4);
                    edx30 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx25));
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax4) + esi8 * 4 + 68) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax4) + esi8 * 4 + 68) & edx30;
                    *ecx29 = reinterpret_cast<signed char>(*ecx29 - 1);
                    if (!*ecx29) {
                        *reinterpret_cast<struct s6**>(&a2->f0) = reinterpret_cast<struct s6*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s6**>(&a2->f0)) & edx30);
                    }
                }
            }
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(v23 + 8) + 4) = *reinterpret_cast<void***>(v23 + 4);
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(v23 + 4) + 8) = *reinterpret_cast<void***>(v23 + 8);
        }
        edx7 = v23;
    }
    if ((ecx22 || a3 != edi21) && (*reinterpret_cast<void***>(edx7 + 4) = (v12 + reinterpret_cast<unsigned char>(edi21) * 8)[4], ecx31 = reinterpret_cast<void**>(v12 + reinterpret_cast<unsigned char>(edi21) * 8), *reinterpret_cast<void***>(edx7 + 8) = ecx31, *reinterpret_cast<void***>(ecx31 + 4) = edx7, *reinterpret_cast<void***>(*reinterpret_cast<void***>(edx7 + 4) + 8) = edx7, *reinterpret_cast<void***>(edx7 + 4) == *reinterpret_cast<void***>(edx7 + 8))) {
        cl32 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edi21) + reinterpret_cast<uint32_t>(eax4) + 4);
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edi21) + reinterpret_cast<uint32_t>(eax4) + 4) = reinterpret_cast<signed char>(cl32 + 1);
        if (reinterpret_cast<unsigned char>(edi21) >= reinterpret_cast<unsigned char>(32)) {
            if (!cl32) {
                ecx33 = reinterpret_cast<uint32_t>(edi21 + 0xffffffe0);
                a2->f4 = a2->f4 | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx33);
            }
            ecx34 = reinterpret_cast<uint32_t>(edi21 + 0xffffffe0);
            eax35 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax4) + esi8 * 4 + 0xc4);
            *eax35 = *eax35 | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx34);
        } else {
            if (!cl32) {
                ecx36 = edi21;
                *reinterpret_cast<struct s6**>(&a2->f0) = reinterpret_cast<struct s6*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s6**>(&a2->f0)) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx36));
            }
            ecx37 = edi21;
            eax38 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax4) + esi8 * 4 + 68);
            *eax38 = *eax38 | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx37);
        }
        ebx9 = v11;
    }
    *reinterpret_cast<void***>(edx7) = ebx9;
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ebx9) + reinterpret_cast<unsigned char>(edx7) + 0xfffffffc) = ebx9;
    *v12 = *v12 - 1;
    if (*v12) {
        addr_402df4_37:
        return;
    } else {
        eax39 = g405710;
        if (!eax39) {
            addr_402de6_39:
            eax40 = a2;
        } else {
            ecx41 = g405708;
            edi42 = VirtualFree;
            ecx43 = reinterpret_cast<void*>((ecx41 << 15) + reinterpret_cast<uint32_t>(eax39->fc));
            edi42(ecx43, 0x8000, 0x4000);
            ecx44 = g405708;
            eax45 = g405710;
            eax45->f8 = eax45->f8 | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx44);
            eax46 = g405710;
            ecx47 = g405708;
            *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax46->f10) + ecx47 * 4 + 0xc4) = 0;
            eax48 = g405710;
            eax48->f10->f43 = reinterpret_cast<signed char>(eax48->f10->f43 - 1);
            eax49 = g405710;
            if (!eax49->f10->f43) {
                eax49->f4 = eax49->f4 & 0xfffffffe;
                eax49 = g405710;
            }
            if (eax49->f8 != 0xffffffff) 
                goto addr_402de6_39; else 
                goto addr_402d7a_43;
        }
    }
    addr_402de9_44:
    g405710 = eax40;
    g405708 = esi8;
    goto addr_402df4_37;
    addr_402d7a_43:
    v50 = eax49->fc;
    edi42(v50, 0, 0x8000, ecx43, 0x8000, 0x4000);
    eax51 = g405710;
    v52 = eax51->f10;
    v53 = g405948;
    HeapFree(v53, 0, v52, v50, 0, 0x8000, ecx43, 0x8000, 0x4000);
    eax54 = g405714;
    edx55 = g405718;
    eax56 = g405710;
    fun_403800(eax56, eax56 + 1, (eax54 + eax54 * 4 << 2) - reinterpret_cast<unsigned char>(eax56) + reinterpret_cast<unsigned char>(edx55) - 20, v53, 0, v52, v50, 0, 0x8000, ecx43, 0x8000, 0x4000);
    eax40 = a2;
    --g405714;
    below_or_equal57 = reinterpret_cast<unsigned char>(eax40) <= reinterpret_cast<unsigned char>(g405710);
    if (!below_or_equal57) {
        --eax40;
    }
    ecx58 = g405718;
    g40570c = ecx58;
    goto addr_402de9_44;
}

uint32_t g405270 = 0x3f8;

uint32_t fun_402df9(uint32_t a1);

void** fun_40266e(uint32_t ecx, uint32_t a2) {
    uint32_t esi3;
    int1_t below_or_equal4;
    uint32_t eax5;
    int32_t v6;

    esi3 = a2;
    below_or_equal4 = esi3 <= g405270;
    if (!below_or_equal4 || (eax5 = fun_402df9(esi3), ecx = esi3, !eax5)) {
        if (!esi3) {
            esi3 = 1;
        }
        v6 = g405948;
        HeapAlloc(ecx, v6, 0, esi3 + 15 & 0xfffffff0);
    }
    goto __return_address();
}

int32_t g405700 = 0;

int32_t fun_4037d6(uint32_t ecx) {
    int32_t eax2;
    int32_t eax3;

    eax2 = g405700;
    if (!eax2 || (eax3 = reinterpret_cast<int32_t>(eax2()), eax3 == 0)) {
        return 0;
    } else {
        return 1;
    }
}

uint32_t fun_4031b3(uint32_t ecx, struct s6* a2);

struct s15 {
    uint32_t f0;
    signed char[128] pad132;
    uint32_t f84;
};

struct s16 {
    void* f0;
    struct s16* f4;
    struct s16* f8;
};

struct s6* fun_403102();

uint32_t fun_402df9(uint32_t a1) {
    uint32_t eax2;
    struct s6* edx3;
    struct s6* edi4;
    struct s6* v5;
    void* ecx6;
    void* v7;
    uint32_t ecx8;
    uint32_t esi9;
    uint32_t v10;
    uint32_t v11;
    struct s6* eax12;
    struct s6* ebx13;
    struct s6* v14;
    int1_t zf15;
    int1_t zf16;
    uint32_t eax17;
    struct s7* eax18;
    uint32_t edx19;
    uint32_t v20;
    uint32_t edx21;
    uint32_t esi22;
    struct s15* ecx23;
    uint32_t edx24;
    uint32_t eax25;
    int1_t zf26;
    void* edi27;
    void** v28;
    uint32_t ecx29;
    uint32_t ecx30;
    struct s16* edx31;
    void* ecx32;
    void* esi33;
    uint32_t ecx34;
    signed char* edi35;
    uint32_t* ecx36;
    uint32_t ebx37;
    int1_t zf38;
    void* ecx39;
    signed char* edi40;
    uint32_t ebx41;
    struct s16* ecx42;
    signed char cl43;
    uint32_t ecx44;
    uint32_t* edi45;
    uint32_t ecx46;
    void* ecx47;
    void* ecx48;
    uint32_t* edx49;
    uint32_t ecx50;
    int1_t zf51;
    int1_t zf52;
    int1_t zf53;
    struct s6* eax54;

    eax2 = g405714;
    edx3 = g405718;
    edi4 = reinterpret_cast<struct s6*>(reinterpret_cast<unsigned char>(edx3) + (eax2 + eax2 * 4) * 4);
    v5 = edi4;
    ecx6 = reinterpret_cast<void*>(a1 + 23 & 0xfffffff0);
    v7 = ecx6;
    ecx8 = (reinterpret_cast<int32_t>(ecx6) >> 4) - 1;
    if (reinterpret_cast<int32_t>(ecx8) >= reinterpret_cast<int32_t>(32)) {
        ecx8 = ecx8 + 0xffffffe0;
        esi9 = 0;
        v10 = 0;
        v11 = 0xffffffff >> *reinterpret_cast<signed char*>(&ecx8);
    } else {
        esi9 = 0xffffffff >> *reinterpret_cast<signed char*>(&ecx8);
        v11 = 0xffffffff;
        v10 = esi9;
    }
    eax12 = g40570c;
    ebx13 = eax12;
    v14 = ebx13;
    if (reinterpret_cast<unsigned char>(ebx13) < reinterpret_cast<unsigned char>(edi4)) {
        do {
            ecx8 = ebx13->f4 & v11 | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s6**>(&ebx13->f0)) & esi9;
            if (ecx8) 
                break;
            ++ebx13;
            v14 = ebx13;
        } while (reinterpret_cast<unsigned char>(ebx13) < reinterpret_cast<unsigned char>(v5));
    }
    if (ebx13 != v5) 
        goto addr_402eee_8;
    ebx13 = edx3;
    while (zf15 = ebx13 == eax12, v14 = ebx13, reinterpret_cast<unsigned char>(ebx13) < reinterpret_cast<unsigned char>(eax12)) {
        ecx8 = ebx13->f4 & v11 | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s6**>(&ebx13->f0)) & esi9;
        if (ecx8) 
            goto addr_402e91_12;
        ++ebx13;
    }
    addr_402e93_14:
    if (!zf15) 
        goto addr_402eee_8;
    while (zf16 = ebx13 == v5, reinterpret_cast<unsigned char>(ebx13) < reinterpret_cast<unsigned char>(v5)) {
        if (ebx13->f8) 
            goto addr_402ea8_17;
        ++ebx13;
        v14 = ebx13;
    }
    addr_402eab_19:
    if (!zf16) {
        addr_402ed3_20:
        eax17 = fun_4031b3(ecx8, ebx13);
        ebx13->f10->f0 = eax17;
        if (ebx13->f10->f0 != 0xffffffff) {
            addr_402eee_8:
            g40570c = ebx13;
            eax18 = ebx13->f10;
            edx19 = eax18->f0;
            v20 = edx19;
            if (edx19 == 0xffffffff || !(*reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax18) + edx19 * 4 + 0xc4) & v11 | *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax18) + edx19 * 4 + 68) & esi9)) {
                edx21 = eax18->fc4 & v11;
                esi22 = eax18->f44 & v10;
                v20 = 0;
                ecx23 = reinterpret_cast<struct s15*>(&eax18->f44);
                esi9 = v10;
                if (!(edx21 | esi22)) {
                    do {
                        edx24 = ecx23->f84;
                        ++v20;
                        ecx23 = reinterpret_cast<struct s15*>(&ecx23->pad132);
                    } while (!(edx24 & v11 | esi9 & ecx23->f0));
                }
                edx19 = v20;
            }
        } else {
            addr_402ee7_24:
            eax25 = 0;
            goto addr_4030fd_25;
        }
    } else {
        ebx13 = edx3;
        while (zf26 = ebx13 == eax12, v14 = ebx13, reinterpret_cast<unsigned char>(ebx13) < reinterpret_cast<unsigned char>(eax12)) {
            if (ebx13->f8) 
                goto addr_402ec1_29;
            ++ebx13;
        }
        goto addr_402ec3_31;
    }
    edi27 = reinterpret_cast<void*>(0);
    v28 = reinterpret_cast<void**>(edx19 * 0x204 + reinterpret_cast<uint32_t>(eax18) + 0x144);
    ecx29 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax18) + edx19 * 4 + 68) & esi9;
    if (!ecx29) {
        ecx30 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax18) + edx19 * 4 + 0xc4);
        ecx29 = ecx30 & v11;
        edi27 = reinterpret_cast<void*>(32);
    }
    while (reinterpret_cast<int32_t>(ecx29) >= reinterpret_cast<int32_t>(0)) {
        ecx29 = ecx29 << 1;
        edi27 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi27) + 1);
    }
    edx31 = *reinterpret_cast<struct s16**>(v28 + reinterpret_cast<uint32_t>(edi27) * 2 + 1);
    ecx32 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx31->f0) - reinterpret_cast<uint32_t>(v7));
    esi33 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(ecx32) >> 4) - 1);
    if (reinterpret_cast<int32_t>(esi33) > reinterpret_cast<int32_t>(63)) {
        esi33 = reinterpret_cast<void*>(63);
    }
    if (esi33 == edi27) {
        addr_4030b0_39:
        if (ecx32) {
            edx31->f0 = ecx32;
            *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ecx32) + reinterpret_cast<uint32_t>(edx31) - 4) = ecx32;
        }
    } else {
        if (edx31->f4 == edx31->f8) {
            if (reinterpret_cast<int32_t>(edi27) >= reinterpret_cast<int32_t>(32)) {
                ecx34 = reinterpret_cast<uint32_t>(edi27) + 0xffffffe0;
                edi35 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax18) + reinterpret_cast<uint32_t>(edi27) + 4);
                ecx36 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax18) + v20 * 4 + 0xc4);
                ebx37 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx34));
                *ecx36 = *ecx36 & ebx37;
                *edi35 = reinterpret_cast<signed char>(*edi35 - 1);
                zf38 = *edi35 == 0;
                if (!zf38) {
                    addr_403009_44:
                    ebx13 = v14;
                } else {
                    ebx13 = v14;
                    ebx13->f4 = ebx13->f4 & ebx37;
                }
            } else {
                ecx39 = edi27;
                edi40 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax18) + reinterpret_cast<uint32_t>(edi27) + 4);
                ebx41 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx39));
                *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax18) + v20 * 4 + 68) = ebx41 & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax18) + v20 * 4 + 68);
                *edi40 = reinterpret_cast<signed char>(*edi40 - 1);
                if (*edi40) 
                    goto addr_403009_44;
                ebx13 = v14;
                *reinterpret_cast<struct s6**>(&ebx13->f0) = reinterpret_cast<struct s6*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s6**>(&ebx13->f0)) & ebx41);
            }
        }
        edx31->f8->f4 = edx31->f4;
        edx31->f4->f8 = edx31->f8;
        if (!ecx32) {
            ecx32 = ecx32;
        } else {
            ecx42 = reinterpret_cast<struct s16*>(v28 + reinterpret_cast<uint32_t>(esi33) * 2);
            edx31->f4 = *reinterpret_cast<struct s16**>(v28 + reinterpret_cast<uint32_t>(esi33) * 2 + 1);
            edx31->f8 = ecx42;
            ecx42->f4 = edx31;
            edx31->f4->f8 = edx31;
            if (edx31->f4 == edx31->f8) {
                cl43 = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi33) + reinterpret_cast<uint32_t>(eax18) + 4);
                if (reinterpret_cast<int32_t>(esi33) >= reinterpret_cast<int32_t>(32)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi33) + reinterpret_cast<uint32_t>(eax18) + 4) = reinterpret_cast<signed char>(cl43 + 1);
                    if (!cl43) {
                        ecx44 = reinterpret_cast<uint32_t>(esi33) + 0xffffffe0;
                        ebx13->f4 = ebx13->f4 | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx44);
                    }
                    edi45 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax18) + v20 * 4 + 0xc4);
                    ecx46 = reinterpret_cast<uint32_t>(esi33) + 0xffffffe0;
                    *edi45 = *edi45 | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx46);
                } else {
                    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi33) + reinterpret_cast<uint32_t>(eax18) + 4) = reinterpret_cast<signed char>(cl43 + 1);
                    if (!cl43) {
                        ecx47 = esi33;
                        *reinterpret_cast<struct s6**>(&ebx13->f0) = reinterpret_cast<struct s6*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s6**>(&ebx13->f0)) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx47));
                    }
                    ecx48 = esi33;
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax18) + v20 * 4 + 68) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax18) + v20 * 4 + 68) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx48);
                }
            }
            ecx32 = ecx32;
            goto addr_4030b0_39;
        }
    }
    edx49 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(edx31) + reinterpret_cast<uint32_t>(ecx32));
    ecx50 = reinterpret_cast<uint32_t>(v7) + 1;
    *edx49 = ecx50;
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(edx49) + reinterpret_cast<uint32_t>(v7) - 4) = ecx50;
    zf51 = *v28 == 0;
    *v28 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(*v28) + 1);
    if (zf51 && ((zf52 = ebx13 == g405710, zf52) && (zf53 = v20 == g405708, zf53))) {
        g405710 = reinterpret_cast<struct s6*>(0);
    }
    eax18->f0 = v20;
    eax25 = reinterpret_cast<uint32_t>(edx49 + 1);
    addr_4030fd_25:
    return eax25;
    addr_402ec3_31:
    if (!zf26) 
        goto addr_402ed3_20;
    eax54 = fun_403102();
    ebx13 = eax54;
    v14 = ebx13;
    if (!ebx13) 
        goto addr_402ee7_24; else 
        goto addr_402ed3_20;
    addr_402ec1_29:
    zf26 = ebx13 == eax12;
    goto addr_402ec3_31;
    addr_402ea8_17:
    zf16 = ebx13 == v5;
    goto addr_402eab_19;
    addr_402e91_12:
    zf15 = ebx13 == eax12;
    goto addr_402e93_14;
}

struct s17 {
    struct s6* f0;
    signed char f1;
    signed char f2;
    signed char f3;
};

struct s6* fun_403800(struct s6* a1, struct s6* a2, void* a3, int32_t a4, int32_t a5, struct s7* a6, void* a7, int32_t a8, int32_t a9, void* a10, int32_t a11, int32_t a12) {
    struct s6* esi13;
    struct s6* edi14;
    struct s6* eax15;
    uint32_t ecx16;
    uint32_t edx17;
    struct s17* esi18;
    struct s6* edi19;
    uint32_t ecx20;
    uint32_t edx21;

    esi13 = a2;
    edi14 = a1;
    eax15 = reinterpret_cast<struct s6*>(reinterpret_cast<uint32_t>(a3) + reinterpret_cast<unsigned char>(esi13));
    if (reinterpret_cast<unsigned char>(edi14) <= reinterpret_cast<unsigned char>(esi13) || reinterpret_cast<unsigned char>(edi14) >= reinterpret_cast<unsigned char>(eax15)) {
        if (reinterpret_cast<unsigned char>(edi14) & 3) {
            if (reinterpret_cast<uint32_t>(a3) < 4) {
                goto *reinterpret_cast<int32_t*>((reinterpret_cast<uint32_t>(a3) - 4) * 4 + 0x403958);
            } else {
                goto *reinterpret_cast<int32_t*>("8@" + (reinterpret_cast<unsigned char>(edi14) & 3) * 4);
            }
        }
        ecx16 = reinterpret_cast<uint32_t>(a3) >> 2;
        edx17 = reinterpret_cast<uint32_t>(a3) & 3;
        if (ecx16 >= 8) 
            goto addr_403833_7;
    } else {
        esi18 = reinterpret_cast<struct s17*>(reinterpret_cast<uint32_t>(a3) + reinterpret_cast<unsigned char>(esi13) - 4);
        edi19 = reinterpret_cast<struct s6*>(reinterpret_cast<uint32_t>(a3) + reinterpret_cast<unsigned char>(edi14) - 4);
        if (reinterpret_cast<unsigned char>(edi19) & 3) {
            eax15 = edi19;
            if (reinterpret_cast<uint32_t>(a3) >= 4) {
                goto *reinterpret_cast<int32_t*>(":@" + (reinterpret_cast<unsigned char>(eax15) & 3) * 4);
            }
            goto *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(a3) * 4 + 0x403ae0);
        } else {
            ecx20 = reinterpret_cast<uint32_t>(a3) >> 2;
            edx21 = reinterpret_cast<uint32_t>(a3) & 3;
            if (ecx20 < 8) {
                goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(-ecx20) * 4 + 0x403a90);
                goto *reinterpret_cast<int32_t*>(edx21 * 4 + 0x403ae0);
            } else {
                while (ecx20) {
                    --ecx20;
                    *reinterpret_cast<struct s6**>(&edi19->f0) = esi18->f0;
                    edi19 = reinterpret_cast<struct s6*>(reinterpret_cast<unsigned char>(edi19) - 4);
                    --esi18;
                }
                goto *reinterpret_cast<int32_t*>(edx21 * 4 + 0x403ae0);
            }
        }
    }
    switch (ecx16) {
        addr_40393f_20:
    case 0:
        switch (edx17) {
        case 0:
            return eax15;
        case 1:
            *reinterpret_cast<struct s6**>(&edi14->f0) = *reinterpret_cast<struct s6**>(&esi13->f0);
            return a1;
        case 2:
            *reinterpret_cast<struct s6**>(&edi14->f0) = *reinterpret_cast<struct s6**>(&esi13->f0);
            edi14->f1 = esi13->f1;
            return a1;
        case 3:
            *reinterpret_cast<struct s6**>(&edi14->f0) = *reinterpret_cast<struct s6**>(&esi13->f0);
            edi14->f1 = esi13->f1;
            edi14->f2 = esi13->f2;
            return a1;
        }
        addr_40392c_25:
    case 1:
        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edi14) + ecx16 * 4 - 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi13) + ecx16 * 4 - 4);
        eax15 = reinterpret_cast<struct s6*>(ecx16 * 4);
        esi13 = reinterpret_cast<struct s6*>(reinterpret_cast<unsigned char>(esi13) + reinterpret_cast<unsigned char>(eax15));
        edi14 = reinterpret_cast<struct s6*>(reinterpret_cast<unsigned char>(edi14) + reinterpret_cast<unsigned char>(eax15));
        goto addr_40393f_20;
        addr_403924_26:
    case 2:
        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edi14) + ecx16 * 4 - 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi13) + ecx16 * 4 - 8);
        goto addr_40392c_25;
        addr_40391c_27:
    case 3:
        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edi14) + ecx16 * 4 - 12) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi13) + ecx16 * 4 - 12);
        goto addr_403924_26;
        addr_403914_28:
    case 4:
        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edi14) + ecx16 * 4 - 16) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi13) + ecx16 * 4 - 16);
        goto addr_40391c_27;
        addr_40390c_29:
    case 5:
        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edi14) + ecx16 * 4 - 20) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi13) + ecx16 * 4 - 20);
        goto addr_403914_28;
        addr_403904_30:
    case 6:
        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edi14) + ecx16 * 4 - 24) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi13) + ecx16 * 4 - 24);
        goto addr_40390c_29;
    case 7:
        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edi14) + ecx16 * 4 - 28) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi13) + ecx16 * 4 - 28);
        goto addr_403904_30;
    }
    addr_403833_7:
    while (ecx16) {
        --ecx16;
        *reinterpret_cast<struct s6**>(&edi14->f0) = *reinterpret_cast<struct s6**>(&esi13->f0);
        edi14 = reinterpret_cast<struct s6*>(&edi14->f4);
        esi13 = reinterpret_cast<struct s6*>(&esi13->f4);
    }
    goto *reinterpret_cast<int32_t*>("X9@" + edx17 * 4);
    return eax15;
    edi19->f3 = esi18->f3;
    return a1;
    edi19->f3 = esi18->f3;
    edi19->f2 = esi18->f2;
    return a1;
    edi19->f3 = esi18->f3;
    edi19->f2 = esi18->f2;
    edi19->f1 = esi18->f1;
    return a1;
}

int32_t HeapReAlloc = 0x48c4;

struct s18 {
    struct s6* f0;
    signed char[3] pad4;
    struct s6* f4;
    signed char[3] pad8;
    uint32_t f8;
    struct s6* fc;
    signed char[3] pad16;
    struct s6* f10;
};

int32_t VirtualAlloc = 0x48b4;

struct s6* fun_403102() {
    uint32_t eax1;
    uint32_t ecx2;
    uint32_t v3;
    int32_t v4;
    struct s6* eax5;
    uint32_t tmp32_6;
    struct s6* ecx7;
    struct s18* esi8;
    struct s6* eax9;
    struct s6* eax10;
    struct s6* v11;
    int32_t v12;

    eax1 = g405714;
    ecx2 = g405704;
    if (eax1 == ecx2) {
        v3 = ecx2 + ecx2 * 4 + 80 << 2;
        v4 = g405948;
        eax5 = reinterpret_cast<struct s6*>(HeapReAlloc(v4));
        if (!eax5) 
            goto addr_403195_3;
        tmp32_6 = g405704 + 16;
        g405704 = tmp32_6;
        g405718 = eax5;
        eax1 = g405714;
    }
    ecx7 = g405718;
    v3 = 0x41c4;
    esi8 = reinterpret_cast<struct s18*>(reinterpret_cast<unsigned char>(ecx7) + (eax1 + eax1 * 4) * 4);
    eax9 = reinterpret_cast<struct s6*>(HeapAlloc());
    esi8->f10 = eax9;
    if (!eax9) {
        addr_403195_3:
    } else {
        eax10 = reinterpret_cast<struct s6*>(VirtualAlloc(0, 0x100000, 0x2000, 4));
        esi8->fc = eax10;
        if (eax10) {
            esi8->f8 = 0xffffffff;
            esi8->f0 = reinterpret_cast<struct s6*>(0);
            esi8->f4 = reinterpret_cast<struct s6*>(0);
            ++g405714;
            *reinterpret_cast<struct s6**>(&esi8->f10->f0) = reinterpret_cast<struct s6*>(0xffffffff);
        } else {
            v11 = esi8->f10;
            v12 = g405948;
            HeapFree(v12, 0, v11, 0, 0x100000, 0x2000, 4);
            goto addr_403195_3;
        }
    }
    goto v3;
}

struct s19 {
    signed char[4] pad4;
    struct s19* f4;
    struct s19* f8;
};

struct s20 {
    signed char[16] pad16;
    uint32_t f10;
};

struct s21 {
    uint32_t f0;
    uint32_t f4;
    signed char[4064] pad4072;
    int32_t ffe8;
    uint32_t ffec;
};

struct s23 {
    signed char[4] pad4;
    struct s22* f4;
    struct s22* f8;
};

struct s22 {
    signed char[4] pad4;
    struct s23* f4;
    struct s23* f8;
};

uint32_t fun_4031b3(uint32_t ecx, struct s6* a2) {
    struct s6* ecx3;
    struct s7* esi4;
    uint32_t eax5;
    uint32_t ebx6;
    int32_t edx7;
    struct s19* eax8;
    struct s19* v9;
    struct s20* edi10;
    uint32_t eax11;
    struct s20* edx12;
    struct s21* eax13;
    struct s22* ecx14;
    struct s23* eax15;
    struct s22* ecx16;
    int1_t zf17;
    uint32_t ecx18;
    uint32_t eax19;

    ecx3 = a2;
    esi4 = ecx3->f10;
    eax5 = ecx3->f8;
    ebx6 = 0;
    while (reinterpret_cast<int32_t>(eax5) >= reinterpret_cast<int32_t>(0)) {
        eax5 = eax5 << 1;
        ++ebx6;
    }
    edx7 = 63;
    eax8 = reinterpret_cast<struct s19*>(ebx6 * 0x204 + reinterpret_cast<uint32_t>(esi4) + 0x144);
    v9 = eax8;
    do {
        eax8->f8 = eax8;
        eax8->f4 = eax8;
        eax8 = reinterpret_cast<struct s19*>(&eax8->f8);
        --edx7;
    } while (edx7);
    edi10 = reinterpret_cast<struct s20*>((ebx6 << 15) + reinterpret_cast<uint32_t>(ecx3->fc));
    eax11 = reinterpret_cast<uint32_t>(VirtualAlloc());
    if (eax11) {
        edx12 = reinterpret_cast<struct s20*>(reinterpret_cast<uint32_t>(edi10) + 0x7000);
        if (reinterpret_cast<uint32_t>(edi10) <= reinterpret_cast<uint32_t>(edx12)) {
            eax13 = reinterpret_cast<struct s21*>(&edi10->f10);
            do {
                *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax13) - 8) = 0xffffffff;
                eax13->ffec = 0xffffffff;
                *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax13) - 4) = 0xff0;
                eax13->f0 = reinterpret_cast<uint32_t>(eax13) + 0xffc;
                eax13->f4 = reinterpret_cast<uint32_t>(eax13) - 0x1004;
                eax13->ffe8 = 0xff0;
                eax13 = reinterpret_cast<struct s21*>(reinterpret_cast<uint32_t>(eax13) + 0x1000);
            } while (reinterpret_cast<uint32_t>(eax13) - 16 <= reinterpret_cast<uint32_t>(edx12));
        }
        ecx14 = reinterpret_cast<struct s22*>(reinterpret_cast<uint32_t>(edi10) + 12);
        eax15 = reinterpret_cast<struct s23*>(v9 + 42);
        eax15->f4 = ecx14;
        ecx14->f8 = eax15;
        ecx16 = reinterpret_cast<struct s22*>(reinterpret_cast<uint32_t>(edx12) + 12);
        eax15->f8 = ecx16;
        ecx16->f4 = eax15;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(esi4) + ebx6 * 4 + 68) = 0;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(esi4) + ebx6 * 4 + 0xc4) = 1;
        zf17 = esi4->f43 == 0;
        esi4->f43 = reinterpret_cast<signed char>(esi4->f43 + 1);
        if (zf17) {
            a2->f4 = a2->f4 | 1;
        }
        ecx18 = ebx6;
        a2->f8 = a2->f8 & ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx18));
        eax19 = ebx6;
    } else {
        eax19 = 0xffffffff;
    }
    return eax19;
}

struct s4* g4056f4 = reinterpret_cast<struct s4*>(0);

int32_t LCMapStringW = 0x491a;

int32_t LCMapStringA = 0x490a;

struct s4* fun_403662(struct s4* a1, struct s4* a2);

struct s4* g4056ec = reinterpret_cast<struct s4*>(0);

int32_t MultiByteToWideChar = 0x48f4;

void fun_403b40(struct s4* ecx, struct s4* a2, struct s4* a3, struct s4* a4, struct s4* a5, struct s4* a6, int32_t a7, struct s4* a8, int32_t a9, struct s4* a10, struct s4* a11, struct s4* a12, struct s4* a13, struct s4* a14, struct s4* a15, struct s4* a16, struct s4* a17, struct s4* a18, int32_t a19, struct s4* a20);

struct s4* fun_40343e(struct s4* a1, struct s4* a2, struct s4* a3, struct s4* a4, struct s4* a5, struct s4* a6, struct s4* a7, struct s4* a8, struct s4* a9, struct s4* a10, struct s4* a11, struct s4* a12, struct s4* a13, struct s4* a14, struct s4* a15, struct s4* a16, struct s4* a17, struct s4* a18, struct s4* a19, struct s4* a20, struct s4* a21, struct s4* a22, struct s4* a23) {
    struct s4* eax24;
    struct s4* esp25;
    struct s4* esp26;
    struct s4* v27;
    int1_t zf28;
    int32_t eax29;
    int32_t eax30;
    struct s4* eax31;
    struct s4* ecx32;
    struct s4* eax33;
    struct s4* eax34;
    uint32_t eax35;
    struct s4* v36;
    struct s4* eax37;
    struct s4* edi38;
    int32_t esi39;
    struct s4* ebx40;
    struct s4* v41;
    struct s4* v42;
    struct s4* v43;
    struct s4* v44;
    struct s4* v45;
    struct s4* esp46;
    int32_t eax47;
    struct s4* eax48;
    struct s4* esi49;
    struct s4* eax50;
    struct s4* ebx51;
    int32_t eax52;
    struct s4* v53;
    struct s4* v54;
    struct s4* eax55;
    int32_t eax56;

    eax24 = g0;
    esp25 = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4);
    g0 = esp25;
    esp26 = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(esp25) - 28 - 4 - 4 - 4);
    v27 = esp26;
    zf28 = g4056f4 == 0;
    if (zf28) {
        eax29 = reinterpret_cast<int32_t>(LCMapStringW(0, 0x100, 0x40442c, 1, 0, 0));
        esp26 = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(esp26) - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4);
        if (!eax29) {
            eax30 = reinterpret_cast<int32_t>(LCMapStringA(0, 0x100, 0x404428, 1, 0, 0, 0, 0x100, 0x40442c, 1, 0, 0));
            esp26 = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(esp26) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
            if (!eax30) 
                goto addr_4035cc_4;
            g4056f4 = reinterpret_cast<struct s4*>(2);
        } else {
            g4056f4 = reinterpret_cast<struct s4*>(1);
        }
    }
    if (reinterpret_cast<signed char>(a4) > reinterpret_cast<signed char>(0)) {
        eax31 = fun_403662(a3, a4);
        ecx32 = a4;
        esp26 = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(esp26) - 4 - 4 - 4 + 4 + 4 + 4);
        a4 = eax31;
    }
    eax33 = g4056f4;
    if (!reinterpret_cast<int1_t>(eax33 == 2)) {
        if (!reinterpret_cast<int1_t>(eax33 == 1)) 
            goto addr_4035cc_4;
        if (!a7) {
            eax34 = g4056ec;
            a7 = eax34;
        }
        eax35 = -reinterpret_cast<unsigned char>(a8);
        v36 = reinterpret_cast<struct s4*>((eax35 - (eax35 + reinterpret_cast<uint1_t>(eax35 < eax35 + reinterpret_cast<uint1_t>(!!a8))) & 8) + 1);
        eax37 = reinterpret_cast<struct s4*>(MultiByteToWideChar(ecx32, a7, v36, a3, a4, 0, 0));
        if (!eax37) 
            goto addr_4035cc_4;
        fun_403b40(ecx32, a7, v36, a3, a4, 0, 0, edi38, esi39, ebx40, v41, v42, v43, v44, eax37, v27, v45, eax24, 0x401e84, 0x404430);
        esp46 = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(esp26) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
        if (!esp46) 
            goto addr_4035cc_4;
        eax47 = reinterpret_cast<int32_t>(MultiByteToWideChar(ecx32, a7, 1, a3, a4, esp46, eax37, a7, v36, a3, a4, 0, 0));
        if (!eax47) 
            goto addr_4035cc_4;
        eax48 = reinterpret_cast<struct s4*>(LCMapStringW(ecx32, a1, a2, esp46, eax37, 0, 0, a7, 1, a3, a4, esp46, eax37, a7, v36, a3, a4, 0, 0));
        esi49 = eax48;
        if (!esi49) 
            goto addr_4035cc_4;
        if (*reinterpret_cast<unsigned char*>(&a2 + 1) & 4) 
            goto addr_4035a0_19;
    } else {
        eax50 = reinterpret_cast<struct s4*>(LCMapStringA(ecx32, a1, a2, a3, a4, a5, a6));
        goto addr_4035ce_21;
    }
    fun_403b40(ecx32, a1, a2, esp46, eax37, 0, 0, a7, 1, a3, a4, esp46, eax37, a7, v36, a3, a4, 0, 0, edi38);
    ebx51 = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(esp46) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
    if (!ebx51) 
        goto addr_4035cc_4;
    eax52 = reinterpret_cast<int32_t>(LCMapStringW(ecx32, a1, a2, esp46, eax37, ebx51, esi49, a1, a2, esp46, eax37, 0, 0, a7, 1, a3, a4, esp46, eax37, a7, v36, a3, a4, 0, 0));
    if (!eax52) 
        goto addr_4035cc_4;
    if (a6) {
        v53 = a6;
        v54 = a5;
    } else {
        v53 = reinterpret_cast<struct s4*>(0);
        v54 = reinterpret_cast<struct s4*>(0);
    }
    eax55 = reinterpret_cast<struct s4*>(WideCharToMultiByte(ecx32, a7, 0x220, ebx51, esi49, v54, v53, 0, 0, a1, a2, esp46, eax37, ebx51, esi49, a1, a2, esp46, eax37, 0, 0, a7, 1, a3, a4, esp46, eax37, a7, v36, a3, a4, 0, 0));
    esi49 = eax55;
    if (!esi49) {
        addr_4035cc_4:
        eax50 = reinterpret_cast<struct s4*>(0);
    } else {
        addr_40365b_29:
        eax50 = esi49;
    }
    addr_4035ce_21:
    g0 = eax24;
    return eax50;
    addr_4035a0_19:
    if (!a6) 
        goto addr_40365b_29;
    if (reinterpret_cast<signed char>(esi49) > reinterpret_cast<signed char>(a6)) 
        goto addr_4035cc_4;
    eax56 = reinterpret_cast<int32_t>(LCMapStringW(ecx32, a1, a2, esp46, eax37, a5, a6, a1, a2, esp46, eax37, 0, 0, a7, 1, a3, a4, esp46, eax37, a7, v36, a3, a4, 0, 0));
    if (eax56) 
        goto addr_40365b_29; else 
        goto addr_4035cc_4;
}

struct s4* fun_403662(struct s4* a1, struct s4* a2) {
    struct s4* edx3;
    struct s4* eax4;
    uint32_t ecx5;
    uint32_t esi6;

    edx3 = a2;
    eax4 = a1;
    ecx5 = reinterpret_cast<unsigned char>(edx3) + 0xffffffff;
    if (edx3) {
        do {
            if (!*reinterpret_cast<struct s4**>(&eax4->f0)) 
                break;
            eax4 = reinterpret_cast<struct s4*>(&eax4->pad4);
            esi6 = ecx5;
            --ecx5;
        } while (esi6);
    }
    if (*reinterpret_cast<struct s4**>(&eax4->f0)) {
        return edx3;
    } else {
        return reinterpret_cast<unsigned char>(eax4) - reinterpret_cast<unsigned char>(a1);
    }
}

void fun_403b40(struct s4* ecx, struct s4* a2, struct s4* a3, struct s4* a4, struct s4* a5, struct s4* a6, int32_t a7, struct s4* a8, int32_t a9, struct s4* a10, struct s4* a11, struct s4* a12, struct s4* a13, struct s4* a14, struct s4* a15, struct s4* a16, struct s4* a17, struct s4* a18, int32_t a19, struct s4* a20) {
    int32_t v21;
    void* ecx22;
    uint32_t eax23;
    uint32_t eax24;
    int32_t* esp25;

    v21 = reinterpret_cast<int32_t>(__return_address());
    ecx22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 8);
    if (eax23 >= 0x1000) {
        do {
            ecx22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx22) - 0x1000);
            eax24 = eax24 - 0x1000;
        } while (eax24 >= 0x1000);
    }
    esp25 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx22) - eax24 - 4);
    *esp25 = v21;
    goto *esp25;
}

struct s4* fun_403b70(struct s4* a1, struct s4* a2, void* a3, struct s4* a4, struct s4* a5, struct s4* a6, struct s4* a7, struct s4* a8, int32_t a9) {
    void* edx10;
    struct s4* eax11;
    struct s4* edi12;
    uint32_t ecx13;
    struct s4** eax14;
    void* ecx15;
    uint32_t ecx16;

    edx10 = a3;
    if (!edx10) {
        return a1;
    }
    eax11 = reinterpret_cast<struct s4*>(0);
    eax11 = a2;
    edi12 = a1;
    if (reinterpret_cast<uint32_t>(edx10) < 4) {
        do {
            addr_403bb7_4:
            *reinterpret_cast<struct s4**>(&edi12->f0) = eax11;
            edi12 = reinterpret_cast<struct s4*>(&edi12->pad4);
            edx10 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx10) - 1);
        } while (edx10);
    } else {
        ecx13 = reinterpret_cast<uint32_t>(-reinterpret_cast<unsigned char>(a1)) & 3;
        if (ecx13) {
            edx10 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx10) - ecx13);
            do {
                *reinterpret_cast<struct s4**>(&edi12->f0) = eax11;
                edi12 = reinterpret_cast<struct s4*>(&edi12->pad4);
                --ecx13;
            } while (ecx13);
        }
        eax14 = reinterpret_cast<struct s4**>((reinterpret_cast<unsigned char>(eax11) << 8) + reinterpret_cast<unsigned char>(eax11));
        eax11 = reinterpret_cast<struct s4*>((reinterpret_cast<uint32_t>(eax14) << 16) + reinterpret_cast<uint32_t>(eax14));
        ecx15 = edx10;
        edx10 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx10) & 3);
        ecx16 = reinterpret_cast<uint32_t>(ecx15) >> 2;
        if (!ecx16) 
            goto addr_403bb7_4; else 
            goto addr_403bb1_9;
    }
    addr_403bbd_10:
    return a1;
    addr_403bb1_9:
    while (ecx16) {
        --ecx16;
        *reinterpret_cast<struct s4**>(&edi12->f0) = eax11;
        edi12 = reinterpret_cast<struct s4*>(&edi12->f4);
    }
    if (!edx10) 
        goto addr_403bbd_10; else 
        goto addr_403bb7_4;
}

struct s24 {
    void** f0;
    int32_t f4;
    uint32_t f8;
};

struct s24* fun_4016d2(void** a1);

int32_t UnhandledExceptionFilter = 0x475a;

struct s24* g4055b4 = reinterpret_cast<struct s24*>(0);

int32_t g4050b0 = 3;

int32_t g4050b4 = 7;

int32_t g4050bc = 0x8c;

uint32_t fun_401591(void** a1, struct s24* a2) {
    struct s24* eax3;
    uint32_t ebx4;
    uint32_t eax5;
    struct s24* ecx6;
    struct s24* v7;
    int32_t ecx8;
    int32_t edx9;
    int32_t edx10;
    int32_t edx11;
    uint32_t* esi12;
    int32_t esi13;

    eax3 = fun_4016d2(a1);
    if (!eax3 || (ebx4 = eax3->f8, ebx4 == 0)) {
        eax5 = reinterpret_cast<uint32_t>(UnhandledExceptionFilter(a1, a2));
    } else {
        if (ebx4 != 5) {
            if (ebx4 != 1) {
                ecx6 = g4055b4;
                v7 = ecx6;
                g4055b4 = a2;
                if (eax3->f4 != 8) {
                    eax3->f8 = 0;
                    ebx4();
                } else {
                    ecx8 = g4050b0;
                    edx9 = g4050b4;
                    edx10 = edx9 + ecx8;
                    if (ecx8 < edx10) {
                        edx11 = edx10 - ecx8;
                        esi12 = reinterpret_cast<uint32_t*>((ecx8 + ecx8 * 2) * 4 + 0x405040);
                        do {
                            *esi12 = 0;
                            esi12 = esi12 + 3;
                            --edx11;
                        } while (edx11);
                    }
                    esi13 = g4050bc;
                    if (!reinterpret_cast<int1_t>(eax3->f0 == 0xc000008e)) {
                        if (!reinterpret_cast<int1_t>(eax3->f0 == 0xc0000090)) {
                            if (!reinterpret_cast<int1_t>(eax3->f0 == 0xc0000091)) {
                                if (!reinterpret_cast<int1_t>(eax3->f0 == 0xc0000093)) {
                                    if (!reinterpret_cast<int1_t>(eax3->f0 == 0xc000008d)) {
                                        if (!reinterpret_cast<int1_t>(eax3->f0 == 0xc000008f)) {
                                            if (reinterpret_cast<int1_t>(eax3->f0 == 0xc0000092)) {
                                                g4050bc = 0x8a;
                                            }
                                        } else {
                                            g4050bc = 0x86;
                                        }
                                    } else {
                                        g4050bc = 0x82;
                                    }
                                } else {
                                    g4050bc = 0x85;
                                }
                            } else {
                                g4050bc = 0x84;
                            }
                        } else {
                            g4050bc = 0x81;
                        }
                    } else {
                        g4050bc = 0x83;
                    }
                    ebx4();
                    g4050bc = esi13;
                }
                g4055b4 = v7;
            }
            eax5 = 0xffffffff;
        } else {
            eax3->f8 = 0;
            eax5 = 1;
        }
    }
    return eax5;
}

int32_t g4055b0 = 0;

int32_t GetCurrentProcess = 0x4746;

int32_t TerminateProcess = 0x4732;

int32_t g4055ac = 0;

signed char g4055a8 = 0;

void** g405a70 = reinterpret_cast<void**>(0);

void** g405a6c = reinterpret_cast<void**>(0);

void fun_4014de(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v4;
    void** v5;
    void** edi6;
    int1_t zf7;
    int32_t eax8;
    void** v9;
    void** ebx10;
    int32_t ebx11;
    void** eax12;
    void** ecx13;
    void** esi14;
    void** eax15;
    int1_t cf16;

    v4 = reinterpret_cast<int32_t>(__return_address());
    v5 = edi6;
    zf7 = g4055b0 == 1;
    if (zf7) {
        eax8 = reinterpret_cast<int32_t>(GetCurrentProcess(v4));
        TerminateProcess(eax8, v4);
    }
    v9 = ebx10;
    ebx11 = a3;
    g4055ac = 1;
    g4055a8 = *reinterpret_cast<signed char*>(&ebx11);
    if (!a2) {
        eax12 = g405a70;
        if (eax12) {
            ecx13 = g405a6c;
            esi14 = ecx13 + 0xfffffffc;
            if (reinterpret_cast<unsigned char>(esi14) >= reinterpret_cast<unsigned char>(eax12)) {
                do {
                    eax15 = *reinterpret_cast<void***>(esi14);
                    if (eax15) {
                        eax15();
                    }
                    esi14 = esi14 - 4;
                    cf16 = reinterpret_cast<unsigned char>(esi14) < reinterpret_cast<unsigned char>(g405a70);
                } while (!cf16);
            }
        }
        fun_401577(ecx13, 0x405014, 0x405018, v9, v5);
    }
    fun_401577(0x405018, 0x40501c, 0x405020, v9, v5);
    if (!ebx11) {
        g4055b0 = 1;
        ExitProcess(0x405020, v4);
    }
    return;
}

void fun_4014cd() {
    fun_4014de(__return_address(), 1, 0);
    return;
}

int32_t g4050b8 = 10;

void** g405038 = reinterpret_cast<void**>(0xc0000005);

struct s24* fun_4016d2(void** a1) {
    void** edx2;
    int32_t ecx3;
    int1_t zf4;
    struct s24* eax5;
    struct s24* esi6;

    edx2 = a1;
    ecx3 = g4050b8;
    zf4 = g405038 == edx2;
    eax5 = reinterpret_cast<struct s24*>(0x405038);
    if (!zf4) {
        esi6 = reinterpret_cast<struct s24*>((ecx3 + ecx3 * 2) * 4 + 0x405038);
        do {
            ++eax5;
            if (reinterpret_cast<uint32_t>(eax5) >= reinterpret_cast<uint32_t>(esi6)) 
                break;
        } while (eax5->f0 != edx2);
    }
    if (reinterpret_cast<uint32_t>(eax5) >= reinterpret_cast<uint32_t>((ecx3 + ecx3 * 2) * 4 + 0x405038) || eax5->f0 != edx2) {
        eax5 = reinterpret_cast<struct s24*>(0);
    }
    return eax5;
}

uint32_t fun_4020f9(unsigned char a1, uint32_t a2, unsigned char a3) {
    uint32_t eax4;
    uint32_t eax5;

    eax4 = a1;
    if (!(*reinterpret_cast<unsigned char*>(eax4 + 0x405841) & a3)) {
        if (!a2) {
            eax5 = 0;
        } else {
            eax5 = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(" " + eax4 * 2)) & a2;
        }
        if (!eax5) {
            return eax5;
        }
    }
    return 1;
}

void** fun_402642(uint32_t a1, void** a2) {
    uint32_t v3;
    void** eax4;
    uint32_t ecx5;
    int32_t eax6;

    v3 = reinterpret_cast<uint32_t>(__return_address());
    if (a1 > 0xffffffe0) {
        addr_40266b_2:
        eax4 = reinterpret_cast<void**>(0);
    } else {
        do {
            eax4 = fun_40266e(ecx5, v3);
            if (eax4) 
                break;
            if (a2 == eax4) 
                break;
            eax6 = fun_4037d6(v3);
            ecx5 = v3;
        } while (eax6);
        goto addr_40266b_2;
    }
    return eax4;
}

struct s25 {
    void** f0;
    void** f1;
    signed char f2;
    signed char f3;
};

void** fun_402730(void** ecx, void** a2, void** a3, void** a4) {
    void** esi5;
    void** edi6;
    void** eax7;
    uint32_t ecx8;
    uint32_t edx9;
    struct s25* esi10;
    void** edi11;
    uint32_t ecx12;
    uint32_t edx13;

    esi5 = a3;
    edi6 = a2;
    eax7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a4) + reinterpret_cast<unsigned char>(esi5));
    if (reinterpret_cast<unsigned char>(edi6) <= reinterpret_cast<unsigned char>(esi5) || reinterpret_cast<unsigned char>(edi6) >= reinterpret_cast<unsigned char>(eax7)) {
        if (reinterpret_cast<unsigned char>(edi6) & 3) {
            if (reinterpret_cast<unsigned char>(a4) < reinterpret_cast<unsigned char>(4)) {
                goto *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(a4 - 4) * 4 + 0x402888);
            } else {
                goto *reinterpret_cast<int32_t*>("(@" + (reinterpret_cast<unsigned char>(edi6) & 3) * 4);
            }
        }
        ecx8 = reinterpret_cast<unsigned char>(a4) >> 2;
        edx9 = reinterpret_cast<unsigned char>(a4) & 3;
        if (ecx8 >= 8) 
            goto addr_402763_7;
    } else {
        esi10 = reinterpret_cast<struct s25*>(reinterpret_cast<unsigned char>(a4) + reinterpret_cast<unsigned char>(esi5) + 0xfffffffc);
        edi11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a4) + reinterpret_cast<unsigned char>(edi6) + 0xfffffffc);
        if (reinterpret_cast<unsigned char>(edi11) & 3) {
            eax7 = edi11;
            if (reinterpret_cast<unsigned char>(a4) >= reinterpret_cast<unsigned char>(4)) {
                goto *reinterpret_cast<int32_t*>("*@" + (reinterpret_cast<unsigned char>(eax7) & 3) * 4);
            }
            goto *reinterpret_cast<int32_t*>(" *@" + reinterpret_cast<unsigned char>(a4) * 4);
        } else {
            ecx12 = reinterpret_cast<unsigned char>(a4) >> 2;
            edx13 = reinterpret_cast<unsigned char>(a4) & 3;
            if (ecx12 < 8) {
                goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(-ecx12) * 4 + 0x4029c0);
                goto *reinterpret_cast<int32_t*>(" *@" + edx13 * 4);
            } else {
                while (ecx12) {
                    --ecx12;
                    *reinterpret_cast<void***>(edi11) = esi10->f0;
                    edi11 = edi11 + 0xfffffffc;
                    --esi10;
                }
                goto *reinterpret_cast<int32_t*>(" *@" + edx13 * 4);
            }
        }
    }
    switch (ecx8) {
        addr_40286f_20:
    case 0:
        switch (edx9) {
        case 0:
            return eax7;
        case 1:
            *reinterpret_cast<void***>(edi6) = *reinterpret_cast<void***>(esi5);
            return a2;
        case 2:
            *reinterpret_cast<void***>(edi6) = *reinterpret_cast<void***>(esi5);
            *reinterpret_cast<void***>(edi6 + 1) = *reinterpret_cast<void***>(esi5 + 1);
            return a2;
        case 3:
            *reinterpret_cast<void***>(edi6) = *reinterpret_cast<void***>(esi5);
            *reinterpret_cast<void***>(edi6 + 1) = *reinterpret_cast<void***>(esi5 + 1);
            *reinterpret_cast<signed char*>(edi6 + 2) = *reinterpret_cast<signed char*>(esi5 + 2);
            return a2;
        }
        addr_40285c_25:
    case 1:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi6 + ecx8 * 4) - 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi5 + ecx8 * 4) - 4);
        eax7 = reinterpret_cast<void**>(ecx8 * 4);
        esi5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi5) + reinterpret_cast<unsigned char>(eax7));
        edi6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi6) + reinterpret_cast<unsigned char>(eax7));
        goto addr_40286f_20;
        addr_402854_26:
    case 2:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi6 + ecx8 * 4) - 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi5 + ecx8 * 4) - 8);
        goto addr_40285c_25;
        addr_40284c_27:
    case 3:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi6 + ecx8 * 4) - 12) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi5 + ecx8 * 4) - 12);
        goto addr_402854_26;
        addr_402844_28:
    case 4:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi6 + ecx8 * 4) - 16) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi5 + ecx8 * 4) - 16);
        goto addr_40284c_27;
        addr_40283c_29:
    case 5:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi6 + ecx8 * 4) - 20) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi5 + ecx8 * 4) - 20);
        goto addr_402844_28;
    case 6:
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edi6 + ecx8 * 4) - 24) = eax7;
        goto addr_40283c_29;
    case 7:
    }
    addr_402763_7:
    while (ecx8) {
        --ecx8;
        *reinterpret_cast<void***>(edi6) = *reinterpret_cast<void***>(esi5);
        edi6 = edi6 + 4;
        esi5 = esi5 + 4;
    }
    goto *reinterpret_cast<int32_t*>(edx9 * 4 + 0x402878);
    return eax7;
    *reinterpret_cast<signed char*>(edi11 + 3) = esi10->f3;
    return a2;
    *reinterpret_cast<signed char*>(edi11 + 3) = esi10->f3;
    *reinterpret_cast<signed char*>(edi11 + 2) = esi10->f2;
    return a2;
    *reinterpret_cast<signed char*>(edi11 + 3) = esi10->f3;
    *reinterpret_cast<signed char*>(edi11 + 2) = esi10->f2;
    *reinterpret_cast<void***>(edi11 + 1) = esi10->f1;
    return a2;
}

int32_t RtlUnwind = 0x486e;

void fun_403bc8() {
    goto RtlUnwind;
}

struct s4* g4056f8 = reinterpret_cast<struct s4*>(0);

int32_t GetStringTypeW = 0x493c;

int32_t GetStringTypeA = 0x492a;

struct s4* g4056dc = reinterpret_cast<struct s4*>(0);

int32_t fun_40368d(struct s4* ecx, struct s4* a2, struct s4* a3, struct s4* a4, struct s4* a5, struct s4* a6, struct s4* a7, struct s4* a8) {
    void* esp9;
    struct s4* eax10;
    struct s4* esp11;
    struct s4* esp12;
    struct s4* v13;
    struct s4* eax14;
    void* v15;
    int32_t eax16;
    int32_t eax17;
    int32_t eax18;
    struct s4* eax19;
    uint32_t eax20;
    struct s4* v21;
    struct s4* eax22;
    struct s4* eax23;
    struct s4* edi24;
    int32_t esi25;
    struct s4* ebx26;
    struct s4* v27;
    struct s4* v28;
    struct s4* v29;
    struct s4* v30;
    struct s4* esi31;
    struct s4* eax32;

    esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax10 = g0;
    esp11 = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(esp9) - 4 - 4 - 4 - 4);
    g0 = esp11;
    esp12 = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(esp11) - 24 - 4 - 4 - 4);
    v13 = esp12;
    eax14 = g4056f8;
    if (!eax14) {
        v15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp9) - 28);
        eax16 = reinterpret_cast<int32_t>(GetStringTypeW(1, 0x40442c, 1, v15));
        esp12 = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(esp12) - 4 - 4 + 4 - 4 - 4 - 4 - 4 + 4);
        if (!eax16) {
            eax17 = reinterpret_cast<int32_t>(GetStringTypeA(0, 1, 0x404428, 1, reinterpret_cast<int32_t>(esp9) - 28, 1, 0x40442c, 1, v15));
            if (!eax17) 
                goto addr_4037c2_4;
            eax14 = reinterpret_cast<struct s4*>(2);
            esp12 = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(esp12) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
        } else {
            eax14 = reinterpret_cast<struct s4*>(1);
        }
        g4056f8 = eax14;
    }
    if (!reinterpret_cast<int1_t>(eax14 == 2)) {
        if (!reinterpret_cast<int1_t>(eax14 == 1)) {
            addr_4037c2_4:
            eax18 = 0;
        } else {
            if (!a6) {
                eax19 = g4056ec;
                a6 = eax19;
            }
            eax20 = -reinterpret_cast<unsigned char>(a8);
            v21 = reinterpret_cast<struct s4*>((eax20 - (eax20 + reinterpret_cast<uint1_t>(eax20 < eax20 + reinterpret_cast<uint1_t>(!!a8))) & 8) + 1);
            eax22 = reinterpret_cast<struct s4*>(MultiByteToWideChar(a6, v21, a3, a4, 0, 0));
            if (!eax22) 
                goto addr_4037c2_4; else 
                goto addr_40375f_13;
        }
    } else {
        eax23 = a7;
        if (!eax23) {
            eax23 = g4056dc;
        }
        eax18 = reinterpret_cast<int32_t>(GetStringTypeA(eax23, a2, a3, a4, a5));
    }
    addr_4037c4_17:
    g0 = eax10;
    return eax18;
    addr_40375f_13:
    fun_403b40(ecx, a6, v21, a3, a4, 0, 0, edi24, esi25, ebx26, v27, v28, eax22, v29, v13, v30, eax10, 0x401e84, 0x404448, 0);
    esi31 = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(esp12) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
    fun_403b70(esi31, 0, reinterpret_cast<unsigned char>(eax22) + reinterpret_cast<unsigned char>(eax22), a6, v21, a3, a4, 0, 0);
    if (!esi31) 
        goto addr_4037c2_4;
    eax32 = reinterpret_cast<struct s4*>(MultiByteToWideChar(a6, 1, a3, a4, esi31, eax22, a6, v21, a3, a4, 0, 0));
    if (!eax32) 
        goto addr_4037c2_4;
    eax18 = reinterpret_cast<int32_t>(GetStringTypeW(a2, esi31, eax32, a5, a6, 1, a3, a4, esi31, eax22, a6, v21, a3, a4, 0, 0));
    goto addr_4037c4_17;
}

int32_t GetACP = 0x4892;

int32_t GetOEMCP = 0x489c;

struct s4* fun_4022c3(struct s4* a1) {
    struct s4* eax2;

    eax2 = a1;
    g4056c4 = reinterpret_cast<struct s4*>(0);
    if (!reinterpret_cast<int1_t>(eax2 == 0xfffffffe)) {
        if (!reinterpret_cast<int1_t>(eax2 == 0xfffffffd)) {
            if (reinterpret_cast<int1_t>(eax2 == 0xfffffffc)) {
                eax2 = g4056ec;
                g4056c4 = reinterpret_cast<struct s4*>(1);
            }
            return eax2;
        } else {
            g4056c4 = reinterpret_cast<struct s4*>(1);
            goto GetACP;
        }
    } else {
        g4056c4 = reinterpret_cast<struct s4*>(1);
        goto GetOEMCP;
    }
}

void fun_402833() {
    __asm__("in al, 0x8b");
}

struct s26 {
    signed char[1] pad1;
    signed char f1;
};

struct s27 {
    signed char[1] pad1;
    signed char f1;
};

struct s28 {
    signed char[2] pad2;
    int32_t f2;
};

struct s29 {
    signed char[2] pad2;
    int32_t f2;
};

void fun_4027c9(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    signed char* edi4;
    signed char* esi5;
    uint32_t ecx6;
    struct s26* edi7;
    struct s27* esi8;
    int32_t* esi9;
    struct s28* esi10;
    int32_t* edi11;
    struct s29* edi12;

    edx2 = edx3 & ecx;
    *edi4 = *esi5;
    ecx6 = ecx >> 2;
    edi7->f1 = esi8->f1;
    esi9 = &esi10->f2;
    edi11 = &edi12->f2;
    if (ecx6 < 8) 
        goto 0x40278c;
    while (ecx6) {
        --ecx6;
        *edi11 = *esi9;
        ++edi11;
        ++esi9;
    }
    switch (edx2) {
    case 3:
        goto 0x4028b0;
    case 2:
        goto 0x40289c;
    case 1:
        goto 0x402890;
    case 0:
        goto 0x402888;
    }
}

struct s30 {
    signed char[1] pad1;
    int32_t f1;
};

struct s31 {
    signed char[1] pad1;
    int32_t f1;
};

void fun_4027f0(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    signed char* edi4;
    signed char* esi5;
    int32_t* esi6;
    struct s30* esi7;
    uint32_t ecx8;
    int32_t* edi9;
    struct s31* edi10;

    edx2 = edx3 & ecx;
    *edi4 = *esi5;
    esi6 = &esi7->f1;
    ecx8 = ecx >> 2;
    edi9 = &edi10->f1;
    if (ecx8 < 8) 
        goto 0x40278c;
    while (ecx8) {
        --ecx8;
        *edi9 = *esi6;
        ++edi9;
        ++esi6;
    }
    switch (edx2) {
    case 3:
        goto 0x4028b0;
    case 2:
        goto 0x40289c;
    case 1:
        goto 0x402890;
    case 0:
        goto 0x402888;
    }
}

void fun_402809(int32_t ecx) {
    int32_t ecx2;
    signed char* eax3;
    signed char* eax4;
    signed char al5;
    signed char* eax6;
    signed char* eax7;
    signed char al8;
    void** esp9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    int32_t eax19;
    int32_t eax20;
    int32_t ebp21;
    int32_t ebp22;
    signed char dh23;
    int32_t eax24;
    int32_t ebp25;
    int32_t ebp26;
    int32_t ebx27;
    int32_t ebx28;

    ecx2 = ecx;
    __asm__("outsd ");
    *eax3 = reinterpret_cast<signed char>(*eax4 - al5);
    *eax6 = reinterpret_cast<signed char>(*eax7 - al8);
    esp9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__return_address()) + 4 - 4);
    *reinterpret_cast<void***>(esp9) = esp9;
    *eax10 = reinterpret_cast<signed char>(*eax11 - al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 - al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 - al18);
    eax19 = eax20 + 1;
    *reinterpret_cast<signed char*>(eax19 + ebp21) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax19 + ebp22) + dh23);
    eax24 = eax19 + 1;
    *reinterpret_cast<signed char*>(eax24 + ebp25) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax24 + ebp26) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1));
    *reinterpret_cast<signed char*>(ebx27 - 0x761b71bc) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx28 - 0x761b71bc) + *reinterpret_cast<signed char*>(&ecx2));
}

struct s32 {
    signed char[1] pad1;
    signed char f1;
};

void fun_402876(int16_t cx) {
    signed char* eax2;
    signed char* eax3;
    struct s32* eax4;
    signed char dl5;
    int32_t ebx6;
    int32_t ebx7;

    *eax2 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&cx) + 1);
    eax3 = &eax4->f1;
    *(eax3 - 0x63ffbfd8) = reinterpret_cast<signed char>(*(eax3 - 0x63ffbfd8) + dl5);
    *eax3 = reinterpret_cast<signed char>(*eax3 - *reinterpret_cast<signed char*>(&eax3));
    *reinterpret_cast<signed char*>(ebx6 + 0x5f5e0845) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx7 + 0x5f5e0845) + *reinterpret_cast<signed char*>(&cx));
}

void fun_4028ee() {
}

struct s33 {
    signed char[3] pad3;
    signed char f3;
};

struct s34 {
    signed char[3] pad3;
    signed char f3;
};

struct s35 {
    signed char[2] pad2;
    signed char f2;
};

struct s36 {
    signed char[2] pad2;
    signed char f2;
};

void fun_402945(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    struct s33* edi4;
    struct s34* esi5;
    uint32_t ecx6;
    struct s35* edi7;
    struct s36* esi8;
    int32_t* esi9;
    void* esi10;
    int32_t* edi11;
    void* edi12;

    edx2 = edx3 & ecx;
    edi4->f3 = esi5->f3;
    ecx6 = ecx >> 2;
    edi7->f2 = esi8->f2;
    esi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi10) - 2);
    edi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi12) - 2);
    if (ecx6 < 8) 
        goto 0x4028f0;
    while (ecx6) {
        --ecx6;
        *edi11 = *esi9;
        --edi11;
        --esi9;
    }
    switch (edx2) {
    case 3:
        goto 0x402a4c;
    case 2:
        goto 0x402a38;
    case 1:
        goto 0x402a28;
    case 0:
        goto 0x402a20;
    }
}

struct s37 {
    signed char[3] pad3;
    signed char f3;
};

struct s38 {
    signed char[3] pad3;
    signed char f3;
};

struct s39 {
    signed char[2] pad2;
    signed char f2;
};

struct s40 {
    signed char[2] pad2;
    signed char f2;
};

struct s41 {
    signed char[1] pad1;
    signed char f1;
};

struct s42 {
    signed char[1] pad1;
    signed char f1;
};

void fun_402970(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    struct s37* edi4;
    struct s38* esi5;
    struct s39* edi6;
    struct s40* esi7;
    uint32_t ecx8;
    struct s41* edi9;
    struct s42* esi10;
    int32_t* esi11;
    void* esi12;
    int32_t* edi13;
    void* edi14;

    edx2 = edx3 & ecx;
    edi4->f3 = esi5->f3;
    edi6->f2 = esi7->f2;
    ecx8 = ecx >> 2;
    edi9->f1 = esi10->f1;
    esi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi12) - 3);
    edi13 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi14) - 3);
    if (ecx8 < 8) 
        goto 0x4028f0;
    while (ecx8) {
        --ecx8;
        *edi13 = *esi11;
        --edi13;
        --esi11;
    }
    switch (edx2) {
    case 3:
        goto 0x402a4c;
    case 2:
        goto 0x402a38;
    case 1:
        goto 0x402a28;
    case 0:
        goto 0x402a20;
    }
}

struct s43 {
    int32_t f0;
    int32_t f1;
};

struct s44 {
    signed char[1] pad1;
    int32_t f1;
};

struct s45 {
    int32_t f0;
    int32_t f1;
};

void fun_4029a1(int32_t ecx) {
    int32_t ecx2;
    struct s43* eax3;
    struct s44* eax4;
    struct s45* eax5;
    signed char bl6;
    int32_t* eax7;

    ecx2 = ecx;
    __asm__("les ebp, [ecx]");
    eax3 = reinterpret_cast<struct s43*>(&eax4->f1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax3) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax3) + 1) + *reinterpret_cast<signed char*>(&ecx2));
    eax3->f0 = eax3->f0 - reinterpret_cast<int32_t>(eax3);
    __asm__("aam 0x29");
    eax5 = reinterpret_cast<struct s45*>(reinterpret_cast<int32_t>(eax3) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax5) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax5) + 1) + bl6);
    eax5->f0 = eax5->f0 - reinterpret_cast<int32_t>(eax5);
    __asm__("in al, 0x29");
    eax7 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax5) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax7) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax7) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1));
    *eax7 = *eax7 - reinterpret_cast<int32_t>(eax7);
    __asm__("hlt ");
}

int32_t fun_40354e() {
    return 1;
}

int32_t fun_403786() {
    return 1;
}

struct s46 {
    signed char[3] pad3;
    int32_t f3;
};

struct s47 {
    signed char[3] pad3;
    int32_t f3;
};

void fun_403885(uint32_t ecx) {
    int32_t* esi2;
    struct s46* esi3;
    int32_t* edi4;
    struct s47* edi5;
    int32_t edx6;

    esi2 = &esi3->f3;
    edi4 = &edi5->f3;
    if (ecx < 8) 
        goto 0x40385c;
    while (ecx) {
        --ecx;
        *edi4 = *esi2;
        ++edi4;
        ++esi2;
    }
    switch (edx6) {
    case 3:
        goto 0x403980;
    case 2:
        goto 0x40396c;
    case 1:
        goto 0x403960;
    case 0:
        goto 0x403958;
    }
}

struct s48 {
    signed char[1] pad1;
    signed char f1;
};

struct s49 {
    signed char[1] pad1;
    signed char f1;
};

struct s50 {
    signed char[2] pad2;
    int32_t f2;
};

struct s51 {
    signed char[2] pad2;
    int32_t f2;
};

void fun_403899(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    signed char* edi4;
    signed char* esi5;
    uint32_t ecx6;
    struct s48* edi7;
    struct s49* esi8;
    int32_t* esi9;
    struct s50* esi10;
    int32_t* edi11;
    struct s51* edi12;

    edx2 = edx3 & ecx;
    *edi4 = *esi5;
    ecx6 = ecx >> 2;
    edi7->f1 = esi8->f1;
    esi9 = &esi10->f2;
    edi11 = &edi12->f2;
    if (ecx6 < 8) 
        goto 0x40385c;
    while (ecx6) {
        --ecx6;
        *edi11 = *esi9;
        ++edi11;
        ++esi9;
    }
    switch (edx2) {
    case 3:
        goto 0x403980;
    case 2:
        goto 0x40396c;
    case 1:
        goto 0x403960;
    case 0:
        goto 0x403958;
    }
}

struct s52 {
    signed char[1] pad1;
    int32_t f1;
};

struct s53 {
    signed char[1] pad1;
    int32_t f1;
};

void fun_4038c0(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    signed char* edi4;
    signed char* esi5;
    int32_t* esi6;
    struct s52* esi7;
    uint32_t ecx8;
    int32_t* edi9;
    struct s53* edi10;

    edx2 = edx3 & ecx;
    *edi4 = *esi5;
    esi6 = &esi7->f1;
    ecx8 = ecx >> 2;
    edi9 = &edi10->f1;
    if (ecx8 < 8) 
        goto 0x40385c;
    while (ecx8) {
        --ecx8;
        *edi9 = *esi6;
        ++edi9;
        ++esi6;
    }
    switch (edx2) {
    case 3:
        goto 0x403980;
    case 2:
        goto 0x40396c;
    case 1:
        goto 0x403960;
    case 0:
        goto 0x403958;
    }
}

void fun_4038d9(int32_t ecx) {
    int32_t ecx2;
    int32_t eax3;
    signed char al4;
    int32_t eax5;
    int32_t edi6;
    int32_t edi7;
    int32_t edi8;
    int32_t edi9;
    signed char bl10;
    int32_t edi11;
    int32_t edi12;
    signed char dl13;
    int32_t edi14;
    int32_t edi15;
    int32_t eax16;
    int32_t edi17;
    int32_t edi18;

    ecx2 = ecx;
    __asm__("aas ");
    *reinterpret_cast<signed char*>(&eax3) = reinterpret_cast<signed char>(al4 - 57);
    eax5 = eax3 + 1;
    *reinterpret_cast<signed char*>(ecx2 + edi6) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ecx2 + edi7) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax5) + 1));
    *reinterpret_cast<signed char*>(ecx2 + edi8) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ecx2 + edi9) + bl10);
    *reinterpret_cast<signed char*>(ecx2 + edi11) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ecx2 + edi12) + dl13);
    *reinterpret_cast<signed char*>(ecx2 + edi14) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ecx2 + edi15) + *reinterpret_cast<signed char*>(&ecx2));
    eax16 = eax5 + 1 + 1 + 1 + 1;
    *reinterpret_cast<signed char*>(ecx2 + edi17) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ecx2 + edi18) + *reinterpret_cast<signed char*>(&eax16));
}

void fun_4039be() {
}

struct s54 {
    signed char[3] pad3;
    signed char f3;
};

struct s55 {
    signed char[3] pad3;
    signed char f3;
};

struct s56 {
    signed char[2] pad2;
    signed char f2;
};

struct s57 {
    signed char[2] pad2;
    signed char f2;
};

void fun_403a15(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    struct s54* edi4;
    struct s55* esi5;
    uint32_t ecx6;
    struct s56* edi7;
    struct s57* esi8;
    int32_t* esi9;
    void* esi10;
    int32_t* edi11;
    void* edi12;

    edx2 = edx3 & ecx;
    edi4->f3 = esi5->f3;
    ecx6 = ecx >> 2;
    edi7->f2 = esi8->f2;
    esi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi10) - 2);
    edi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi12) - 2);
    if (ecx6 < 8) 
        goto 0x4039c0;
    while (ecx6) {
        --ecx6;
        *edi11 = *esi9;
        --edi11;
        --esi9;
    }
    switch (edx2) {
    case 3:
        goto 0x403b1c;
    case 2:
        goto 0x403b08;
    case 1:
        goto 0x403af8;
    case 0:
        goto 0x403af0;
    }
}

struct s58 {
    signed char[3] pad3;
    signed char f3;
};

struct s59 {
    signed char[3] pad3;
    signed char f3;
};

struct s60 {
    signed char[2] pad2;
    signed char f2;
};

struct s61 {
    signed char[2] pad2;
    signed char f2;
};

struct s62 {
    signed char[1] pad1;
    signed char f1;
};

struct s63 {
    signed char[1] pad1;
    signed char f1;
};

void fun_403a40(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    struct s58* edi4;
    struct s59* esi5;
    struct s60* edi6;
    struct s61* esi7;
    uint32_t ecx8;
    struct s62* edi9;
    struct s63* esi10;
    int32_t* esi11;
    void* esi12;
    int32_t* edi13;
    void* edi14;

    edx2 = edx3 & ecx;
    edi4->f3 = esi5->f3;
    edi6->f2 = esi7->f2;
    ecx8 = ecx >> 2;
    edi9->f1 = esi10->f1;
    esi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi12) - 3);
    edi13 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi14) - 3);
    if (ecx8 < 8) 
        goto 0x4039c0;
    while (ecx8) {
        --ecx8;
        *edi13 = *esi11;
        --edi13;
        --esi11;
    }
    switch (edx2) {
    case 3:
        goto 0x403b1c;
    case 2:
        goto 0x403b08;
    case 1:
        goto 0x403af8;
    case 0:
        goto 0x403af0;
    }
}

void fun_403a71(int32_t ecx) {
    int32_t v2;
    uint32_t eflags3;
    void** eax4;
    void* eax5;
    signed char* edi6;
    signed char* esi7;
    void* edi8;
    void* edi9;
    void* esi10;
    void* esi11;
    void* edx12;
    void* edx13;
    signed char bh14;

    v2 = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags3) + 1) = 0;
    eax4 = reinterpret_cast<void**>(__zero_stack_offset());
    *reinterpret_cast<int1_t*>(&eflags3) = reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax4)) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&v2));
    *reinterpret_cast<int1_t*>(&eflags3) = __intrinsic();
    *reinterpret_cast<int1_t*>(&eflags3) = *reinterpret_cast<void**>(&eax4) == *reinterpret_cast<void**>(&v2);
    *reinterpret_cast<int1_t*>(&eflags3) = reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax4)) < reinterpret_cast<signed char>(*reinterpret_cast<void**>(&v2));
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags3) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&eflags3) = __intrinsic();
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(eax5) - 4) = eflags3 & 0xfcffff;
    *edi6 = *esi7;
    edi8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edi9) + 1);
    esi10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi11) + 1);
    __asm__("lodsb ");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edx12) + reinterpret_cast<int32_t>(edi8) + 0x3ac40040) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edx13) + reinterpret_cast<int32_t>(edi8) + 0x3ac40040) + bh14);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi8) + ecx * 4 + 28) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi10) + ecx * 4 + 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi8) + ecx * 4 + 24) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi10) + ecx * 4 + 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi8) + ecx * 4 + 20) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi10) + ecx * 4 + 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi8) + ecx * 4 + 16) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi10) + ecx * 4 + 16);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi8) + ecx * 4 + 12) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi10) + ecx * 4 + 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi8) + ecx * 4 + 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi10) + ecx * 4 + 8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi8) + ecx * 4 + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi10) + ecx * 4 + 4);
}

void fun_403ade(signed char cl) {
    unsigned char* ebx2;
    unsigned char* ebx3;
    unsigned char bh4;
    int32_t ebx5;
    int32_t edi6;
    int32_t ebx7;
    signed char bl8;
    int32_t ebx9;
    int32_t ebx10;

    *ebx2 = reinterpret_cast<unsigned char>(*ebx3 | bh4);
    *reinterpret_cast<signed char*>(ebx5 + edi6) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx7 + edi6) + bl8);
    *reinterpret_cast<signed char*>(ebx9 + 0x5f5e0845) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx10 + 0x5f5e0845) + cl);
}

int32_t PostQuitMessage = 0x464a;

int32_t BeginPaint = 0x4684;

int32_t GetClientRect = 0x4674;

int32_t DrawTextA = 0x4668;

int32_t EndPaint = 0x465c;

int32_t DialogBoxParamA = 0x4692;

int32_t fun_401310(int32_t a1, int32_t a2, uint32_t a3);

int32_t DestroyWindow = 0x46a4;

int32_t DefWindowProcA = 0x46b4;

void fun_4011b0() {
    int32_t ecx1;
    void* esp2;
    void* v3;
    int32_t eax4;
    int32_t v5;
    int32_t v6;
    int32_t eax7;
    int32_t* esp8;
    void* v9;
    int32_t v10;
    int32_t edi11;
    int32_t esi12;
    int32_t ebx13;
    uint32_t ecx14;
    signed char v15;
    int32_t v16;
    uint32_t eax17;
    uint32_t v18;
    int32_t eax19;
    int32_t v20;
    int32_t v21;
    int32_t v22;
    int32_t v23;
    int32_t v24;
    int32_t v25;
    int32_t v26;
    int32_t v27;
    int32_t v28;

    ecx1 = g405558;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0xb4);
    v3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) + 80);
    LoadStringA(ecx1, 0x6a, v3, 100);
    eax4 = v5 - 2;
    if (!eax4) {
        PostQuitMessage(0, ecx1, 0x6a, v3, 100);
        goto v6;
    } else {
        eax7 = eax4 - 13;
        if (!eax7) {
            esp8 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4);
            v9 = reinterpret_cast<void*>(esp8 + 6);
            BeginPaint(v10, v9, edi11, esi12, ebx13, ecx1, 0x6a, v3, 100);
            GetClientRect(v10, esp8 - 1 - 1 - 1 - 1 + 1 + 3, v10, v9, edi11, esi12, ebx13, ecx1, 0x6a, v3, 100);
            ecx14 = 0xffffffff;
            do {
                if (!ecx14) 
                    break;
                --ecx14;
            } while (v15);
            DrawTextA();
            EndPaint();
            goto v16;
        } else {
            if (!(eax7 - 0x102)) {
                eax17 = (v18 & 0xffff) - 0x68;
                if (!eax17) {
                    eax19 = g405558;
                    DialogBoxParamA(eax19, 0x67, v20, fun_401310, 0, ecx1, 0x6a, v3, 100);
                    goto v21;
                } else {
                    if (!(eax17 - 1)) {
                        DestroyWindow(v22, ecx1, 0x6a, v3, 100);
                        goto v23;
                    } else {
                        DefWindowProcA(v24, 0x111, v18, __return_address(), ecx1, 0x6a, v3, 100);
                        goto v25;
                    }
                }
            } else {
                DefWindowProcA(v26, v5, v27, __return_address(), ecx1, 0x6a, v3, 100);
                goto v28;
            }
        }
    }
}

int32_t EndDialog = 0x46c6;

int32_t fun_401310(int32_t a1, int32_t a2, uint32_t a3) {
    int32_t eax4;
    uint32_t eax5;

    eax4 = a2 - 0x110;
    if (eax4) {
        if (eax4 - 1 || (eax5 = a3, *reinterpret_cast<int16_t*>(&eax5) != 1) && *reinterpret_cast<int16_t*>(&eax5) != 2) {
            return 0;
        } else {
            EndDialog(a1, eax5 & 0xffff);
        }
    }
    return 1;
}

int32_t GetVersion = 0x4716;

int32_t g405580 = 0;

uint32_t g40557c = 0;

uint32_t g405578 = 0;

uint32_t g405574 = 0;

int32_t GetCommandLineA = 0x4704;

int32_t GetModuleHandleA = 0x46de;

void fun_401350() {
    void* esp1;
    void** edi2;
    void** esi3;
    void** ebx4;
    uint32_t eax5;
    int32_t edx6;
    uint32_t ecx7;
    int32_t eax8;
    void** ecx9;
    void** eax10;
    void** v11;
    void** eax12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** eax18;
    uint32_t eax19;
    uint16_t v20;
    int32_t eax21;
    int32_t eax22;
    void** ecx23;
    struct s24* v24;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    g0 = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(esp1) - 4 - 4 - 4 - 4);
    eax5 = reinterpret_cast<uint32_t>(GetVersion(edi2, esi3, ebx4));
    edx6 = 0;
    *reinterpret_cast<signed char*>(&edx6) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax5) + 1);
    g405580 = edx6;
    ecx7 = eax5 & 0xff;
    g40557c = ecx7;
    g405578 = (ecx7 << 8) + edx6;
    g405574 = eax5 >> 16;
    eax8 = fun_401d50(0, edi2, esi3, ebx4);
    ecx9 = reinterpret_cast<void**>(0);
    if (!eax8) {
        fun_40146b(0);
        ecx9 = reinterpret_cast<void**>(28);
    }
    fun_401ba5(ecx9, edi2, esi3, ebx4);
    eax10 = reinterpret_cast<void**>(GetCommandLineA(ecx9, edi2, esi3, ebx4));
    g405a78 = eax10;
    eax12 = fun_401a73(ecx9, edi2, esi3, ebx4, v11);
    g40555c = eax12;
    fun_401826(ecx9, edi2, esi3, ebx4);
    fun_40176d(ecx9, edi2, esi3, ebx4, v13, v14, v15, v16);
    fun_40148f(ecx9, edi2, esi3, ebx4);
    v17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp1) + 0xffffffa4);
    GetStartupInfoA(ecx9, v17, edi2, esi3, ebx4);
    eax18 = fun_401715(ecx9, v17, edi2, esi3, ebx4);
    if (1) {
        eax19 = 10;
    } else {
        eax19 = v20;
    }
    eax21 = reinterpret_cast<int32_t>(GetModuleHandleA(ecx9, 0, 0, eax18, eax19, v17, edi2, esi3, ebx4));
    eax22 = fun_401000(ecx9, eax21, 0, 0, eax18, eax19, v17, edi2, esi3, ebx4);
    fun_4014bc(ecx9);
    ecx23 = *reinterpret_cast<void***>(v24->f0);
    fun_401591(ecx23, v24);
    goto eax22;
}

void fun_40143b() {
    int32_t* esp1;
    int32_t ebp2;
    int32_t ebp3;

    esp1 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp2 - 24)) - 4);
    *esp1 = *reinterpret_cast<int32_t*>(ebp3 - 0x68);
    *(esp1 - 1) = reinterpret_cast<int32_t>(fun_401446);
    fun_4014cd();
}

struct s64 {
    signed char[4] pad4;
    uint32_t f4;
};

int32_t fun_401dac(struct s64* a1, int32_t a2);

int32_t fun_401e36() {
    int32_t eax1;
    struct s4* ecx2;

    eax1 = 0;
    ecx2 = g0;
    if (reinterpret_cast<int1_t>(ecx2->f4 == fun_401dac) && ecx2->f8 == ecx2->fc->fc) {
        eax1 = 1;
    }
    return eax1;
}

struct s65 {
    signed char[4] pad4;
    uint32_t f4;
};

struct s66 {
    signed char[12] pad12;
    struct s8* fc;
};

int32_t fun_401e7c(struct s65* a1, struct s8* a2, int32_t a3) {
    unsigned char* esi4;
    unsigned char dh5;
    unsigned char* eax6;
    struct s66* ebp7;
    struct s8* ebx8;
    int32_t eax9;
    int32_t esi10;
    int32_t* edi11;
    int32_t ecx12;
    int32_t eax13;
    int32_t* edi14;
    int32_t ecx15;

    *esi4 = reinterpret_cast<unsigned char>(*esi4 ^ reinterpret_cast<unsigned char>(dh5 ^ *eax6));
    ebp7 = reinterpret_cast<struct s66*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4);
    ebx8 = a2;
    if (a1->f4 & 6) {
        fun_401dce(ebx8, 0xff);
        eax9 = 1;
    } else {
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebx8) - 4) = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp7) - 8);
        esi10 = ebx8->fc;
        edi11 = ebx8->f8;
        while (esi10 != -1) {
            ecx12 = esi10 + esi10 * 2;
            if ((edi11 + ecx12)[1] && (eax13 = reinterpret_cast<int32_t>((edi11 + ecx12)[1]()), ebp7 = ebp7, esi10 = esi10, ebx8 = ebp7->fc, !!eax13)) {
                if (__intrinsic()) 
                    goto addr_401f16_7;
                edi14 = ebx8->f8;
                fun_401d8c(ebx8);
                ebp7 = reinterpret_cast<struct s66*>(ebx8 + 1);
                fun_401dce(ebx8, esi10);
                ecx15 = esi10 + esi10 * 2;
                fun_401e62(ecx15, 1);
                ebx8->fc = edi14[ecx15];
                (edi14 + ecx15)[2]();
            }
            edi11 = ebx8->f8;
            esi10 = edi11[esi10 + esi10 * 2];
        }
        goto addr_401f1d_10;
    }
    addr_401f39_11:
    return eax9;
    addr_401f1d_10:
    eax9 = 1;
    goto addr_401f39_11;
    addr_401f16_7:
    eax9 = 0;
    goto addr_401f39_11;
}

void fun_401e59(int32_t ecx) {
    goto 0x401e6c;
}

int32_t fun_401dac(struct s64* a1, int32_t a2) {
    int32_t eax3;
    int32_t* v4;

    eax3 = 1;
    if (a1->f4 & 6) {
        *v4 = a2;
        eax3 = 3;
    }
    return eax3;
}

void fun_402547() {
}

signed char gcc004027;

void fun_402794(int32_t ecx) {
    int32_t eax2;
    int32_t eax3;
    signed char dh4;
    int32_t eax5;
    signed char* ebx6;
    signed char* ebx7;

    *reinterpret_cast<signed char*>(&eax2) = gcc004027;
    __asm__("daa ");
    eax3 = eax2 + 1;
    *reinterpret_cast<signed char*>(&eax3) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax3) + dh4);
    __asm__("daa ");
    eax5 = eax3 + 1;
    *ebx6 = reinterpret_cast<signed char>(*ebx7 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax5) + 1));
    __asm__("ror dword [edx+0x8a078806], 1");
    *reinterpret_cast<int32_t*>(eax5 + 0x468a0147) = *reinterpret_cast<int32_t*>(eax5 + 0x468a0147) + ecx;
}

void fun_4028ad(int32_t ecx) {
}

void fun_4028f9(int32_t ecx) {
}

void fun_402a35(int32_t ecx) {
}

struct s67 {
    signed char[41] pad41;
    signed char f29;
};

struct s68 {
    signed char[41] pad41;
    signed char f29;
};

struct s69 {
    signed char[3] pad3;
    signed char f3;
};

void fun_40291c(signed char* ecx) {
    struct s67* eax2;
    void* eax3;
    struct s68* eax4;
    signed char dh5;
    int32_t eax6;
    int32_t edx7;
    int32_t edx8;
    struct s69* edi9;
    int32_t* esi10;
    void* esi11;
    uint32_t ecx12;
    int32_t* edi13;
    void* edi14;
    int32_t edx15;

    *ecx = reinterpret_cast<signed char>(*ecx - *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
    eax2 = reinterpret_cast<struct s67*>(reinterpret_cast<int32_t>(eax3) + 1);
    eax2->f29 = reinterpret_cast<signed char>(eax2->f29 + *reinterpret_cast<signed char*>(&ecx));
    eax4 = reinterpret_cast<struct s68*>(reinterpret_cast<int32_t>(eax2) + 1);
    eax4->f29 = reinterpret_cast<signed char>(eax4->f29 + dh5);
    eax6 = reinterpret_cast<int32_t>(eax4) + 1;
    *reinterpret_cast<signed char*>(edx7 - 0x2edcfcba) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx8 - 0x2edcfcba) + *reinterpret_cast<signed char*>(&ecx));
    edi9->f3 = *reinterpret_cast<signed char*>(&eax6);
    esi10 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi11) - 1);
    ecx12 = reinterpret_cast<uint32_t>(ecx) >> 2;
    edi13 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi14) - 1);
    if (ecx12 < 8) 
        goto 0x4028f0;
    while (ecx12) {
        --ecx12;
        *edi13 = *esi10;
        --edi13;
        --esi10;
    }
    switch (edx15) {
    case 3:
        goto 0x402a4c;
    case 2:
        goto 0x402a38;
    case 1:
        goto 0x402a28;
    case 0:
        goto 0x402a20;
    }
}

void fun_4029bd(int32_t ecx) {
    int32_t* eax2;
    int32_t* eax3;
    int32_t eax4;
    void* edi5;
    void* esi6;
    void* edi7;
    void* esi8;
    void* edi9;
    void* esi10;
    void* edi11;
    void* esi12;
    void* edi13;
    void* esi14;
    void* edi15;
    void* esi16;
    void* edi17;
    void* esi18;

    *eax2 = *eax3 - eax4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi5) + ecx * 4 + 28) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi6) + ecx * 4 + 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi7) + ecx * 4 + 24) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi8) + ecx * 4 + 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi9) + ecx * 4 + 20) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi10) + ecx * 4 + 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi11) + ecx * 4 + 16) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi12) + ecx * 4 + 16);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi13) + ecx * 4 + 12) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi14) + ecx * 4 + 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi15) + ecx * 4 + 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi16) + ecx * 4 + 8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi17) + ecx * 4 + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi18) + ecx * 4 + 4);
}

void fun_403552() {
    int32_t ebp1;
    int32_t ebp2;

    *reinterpret_cast<int32_t*>(ebp1 - 36) = 0;
    *reinterpret_cast<uint32_t*>(ebp2 - 4) = 0xffffffff;
}

int32_t fun_403602() {
    return 1;
}

void fun_40378a() {
}

void fun_403864(int32_t ecx) {
    int1_t of2;
    int32_t eax3;
    int32_t eax4;
    int32_t edi5;
    int32_t edi6;
    signed char bl7;
    int32_t eax8;
    signed char* ebx9;
    signed char* ebx10;

    if (of2) 
        goto 0x40389e;
    eax3 = eax4 + 1;
    *reinterpret_cast<signed char*>(eax3 + edi5 + 0x38c00040) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax3 + edi6 + 0x38c00040) + bl7);
    eax8 = eax3 + 1;
    *ebx9 = reinterpret_cast<signed char>(*ebx10 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax8) + 1));
    __asm__("ror dword [edx+0x8a078806], 1");
    *reinterpret_cast<int32_t*>(eax8 + 0x468a0147) = *reinterpret_cast<int32_t*>(eax8 + 0x468a0147) + ecx;
}

void fun_40397d(int32_t ecx) {
}

void fun_4039c9(int32_t ecx) {
}

void fun_403b05(int32_t ecx) {
}

struct s70 {
    signed char[58] pad58;
    signed char f3a;
};

struct s71 {
    signed char[3] pad3;
    signed char f3;
};

void fun_4039ec(uint32_t ecx) {
    unsigned char* edx2;
    signed char* edx3;
    signed char bh4;
    unsigned char* edx5;
    signed char bh6;
    uint32_t* eax7;
    uint32_t eax8;
    struct s70* eax9;
    void* eax10;
    int32_t eax11;
    int32_t edx12;
    int32_t edx13;
    struct s71* edi14;
    int32_t* esi15;
    void* esi16;
    uint32_t ecx17;
    int32_t* edi18;
    void* edi19;
    int32_t edx20;

    *edx2 = reinterpret_cast<unsigned char>(*edx3 - reinterpret_cast<unsigned char>(bh4 + reinterpret_cast<uint1_t>(*edx5 < reinterpret_cast<unsigned char>(bh6 + reinterpret_cast<uint1_t>(*eax7 < eax8)))));
    eax9 = reinterpret_cast<struct s70*>(reinterpret_cast<int32_t>(eax10) + 1);
    eax9->f3a = reinterpret_cast<signed char>(eax9->f3a + *reinterpret_cast<signed char*>(&eax9));
    eax11 = reinterpret_cast<int32_t>(eax9) + 1;
    *reinterpret_cast<signed char*>(edx12 - 0x2edcfcba) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx13 - 0x2edcfcba) + *reinterpret_cast<signed char*>(&ecx));
    edi14->f3 = *reinterpret_cast<signed char*>(&eax11);
    esi15 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi16) - 1);
    ecx17 = ecx >> 2;
    edi18 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi19) - 1);
    if (ecx17 < 8) 
        goto 0x4039c0;
    while (ecx17) {
        --ecx17;
        *edi18 = *esi15;
        --edi18;
        --esi15;
    }
    switch (edx20) {
    case 3:
        goto 0x403b1c;
    case 2:
        goto 0x403b08;
    case 1:
        goto 0x403af8;
    case 0:
        goto 0x403af0;
    }
}

struct s72 {
    signed char[24] pad24;
    struct s8* f18;
    int32_t f1c;
};

void fun_401f41(struct s72* a1) {
    int32_t v2;
    struct s8* v3;

    v2 = a1->f1c;
    v3 = a1->f18;
    fun_401dce(v3, v2);
    return;
}

void fun_403bce() {
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
    signed char* eax358;
    signed char* eax359;
    signed char al360;
    signed char* eax361;
    signed char* eax362;
    signed char al363;
    signed char* eax364;
    signed char* eax365;
    signed char al366;
    signed char* eax367;
    signed char* eax368;
    signed char al369;
    signed char* eax370;
    signed char* eax371;
    signed char al372;
    signed char* eax373;
    signed char* eax374;
    signed char al375;
    signed char* eax376;
    signed char* eax377;
    signed char al378;
    signed char* eax379;
    signed char* eax380;
    signed char al381;
    signed char* eax382;
    signed char* eax383;
    signed char al384;
    signed char* eax385;
    signed char* eax386;
    signed char al387;
    signed char* eax388;
    signed char* eax389;
    signed char al390;
    signed char* eax391;
    signed char* eax392;
    signed char al393;
    signed char* eax394;
    signed char* eax395;
    signed char al396;
    signed char* eax397;
    signed char* eax398;
    signed char al399;
    signed char* eax400;
    signed char* eax401;
    signed char al402;
    signed char* eax403;
    signed char* eax404;
    signed char al405;
    signed char* eax406;
    signed char* eax407;
    signed char al408;
    signed char* eax409;
    signed char* eax410;
    signed char al411;
    signed char* eax412;
    signed char* eax413;
    signed char al414;
    signed char* eax415;
    signed char* eax416;
    signed char al417;
    signed char* eax418;
    signed char* eax419;
    signed char al420;
    signed char* eax421;
    signed char* eax422;
    signed char al423;
    signed char* eax424;
    signed char* eax425;
    signed char al426;
    signed char* eax427;
    signed char* eax428;
    signed char al429;
    signed char* eax430;
    signed char* eax431;
    signed char al432;
    signed char* eax433;
    signed char* eax434;
    signed char al435;
    signed char* eax436;
    signed char* eax437;
    signed char al438;
    signed char* eax439;
    signed char* eax440;
    signed char al441;
    signed char* eax442;
    signed char* eax443;
    signed char al444;
    signed char* eax445;
    signed char* eax446;
    signed char al447;
    signed char* eax448;
    signed char* eax449;
    signed char al450;
    signed char* eax451;
    signed char* eax452;
    signed char al453;
    signed char* eax454;
    signed char* eax455;
    signed char al456;
    signed char* eax457;
    signed char* eax458;
    signed char al459;
    signed char* eax460;
    signed char* eax461;
    signed char al462;
    signed char* eax463;
    signed char* eax464;
    signed char al465;
    signed char* eax466;
    signed char* eax467;
    signed char al468;
    signed char* eax469;
    signed char* eax470;
    signed char al471;
    signed char* eax472;
    signed char* eax473;
    signed char al474;
    signed char* eax475;
    signed char* eax476;
    signed char al477;
    signed char* eax478;
    signed char* eax479;
    signed char al480;
    signed char* eax481;
    signed char* eax482;
    signed char al483;
    signed char* eax484;
    signed char* eax485;
    signed char al486;
    signed char* eax487;
    signed char* eax488;
    signed char al489;
    signed char* eax490;
    signed char* eax491;
    signed char al492;
    signed char* eax493;
    signed char* eax494;
    signed char al495;
    signed char* eax496;
    signed char* eax497;
    signed char al498;
    signed char* eax499;
    signed char* eax500;
    signed char al501;
    signed char* eax502;
    signed char* eax503;
    signed char al504;
    signed char* eax505;
    signed char* eax506;
    signed char al507;
    signed char* eax508;
    signed char* eax509;
    signed char al510;
    signed char* eax511;
    signed char* eax512;
    signed char al513;
    signed char* eax514;
    signed char* eax515;
    signed char al516;
    signed char* eax517;
    signed char* eax518;
    signed char al519;
    signed char* eax520;
    signed char* eax521;
    signed char al522;
    signed char* eax523;
    signed char* eax524;
    signed char al525;
    signed char* eax526;
    signed char* eax527;
    signed char al528;
    signed char* eax529;
    signed char* eax530;
    signed char al531;
    signed char* eax532;
    signed char* eax533;
    signed char al534;
    signed char* eax535;
    signed char* eax536;
    signed char al537;
    signed char* eax538;
    signed char* eax539;
    signed char al540;
    signed char* eax541;
    signed char* eax542;
    signed char al543;
    signed char* eax544;
    signed char* eax545;
    signed char al546;
    signed char* eax547;
    signed char* eax548;
    signed char al549;
    signed char* eax550;
    signed char* eax551;
    signed char al552;
    signed char* eax553;
    signed char* eax554;
    signed char al555;
    signed char* eax556;
    signed char* eax557;
    signed char al558;
    signed char* eax559;
    signed char* eax560;
    signed char al561;
    signed char* eax562;
    signed char* eax563;
    signed char al564;
    signed char* eax565;
    signed char* eax566;
    signed char al567;
    signed char* eax568;
    signed char* eax569;
    signed char al570;
    signed char* eax571;
    signed char* eax572;
    signed char al573;
    signed char* eax574;
    signed char* eax575;
    signed char al576;
    signed char* eax577;
    signed char* eax578;
    signed char al579;
    signed char* eax580;
    signed char* eax581;
    signed char al582;
    signed char* eax583;
    signed char* eax584;
    signed char al585;
    signed char* eax586;
    signed char* eax587;
    signed char al588;
    signed char* eax589;
    signed char* eax590;
    signed char al591;
    signed char* eax592;
    signed char* eax593;
    signed char al594;
    signed char* eax595;
    signed char* eax596;
    signed char al597;
    signed char* eax598;
    signed char* eax599;
    signed char al600;
    signed char* eax601;
    signed char* eax602;
    signed char al603;
    signed char* eax604;
    signed char* eax605;
    signed char al606;
    signed char* eax607;
    signed char* eax608;
    signed char al609;
    signed char* eax610;
    signed char* eax611;
    signed char al612;
    signed char* eax613;
    signed char* eax614;
    signed char al615;
    signed char* eax616;
    signed char* eax617;
    signed char al618;
    signed char* eax619;
    signed char* eax620;
    signed char al621;
    signed char* eax622;
    signed char* eax623;
    signed char al624;
    signed char* eax625;
    signed char* eax626;
    signed char al627;
    signed char* eax628;
    signed char* eax629;
    signed char al630;
    signed char* eax631;
    signed char* eax632;
    signed char al633;
    signed char* eax634;
    signed char* eax635;
    signed char al636;
    signed char* eax637;
    signed char* eax638;
    signed char al639;
    signed char* eax640;
    signed char* eax641;
    signed char al642;
    signed char* eax643;
    signed char* eax644;
    signed char al645;
    signed char* eax646;
    signed char* eax647;
    signed char al648;
    signed char* eax649;
    signed char* eax650;
    signed char al651;
    signed char* eax652;
    signed char* eax653;
    signed char al654;
    signed char* eax655;
    signed char* eax656;
    signed char al657;
    signed char* eax658;
    signed char* eax659;
    signed char al660;
    signed char* eax661;
    signed char* eax662;
    signed char al663;
    signed char* eax664;
    signed char* eax665;
    signed char al666;
    signed char* eax667;
    signed char* eax668;
    signed char al669;
    signed char* eax670;
    signed char* eax671;
    signed char al672;
    signed char* eax673;
    signed char* eax674;
    signed char al675;
    signed char* eax676;
    signed char* eax677;
    signed char al678;
    signed char* eax679;
    signed char* eax680;
    signed char al681;
    signed char* eax682;
    signed char* eax683;
    signed char al684;
    signed char* eax685;
    signed char* eax686;
    signed char al687;
    signed char* eax688;
    signed char* eax689;
    signed char al690;
    signed char* eax691;
    signed char* eax692;
    signed char al693;
    signed char* eax694;
    signed char* eax695;
    signed char al696;
    signed char* eax697;
    signed char* eax698;
    signed char al699;
    signed char* eax700;
    signed char* eax701;
    signed char al702;
    signed char* eax703;
    signed char* eax704;
    signed char al705;
    signed char* eax706;
    signed char* eax707;
    signed char al708;
    signed char* eax709;
    signed char* eax710;
    signed char al711;
    signed char* eax712;
    signed char* eax713;
    signed char al714;
    signed char* eax715;
    signed char* eax716;
    signed char al717;
    signed char* eax718;
    signed char* eax719;
    signed char al720;
    signed char* eax721;
    signed char* eax722;
    signed char al723;
    signed char* eax724;
    signed char* eax725;
    signed char al726;
    signed char* eax727;
    signed char* eax728;
    signed char al729;
    signed char* eax730;
    signed char* eax731;
    signed char al732;
    signed char* eax733;
    signed char* eax734;
    signed char al735;
    signed char* eax736;
    signed char* eax737;
    signed char al738;
    signed char* eax739;
    signed char* eax740;
    signed char al741;
    signed char* eax742;
    signed char* eax743;
    signed char al744;
    signed char* eax745;
    signed char* eax746;
    signed char al747;
    signed char* eax748;
    signed char* eax749;
    signed char al750;
    signed char* eax751;
    signed char* eax752;
    signed char al753;
    signed char* eax754;
    signed char* eax755;
    signed char al756;
    signed char* eax757;
    signed char* eax758;
    signed char al759;
    signed char* eax760;
    signed char* eax761;
    signed char al762;
    signed char* eax763;
    signed char* eax764;
    signed char al765;
    signed char* eax766;
    signed char* eax767;
    signed char al768;
    signed char* eax769;
    signed char* eax770;
    signed char al771;
    signed char* eax772;
    signed char* eax773;
    signed char al774;
    signed char* eax775;
    signed char* eax776;
    signed char al777;
    signed char* eax778;
    signed char* eax779;
    signed char al780;
    signed char* eax781;
    signed char* eax782;
    signed char al783;
    signed char* eax784;
    signed char* eax785;
    signed char al786;
    signed char* eax787;
    signed char* eax788;
    signed char al789;
    signed char* eax790;
    signed char* eax791;
    signed char al792;
    signed char* eax793;
    signed char* eax794;
    signed char al795;
    signed char* eax796;
    signed char* eax797;
    signed char al798;
    signed char* eax799;
    signed char* eax800;
    signed char al801;
    signed char* eax802;
    signed char* eax803;
    signed char al804;
    signed char* eax805;
    signed char* eax806;
    signed char al807;
    signed char* eax808;
    signed char* eax809;
    signed char al810;
    signed char* eax811;
    signed char* eax812;
    signed char al813;
    signed char* eax814;
    signed char* eax815;
    signed char al816;
    signed char* eax817;
    signed char* eax818;
    signed char al819;
    signed char* eax820;
    signed char* eax821;
    signed char al822;
    signed char* eax823;
    signed char* eax824;
    signed char al825;
    signed char* eax826;
    signed char* eax827;
    signed char al828;
    signed char* eax829;
    signed char* eax830;
    signed char al831;
    signed char* eax832;
    signed char* eax833;
    signed char al834;
    signed char* eax835;
    signed char* eax836;
    signed char al837;
    signed char* eax838;
    signed char* eax839;
    signed char al840;
    signed char* eax841;
    signed char* eax842;
    signed char al843;
    signed char* eax844;
    signed char* eax845;
    signed char al846;
    signed char* eax847;
    signed char* eax848;
    signed char al849;
    signed char* eax850;
    signed char* eax851;
    signed char al852;
    signed char* eax853;
    signed char* eax854;
    signed char al855;
    signed char* eax856;
    signed char* eax857;
    signed char al858;
    signed char* eax859;
    signed char* eax860;
    signed char al861;
    signed char* eax862;
    signed char* eax863;
    signed char al864;
    signed char* eax865;
    signed char* eax866;
    signed char al867;
    signed char* eax868;
    signed char* eax869;
    signed char al870;
    signed char* eax871;
    signed char* eax872;
    signed char al873;
    signed char* eax874;
    signed char* eax875;
    signed char al876;
    signed char* eax877;
    signed char* eax878;
    signed char al879;
    signed char* eax880;
    signed char* eax881;
    signed char al882;
    signed char* eax883;
    signed char* eax884;
    signed char al885;
    signed char* eax886;
    signed char* eax887;
    signed char al888;
    signed char* eax889;
    signed char* eax890;
    signed char al891;
    signed char* eax892;
    signed char* eax893;
    signed char al894;
    signed char* eax895;
    signed char* eax896;
    signed char al897;
    signed char* eax898;
    signed char* eax899;
    signed char al900;
    signed char* eax901;
    signed char* eax902;
    signed char al903;
    signed char* eax904;
    signed char* eax905;
    signed char al906;
    signed char* eax907;
    signed char* eax908;
    signed char al909;
    signed char* eax910;
    signed char* eax911;
    signed char al912;
    signed char* eax913;
    signed char* eax914;
    signed char al915;
    signed char* eax916;
    signed char* eax917;
    signed char al918;
    signed char* eax919;
    signed char* eax920;
    signed char al921;
    signed char* eax922;
    signed char* eax923;
    signed char al924;
    signed char* eax925;
    signed char* eax926;
    signed char al927;
    signed char* eax928;
    signed char* eax929;
    signed char al930;
    signed char* eax931;
    signed char* eax932;
    signed char al933;
    signed char* eax934;
    signed char* eax935;
    signed char al936;
    signed char* eax937;
    signed char* eax938;
    signed char al939;
    signed char* eax940;
    signed char* eax941;
    signed char al942;
    signed char* eax943;
    signed char* eax944;
    signed char al945;
    signed char* eax946;
    signed char* eax947;
    signed char al948;
    signed char* eax949;
    signed char* eax950;
    signed char al951;
    signed char* eax952;
    signed char* eax953;
    signed char al954;
    signed char* eax955;
    signed char* eax956;
    signed char al957;
    signed char* eax958;
    signed char* eax959;
    signed char al960;
    signed char* eax961;
    signed char* eax962;
    signed char al963;
    signed char* eax964;
    signed char* eax965;
    signed char al966;
    signed char* eax967;
    signed char* eax968;
    signed char al969;
    signed char* eax970;
    signed char* eax971;
    signed char al972;
    signed char* eax973;
    signed char* eax974;
    signed char al975;
    signed char* eax976;
    signed char* eax977;
    signed char al978;
    signed char* eax979;
    signed char* eax980;
    signed char al981;
    signed char* eax982;
    signed char* eax983;
    signed char al984;
    signed char* eax985;
    signed char* eax986;
    signed char al987;
    signed char* eax988;
    signed char* eax989;
    signed char al990;
    signed char* eax991;
    signed char* eax992;
    signed char al993;
    signed char* eax994;
    signed char* eax995;
    signed char al996;
    signed char* eax997;
    signed char* eax998;
    signed char al999;
    signed char* eax1000;
    signed char* eax1001;
    signed char al1002;
    signed char* eax1003;
    signed char* eax1004;
    signed char al1005;
    signed char* eax1006;
    signed char* eax1007;
    signed char al1008;
    signed char* eax1009;
    signed char* eax1010;
    signed char al1011;
    signed char* eax1012;
    signed char* eax1013;
    signed char al1014;
    signed char* eax1015;
    signed char* eax1016;
    signed char al1017;
    signed char* eax1018;
    signed char* eax1019;
    signed char al1020;
    signed char* eax1021;
    signed char* eax1022;
    signed char al1023;
    signed char* eax1024;
    signed char* eax1025;
    signed char al1026;
    signed char* eax1027;
    signed char* eax1028;
    signed char al1029;
    signed char* eax1030;
    signed char* eax1031;
    signed char al1032;
    signed char* eax1033;
    signed char* eax1034;
    signed char al1035;
    signed char* eax1036;
    signed char* eax1037;
    signed char al1038;
    signed char* eax1039;
    signed char* eax1040;
    signed char al1041;
    signed char* eax1042;
    signed char* eax1043;
    signed char al1044;
    signed char* eax1045;
    signed char* eax1046;
    signed char al1047;
    signed char* eax1048;
    signed char* eax1049;
    signed char al1050;
    signed char* eax1051;
    signed char* eax1052;
    signed char al1053;
    signed char* eax1054;
    signed char* eax1055;
    signed char al1056;
    signed char* eax1057;
    signed char* eax1058;
    signed char al1059;
    signed char* eax1060;
    signed char* eax1061;
    signed char al1062;
    signed char* eax1063;
    signed char* eax1064;
    signed char al1065;
    signed char* eax1066;
    signed char* eax1067;
    signed char al1068;
    signed char* eax1069;
    signed char* eax1070;
    signed char al1071;
    signed char* eax1072;
    signed char* eax1073;
    signed char al1074;
    signed char* eax1075;
    signed char* eax1076;
    signed char al1077;
    signed char* eax1078;
    signed char* eax1079;
    signed char al1080;
    signed char* eax1081;
    signed char* eax1082;
    signed char al1083;
    signed char* eax1084;
    signed char* eax1085;
    signed char al1086;
    signed char* eax1087;
    signed char* eax1088;
    signed char al1089;
    signed char* eax1090;
    signed char* eax1091;
    signed char al1092;
    signed char* eax1093;
    signed char* eax1094;
    signed char al1095;
    signed char* eax1096;
    signed char* eax1097;
    signed char al1098;
    signed char* eax1099;
    signed char* eax1100;
    signed char al1101;
    signed char* eax1102;
    signed char* eax1103;
    signed char al1104;
    signed char* eax1105;
    signed char* eax1106;
    signed char al1107;
    signed char* eax1108;
    signed char* eax1109;
    signed char al1110;
    signed char* eax1111;
    signed char* eax1112;
    signed char al1113;
    signed char* eax1114;
    signed char* eax1115;
    signed char al1116;
    signed char* eax1117;
    signed char* eax1118;
    signed char al1119;
    signed char* eax1120;
    signed char* eax1121;
    signed char al1122;
    signed char* eax1123;
    signed char* eax1124;
    signed char al1125;
    signed char* eax1126;
    signed char* eax1127;
    signed char al1128;
    signed char* eax1129;
    signed char* eax1130;
    signed char al1131;
    signed char* eax1132;
    signed char* eax1133;
    signed char al1134;
    signed char* eax1135;
    signed char* eax1136;
    signed char al1137;
    signed char* eax1138;
    signed char* eax1139;
    signed char al1140;
    signed char* eax1141;
    signed char* eax1142;
    signed char al1143;
    signed char* eax1144;
    signed char* eax1145;
    signed char al1146;
    signed char* eax1147;
    signed char* eax1148;
    signed char al1149;
    signed char* eax1150;
    signed char* eax1151;
    signed char al1152;
    signed char* eax1153;
    signed char* eax1154;
    signed char al1155;
    signed char* eax1156;
    signed char* eax1157;
    signed char al1158;
    signed char* eax1159;
    signed char* eax1160;
    signed char al1161;
    signed char* eax1162;
    signed char* eax1163;
    signed char al1164;
    signed char* eax1165;
    signed char* eax1166;
    signed char al1167;
    signed char* eax1168;
    signed char* eax1169;
    signed char al1170;
    signed char* eax1171;
    signed char* eax1172;
    signed char al1173;
    signed char* eax1174;
    signed char* eax1175;
    signed char al1176;
    signed char* eax1177;
    signed char* eax1178;
    signed char al1179;
    signed char* eax1180;
    signed char* eax1181;
    signed char al1182;
    signed char* eax1183;
    signed char* eax1184;
    signed char al1185;
    signed char* eax1186;
    signed char* eax1187;
    signed char al1188;
    signed char* eax1189;
    signed char* eax1190;
    signed char al1191;
    signed char* eax1192;
    signed char* eax1193;
    signed char al1194;
    signed char* eax1195;
    signed char* eax1196;
    signed char al1197;
    signed char* eax1198;
    signed char* eax1199;
    signed char al1200;
    signed char* eax1201;
    signed char* eax1202;
    signed char al1203;
    signed char* eax1204;
    signed char* eax1205;
    signed char al1206;
    signed char* eax1207;
    signed char* eax1208;
    signed char al1209;
    signed char* eax1210;
    signed char* eax1211;
    signed char al1212;
    signed char* eax1213;
    signed char* eax1214;
    signed char al1215;
    signed char* eax1216;
    signed char* eax1217;
    signed char al1218;
    signed char* eax1219;
    signed char* eax1220;
    signed char al1221;
    signed char* eax1222;
    signed char* eax1223;
    signed char al1224;
    signed char* eax1225;
    signed char* eax1226;
    signed char al1227;
    signed char* eax1228;
    signed char* eax1229;
    signed char al1230;
    signed char* eax1231;
    signed char* eax1232;
    signed char al1233;
    signed char* eax1234;
    signed char* eax1235;
    signed char al1236;
    signed char* eax1237;
    signed char* eax1238;
    signed char al1239;
    signed char* eax1240;
    signed char* eax1241;
    signed char al1242;
    signed char* eax1243;
    signed char* eax1244;
    signed char al1245;
    signed char* eax1246;
    signed char* eax1247;
    signed char al1248;
    signed char* eax1249;
    signed char* eax1250;
    signed char al1251;
    signed char* eax1252;
    signed char* eax1253;
    signed char al1254;
    signed char* eax1255;
    signed char* eax1256;
    signed char al1257;
    signed char* eax1258;
    signed char* eax1259;
    signed char al1260;
    signed char* eax1261;
    signed char* eax1262;
    signed char al1263;
    signed char* eax1264;
    signed char* eax1265;
    signed char al1266;
    signed char* eax1267;
    signed char* eax1268;
    signed char al1269;
    signed char* eax1270;
    signed char* eax1271;
    signed char al1272;
    signed char* eax1273;
    signed char* eax1274;
    signed char al1275;
    signed char* eax1276;
    signed char* eax1277;
    signed char al1278;
    signed char* eax1279;
    signed char* eax1280;
    signed char al1281;
    signed char* eax1282;
    signed char* eax1283;
    signed char al1284;
    signed char* eax1285;
    signed char* eax1286;
    signed char al1287;
    signed char* eax1288;
    signed char* eax1289;
    signed char al1290;
    signed char* eax1291;
    signed char* eax1292;
    signed char al1293;
    signed char* eax1294;
    signed char* eax1295;
    signed char al1296;
    signed char* eax1297;
    signed char* eax1298;
    signed char al1299;
    signed char* eax1300;
    signed char* eax1301;
    signed char al1302;
    signed char* eax1303;
    signed char* eax1304;
    signed char al1305;
    signed char* eax1306;
    signed char* eax1307;
    signed char al1308;
    signed char* eax1309;
    signed char* eax1310;
    signed char al1311;
    signed char* eax1312;
    signed char* eax1313;
    signed char al1314;
    signed char* eax1315;
    signed char* eax1316;
    signed char al1317;
    signed char* eax1318;
    signed char* eax1319;
    signed char al1320;
    signed char* eax1321;
    signed char* eax1322;
    signed char al1323;
    signed char* eax1324;
    signed char* eax1325;
    signed char al1326;
    signed char* eax1327;
    signed char* eax1328;
    signed char al1329;
    signed char* eax1330;
    signed char* eax1331;
    signed char al1332;
    signed char* eax1333;
    signed char* eax1334;
    signed char al1335;
    signed char* eax1336;
    signed char* eax1337;
    signed char al1338;
    signed char* eax1339;
    signed char* eax1340;
    signed char al1341;
    signed char* eax1342;
    signed char* eax1343;
    signed char al1344;
    signed char* eax1345;
    signed char* eax1346;
    signed char al1347;
    signed char* eax1348;
    signed char* eax1349;
    signed char al1350;
    signed char* eax1351;
    signed char* eax1352;
    signed char al1353;
    signed char* eax1354;
    signed char* eax1355;
    signed char al1356;
    signed char* eax1357;
    signed char* eax1358;
    signed char al1359;
    signed char* eax1360;
    signed char* eax1361;
    signed char al1362;
    signed char* eax1363;
    signed char* eax1364;
    signed char al1365;
    signed char* eax1366;
    signed char* eax1367;
    signed char al1368;
    signed char* eax1369;
    signed char* eax1370;
    signed char al1371;
    signed char* eax1372;
    signed char* eax1373;
    signed char al1374;
    signed char* eax1375;
    signed char* eax1376;
    signed char al1377;
    signed char* eax1378;
    signed char* eax1379;
    signed char al1380;
    signed char* eax1381;
    signed char* eax1382;
    signed char al1383;
    signed char* eax1384;
    signed char* eax1385;
    signed char al1386;
    signed char* eax1387;
    signed char* eax1388;
    signed char al1389;
    signed char* eax1390;
    signed char* eax1391;
    signed char al1392;
    signed char* eax1393;
    signed char* eax1394;
    signed char al1395;
    signed char* eax1396;
    signed char* eax1397;
    signed char al1398;
    signed char* eax1399;
    signed char* eax1400;
    signed char al1401;
    signed char* eax1402;
    signed char* eax1403;
    signed char al1404;
    signed char* eax1405;
    signed char* eax1406;
    signed char al1407;
    signed char* eax1408;
    signed char* eax1409;
    signed char al1410;
    signed char* eax1411;
    signed char* eax1412;
    signed char al1413;
    signed char* eax1414;
    signed char* eax1415;
    signed char al1416;
    signed char* eax1417;
    signed char* eax1418;
    signed char al1419;
    signed char* eax1420;
    signed char* eax1421;
    signed char al1422;
    signed char* eax1423;
    signed char* eax1424;
    signed char al1425;
    signed char* eax1426;
    signed char* eax1427;
    signed char al1428;
    signed char* eax1429;
    signed char* eax1430;
    signed char al1431;
    signed char* eax1432;
    signed char* eax1433;
    signed char al1434;
    signed char* eax1435;
    signed char* eax1436;
    signed char al1437;
    signed char* eax1438;
    signed char* eax1439;
    signed char al1440;
    signed char* eax1441;
    signed char* eax1442;
    signed char al1443;
    signed char* eax1444;
    signed char* eax1445;
    signed char al1446;
    signed char* eax1447;
    signed char* eax1448;
    signed char al1449;
    signed char* eax1450;
    signed char* eax1451;
    signed char al1452;
    signed char* eax1453;
    signed char* eax1454;
    signed char al1455;
    signed char* eax1456;
    signed char* eax1457;
    signed char al1458;
    signed char* eax1459;
    signed char* eax1460;
    signed char al1461;
    signed char* eax1462;
    signed char* eax1463;
    signed char al1464;
    signed char* eax1465;
    signed char* eax1466;
    signed char al1467;
    signed char* eax1468;
    signed char* eax1469;
    signed char al1470;
    signed char* eax1471;
    signed char* eax1472;
    signed char al1473;
    signed char* eax1474;
    signed char* eax1475;
    signed char al1476;
    signed char* eax1477;
    signed char* eax1478;
    signed char al1479;
    signed char* eax1480;
    signed char* eax1481;
    signed char al1482;
    signed char* eax1483;
    signed char* eax1484;
    signed char al1485;
    signed char* eax1486;
    signed char* eax1487;
    signed char al1488;
    signed char* eax1489;
    signed char* eax1490;
    signed char al1491;
    signed char* eax1492;
    signed char* eax1493;
    signed char al1494;
    signed char* eax1495;
    signed char* eax1496;
    signed char al1497;
    signed char* eax1498;
    signed char* eax1499;
    signed char al1500;
    signed char* eax1501;
    signed char* eax1502;
    signed char al1503;
    signed char* eax1504;
    signed char* eax1505;
    signed char al1506;
    signed char* eax1507;
    signed char* eax1508;
    signed char al1509;
    signed char* eax1510;
    signed char* eax1511;
    signed char al1512;
    signed char* eax1513;
    signed char* eax1514;
    signed char al1515;
    signed char* eax1516;
    signed char* eax1517;
    signed char al1518;
    signed char* eax1519;
    signed char* eax1520;
    signed char al1521;
    signed char* eax1522;
    signed char* eax1523;
    signed char al1524;
    signed char* eax1525;
    signed char* eax1526;
    signed char al1527;
    signed char* eax1528;
    signed char* eax1529;
    signed char al1530;
    signed char* eax1531;
    signed char* eax1532;
    signed char al1533;
    signed char* eax1534;
    signed char* eax1535;
    signed char al1536;
    signed char* eax1537;
    signed char* eax1538;
    signed char al1539;
    signed char* eax1540;
    signed char* eax1541;
    signed char al1542;
    signed char* eax1543;
    signed char* eax1544;
    signed char al1545;
    signed char* eax1546;
    signed char* eax1547;
    signed char al1548;
    signed char* eax1549;
    signed char* eax1550;
    signed char al1551;
    signed char* eax1552;
    signed char* eax1553;
    signed char al1554;
    signed char* eax1555;
    signed char* eax1556;
    signed char al1557;
    signed char* eax1558;
    signed char* eax1559;
    signed char al1560;
    signed char* eax1561;
    signed char* eax1562;
    signed char al1563;
    signed char* eax1564;
    signed char* eax1565;
    signed char al1566;
    signed char* eax1567;
    signed char* eax1568;
    signed char al1569;
    signed char* eax1570;
    signed char* eax1571;
    signed char al1572;
    signed char* eax1573;
    signed char* eax1574;
    signed char al1575;
    signed char* eax1576;
    signed char* eax1577;
    signed char al1578;
    signed char* eax1579;
    signed char* eax1580;
    signed char al1581;
    signed char* eax1582;
    signed char* eax1583;
    signed char al1584;
    signed char* eax1585;
    signed char* eax1586;
    signed char al1587;
    signed char* eax1588;
    signed char* eax1589;
    signed char al1590;
    signed char* eax1591;
    signed char* eax1592;
    signed char al1593;
    signed char* eax1594;
    signed char* eax1595;
    signed char al1596;
    signed char* eax1597;
    signed char* eax1598;
    signed char al1599;
    signed char* eax1600;
    signed char* eax1601;
    signed char al1602;
    signed char* eax1603;
    signed char* eax1604;
    signed char al1605;
    signed char* eax1606;
    signed char* eax1607;
    signed char al1608;
    signed char* eax1609;
    signed char* eax1610;
    signed char al1611;

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
    *eax358 = reinterpret_cast<signed char>(*eax359 + al360);
    *eax361 = reinterpret_cast<signed char>(*eax362 + al363);
    *eax364 = reinterpret_cast<signed char>(*eax365 + al366);
    *eax367 = reinterpret_cast<signed char>(*eax368 + al369);
    *eax370 = reinterpret_cast<signed char>(*eax371 + al372);
    *eax373 = reinterpret_cast<signed char>(*eax374 + al375);
    *eax376 = reinterpret_cast<signed char>(*eax377 + al378);
    *eax379 = reinterpret_cast<signed char>(*eax380 + al381);
    *eax382 = reinterpret_cast<signed char>(*eax383 + al384);
    *eax385 = reinterpret_cast<signed char>(*eax386 + al387);
    *eax388 = reinterpret_cast<signed char>(*eax389 + al390);
    *eax391 = reinterpret_cast<signed char>(*eax392 + al393);
    *eax394 = reinterpret_cast<signed char>(*eax395 + al396);
    *eax397 = reinterpret_cast<signed char>(*eax398 + al399);
    *eax400 = reinterpret_cast<signed char>(*eax401 + al402);
    *eax403 = reinterpret_cast<signed char>(*eax404 + al405);
    *eax406 = reinterpret_cast<signed char>(*eax407 + al408);
    *eax409 = reinterpret_cast<signed char>(*eax410 + al411);
    *eax412 = reinterpret_cast<signed char>(*eax413 + al414);
    *eax415 = reinterpret_cast<signed char>(*eax416 + al417);
    *eax418 = reinterpret_cast<signed char>(*eax419 + al420);
    *eax421 = reinterpret_cast<signed char>(*eax422 + al423);
    *eax424 = reinterpret_cast<signed char>(*eax425 + al426);
    *eax427 = reinterpret_cast<signed char>(*eax428 + al429);
    *eax430 = reinterpret_cast<signed char>(*eax431 + al432);
    *eax433 = reinterpret_cast<signed char>(*eax434 + al435);
    *eax436 = reinterpret_cast<signed char>(*eax437 + al438);
    *eax439 = reinterpret_cast<signed char>(*eax440 + al441);
    *eax442 = reinterpret_cast<signed char>(*eax443 + al444);
    *eax445 = reinterpret_cast<signed char>(*eax446 + al447);
    *eax448 = reinterpret_cast<signed char>(*eax449 + al450);
    *eax451 = reinterpret_cast<signed char>(*eax452 + al453);
    *eax454 = reinterpret_cast<signed char>(*eax455 + al456);
    *eax457 = reinterpret_cast<signed char>(*eax458 + al459);
    *eax460 = reinterpret_cast<signed char>(*eax461 + al462);
    *eax463 = reinterpret_cast<signed char>(*eax464 + al465);
    *eax466 = reinterpret_cast<signed char>(*eax467 + al468);
    *eax469 = reinterpret_cast<signed char>(*eax470 + al471);
    *eax472 = reinterpret_cast<signed char>(*eax473 + al474);
    *eax475 = reinterpret_cast<signed char>(*eax476 + al477);
    *eax478 = reinterpret_cast<signed char>(*eax479 + al480);
    *eax481 = reinterpret_cast<signed char>(*eax482 + al483);
    *eax484 = reinterpret_cast<signed char>(*eax485 + al486);
    *eax487 = reinterpret_cast<signed char>(*eax488 + al489);
    *eax490 = reinterpret_cast<signed char>(*eax491 + al492);
    *eax493 = reinterpret_cast<signed char>(*eax494 + al495);
    *eax496 = reinterpret_cast<signed char>(*eax497 + al498);
    *eax499 = reinterpret_cast<signed char>(*eax500 + al501);
    *eax502 = reinterpret_cast<signed char>(*eax503 + al504);
    *eax505 = reinterpret_cast<signed char>(*eax506 + al507);
    *eax508 = reinterpret_cast<signed char>(*eax509 + al510);
    *eax511 = reinterpret_cast<signed char>(*eax512 + al513);
    *eax514 = reinterpret_cast<signed char>(*eax515 + al516);
    *eax517 = reinterpret_cast<signed char>(*eax518 + al519);
    *eax520 = reinterpret_cast<signed char>(*eax521 + al522);
    *eax523 = reinterpret_cast<signed char>(*eax524 + al525);
    *eax526 = reinterpret_cast<signed char>(*eax527 + al528);
    *eax529 = reinterpret_cast<signed char>(*eax530 + al531);
    *eax532 = reinterpret_cast<signed char>(*eax533 + al534);
    *eax535 = reinterpret_cast<signed char>(*eax536 + al537);
    *eax538 = reinterpret_cast<signed char>(*eax539 + al540);
    *eax541 = reinterpret_cast<signed char>(*eax542 + al543);
    *eax544 = reinterpret_cast<signed char>(*eax545 + al546);
    *eax547 = reinterpret_cast<signed char>(*eax548 + al549);
    *eax550 = reinterpret_cast<signed char>(*eax551 + al552);
    *eax553 = reinterpret_cast<signed char>(*eax554 + al555);
    *eax556 = reinterpret_cast<signed char>(*eax557 + al558);
    *eax559 = reinterpret_cast<signed char>(*eax560 + al561);
    *eax562 = reinterpret_cast<signed char>(*eax563 + al564);
    *eax565 = reinterpret_cast<signed char>(*eax566 + al567);
    *eax568 = reinterpret_cast<signed char>(*eax569 + al570);
    *eax571 = reinterpret_cast<signed char>(*eax572 + al573);
    *eax574 = reinterpret_cast<signed char>(*eax575 + al576);
    *eax577 = reinterpret_cast<signed char>(*eax578 + al579);
    *eax580 = reinterpret_cast<signed char>(*eax581 + al582);
    *eax583 = reinterpret_cast<signed char>(*eax584 + al585);
    *eax586 = reinterpret_cast<signed char>(*eax587 + al588);
    *eax589 = reinterpret_cast<signed char>(*eax590 + al591);
    *eax592 = reinterpret_cast<signed char>(*eax593 + al594);
    *eax595 = reinterpret_cast<signed char>(*eax596 + al597);
    *eax598 = reinterpret_cast<signed char>(*eax599 + al600);
    *eax601 = reinterpret_cast<signed char>(*eax602 + al603);
    *eax604 = reinterpret_cast<signed char>(*eax605 + al606);
    *eax607 = reinterpret_cast<signed char>(*eax608 + al609);
    *eax610 = reinterpret_cast<signed char>(*eax611 + al612);
    *eax613 = reinterpret_cast<signed char>(*eax614 + al615);
    *eax616 = reinterpret_cast<signed char>(*eax617 + al618);
    *eax619 = reinterpret_cast<signed char>(*eax620 + al621);
    *eax622 = reinterpret_cast<signed char>(*eax623 + al624);
    *eax625 = reinterpret_cast<signed char>(*eax626 + al627);
    *eax628 = reinterpret_cast<signed char>(*eax629 + al630);
    *eax631 = reinterpret_cast<signed char>(*eax632 + al633);
    *eax634 = reinterpret_cast<signed char>(*eax635 + al636);
    *eax637 = reinterpret_cast<signed char>(*eax638 + al639);
    *eax640 = reinterpret_cast<signed char>(*eax641 + al642);
    *eax643 = reinterpret_cast<signed char>(*eax644 + al645);
    *eax646 = reinterpret_cast<signed char>(*eax647 + al648);
    *eax649 = reinterpret_cast<signed char>(*eax650 + al651);
    *eax652 = reinterpret_cast<signed char>(*eax653 + al654);
    *eax655 = reinterpret_cast<signed char>(*eax656 + al657);
    *eax658 = reinterpret_cast<signed char>(*eax659 + al660);
    *eax661 = reinterpret_cast<signed char>(*eax662 + al663);
    *eax664 = reinterpret_cast<signed char>(*eax665 + al666);
    *eax667 = reinterpret_cast<signed char>(*eax668 + al669);
    *eax670 = reinterpret_cast<signed char>(*eax671 + al672);
    *eax673 = reinterpret_cast<signed char>(*eax674 + al675);
    *eax676 = reinterpret_cast<signed char>(*eax677 + al678);
    *eax679 = reinterpret_cast<signed char>(*eax680 + al681);
    *eax682 = reinterpret_cast<signed char>(*eax683 + al684);
    *eax685 = reinterpret_cast<signed char>(*eax686 + al687);
    *eax688 = reinterpret_cast<signed char>(*eax689 + al690);
    *eax691 = reinterpret_cast<signed char>(*eax692 + al693);
    *eax694 = reinterpret_cast<signed char>(*eax695 + al696);
    *eax697 = reinterpret_cast<signed char>(*eax698 + al699);
    *eax700 = reinterpret_cast<signed char>(*eax701 + al702);
    *eax703 = reinterpret_cast<signed char>(*eax704 + al705);
    *eax706 = reinterpret_cast<signed char>(*eax707 + al708);
    *eax709 = reinterpret_cast<signed char>(*eax710 + al711);
    *eax712 = reinterpret_cast<signed char>(*eax713 + al714);
    *eax715 = reinterpret_cast<signed char>(*eax716 + al717);
    *eax718 = reinterpret_cast<signed char>(*eax719 + al720);
    *eax721 = reinterpret_cast<signed char>(*eax722 + al723);
    *eax724 = reinterpret_cast<signed char>(*eax725 + al726);
    *eax727 = reinterpret_cast<signed char>(*eax728 + al729);
    *eax730 = reinterpret_cast<signed char>(*eax731 + al732);
    *eax733 = reinterpret_cast<signed char>(*eax734 + al735);
    *eax736 = reinterpret_cast<signed char>(*eax737 + al738);
    *eax739 = reinterpret_cast<signed char>(*eax740 + al741);
    *eax742 = reinterpret_cast<signed char>(*eax743 + al744);
    *eax745 = reinterpret_cast<signed char>(*eax746 + al747);
    *eax748 = reinterpret_cast<signed char>(*eax749 + al750);
    *eax751 = reinterpret_cast<signed char>(*eax752 + al753);
    *eax754 = reinterpret_cast<signed char>(*eax755 + al756);
    *eax757 = reinterpret_cast<signed char>(*eax758 + al759);
    *eax760 = reinterpret_cast<signed char>(*eax761 + al762);
    *eax763 = reinterpret_cast<signed char>(*eax764 + al765);
    *eax766 = reinterpret_cast<signed char>(*eax767 + al768);
    *eax769 = reinterpret_cast<signed char>(*eax770 + al771);
    *eax772 = reinterpret_cast<signed char>(*eax773 + al774);
    *eax775 = reinterpret_cast<signed char>(*eax776 + al777);
    *eax778 = reinterpret_cast<signed char>(*eax779 + al780);
    *eax781 = reinterpret_cast<signed char>(*eax782 + al783);
    *eax784 = reinterpret_cast<signed char>(*eax785 + al786);
    *eax787 = reinterpret_cast<signed char>(*eax788 + al789);
    *eax790 = reinterpret_cast<signed char>(*eax791 + al792);
    *eax793 = reinterpret_cast<signed char>(*eax794 + al795);
    *eax796 = reinterpret_cast<signed char>(*eax797 + al798);
    *eax799 = reinterpret_cast<signed char>(*eax800 + al801);
    *eax802 = reinterpret_cast<signed char>(*eax803 + al804);
    *eax805 = reinterpret_cast<signed char>(*eax806 + al807);
    *eax808 = reinterpret_cast<signed char>(*eax809 + al810);
    *eax811 = reinterpret_cast<signed char>(*eax812 + al813);
    *eax814 = reinterpret_cast<signed char>(*eax815 + al816);
    *eax817 = reinterpret_cast<signed char>(*eax818 + al819);
    *eax820 = reinterpret_cast<signed char>(*eax821 + al822);
    *eax823 = reinterpret_cast<signed char>(*eax824 + al825);
    *eax826 = reinterpret_cast<signed char>(*eax827 + al828);
    *eax829 = reinterpret_cast<signed char>(*eax830 + al831);
    *eax832 = reinterpret_cast<signed char>(*eax833 + al834);
    *eax835 = reinterpret_cast<signed char>(*eax836 + al837);
    *eax838 = reinterpret_cast<signed char>(*eax839 + al840);
    *eax841 = reinterpret_cast<signed char>(*eax842 + al843);
    *eax844 = reinterpret_cast<signed char>(*eax845 + al846);
    *eax847 = reinterpret_cast<signed char>(*eax848 + al849);
    *eax850 = reinterpret_cast<signed char>(*eax851 + al852);
    *eax853 = reinterpret_cast<signed char>(*eax854 + al855);
    *eax856 = reinterpret_cast<signed char>(*eax857 + al858);
    *eax859 = reinterpret_cast<signed char>(*eax860 + al861);
    *eax862 = reinterpret_cast<signed char>(*eax863 + al864);
    *eax865 = reinterpret_cast<signed char>(*eax866 + al867);
    *eax868 = reinterpret_cast<signed char>(*eax869 + al870);
    *eax871 = reinterpret_cast<signed char>(*eax872 + al873);
    *eax874 = reinterpret_cast<signed char>(*eax875 + al876);
    *eax877 = reinterpret_cast<signed char>(*eax878 + al879);
    *eax880 = reinterpret_cast<signed char>(*eax881 + al882);
    *eax883 = reinterpret_cast<signed char>(*eax884 + al885);
    *eax886 = reinterpret_cast<signed char>(*eax887 + al888);
    *eax889 = reinterpret_cast<signed char>(*eax890 + al891);
    *eax892 = reinterpret_cast<signed char>(*eax893 + al894);
    *eax895 = reinterpret_cast<signed char>(*eax896 + al897);
    *eax898 = reinterpret_cast<signed char>(*eax899 + al900);
    *eax901 = reinterpret_cast<signed char>(*eax902 + al903);
    *eax904 = reinterpret_cast<signed char>(*eax905 + al906);
    *eax907 = reinterpret_cast<signed char>(*eax908 + al909);
    *eax910 = reinterpret_cast<signed char>(*eax911 + al912);
    *eax913 = reinterpret_cast<signed char>(*eax914 + al915);
    *eax916 = reinterpret_cast<signed char>(*eax917 + al918);
    *eax919 = reinterpret_cast<signed char>(*eax920 + al921);
    *eax922 = reinterpret_cast<signed char>(*eax923 + al924);
    *eax925 = reinterpret_cast<signed char>(*eax926 + al927);
    *eax928 = reinterpret_cast<signed char>(*eax929 + al930);
    *eax931 = reinterpret_cast<signed char>(*eax932 + al933);
    *eax934 = reinterpret_cast<signed char>(*eax935 + al936);
    *eax937 = reinterpret_cast<signed char>(*eax938 + al939);
    *eax940 = reinterpret_cast<signed char>(*eax941 + al942);
    *eax943 = reinterpret_cast<signed char>(*eax944 + al945);
    *eax946 = reinterpret_cast<signed char>(*eax947 + al948);
    *eax949 = reinterpret_cast<signed char>(*eax950 + al951);
    *eax952 = reinterpret_cast<signed char>(*eax953 + al954);
    *eax955 = reinterpret_cast<signed char>(*eax956 + al957);
    *eax958 = reinterpret_cast<signed char>(*eax959 + al960);
    *eax961 = reinterpret_cast<signed char>(*eax962 + al963);
    *eax964 = reinterpret_cast<signed char>(*eax965 + al966);
    *eax967 = reinterpret_cast<signed char>(*eax968 + al969);
    *eax970 = reinterpret_cast<signed char>(*eax971 + al972);
    *eax973 = reinterpret_cast<signed char>(*eax974 + al975);
    *eax976 = reinterpret_cast<signed char>(*eax977 + al978);
    *eax979 = reinterpret_cast<signed char>(*eax980 + al981);
    *eax982 = reinterpret_cast<signed char>(*eax983 + al984);
    *eax985 = reinterpret_cast<signed char>(*eax986 + al987);
    *eax988 = reinterpret_cast<signed char>(*eax989 + al990);
    *eax991 = reinterpret_cast<signed char>(*eax992 + al993);
    *eax994 = reinterpret_cast<signed char>(*eax995 + al996);
    *eax997 = reinterpret_cast<signed char>(*eax998 + al999);
    *eax1000 = reinterpret_cast<signed char>(*eax1001 + al1002);
    *eax1003 = reinterpret_cast<signed char>(*eax1004 + al1005);
    *eax1006 = reinterpret_cast<signed char>(*eax1007 + al1008);
    *eax1009 = reinterpret_cast<signed char>(*eax1010 + al1011);
    *eax1012 = reinterpret_cast<signed char>(*eax1013 + al1014);
    *eax1015 = reinterpret_cast<signed char>(*eax1016 + al1017);
    *eax1018 = reinterpret_cast<signed char>(*eax1019 + al1020);
    *eax1021 = reinterpret_cast<signed char>(*eax1022 + al1023);
    *eax1024 = reinterpret_cast<signed char>(*eax1025 + al1026);
    *eax1027 = reinterpret_cast<signed char>(*eax1028 + al1029);
    *eax1030 = reinterpret_cast<signed char>(*eax1031 + al1032);
    *eax1033 = reinterpret_cast<signed char>(*eax1034 + al1035);
    *eax1036 = reinterpret_cast<signed char>(*eax1037 + al1038);
    *eax1039 = reinterpret_cast<signed char>(*eax1040 + al1041);
    *eax1042 = reinterpret_cast<signed char>(*eax1043 + al1044);
    *eax1045 = reinterpret_cast<signed char>(*eax1046 + al1047);
    *eax1048 = reinterpret_cast<signed char>(*eax1049 + al1050);
    *eax1051 = reinterpret_cast<signed char>(*eax1052 + al1053);
    *eax1054 = reinterpret_cast<signed char>(*eax1055 + al1056);
    *eax1057 = reinterpret_cast<signed char>(*eax1058 + al1059);
    *eax1060 = reinterpret_cast<signed char>(*eax1061 + al1062);
    *eax1063 = reinterpret_cast<signed char>(*eax1064 + al1065);
    *eax1066 = reinterpret_cast<signed char>(*eax1067 + al1068);
    *eax1069 = reinterpret_cast<signed char>(*eax1070 + al1071);
    *eax1072 = reinterpret_cast<signed char>(*eax1073 + al1074);
    *eax1075 = reinterpret_cast<signed char>(*eax1076 + al1077);
    *eax1078 = reinterpret_cast<signed char>(*eax1079 + al1080);
    *eax1081 = reinterpret_cast<signed char>(*eax1082 + al1083);
    *eax1084 = reinterpret_cast<signed char>(*eax1085 + al1086);
    *eax1087 = reinterpret_cast<signed char>(*eax1088 + al1089);
    *eax1090 = reinterpret_cast<signed char>(*eax1091 + al1092);
    *eax1093 = reinterpret_cast<signed char>(*eax1094 + al1095);
    *eax1096 = reinterpret_cast<signed char>(*eax1097 + al1098);
    *eax1099 = reinterpret_cast<signed char>(*eax1100 + al1101);
    *eax1102 = reinterpret_cast<signed char>(*eax1103 + al1104);
    *eax1105 = reinterpret_cast<signed char>(*eax1106 + al1107);
    *eax1108 = reinterpret_cast<signed char>(*eax1109 + al1110);
    *eax1111 = reinterpret_cast<signed char>(*eax1112 + al1113);
    *eax1114 = reinterpret_cast<signed char>(*eax1115 + al1116);
    *eax1117 = reinterpret_cast<signed char>(*eax1118 + al1119);
    *eax1120 = reinterpret_cast<signed char>(*eax1121 + al1122);
    *eax1123 = reinterpret_cast<signed char>(*eax1124 + al1125);
    *eax1126 = reinterpret_cast<signed char>(*eax1127 + al1128);
    *eax1129 = reinterpret_cast<signed char>(*eax1130 + al1131);
    *eax1132 = reinterpret_cast<signed char>(*eax1133 + al1134);
    *eax1135 = reinterpret_cast<signed char>(*eax1136 + al1137);
    *eax1138 = reinterpret_cast<signed char>(*eax1139 + al1140);
    *eax1141 = reinterpret_cast<signed char>(*eax1142 + al1143);
    *eax1144 = reinterpret_cast<signed char>(*eax1145 + al1146);
    *eax1147 = reinterpret_cast<signed char>(*eax1148 + al1149);
    *eax1150 = reinterpret_cast<signed char>(*eax1151 + al1152);
    *eax1153 = reinterpret_cast<signed char>(*eax1154 + al1155);
    *eax1156 = reinterpret_cast<signed char>(*eax1157 + al1158);
    *eax1159 = reinterpret_cast<signed char>(*eax1160 + al1161);
    *eax1162 = reinterpret_cast<signed char>(*eax1163 + al1164);
    *eax1165 = reinterpret_cast<signed char>(*eax1166 + al1167);
    *eax1168 = reinterpret_cast<signed char>(*eax1169 + al1170);
    *eax1171 = reinterpret_cast<signed char>(*eax1172 + al1173);
    *eax1174 = reinterpret_cast<signed char>(*eax1175 + al1176);
    *eax1177 = reinterpret_cast<signed char>(*eax1178 + al1179);
    *eax1180 = reinterpret_cast<signed char>(*eax1181 + al1182);
    *eax1183 = reinterpret_cast<signed char>(*eax1184 + al1185);
    *eax1186 = reinterpret_cast<signed char>(*eax1187 + al1188);
    *eax1189 = reinterpret_cast<signed char>(*eax1190 + al1191);
    *eax1192 = reinterpret_cast<signed char>(*eax1193 + al1194);
    *eax1195 = reinterpret_cast<signed char>(*eax1196 + al1197);
    *eax1198 = reinterpret_cast<signed char>(*eax1199 + al1200);
    *eax1201 = reinterpret_cast<signed char>(*eax1202 + al1203);
    *eax1204 = reinterpret_cast<signed char>(*eax1205 + al1206);
    *eax1207 = reinterpret_cast<signed char>(*eax1208 + al1209);
    *eax1210 = reinterpret_cast<signed char>(*eax1211 + al1212);
    *eax1213 = reinterpret_cast<signed char>(*eax1214 + al1215);
    *eax1216 = reinterpret_cast<signed char>(*eax1217 + al1218);
    *eax1219 = reinterpret_cast<signed char>(*eax1220 + al1221);
    *eax1222 = reinterpret_cast<signed char>(*eax1223 + al1224);
    *eax1225 = reinterpret_cast<signed char>(*eax1226 + al1227);
    *eax1228 = reinterpret_cast<signed char>(*eax1229 + al1230);
    *eax1231 = reinterpret_cast<signed char>(*eax1232 + al1233);
    *eax1234 = reinterpret_cast<signed char>(*eax1235 + al1236);
    *eax1237 = reinterpret_cast<signed char>(*eax1238 + al1239);
    *eax1240 = reinterpret_cast<signed char>(*eax1241 + al1242);
    *eax1243 = reinterpret_cast<signed char>(*eax1244 + al1245);
    *eax1246 = reinterpret_cast<signed char>(*eax1247 + al1248);
    *eax1249 = reinterpret_cast<signed char>(*eax1250 + al1251);
    *eax1252 = reinterpret_cast<signed char>(*eax1253 + al1254);
    *eax1255 = reinterpret_cast<signed char>(*eax1256 + al1257);
    *eax1258 = reinterpret_cast<signed char>(*eax1259 + al1260);
    *eax1261 = reinterpret_cast<signed char>(*eax1262 + al1263);
    *eax1264 = reinterpret_cast<signed char>(*eax1265 + al1266);
    *eax1267 = reinterpret_cast<signed char>(*eax1268 + al1269);
    *eax1270 = reinterpret_cast<signed char>(*eax1271 + al1272);
    *eax1273 = reinterpret_cast<signed char>(*eax1274 + al1275);
    *eax1276 = reinterpret_cast<signed char>(*eax1277 + al1278);
    *eax1279 = reinterpret_cast<signed char>(*eax1280 + al1281);
    *eax1282 = reinterpret_cast<signed char>(*eax1283 + al1284);
    *eax1285 = reinterpret_cast<signed char>(*eax1286 + al1287);
    *eax1288 = reinterpret_cast<signed char>(*eax1289 + al1290);
    *eax1291 = reinterpret_cast<signed char>(*eax1292 + al1293);
    *eax1294 = reinterpret_cast<signed char>(*eax1295 + al1296);
    *eax1297 = reinterpret_cast<signed char>(*eax1298 + al1299);
    *eax1300 = reinterpret_cast<signed char>(*eax1301 + al1302);
    *eax1303 = reinterpret_cast<signed char>(*eax1304 + al1305);
    *eax1306 = reinterpret_cast<signed char>(*eax1307 + al1308);
    *eax1309 = reinterpret_cast<signed char>(*eax1310 + al1311);
    *eax1312 = reinterpret_cast<signed char>(*eax1313 + al1314);
    *eax1315 = reinterpret_cast<signed char>(*eax1316 + al1317);
    *eax1318 = reinterpret_cast<signed char>(*eax1319 + al1320);
    *eax1321 = reinterpret_cast<signed char>(*eax1322 + al1323);
    *eax1324 = reinterpret_cast<signed char>(*eax1325 + al1326);
    *eax1327 = reinterpret_cast<signed char>(*eax1328 + al1329);
    *eax1330 = reinterpret_cast<signed char>(*eax1331 + al1332);
    *eax1333 = reinterpret_cast<signed char>(*eax1334 + al1335);
    *eax1336 = reinterpret_cast<signed char>(*eax1337 + al1338);
    *eax1339 = reinterpret_cast<signed char>(*eax1340 + al1341);
    *eax1342 = reinterpret_cast<signed char>(*eax1343 + al1344);
    *eax1345 = reinterpret_cast<signed char>(*eax1346 + al1347);
    *eax1348 = reinterpret_cast<signed char>(*eax1349 + al1350);
    *eax1351 = reinterpret_cast<signed char>(*eax1352 + al1353);
    *eax1354 = reinterpret_cast<signed char>(*eax1355 + al1356);
    *eax1357 = reinterpret_cast<signed char>(*eax1358 + al1359);
    *eax1360 = reinterpret_cast<signed char>(*eax1361 + al1362);
    *eax1363 = reinterpret_cast<signed char>(*eax1364 + al1365);
    *eax1366 = reinterpret_cast<signed char>(*eax1367 + al1368);
    *eax1369 = reinterpret_cast<signed char>(*eax1370 + al1371);
    *eax1372 = reinterpret_cast<signed char>(*eax1373 + al1374);
    *eax1375 = reinterpret_cast<signed char>(*eax1376 + al1377);
    *eax1378 = reinterpret_cast<signed char>(*eax1379 + al1380);
    *eax1381 = reinterpret_cast<signed char>(*eax1382 + al1383);
    *eax1384 = reinterpret_cast<signed char>(*eax1385 + al1386);
    *eax1387 = reinterpret_cast<signed char>(*eax1388 + al1389);
    *eax1390 = reinterpret_cast<signed char>(*eax1391 + al1392);
    *eax1393 = reinterpret_cast<signed char>(*eax1394 + al1395);
    *eax1396 = reinterpret_cast<signed char>(*eax1397 + al1398);
    *eax1399 = reinterpret_cast<signed char>(*eax1400 + al1401);
    *eax1402 = reinterpret_cast<signed char>(*eax1403 + al1404);
    *eax1405 = reinterpret_cast<signed char>(*eax1406 + al1407);
    *eax1408 = reinterpret_cast<signed char>(*eax1409 + al1410);
    *eax1411 = reinterpret_cast<signed char>(*eax1412 + al1413);
    *eax1414 = reinterpret_cast<signed char>(*eax1415 + al1416);
    *eax1417 = reinterpret_cast<signed char>(*eax1418 + al1419);
    *eax1420 = reinterpret_cast<signed char>(*eax1421 + al1422);
    *eax1423 = reinterpret_cast<signed char>(*eax1424 + al1425);
    *eax1426 = reinterpret_cast<signed char>(*eax1427 + al1428);
    *eax1429 = reinterpret_cast<signed char>(*eax1430 + al1431);
    *eax1432 = reinterpret_cast<signed char>(*eax1433 + al1434);
    *eax1435 = reinterpret_cast<signed char>(*eax1436 + al1437);
    *eax1438 = reinterpret_cast<signed char>(*eax1439 + al1440);
    *eax1441 = reinterpret_cast<signed char>(*eax1442 + al1443);
    *eax1444 = reinterpret_cast<signed char>(*eax1445 + al1446);
    *eax1447 = reinterpret_cast<signed char>(*eax1448 + al1449);
    *eax1450 = reinterpret_cast<signed char>(*eax1451 + al1452);
    *eax1453 = reinterpret_cast<signed char>(*eax1454 + al1455);
    *eax1456 = reinterpret_cast<signed char>(*eax1457 + al1458);
    *eax1459 = reinterpret_cast<signed char>(*eax1460 + al1461);
    *eax1462 = reinterpret_cast<signed char>(*eax1463 + al1464);
    *eax1465 = reinterpret_cast<signed char>(*eax1466 + al1467);
    *eax1468 = reinterpret_cast<signed char>(*eax1469 + al1470);
    *eax1471 = reinterpret_cast<signed char>(*eax1472 + al1473);
    *eax1474 = reinterpret_cast<signed char>(*eax1475 + al1476);
    *eax1477 = reinterpret_cast<signed char>(*eax1478 + al1479);
    *eax1480 = reinterpret_cast<signed char>(*eax1481 + al1482);
    *eax1483 = reinterpret_cast<signed char>(*eax1484 + al1485);
    *eax1486 = reinterpret_cast<signed char>(*eax1487 + al1488);
    *eax1489 = reinterpret_cast<signed char>(*eax1490 + al1491);
    *eax1492 = reinterpret_cast<signed char>(*eax1493 + al1494);
    *eax1495 = reinterpret_cast<signed char>(*eax1496 + al1497);
    *eax1498 = reinterpret_cast<signed char>(*eax1499 + al1500);
    *eax1501 = reinterpret_cast<signed char>(*eax1502 + al1503);
    *eax1504 = reinterpret_cast<signed char>(*eax1505 + al1506);
    *eax1507 = reinterpret_cast<signed char>(*eax1508 + al1509);
    *eax1510 = reinterpret_cast<signed char>(*eax1511 + al1512);
    *eax1513 = reinterpret_cast<signed char>(*eax1514 + al1515);
    *eax1516 = reinterpret_cast<signed char>(*eax1517 + al1518);
    *eax1519 = reinterpret_cast<signed char>(*eax1520 + al1521);
    *eax1522 = reinterpret_cast<signed char>(*eax1523 + al1524);
    *eax1525 = reinterpret_cast<signed char>(*eax1526 + al1527);
    *eax1528 = reinterpret_cast<signed char>(*eax1529 + al1530);
    *eax1531 = reinterpret_cast<signed char>(*eax1532 + al1533);
    *eax1534 = reinterpret_cast<signed char>(*eax1535 + al1536);
    *eax1537 = reinterpret_cast<signed char>(*eax1538 + al1539);
    *eax1540 = reinterpret_cast<signed char>(*eax1541 + al1542);
    *eax1543 = reinterpret_cast<signed char>(*eax1544 + al1545);
    *eax1546 = reinterpret_cast<signed char>(*eax1547 + al1548);
    *eax1549 = reinterpret_cast<signed char>(*eax1550 + al1551);
    *eax1552 = reinterpret_cast<signed char>(*eax1553 + al1554);
    *eax1555 = reinterpret_cast<signed char>(*eax1556 + al1557);
    *eax1558 = reinterpret_cast<signed char>(*eax1559 + al1560);
    *eax1561 = reinterpret_cast<signed char>(*eax1562 + al1563);
    *eax1564 = reinterpret_cast<signed char>(*eax1565 + al1566);
    *eax1567 = reinterpret_cast<signed char>(*eax1568 + al1569);
    *eax1570 = reinterpret_cast<signed char>(*eax1571 + al1572);
    *eax1573 = reinterpret_cast<signed char>(*eax1574 + al1575);
    *eax1576 = reinterpret_cast<signed char>(*eax1577 + al1578);
    *eax1579 = reinterpret_cast<signed char>(*eax1580 + al1581);
    *eax1582 = reinterpret_cast<signed char>(*eax1583 + al1584);
    *eax1585 = reinterpret_cast<signed char>(*eax1586 + al1587);
    *eax1588 = reinterpret_cast<signed char>(*eax1589 + al1590);
    *eax1591 = reinterpret_cast<signed char>(*eax1592 + al1593);
    *eax1594 = reinterpret_cast<signed char>(*eax1595 + al1596);
    *eax1597 = reinterpret_cast<signed char>(*eax1598 + al1599);
    *eax1600 = reinterpret_cast<signed char>(*eax1601 + al1602);
    *eax1603 = reinterpret_cast<signed char>(*eax1604 + al1605);
    *eax1606 = reinterpret_cast<signed char>(*eax1607 + al1608);
    *eax1609 = reinterpret_cast<signed char>(*eax1610 + al1611);
}

struct s73 {
    signed char[3] pad3;
    int32_t f3;
};

struct s74 {
    signed char[3] pad3;
    int32_t f3;
};

void fun_4027b5(uint32_t ecx) {
    int32_t* esi2;
    struct s73* esi3;
    int32_t* edi4;
    struct s74* edi5;
    int32_t edx6;

    esi2 = &esi3->f3;
    edi4 = &edi5->f3;
    if (ecx < 8) 
        goto 0x40278c;
    while (ecx) {
        --ecx;
        *edi4 = *esi2;
        ++edi4;
        ++esi2;
    }
    switch (edx6) {
    case 3:
        goto 0x4028b0;
    case 2:
        goto 0x40289c;
    case 1:
        goto 0x402890;
    case 0:
        goto 0x402888;
    }
}

struct s75 {
    signed char[1] pad1;
    unsigned char f1;
};

void fun_402a0e(int16_t cx) {
    unsigned char* edx2;
    unsigned char* eax3;
    struct s75* eax4;
    int32_t edx5;
    int32_t ebp6;
    int32_t edx7;
    int32_t ebp8;
    int32_t ebx9;
    int32_t ebx10;

    *edx2 = 0;
    eax3 = &eax4->f1;
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&cx) + 1));
    *reinterpret_cast<signed char*>(edx5 + ebp6 + 64) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx7 + ebp8 + 64) + *reinterpret_cast<signed char*>(&cx));
    *reinterpret_cast<signed char*>(ebx9 + 0x5f5e0845) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx10 + 0x5f5e0845) + *reinterpret_cast<signed char*>(&cx));
}

void fun_403606() {
    int32_t ebp1;

    *reinterpret_cast<uint32_t*>(ebp1 - 4) = 0xffffffff;
}

void fun_403946(int32_t ecx) {
    int32_t ebx2;
    int32_t ebx3;

    __asm__("pushad ");
    __asm__("insb ");
    *reinterpret_cast<signed char*>(ebx2 + 0x5f5e0845) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx3 + 0x5f5e0845) + *reinterpret_cast<signed char*>(&ecx));
}
