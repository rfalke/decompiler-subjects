
void fun_401114(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14);

void** fun_4010e3(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

int32_t fun_401000(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** v10;
    void** v11;
    void** ebp12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    int16_t ax17;
    int16_t fpu_status_word18;
    void** v19;
    void** v20;
    int16_t ax21;
    int16_t fpu_status_word22;
    void** v23;
    void** v24;

    v10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff8);
    fun_401114(0x40b040, v10, v11, 0x40a00000, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
    __asm__("fld dword [ebp-0x8]");
    __asm__("fstp qword [esp]");
    __asm__("fld dword [ebp-0x4]");
    __asm__("fstp qword [esp]");
    fun_4010e3(ecx, 0x40b044, v13, 0x40101b, 0x40b040, v10, v14, 0x40a00000);
    __asm__("fld dword [ebp-0x8]");
    __asm__("fld dword [ebp-0x4]");
    __asm__("fucompp ");
    if (!__intrinsic()) {
        fun_4010e3(ecx, 0x40b058, v15, 0x40a00000, ebp12, __return_address(), a2, a3);
    }
    __asm__("fld dword [ebp-0x8]");
    __asm__("fld dword [ebp-0x4]");
    __asm__("fucompp ");
    if (__intrinsic()) {
        fun_4010e3(ecx, 0x40b060, v16, 0x40a00000, ebp12, __return_address(), a2, a3);
    }
    __asm__("fld dword [ebp-0x4]");
    __asm__("fcomp dword [ebp-0x8]");
    ax17 = fpu_status_word18;
    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax17) + 1) & 65)) {
        fun_4010e3(ecx, 0x40b06c, v19, 0x40a00000, ebp12, __return_address(), a2, a3);
    }
    __asm__("fld dword [ebp-0x4]");
    __asm__("fcomp dword [ebp-0x8]");
    if (!__intrinsic()) {
        fun_4010e3(ecx, 0x40b078, v20, 0x40a00000, ebp12, __return_address(), a2, a3);
    }
    __asm__("fld dword [ebp-0x4]");
    __asm__("fcomp dword [ebp-0x8]");
    ax21 = fpu_status_word22;
    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax21) + 1) & 1)) {
        fun_4010e3(ecx, 0x40b088, v23, 0x40a00000, ebp12, __return_address(), a2, a3);
    }
    __asm__("fld dword [ebp-0x4]");
    __asm__("fcomp dword [ebp-0x8]");
    if (!__intrinsic()) {
        fun_4010e3(ecx, 0x40b09c, v24, 0x40a00000, ebp12, __return_address(), a2, a3);
    }
    return 0;
}

void fun_401dbc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18);

void fun_401114(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    fun_401dbc(0x40b0c8, __return_address(), reinterpret_cast<int32_t>(__zero_stack_offset()) + 8, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    return;
}

int32_t fun_40136e(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11);

void** fun_4014c0(void** a1, void** a2, void** a3, void** a4);

void** fun_4013f6(void** ecx, int32_t a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** fun_4010e3(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** edi9;
    void** esi10;
    void** ebx11;
    int32_t eax12;
    void** v13;
    void** eax14;

    eax12 = fun_40136e(0x40b0e8, edi9, esi10, ebx11, __return_address(), a2, a3, a4, a5, a6, a7);
    v13 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 + 4 + 24);
    eax14 = fun_4014c0(0x40b0e8, __return_address(), v13, 0x40b0e8);
    fun_4013f6(ecx, eax12, 0x40b0e8, 0x40b0e8, __return_address(), v13, 0x40b0e8);
    return eax14;
}

uint32_t fun_405318(int32_t ecx);

uint32_t fun_403004(int32_t ecx) {
    uint32_t eax2;

    eax2 = fun_405318(ecx);
    return eax2;
}

void** g40ba30 = reinterpret_cast<void**>(0);

void** fun_403391(void** ecx, void** a2, void** a3, void** a4);

void** fun_40321a(void** ecx, void** a2, void** a3, void** a4, void** a5);

int32_t g40b0b8 = 0x4031eb;

void fun_401182(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    int1_t zf6;

    zf6 = reinterpret_cast<int1_t>(g40ba30 == 2);
    if (!zf6) {
        fun_403391(ecx, __return_address(), a2, a3);
    }
    fun_40321a(ecx, __return_address(), __return_address(), a2, a3);
    g40b0b8();
    return;
}

int32_t g40b0bc = 1;

int32_t g40baa0 = 0;

void** fun_403391(void** ecx, void** a2, void** a3, void** a4) {
    void** eax5;
    int1_t zf6;
    int32_t eax7;

    eax5 = g40ba30;
    if (eax5 == 1 || !eax5 && (zf6 = g40b0bc == 1, zf6)) {
        fun_40321a(ecx, 0xfc, __return_address(), a2, a3);
        eax7 = g40baa0;
        if (eax7) {
            eax7(0xfc);
        }
        eax5 = fun_40321a(0xfc, 0xff, __return_address(), a2, a3);
    }
    return eax5;
}

void** g40b498 = reinterpret_cast<void**>(78);

void** fun_404080(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

int32_t GetStdHandle = 0x9f92;

int32_t WriteFile = 0x9f86;

int32_t GetModuleFileNameA = 0x9fa2;

void** fun_404f20(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6);

void** fun_4054f0(void** ecx, void** a2, void*** a3, uint32_t a4, void** a5, void** a6, void** a7, void** a8);

void fun_403d30(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22);

void** fun_404f30(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19);

int32_t fun_4053ea(void** ecx, void** a2, int32_t a3);

void** fun_4041a2(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, ...);

void** fun_40321a(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void* esp6;
    void* ebp7;
    void** eax8;
    void** ecx9;
    void** v10;
    void** ebx11;
    void** v12;
    void** esi13;
    void** v14;
    void*** esp15;
    void** v16;
    void** edi17;
    uint32_t eax18;
    uint32_t esi19;
    void** eax20;
    int1_t zf21;
    void** v22;
    void*** esi23;
    void** v24;
    void** v25;
    void** v26;
    void** eax27;
    void** v28;
    int32_t eax29;
    void** v30;
    int32_t eax31;
    void* esp32;
    void** edi33;
    void** v34;
    void** eax35;
    void** ecx36;
    void* esp37;
    void** v38;
    void** v39;
    void** eax40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
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
    void** ebx58;
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
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** eax85;

    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 0x8c);
    eax8 = g40b498;
    ecx9 = a2;
    v10 = ebx11;
    v12 = esi13;
    v14 = eax8;
    esp15 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp6) - 0x10c - 4 - 4 - 4);
    v16 = edi17;
    eax18 = 0;
    do {
        if (ecx9 == *reinterpret_cast<void***>(eax18 * 8 + 0x40b360)) 
            break;
        ++eax18;
    } while (eax18 < 19);
    esi19 = eax18 << 3;
    if (ecx9 == *reinterpret_cast<void***>(esi19 + 0x40b360)) {
        eax20 = g40ba30;
        if (eax20 == 1 || !eax20 && (zf21 = g40b0bc == 1, zf21)) {
            v22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0x94);
            esi23 = reinterpret_cast<void***>(esi19 + 0x40b364);
            v24 = *esi23;
            eax27 = fun_404080(ecx9, v24, v22, 0, v16, v12, v10, v25, v26);
            v28 = *esi23;
            eax29 = reinterpret_cast<int32_t>(GetStdHandle(v24, 0xf4, v28, eax27, v22, 0));
            WriteFile(v24, eax29, 0xf4, v28, eax27, v22, 0);
        } else {
            if (ecx9 != 0xfc) {
                v30 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffff80);
                eax31 = reinterpret_cast<int32_t>(GetModuleFileNameA(0, v30, 0x104));
                esp32 = reinterpret_cast<void*>(esp15 - 4 - 4 - 4 - 4 + 4);
                if (!eax31) {
                    fun_404f20(ecx9, reinterpret_cast<int32_t>(ebp7) + 0xffffff80, 0x4095cc, 0, v30, 0x104);
                    ecx9 = reinterpret_cast<void**>(0x4095cc);
                    esp32 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp32) - 4 - 4 - 4 + 4 + 4 + 4);
                }
                edi33 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffff80);
                eax35 = fun_404080(ecx9, edi33, 0, v30, 0x104, v16, v12, v10, v34);
                ecx36 = edi33;
                esp37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp32) - 4 - 4 + 4 + 4);
                if (reinterpret_cast<unsigned char>(eax35 + 1) > reinterpret_cast<unsigned char>(60)) {
                    v38 = edi33;
                    eax40 = fun_404080(ecx36, v38, 0, v30, 0x104, v16, v12, v10, v39);
                    edi33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax40) + (reinterpret_cast<int32_t>(ebp7) - 0x80 - 59));
                    fun_4054f0(ecx36, edi33, 0x4095c8, 3, v38, 0, v30, 0x104);
                    esp37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp37) - 4 - 4 + 4 - 4 - 4 - 4 - 4 + 4 + 16);
                }
                fun_404080(ecx36, edi33, 0, v30, 0x104, v16, v12, v10, v41);
                v42 = *reinterpret_cast<void***>(esi19 + 0x40b364);
                fun_404080(ecx36, v42, edi33, 0, v30, 0x104, v16, v12, v10);
                fun_403d30(edi33, 0, v30, 0x104, v16, v12, v10, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57);
                ebx58 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp37) - 4 - 4 + 4 - 4 - 4 + 4 + 4 + 4 - 4 + 4);
                fun_404f20(edi33, ebx58, 0x4095ac, 0, v30, 0x104);
                fun_404f30(edi33, ebx58, edi33, ebx58, 0x4095ac, 0, v30, 0x104, v16, v12, v10, v59, v60, v61, v62, v63, v64, v65, v66);
                fun_404f30(edi33, ebx58, 0x4095a8, ebx58, edi33, ebx58, 0x4095ac, 0, v30, 0x104, v16, v12, v10, v67, v68, v69, v70, v71, v72);
                v73 = *reinterpret_cast<void***>(esi19 + 0x40b364);
                fun_404f30(edi33, ebx58, v73, ebx58, 0x4095a8, ebx58, edi33, ebx58, 0x4095ac, 0, v30, 0x104, v16, v12, v10, v74, v75, v76, v77);
                fun_4053ea(edi33, ebx58, "Microsoft Visual C++ Runtime Library");
            }
        }
    }
    eax85 = fun_4041a2(v14, v16, v12, v10, v78, v79, v80, v81, v82, v83, v84);
    return eax85;
}

void** g40bbb0 = reinterpret_cast<void**>(0);

int32_t GetEnvironmentStringsW = 0xa046;

int32_t GetLastError = 0xa036;

int32_t GetEnvironmentStrings = 0x9fee;

void** fun_403ddf(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, ...);

void** fun_405a00(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

int32_t FreeEnvironmentStringsA = 0x9fd4;

int32_t WideCharToMultiByte = 0xa020;

void** fun_40403c(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, ...);

int32_t FreeEnvironmentStringsW = 0xa006;

void** fun_403810(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** v10;
    void** v11;
    void** v12;
    void** eax13;
    void** v14;
    void** ebx15;
    void** v16;
    void** ebp17;
    void** v18;
    void** esi19;
    void** v20;
    void** edi21;
    int32_t edi22;
    void** ebx23;
    void** esi24;
    void** eax25;
    int32_t eax26;
    void** eax27;
    void** esi28;
    void** eax29;
    void** ebp30;
    void** eax31;
    void** edi32;
    void** eax33;
    void** eax34;
    int32_t edi35;
    void** v36;
    void** eax37;
    void** eax38;
    void** eax39;
    void** v40;
    int32_t eax41;

    v10 = reinterpret_cast<void**>(__return_address());
    v11 = ecx;
    v12 = ecx;
    eax13 = g40bbb0;
    v14 = ebx15;
    v16 = ebp17;
    v18 = esi19;
    v20 = edi21;
    edi22 = GetEnvironmentStringsW;
    ebx23 = reinterpret_cast<void**>(0);
    esi24 = reinterpret_cast<void**>(0);
    if (!eax13) {
        eax25 = reinterpret_cast<void**>(edi22());
        esi24 = eax25;
        if (!esi24) {
            eax26 = reinterpret_cast<int32_t>(GetLastError());
            if (eax26 != 0x78) {
                eax13 = g40bbb0;
            } else {
                eax13 = reinterpret_cast<void**>(2);
                g40bbb0 = reinterpret_cast<void**>(2);
            }
        } else {
            g40bbb0 = reinterpret_cast<void**>(1);
            goto addr_40385e_7;
        }
    }
    if (!reinterpret_cast<int1_t>(eax13 == 1)) {
        if (eax13 != 2 && eax13 || (eax27 = reinterpret_cast<void**>(GetEnvironmentStrings()), esi28 = eax27, esi28 == 0)) {
            addr_4038e3_10:
            eax29 = reinterpret_cast<void**>(0);
        } else {
            if (*reinterpret_cast<void***>(esi28)) {
                addr_4038f7_12:
                ++eax27;
                if (*reinterpret_cast<void***>(eax27)) 
                    goto addr_4038f7_12;
                ++eax27;
                if (*reinterpret_cast<void***>(eax27)) 
                    goto addr_4038f7_12;
            }
            ebp30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax27) - reinterpret_cast<unsigned char>(esi28) + 1);
            eax31 = fun_403ddf(ecx, ebp30, v20, v18, v16, v14, v12, v11, v10, a2, a3, a4, a5, a6, a7, a8, a9);
            edi32 = eax31;
            if (edi32) {
                fun_405a00(ebp30, edi32, esi28, ebp30, v20, v18, v16);
            } else {
                edi32 = reinterpret_cast<void**>(0);
            }
            FreeEnvironmentStringsA(ebp30, esi28);
            eax29 = edi32;
        }
    } else {
        addr_40385e_7:
        if (esi24) 
            goto addr_40386a_18;
        eax33 = reinterpret_cast<void**>(edi22());
        esi24 = eax33;
        if (!esi24) 
            goto addr_4038e3_10; else 
            goto addr_40386a_18;
    }
    addr_40392b_20:
    return eax29;
    addr_40386a_18:
    eax34 = esi24;
    if (*reinterpret_cast<void***>(esi24)) {
        addr_403871_21:
        eax34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax34) + reinterpret_cast<unsigned char>(2));
        if (*reinterpret_cast<void***>(eax34)) 
            goto addr_403871_21;
        eax34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax34) + reinterpret_cast<unsigned char>(2));
        if (*reinterpret_cast<void***>(eax34)) 
            goto addr_403871_21;
    }
    edi35 = WideCharToMultiByte;
    v36 = reinterpret_cast<void**>(0);
    eax37 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax34) - reinterpret_cast<unsigned char>(esi24)) >> 1) + 1);
    eax38 = reinterpret_cast<void**>(edi35(0, 0, esi24, eax37, 0, 0, 0, 0));
    if (eax38 && (eax39 = fun_403ddf(ecx, eax38, 0, 0, esi24, eax37, 0, 0, 0, 0, v20, v18, v16, v14, v12, eax37, v10), ecx = eax38, v36 = eax39, !!eax39)) {
        v40 = eax39;
        eax41 = reinterpret_cast<int32_t>(edi35(ecx, 0, 0, esi24));
        if (!eax41) {
            fun_40403c(ecx, v36, 0, 0, esi24, v36, v40, eax38, 0, 0, 0, 0, esi24, eax37, v36, 0, 0, ecx, v36, 0, 0, esi24, v36, v40, eax38, 0, 0, 0, 0, esi24, eax37, v36, 0, 0);
            ecx = v36;
            v40 = reinterpret_cast<void**>(0);
        }
        ebx23 = v40;
    }
    FreeEnvironmentStringsW(ecx, esi24, 0, 0, esi24, eax37, v36, 0, 0, 0);
    eax29 = ebx23;
    goto addr_40392b_20;
}

void** g40bfec = reinterpret_cast<void**>(0);

void** fun_4059de(void** a1, void** a2, void** a3);

signed char g40bbac = 0;

void** g40d004;

int32_t g40ba8c = 0;

void fun_403602(void** ecx, void** a2, void** a3);

void** g40ba70 = reinterpret_cast<void**>(0);

void** g40ba74 = reinterpret_cast<void**>(0);

uint32_t fun_40376e(void** ecx, void** a2, void** a3, void** a4) {
    void*** ebp5;
    int1_t zf6;
    void** edi7;
    void** esi8;
    void** ebx9;
    void** eax10;
    void** v11;
    void* esi12;
    void** ebp13;
    void** eax14;
    uint32_t eax15;

    ebp5 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    zf6 = g40bfec == 0;
    if (zf6) {
        fun_4059de(edi7, esi8, ebx9);
    }
    g40bbac = 0;
    GetModuleFileNameA();
    eax10 = g40d004;
    g40ba8c = 0x40baa8;
    if (!eax10 || !*reinterpret_cast<void***>(eax10)) {
    }
    v11 = reinterpret_cast<void**>(ebp5 + 0xfffffffc);
    fun_403602(0, 0, v11);
    esi12 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx) << 2);
    eax14 = fun_403ddf(0, reinterpret_cast<unsigned char>(ecx) + reinterpret_cast<uint32_t>(esi12), 0, v11, 0, 0x40baa8, 0x104, edi7, esi8, ebx9, ecx, ecx, ebp13, __return_address(), a2, a3, a4);
    if (eax14) {
        fun_403602(reinterpret_cast<uint32_t>(esi12) + reinterpret_cast<unsigned char>(eax14), eax14, ebp5 + 0xfffffffc);
        g40ba70 = ecx - 1;
        g40ba74 = eax14;
        eax15 = 0;
    } else {
        eax15 = 0xffffffff;
    }
    return eax15;
}

int32_t g40b0ac = 0x401164;

int32_t fun_4053b0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void fun_403b21();

void** fun_4030af(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    int32_t eax7;
    void** v8;
    void** esi9;
    void** v10;
    void** edi11;
    void** ecx12;
    void** eax13;
    void** esi14;
    int32_t* esi15;
    int32_t eax16;

    v6 = reinterpret_cast<void**>(__return_address());
    eax7 = g40b0ac;
    if (eax7) {
        eax7();
    }
    v8 = esi9;
    v10 = edi11;
    ecx12 = reinterpret_cast<void**>(0x40b00c);
    eax13 = reinterpret_cast<void**>(0);
    esi14 = reinterpret_cast<void**>(0x40b00c);
    if (0) 
        goto addr_4030ea_4;
    do {
        if (eax13) 
            goto addr_403116_6;
        ecx12 = *reinterpret_cast<void***>(esi14);
        if (ecx12) {
            eax13 = reinterpret_cast<void**>(ecx12());
        }
        esi14 = esi14 + 4;
    } while (reinterpret_cast<unsigned char>(esi14) < reinterpret_cast<unsigned char>(0x40b01c));
    if (eax13) {
        addr_403116_6:
        return eax13;
    } else {
        addr_4030ea_4:
        fun_4053b0(ecx12, fun_403b21, v10, v8, v6, a2, a3);
        esi15 = reinterpret_cast<int32_t*>(0x40b000);
        if (!0) {
            do {
                eax16 = *esi15;
                if (eax16) {
                    eax16(fun_403b21);
                }
                ++esi15;
            } while (reinterpret_cast<uint32_t>(esi15) < 0x40b008);
        }
    }
    eax13 = reinterpret_cast<void**>(0);
    goto addr_403116_6;
}

void fun_403119(int32_t a1, int32_t a2, int32_t a3);

void fun_4031da(void** ecx, int32_t a2, void** a3, void** a4, void** a5) {
    fun_403119(__return_address(), 0, 0);
    return;
}

void fun_4031fc(void** ecx, void** a2, void** a3, void** a4) {
    fun_403119(0, 0, 1);
    return;
}

void fun_4031eb(void** ecx) {
    fun_403119(__return_address(), 1, 0);
    return;
}

void fun_40320b() {
    fun_403119(0, 1, 1);
    return;
}

void** g40bc48 = reinterpret_cast<void**>(0);

void** fun_403db3(uint32_t a1, void** a2);

void** fun_403ddf(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, ...) {
    void** v18;
    void** eax19;

    v18 = g40bc48;
    eax19 = fun_403db3(__return_address(), v18);
    return eax19;
}

void** fun_406b92(void** ecx, void** a2, void** a3, void** a4);

void** fun_403e18(void** ecx, void** a2) {
    void** eax3;
    void** ecx4;
    void** ebx5;
    void** eax6;
    void** edi7;
    void** v8;
    void** eax9;
    void** eax10;
    void** eax11;

    eax3 = *reinterpret_cast<void***>(a2 + 12);
    ecx4 = eax3;
    *reinterpret_cast<unsigned char*>(&ecx4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx4) & 3);
    ebx5 = reinterpret_cast<void**>(0);
    if (*reinterpret_cast<unsigned char*>(&ecx4) == 2 && *reinterpret_cast<uint16_t*>(&eax3) & 0x108) {
        eax6 = *reinterpret_cast<void***>(a2 + 8);
        edi7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) - reinterpret_cast<unsigned char>(eax6));
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi7) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi7 == 0))) {
            v8 = *reinterpret_cast<void***>(a2 + 16);
            eax9 = fun_406b92(ecx4, v8, eax6, edi7);
            if (eax9 != edi7) {
                *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) | 32);
                ebx5 = reinterpret_cast<void**>(0xffffffff);
            } else {
                eax10 = *reinterpret_cast<void***>(a2 + 12);
                if (*reinterpret_cast<signed char*>(&eax10) < 0) {
                    *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax10) & 0xfffffffd);
                }
            }
        }
    }
    eax11 = *reinterpret_cast<void***>(a2 + 8);
    *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(a2) = eax11;
    return ebx5;
}

struct s0 {
    signed char[12] pad12;
    unsigned char f12;
};

struct s1 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_401432(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void fun_401489(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    int1_t zf9;
    struct s0* edi10;
    void** v11;
    void** ebx12;
    void** v13;
    void** esi14;
    uint32_t* esi15;
    uint32_t* eax16;
    struct s1* edi17;
    void** edi18;

    v8 = reinterpret_cast<void**>(__return_address());
    zf9 = (edi10->f12 & 64) == 0;
    v11 = ebx12;
    v13 = esi14;
    esi15 = eax16;
    if (zf9 || edi17->f8) {
        do {
            if (reinterpret_cast<signed char>(a2) <= reinterpret_cast<signed char>(0)) 
                break;
            --a2;
            fun_401432(edi18, v13, v11, v8, a2, a3, a4, a5);
        } while (*esi15 != 0xffffffff);
    } else {
        *esi15 = *esi15 + reinterpret_cast<unsigned char>(a2);
    }
    return;
}

void** g40b490 = reinterpret_cast<void**>(8);

void** g40b0c0 = reinterpret_cast<void**>(84);

void** fun_4041b0(void** a1, void** a2, uint32_t a3, void** a4);

void fun_401465(void** ecx, void** a2, void** a3, void** a4, void** a5);

void** fun_40410b(void** ecx, void** a2, uint16_t a3);

void** g40b0c4 = reinterpret_cast<void**>(68);

int32_t g40b348 = 0x4051bd;

int32_t g40b354 = 0x4051bd;

int32_t g40b34c = 0x4051bd;

void** fun_4014c0(void** a1, void** a2, void** a3, void** a4) {
    void* ebp5;
    void** eax6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** ebx11;
    void** bl12;
    void** ecx13;
    void** v14;
    void** esi15;
    void** v16;
    void** edi17;
    void** edi18;
    void** edi19;
    void** v20;
    uint32_t eax21;
    int32_t eax22;
    void** eax23;
    void** ecx24;
    void** v25;
    void** ecx26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    int32_t eax39;
    int32_t eax40;
    int32_t eax41;
    int32_t eax42;
    int1_t less43;
    int1_t less44;
    int32_t eax45;
    int32_t eax46;
    int32_t eax47;
    int32_t eax48;
    void** esi49;
    void** v50;
    void** v51;
    void** v52;
    int32_t v53;
    void** eax54;
    int32_t eax55;
    void** eax56;
    void** v57;
    void** eax58;
    void** edx59;
    int32_t eax60;
    int32_t eax61;
    int32_t eax62;
    int32_t eax63;
    uint32_t v64;
    void** ebx65;
    void** eax66;
    uint1_t less67;
    uint1_t cf68;
    void** ebx69;
    void** edi70;
    void* esi71;
    void** eax72;
    void** eax73;
    void** eax74;
    void** esi75;
    void** v76;
    void** v77;
    int32_t v78;
    void** ebx79;
    void** esi80;
    void** ebx81;
    void** eax82;
    void** v83;
    void** eax84;
    int32_t eax85;
    int32_t eax86;
    int32_t eax87;
    void** eax88;
    void** eax89;
    void** eax90;
    void** eax91;
    void** eax92;
    void** eax93;
    uint32_t edi94;
    void** v95;
    void** v96;
    void** eax97;
    void** v98;
    int32_t v99;
    void** eax100;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x1d4);
    eax6 = g40b498;
    v7 = eax6;
    v8 = reinterpret_cast<void**>(0);
    v9 = reinterpret_cast<void**>(0);
    v10 = ebx11;
    bl12 = *reinterpret_cast<void***>(a2);
    ecx13 = reinterpret_cast<void**>(0);
    if (bl12) {
        v14 = esi15;
        v16 = edi17;
        edi18 = a2;
        while (edi19 = edi18 + 1, v20 = edi19, !0) {
            if (reinterpret_cast<signed char>(bl12) < reinterpret_cast<signed char>(32) || reinterpret_cast<signed char>(bl12) > reinterpret_cast<signed char>(0x78)) {
                eax21 = 0;
            } else {
                eax21 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(bl12 + 0x4090c8))) & 15;
            }
            eax22 = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx13 + eax21 * 8) + 0x4090e8);
            eax23 = reinterpret_cast<void**>(eax22 >> 4);
            ecx24 = reinterpret_cast<void**>(7);
            v25 = eax23;
            switch (eax23) {
                addr_4016dc_9:
            case 0:
                ecx26 = g40b490;
                v27 = reinterpret_cast<void**>(0);
                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx26 + reinterpret_cast<unsigned char>(bl12) * 2) + 1) & 0x80) {
                    fun_401432(a1, v16, v14, v10, v28, v29, v30, v31);
                    v20 = edi19 + 1;
                }
                fun_401432(a1, v16, v14, v10, v28, v29, v32, v31);
                goto addr_401c71_12;
            case 1:
                v33 = reinterpret_cast<void**>(0xffffffff);
                v34 = reinterpret_cast<void**>(0);
                v35 = reinterpret_cast<void**>(0);
                v36 = reinterpret_cast<void**>(0);
                v37 = reinterpret_cast<void**>(0);
                v38 = reinterpret_cast<void**>(0);
                v27 = reinterpret_cast<void**>(0);
                goto addr_401c71_12;
            case 2:
                eax39 = reinterpret_cast<int32_t>(bl12 - 32);
                if (!eax39) {
                    v38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v38) | 2);
                    goto addr_401c71_12;
                } else {
                    eax40 = eax39 - 3;
                    if (!eax40) {
                        *reinterpret_cast<unsigned char*>(&v38) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&v38) | 0x80);
                        goto addr_401c71_12;
                    } else {
                        eax41 = eax40 - 8;
                        if (!eax41) {
                            v38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v38) | 1);
                            goto addr_401c71_12;
                        } else {
                            eax42 = eax41 - 1 - 1;
                            if (!eax42) {
                                v38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v38) | 4);
                                goto addr_401c71_12;
                            } else {
                                if (!(eax42 - 3)) {
                                    v38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v38) | 8);
                                    goto addr_401c71_12;
                                }
                            }
                        }
                    }
                }
            case 3:
                if (!reinterpret_cast<int1_t>(bl12 == 42)) {
                    v36 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(bl12 + reinterpret_cast<uint32_t>(v36 + reinterpret_cast<unsigned char>(v36) * 4) * 2) + 0xffffffd0);
                    goto addr_401c71_12;
                } else {
                    a3 = a3 + 4;
                    less43 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(a3 + 0xfffffffc)) < reinterpret_cast<signed char>(0);
                    v36 = *reinterpret_cast<void***>(a3 + 0xfffffffc);
                    if (less43) {
                        v38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v38) | 4);
                        v36 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(v36));
                        goto addr_401c71_12;
                    }
                }
            case 4:
                v33 = reinterpret_cast<void**>(0);
                goto addr_401c71_12;
            case 5:
                if (!reinterpret_cast<int1_t>(bl12 == 42)) {
                    v33 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(bl12 + reinterpret_cast<uint32_t>(v33 + reinterpret_cast<unsigned char>(v33) * 4) * 2) + 0xffffffd0);
                    goto addr_401c71_12;
                } else {
                    a3 = a3 + 4;
                    less44 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(a3 + 0xfffffffc)) < reinterpret_cast<signed char>(0);
                    v33 = *reinterpret_cast<void***>(a3 + 0xfffffffc);
                    if (less44) {
                        v33 = reinterpret_cast<void**>(0xffffffff);
                        goto addr_401c71_12;
                    }
                }
            case 6:
                if (bl12 != 73) {
                    if (bl12 == 0x68) {
                        v38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v38) | 32);
                        goto addr_401c71_12;
                    } else {
                        if (bl12 == 0x6c) {
                            v38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v38) | 16);
                            goto addr_401c71_12;
                        } else {
                            if (reinterpret_cast<int1_t>(bl12 == 0x77)) {
                                *reinterpret_cast<unsigned char*>(&v38 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&v38 + 1) | 8);
                                goto addr_401c71_12;
                            }
                        }
                    }
                }
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi19) == 54) && reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi19 + 1) == 52)) {
                    *reinterpret_cast<unsigned char*>(&v38 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&v38 + 1) | 0x80);
                    v20 = edi19 + 1 + 1;
                    goto addr_401c71_12;
                }
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi19) == 51) && reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi19 + 1) == 50)) {
                    *reinterpret_cast<unsigned char*>(&v38 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&v38 + 1) & 0x7f);
                    v20 = edi19 + 1 + 1;
                    goto addr_401c71_12;
                }
                if (*reinterpret_cast<void***>(edi19) == 100 || (*reinterpret_cast<void***>(edi19) == 0x69 || (*reinterpret_cast<void***>(edi19) == 0x6f || (*reinterpret_cast<void***>(edi19) == 0x75 || (*reinterpret_cast<void***>(edi19) == 0x78 || *reinterpret_cast<void***>(edi19) == 88))))) {
                    addr_401c71_12:
                    edi18 = v20;
                    bl12 = *reinterpret_cast<void***>(edi18);
                    if (!bl12) 
                        goto addr_401c81_45;
                } else {
                    v25 = reinterpret_cast<void**>(0);
                    goto addr_4016dc_9;
                }
                ecx13 = v25;
                break;
            case 7:
                eax45 = reinterpret_cast<signed char>(bl12);
                if (eax45 > 0x67) {
                    eax46 = eax45 - 0x69;
                    if (!eax46) {
                        addr_40182b_50:
                        v38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v38) | 64);
                        goto addr_40182f_51;
                    } else {
                        eax47 = eax46 - 5;
                        if (!eax47) {
                            a3 = a3 + 4;
                            if (!(*reinterpret_cast<unsigned char*>(&v38) & 32)) {
                                ecx24 = reinterpret_cast<void**>(0);
                                *reinterpret_cast<void***>(*reinterpret_cast<void***>(a3 + 0xfffffffc)) = reinterpret_cast<void**>(0);
                            } else {
                                ecx24 = reinterpret_cast<void**>(0);
                                *reinterpret_cast<void***>(*reinterpret_cast<void***>(a3 + 0xfffffffc)) = reinterpret_cast<void**>(0);
                            }
                            v35 = reinterpret_cast<void**>(1);
                            goto addr_401c5e_57;
                        }
                        eax48 = eax47 - 1;
                        if (eax48) 
                            goto addr_40199b_59;
                    }
                } else {
                    if (eax45 >= 0x65) {
                        addr_4017b9_61:
                        v38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v38) | 64);
                        esi49 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffffc8);
                        v50 = esi49;
                        if (reinterpret_cast<signed char>(v33) >= reinterpret_cast<signed char>(0)) {
                            if (v33) {
                                if (reinterpret_cast<signed char>(v33) > reinterpret_cast<signed char>(0x200)) {
                                    v33 = reinterpret_cast<void**>(0x200);
                                }
                                if (reinterpret_cast<signed char>(v33) > reinterpret_cast<signed char>(0xa3)) {
                                    eax54 = fun_403ddf(7, v33 + 0x15d, v16, v14, v10, v28, v29, v51, v31, v25, v34, v52, v35, v9, v27, v36, v37, 7, v33 + 0x15d, v16, v14, v10, v28, v29, v53, v31, v25, v34, v52, v35, v9, v27, v36, v37);
                                    v9 = eax54;
                                    if (!eax54) {
                                        v33 = reinterpret_cast<void**>(0xa3);
                                        goto addr_40190d_68;
                                    } else {
                                        v50 = eax54;
                                        esi49 = eax54;
                                        goto addr_40190d_68;
                                    }
                                }
                            } else {
                                if (reinterpret_cast<int1_t>(bl12 == 0x67)) {
                                    v33 = reinterpret_cast<void**>(1);
                                    goto addr_40190d_68;
                                }
                            }
                        } else {
                            v33 = reinterpret_cast<void**>(6);
                            goto addr_40190d_68;
                        }
                    } else {
                        if (eax45 > 88) {
                            eax55 = eax45 - 90;
                            if (!eax55) {
                                a3 = a3 + 4;
                                if (!*reinterpret_cast<void***>(a3 + 0xfffffffc) || (ecx24 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(a3 + 0xfffffffc) + 4), ecx24 == 0)) {
                                    eax56 = g40b0c0;
                                    v50 = eax56;
                                    v57 = eax56;
                                    goto addr_401977_77;
                                } else {
                                    eax58 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(a3 + 0xfffffffc)))));
                                    v50 = ecx24;
                                    if (!(*reinterpret_cast<unsigned char*>(&v38 + 1) & 8)) {
                                        v27 = reinterpret_cast<void**>(0);
                                        goto addr_401b5a_80;
                                    } else {
                                        __asm__("cdq ");
                                        eax58 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax58) - reinterpret_cast<unsigned char>(edx59)) >> 1);
                                        v27 = reinterpret_cast<void**>(1);
                                        goto addr_401b5a_80;
                                    }
                                }
                            } else {
                                eax60 = eax55 - 9;
                                if (eax60) {
                                    if (eax60 - 1) 
                                        goto addr_401b5d_84; else 
                                        goto addr_40182b_50;
                                }
                            }
                        } else {
                            if (eax45 == 88) {
                                addr_401a03_86:
                                v52 = reinterpret_cast<void**>(7);
                                goto addr_401a06_87;
                            } else {
                                eax61 = eax45 - 67;
                                if (!eax61) {
                                    if (!(*reinterpret_cast<uint16_t*>(&v38) & 0x830)) {
                                        *reinterpret_cast<unsigned char*>(&v38 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&v38 + 1) | 8);
                                        goto addr_4017e5_91;
                                    }
                                } else {
                                    eax62 = eax61 - 1 - 1;
                                    if (!eax62 || (eax63 = eax62 - 1 - 1, eax63 == 0)) {
                                        v34 = reinterpret_cast<void**>(1);
                                        bl12 = bl12 + 32;
                                        goto addr_4017b9_61;
                                    } else {
                                        if (eax63 - 12) 
                                            goto addr_401b5d_84;
                                        if (!(*reinterpret_cast<uint16_t*>(&v38) & 0x830)) {
                                            *reinterpret_cast<unsigned char*>(&v38 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&v38 + 1) | 8);
                                            goto addr_401768_97;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                v64 = 8;
                if (*reinterpret_cast<unsigned char*>(&v38) & 0x80) {
                    *reinterpret_cast<unsigned char*>(&v38 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&v38 + 1) | 2);
                }
                addr_401836_100:
                ebx65 = v38;
                if (!(0x8000 & reinterpret_cast<unsigned char>(ebx65))) {
                    a3 = a3 + 4;
                    if (!(*reinterpret_cast<unsigned char*>(&ebx65) & 32)) {
                        eax66 = *reinterpret_cast<void***>(a3 + 0xfffffffc);
                        if (*reinterpret_cast<unsigned char*>(&ebx65) & 64) {
                            addr_401a94_103:
                            __asm__("cdq ");
                        } else {
                            edx59 = reinterpret_cast<void**>(0);
                        }
                    } else {
                        if (!(*reinterpret_cast<unsigned char*>(&ebx65) & 64)) {
                            eax66 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(a3 + 0xfffffffc))));
                            goto addr_401a94_103;
                        } else {
                            eax66 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(a3 + 0xfffffffc))));
                            goto addr_401a94_103;
                        }
                    }
                } else {
                    eax66 = *reinterpret_cast<void***>(a3);
                    edx59 = *reinterpret_cast<void***>(a3 + 4);
                    ecx24 = a3 + 8;
                    a3 = ecx24;
                }
                if (*reinterpret_cast<unsigned char*>(&ebx65) & 64 && ((less67 = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx59) < reinterpret_cast<signed char>(0)), reinterpret_cast<uint1_t>(less67 | reinterpret_cast<uint1_t>(edx59 == 0))) && (less67 || !1))) {
                    cf68 = reinterpret_cast<uint1_t>(!!eax66);
                    eax66 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(eax66));
                    edx59 = reinterpret_cast<void**>(-(reinterpret_cast<unsigned char>(edx59) + cf68));
                    *reinterpret_cast<unsigned char*>(&v38 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&v38 + 1) | 1);
                }
                ebx69 = eax66;
                edi70 = edx59;
                if (!(reinterpret_cast<unsigned char>(v38) & 0x8000)) {
                    edi70 = reinterpret_cast<void**>(0);
                }
                if (reinterpret_cast<signed char>(v33) >= reinterpret_cast<signed char>(0)) {
                    v38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v38) & 0xfffffff7);
                    if (reinterpret_cast<signed char>(v33) > reinterpret_cast<signed char>(0x200)) {
                        v33 = reinterpret_cast<void**>(0x200);
                    }
                } else {
                    v33 = reinterpret_cast<void**>(1);
                }
                if (!(reinterpret_cast<unsigned char>(ebx69) | reinterpret_cast<unsigned char>(edi70))) {
                    v37 = reinterpret_cast<void**>(0);
                }
                esi71 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp5) + 0x1c7);
                while ((eax72 = v33, --v33, !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax72) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax72 == 0))) || reinterpret_cast<unsigned char>(ebx69) | reinterpret_cast<unsigned char>(edi70)) {
                    __asm__("cdq ");
                    eax73 = fun_4041b0(ebx69, edi70, v64, edx59);
                    ecx24 = ecx24 + 48;
                    v31 = ebx69;
                    ebx69 = eax73;
                    edi70 = edx59;
                    if (reinterpret_cast<signed char>(ecx24) > reinterpret_cast<signed char>(57)) {
                        ecx24 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx24) + reinterpret_cast<unsigned char>(v52));
                    }
                    esi71 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi71) - 1);
                }
                eax74 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0x1c7 - reinterpret_cast<uint32_t>(esi71));
                esi75 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi71) + 1);
                v8 = eax74;
                v50 = esi75;
                if (!(*reinterpret_cast<unsigned char*>(&v38 + 1) & 2) || (ecx24 = esi75, reinterpret_cast<int1_t>(v76 == 48)) && eax74) {
                    addr_401b5d_84:
                    if (v35) {
                        addr_401c5e_57:
                        if (v9) {
                            fun_40403c(ecx24, v9, v16, v14, v10, v28, v29, v77, v31, v25, v34, v52, v35, v9, v27, v36, v37, ecx24, v9, v16, v14, v10, v28, v29, v78, v31, v25, v34, v52, v35, v9, v27, v36, v37);
                            v9 = reinterpret_cast<void**>(0);
                            goto addr_401c71_12;
                        }
                    } else {
                        ebx79 = v38;
                        if (!(*reinterpret_cast<unsigned char*>(&ebx79) & 64)) 
                            goto addr_401b95_127;
                        if (*reinterpret_cast<unsigned char*>(&ebx79 + 1) & 1) 
                            goto addr_401b74_129;
                    }
                } else {
                    --v50;
                    ecx24 = v50;
                    eax58 = eax74 + 1;
                    goto addr_401b5a_80;
                }
                if (!(*reinterpret_cast<unsigned char*>(&ebx79) & 1)) {
                    if (!(*reinterpret_cast<unsigned char*>(&ebx79) & 2)) {
                        addr_401b95_127:
                        esi80 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v36) - reinterpret_cast<unsigned char>(v37) - reinterpret_cast<unsigned char>(v8));
                        if (!(*reinterpret_cast<unsigned char*>(&ebx79) & 12)) {
                            fun_401465(ecx24, 32, esi80, a1, v16);
                        }
                    } else {
                        goto addr_401b8e_135;
                    }
                } else {
                    goto addr_401b8e_135;
                }
                fun_401489(reinterpret_cast<int32_t>(ebp5) + 0xffffffb0, v37, v16, v14, v10, v28, v29);
                ecx24 = v37;
                if (*reinterpret_cast<unsigned char*>(&ebx79) & 8 && !(*reinterpret_cast<unsigned char*>(&ebx79) & 4)) {
                    fun_401465(ecx24, 48, esi80, a1, v16);
                }
                if (!v27 || reinterpret_cast<signed char>(v8) <= reinterpret_cast<signed char>(0)) {
                    fun_401489(v50, v8, v16, v14, v10, v28, v29);
                    ecx24 = v8;
                } else {
                    ebx81 = v50;
                    v31 = v8;
                    do {
                        --v31;
                        eax82 = reinterpret_cast<void**>(0);
                        eax82 = *reinterpret_cast<void***>(ebx81);
                        v83 = eax82;
                        eax84 = fun_40410b(ecx24, reinterpret_cast<int32_t>(ebp5) + 0x1c8, *reinterpret_cast<uint16_t*>(&v83));
                        ebx81 = ebx81 + 1 + 1;
                        ecx24 = v83;
                        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax84) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax84 == 0)) 
                            break;
                        fun_401489(reinterpret_cast<int32_t>(ebp5) + 0x1c8, eax84, v16, v14, v10, v28, v29);
                        ecx24 = eax84;
                    } while (v31);
                    goto addr_401c33_144;
                }
                addr_401c44_145:
                if (*reinterpret_cast<unsigned char*>(&v38) & 4) {
                    fun_401465(ecx24, 32, esi80, a1, v16);
                    goto addr_401c5e_57;
                }
                addr_401c33_144:
                goto addr_401c44_145;
                addr_401b8e_135:
                v37 = reinterpret_cast<void**>(1);
                goto addr_401b95_127;
                addr_401b74_129:
                goto addr_401b8e_135;
                addr_401b5a_80:
                v8 = eax58;
                goto addr_401b5d_84;
                addr_40199b_59:
                eax85 = eax48 - 1;
                if (!eax85) {
                    v33 = reinterpret_cast<void**>(8);
                    goto addr_401a03_86;
                } else {
                    eax86 = eax85 - 3;
                    if (!eax86) {
                        addr_401768_97:
                        ecx24 = v33;
                        if (reinterpret_cast<int1_t>(ecx24 == 0xffffffff)) {
                            ecx24 = reinterpret_cast<void**>(0x7fffffff);
                        }
                    } else {
                        eax87 = eax86 - 1 - 1;
                        if (!eax87) {
                            addr_40182f_51:
                            v64 = 10;
                            goto addr_401836_100;
                        } else {
                            if (eax87 - 3) 
                                goto addr_401b5d_84;
                            v52 = reinterpret_cast<void**>(39);
                            goto addr_401a06_87;
                        }
                    }
                }
                a3 = a3 + 4;
                eax88 = *reinterpret_cast<void***>(a3 + 0xfffffffc);
                v50 = eax88;
                if (!(*reinterpret_cast<uint16_t*>(&v38) & 0x810)) {
                    if (!eax88) {
                        eax89 = g40b0c0;
                        v50 = eax89;
                    }
                    eax90 = v50;
                    while (ecx24 && (--ecx24, !!*reinterpret_cast<void***>(eax90))) {
                        ++eax90;
                    }
                    eax58 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax90) - reinterpret_cast<unsigned char>(v50));
                    goto addr_401b5a_80;
                } else {
                    if (!eax88) {
                        eax91 = g40b0c4;
                        v50 = eax91;
                    }
                    eax92 = v50;
                    v27 = reinterpret_cast<void**>(1);
                    while (ecx24 && (--ecx24, !!*reinterpret_cast<void***>(eax92))) {
                        eax92 = eax92 + 1 + 1;
                    }
                    eax58 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax92) - reinterpret_cast<unsigned char>(v50)) >> 1);
                    goto addr_401b5a_80;
                }
                addr_401a06_87:
                v64 = 16;
                if (*reinterpret_cast<unsigned char*>(&v38) & 0x80) {
                    v37 = reinterpret_cast<void**>(2);
                    goto addr_401836_100;
                }
                addr_40190d_68:
                ecx24 = *reinterpret_cast<void***>(a3);
                eax93 = a3 + 8;
                a3 = eax93;
                v29 = *reinterpret_cast<void***>(eax93 + 0xfffffffc);
                v28 = ecx24;
                g40b348(reinterpret_cast<int32_t>(ebp5) - 0x80, esi49, static_cast<int32_t>(reinterpret_cast<signed char>(bl12)), v33, v34);
                edi94 = reinterpret_cast<unsigned char>(v38) & 0x80;
                if (edi94 && !v33) {
                    g40b354();
                    ecx24 = esi49;
                }
                if (reinterpret_cast<int1_t>(bl12 == 0x67) && !edi94) {
                    g40b34c(ecx24);
                    ecx24 = esi49;
                }
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi49) == 45)) {
                    *reinterpret_cast<unsigned char*>(&v38 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&v38 + 1) | 1);
                    ++esi49;
                    v50 = esi49;
                }
                v57 = esi49;
                addr_401977_77:
                eax58 = fun_404080(ecx24, v57, v16, v14, v10, v28, v29, v95, v31);
                ecx24 = v57;
                goto addr_401b5a_80;
                addr_4017e5_91:
                a3 = a3 + 4;
                if (!(*reinterpret_cast<uint16_t*>(&v38) & 0x810)) {
                    v8 = reinterpret_cast<void**>(1);
                } else {
                    v96 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(a3 + 0xfffffffc))));
                    eax97 = fun_40410b(7, reinterpret_cast<int32_t>(ebp5) + 0xffffffc8, *reinterpret_cast<uint16_t*>(&v96));
                    ecx24 = v96;
                    v8 = eax97;
                    if (reinterpret_cast<signed char>(eax97) < reinterpret_cast<signed char>(0)) {
                        v35 = reinterpret_cast<void**>(1);
                    }
                }
                v50 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffffc8);
                goto addr_401b5d_84;
            }
        }
        addr_401c81_45:
    }
    eax100 = fun_4041a2(v7, v28, v29, v98, v31, v25, v34, v52, v35, v9, v27, v7, v28, v29, v99, v31, v25, v34, v52, v35, v9, v27);
    return eax100;
}

uint32_t fun_403f26(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

void fun_401432(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    signed char al9;
    uint32_t eax10;
    void** al11;
    unsigned char al12;
    uint32_t* esi13;
    uint32_t* esi14;
    int32_t* esi15;
    int32_t* esi16;

    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx + 12)) & 64) || *reinterpret_cast<void***>(ecx + 8)) {
        *reinterpret_cast<void***>(ecx + 4) = *reinterpret_cast<void***>(ecx + 4) - 1;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx + 4)) < reinterpret_cast<signed char>(0)) {
            eax10 = fun_403f26(static_cast<int32_t>(al9), ecx, __return_address(), a2, a3, a4, a5, a6, a7);
        } else {
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx)) = al11;
            *reinterpret_cast<void***>(ecx) = *reinterpret_cast<void***>(ecx) + 1;
            eax10 = al12;
        }
        if (eax10 == 0xffffffff) {
            *esi13 = *esi14 | eax10;
            return;
        }
    }
    *esi15 = *esi16 + 1;
    return;
}

void** g40bc54 = reinterpret_cast<void**>(0);

void** g40b4a0 = reinterpret_cast<void**>(1);

void** g40bc64 = reinterpret_cast<void**>(0);

void** g40ba50 = reinterpret_cast<void**>(0);

void** fun_40410b(void** ecx, void** a2, uint16_t a3) {
    void* ebp4;
    int1_t zf5;
    void** v6;
    void** v7;
    void** eax8;
    uint16_t cx9;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    if (a2) {
        zf5 = g40bc54 == 0;
        if (!zf5) {
            v6 = g40b4a0;
            v7 = g40bc64;
            eax8 = reinterpret_cast<void**>(WideCharToMultiByte(v7, 0, reinterpret_cast<int32_t>(ebp4) + 12, 1, a2, v6, 0, reinterpret_cast<int32_t>(ebp4) + 8));
            if (!eax8 || !1) {
                addr_404161_4:
                g40ba50 = reinterpret_cast<void**>(42);
                goto addr_40416e_5;
            } else {
                addr_40416e_5:
                goto __return_address();
            }
        } else {
            cx9 = a3;
            if (cx9 > 0xff) 
                goto addr_404161_4;
            *reinterpret_cast<void***>(a2) = *reinterpret_cast<void***>(&cx9);
            goto addr_40416e_5;
        }
    } else {
        goto addr_40416e_5;
    }
}

void** fun_404080(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** ecx10;
    void** eax11;

    ecx10 = a2;
    if (!(reinterpret_cast<unsigned char>(ecx10) & 3)) {
        while (1) {
            addr_4040b0_2:
            ecx10 = ecx10 + 4;
            if (!((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx10)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx10) + 0x7efefeff)) & 0x81010100)) 
                continue;
            eax11 = *reinterpret_cast<void***>(ecx10 + 0xfffffffc);
            if (!*reinterpret_cast<signed char*>(&eax11)) 
                break;
            if (!*reinterpret_cast<signed char*>(&eax11 + 1)) 
                goto addr_4040f7_5;
            if (!(reinterpret_cast<unsigned char>(eax11) & 0xff0000)) 
                goto addr_4040ed_7;
            if (!(reinterpret_cast<unsigned char>(eax11) & 0xff000000)) 
                goto addr_4040e3_9;
        }
    } else {
        do {
            ++ecx10;
            if (!*reinterpret_cast<void***>(ecx10)) 
                goto addr_4040e3_9;
        } while (reinterpret_cast<unsigned char>(ecx10) & 3);
        goto addr_40409d_13;
    }
    return reinterpret_cast<unsigned char>(ecx10 + 0xfffffffc) - reinterpret_cast<unsigned char>(a2);
    addr_4040f7_5:
    return reinterpret_cast<unsigned char>(ecx10 + 0xfffffffd) - reinterpret_cast<unsigned char>(a2);
    addr_4040ed_7:
    return reinterpret_cast<unsigned char>(ecx10 + 0xfffffffe) - reinterpret_cast<unsigned char>(a2);
    addr_4040e3_9:
    return reinterpret_cast<unsigned char>(ecx10 + 0xffffffff) - reinterpret_cast<unsigned char>(a2);
    addr_40409d_13:
    goto addr_4040b0_2;
}

void** fun_4041b0(void** a1, void** a2, uint32_t a3, void** a4) {
    void** ecx5;
    uint32_t ebx6;
    void** eax7;
    void** eax8;
    void** esi9;
    void** tmp32_10;

    if (a4) {
        ecx5 = a4;
        ebx6 = a3;
        eax7 = a1;
        do {
            ecx5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx5) >> 1);
            __asm__("rcr ebx, 1");
            __asm__("rcr eax, 1");
        } while (ecx5);
        eax8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax7) / ebx6);
        esi9 = eax8;
        tmp32_10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(__intrinsic()) + reinterpret_cast<unsigned char>(eax8) * reinterpret_cast<unsigned char>(a4));
        if (reinterpret_cast<unsigned char>(tmp32_10) < reinterpret_cast<unsigned char>(__intrinsic())) 
            goto addr_40421d_5;
        if (reinterpret_cast<unsigned char>(tmp32_10) > reinterpret_cast<unsigned char>(a2)) 
            goto addr_40421d_5;
        if (reinterpret_cast<unsigned char>(tmp32_10) < reinterpret_cast<unsigned char>(a2)) 
            goto addr_404226_8;
        if (reinterpret_cast<unsigned char>(a3 * reinterpret_cast<unsigned char>(esi9)) <= reinterpret_cast<unsigned char>(a1)) 
            goto addr_404226_8;
    } else {
        esi9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a1) / a3);
        goto addr_404228_11;
    }
    addr_40421d_5:
    --esi9;
    addr_404226_8:
    addr_404228_11:
    return esi9;
}

void fun_401465(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** ebp8;
    void** v9;
    void** esi10;
    int32_t* esi11;
    int32_t* eax12;

    v6 = reinterpret_cast<void**>(__return_address());
    v7 = ebp8;
    v9 = esi10;
    esi11 = eax12;
    do {
        if (reinterpret_cast<signed char>(a3) <= reinterpret_cast<signed char>(0)) 
            break;
        --a3;
        fun_401432(a4, v9, v7, v6, a2, a3, a4, a5);
    } while (*esi11 != -1);
    return;
}

int32_t g40bec4 = 0;

void** fun_405d85(void** ecx, void** a2, void** a3, void** a4, void** a5);

void** g40bec0 = reinterpret_cast<void**>(0);

int32_t HeapFree = 0xa0bc;

void** fun_405db0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

void** fun_40403c(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, ...) {
    int1_t zf18;
    void** esi19;
    void** eax20;
    void** v21;
    void** eax22;
    void** eax23;

    if (a2) {
        zf18 = g40bec4 == 3;
        if (!zf18 || (eax20 = fun_405d85(ecx, a2, esi19, __return_address(), a2), ecx = a2, eax20 == 0)) {
            v21 = g40bec0;
            eax22 = reinterpret_cast<void**>(HeapFree(ecx, v21, 0));
        } else {
            eax23 = fun_405db0(ecx, eax20, a2, esi19, __return_address(), a2, a3, a4, a5);
            return eax23;
        }
    }
    return eax22;
}

void fun_403bd0(void** a1, void** a2, void** a3);

void fun_406f0f(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

int32_t ExitProcess = 0x9f50;

void** fun_4041a2(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, ...) {
    int1_t zf12;
    int32_t ebp13;
    int32_t ebp14;
    void** eax15;

    while (zf12 = ecx == g40b498, !zf12) {
        fun_403bd0(0x409b10, 8, __return_address());
        *reinterpret_cast<uint32_t*>(ebp13 - 4) = 0;
        fun_406f0f(1, 0, 0x409b10, 8, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
        *reinterpret_cast<uint32_t*>(ebp14 - 4) = 0xffffffff;
        eax15 = reinterpret_cast<void**>(ExitProcess(3, 0x409b10, 8));
    }
    return eax15;
}

void** g40bc84 = reinterpret_cast<void**>(0);

void** fun_406564(void** ecx, void** a2);

int32_t HeapAlloc = 0xa0c8;

void** fun_406b77(void** ecx);

void** fun_4045e0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

void** fun_404245(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** v15;
    void** v16;
    void** ebx17;
    void** v18;
    void** esi19;
    void** esi20;
    void** v21;
    void** edi22;
    void** ebx23;
    void** edi24;
    int1_t zf25;
    int1_t below_or_equal26;
    void** eax27;
    void** v28;
    void** eax29;
    int1_t zf30;
    void** eax31;

    v15 = reinterpret_cast<void**>(__return_address());
    v16 = ebx17;
    v18 = esi19;
    esi20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a2) * reinterpret_cast<unsigned char>(a3));
    v21 = edi22;
    ebx23 = esi20;
    if (!esi20) {
        ++esi20;
    }
    do {
        edi24 = reinterpret_cast<void**>(0);
        if (reinterpret_cast<unsigned char>(esi20) <= reinterpret_cast<unsigned char>(0xffffffe0)) {
            zf25 = g40bec4 == 3;
            if (!zf25) 
                goto addr_404283_5;
            esi20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi20 + 15) & 0xfffffff0);
            below_or_equal26 = reinterpret_cast<unsigned char>(ebx23) <= reinterpret_cast<unsigned char>(g40bc84);
            if (!below_or_equal26) 
                goto addr_404283_5;
            eax27 = fun_406564(ecx, ebx23);
            edi24 = eax27;
            ecx = ebx23;
            if (edi24) 
                goto addr_4042ae_8;
            addr_404283_5:
            v28 = g40bec0;
            eax29 = reinterpret_cast<void**>(HeapAlloc(ecx, v28, 8, esi20));
            edi24 = eax29;
            if (edi24) 
                break;
        }
        zf30 = g40bc48 == 0;
        if (zf30) 
            break;
        eax31 = fun_406b77(ecx);
        ecx = esi20;
    } while (eax31);
    goto addr_4042ac_11;
    addr_4042ba_12:
    eax31 = edi24;
    addr_4042bc_13:
    return eax31;
    addr_4042ac_11:
    goto addr_4042bc_13;
    addr_4042ae_8:
    fun_4045e0(ecx, edi24, 0, ebx23, v21, v18, v16, v15, a2, a3, a4, a5, a6);
    goto addr_4042ba_12;
}

uint32_t fun_4070ad(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

uint32_t fun_404318(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void*** ebp7;
    void** v8;
    void** eax9;
    int32_t ecx10;
    void** esi11;
    void** eax12;
    void** v13;
    void** ecx14;
    void** v15;
    void** ebp16;
    uint32_t eax17;
    uint32_t eax18;
    void** ecx19;

    ebp7 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v8 = ecx;
    eax9 = a2;
    if (reinterpret_cast<unsigned char>(eax9 + 1) > reinterpret_cast<unsigned char>(0x100)) {
        ecx10 = reinterpret_cast<signed char>(eax9) >> 8;
        esi11 = g40b490;
        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi11 + *reinterpret_cast<unsigned char*>(&ecx10) * 2) + 1) & 0x80)) {
            *reinterpret_cast<unsigned char*>(&v8) = *reinterpret_cast<unsigned char*>(&eax9);
            *reinterpret_cast<unsigned char*>(&v8 + 1) = 0;
            eax12 = reinterpret_cast<void**>(1);
        } else {
            *reinterpret_cast<unsigned char*>(&v8 + 1) = *reinterpret_cast<unsigned char*>(&eax9);
            *reinterpret_cast<unsigned char*>(&v8) = *reinterpret_cast<unsigned char*>(&ecx10);
            *reinterpret_cast<signed char*>(&v8 + 2) = 0;
            eax12 = reinterpret_cast<void**>(2);
        }
        v13 = g40bc54;
        ecx14 = reinterpret_cast<void**>(ebp7 + 10);
        v15 = g40bc64;
        eax17 = fun_4070ad(ecx14, 1, ebp7 + 0xfffffffc, eax12, ecx14, v15, v13, 1, v8, ebp16, __return_address(), a2, a3);
        if (eax17) {
            eax18 = *reinterpret_cast<uint16_t*>(&a2 + 2);
        } else {
            return eax17;
        }
    } else {
        ecx19 = g40b490;
        eax18 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(ecx19 + reinterpret_cast<unsigned char>(eax9) * 2));
    }
    return eax18 & reinterpret_cast<unsigned char>(a3);
}

struct s2 {
    signed char[4] pad4;
    int32_t f4;
};

struct s3 {
    signed char[4] pad4;
    int32_t f4;
};

struct s4 {
    signed char[4] pad4;
    int32_t f4;
};

void** fun_404396(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12);

void** fun_401da6(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    struct s2* edx11;
    struct s3* edx12;
    struct s4* edx13;
    void** edx14;
    void** eax15;
    void** eax16;
    unsigned char** edx17;
    int32_t* edx18;

    edx11->f4 = edx12->f4 - 1;
    if (edx13->f4 < 0) {
        eax15 = fun_404396(ecx, edx14, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10);
        return eax15;
    } else {
        eax16 = reinterpret_cast<void**>(static_cast<uint32_t>(**edx17));
        *edx18 = reinterpret_cast<int32_t>(*edx17 + 1);
        return eax16;
    }
}

uint32_t fun_4044e0(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    int1_t less_or_equal6;
    void** ecx7;
    uint32_t eax8;

    less_or_equal6 = reinterpret_cast<signed char>(g40b4a0) <= reinterpret_cast<signed char>(1);
    if (less_or_equal6) {
        ecx7 = g40b490;
        return static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx7 + reinterpret_cast<unsigned char>(a2) * 2))) & 8;
    } else {
        eax8 = fun_404318(ecx, __return_address(), 8, __return_address(), a2, a3);
        return eax8;
    }
}

void fun_406e65(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

uint32_t fun_404474(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** ebx12;
    void** eax13;
    void** esi14;
    void** ebx15;
    void** eax16;
    uint32_t eax17;

    ebx12 = a2;
    if (ebx12 == 0xffffffff) 
        goto addr_4044c0_2;
    eax13 = *reinterpret_cast<void***>(a3 + 12);
    if (*reinterpret_cast<unsigned char*>(&eax13) & 1) 
        goto addr_404492_4;
    if (*reinterpret_cast<signed char*>(&eax13) >= reinterpret_cast<signed char>(0)) 
        goto addr_4044c0_2;
    if (*reinterpret_cast<unsigned char*>(&eax13) & 2) 
        goto addr_4044c0_2;
    addr_404492_4:
    if (!*reinterpret_cast<void***>(a3 + 8)) {
        fun_406e65(ecx, a3, esi14, ebx15, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }
    if (*reinterpret_cast<void***>(a3) == *reinterpret_cast<void***>(a3 + 8)) 
        goto addr_4044a6_9;
    addr_4044af_10:
    *reinterpret_cast<void***>(a3) = *reinterpret_cast<void***>(a3) - 1;
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) & 64)) {
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(a3)) = ebx12;
        goto addr_4044c8_12;
    }
    if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(a3)) == ebx12) {
        addr_4044c8_12:
        eax16 = *reinterpret_cast<void***>(a3 + 12);
        *reinterpret_cast<void***>(a3 + 4) = *reinterpret_cast<void***>(a3 + 4) + 1;
        *reinterpret_cast<void***>(a3 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax16) & 0xffffffef | 1);
        eax17 = reinterpret_cast<unsigned char>(ebx12) & 0xff;
    } else {
        *reinterpret_cast<void***>(a3) = *reinterpret_cast<void***>(a3) + 1;
        goto addr_4044c0_2;
    }
    addr_4044c3_15:
    return eax17;
    addr_4044a6_9:
    if (*reinterpret_cast<void***>(a3 + 4)) {
        addr_4044c0_2:
        eax17 = 0xffffffff;
        goto addr_4044c3_15;
    } else {
        *reinterpret_cast<void***>(a3) = *reinterpret_cast<void***>(a3) + 1;
        goto addr_4044af_10;
    }
}

void fun_403d30(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22) {
    int32_t v23;
    uint32_t eax24;
    void* ecx25;
    uint32_t eax26;
    int32_t* esp27;
    int32_t* esp28;
    int32_t eax29;

    v23 = reinterpret_cast<int32_t>(__return_address());
    if (eax24 >= 0x1000) {
        ecx25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 8);
        do {
            ecx25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx25) - 0x1000);
            eax26 = eax26 - 0x1000;
        } while (eax26 >= 0x1000);
        esp27 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx25) - eax26 - 4);
        *esp27 = v23;
        goto *esp27;
    } else {
        esp28 = reinterpret_cast<int32_t*>(-eax29 + reinterpret_cast<int32_t>(__zero_stack_offset()) + 4 - 4);
        *esp28 = v23;
        goto *esp28;
    }
}

void** fun_401d74(void** ecx, void** a2, void** a3, void** a4) {
    int1_t less_or_equal5;
    void** esi6;
    void** eax7;
    void** eax8;
    uint32_t eax9;
    void** esi10;

    less_or_equal5 = reinterpret_cast<signed char>(g40b4a0) <= reinterpret_cast<signed char>(1);
    esi6 = eax7;
    if (less_or_equal5) {
        eax8 = g40b490;
        eax9 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax8 + reinterpret_cast<unsigned char>(esi6) * 2))) & 4;
    } else {
        eax9 = fun_404318(ecx, esi6, 4, esi10, __return_address(), a2);
    }
    if (!eax9) {
        esi6 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(esi6) & 0xffffffdf) - 7);
    }
    return esi6;
}

struct s5 {
    int16_t f0;
    int32_t f2;
    int32_t f6;
    int16_t f10;
};

void** fun_4079c9(struct s5* a1, void*** a2, void** a3, void** a4, void* a5, uint32_t a6, int32_t a7);

struct s6 {
    void* f0;
    void* f4;
};

int32_t fun_404b31(struct s6* a1, void** a2, struct s5* a3, void*** a4, void** a5, void** a6, void* a7, uint32_t a8, int32_t a9);

void** fun_404b5d(void** a1, void** a2, void** a3) {
    void*** ebp4;
    void** eax5;
    void*** v6;
    struct s5* v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** ebp12;
    void** eax13;

    ebp4 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax5 = g40b498;
    v6 = ebp4 - 20;
    v7 = reinterpret_cast<struct s5*>(ebp4 - 16);
    fun_4079c9(v7, v6, a2, 0, 0, 0, 0);
    fun_404b31(ebp4 - 16, a1, v7, v6, a2, 0, 0, 0, 0);
    eax13 = fun_4041a2(eax5, v8, v9, v10, v11, eax5, ebp12, __return_address(), a1, a2, a3);
    return eax13;
}

struct s7 {
    void** f0;
    void** f1;
    void** f2;
    signed char f3;
};

void** fun_404be0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** esi13;
    void** edi14;
    void** eax15;
    uint32_t ecx16;
    uint32_t edx17;
    struct s7* esi18;
    void** edi19;
    uint32_t ecx20;
    uint32_t edx21;

    esi13 = a2;
    edi14 = a1;
    eax15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(esi13));
    if (reinterpret_cast<unsigned char>(edi14) <= reinterpret_cast<unsigned char>(esi13) || reinterpret_cast<unsigned char>(edi14) >= reinterpret_cast<unsigned char>(eax15)) {
        if (reinterpret_cast<unsigned char>(edi14) & 3) {
            if (reinterpret_cast<unsigned char>(a3) < reinterpret_cast<unsigned char>(4)) {
                goto *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(a3 - 4) * 4 + 0x404d3c);
            } else {
                goto *reinterpret_cast<int32_t*>((reinterpret_cast<unsigned char>(edi14) & 3) * 4 + 0x404c40);
            }
        }
        ecx16 = reinterpret_cast<unsigned char>(a3) >> 2;
        edx17 = reinterpret_cast<unsigned char>(a3) & 3;
        if (ecx16 >= 8) 
            goto addr_404c13_7;
    } else {
        esi18 = reinterpret_cast<struct s7*>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(esi13) + 0xfffffffc);
        edi19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(edi14) + 0xfffffffc);
        if (reinterpret_cast<unsigned char>(edi19) & 3) {
            eax15 = edi19;
            if (reinterpret_cast<unsigned char>(a3) >= reinterpret_cast<unsigned char>(4)) {
                goto *reinterpret_cast<int32_t*>((reinterpret_cast<unsigned char>(eax15) & 3) * 4 + 0x404dcc);
            }
            goto *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(a3) * 4 + 0x404ec8);
        } else {
            ecx20 = reinterpret_cast<unsigned char>(a3) >> 2;
            edx21 = reinterpret_cast<unsigned char>(a3) & 3;
            if (ecx20 < 8) {
                goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(-ecx20) * 4 + 0x404e78);
                goto *reinterpret_cast<int32_t*>(edx21 * 4 + 0x404ec8);
            } else {
                while (ecx20) {
                    --ecx20;
                    *reinterpret_cast<void***>(edi19) = esi18->f0;
                    edi19 = edi19 + 0xfffffffc;
                    --esi18;
                }
                goto *reinterpret_cast<int32_t*>(edx21 * 4 + 0x404ec8);
            }
        }
    }
    switch (ecx16) {
        addr_404d23_20:
    case 0:
        switch (edx17) {
        case 0:
            return eax15;
        case 1:
            *reinterpret_cast<void***>(edi14) = *reinterpret_cast<void***>(esi13);
            return a1;
        case 2:
            *reinterpret_cast<void***>(edi14) = *reinterpret_cast<void***>(esi13);
            *reinterpret_cast<void***>(edi14 + 1) = *reinterpret_cast<void***>(esi13 + 1);
            return a1;
        case 3:
            *reinterpret_cast<void***>(edi14) = *reinterpret_cast<void***>(esi13);
            *reinterpret_cast<void***>(edi14 + 1) = *reinterpret_cast<void***>(esi13 + 1);
            *reinterpret_cast<void***>(edi14 + 2) = *reinterpret_cast<void***>(esi13 + 2);
            return a1;
        }
        addr_404d10_25:
    case 1:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi14 + ecx16 * 4) - 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi13 + ecx16 * 4) - 4);
        eax15 = reinterpret_cast<void**>(ecx16 * 4);
        esi13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi13) + reinterpret_cast<unsigned char>(eax15));
        edi14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + reinterpret_cast<unsigned char>(eax15));
        goto addr_404d23_20;
        addr_404d08_26:
    case 2:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi14 + ecx16 * 4) - 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi13 + ecx16 * 4) - 8);
        goto addr_404d10_25;
        addr_404d00_27:
    case 3:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi14 + ecx16 * 4) - 12) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi13 + ecx16 * 4) - 12);
        goto addr_404d08_26;
        addr_404cf8_28:
    case 4:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi14 + ecx16 * 4) - 16) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi13 + ecx16 * 4) - 16);
        goto addr_404d00_27;
        addr_404cf0_29:
    case 5:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi14 + ecx16 * 4) - 20) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi13 + ecx16 * 4) - 20);
        goto addr_404cf8_28;
    case 6:
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edi14 + ecx16 * 4) - 24) = eax15;
        goto addr_404cf0_29;
    case 7:
    }
    addr_404c13_7:
    while (ecx16) {
        --ecx16;
        *reinterpret_cast<void***>(edi14) = *reinterpret_cast<void***>(esi13);
        edi14 = edi14 + 4;
        esi13 = esi13 + 4;
    }
    goto *reinterpret_cast<int32_t*>(edx17 * 4 + 0x404d2c);
    return eax15;
    *reinterpret_cast<signed char*>(edi19 + 3) = esi18->f3;
    return a1;
    *reinterpret_cast<signed char*>(edi19 + 3) = esi18->f3;
    *reinterpret_cast<void***>(edi19 + 2) = esi18->f2;
    return a1;
    *reinterpret_cast<signed char*>(edi19 + 3) = esi18->f3;
    *reinterpret_cast<void***>(edi19 + 2) = esi18->f2;
    *reinterpret_cast<void***>(edi19 + 1) = esi18->f1;
    return a1;
}

unsigned char g40ba44 = 0;

void** fun_405149(void** ecx, void** a2, void** a3);

void** fun_405018(void** a1, void** a2, void** a3, void** a4, void** a5);

void** g40ba40 = reinterpret_cast<void**>(0);

void** fun_402d1e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** g40b4a4 = reinterpret_cast<void**>(46);

void** fun_402d3b(void** ecx, void** a2, void** a3, void** a4, int32_t a5) {
    int1_t zf6;
    void** v7;
    void** v8;
    void** eax9;
    void** ebx10;
    void** esi11;
    void* eax12;
    void* ecx13;
    void** eax14;
    void** ecx15;
    void** edi16;
    void** esi17;
    void** ebx18;
    void** ebp19;
    void** eax20;
    void** edi21;
    void** cl22;
    void* ecx23;
    uint1_t zf24;
    void** ecx25;
    void** eax26;
    void** ecx27;
    void** eax28;
    void** ecx29;
    int32_t eax30;
    void** ecx31;
    int32_t eax32;

    zf6 = g40ba44 == 0;
    if (zf6) {
        v7 = *reinterpret_cast<void***>(a2 + 4);
        v8 = *reinterpret_cast<void***>(a2);
        eax9 = fun_405149(ecx, v8, v7);
        ebx10 = a4;
        esi11 = eax9;
        eax12 = reinterpret_cast<void*>(0);
        *reinterpret_cast<unsigned char*>(&eax12) = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(esi11) == 45);
        ecx13 = reinterpret_cast<void*>(0);
        *reinterpret_cast<unsigned char*>(&ecx13) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx10) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx10 == 0)));
        fun_405018(reinterpret_cast<int32_t>(ecx13) + (reinterpret_cast<int32_t>(eax12) + reinterpret_cast<unsigned char>(a3)), ebx10 + 1, esi11, v8, v7);
    } else {
        ebx10 = a4;
        eax14 = g40ba40;
        ecx15 = reinterpret_cast<void**>(0);
        *reinterpret_cast<unsigned char*>(&ecx15) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx10) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx10 == 0)));
        esi11 = eax14;
        fun_402d1e(ecx15, edi16, esi17, ebx18, ebp19, __return_address(), a2);
    }
    eax20 = a3;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi11) == 45)) {
        *reinterpret_cast<void***>(eax20) = reinterpret_cast<void**>(45);
        ++eax20;
    }
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx10) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx10 == 0))) {
        edi21 = eax20 + 1;
        *reinterpret_cast<void***>(eax20) = *reinterpret_cast<void***>(edi21);
        cl22 = g40b4a4;
        eax20 = edi21;
        *reinterpret_cast<void***>(eax20) = cl22;
    }
    ecx23 = reinterpret_cast<void*>(0);
    zf24 = reinterpret_cast<uint1_t>(g40ba44 == 0);
    *reinterpret_cast<unsigned char*>(&ecx23) = zf24;
    ecx25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ecx23) + reinterpret_cast<unsigned char>(eax20) + reinterpret_cast<unsigned char>(ebx10));
    eax26 = fun_404f20(ecx25, ecx25, 0x409178, edi16, esi17, ebx18);
    if (a5) {
        *reinterpret_cast<void***>(eax26) = reinterpret_cast<void**>(69);
    }
    ecx27 = eax26 + 1;
    if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(esi11 + 12)) != 48) {
        eax28 = *reinterpret_cast<void***>(esi11 + 4) - 1;
        if (reinterpret_cast<signed char>(eax28) < reinterpret_cast<signed char>(0)) {
            eax28 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(eax28));
            *reinterpret_cast<void***>(ecx27) = reinterpret_cast<void**>(45);
        }
        ecx29 = ecx27 + 1;
        if (reinterpret_cast<signed char>(eax28) >= reinterpret_cast<signed char>(100)) {
            __asm__("cdq ");
            eax30 = reinterpret_cast<signed char>(eax28) / 100;
            *reinterpret_cast<void***>(ecx29) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx29)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
            eax28 = reinterpret_cast<void**>(reinterpret_cast<signed char>(eax28) % 100);
        }
        ecx31 = ecx29 + 1;
        if (reinterpret_cast<signed char>(eax28) >= reinterpret_cast<signed char>(10)) {
            __asm__("cdq ");
            eax32 = reinterpret_cast<signed char>(eax28) / 10;
            *reinterpret_cast<void***>(ecx31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx31)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax32)));
            eax28 = reinterpret_cast<void**>(reinterpret_cast<signed char>(eax28) % 10);
        }
        *reinterpret_cast<void***>(ecx31 + 1) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx31 + 1)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
    }
    return a3;
}

void** fun_402d1e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    int32_t edi8;
    void** eax9;
    void** esi10;
    void** eax11;
    void* edi12;
    void** eax13;

    if (edi8) {
        eax11 = fun_404080(ecx, eax9, esi10, __return_address(), a2, a3, a4, a5, a6);
        eax13 = fun_404be0(reinterpret_cast<unsigned char>(eax9) + reinterpret_cast<uint32_t>(edi12), eax9, eax11 + 1, eax9, esi10, __return_address(), a2, a3, a4, a5, a6, a7);
    }
    return eax13;
}

void** g40ba48 = reinterpret_cast<void**>(0);

void** fun_402e2c(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    int1_t zf6;
    void** v7;
    void** v8;
    void** eax9;
    void** esi10;
    void** eax11;
    void* eax12;
    void** eax13;
    void* ecx14;
    void** ebp15;
    void** ebp16;
    void** edi17;
    void** esi18;
    void** ebp19;
    void** ebx20;
    void** al21;
    void** esi22;
    int1_t zf23;

    zf6 = g40ba44 == 0;
    if (zf6) {
        v7 = *reinterpret_cast<void***>(a2 + 4);
        v8 = *reinterpret_cast<void***>(a2);
        eax9 = fun_405149(ecx, v8, v7);
        esi10 = eax9;
        eax11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi10 + 4)) + reinterpret_cast<unsigned char>(a4));
        eax12 = reinterpret_cast<void*>(0);
        *reinterpret_cast<unsigned char*>(&eax12) = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(esi10) == 45);
        fun_405018(reinterpret_cast<int32_t>(eax12) + reinterpret_cast<unsigned char>(a3), eax11, esi10, v8, v7);
    } else {
        eax13 = g40ba48;
        esi10 = g40ba40;
        if (eax13 == a4) {
            ecx14 = reinterpret_cast<void*>(0);
            *reinterpret_cast<unsigned char*>(&ecx14) = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(esi10) == 45);
            ecx = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ecx14) + reinterpret_cast<unsigned char>(eax13) + reinterpret_cast<unsigned char>(a3));
            *reinterpret_cast<void***>(ecx) = reinterpret_cast<void**>(48);
            *reinterpret_cast<void***>(ecx + 1) = reinterpret_cast<void**>(0);
        }
    }
    ebp15 = a3;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi10) == 45)) {
        *reinterpret_cast<void***>(a3) = reinterpret_cast<void**>(45);
        ebp15 = a3 + 1;
    }
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi10 + 4)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(esi10 + 4) == 0))) {
        ebp16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp15) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi10 + 4)));
    } else {
        fun_402d1e(ecx, edi17, esi18, ebp19, ebx20, __return_address(), a2);
        *reinterpret_cast<void***>(ebp15) = reinterpret_cast<void**>(48);
        ebp16 = ebp15 + 1;
    }
    if (reinterpret_cast<signed char>(a4) > reinterpret_cast<signed char>(0) && (fun_402d1e(ecx, edi17, esi18, ebp19, ebx20, __return_address(), a2), al21 = g40b4a4, *reinterpret_cast<void***>(ebp16) = al21, reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi10 + 4)) < reinterpret_cast<signed char>(0))) {
        esi22 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi10 + 4)));
        zf23 = g40ba44 == 0;
        if (!zf23 || reinterpret_cast<signed char>(a4) >= reinterpret_cast<signed char>(esi22)) {
            a4 = esi22;
        }
        fun_402d1e(ecx, edi17, esi18, ebp19, ebx20, __return_address(), a2);
        fun_4045e0(ecx, ebp16 + 1, 48, a4, edi17, esi18, ebp19, ebx20, __return_address(), a2, a3, a4, a5);
    }
    return a3;
}

void** fun_40532e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

int32_t fun_4053b0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** eax8;
    uint32_t eax9;

    eax8 = fun_40532e(ecx, __return_address(), __return_address(), a2, a3, a4, a5, a6);
    eax9 = -reinterpret_cast<unsigned char>(eax8);
    return reinterpret_cast<int32_t>(-(eax9 - (eax9 + reinterpret_cast<uint1_t>(eax9 < eax9 + reinterpret_cast<uint1_t>(!!eax8))))) - 1;
}

int32_t GetModuleHandleA = 0x9f08;

int32_t GetProcAddress = 0x9f3e;

void fun_40307f(void** ecx, int32_t a2) {
    void** v3;
    int32_t eax4;
    int32_t eax5;
    int32_t eax6;
    void** v7;
    void** esi8;
    void** v9;
    void** edi10;
    void** ecx11;
    void** eax12;
    void** esi13;
    int32_t* esi14;
    int32_t eax15;

    v3 = reinterpret_cast<void**>(__return_address());
    eax4 = reinterpret_cast<int32_t>(GetModuleHandleA());
    if (eax4 && (eax5 = reinterpret_cast<int32_t>(GetProcAddress()), !!eax5)) {
        eax5(eax4);
    }
    ExitProcess();
    eax6 = g40b0ac;
    if (eax6) {
        eax6();
    }
    v7 = esi8;
    v9 = edi10;
    ecx11 = reinterpret_cast<void**>(0x40b00c);
    eax12 = reinterpret_cast<void**>(0);
    esi13 = reinterpret_cast<void**>(0x40b00c);
    if (0) 
        goto addr_4030ea_7;
    do {
        if (eax12) 
            goto addr_403116_9;
        ecx11 = *reinterpret_cast<void***>(esi13);
        if (ecx11) {
            eax12 = reinterpret_cast<void**>(ecx11());
        }
        esi13 = esi13 + 4;
    } while (reinterpret_cast<unsigned char>(esi13) < reinterpret_cast<unsigned char>(0x40b01c));
    if (eax12) {
        addr_403116_9:
        goto "mscoree.dll";
    } else {
        addr_4030ea_7:
        fun_4053b0(ecx11, fun_403b21, v9, v7, 0x4091d0, 0x4091d0, v3);
        esi14 = reinterpret_cast<int32_t*>(0x40b000);
        if (!0) {
            do {
                eax15 = *esi14;
                if (eax15) {
                    eax15(fun_403b21);
                }
                ++esi14;
            } while (reinterpret_cast<uint32_t>(esi14) < 0x40b008);
        }
    }
    goto addr_403116_9;
}

void** fun_404f20(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** edi7;
    void** ecx8;
    void** edx9;

    edi7 = a2;
    ecx8 = a3;
    if (!(reinterpret_cast<unsigned char>(ecx8) & 3)) {
        while (1) {
            addr_404fbe_3:
            edx9 = *reinterpret_cast<void***>(ecx8);
            ecx8 = ecx8 + 4;
            if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx8)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx8) + 0x7efefeff)) & 0x81010100) {
                if (!edx9) 
                    break;
                if (!*reinterpret_cast<signed char*>(&edx9 + 1)) 
                    goto addr_405007_6;
                if (!(reinterpret_cast<unsigned char>(edx9) & 0xff0000)) 
                    goto addr_404ffa_8;
                if (!(reinterpret_cast<unsigned char>(edx9) & 0xff000000)) 
                    goto addr_404ff2_10;
            }
            *reinterpret_cast<void***>(edi7) = edx9;
            edi7 = edi7 + 4;
        }
    } else {
        do {
            edx9 = *reinterpret_cast<void***>(ecx8);
            ++ecx8;
            if (!edx9) 
                break;
            *reinterpret_cast<void***>(edi7) = edx9;
            ++edi7;
        } while (reinterpret_cast<unsigned char>(ecx8) & 3);
        goto addr_404fb7_15;
    }
    *reinterpret_cast<void***>(edi7) = edx9;
    return a2;
    addr_405007_6:
    *reinterpret_cast<void***>(edi7) = edx9;
    return a2;
    addr_404ffa_8:
    *reinterpret_cast<void***>(edi7) = edx9;
    *reinterpret_cast<void***>(edi7 + 2) = reinterpret_cast<void**>(0);
    return a2;
    addr_404ff2_10:
    *reinterpret_cast<void***>(edi7) = edx9;
    return a2;
    addr_404fb7_15:
    goto addr_404fbe_3;
}

void** fun_4054f0(void** ecx, void** a2, void*** a3, uint32_t a4, void** a5, void** a6, void** a7, void** a8) {
    uint32_t ecx9;
    uint32_t ebx10;
    void*** esi11;
    void** edi12;
    uint32_t ecx13;
    void** eax14;
    uint32_t ecx15;
    void** edx16;

    ecx9 = a4;
    if (!ecx9) {
        addr_40558f_2:
        return a2;
    } else {
        ebx10 = ecx9;
        esi11 = a3;
        edi12 = a2;
        if (!(reinterpret_cast<uint32_t>(esi11) & 3)) {
            ecx13 = ecx9 >> 2;
            if (!ecx13) {
                goto addr_405543_6;
            }
        }
        do {
            eax14 = *esi11;
            ++esi11;
            *reinterpret_cast<void***>(edi12) = eax14;
            ++edi12;
            --ecx9;
            if (!ecx9) 
                goto addr_405556_8;
            if (!eax14) 
                break;
        } while (reinterpret_cast<uint32_t>(esi11) & 3);
        goto addr_405537_11;
    }
    if (reinterpret_cast<unsigned char>(edi12) & 3) {
        do {
            *reinterpret_cast<void***>(edi12) = eax14;
            ++edi12;
            --ecx9;
            if (!ecx9) 
                goto addr_40560c_14;
        } while (reinterpret_cast<unsigned char>(edi12) & 3);
    }
    ebx10 = ecx9;
    ecx15 = ecx9 >> 2;
    if (ecx15) 
        goto addr_4055f7_17; else 
        goto addr_405583_18;
    addr_405537_11:
    ebx10 = ecx9;
    ecx13 = ecx9 >> 2;
    if (ecx13) {
        do {
            edx16 = *esi11;
            esi11 = esi11 + 4;
            if ((reinterpret_cast<unsigned char>(*esi11) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*esi11 + 0x7efefeff)) & 0x81010100) {
                if (!*reinterpret_cast<signed char*>(&edx16)) 
                    break;
                if (!*reinterpret_cast<signed char*>(&edx16 + 1)) 
                    goto addr_4055df_22;
                if (!(reinterpret_cast<unsigned char>(edx16) & 0xff0000)) 
                    goto addr_4055d5_24;
                if (!(reinterpret_cast<unsigned char>(edx16) & 0xff000000)) 
                    goto addr_4055d1_26;
            }
            *reinterpret_cast<void***>(edi12) = edx16;
            edi12 = edi12 + 4;
            --ecx13;
        } while (ecx13);
        goto addr_40553e_28;
    } else {
        addr_40553e_28:
        ebx10 = ebx10 & 3;
        if (!ebx10) {
            addr_405556_8:
            return a2;
        } else {
            do {
                addr_405543_6:
                eax14 = *esi11;
                ++esi11;
                *reinterpret_cast<void***>(edi12) = eax14;
                ++edi12;
                if (!eax14) 
                    goto addr_405588_29;
                --ebx10;
            } while (ebx10);
            goto addr_405556_8;
        }
    }
    *reinterpret_cast<void***>(edi12) = reinterpret_cast<void**>(0);
    addr_4055ed_32:
    edi12 = edi12 + 4;
    eax14 = reinterpret_cast<void**>(0);
    ecx15 = ecx13 - 1;
    if (!ecx15) {
        addr_405603_33:
        ebx10 = ebx10 & 3;
        if (ebx10) {
            do {
                addr_405583_18:
                *reinterpret_cast<void***>(edi12) = eax14;
                ++edi12;
                addr_405588_29:
                --ebx10;
            } while (ebx10);
        } else {
            addr_40560c_14:
            return a2;
        }
    } else {
        addr_4055f7_17:
        eax14 = reinterpret_cast<void**>(0);
        goto addr_4055f9_34;
    }
    goto addr_40558f_2;
    do {
        addr_4055f9_34:
        *reinterpret_cast<void***>(edi12) = reinterpret_cast<void**>(0);
        edi12 = edi12 + 4;
        --ecx15;
    } while (ecx15);
    goto addr_405603_33;
    addr_4055df_22:
    *reinterpret_cast<void***>(edi12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx16) & 0xff);
    goto addr_4055ed_32;
    addr_4055d5_24:
    *reinterpret_cast<void***>(edi12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx16) & 0xffff);
    goto addr_4055ed_32;
    addr_4055d1_26:
    *reinterpret_cast<void***>(edi12) = edx16;
    goto addr_4055ed_32;
}

void** fun_404f30(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19) {
    void** ecx20;
    void** eax21;
    void** edi22;
    void** ecx23;
    void** edx24;

    ecx20 = a2;
    if (!(reinterpret_cast<unsigned char>(ecx20) & 3)) {
        while (1) {
            addr_404f50_2:
            ecx20 = ecx20 + 4;
            if (!((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx20)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx20) + 0x7efefeff)) & 0x81010100)) 
                continue;
            eax21 = *reinterpret_cast<void***>(ecx20 + 0xfffffffc);
            if (!*reinterpret_cast<signed char*>(&eax21)) 
                break;
            if (!*reinterpret_cast<signed char*>(&eax21 + 1)) 
                goto addr_404f8d_5;
            if (!(reinterpret_cast<unsigned char>(eax21) & 0xff0000)) 
                goto addr_404f88_7;
            if (!(reinterpret_cast<unsigned char>(eax21) & 0xff000000)) 
                goto addr_404f83_9;
        }
    } else {
        do {
            ++ecx20;
            if (!*reinterpret_cast<void***>(ecx20)) 
                goto addr_404f83_9;
        } while (reinterpret_cast<unsigned char>(ecx20) & 3);
        goto addr_404f4e_13;
    }
    edi22 = ecx20 + 0xfffffffc;
    addr_404f95_15:
    ecx23 = a3;
    if (!(reinterpret_cast<unsigned char>(ecx23) & 3)) {
        while (1) {
            addr_404fbe_16:
            edx24 = *reinterpret_cast<void***>(ecx23);
            ecx23 = ecx23 + 4;
            if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx23)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx23) + 0x7efefeff)) & 0x81010100) {
                if (!edx24) 
                    break;
                if (!*reinterpret_cast<signed char*>(&edx24 + 1)) 
                    goto addr_405007_19;
                if (!(reinterpret_cast<unsigned char>(edx24) & 0xff0000)) 
                    goto addr_404ffa_21;
                if (!(reinterpret_cast<unsigned char>(edx24) & 0xff000000)) 
                    goto addr_404ff2_23;
            }
            *reinterpret_cast<void***>(edi22) = edx24;
            edi22 = edi22 + 4;
        }
    } else {
        do {
            edx24 = *reinterpret_cast<void***>(ecx23);
            ++ecx23;
            if (!edx24) 
                break;
            *reinterpret_cast<void***>(edi22) = edx24;
            ++edi22;
        } while (reinterpret_cast<unsigned char>(ecx23) & 3);
        goto addr_404fb7_28;
    }
    *reinterpret_cast<void***>(edi22) = edx24;
    return a2;
    addr_405007_19:
    *reinterpret_cast<void***>(edi22) = edx24;
    return a2;
    addr_404ffa_21:
    *reinterpret_cast<void***>(edi22) = edx24;
    *reinterpret_cast<void***>(edi22 + 2) = reinterpret_cast<void**>(0);
    return a2;
    addr_404ff2_23:
    *reinterpret_cast<void***>(edi22) = edx24;
    return a2;
    addr_404fb7_28:
    goto addr_404fbe_16;
    addr_404f8d_5:
    edi22 = ecx20 + 0xfffffffd;
    goto addr_404f95_15;
    addr_404f88_7:
    edi22 = ecx20 + 0xfffffffe;
    goto addr_404f95_15;
    addr_404f83_9:
    edi22 = ecx20 + 0xffffffff;
    goto addr_404f95_15;
    addr_404f4e_13:
    goto addr_404f50_2;
}

int32_t g40bbe0 = 0;

int32_t g40bbec = 0;

int32_t g40bbf0 = 0;

int32_t g40bbe4 = 0;

int32_t g40bbe8 = 0;

uint32_t g40ba68 = 0;

int32_t LoadLibraryA = 0xa12c;

void** g40ba5c = reinterpret_cast<void**>(0);

int32_t fun_4053ea(void** ecx, void** a2, int32_t a3) {
    void* ebp4;
    int32_t ebx5;
    int1_t zf6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    unsigned char v10;
    int32_t eax11;
    int32_t eax12;
    int32_t eax13;
    int32_t eax14;
    int1_t cf15;
    int32_t eax16;
    int32_t esi17;
    int32_t eax18;
    int32_t eax19;
    int32_t eax20;
    int32_t eax21;
    int1_t zf22;
    int32_t eax23;
    int32_t eax24;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebx5 = 0;
    zf6 = g40bbe0 == 0;
    if (!zf6) {
        addr_40546a_2:
        eax7 = g40bbec;
        if (!eax7 || (eax8 = reinterpret_cast<int32_t>(eax7()), !!eax8) && ((eax9 = reinterpret_cast<int32_t>(g40bbf0(eax8, 1, reinterpret_cast<int32_t>(ebp4) - 16, 12, reinterpret_cast<int32_t>(ebp4) - 4)), !!eax9) && v10 & 1)) {
            eax11 = g40bbe4;
            if (eax11 && ((eax12 = reinterpret_cast<int32_t>(eax11()), ebx5 = eax12, !!ebx5) && (eax13 = g40bbe8, !!eax13))) {
                eax14 = reinterpret_cast<int32_t>(eax13(ebx5));
                ebx5 = eax14;
            }
        } else {
            cf15 = g40ba68 < 4;
            if (cf15) {
            }
        }
    } else {
        eax16 = reinterpret_cast<int32_t>(LoadLibraryA());
        if (!eax16 || (esi17 = GetProcAddress, eax18 = reinterpret_cast<int32_t>(esi17(eax16, "MessageBoxA")), g40bbe0 = eax18, eax18 == 0)) {
            eax19 = 0;
            goto addr_4054de_10;
        } else {
            eax20 = reinterpret_cast<int32_t>(esi17(eax16, "GetActiveWindow", eax16, "MessageBoxA"));
            g40bbe4 = eax20;
            eax21 = reinterpret_cast<int32_t>(esi17(eax16, "GetLastActivePopup", eax16, "GetActiveWindow", eax16, "MessageBoxA"));
            zf22 = reinterpret_cast<int1_t>(g40ba5c == 2);
            g40bbe8 = eax21;
            if (zf22 && (eax23 = reinterpret_cast<int32_t>(esi17(eax16, "GetUserObjectInformationA", eax16, "GetLastActivePopup", eax16, "GetActiveWindow", eax16, "MessageBoxA")), g40bbf0 = eax23, !!eax23)) {
                eax24 = reinterpret_cast<int32_t>(esi17(eax16, "GetProcessWindowStation", eax16, "GetUserObjectInformationA", eax16, "GetLastActivePopup", eax16, "GetActiveWindow", eax16, "MessageBoxA"));
                g40bbec = eax24;
                goto addr_40546a_2;
            }
        }
    }
    eax19 = reinterpret_cast<int32_t>(g40bbe0(ebx5, a2, a3));
    addr_4054de_10:
    return eax19;
}

void** fun_4057f8(void** a1);

void** fun_4059de(void** a1, void** a2, void** a3) {
    int1_t zf4;

    zf4 = g40bfec == 0;
    if (zf4) {
        fun_4057f8(0xfd);
        g40bfec = reinterpret_cast<void**>(1);
    }
    return 0;
}

int32_t fun_403b65() {
    int1_t zf1;
    int1_t cf2;

    zf1 = reinterpret_cast<int1_t>(g40ba5c == 2);
    if (!zf1 || (cf2 = g40ba68 < 5, cf2)) {
        return 3;
    } else {
        return 1;
    }
}

void** g40bc80 = reinterpret_cast<void**>(0);

void** g40bc78 = reinterpret_cast<void**>(0);

uint32_t g40bc7c = 0;

void** g40bc88 = reinterpret_cast<void**>(0);

uint32_t g40bc8c = 0;

int32_t fun_405d3d() {
    void** v1;
    void** eax2;

    v1 = g40bec0;
    eax2 = reinterpret_cast<void**>(HeapAlloc());
    g40bc80 = eax2;
    if (eax2) {
        g40bc78 = reinterpret_cast<void**>(0);
        g40bc7c = 0;
        g40bc88 = eax2;
        g40bc84 = reinterpret_cast<void**>(0);
        g40bc8c = 16;
        goto v1;
    } else {
        goto v1;
    }
}

struct s8 {
    uint32_t f0;
    int32_t f4;
    struct s8* f8;
    uint32_t f12;
};

struct s9 {
    signed char[4] pad4;
    struct s8* f4;
    struct s8* f8;
};

struct s9* g18;

int32_t g40bbf8 = 0;

int32_t VirtualQuery = 0xa11c;

struct s10 {
    int32_t f0;
    signed char[2] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
    signed char[2] pad24;
    int16_t f24;
};

struct s11 {
    int16_t f0;
    signed char[58] pad60;
    void* f60;
};

struct s12 {
    signed char[8] pad8;
    void* f8;
    void* f12;
    signed char[23] pad39;
    unsigned char f39;
};

int32_t InterlockedExchange = 0xa178;

uint32_t fun_40694e(struct s8* a1) {
    void* ebp2;
    struct s8* esi3;
    struct s8* ebx4;
    struct s9* eax5;
    int1_t cf6;
    struct s8* v7;
    uint32_t eax8;
    uint32_t edi9;
    uint32_t edx10;
    uint32_t v11;
    struct s8* eax12;
    int32_t eax13;
    uint32_t edi14;
    int32_t esi15;
    void* v16;
    struct s8* v17;
    struct s10* eax18;
    int32_t v19;
    unsigned char v20;
    struct s11* v21;
    void* ebx22;
    struct s12* ecx23;
    int32_t eax24;
    int32_t ecx25;
    int32_t edx26;
    uint32_t* eax27;
    int32_t ebx28;
    int32_t edx29;
    uint32_t* eax30;
    uint32_t esi31;
    int32_t ebx32;
    int32_t eax33;
    int32_t eax34;
    int32_t ecx35;
    uint32_t* eax36;
    uint32_t edx37;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    esi3 = a1;
    ebx4 = esi3->f8;
    if (*reinterpret_cast<unsigned char*>(&ebx4) & 3 || (eax5 = g18, cf6 = reinterpret_cast<uint32_t>(ebx4) < reinterpret_cast<uint32_t>(eax5->f8), v7 = eax5->f8, !cf6) && reinterpret_cast<uint32_t>(ebx4) < reinterpret_cast<uint32_t>(eax5->f4)) {
        eax8 = 0;
    } else {
        edi9 = esi3->f12;
        if (edi9 == 0xffffffff) 
            goto addr_40698c_4;
        edx10 = 0;
        v11 = 0;
        eax12 = ebx4;
        do {
            if (eax12->f0 == 0xffffffff) 
                goto addr_4069aa_7;
            if (eax12->f0 >= edx10) 
                goto addr_406aef_9;
            addr_4069aa_7:
            if (eax12->f4) {
                ++v11;
            }
            ++edx10;
            eax12 = reinterpret_cast<struct s8*>(&eax12->f12);
        } while (edx10 <= edi9);
        if (!v11) 
            goto addr_4069d5_13;
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<struct s8**>(reinterpret_cast<uint32_t>(esi3) - 8)) < reinterpret_cast<uint32_t>(v7)) 
            goto addr_406aef_9;
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<struct s8**>(reinterpret_cast<uint32_t>(esi3) - 8)) >= reinterpret_cast<uint32_t>(esi3)) 
            goto addr_406aef_9;
        addr_4069d5_13:
        eax13 = g40bbf8;
        edi14 = reinterpret_cast<uint32_t>(ebx4) & 0xfffff000;
        esi15 = 0;
        if (reinterpret_cast<uint1_t>(eax13 < 0) | reinterpret_cast<uint1_t>(eax13 == 0)) 
            goto addr_4069fa_16; else 
            goto addr_4069e8_17;
    }
    addr_406b73_18:
    return eax8;
    addr_4069fa_16:
    v16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp2) - 32);
    v17 = ebx4;
    eax18 = reinterpret_cast<struct s10*>(VirtualQuery(v17, v16, 28));
    if (!eax18 || v19 != 0x1000000) {
        addr_406b6f_19:
        eax8 = 0xffffffff;
    } else {
        if (!(v20 & 0xcc)) 
            goto addr_406a78_21;
        if (v21->f0 != 0x5a4d) 
            goto addr_406b6f_19;
        eax18 = reinterpret_cast<struct s10*>(reinterpret_cast<int32_t>(v21->f60) + reinterpret_cast<int32_t>(v21));
        if (eax18->f0 != 0x4550) 
            goto addr_406b6f_19;
        if (eax18->f24 != 0x10b) 
            goto addr_406b6f_19;
        ebx22 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx4) - reinterpret_cast<int32_t>(v21));
        ecx23 = reinterpret_cast<struct s12*>(eax18->f20 + reinterpret_cast<uint32_t>(eax18) + 24);
        if (eax18->f6 <= 0) 
            goto addr_406b6f_19; else 
            goto addr_406a62_26;
    }
    addr_406b72_27:
    goto addr_406b73_18;
    addr_406a62_26:
    if (reinterpret_cast<uint32_t>(ebx22) < reinterpret_cast<uint32_t>(ecx23->f12) || (reinterpret_cast<uint32_t>(ebx22) >= reinterpret_cast<int32_t>(ecx23->f8) + reinterpret_cast<uint32_t>(ecx23->f12) || !(ecx23->f39 & 0x80))) {
        addr_406a78_21:
        eax24 = reinterpret_cast<int32_t>(InterlockedExchange(0x40bc40, 1, v17, v16, 28));
        if (!eax24) {
            ecx25 = g40bbf8;
            edx26 = ecx25;
            if (!(reinterpret_cast<uint1_t>(ecx25 < 0) | reinterpret_cast<uint1_t>(ecx25 == 0))) {
                eax27 = reinterpret_cast<uint32_t*>(ecx25 * 4 + 0x40bbfc);
                do {
                    if (*eax27 == edi14) 
                        break;
                    --edx26;
                    --eax27;
                } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(edx26 < 0) | reinterpret_cast<uint1_t>(edx26 == 0)));
            }
            if (!edx26) {
                ebx28 = 15;
                if (ecx25 <= 15) {
                    ebx28 = ecx25;
                }
                edx29 = 0;
                if (ebx28 >= 0) {
                    do {
                        eax30 = reinterpret_cast<uint32_t*>(edx29 * 4 + 0x40bc00);
                        esi31 = *eax30;
                        ++edx29;
                        *eax30 = edi14;
                        edi14 = esi31;
                    } while (edx29 <= ebx28);
                }
                if (ecx25 < 16) {
                    g40bbf8 = ecx25 + 1;
                }
            }
            InterlockedExchange(0x40bc40, 0, 0x40bc40, 1, v17, v16, 28);
            goto addr_40698c_4;
        }
    } else {
        addr_406aef_9:
        eax8 = 0;
        goto addr_406b72_27;
    }
    do {
        addr_4069e8_17:
        if (*reinterpret_cast<uint32_t*>(esi15 * 4 + 0x40bc00) == edi14) 
            break;
        ++esi15;
    } while (esi15 < eax13);
    goto addr_4069fa_16;
    if (reinterpret_cast<uint1_t>(esi15 < 0) | reinterpret_cast<uint1_t>(esi15 == 0) || (ebx32 = InterlockedExchange, eax33 = reinterpret_cast<int32_t>(ebx32(0x40bc40, 1)), !!eax33)) {
        addr_40698c_4:
        eax8 = 1;
        goto addr_406b72_27;
    } else {
        if (*reinterpret_cast<uint32_t*>(esi15 * 4 + 0x40bc00) == edi14) 
            goto addr_406b49_43;
        eax34 = g40bbf8;
        esi15 = eax34 - 1;
        if (esi15 >= 0) 
            goto addr_406b27_45;
    }
    addr_406b37_46:
    if (eax34 < 16) {
        ++eax34;
        g40bbf8 = eax34;
    }
    esi15 = eax34 - 1;
    goto addr_406b49_43;
    do {
        addr_406b27_45:
        if (*reinterpret_cast<uint32_t*>(esi15 * 4 + 0x40bc00) == edi14) 
            break;
        --esi15;
    } while (esi15 >= 0);
    if (esi15 < 0) 
        goto addr_406b37_46;
    if (!esi15) {
        addr_406b61_52:
        ebx32(0x40bc40, 0, 0x40bc40, 1);
        goto addr_40698c_4;
    } else {
        addr_406b49_43:
        ecx35 = 0;
        if (esi15 >= 0) {
            do {
                eax36 = reinterpret_cast<uint32_t*>(ecx35 * 4 + 0x40bc00);
                edx37 = *eax36;
                ++ecx35;
                *eax36 = edi14;
                edi14 = edx37;
            } while (ecx35 <= esi15);
            goto addr_406b61_52;
        }
    }
}

void fun_408ab6();

void fun_406860(struct s8* a1) {
    fun_408ab6();
    goto a1->f4;
}

struct s14 {
    signed char[12] pad12;
    int32_t f12;
};

struct s13 {
    struct s13* f0;
    int32_t f4;
    int32_t f8;
    struct s14* f12;
};

struct s13* g0;

void fun_406936(uint32_t ecx, int32_t a2);

void fun_4068a2(struct s8* a1, uint32_t a2) {
    struct s13* v3;
    struct s8* ebx4;
    uint32_t esi5;
    uint32_t ecx6;

    v3 = g0;
    g0 = reinterpret_cast<struct s13*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 4);
    while ((ebx4 = a1->f8, a1->f12 != 0xffffffff) && a1->f12 != a2) {
        esi5 = a1->f12 + a1->f12 * 2;
        ecx6 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebx4) + esi5 * 4);
        a1->f12 = ecx6;
        if (!*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx4) + esi5 * 4 + 4)) {
            fun_406936(ecx6, 0x101);
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx4) + esi5 * 4 + 8)();
        }
    }
    g0 = v3;
    return;
}

int32_t g40b5e8 = 0;

struct s15 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t g40b5e4 = 0;

int32_t g40b5ec = 0;

void fun_406936(uint32_t ecx, int32_t a2) {
    struct s15* ebp3;
    int32_t eax4;
    int32_t ebp5;

    g40b5e8 = ebp3->f8;
    g40b5e4 = eax4;
    g40b5ec = ebp5;
    return;
}

void** fun_403d6d(void** ecx, void** a2) {
    int1_t zf3;
    void** esi4;
    int1_t below_or_equal5;
    void** eax6;
    int1_t zf7;
    void** v8;

    zf3 = g40bec4 == 3;
    esi4 = a2;
    if (!zf3 || ((below_or_equal5 = reinterpret_cast<unsigned char>(esi4) <= reinterpret_cast<unsigned char>(g40bc84), !below_or_equal5) || (eax6 = fun_406564(ecx, esi4), ecx = esi4, !eax6))) {
        if (!esi4) {
            ++esi4;
        }
        zf7 = g40bec4 == 1;
        if (!zf7) {
            esi4 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi4 + 15) & 0xfffffff0);
        }
        v8 = g40bec0;
        HeapAlloc(ecx, v8, 0, esi4);
    }
    goto __return_address();
}

void** fun_40617f(uint32_t ecx, void** a2);

struct s16 {
    uint32_t f0;
    signed char[128] pad132;
    uint32_t f132;
};

struct s17 {
    void* f0;
    struct s17* f4;
    struct s17* f8;
};

struct s18 {
    uint32_t f0;
    void** f4;
};

void** g40bc90 = reinterpret_cast<void**>(0);

void** fun_4060c8();

void** fun_406564(void** ecx, void** a2) {
    uint32_t eax3;
    void** edx4;
    void* ecx5;
    void* v6;
    uint32_t ecx7;
    void** edi8;
    void** v9;
    uint32_t esi10;
    uint32_t v11;
    void** eax12;
    void** ebx13;
    uint32_t v14;
    int1_t cf15;
    void** v16;
    void** eax17;
    void** eax18;
    void** edx19;
    void** v20;
    uint32_t edx21;
    struct s16* ecx22;
    uint32_t edx23;
    void** eax24;
    void** v25;
    void* edi26;
    uint32_t ecx27;
    struct s17* edx28;
    void* ecx29;
    void* esi30;
    uint32_t ecx31;
    uint32_t* ecx32;
    signed char* edi33;
    uint32_t ebx34;
    int1_t zf35;
    void* ecx36;
    signed char* edi37;
    uint32_t ebx38;
    struct s17* ecx39;
    struct s17* edi40;
    signed char cl41;
    uint32_t ecx42;
    uint32_t* edi43;
    uint32_t ecx44;
    void* ecx45;
    void* ecx46;
    struct s18* edx47;
    uint32_t ecx48;
    int1_t zf49;
    int1_t zf50;
    int1_t zf51;
    void** eax52;

    eax3 = g40bc7c;
    edx4 = g40bc80;
    ecx5 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a2 + 23) & 0xfffffff0);
    v6 = ecx5;
    ecx7 = (reinterpret_cast<int32_t>(ecx5) >> 4) - 1;
    edi8 = edx4 + (eax3 + eax3 * 4) * 4;
    v9 = edi8;
    if (reinterpret_cast<int32_t>(ecx7) >= reinterpret_cast<int32_t>(32)) {
        ecx7 = ecx7 + 0xffffffe0;
        esi10 = 0;
        v11 = 0xffffffff >> *reinterpret_cast<signed char*>(&ecx7);
    } else {
        esi10 = 0xffffffff >> *reinterpret_cast<signed char*>(&ecx7);
        v11 = 0xffffffff;
    }
    eax12 = g40bc88;
    ebx13 = eax12;
    v14 = esi10;
    cf15 = reinterpret_cast<unsigned char>(ebx13) < reinterpret_cast<unsigned char>(edi8);
    while ((v16 = ebx13, cf15) && (ecx7 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx13 + 4)) & v11 | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx13)) & esi10, !ecx7)) {
        ebx13 = ebx13 + 20;
        cf15 = reinterpret_cast<unsigned char>(ebx13) < reinterpret_cast<unsigned char>(v9);
    }
    if (ebx13 != v9) 
        goto addr_4065fe_8;
    ebx13 = edx4;
    while ((v16 = ebx13, reinterpret_cast<unsigned char>(ebx13) < reinterpret_cast<unsigned char>(eax12)) && (ecx7 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx13 + 4)) & v11 | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx13)) & esi10, !ecx7)) {
        ebx13 = ebx13 + 20;
    }
    if (ebx13 != eax12) 
        goto addr_4065fe_8;
    while (reinterpret_cast<unsigned char>(ebx13) < reinterpret_cast<unsigned char>(v9) && !*reinterpret_cast<void***>(ebx13 + 8)) {
        ebx13 = ebx13 + 20;
        v16 = ebx13;
    }
    if (ebx13 == v9) 
        goto addr_40669c_16;
    addr_4066c2_17:
    eax17 = fun_40617f(ecx7, ebx13);
    *reinterpret_cast<void***>(*reinterpret_cast<void***>(ebx13 + 16)) = eax17;
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(ebx13 + 16)) == 0xffffffff)) {
        addr_4065fe_8:
        g40bc88 = ebx13;
        eax18 = *reinterpret_cast<void***>(ebx13 + 16);
        edx19 = *reinterpret_cast<void***>(eax18);
        v20 = edx19;
        if (edx19 == 0xffffffff || !(*reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax18 + reinterpret_cast<unsigned char>(edx19) * 4) + 0xc4) & v11 | *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax18 + reinterpret_cast<unsigned char>(edx19) * 4) + 68) & esi10)) {
            edx21 = *reinterpret_cast<uint32_t*>(eax18 + 0xc4) & v11;
            v20 = reinterpret_cast<void**>(0);
            ecx22 = reinterpret_cast<struct s16*>(eax18 + 68);
            esi10 = v14;
            if (!(edx21 | ecx22->f0 & v14)) {
                do {
                    edx23 = ecx22->f132 & v11;
                    ++v20;
                    ecx22 = reinterpret_cast<struct s16*>(&ecx22->pad132);
                } while (!(edx23 | ecx22->f0 & esi10));
            }
            edx19 = v20;
        }
    } else {
        addr_4066da_21:
        eax24 = reinterpret_cast<void**>(0);
        goto addr_40685b_22;
    }
    v25 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax18 + reinterpret_cast<unsigned char>(edx19) * 0x204) + 0x144);
    edi26 = reinterpret_cast<void*>(0);
    ecx27 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax18 + reinterpret_cast<unsigned char>(edx19) * 4) + 68) & esi10;
    if (!ecx27) {
        ecx27 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax18 + reinterpret_cast<unsigned char>(edx19) * 4) + 0xc4) & v11;
        edi26 = reinterpret_cast<void*>(32);
    }
    while (reinterpret_cast<int32_t>(ecx27) >= reinterpret_cast<int32_t>(0)) {
        ecx27 = ecx27 << 1;
        edi26 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi26) + 1);
    }
    edx28 = *reinterpret_cast<struct s17**>(v25 + reinterpret_cast<uint32_t>(edi26) * 2 + 1);
    ecx29 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx28->f0) - reinterpret_cast<uint32_t>(v6));
    esi30 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(ecx29) >> 4) - 1);
    if (reinterpret_cast<int32_t>(esi30) > reinterpret_cast<int32_t>(63)) {
        esi30 = reinterpret_cast<void*>(63);
    }
    if (esi30 == edi26) {
        addr_40680e_30:
        if (ecx29) {
            edx28->f0 = ecx29;
            *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ecx29) + reinterpret_cast<uint32_t>(edx28) + 0xfffffffc) = ecx29;
        }
    } else {
        if (edx28->f4 == edx28->f8) {
            if (reinterpret_cast<int32_t>(edi26) >= reinterpret_cast<int32_t>(32)) {
                ecx31 = reinterpret_cast<uint32_t>(edi26) + 0xffffffe0;
                ecx32 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax18 + reinterpret_cast<unsigned char>(v20) * 4) + 0xc4);
                edi33 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax18) + reinterpret_cast<uint32_t>(edi26) + 4);
                ebx34 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx31));
                *ecx32 = *ecx32 & ebx34;
                *edi33 = reinterpret_cast<signed char>(*edi33 - 1);
                zf35 = *edi33 == 0;
                if (!zf35) {
                    addr_40676e_35:
                    ebx13 = v16;
                } else {
                    ebx13 = v16;
                    *reinterpret_cast<void***>(ebx13 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx13 + 4)) & ebx34);
                }
            } else {
                ecx36 = edi26;
                edi37 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax18) + reinterpret_cast<uint32_t>(edi26) + 4);
                ebx38 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx36));
                *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax18 + reinterpret_cast<unsigned char>(v20) * 4) + 68) = ebx38 & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax18 + reinterpret_cast<unsigned char>(v20) * 4) + 68);
                *edi37 = reinterpret_cast<signed char>(*edi37 - 1);
                if (*edi37) 
                    goto addr_40676e_35;
                ebx13 = v16;
                *reinterpret_cast<void***>(ebx13) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx13)) & ebx38);
            }
        }
        edx28->f8->f4 = edx28->f4;
        edx28->f4->f8 = edx28->f8;
        if (!ecx29) {
            ecx29 = ecx29;
        } else {
            ecx39 = reinterpret_cast<struct s17*>(v25 + reinterpret_cast<uint32_t>(esi30) * 2);
            edi40 = ecx39->f4;
            edx28->f8 = ecx39;
            edx28->f4 = edi40;
            ecx39->f4 = edx28;
            edx28->f4->f8 = edx28;
            if (edx28->f4 == edx28->f8) {
                cl41 = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi30) + reinterpret_cast<unsigned char>(eax18) + 4);
                *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi30) + reinterpret_cast<unsigned char>(eax18) + 4) = reinterpret_cast<signed char>(cl41 + 1);
                if (reinterpret_cast<int32_t>(esi30) >= reinterpret_cast<int32_t>(32)) {
                    if (!cl41) {
                        ecx42 = reinterpret_cast<uint32_t>(esi30) + 0xffffffe0;
                        *reinterpret_cast<void***>(ebx13 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx13 + 4)) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx42));
                    }
                    edi43 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax18 + reinterpret_cast<unsigned char>(v20) * 4) + 0xc4);
                    ecx44 = reinterpret_cast<uint32_t>(esi30) + 0xffffffe0;
                    *edi43 = *edi43 | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx44);
                } else {
                    if (!cl41) {
                        ecx45 = esi30;
                        *reinterpret_cast<void***>(ebx13) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx13)) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx45));
                    }
                    ecx46 = esi30;
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax18 + reinterpret_cast<unsigned char>(v20) * 4) + 68) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax18 + reinterpret_cast<unsigned char>(v20) * 4) + 68) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx46);
                }
            }
            ecx29 = ecx29;
            goto addr_40680e_30;
        }
    }
    edx47 = reinterpret_cast<struct s18*>(reinterpret_cast<uint32_t>(edx28) + reinterpret_cast<uint32_t>(ecx29));
    ecx48 = reinterpret_cast<uint32_t>(v6) + 1;
    edx47->f0 = ecx48;
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(edx47) + reinterpret_cast<uint32_t>(v6) + 0xfffffffc) = ecx48;
    zf49 = *v25 == 0;
    *v25 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(*v25) + 1);
    if (zf49 && ((zf50 = ebx13 == g40bc78, zf50) && (zf51 = v20 == g40bc90, zf51))) {
        g40bc78 = reinterpret_cast<void**>(0);
    }
    *reinterpret_cast<void***>(eax18) = v20;
    eax24 = reinterpret_cast<void**>(&edx47->f4);
    addr_40685b_22:
    return eax24;
    addr_40669c_16:
    ebx13 = edx4;
    while ((v16 = ebx13, reinterpret_cast<unsigned char>(ebx13) < reinterpret_cast<unsigned char>(eax12)) && !*reinterpret_cast<void***>(ebx13 + 8)) {
        ebx13 = ebx13 + 20;
    }
    if (ebx13 != eax12) 
        goto addr_4066c2_17;
    eax52 = fun_4060c8();
    ebx13 = eax52;
    v16 = ebx13;
    if (!ebx13) 
        goto addr_4066da_21; else 
        goto addr_4066c2_17;
}

int32_t g40bc44 = 0;

void** fun_406b77(void** ecx) {
    int32_t eax2;
    int32_t eax3;

    eax2 = g40bc44;
    if (!eax2 || (eax3 = reinterpret_cast<int32_t>(eax2()), eax3 == 0)) {
        return 0;
    } else {
        return 1;
    }
}

void** g40bec8 = reinterpret_cast<void**>(0);

void** g40ba54 = reinterpret_cast<void**>(0);

uint32_t fun_4082d7(void** ecx, void** a2, void** a3, void** a4, void** a5);

struct s19 {
    void** f0;
    signed char[3] pad4;
    unsigned char f4;
};

void** fun_408278(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** fun_406b92(void** ecx, void** a2, void** a3, void** a4) {
    void* ebp5;
    int1_t cf6;
    void** eax7;
    void** v8;
    void** ebx9;
    void* esi10;
    void** v11;
    void** edi12;
    void** v13;
    void** v14;
    struct s19* eax15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** eax23;
    void** ecx24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    int32_t eax29;
    void** eax30;
    void** v31;
    void** v32;
    void* eax33;
    void** edx34;
    void** edi35;
    int32_t eax36;
    void** v37;
    void** eax38;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x39c);
    cf6 = reinterpret_cast<unsigned char>(a2) < reinterpret_cast<unsigned char>(g40bec8);
    eax7 = g40b498;
    v8 = eax7;
    if (!cf6 || (ebx9 = reinterpret_cast<void**>((reinterpret_cast<signed char>(a2) >> 5) * 4 + 0x40bee0), esi10 = reinterpret_cast<void*>((reinterpret_cast<unsigned char>(a2) & 31) << 3), *reinterpret_cast<unsigned char*>(&eax7) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx9)) + reinterpret_cast<uint32_t>(esi10) + 4), v11 = ebx9, (*reinterpret_cast<unsigned char*>(&eax7) & 1) == 0)) {
        g40ba54 = reinterpret_cast<void**>(0);
    } else {
        edi12 = reinterpret_cast<void**>(0);
        v13 = reinterpret_cast<void**>(0);
        v14 = reinterpret_cast<void**>(0);
        if (!a4) 
            goto addr_406bf5_4;
        if (*reinterpret_cast<unsigned char*>(&eax7) & 32) {
            fun_4082d7(a2, a2, 0, 0, 2);
        }
        eax15 = reinterpret_cast<struct s19*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx9)) + reinterpret_cast<uint32_t>(esi10));
        if (!(eax15->f4 & 0x80)) 
            goto addr_406ce2_8; else 
            goto addr_406c1b_9;
    }
    addr_406d5f_10:
    g40ba50 = reinterpret_cast<void**>(9);
    addr_406d69_11:
    addr_406d6c_12:
    eax23 = fun_4041a2(v8, v11, v14, v16, v13, v17, v18, v19, v20, v21, v22);
    return eax23;
    addr_406ce2_8:
    ecx24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffff88);
    v25 = ecx24;
    v26 = a4;
    v27 = a3;
    v28 = eax15->f0;
    eax29 = reinterpret_cast<int32_t>(WriteFile(v28, v27, v26, v25, 0));
    if (!eax29) {
        eax30 = reinterpret_cast<void**>(GetLastError(v28, v27, v26, v25, 0));
        v31 = eax30;
    } else {
        v31 = reinterpret_cast<void**>(0);
        v13 = v32;
    }
    addr_406cbd_15:
    if (v13) {
        goto addr_406d6c_12;
    } else {
        if (!v31) {
            addr_406d29_18:
            if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx9)) + reinterpret_cast<uint32_t>(esi10) + 4) & 64) || *reinterpret_cast<void***>(a3) != 26) {
                g40ba50 = reinterpret_cast<void**>(28);
                g40ba54 = reinterpret_cast<void**>(0);
                goto addr_406d69_11;
            } else {
                addr_406bf5_4:
                goto addr_406d6c_12;
            }
        } else {
            if (!reinterpret_cast<int1_t>(v31 == 5)) {
                fun_408278(ecx24, v31, v28, v27, v26, v25, 0);
                goto addr_406d69_11;
            } else {
                g40ba54 = reinterpret_cast<void**>(5);
                goto addr_406d5f_10;
            }
        }
    }
    addr_406c1b_9:
    v17 = a3;
    v31 = reinterpret_cast<void**>(0);
    if (reinterpret_cast<unsigned char>(a4) <= reinterpret_cast<unsigned char>(0)) 
        goto addr_406d29_18;
    do {
        ecx24 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v17) - reinterpret_cast<unsigned char>(a3));
        eax33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp5) - 0x6c);
        do {
            if (reinterpret_cast<unsigned char>(ecx24) >= reinterpret_cast<unsigned char>(a4)) 
                break;
            edx34 = v17;
            ++v17;
            ++ecx24;
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edx34) == 10)) {
                ++v14;
                eax33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax33) + 1);
                ++edi12;
            }
            ebx9 = v11;
            eax33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax33) + 1);
            ++edi12;
        } while (reinterpret_cast<signed char>(edi12) < reinterpret_cast<signed char>(0x400));
        edi35 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax33) - (reinterpret_cast<int32_t>(ebp5) + 0xffffff94));
        v25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffff88);
        v26 = edi35;
        v27 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffff94);
        v28 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx9)) + reinterpret_cast<uint32_t>(esi10));
        eax36 = reinterpret_cast<int32_t>(WriteFile(v28, v27, v26, v25, 0));
        if (!eax36) 
            break;
        v13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v13) + reinterpret_cast<unsigned char>(v37));
        if (reinterpret_cast<signed char>(v37) < reinterpret_cast<signed char>(edi35)) 
            goto addr_406cbb_30;
        edi12 = reinterpret_cast<void**>(0);
    } while (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v17) - reinterpret_cast<unsigned char>(a3)) < reinterpret_cast<unsigned char>(a4));
    goto addr_406cad_32;
    eax38 = reinterpret_cast<void**>(GetLastError(v28, v27, v26, v25, 0));
    v31 = eax38;
    addr_406cbb_30:
    goto addr_406cbd_15;
    addr_406cad_32:
    goto addr_406cbd_15;
}

void** g40d000;

void** g40bff0 = reinterpret_cast<void**>(0);

uint32_t fun_403e75(void** ecx, void** a2);

uint32_t fun_403eb0(void** a1) {
    void** esi2;
    uint32_t ebx3;
    uint32_t edi4;
    int1_t less_or_equal5;
    void** eax6;
    void** ecx7;
    void** v8;
    uint32_t eax9;
    void** v10;
    uint32_t eax11;
    int1_t less12;
    uint32_t eax13;

    esi2 = reinterpret_cast<void**>(0);
    ebx3 = 0;
    edi4 = 0;
    less_or_equal5 = reinterpret_cast<signed char>(g40d000) <= reinterpret_cast<signed char>(0);
    if (!less_or_equal5) {
        do {
            eax6 = g40bff0;
            if (*reinterpret_cast<void***>(eax6 + reinterpret_cast<unsigned char>(esi2) * 4) && (ecx7 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax6 + reinterpret_cast<unsigned char>(esi2) * 4) + 12), !!(*reinterpret_cast<unsigned char*>(&ecx7) & 0x83))) {
                if (!reinterpret_cast<int1_t>(a1 == 1)) {
                    if (!a1 && (*reinterpret_cast<unsigned char*>(&ecx7) & 2 && (v8 = *reinterpret_cast<void***>(eax6 + reinterpret_cast<unsigned char>(esi2) * 4), eax9 = fun_403e75(ecx7, v8), eax9 == 0xffffffff))) {
                        edi4 = edi4 | eax9;
                    }
                } else {
                    v10 = *reinterpret_cast<void***>(eax6 + reinterpret_cast<unsigned char>(esi2) * 4);
                    eax11 = fun_403e75(ecx7, v10);
                    if (eax11 != 0xffffffff) {
                        ++ebx3;
                    }
                }
            }
            ++esi2;
            less12 = reinterpret_cast<signed char>(esi2) < reinterpret_cast<signed char>(g40d000);
        } while (less12);
    }
    eax13 = ebx3;
    if (a1 != 1) {
        eax13 = edi4;
    }
    return eax13;
}

void** fun_4083f0(void** ecx, void** a2);

int32_t FlushFileBuffers = 0xa18e;

void** fun_406d82(void** ecx, void** a2) {
    int1_t cf3;
    void** ecx4;
    void** eax5;
    void** eax6;
    int32_t eax7;

    cf3 = reinterpret_cast<unsigned char>(a2) < reinterpret_cast<unsigned char>(g40bec8);
    if (!cf3 || (ecx4 = *reinterpret_cast<void***>((reinterpret_cast<signed char>(a2) >> 5) * 4 + 0x40bee0), (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx4 + (reinterpret_cast<unsigned char>(a2) & 31) * 8) + 4) & 1) == 0)) {
        addr_406dcb_2:
        g40ba50 = reinterpret_cast<void**>(9);
        eax5 = reinterpret_cast<void**>(0xffffffff);
    } else {
        eax6 = fun_4083f0(ecx4, a2);
        eax7 = reinterpret_cast<int32_t>(FlushFileBuffers(a2, eax6));
        if (eax7) {
            eax5 = reinterpret_cast<void**>(0);
        } else {
            eax5 = reinterpret_cast<void**>(GetLastError(a2, eax6));
        }
        if (eax5) 
            goto addr_406dc6_7;
    }
    return eax5;
    addr_406dc6_7:
    g40ba54 = eax5;
    goto addr_406dcb_2;
}

uint32_t fun_403e75(void** ecx, void** a2) {
    void** eax3;
    void** v4;
    void** eax5;
    uint32_t eax6;
    uint32_t eax7;

    if (a2) {
        eax3 = fun_403e18(ecx, a2);
        if (!eax3) {
            if (!(*reinterpret_cast<unsigned char*>(a2 + 13) & 64)) {
                return 0;
            } else {
                v4 = *reinterpret_cast<void***>(a2 + 16);
                eax5 = fun_406d82(a2, v4);
                eax6 = -reinterpret_cast<unsigned char>(eax5);
                return eax6 - (eax6 + reinterpret_cast<uint1_t>(eax6 < eax6 + reinterpret_cast<uint1_t>(!!eax5)));
            }
        } else {
            return 0xffffffff;
        }
    } else {
        eax7 = fun_403eb0(a2);
        return eax7;
    }
}

uint32_t fun_403df1(void** a1) {
    int1_t cf2;

    cf2 = reinterpret_cast<unsigned char>(a1) < reinterpret_cast<unsigned char>(g40bec8);
    if (cf2) {
        return reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(a1) >> 5) * 4 + 0x40bee0)) + (reinterpret_cast<unsigned char>(a1) & 31) * 8 + 4))) & 64;
    } else {
        return 0;
    }
}

int32_t g40ba3c = 0;

void fun_406e65(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** eax16;
    void** eax17;

    ++g40ba3c;
    eax16 = fun_403ddf(ecx, 0x1000, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    *reinterpret_cast<void***>(a2 + 8) = eax16;
    if (!eax16) {
        *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) | 4);
        *reinterpret_cast<void***>(a2 + 8) = a2 + 20;
        *reinterpret_cast<void***>(a2 + 24) = reinterpret_cast<void**>(2);
    } else {
        *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) | 8);
        *reinterpret_cast<void***>(a2 + 24) = reinterpret_cast<void**>(0x1000);
    }
    eax17 = *reinterpret_cast<void***>(a2 + 8);
    *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(a2) = eax17;
    return;
}

int32_t SetFilePointer = 0xa1a2;

uint32_t fun_406dd9(void** a1, void** a2, int32_t a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    int1_t cf14;
    void*** edi15;
    void** ecx16;
    void* esi17;
    void** eax18;
    uint32_t eax19;
    void** eax20;
    uint32_t eax21;
    unsigned char* eax22;
    void** edi23;

    cf14 = reinterpret_cast<unsigned char>(a1) < reinterpret_cast<unsigned char>(g40bec8);
    if (!cf14 || (edi15 = reinterpret_cast<void***>((reinterpret_cast<signed char>(a1) >> 5) * 4 + 0x40bee0), ecx16 = *edi15, esi17 = reinterpret_cast<void*>((reinterpret_cast<unsigned char>(a1) & 31) << 3), (*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx16) + reinterpret_cast<uint32_t>(esi17) + 4) & 1) == 0)) {
        g40ba54 = reinterpret_cast<void**>(0);
        goto addr_406e54_3;
    }
    eax18 = fun_4083f0(ecx16, a1);
    if (eax18 == 0xffffffff) {
        addr_406e54_3:
        g40ba50 = reinterpret_cast<void**>(9);
    } else {
        eax19 = reinterpret_cast<uint32_t>(SetFilePointer(a1, eax18, a1, 0, a2));
        if (eax19 != 0xffffffff) {
            eax20 = reinterpret_cast<void**>(0);
        } else {
            eax20 = reinterpret_cast<void**>(GetLastError(a1, eax18, a1, 0, a2));
        }
        if (!eax20) 
            goto addr_406e40_9; else 
            goto addr_406e37_10;
    }
    addr_406e5e_11:
    eax21 = 0xffffffff;
    addr_406e61_12:
    return eax21;
    addr_406e40_9:
    eax22 = reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(*edi15) + reinterpret_cast<uint32_t>(esi17) + 4);
    *eax22 = reinterpret_cast<unsigned char>(*eax22 & 0xfd);
    eax21 = eax19;
    goto addr_406e61_12;
    addr_406e37_10:
    fun_408278(a1, eax20, eax18, a1, 0, a2, edi23);
    goto addr_406e5e_11;
}

void** fun_405d85(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    uint32_t eax6;
    void** eax7;
    void** ecx8;

    eax6 = g40bc7c;
    eax7 = g40bc80;
    ecx8 = eax7 + (eax6 + eax6 * 4) * 4;
    while (reinterpret_cast<unsigned char>(eax7) < reinterpret_cast<unsigned char>(ecx8)) {
        if (reinterpret_cast<unsigned char>(a2) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax7 + 12)) < 0x100000) 
            goto addr_405daf_4;
        eax7 = eax7 + 20;
    }
    eax7 = reinterpret_cast<void**>(0);
    addr_405daf_4:
    return eax7;
}

struct s21 {
    signed char[4] pad4;
    struct s21* f4;
    struct s21* f8;
};

struct s20 {
    void* f0;
    struct s21* f4;
    struct s21* f8;
};

int32_t VirtualFree = 0xa0ae;

void** fun_405db0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** eax10;
    void** esi11;
    void** edi12;
    void** v13;
    void** ecx14;
    void** v15;
    struct s20* ebx16;
    void* v17;
    void** v18;
    void* edx19;
    struct s20* v20;
    void* edx21;
    uint32_t ecx22;
    signed char* ecx23;
    uint32_t ebx24;
    void* ecx25;
    signed char* ecx26;
    uint32_t ebx27;
    void** edx28;
    uint32_t ebx29;
    void** ebx30;
    void** v31;
    void** ecx32;
    uint32_t ecx33;
    uint32_t esi34;
    void** ecx35;
    uint32_t esi36;
    void** ecx37;
    void** ebx38;
    signed char cl39;
    uint32_t ecx40;
    uint32_t ecx41;
    uint32_t* eax42;
    void** ecx43;
    void** ecx44;
    uint32_t* eax45;
    void** eax46;
    void** ecx47;
    int32_t esi48;
    void** ecx49;
    void** ecx50;
    void** eax51;
    void** eax52;
    void** ecx53;
    void** eax54;
    void** eax55;
    void** v56;
    void** eax57;
    void** v58;
    void** v59;
    uint32_t eax60;
    void** edx61;
    void** eax62;
    int1_t below_or_equal63;
    void** eax64;

    eax10 = *reinterpret_cast<void***>(a2 + 16);
    esi11 = a3 + 0xfffffffc;
    edi12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) >> 15);
    v13 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax10 + reinterpret_cast<unsigned char>(edi12) * 0x204) + 0x144);
    ecx14 = *reinterpret_cast<void***>(esi11) - 1;
    v15 = ecx14;
    if (!(*reinterpret_cast<unsigned char*>(&ecx14) & 1)) {
        ebx16 = reinterpret_cast<struct s20*>(reinterpret_cast<unsigned char>(ecx14) + reinterpret_cast<unsigned char>(esi11));
        v17 = ebx16->f0;
        v18 = *reinterpret_cast<void***>(esi11 + 0xfffffffc);
        edx19 = v17;
        v20 = ebx16;
        if (!(*reinterpret_cast<unsigned char*>(&edx19) & 1)) {
            edx21 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(edx19) >> 4) - 1);
            if (reinterpret_cast<uint32_t>(edx21) > 63) {
                edx21 = reinterpret_cast<void*>(63);
            }
            if (ebx16->f4 == ebx16->f8) {
                if (reinterpret_cast<uint32_t>(edx21) >= 32) {
                    ecx22 = reinterpret_cast<uint32_t>(edx21) - 32;
                    ecx23 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx21) + reinterpret_cast<unsigned char>(eax10) + 4);
                    ebx24 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx22));
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax10 + reinterpret_cast<unsigned char>(edi12) * 4) + 0xc4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax10 + reinterpret_cast<unsigned char>(edi12) * 4) + 0xc4) & ebx24;
                    *ecx23 = reinterpret_cast<signed char>(*ecx23 - 1);
                    if (!*ecx23) {
                        *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4)) & ebx24);
                    }
                } else {
                    ecx25 = edx21;
                    ecx26 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx21) + reinterpret_cast<unsigned char>(eax10) + 4);
                    ebx27 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx25));
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax10 + reinterpret_cast<unsigned char>(edi12) * 4) + 68) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax10 + reinterpret_cast<unsigned char>(edi12) * 4) + 68) & ebx27;
                    *ecx26 = reinterpret_cast<signed char>(*ecx26 - 1);
                    if (!*ecx26) {
                        *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) & ebx27);
                    }
                }
                ebx16 = v20;
            }
            ecx14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v15) + reinterpret_cast<uint32_t>(v17));
            ebx16->f8->f4 = ebx16->f4;
            v20->f4->f8 = v20->f8;
            v15 = ecx14;
        }
        edx28 = reinterpret_cast<void**>((reinterpret_cast<signed char>(ecx14) >> 4) - 1);
        if (reinterpret_cast<unsigned char>(edx28) > reinterpret_cast<unsigned char>(63)) {
            edx28 = reinterpret_cast<void**>(63);
        }
        ebx29 = reinterpret_cast<unsigned char>(v18) & 1;
        if (ebx29) {
            ebx30 = a2;
        } else {
            v31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi11) - reinterpret_cast<unsigned char>(v18));
            ebx30 = reinterpret_cast<void**>((reinterpret_cast<signed char>(v18) >> 4) - 1);
            if (reinterpret_cast<unsigned char>(ebx30) > reinterpret_cast<unsigned char>(63)) {
                ebx30 = reinterpret_cast<void**>(63);
            }
            ecx32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx14) + reinterpret_cast<unsigned char>(v18));
            edx28 = reinterpret_cast<void**>((reinterpret_cast<signed char>(ecx32) >> 4) - 1);
            v15 = ecx32;
            if (reinterpret_cast<unsigned char>(edx28) > reinterpret_cast<unsigned char>(63)) {
                edx28 = reinterpret_cast<void**>(63);
            }
            if (ebx30 != edx28) {
                if (*reinterpret_cast<void***>(v31 + 4) == *reinterpret_cast<void***>(v31 + 8)) {
                    if (reinterpret_cast<unsigned char>(ebx30) >= reinterpret_cast<unsigned char>(32)) {
                        ecx33 = reinterpret_cast<uint32_t>(ebx30 + 0xffffffe0);
                        esi34 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx33));
                        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax10 + reinterpret_cast<unsigned char>(edi12) * 4) + 0xc4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax10 + reinterpret_cast<unsigned char>(edi12) * 4) + 0xc4) & esi34;
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebx30) + reinterpret_cast<unsigned char>(eax10) + 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebx30) + reinterpret_cast<unsigned char>(eax10) + 4) - 1);
                        if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebx30) + reinterpret_cast<unsigned char>(eax10) + 4)) {
                            *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4)) & esi34);
                        }
                    } else {
                        ecx35 = ebx30;
                        esi36 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx35));
                        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax10 + reinterpret_cast<unsigned char>(edi12) * 4) + 68) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax10 + reinterpret_cast<unsigned char>(edi12) * 4) + 68) & esi36;
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebx30) + reinterpret_cast<unsigned char>(eax10) + 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebx30) + reinterpret_cast<unsigned char>(eax10) + 4) - 1);
                        if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebx30) + reinterpret_cast<unsigned char>(eax10) + 4)) {
                            *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) & esi36);
                        }
                    }
                }
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(v31 + 8) + 4) = *reinterpret_cast<void***>(v31 + 4);
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(v31 + 4) + 8) = *reinterpret_cast<void***>(v31 + 8);
            }
            esi11 = v31;
        }
        if ((ebx29 || ebx30 != edx28) && (ecx37 = v13 + reinterpret_cast<unsigned char>(edx28) * 8, ebx38 = *reinterpret_cast<void***>(ecx37 + 4), *reinterpret_cast<void***>(esi11 + 8) = ecx37, *reinterpret_cast<void***>(esi11 + 4) = ebx38, *reinterpret_cast<void***>(ecx37 + 4) = esi11, *reinterpret_cast<void***>(*reinterpret_cast<void***>(esi11 + 4) + 8) = esi11, *reinterpret_cast<void***>(esi11 + 4) == *reinterpret_cast<void***>(esi11 + 8))) {
            cl39 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edx28) + reinterpret_cast<unsigned char>(eax10) + 4);
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edx28) + reinterpret_cast<unsigned char>(eax10) + 4) = reinterpret_cast<signed char>(cl39 + 1);
            if (reinterpret_cast<unsigned char>(edx28) >= reinterpret_cast<unsigned char>(32)) {
                if (!cl39) {
                    ecx40 = reinterpret_cast<uint32_t>(edx28 + 0xffffffe0);
                    *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4)) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx40));
                }
                ecx41 = reinterpret_cast<uint32_t>(edx28 + 0xffffffe0);
                eax42 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax10 + reinterpret_cast<unsigned char>(edi12) * 4) + 0xc4);
                *eax42 = *eax42 | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx41);
            } else {
                if (!cl39) {
                    ecx43 = edx28;
                    *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx43));
                }
                ecx44 = edx28;
                eax45 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax10 + reinterpret_cast<unsigned char>(edi12) * 4) + 68);
                *eax45 = *eax45 | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx44);
            }
        }
        *reinterpret_cast<void***>(esi11) = v15;
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(esi11) + 0xfffffffc) = v15;
        eax10 = v13;
        *reinterpret_cast<void***>(eax10) = *reinterpret_cast<void***>(eax10) - 1;
        if (!*reinterpret_cast<void***>(eax10)) {
            eax46 = g40bc78;
            if (eax46) {
                ecx47 = g40bc90;
                esi48 = VirtualFree;
                ecx49 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(ecx47) << 15) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax46 + 12)));
                esi48(ecx49, 0x8000, 0x4000);
                ecx50 = g40bc90;
                eax51 = g40bc78;
                *reinterpret_cast<void***>(eax51 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax51 + 8)) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx50));
                eax52 = g40bc78;
                ecx53 = g40bc90;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(eax52 + 16) + reinterpret_cast<unsigned char>(ecx53) * 4) + 0xc4) = 0;
                eax54 = g40bc78;
                *reinterpret_cast<signed char*>(*reinterpret_cast<void***>(eax54 + 16) + 67) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(*reinterpret_cast<void***>(eax54 + 16) + 67) - 1);
                eax55 = g40bc78;
                if (!*reinterpret_cast<signed char*>(*reinterpret_cast<void***>(eax55 + 16) + 67)) {
                    *reinterpret_cast<void***>(eax55 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax55 + 4)) & 0xfffffffe);
                    eax55 = g40bc78;
                }
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax55 + 8) == 0xffffffff)) {
                    v56 = *reinterpret_cast<void***>(eax55 + 12);
                    esi48(v56, 0, 0x8000, ecx49, 0x8000, 0x4000);
                    eax57 = g40bc78;
                    v58 = *reinterpret_cast<void***>(eax57 + 16);
                    v59 = g40bec0;
                    HeapFree(v59, 0, v58, v56, 0, 0x8000, ecx49, 0x8000, 0x4000);
                    eax60 = g40bc7c;
                    edx61 = g40bc80;
                    eax62 = g40bc78;
                    fun_404be0(eax62, eax62 + 20, (eax60 + eax60 * 4 << 2) - reinterpret_cast<unsigned char>(eax62) + reinterpret_cast<unsigned char>(edx61) + 0xffffffec, v59, 0, v58, v56, 0, 0x8000, ecx49, 0x8000, 0x4000);
                    --g40bc7c;
                    below_or_equal63 = reinterpret_cast<unsigned char>(a2) <= reinterpret_cast<unsigned char>(g40bc78);
                    if (!below_or_equal63) {
                        a2 = a2 - 20;
                    }
                    eax64 = g40bc80;
                    g40bc88 = eax64;
                }
            }
            eax10 = a2;
            g40bc78 = eax10;
            g40bc90 = edi12;
        }
    }
    return eax10;
}

void fun_4084df(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14);

uint32_t fun_40842c(void** ecx, void** a2, void** a3, void** a4);

void** fun_407057(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** eax14;
    void** edi15;
    void** eax16;
    void** edi17;
    void** esi18;
    void** v19;
    uint32_t eax20;
    void** v21;
    void** eax22;

    eax14 = *reinterpret_cast<void***>(a2 + 12);
    edi15 = reinterpret_cast<void**>(0xffffffff);
    if (!(*reinterpret_cast<unsigned char*>(&eax14) & 64)) {
        if (*reinterpret_cast<unsigned char*>(&eax14) & 0x83) {
            eax16 = fun_403e18(ecx, a2);
            edi15 = eax16;
            fun_4084df(ecx, a2, a2, edi17, esi18, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
            v19 = *reinterpret_cast<void***>(a2 + 16);
            eax20 = fun_40842c(ecx, v19, a2, a2);
            if (reinterpret_cast<int32_t>(eax20) >= reinterpret_cast<int32_t>(0)) {
                if (*reinterpret_cast<void***>(a2 + 28)) {
                    v21 = *reinterpret_cast<void***>(a2 + 28);
                    fun_40403c(ecx, v21, edi17, esi18, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
                    *reinterpret_cast<void***>(a2 + 28) = reinterpret_cast<void**>(0);
                }
            } else {
                edi15 = reinterpret_cast<void**>(0xffffffff);
            }
        }
        eax22 = edi15;
    } else {
        eax22 = reinterpret_cast<void**>(0xffffffff);
    }
    *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(0);
    return eax22;
}

uint32_t fun_407811(void** a1, void** a2, void** a3);

uint32_t fun_40486b(uint32_t ecx, void*** a2, uint32_t a3) {
    int32_t esi4;
    void** eax5;
    int32_t ecx6;
    void** v7;
    uint32_t eax8;
    int32_t esi9;
    void** edi10;
    void** v11;

    __asm__("cdq ");
    esi4 = reinterpret_cast<int32_t>(a3) / 32;
    eax5 = reinterpret_cast<void**>(a2 + esi4 * 4);
    ecx6 = 31 - reinterpret_cast<int32_t>(a3) % 32;
    v7 = *reinterpret_cast<void***>(eax5);
    eax8 = fun_407811(v7, 1 << *reinterpret_cast<unsigned char*>(&ecx6), eax5);
    esi9 = esi4 - 1;
    if (esi9 >= 0) {
        edi10 = reinterpret_cast<void**>(a2 + esi9 * 4);
        do {
            if (!eax8) 
                break;
            v11 = *reinterpret_cast<void***>(edi10);
            eax8 = fun_407811(v11, 1, edi10);
            --esi9;
            edi10 = edi10 - 4;
        } while (esi9 >= 0);
    }
    return eax8;
}

uint32_t fun_407811(void** a1, void** a2, void** a3) {
    void** ecx4;
    uint32_t eax5;

    ecx4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(a2));
    eax5 = 0;
    if (reinterpret_cast<unsigned char>(ecx4) < reinterpret_cast<unsigned char>(a1) || reinterpret_cast<unsigned char>(ecx4) < reinterpret_cast<unsigned char>(a2)) {
        eax5 = 1;
    }
    *reinterpret_cast<void***>(a3) = ecx4;
    return eax5;
}

int32_t fun_404839(void*** a1, uint32_t a2);

uint32_t fun_4048b8(void* ecx, void*** a2, int32_t* a3, void*** a4, int32_t* a5, void*** a6, int32_t* a7) {
    uint32_t v8;
    uint32_t edi9;
    uint32_t eax10;
    int32_t esi11;
    int32_t ecx12;
    int32_t ebx13;
    void*** eax14;
    uint32_t v15;
    int32_t eax16;
    uint32_t eax17;
    int32_t ecx18;
    int32_t ebx19;
    void*** edi20;
    int32_t ecx21;

    v8 = 0;
    edi9 = reinterpret_cast<uint32_t>(a3) - 1;
    eax10 = edi9 + 1;
    __asm__("cdq ");
    esi11 = 31 - reinterpret_cast<int32_t>(eax10) % 32;
    ecx12 = esi11;
    ebx13 = reinterpret_cast<int32_t>(eax10) / 32;
    eax14 = a2;
    if (reinterpret_cast<unsigned char>(eax14[ebx13 * 4]) & 1 << *reinterpret_cast<unsigned char*>(&ecx12)) {
        v15 = edi9 + 1;
        eax16 = fun_404839(eax14, v15);
        if (!eax16) {
            eax17 = fun_40486b(v15, a2, edi9);
            v8 = eax17;
        }
        eax14 = a2;
    }
    ecx18 = esi11;
    eax14[ebx13 * 4] = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax14[ebx13 * 4]) & 0xffffffff << *reinterpret_cast<unsigned char*>(&ecx18));
    ebx19 = ebx13 + 1;
    if (ebx19 < 3) {
        edi20 = eax14 + ebx19 * 4;
        ecx21 = 3 - ebx19;
        while (ecx21) {
            --ecx21;
            *edi20 = reinterpret_cast<void**>(0);
            edi20 = edi20 + 4;
        }
    }
    return v8;
}

int32_t fun_404839(void*** a1, uint32_t a2) {
    int32_t eax3;
    int32_t ecx4;
    void*** ecx5;

    __asm__("cdq ");
    eax3 = reinterpret_cast<int32_t>(a2) / 32;
    ecx4 = 31 - reinterpret_cast<int32_t>(a2) % 32;
    ecx5 = a1;
    if (!(reinterpret_cast<unsigned char>(ecx5[eax3 * 4]) & reinterpret_cast<uint32_t>(~(-1 << *reinterpret_cast<unsigned char*>(&ecx4))))) {
        do {
            ++eax3;
            if (eax3 >= 3) 
                break;
        } while (!ecx5[eax3 * 4]);
        goto addr_404858_4;
    } else {
        addr_404858_4:
        return 0;
    }
    return 1;
}

void fun_40492a(void*** a1, int32_t* a2) {
    int32_t* eax3;
    int32_t edx4;
    void* ecx5;

    eax3 = a2;
    edx4 = 3;
    ecx5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a1) - reinterpret_cast<uint32_t>(eax3));
    do {
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx5) + reinterpret_cast<uint32_t>(eax3)) = *eax3;
        ++eax3;
        --edx4;
    } while (edx4);
    return;
}

void* fun_404945(int32_t* a1) {
    int32_t eax2;

    eax2 = 0;
    do {
        if (a1[eax2]) 
            break;
        ++eax2;
    } while (eax2 < 3);
    goto addr_404957_4;
    return 0;
    addr_404957_4:
    return 1;
}

struct s22 {
    signed char[2] pad2;
    void* f2;
    void* f6;
    uint16_t f10;
};

struct s23 {
    void* f0;
    void* f4;
    int32_t* f8;
    int32_t* f12;
    int32_t f16;
    void* f20;
};

void fun_40495e(void*** a1, int32_t* a2, void*** a3, int32_t* a4, void*** a5, int32_t* a6, void*** a7, int32_t* a8);

int32_t fun_4049d9(struct s22* a1, struct s6* a2, struct s23* a3) {
    void* ebp4;
    uint32_t ecx5;
    struct s23* esi6;
    void* v7;
    void* ecx8;
    void* edi9;
    void* v10;
    int32_t* v11;
    void*** v12;
    int32_t* v13;
    void*** edi14;
    int32_t* esi15;
    uint32_t eax16;
    void* ecx17;
    void* ebx18;
    void* eax19;
    int32_t eax20;
    int1_t less21;
    int32_t* v22;
    void* ebx23;
    void*** ebx24;
    int32_t* v25;
    void*** v26;
    int32_t* v27;
    int32_t* v28;
    void*** v29;
    int32_t* v30;
    int32_t* edi31;
    int32_t* v32;
    void*** v33;
    void*** v34;
    int32_t* v35;
    int32_t* v36;
    void*** v37;
    int32_t* v38;
    uint32_t ecx39;
    uint32_t ecx40;
    void* ebx41;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ecx5 = a1->f10;
    esi6 = a3;
    v7 = a1->f6;
    ecx8 = a1->f2;
    edi9 = reinterpret_cast<void*>((ecx5 & 0x7fff) - 0x3fff);
    v10 = ecx8;
    v11 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp4) + 0xfffffff4);
    if (!reinterpret_cast<int1_t>(edi9 == 0xffffc001)) {
        v12 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp4) - 24);
        fun_40492a(v12, v11);
        v13 = esi6->f8;
        eax16 = fun_4048b8(ecx8, reinterpret_cast<int32_t>(ebp4) - 12, v13, v12, v11, edi14, esi15);
        if (eax16) {
            edi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi9) + 1);
        }
        ecx17 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi6->f4) - reinterpret_cast<uint32_t>(esi6->f8));
        if (reinterpret_cast<int32_t>(edi9) < reinterpret_cast<int32_t>(ecx17)) 
            goto addr_404a6b_5;
    } else {
        ebx18 = reinterpret_cast<void*>(0);
        eax19 = fun_404945(v11);
        if (eax19) {
            addr_404af1_7:
            eax20 = 0;
            goto addr_404af3_8;
        } else {
            v7 = eax19;
            v10 = eax19;
            esi6 = reinterpret_cast<struct s23*>(&esi6->f4 + 1 + 1);
            goto addr_404a3a_18;
        }
    }
    if (reinterpret_cast<int32_t>(edi9) > reinterpret_cast<int32_t>(esi6->f4)) {
        less21 = reinterpret_cast<int32_t>(edi9) < reinterpret_cast<int32_t>(esi6->f0);
        v22 = esi6->f12;
        if (less21) {
            ebx23 = esi6->f20;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&v7) + 3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&v7) + 3) & 0x7f);
            ebx18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx23) + reinterpret_cast<uint32_t>(edi9));
            fun_40495e(reinterpret_cast<int32_t>(ebp4) - 12, v22, edi14, esi15, ebx24, v25, v26, v27);
            goto addr_404af1_7;
        } else {
            v7 = reinterpret_cast<void*>(0);
            v10 = reinterpret_cast<void*>(0);
            esi6 = reinterpret_cast<struct s23*>(&esi6->f4 + 1 + 1);
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&v7) + 3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&v7) + 3) | 0x80);
            fun_40495e(reinterpret_cast<int32_t>(ebp4) - 12, v22, edi14, esi15, ebx24, v28, v29, v30);
            ebx18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi6->f20) + reinterpret_cast<uint32_t>(esi6->f0));
            eax20 = 1;
        }
    } else {
        edi31 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi6->f4) - reinterpret_cast<uint32_t>(edi9));
        v32 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp4) + 0xffffffe8);
        v33 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp4) - 12);
        fun_40492a(v33, v32);
        v34 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp4) - 12);
        fun_40495e(v34, edi31, v33, v32, edi14, esi15, ebx24, v35);
        v36 = esi6->f8;
        v37 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp4) - 12);
        fun_4048b8(ecx17, v37, v36, v34, edi31, v33, v32);
        v38 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi6->f12) + 1);
        fun_40495e(reinterpret_cast<int32_t>(ebp4) - 12, v38, v37, v36, v34, edi31, v33, v32);
        goto addr_404ab1_33;
    }
    addr_404af3_8:
    ecx39 = 31 - reinterpret_cast<uint32_t>(esi6->f12);
    ecx40 = -(ecx5 & 0x8000);
    ebx41 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx18) << *reinterpret_cast<unsigned char*>(&ecx39) | ecx40 - (ecx40 + reinterpret_cast<uint1_t>(ecx40 < ecx40 + reinterpret_cast<uint1_t>(!!(ecx5 & 0x8000)))) & 0x80000000 | reinterpret_cast<uint32_t>(v7));
    if (esi6->f16 != 64) {
        if (esi6->f16 == 32) {
            a2->f0 = ebx41;
        }
    } else {
        a2->f4 = ebx41;
        a2->f0 = v10;
    }
    return eax20;
    addr_404ab1_33:
    ebx18 = reinterpret_cast<void*>(0);
    addr_404a3a_18:
    eax20 = 2;
    goto addr_404af3_8;
    addr_404a6b_5:
    v7 = reinterpret_cast<void*>(0);
    v10 = reinterpret_cast<void*>(0);
    esi6 = reinterpret_cast<struct s23*>(&esi6->f4 + 1 + 1);
    goto addr_404ab1_33;
}

void fun_40495e(void*** a1, int32_t* a2, void*** a3, int32_t* a4, void*** a5, int32_t* a6, void*** a7, int32_t* a8) {
    int32_t edx9;
    void*** ebx10;
    int32_t ecx11;
    int32_t v12;
    uint32_t eax13;
    int32_t v14;
    uint32_t edi15;
    uint32_t v16;
    void** esi17;
    int32_t ecx18;
    int32_t ecx19;
    int32_t eax20;
    void*** ecx21;

    __asm__("cdq ");
    edx9 = reinterpret_cast<int32_t>(a2) % 32;
    ebx10 = a1;
    ecx11 = edx9;
    v12 = reinterpret_cast<int32_t>(a2) / 32;
    eax13 = 0;
    v14 = 32 - edx9;
    edi15 = reinterpret_cast<uint32_t>(~(-1 << *reinterpret_cast<unsigned char*>(&ecx11)));
    v16 = 0;
    do {
        esi17 = ebx10[eax13 * 4];
        ecx18 = edx9;
        ecx19 = v14;
        ebx10[eax13 * 4] = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi17) >> *reinterpret_cast<signed char*>(&ecx18) | v16);
        ++eax13;
        v16 = (reinterpret_cast<unsigned char>(esi17) & edi15) << *reinterpret_cast<unsigned char*>(&ecx19);
    } while (reinterpret_cast<int32_t>(eax13) < reinterpret_cast<int32_t>(3));
    eax20 = 2;
    ecx21 = ebx10 + (2 - v12) * 4;
    do {
        if (eax20 < v12) {
            ebx10[eax20 * 4] = reinterpret_cast<void**>(0);
        } else {
            ebx10[eax20 * 4] = *ecx21;
        }
        --eax20;
        ecx21 = ecx21 - 4;
    } while (eax20 >= 0);
    return;
}

struct s24 {
    uint32_t f0;
    uint32_t f4;
    int16_t f6;
};

struct s25 {
    signed char[16] pad16;
    uint32_t f16;
};

struct s26 {
    uint16_t f0;
    signed char f2;
    signed char f3;
    void** f4;
    signed char f5;
};

struct s27 {
    signed char[28] pad28;
    struct s26* f28;
};

struct s28 {
    signed char[12] pad12;
    uint32_t f12;
};

struct s29 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s30 {
    signed char[8] pad8;
    int32_t f8;
};

void** fun_408948(void** a1, void** a2, void** a3, void** a4);

void** fun_408716(void** a1, void** a2);

struct s31 {
    signed char[24] pad24;
    unsigned char f24;
};

struct s32 {
    signed char[1] pad1;
    void** f1;
};

struct s33 {
    signed char[20] pad20;
    struct s32* f20;
};

struct s34 {
    signed char[8] pad8;
    int32_t f8;
};

struct s35 {
    signed char[8] pad8;
    int32_t f8;
};

struct s36 {
    signed char[8] pad8;
    int32_t f8;
};

struct s37 {
    signed char[16] pad16;
    int32_t f16;
};

void fun_407890(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

struct s38 {
    signed char[16] pad16;
    int32_t f16;
};

struct s39 {
    signed char[16] pad16;
    int32_t f16;
};

struct s40 {
    signed char[16] pad16;
    int32_t f16;
};

void fun_4078be(void** ecx, void** a2);

struct s41 {
    signed char[16] pad16;
    void** f16;
};

struct s42 {
    int32_t f0;
    int32_t f4;
};

struct s43 {
    int32_t f0;
    int32_t f4;
};

struct s44 {
    int32_t f0;
    int32_t f4;
};

struct s45 {
    int32_t f0;
    int32_t f4;
};

uint32_t fun_407832(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

struct s46 {
    signed char[48] pad48;
    void** f48;
};

struct s47 {
    signed char[16] pad16;
    int32_t f16;
};

struct s48 {
    signed char[16] pad16;
    int32_t f16;
};

struct s49 {
    signed char[16] pad16;
    int32_t f16;
};

struct s50 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t fun_407e50(struct s24* ecx, int32_t a2, int32_t a3, int16_t a4, int32_t a5, int32_t a6, int32_t a7) {
    void** eax8;
    int32_t ebp9;
    uint32_t eax10;
    struct s25* ebp11;
    void** v12;
    void** ebx13;
    struct s26* ebx14;
    struct s27* ebp15;
    void** v16;
    void** esi17;
    void** ecx18;
    void** v19;
    void** edi20;
    int32_t ebp21;
    int32_t ebp22;
    int32_t ebp23;
    int32_t ebp24;
    int32_t ebp25;
    int32_t ebp26;
    int32_t ebp27;
    int32_t ebp28;
    int32_t ebp29;
    int32_t ebp30;
    int32_t ebp31;
    int32_t ebp32;
    int32_t ebp33;
    uint32_t edx34;
    uint32_t edi35;
    struct s28* ebp36;
    struct s29* ebp37;
    uint32_t eax38;
    int32_t ebp39;
    void** ecx40;
    int32_t ebp41;
    struct s30* ebp42;
    int32_t esi43;
    int32_t ebp44;
    int32_t ebp45;
    void* ebp46;
    int32_t ebp47;
    void** v48;
    void* ebp49;
    void* ebp50;
    int1_t zf51;
    struct s31* ebp52;
    struct s32* edi53;
    struct s33* ebp54;
    struct s34* ebp55;
    struct s35* ebp56;
    void** v57;
    struct s36* ebp58;
    uint32_t esi59;
    int32_t ebp60;
    int32_t ebp61;
    struct s37* ebp62;
    void** v63;
    void* ebp64;
    void** v65;
    void** v66;
    void** v67;
    struct s38* ebp68;
    struct s39* ebp69;
    struct s40* ebp70;
    uint32_t esi71;
    void** v72;
    void* ebp73;
    void** ecx74;
    void** eax75;
    int32_t ebp76;
    struct s41* ebp77;
    struct s42* esi78;
    int32_t ebp79;
    struct s43* edi80;
    int32_t ebp81;
    struct s44* edi82;
    struct s45* esi83;
    void** v84;
    void* ebp85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void* ebp90;
    void** v91;
    void** v92;
    void** v93;
    void* ebp94;
    void** v95;
    void* ebp96;
    void* ebp97;
    int32_t ebp98;
    void** al99;
    int32_t ebp100;
    int32_t ebp101;
    int32_t ebp102;
    struct s47* ebp103;
    struct s48* ebp104;
    int1_t zf105;
    struct s49* ebp106;
    int32_t ebp107;
    int32_t ebp108;
    void** eax109;
    void** eax110;
    void** ecx111;
    signed char al112;
    void** ecx113;
    int32_t ebp114;
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
    int32_t v125;
    int32_t v126;
    int32_t v127;
    int32_t v128;
    int32_t v129;
    int32_t v130;
    int32_t v131;
    int32_t v132;
    int32_t v133;
    int32_t v134;
    struct s50* ebp135;
    int32_t ebp136;

    __asm__("in al, dx");
    eax8 = g40b498;
    *reinterpret_cast<void***>(ebp9 - 4) = eax8;
    eax10 = ebp11->f16;
    v12 = ebx13;
    ebx14 = ebp15->f28;
    v16 = esi17;
    ecx18 = reinterpret_cast<void**>(eax10 & 0x8000);
    v19 = edi20;
    *reinterpret_cast<signed char*>(ebp21 - 28) = -52;
    *reinterpret_cast<signed char*>(ebp22 - 27) = -52;
    *reinterpret_cast<signed char*>(ebp23 - 26) = -52;
    *reinterpret_cast<signed char*>(ebp24 - 25) = -52;
    *reinterpret_cast<signed char*>(ebp25 - 24) = -52;
    *reinterpret_cast<signed char*>(ebp26 - 23) = -52;
    *reinterpret_cast<signed char*>(ebp27 - 22) = -52;
    *reinterpret_cast<signed char*>(ebp28 - 21) = -52;
    *reinterpret_cast<signed char*>(ebp29 - 20) = -52;
    *reinterpret_cast<signed char*>(ebp30 - 19) = -52;
    *reinterpret_cast<signed char*>(ebp31 - 18) = -5;
    *reinterpret_cast<signed char*>(ebp32 - 17) = 63;
    *reinterpret_cast<int32_t*>(ebp33 - 44) = 1;
    edx34 = eax10 & 0x7fff;
    if (!*reinterpret_cast<int16_t*>(&ecx18)) {
        ebx14->f2 = 32;
    } else {
        ebx14->f2 = 45;
    }
    edi35 = ebp36->f12;
    if (*reinterpret_cast<uint16_t*>(&edx34) || (edi35 || ebp37->f8 != edi35)) {
        if (*reinterpret_cast<uint16_t*>(&edx34) != 0x7fff) {
            eax38 = *reinterpret_cast<uint16_t*>(&edx34);
            *reinterpret_cast<uint16_t*>(ebp39 - 16) = 0;
            ecx40 = reinterpret_cast<void**>(((eax38 >> 8) + (edi35 >> 24) * 2) * 77);
            *reinterpret_cast<int32_t*>(ebp41 - 14) = ebp42->f8;
            esi43 = reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(ecx40 + eax38 * 0x4d10) + 0xecbced0c) >> 16;
            *reinterpret_cast<uint16_t*>(ebp44 - 6) = *reinterpret_cast<uint16_t*>(&edx34);
            *reinterpret_cast<uint32_t*>(ebp45 - 10) = edi35;
            fun_408948(reinterpret_cast<int32_t>(ebp46) + 0xfffffff0, -static_cast<int32_t>(*reinterpret_cast<int16_t*>(&esi43)), 1, v19);
            if (*reinterpret_cast<uint16_t*>(ebp47 - 6) >= 0x3fff) {
                v48 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp49) + 0xffffffe4);
                ++esi43;
                fun_408716(reinterpret_cast<int32_t>(ebp50) + 0xfffffff0, v48);
                ecx40 = v48;
            }
            zf51 = (ebp52->f24 & 1) == 0;
            edi53 = ebp54->f20;
            ebx14->f0 = *reinterpret_cast<uint16_t*>(&esi43);
            if (zf51) 
                goto addr_407fcf_15;
            edi53 = reinterpret_cast<struct s32*>(reinterpret_cast<int32_t>(edi53) + *reinterpret_cast<int16_t*>(&esi43));
            if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edi53) < 0) | reinterpret_cast<uint1_t>(edi53 == 0))) 
                goto addr_407fc6_17;
        } else {
            ebx14->f0 = 1;
            if (edi35 == 0x80000000 && !ebp55->f8 || edi35 & 0x40000000) {
                if (!*reinterpret_cast<int16_t*>(&ecx18) || edi35 != 0xc0000000) {
                    if (edi35 != 0x80000000 || ebp56->f8) {
                        addr_407f3c_21:
                        v57 = reinterpret_cast<void**>(0x409d74);
                        goto addr_407f41_22;
                    } else {
                        v57 = reinterpret_cast<void**>(0x409d7c);
                        goto addr_407f24_24;
                    }
                } else {
                    if (ebp58->f8) 
                        goto addr_407f3c_21;
                    v57 = reinterpret_cast<void**>(0x409d84);
                    goto addr_407f24_24;
                }
            } else {
                v57 = reinterpret_cast<void**>(0x409d8c);
                goto addr_407f41_22;
            }
        }
    } else {
        addr_407fc6_17:
        *reinterpret_cast<void***>(&ebx14->f4) = reinterpret_cast<void**>(48);
        goto addr_4080c9_28;
    }
    addr_407fcf_15:
    if (reinterpret_cast<int32_t>(edi53) > 21) {
        edi53 = reinterpret_cast<struct s32*>(21);
    }
    esi59 = *reinterpret_cast<uint16_t*>(ebp60 - 6) - 0x3ffe;
    *reinterpret_cast<uint16_t*>(ebp61 - 6) = 0;
    ebp62->f16 = 8;
    do {
        v63 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp64) + 0xfffffff0);
        fun_407890(ecx40, v63, v19, v16, v12, v65, v66, v67);
        ebp68->f16 = ebp69->f16 - 1;
        ecx40 = v63;
    } while (ebp70->f16);
    if (reinterpret_cast<int32_t>(esi59) < reinterpret_cast<int32_t>(0) && (esi71 = -esi59 & 0xff, !(reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(esi71 == 0)))) {
        do {
            v72 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp73) + 0xfffffff0);
            fun_4078be(ecx40, v72);
            --esi71;
            ecx40 = v72;
        } while (esi71);
    }
    ecx74 = reinterpret_cast<void**>(&edi53->f1);
    eax75 = reinterpret_cast<void**>(&ebx14->f4);
    *reinterpret_cast<void***>(ebp76 - 48) = eax75;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx74) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx74 == 0))) {
        ebp77->f16 = ecx74;
        do {
            esi78 = reinterpret_cast<struct s42*>(ebp79 - 16);
            edi80 = reinterpret_cast<struct s43*>(ebp81 - 40);
            edi80->f0 = esi78->f0;
            edi82 = reinterpret_cast<struct s44*>(&edi80->f4);
            esi83 = reinterpret_cast<struct s45*>(&esi78->f4);
            edi82->f0 = esi83->f0;
            v84 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp85) + 0xfffffff0);
            edi82->f4 = esi83->f4;
            fun_407890(ecx74, v84, v19, v16, v12, v86, v87, v88);
            v89 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp90) + 0xfffffff0);
            fun_407890(ecx74, v89, v84, v19, v16, v12, v91, v92);
            v93 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp94) + 0xffffffd8);
            v95 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp96) + 0xfffffff0);
            fun_407832(v95, v93, v89, v84, v19, v16, v12);
            fun_407890(ecx74, reinterpret_cast<int32_t>(ebp97) + 0xfffffff0, v95, v93, v89, v84, v19, v16);
            ecx74 = *reinterpret_cast<void***>(ebp98 - 48);
            al99 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s46**>(ebp100 - 5))->f48);
            *reinterpret_cast<int32_t*>(ebp101 - 48) = *reinterpret_cast<int32_t*>(ebp102 - 48) + 1;
            ebp103->f16 = ebp104->f16 - 1;
            zf105 = ebp106->f16 == 0;
            *reinterpret_cast<void***>(ecx74) = al99;
            *reinterpret_cast<signed char*>(ebp107 - 5) = 0;
        } while (!zf105);
        eax75 = *reinterpret_cast<void***>(ebp108 - 48);
    }
    eax109 = eax75 - 1;
    eax110 = eax109 - 1;
    ecx111 = reinterpret_cast<void**>(&ebx14->f4);
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax109)) >= reinterpret_cast<signed char>(53)) 
        goto addr_408080_48;
    while (reinterpret_cast<unsigned char>(eax110) >= reinterpret_cast<unsigned char>(ecx111) && reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax110) == 48)) {
        --eax110;
    }
    if (reinterpret_cast<unsigned char>(eax110) < reinterpret_cast<unsigned char>(ecx111)) 
        goto addr_4080c6_52;
    addr_408099_53:
    al112 = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax110) - *reinterpret_cast<signed char*>(&ebx14)) - 3);
    ebx14->f3 = al112;
    *reinterpret_cast<signed char*>(al112 + reinterpret_cast<int32_t>(ebx14) + 4) = 0;
    addr_4080a8_54:
    addr_4080ab_55:
    ecx113 = *reinterpret_cast<void***>(ebp114 - 4);
    fun_4041a2(ecx113, v115, v116, v117, v118, v119, v120, v121, v122, v123, v124, ecx113, v125, v126, v127, v128, v129, v130, v131, v132, v133, v134);
    goto ebp135->f4;
    addr_4080c6_52:
    *reinterpret_cast<void***>(ecx111) = reinterpret_cast<void**>(48);
    addr_4080c9_28:
    ebx14->f0 = 0;
    ebx14->f2 = 32;
    ebx14->f3 = 1;
    ebx14->f5 = 0;
    goto addr_4080ab_55;
    addr_408080_48:
    while (reinterpret_cast<unsigned char>(eax110) >= reinterpret_cast<unsigned char>(ecx111) && reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax110) == 57)) {
        *reinterpret_cast<void***>(eax110) = reinterpret_cast<void**>(48);
        --eax110;
    }
    if (reinterpret_cast<unsigned char>(eax110) < reinterpret_cast<unsigned char>(ecx111)) 
        goto addr_408093_59;
    addr_408097_60:
    *reinterpret_cast<void***>(eax110) = *reinterpret_cast<void***>(eax110) + 1;
    goto addr_408099_53;
    addr_408093_59:
    ++eax110;
    ebx14->f0 = reinterpret_cast<uint16_t>(ebx14->f0 + 1);
    goto addr_408097_60;
    addr_407f41_22:
    fun_404f20(ecx18, &ebx14->f4, v57, v19, v16, v12);
    ebx14->f3 = 6;
    addr_407f31_61:
    *reinterpret_cast<uint32_t*>(ebp136 - 44) = 0;
    goto addr_4080a8_54;
    addr_407f24_24:
    fun_404f20(ecx18, &ebx14->f4, v57, v19, v16, v12);
    ebx14->f3 = 5;
    goto addr_407f31_61;
}

uint32_t fun_405258() {
    uint32_t eax1;
    unsigned char bl2;
    unsigned char bl3;
    unsigned char bl4;
    unsigned char bl5;
    unsigned char bl6;
    uint32_t ebx7;
    uint32_t ecx8;
    uint32_t ebx9;
    uint32_t ecx10;
    uint32_t ebx11;
    uint32_t ebx12;

    eax1 = 0;
    if (bl2 & 16) {
        eax1 = 1;
    }
    if (bl3 & 8) {
        eax1 = eax1 | 4;
    }
    if (bl4 & 4) {
        eax1 = eax1 | 8;
    }
    if (bl5 & 2) {
        eax1 = eax1 | 16;
    }
    if (bl6 & 1) {
        eax1 = eax1 | 32;
    }
    if (ebx7 & 0x80000) {
        eax1 = eax1 | 2;
    }
    ecx8 = ebx9 & 0x300;
    if (ecx8) {
        if (ecx8 == 0x100) {
            eax1 = eax1 | 0x400;
        } else {
            if (ecx8 == 0x200) {
                eax1 = eax1 | 0x800;
            } else {
                if (ecx8 == 0x300) {
                    eax1 = eax1 | 0xc00;
                }
            }
        }
    }
    ecx10 = ebx11 & 0x30000;
    if (!ecx10) {
        eax1 = eax1 | 0x300;
    } else {
        if (ecx10 == 0x10000) {
            eax1 = eax1 | 0x200;
        }
    }
    if (ebx12 & 0x40000) {
        eax1 = eax1 | 0x1000;
    }
    return eax1;
}

uint32_t fun_4051c6();

uint32_t fun_4052e6(int32_t ecx, uint32_t a2, uint32_t a3) {
    uint32_t eax4;

    __asm__("wait ");
    __asm__("fnstcw word [ebp-0x4]");
    eax4 = fun_4051c6();
    fun_405258();
    __asm__("fldcw word [ebp+0xc]");
    return eax4 & ~a3 | a2 & a3;
}

int32_t HeapReAlloc = 0xa15e;

int32_t fun_406285(void** ecx, void** a2, void** a3, void** a4);

void** fun_4080de(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** ebx13;
    void** v14;
    void** ebp15;
    void** v16;
    void** edi17;
    void** v18;
    void** esi19;
    void** esi20;
    int1_t zf21;
    void** eax22;
    void** v23;
    int1_t zf24;
    void** eax25;
    void** edi26;
    int1_t zf27;
    void** eax28;
    void** ebp29;
    int1_t below_or_equal30;
    int32_t eax31;
    void** eax32;
    void** eax33;
    void** eax34;
    void** v35;
    void** eax36;
    void** v37;
    void** eax38;
    void** eax39;
    void** eax40;
    void** ebx41;

    ebx13 = a2;
    v14 = ebp15;
    v16 = edi17;
    if (ebx13) {
        v18 = esi19;
        esi20 = a3;
        if (esi20) {
            zf21 = g40bec4 == 3;
            if (!zf21) {
                do {
                    eax22 = reinterpret_cast<void**>(0);
                    if (reinterpret_cast<unsigned char>(esi20) <= reinterpret_cast<unsigned char>(0xffffffe0)) {
                        if (!esi20) {
                            ++esi20;
                        }
                        v23 = g40bec0;
                        eax22 = reinterpret_cast<void**>(HeapReAlloc(ecx, v23, 0, ebx13, esi20));
                        if (eax22) 
                            break;
                    }
                    zf24 = g40bc48 == 0;
                    if (zf24) 
                        break;
                    eax25 = fun_406b77(ecx);
                    ecx = esi20;
                } while (eax25);
                goto addr_408239_10;
            } else {
                do {
                    edi26 = reinterpret_cast<void**>(0);
                    if (reinterpret_cast<unsigned char>(esi20) > reinterpret_cast<unsigned char>(0xffffffe0)) {
                        addr_4081e7_12:
                        zf27 = g40bc48 == 0;
                        if (zf27) 
                            goto addr_408201_13; else 
                            continue;
                    } else {
                        eax28 = fun_405d85(ecx, ebx13, v18, v16, v14);
                        ebp29 = eax28;
                        ecx = ebx13;
                        if (!ebp29) 
                            goto addr_4081c6_15;
                        below_or_equal30 = reinterpret_cast<unsigned char>(esi20) <= reinterpret_cast<unsigned char>(g40bc84);
                        if (!below_or_equal30) 
                            goto addr_408186_17;
                        eax31 = fun_406285(ecx, ebp29, ebx13, esi20);
                        if (eax31) 
                            goto addr_40814d_19;
                    }
                    eax32 = fun_406564(ecx, esi20);
                    edi26 = eax32;
                    ecx = esi20;
                    if (!edi26) 
                        goto addr_408186_17;
                    eax33 = *reinterpret_cast<void***>(ebx13 + 0xfffffffc) - 1;
                    if (reinterpret_cast<unsigned char>(eax33) >= reinterpret_cast<unsigned char>(esi20)) {
                        eax33 = esi20;
                    }
                    fun_405a00(ecx, edi26, ebx13, eax33, v18, v16, v14);
                    eax34 = fun_405d85(ecx, ebx13, edi26, ebx13, eax33);
                    ebp29 = eax34;
                    fun_405db0(ecx, ebp29, ebx13, ebx13, edi26, ebx13, eax33, v18, v16);
                    addr_408182_24:
                    if (edi26) {
                        addr_4081c2_25:
                        if (ebp29) {
                            addr_4081e3_26:
                            if (edi26) 
                                goto addr_408201_13; else 
                                goto addr_4081e7_12;
                        } else {
                            addr_4081c6_15:
                            if (!esi20) {
                                ++esi20;
                            }
                        }
                    } else {
                        addr_408186_17:
                        if (!esi20) {
                            ++esi20;
                            goto addr_40818b_29;
                        }
                    }
                    esi20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi20 + 15) & 0xfffffff0);
                    v35 = g40bec0;
                    eax36 = reinterpret_cast<void**>(HeapReAlloc(ecx, v35, 0, ebx13, esi20));
                    edi26 = eax36;
                    goto addr_4081e3_26;
                    addr_40818b_29:
                    esi20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi20 + 15) & 0xfffffff0);
                    v37 = g40bec0;
                    eax38 = reinterpret_cast<void**>(HeapAlloc(ecx, v37, 0, esi20));
                    edi26 = eax38;
                    if (edi26) {
                        eax39 = *reinterpret_cast<void***>(ebx13 + 0xfffffffc) - 1;
                        if (reinterpret_cast<unsigned char>(eax39) >= reinterpret_cast<unsigned char>(esi20)) {
                            eax39 = esi20;
                        }
                        fun_405a00(ecx, edi26, ebx13, eax39, v37, 0, esi20);
                        fun_405db0(ecx, ebp29, ebx13, edi26, ebx13, eax39, v37, 0, esi20);
                        goto addr_4081c2_25;
                    }
                    addr_40814d_19:
                    edi26 = ebx13;
                    goto addr_408182_24;
                    eax40 = fun_406b77(ecx);
                    ecx = esi20;
                } while (eax40);
                goto addr_4081ff_35;
            }
        } else {
            fun_40403c(ecx, ebx13, v18, v16, v14, ebx41, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
            goto addr_408239_10;
        }
    } else {
        eax22 = fun_403ddf(ecx, a2, v16, v14, ebx41, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
        goto addr_40823c_38;
    }
    addr_40823b_39:
    addr_40823c_38:
    return eax22;
    addr_408239_10:
    eax22 = reinterpret_cast<void**>(0);
    goto addr_40823b_39;
    addr_408201_13:
    eax22 = edi26;
    goto addr_40823b_39;
    addr_4081ff_35:
    goto addr_408239_10;
}

void** fun_405614(void** a1, void* a2) {
    int32_t eax3;
    int32_t eax4;
    int32_t eax5;
    int32_t eax6;

    eax3 = eax4 - 0x3a4;
    if (!eax3) {
        return 0x411;
    } else {
        eax5 = eax3 - 4;
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

void** g40bda4 = reinterpret_cast<void**>(0);

int32_t GetCPInfo = 0xa152;

void** g40bc94 = reinterpret_cast<void**>(0);

void** fun_407455(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23);

void** fun_40566c() {
    void* ebp1;
    void** eax2;
    void** v3;
    void** v4;
    void** esi5;
    void** v6;
    void** v7;
    int32_t eax8;
    void** esi9;
    void** eax10;
    signed char cl11;
    void** eax12;
    unsigned char al13;
    unsigned char v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** eax23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** ecx28;
    void** v29;
    void** v30;
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
    void** eax42;
    int16_t cx43;
    signed char cl44;
    unsigned char v45;
    void** eax46;
    void* ecx47;
    void* ebx48;
    uint32_t ecx49;
    signed char* edi50;

    ebp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax2 = g40b498;
    v3 = eax2;
    v4 = esi5;
    v6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp1) + 0xffffffe8);
    v7 = g40bda4;
    eax8 = reinterpret_cast<int32_t>(GetCPInfo());
    esi9 = reinterpret_cast<void**>(0x100);
    if (eax8 != 1) {
        eax10 = reinterpret_cast<void**>(0);
        do {
            if (reinterpret_cast<unsigned char>(eax10) < reinterpret_cast<unsigned char>(65) || reinterpret_cast<unsigned char>(eax10) > reinterpret_cast<unsigned char>(90)) {
                if (reinterpret_cast<unsigned char>(eax10) < reinterpret_cast<unsigned char>(97) || reinterpret_cast<unsigned char>(eax10) > reinterpret_cast<unsigned char>(0x7a)) {
                    *reinterpret_cast<signed char*>(eax10 + 0x40bdc0) = 0;
                    continue;
                } else {
                    *reinterpret_cast<unsigned char*>(eax10 + 0x40bca1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax10 + 0x40bca1) | 32);
                    cl11 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax10) - 32);
                }
            } else {
                *reinterpret_cast<unsigned char*>(eax10 + 0x40bca1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax10 + 0x40bca1) | 16);
                cl11 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax10) + 32);
            }
            *reinterpret_cast<signed char*>(eax10 + 0x40bdc0) = cl11;
            ++eax10;
        } while (reinterpret_cast<unsigned char>(eax10) < reinterpret_cast<unsigned char>(0x100));
    } else {
        eax12 = reinterpret_cast<void**>(0);
        do {
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp1) + reinterpret_cast<unsigned char>(eax12) + 0xfffffee8) = *reinterpret_cast<signed char*>(&eax12);
            ++eax12;
        } while (reinterpret_cast<unsigned char>(eax12) < reinterpret_cast<unsigned char>(0x100));
        al13 = v14;
        if (!al13) 
            goto addr_4056ee_13; else 
            goto addr_4056b8_14;
    }
    addr_4057ed_15:
    eax23 = fun_4041a2(v3, v6, v4, v15, v16, v17, v18, v19, v20, v21, v22);
    return eax23;
    addr_4056ee_13:
    v24 = g40bc94;
    v25 = g40bda4;
    v26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp1) + 0xfffffae8);
    v27 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp1) + 0xfffffee8);
    fun_4070ad(ecx28, 1, v27, esi9, v26, v25, v24, 0, v7, v6, v4, v29, v30);
    v31 = g40bda4;
    v32 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp1) + 0xfffffde8);
    v33 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp1) + 0xfffffee8);
    v34 = g40bc94;
    fun_407455(v34, esi9, v33, esi9, v32, esi9, v31, 0, 1, v27, esi9, v26, v25, v24, 0, v7, v6, v4, v35, v36, v37, v38, v39);
    v40 = g40bda4;
    v41 = g40bc94;
    fun_407455(v41, 0x200, reinterpret_cast<int32_t>(ebp1) + 0xfffffee8, esi9, reinterpret_cast<int32_t>(ebp1) + 0xfffffce8, esi9, v40, 0, v34, esi9, v33, esi9, v32, esi9, v31, 0, 1, v27, esi9, v26, v25, v24, 0);
    eax42 = reinterpret_cast<void**>(0);
    do {
        cx43 = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(ebp1) + reinterpret_cast<unsigned char>(eax42) * 2 - 0x518);
        if (!(*reinterpret_cast<unsigned char*>(&cx43) & 1)) {
            if (!(*reinterpret_cast<unsigned char*>(&cx43) & 2)) {
                *reinterpret_cast<signed char*>(eax42 + 0x40bdc0) = 0;
                continue;
            } else {
                *reinterpret_cast<unsigned char*>(eax42 + 0x40bca1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax42 + 0x40bca1) | 32);
                cl44 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp1) + reinterpret_cast<unsigned char>(eax42) + 0xfffffce8);
            }
        } else {
            *reinterpret_cast<unsigned char*>(eax42 + 0x40bca1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax42 + 0x40bca1) | 16);
            cl44 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp1) + reinterpret_cast<unsigned char>(eax42) + 0xfffffde8);
        }
        *reinterpret_cast<signed char*>(eax42 + 0x40bdc0) = cl44;
        ++eax42;
    } while (reinterpret_cast<unsigned char>(eax42) < reinterpret_cast<unsigned char>(esi9));
    goto addr_4057ed_15;
    addr_4056b8_14:
    do {
        ecx28 = reinterpret_cast<void**>(static_cast<uint32_t>(v45));
        eax46 = reinterpret_cast<void**>(static_cast<uint32_t>(al13));
        if (reinterpret_cast<unsigned char>(eax46) <= reinterpret_cast<unsigned char>(ecx28)) {
            ecx47 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx28) - reinterpret_cast<unsigned char>(eax46) + 1);
            ebx48 = ecx47;
            ecx49 = reinterpret_cast<uint32_t>(ecx47) >> 2;
            edi50 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp1) + reinterpret_cast<unsigned char>(eax46) + 0xfffffee8);
            while (ecx49) {
                --ecx49;
                *edi50 = reinterpret_cast<signed char>(0x20202020);
                edi50 = edi50 + 4;
                esi9 = esi9 + 4;
            }
            ecx28 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx48) & 3);
            while (ecx28) {
                --ecx28;
                *edi50 = 32;
                ++edi50;
                ++esi9;
            }
        }
        al13 = *reinterpret_cast<unsigned char*>(&v3);
    } while (al13);
    goto addr_4056ee_13;
}

void** g40bbf4 = reinterpret_cast<void**>(0);

int32_t GetACP = 0xa13c;

int32_t GetOEMCP = 0xa146;

struct s51 {
    unsigned char f0;
    unsigned char f1;
};

void** g40bc98 = reinterpret_cast<void**>(0);

struct s52 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void** g40bdb0 = reinterpret_cast<void**>(0);

struct s53 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void** g40bdb4 = reinterpret_cast<void**>(0);

void** g40bdb8 = reinterpret_cast<void**>(0);

void fun_405643();

void** fun_4057f8(void** a1) {
    void** v2;
    void** v3;
    void** ebp4;
    void*** ebp5;
    void** eax6;
    void* v7;
    void* esi8;
    void** esi9;
    void** v10;
    void** v11;
    void** edi12;
    int1_t zf13;
    int32_t edx14;
    uint32_t eax15;
    void** eax16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** eax23;
    int32_t ecx24;
    signed char* edi25;
    int32_t ecx26;
    struct s51* ebx27;
    unsigned char al28;
    struct s51* esi29;
    uint32_t eax30;
    uint32_t edi31;
    unsigned char dl32;
    void** eax33;
    struct s52* esi34;
    struct s53* esi35;
    void* v36;
    void** v37;
    int32_t eax38;
    int1_t zf39;
    int32_t ecx40;
    signed char* edi41;
    void** v42;
    signed char v43;
    uint32_t eax44;
    uint32_t edx45;
    void** eax46;
    void** eax47;

    v2 = reinterpret_cast<void**>(__return_address());
    v3 = ebp4;
    ebp5 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax6 = g40b498;
    v7 = esi8;
    esi9 = a1;
    v10 = eax6;
    v11 = edi12;
    g40bbf4 = reinterpret_cast<void**>(0);
    if (!reinterpret_cast<int1_t>(esi9 == 0xfffffffe)) {
        if (!reinterpret_cast<int1_t>(esi9 == 0xfffffffd)) {
            if (!reinterpret_cast<int1_t>(esi9 == 0xfffffffc)) {
                addr_40585b_4:
                zf13 = esi9 == g40bda4;
                if (zf13) {
                    addr_4059ca_5:
                } else {
                    if (!esi9) 
                        goto addr_4059c0_7;
                    edx14 = 0;
                    eax15 = 0;
                    do {
                        if (*reinterpret_cast<void***>(eax15 + 0x40b4e8) == esi9) 
                            goto addr_4058e2_10;
                        eax15 = eax15 + 48;
                        ++edx14;
                    } while (eax15 < 0xf0);
                    goto addr_405886_12;
                }
            } else {
                eax16 = g40bc64;
                g40bbf4 = reinterpret_cast<void**>(1);
                goto addr_405856_14;
            }
        } else {
            g40bbf4 = reinterpret_cast<void**>(1);
            eax16 = reinterpret_cast<void**>(GetACP());
            goto addr_405856_14;
        }
    } else {
        g40bbf4 = reinterpret_cast<void**>(1);
        eax16 = reinterpret_cast<void**>(GetOEMCP());
        goto addr_405856_14;
    }
    addr_4059d1_17:
    eax23 = fun_4041a2(v10, v17, v18, v19, v20, v21, v22, v10, v3, v2, a1);
    return eax23;
    addr_4058e2_10:
    ecx24 = 64;
    edi25 = reinterpret_cast<signed char*>(0x40bca0);
    while (ecx24) {
        --ecx24;
        *edi25 = reinterpret_cast<signed char>(0);
        edi25 = edi25 + 4;
    }
    ecx26 = edx14 + edx14 * 2 << 4;
    v17 = reinterpret_cast<void**>(0);
    *edi25 = 0;
    ebx27 = reinterpret_cast<struct s51*>(ecx26 + 0x40b4f8);
    do {
        al28 = ebx27->f0;
        esi29 = ebx27;
        while (al28 && esi29->f1) {
            eax30 = al28;
            edi31 = esi29->f1;
            if (eax30 <= edi31) {
                dl32 = *reinterpret_cast<unsigned char*>(v17 + 0x40b4e0);
                do {
                    *reinterpret_cast<unsigned char*>(eax30 + 0x40bca1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax30 + 0x40bca1) | dl32);
                    ++eax30;
                } while (eax30 <= edi31);
            }
            esi29 = reinterpret_cast<struct s51*>(&esi29->f1 + 1);
            al28 = esi29->f0;
        }
        ++v17;
        ebx27 = ebx27 + 4;
    } while (reinterpret_cast<unsigned char>(v17) < reinterpret_cast<unsigned char>(4));
    g40bda4 = a1;
    g40bc98 = reinterpret_cast<void**>(1);
    eax33 = fun_405614(v11, v7);
    esi34 = reinterpret_cast<struct s52*>(ecx26 + 0x40b4ec);
    g40bdb0 = esi34->f0;
    esi35 = reinterpret_cast<struct s53*>(&esi34->f4);
    g40bdb4 = esi35->f0;
    g40bc94 = eax33;
    g40bdb8 = esi35->f4;
    addr_4059c5_41:
    fun_40566c();
    goto addr_4059ca_5;
    addr_405886_12:
    v36 = reinterpret_cast<void*>(ebp5 - 24);
    v37 = esi9;
    eax38 = reinterpret_cast<int32_t>(GetCPInfo(v37, v36));
    if (eax38 != 1) {
        zf39 = g40bbf4 == 0;
        if (zf39) {
            goto addr_4059d1_17;
        } else {
            addr_4059c0_7:
            fun_405643();
            goto addr_4059c5_41;
        }
    } else {
        ecx40 = 64;
        edi41 = reinterpret_cast<signed char*>(0x40bca0);
        while (ecx40) {
            --ecx40;
            *edi41 = reinterpret_cast<signed char>(0);
            edi41 = edi41 + 4;
            esi9 = esi9 + 4;
        }
        *edi41 = 0;
        g40bda4 = esi9 + 1;
        g40bc94 = reinterpret_cast<void**>(0);
        if (reinterpret_cast<unsigned char>(v42) > reinterpret_cast<unsigned char>(1)) 
            goto addr_4058bf_51;
    }
    g40bc98 = reinterpret_cast<void**>(0);
    addr_4059ac_53:
    g40bdb0 = reinterpret_cast<void**>(0);
    g40bdb4 = reinterpret_cast<void**>(0);
    g40bdb8 = reinterpret_cast<void**>(0);
    goto addr_4059c5_41;
    addr_4058bf_51:
    if (v43) {
        do {
            if (!*reinterpret_cast<unsigned char*>(&v10 + 1)) 
                break;
            eax44 = *reinterpret_cast<unsigned char*>(&v10);
            edx45 = *reinterpret_cast<unsigned char*>(&v10 + 1);
            while (eax44 <= edx45) {
                *reinterpret_cast<unsigned char*>(eax44 + 0x40bca1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax44 + 0x40bca1) | 4);
                ++eax44;
            }
        } while (*reinterpret_cast<signed char*>(&v10 + 2));
    }
    eax46 = reinterpret_cast<void**>(1);
    do {
        *reinterpret_cast<unsigned char*>(eax46 + 0x40bca1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax46 + 0x40bca1) | 8);
        ++eax46;
    } while (reinterpret_cast<unsigned char>(eax46) < reinterpret_cast<unsigned char>(0xff));
    eax47 = fun_405614(v37, v36);
    g40bc94 = eax47;
    g40bc98 = reinterpret_cast<void**>(1);
    goto addr_4059ac_53;
    addr_405856_14:
    a1 = eax16;
    esi9 = eax16;
    goto addr_40585b_4;
}

void fun_405643() {
    int32_t ecx1;
    signed char* edi2;

    ecx1 = 64;
    edi2 = reinterpret_cast<signed char*>(0x40bca0);
    while (ecx1) {
        --ecx1;
        *edi2 = reinterpret_cast<signed char>(0);
        edi2 = edi2 + 4;
    }
    *edi2 = 0;
    g40bda4 = reinterpret_cast<void**>(0);
    g40bc98 = reinterpret_cast<void**>(0);
    g40bc94 = reinterpret_cast<void**>(0);
    g40bdb0 = reinterpret_cast<void**>(0);
    g40bdb4 = reinterpret_cast<void**>(0);
    g40bdb8 = reinterpret_cast<void**>(0);
    return;
}

struct s54 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    uint32_t f8;
    void** f12;
    signed char[3] pad16;
    void** f16;
};

int32_t VirtualAlloc = 0xa0fc;

void** fun_4060c8() {
    uint32_t eax1;
    uint32_t ecx2;
    void** eax3;
    uint32_t tmp32_4;
    void** ecx5;
    struct s54* esi6;
    void** eax7;
    void** eax8;
    void** v9;
    void** v10;

    eax1 = g40bc7c;
    ecx2 = g40bc8c;
    if (eax1 == ecx2) {
        eax3 = reinterpret_cast<void**>(HeapReAlloc());
        if (eax3) {
            tmp32_4 = g40bc8c + 16;
            g40bc8c = tmp32_4;
            g40bc80 = eax3;
            eax1 = g40bc7c;
        } else {
            goto 0;
        }
    }
    ecx5 = g40bc80;
    esi6 = reinterpret_cast<struct s54*>(ecx5 + (eax1 + eax1 * 4) * 4);
    eax7 = reinterpret_cast<void**>(HeapAlloc());
    esi6->f16 = eax7;
    if (eax7) {
        eax8 = reinterpret_cast<void**>(VirtualAlloc(0, 0x100000, 0x2000, 4));
        esi6->f12 = eax8;
        if (eax8) {
            esi6->f8 = 0xffffffff;
            esi6->f0 = reinterpret_cast<void**>(0);
            esi6->f4 = reinterpret_cast<void**>(0);
            ++g40bc7c;
            *reinterpret_cast<void***>(esi6->f16) = reinterpret_cast<void**>(0xffffffff);
        } else {
            v9 = esi6->f16;
            v10 = g40bec0;
            HeapFree(v10, 0, v9, 0, 0x100000, 0x2000, 4);
            goto addr_406135_9;
        }
    } else {
        addr_406135_9:
    }
    goto 0x41c4;
}

struct s55 {
    signed char[4] pad4;
    struct s55* f4;
    struct s55* f8;
};

struct s56 {
    void** f0;
    signed char[15] pad16;
    uint32_t f16;
};

struct s57 {
    uint32_t f0;
    uint32_t f4;
    signed char[4064] pad4072;
    int32_t f4072;
    uint32_t f4076;
};

struct s59 {
    signed char[4] pad4;
    struct s58* f4;
    struct s58* f8;
};

struct s58 {
    signed char[4] pad4;
    struct s59* f4;
    struct s59* f8;
};

void** fun_40617f(uint32_t ecx, void** a2) {
    void** ecx3;
    void** eax4;
    void** esi5;
    void** ebx6;
    struct s55* eax7;
    struct s55* v8;
    int32_t edx9;
    struct s56* edi10;
    uint32_t eax11;
    struct s56* edx12;
    struct s56* v13;
    struct s57* eax14;
    uint32_t ecx15;
    struct s58* eax16;
    struct s59* ecx17;
    struct s59* ecx18;
    int1_t zf19;
    void** ecx20;
    void** eax21;

    ecx3 = a2;
    eax4 = *reinterpret_cast<void***>(ecx3 + 8);
    esi5 = *reinterpret_cast<void***>(ecx3 + 16);
    ebx6 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<signed char>(eax4) >= reinterpret_cast<signed char>(0)) {
        eax4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax4) << 1);
        ++ebx6;
    }
    eax7 = reinterpret_cast<struct s55*>(reinterpret_cast<uint32_t>(esi5 + reinterpret_cast<unsigned char>(ebx6) * 0x204) + 0x144);
    v8 = eax7;
    edx9 = 63;
    do {
        eax7->f8 = eax7;
        eax7->f4 = eax7;
        eax7 = reinterpret_cast<struct s55*>(&eax7->f8);
        --edx9;
    } while (edx9);
    edi10 = reinterpret_cast<struct s56*>((reinterpret_cast<unsigned char>(ebx6) << 15) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx3 + 12)));
    eax11 = reinterpret_cast<uint32_t>(VirtualAlloc());
    if (eax11) {
        edx12 = reinterpret_cast<struct s56*>(reinterpret_cast<uint32_t>(edi10) + 0x7000);
        v13 = edx12;
        if (reinterpret_cast<uint32_t>(edi10) <= reinterpret_cast<uint32_t>(edx12)) {
            eax14 = reinterpret_cast<struct s57*>(&edi10->f16);
            ecx15 = (reinterpret_cast<uint32_t>(edx12) - reinterpret_cast<uint32_t>(edi10) >> 12) + 1;
            do {
                *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax14) - 8) = 0xffffffff;
                eax14->f4076 = 0xffffffff;
                eax14->f0 = reinterpret_cast<uint32_t>(eax14) + 0xffc;
                *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax14) - 4) = 0xff0;
                eax14->f4 = reinterpret_cast<uint32_t>(eax14) - 0x1004;
                eax14->f4072 = 0xff0;
                eax14 = reinterpret_cast<struct s57*>(reinterpret_cast<uint32_t>(eax14) + 0x1000);
                --ecx15;
            } while (ecx15);
            edx12 = v13;
        }
        eax16 = reinterpret_cast<struct s58*>(v8 + 42);
        ecx17 = reinterpret_cast<struct s59*>(reinterpret_cast<uint32_t>(edi10) + 12);
        eax16->f4 = ecx17;
        ecx17->f8 = eax16;
        ecx18 = reinterpret_cast<struct s59*>(reinterpret_cast<uint32_t>(edx12) + 12);
        eax16->f8 = ecx18;
        ecx18->f4 = eax16;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(esi5 + reinterpret_cast<unsigned char>(ebx6) * 4) + 68) = 0;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(esi5 + reinterpret_cast<unsigned char>(ebx6) * 4) + 0xc4) = 1;
        zf19 = *reinterpret_cast<signed char*>(esi5 + 67) == 0;
        *reinterpret_cast<signed char*>(esi5 + 67) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(esi5 + 67) + 1);
        if (zf19) {
            *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4)) | 1);
        }
        ecx20 = ebx6;
        *reinterpret_cast<void***>(a2 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 8)) & ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx20)));
        eax21 = ebx6;
    } else {
        eax21 = reinterpret_cast<void**>(0xffffffff);
    }
    return eax21;
}

uint32_t fun_4082d7(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    int1_t cf6;
    void** edi7;
    uint32_t esi8;
    void** eax9;
    void** ecx10;
    uint32_t eax11;
    void** eax12;
    unsigned char* eax13;
    uint32_t eax14;
    void** edi15;

    cf6 = reinterpret_cast<unsigned char>(a2) < reinterpret_cast<unsigned char>(g40bec8);
    if (!cf6 || (edi7 = reinterpret_cast<void**>((reinterpret_cast<signed char>(a2) >> 5) * 4 + 0x40bee0), esi8 = (reinterpret_cast<unsigned char>(a2) & 31) << 3, (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*edi7) + esi8 + 4) & 1) == 0)) {
        g40ba54 = reinterpret_cast<void**>(0);
        goto addr_408362_3;
    }
    eax9 = fun_4083f0(a4, a2);
    if (eax9 == 0xffffffff) {
        addr_408362_3:
        g40ba50 = reinterpret_cast<void**>(9);
    } else {
        ecx10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffffc);
        eax11 = reinterpret_cast<uint32_t>(SetFilePointer(eax9, a3, ecx10, a5));
        if (eax11 != 0xffffffff || (eax12 = reinterpret_cast<void**>(GetLastError(eax9, a3, ecx10, a5)), eax12 == 0)) {
            eax13 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*edi7) + esi8 + 4);
            *eax13 = reinterpret_cast<unsigned char>(*eax13 & 0xfd);
            eax14 = eax11;
            goto addr_408372_7;
        } else {
            fun_408278(ecx10, eax12, eax9, a3, ecx10, a5, edi15);
        }
    }
    eax14 = 0xffffffff;
    addr_408372_7:
    return eax14;
}

void** fun_4083f0(void** ecx, void** a2) {
    int1_t cf3;
    void** eax4;

    cf3 = reinterpret_cast<unsigned char>(a2) < reinterpret_cast<unsigned char>(g40bec8);
    if (!cf3 || (eax4 = reinterpret_cast<void**>(*reinterpret_cast<void****>((reinterpret_cast<signed char>(a2) >> 5) * 4 + 0x40bee0) + (reinterpret_cast<unsigned char>(a2) & 31) * 8), (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax4 + 4)) & 1) == 0)) {
        g40ba54 = reinterpret_cast<void**>(0);
        g40ba50 = reinterpret_cast<void**>(9);
        return 0xffffffff;
    } else {
        return *reinterpret_cast<void***>(eax4);
    }
}

void** fun_408278(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** eax8;
    uint32_t ecx9;
    void** eax10;

    eax8 = a2;
    g40ba54 = eax8;
    ecx9 = 0;
    do {
        if (eax8 == *reinterpret_cast<void***>(ecx9 * 8 + 0x40b5f8)) 
            break;
        ++ecx9;
    } while (ecx9 < 45);
    goto addr_408292_4;
    eax10 = *reinterpret_cast<void***>(ecx9 * 8 + 0x40b5fc);
    g40ba50 = eax10;
    return eax10;
    addr_408292_4:
    if (reinterpret_cast<unsigned char>(eax8) < reinterpret_cast<unsigned char>(19) || reinterpret_cast<unsigned char>(eax8) > reinterpret_cast<unsigned char>(36)) {
        if (reinterpret_cast<unsigned char>(eax8) < reinterpret_cast<unsigned char>(0xbc) || (g40ba50 = reinterpret_cast<void**>(8), reinterpret_cast<unsigned char>(eax8) > reinterpret_cast<unsigned char>(0xca))) {
            g40ba50 = reinterpret_cast<void**>(22);
        }
        return eax8;
    } else {
        g40ba50 = reinterpret_cast<void**>(13);
        return eax8;
    }
}

void fun_4084df(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** eax15;
    void** v16;
    void** esi17;

    eax15 = *reinterpret_cast<void***>(a2 + 12);
    if (*reinterpret_cast<unsigned char*>(&eax15) & 0x83 && *reinterpret_cast<unsigned char*>(&eax15) & 8) {
        v16 = *reinterpret_cast<void***>(a2 + 8);
        fun_40403c(ecx, v16, esi17, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 0xfbf7);
        *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(a2 + 8) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(0);
    }
    return;
}

int32_t CloseHandle = 0xa290;

uint32_t fun_408376(void** ecx, void** a2);

uint32_t fun_40842c(void** ecx, void** a2, void** a3, void** a4) {
    int1_t cf5;
    void*** ebx6;
    void* esi7;
    void** eax8;
    void** ecx9;
    void** eax10;
    void** eax11;
    void** eax12;
    int32_t eax13;
    void** ebp14;
    void** eax15;
    uint32_t eax16;
    void** edi17;
    void** esi18;
    void** ebp19;
    void** ebx20;

    cf5 = reinterpret_cast<unsigned char>(a2) < reinterpret_cast<unsigned char>(g40bec8);
    if (!cf5 || (ebx6 = reinterpret_cast<void***>((reinterpret_cast<signed char>(a2) >> 5) * 4 + 0x40bee0), esi7 = reinterpret_cast<void*>((reinterpret_cast<unsigned char>(a2) & 31) << 3), (*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(*ebx6) + reinterpret_cast<uint32_t>(esi7) + 4) & 1) == 0)) {
        g40ba54 = reinterpret_cast<void**>(0);
        g40ba50 = reinterpret_cast<void**>(9);
    } else {
        eax8 = fun_4083f0(ecx, a2);
        ecx9 = a2;
        if (eax8 == 0xffffffff || ((a2 == 1 || reinterpret_cast<int1_t>(a2 == 2)) && (eax10 = fun_4083f0(ecx9, 2), eax11 = fun_4083f0(ecx9, 1), ecx9 = reinterpret_cast<void**>(2), eax11 == eax10) || (eax12 = fun_4083f0(ecx9, a2), ecx9 = a2, eax13 = reinterpret_cast<int32_t>(CloseHandle(ecx9, eax12)), !!eax13))) {
            ebp14 = reinterpret_cast<void**>(0);
        } else {
            eax15 = reinterpret_cast<void**>(GetLastError(ecx9, eax12));
            ebp14 = eax15;
        }
        fun_408376(ecx9, a2);
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*ebx6) + reinterpret_cast<uint32_t>(esi7) + 4) = 0;
        if (!ebp14) 
            goto addr_4084c2_7; else 
            goto addr_4084b9_8;
    }
    addr_4084d7_9:
    eax16 = 0xffffffff;
    addr_4084da_10:
    return eax16;
    addr_4084c2_7:
    eax16 = 0;
    goto addr_4084da_10;
    addr_4084b9_8:
    fun_408278(a2, ebp14, edi17, esi18, ebp19, ebx20, __return_address());
    goto addr_4084d7_9;
}

void** fun_4045e0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** edx14;
    void** eax15;
    void** edi16;
    uint32_t ecx17;
    void*** eax18;
    void** ecx19;
    uint32_t ecx20;

    edx14 = a4;
    if (!edx14) {
        return a2;
    }
    eax15 = reinterpret_cast<void**>(0);
    eax15 = a3;
    edi16 = a2;
    if (reinterpret_cast<unsigned char>(edx14) < reinterpret_cast<unsigned char>(4)) {
        do {
            addr_40462b_4:
            *reinterpret_cast<void***>(edi16) = eax15;
            ++edi16;
            --edx14;
        } while (edx14);
    } else {
        ecx17 = reinterpret_cast<uint32_t>(-reinterpret_cast<unsigned char>(a2)) & 3;
        if (ecx17) {
            edx14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx14) - ecx17);
            do {
                *reinterpret_cast<void***>(edi16) = eax15;
                ++edi16;
                --ecx17;
            } while (ecx17);
        }
        eax18 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(eax15) << 8) + reinterpret_cast<unsigned char>(eax15));
        eax15 = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(eax18) << 16) + reinterpret_cast<uint32_t>(eax18));
        ecx19 = edx14;
        edx14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx14) & 3);
        ecx20 = reinterpret_cast<unsigned char>(ecx19) >> 2;
        if (!ecx20) 
            goto addr_40462b_4; else 
            goto addr_404625_9;
    }
    addr_404635_10:
    return a2;
    addr_404625_9:
    while (ecx20) {
        --ecx20;
        *reinterpret_cast<void***>(edi16) = eax15;
        edi16 = edi16 + 4;
    }
    if (!edx14) 
        goto addr_404635_10; else 
        goto addr_40462b_4;
}

struct s60 {
    signed char[20] pad20;
    void*** f20;
};

struct s61 {
    signed char[8] pad8;
    void** f8;
};

struct s62 {
    signed char[12] pad12;
    void** f12;
};

struct s63 {
    signed char[12] pad12;
    int32_t f12;
};

struct s64 {
    signed char[16] pad16;
    void** f16;
};

struct s65 {
    signed char[16] pad16;
    int32_t f16;
};

struct s66 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t MultiByteToWideChar = 0xa0d4;

struct s67 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    void** f16;
    signed char[3] pad20;
    void** f20;
    signed char[3] pad24;
    void** f24;
    signed char[3] pad28;
    void** f28;
    signed char[3] pad32;
    void** f32;
    signed char[3] pad36;
    void** f36;
    signed char[3] pad40;
    void** f40;
};

struct s68 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
};

void fun_403c0b(void** ecx, void** a2, void** a3, void** a4);

struct s69 {
    signed char[16] pad16;
    void** f16;
};

struct s70 {
    signed char[8] pad8;
    void** f8;
};

struct s71 {
    signed char[24] pad24;
    void** f24;
};

struct s72 {
    signed char[12] pad12;
    int32_t f12;
};

struct s73 {
    signed char[12] pad12;
    void** f12;
};

struct s74 {
    signed char[20] pad20;
    void** f20;
};

struct s75 {
    signed char[28] pad28;
    int32_t f28;
};

struct s76 {
    signed char[24] pad24;
    int32_t f24;
};

struct s77 {
    signed char[12] pad12;
    int32_t f12;
};

struct s78 {
    signed char[24] pad24;
    int32_t f24;
};

void** fun_40854d(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22) {
    void** eax23;
    int32_t ebp24;
    int32_t ebp25;
    int32_t ebp26;
    void** ebx27;
    struct s60* ebp28;
    int32_t ebp29;
    int32_t ebp30;
    void** eax31;
    struct s61* ebp32;
    struct s62* ebp33;
    void** ebx34;
    int32_t ebp35;
    void* ebp36;
    void** v37;
    int32_t esi38;
    int32_t eax39;
    void* esp40;
    int32_t ebp41;
    int32_t v42;
    struct s63* ebp43;
    int32_t ebp44;
    int32_t eax45;
    int32_t ebp46;
    int32_t ebp47;
    int32_t ebp48;
    void** esi49;
    int32_t ebp50;
    void** v51;
    struct s64* ebp52;
    void** eax53;
    int32_t ebp54;
    int32_t ebp55;
    int32_t v56;
    struct s65* ebp57;
    int32_t v58;
    struct s66* ebp59;
    void** eax60;
    int32_t ebp61;
    int32_t ebp62;
    void** esp63;
    int32_t ebp64;
    int32_t ebp65;
    int32_t ebp66;
    int32_t ebp67;
    void** ecx68;
    int32_t ebp69;
    struct s67* esp70;
    int32_t ebp71;
    struct s68* esp72;
    void** v73;
    void** v74;
    int32_t ebp75;
    void** v76;
    struct s69* ebp77;
    void** v78;
    struct s70* ebp79;
    int32_t eax80;
    struct s71* ebp81;
    int32_t ebp82;
    int32_t v83;
    struct s72* ebp84;
    void** eax85;
    void** eax86;
    int32_t ebp87;
    void** v88;
    struct s73* ebp89;
    void** eax90;
    int32_t ebp91;
    struct s74* ebp92;
    void** v93;
    int32_t ebp94;
    int32_t ebp95;
    int32_t v96;
    struct s75* ebp97;
    int32_t v98;
    struct s76* ebp99;
    int32_t v100;
    struct s77* ebp101;
    int32_t eax102;
    int32_t ebp103;
    struct s78* ebp104;
    void** eax105;
    int32_t ebp106;

    fun_403bd0(0x409d98, 56, __return_address());
    eax23 = g40b498;
    *reinterpret_cast<void***>(ebp24 - 28) = eax23;
    *reinterpret_cast<void***>(ebp25 - 52) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(ebp26 - 68) = reinterpret_cast<void**>(0);
    ebx27 = *ebp28->f20;
    *reinterpret_cast<void***>(ebp29 - 64) = ebx27;
    *reinterpret_cast<void***>(ebp30 - 60) = reinterpret_cast<void**>(0);
    eax31 = ebp32->f8;
    if (eax31 == ebp33->f12) {
        ebx34 = *reinterpret_cast<void***>(ebp35 - 72);
    } else {
        ecx = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp36) + 0xffffffd0);
        v37 = ecx;
        esi38 = GetCPInfo;
        eax39 = reinterpret_cast<int32_t>(esi38(eax31, v37, 0x409d98, 56, __return_address()));
        esp40 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4);
        if (eax39 && (*reinterpret_cast<int32_t*>(ebp41 - 48) == 1 && ((v42 = ebp43->f12, eax45 = reinterpret_cast<int32_t>(esi38(v42, ebp44 - 48, eax31, v37, 0x409d98, 56, __return_address())), esp40 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp40) - 4 - 4 - 4 + 4), !!eax45) && *reinterpret_cast<int32_t*>(ebp46 - 48) == 1))) {
            *reinterpret_cast<int32_t*>(ebp47 - 60) = 1;
        }
        if (!*reinterpret_cast<void***>(ebp48 - 60)) {
            esi49 = *reinterpret_cast<void***>(ebp50 - 56);
        } else {
            if (ebx27 == 0xffffffff) {
                v51 = ebp52->f16;
                eax53 = fun_404080(ecx, v51, eax31, v37, 0x409d98, 56, __return_address(), a2, a3);
                ecx = v51;
                esp40 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp40) - 4 - 4 + 4 + 4);
                esi49 = eax53 + 1;
            } else {
                esi49 = ebx27;
            }
            *reinterpret_cast<void***>(ebp54 - 56) = esi49;
        }
        if (*reinterpret_cast<void***>(ebp55 - 60)) 
            goto addr_4085f2_12;
        v56 = ebp57->f16;
        v58 = ebp59->f8;
        eax60 = reinterpret_cast<void**>(MultiByteToWideChar(ecx, v58, 1, v56, ebx27, 0, 0, eax31, v37, 0x409d98, 56, __return_address()));
        esp40 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp40) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
        esi49 = eax60;
        *reinterpret_cast<void***>(ebp61 - 56) = esi49;
        if (!esi49) 
            goto addr_40864a_14;
        addr_4085f2_12:
        *reinterpret_cast<void***>(ebp62 - 4) = reinterpret_cast<void**>(0);
        fun_403d30(ecx, eax31, v37, 0x409d98, 56, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
        esp63 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp40) - 4 + 4);
        *reinterpret_cast<void***>(ebp64 - 24) = esp63;
        ebx34 = esp63;
        *reinterpret_cast<void***>(ebp65 - 72) = ebx34;
        fun_4045e0(ecx, ebx34, 0, reinterpret_cast<unsigned char>(esi49) + reinterpret_cast<unsigned char>(esi49), eax31, v37, 0x409d98, 56, __return_address(), a2, a3, a4, a5);
        *reinterpret_cast<uint32_t*>(ebp66 - 4) = 0xffffffff;
        if (ebx34) 
            goto addr_408658_16; else 
            goto addr_40863a_17;
    }
    addr_4086f6_18:
    if (*reinterpret_cast<void***>(ebp67 - 68)) {
        fun_40403c(ecx, ebx34, 0x409d98, 56, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }
    addr_408705_21:
    ecx68 = *reinterpret_cast<void***>(ebp69 - 28);
    esp70 = reinterpret_cast<struct s67*>(ebp71 - 84 - 4);
    esp70->f0 = 0x408710;
    fun_4041a2(ecx68, esp70->f4, esp70->f8, esp70->f12, esp70->f16, esp70->f20, esp70->f24, esp70->f28, esp70->f32, esp70->f36, esp70->f40);
    esp72 = reinterpret_cast<struct s68*>(&esp70->f4 - 4);
    esp72->f0 = 0x408715;
    fun_403c0b(ecx68, esp72->f4, esp72->f8, esp72->f12);
    goto esp72->f4;
    addr_408658_16:
    v73 = esi49;
    v74 = *reinterpret_cast<void***>(ebp75 - 64);
    v76 = ebp77->f16;
    v78 = ebp79->f8;
    eax80 = reinterpret_cast<int32_t>(MultiByteToWideChar(ecx, v78, 1, v76, v74, ebx34, v73, eax31, v37, 0x409d98, 56, __return_address()));
    if (eax80) {
        if (!ebp81->f24) {
            if ((*reinterpret_cast<void***>(ebp82 - 60) || (v83 = ebp84->f12, eax85 = reinterpret_cast<void**>(WideCharToMultiByte(ecx, v83, 0, ebx34, esi49, 0, 0, 0, 0, v78, 1, v76, v74, ebx34, v73, eax31, v37, 0x409d98, 56, __return_address())), esi49 = eax85, !!esi49)) && (eax86 = fun_404245(ecx, 1, esi49, v78, 1, v76, v74, ebx34, v73, eax31, v37, 0x409d98, 56, __return_address()), ecx = esi49, *reinterpret_cast<void***>(ebp87 - 52) = eax86, !!eax86)) {
                v88 = ebp89->f12;
                eax90 = reinterpret_cast<void**>(WideCharToMultiByte(ecx, v88, 0, ebx34, esi49, eax86, esi49, 0, 0, v78, 1, v76, v74, ebx34, v73, eax31, v37, 0x409d98, 56, __return_address()));
                if (eax90) {
                    if (*reinterpret_cast<int32_t*>(ebp91 - 64) != -1) {
                        ecx = ebp92->f20;
                        *reinterpret_cast<void***>(ecx) = eax90;
                        goto addr_4086f6_18;
                    }
                } else {
                    v93 = *reinterpret_cast<void***>(ebp94 - 52);
                    fun_40403c(ecx, v93, v88, 0, ebx34, esi49, eax86, esi49, 0, 0, v78, 1, v76, v74, ebx34, v73, eax31, ecx, v93, v88, 0, ebx34, esi49, eax86, esi49, 0, 0, v78, 1, v76, v74, ebx34, v73, eax31);
                    ecx = v93;
                    *reinterpret_cast<void***>(ebp95 - 52) = reinterpret_cast<void**>(0);
                    goto addr_4086f6_18;
                }
            }
        } else {
            v96 = ebp97->f28;
            v98 = ebp99->f24;
            v100 = ebp101->f12;
            eax102 = reinterpret_cast<int32_t>(WideCharToMultiByte(ecx, v100, 0, ebx34, esi49, v98, v96, 0, 0, v78, 1, v76, v74, ebx34, v73, eax31, v37, 0x409d98, 56, __return_address()));
            if (eax102) {
                *reinterpret_cast<int32_t*>(ebp103 - 52) = ebp104->f24;
                goto addr_4086f6_18;
            }
        }
    }
    addr_40863a_17:
    eax105 = fun_404245(ecx, 2, esi49, eax31, v37, 0x409d98, 56, __return_address(), a2, a3, a4, a5, a6, a7);
    ecx = esi49;
    ebx34 = eax105;
    if (ebx34) {
        *reinterpret_cast<int32_t*>(ebp106 - 68) = 1;
        goto addr_408658_16;
    } else {
        addr_40864a_14:
        goto addr_408705_21;
    }
}

void fun_407890(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** ecx9;
    void** esi10;
    void** edi11;
    void** ecx12;

    ecx9 = *reinterpret_cast<void***>(a2);
    esi10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)));
    edi11 = *reinterpret_cast<void***>(a2 + 4);
    *reinterpret_cast<void***>(a2) = esi10;
    ecx12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 8)) << 1 | reinterpret_cast<unsigned char>(edi11) >> 31);
    *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi11) + reinterpret_cast<unsigned char>(edi11) | reinterpret_cast<unsigned char>(ecx9) >> 31);
    *reinterpret_cast<void***>(a2 + 8) = ecx12;
    return;
}

uint32_t fun_407832(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** v9;
    uint32_t eax10;
    void** eax11;
    void** v12;
    uint32_t eax13;
    void** eax14;
    void** v15;
    void** v16;
    uint32_t eax17;
    void** eax18;
    void** v19;
    void** v20;
    uint32_t eax21;

    v8 = *reinterpret_cast<void***>(a2);
    v9 = *reinterpret_cast<void***>(a1);
    eax10 = fun_407811(v9, v8, a1);
    if (eax10 && (eax11 = a1 + 4, v12 = *reinterpret_cast<void***>(eax11), eax13 = fun_407811(v12, 1, eax11), !!eax13)) {
        *reinterpret_cast<void***>(a1 + 8) = *reinterpret_cast<void***>(a1 + 8) + 1;
    }
    eax14 = a1 + 4;
    v15 = *reinterpret_cast<void***>(a2 + 4);
    v16 = *reinterpret_cast<void***>(eax14);
    eax17 = fun_407811(v16, v15, eax14);
    if (eax17) {
        *reinterpret_cast<void***>(a1 + 8) = *reinterpret_cast<void***>(a1 + 8) + 1;
    }
    eax18 = a1 + 8;
    v19 = *reinterpret_cast<void***>(a2 + 8);
    v20 = *reinterpret_cast<void***>(eax18);
    eax21 = fun_407811(v20, v19, eax18);
    return eax21;
}

void** fun_4078eb(void** ecx, void** a2, void** a3, void** a4);

void** fun_4079c9(struct s5* a1, void*** a2, void** a3, void** a4, void* a5, uint32_t a6, int32_t a7) {
    int32_t v8;
    int32_t ebp9;
    int32_t* ebp10;
    void** eax11;
    void** v12;
    void** v13;
    void** ebx14;
    void** v15;
    void** esi16;
    void** v17;
    void** eax18;
    void** v19;
    void** edi20;
    void** edi21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** ecx32;
    void** bl33;
    int1_t zf34;
    int32_t eax35;
    int32_t eax36;
    void** v37;
    void** v38;
    int1_t zf39;
    int1_t zf40;
    int1_t less_or_equal41;
    void** eax42;
    uint32_t eax43;
    int1_t zf44;
    int1_t less_or_equal45;
    void** eax46;
    uint32_t eax47;
    int1_t less_or_equal48;
    void** eax49;
    uint32_t eax50;
    int32_t eax51;
    int32_t eax52;
    int32_t eax53;
    signed char v54;
    int32_t edx55;
    uint32_t eax56;
    int32_t esi57;
    int32_t ebx58;
    uint32_t eax59;
    void** eax60;
    void** eax61;
    void** eax62;
    int32_t v63;
    int32_t v64;
    int32_t v65;
    uint32_t v66;
    void** esi67;
    int1_t less_or_equal68;
    void** eax69;
    uint32_t eax70;
    int1_t less_or_equal71;
    void** eax72;
    uint32_t eax73;

    v8 = ebp9;
    ebp10 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax11 = g40b498;
    v12 = eax11;
    v13 = ebx14;
    v15 = esi16;
    v17 = reinterpret_cast<void**>(ebp10 + 0xfffffff4);
    eax18 = reinterpret_cast<void**>(0);
    v19 = edi20;
    edi21 = a3;
    v22 = reinterpret_cast<void**>(0);
    v23 = reinterpret_cast<void**>(1);
    v24 = reinterpret_cast<void**>(0);
    v25 = reinterpret_cast<void**>(0);
    v26 = reinterpret_cast<void**>(0);
    v27 = reinterpret_cast<void**>(0);
    v28 = reinterpret_cast<void**>(0);
    v29 = reinterpret_cast<void**>(0);
    v30 = reinterpret_cast<void**>(0);
    v31 = edi21;
    while ((ecx32 = *reinterpret_cast<void***>(edi21), ecx32 == 32) || (ecx32 == 9 || (ecx32 == 10 || reinterpret_cast<int1_t>(ecx32 == 13)))) {
        ++edi21;
    }
    while (1) {
        bl33 = *reinterpret_cast<void***>(edi21);
        ++edi21;
        if (reinterpret_cast<unsigned char>(eax18) > reinterpret_cast<unsigned char>(11)) 
            goto addr_407c96_6;
        switch (eax18) {
        case 0:
            if (reinterpret_cast<signed char>(bl33) < reinterpret_cast<signed char>(49) || reinterpret_cast<signed char>(bl33) > reinterpret_cast<signed char>(57)) {
                zf34 = bl33 == g40b4a4;
                if (!zf34) {
                    eax35 = reinterpret_cast<int32_t>(bl33 - 43);
                    if (!eax35) {
                        v22 = reinterpret_cast<void**>(0);
                        eax18 = reinterpret_cast<void**>(2);
                        continue;
                    } else {
                        eax36 = eax35 - 1 - 1;
                        if (!eax36) {
                            eax18 = reinterpret_cast<void**>(2);
                            v22 = reinterpret_cast<void**>(0x8000);
                            continue;
                        } else {
                            if (!(eax36 - 3)) 
                                goto addr_407af3_15; else 
                                goto addr_407a6a_16;
                        }
                    }
                } else {
                    addr_407a4e_17:
                    v37 = reinterpret_cast<void**>(5);
                    goto addr_407c8c_18;
                }
            } else {
                addr_407a3f_19:
                v38 = reinterpret_cast<void**>(3);
                goto addr_407c4e_20;
            }
        case 1:
            v25 = reinterpret_cast<void**>(1);
            if (reinterpret_cast<signed char>(bl33) < reinterpret_cast<signed char>(49)) 
                goto addr_407a92_22;
            if (reinterpret_cast<signed char>(bl33) <= reinterpret_cast<signed char>(57)) 
                goto addr_407a3f_19;
            addr_407a92_22:
            zf39 = bl33 == g40b4a4;
            if (zf39) {
                addr_407b4c_24:
                eax18 = reinterpret_cast<void**>(4);
                continue;
            } else {
                if (bl33 == 43 || bl33 == 45) {
                    --edi21;
                    v37 = reinterpret_cast<void**>(11);
                    goto addr_407c8c_18;
                } else {
                    if (bl33 == 48) {
                        addr_407af3_15:
                        eax18 = reinterpret_cast<void**>(1);
                        continue;
                    } else {
                        addr_407aad_28:
                        if (reinterpret_cast<signed char>(bl33) <= reinterpret_cast<signed char>(67)) 
                            goto addr_407a6a_16;
                        if (reinterpret_cast<signed char>(bl33) <= reinterpret_cast<signed char>(69)) 
                            goto addr_407ac1_30;
                        if (reinterpret_cast<signed char>(bl33) <= reinterpret_cast<signed char>(99)) 
                            goto addr_407a6a_16;
                        if (reinterpret_cast<signed char>(bl33) > reinterpret_cast<signed char>(0x65)) 
                            goto addr_407a6a_16;
                    }
                    addr_407ac1_30:
                    v37 = reinterpret_cast<void**>(6);
                    goto addr_407c8c_18;
                }
            }
        case 2:
            if (reinterpret_cast<signed char>(bl33) < reinterpret_cast<signed char>(49)) 
                goto addr_407ade_34;
            if (reinterpret_cast<signed char>(bl33) <= reinterpret_cast<signed char>(57)) 
                goto addr_407a3f_19;
            addr_407ade_34:
            zf40 = bl33 == g40b4a4;
            if (zf40) 
                goto addr_407a4e_17;
            if (!reinterpret_cast<int1_t>(bl33 == 48)) 
                goto addr_407c5a_37; else 
                goto addr_407af3_15;
        case 3:
            v25 = reinterpret_cast<void**>(1);
            while (1) {
                less_or_equal41 = reinterpret_cast<signed char>(g40b4a0) <= reinterpret_cast<signed char>(1);
                eax42 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(bl33)));
                if (less_or_equal41) {
                    ecx32 = g40b490;
                    eax43 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx32 + reinterpret_cast<unsigned char>(eax42) * 2))) & reinterpret_cast<unsigned char>(4);
                } else {
                    eax43 = fun_404318(ecx32, eax42, 4, v19, v15, v13);
                    ecx32 = reinterpret_cast<void**>(4);
                }
                if (!eax43) 
                    break;
                if (reinterpret_cast<unsigned char>(v24) >= reinterpret_cast<unsigned char>(25)) {
                    ++v29;
                } else {
                    ++v24;
                    ++v17;
                }
                bl33 = *reinterpret_cast<void***>(edi21);
                ++edi21;
            }
            zf44 = bl33 == g40b4a4;
            if (!zf44) 
                goto addr_407bb1_48; else 
                goto addr_407b4c_24;
        case 4:
            v25 = reinterpret_cast<void**>(1);
            v26 = reinterpret_cast<void**>(1);
            if (!v24) {
                while (bl33 == 48) {
                    --v29;
                    bl33 = *reinterpret_cast<void***>(edi21);
                    ++edi21;
                }
            }
            while (1) {
                less_or_equal45 = reinterpret_cast<signed char>(g40b4a0) <= reinterpret_cast<signed char>(1);
                eax46 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(bl33)));
                if (less_or_equal45) {
                    ecx32 = g40b490;
                    eax47 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx32 + reinterpret_cast<unsigned char>(eax46) * 2))) & reinterpret_cast<unsigned char>(4);
                } else {
                    eax47 = fun_404318(ecx32, eax46, 4, v19, v15, v13);
                    ecx32 = reinterpret_cast<void**>(4);
                }
                if (!eax47) 
                    goto addr_407bb1_48;
                if (reinterpret_cast<unsigned char>(v24) < reinterpret_cast<unsigned char>(25)) {
                    ++v24;
                    ++v17;
                    --v29;
                }
                bl33 = *reinterpret_cast<void***>(edi21);
                ++edi21;
            }
        case 5:
            less_or_equal48 = reinterpret_cast<signed char>(g40b4a0) <= reinterpret_cast<signed char>(1);
            v26 = reinterpret_cast<void**>(1);
            eax49 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(bl33)));
            if (less_or_equal48) {
                ecx32 = g40b490;
                eax50 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx32 + reinterpret_cast<unsigned char>(eax49) * 2))) & reinterpret_cast<unsigned char>(4);
            } else {
                eax50 = fun_404318(ecx32, eax49, 4, v19, v15, v13);
                ecx32 = reinterpret_cast<void**>(4);
            }
            if (!eax50) 
                goto addr_407c5a_37;
            eax18 = reinterpret_cast<void**>(4);
            break;
        case 6:
            ecx32 = edi21 + 0xfffffffe;
            v31 = ecx32;
            if (reinterpret_cast<signed char>(bl33) < reinterpret_cast<signed char>(49) || reinterpret_cast<signed char>(bl33) > reinterpret_cast<signed char>(57)) {
                eax51 = reinterpret_cast<int32_t>(bl33 - 43);
                if (!eax51) {
                    v37 = reinterpret_cast<void**>(7);
                    goto addr_407c8c_18;
                } else {
                    eax52 = eax51 - 1 - 1;
                    if (!eax52) {
                        addr_407c7e_69:
                        v23 = reinterpret_cast<void**>(0xffffffff);
                        eax18 = reinterpret_cast<void**>(7);
                        continue;
                    } else {
                        if (eax52 - 3) 
                            goto addr_407d27_71; else 
                            goto addr_407c1d_72;
                    }
                }
            } else {
                addr_407c4c_73:
                v38 = reinterpret_cast<void**>(9);
                goto addr_407c4e_20;
            }
        case 7:
            if (reinterpret_cast<signed char>(bl33) < reinterpret_cast<signed char>(49)) 
                goto addr_407c55_75;
            if (reinterpret_cast<signed char>(bl33) <= reinterpret_cast<signed char>(57)) 
                goto addr_407c4c_73;
            addr_407c55_75:
            if (bl33 == 48) 
                goto addr_407c1d_72; else 
                goto addr_407c5a_37;
        case 8:
            v27 = reinterpret_cast<void**>(1);
            while (bl33 == 48) {
                bl33 = *reinterpret_cast<void***>(edi21);
                ++edi21;
            }
            if (reinterpret_cast<signed char>(bl33) < reinterpret_cast<signed char>(49)) 
                goto addr_407a6a_16;
            if (reinterpret_cast<signed char>(bl33) > reinterpret_cast<signed char>(57)) 
                goto addr_407a6a_16;
            goto addr_407c4c_73;
            addr_407c96_6:
        case 10:
            if (!reinterpret_cast<int1_t>(eax18 == 10)) 
                continue; else 
                goto addr_407c9f_83;
        case 11:
            if (!a7) {
                eax18 = reinterpret_cast<void**>(10);
                --edi21;
                goto addr_407c96_6;
            } else {
                eax53 = reinterpret_cast<int32_t>(bl33 - 43);
                ecx32 = edi21 + 0xffffffff;
                v31 = ecx32;
                if (eax53) {
                    if (eax53 - 1 - 1) 
                        goto addr_407d27_71; else 
                        goto addr_407c7e_69;
                }
            }
        case 9:
            goto 0x407ca4;
        }
        addr_407c4f_88:
        --edi21;
        continue;
        addr_407bb1_48:
        if (bl33 != 43 && bl33 != 45) {
            goto addr_407aad_28;
        }
        addr_407c1d_72:
        v37 = reinterpret_cast<void**>(8);
        addr_407c8c_18:
        eax18 = v37;
        continue;
        addr_407c4e_20:
        eax18 = v38;
        goto addr_407c4f_88;
    }
    addr_407c9f_83:
    addr_407d29_90:
    *a2 = edi21;
    if (!v25) {
        v30 = reinterpret_cast<void**>(4);
    } else {
        if (reinterpret_cast<unsigned char>(v24) > reinterpret_cast<unsigned char>(24)) {
            if (v54 >= 5) {
            }
            v24 = reinterpret_cast<void**>(24);
            ++v29;
        }
        if (reinterpret_cast<unsigned char>(v24) > reinterpret_cast<unsigned char>(0)) 
            goto addr_407d62_98;
    }
    addr_407df5_99:
    edx55 = 0;
    eax56 = 0;
    esi57 = 0;
    ebx58 = 0;
    addr_407dfd_100:
    eax59 = eax56 | reinterpret_cast<unsigned char>(v22);
    a1->f6 = esi57;
    a1->f2 = ebx58;
    a1->f10 = *reinterpret_cast<int16_t*>(&eax59);
    a1->f0 = *reinterpret_cast<int16_t*>(&edx55);
    eax60 = fun_4041a2(v12, v27, v26, v28, v22, v23, v30, v25, v31, v17, v29);
    return eax60;
    addr_407d62_98:
    while (!*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v8) + 3)) {
        --v24;
        ++v29;
    }
    fun_4078eb(ecx32, ebp10 + 0xfffffff4, v24, ebp10 + 0xfffffffb);
    eax61 = v28;
    if (reinterpret_cast<signed char>(v23) < reinterpret_cast<signed char>(0)) 
        goto addr_407d8d_104;
    addr_407d8f_105:
    eax62 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax61) + reinterpret_cast<unsigned char>(v29));
    if (!v27) {
        eax62 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax62) + reinterpret_cast<uint32_t>(a5));
    }
    if (!v26) {
        eax62 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax62) - a6);
    }
    if (reinterpret_cast<signed char>(eax62) > reinterpret_cast<signed char>(0x1450)) {
        ebx58 = 0;
        eax56 = 0x7fff;
        esi57 = 0x80000000;
        edx55 = 0;
        v30 = reinterpret_cast<void**>(2);
        goto addr_407dfd_100;
    } else {
        if (reinterpret_cast<signed char>(eax62) < reinterpret_cast<signed char>(0xffffebb0)) {
            v30 = reinterpret_cast<void**>(1);
            goto addr_407df5_99;
        } else {
            fun_408948(ebp10 + 0xfffffffb, eax62, a4, v19);
            edx55 = v63;
            ebx58 = v64;
            esi57 = v65;
            eax56 = v66;
            goto addr_407dfd_100;
        }
    }
    addr_407d8d_104:
    eax61 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(eax61));
    goto addr_407d8f_105;
    v27 = reinterpret_cast<void**>(1);
    esi67 = reinterpret_cast<void**>(0);
    while (1) {
        less_or_equal68 = reinterpret_cast<signed char>(g40b4a0) <= reinterpret_cast<signed char>(1);
        eax69 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(bl33)));
        if (less_or_equal68) {
            ecx32 = g40b490;
            eax70 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx32 + reinterpret_cast<unsigned char>(eax69) * 2))) & 4;
        } else {
            eax70 = fun_404318(ecx32, eax69, 4, v19, v15, v13);
            ecx32 = reinterpret_cast<void**>(4);
        }
        if (!eax70) 
            break;
        ecx32 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(bl33)));
        esi67 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ecx32 + reinterpret_cast<uint32_t>(esi67 + reinterpret_cast<unsigned char>(esi67) * 4) * 2) + 0xffffffd0);
        if (reinterpret_cast<signed char>(esi67) > reinterpret_cast<signed char>(0x1450)) 
            goto addr_407ced_120;
        bl33 = *reinterpret_cast<void***>(edi21);
        ++edi21;
    }
    addr_407cf2_122:
    v28 = esi67;
    while (1) {
        less_or_equal71 = reinterpret_cast<signed char>(g40b4a0) <= reinterpret_cast<signed char>(1);
        eax72 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(bl33)));
        if (less_or_equal71) {
            ecx32 = g40b490;
            eax73 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx32 + reinterpret_cast<unsigned char>(eax72) * 2))) & 4;
        } else {
            eax73 = fun_404318(ecx32, eax72, 4, v19, v15, v13);
            ecx32 = reinterpret_cast<void**>(4);
        }
        if (!eax73) 
            break;
        bl33 = *reinterpret_cast<void***>(edi21);
        ++edi21;
    }
    addr_407a6a_16:
    --edi21;
    goto addr_407d29_90;
    addr_407ced_120:
    esi67 = reinterpret_cast<void**>(0x1451);
    goto addr_407cf2_122;
    addr_407c5a_37:
    edi21 = v31;
    goto addr_407d29_90;
    addr_407d27_71:
    edi21 = ecx32;
    goto addr_407d29_90;
}

void** fun_4078eb(void** ecx, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** ebp7;
    void*** ebp8;
    void** eax9;
    void** v10;
    void** ebx11;
    void** ebx12;
    void** v13;
    void** v14;
    void** esi15;
    void** v16;
    void** edi17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** eax22;
    void** v23;
    void** ecx24;
    void** edi25;
    void** eax26;
    void** eax27;

    v5 = reinterpret_cast<void**>(__return_address());
    v6 = ebp7;
    ebp8 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax9 = g40b498;
    v10 = ebx11;
    ebx12 = a4;
    v13 = eax9;
    v14 = esi15;
    v16 = edi17;
    v18 = reinterpret_cast<void**>(0x404e);
    *reinterpret_cast<void***>(ebx12) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(ebx12 + 4) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(ebx12 + 8) = reinterpret_cast<void**>(0);
    if (reinterpret_cast<unsigned char>(a3) > reinterpret_cast<unsigned char>(0)) {
        a4 = a3;
        do {
            v19 = *reinterpret_cast<void***>(ebx12);
            v20 = *reinterpret_cast<void***>(ebx12 + 4);
            fun_407890(ecx, ebx12, v16, v14, v10, 0x404e, v19, v20);
            fun_407890(ecx, ebx12, ebx12, v16, v14, v10, 0x404e, v19);
            v21 = reinterpret_cast<void**>(ebp8 + 0xfffffff0);
            fun_407832(ebx12, v21, ebx12, ebx12, v16, v14, v10);
            fun_407890(ecx, ebx12, ebx12, v21, ebx12, ebx12, v16, v14);
            eax22 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(a2))));
            v23 = eax22;
            fun_407832(ebx12, ebp8 + 0xfffffff0, ebx12, ebx12, v21, ebx12, ebx12);
            ++a2;
            --a4;
        } while (a4);
    }
    if (!*reinterpret_cast<void***>(ebx12 + 8)) {
        do {
            ecx24 = *reinterpret_cast<void***>(ebx12 + 4);
            v18 = v18 + 0xfff0;
            edi25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx24) >> 16);
            ecx = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx24) << 16);
            eax26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx12)) << 16);
            *reinterpret_cast<void***>(ebx12 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx12)) >> 16 | reinterpret_cast<unsigned char>(ecx));
            *reinterpret_cast<void***>(ebx12) = eax26;
        } while (!edi25);
        *reinterpret_cast<void***>(ebx12 + 8) = edi25;
    }
    while (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx12 + 8)) & 0x8000)) {
        fun_407890(ecx, ebx12, v16, v14, v10, v18, v23, 0);
        v18 = v18 + 0xffff;
        ecx = ebx12;
    }
    *reinterpret_cast<uint16_t*>(ebx12 + 10) = *reinterpret_cast<uint16_t*>(&v18);
    eax27 = fun_4041a2(v13, v18, v23, 0, 0, v13, v6, v5, a2, a3, a4);
    return eax27;
}

struct s79 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void** fun_408948(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** ebp7;
    void*** ebp8;
    void** eax9;
    void*** ebx10;
    void** v11;
    void** eax12;
    void** eax13;
    void** esi14;
    uint64_t v15;
    struct s79* esi16;
    void** v17;
    void** eax18;

    v5 = reinterpret_cast<void**>(__return_address());
    v6 = ebp7;
    ebp8 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax9 = g40b498;
    ebx10 = reinterpret_cast<void***>(0x40b700);
    v11 = eax9;
    if (a2) {
        if (reinterpret_cast<signed char>(a2) < reinterpret_cast<signed char>(0)) {
            a2 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(a2));
            ebx10 = reinterpret_cast<void***>(0x40b860);
        }
        if (!a3) {
            *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0);
        }
        if (a2) {
            do {
                eax12 = a2;
                a2 = reinterpret_cast<void**>(reinterpret_cast<signed char>(a2) >> 3);
                eax13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax12) & 7);
                ebx10 = ebx10 + 84;
                if (eax13) {
                    esi14 = reinterpret_cast<void**>(ebx10 + reinterpret_cast<uint32_t>(eax13 + reinterpret_cast<unsigned char>(eax13) * 2) * 4);
                    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi14)) >= reinterpret_cast<unsigned char>(0x8000)) {
                        *reinterpret_cast<void***>(&v15) = *reinterpret_cast<void***>(esi14);
                        esi16 = reinterpret_cast<struct s79*>(esi14 + 4);
                        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v15) + 4) = esi16->f0;
                        v17 = esi16->f4;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v15) + 2) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v15) + 2) - 1;
                        esi14 = reinterpret_cast<void**>(ebp8 + 0xfffffff0);
                    }
                    fun_408716(a1, esi14);
                }
            } while (a2);
        }
    }
    eax18 = fun_4041a2(v11, *reinterpret_cast<void***>(&v15), *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v15) + 4), v17, v11, v6, v5, a1, a2, a3, a4);
    return eax18;
}

void** fun_408716(void** a1, void** a2) {
    void* ebp3;
    void** eax4;
    void** v5;
    void** ebx6;
    void** ebx7;
    void** v8;
    void** eax9;
    uint32_t ecx10;
    void** v11;
    void** esi12;
    void** esi13;
    void** v14;
    uint96_t v15;
    void** v16;
    void** edi17;
    void** ecx18;
    void* eax19;
    uint32_t edi20;
    void* edx21;
    void* v22;
    void** eax23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** eax30;
    void** v31;
    uint32_t eax32;
    void* v33;
    int32_t eax34;
    void* ebx35;
    void** v36;
    void* eax37;
    uint1_t cf38;
    void** eax39;
    void** v40;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax4 = g40b498;
    v5 = ebx6;
    ebx7 = a2;
    v8 = eax4;
    eax9 = reinterpret_cast<void**>(0);
    ecx10 = 0;
    *reinterpret_cast<uint16_t*>(&ecx10) = *reinterpret_cast<uint16_t*>(ebx7 + 10);
    v11 = esi12;
    esi13 = a1;
    v14 = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(&v15) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v15) + 4) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v15) + 8) = reinterpret_cast<void**>(0);
    *reinterpret_cast<uint16_t*>(&eax9) = *reinterpret_cast<uint16_t*>(esi13 + 10);
    v16 = edi17;
    ecx18 = reinterpret_cast<void**>(ecx10 & 0x7fff);
    eax19 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax9) & 0x7fff);
    edi20 = (ecx10 ^ reinterpret_cast<unsigned char>(eax9)) & 0x8000;
    edx21 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx18) + reinterpret_cast<uint32_t>(eax19));
    v22 = edx21;
    if (*reinterpret_cast<uint16_t*>(&eax19) >= 0x7fff) 
        goto addr_408920_2;
    if (*reinterpret_cast<uint16_t*>(&ecx18) >= 0x7fff) 
        goto addr_408920_2;
    if (*reinterpret_cast<uint16_t*>(&edx21) > 0xbffd) 
        goto addr_408920_2;
    if (*reinterpret_cast<uint16_t*>(&edx21) <= 0x3fbf) {
        goto addr_4087c3_7;
    }
    if (*reinterpret_cast<uint16_t*>(&eax19)) {
        goto addr_4087ad_10;
    }
    v22 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v22) + 1);
    eax23 = reinterpret_cast<void**>(0);
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi13 + 8)) & 0x7fffffff || (*reinterpret_cast<void***>(esi13 + 4) || *reinterpret_cast<void***>(esi13))) {
        addr_4087ad_10:
        if (*reinterpret_cast<uint16_t*>(&ecx18) || ((v22 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v22) + 1), !!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx7 + 8)) & 0x7fffffff)) || (*reinterpret_cast<void***>(ebx7 + 4) || *reinterpret_cast<void***>(ebx7)))) {
            v24 = reinterpret_cast<void**>(0);
            v25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffff4);
            v26 = reinterpret_cast<void**>(5);
            do {
                if (reinterpret_cast<signed char>(v26) > reinterpret_cast<signed char>(0)) {
                    v27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v24) + reinterpret_cast<unsigned char>(v24) + reinterpret_cast<unsigned char>(esi13));
                    v28 = ebx7 + 8;
                    v29 = v26;
                    do {
                        eax30 = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v28)) * reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v27)));
                        ecx18 = v25 + 0xfffffffc;
                        eax32 = fun_407811(v31, eax30, ecx18);
                        if (eax32) {
                        }
                        v27 = v27 + 2;
                        v28 = v28 - 2;
                        --v29;
                    } while (v29);
                }
                v25 = v25 + 2;
                ++v24;
                --v26;
            } while (reinterpret_cast<signed char>(v26) > reinterpret_cast<signed char>(0));
            v33 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v22) + 0xc002);
            if (*reinterpret_cast<int16_t*>(&v33) > 0) 
                goto addr_408852_20;
        } else {
            addr_4087c3_7:
            *reinterpret_cast<void***>(esi13 + 8) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(esi13 + 4) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(esi13) = reinterpret_cast<void**>(0);
            goto addr_40893b_21;
        }
    } else {
        goto addr_40891a_23;
    }
    addr_408877_24:
    v33 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v33) + 0xffff);
    if (*reinterpret_cast<int16_t*>(&v33) >= 0) {
        addr_4088b0_25:
        if (*reinterpret_cast<uint16_t*>(&v15) > 0x8000 || !1) {
            if (1) {
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v15) + 2) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v15) + 2) + 1;
            } else {
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v15) + 2) = 0;
                if (1) {
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v15) + 6) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v15) + 6) + 1;
                } else {
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v15) + 6) = 0;
                    if (*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&v15) + 10) != -1) {
                        *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&v15) + 10) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&v15) + 10) + 1);
                    } else {
                        v33 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v33) + 1);
                        *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&v15) + 10) = 0x8000;
                    }
                }
            }
        }
    } else {
        eax34 = reinterpret_cast<int32_t>(-reinterpret_cast<uint32_t>(v33));
        ebx35 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax34)));
        v33 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v33) + reinterpret_cast<uint32_t>(ebx35));
        do {
            if (!1) {
                ++v14;
            }
            v36 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffff0);
            fun_4078be(ecx18, v36);
            ebx35 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx35) - 1);
            ecx18 = v36;
        } while (ebx35);
        if (!v14) 
            goto addr_4088b0_25; else 
            goto addr_4088ac_38;
    }
    eax37 = v33;
    if (*reinterpret_cast<uint16_t*>(&eax37) >= 0x7fff) {
        addr_408920_2:
        cf38 = reinterpret_cast<uint1_t>(!!*reinterpret_cast<int16_t*>(&edi20));
        *reinterpret_cast<int16_t*>(&edi20) = -*reinterpret_cast<int16_t*>(&edi20);
        *reinterpret_cast<void***>(esi13 + 4) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(esi13) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(esi13 + 8) = reinterpret_cast<void**>((edi20 - (edi20 + reinterpret_cast<uint1_t>(edi20 < edi20 + cf38)) & 0x80000000) + 0x7fff8000);
    } else {
        *reinterpret_cast<void***>(esi13) = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v15) + 2);
        *reinterpret_cast<void***>(esi13 + 2) = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v15) + 4);
        *reinterpret_cast<void***>(esi13 + 6) = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v15) + 8);
        eax23 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax37) | edi20);
        goto addr_40891a_23;
    }
    addr_40893b_21:
    eax39 = fun_4041a2(v8, v29, v27, v28, v14, v24, v25, *reinterpret_cast<void***>(&v15), *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v15) + 4), *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v15) + 8), v8);
    return eax39;
    addr_40891a_23:
    *reinterpret_cast<uint16_t*>(esi13 + 10) = *reinterpret_cast<uint16_t*>(&eax23);
    goto addr_40893b_21;
    addr_4088ac_38:
    *reinterpret_cast<unsigned char*>(&v15) = 1;
    goto addr_4088b0_25;
    do {
        addr_408852_20:
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&v15) + 11) & 0x80) 
            break;
        v40 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffff0);
        fun_407890(ecx18, v40, v16, v11, v5, v29, v27, v28);
        v33 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v33) + 0xffff);
        ecx18 = v40;
    } while (*reinterpret_cast<int16_t*>(&v33) > 0);
    if (*reinterpret_cast<int16_t*>(&v33) > 0) 
        goto addr_4088b0_25; else 
        goto addr_408877_24;
}

void fun_4078be(void** ecx, void** a2) {
    void** edx3;
    void** ecx4;
    void** ecx5;

    edx3 = *reinterpret_cast<void***>(a2 + 8);
    ecx4 = *reinterpret_cast<void***>(a2 + 4);
    *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx4) >> 1 | reinterpret_cast<unsigned char>(edx3) << 31);
    ecx5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) >> 1 | reinterpret_cast<unsigned char>(ecx4) << 31);
    *reinterpret_cast<void***>(a2 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx3) >> 1);
    *reinterpret_cast<void***>(a2) = ecx5;
    return;
}

struct s81 {
    signed char[4] pad4;
    struct s81* f4;
    struct s81* f8;
};

struct s80 {
    void* f0;
    struct s81* f4;
    struct s81* f8;
};

struct s82 {
    void* f0;
    struct s82* f4;
    struct s82* f8;
};

struct s83 {
    void* f0;
    struct s83* f4;
    struct s83* f8;
};

int32_t fun_406285(void** ecx, void** a2, void** a3, void** a4) {
    void** eax5;
    uint32_t edx6;
    void** v7;
    void** esi8;
    void** ecx9;
    struct s80* edi10;
    void* ebx11;
    void* v12;
    void* v13;
    void** ecx14;
    struct s82* ebx15;
    void* esi16;
    void* esi17;
    uint32_t ecx18;
    signed char* ecx19;
    uint32_t ebx20;
    void* ecx21;
    signed char* esi22;
    uint32_t ebx23;
    void* esi24;
    struct s82* ecx25;
    struct s82* edi26;
    signed char cl27;
    uint32_t ecx28;
    uint32_t* eax29;
    void* ecx30;
    void* ecx31;
    int32_t eax32;
    void* ecx33;
    void* v34;
    uint32_t ecx35;
    signed char* ecx36;
    uint32_t ebx37;
    signed char* ecx38;
    uint32_t ebx39;
    void* v40;
    void** edx41;
    void* edi42;
    struct s83* ecx43;
    struct s83* ebx44;
    signed char cl45;
    uint32_t ecx46;
    uint32_t* eax47;
    void* ecx48;
    void* ecx49;
    void** eax50;
    void** eax51;

    eax5 = *reinterpret_cast<void***>(a2 + 16);
    edx6 = reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) >> 15;
    v7 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax5 + edx6 * 0x204) + 0x144);
    esi8 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a4 + 23) & 0xfffffff0);
    ecx9 = *reinterpret_cast<void***>(a3 + 0xfffffffc) - 1;
    edi10 = reinterpret_cast<struct s80*>(reinterpret_cast<unsigned char>(ecx9) + reinterpret_cast<unsigned char>(a3) + 0xfffffffc);
    ebx11 = edi10->f0;
    v12 = ebx11;
    if (reinterpret_cast<signed char>(esi8) <= reinterpret_cast<signed char>(ecx9)) {
        if (reinterpret_cast<signed char>(esi8) < reinterpret_cast<signed char>(ecx9)) {
            v13 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx9) - reinterpret_cast<unsigned char>(esi8));
            ecx14 = esi8 + 1;
            *reinterpret_cast<void***>(a3 + 0xfffffffc) = ecx14;
            ebx15 = reinterpret_cast<struct s82*>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(esi8) + 0xfffffffc);
            esi16 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(v13) >> 4) - 1);
            *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebx15) - 4) = ecx14;
            if (reinterpret_cast<uint32_t>(esi16) > 63) {
                esi16 = reinterpret_cast<void*>(63);
            }
            if (!(*reinterpret_cast<unsigned char*>(&v12) & 1)) {
                esi17 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(v12) >> 4) - 1);
                if (reinterpret_cast<uint32_t>(esi17) > 63) {
                    esi17 = reinterpret_cast<void*>(63);
                }
                if (edi10->f4 == edi10->f8) {
                    if (reinterpret_cast<uint32_t>(esi17) >= 32) {
                        ecx18 = reinterpret_cast<uint32_t>(esi17) - 32;
                        ecx19 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi17) + reinterpret_cast<unsigned char>(eax5) + 4);
                        ebx20 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx18));
                        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx6 * 4) + 0xc4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx6 * 4) + 0xc4) & ebx20;
                        *ecx19 = reinterpret_cast<signed char>(*ecx19 - 1);
                        if (!*ecx19) {
                            *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4)) & ebx20);
                        }
                    } else {
                        ecx21 = esi17;
                        esi22 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi17) + reinterpret_cast<unsigned char>(eax5) + 4);
                        ebx23 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx21));
                        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx6 * 4) + 68) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx6 * 4) + 68) & ebx23;
                        *esi22 = reinterpret_cast<signed char>(*esi22 - 1);
                        if (!*esi22) {
                            *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) & ebx23);
                        }
                    }
                    ebx15 = ebx15;
                }
                edi10->f8->f4 = edi10->f4;
                edi10->f4->f8 = edi10->f8;
                esi24 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v13) + reinterpret_cast<uint32_t>(v12));
                v13 = esi24;
                esi16 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(esi24) >> 4) - 1);
                if (reinterpret_cast<uint32_t>(esi16) > 63) {
                    esi16 = reinterpret_cast<void*>(63);
                }
            }
            ecx25 = reinterpret_cast<struct s82*>(v7 + reinterpret_cast<uint32_t>(esi16) * 2);
            edi26 = ecx25->f4;
            ebx15->f8 = ecx25;
            ebx15->f4 = edi26;
            ecx25->f4 = ebx15;
            ebx15->f4->f8 = ebx15;
            if (ebx15->f4 == ebx15->f8) {
                cl27 = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi16) + reinterpret_cast<unsigned char>(eax5) + 4);
                *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi16) + reinterpret_cast<unsigned char>(eax5) + 4) = reinterpret_cast<signed char>(cl27 + 1);
                if (reinterpret_cast<uint32_t>(esi16) >= 32) {
                    if (!cl27) {
                        ecx28 = reinterpret_cast<uint32_t>(esi16) - 32;
                        *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4)) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx28));
                    }
                    eax29 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx6 * 4) + 0xc4);
                    ecx30 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi16) - 32);
                } else {
                    if (!cl27) {
                        ecx31 = esi16;
                        *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx31));
                    }
                    eax29 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx6 * 4) + 68);
                    ecx30 = esi16;
                }
                *eax29 = *eax29 | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx30);
            }
            ebx15->f0 = v13;
            *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v13) + reinterpret_cast<uint32_t>(ebx15) - 4) = v13;
        }
    } else {
        if (*reinterpret_cast<unsigned char*>(&ebx11) & 1 || reinterpret_cast<signed char>(esi8) > reinterpret_cast<signed char>(reinterpret_cast<uint32_t>(ebx11) + reinterpret_cast<unsigned char>(ecx9))) {
            eax32 = 0;
            goto addr_40655f_29;
        } else {
            ecx33 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(v12) >> 4) - 1);
            v34 = ecx33;
            if (reinterpret_cast<uint32_t>(ecx33) > 63) {
                ecx33 = reinterpret_cast<void*>(63);
                v34 = reinterpret_cast<void*>(63);
            }
            if (edi10->f4 == edi10->f8) {
                if (reinterpret_cast<uint32_t>(ecx33) >= 32) {
                    ecx35 = reinterpret_cast<uint32_t>(ecx33) - 32;
                    ecx36 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(v34) + reinterpret_cast<unsigned char>(eax5) + 4);
                    ebx37 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx35));
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx6 * 4) + 0xc4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx6 * 4) + 0xc4) & ebx37;
                    *ecx36 = reinterpret_cast<signed char>(*ecx36 - 1);
                    if (!*ecx36) {
                        *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4)) & ebx37);
                    }
                } else {
                    ecx38 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(v34) + reinterpret_cast<unsigned char>(eax5) + 4);
                    ebx39 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx33));
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx6 * 4) + 68) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx6 * 4) + 68) & ebx39;
                    *ecx38 = reinterpret_cast<signed char>(*ecx38 - 1);
                    if (!*ecx38) {
                        *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) & ebx39);
                    }
                }
            }
            edi10->f8->f4 = edi10->f4;
            edi10->f4->f8 = edi10->f8;
            v40 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v12) + (reinterpret_cast<unsigned char>(ecx9) - reinterpret_cast<unsigned char>(esi8)));
            if (reinterpret_cast<int32_t>(v40) <= reinterpret_cast<int32_t>(0)) {
                edx41 = a3;
            } else {
                edi42 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(v40) >> 4) - 1);
                ecx43 = reinterpret_cast<struct s83*>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(esi8) + 0xfffffffc);
                if (reinterpret_cast<uint32_t>(edi42) > 63) {
                    edi42 = reinterpret_cast<void*>(63);
                }
                ebx44 = reinterpret_cast<struct s83*>(v7 + reinterpret_cast<uint32_t>(edi42) * 2);
                ecx43->f4 = ebx44->f4;
                ecx43->f8 = ebx44;
                ebx44->f4 = ecx43;
                ecx43->f4->f8 = ecx43;
                if (ecx43->f4 == ecx43->f8) {
                    cl45 = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi42) + reinterpret_cast<unsigned char>(eax5) + 4);
                    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi42) + reinterpret_cast<unsigned char>(eax5) + 4) = reinterpret_cast<signed char>(cl45 + 1);
                    if (reinterpret_cast<uint32_t>(edi42) >= 32) {
                        if (!cl45) {
                            ecx46 = reinterpret_cast<uint32_t>(edi42) - 32;
                            *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4)) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx46));
                        }
                        eax47 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx6 * 4) + 0xc4);
                        ecx48 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi42) - 32);
                    } else {
                        if (!cl45) {
                            ecx49 = edi42;
                            *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx49));
                        }
                        eax47 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx6 * 4) + 68);
                        ecx48 = edi42;
                    }
                    *eax47 = *eax47 | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx48);
                }
                edx41 = a3;
                eax50 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx41) + reinterpret_cast<unsigned char>(esi8) + 0xfffffffc);
                *eax50 = v40;
                *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v40) + reinterpret_cast<uint32_t>(eax50) - 4) = v40;
            }
            eax51 = esi8 + 1;
            *reinterpret_cast<void***>(edx41 + 0xfffffffc) = eax51;
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx41) + reinterpret_cast<unsigned char>(esi8) + 0xfffffff8) = eax51;
        }
    }
    eax32 = 1;
    addr_40655f_29:
    return eax32;
}

uint32_t fun_408a26(void** ecx, void** a2, void** a3) {
    void*** ebp4;
    void** ecx5;
    int1_t less_or_equal6;
    void** eax7;
    void** ebp8;
    uint32_t eax9;
    uint32_t eax10;
    int1_t zf11;
    void** v12;
    void** v13;
    uint32_t eax14;

    ebp4 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ecx5 = a2;
    if (reinterpret_cast<unsigned char>(ecx5) <= reinterpret_cast<unsigned char>(0xff)) {
        less_or_equal6 = reinterpret_cast<signed char>(g40b4a0) <= reinterpret_cast<signed char>(1);
        if (less_or_equal6) {
            eax7 = g40b490;
            return static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax7 + reinterpret_cast<unsigned char>(ecx5) * 2))) & 8;
        } else {
            eax9 = fun_404318(ecx5, ecx5, 8, ecx, ebp8, __return_address());
            return eax9;
        }
    }
    eax10 = reinterpret_cast<unsigned char>(ecx5) >> 8;
    zf11 = g40bc98 == 0;
    *reinterpret_cast<signed char*>(&a2 + 2) = *reinterpret_cast<signed char*>(&eax10);
    *reinterpret_cast<signed char*>(&a2 + 3) = *reinterpret_cast<signed char*>(&ecx5);
    if (zf11) 
        goto addr_408a57_9;
    v12 = g40bc94;
    v13 = g40bda4;
    eax14 = fun_4070ad(ecx5, 1, ebp4 + 10, 2, ebp4 + 0xfffffffc, v13, v12, 1, 0, ebp8, __return_address(), a2, a3);
    if (!eax14) 
        goto addr_408a57_9;
    if (0) 
        goto addr_408a57_9;
    if (!1) 
        goto addr_408a8e_13;
    addr_408a57_9:
    return 0;
    addr_408a8e_13:
    return 1;
}

struct s84 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    void** f16;
    signed char[3] pad20;
    void** f20;
    signed char[3] pad24;
    void** f24;
    signed char[3] pad28;
    void** f28;
    signed char[3] pad32;
    void** f32;
    signed char[3] pad36;
    void** f36;
    signed char[3] pad40;
    void** f40;
};

struct s85 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
};

struct s86 {
    signed char[8] pad8;
    void** f8;
};

struct s87 {
    unsigned char f0;
    unsigned char f1;
};

struct s88 {
    signed char[12] pad12;
    struct s87* f12;
};

struct s89 {
    signed char[8] pad8;
    void** f8;
};

struct s90 {
    signed char[12] pad12;
    unsigned char* f12;
};

struct s91 {
    signed char[12] pad12;
    struct s87* f12;
};

struct s92 {
    signed char[8] pad8;
    void** f8;
};

struct s94 {
    signed char[1] pad1;
    signed char f1;
};

struct s93 {
    signed char[12] pad12;
    struct s94* f12;
};

struct s95 {
    signed char[12] pad12;
    unsigned char* f12;
};

struct s96 {
    signed char[8] pad8;
    void** f8;
};

struct s97 {
    signed char[12] pad12;
    unsigned char* f12;
};

struct s98 {
    unsigned char f0;
    signed char[3] pad4;
    int32_t f4;
};

struct s99 {
    signed char[8] pad8;
    void** f8;
};

struct s100 {
    signed char[8] pad8;
    void** f8;
};

struct s101 {
    signed char[12] pad12;
    struct s87* f12;
};

struct s102 {
    signed char[8] pad8;
    void** f8;
};

struct s103 {
    signed char[8] pad8;
    void** f8;
};

struct s104 {
    signed char[8] pad8;
    void** f8;
};

void** fun_404509(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

struct s105 {
    signed char[8] pad8;
    void** f8;
};

struct s107 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s106 {
    signed char[12] pad12;
    struct s107* f12;
};

struct s108 {
    signed char[12] pad12;
    unsigned char* f12;
};

struct s109 {
    signed char[12] pad12;
    unsigned char* f12;
};

struct s110 {
    signed char[8] pad8;
    void** f8;
};

struct s111 {
    signed char[8] pad8;
    void** f8;
};

struct s112 {
    signed char[8] pad8;
    void** f8;
};

struct s113 {
    signed char[8] pad8;
    void** f8;
};

int32_t fun_404730(void** ecx, int32_t a2, uint32_t a3, int32_t a4, uint32_t a5, void** a6, void** a7, void** a8);

struct s114 {
    signed char[8] pad8;
    void** f8;
};

struct s115 {
    signed char[12] pad12;
    int32_t f12;
};

struct s116 {
    signed char[12] pad12;
    int32_t f12;
};

struct s117 {
    signed char[12] pad12;
    unsigned char* f12;
};

struct s118 {
    signed char[8] pad8;
    void** f8;
};

struct s119 {
    signed char[8] pad8;
    void** f8;
};

struct s120 {
    signed char[8] pad8;
    void** f8;
};

struct s121 {
    signed char[8] pad8;
    void** f8;
};

struct s122 {
    signed char[16] pad16;
    int32_t f16;
};

struct s123 {
    signed char[8] pad8;
    void** f8;
};

struct s124 {
    signed char[8] pad8;
    void** f8;
};

int32_t g40b350 = 0x4051bd;

struct s125 {
    signed char[16] pad16;
    int32_t f16;
};

struct s126 {
    signed char[16] pad16;
    int32_t f16;
};

struct s127 {
    signed char[12] pad12;
    int32_t f12;
};

struct s128 {
    signed char[12] pad12;
    int32_t f12;
};

struct s129 {
    signed char[12] pad12;
    unsigned char* f12;
};

struct s130 {
    signed char[8] pad8;
    void** f8;
};

struct s131 {
    signed char[8] pad8;
    void** f8;
};

void fun_401dbc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18) {
    void** v19;
    void** esp20;
    void** eax21;
    int32_t ebp22;
    int32_t ebp23;
    int32_t ebp24;
    int32_t ebp25;
    int32_t ebp26;
    int32_t ebp27;
    int32_t ebp28;
    int32_t ebp29;
    void** ecx30;
    int32_t ebp31;
    struct s84* esp32;
    int32_t ebp33;
    struct s85* esp34;
    int1_t zf35;
    void** ebx36;
    void** v37;
    struct s86* ebp38;
    void** v39;
    int32_t ebp40;
    void** ecx41;
    int32_t ebp42;
    void** v43;
    int32_t ebp44;
    int32_t eax45;
    int32_t ebp46;
    int32_t ebp47;
    int32_t ebp48;
    int32_t ebp49;
    void** edx50;
    int32_t ebp51;
    int32_t ebp52;
    unsigned char al53;
    uint32_t ecx54;
    unsigned char* eax55;
    void** ebx56;
    int32_t ebp57;
    int32_t ebp58;
    uint32_t eax59;
    int1_t less_or_equal60;
    void** eax61;
    uint32_t eax62;
    void** ebx63;
    int32_t eax64;
    int32_t ebp65;
    int32_t ebp66;
    int32_t ebp67;
    int32_t ebp68;
    int32_t ebp69;
    void*** esi70;
    void** edi71;
    int32_t ebp72;
    int32_t ebp73;
    void** eax74;
    int32_t ebp75;
    int32_t ebp76;
    int32_t ebp77;
    int32_t ebp78;
    unsigned char* esi79;
    void** eax80;
    int1_t less_or_equal81;
    uint32_t eax82;
    uint32_t edi83;
    struct s87* esi84;
    struct s88* ebp85;
    int32_t ebp86;
    int32_t ebp87;
    struct s89* ebp88;
    void** eax89;
    int32_t ebp90;
    void** eax91;
    struct s90* ebp92;
    int32_t ebp93;
    int32_t ebp94;
    int32_t ebp95;
    int32_t ebp96;
    int32_t ebp97;
    int32_t ebp98;
    int32_t ebp99;
    int32_t ebp100;
    int32_t ebp101;
    int32_t ebp102;
    int32_t ebp103;
    int32_t ebp104;
    int32_t ebp105;
    uint32_t ebx106;
    void** eax107;
    int1_t less_or_equal108;
    uint32_t eax109;
    int32_t ebp110;
    int32_t ebp111;
    int32_t ebp112;
    int32_t ebp113;
    int32_t ebp114;
    int32_t ebp115;
    int32_t ebp116;
    int32_t ebp117;
    int32_t ebp118;
    int32_t ebp119;
    int32_t ebp120;
    int32_t ebp121;
    struct s87* eax122;
    struct s87* eax123;
    int32_t ebp124;
    int32_t ebp125;
    int32_t ebp126;
    int32_t ebp127;
    int32_t ebp128;
    int32_t ebp129;
    int32_t ebp130;
    int32_t ebp131;
    int32_t ebp132;
    int32_t ebp133;
    struct s91* ebp134;
    int32_t ebp135;
    int32_t ebp136;
    int32_t ebp137;
    int32_t ebp138;
    int32_t ebp139;
    struct s92* ebp140;
    void** eax141;
    uint32_t eax142;
    int32_t ebp143;
    struct s93* ebp144;
    struct s95* ebp145;
    int32_t ebp146;
    int32_t ebp147;
    struct s96* ebp148;
    void** eax149;
    struct s97* ebp150;
    int32_t ebp151;
    int32_t ebp152;
    struct s98* ebx153;
    int32_t ebp154;
    int32_t ebp155;
    int32_t ebp156;
    int1_t zf157;
    int32_t ebp158;
    int32_t ebp159;
    uint32_t edi160;
    int32_t ebp161;
    int32_t ebp162;
    int32_t ebp163;
    struct s99* ebp164;
    void** eax165;
    int32_t ebp166;
    int32_t ebp167;
    int32_t ebp168;
    struct s100* ebp169;
    void** eax170;
    uint32_t eax171;
    int32_t ebp172;
    struct s101* ebp173;
    int32_t ebp174;
    int32_t ebp175;
    uint32_t eax176;
    int32_t ebp177;
    uint32_t eax178;
    int32_t ebp179;
    int32_t ebp180;
    struct s98* esi181;
    int32_t ebp182;
    int32_t ebp183;
    int32_t ebp184;
    void** v185;
    struct s102* ebp186;
    void** v187;
    int32_t ebp188;
    int32_t ebp189;
    int32_t eax190;
    int32_t ebp191;
    int32_t ebp192;
    int32_t ebp193;
    int32_t ebp194;
    int32_t ebp195;
    struct s103* ebp196;
    void** eax197;
    int32_t ebp198;
    uint32_t ecx199;
    int32_t ebp200;
    int32_t ebp201;
    int32_t ebp202;
    int32_t ebp203;
    int32_t ebp204;
    int32_t ebp205;
    int32_t ebp206;
    int32_t ebp207;
    struct s104* ebp208;
    void** eax209;
    int32_t ebp210;
    void** v211;
    void* ebp212;
    void* ebp213;
    int32_t ebp214;
    int32_t ebp215;
    int32_t ebp216;
    int32_t ebp217;
    int32_t ebp218;
    int32_t ebp219;
    int32_t ebp220;
    int32_t ebp221;
    int32_t ebp222;
    int32_t ebp223;
    void** v224;
    struct s105* ebp225;
    uint32_t eax226;
    void** ebx227;
    int32_t ebp228;
    int32_t ebp229;
    uint32_t eax230;
    int32_t ebp231;
    int32_t ebp232;
    int32_t ebp233;
    int32_t ebp234;
    unsigned char* edi235;
    struct s106* ebp236;
    struct s108* ebp237;
    int32_t ebp238;
    int32_t ebp239;
    int32_t ebp240;
    int32_t ebp241;
    int32_t ebp242;
    int32_t ebp243;
    int32_t ebp244;
    int32_t ebp245;
    int32_t ebp246;
    int32_t ebp247;
    unsigned char al248;
    uint32_t esi249;
    int32_t ebp250;
    unsigned char* eax251;
    int32_t ebp252;
    int32_t ebp253;
    int32_t ebp254;
    int32_t ebp255;
    int32_t ebp256;
    struct s109* ebp257;
    int32_t ebp258;
    int32_t ebp259;
    int32_t ebp260;
    int32_t ebp261;
    int1_t less_or_equal262;
    void** eax263;
    uint32_t eax264;
    int32_t ebp265;
    int32_t ebp266;
    void** eax267;
    int1_t less_or_equal268;
    void** eax269;
    uint32_t eax270;
    int32_t ebp271;
    int32_t ebp272;
    int32_t ebp273;
    void** v274;
    struct s110* ebp275;
    int32_t ebp276;
    int32_t ebp277;
    int32_t ebp278;
    int32_t ebp279;
    int32_t ebp280;
    int32_t ebp281;
    int32_t ebp282;
    int32_t ebp283;
    int32_t ebp284;
    int32_t ebp285;
    struct s111* ebp286;
    void** eax287;
    int32_t ebp288;
    int32_t ebp289;
    int32_t ebp290;
    int32_t ebp291;
    int32_t ebp292;
    int32_t ebp293;
    int32_t ebp294;
    int32_t ebp295;
    int32_t ebp296;
    int32_t ebp297;
    int32_t ebp298;
    int32_t ebp299;
    int32_t ebp300;
    int1_t less_or_equal301;
    void** eax302;
    uint32_t eax303;
    int32_t ebp304;
    int32_t ebp305;
    int32_t ebp306;
    int32_t ebp307;
    void** eax308;
    int1_t less_or_equal309;
    void** eax310;
    uint32_t eax311;
    int32_t ebp312;
    int32_t ebp313;
    int32_t ebp314;
    void** v315;
    struct s112* ebp316;
    int32_t ebp317;
    int32_t ebp318;
    uint32_t tmp32_319;
    int32_t ebp320;
    uint1_t cf321;
    int32_t ebp322;
    int32_t ebp323;
    int32_t ebp324;
    int32_t ebp325;
    int32_t ebp326;
    int32_t ebp327;
    int32_t ebp328;
    int32_t ebp329;
    int32_t ebp330;
    int32_t ebp331;
    struct s113* ebp332;
    void** eax333;
    int32_t ebp334;
    uint32_t v335;
    int32_t ebp336;
    int32_t v337;
    int32_t ebp338;
    int32_t eax339;
    int32_t ebp340;
    int32_t ebp341;
    int32_t ebp342;
    int32_t ebp343;
    int32_t ebp344;
    int32_t ebp345;
    int32_t ebp346;
    int32_t ebp347;
    int32_t ebp348;
    int32_t ebp349;
    int32_t ebp350;
    int32_t ebp351;
    int32_t ebp352;
    int32_t ebp353;
    int32_t ebp354;
    int32_t ebp355;
    int32_t ebp356;
    int32_t ebp357;
    int32_t ebp358;
    int32_t ebp359;
    struct s114* ebp360;
    void** eax361;
    int32_t ebp362;
    int32_t ebp363;
    int32_t ebp364;
    int32_t ebp365;
    int32_t ebp366;
    int32_t ebp367;
    struct s115* ebp368;
    struct s116* ebp369;
    struct s117* ebp370;
    int32_t ebp371;
    int32_t ebp372;
    int32_t ebp373;
    unsigned char eax374;
    int32_t ebp375;
    int32_t ebp376;
    int32_t ebp377;
    int32_t ebp378;
    int32_t ebp379;
    int32_t ebp380;
    int32_t ebp381;
    int32_t ebp382;
    int32_t ebp383;
    int32_t ebp384;
    int32_t ebp385;
    struct s118* ebp386;
    void** eax387;
    int32_t ebp388;
    int32_t ebp389;
    int32_t ebp390;
    int32_t ebp391;
    struct s119* ebp392;
    void** eax393;
    void* esp394;
    int32_t ebp395;
    int32_t ebp396;
    int32_t ebp397;
    struct s120* ebp398;
    void** eax399;
    int32_t ebp400;
    int32_t ebp401;
    int32_t ebp402;
    int32_t ebp403;
    int32_t ebp404;
    int32_t ebp405;
    int32_t ebp406;
    uint32_t* esp407;
    uint32_t v408;
    int32_t ebp409;
    int32_t ebp410;
    int32_t ebp411;
    void** v412;
    struct s121* ebp413;
    int32_t ebp414;
    int32_t ebp415;
    int32_t ebp416;
    int32_t ebp417;
    int32_t ebp418;
    int32_t ebp419;
    int32_t ebp420;
    int32_t ebp421;
    int32_t ebp422;
    struct s122* ebp423;
    int32_t ebp424;
    int32_t ebp425;
    int32_t ebp426;
    int32_t ebp427;
    int32_t ebp428;
    int32_t ebp429;
    struct s123* ebp430;
    int32_t ebp431;
    int32_t ebp432;
    int32_t ebp433;
    int32_t ebp434;
    struct s124* ebp435;
    void** eax436;
    int32_t ebp437;
    int32_t ebp438;
    int32_t ebp439;
    int32_t ebp440;
    int1_t less_or_equal441;
    void** eax442;
    uint32_t eax443;
    int32_t eax444;
    int32_t ebp445;
    int32_t ebp446;
    int32_t ebp447;
    int32_t ebp448;
    int32_t ebp449;
    int32_t ebp450;
    int32_t ebp451;
    void** eax452;
    int32_t ebp453;
    int1_t zf454;
    int32_t eax455;
    int32_t ebp456;
    int32_t ebp457;
    int32_t ebp458;
    int32_t ebp459;
    int32_t ebp460;
    void** eax461;
    void** al462;
    int32_t ebp463;
    int1_t less_or_equal464;
    void** eax465;
    uint32_t eax466;
    int32_t eax467;
    int32_t ebp468;
    int32_t ebp469;
    int32_t ebp470;
    int32_t ebp471;
    int32_t ebp472;
    int32_t ebp473;
    int32_t ebp474;
    void** eax475;
    int32_t ebp476;
    int32_t eax477;
    int32_t ebp478;
    int32_t ebp479;
    int32_t ebp480;
    int32_t ebp481;
    int32_t ebp482;
    int32_t ebp483;
    int32_t ebp484;
    int32_t ebp485;
    int32_t ebp486;
    int32_t v487;
    int32_t ebp488;
    int32_t v489;
    int32_t ebp490;
    int32_t ebp491;
    int32_t ebp492;
    int32_t ebp493;
    int32_t ebp494;
    int32_t ebp495;
    int32_t eax496;
    struct s125* ebp497;
    int32_t ebp498;
    int32_t eax499;
    struct s126* ebp500;
    int32_t ebp501;
    struct s127* ebp502;
    struct s128* ebp503;
    void** v504;
    struct s129* ebp505;
    uint32_t eax506;
    void** v507;
    struct s130* ebp508;
    int32_t ebp509;
    int32_t ebp510;
    void** eax511;
    int32_t ebp512;
    void** v513;
    struct s131* ebp514;

    v19 = reinterpret_cast<void**>(__return_address());
    fun_403bd0(0x409160, 0x1cc, v19);
    esp20 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 + 4);
    eax21 = g40b498;
    *reinterpret_cast<void***>(ebp22 - 28) = eax21;
    *reinterpret_cast<int32_t*>(ebp23 - 0x1bc) = 0;
    *reinterpret_cast<int32_t*>(ebp24 - 0x1d8) = 0;
    *reinterpret_cast<int32_t*>(ebp25 - 0x1b0) = 0;
    *reinterpret_cast<int32_t*>(ebp26 - 0x194) = 0;
    *reinterpret_cast<signed char*>(ebp27 - 0x195) = 0;
    *reinterpret_cast<int32_t*>(ebp28 - 0x184) = 0;
    *reinterpret_cast<int32_t*>(ebp29 - 0x1b8) = 0;
    goto addr_401dff_2;
    addr_402c0f_3:
    ecx30 = *reinterpret_cast<void***>(ebp31 - 28);
    esp32 = reinterpret_cast<struct s84*>(ebp33 - 0x1e8 - 4);
    esp32->f0 = 0x402c1d;
    fun_4041a2(ecx30, esp32->f4, esp32->f8, esp32->f12, esp32->f16, esp32->f20, esp32->f24, esp32->f28, esp32->f32, esp32->f36, esp32->f40);
    esp34 = reinterpret_cast<struct s85*>(&esp32->f4 - 4);
    esp34->f0 = 0x402c22;
    fun_403c0b(ecx30, esp34->f4, esp34->f8, esp34->f12);
    goto esp34->f4;
    addr_402ba0_4:
    zf35 = reinterpret_cast<int1_t>(ebx36 == 0xffffffff);
    addr_402ba3_5:
    if (!zf35) {
        v37 = ebp38->f8;
        v39 = *reinterpret_cast<void***>(ebp40 - 0x194);
        fun_404474(ecx41, v39, v37, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5);
        ecx41 = v37;
    }
    addr_402bdc_7:
    if (*reinterpret_cast<int32_t*>(ebp42 - 0x1d8) == 1) {
        v43 = *reinterpret_cast<void***>(ebp44 - 0x1bc);
        fun_40403c(ecx41, v43, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }
    eax45 = *reinterpret_cast<int32_t*>(ebp46 - 0x1b8);
    if (*reinterpret_cast<int32_t*>(ebp47 - 0x194) == -1 && (!eax45 && *reinterpret_cast<signed char*>(ebp48 - 0x195) == *reinterpret_cast<signed char*>(&eax45))) {
        goto addr_402c0f_3;
    }
    addr_4023dd_11:
    zf35 = *reinterpret_cast<int32_t*>(ebp49 - 0x194) == -1;
    goto addr_402ba3_5;
    while (1) {
        addr_40252e_12:
        *reinterpret_cast<unsigned char*>(&edx50) = *reinterpret_cast<unsigned char*>(ebp51 - 0x198);
        goto addr_402534_13;
        addr_402515_14:
        *reinterpret_cast<unsigned char*>(ebp52 - 0x198) = al53;
        ecx54 = al53;
        eax55 = reinterpret_cast<unsigned char*>((ecx54 >> 3) + reinterpret_cast<unsigned char>(ebx56));
        ecx41 = reinterpret_cast<void**>(ecx54 & 7);
        *eax55 = reinterpret_cast<unsigned char>(*eax55 | reinterpret_cast<unsigned char>(1 << *reinterpret_cast<unsigned char*>(&ecx41)));
        continue;
        while (1) {
            *reinterpret_cast<uint32_t*>(ebp57 - 0x18c) = *reinterpret_cast<uint32_t*>(ebp58 - 0x18c) & eax59;
            while (1) {
                less_or_equal60 = reinterpret_cast<signed char>(g40b4a0) <= reinterpret_cast<signed char>(1);
                if (less_or_equal60) {
                    eax61 = g40b490;
                    eax62 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax61 + reinterpret_cast<unsigned char>(ebx63) * 2))) & 4;
                } else {
                    eax62 = fun_404318(ecx41, ebx63, 4, 0x409160, 0x1cc, v19);
                    ecx41 = reinterpret_cast<void**>(4);
                    esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) - 4 - 4 + 4 + 4 + 4);
                }
                if (!eax62) 
                    goto addr_402324_20;
                eax64 = *reinterpret_cast<int32_t*>(ebp65 - 0x18c);
                *reinterpret_cast<int32_t*>(ebp66 - 0x18c) = *reinterpret_cast<int32_t*>(ebp67 - 0x18c) - 1;
                if (!eax64) 
                    goto addr_402324_20;
                *reinterpret_cast<int32_t*>(ebp68 - 0x19c) = *reinterpret_cast<int32_t*>(ebp69 - 0x19c) + 1;
                *esi70 = ebx63;
                ++esi70;
                addr_4022cf_23:
                edx50 = edi71;
                *reinterpret_cast<int32_t*>(ebp72 - 0x184) = *reinterpret_cast<int32_t*>(ebp73 - 0x184) + 1;
                eax74 = fun_401da6(ecx41, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5, a6);
                esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) + 4);
                ebx63 = eax74;
                *reinterpret_cast<void***>(ebp75 - 0x194) = ebx63;
                continue;
                addr_4022b7_24:
                eax59 = *reinterpret_cast<uint32_t*>(ebp76 - 0x18c);
                *reinterpret_cast<int32_t*>(ebp77 - 0x18c) = *reinterpret_cast<int32_t*>(ebp78 - 0x18c) - 1;
                if (eax59) 
                    goto addr_4022cf_23; else 
                    break;
                while (1) {
                    if (!*esi79) 
                        goto addr_402bdc_7;
                    eax80 = reinterpret_cast<void**>(static_cast<uint32_t>(*esi79));
                    less_or_equal81 = reinterpret_cast<signed char>(g40b4a0) <= reinterpret_cast<signed char>(1);
                    if (less_or_equal81) {
                        ecx41 = g40b490;
                        eax82 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx41 + reinterpret_cast<unsigned char>(eax80) * 2))) & 8;
                    } else {
                        eax82 = fun_404318(ecx41, eax80, 8, 0x409160, 0x1cc, v19);
                        ecx41 = reinterpret_cast<void**>(8);
                        esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) - 4 - 4 + 4 + 4 + 4);
                    }
                    edi83 = 0;
                    if (!eax82) {
                        esi84 = ebp85->f12;
                        if (esi84->f0 != 37) {
                            *reinterpret_cast<int32_t*>(ebp86 - 0x184) = *reinterpret_cast<int32_t*>(ebp87 - 0x184) + 1;
                            edx50 = ebp88->f8;
                            eax89 = fun_401da6(ecx41, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5, a6);
                            esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) + 4);
                            ebx36 = eax89;
                            *reinterpret_cast<void***>(ebp90 - 0x194) = ebx36;
                            eax91 = reinterpret_cast<void**>(static_cast<uint32_t>(esi84->f0));
                            esi79 = &esi84->f1;
                            ebp92->f12 = esi79;
                            if (eax91 != ebx36) 
                                goto addr_402ba0_4;
                            ecx41 = g40b490;
                            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx41 + *reinterpret_cast<unsigned char*>(&ebx36) * 2) + 1) & 0x80) 
                                goto addr_402b77_33;
                        } else {
                            *reinterpret_cast<uint32_t*>(ebp93 - 0x1a0) = 0;
                            *reinterpret_cast<signed char*>(ebp94 - 0x198) = 0;
                            *reinterpret_cast<uint32_t*>(ebp95 - 0x19c) = 0;
                            *reinterpret_cast<uint32_t*>(ebp96 - 0x1b4) = 0;
                            *reinterpret_cast<uint32_t*>(ebp97 - 0x18c) = 0;
                            *reinterpret_cast<signed char*>(ebp98 - 0x1a1) = 0;
                            *reinterpret_cast<signed char*>(ebp99 - 0x197) = 0;
                            *reinterpret_cast<signed char*>(ebp100 - 0x18e) = 0;
                            *reinterpret_cast<signed char*>(ebp101 - 0x17d) = 0;
                            *reinterpret_cast<signed char*>(ebp102 - 0x196) = 0;
                            *reinterpret_cast<signed char*>(ebp103 - 0x185) = 0;
                            *reinterpret_cast<signed char*>(ebp104 - 0x18d) = 1;
                            *reinterpret_cast<uint32_t*>(ebp105 - 0x1c8) = 0;
                            do {
                                esi84 = reinterpret_cast<struct s87*>(&esi84->f1);
                                ebx106 = esi84->f0;
                                eax107 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ebx106)));
                                less_or_equal108 = reinterpret_cast<signed char>(g40b4a0) <= reinterpret_cast<signed char>(1);
                                if (less_or_equal108) {
                                    ecx41 = g40b490;
                                    eax109 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx41 + reinterpret_cast<unsigned char>(eax107) * 2))) & 4;
                                } else {
                                    eax109 = fun_404318(ecx41, eax107, 4, 0x409160, 0x1cc, v19);
                                    ecx41 = reinterpret_cast<void**>(4);
                                    esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) - 4 - 4 + 4 + 4 + 4);
                                }
                                if (!eax109) {
                                    if (reinterpret_cast<int32_t>(ebx106) > reinterpret_cast<int32_t>(78)) {
                                        if (ebx106 == 0x68) {
                                            *reinterpret_cast<signed char*>(ebp110 - 0x18d) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp111 - 0x18d) - 1);
                                            *reinterpret_cast<signed char*>(ebp112 - 0x185) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp113 - 0x185) - 1);
                                        } else {
                                            if (ebx106 == 0x6c) {
                                                *reinterpret_cast<signed char*>(ebp114 - 0x18d) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp115 - 0x18d) + 1);
                                                goto addr_401fca_44;
                                            } else {
                                                if (ebx106 == 0x77) {
                                                    addr_401fca_44:
                                                    *reinterpret_cast<signed char*>(ebp116 - 0x185) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp117 - 0x185) + 1);
                                                } else {
                                                    addr_401fbc_46:
                                                    *reinterpret_cast<signed char*>(ebp118 - 0x17d) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp119 - 0x17d) + 1);
                                                }
                                            }
                                        }
                                    } else {
                                        if (ebx106 != 78) {
                                            if (ebx106 == 42) {
                                                *reinterpret_cast<signed char*>(ebp120 - 0x18e) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp121 - 0x18e) + 1);
                                            } else {
                                                if (ebx106 != 70) {
                                                    if (ebx106 == 73) {
                                                        *reinterpret_cast<unsigned char*>(&ecx41) = esi84->f1;
                                                        if (*reinterpret_cast<unsigned char*>(&ecx41) != 54 || (eax122 = esi84 + 1, eax122->f0 != 52)) {
                                                            if (*reinterpret_cast<unsigned char*>(&ecx41) != 51 || (eax123 = esi84 + 1, eax123->f0 != 50)) {
                                                                if (*reinterpret_cast<unsigned char*>(&ecx41) != 100 && (*reinterpret_cast<unsigned char*>(&ecx41) != 0x69 && (*reinterpret_cast<unsigned char*>(&ecx41) != 0x6f && *reinterpret_cast<unsigned char*>(&ecx41) != 0x78))) {
                                                                    if (*reinterpret_cast<unsigned char*>(&ecx41) != 88) 
                                                                        goto addr_401fbc_46;
                                                                }
                                                            } else {
                                                                esi84 = eax123;
                                                            }
                                                        } else {
                                                            esi84 = eax122;
                                                            *reinterpret_cast<int32_t*>(ebp124 - 0x1c8) = *reinterpret_cast<int32_t*>(ebp125 - 0x1c8) + 1;
                                                            *reinterpret_cast<uint32_t*>(ebp126 - 0x1ac) = 0;
                                                            *reinterpret_cast<uint32_t*>(ebp127 - 0x1a8) = 0;
                                                        }
                                                    } else {
                                                        if (ebx106 != 76) 
                                                            goto addr_401fbc_46;
                                                        *reinterpret_cast<signed char*>(ebp128 - 0x18d) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp129 - 0x18d) + 1);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    *reinterpret_cast<int32_t*>(ebp130 - 0x1b4) = *reinterpret_cast<int32_t*>(ebp131 - 0x1b4) + 1;
                                    edi83 = ebx106 + (edi83 + edi83 * 4) * 2 - 48;
                                }
                            } while (!*reinterpret_cast<signed char*>(ebp132 - 0x17d));
                            *reinterpret_cast<uint32_t*>(ebp133 - 0x18c) = edi83;
                            ebp134->f12 = esi84;
                            if (*reinterpret_cast<signed char*>(ebp135 - 0x18e)) 
                                goto addr_402017_64; else 
                                goto addr_401ffd_65;
                        }
                    } else {
                        *reinterpret_cast<int32_t*>(ebp136 - 0x184) = *reinterpret_cast<int32_t*>(ebp137 - 0x184) - 1;
                        do {
                            *reinterpret_cast<int32_t*>(ebp138 - 0x184) = *reinterpret_cast<int32_t*>(ebp139 - 0x184) + 1;
                            edx50 = ebp140->f8;
                            eax141 = fun_401da6(ecx41, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5, a6);
                            eax142 = fun_4044e0(ecx41, eax141, 0x409160, 0x1cc, v19);
                            ecx41 = eax141;
                            esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) + 4 - 4 - 4 + 4 + 4);
                        } while (eax142);
                        if (eax141 == 0xffffffff) 
                            goto addr_401e68_69; else 
                            goto addr_401e5d_70;
                    }
                    addr_402bbd_71:
                    if (*reinterpret_cast<int32_t*>(ebp143 - 0x194) != -1) 
                        continue;
                    if (*esi79 != 37) 
                        goto addr_402bdc_7;
                    if (ebp144->f12->f1 != 0x6e) 
                        goto addr_402bdc_7;
                    addr_401dff_2:
                    esi79 = ebp145->f12;
                    continue;
                    addr_402b77_33:
                    *reinterpret_cast<int32_t*>(ebp146 - 0x184) = *reinterpret_cast<int32_t*>(ebp147 - 0x184) + 1;
                    edx50 = ebp148->f8;
                    eax149 = fun_401da6(ecx41, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5, a6);
                    esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) + 4);
                    ecx41 = reinterpret_cast<void**>(static_cast<uint32_t>(*esi79));
                    ++esi79;
                    ebp150->f12 = esi79;
                    if (ecx41 != eax149) 
                        goto addr_402b90_74;
                    *reinterpret_cast<int32_t*>(ebp151 - 0x184) = *reinterpret_cast<int32_t*>(ebp152 - 0x184) - 1;
                    goto addr_402bbd_71;
                    addr_402017_64:
                    ebx153 = *reinterpret_cast<struct s98**>(ebp154 - 0x1b0);
                    addr_40201d_76:
                    *reinterpret_cast<signed char*>(ebp155 - 0x17d) = 0;
                    if (!*reinterpret_cast<signed char*>(ebp156 - 0x185) && (esi84->f0 == 83 || (zf157 = esi84->f0 == 67, *reinterpret_cast<signed char*>(ebp158 - 0x185) = -1, zf157))) {
                        *reinterpret_cast<signed char*>(ebp159 - 0x185) = 1;
                    }
                    edi160 = static_cast<uint32_t>(esi84->f0) | 32;
                    *reinterpret_cast<uint32_t*>(ebp161 - 0x1c0) = edi160;
                    if (edi160 != 0x6e) {
                        if (edi160 == 99 || edi160 == 0x7b) {
                            *reinterpret_cast<int32_t*>(ebp162 - 0x184) = *reinterpret_cast<int32_t*>(ebp163 - 0x184) + 1;
                            edx50 = ebp164->f8;
                            eax165 = fun_401da6(ecx41, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5, a6);
                            esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) + 4);
                            *reinterpret_cast<void***>(ebp166 - 0x194) = eax165;
                        } else {
                            do {
                                *reinterpret_cast<int32_t*>(ebp167 - 0x184) = *reinterpret_cast<int32_t*>(ebp168 - 0x184) + 1;
                                edx50 = ebp169->f8;
                                eax170 = fun_401da6(ecx41, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5, a6);
                                eax171 = fun_4044e0(ecx41, eax170, 0x409160, 0x1cc, v19);
                                ecx41 = eax170;
                                esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) + 4 - 4 - 4 + 4 + 4);
                            } while (eax171);
                            *reinterpret_cast<void***>(ebp172 - 0x194) = eax170;
                            esi84 = ebp173->f12;
                        }
                    }
                    ecx41 = *reinterpret_cast<void***>(ebp174 - 0x1b4);
                    if (!ecx41) 
                        goto addr_4020b1_84;
                    if (!*reinterpret_cast<int32_t*>(ebp175 - 0x18c)) 
                        goto addr_4023dd_11;
                    addr_4020b1_84:
                    if (reinterpret_cast<int32_t>(edi160) > reinterpret_cast<int32_t>(0x6f)) {
                        eax176 = edi160 - 0x70;
                        if (!eax176) {
                            *reinterpret_cast<signed char*>(ebp177 - 0x18d) = 1;
                            goto addr_4027cf_88;
                        }
                        eax178 = eax176 - 3;
                        if (eax178) 
                            goto addr_4023bc_90;
                    } else {
                        if (edi160 == 0x6f) 
                            goto addr_4027cf_88;
                        if (edi160 == 99) 
                            goto addr_40237f_93; else 
                            goto addr_4020c9_94;
                    }
                    addr_402393_95:
                    if (*reinterpret_cast<signed char*>(ebp179 - 0x185) > 0) {
                        *reinterpret_cast<signed char*>(ebp180 - 0x196) = 1;
                    }
                    addr_40255a_97:
                    esi181 = ebx153;
                    *reinterpret_cast<int32_t*>(ebp182 - 0x184) = *reinterpret_cast<int32_t*>(ebp183 - 0x184) - 1;
                    if (*reinterpret_cast<int32_t*>(ebp184 - 0x194) != -1) {
                        v185 = ebp186->f8;
                        v187 = *reinterpret_cast<void***>(ebp188 - 0x194);
                        fun_404474(ecx41, v187, v185, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5);
                        ecx41 = v185;
                        esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) - 4 - 4 + 4 + 4 + 4);
                    }
                    while (!*reinterpret_cast<int32_t*>(ebp189 - 0x1b4) || (eax190 = *reinterpret_cast<int32_t*>(ebp191 - 0x18c), *reinterpret_cast<int32_t*>(ebp192 - 0x18c) = *reinterpret_cast<int32_t*>(ebp193 - 0x18c) - 1, !!eax190)) {
                        *reinterpret_cast<int32_t*>(ebp194 - 0x184) = *reinterpret_cast<int32_t*>(ebp195 - 0x184) + 1;
                        edx50 = ebp196->f8;
                        eax197 = fun_401da6(ecx41, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5, a6);
                        esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) + 4);
                        *reinterpret_cast<void***>(ebp198 - 0x194) = eax197;
                        if (eax197 == 0xffffffff) 
                            goto addr_40276a_101;
                        if (edi160 != 99 && (edi160 != 0x73 || (reinterpret_cast<signed char>(eax197) >= reinterpret_cast<signed char>(9) && reinterpret_cast<signed char>(eax197) <= reinterpret_cast<signed char>(13) || reinterpret_cast<int1_t>(eax197 == 32)))) {
                            if (edi160 != 0x7b) 
                                goto addr_40276a_101;
                            ecx199 = reinterpret_cast<unsigned char>(eax197) & 7;
                            edx50 = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx199));
                            ecx41 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>((reinterpret_cast<signed char>(eax197) >> 3) + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp200 - 0x1bc))))) ^ reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(ebp201 - 0x1a1))));
                            if (!(reinterpret_cast<unsigned char>(ecx41) & reinterpret_cast<unsigned char>(edx50))) 
                                goto addr_40276a_101;
                            edi160 = *reinterpret_cast<uint32_t*>(ebp202 - 0x1c0);
                        }
                        if (*reinterpret_cast<signed char*>(ebp203 - 0x18e)) {
                            esi181 = reinterpret_cast<struct s98*>(&esi181->pad4);
                        } else {
                            if (!*reinterpret_cast<signed char*>(ebp204 - 0x196)) {
                                ebx153->f0 = *reinterpret_cast<unsigned char*>(&eax197);
                                ebx153 = reinterpret_cast<struct s98*>(&ebx153->pad4);
                            } else {
                                *reinterpret_cast<unsigned char*>(ebp205 - 0x1c4) = *reinterpret_cast<unsigned char*>(&eax197);
                                ecx41 = g40b490;
                                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx41 + *reinterpret_cast<unsigned char*>(&eax197) * 2) + 1) & 0x80) {
                                    *reinterpret_cast<int32_t*>(ebp206 - 0x184) = *reinterpret_cast<int32_t*>(ebp207 - 0x184) + 1;
                                    edx50 = ebp208->f8;
                                    eax209 = fun_401da6(ecx41, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5, a6);
                                    esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) + 4);
                                    *reinterpret_cast<signed char*>(ebp210 - 0x1c3) = *reinterpret_cast<signed char*>(&eax209);
                                }
                                v211 = g40b4a0;
                                fun_404509(reinterpret_cast<int32_t>(ebp212) + 0xfffffe34, reinterpret_cast<int32_t>(ebp213) + 0xfffffe3c, v211, 0x409160, 0x1cc, v19);
                                esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) - 4 - 4 - 4 + 4 + 12);
                                ebx153->f0 = *reinterpret_cast<unsigned char*>(ebp214 - 0x1cc);
                                ebx153 = reinterpret_cast<struct s98*>(reinterpret_cast<int32_t>(&ebx153->pad4) + 1);
                            }
                            *reinterpret_cast<struct s98**>(ebp215 - 0x1b0) = ebx153;
                        }
                    }
                    addr_402780_114:
                    if (esi181 == ebx153) 
                        goto addr_402bdc_7;
                    if (!*reinterpret_cast<signed char*>(ebp216 - 0x18e) && (*reinterpret_cast<int32_t*>(ebp217 - 0x1b8) = *reinterpret_cast<int32_t*>(ebp218 - 0x1b8) + 1, *reinterpret_cast<int32_t*>(ebp219 - 0x1c0) != 99)) {
                        if (!*reinterpret_cast<signed char*>(ebp220 - 0x196)) {
                            **reinterpret_cast<unsigned char**>(ebp221 - 0x1b0) = 0;
                            goto addr_402b38_118;
                        } else {
                            **reinterpret_cast<unsigned char**>(ebp221 - 0x1b0) = reinterpret_cast<unsigned char>(0);
                            goto addr_402b38_118;
                        }
                    }
                    addr_40276a_101:
                    *reinterpret_cast<int32_t*>(ebp222 - 0x184) = *reinterpret_cast<int32_t*>(ebp223 - 0x184) - 1;
                    if (eax197 != 0xffffffff) {
                        v224 = ebp225->f8;
                        fun_404474(ecx41, eax197, v224, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5);
                        ecx41 = v224;
                        esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) - 4 - 4 + 4 + 4 + 4);
                        goto addr_402780_114;
                    }
                    addr_4023bc_90:
                    eax226 = eax178 - 1 - 1;
                    if (!eax226) {
                        addr_4027cf_88:
                        ebx227 = *reinterpret_cast<void***>(ebp228 - 0x194);
                        if (reinterpret_cast<int1_t>(ebx227 == 45)) {
                            *reinterpret_cast<signed char*>(ebp229 - 0x197) = 1;
                            goto addr_4027e8_122;
                        }
                    } else {
                        eax230 = eax226 - 3;
                        if (!eax230) {
                            addr_402106_124:
                            ebx227 = *reinterpret_cast<void***>(ebp231 - 0x194);
                            if (reinterpret_cast<int1_t>(ebx227 == 45)) {
                                *reinterpret_cast<signed char*>(ebp232 - 0x197) = 1;
                                goto addr_40267d_126;
                            }
                        } else {
                            if (!(eax230 - 3)) {
                                if (*reinterpret_cast<signed char*>(ebp233 - 0x185) > 0) {
                                    *reinterpret_cast<signed char*>(ebp234 - 0x196) = 1;
                                }
                                edi235 = &ebp236->f12->f1;
                                ebp237->f12 = edi235;
                                *reinterpret_cast<unsigned char**>(ebp238 - 0x1d0) = edi235;
                                if (*edi235 == 94) {
                                    ++edi235;
                                    *reinterpret_cast<unsigned char**>(ebp239 - 0x1d0) = edi235;
                                    *reinterpret_cast<signed char*>(ebp240 - 0x1a1) = -1;
                                }
                                ebx56 = *reinterpret_cast<void***>(ebp241 - 0x1bc);
                                if (!ebx56) {
                                    *reinterpret_cast<uint32_t*>(ebp242 - 4) = *reinterpret_cast<uint32_t*>(ebp243 - 4) & reinterpret_cast<unsigned char>(ebx56);
                                    fun_403d30(ecx41, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
                                    esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) + 4 - 4 + 4);
                                    *reinterpret_cast<void***>(ebp244 - 24) = esp20;
                                    ebx56 = esp20;
                                    *reinterpret_cast<void***>(ebp245 - 0x1bc) = ebx56;
                                    *reinterpret_cast<uint32_t*>(ebp246 - 4) = 0xffffffff;
                                }
                                fun_4045e0(ecx41, ebx56, 0, 32, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5, a6);
                                esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) - 4 - 4 - 4 + 4 + 12);
                                if (*reinterpret_cast<int32_t*>(ebp247 - 0x1c0) != 0x7b) 
                                    goto addr_40252e_12;
                                if (*edi235 != 93) 
                                    goto addr_40252e_12;
                                *reinterpret_cast<unsigned char*>(&edx50) = 93;
                                ++edi235;
                                *reinterpret_cast<signed char*>(&v19 + 3) = 32;
                                addr_402534_13:
                                while (al53 = *edi235, al53 != 93) {
                                    ++edi235;
                                    if (al53 != 45) 
                                        goto addr_402515_14;
                                    if (!*reinterpret_cast<unsigned char*>(&edx50)) 
                                        goto addr_402515_14;
                                    *reinterpret_cast<unsigned char*>(&ecx41) = *edi235;
                                    if (*reinterpret_cast<unsigned char*>(&ecx41) == 93) 
                                        goto addr_402515_14;
                                    ++edi235;
                                    if (*reinterpret_cast<unsigned char*>(&edx50) >= *reinterpret_cast<unsigned char*>(&ecx41)) {
                                        al248 = *reinterpret_cast<unsigned char*>(&edx50);
                                        *reinterpret_cast<unsigned char*>(&edx50) = *reinterpret_cast<unsigned char*>(&ecx41);
                                    } else {
                                        al248 = *reinterpret_cast<unsigned char*>(&ecx41);
                                    }
                                    if (*reinterpret_cast<unsigned char*>(&edx50) <= al248) {
                                        esi249 = *reinterpret_cast<unsigned char*>(&edx50);
                                        *reinterpret_cast<uint32_t*>(ebp250 - 0x1d4) = reinterpret_cast<unsigned char>(al248 - *reinterpret_cast<unsigned char*>(&edx50)) + 1;
                                        do {
                                            eax251 = reinterpret_cast<unsigned char*>((esi249 >> 3) + reinterpret_cast<unsigned char>(ebx56));
                                            ecx41 = reinterpret_cast<void**>(esi249 & 7);
                                            *eax251 = reinterpret_cast<unsigned char>(*eax251 | reinterpret_cast<unsigned char>(1 << *reinterpret_cast<unsigned char*>(&ecx41)));
                                            ++esi249;
                                            *reinterpret_cast<int32_t*>(ebp252 - 0x1d4) = *reinterpret_cast<int32_t*>(ebp253 - 0x1d4) - 1;
                                        } while (*reinterpret_cast<int32_t*>(ebp254 - 0x1d4));
                                    }
                                    *reinterpret_cast<unsigned char*>(&edx50) = 0;
                                }
                                if (!al53) 
                                    goto addr_402bdc_7;
                                ebx153 = *reinterpret_cast<struct s98**>(ebp255 - 0x1b0);
                                if (*reinterpret_cast<int32_t*>(ebp256 - 0x1c0) == 0x7b) {
                                    ebp257->f12 = edi235;
                                }
                                edi160 = *reinterpret_cast<uint32_t*>(ebp258 - 0x1c0);
                                goto addr_40255a_97;
                            } else {
                                addr_4023d2_151:
                                if (static_cast<uint32_t>(esi84->f0) == *reinterpret_cast<uint32_t*>(ebp259 - 0x194)) 
                                    goto addr_4023e9_152; else 
                                    goto addr_4023dd_11;
                            }
                        }
                    }
                    if (!reinterpret_cast<int1_t>(ebx227 == 43)) {
                        addr_402813_154:
                        if (!*reinterpret_cast<int32_t*>(ebp260 - 0x1c8)) {
                            if (!*reinterpret_cast<signed char*>(ebp261 - 0x17d)) {
                                do {
                                    if (edi160 == 0x78 || edi160 == 0x70) {
                                        less_or_equal262 = reinterpret_cast<signed char>(g40b4a0) <= reinterpret_cast<signed char>(1);
                                        if (less_or_equal262) {
                                            eax263 = g40b490;
                                            eax264 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax263 + reinterpret_cast<unsigned char>(ebx227) * 2))) & 0x80;
                                        } else {
                                            eax264 = fun_404318(ecx41, ebx227, 0x80, 0x409160, 0x1cc, v19);
                                            ecx41 = reinterpret_cast<void**>(0x80);
                                            esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) - 4 - 4 + 4 + 4 + 4);
                                        }
                                        if (!eax264) 
                                            goto addr_402a4f_162;
                                        *reinterpret_cast<int32_t*>(ebp265 - 0x1a0) = *reinterpret_cast<int32_t*>(ebp266 - 0x1a0) << 4;
                                        eax267 = fun_401d74(ecx41, 0x409160, 0x1cc, v19);
                                        esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) + 4);
                                        ebx227 = eax267;
                                    } else {
                                        less_or_equal268 = reinterpret_cast<signed char>(g40b4a0) <= reinterpret_cast<signed char>(1);
                                        if (less_or_equal268) {
                                            eax269 = g40b490;
                                            eax270 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax269 + reinterpret_cast<unsigned char>(ebx227) * 2))) & 4;
                                        } else {
                                            eax270 = fun_404318(ecx41, ebx227, 4, 0x409160, 0x1cc, v19);
                                            ecx41 = reinterpret_cast<void**>(4);
                                            esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) - 4 - 4 + 4 + 4 + 4);
                                        }
                                        if (!eax270) 
                                            goto addr_402a4f_162;
                                        if (edi160 != 0x6f) 
                                            goto addr_402a07_169; else 
                                            goto addr_4029f9_170;
                                    }
                                    addr_402a55_171:
                                    if (*reinterpret_cast<signed char*>(ebp271 - 0x17d)) {
                                        *reinterpret_cast<int32_t*>(ebp272 - 0x184) = *reinterpret_cast<int32_t*>(ebp273 - 0x184) - 1;
                                        if (ebx227 != 0xffffffff) {
                                            v274 = ebp275->f8;
                                            fun_404474(ecx41, ebx227, v274, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5);
                                            ecx41 = v274;
                                            esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) - 4 - 4 + 4 + 4 + 4);
                                            continue;
                                        }
                                    } else {
                                        *reinterpret_cast<int32_t*>(ebp276 - 0x19c) = *reinterpret_cast<int32_t*>(ebp277 - 0x19c) + 1;
                                        *reinterpret_cast<uint32_t*>(ebp278 - 0x1a0) = *reinterpret_cast<int32_t*>(ebp279 - 0x1a0) + reinterpret_cast<unsigned char>(ebx227) - 48;
                                        if (!*reinterpret_cast<int32_t*>(ebp280 - 0x1b4) || (*reinterpret_cast<int32_t*>(ebp281 - 0x18c) = *reinterpret_cast<int32_t*>(ebp282 - 0x18c) - 1, !!*reinterpret_cast<int32_t*>(ebp283 - 0x18c))) {
                                            *reinterpret_cast<int32_t*>(ebp284 - 0x184) = *reinterpret_cast<int32_t*>(ebp285 - 0x184) + 1;
                                            edx50 = ebp286->f8;
                                            eax287 = fun_401da6(ecx41, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5, a6);
                                            esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) + 4);
                                            ebx227 = eax287;
                                            continue;
                                        } else {
                                            *reinterpret_cast<signed char*>(ebp288 - 0x17d) = 1;
                                            continue;
                                        }
                                    }
                                    addr_402a07_169:
                                    *reinterpret_cast<int32_t*>(ebp289 - 0x1a0) = *reinterpret_cast<int32_t*>(ebp290 - 0x1a0) + *reinterpret_cast<int32_t*>(ebp290 - 0x1a0) * 4 << 1;
                                    goto addr_402a55_171;
                                    addr_4029f9_170:
                                    if (reinterpret_cast<signed char>(ebx227) >= reinterpret_cast<signed char>(56)) {
                                        addr_402a4f_162:
                                        *reinterpret_cast<signed char*>(ebp291 - 0x17d) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp292 - 0x17d) + 1);
                                        goto addr_402a55_171;
                                    } else {
                                        *reinterpret_cast<int32_t*>(ebp293 - 0x1a0) = *reinterpret_cast<int32_t*>(ebp294 - 0x1a0) << 3;
                                        goto addr_402a55_171;
                                    }
                                } while (!*reinterpret_cast<signed char*>(ebp295 - 0x17d));
                                *reinterpret_cast<void***>(ebp296 - 0x194) = ebx227;
                            }
                            if (*reinterpret_cast<signed char*>(ebp297 - 0x197)) {
                                *reinterpret_cast<int32_t*>(ebp298 - 0x1a0) = -*reinterpret_cast<int32_t*>(ebp299 - 0x1a0);
                            }
                        } else {
                            if (!*reinterpret_cast<signed char*>(ebp300 - 0x17d)) {
                                do {
                                    if (edi160 == 0x78 || edi160 == 0x70) {
                                        less_or_equal301 = reinterpret_cast<signed char>(g40b4a0) <= reinterpret_cast<signed char>(1);
                                        if (less_or_equal301) {
                                            eax302 = g40b490;
                                            eax303 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax302 + reinterpret_cast<unsigned char>(ebx227) * 2))) & 0x80;
                                        } else {
                                            eax303 = fun_404318(ecx41, ebx227, 0x80, 0x409160, 0x1cc, v19);
                                            ecx41 = reinterpret_cast<void**>(0x80);
                                            esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) - 4 - 4 + 4 + 4 + 4);
                                        }
                                        if (!eax303) 
                                            goto addr_402908_189;
                                        ecx41 = *reinterpret_cast<void***>(ebp304 - 0x1a8);
                                        __asm__("shld ecx, eax, 0x4");
                                        *reinterpret_cast<int32_t*>(ebp305 - 0x1ac) = *reinterpret_cast<int32_t*>(ebp306 - 0x1ac) << 4;
                                        *reinterpret_cast<void***>(ebp307 - 0x1a8) = ecx41;
                                        eax308 = fun_401d74(ecx41, 0x409160, 0x1cc, v19);
                                        esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) + 4);
                                        ebx227 = eax308;
                                    } else {
                                        less_or_equal309 = reinterpret_cast<signed char>(g40b4a0) <= reinterpret_cast<signed char>(1);
                                        if (less_or_equal309) {
                                            eax310 = g40b490;
                                            eax311 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax310 + reinterpret_cast<unsigned char>(ebx227) * 2))) & 4;
                                        } else {
                                            eax311 = fun_404318(ecx41, ebx227, 4, 0x409160, 0x1cc, v19);
                                            ecx41 = reinterpret_cast<void**>(4);
                                            esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) - 4 - 4 + 4 + 4 + 4);
                                        }
                                        if (!eax311) 
                                            goto addr_402908_189;
                                        if (edi160 != 0x6f) 
                                            goto addr_402898_196; else 
                                            goto addr_40286e_197;
                                    }
                                    addr_40290e_198:
                                    if (*reinterpret_cast<signed char*>(ebp312 - 0x17d)) {
                                        *reinterpret_cast<int32_t*>(ebp313 - 0x184) = *reinterpret_cast<int32_t*>(ebp314 - 0x184) - 1;
                                        if (ebx227 != 0xffffffff) {
                                            v315 = ebp316->f8;
                                            fun_404474(ecx41, ebx227, v315, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5);
                                            ecx41 = v315;
                                            esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) - 4 - 4 + 4 + 4 + 4);
                                            continue;
                                        }
                                    } else {
                                        *reinterpret_cast<int32_t*>(ebp317 - 0x19c) = *reinterpret_cast<int32_t*>(ebp318 - 0x19c) + 1;
                                        __asm__("cdq ");
                                        tmp32_319 = *reinterpret_cast<int32_t*>(ebp320 - 0x1ac) + reinterpret_cast<uint32_t>(ebx227 + 0xffffffd0);
                                        cf321 = reinterpret_cast<uint1_t>(tmp32_319 < *reinterpret_cast<uint32_t*>(ebp322 - 0x1ac));
                                        *reinterpret_cast<uint32_t*>(ebp323 - 0x1ac) = tmp32_319;
                                        *reinterpret_cast<uint32_t*>(ebp324 - 0x1a8) = *reinterpret_cast<int32_t*>(ebp325 - 0x1a8) + reinterpret_cast<unsigned char>(edx50) + cf321;
                                        if (!*reinterpret_cast<int32_t*>(ebp326 - 0x1b4) || (*reinterpret_cast<int32_t*>(ebp327 - 0x18c) = *reinterpret_cast<int32_t*>(ebp328 - 0x18c) - 1, !!*reinterpret_cast<int32_t*>(ebp329 - 0x18c))) {
                                            *reinterpret_cast<int32_t*>(ebp330 - 0x184) = *reinterpret_cast<int32_t*>(ebp331 - 0x184) + 1;
                                            edx50 = ebp332->f8;
                                            eax333 = fun_401da6(ecx41, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5, a6);
                                            esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) + 4);
                                            ebx227 = eax333;
                                            continue;
                                        } else {
                                            *reinterpret_cast<signed char*>(ebp334 - 0x17d) = 1;
                                            continue;
                                        }
                                    }
                                    addr_402898_196:
                                    v335 = *reinterpret_cast<uint32_t*>(ebp336 - 0x1a8);
                                    v337 = *reinterpret_cast<int32_t*>(ebp338 - 0x1ac);
                                    eax339 = fun_404730(ecx41, v337, v335, 10, 0, 0x409160, 0x1cc, v19);
                                    esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) - 4 - 4 - 4 - 4 + 16 + 4);
                                    *reinterpret_cast<int32_t*>(ebp340 - 0x1ac) = eax339;
                                    *reinterpret_cast<void***>(ebp341 - 0x1a8) = edx50;
                                    goto addr_40290e_198;
                                    addr_40286e_197:
                                    if (reinterpret_cast<signed char>(ebx227) >= reinterpret_cast<signed char>(56)) {
                                        addr_402908_189:
                                        *reinterpret_cast<signed char*>(ebp342 - 0x17d) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp343 - 0x17d) + 1);
                                        goto addr_40290e_198;
                                    } else {
                                        ecx41 = *reinterpret_cast<void***>(ebp344 - 0x1a8);
                                        __asm__("shld ecx, eax, 0x3");
                                        *reinterpret_cast<int32_t*>(ebp345 - 0x1ac) = *reinterpret_cast<int32_t*>(ebp346 - 0x1ac) << 3;
                                        *reinterpret_cast<void***>(ebp347 - 0x1a8) = ecx41;
                                        goto addr_40290e_198;
                                    }
                                } while (!*reinterpret_cast<signed char*>(ebp348 - 0x17d));
                                *reinterpret_cast<void***>(ebp349 - 0x194) = ebx227;
                            }
                            if (*reinterpret_cast<signed char*>(ebp350 - 0x197)) {
                                ecx41 = reinterpret_cast<void**>(-(*reinterpret_cast<int32_t*>(ebp351 - 0x1a8) + reinterpret_cast<uint1_t>(!!*reinterpret_cast<int32_t*>(ebp352 - 0x1ac))));
                                *reinterpret_cast<int32_t*>(ebp353 - 0x1ac) = -*reinterpret_cast<int32_t*>(ebp352 - 0x1ac);
                                *reinterpret_cast<void***>(ebp354 - 0x1a8) = ecx41;
                            }
                        }
                    } else {
                        addr_4027e8_122:
                        *reinterpret_cast<int32_t*>(ebp355 - 0x18c) = *reinterpret_cast<int32_t*>(ebp356 - 0x18c) - 1;
                        if (*reinterpret_cast<int32_t*>(ebp357 - 0x18c) || !ecx41) {
                            *reinterpret_cast<int32_t*>(ebp358 - 0x184) = *reinterpret_cast<int32_t*>(ebp359 - 0x184) + 1;
                            edx50 = ebp360->f8;
                            eax361 = fun_401da6(ecx41, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5, a6);
                            esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) + 4);
                            ebx227 = eax361;
                            goto addr_40280d_210;
                        } else {
                            *reinterpret_cast<signed char*>(ebp362 - 0x17d) = 1;
                            goto addr_402813_154;
                        }
                    }
                    if (!1) {
                        *reinterpret_cast<uint32_t*>(ebp363 - 0x19c) = 0;
                    }
                    if (!*reinterpret_cast<int32_t*>(ebp364 - 0x19c)) 
                        goto addr_402bdc_7;
                    if (*reinterpret_cast<signed char*>(ebp365 - 0x18e)) {
                        addr_402b38_118:
                        *reinterpret_cast<signed char*>(ebp366 - 0x195) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp367 - 0x195) + 1);
                        ebp368->f12 = ebp369->f12 + 1;
                        esi79 = ebp370->f12;
                        goto addr_402bbd_71;
                    } else {
                        *reinterpret_cast<int32_t*>(ebp371 - 0x1b8) = *reinterpret_cast<int32_t*>(ebp372 - 0x1b8) + 1;
                        ebx153 = *reinterpret_cast<struct s98**>(ebp373 - 0x1b0);
                        eax374 = *reinterpret_cast<unsigned char*>(ebp375 - 0x1a0);
                    }
                    if (!*reinterpret_cast<int32_t*>(ebp376 - 0x1c8)) {
                        if (!*reinterpret_cast<signed char*>(ebp377 - 0x18d)) {
                            ebx153->f0 = eax374;
                            goto addr_402b38_118;
                        } else {
                            ebx153->f0 = eax374;
                            goto addr_402b38_118;
                        }
                    } else {
                        ebx153->f0 = *reinterpret_cast<unsigned char*>(ebp378 - 0x1ac);
                        ebx153->f4 = *reinterpret_cast<int32_t*>(ebp379 - 0x1a8);
                        goto addr_402b38_118;
                    }
                    addr_40280d_210:
                    *reinterpret_cast<void***>(ebp380 - 0x194) = ebx227;
                    goto addr_402813_154;
                    if (!reinterpret_cast<int1_t>(ebx227 == 43)) {
                        addr_4026a8_223:
                        if (!reinterpret_cast<int1_t>(ebx227 == 48)) 
                            goto addr_402813_154;
                    } else {
                        addr_40267d_126:
                        *reinterpret_cast<int32_t*>(ebp381 - 0x18c) = *reinterpret_cast<int32_t*>(ebp382 - 0x18c) - 1;
                        if (*reinterpret_cast<int32_t*>(ebp383 - 0x18c) || !ecx41) {
                            *reinterpret_cast<int32_t*>(ebp384 - 0x184) = *reinterpret_cast<int32_t*>(ebp385 - 0x184) + 1;
                            edx50 = ebp386->f8;
                            eax387 = fun_401da6(ecx41, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5, a6);
                            esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) + 4);
                            ebx227 = eax387;
                            *reinterpret_cast<void***>(ebp388 - 0x194) = ebx227;
                            goto addr_4026a8_223;
                        } else {
                            *reinterpret_cast<signed char*>(ebp389 - 0x17d) = 1;
                            goto addr_4026a8_223;
                        }
                    }
                    *reinterpret_cast<int32_t*>(ebp390 - 0x184) = *reinterpret_cast<int32_t*>(ebp391 - 0x184) + 1;
                    edx50 = ebp392->f8;
                    eax393 = fun_401da6(ecx41, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5, a6);
                    esp394 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp20 - 4) + 4);
                    ebx227 = eax393;
                    *reinterpret_cast<void***>(ebp395 - 0x194) = ebx227;
                    if (*reinterpret_cast<signed char*>(&ebx227) == 0x78 || *reinterpret_cast<signed char*>(&ebx227) == 88) {
                        *reinterpret_cast<int32_t*>(ebp396 - 0x184) = *reinterpret_cast<int32_t*>(ebp397 - 0x184) + 1;
                        edx50 = ebp398->f8;
                        eax399 = fun_401da6(ecx41, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5, a6);
                        ebx227 = eax399;
                        *reinterpret_cast<void***>(ebp400 - 0x194) = ebx227;
                        if (*reinterpret_cast<int32_t*>(ebp401 - 0x1b4) && (*reinterpret_cast<int32_t*>(ebp402 - 0x18c) = *reinterpret_cast<int32_t*>(ebp403 - 0x18c) - 2, *reinterpret_cast<int32_t*>(ebp404 - 0x18c) < 1)) {
                            *reinterpret_cast<signed char*>(ebp405 - 0x17d) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp406 - 0x17d) + 1);
                        }
                        esp407 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(esp394) - 4 + 4 - 4);
                        v408 = 0x78;
                    } else {
                        *reinterpret_cast<int32_t*>(ebp409 - 0x19c) = 1;
                        if (edi160 == 0x78) {
                            *reinterpret_cast<int32_t*>(ebp410 - 0x184) = *reinterpret_cast<int32_t*>(ebp411 - 0x184) - 1;
                            if (ebx227 != 0xffffffff) {
                                v412 = ebp413->f8;
                                fun_404474(ecx41, ebx227, v412, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5);
                                ecx41 = v412;
                                esp394 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp394) - 4 - 4 - 4 + 4 + 4 + 4);
                            }
                            ebx227 = reinterpret_cast<void**>(48);
                            esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp394) - 4 + 4);
                            goto addr_40280d_210;
                        } else {
                            if (*reinterpret_cast<int32_t*>(ebp414 - 0x1b4) && (*reinterpret_cast<int32_t*>(ebp415 - 0x18c) = *reinterpret_cast<int32_t*>(ebp416 - 0x18c) - 1, !*reinterpret_cast<int32_t*>(ebp417 - 0x18c))) {
                                *reinterpret_cast<signed char*>(ebp418 - 0x17d) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp419 - 0x17d) + 1);
                            }
                            esp407 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(esp394) - 4);
                            v408 = 0x6f;
                        }
                    }
                    edi160 = v408;
                    esp20 = reinterpret_cast<void**>(esp407 + 1);
                    goto addr_402813_154;
                    addr_4023e9_152:
                    *reinterpret_cast<signed char*>(ebp420 - 0x195) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp421 - 0x195) - 1);
                    if (!*reinterpret_cast<signed char*>(ebp422 - 0x18e)) {
                        ebp423->f16 = *reinterpret_cast<int32_t*>(ebp424 - 0x1dc);
                        goto addr_402b38_118;
                    }
                    addr_40237f_93:
                    if (!ecx41) {
                        *reinterpret_cast<int32_t*>(ebp425 - 0x1b4) = 1;
                        *reinterpret_cast<int32_t*>(ebp426 - 0x18c) = *reinterpret_cast<int32_t*>(ebp427 - 0x18c) + 1;
                        goto addr_402393_95;
                    }
                    addr_4020c9_94:
                    if (edi160 == 100) 
                        goto addr_4027cf_88;
                    if (reinterpret_cast<int32_t>(edi160) <= reinterpret_cast<int32_t>(100)) 
                        goto addr_4023d2_151;
                    if (reinterpret_cast<int32_t>(edi160) > reinterpret_cast<int32_t>(0x67)) 
                        goto addr_4020dd_242;
                    esi70 = reinterpret_cast<void***>(ebp428 - 0x17c);
                    ebx63 = *reinterpret_cast<void***>(ebp429 - 0x194);
                    if (!reinterpret_cast<int1_t>(ebx63 == 45)) {
                        if (!reinterpret_cast<int1_t>(ebx63 == 43)) {
                            edi71 = ebp430->f8;
                        } else {
                            addr_402145_246:
                            *reinterpret_cast<int32_t*>(ebp431 - 0x18c) = *reinterpret_cast<int32_t*>(ebp432 - 0x18c) - 1;
                            *reinterpret_cast<int32_t*>(ebp433 - 0x184) = *reinterpret_cast<int32_t*>(ebp434 - 0x184) + 1;
                            edi71 = ebp435->f8;
                            edx50 = edi71;
                            eax436 = fun_401da6(ecx41, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5, a6);
                            esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) + 4);
                            ebx63 = eax436;
                            *reinterpret_cast<void***>(ebp437 - 0x194) = ebx63;
                        }
                        if (!*reinterpret_cast<int32_t*>(ebp438 - 0x1b4) || *reinterpret_cast<int32_t*>(ebp439 - 0x18c) > 0x15d) {
                            *reinterpret_cast<int32_t*>(ebp440 - 0x18c) = 0x15d;
                        }
                        while (1) {
                            less_or_equal441 = reinterpret_cast<signed char>(g40b4a0) <= reinterpret_cast<signed char>(1);
                            if (less_or_equal441) {
                                eax442 = g40b490;
                                eax443 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax442 + reinterpret_cast<unsigned char>(ebx63) * 2))) & 4;
                            } else {
                                eax443 = fun_404318(ecx41, ebx63, 4, 0x409160, 0x1cc, v19);
                                ecx41 = reinterpret_cast<void**>(4);
                                esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) - 4 - 4 + 4 + 4 + 4);
                            }
                            if (!eax443) 
                                break;
                            eax444 = *reinterpret_cast<int32_t*>(ebp445 - 0x18c);
                            *reinterpret_cast<int32_t*>(ebp446 - 0x18c) = *reinterpret_cast<int32_t*>(ebp447 - 0x18c) - 1;
                            if (!eax444) 
                                break;
                            *reinterpret_cast<int32_t*>(ebp448 - 0x19c) = *reinterpret_cast<int32_t*>(ebp449 - 0x19c) + 1;
                            *esi70 = ebx63;
                            ++esi70;
                            *reinterpret_cast<int32_t*>(ebp450 - 0x184) = *reinterpret_cast<int32_t*>(ebp451 - 0x184) + 1;
                            edx50 = edi71;
                            eax452 = fun_401da6(ecx41, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5, a6);
                            esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) + 4);
                            ebx63 = eax452;
                            *reinterpret_cast<void***>(ebp453 - 0x194) = ebx63;
                        }
                        zf454 = g40b4a4 == ebx63;
                        if (zf454 && (eax455 = *reinterpret_cast<int32_t*>(ebp456 - 0x18c), *reinterpret_cast<int32_t*>(ebp457 - 0x18c) = *reinterpret_cast<int32_t*>(ebp458 - 0x18c) - 1, !!eax455)) {
                            *reinterpret_cast<int32_t*>(ebp459 - 0x184) = *reinterpret_cast<int32_t*>(ebp460 - 0x184) + 1;
                            edx50 = edi71;
                            eax461 = fun_401da6(ecx41, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5, a6);
                            esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) + 4);
                            ebx63 = eax461;
                            al462 = g40b4a4;
                            *esi70 = al462;
                            ++esi70;
                            while (1) {
                                *reinterpret_cast<void***>(ebp463 - 0x194) = ebx63;
                                less_or_equal464 = reinterpret_cast<signed char>(g40b4a0) <= reinterpret_cast<signed char>(1);
                                if (less_or_equal464) {
                                    eax465 = g40b490;
                                    eax466 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax465 + reinterpret_cast<unsigned char>(ebx63) * 2))) & 4;
                                } else {
                                    eax466 = fun_404318(ecx41, ebx63, 4, 0x409160, 0x1cc, v19);
                                    ecx41 = reinterpret_cast<void**>(4);
                                    esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) - 4 - 4 + 4 + 4 + 4);
                                }
                                if (!eax466) 
                                    break;
                                eax467 = *reinterpret_cast<int32_t*>(ebp468 - 0x18c);
                                *reinterpret_cast<int32_t*>(ebp469 - 0x18c) = *reinterpret_cast<int32_t*>(ebp470 - 0x18c) - 1;
                                if (!eax467) 
                                    break;
                                *reinterpret_cast<int32_t*>(ebp471 - 0x19c) = *reinterpret_cast<int32_t*>(ebp472 - 0x19c) + 1;
                                *esi70 = ebx63;
                                ++esi70;
                                *reinterpret_cast<int32_t*>(ebp473 - 0x184) = *reinterpret_cast<int32_t*>(ebp474 - 0x184) + 1;
                                edx50 = edi71;
                                eax475 = fun_401da6(ecx41, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5, a6);
                                esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) + 4);
                                ebx63 = eax475;
                            }
                        }
                        if (!*reinterpret_cast<int32_t*>(ebp476 - 0x19c)) 
                            goto addr_402324_20;
                        if (ebx63 == 0x65) 
                            goto addr_40227b_265;
                        if (!reinterpret_cast<int1_t>(ebx63 == 69)) 
                            goto addr_402324_20;
                        addr_40227b_265:
                        eax477 = *reinterpret_cast<int32_t*>(ebp478 - 0x18c);
                        *reinterpret_cast<int32_t*>(ebp479 - 0x18c) = *reinterpret_cast<int32_t*>(ebp480 - 0x18c) - 1;
                        if (eax477) 
                            break;
                        addr_402324_20:
                        *reinterpret_cast<int32_t*>(ebp481 - 0x184) = *reinterpret_cast<int32_t*>(ebp482 - 0x184) - 1;
                        if (ebx63 != 0xffffffff) {
                            fun_404474(ecx41, ebx63, edi71, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5);
                            ecx41 = edi71;
                            esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) - 4 - 4 + 4 + 4 + 4);
                        }
                        if (!*reinterpret_cast<int32_t*>(ebp483 - 0x19c)) 
                            goto addr_402bdc_7;
                        if (!*reinterpret_cast<signed char*>(ebp484 - 0x18e)) {
                            *reinterpret_cast<int32_t*>(ebp485 - 0x1b8) = *reinterpret_cast<int32_t*>(ebp486 - 0x1b8) + 1;
                            *esi70 = reinterpret_cast<void**>(0);
                            v487 = *reinterpret_cast<int32_t*>(ebp488 - 0x1b0);
                            v489 = *reinterpret_cast<signed char*>(ebp490 - 0x18d) - 1;
                            g40b350(ecx41, v489, v487, ebp491 - 0x17c, 0x409160, 0x1cc, v19);
                            esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) - 4 - 4 - 4 + 4 + 12);
                            goto addr_402b38_118;
                        }
                    } else {
                        *reinterpret_cast<void***>(ebp492 - 0x17c) = ebx63;
                        esi70 = reinterpret_cast<void***>(ebp493 - 0x17b);
                        goto addr_402145_246;
                    }
                    addr_4020dd_242:
                    if (edi160 == 0x69) {
                        edi160 = 100;
                        esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) + 4);
                        goto addr_402106_124;
                    } else {
                        if (edi160 != 0x6e) 
                            goto addr_4023d2_151;
                        eax374 = *reinterpret_cast<unsigned char*>(ebp494 - 0x184);
                        if (*reinterpret_cast<signed char*>(ebp495 - 0x18e)) {
                            goto addr_402b38_118;
                        }
                    }
                    addr_401ffd_65:
                    eax496 = ebp497->f16;
                    *reinterpret_cast<int32_t*>(ebp498 - 0x1dc) = eax496;
                    eax499 = eax496 + 4;
                    ebp500->f16 = eax499;
                    ebx153 = *reinterpret_cast<struct s98**>(eax499 - 4);
                    *reinterpret_cast<struct s98**>(ebp501 - 0x1b0) = ebx153;
                    goto addr_40201d_76;
                    do {
                        addr_401e68_69:
                        ebp502->f12 = ebp503->f12 + 1;
                        v504 = reinterpret_cast<void**>(static_cast<uint32_t>(*ebp505->f12));
                        eax506 = fun_4044e0(ecx41, v504, 0x409160, 0x1cc, v19);
                        ecx41 = v504;
                        esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) - 4 + 4 + 4);
                    } while (eax506);
                    goto addr_401dff_2;
                    addr_401e5d_70:
                    v507 = ebp508->f8;
                    fun_404474(ecx41, eax141, v507, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5);
                    ecx41 = v507;
                    esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) - 4 - 4 + 4 + 4 + 4);
                    goto addr_401e68_69;
                }
                *esi70 = reinterpret_cast<void**>(0x65);
                ++esi70;
                *reinterpret_cast<int32_t*>(ebp509 - 0x184) = *reinterpret_cast<int32_t*>(ebp510 - 0x184) + 1;
                edx50 = edi71;
                eax511 = fun_401da6(ecx41, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5, a6);
                esp20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) + 4);
                ebx63 = eax511;
                *reinterpret_cast<void***>(ebp512 - 0x194) = ebx63;
                if (!reinterpret_cast<int1_t>(ebx63 == 45)) {
                    if (reinterpret_cast<int1_t>(ebx63 == 43)) 
                        goto addr_4022b7_24;
                } else {
                    *esi70 = eax511;
                    ++esi70;
                    goto addr_4022b7_24;
                }
            }
        }
    }
    addr_402b90_74:
    if (eax149 != 0xffffffff) {
        v513 = ebp514->f8;
        fun_404474(ecx41, eax149, v513, 0x409160, 0x1cc, v19, a1, a2, a3, a4, a5);
        ecx41 = v513;
        goto addr_402ba0_4;
    }
}

int32_t fun_40136e(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** v12;
    uint32_t eax13;
    int32_t eax14;
    void*** edi15;
    void** edi16;
    void** ebx17;
    void** esi18;
    void** eax19;
    void** edi20;
    void** eax21;

    v12 = *reinterpret_cast<void***>(a1 + 16);
    eax13 = fun_403df1(v12);
    if (!eax13) 
        goto addr_4013f2_2;
    if (!reinterpret_cast<int1_t>(a1 == 0x40b0e8)) {
        if (!reinterpret_cast<int1_t>(a1 == 0x40b108)) {
            addr_4013f2_2:
            return 0;
        } else {
            eax14 = 1;
        }
    } else {
        eax14 = 0;
    }
    ++g40ba3c;
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) & 0x10c)) {
        edi15 = reinterpret_cast<void***>(eax14 * 4 + 0x40ba34);
        if (*edi15 || (eax19 = fun_403ddf(v12, 0x1000, edi16, ebx17, esi18, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11), *edi15 = eax19, !!eax19)) {
            edi20 = *edi15;
            *reinterpret_cast<void***>(a1 + 8) = edi20;
            *reinterpret_cast<void***>(a1) = edi20;
            *reinterpret_cast<void***>(a1 + 24) = reinterpret_cast<void**>(0x1000);
            *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(0x1000);
        } else {
            eax21 = a1 + 20;
            *reinterpret_cast<void***>(a1 + 8) = eax21;
            *reinterpret_cast<void***>(a1) = eax21;
            *reinterpret_cast<void***>(a1 + 24) = reinterpret_cast<void**>(2);
            *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(2);
        }
        *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) | 0x1102);
        return 1;
    }
}

void** fun_4013f6(void** ecx, int32_t a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** eax8;

    if (!a2) {
        eax8 = a3;
        if (!(*reinterpret_cast<unsigned char*>(eax8 + 13) & 16)) {
            addr_401430_3:
            return eax8;
        } else {
            eax8 = fun_403e18(ecx, eax8);
        }
    } else {
        if (!(*reinterpret_cast<unsigned char*>(a3 + 13) & 16)) 
            goto addr_401430_3;
        eax8 = fun_403e18(ecx, a3);
        *reinterpret_cast<unsigned char*>(a3 + 13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(a3 + 13) & 0xee);
        *reinterpret_cast<void***>(a3 + 24) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(a3) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(a3 + 8) = reinterpret_cast<void**>(0);
    }
    goto addr_401430_3;
}

uint32_t fun_405318(int32_t ecx) {
    uint32_t v2;
    uint32_t eax3;

    eax3 = fun_4052e6(ecx, __return_address(), v2 & 0xfff7ffff);
    return eax3;
}

void fun_403bd0(void** a1, void** a2, void** a3) {
    void* esp4;
    int32_t* esp5;
    int32_t ebx6;
    int32_t* esp7;
    int32_t esi8;
    int32_t* esp9;
    int32_t edi10;
    int32_t* esp11;

    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4);
    esp5 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp4) - reinterpret_cast<unsigned char>(a2) - 4);
    *esp5 = ebx6;
    esp7 = esp5 - 1;
    *esp7 = esi8;
    esp9 = esp7 - 1;
    *esp9 = edi10;
    esp11 = esp9 - 1;
    *esp11 = reinterpret_cast<int32_t>(__return_address());
    g0 = reinterpret_cast<struct s13*>(reinterpret_cast<int32_t>(esp4) + 16 - 16);
    goto *esp11;
}

int32_t HeapCreate = 0xa0a0;

int32_t HeapDestroy = 0xa092;

int32_t fun_403b7f(void** a1, void** a2, void** a3, void** a4) {
    void** eax5;
    void** eax6;
    int32_t eax7;
    int32_t eax8;
    void** v9;

    eax5 = reinterpret_cast<void**>(0);
    *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>(a1 == 0);
    eax6 = reinterpret_cast<void**>(HeapCreate());
    g40bec0 = eax6;
    if (eax6) {
        eax7 = fun_403b65();
        g40bec4 = eax7;
        if (eax7 != 3 || (eax8 = fun_405d3d(), !!eax8)) {
            goto eax5;
        } else {
            v9 = g40bec0;
            HeapDestroy(0x3f8, v9);
        }
    }
    goto eax5;
}

void** g40ba28 = reinterpret_cast<void**>(0);

void** g40ba7c = reinterpret_cast<void**>(0);

int32_t g40bfe0 = 0;

uint32_t fun_40353b(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** v13;
    void** v14;
    void** ebx15;
    int1_t zf16;
    void** v17;
    void** esi18;
    void** v19;
    void** edi20;
    void** esi21;
    int32_t edi22;
    void** eax23;
    void** v24;
    void** eax25;
    void** edi26;
    void** ecx27;
    void** esi28;
    void** v29;
    void** ebp30;
    void** eax31;
    void** ebp32;
    void** eax33;
    void** v34;
    uint32_t eax35;

    v13 = reinterpret_cast<void**>(__return_address());
    v14 = ebx15;
    zf16 = g40bfec == 0;
    v17 = esi18;
    v19 = edi20;
    if (zf16) {
        fun_4059de(v19, v17, v14);
    }
    esi21 = g40ba28;
    edi22 = 0;
    if (esi21) {
        while (*reinterpret_cast<void***>(esi21)) {
            if (*reinterpret_cast<void***>(esi21) != 61) {
                ++edi22;
            }
            eax23 = fun_404080(ecx, esi21, v19, v17, v14, v13, a2, a3, a4);
            ecx = esi21;
            esi21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi21) + reinterpret_cast<unsigned char>(eax23) + 1);
        }
        v24 = reinterpret_cast<void**>(edi22 * 4 + 4);
        eax25 = fun_403ddf(ecx, v24, v19, v17, v14, v13, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
        edi26 = eax25;
        ecx27 = v24;
        g40ba7c = edi26;
        if (!edi26) 
            goto addr_40358b_9;
    } else {
        goto addr_40358b_9;
    }
    esi28 = g40ba28;
    v29 = ebp30;
    while (*reinterpret_cast<void***>(esi28)) {
        eax31 = fun_404080(ecx27, esi28, v29, v19, v17, v14, v13, a2, a3);
        ebp32 = eax31 + 1;
        ecx27 = esi28;
        if (*reinterpret_cast<void***>(esi28) != 61) {
            eax33 = fun_403ddf(ecx27, ebp32, v29, v19, v17, v14, v13, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
            *reinterpret_cast<void***>(edi26) = eax33;
            if (!eax33) 
                goto addr_4035ec_15;
            fun_404f20(ebp32, eax33, esi28, v29, v19, v17);
            ecx27 = esi28;
            edi26 = edi26 + 4;
        }
        esi28 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi28) + reinterpret_cast<unsigned char>(ebp32));
    }
    v34 = g40ba28;
    fun_40403c(ecx27, v34, v29, v19, v17, v14, v13, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    g40ba28 = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(edi26) = reinterpret_cast<void**>(0);
    g40bfe0 = 1;
    eax35 = 0;
    addr_4035e6_19:
    addr_4035e8_20:
    return eax35;
    addr_4035ec_15:
    v34 = g40ba7c;
    fun_40403c(ebp32, v34, v29, v19, v17, v14, v13, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    g40ba7c = reinterpret_cast<void**>(0);
    eax35 = 0xffffffff;
    goto addr_4035e6_19;
    addr_40358b_9:
    eax35 = 0xffffffff;
    goto addr_4035e8_20;
}

int32_t g40ba9c = 0;

int32_t GetCurrentProcess = 0x9f72;

int32_t TerminateProcess = 0x9f5e;

int32_t g40ba98 = 0;

signed char g40ba94 = 0;

void** g40bfe8 = reinterpret_cast<void**>(0);

void** g40bfe4 = reinterpret_cast<void**>(0);

void fun_403119(int32_t a1, int32_t a2, int32_t a3) {
    int1_t zf4;
    int32_t eax5;
    void** ecx6;
    void** eax7;
    void** eax8;
    int1_t cf9;
    void** eax10;
    void** eax11;
    int32_t* edi12;
    int32_t eax13;
    int32_t* edi14;
    int32_t eax15;

    zf4 = g40ba9c == 1;
    if (zf4) {
        eax5 = reinterpret_cast<int32_t>(GetCurrentProcess(a1));
        TerminateProcess(eax5, a1);
    }
    g40ba98 = 1;
    g40ba94 = *reinterpret_cast<signed char*>(&a3);
    if (!a2) {
        ecx6 = g40bfe8;
        if (ecx6) {
            eax7 = g40bfe4;
            eax8 = eax7 - 4;
            cf9 = reinterpret_cast<unsigned char>(eax8) < reinterpret_cast<unsigned char>(ecx6);
            while (g40bfe4 = eax8, !cf9) {
                eax10 = *reinterpret_cast<void***>(eax8);
                if (eax10) {
                    eax10();
                }
                eax11 = g40bfe4;
                eax8 = eax11 - 4;
                cf9 = reinterpret_cast<unsigned char>(eax8) < reinterpret_cast<unsigned char>(g40bfe8);
            }
        }
        edi12 = reinterpret_cast<int32_t*>(0x40b020);
        if (!0) {
            do {
                eax13 = *edi12;
                if (eax13) {
                    eax13();
                }
                ++edi12;
            } while (reinterpret_cast<uint32_t>(edi12) < 0x40b028);
        }
    }
    edi14 = reinterpret_cast<int32_t*>(0x40b02c);
    if (!0) {
        do {
            eax15 = *edi14;
            if (eax15) {
                eax15();
            }
            ++edi14;
        } while (reinterpret_cast<uint32_t>(edi14) < 0x40b030);
    }
    if (!a3) {
        g40ba9c = 1;
        fun_40307f(ecx6, a1);
    }
    return;
}

void fun_403c0b(void** ecx, void** a2, void** a3, void** a4) {
    int32_t ebp5;
    int32_t* esp6;
    void* ebp7;

    g0 = *reinterpret_cast<struct s13**>(ebp5 - 16);
    esp6 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp7) + 4 - 4);
    *esp6 = reinterpret_cast<int32_t>(__return_address());
    goto *esp6;
}

struct s132 {
    void** f0;
    int32_t f4;
    uint32_t f8;
};

int32_t g40b478 = 10;

int32_t UnhandledExceptionFilter = 0x9fb8;

struct s132* g40baa4 = reinterpret_cast<struct s132*>(0);

int32_t g40b470 = 3;

int32_t g40b474 = 7;

int32_t g40b47c = 0x8c;

uint32_t fun_4033ca(void** a1, struct s132* a2) {
    void** edx3;
    int32_t eax4;
    struct s132* ecx5;
    uint32_t ebx6;
    uint32_t eax7;
    struct s132* eax8;
    struct s132* v9;
    int32_t eax10;
    int32_t edx11;
    int32_t edx12;
    uint32_t* esi13;
    int32_t edx14;
    int32_t esi15;

    edx3 = a1;
    eax4 = g40b478;
    ecx5 = reinterpret_cast<struct s132*>(0x40b3f8);
    do {
        if (ecx5->f0 == edx3) 
            break;
        ++ecx5;
    } while (reinterpret_cast<uint32_t>(ecx5) < reinterpret_cast<uint32_t>((eax4 + eax4 * 2) * 4 + 0x40b3f8));
    if (reinterpret_cast<uint32_t>(ecx5) >= reinterpret_cast<uint32_t>((eax4 + eax4 * 2) * 4 + 0x40b3f8) || ecx5->f0 != edx3) {
        ecx5 = reinterpret_cast<struct s132*>(0);
    }
    if (!ecx5 || (ebx6 = ecx5->f8, ebx6 == 0)) {
        eax7 = reinterpret_cast<uint32_t>(UnhandledExceptionFilter(a2));
    } else {
        if (ebx6 != 5) {
            if (ebx6 != 1) {
                eax8 = g40baa4;
                v9 = eax8;
                g40baa4 = a2;
                if (ecx5->f4 != 8) {
                    ecx5->f8 = 0;
                    ebx6();
                } else {
                    eax10 = g40b470;
                    edx11 = g40b474;
                    edx12 = edx11 + eax10;
                    if (eax10 < edx12) {
                        esi13 = reinterpret_cast<uint32_t*>((eax10 + eax10 * 2) * 4 + 0x40b400);
                        edx14 = edx12 - eax10;
                        do {
                            *esi13 = 0;
                            esi13 = esi13 + 3;
                            --edx14;
                        } while (edx14);
                    }
                    esi15 = g40b47c;
                    if (!reinterpret_cast<int1_t>(ecx5->f0 == 0xc000008e)) {
                        if (!reinterpret_cast<int1_t>(ecx5->f0 == 0xc0000090)) {
                            if (!reinterpret_cast<int1_t>(ecx5->f0 == 0xc0000091)) {
                                if (!reinterpret_cast<int1_t>(ecx5->f0 == 0xc0000093)) {
                                    if (!reinterpret_cast<int1_t>(ecx5->f0 == 0xc000008d)) {
                                        if (!reinterpret_cast<int1_t>(ecx5->f0 == 0xc000008f)) {
                                            if (reinterpret_cast<int1_t>(ecx5->f0 == 0xc0000092)) {
                                                g40b47c = 0x8a;
                                            }
                                        } else {
                                            g40b47c = 0x86;
                                        }
                                    } else {
                                        g40b47c = 0x82;
                                    }
                                } else {
                                    g40b47c = 0x85;
                                }
                            } else {
                                g40b47c = 0x84;
                            }
                        } else {
                            g40b47c = 0x81;
                        }
                    } else {
                        g40b47c = 0x83;
                    }
                    ebx6();
                    g40b47c = esi15;
                }
                g40baa4 = v9;
            }
            eax7 = 0xffffffff;
        } else {
            ecx5->f8 = 0;
            eax7 = 1;
        }
    }
    return eax7;
}

void** fun_403db3(uint32_t a1, void** a2) {
    void** v3;
    void** eax4;
    void** ecx5;
    void** eax6;

    v3 = reinterpret_cast<void**>(__return_address());
    if (a1 > 0xffffffe0) {
        addr_403ddc_2:
        eax4 = reinterpret_cast<void**>(0);
    } else {
        do {
            eax4 = fun_403d6d(ecx5, v3);
            if (eax4) 
                break;
            if (a2 == eax4) 
                break;
            eax6 = fun_406b77(v3);
            ecx5 = v3;
        } while (eax6);
        goto addr_403ddc_2;
    }
    return eax4;
}

struct s133 {
    signed char[4] pad4;
    unsigned char f4;
};

uint32_t fun_403f26(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** eax10;
    void** ebx11;
    void** eax12;
    void** v13;
    void** eax14;
    uint32_t eax15;
    void** ecx16;
    void** esi17;
    void** ebx18;
    void** ebp19;
    int1_t zf20;
    void** edi21;
    void** eax22;
    void** eax23;
    void** edi24;
    void** ecx25;
    struct s133* eax26;
    void** eax27;
    uint32_t eax28;
    void** edi29;

    eax10 = *reinterpret_cast<void***>(a2 + 12);
    ebx11 = *reinterpret_cast<void***>(a2 + 16);
    if (!(*reinterpret_cast<unsigned char*>(&eax10) & 0x82)) 
        goto addr_40402f_2;
    if (*reinterpret_cast<unsigned char*>(&eax10) & 64) 
        goto addr_40402f_2;
    if (!(*reinterpret_cast<unsigned char*>(&eax10) & 1)) {
        addr_403f5f_5:
        eax12 = *reinterpret_cast<void***>(a2 + 12);
        *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(0);
        v13 = reinterpret_cast<void**>(0);
        eax14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax12) & 0xffffffef | 2);
        *reinterpret_cast<void***>(a2 + 12) = eax14;
        if (!(*reinterpret_cast<uint16_t*>(&eax14) & 0x10c) && (a2 != 0x40b0e8 && !reinterpret_cast<int1_t>(a2 == 0x40b108) || (eax15 = fun_403df1(ebx11), ecx16 = ebx11, !eax15))) {
            fun_406e65(ecx16, a2, esi17, ebx18, ebp19, __return_address(), a1, 0, a3, a4, a5, a6, a7, a8, a9);
            ecx16 = a2;
        }
    } else {
        *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(0);
        if (!(*reinterpret_cast<unsigned char*>(&eax10) & 16)) {
            addr_40402f_2:
            *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax10) | 32);
            goto addr_404035_8;
        } else {
            ecx16 = *reinterpret_cast<void***>(a2 + 8);
            *reinterpret_cast<void***>(a2) = ecx16;
            *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax10) & 0xfffffffe);
            goto addr_403f5f_5;
        }
    }
    zf20 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 0x108) == 0;
    if (zf20) {
        edi21 = reinterpret_cast<void**>(1);
        eax22 = fun_406b92(ecx16, ebx11, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 8, 1);
        v13 = eax22;
    } else {
        eax23 = *reinterpret_cast<void***>(a2 + 8);
        edi24 = *reinterpret_cast<void***>(a2);
        *reinterpret_cast<void***>(a2) = eax23 + 1;
        edi21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi24) - reinterpret_cast<unsigned char>(eax23));
        ecx25 = *reinterpret_cast<void***>(a2 + 24) - 1;
        *reinterpret_cast<void***>(a2 + 4) = ecx25;
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi21) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi21 == 0)) {
            if (ebx11 == 0xffffffff) {
                eax26 = reinterpret_cast<struct s133*>(0x40b480);
            } else {
                eax26 = reinterpret_cast<struct s133*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(ebx11) >> 5) * 4 + 0x40bee0)) + (reinterpret_cast<unsigned char>(ebx11) & 31) * 8);
            }
            if (!(eax26->f4 & 32)) 
                goto addr_403ffb_17; else 
                goto addr_403fee_18;
        } else {
            eax27 = fun_406b92(ecx25, ebx11, eax23, edi21);
            v13 = eax27;
            goto addr_403ff8_20;
        }
    }
    addr_404019_21:
    if (v13 == edi21) {
        eax28 = reinterpret_cast<unsigned char>(a1) & 0xff;
    } else {
        *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) | 32);
        goto addr_404035_8;
    }
    addr_404038_24:
    return eax28;
    addr_404035_8:
    eax28 = 0xffffffff;
    goto addr_404038_24;
    addr_403ffb_17:
    *reinterpret_cast<void***>(*reinterpret_cast<void***>(a2 + 8)) = a1;
    goto addr_404019_21;
    addr_403fee_18:
    fun_406dd9(ebx11, 0, 2, edi29, esi17, ebx18, ebp19, __return_address(), a1, 0, a3, a4, a5);
    addr_403ff8_20:
    goto addr_403ffb_17;
}

uint32_t fun_403f1d() {
    uint32_t eax1;

    eax1 = fun_403eb0(1);
    return eax1;
}

void** fun_407267(void** ecx, void** a2, void** a3, void** a4);

struct s134 {
    signed char[4] pad4;
    unsigned char f4;
};

void** fun_404396(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** eax13;
    void** eax14;
    void** esi15;
    void** v16;
    void** v17;
    void** v18;
    void** eax19;
    uint32_t eax20;
    void** edx21;
    void** ecx22;
    struct s134* edi23;
    void** ecx24;
    void** ecx25;
    void** eax26;

    eax13 = *reinterpret_cast<void***>(a2 + 12);
    if (*reinterpret_cast<unsigned char*>(&eax13) & 0x83 && !(*reinterpret_cast<unsigned char*>(&eax13) & 64)) {
        if (!(*reinterpret_cast<unsigned char*>(&eax13) & 2)) {
            eax14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax13) | 1);
            *reinterpret_cast<void***>(a2 + 12) = eax14;
            if (*reinterpret_cast<uint16_t*>(&eax14) & 0x10c) {
                *reinterpret_cast<void***>(a2) = *reinterpret_cast<void***>(a2 + 8);
            } else {
                fun_406e65(ecx, a2, esi15, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
                ecx = a2;
            }
            v16 = *reinterpret_cast<void***>(a2 + 24);
            v17 = *reinterpret_cast<void***>(a2 + 8);
            v18 = *reinterpret_cast<void***>(a2 + 16);
            eax19 = fun_407267(ecx, v18, v17, v16);
            *reinterpret_cast<void***>(a2 + 4) = eax19;
            if (!eax19 || eax19 == 0xffffffff) {
                eax20 = -reinterpret_cast<unsigned char>(eax19);
                *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) | reinterpret_cast<unsigned char>((eax20 - (eax20 + reinterpret_cast<uint1_t>(eax20 < eax20 + reinterpret_cast<uint1_t>(!!eax19))) & 16) + 16));
                *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(0);
            } else {
                edx21 = *reinterpret_cast<void***>(a2 + 12);
                if (!(*reinterpret_cast<unsigned char*>(&edx21) & 0x82)) {
                    ecx22 = *reinterpret_cast<void***>(a2 + 16);
                    if (ecx22 == 0xffffffff) {
                        edi23 = reinterpret_cast<struct s134*>(0x40b480);
                    } else {
                        edi23 = reinterpret_cast<struct s134*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(ecx22) >> 5) * 4 + 0x40bee0)) + (reinterpret_cast<unsigned char>(ecx22) & 31) * 8);
                    }
                    if ((edi23->f4 & 0x82) == 0x82) {
                        *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx21) | 0x2000);
                    }
                }
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a2 + 24) == 0x200) && ((ecx24 = *reinterpret_cast<void***>(a2 + 12), !!(*reinterpret_cast<unsigned char*>(&ecx24) & 8)) && !(*reinterpret_cast<unsigned char*>(&ecx24 + 1) & 4))) {
                    *reinterpret_cast<void***>(a2 + 24) = reinterpret_cast<void**>(0x1000);
                }
                ecx25 = *reinterpret_cast<void***>(a2);
                *reinterpret_cast<void***>(a2 + 4) = eax19 - 1;
                eax26 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx25))));
                *reinterpret_cast<void***>(a2) = ecx25 + 1;
                return eax26;
            }
        } else {
            eax13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax13) | 32);
            *reinterpret_cast<void***>(a2 + 12) = eax13;
        }
    }
    return 0xffffffff;
}

void** fun_404509(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** eax7;
    int1_t zf8;
    void** ecx9;
    int32_t eax10;
    void** v11;
    int1_t cf12;
    int32_t ecx13;
    void** v14;
    int32_t eax15;

    if (!a2 || !a3) {
        addr_40452c_2:
        eax7 = reinterpret_cast<void**>(0);
        goto addr_40452e_3;
    } else {
        if (*reinterpret_cast<void***>(a2)) {
            zf8 = g40bc54 == 0;
            if (zf8) {
                if (a1) {
                    *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(static_cast<uint16_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2))));
                    goto addr_404548_8;
                }
            }
            ecx9 = g40b490;
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx9 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) * 2) + 1) & 0x80) 
                goto addr_40455d_10;
        } else {
            if (a1) {
                *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0);
                goto addr_40452c_2;
            }
        }
    }
    eax10 = 0;
    *reinterpret_cast<unsigned char*>(&eax10) = reinterpret_cast<uint1_t>(!!a1);
    v11 = g40bc64;
    eax7 = reinterpret_cast<void**>(MultiByteToWideChar(v11, 9, a2, 1, a1, eax10));
    if (eax7) {
        addr_404548_8:
        eax7 = reinterpret_cast<void**>(1);
        goto addr_40452e_3;
    } else {
        goto addr_40459b_15;
    }
    addr_40455d_10:
    eax7 = g40b4a0;
    if (reinterpret_cast<signed char>(eax7) > reinterpret_cast<signed char>(1)) {
        cf12 = reinterpret_cast<unsigned char>(a3) < reinterpret_cast<unsigned char>(eax7);
        if (reinterpret_cast<signed char>(a3) < reinterpret_cast<signed char>(eax7)) {
            addr_404594_17:
            if (cf12 || !*reinterpret_cast<void***>(a2 + 1)) {
                addr_40459b_15:
                g40ba50 = reinterpret_cast<void**>(42);
                eax7 = reinterpret_cast<void**>(0xffffffff);
                goto addr_40452e_3;
            } else {
                addr_40452e_3:
                return eax7;
            }
        } else {
            ecx13 = 0;
            *reinterpret_cast<unsigned char*>(&ecx13) = reinterpret_cast<uint1_t>(!!a1);
            v14 = g40bc64;
            eax15 = reinterpret_cast<int32_t>(MultiByteToWideChar(v14, 9, a2, eax7, a1, ecx13));
            eax7 = g40b4a0;
            if (eax15) 
                goto addr_40452e_3;
        }
    }
    cf12 = reinterpret_cast<unsigned char>(a3) < reinterpret_cast<unsigned char>(eax7);
    goto addr_404594_17;
}

int32_t fun_404730(void** ecx, int32_t a2, uint32_t a3, int32_t a4, uint32_t a5, void** a6, void** a7, void** a8) {
    if (a5 | a3) {
        return a2 * a4;
    } else {
        return a2 * a4;
    }
}

int32_t fun_404b31(struct s6* a1, void** a2, struct s5* a3, void*** a4, void** a5, void** a6, void* a7, uint32_t a8, int32_t a9) {
    int32_t eax10;

    eax10 = fun_4049d9(__return_address(), a1, 0x40b4b0);
    return eax10;
}

int32_t fun_404b47(struct s6* a1, void** a2, struct s5* a3, void*** a4, void** a5, void** a6, void* a7, uint32_t a8, int32_t a9);

void** fun_404b9a(void** a1, void** a2, void** a3) {
    void*** ebp4;
    void** eax5;
    void*** v6;
    struct s5* v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** ebp12;
    void** eax13;

    ebp4 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax5 = g40b498;
    v6 = ebp4 - 20;
    v7 = reinterpret_cast<struct s5*>(ebp4 - 16);
    fun_4079c9(v7, v6, a2, 0, 0, 0, 0);
    fun_404b47(ebp4 - 16, a1, v7, v6, a2, 0, 0, 0, 0);
    eax13 = fun_4041a2(eax5, v8, v9, v10, v11, eax5, ebp12, __return_address(), a1, a2, a3);
    return eax13;
}

struct s135 {
    uint32_t f0;
    uint32_t f4;
    int16_t f8;
};

void fun_40508f(void** ecx, struct s135* a2, struct s24* a3);

int32_t g40bbd8 = 0;

signed char g40bbb6 = 0;

int32_t g40bbd0 = 0;

int16_t g40bbb4 = 0;

int32_t g40bbd4 = 0;

int32_t g40bbdc = 0;

void** fun_405149(void** ecx, void** a2, void** a3) {
    void*** ebp4;
    void** eax5;
    struct s24* v6;
    int32_t v7;
    int32_t v8;
    int16_t v9;
    int32_t eax10;
    int32_t eax11;
    int32_t eax12;
    void** edi13;
    void** esi14;
    void** v15;
    void** v16;
    void** v17;
    void** ebp18;
    void** eax19;

    ebp4 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax5 = g40b498;
    v6 = reinterpret_cast<struct s24*>(ebp4 + 8);
    fun_40508f(ecx, ebp4 - 16, v6);
    eax10 = fun_407e50(v6, v7, v8, v9, 17, 0, 0x40bbb4);
    g40bbd8 = eax10;
    eax11 = g40bbb6;
    g40bbd0 = eax11;
    eax12 = g40bbb4;
    g40bbd4 = eax12;
    g40bbdc = 0x40bbb8;
    eax19 = fun_4041a2(eax5, edi13, esi14, v15, v16, v17, eax5, ebp18, __return_address(), a2, a3);
    return eax19;
}

void** fun_405018(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** ebp8;
    void** edx9;
    void** ecx10;
    void** v11;
    void** ebx12;
    void** ebx13;
    void** v14;
    void** esi15;
    void** esi16;
    void** v17;
    void** edi18;
    void** edi19;
    void** eax20;
    int32_t edx21;
    void** eax22;

    v6 = reinterpret_cast<void**>(__return_address());
    v7 = ebp8;
    edx9 = a3;
    ecx10 = *reinterpret_cast<void***>(edx9 + 12);
    v11 = ebx12;
    ebx13 = a2;
    v14 = esi15;
    esi16 = a1;
    v17 = edi18;
    edi19 = esi16 + 1;
    *reinterpret_cast<void***>(esi16) = reinterpret_cast<void**>(48);
    eax20 = edi19;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx13) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx13 == 0))) {
        a1 = ebx13;
        ebx13 = reinterpret_cast<void**>(0);
        do {
            if (!*reinterpret_cast<void***>(ecx10)) {
                edx21 = 48;
            } else {
                edx21 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx10));
                ++ecx10;
            }
            *reinterpret_cast<void***>(eax20) = *reinterpret_cast<void***>(&edx21);
            ++eax20;
            --a1;
        } while (a1);
        edx9 = a3;
    }
    *reinterpret_cast<void***>(eax20) = reinterpret_cast<void**>(0);
    if (reinterpret_cast<signed char>(ebx13) >= reinterpret_cast<signed char>(0) && reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx10)) >= reinterpret_cast<signed char>(53)) {
        while (--eax20, *reinterpret_cast<void***>(eax20) == 57) {
            *reinterpret_cast<void***>(eax20) = reinterpret_cast<void**>(48);
        }
        *reinterpret_cast<void***>(eax20) = *reinterpret_cast<void***>(eax20) + 1;
    }
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi16) == 49)) {
        eax22 = fun_404080(ecx10, edi19, v17, v14, v11, v7, v6, a1, a2);
        eax20 = fun_404be0(esi16, edi19, eax22 + 1, edi19, v17, v14, v11, v7, v6, a1, a2, a3);
    } else {
        *reinterpret_cast<void***>(edx9 + 4) = *reinterpret_cast<void***>(edx9 + 4) + 1;
    }
    return eax20;
}

unsigned char g40ba4c = 0;

void** fun_402f09(void** ecx, void** a2, void** a3, void** a4, int32_t a5) {
    void** esi6;
    void** v7;
    void** edi8;
    void** v9;
    void** v10;
    void** eax11;
    void** ebx12;
    void* ecx13;
    uint1_t zf14;
    void** ecx15;
    void** edi16;
    void** eax17;
    void** eax18;
    uint1_t less19;
    void** eax20;

    esi6 = a2;
    v7 = edi8;
    v9 = *reinterpret_cast<void***>(esi6 + 4);
    v10 = *reinterpret_cast<void***>(esi6);
    eax11 = fun_405149(ecx, v10, v9);
    ebx12 = a4;
    g40ba48 = *reinterpret_cast<void***>(eax11 + 4) - 1;
    ecx13 = reinterpret_cast<void*>(0);
    zf14 = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(eax11) == 45);
    *reinterpret_cast<unsigned char*>(&ecx13) = zf14;
    g40ba40 = eax11;
    ecx15 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ecx13) + reinterpret_cast<unsigned char>(a3));
    edi16 = ecx15;
    fun_405018(edi16, ebx12, eax11, v10, v9);
    eax17 = g40ba40;
    eax18 = *reinterpret_cast<void***>(eax17 + 4) - 1;
    less19 = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(g40ba48) < reinterpret_cast<signed char>(eax18));
    g40ba48 = eax18;
    *reinterpret_cast<unsigned char*>(&ecx15) = less19;
    g40ba4c = *reinterpret_cast<unsigned char*>(&ecx15);
    if (reinterpret_cast<signed char>(eax18) < reinterpret_cast<signed char>(0xfffffffc) || reinterpret_cast<signed char>(eax18) >= reinterpret_cast<signed char>(ebx12)) {
        g40ba44 = 1;
        eax20 = fun_402d3b(ecx15, esi6, a3, ebx12, a5);
    } else {
        if (*reinterpret_cast<unsigned char*>(&ecx15)) {
            do {
                ++edi16;
            } while (*reinterpret_cast<void***>(edi16));
            *reinterpret_cast<void***>(edi16 + 0xfffffffe) = *reinterpret_cast<void***>(edi16);
        }
        g40ba44 = 1;
        eax20 = fun_402e2c(ecx15, esi6, a3, ebx12, v7);
    }
    g40ba44 = 0;
    return eax20;
}

uint32_t fun_403056() {
    int32_t eax1;
    int32_t eax2;
    int16_t ax3;
    int16_t fpu_status_word4;

    eax1 = reinterpret_cast<int32_t>(GetModuleHandleA());
    if (eax1 && (eax2 = reinterpret_cast<int32_t>(GetProcAddress(eax1, "IsProcessorFeaturePresent")), !!eax2)) {
        eax2();
        goto 0;
    }
    __asm__("fld qword [0x409190]");
    __asm__("fstp qword [ebp-0x8]");
    __asm__("fld qword [0x409188]");
    __asm__("fstp qword [ebp-0x10]");
    __asm__("fld qword [ebp-0x10]");
    __asm__("fdiv qword [ebp-0x8]");
    __asm__("fmul qword [ebp-0x8]");
    __asm__("fsubr qword [ebp-0x10]");
    __asm__("fstp qword [ebp-0x18]");
    __asm__("fld qword [ebp-0x18]");
    __asm__("fcomp qword [0x409180]");
    ax3 = fpu_status_word4;
    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax3) + 1) & 65)) 
        goto addr_40304d_5;
    goto "KERNEL32";
    addr_40304d_5:
    goto "KERNEL32";
}

struct s136 {
    signed char[16] pad16;
    void** f16;
};

struct s136* fun_408240(void** ecx, void** a2);

void** fun_40532e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    struct s136* eax10;
    void** ecx11;
    void** eax12;
    struct s136* ecx13;
    void** ecx14;
    void** esi15;
    void** eax16;
    void** v17;
    void** ecx18;
    void* ecx19;
    void** tmp32_20;

    v9 = g40bfe8;
    eax10 = fun_408240(ecx, v9);
    ecx11 = g40bfe4;
    eax12 = g40bfe8;
    if (reinterpret_cast<uint32_t>(eax10) < reinterpret_cast<unsigned char>(ecx11) - reinterpret_cast<unsigned char>(eax12) + 4) {
        ecx13 = reinterpret_cast<struct s136*>(0x800);
        if (reinterpret_cast<uint32_t>(eax10) < 0x800) {
            ecx13 = eax10;
        }
        ecx14 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ecx13) + reinterpret_cast<uint32_t>(eax10));
        eax16 = fun_4080de(ecx14, eax12, ecx14, esi15, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        if (eax16 || (v17 = g40bfe8, eax16 = fun_4080de(ecx14, v17, &eax10->f16, esi15, __return_address(), a2, a3, a4, a5, a6, a7, a8), !!eax16)) {
            ecx18 = g40bfe4;
            ecx19 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx18) - reinterpret_cast<unsigned char>(g40bfe8));
            g40bfe8 = eax16;
            ecx11 = eax16 + (reinterpret_cast<int32_t>(ecx19) >> 2) * 4;
            g40bfe4 = ecx11;
        } else {
            return eax16;
        }
    }
    *reinterpret_cast<void***>(ecx11) = a2;
    tmp32_20 = g40bfe4 + 4;
    g40bfe4 = tmp32_20;
    return a2;
}

void fun_403602(void** ecx, void** a2, void** a3) {
    void** ebx4;
    void** edx5;
    void*** esi6;
    void** edi7;
    void** ecx8;
    void*** eax9;
    int32_t* esi10;
    int32_t* esi11;
    void** cl12;
    int32_t* esi13;
    int32_t* esi14;
    void** ecx15;
    uint32_t v16;
    void** ecx17;
    int32_t ebx18;
    uint32_t edx19;
    void*** ecx20;
    uint32_t ecx21;
    int32_t* esi22;
    int32_t* esi23;
    int32_t* esi24;
    int32_t* esi25;
    int32_t* esi26;
    int32_t* esi27;
    int32_t* esi28;
    int32_t* esi29;
    int32_t* esi30;
    int32_t* esi31;

    ebx4 = a3;
    edx5 = reinterpret_cast<void**>(0);
    *esi6 = reinterpret_cast<void**>(0);
    edi7 = ecx;
    *reinterpret_cast<void***>(ebx4) = reinterpret_cast<void**>(1);
    if (a2) {
        ecx8 = a2;
        a2 = a2 + 4;
        *reinterpret_cast<void***>(ecx8) = edi7;
    }
    do {
        if (!reinterpret_cast<int1_t>(*eax9 == 34)) {
            *esi10 = *esi11 + 1;
            if (edi7) {
                *reinterpret_cast<void***>(edi7) = *eax9;
                ++edi7;
            }
            cl12 = *eax9;
            ++eax9;
            if (*reinterpret_cast<unsigned char*>(cl12 + 0x40bca1) & 4) {
                *esi13 = *esi14 + 1;
                if (edi7) {
                    *reinterpret_cast<void***>(edi7) = *eax9;
                    ++edi7;
                }
                ++eax9;
            }
            ebx4 = a3;
            if (!cl12) 
                break;
        } else {
            ecx15 = reinterpret_cast<void**>(0);
            *reinterpret_cast<unsigned char*>(&ecx15) = reinterpret_cast<uint1_t>(edx5 == 0);
            ++eax9;
            edx5 = ecx15;
            cl12 = reinterpret_cast<void**>(34);
        }
    } while (edx5 || cl12 != 32 && !reinterpret_cast<int1_t>(cl12 == 9));
    goto addr_403673_13;
    --eax9;
    addr_40367b_15:
    v16 = 0;
    while (*eax9) {
        while (*eax9 == 32 || reinterpret_cast<int1_t>(*eax9 == 9)) {
            ++eax9;
        }
        if (!*eax9) 
            break;
        if (a2) {
            ecx17 = a2;
            a2 = a2 + 4;
            *reinterpret_cast<void***>(ecx17) = edi7;
        }
        *reinterpret_cast<void***>(ebx4) = *reinterpret_cast<void***>(ebx4) + 1;
        while (1) {
            ebx18 = 1;
            edx19 = 0;
            while (*eax9 == 92) {
                ++eax9;
                ++edx19;
            }
            if (reinterpret_cast<int1_t>(*eax9 == 34)) {
                if (!(*reinterpret_cast<unsigned char*>(&edx19) & 1)) {
                    if (!v16 || (ecx20 = eax9 + 1, !reinterpret_cast<int1_t>(*ecx20 == 34))) {
                        ebx18 = 0;
                    } else {
                        eax9 = ecx20;
                    }
                    ecx21 = 0;
                    *reinterpret_cast<unsigned char*>(&ecx21) = reinterpret_cast<uint1_t>(v16 == 0);
                    v16 = ecx21;
                }
                edx19 = edx19 >> 1;
            }
            if (edx19) {
                do {
                    if (edi7) {
                        *reinterpret_cast<void***>(edi7) = reinterpret_cast<void**>(92);
                        ++edi7;
                    }
                    *esi22 = *esi23 + 1;
                    --edx19;
                } while (edx19);
            }
            if (!*eax9) 
                break;
            if (v16) 
                goto addr_403714_39;
            if (*eax9 == 32) 
                break;
            if (*eax9 == 9) 
                break;
            addr_403714_39:
            if (ebx18) {
                if (!edi7) {
                    if (*reinterpret_cast<unsigned char*>(*eax9 + 0x40bca1) & 4) {
                        ++eax9;
                        *esi24 = *esi25 + 1;
                    }
                } else {
                    if (*reinterpret_cast<unsigned char*>(*eax9 + 0x40bca1) & 4) {
                        *reinterpret_cast<void***>(edi7) = *eax9;
                        ++edi7;
                        ++eax9;
                        *esi26 = *esi27 + 1;
                    }
                    *reinterpret_cast<void***>(edi7) = *eax9;
                    ++edi7;
                }
                *esi28 = *esi29 + 1;
            }
            ++eax9;
        }
        if (edi7) {
            *reinterpret_cast<void***>(edi7) = reinterpret_cast<void**>(0);
            ++edi7;
        }
        *esi30 = *esi31 + 1;
        ebx4 = a3;
    }
    if (a2) {
        *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
    }
    *reinterpret_cast<void***>(ebx4) = *reinterpret_cast<void***>(ebx4) + 1;
    return;
    addr_403673_13:
    if (edi7) {
        *reinterpret_cast<void***>(edi7 + 0xffffffff) = reinterpret_cast<void**>(0);
        goto addr_40367b_15;
    }
}

void** g40bee0 = reinterpret_cast<void**>(0);

int32_t GetStartupInfoA = 0xa080;

struct s137 {
    void** f0;
    signed char[3] pad4;
    unsigned char f4;
};

struct s138 {
    void** f0;
    signed char[3] pad4;
    unsigned char f4;
};

int32_t GetFileType = 0xa072;

int32_t SetHandleCount = 0xa060;

struct s139 {
    void** f0;
    signed char[3] pad4;
    unsigned char f4;
};

uint32_t fun_403932(void** ecx, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** eax20;
    void* esp21;
    void** ecx22;
    void** ecx23;
    void** v24;
    void** ebx25;
    void** v26;
    void** esi27;
    void** v28;
    void** edi29;
    void** v30;
    int16_t v31;
    struct s137* v32;
    uint32_t eax33;
    int32_t ebx34;
    void** eax35;
    struct s138* esi36;
    int32_t eax37;
    uint32_t eax38;
    uint32_t eax39;
    void** eax40;
    uint32_t eax41;
    uint32_t eax42;
    void** esi43;
    void** v44;
    void** ebp45;
    unsigned char* ebp46;
    void*** ebx47;
    int1_t less48;
    void** edi49;
    void** v50;
    int32_t eax51;
    struct s139* eax52;
    void*** edi53;
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
    void** eax64;
    void** tmp32_65;
    int1_t less66;

    eax20 = fun_403ddf(ecx, 0x100, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19);
    esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 68 - 4 - 4 + 4 + 4);
    if (eax20) {
        g40bee0 = eax20;
        g40bec8 = reinterpret_cast<void**>(32);
        ecx22 = eax20 + 0x100;
        while (reinterpret_cast<unsigned char>(eax20) < reinterpret_cast<unsigned char>(ecx22)) {
            *reinterpret_cast<void***>(eax20) = reinterpret_cast<void**>(0xffffffff);
            *reinterpret_cast<void***>(eax20 + 4) = reinterpret_cast<void**>(0);
            *reinterpret_cast<signed char*>(eax20 + 5) = 10;
            ecx23 = g40bee0;
            eax20 = eax20 + 8;
            ecx22 = ecx23 + 0x100;
        }
        v24 = ebx25;
        v26 = esi27;
        v28 = edi29;
        v30 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp21) - 4 - 4 - 4 + 12);
        GetStartupInfoA();
        if (!v31) 
            goto addr_403a62_6;
        if (v32) 
            goto addr_4039a7_8;
    } else {
        eax33 = 0xffffffff;
        goto addr_403ad9_10;
    }
    addr_403a62_6:
    ebx34 = 0;
    do {
        eax35 = g40bee0;
        esi36 = reinterpret_cast<struct s138*>(eax35 + ebx34 * 8);
        if (!reinterpret_cast<int1_t>(esi36->f0 == 0xffffffff)) {
            esi36->f4 = reinterpret_cast<unsigned char>(esi36->f4 | 0x80);
        } else {
            esi36->f4 = 0x81;
            if (ebx34) {
                eax37 = ebx34 - 1;
                eax38 = reinterpret_cast<uint32_t>(-eax37);
                eax39 = eax38 - (eax38 + reinterpret_cast<uint1_t>(eax38 < eax38 + reinterpret_cast<uint1_t>(!!eax37))) - 11;
            } else {
                eax39 = 0xf6;
            }
            eax40 = reinterpret_cast<void**>(GetStdHandle(ecx22, eax39));
            if (eax40 == 0xffffffff || ((eax41 = reinterpret_cast<uint32_t>(GetFileType(ecx22, eax40, eax39)), eax41 == 0) || (eax42 = eax41 & 0xff, esi36->f0 = eax40, eax42 == 2))) {
                esi36->f4 = reinterpret_cast<unsigned char>(esi36->f4 | 64);
            } else {
                if (eax42 == 3) {
                    esi36->f4 = reinterpret_cast<unsigned char>(esi36->f4 | 8);
                }
            }
        }
        ++ebx34;
    } while (ebx34 < 3);
    SetHandleCount(ecx22);
    eax33 = 0;
    addr_403ad9_10:
    return eax33;
    addr_4039a7_8:
    esi43 = v32->f0;
    v44 = ebp45;
    ebp46 = &v32->f4;
    ebx47 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(esi43) + reinterpret_cast<uint32_t>(ebp46));
    if (reinterpret_cast<signed char>(esi43) >= reinterpret_cast<signed char>(0x800)) {
        esi43 = reinterpret_cast<void**>(0x800);
    }
    less48 = reinterpret_cast<signed char>(g40bec8) < reinterpret_cast<signed char>(esi43);
    if (!less48) {
        addr_403a15_24:
        edi49 = reinterpret_cast<void**>(0);
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi43) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi43 == 0))) {
            do {
                if (*ebx47 != 0xffffffff && ((*reinterpret_cast<unsigned char*>(&ecx22) = *ebp46, !!(*reinterpret_cast<unsigned char*>(&ecx22) & 1)) && (*reinterpret_cast<unsigned char*>(&ecx22) & 8 || (v50 = *ebx47, eax51 = reinterpret_cast<int32_t>(GetFileType(v50)), !!eax51)))) {
                    eax52 = reinterpret_cast<struct s139*>(*reinterpret_cast<void****>((reinterpret_cast<signed char>(edi49) >> 5) * 4 + 0x40bee0) + (reinterpret_cast<unsigned char>(edi49) & 31) * 8);
                    ecx22 = *ebx47;
                    eax52->f0 = ecx22;
                    *reinterpret_cast<unsigned char*>(&ecx22) = *ebp46;
                    eax52->f4 = *reinterpret_cast<unsigned char*>(&ecx22);
                }
                ++edi49;
                ++ebp46;
                ebx47 = ebx47 + 4;
            } while (reinterpret_cast<signed char>(edi49) < reinterpret_cast<signed char>(esi43));
        }
    } else {
        edi53 = reinterpret_cast<void***>(0x40bee4);
        do {
            eax64 = fun_403ddf(ecx22, 0x100, v44, v30, v28, v26, v24, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63);
            ecx22 = reinterpret_cast<void**>(0x100);
            if (!eax64) 
                goto addr_403a0f_30;
            tmp32_65 = g40bec8 + 32;
            g40bec8 = tmp32_65;
            *edi53 = eax64;
            ecx22 = eax64 + 0x100;
            while (reinterpret_cast<unsigned char>(eax64) < reinterpret_cast<unsigned char>(ecx22)) {
                *reinterpret_cast<void***>(eax64) = reinterpret_cast<void**>(0xffffffff);
                *reinterpret_cast<void***>(eax64 + 4) = reinterpret_cast<void**>(0);
                *reinterpret_cast<signed char*>(eax64 + 5) = 10;
                eax64 = eax64 + 8;
                ecx22 = *edi53 + 0x100;
            }
            edi53 = edi53 + 4;
            less66 = reinterpret_cast<signed char>(g40bec8) < reinterpret_cast<signed char>(esi43);
        } while (less66);
        goto addr_403a0d_35;
    }
    goto addr_403a62_6;
    addr_403a0f_30:
    esi43 = g40bec8;
    goto addr_403a15_24;
    addr_403a0d_35:
    goto addr_403a15_24;
}

struct s140 {
    void** f0;
    void** f1;
    void** f2;
    signed char f3;
    signed char[91] pad95;
    unsigned char f95;
};

void** fun_405a00(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** esi8;
    void** edi9;
    void** eax10;
    uint32_t ecx11;
    uint32_t edx12;
    struct s140* esi13;
    void** edi14;
    uint32_t ecx15;
    uint32_t edx16;
    unsigned char bl17;
    unsigned char bl18;

    esi8 = a3;
    edi9 = a2;
    eax10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a4) + reinterpret_cast<unsigned char>(esi8));
    if (reinterpret_cast<unsigned char>(edi9) <= reinterpret_cast<unsigned char>(esi8) || reinterpret_cast<unsigned char>(edi9) >= reinterpret_cast<unsigned char>(eax10)) {
        if (reinterpret_cast<unsigned char>(edi9) & 3) {
            if (reinterpret_cast<unsigned char>(a4) < reinterpret_cast<unsigned char>(4)) {
                goto *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(a4 - 4) * 4 + 0x405b5c);
            } else {
                goto *reinterpret_cast<int32_t*>((reinterpret_cast<unsigned char>(edi9) & 3) * 4 + 0x405a60);
            }
        }
        ecx11 = reinterpret_cast<unsigned char>(a4) >> 2;
        edx12 = reinterpret_cast<unsigned char>(a4) & 3;
        if (ecx11 >= 8) 
            goto addr_405a33_7;
    } else {
        esi13 = reinterpret_cast<struct s140*>(reinterpret_cast<unsigned char>(a4) + reinterpret_cast<unsigned char>(esi8) + 0xfffffffc);
        edi14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a4) + reinterpret_cast<unsigned char>(edi9) + 0xfffffffc);
        if (reinterpret_cast<unsigned char>(edi14) & 3) {
            eax10 = edi14;
            if (reinterpret_cast<unsigned char>(a4) >= reinterpret_cast<unsigned char>(4)) {
                goto *reinterpret_cast<int32_t*>((reinterpret_cast<unsigned char>(eax10) & 3) * 4 + 0x405bec);
            }
            goto *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(a4) * 4 + 0x405ce8);
        } else {
            ecx15 = reinterpret_cast<unsigned char>(a4) >> 2;
            edx16 = reinterpret_cast<unsigned char>(a4) & 3;
            if (ecx15 < 8) {
                goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(-ecx15) * 4 + 0x405c98);
                goto *reinterpret_cast<int32_t*>(edx16 * 4 + 0x405ce8);
            } else {
                while (ecx15) {
                    --ecx15;
                    *reinterpret_cast<void***>(edi14) = esi13->f0;
                    edi14 = edi14 + 0xfffffffc;
                    esi13 = reinterpret_cast<struct s140*>(reinterpret_cast<uint32_t>(esi13) + 0xfffffffc);
                }
                goto *reinterpret_cast<int32_t*>(edx16 * 4 + 0x405ce8);
            }
        }
    }
    switch (ecx11) {
        addr_405b43_20:
    case 0:
        switch (edx12) {
        case 0:
            *reinterpret_cast<unsigned char*>(esi8 + 95) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(esi8 + 95) | bl17);
            return eax10;
        case 1:
            *reinterpret_cast<void***>(edi9) = *reinterpret_cast<void***>(esi8);
            return a2;
        case 2:
            *reinterpret_cast<void***>(edi9) = *reinterpret_cast<void***>(esi8);
            *reinterpret_cast<void***>(edi9 + 1) = *reinterpret_cast<void***>(esi8 + 1);
            return a2;
        case 3:
            *reinterpret_cast<void***>(edi9) = *reinterpret_cast<void***>(esi8);
            *reinterpret_cast<void***>(edi9 + 1) = *reinterpret_cast<void***>(esi8 + 1);
            *reinterpret_cast<void***>(edi9 + 2) = *reinterpret_cast<void***>(esi8 + 2);
            return a2;
        }
        addr_405b30_25:
    case 1:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi9 + ecx11 * 4) - 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi8 + ecx11 * 4) - 4);
        eax10 = reinterpret_cast<void**>(ecx11 * 4);
        esi8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi8) + reinterpret_cast<unsigned char>(eax10));
        edi9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi9) + reinterpret_cast<unsigned char>(eax10));
        goto addr_405b43_20;
        addr_405b28_26:
    case 2:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi9 + ecx11 * 4) - 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi8 + ecx11 * 4) - 8);
        goto addr_405b30_25;
        addr_405b20_27:
    case 3:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi9 + ecx11 * 4) - 12) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi8 + ecx11 * 4) - 12);
        goto addr_405b28_26;
        addr_405b18_28:
    case 4:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi9 + ecx11 * 4) - 16) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi8 + ecx11 * 4) - 16);
        goto addr_405b20_27;
        addr_405b10_29:
    case 5:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi9 + ecx11 * 4) - 20) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi8 + ecx11 * 4) - 20);
        goto addr_405b18_28;
    case 6:
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edi9 + ecx11 * 4) - 24) = eax10;
        goto addr_405b10_29;
    case 7:
    }
    addr_405a33_7:
    while (ecx11) {
        --ecx11;
        *reinterpret_cast<void***>(edi9) = *reinterpret_cast<void***>(esi8);
        edi9 = edi9 + 4;
        esi8 = esi8 + 4;
    }
    goto *reinterpret_cast<int32_t*>(edx12 * 4 + 0x405b4c);
    esi13->f95 = reinterpret_cast<unsigned char>(esi13->f95 | bl18);
    return eax10;
    *reinterpret_cast<signed char*>(edi14 + 3) = esi13->f3;
    return a2;
    *reinterpret_cast<signed char*>(edi14 + 3) = esi13->f3;
    *reinterpret_cast<void***>(edi14 + 2) = esi13->f2;
    return a2;
    *reinterpret_cast<signed char*>(edi14 + 3) = esi13->f3;
    *reinterpret_cast<void***>(edi14 + 2) = esi13->f2;
    *reinterpret_cast<void***>(edi14 + 1) = esi13->f1;
    return a2;
}

void fun_403add(void** ecx, void** a2, void** a3, void** a4) {
    void** v5;
    int32_t ebp6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t eax9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;

    v5 = reinterpret_cast<void**>(__return_address());
    fun_403bd0(0x4095e8, 12, v5);
    *reinterpret_cast<int32_t*>(ebp6 - 28) = 0x409dfc;
    while (*reinterpret_cast<uint32_t*>(ebp7 - 28) < 0x409dfc) {
        *reinterpret_cast<uint32_t*>(ebp8 - 4) = 0;
        eax9 = **reinterpret_cast<int32_t**>(ebp10 - 28);
        if (eax9) {
            eax9();
        }
        *reinterpret_cast<uint32_t*>(ebp11 - 4) = 0xffffffff;
        *reinterpret_cast<int32_t*>(ebp12 - 28) = *reinterpret_cast<int32_t*>(ebp13 - 28) + 4;
    }
    fun_403c0b(ecx, 0x4095e8, 12, v5);
    goto 0x4095e8;
}

int32_t RtlUnwind = 0xa16c;

void fun_408ab6() {
    goto RtlUnwind;
}

void** g40bc70 = reinterpret_cast<void**>(0);

int32_t GetStringTypeW = 0xa236;

struct s141 {
    signed char[28] pad28;
    void** f28;
};

struct s142 {
    signed char[24] pad24;
    void** f24;
};

void** fun_40850a(void** a1, void** a2, void** a3, void** a4);

struct s143 {
    signed char[24] pad24;
    void** f24;
};

struct s144 {
    signed char[24] pad24;
    void** f24;
};

struct s145 {
    signed char[16] pad16;
    void** f16;
};

struct s146 {
    signed char[12] pad12;
    void** f12;
};

struct s147 {
    signed char[32] pad32;
    void** f32;
};

struct s148 {
    signed char[24] pad24;
    void** f24;
};

struct s149 {
    signed char[20] pad20;
    void** f20;
};

struct s150 {
    signed char[16] pad16;
    void** f16;
};

struct s151 {
    signed char[12] pad12;
    void** f12;
};

struct s152 {
    signed char[8] pad8;
    void** f8;
};

int32_t GetStringTypeA = 0xa224;

struct s153 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
};

struct s154 {
    signed char[16] pad16;
    void** f16;
};

struct s155 {
    signed char[12] pad12;
    void** f12;
};

struct s156 {
    signed char[12] pad12;
    void** f12;
};

struct s157 {
    signed char[16] pad16;
    void** f16;
};

struct s158 {
    signed char[12] pad12;
    void** f12;
};

struct s159 {
    signed char[24] pad24;
    void** f24;
};

struct s160 {
    signed char[20] pad20;
    int32_t f20;
};

struct s161 {
    signed char[8] pad8;
    int32_t f8;
};

uint32_t fun_4070ad(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void* esp14;
    void** esi15;
    int1_t zf16;
    int32_t v17;
    int32_t ebp18;
    int32_t eax19;
    int32_t eax20;
    void** eax21;
    void** ebx22;
    struct s141* ebp23;
    void** edi24;
    struct s142* ebp25;
    void** eax26;
    int32_t ebp27;
    int32_t ebp28;
    struct s143* ebp29;
    void** eax30;
    struct s144* ebp31;
    void** v32;
    struct s145* ebp33;
    void** v34;
    struct s146* ebp35;
    int32_t eax36;
    struct s147* ebp37;
    void** v38;
    void** v39;
    struct s148* ebp40;
    void** eax41;
    int32_t ebp42;
    int32_t ebp43;
    void** esp44;
    int32_t ebp45;
    void** esi46;
    int32_t ebp47;
    int32_t ebp48;
    void** v49;
    struct s149* ebp50;
    void** v51;
    struct s150* ebp52;
    void** v53;
    struct s151* ebp54;
    void** v55;
    struct s152* ebp56;
    struct s153* esp57;
    int32_t ebp58;
    struct s154* ebp59;
    void** v60;
    struct s155* ebp61;
    void** eax62;
    struct s156* ebp63;
    void** v64;
    struct s157* ebp65;
    void** v66;
    struct s158* ebp67;
    void** v68;
    struct s159* ebp69;
    int32_t eax70;
    int32_t v71;
    struct s160* ebp72;
    int32_t v73;
    struct s161* ebp74;
    int32_t eax75;
    int32_t ebp76;
    int32_t ebp77;
    void** eax78;
    int32_t ebp79;

    fun_403bd0(0x409d40, 28, __return_address());
    esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 + 4);
    esi15 = reinterpret_cast<void**>(0);
    zf16 = g40bc70 == 0;
    if (zf16) {
        v17 = ebp18 - 28;
        eax19 = reinterpret_cast<int32_t>(GetStringTypeW(1, 0x409d3c, 1, v17, 0x409d40, 28, __return_address()));
        esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 - 4 - 4 - 4 - 4 + 4);
        if (!eax19) {
            eax20 = reinterpret_cast<int32_t>(GetLastError(1, 0x409d3c, 1, v17, 0x409d40, 28, __return_address()));
            esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 + 4);
            if (eax20 == 0x78) {
                g40bc70 = reinterpret_cast<void**>(2);
            }
        } else {
            g40bc70 = reinterpret_cast<void**>(1);
        }
    }
    eax21 = g40bc70;
    if (eax21 == 2 || !eax21) {
        ebx22 = ebp23->f28;
        if (!ebx22) {
            ebx22 = g40bc54;
        }
        edi24 = ebp25->f24;
        if (!edi24) {
            edi24 = g40bc64;
        }
        eax26 = fun_40850a(ebx22, 0x409d40, 28, __return_address());
        ecx = ebx22;
        if (reinterpret_cast<int1_t>(eax26 == 0xffffffff)) 
            goto addr_407216_12;
        if (eax26 != edi24) 
            goto addr_40721e_14;
    } else {
        if (!reinterpret_cast<int1_t>(eax21 == 1)) 
            goto addr_407216_12;
        *reinterpret_cast<void***>(ebp27 - 36) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(ebp28 - 32) = reinterpret_cast<void**>(0);
        if (!ebp29->f24) {
            eax30 = g40bc64;
            ebp31->f24 = eax30;
        }
        v32 = ebp33->f16;
        v34 = ebp35->f12;
        eax36 = 0;
        *reinterpret_cast<unsigned char*>(&eax36) = reinterpret_cast<uint1_t>(!!ebp37->f32);
        v38 = reinterpret_cast<void**>(eax36 * 8 + 1);
        v39 = ebp40->f24;
        eax41 = reinterpret_cast<void**>(MultiByteToWideChar(v39, v38, v34, v32, 0, 0, 0x409d40, 28, __return_address()));
        *reinterpret_cast<void***>(ebp42 - 40) = eax41;
        if (!eax41) 
            goto addr_407216_12;
        *reinterpret_cast<uint32_t*>(ebp43 - 4) = 0;
        fun_403d30(ecx, v39, v38, v34, v32, 0, 0, 0x409d40, 28, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        esp44 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp14) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
        *reinterpret_cast<void***>(ebp45 - 24) = esp44;
        esi46 = esp44;
        *reinterpret_cast<void***>(ebp47 - 44) = esi46;
        fun_4045e0(ecx, esi46, 0, reinterpret_cast<unsigned char>(eax41) + reinterpret_cast<unsigned char>(eax41), v39, v38, v34, v32, 0, 0, 0x409d40, 28, __return_address());
        *reinterpret_cast<uint32_t*>(ebp48 - 4) = 0xffffffff;
        if (esi46) 
            goto addr_4071b6_21; else 
            goto addr_40719f_22;
    }
    addr_40723c_23:
    v49 = ebp50->f20;
    v51 = ebp52->f16;
    v53 = ebp54->f12;
    v55 = ebp56->f8;
    GetStringTypeA(ecx, ebx22, v55, v53, v51, v49, 0x409d40, 28, __return_address());
    if (esi15) {
        fun_40403c(ecx, esi15, ebx22, v55, v53, v51, v49, 0x409d40, 28, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        ecx = esi15;
    }
    addr_40725e_26:
    esp57 = reinterpret_cast<struct s153*>(ebp58 - 56 - 4);
    esp57->f0 = 0x407266;
    fun_403c0b(ecx, esp57->f4, esp57->f8, esp57->f12);
    goto esp57->f4;
    addr_40721e_14:
    ecx = reinterpret_cast<void**>(&ebp59->f16);
    v60 = ebp61->f12;
    eax62 = fun_40854d(ecx, edi24, eax26, v60, ecx, 0, 0, 0x409d40, 28, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    esi15 = eax62;
    if (!esi15) {
        addr_407216_12:
        goto addr_40725e_26;
    } else {
        ebp63->f12 = esi15;
        goto addr_40723c_23;
    }
    addr_4071b6_21:
    v64 = ebp65->f16;
    v66 = ebp67->f12;
    v68 = ebp69->f24;
    eax70 = reinterpret_cast<int32_t>(MultiByteToWideChar(ecx, v68, 1, v66, v64, esi46, eax41, v39, v38, v34, v32, 0, 0, 0x409d40, 28, __return_address()));
    if (eax70) {
        v71 = ebp72->f20;
        v73 = ebp74->f8;
        eax75 = reinterpret_cast<int32_t>(GetStringTypeW(ecx, v73, esi46, eax70, v71, v68, 1, v66, v64, esi46, eax41, v39, v38, v34, v32, 0, 0, 0x409d40, 28, __return_address()));
        *reinterpret_cast<int32_t*>(ebp76 - 36) = eax75;
    }
    if (*reinterpret_cast<int32_t*>(ebp77 - 32)) {
        fun_40403c(ecx, esi46, v68, 1, v66, v64, esi46, eax41, v39, v38, v34, v32, 0, 0, 0x409d40, 28, __return_address());
        ecx = esi46;
    }
    goto addr_40725e_26;
    addr_40719f_22:
    eax78 = fun_404245(ecx, 2, eax41, v39, v38, v34, v32, 0, 0, 0x409d40, 28, __return_address(), a2, a3);
    ecx = eax41;
    esi46 = eax78;
    if (!esi46) 
        goto addr_407216_12;
    *reinterpret_cast<int32_t*>(ebp79 - 32) = 1;
    goto addr_4071b6_21;
}

int32_t ReadFile = 0xa248;

void** fun_407267(void** ecx, void** a2, void** a3, void** a4) {
    void* ebp5;
    int1_t cf6;
    void**** edi7;
    void* esi8;
    void** eax9;
    void** dl10;
    void* v11;
    void** ebx12;
    void** ecx13;
    void** al14;
    void*** eax15;
    void** v16;
    void** v17;
    void*** eax18;
    void** v19;
    void** v20;
    int32_t eax21;
    void** eax22;
    void*** ecx23;
    void** v24;
    void* v25;
    unsigned char* eax26;
    unsigned char* eax27;
    void** ecx28;
    void** v29;
    void** v30;
    void** eax31;
    void** v32;
    void** v33;
    void** v34;
    int32_t eax35;
    int32_t eax36;
    int32_t v37;
    signed char v38;
    signed char v39;
    signed char v40;
    unsigned char* esi41;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    cf6 = reinterpret_cast<unsigned char>(a2) < reinterpret_cast<unsigned char>(g40bec8);
    if (!cf6 || (edi7 = reinterpret_cast<void****>((reinterpret_cast<signed char>(a2) >> 5) * 4 + 0x40bee0), esi8 = reinterpret_cast<void*>((reinterpret_cast<unsigned char>(a2) & 31) << 3), eax9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*edi7) + reinterpret_cast<uint32_t>(esi8)), dl10 = *reinterpret_cast<void***>(eax9 + 4), (reinterpret_cast<unsigned char>(dl10) & 1) == 0)) {
        g40ba54 = reinterpret_cast<void**>(0);
    } else {
        v11 = reinterpret_cast<void*>(0);
        ebx12 = a3;
        ecx13 = ebx12;
        if (!a4) 
            goto addr_407312_4;
        if (reinterpret_cast<unsigned char>(dl10) & 2) 
            goto addr_407312_4;
        if (reinterpret_cast<unsigned char>(dl10) & 72 && *reinterpret_cast<signed char*>(eax9 + 5) != 10) {
            al14 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(*edi7) + reinterpret_cast<uint32_t>(esi8) + 5);
            --a4;
            *reinterpret_cast<void***>(ebx12) = al14;
            eax15 = *edi7;
            ecx13 = ebx12 + 1;
            v11 = reinterpret_cast<void*>(1);
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax15) + reinterpret_cast<uint32_t>(esi8) + 5) = 10;
        }
        v16 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffffff0);
        v17 = a4;
        eax18 = *edi7;
        v19 = ecx13;
        v20 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(eax18) + reinterpret_cast<uint32_t>(esi8));
        eax21 = reinterpret_cast<int32_t>(ReadFile(v20, v19, v17, v16, 0));
        if (eax21) 
            goto addr_407325_9; else 
            goto addr_4072f5_10;
    }
    addr_407443_11:
    g40ba50 = reinterpret_cast<void**>(9);
    addr_40744d_12:
    eax22 = reinterpret_cast<void**>(0xffffffff);
    addr_407450_13:
    return eax22;
    addr_407325_9:
    ecx23 = *edi7;
    v24 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v11) + reinterpret_cast<uint32_t>(v25));
    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx23) + reinterpret_cast<uint32_t>(esi8) + 4) & 0x80)) {
        addr_407437_14:
        eax22 = v24;
        goto addr_407450_13;
    } else {
        if (!v25 || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx12) == 10)) {
            eax26 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*edi7) + reinterpret_cast<uint32_t>(esi8) + 4);
            *eax26 = reinterpret_cast<unsigned char>(*eax26 & 0xfb);
        } else {
            eax27 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx23) + reinterpret_cast<uint32_t>(esi8) + 4);
            *eax27 = reinterpret_cast<unsigned char>(*eax27 | 4);
        }
        ecx28 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v24) + reinterpret_cast<unsigned char>(a3));
        v29 = a3;
        v30 = ecx28;
        if (reinterpret_cast<unsigned char>(a3) < reinterpret_cast<unsigned char>(ecx28)) 
            goto addr_40736b_19;
    }
    addr_407431_20:
    v24 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx12) - reinterpret_cast<unsigned char>(a3));
    goto addr_407437_14;
    addr_40736b_19:
    while (*reinterpret_cast<void***>(v29) != 26) {
        if (*reinterpret_cast<void***>(v29) != 13) {
            *reinterpret_cast<void***>(ebx12) = *reinterpret_cast<void***>(v29);
            ++ebx12;
            ++v29;
            goto addr_407413_23;
        }
        if (reinterpret_cast<unsigned char>(v29) < reinterpret_cast<unsigned char>(ecx28 - 1)) {
            eax31 = v29 + 1;
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax31) == 10)) {
                v29 = eax31;
                goto addr_40740f_27;
            } else {
                v29 = v29 + 2;
                goto addr_4073f5_29;
            }
        }
        ++v29;
        v32 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffffff0);
        v33 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffffff);
        v34 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(*edi7) + reinterpret_cast<uint32_t>(esi8));
        eax35 = reinterpret_cast<int32_t>(ReadFile(v34, v33, 1, v32, 0, v20, v19, v17, v16, 0));
        if (eax35) 
            goto addr_4073c9_31;
        eax36 = reinterpret_cast<int32_t>(GetLastError(v34, v33, 1, v32, 0, v20, v19, v17, v16, 0));
        if (eax36) 
            goto addr_40740f_27;
        addr_4073c9_31:
        if (!v37) 
            goto addr_40740f_27;
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*edi7) + reinterpret_cast<uint32_t>(esi8) + 4) & 72) 
            goto addr_4073d8_34;
        if (ebx12 != a3 || v38 != 10) {
            fun_406dd9(a2, 0xff, 1, v34, v33, 1, v32, 0, v20, v19, v17, v16, 0);
            if (v39 == 10) {
                addr_407413_23:
                ecx28 = v30;
                if (reinterpret_cast<unsigned char>(v29) < reinterpret_cast<unsigned char>(ecx28)) 
                    continue; else 
                    goto addr_40741f_37;
            } else {
                addr_40740f_27:
                *reinterpret_cast<void***>(ebx12) = reinterpret_cast<void**>(13);
            }
        } else {
            addr_4073f5_29:
            *reinterpret_cast<void***>(ebx12) = reinterpret_cast<void**>(10);
        }
        addr_407412_38:
        ++ebx12;
        goto addr_407413_23;
        addr_4073d8_34:
        if (v40 == 10) 
            goto addr_4073f5_29;
        *reinterpret_cast<void***>(ebx12) = reinterpret_cast<void**>(13);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*edi7) + reinterpret_cast<uint32_t>(esi8) + 5) = v40;
        goto addr_407412_38;
    }
    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*edi7) + reinterpret_cast<uint32_t>(esi8) + 4) & 64)) {
        esi41 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*edi7) + reinterpret_cast<uint32_t>(esi8) + 4);
        *esi41 = reinterpret_cast<unsigned char>(*esi41 | 2);
        goto addr_407431_20;
    }
    addr_40741f_37:
    goto addr_407431_20;
    addr_4072f5_10:
    eax9 = reinterpret_cast<void**>(GetLastError(v20, v19, v17, v16, 0));
    if (!reinterpret_cast<int1_t>(eax9 == 5)) {
        if (!reinterpret_cast<int1_t>(eax9 == 0x6d)) {
            fun_408278(5, eax9, v20, v19, v17, v16, 0);
            goto addr_40744d_12;
        } else {
            addr_407312_4:
            eax22 = reinterpret_cast<void**>(0);
            goto addr_407450_13;
        }
    } else {
        g40ba54 = reinterpret_cast<void**>(5);
        goto addr_407443_11;
    }
}

int32_t GetSystemInfo = 0xa10c;

int32_t VirtualProtect = 0xa0ea;

int32_t fun_404640(void** ecx) {
    void* esp2;
    void* ebp3;
    void** edi4;
    void** esi5;
    void** ebx6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void* esi25;
    void* v26;
    void* v27;
    int32_t eax28;
    void* v29;
    void** eax30;
    uint32_t edi31;
    int32_t v32;
    void** esi33;
    uint32_t esi34;
    uint32_t esi35;
    int32_t v36;
    int32_t v37;
    uint32_t v38;
    int32_t v39;
    void* v40;
    int32_t v41;
    int32_t eax42;
    int32_t v43;
    uint32_t v44;
    uint32_t v45;
    unsigned char v46;
    void** eax47;
    uint32_t eax48;
    int32_t eax49;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebp3 = esp2;
    fun_403d30(ecx, edi4, esi5, ebx6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24);
    esi25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 76 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
    v26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp3) - 40);
    v27 = esi25;
    eax28 = reinterpret_cast<int32_t>(VirtualQuery(v27, v26, 28));
    if (!eax28) 
        goto addr_4046db_2;
    v29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp3) - 76);
    GetSystemInfo(v29, v27, v26, 28);
    eax30 = g40ba5c;
    edi31 = (reinterpret_cast<uint32_t>(~(v32 - 1)) & reinterpret_cast<uint32_t>(esi25)) - v32;
    esi33 = eax30 - 1;
    esi34 = -reinterpret_cast<unsigned char>(esi33);
    esi35 = ((esi34 - (esi34 + reinterpret_cast<uint1_t>(esi34 < esi34 + reinterpret_cast<uint1_t>(!!esi33))) & 0xfffffff1) + 17) * v32 + v36;
    v37 = v32;
    if (edi31 < esi35) 
        goto addr_4046db_2;
    if (eax30 == 1) {
        v38 = edi31;
    } else {
        v39 = v36;
        do {
            v40 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp3) - 40);
            v41 = v39;
            eax42 = reinterpret_cast<int32_t>(VirtualQuery(v41, v40, 28, v29, v27, v26, 28));
            if (!eax42) 
                goto addr_4046db_2;
            v39 = v39 + v43;
        } while (!(v44 & 0x1000));
        v38 = v45;
        if (!(v46 & 1)) 
            goto addr_4046d7_10; else 
            goto addr_4046d2_11;
    }
    addr_4046ff_12:
    eax47 = eax30 - 1;
    eax48 = -reinterpret_cast<unsigned char>(eax47);
    eax49 = reinterpret_cast<int32_t>(VirtualProtect(v38, v37, (eax48 - (eax48 + reinterpret_cast<uint1_t>(eax48 < eax48 + reinterpret_cast<uint1_t>(!!eax47))) & 0x103) + 1, reinterpret_cast<int32_t>(ebp3) - 12, v29, v27, v26, 28));
    addr_40471b_13:
    return eax49;
    addr_4046d7_10:
    if (edi31 >= v45) {
        if (v45 < esi35) {
            v38 = esi35;
        }
        VirtualAlloc(v38, v37, 0x1000, 4, v41, v40, 28, v29, v27, v26, 28);
        eax30 = g40ba5c;
        goto addr_4046ff_12;
    } else {
        addr_4046db_2:
        eax49 = 0;
        goto addr_40471b_13;
    }
    addr_4046d2_11:
    eax49 = 1;
    goto addr_40471b_13;
}

int32_t g40b5f0 = 1;

void** fun_404764(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void*** ebp10;
    void** v11;
    void** v12;
    int1_t zf13;
    void** ebx14;
    int1_t zf15;
    void** eax16;
    int1_t less_or_equal17;
    void** eax18;
    uint32_t eax19;
    void** edi20;
    void** esi21;
    void** ebx22;
    void** edx23;
    int32_t eax24;
    void** eax25;
    void** v26;
    void** v27;
    void** ebp28;
    void** eax29;
    uint32_t eax30;

    ebp10 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v11 = ecx;
    v12 = ecx;
    zf13 = g40bc54 == 0;
    ebx14 = a2;
    if (zf13 || (zf15 = g40b5f0 == 0, !zf15) && reinterpret_cast<unsigned char>(ebx14) <= reinterpret_cast<unsigned char>(0x7f)) {
        if (reinterpret_cast<signed char>(ebx14) < reinterpret_cast<signed char>(65) || (eax16 = ebx14 + 32, reinterpret_cast<signed char>(ebx14) > reinterpret_cast<signed char>(90))) {
            addr_404832_3:
            eax16 = ebx14;
            goto addr_404834_4;
        } else {
            addr_404834_4:
            return eax16;
        }
    } else {
        if (reinterpret_cast<unsigned char>(ebx14) < reinterpret_cast<unsigned char>(0x100)) {
            less_or_equal17 = reinterpret_cast<signed char>(g40b4a0) <= reinterpret_cast<signed char>(1);
            if (less_or_equal17) {
                eax18 = g40b490;
                eax19 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax18 + reinterpret_cast<unsigned char>(ebx14) * 2))) & reinterpret_cast<unsigned char>(1);
            } else {
                eax19 = fun_404318(ecx, ebx14, 1, edi20, esi21, ebx22);
            }
            if (!eax19) 
                goto addr_404832_3;
        }
        edx23 = g40b490;
        eax24 = reinterpret_cast<signed char>(ebx14) >> 8;
        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx23 + *reinterpret_cast<unsigned char*>(&eax24) * 2) + 1) & 0x80)) {
            *reinterpret_cast<unsigned char*>(&v11) = *reinterpret_cast<unsigned char*>(&ebx14);
            *reinterpret_cast<unsigned char*>(&v11 + 1) = 0;
            eax25 = reinterpret_cast<void**>(1);
        } else {
            *reinterpret_cast<unsigned char*>(&v11) = *reinterpret_cast<unsigned char*>(&eax24);
            *reinterpret_cast<unsigned char*>(&v11 + 1) = *reinterpret_cast<unsigned char*>(&ebx14);
            *reinterpret_cast<signed char*>(&v11 + 2) = 0;
            eax25 = reinterpret_cast<void**>(2);
        }
        v26 = g40bc64;
        v27 = g40bc54;
        eax29 = fun_407455(v27, 0x100, ebp10 + 0xfffffffc, eax25, ebp10 + 0xfffffff8, 3, v26, 1, edi20, esi21, ebx22, v12, v11, ebp28, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
        if (!eax29) 
            goto addr_404832_3;
        if (!reinterpret_cast<int1_t>(eax29 == 1)) {
            eax30 = 0;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax30) + 1) = *reinterpret_cast<unsigned char*>(&v12);
            eax16 = reinterpret_cast<void**>(eax30 | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v12 + 1)));
            goto addr_404834_4;
        } else {
            eax16 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v12)));
            goto addr_404834_4;
        }
    }
}

void** g40bc74 = reinterpret_cast<void**>(0);

int32_t LCMapStringW = 0xa264;

struct s162 {
    signed char[20] pad20;
    void** f20;
};

struct s163 {
    signed char[8] pad8;
    void** f8;
};

struct s164 {
    signed char[8] pad8;
    void** f8;
};

struct s165 {
    signed char[32] pad32;
    void** f32;
};

struct s166 {
    signed char[32] pad32;
    void** f32;
};

struct s167 {
    signed char[8] pad8;
    void** f8;
};

struct s168 {
    signed char[32] pad32;
    void** f32;
};

struct s169 {
    signed char[32] pad32;
    void** f32;
};

struct s170 {
    signed char[32] pad32;
    void** f32;
};

struct s171 {
    signed char[20] pad20;
    void** f20;
};

struct s172 {
    signed char[16] pad16;
    void** f16;
};

struct s173 {
    signed char[36] pad36;
    void** f36;
};

struct s174 {
    signed char[32] pad32;
    void** f32;
};

struct s175 {
    signed char[20] pad20;
    void** f20;
};

struct s176 {
    signed char[16] pad16;
    signed char* f16;
};

struct s177 {
    signed char[28] pad28;
    void** f28;
};

struct s178 {
    signed char[24] pad24;
    void** f24;
};

struct s179 {
    signed char[20] pad20;
    void** f20;
};

struct s180 {
    signed char[16] pad16;
    void** f16;
};

struct s181 {
    signed char[12] pad12;
    void** f12;
};

struct s182 {
    signed char[8] pad8;
    void** f8;
};

int32_t LCMapStringA = 0xa254;

struct s183 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
};

struct s184 {
    signed char[20] pad20;
    void** f20;
};

struct s185 {
    signed char[16] pad16;
    void** f16;
};

struct s186 {
    signed char[32] pad32;
    void** f32;
};

struct s187 {
    signed char[20] pad20;
    void** f20;
};

struct s188 {
    signed char[12] pad12;
    void** f12;
};

struct s189 {
    signed char[8] pad8;
    void** f8;
};

struct s190 {
    signed char[20] pad20;
    void** f20;
};

struct s191 {
    signed char[12] pad12;
    void** f12;
};

struct s192 {
    signed char[8] pad8;
    void** f8;
};

struct s193 {
    signed char[28] pad28;
    void** f28;
};

struct s194 {
    signed char[24] pad24;
    void** f24;
};

struct s195 {
    signed char[32] pad32;
    void** f32;
};

struct s196 {
    signed char[20] pad20;
    void** f20;
};

struct s197 {
    signed char[16] pad16;
    void** f16;
};

struct s198 {
    signed char[32] pad32;
    void** f32;
};

struct s199 {
    signed char[12] pad12;
    void** f12;
};

struct s200 {
    signed char[8] pad8;
    void** f8;
};

struct s201 {
    signed char[13] pad13;
    unsigned char f13;
};

struct s202 {
    signed char[28] pad28;
    void** f28;
};

struct s203 {
    signed char[28] pad28;
    void** f28;
};

struct s204 {
    signed char[28] pad28;
    int32_t f28;
};

struct s205 {
    signed char[24] pad24;
    int32_t f24;
};

struct s206 {
    signed char[12] pad12;
    int32_t f12;
};

struct s207 {
    signed char[8] pad8;
    int32_t f8;
};

struct s208 {
    signed char[12] pad12;
    int32_t f12;
};

struct s209 {
    signed char[8] pad8;
    int32_t f8;
};

struct s210 {
    signed char[28] pad28;
    void** f28;
};

struct s211 {
    signed char[28] pad28;
    void** f28;
};

struct s212 {
    signed char[24] pad24;
    void** f24;
};

struct s213 {
    signed char[32] pad32;
    int32_t f32;
};

struct s214 {
    signed char[20] pad20;
    uint32_t f20;
};

struct s215 {
    signed char[20] pad20;
    int32_t f20;
};

void** fun_407455(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23) {
    void** v24;
    void* esp25;
    int1_t zf26;
    int32_t eax27;
    int32_t eax28;
    struct s162* ebp29;
    void** eax30;
    int32_t ebp31;
    void** edi32;
    int32_t ebp33;
    struct s163* ebp34;
    void** eax35;
    struct s164* ebp36;
    struct s165* ebp37;
    void** eax38;
    struct s166* ebp39;
    void** v40;
    struct s167* ebp41;
    void** eax42;
    void** ecx43;
    int32_t ebp44;
    struct s168* ebp45;
    int32_t ebp46;
    int32_t ebp47;
    int32_t ebp48;
    struct s169* ebp49;
    void** eax50;
    struct s170* ebp51;
    void** v52;
    struct s171* ebp53;
    void** v54;
    struct s172* ebp55;
    int32_t eax56;
    struct s173* ebp57;
    void** v58;
    void** v59;
    struct s174* ebp60;
    void** eax61;
    int32_t ebp62;
    int32_t ebp63;
    void* esp64;
    int32_t ebp65;
    int32_t ebp66;
    int32_t ebp67;
    int32_t ebp68;
    struct s175* ebp69;
    signed char* eax70;
    struct s176* ebp71;
    void** v72;
    struct s177* ebp73;
    void** v74;
    struct s178* ebp75;
    void** v76;
    struct s179* ebp77;
    void** v78;
    struct s180* ebp79;
    void** v80;
    struct s181* ebp81;
    void** v82;
    struct s182* ebp83;
    int32_t ebp84;
    void** v85;
    int32_t ebp86;
    struct s183* esp87;
    int32_t ebp88;
    struct s184* ebp89;
    void** v90;
    struct s185* ebp91;
    void** v92;
    struct s186* ebp93;
    void** eax94;
    int32_t ebp95;
    struct s187* ebp96;
    struct s188* ebp97;
    struct s189* ebp98;
    void** eax99;
    int32_t ebp100;
    int32_t ebp101;
    void** esp102;
    int32_t ebp103;
    int32_t ebp104;
    int32_t ebp105;
    int32_t ebp106;
    void** v107;
    int32_t ebp108;
    void** v109;
    struct s190* ebp110;
    void** v111;
    int32_t ebp112;
    void** v113;
    struct s191* ebp114;
    void** v115;
    struct s192* ebp116;
    void** eax117;
    int32_t ebp118;
    void** v119;
    struct s193* ebp120;
    void** v121;
    struct s194* ebp122;
    void** v123;
    struct s195* ebp124;
    void** v125;
    int32_t ebp126;
    void* ebp127;
    void** v128;
    int32_t ebp129;
    void** eax130;
    void** v131;
    int32_t ebp132;
    int32_t ebp133;
    void** v134;
    int32_t ebp135;
    void** v136;
    struct s196* ebp137;
    void** v138;
    struct s197* ebp139;
    void** v140;
    struct s198* ebp141;
    int32_t eax142;
    void** v143;
    int32_t ebp144;
    void** v145;
    struct s199* ebp146;
    void** v147;
    struct s200* ebp148;
    void** eax149;
    int32_t ebp150;
    struct s201* ebp151;
    struct s202* ebp152;
    struct s203* ebp153;
    int32_t v154;
    struct s204* ebp155;
    int32_t v156;
    struct s205* ebp157;
    int32_t v158;
    int32_t ebp159;
    int32_t v160;
    struct s206* ebp161;
    int32_t v162;
    struct s207* ebp163;
    int32_t ebp164;
    void* esp165;
    int32_t ebp166;
    int32_t ebp167;
    int32_t ebp168;
    int32_t ebp169;
    int32_t v170;
    int32_t ebp171;
    int32_t v172;
    int32_t ebp173;
    int32_t v174;
    struct s208* ebp175;
    int32_t v176;
    struct s209* ebp177;
    int32_t eax178;
    struct s210* ebp179;
    void** v180;
    struct s211* ebp181;
    void** v182;
    struct s212* ebp183;
    int32_t v184;
    int32_t ebp185;
    int32_t v186;
    struct s213* ebp187;
    void** v188;
    void** eax189;
    int32_t ebp190;
    int32_t ebp191;
    void** v192;
    int32_t ebp193;
    int32_t ebp194;
    int32_t ebp195;
    void** v196;
    int32_t ebp197;
    void** v198;
    void** eax199;
    int32_t ebp200;
    int32_t ebp201;
    struct s214* ebp202;
    struct s215* ebp203;

    v24 = reinterpret_cast<void**>(__return_address());
    fun_403bd0(0x409d50, 56, v24);
    esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 + 4);
    zf26 = g40bc74 == 0;
    if (zf26) {
        eax27 = reinterpret_cast<int32_t>(LCMapStringW(0, 0x100, 0x409d3c, 1, 0, 0, 0x409d50, 56, v24));
        esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
        if (!eax27) {
            eax28 = reinterpret_cast<int32_t>(GetLastError(0, 0x100, 0x409d3c, 1, 0, 0, 0x409d50, 56, v24));
            esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) - 4 + 4);
            if (eax28 == 0x78) {
                g40bc74 = reinterpret_cast<void**>(2);
            }
        } else {
            g40bc74 = reinterpret_cast<void**>(1);
        }
    }
    if (reinterpret_cast<signed char>(ebp29->f20) <= reinterpret_cast<signed char>(0)) {
        addr_4074c3_7:
        eax30 = g40bc74;
        if (eax30 == 2 || !eax30) {
            *reinterpret_cast<void***>(ebp31 - 40) = reinterpret_cast<void**>(0);
            edi32 = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(ebp33 - 60) = reinterpret_cast<void**>(0);
            if (!ebp34->f8) {
                eax35 = g40bc54;
                ebp36->f8 = eax35;
            }
            if (!ebp37->f32) {
                eax38 = g40bc64;
                ebp39->f32 = eax38;
            }
            v40 = ebp41->f8;
            eax42 = fun_40850a(v40, 0x409d50, 56, v24);
            ecx43 = v40;
            *reinterpret_cast<void***>(ebp44 - 64) = eax42;
            if (reinterpret_cast<int1_t>(eax42 == 0xffffffff)) 
                goto addr_4076e0_13;
            if (eax42 != ebp45->f32) 
                goto addr_4076f0_15;
        } else {
            if (!reinterpret_cast<int1_t>(eax30 == 1)) 
                goto addr_4076e0_13;
            *reinterpret_cast<void***>(ebp46 - 44) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(ebp47 - 56) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(ebp48 - 52) = reinterpret_cast<void**>(0);
            if (!ebp49->f32) {
                eax50 = g40bc64;
                ebp51->f32 = eax50;
            }
            v52 = ebp53->f20;
            v54 = ebp55->f16;
            eax56 = 0;
            *reinterpret_cast<unsigned char*>(&eax56) = reinterpret_cast<uint1_t>(!!ebp57->f36);
            v58 = reinterpret_cast<void**>(eax56 * 8 + 1);
            v59 = ebp60->f32;
            eax61 = reinterpret_cast<void**>(MultiByteToWideChar(v59, v58, v54, v52, 0, 0, 0x409d50, 56, v24));
            *reinterpret_cast<void***>(ebp62 - 48) = eax61;
            if (!eax61) 
                goto addr_4076e0_13;
            *reinterpret_cast<int32_t*>(ebp63 - 4) = 1;
            fun_403d30(ecx43, v59, v58, v54, v52, 0, 0, 0x409d50, 56, v24, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
            esp64 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
            *reinterpret_cast<void**>(ebp65 - 24) = esp64;
            *reinterpret_cast<void**>(ebp66 - 28) = esp64;
            *reinterpret_cast<uint32_t*>(ebp67 - 4) = 0xffffffff;
            if (*reinterpret_cast<void***>(ebp68 - 28)) 
                goto addr_407587_22; else 
                goto addr_40756b_23;
        }
    } else {
        ecx43 = ebp69->f20;
        eax70 = ebp71->f16;
        do {
            --ecx43;
            if (!*eax70) 
                goto addr_4074bb_26;
            ++eax70;
        } while (ecx43);
        goto addr_4074b8_28;
    }
    v72 = ebp73->f28;
    v74 = ebp75->f24;
    v76 = ebp77->f20;
    v78 = ebp79->f16;
    v80 = ebp81->f12;
    v82 = ebp83->f8;
    LCMapStringA(ecx43, v82, v80, v78, v76, v74, v72, 0x409d50, 56, v24);
    addr_4077f8_30:
    if (*reinterpret_cast<void***>(ebp84 - 40)) {
        v85 = *reinterpret_cast<void***>(ebp86 - 40);
        fun_40403c(ecx43, v85, v82, v80, v78, v76, v74, v72, 0x409d50, 56, v24, a1, a2, a3, a4, a5, a6);
        ecx43 = v85;
    }
    addr_407808_33:
    esp87 = reinterpret_cast<struct s183*>(ebp88 - 84 - 4);
    esp87->f0 = 0x407810;
    fun_403c0b(ecx43, esp87->f4, esp87->f8, esp87->f12);
    goto esp87->f4;
    addr_4076f0_15:
    ecx43 = reinterpret_cast<void**>(&ebp89->f20);
    v90 = ebp91->f16;
    v92 = ebp93->f32;
    eax94 = fun_40854d(ecx43, v92, eax42, v90, ecx43, 0, 0, 0x409d50, 56, v24, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    *reinterpret_cast<void***>(ebp95 - 40) = eax94;
    if (!eax94) {
        addr_4076e0_13:
        goto addr_407808_33;
    } else {
        v72 = reinterpret_cast<void**>(0);
        v74 = reinterpret_cast<void**>(0);
        v76 = ebp96->f20;
        v78 = eax94;
        v80 = ebp97->f12;
        v82 = ebp98->f8;
        eax99 = reinterpret_cast<void**>(LCMapStringA(v82, v80, v78, v76, 0, 0, 0x409d50, 56, v24));
        *reinterpret_cast<void***>(ebp100 - 36) = eax99;
        if (eax99) {
            *reinterpret_cast<void***>(ebp101 - 4) = reinterpret_cast<void**>(0);
            fun_403d30(ecx43, v82, v80, v78, v76, 0, 0, 0x409d50, 56, v24, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
            esp102 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp25) - 4 - 4 + 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 24 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
            *reinterpret_cast<void***>(ebp103 - 24) = esp102;
            edi32 = esp102;
            *reinterpret_cast<void***>(ebp104 - 68) = edi32;
            fun_4045e0(ecx43, edi32, 0, eax99, v82, v80, v78, v76, 0, 0, 0x409d50, 56, v24);
            *reinterpret_cast<uint32_t*>(ebp105 - 4) = 0xffffffff;
            if (edi32) 
                goto addr_407789_38; else 
                goto addr_407766_39;
        }
    }
    addr_4077d0_40:
    if (*reinterpret_cast<void***>(ebp106 - 60)) {
        fun_40403c(ecx43, edi32, v82, v80, v78, v76, 0, 0, 0x409d50, 56, v24, a1, a2, a3, a4, a5, a6);
        ecx43 = edi32;
        goto addr_4077f8_30;
    }
    addr_407789_38:
    v107 = *reinterpret_cast<void***>(ebp108 - 36);
    v109 = ebp110->f20;
    v111 = *reinterpret_cast<void***>(ebp112 - 40);
    v113 = ebp114->f12;
    v115 = ebp116->f8;
    eax117 = reinterpret_cast<void**>(LCMapStringA(ecx43, v115, v113, v111, v109, edi32, v107, v82, v80, v78, v76, 0, 0, 0x409d50, 56, v24));
    *reinterpret_cast<void***>(ebp118 - 36) = eax117;
    if (eax117) {
        v119 = ebp120->f28;
        v121 = ebp122->f24;
        v123 = ebp124->f32;
        v125 = *reinterpret_cast<void***>(ebp126 - 64);
        fun_40854d(ecx43, v125, v123, edi32, reinterpret_cast<int32_t>(ebp127) + 0xffffffdc, v121, v119, v115, v113, v111, v109, edi32, v107, v82, v80, v78, v76, 0, 0, 0x409d50, 56, v24);
        goto addr_4077d0_40;
    } else {
        addr_4077a6_43:
        goto addr_4077d0_40;
    }
    addr_407766_39:
    v128 = *reinterpret_cast<void***>(ebp129 - 36);
    eax130 = fun_403ddf(ecx43, v128, v82, v80, v78, v76, 0, 0, 0x409d50, 56, v24, a1, a2, a3, a4, a5, a6);
    ecx43 = v128;
    edi32 = eax130;
    if (!edi32) 
        goto addr_4077a6_43;
    v131 = *reinterpret_cast<void***>(ebp132 - 36);
    fun_4045e0(ecx43, edi32, 0, v131, v82, v80, v78, v76, 0, 0, 0x409d50, 56, v24);
    *reinterpret_cast<int32_t*>(ebp133 - 60) = 1;
    goto addr_407789_38;
    addr_407587_22:
    v134 = *reinterpret_cast<void***>(ebp135 - 28);
    v136 = ebp137->f20;
    v138 = ebp139->f16;
    v140 = ebp141->f32;
    eax142 = reinterpret_cast<int32_t>(MultiByteToWideChar(ecx43, v140, 1, v138, v136, v134, eax61, v59, v58, v54, v52, 0, 0, 0x409d50, 56, v24));
    if (!eax142) 
        goto addr_40768a_45;
    v143 = *reinterpret_cast<void***>(ebp144 - 28);
    v145 = ebp146->f12;
    v147 = ebp148->f8;
    eax149 = reinterpret_cast<void**>(LCMapStringW(ecx43, v147, v145, v143, eax61, 0, 0, v140, 1, v138, v136, v134, eax61, v59, v58, v54, v52, 0, 0, 0x409d50, 56, v24));
    *reinterpret_cast<void***>(ebp150 - 44) = eax149;
    if (!eax149) 
        goto addr_40768a_45;
    if (ebp151->f13 & 4) {
        if (ebp152->f28 && reinterpret_cast<signed char>(eax149) <= reinterpret_cast<signed char>(ebp153->f28)) {
            v154 = ebp155->f28;
            v156 = ebp157->f24;
            v158 = *reinterpret_cast<int32_t*>(ebp159 - 28);
            v160 = ebp161->f12;
            v162 = ebp163->f8;
            LCMapStringW(ecx43, v162, v160, v158, eax61, v156, v154, v147, v145, v143, eax61, 0, 0, v140, 1, v138, v136, v134, eax61, v59, v58, v54, v52, 0, 0, 0x409d50, 56, v24);
            goto addr_40768a_45;
        }
    }
    *reinterpret_cast<int32_t*>(ebp164 - 4) = 2;
    fun_403d30(ecx43, v147, v145, v143, eax61, 0, 0, v140, 1, v138, v136, v134, eax61, v59, v58, v54, v52, 0, 0, 0x409d50, 56, v24);
    esp165 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp64) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
    *reinterpret_cast<void**>(ebp166 - 24) = esp165;
    *reinterpret_cast<void**>(ebp167 - 32) = esp165;
    *reinterpret_cast<uint32_t*>(ebp168 - 4) = 0xffffffff;
    if (!*reinterpret_cast<void***>(ebp169 - 32)) 
        goto addr_407639_52;
    addr_407651_53:
    v170 = *reinterpret_cast<int32_t*>(ebp171 - 32);
    v172 = *reinterpret_cast<int32_t*>(ebp173 - 28);
    v174 = ebp175->f12;
    v176 = ebp177->f8;
    eax178 = reinterpret_cast<int32_t>(LCMapStringW(ecx43, v176, v174, v172, eax61, v170, eax149, v147, v145, v143, eax61, 0, 0, v140, 1, v138, v136, v134, eax61, v59, v58, v54, v52, 0, 0, 0x409d50, 56, v24));
    if (eax178) {
        if (ebp179->f28) {
            v180 = ebp181->f28;
            v182 = ebp183->f24;
        } else {
            v180 = reinterpret_cast<void**>(0);
            v182 = reinterpret_cast<void**>(0);
        }
        v184 = *reinterpret_cast<int32_t*>(ebp185 - 32);
        v186 = ebp187->f32;
        WideCharToMultiByte(ecx43, v186, 0, v184, eax149, v182, v180, 0, 0, v176, v174, v172, eax61, v170, eax149, v147, v145, v143, eax61, 0, 0, v140, 1, v138, v136, v134, eax61, v59, v58, v54, v52, 0, 0, 0x409d50, 56, v24);
        goto addr_40768a_45;
    }
    addr_407639_52:
    v188 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax149) + reinterpret_cast<unsigned char>(eax149));
    eax189 = fun_403ddf(ecx43, v188, v147, v145, v143, eax61, 0, 0, v140, 1, v138, v136, v134, eax61, v59, v58, v54, ecx43, v188, v147, v145, v143, eax61, 0, 0, v140, 1, v138, v136, v134, eax61, v59, v58, v54);
    ecx43 = v188;
    *reinterpret_cast<void***>(ebp190 - 32) = eax189;
    if (!eax189) {
        addr_40768a_45:
        if (*reinterpret_cast<void***>(ebp191 - 52)) {
            v192 = *reinterpret_cast<void***>(ebp193 - 32);
            fun_40403c(ecx43, v192, v140, 1, v138, v136, v134, eax61, v59, v58, v54, v52, 0, 0, 0x409d50, 56, v24);
            ecx43 = v192;
        }
    } else {
        *reinterpret_cast<int32_t*>(ebp194 - 52) = 1;
        goto addr_407651_53;
    }
    if (*reinterpret_cast<void***>(ebp195 - 56)) {
        v196 = *reinterpret_cast<void***>(ebp197 - 28);
        fun_40403c(ecx43, v196, v140, 1, v138, v136, v134, eax61, v59, v58, v54, v52, 0, 0, 0x409d50, 56, v24);
        ecx43 = v196;
    }
    goto addr_407808_33;
    addr_40756b_23:
    v198 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax61) + reinterpret_cast<unsigned char>(eax61));
    eax199 = fun_403ddf(ecx43, v198, v59, v58, v54, v52, 0, 0, 0x409d50, 56, v24, a1, a2, a3, a4, a5, a6);
    ecx43 = v198;
    esp64 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp64) - 4 - 4 + 4 + 4);
    *reinterpret_cast<void***>(ebp200 - 28) = eax199;
    if (!eax199) 
        goto addr_4076e0_13;
    *reinterpret_cast<int32_t*>(ebp201 - 56) = 1;
    goto addr_407587_22;
    addr_4074bb_26:
    ebp202->f20 = ebp203->f20 + (-1 - reinterpret_cast<unsigned char>(ecx43));
    goto addr_4074c3_7;
    addr_4074b8_28:
    ecx43 = reinterpret_cast<void**>(0xffffffff);
    goto addr_4074bb_26;
}

void fun_40508f(void** ecx, struct s135* a2, struct s24* a3) {
    uint32_t eax4;
    uint32_t v5;
    uint32_t ecx6;
    uint32_t v7;
    uint32_t edx8;
    uint32_t ebx9;
    uint32_t eax10;
    uint32_t edi11;
    uint32_t ecx12;
    struct s135* eax13;
    uint32_t edx14;
    uint32_t ecx15;
    uint32_t ecx16;

    eax4 = 0;
    *reinterpret_cast<int16_t*>(&eax4) = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(a3) + 6);
    v5 = 0x80000000;
    ecx6 = eax4 >> 4 & 0x7ff;
    v7 = eax4 & 0x8000;
    edx8 = a3->f0;
    ebx9 = *reinterpret_cast<uint16_t*>(&ecx6);
    eax10 = a3->f4 & 0xfffff;
    if (!ebx9) {
        if (eax10 || edx8) {
            edi11 = ecx6 + 0x3c01;
            v5 = 0;
        } else {
            a2->f4 = 0;
            a2->f0 = 0;
            a2->f8 = 0;
            goto addr_405144_5;
        }
    } else {
        if (ebx9 == 0x7ff) {
            edi11 = 0x7fff;
        } else {
            edi11 = ecx6 + 0x3c00;
        }
    }
    ecx12 = edx8 >> 21 | eax10 << 11 | v5;
    eax13 = a2;
    eax13->f4 = ecx12;
    eax13->f0 = edx8 << 11;
    if (!(0x80000000 & ecx12)) {
        do {
            edx14 = eax13->f4 << 1 | eax13->f0 >> 31;
            ecx15 = eax13->f0 + eax13->f0;
            edi11 = edi11 + 0xffff;
            eax13->f4 = edx14;
            eax13->f0 = ecx15;
        } while (!(0x80000000 & edx14));
    }
    ecx16 = v7 | edi11;
    eax13->f8 = *reinterpret_cast<int16_t*>(&ecx16);
    addr_405144_5:
    return;
}

uint32_t fun_4051c6() {
    uint32_t eax1;
    unsigned char bl2;
    unsigned char bl3;
    unsigned char bl4;
    unsigned char bl5;
    unsigned char bl6;
    unsigned char bl7;
    uint32_t edx8;
    uint16_t bx9;
    uint32_t ecx10;
    uint32_t edx11;
    unsigned char bh12;

    eax1 = 0;
    if (bl2 & 1) {
        eax1 = 16;
    }
    if (bl3 & 4) {
        eax1 = eax1 | 8;
    }
    if (bl4 & 8) {
        eax1 = eax1 | 4;
    }
    if (bl5 & 16) {
        eax1 = eax1 | 2;
    }
    if (bl6 & 32) {
        eax1 = eax1 | 1;
    }
    if (bl7 & 2) {
        eax1 = eax1 | 0x80000;
    }
    edx8 = bx9;
    ecx10 = edx8 & 0xc00;
    if (ecx10) {
        if (ecx10 == 0x400) {
            eax1 = eax1 | 0x100;
        } else {
            if (ecx10 == 0x800) {
                eax1 = eax1 | 0x200;
            } else {
                if (ecx10 == 0xc00) {
                    eax1 = eax1 | 0x300;
                }
            }
        }
    }
    edx11 = edx8 & 0x300;
    if (!edx11) {
        eax1 = eax1 | 0x20000;
    } else {
        if (edx11 == 0x200) {
            eax1 = eax1 | 0x10000;
        }
    }
    if (bh12 & 16) {
        eax1 = eax1 | 0x40000;
    }
    return eax1;
}

void** g40bc6c = reinterpret_cast<void**>(0);

struct s216 {
    signed char[8] pad8;
    int32_t f8;
};

struct s217 {
    signed char[12] pad12;
    void** f12;
};

uint32_t g409d3c = 0;

void** g409d40 = reinterpret_cast<void**>(0xff);

void** g409d4c = reinterpret_cast<void**>(0);

void fun_406f0f(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** eax16;
    int32_t ebp17;
    void** eax18;
    void** ecx19;
    struct s216* ebp20;
    void** edi21;
    int32_t ebp22;
    int32_t ebp23;
    int32_t ebp24;
    void** v25;
    void* ebp26;
    int32_t eax27;
    void* esp28;
    void* ebp29;
    void** ebx30;
    void* ebp31;
    void** eax32;
    void** ecx33;
    void* esp34;
    void** v35;
    void** eax36;
    int32_t ebp37;
    void** ecx38;
    void** esp39;
    int32_t ebp40;
    void** esi41;
    void** v42;
    int32_t ebp43;
    int32_t ebp44;
    void** v45;
    struct s217* ebp46;
    int32_t ebp47;
    uint32_t eax48;
    void** v49;
    uint32_t eax50;
    void** eax51;

    fun_403bd0(0x409d30, 0x118, __return_address());
    eax16 = g40b498;
    *reinterpret_cast<void***>(ebp17 - 28) = eax16;
    eax18 = g40bc6c;
    ecx19 = reinterpret_cast<void**>(0);
    if (!eax18) {
        if (!(ebp20->f8 - 1)) {
            edi21 = reinterpret_cast<void**>(0x409c38);
            *reinterpret_cast<int32_t*>(ebp22 - 0x128) = reinterpret_cast<int32_t>("A buffer overrun has been detected which has corrupted the program's\ninternal state.  The program cannot safely continue execution and must\nnow be terminated.\n");
        } else {
            edi21 = reinterpret_cast<void**>(0x409d0c);
            *reinterpret_cast<int32_t*>(ebp23 - 0x128) = reinterpret_cast<int32_t>("A security error of unknown cause has been detected which has\ncorrupted the program's internal state.  The program cannot safely\ncontinue execution and must now be terminated.\n");
        }
        *reinterpret_cast<signed char*>(ebp24 - 32) = 0;
        v25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp26) + 0xfffffedc);
        eax27 = reinterpret_cast<int32_t>(GetModuleFileNameA(0, v25, 0x104));
        esp28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 + 4);
        if (!eax27) {
            fun_404f20(0, reinterpret_cast<int32_t>(ebp29) + 0xfffffedc, 0x4095cc, 0, v25, 0x104);
            ecx19 = reinterpret_cast<void**>(0x4095cc);
            esp28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp28) - 4 - 4 - 4 + 4 + 4 + 4);
        }
        ebx30 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp31) + 0xfffffedc);
        eax32 = fun_404080(ecx19, ebx30, 0, v25, 0x104, 0x409d30, 0x118, __return_address(), a1);
        ecx33 = ebx30;
        esp34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp28) - 4 - 4 + 4 + 4);
        if (reinterpret_cast<uint32_t>(eax32 + 11) > 60) {
            v35 = ebx30;
            eax36 = fun_404080(ecx33, v35, 0, v25, 0x104, 0x409d30, 0x118, __return_address(), a1);
            ebx30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax36) + (ebp37 - 0x124 - 49));
            fun_4054f0(ecx33, ebx30, 0x4095c8, 3, v35, 0, v25, 0x104);
            esp34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp34) - 4 - 4 + 4 - 4 - 4 - 4 - 4 + 4 + 16);
        }
        fun_404080(ecx33, ebx30, 0, v25, 0x104, 0x409d30, 0x118, __return_address(), a1);
        ecx38 = ebx30;
        fun_403d30(ecx38, 0, v25, 0x104, 0x409d30, 0x118, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
        esp39 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp34) - 4 - 4 + 4 + 4 - 4 + 4);
        *reinterpret_cast<void***>(ebp40 - 24) = esp39;
        esi41 = esp39;
        fun_404f20(ecx38, esi41, edi21, 0, v25, 0x104);
        fun_404f30(ecx38, esi41, 0x4095a8, esi41, edi21, 0, v25, 0x104, 0x409d30, 0x118, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8);
        fun_404f30(ecx38, esi41, 0x409b8c, esi41, 0x4095a8, esi41, edi21, 0, v25, 0x104, 0x409d30, 0x118, __return_address(), a1, a2, a3, a4, a5, a6);
        fun_404f30(ecx38, esi41, ebx30, esi41, 0x409b8c, esi41, 0x4095a8, esi41, edi21, 0, v25, 0x104, 0x409d30, 0x118, __return_address(), a1, a2, a3, a4);
        fun_404f30(ecx38, esi41, 0x4095a8, esi41, ebx30, esi41, 0x409b8c, esi41, 0x4095a8, esi41, edi21, 0, v25, 0x104, 0x409d30, 0x118, __return_address(), a1, a2);
        v42 = *reinterpret_cast<void***>(ebp43 - 0x128);
        fun_404f30(ecx38, esi41, v42, esi41, 0x4095a8, esi41, ebx30, esi41, 0x409b8c, esi41, 0x4095a8, esi41, edi21, 0, v25, 0x104, 0x409d30, 0x118, __return_address());
        fun_4053ea(ecx38, esi41, "Microsoft Visual C++ Runtime Library");
    } else {
        *reinterpret_cast<void***>(ebp44 - 4) = reinterpret_cast<void**>(0);
        v45 = ebp46->f12;
        eax18();
        ecx38 = v45;
        *reinterpret_cast<uint32_t*>(ebp47 - 4) = 0xffffffff;
    }
    fun_4031eb(ecx38);
    eax48 = g409d3c;
    if (!(*reinterpret_cast<unsigned char*>(&eax48) & 64)) {
        if (*reinterpret_cast<unsigned char*>(&eax48) & 0x83) {
            fun_403e18(ecx38, 0x409d30);
            fun_4084df(ecx38, 0x409d30, 0x409d30, 0x4095a8, esi41, 3, 0x409d30, 0x118, __return_address(), a1, a2, a3, a4, a5);
            v49 = g409d40;
            eax50 = fun_40842c(ecx38, v49, 0x409d30, 0x409d30);
            if (reinterpret_cast<int32_t>(eax50) >= reinterpret_cast<int32_t>(0)) {
                eax51 = g409d4c;
                if (eax51) {
                    fun_40403c(ecx38, eax51, 0x4095a8, esi41, 3, 0x409d30, 0x118, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9);
                    g409d4c = reinterpret_cast<void**>(0);
                }
            }
        }
    }
    g409d3c = 0;
    goto 3;
}

int32_t GetLocaleInfoA = 0xa29e;

struct s218 {
    unsigned char f0;
    unsigned char f1;
};

uint32_t fun_4089ce(struct s218* a1, void** a2, void** a3, void** a4, void** a5);

void** fun_40850a(void** a1, void** a2, void** a3, void** a4) {
    void*** ebp5;
    void** eax6;
    void** v7;
    void** v8;
    int32_t eax9;
    void** v10;
    void** ebp11;
    void** eax12;

    ebp5 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax6 = g40b498;
    v7 = reinterpret_cast<void**>(ebp5 + 0xfffffff4);
    *reinterpret_cast<signed char*>(&v8 + 2) = 0;
    eax9 = reinterpret_cast<int32_t>(GetLocaleInfoA(a1, 0x1004, v7, 6));
    if (eax9) {
        fun_4089ce(ebp5 - 12, a1, 0x1004, v7, 6);
    }
    eax12 = fun_4041a2(eax6, a1, 0x1004, v7, 6, v10, v8, eax6, ebp11, __return_address(), a1);
    return eax12;
}

int32_t HeapSize = 0xa274;

struct s136* fun_408240(void** ecx, void** a2) {
    int1_t zf3;
    void** esi4;
    void** eax5;

    zf3 = g40bec4 == 3;
    if (zf3) {
        eax5 = fun_405d85(ecx, a2, esi4, __return_address(), a2);
        ecx = a2;
        if (eax5) {
            return *reinterpret_cast<void***>(a2 + 0xfffffffc) - 9;
        }
    }
    HeapSize(ecx);
    goto 0;
}

struct s219 {
    uint32_t f0;
    unsigned char f4;
};

int32_t SetStdHandle = 0xa280;

uint32_t fun_408376(void** ecx, void** a2) {
    int1_t cf3;
    uint32_t** edi4;
    void* esi5;
    struct s219* eax6;
    uint32_t eax7;
    int1_t zf8;
    void** ecx9;
    int32_t v10;
    void** ecx11;

    cf3 = reinterpret_cast<unsigned char>(a2) < reinterpret_cast<unsigned char>(g40bec8);
    if (!cf3 || ((edi4 = reinterpret_cast<uint32_t**>((reinterpret_cast<signed char>(a2) >> 5) * 4 + 0x40bee0), esi5 = reinterpret_cast<void*>((reinterpret_cast<unsigned char>(a2) & 31) << 3), eax6 = reinterpret_cast<struct s219*>(reinterpret_cast<int32_t>(*edi4) + reinterpret_cast<uint32_t>(esi5)), (eax6->f4 & 1) == 0) || eax6->f0 == 0xffffffff)) {
        g40ba54 = reinterpret_cast<void**>(0);
        g40ba50 = reinterpret_cast<void**>(9);
        eax7 = 0xffffffff;
    } else {
        zf8 = g40b0bc == 1;
        if (!zf8) 
            goto addr_4083cf_4;
        ecx9 = a2;
        if (!ecx9) 
            goto addr_4083c6_6; else 
            goto addr_4083b6_7;
    }
    addr_4083ed_8:
    return eax7;
    addr_4083c6_6:
    v10 = 0xf6;
    addr_4083c9_9:
    SetStdHandle(v10, 0);
    goto addr_4083cf_4;
    addr_4083b6_7:
    ecx11 = ecx9 - 1;
    if (!ecx11) {
        v10 = 0xf5;
        goto addr_4083c9_9;
    } else {
        if (ecx11 - 1) {
            addr_4083cf_4:
            *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(esi5) + reinterpret_cast<int32_t>(*edi4)) = 0xffffffff;
            eax7 = 0;
            goto addr_4083ed_8;
        } else {
            v10 = 0xf4;
            goto addr_4083c9_9;
        }
    }
}

uint32_t fun_4089ce(struct s218* a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** esi7;
    struct s218* esi8;
    void** v9;
    void** ecx10;
    uint32_t eax11;
    uint32_t ecx12;
    unsigned char* esi13;
    uint32_t edx14;
    uint32_t eax15;
    uint32_t ecx16;

    v6 = esi7;
    esi8 = a1;
    while (v9 = reinterpret_cast<void**>(static_cast<uint32_t>(esi8->f0)), eax11 = fun_408a26(ecx10, v9, v6), ecx10 = v9, !!eax11) {
        esi8 = reinterpret_cast<struct s218*>(&esi8->f1);
    }
    ecx12 = esi8->f0;
    esi13 = &esi8->f1;
    edx14 = ecx12;
    if (ecx12 == 45 || ecx12 == 43) {
        ecx12 = *esi13;
        ++esi13;
    }
    eax15 = 0;
    while (1) {
        if (reinterpret_cast<int32_t>(ecx12) < reinterpret_cast<int32_t>(48) || reinterpret_cast<int32_t>(ecx12) > reinterpret_cast<int32_t>(57)) {
            ecx16 = 0xffffffff;
        } else {
            ecx16 = ecx12 - 48;
        }
        if (ecx16 == 0xffffffff) 
            break;
        eax15 = ecx16 + (eax15 + eax15 * 4) * 2;
        ecx12 = *esi13;
        ++esi13;
    }
    if (edx14 == 45) {
        eax15 = -eax15;
    }
    return eax15;
}

void** fun_402fb3(void** ecx, void** a2, void** a3, int32_t a4, void** a5, int32_t a6);

struct s220 {
    void** f0;
    void** f1;
};

void fun_402c7b(struct s220* a1);

struct s221 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void fun_402ce0(void** ecx, void** a2, struct s221* a3, void** a4);

void fun_402c23(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6);

int32_t g40b358 = 0x4051bd;

int32_t fun_402cc6(int32_t a1);

int32_t g40b35c = 0x4051bd;

void fun_40112c() {
    g40b348 = reinterpret_cast<int32_t>(fun_402fb3);
    g40b34c = reinterpret_cast<int32_t>(fun_402c7b);
    g40b350 = reinterpret_cast<int32_t>(fun_402ce0);
    g40b354 = reinterpret_cast<int32_t>(fun_402c23);
    g40b358 = reinterpret_cast<int32_t>(fun_402cc6);
    g40b35c = reinterpret_cast<int32_t>(fun_402fb3);
    return;
}

int32_t fun_404b47(struct s6* a1, void** a2, struct s5* a3, void*** a4, void** a5, void** a6, void* a7, uint32_t a8, int32_t a9) {
    int32_t eax10;

    eax10 = fun_4049d9(__return_address(), a1, 0x40b4c8);
    return eax10;
}

void fun_404ce7() {
    __asm__("in al, 0x8b");
}

void fun_404e83(int32_t ecx) {
    int32_t eax2;
    signed char al3;
    unsigned char al4;
    uint1_t cf5;
    void* edi6;
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

    *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(al3 - reinterpret_cast<unsigned char>(0x75 - reinterpret_cast<uint1_t>(al4 < reinterpret_cast<unsigned char>(0x75 - cf5))));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi6) + ecx * 4 + 24) = eax2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi7) + ecx * 4 + 20) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi8) + ecx * 4 + 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi9) + ecx * 4 + 16) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi10) + ecx * 4 + 16);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi11) + ecx * 4 + 12) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi12) + ecx * 4 + 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi13) + ecx * 4 + 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi14) + ecx * 4 + 8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi15) + ecx * 4 + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi16) + ecx * 4 + 4);
}

void fun_405b07() {
    __asm__("in al, 0x8b");
}

void fun_405ca3(int32_t ecx) {
    int32_t eax2;
    signed char al3;
    unsigned char al4;
    uint1_t cf5;
    void* edi6;
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

    *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(al3 - reinterpret_cast<unsigned char>(0x75 - reinterpret_cast<uint1_t>(al4 < reinterpret_cast<unsigned char>(0x75 - cf5))));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi6) + ecx * 4 + 24) = eax2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi7) + ecx * 4 + 20) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi8) + ecx * 4 + 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi9) + ecx * 4 + 16) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi10) + ecx * 4 + 16);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi11) + ecx * 4 + 12) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi12) + ecx * 4 + 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi13) + ecx * 4 + 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi14) + ecx * 4 + 8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi15) + ecx * 4 + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi16) + ecx * 4 + 4);
}

int32_t GetVersionExA = 0x9f2e;

void** g40ba6c = reinterpret_cast<void**>(0);

uint32_t g40ba60 = 0;

void*** g40ba64 = reinterpret_cast<void***>(0);

struct s222 {
    int16_t f0;
    signed char[58] pad60;
    int32_t f60;
};

struct s223 {
    int32_t f0;
    signed char[20] pad24;
    uint16_t f24;
    signed char[90] pad116;
    uint32_t f116;
    signed char[12] pad132;
    uint32_t f132;
    signed char[96] pad232;
    void** f232;
    signed char[15] pad248;
    void** f248;
};

int32_t GetCommandLineA = 0x9f1c;

void** g40ba80 = reinterpret_cast<void**>(0);

struct s224 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
};

void fun_4011a7(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19) {
    void** esp20;
    int32_t ebp21;
    uint32_t esi22;
    struct s222* eax23;
    struct s223* ecx24;
    uint32_t eax25;
    int32_t ebp26;
    int32_t eax27;
    int1_t zf28;
    int32_t eax29;
    void** ecx30;
    int1_t zf31;
    int32_t ebp32;
    uint32_t eax33;
    void** eax34;
    void** eax35;
    uint32_t eax36;
    uint32_t eax37;
    void** eax38;
    void** ecx39;
    int32_t ebp40;
    void** eax41;
    void** v42;
    void** v43;
    int32_t eax44;
    int32_t ebp45;
    int32_t ebp46;
    int32_t ebp47;
    struct s224* esp48;
    int32_t ebp49;
    int32_t ebp50;

    fun_403bd0(0x4090d8, 24, __return_address());
    fun_403d30(ecx, 0x4090d8, 24, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
    esp20 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 + 4 - 4 + 4);
    *reinterpret_cast<void***>(ebp21 - 24) = esp20;
    GetVersionExA(esp20, 0x94);
    g40ba5c = a3;
    g40ba68 = 24;
    g40ba6c = reinterpret_cast<void**>(__return_address());
    esi22 = reinterpret_cast<unsigned char>(a2) & 0x7fff;
    g40ba60 = esi22;
    if (a3 != 2) {
        g40ba60 = esi22 | 0x8000;
    }
    g40ba64 = reinterpret_cast<void***>(0x1800 + reinterpret_cast<unsigned char>(__return_address()));
    eax23 = reinterpret_cast<struct s222*>(GetModuleHandleA(0, esp20, 0x94));
    if (eax23->f0 != 0x5a4d) 
        goto addr_401240_4;
    ecx24 = reinterpret_cast<struct s223*>(eax23->f60 + reinterpret_cast<int32_t>(eax23));
    if (ecx24->f0 != 0x4550) 
        goto addr_401240_4;
    eax25 = ecx24->f24;
    if (eax25 == 0x10b) {
        if (ecx24->f116 <= 14) {
            addr_401240_4:
            *reinterpret_cast<void***>(ebp26 - 28) = reinterpret_cast<void**>(0);
        } else {
            eax27 = 0;
            zf28 = ecx24->f232 == 0;
            goto addr_401266_9;
        }
    } else {
        if (eax25 != 0x20b) 
            goto addr_401240_4;
        if (ecx24->f132 <= 14) 
            goto addr_401240_4;
        eax27 = 0;
        zf28 = ecx24->f248 == 0;
        goto addr_401266_9;
    }
    addr_40126c_13:
    eax29 = fun_403b7f(0, 0, esp20, 0x94);
    ecx30 = reinterpret_cast<void**>(0);
    if (!eax29) {
        zf31 = reinterpret_cast<int1_t>(g40ba30 == 2);
        if (!zf31) {
            fun_403391(0, 0, esp20, 0x94);
        }
        fun_40321a(0, 28, 0, esp20, 0x94);
        fun_40307f(0, 0xff);
        ecx30 = reinterpret_cast<void**>(28);
    }
    fun_403add(ecx30, 0, esp20, 0x94);
    *reinterpret_cast<void***>(ebp32 - 4) = reinterpret_cast<void**>(0);
    eax33 = fun_403932(ecx30, 0, esp20, 0x94);
    if (reinterpret_cast<int32_t>(eax33) < reinterpret_cast<int32_t>(0)) {
        fun_401182(ecx30, 27, 0, esp20, 0x94);
        ecx30 = reinterpret_cast<void**>(27);
    }
    eax34 = reinterpret_cast<void**>(GetCommandLineA(ecx30, 0, esp20, 0x94));
    g40d004 = eax34;
    eax35 = fun_403810(ecx30, 0, esp20, 0x94, 24, __return_address(), a2, a3, a4);
    g40ba28 = eax35;
    eax36 = fun_40376e(ecx30, 0, esp20, 0x94);
    if (reinterpret_cast<int32_t>(eax36) < reinterpret_cast<int32_t>(0)) {
        fun_401182(ecx30, 8, 0, esp20, 0x94);
        ecx30 = reinterpret_cast<void**>(8);
    }
    eax37 = fun_40353b(ecx30, 0, esp20, 0x94, 24, __return_address(), a2, a3, a4, a5, a6, a7);
    if (reinterpret_cast<int32_t>(eax37) < reinterpret_cast<int32_t>(0)) {
        fun_401182(ecx30, 9, 0, esp20, 0x94);
        ecx30 = reinterpret_cast<void**>(9);
    }
    eax38 = fun_4030af(ecx30, 1, 0, esp20, 0x94);
    ecx39 = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(ebp40 - 36) = eax38;
    if (eax38) {
        fun_401182(1, eax38, 0, esp20, 0x94);
        ecx39 = eax38;
    }
    eax41 = g40ba7c;
    g40ba80 = eax41;
    v42 = g40ba74;
    v43 = g40ba70;
    eax44 = fun_401000(ecx39, v43, v42, eax41, 0, esp20, 0x94, 24, __return_address());
    *reinterpret_cast<int32_t*>(ebp45 - 40) = eax44;
    if (!*reinterpret_cast<void***>(ebp46 - 28)) {
        fun_4031da(ecx39, eax44, 0, esp20, 0x94);
    }
    fun_4031fc(ecx39, 0, esp20, 0x94);
    *reinterpret_cast<uint32_t*>(ebp47 - 4) = 0xffffffff;
    esp48 = reinterpret_cast<struct s224*>(ebp49 - 52 - 4);
    esp48->f0 = 0x40136d;
    fun_403c0b(ecx39, esp48->f4, esp48->f8, esp48->f12);
    goto esp48->f4;
    addr_401266_9:
    *reinterpret_cast<unsigned char*>(&eax27) = reinterpret_cast<uint1_t>(!zf28);
    *reinterpret_cast<int32_t*>(ebp50 - 28) = eax27;
    goto addr_40126c_13;
}

uint32_t fun_401334() {
    struct s132* eax1;
    int32_t ebp2;
    void** ecx3;
    int32_t ebp4;
    uint32_t eax5;

    eax1 = *reinterpret_cast<struct s132**>(ebp2 - 20);
    ecx3 = *reinterpret_cast<void***>(eax1->f0);
    *reinterpret_cast<void***>(ebp4 - 32) = ecx3;
    eax5 = fun_4033ca(ecx3, eax1);
    return eax5;
}

signed char g1e004016;

void fun_401c9a(void** ecx) {
    uint48_t v2;
    int32_t ebp3;
    int32_t edx4;
    int32_t ebp5;
    int32_t edx6;
    unsigned char tmp8_7;
    int32_t ebp8;
    signed char dh9;
    uint1_t cf10;
    int32_t ebp11;
    int32_t ebp12;
    signed char tmp8_13;
    signed char bh14;
    void** eax15;
    void* eax16;
    void** esi17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** eax27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void* edx37;
    int32_t ecx38;
    uint32_t edx39;
    uint32_t* ecx40;

    *reinterpret_cast<int32_t*>(&v2) = reinterpret_cast<int32_t>(__return_address());
    __asm__("fcom qword [esi]");
    *reinterpret_cast<signed char*>(ebp3 + edx4 + 64) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp5 + edx6 + 64) + *reinterpret_cast<signed char*>(&ecx));
    *reinterpret_cast<signed char*>(ecx + 21) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ecx + 21) + *reinterpret_cast<signed char*>(&ecx + 1));
    tmp8_7 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(ebp8 - 0x9ffbfeb) + dh9);
    cf10 = reinterpret_cast<uint1_t>(tmp8_7 < *reinterpret_cast<unsigned char*>(ebp11 - 0x9ffbfeb));
    *reinterpret_cast<unsigned char*>(ebp12 - 0x9ffbfeb) = tmp8_7;
    tmp8_13 = reinterpret_cast<signed char>(g1e004016 + bh14);
    g1e004016 = tmp8_13;
    eax15 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax16) + 1 + 1 + 0x15ff0040 + cf10 + 1 + 1);
    *reinterpret_cast<signed char*>(ecx + 0x40d000) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ecx + 0x40d000) + *reinterpret_cast<signed char*>(&eax15 + 1));
    if (eax15) {
        if (reinterpret_cast<signed char>(eax15) >= reinterpret_cast<signed char>(20)) {
            addr_401cd9_3:
            eax27 = fun_404245(ecx, eax15, 4, esi17, *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v2) + 2), v18, v19, v20, v21, v22, v23, v24, v25, v26);
            g40bff0 = eax27;
            if (eax27 || (g40d000 = reinterpret_cast<void**>(20), eax27 = fun_404245(4, 20, 4, esi17, *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v2) + 2), v28, v29, v30, v31, v32, v33, v34, v35, v36), g40bff0 = eax27, !!eax27)) {
                edx37 = reinterpret_cast<void*>(0);
                ecx38 = 0x40b0c8;
                while (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edx37) + reinterpret_cast<unsigned char>(eax27)) = ecx38, ecx38 = ecx38 + 32, edx37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx37) + 4), ecx38 < 0x40b348) {
                    eax27 = g40bff0;
                }
                edx39 = 0;
                ecx40 = reinterpret_cast<uint32_t*>(0x40b0d8);
                do {
                    if ((*reinterpret_cast<int32_t**>((reinterpret_cast<int32_t>(edx39) >> 5) * 4 + 0x40bee0))[(edx39 & 31) * 2] == -1 || !(*reinterpret_cast<int32_t**>((reinterpret_cast<int32_t>(edx39) >> 5) * 4 + 0x40bee0))[(edx39 & 31) * 2]) {
                        *ecx40 = 0xffffffff;
                    }
                    ecx40 = ecx40 + 8;
                    ++edx39;
                } while (reinterpret_cast<int32_t>(ecx40) < 0x40b138);
                goto *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v2) + 2);
            } else {
                goto *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v2) + 2);
            }
        } else {
            eax15 = reinterpret_cast<void**>(20);
        }
    } else {
        eax15 = reinterpret_cast<void**>(0x200);
    }
    g40d000 = eax15;
    goto addr_401cd9_3;
}

uint32_t fun_401d60(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** v13;
    uint32_t eax14;
    int1_t zf15;
    void** v16;
    void** esi17;
    void** v18;
    void** edi19;
    void** esi20;
    uint32_t edi21;
    int1_t less_or_equal22;
    void** eax23;
    void** v24;
    void** ecx25;
    void** eax26;
    void** eax27;
    void** v28;
    void** eax29;
    int1_t less30;

    v13 = reinterpret_cast<void**>(__return_address());
    eax14 = fun_403f1d();
    zf15 = g40ba94 == 0;
    if (zf15) {
        return eax14;
    }
    v16 = esi17;
    v18 = edi19;
    esi20 = reinterpret_cast<void**>(3);
    edi21 = 0;
    less_or_equal22 = reinterpret_cast<signed char>(g40d000) <= reinterpret_cast<signed char>(3);
    if (!less_or_equal22) 
        goto addr_4042cf_5;
    addr_404313_6:
    return edi21;
    do {
        addr_4042cf_5:
        eax23 = g40bff0;
        if (*reinterpret_cast<void***>(eax23 + reinterpret_cast<unsigned char>(esi20) * 4)) {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax23 + reinterpret_cast<unsigned char>(esi20) * 4) + 12)) & 0x83 && (v24 = *reinterpret_cast<void***>(eax23 + reinterpret_cast<unsigned char>(esi20) * 4), eax26 = fun_407057(ecx25, v24, v18, v16, v13, a1, a2, a3, a4, a5, a6, a7, a8), ecx25 = v24, eax26 != 0xffffffff)) {
                ++edi21;
            }
            if (reinterpret_cast<signed char>(esi20) >= reinterpret_cast<signed char>(20)) {
                eax27 = g40bff0;
                v28 = *reinterpret_cast<void***>(eax27 + reinterpret_cast<unsigned char>(esi20) * 4);
                fun_40403c(ecx25, v28, v18, v16, v13, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
                eax29 = g40bff0;
                *reinterpret_cast<void***>(eax29 + reinterpret_cast<unsigned char>(esi20) * 4) = reinterpret_cast<void**>(0);
                ecx25 = v28;
            }
        }
        ++esi20;
        less30 = reinterpret_cast<signed char>(esi20) < reinterpret_cast<signed char>(g40d000);
    } while (less30);
    goto addr_404313_6;
}

int32_t fun_402460() {
    return 1;
}

void fun_402c7b(struct s220* a1) {
    struct s220* eax2;
    void** bl3;
    void*** eax4;
    void*** edx5;
    int1_t zf6;

    eax2 = a1;
    bl3 = g40b4a4;
    while (eax2->f0 && eax2->f0 != bl3) {
        eax2 = reinterpret_cast<struct s220*>(&eax2->f1);
    }
    eax4 = &eax2->f1;
    if (!eax2->f0) {
        addr_402cc4_5:
        return;
    } else {
        while (*eax4 && (*eax4 != 0x65 && *eax4 != 69)) {
            ++eax4;
        }
        edx5 = eax4;
        do {
            --eax4;
        } while (*eax4 == 48);
        if (*eax4 == bl3) 
            goto addr_402cb9_12;
    }
    do {
        addr_402cba_13:
        ++eax4;
        ++edx5;
        zf6 = *edx5 == 0;
        *eax4 = *edx5;
    } while (!zf6);
    goto addr_402cc4_5;
    addr_402cb9_12:
    --eax4;
    goto addr_402cba_13;
}

int32_t fun_402cc6(int32_t a1) {
    int16_t ax2;
    int16_t fpu_status_word3;

    __asm__("fld qword [eax]");
    __asm__("fcomp qword [0x409170]");
    ax2 = fpu_status_word3;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax2) + 1) & 1) {
        return 0;
    } else {
        return 1;
    }
}

int32_t fun_403b0a() {
    return 1;
}

int32_t fun_403b4e() {
    return 1;
}

struct s225 {
    signed char[1] pad1;
    signed char f1;
};

struct s226 {
    signed char[1] pad1;
    signed char f1;
};

struct s227 {
    signed char[2] pad2;
    int32_t f2;
};

struct s228 {
    signed char[2] pad2;
    int32_t f2;
};

void fun_404c79(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    signed char* edi4;
    signed char* esi5;
    uint32_t ecx6;
    struct s225* edi7;
    struct s226* esi8;
    int32_t* esi9;
    struct s227* esi10;
    int32_t* edi11;
    struct s228* edi12;

    edx2 = edx3 & ecx;
    *edi4 = *esi5;
    ecx6 = ecx >> 2;
    edi7->f1 = esi8->f1;
    esi9 = &esi10->f2;
    edi11 = &edi12->f2;
    if (ecx6 < 8) 
        goto 0x404c3c;
    while (ecx6) {
        --ecx6;
        *edi11 = *esi9;
        ++edi11;
        ++esi9;
    }
    switch (edx2) {
    case 3:
        goto 0x404d64;
    case 2:
        goto 0x404d50;
    case 1:
        goto 0x404d44;
    case 0:
        goto 0x404d3c;
    }
}

struct s229 {
    signed char[1] pad1;
    int32_t f1;
};

struct s230 {
    signed char[1] pad1;
    int32_t f1;
};

void fun_404ca0(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    signed char* edi4;
    signed char* esi5;
    int32_t* esi6;
    struct s229* esi7;
    uint32_t ecx8;
    int32_t* edi9;
    struct s230* edi10;

    edx2 = edx3 & ecx;
    *edi4 = *esi5;
    esi6 = &esi7->f1;
    ecx8 = ecx >> 2;
    edi9 = &edi10->f1;
    if (ecx8 < 8) 
        goto 0x404c3c;
    while (ecx8) {
        --ecx8;
        *edi9 = *esi6;
        ++edi9;
        ++esi6;
    }
    switch (edx2) {
    case 3:
        goto 0x404d64;
    case 2:
        goto 0x404d50;
    case 1:
        goto 0x404d44;
    case 0:
        goto 0x404d3c;
    }
}

struct s231 {
    signed char[64] pad64;
    uint32_t f64;
};

struct s232 {
    signed char f0;
    signed char f1;
};

struct s233 {
    signed char[1] pad1;
    signed char f1;
};

void fun_404cbd(uint32_t ecx) {
    uint32_t ecx2;
    struct s231* ebp3;
    signed char* eax4;
    signed char* eax5;
    signed char dl6;
    struct s232* eax7;
    struct s233* eax8;
    signed char* eax9;
    int32_t ebx10;
    int32_t ebx11;

    ecx2 = ecx & ebp3->f64;
    *eax4 = reinterpret_cast<signed char>(*eax5 + dl6);
    eax7 = reinterpret_cast<struct s232*>(&eax8->f1);
    eax7->f0 = reinterpret_cast<signed char>(eax7->f0 + *reinterpret_cast<signed char*>(&ecx2));
    eax9 = &eax7->f1;
    *eax9 = reinterpret_cast<signed char>(*eax9 + *reinterpret_cast<signed char*>(&eax9));
    *reinterpret_cast<signed char*>(ebx10 - 0x761b71bc) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx11 - 0x761b71bc) + *reinterpret_cast<signed char*>(&ecx2));
}

struct s234 {
    signed char[77] pad77;
    signed char f77;
};

void fun_404d2a(int32_t ecx) {
    struct s234* eax2;
    void* eax3;
    void* ebp4;
    void* ebp5;
    signed char dl6;
    int32_t eax7;
    void* ebp8;
    void* ebp9;
    int32_t ebx10;
    int32_t ebx11;

    eax2 = reinterpret_cast<struct s234*>(reinterpret_cast<int32_t>(eax3) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp4) + ecx * 2 + 64) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp5) + ecx * 2 + 64) + *reinterpret_cast<signed char*>(&eax2));
    eax2->f77 = reinterpret_cast<signed char>(eax2->f77 + dl6);
    eax7 = reinterpret_cast<int32_t>(eax2) + 1;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp8) + ecx * 2 + 64) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp9) + ecx * 2 + 64) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax7) + 1));
    *reinterpret_cast<signed char*>(ebx10 + 0x5f5e0845) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx11 + 0x5f5e0845) + *reinterpret_cast<signed char*>(&ecx));
}

void fun_404da2() {
}

struct s235 {
    signed char[3] pad3;
    signed char f3;
};

struct s236 {
    signed char[3] pad3;
    signed char f3;
};

struct s237 {
    signed char[2] pad2;
    signed char f2;
};

struct s238 {
    signed char[2] pad2;
    signed char f2;
};

void fun_404dfd(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    struct s235* edi4;
    struct s236* esi5;
    uint32_t ecx6;
    struct s237* edi7;
    struct s238* esi8;
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
        goto 0x404da4;
    while (ecx6) {
        --ecx6;
        *edi11 = *esi9;
        --edi11;
        --esi9;
    }
    switch (edx2) {
    case 3:
        goto 0x404f04;
    case 2:
        goto 0x404ef0;
    case 1:
        goto 0x404ee0;
    case 0:
        goto 0x404ed8;
    }
}

struct s239 {
    signed char[3] pad3;
    signed char f3;
};

struct s240 {
    signed char[3] pad3;
    signed char f3;
};

struct s241 {
    signed char[2] pad2;
    signed char f2;
};

struct s242 {
    signed char[2] pad2;
    signed char f2;
};

struct s243 {
    signed char[1] pad1;
    signed char f1;
};

struct s244 {
    signed char[1] pad1;
    signed char f1;
};

void fun_404e28(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    struct s239* edi4;
    struct s240* esi5;
    struct s241* edi6;
    struct s242* esi7;
    uint32_t ecx8;
    struct s243* edi9;
    struct s244* esi10;
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
        goto 0x404da4;
    while (ecx8) {
        --ecx8;
        *edi13 = *esi11;
        --edi13;
        --esi11;
    }
    switch (edx2) {
    case 3:
        goto 0x404f04;
    case 2:
        goto 0x404ef0;
    case 1:
        goto 0x404ee0;
    case 0:
        goto 0x404ed8;
    }
}

void fun_404e59(int32_t ecx) {
    int1_t less2;
    int32_t eax3;
    int32_t eax4;
    int32_t esi5;
    int32_t esi6;
    int32_t esi7;
    int32_t esi8;
    signed char dl9;
    int32_t eax10;
    int32_t esi11;
    int32_t esi12;
    int32_t edi13;
    int32_t edi14;
    signed char bh15;

    if (less2) 
        goto 0x404eac;
    eax3 = eax4 + 1;
    *reinterpret_cast<signed char*>(esi5 + ecx * 2 + 0x4e8c0040) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(esi6 + ecx * 2 + 0x4e8c0040) + *reinterpret_cast<signed char*>(&eax3));
    *reinterpret_cast<signed char*>(esi7 + ecx * 2 + 0x4e9c0040) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(esi8 + ecx * 2 + 0x4e9c0040) + dl9);
    eax10 = eax3 + 1 + 1;
    *reinterpret_cast<signed char*>(esi11 + ecx * 2 + 0x4eac0040) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(esi12 + ecx * 2 + 0x4eac0040) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax10) + 1));
    *reinterpret_cast<signed char*>(edi13 - 0x74ffbfb2) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edi14 - 0x74ffbfb2) + bh15);
}

void fun_404ec6(int32_t ecx) {
    int32_t eax2;
    signed char al3;
    signed char ah4;
    int32_t eax5;
    signed char dh6;
    int32_t eax7;
    signed char* edi8;
    int32_t ebx9;
    int32_t ebx10;

    __asm__("fmul dword [esi+0x40]");
    *reinterpret_cast<signed char*>(&eax2) = reinterpret_cast<signed char>(al3 + ah4);
    eax5 = eax2 + 1;
    *reinterpret_cast<signed char*>(&eax5) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax5) + dh6);
    eax7 = eax5 + 1;
    edi8[ecx * 2] = reinterpret_cast<signed char>(edi8[ecx * 2] + *reinterpret_cast<signed char*>(&eax7));
    *reinterpret_cast<signed char*>(ebx9 + 0x5f5e0845) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx10 + 0x5f5e0845) + *reinterpret_cast<signed char*>(&ecx));
}

void fun_4051bd(void** ecx, void** a2, void** a3) {
    fun_401182(ecx, 2, __return_address(), a2, a3);
    return;
}

struct s245 {
    signed char[3] pad3;
    int32_t f3;
};

struct s246 {
    signed char[3] pad3;
    int32_t f3;
};

void fun_405a85(uint32_t ecx) {
    int32_t* esi2;
    struct s245* esi3;
    int32_t* edi4;
    struct s246* edi5;
    int32_t edx6;

    esi2 = &esi3->f3;
    edi4 = &edi5->f3;
    if (ecx < 8) 
        goto 0x405a5c;
    while (ecx) {
        --ecx;
        *edi4 = *esi2;
        ++edi4;
        ++esi2;
    }
    switch (edx6) {
    case 3:
        goto 0x405b84;
    case 2:
        goto 0x405b70;
    case 1:
        goto 0x405b64;
    case 0:
        goto 0x405b5c;
    }
}

struct s247 {
    signed char[1] pad1;
    signed char f1;
};

struct s248 {
    signed char[1] pad1;
    signed char f1;
};

struct s249 {
    signed char[2] pad2;
    int32_t f2;
};

struct s250 {
    signed char[2] pad2;
    int32_t f2;
};

void fun_405a99(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    signed char* edi4;
    signed char* esi5;
    uint32_t ecx6;
    struct s247* edi7;
    struct s248* esi8;
    int32_t* esi9;
    struct s249* esi10;
    int32_t* edi11;
    struct s250* edi12;

    edx2 = edx3 & ecx;
    *edi4 = *esi5;
    ecx6 = ecx >> 2;
    edi7->f1 = esi8->f1;
    esi9 = &esi10->f2;
    edi11 = &edi12->f2;
    if (ecx6 < 8) 
        goto 0x405a5c;
    while (ecx6) {
        --ecx6;
        *edi11 = *esi9;
        ++edi11;
        ++esi9;
    }
    switch (edx2) {
    case 3:
        goto 0x405b84;
    case 2:
        goto 0x405b70;
    case 1:
        goto 0x405b64;
    case 0:
        goto 0x405b5c;
    }
}

struct s251 {
    signed char[1] pad1;
    int32_t f1;
};

struct s252 {
    signed char[1] pad1;
    int32_t f1;
};

void fun_405abf(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    signed char* edi4;
    signed char* esi5;
    int32_t* esi6;
    struct s251* esi7;
    uint32_t ecx8;
    int32_t* edi9;
    struct s252* edi10;

    edx2 = edx3 & ecx;
    *edi4 = *esi5;
    esi6 = &esi7->f1;
    ecx8 = ecx >> 2;
    edi9 = &edi10->f1;
    if (ecx8 < 8) 
        goto 0x405a5c;
    while (ecx8) {
        --ecx8;
        *edi9 = *esi6;
        ++edi9;
        ++esi6;
    }
    switch (edx2) {
    case 3:
        goto 0x405b84;
    case 2:
        goto 0x405b70;
    case 1:
        goto 0x405b64;
    case 0:
        goto 0x405b5c;
    }
}

struct s253 {
    signed char f0;
    signed char f1;
};

struct s254 {
    signed char[1] pad1;
    signed char f1;
};

struct s255 {
    signed char f0;
    signed char f1;
};

struct s256 {
    signed char f0;
    signed char f1;
};

struct s257 {
    signed char f0;
    signed char f1;
};

struct s258 {
    signed char f0;
    signed char f1;
};

struct s259 {
    signed char f0;
    signed char f1;
};

void fun_405add(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    int32_t ecx9;
    struct s253* eax10;
    struct s254* eax11;
    signed char dh12;
    struct s255* eax13;
    struct s256* eax14;
    int32_t ebx15;
    struct s257* eax16;
    struct s258* eax17;
    signed char dl18;
    struct s259* eax19;
    signed char* eax20;

    ecx9 = ecx;
    eax10 = reinterpret_cast<struct s253*>(&eax11->f1);
    eax10->f0 = reinterpret_cast<signed char>(eax10->f0 + dh12);
    eax13 = reinterpret_cast<struct s255*>(&eax10->f1);
    eax13->f0 = reinterpret_cast<signed char>(eax13->f0 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx9) + 1));
    eax14 = reinterpret_cast<struct s256*>(&eax13->f1);
    eax14->f0 = reinterpret_cast<signed char>(eax14->f0 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax14) + 1));
    ebx15 = a4;
    eax16 = reinterpret_cast<struct s257*>(&eax14->f1);
    eax16->f0 = reinterpret_cast<signed char>(eax16->f0 + *reinterpret_cast<signed char*>(&ebx15));
    eax17 = reinterpret_cast<struct s258*>(&eax16->f1);
    eax17->f0 = reinterpret_cast<signed char>(eax17->f0 + dl18);
    eax19 = reinterpret_cast<struct s259*>(&eax17->f1);
    eax19->f0 = reinterpret_cast<signed char>(eax19->f0 + *reinterpret_cast<signed char*>(&ecx9));
    eax20 = &eax19->f1;
    *eax20 = reinterpret_cast<signed char>(*eax20 + *reinterpret_cast<signed char*>(&eax20));
    *reinterpret_cast<signed char*>(a8 - 0x761b71bc) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(a8 - 0x761b71bc) + *reinterpret_cast<signed char*>(&ecx9));
}

struct s260 {
    signed char[91] pad91;
    signed char f91;
};

void fun_405b4a() {
    void* ebx1;
    struct s260* eax2;
    void* eax3;
    signed char dh4;
    int32_t eax5;

    ebx1 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(__return_address()) + 4);
    eax2 = reinterpret_cast<struct s260*>(reinterpret_cast<int32_t>(eax3) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebx1) + reinterpret_cast<int32_t>(ebx1) * 2 + 64) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebx1) + reinterpret_cast<int32_t>(ebx1) * 2 + 64) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax2) + 1));
    eax2->f91 = reinterpret_cast<signed char>(eax2->f91 + dh4);
    eax5 = reinterpret_cast<int32_t>(eax2) + 1;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebx1) + reinterpret_cast<int32_t>(ebx1) * 2 + 0x458b0040) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebx1) + reinterpret_cast<int32_t>(ebx1) * 2 + 0x458b0040) + *reinterpret_cast<signed char*>(&eax5));
}

void fun_405bc2() {
}

struct s261 {
    signed char[3] pad3;
    signed char f3;
};

struct s262 {
    signed char[3] pad3;
    signed char f3;
};

struct s263 {
    signed char[2] pad2;
    signed char f2;
};

struct s264 {
    signed char[2] pad2;
    signed char f2;
};

void fun_405c1d(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    struct s261* edi4;
    struct s262* esi5;
    uint32_t ecx6;
    struct s263* edi7;
    struct s264* esi8;
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
        goto 0x405bc4;
    while (ecx6) {
        --ecx6;
        *edi11 = *esi9;
        --edi11;
        --esi9;
    }
    switch (edx2) {
    case 3:
        goto 0x405d24;
    case 2:
        goto 0x405d10;
    case 1:
        goto 0x405d00;
    case 0:
        goto 0x405cf8;
    }
}

struct s265 {
    signed char[3] pad3;
    signed char f3;
};

struct s266 {
    signed char[3] pad3;
    signed char f3;
};

struct s267 {
    signed char[2] pad2;
    signed char f2;
};

struct s268 {
    signed char[2] pad2;
    signed char f2;
};

struct s269 {
    signed char[1] pad1;
    signed char f1;
};

struct s270 {
    signed char[1] pad1;
    signed char f1;
};

void fun_405c48(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    struct s265* edi4;
    struct s266* esi5;
    struct s267* edi6;
    struct s268* esi7;
    uint32_t ecx8;
    struct s269* edi9;
    struct s270* esi10;
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
        goto 0x405bc4;
    while (ecx8) {
        --ecx8;
        *edi13 = *esi11;
        --edi13;
        --esi11;
    }
    switch (edx2) {
    case 3:
        goto 0x405d24;
    case 2:
        goto 0x405d10;
    case 1:
        goto 0x405d00;
    case 0:
        goto 0x405cf8;
    }
}

void fun_405c79(int32_t ecx) {
    uint32_t eflags2;
    int32_t ecx3;
    uint32_t esp4;
    int32_t eax5;
    int32_t eax6;
    int32_t ebx7;
    int32_t ebx8;
    int32_t ebx9;
    int32_t ebx10;
    signed char dh11;
    int32_t ebx12;
    signed char bh13;
    signed char bl14;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags2) + 1) = 0;
    ecx3 = ecx;
    esp4 = (eflags2 & 0xfcffff) + 4;
    eax5 = eax6 + 1;
    *reinterpret_cast<signed char*>(esp4 + ebx7 * 2 + 0x5cac0040) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(esp4 + ebx8 * 2 + 0x5cac0040) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax5) + 1));
    *reinterpret_cast<signed char*>(esp4 + ebx9 * 2 + 0x5cbc0040) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(esp4 + ebx10 * 2 + 0x5cbc0040) + dh11);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx12) + 1) = reinterpret_cast<signed char>(bh13 + bl14);
    *reinterpret_cast<signed char*>(ebx12 - 0x76e371bc) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx12 - 0x76e371bc) + *reinterpret_cast<signed char*>(&ecx3));
}

struct s271 {
    signed char f0;
    signed char f1;
};

struct s272 {
    signed char[1] pad1;
    signed char f1;
};

void fun_405ce6() {
    struct s271* eax1;
    struct s272* eax2;
    signed char* eax3;
    signed char dl4;
    int32_t eax5;
    int32_t ebx6;
    int32_t ebx7;

    eax1 = reinterpret_cast<struct s271*>(&eax2->f1);
    eax1->f0 = reinterpret_cast<signed char>(eax1->f0 + *reinterpret_cast<signed char*>(&eax1));
    eax3 = &eax1->f1;
    *eax3 = reinterpret_cast<signed char>(*eax3 + dl4);
    eax5 = reinterpret_cast<int32_t>(eax3 + 1);
    *reinterpret_cast<signed char*>(ebx6 * 2 + 0x458b0040) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx7 * 2 + 0x458b0040) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax5) + 1));
}

int32_t fun_406f47() {
    return 1;
}

int32_t fun_407186() {
    return 1;
}

int32_t fun_40754b() {
    return 1;
}

int32_t fun_40774e() {
    return 1;
}

int32_t fun_40861f() {
    return 1;
}

void fun_40112b() {
    return;
}

void fun_401348(void** ecx) {
    void* esp2;
    int32_t ebp3;
    int32_t ebp4;
    int32_t* esp5;
    int32_t ebp6;
    int32_t* esp7;

    esp2 = *reinterpret_cast<void**>(ebp3 - 24);
    if (!*reinterpret_cast<int32_t*>(ebp4 - 28)) {
        esp5 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp2) - 4);
        *esp5 = *reinterpret_cast<int32_t*>(ebp6 - 32);
        esp7 = esp5 - 1;
        *esp7 = 0x40135a;
        fun_4031eb(ecx);
        esp2 = reinterpret_cast<void*>(esp7 + 1);
    }
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp2) - 4) = 0x40135f;
    fun_40320b();
}

struct s273 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    void** f16;
    signed char[3] pad20;
    void** f20;
    signed char[3] pad24;
    void** f24;
    signed char[3] pad28;
    void** f28;
    signed char[3] pad32;
    void** f32;
    signed char[3] pad36;
    void** f36;
    signed char[3] pad40;
    void** f40;
    signed char[3] pad44;
    void** f44;
    signed char[3] pad48;
    void** f48;
    signed char[3] pad52;
    void** f52;
    signed char[3] pad56;
    void** f56;
    signed char[3] pad60;
    void** f60;
    signed char[3] pad64;
    void** f64;
};

void fun_402464(void** ecx) {
    int32_t* esp2;
    int32_t ebp3;
    int32_t* esp4;
    struct s273* esp5;
    void** eax6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t ebp9;
    int32_t ebp10;

    esp2 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp3 - 24)) - 4);
    *esp2 = 0x40246c;
    fun_404640(ecx);
    esp4 = esp2 + 1 - 1;
    *esp4 = 32;
    esp5 = reinterpret_cast<struct s273*>(esp4 - 1);
    esp5->f0 = 0x402473;
    eax6 = fun_403ddf(ecx, esp5->f4, esp5->f8, esp5->f12, esp5->f16, esp5->f20, esp5->f24, esp5->f28, esp5->f32, esp5->f36, esp5->f40, esp5->f44, esp5->f48, esp5->f52, esp5->f56, esp5->f60, esp5->f64);
    *reinterpret_cast<void***>(ebp7 - 0x1bc) = eax6;
    if (eax6) {
        *reinterpret_cast<int32_t*>(ebp8 - 0x1d8) = 1;
        *reinterpret_cast<uint32_t*>(ebp9 - 4) = 0xffffffff;
    } else {
        *reinterpret_cast<uint32_t*>(ebp10 - 4) = 0xffffffff;
        goto 0x402bdc;
    }
}

void fun_402c23(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** v7;
    void** v8;
    void** esi9;
    void** esi10;
    void** v11;
    void** eax12;
    void** ecx13;
    int1_t less_or_equal14;
    void** eax15;
    uint32_t eax16;
    void** al17;
    void** cl18;
    void** esi19;
    void** cl20;

    v7 = reinterpret_cast<void**>(__return_address());
    v8 = esi9;
    esi10 = a2;
    v11 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi10))));
    eax12 = fun_404764(ecx, v11, v8, v7, a2, a3, a4, a5, a6);
    ecx13 = v11;
    if (eax12 != 0x65) {
        do {
            ++esi10;
            less_or_equal14 = reinterpret_cast<signed char>(g40b4a0) <= reinterpret_cast<signed char>(1);
            eax15 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi10))));
            if (less_or_equal14) {
                ecx13 = g40b490;
                eax16 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx13 + reinterpret_cast<unsigned char>(eax15) * 2))) & 4;
            } else {
                eax16 = fun_404318(ecx13, eax15, 4, v8, v7, a2);
                ecx13 = reinterpret_cast<void**>(4);
            }
        } while (eax16);
    }
    al17 = *reinterpret_cast<void***>(esi10);
    cl18 = g40b4a4;
    *reinterpret_cast<void***>(esi10) = cl18;
    esi19 = esi10 + 1;
    do {
        cl20 = *reinterpret_cast<void***>(esi19);
        *reinterpret_cast<void***>(esi19) = al17;
        al17 = cl20;
        ++esi19;
    } while (*reinterpret_cast<void***>(esi19));
    return;
}

void fun_402ce0(void** ecx, void** a2, struct s221* a3, void** a4) {
    void* ebp5;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    if (!a2) {
        fun_404b9a(reinterpret_cast<int32_t>(ebp5) + 8, a4, ecx);
        a3->f0 = a2;
        return;
    } else {
        fun_404b5d(reinterpret_cast<int32_t>(ebp5) + 0xfffffff8, a4, ecx);
        a3->f0 = ecx;
        a3->f4 = ecx;
        return;
    }
}

void** fun_402fb3(void** ecx, void** a2, void** a3, int32_t a4, void** a5, int32_t a6) {
    void** eax7;
    void** ebp8;
    void** eax9;

    if (a4 == 0x65 || a4 == 69) {
        eax7 = fun_402d3b(ecx, a2, a3, a5, a6);
    } else {
        if (a4 != 0x66) {
            eax7 = fun_402f09(ecx, a2, a3, a5, a6);
        } else {
            eax9 = fun_402e2c(ecx, a2, a3, a5, ebp8);
            return eax9;
        }
    }
    return eax7;
}

int32_t fun_4053c2(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** eax16;
    void** eax17;

    eax16 = fun_403ddf(ecx, 0x80, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    g40bfe8 = eax16;
    if (eax16) {
        *reinterpret_cast<void***>(eax16) = reinterpret_cast<void**>(0);
        eax17 = g40bfe8;
        g40bfe4 = eax17;
        return 0;
    } else {
        return 24;
    }
}

void fun_404f27() {
}

void fun_403b0e() {
}

struct s274 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
};

void fun_403b52(void** ecx) {
    void*** esp2;
    int32_t ebp3;
    int32_t ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t eax9;
    int32_t ebp10;
    struct s274* esp11;
    struct s274* esp12;

    esp2 = *reinterpret_cast<void****>(ebp3 - 24);
    while (1) {
        *reinterpret_cast<uint32_t*>(ebp4 - 4) = 0xffffffff;
        *reinterpret_cast<int32_t*>(ebp5 - 28) = *reinterpret_cast<int32_t*>(ebp6 - 28) + 4;
        if (*reinterpret_cast<uint32_t*>(ebp7 - 28) >= 0x409e04) 
            break;
        *reinterpret_cast<uint32_t*>(ebp8 - 4) = 0;
        eax9 = **reinterpret_cast<int32_t**>(ebp10 - 28);
        if (!eax9) 
            continue;
        esp11 = reinterpret_cast<struct s274*>(esp2 - 4);
        esp11->f0 = 0x403b4c;
        eax9();
        esp2 = &esp11->f4;
    }
    esp12 = reinterpret_cast<struct s274*>(esp2 - 4);
    esp12->f0 = 0x403b64;
    fun_403c0b(ecx, esp12->f4, esp12->f8, esp12->f12);
    goto esp12->f4;
}

struct s275 {
    signed char[4] pad4;
    uint32_t f4;
};

int32_t fun_406880(struct s275* a1, int32_t a2) {
    int32_t eax3;
    int32_t* v4;

    eax3 = 1;
    if (a1->f4 & 6) {
        *v4 = a2;
        eax3 = 3;
    }
    return eax3;
}

void fun_404c44(int32_t ecx) {
    void* esp2;
    int32_t eax3;
    int32_t eax4;
    signed char bh5;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 1);
    eax3 = eax4 + 1;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp2) + ecx * 2 + 64) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp2) + ecx * 2 + 64) + bh5);
    *reinterpret_cast<signed char*>(eax3 + 0x2300404c) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax3 + 0x2300404c) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax3) + 1));
    __asm__("ror dword [edx+0x8a078806], 1");
    *reinterpret_cast<int32_t*>(eax3 + 0x468a0147) = *reinterpret_cast<int32_t*>(eax3 + 0x468a0147) + ecx;
}

void fun_404d61(int32_t ecx) {
}

void fun_404dad(int32_t ecx) {
}

void fun_404eed(int32_t ecx) {
}

struct s276 {
    signed char[1] pad1;
    signed char f1;
};

struct s277 {
    signed char[3] pad3;
    signed char f3;
};

void fun_404dd0(uint32_t ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    signed char* eax5;
    struct s276* eax6;
    int32_t eax7;
    int32_t edx8;
    int32_t edx9;
    struct s277* edi10;
    int32_t* esi11;
    void* esi12;
    uint32_t ecx13;
    int32_t* edi14;
    void* edi15;
    int32_t edx16;

    __asm__("fmul qword [ebp+0x40]");
    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    eax5 = &eax6->f1;
    *eax5 = reinterpret_cast<signed char>(*eax5 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
    eax7 = reinterpret_cast<int32_t>(eax5 + 1);
    *reinterpret_cast<signed char*>(edx8 - 0x2edcfcba) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx9 - 0x2edcfcba) + *reinterpret_cast<signed char*>(&ecx));
    edi10->f3 = *reinterpret_cast<signed char*>(&eax7);
    esi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi12) - 1 - 1 - 1);
    ecx13 = ecx >> 2;
    edi14 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi15) - 1);
    if (ecx13 < 8) 
        goto 0x404da4;
    while (ecx13) {
        --ecx13;
        *edi14 = *esi11;
        --edi14;
        --esi11;
    }
    switch (edx16) {
    case 3:
        goto 0x404f04;
    case 2:
        goto 0x404ef0;
    case 1:
        goto 0x404ee0;
    case 0:
        goto 0x404ed8;
    }
}

void fun_405a64(int32_t ecx) {
    int1_t of2;
    int32_t edx3;
    int32_t ebx4;
    int32_t edx5;
    int32_t ebx6;
    signed char bl7;
    int32_t eax8;
    int32_t eax9;
    signed char* ebx10;
    signed char* ebx11;

    if (of2) 
        goto 0x405ac0;
    *reinterpret_cast<signed char*>(edx3 + ebx4 * 2 + 0x5ac00040) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx5 + ebx6 * 2 + 0x5ac00040) + bl7);
    eax8 = eax9 + 1 + 1;
    *ebx10 = reinterpret_cast<signed char>(*ebx11 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax8) + 1));
    __asm__("ror dword [edx+0x8a078806], 1");
    *reinterpret_cast<int32_t*>(eax8 + 0x468a0147) = *reinterpret_cast<int32_t*>(eax8 + 0x468a0147) + ecx;
}

void fun_405b81(int32_t ecx) {
}

void fun_405bcd(int32_t ecx) {
}

void fun_405d0d(int32_t ecx) {
}

struct s278 {
    signed char[1] pad1;
    signed char f1;
};

struct s279 {
    signed char[92] pad92;
    signed char f92;
};

struct s280 {
    signed char[3] pad3;
    signed char f3;
};

void fun_405bf0(uint32_t ecx, int32_t a2) {
    signed char* eax3;
    struct s278* eax4;
    struct s279* eax5;
    int32_t eax6;
    int32_t edx7;
    int32_t edx8;
    struct s280* edi9;
    int32_t* esi10;
    void* esi11;
    uint32_t ecx12;
    int32_t* edi13;
    void* edi14;
    int32_t edx15;

    eax3 = &eax4->f1;
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax3) + 1));
    eax5 = reinterpret_cast<struct s279*>(eax3 + 1);
    eax5->f92 = reinterpret_cast<signed char>(eax5->f92 + *reinterpret_cast<signed char*>(&ecx));
    eax6 = reinterpret_cast<int32_t>(eax5) + 1;
    *reinterpret_cast<signed char*>(edx7 - 0x2edcfcba) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx8 - 0x2edcfcba) + *reinterpret_cast<signed char*>(&ecx));
    edi9->f3 = *reinterpret_cast<signed char*>(&eax6);
    esi10 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi11) - 1);
    ecx12 = ecx >> 2;
    edi13 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi14) - 1);
    if (ecx12 < 8) 
        goto 0x405bc4;
    while (ecx12) {
        --ecx12;
        *edi13 = *esi10;
        --edi13;
        --esi10;
    }
    switch (edx15) {
    case 3:
        goto 0x405d24;
    case 2:
        goto 0x405d10;
    case 1:
        goto 0x405d00;
    case 0:
        goto 0x405cf8;
    }
}

int32_t fun_40690a() {
    int32_t eax1;
    struct s13* ecx2;

    eax1 = 0;
    ecx2 = g0;
    if (reinterpret_cast<int1_t>(ecx2->f4 == fun_406880) && ecx2->f8 == ecx2->f12->f12) {
        eax1 = 1;
    }
    return eax1;
}

void fun_40692d(int32_t ecx) {
    goto 0x406940;
}

int32_t GetSystemTimeAsFileTime = 0xa20a;

int32_t GetCurrentProcessId = 0xa1f4;

int32_t GetCurrentThreadId = 0xa1de;

int32_t GetTickCount = 0xa1ce;

int32_t QueryPerformanceCounter = 0xa1b4;

void fun_406ea9() {
    void** eax1;
    void* v2;
    int32_t esi3;
    uint32_t eax4;
    uint32_t eax5;
    uint32_t eax6;
    void** esi7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;

    eax1 = g40b498;
    if (!eax1 || reinterpret_cast<int1_t>(eax1 == 0xbb40e64e)) {
        v2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8);
        GetSystemTimeAsFileTime(v2, esi3);
        eax4 = reinterpret_cast<uint32_t>(GetCurrentProcessId(v2, esi3));
        eax5 = reinterpret_cast<uint32_t>(GetCurrentThreadId(v2, esi3));
        eax6 = reinterpret_cast<uint32_t>(GetTickCount(v2, esi3));
        QueryPerformanceCounter();
        esi7 = reinterpret_cast<void**>(v8 ^ v9 ^ eax4 ^ eax5 ^ eax6 ^ (v10 ^ v11));
        g40b498 = esi7;
        if (!esi7) {
            g40b498 = reinterpret_cast<void**>(0xbb40e64e);
        }
    }
    return;
}

void fun_406f4b() {
    goto 0x406f3e;
}

void fun_40718a(void** ecx) {
    int32_t ebp2;
    int32_t ebp3;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp2 - 24)) - 4) = 0x407192;
    fun_404640(ecx);
    *reinterpret_cast<uint32_t*>(ebp3 - 4) = 0xffffffff;
}

void fun_40754f(void** ecx) {
    int32_t ebp2;
    int32_t ebp3;
    int32_t ebp4;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp2 - 24)) - 4) = 0x407557;
    fun_404640(ecx);
    *reinterpret_cast<int32_t*>(ebp3 - 28) = 0;
    *reinterpret_cast<uint32_t*>(ebp4 - 4) = 0xffffffff;
}

int32_t fun_407619() {
    return 1;
}

void fun_407752(void** ecx) {
    int32_t ebp2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp2 - 24)) - 4) = 0x40775a;
    fun_404640(ecx);
}

struct s281 {
    signed char[124] pad124;
    signed char f124;
};

struct s282 {
    signed char[123] pad123;
    signed char f123;
};

struct s283 {
    signed char[123] pad123;
    signed char f123;
};

void fun_407e20(signed char* ecx) {
    uint32_t eax2;
    uint32_t eax3;
    signed char dl4;
    struct s281* edx5;
    signed char dl6;
    signed char bh7;
    struct s282* ebx8;
    struct s283* ebx9;
    uint32_t eax10;
    signed char bh11;
    uint32_t eax12;
    int32_t edi13;
    int32_t edi14;
    uint32_t eax15;
    int32_t ebp16;
    int32_t ebp17;

    eax2 = eax3 ^ 0x8500407a;
    if (__intrinsic()) 
        goto 0x407e67;
    *reinterpret_cast<signed char*>(&eax2) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax2) + dl4);
    if (__intrinsic()) 
        goto 0x407e6b;
    *reinterpret_cast<signed char*>(&edx5) = reinterpret_cast<signed char>(dl6 + bh7);
    if (__intrinsic()) 
        goto 0x407e6f;
    ebx8->f123 = reinterpret_cast<signed char>(ebx9->f123 + *reinterpret_cast<signed char*>(&edx5));
    eax10 = eax2 + 1;
    if (!__intrinsic()) 
        goto 0x407e77;
    *reinterpret_cast<signed char*>(&eax10) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax10) + *reinterpret_cast<signed char*>(&ecx)) + bh11);
    if (!__intrinsic()) 
        goto 0x407e7b;
    edx5->f124 = reinterpret_cast<signed char>(edx5->f124 + *reinterpret_cast<signed char*>(&eax10));
    eax12 = eax10 + 1;
    *ecx = reinterpret_cast<signed char>(*ecx + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax12) + 1));
    if (*ecx < 0 != __intrinsic()) 
        goto 0x407e83;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + edi13 * 2 + 0x7c960040) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + edi14 * 2 + 0x7c960040) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax12) + 1));
    eax15 = eax12 + 1;
    edx5->f124 = reinterpret_cast<signed char>(edx5->f124 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax15) + 1));
    *reinterpret_cast<signed char*>(ebp16 - 0x75) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp17 - 0x75) + *reinterpret_cast<signed char*>(&edx5));
}

void fun_408623(void** ecx) {
    int32_t ebp2;
    int32_t ebp3;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp2 - 24)) - 4) = 0x40862b;
    fun_404640(ecx);
    *reinterpret_cast<uint32_t*>(ebp3 - 4) = 0xffffffff;
}

struct s284 {
    signed char[4] pad4;
    uint32_t f4;
};

struct s285 {
    signed char[12] pad12;
    struct s8* f12;
};

int32_t fun_403c1c(struct s284* a1, struct s8* a2, int32_t a3) {
    unsigned char* esi4;
    unsigned char dh5;
    unsigned char* eax6;
    struct s285* ebp7;
    struct s8* ebx8;
    int32_t eax9;
    uint32_t esi10;
    struct s8* edi11;
    uint32_t eax12;
    int32_t eax13;
    int32_t eax14;
    struct s8* edi15;
    uint32_t ecx16;
    int32_t eax17;

    *esi4 = reinterpret_cast<unsigned char>(*esi4 ^ reinterpret_cast<unsigned char>(dh5 ^ *eax6));
    ebp7 = reinterpret_cast<struct s285*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4);
    ebx8 = a2;
    if (a1->f4 & 6) {
        fun_4068a2(ebx8, 0xff);
        eax9 = 1;
    } else {
        *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx8) - 4) = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp7) - 8);
        esi10 = ebx8->f12;
        edi11 = ebx8->f8;
        eax12 = fun_40694e(ebx8);
        if (!eax12) {
            a1->f4 = a1->f4 | 8;
            goto addr_403ce6_5;
        } else {
            while (esi10 != 0xffffffff) {
                eax13 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi11) + (esi10 + esi10 * 2) * 4 + 4);
                if (eax13 && (eax14 = reinterpret_cast<int32_t>(eax13()), ebp7 = ebp7, esi10 = esi10, ebx8 = ebp7->f12, !!eax14)) {
                    if (__intrinsic()) 
                        goto addr_403cd8_9;
                    edi15 = ebx8->f8;
                    fun_406860(ebx8);
                    ebp7 = reinterpret_cast<struct s285*>(ebx8 + 1);
                    fun_4068a2(ebx8, esi10);
                    ecx16 = esi10 + esi10 * 2;
                    fun_406936(ecx16, 1);
                    ebx8->f12 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(edi15) + ecx16 * 4);
                    eax17 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi15) + ecx16 * 4 + 8);
                    ebx8 = reinterpret_cast<struct s8*>(0);
                    esi10 = 0;
                    eax17();
                }
                edi11 = ebx8->f8;
                esi10 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(edi11) + (esi10 + esi10 * 2) * 4);
            }
            goto addr_403ce6_5;
        }
    }
    addr_403d02_12:
    return eax9;
    addr_403ce6_5:
    eax9 = 1;
    goto addr_403d02_12;
    addr_403cd8_9:
    eax9 = 0;
    goto addr_403d02_12;
}

void fun_403b21() {
    int32_t ebp1;

    fun_403bd0(0x4095f8, 12, __return_address());
    *reinterpret_cast<int32_t*>(ebp1 - 28) = 0x409e04;
}

struct s286 {
    signed char[24] pad24;
    struct s8* f24;
    uint32_t f28;
};

void fun_403d0a(struct s286* a1) {
    uint32_t v2;
    struct s8* v3;

    v2 = a1->f28;
    v3 = a1->f24;
    fun_4068a2(v3, v2);
    return;
}

void fun_408abc() {
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
    signed char* eax1612;
    signed char* eax1613;
    signed char al1614;
    signed char* eax1615;
    signed char* eax1616;
    signed char al1617;
    signed char* eax1618;
    signed char* eax1619;
    signed char al1620;
    signed char* eax1621;
    signed char* eax1622;
    signed char al1623;
    signed char* eax1624;
    signed char* eax1625;
    signed char al1626;
    signed char* eax1627;
    signed char* eax1628;
    signed char al1629;
    signed char* eax1630;
    signed char* eax1631;
    signed char al1632;
    signed char* eax1633;
    signed char* eax1634;
    signed char al1635;
    signed char* eax1636;
    signed char* eax1637;
    signed char al1638;
    signed char* eax1639;
    signed char* eax1640;
    signed char al1641;
    signed char* eax1642;
    signed char* eax1643;
    signed char al1644;
    signed char* eax1645;
    signed char* eax1646;
    signed char al1647;
    signed char* eax1648;
    signed char* eax1649;
    signed char al1650;
    signed char* eax1651;
    signed char* eax1652;
    signed char al1653;
    signed char* eax1654;
    signed char* eax1655;
    signed char al1656;
    signed char* eax1657;
    signed char* eax1658;
    signed char al1659;
    signed char* eax1660;
    signed char* eax1661;
    signed char al1662;
    signed char* eax1663;
    signed char* eax1664;
    signed char al1665;
    signed char* eax1666;
    signed char* eax1667;
    signed char al1668;
    signed char* eax1669;
    signed char* eax1670;
    signed char al1671;
    signed char* eax1672;
    signed char* eax1673;
    signed char al1674;
    signed char* eax1675;
    signed char* eax1676;
    signed char al1677;
    signed char* eax1678;
    signed char* eax1679;
    signed char al1680;
    signed char* eax1681;
    signed char* eax1682;
    signed char al1683;
    signed char* eax1684;
    signed char* eax1685;
    signed char al1686;
    signed char* eax1687;
    signed char* eax1688;
    signed char al1689;
    signed char* eax1690;
    signed char* eax1691;
    signed char al1692;
    signed char* eax1693;
    signed char* eax1694;
    signed char al1695;
    signed char* eax1696;
    signed char* eax1697;
    signed char al1698;
    signed char* eax1699;
    signed char* eax1700;
    signed char al1701;
    signed char* eax1702;
    signed char* eax1703;
    signed char al1704;
    signed char* eax1705;
    signed char* eax1706;
    signed char al1707;
    signed char* eax1708;
    signed char* eax1709;
    signed char al1710;
    signed char* eax1711;
    signed char* eax1712;
    signed char al1713;
    signed char* eax1714;
    signed char* eax1715;
    signed char al1716;
    signed char* eax1717;
    signed char* eax1718;
    signed char al1719;
    signed char* eax1720;
    signed char* eax1721;
    signed char al1722;
    signed char* eax1723;
    signed char* eax1724;
    signed char al1725;
    signed char* eax1726;
    signed char* eax1727;
    signed char al1728;
    signed char* eax1729;
    signed char* eax1730;
    signed char al1731;
    signed char* eax1732;
    signed char* eax1733;
    signed char al1734;
    signed char* eax1735;
    signed char* eax1736;
    signed char al1737;
    signed char* eax1738;
    signed char* eax1739;
    signed char al1740;
    signed char* eax1741;
    signed char* eax1742;
    signed char al1743;
    signed char* eax1744;
    signed char* eax1745;
    signed char al1746;
    signed char* eax1747;
    signed char* eax1748;
    signed char al1749;
    signed char* eax1750;
    signed char* eax1751;
    signed char al1752;
    signed char* eax1753;
    signed char* eax1754;
    signed char al1755;
    signed char* eax1756;
    signed char* eax1757;
    signed char al1758;
    signed char* eax1759;
    signed char* eax1760;
    signed char al1761;
    signed char* eax1762;
    signed char* eax1763;
    signed char al1764;
    signed char* eax1765;
    signed char* eax1766;
    signed char al1767;
    signed char* eax1768;
    signed char* eax1769;
    signed char al1770;
    signed char* eax1771;
    signed char* eax1772;
    signed char al1773;
    signed char* eax1774;
    signed char* eax1775;
    signed char al1776;
    signed char* eax1777;
    signed char* eax1778;
    signed char al1779;
    signed char* eax1780;
    signed char* eax1781;
    signed char al1782;
    signed char* eax1783;
    signed char* eax1784;
    signed char al1785;
    signed char* eax1786;
    signed char* eax1787;
    signed char al1788;
    signed char* eax1789;
    signed char* eax1790;
    signed char al1791;
    signed char* eax1792;
    signed char* eax1793;
    signed char al1794;
    signed char* eax1795;
    signed char* eax1796;
    signed char al1797;
    signed char* eax1798;
    signed char* eax1799;
    signed char al1800;
    signed char* eax1801;
    signed char* eax1802;
    signed char al1803;
    signed char* eax1804;
    signed char* eax1805;
    signed char al1806;
    signed char* eax1807;
    signed char* eax1808;
    signed char al1809;
    signed char* eax1810;
    signed char* eax1811;
    signed char al1812;
    signed char* eax1813;
    signed char* eax1814;
    signed char al1815;
    signed char* eax1816;
    signed char* eax1817;
    signed char al1818;
    signed char* eax1819;
    signed char* eax1820;
    signed char al1821;
    signed char* eax1822;
    signed char* eax1823;
    signed char al1824;
    signed char* eax1825;
    signed char* eax1826;
    signed char al1827;
    signed char* eax1828;
    signed char* eax1829;
    signed char al1830;
    signed char* eax1831;
    signed char* eax1832;
    signed char al1833;
    signed char* eax1834;
    signed char* eax1835;
    signed char al1836;
    signed char* eax1837;
    signed char* eax1838;
    signed char al1839;
    signed char* eax1840;
    signed char* eax1841;
    signed char al1842;
    signed char* eax1843;
    signed char* eax1844;
    signed char al1845;
    signed char* eax1846;
    signed char* eax1847;
    signed char al1848;
    signed char* eax1849;
    signed char* eax1850;
    signed char al1851;
    signed char* eax1852;
    signed char* eax1853;
    signed char al1854;
    signed char* eax1855;
    signed char* eax1856;
    signed char al1857;
    signed char* eax1858;
    signed char* eax1859;
    signed char al1860;
    signed char* eax1861;
    signed char* eax1862;
    signed char al1863;
    signed char* eax1864;
    signed char* eax1865;
    signed char al1866;
    signed char* eax1867;
    signed char* eax1868;
    signed char al1869;
    signed char* eax1870;
    signed char* eax1871;
    signed char al1872;
    signed char* eax1873;
    signed char* eax1874;
    signed char al1875;
    signed char* eax1876;
    signed char* eax1877;
    signed char al1878;
    signed char* eax1879;
    signed char* eax1880;
    signed char al1881;
    signed char* eax1882;
    signed char* eax1883;
    signed char al1884;
    signed char* eax1885;
    signed char* eax1886;
    signed char al1887;
    signed char* eax1888;
    signed char* eax1889;
    signed char al1890;
    signed char* eax1891;
    signed char* eax1892;
    signed char al1893;
    signed char* eax1894;
    signed char* eax1895;
    signed char al1896;
    signed char* eax1897;
    signed char* eax1898;
    signed char al1899;
    signed char* eax1900;
    signed char* eax1901;
    signed char al1902;
    signed char* eax1903;
    signed char* eax1904;
    signed char al1905;
    signed char* eax1906;
    signed char* eax1907;
    signed char al1908;
    signed char* eax1909;
    signed char* eax1910;
    signed char al1911;
    signed char* eax1912;
    signed char* eax1913;
    signed char al1914;
    signed char* eax1915;
    signed char* eax1916;
    signed char al1917;
    signed char* eax1918;
    signed char* eax1919;
    signed char al1920;
    signed char* eax1921;
    signed char* eax1922;
    signed char al1923;
    signed char* eax1924;
    signed char* eax1925;
    signed char al1926;
    signed char* eax1927;
    signed char* eax1928;
    signed char al1929;
    signed char* eax1930;
    signed char* eax1931;
    signed char al1932;
    signed char* eax1933;
    signed char* eax1934;
    signed char al1935;
    signed char* eax1936;
    signed char* eax1937;
    signed char al1938;
    signed char* eax1939;
    signed char* eax1940;
    signed char al1941;
    signed char* eax1942;
    signed char* eax1943;
    signed char al1944;
    signed char* eax1945;
    signed char* eax1946;
    signed char al1947;
    signed char* eax1948;
    signed char* eax1949;
    signed char al1950;
    signed char* eax1951;
    signed char* eax1952;
    signed char al1953;
    signed char* eax1954;
    signed char* eax1955;
    signed char al1956;
    signed char* eax1957;
    signed char* eax1958;
    signed char al1959;
    signed char* eax1960;
    signed char* eax1961;
    signed char al1962;
    signed char* eax1963;
    signed char* eax1964;
    signed char al1965;
    signed char* eax1966;
    signed char* eax1967;
    signed char al1968;
    signed char* eax1969;
    signed char* eax1970;
    signed char al1971;
    signed char* eax1972;
    signed char* eax1973;
    signed char al1974;
    signed char* eax1975;
    signed char* eax1976;
    signed char al1977;
    signed char* eax1978;
    signed char* eax1979;
    signed char al1980;
    signed char* eax1981;
    signed char* eax1982;
    signed char al1983;
    signed char* eax1984;
    signed char* eax1985;
    signed char al1986;
    signed char* eax1987;
    signed char* eax1988;
    signed char al1989;
    signed char* eax1990;
    signed char* eax1991;
    signed char al1992;
    signed char* eax1993;
    signed char* eax1994;
    signed char al1995;
    signed char* eax1996;
    signed char* eax1997;
    signed char al1998;
    signed char* eax1999;
    signed char* eax2000;
    signed char al2001;
    signed char* eax2002;
    signed char* eax2003;
    signed char al2004;
    signed char* eax2005;
    signed char* eax2006;
    signed char al2007;
    signed char* eax2008;
    signed char* eax2009;
    signed char al2010;
    signed char* eax2011;
    signed char* eax2012;
    signed char al2013;
    signed char* eax2014;
    signed char* eax2015;
    signed char al2016;
    signed char* eax2017;
    signed char* eax2018;
    signed char al2019;
    signed char* eax2020;
    signed char* eax2021;
    signed char al2022;

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
    *eax1612 = reinterpret_cast<signed char>(*eax1613 + al1614);
    *eax1615 = reinterpret_cast<signed char>(*eax1616 + al1617);
    *eax1618 = reinterpret_cast<signed char>(*eax1619 + al1620);
    *eax1621 = reinterpret_cast<signed char>(*eax1622 + al1623);
    *eax1624 = reinterpret_cast<signed char>(*eax1625 + al1626);
    *eax1627 = reinterpret_cast<signed char>(*eax1628 + al1629);
    *eax1630 = reinterpret_cast<signed char>(*eax1631 + al1632);
    *eax1633 = reinterpret_cast<signed char>(*eax1634 + al1635);
    *eax1636 = reinterpret_cast<signed char>(*eax1637 + al1638);
    *eax1639 = reinterpret_cast<signed char>(*eax1640 + al1641);
    *eax1642 = reinterpret_cast<signed char>(*eax1643 + al1644);
    *eax1645 = reinterpret_cast<signed char>(*eax1646 + al1647);
    *eax1648 = reinterpret_cast<signed char>(*eax1649 + al1650);
    *eax1651 = reinterpret_cast<signed char>(*eax1652 + al1653);
    *eax1654 = reinterpret_cast<signed char>(*eax1655 + al1656);
    *eax1657 = reinterpret_cast<signed char>(*eax1658 + al1659);
    *eax1660 = reinterpret_cast<signed char>(*eax1661 + al1662);
    *eax1663 = reinterpret_cast<signed char>(*eax1664 + al1665);
    *eax1666 = reinterpret_cast<signed char>(*eax1667 + al1668);
    *eax1669 = reinterpret_cast<signed char>(*eax1670 + al1671);
    *eax1672 = reinterpret_cast<signed char>(*eax1673 + al1674);
    *eax1675 = reinterpret_cast<signed char>(*eax1676 + al1677);
    *eax1678 = reinterpret_cast<signed char>(*eax1679 + al1680);
    *eax1681 = reinterpret_cast<signed char>(*eax1682 + al1683);
    *eax1684 = reinterpret_cast<signed char>(*eax1685 + al1686);
    *eax1687 = reinterpret_cast<signed char>(*eax1688 + al1689);
    *eax1690 = reinterpret_cast<signed char>(*eax1691 + al1692);
    *eax1693 = reinterpret_cast<signed char>(*eax1694 + al1695);
    *eax1696 = reinterpret_cast<signed char>(*eax1697 + al1698);
    *eax1699 = reinterpret_cast<signed char>(*eax1700 + al1701);
    *eax1702 = reinterpret_cast<signed char>(*eax1703 + al1704);
    *eax1705 = reinterpret_cast<signed char>(*eax1706 + al1707);
    *eax1708 = reinterpret_cast<signed char>(*eax1709 + al1710);
    *eax1711 = reinterpret_cast<signed char>(*eax1712 + al1713);
    *eax1714 = reinterpret_cast<signed char>(*eax1715 + al1716);
    *eax1717 = reinterpret_cast<signed char>(*eax1718 + al1719);
    *eax1720 = reinterpret_cast<signed char>(*eax1721 + al1722);
    *eax1723 = reinterpret_cast<signed char>(*eax1724 + al1725);
    *eax1726 = reinterpret_cast<signed char>(*eax1727 + al1728);
    *eax1729 = reinterpret_cast<signed char>(*eax1730 + al1731);
    *eax1732 = reinterpret_cast<signed char>(*eax1733 + al1734);
    *eax1735 = reinterpret_cast<signed char>(*eax1736 + al1737);
    *eax1738 = reinterpret_cast<signed char>(*eax1739 + al1740);
    *eax1741 = reinterpret_cast<signed char>(*eax1742 + al1743);
    *eax1744 = reinterpret_cast<signed char>(*eax1745 + al1746);
    *eax1747 = reinterpret_cast<signed char>(*eax1748 + al1749);
    *eax1750 = reinterpret_cast<signed char>(*eax1751 + al1752);
    *eax1753 = reinterpret_cast<signed char>(*eax1754 + al1755);
    *eax1756 = reinterpret_cast<signed char>(*eax1757 + al1758);
    *eax1759 = reinterpret_cast<signed char>(*eax1760 + al1761);
    *eax1762 = reinterpret_cast<signed char>(*eax1763 + al1764);
    *eax1765 = reinterpret_cast<signed char>(*eax1766 + al1767);
    *eax1768 = reinterpret_cast<signed char>(*eax1769 + al1770);
    *eax1771 = reinterpret_cast<signed char>(*eax1772 + al1773);
    *eax1774 = reinterpret_cast<signed char>(*eax1775 + al1776);
    *eax1777 = reinterpret_cast<signed char>(*eax1778 + al1779);
    *eax1780 = reinterpret_cast<signed char>(*eax1781 + al1782);
    *eax1783 = reinterpret_cast<signed char>(*eax1784 + al1785);
    *eax1786 = reinterpret_cast<signed char>(*eax1787 + al1788);
    *eax1789 = reinterpret_cast<signed char>(*eax1790 + al1791);
    *eax1792 = reinterpret_cast<signed char>(*eax1793 + al1794);
    *eax1795 = reinterpret_cast<signed char>(*eax1796 + al1797);
    *eax1798 = reinterpret_cast<signed char>(*eax1799 + al1800);
    *eax1801 = reinterpret_cast<signed char>(*eax1802 + al1803);
    *eax1804 = reinterpret_cast<signed char>(*eax1805 + al1806);
    *eax1807 = reinterpret_cast<signed char>(*eax1808 + al1809);
    *eax1810 = reinterpret_cast<signed char>(*eax1811 + al1812);
    *eax1813 = reinterpret_cast<signed char>(*eax1814 + al1815);
    *eax1816 = reinterpret_cast<signed char>(*eax1817 + al1818);
    *eax1819 = reinterpret_cast<signed char>(*eax1820 + al1821);
    *eax1822 = reinterpret_cast<signed char>(*eax1823 + al1824);
    *eax1825 = reinterpret_cast<signed char>(*eax1826 + al1827);
    *eax1828 = reinterpret_cast<signed char>(*eax1829 + al1830);
    *eax1831 = reinterpret_cast<signed char>(*eax1832 + al1833);
    *eax1834 = reinterpret_cast<signed char>(*eax1835 + al1836);
    *eax1837 = reinterpret_cast<signed char>(*eax1838 + al1839);
    *eax1840 = reinterpret_cast<signed char>(*eax1841 + al1842);
    *eax1843 = reinterpret_cast<signed char>(*eax1844 + al1845);
    *eax1846 = reinterpret_cast<signed char>(*eax1847 + al1848);
    *eax1849 = reinterpret_cast<signed char>(*eax1850 + al1851);
    *eax1852 = reinterpret_cast<signed char>(*eax1853 + al1854);
    *eax1855 = reinterpret_cast<signed char>(*eax1856 + al1857);
    *eax1858 = reinterpret_cast<signed char>(*eax1859 + al1860);
    *eax1861 = reinterpret_cast<signed char>(*eax1862 + al1863);
    *eax1864 = reinterpret_cast<signed char>(*eax1865 + al1866);
    *eax1867 = reinterpret_cast<signed char>(*eax1868 + al1869);
    *eax1870 = reinterpret_cast<signed char>(*eax1871 + al1872);
    *eax1873 = reinterpret_cast<signed char>(*eax1874 + al1875);
    *eax1876 = reinterpret_cast<signed char>(*eax1877 + al1878);
    *eax1879 = reinterpret_cast<signed char>(*eax1880 + al1881);
    *eax1882 = reinterpret_cast<signed char>(*eax1883 + al1884);
    *eax1885 = reinterpret_cast<signed char>(*eax1886 + al1887);
    *eax1888 = reinterpret_cast<signed char>(*eax1889 + al1890);
    *eax1891 = reinterpret_cast<signed char>(*eax1892 + al1893);
    *eax1894 = reinterpret_cast<signed char>(*eax1895 + al1896);
    *eax1897 = reinterpret_cast<signed char>(*eax1898 + al1899);
    *eax1900 = reinterpret_cast<signed char>(*eax1901 + al1902);
    *eax1903 = reinterpret_cast<signed char>(*eax1904 + al1905);
    *eax1906 = reinterpret_cast<signed char>(*eax1907 + al1908);
    *eax1909 = reinterpret_cast<signed char>(*eax1910 + al1911);
    *eax1912 = reinterpret_cast<signed char>(*eax1913 + al1914);
    *eax1915 = reinterpret_cast<signed char>(*eax1916 + al1917);
    *eax1918 = reinterpret_cast<signed char>(*eax1919 + al1920);
    *eax1921 = reinterpret_cast<signed char>(*eax1922 + al1923);
    *eax1924 = reinterpret_cast<signed char>(*eax1925 + al1926);
    *eax1927 = reinterpret_cast<signed char>(*eax1928 + al1929);
    *eax1930 = reinterpret_cast<signed char>(*eax1931 + al1932);
    *eax1933 = reinterpret_cast<signed char>(*eax1934 + al1935);
    *eax1936 = reinterpret_cast<signed char>(*eax1937 + al1938);
    *eax1939 = reinterpret_cast<signed char>(*eax1940 + al1941);
    *eax1942 = reinterpret_cast<signed char>(*eax1943 + al1944);
    *eax1945 = reinterpret_cast<signed char>(*eax1946 + al1947);
    *eax1948 = reinterpret_cast<signed char>(*eax1949 + al1950);
    *eax1951 = reinterpret_cast<signed char>(*eax1952 + al1953);
    *eax1954 = reinterpret_cast<signed char>(*eax1955 + al1956);
    *eax1957 = reinterpret_cast<signed char>(*eax1958 + al1959);
    *eax1960 = reinterpret_cast<signed char>(*eax1961 + al1962);
    *eax1963 = reinterpret_cast<signed char>(*eax1964 + al1965);
    *eax1966 = reinterpret_cast<signed char>(*eax1967 + al1968);
    *eax1969 = reinterpret_cast<signed char>(*eax1970 + al1971);
    *eax1972 = reinterpret_cast<signed char>(*eax1973 + al1974);
    *eax1975 = reinterpret_cast<signed char>(*eax1976 + al1977);
    *eax1978 = reinterpret_cast<signed char>(*eax1979 + al1980);
    *eax1981 = reinterpret_cast<signed char>(*eax1982 + al1983);
    *eax1984 = reinterpret_cast<signed char>(*eax1985 + al1986);
    *eax1987 = reinterpret_cast<signed char>(*eax1988 + al1989);
    *eax1990 = reinterpret_cast<signed char>(*eax1991 + al1992);
    *eax1993 = reinterpret_cast<signed char>(*eax1994 + al1995);
    *eax1996 = reinterpret_cast<signed char>(*eax1997 + al1998);
    *eax1999 = reinterpret_cast<signed char>(*eax2000 + al2001);
    *eax2002 = reinterpret_cast<signed char>(*eax2003 + al2004);
    *eax2005 = reinterpret_cast<signed char>(*eax2006 + al2007);
    *eax2008 = reinterpret_cast<signed char>(*eax2009 + al2010);
    *eax2011 = reinterpret_cast<signed char>(*eax2012 + al2013);
    *eax2014 = reinterpret_cast<signed char>(*eax2015 + al2016);
    *eax2017 = reinterpret_cast<signed char>(*eax2018 + al2019);
    *eax2020 = reinterpret_cast<signed char>(*eax2021 + al2022);
}

int32_t fun_40418e() {
    return 1;
}

struct s287 {
    signed char[3] pad3;
    int32_t f3;
};

struct s288 {
    signed char[3] pad3;
    int32_t f3;
};

void fun_404c65(uint32_t ecx) {
    int32_t* esi2;
    struct s287* esi3;
    int32_t* edi4;
    struct s288* edi5;
    int32_t edx6;

    esi2 = &esi3->f3;
    edi4 = &edi5->f3;
    if (ecx < 8) 
        goto 0x404c3c;
    while (ecx) {
        --ecx;
        *edi4 = *esi2;
        ++edi4;
        ++esi2;
    }
    switch (edx6) {
    case 3:
        goto 0x404d64;
    case 2:
        goto 0x404d50;
    case 1:
        goto 0x404d44;
    case 0:
        goto 0x404d3c;
    }
}

void fun_40761d(void** ecx) {
    int32_t ebp2;
    int32_t ebp3;
    int32_t ebp4;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp2 - 24)) - 4) = 0x407625;
    fun_404640(ecx);
    *reinterpret_cast<int32_t*>(ebp3 - 32) = 0;
    *reinterpret_cast<uint32_t*>(ebp4 - 4) = 0xffffffff;
}

uint32_t g40ba24 = 0;

uint32_t fun_401164(int32_t ecx, int32_t a2) {
    uint32_t eax3;

    fun_40112c();
    eax3 = fun_403056();
    g40ba24 = eax3;
    if (a2) {
        eax3 = fun_403004(ecx);
    }
    __asm__("fclex ");
    return eax3;
}

void fun_404192() {
}
