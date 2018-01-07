
void** fun_41119f(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

void** fun_41134d(void** a1, void** a2, void** a3, int32_t a4, void** a5, void* a6, void** a7, void** a8);

uint32_t fun_4114ab(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** fun_41100a(void** a1, void* a2, void** a3, void** a4, void** a5, void* a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void* ebp16;
    void** v17;
    void** ecx18;
    void** v19;
    void** v20;
    void** v21;
    void** eax22;
    void** v23;
    void** v24;
    void** v25;
    void** eax26;
    int32_t v27;
    void** eax28;
    void** v29;
    void** v30;

    ebp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp16) + 0xffffffd4);
    ecx18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp16) + 20);
    if (!a3 && (eax22 = fun_41119f(ecx18, 2, 0x426a54, 93, 0, 0x426a8c, v19, v20, v21), reinterpret_cast<int1_t>(eax22 == 1))) {
    }
    if (!a1 && (eax26 = fun_41119f(ecx18, 2, 0x426a54, 94, 0, 0x426a40, v23, v24, v25), reinterpret_cast<int1_t>(eax26 == 1))) {
    }
    eax28 = fun_41134d(v17, a3, ecx18, v27, a1, a2, a1, 66);
    if (a1) {
        v29 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(a2) - 1);
        if (reinterpret_cast<signed char>(v29) < reinterpret_cast<signed char>(0)) {
            fun_4114ab(v17, 0, v17, v30, a1, v29, a1, 66);
        } else {
            *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0);
        }
    }
    return eax28;
}

int32_t fun_4111f9(int32_t a1, int32_t a2, int32_t a3, void** a4, void** a5, void** a6) {
    int32_t ecx7;

    ecx7 = 48;
    while (ecx7) {
        --ecx7;
    }
    return 5;
}

void fun_41155a(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** fun_411424(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23) {
    int1_t zf24;
    void** edi25;
    void** esi26;
    void** ebx27;
    void** edx28;
    void** eax29;
    void** eax30;

    if (!zf24) {
        fun_41155a(__return_address(), 0, edi25, esi26, ebx27, edx28, eax29);
        return eax29;
    } else {
        return eax30;
    }
}

int32_t LoadIconA = 0x2c47e;

int32_t LoadCursorA = 0x2c470;

int32_t RegisterClassExA = 0x2c45c;

void fun_4111d1(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14);

void** fun_41159b(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** v15;
    void** ebp16;
    void** ebp17;
    void** v18;
    void** ebx19;
    void** v20;
    void** esi21;
    void** v22;
    void** edi23;
    void** ecx24;
    void** v25;
    void** v26;
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
    void** v39;
    void** v40;
    void** v41;
    void** eax42;
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
    void** eax58;
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
    void** eax72;
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
    void** v85;
    void** eax86;
    void** edx87;
    void** v88;
    void** v89;
    void** eax90;

    v14 = reinterpret_cast<void**>(__return_address());
    v15 = ebp16;
    ebp17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v18 = ebx19;
    v20 = esi21;
    v22 = edi23;
    ecx24 = reinterpret_cast<void**>(62);
    while (ecx24) {
        --ecx24;
    }
    LoadIconA(a1, 0x6b, v22, v20, v18);
    eax42 = fun_411424(ecx24, a1, 0x6b, v22, v20, v18, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41);
    LoadCursorA(0, 0x7f00, a1, 0x6b, v22, v20, v18);
    eax58 = fun_411424(ecx24, 0, 0x7f00, a1, 0x6b, v22, v20, v18, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57);
    LoadIconA();
    eax72 = fun_411424(ecx24, a1, 0x6c, 0, 0x7f00, a1, 0x6b, v22, v20, v18, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71);
    v73 = ebp17 + 0xffffffcc;
    RegisterClassExA();
    eax86 = fun_411424(ecx24, v73, a1, 0x6c, 0, 0x7f00, a1, 0x6b, v22, v20, v18, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85);
    fun_4111d1(ebp17, eax86, edx87, v73, a1, 0x6c, 0, 0x7f00, a1, 0x6b, v22, v20, v18, v88);
    eax90 = fun_411424(ebp17, eax42, eax58, 6, 0x6d, 0x429500, eax72, v89, v15, v14, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    return eax90;
}

void** g4295cc = reinterpret_cast<void**>(0);

int32_t CreateWindowExA = 0x2c4a8;

int32_t ShowWindow = 0x2c49a;

int32_t UpdateWindow = 0x2c48a;

void** fun_41133e(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** v15;
    void** ebp16;
    void** v17;
    void** ebx18;
    void** v19;
    void** esi20;
    void** v21;
    void** edi22;
    void** ecx23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** eax31;
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
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** eax52;

    v14 = reinterpret_cast<void**>(__return_address());
    v15 = ebp16;
    v17 = ebx18;
    v19 = esi20;
    v21 = edi22;
    ecx23 = reinterpret_cast<void**>(51);
    while (ecx23) {
        --ecx23;
    }
    g4295cc = a1;
    CreateWindowExA();
    eax31 = fun_411424(ecx23, 0, 0x429500, 0x429568, 0xcf0000, 0x80000000, 0, 0x80000000, 0, 0, 0, a1, 0, v21, v19, v17, v24, v25, v26, v27, v28, v29, v30);
    if (eax31) {
        ecx23 = eax31;
        ShowWindow(ecx23, a2);
        fun_411424(ecx23, ecx23, a2, 0, 0x429500, 0x429568, 0xcf0000, 0x80000000, 0, 0x80000000, 0, 0, 0, a1, 0, v21, v19, v17, v32, v33, v34, v35, v36);
        UpdateWindow(eax31, ecx23, a2);
        fun_411424(ecx23, eax31, ecx23, a2, 0, 0x429500, 0x429568, 0xcf0000, 0x80000000, 0, 0x80000000, 0, 0, 0, a1, 0, v21, v19, v17, v37, v38, v39, v40);
    }
    eax52 = fun_411424(ecx23, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, eax31, v51, v15, v14, a1, a2, a3, a4, a5, a6, a7, a8);
    return eax52;
}

struct s0 {
    void** f0;
    signed char[3] pad4;
    void* f4;
};

void fun_4112ad(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

void fun_4111d1(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** v15;
    void** v16;
    void** ebp17;
    void** v18;
    void** ebx19;
    void** v20;
    void** esi21;
    struct s0* esi22;
    struct s0* edx23;
    void** eax24;
    void** v25;
    void** edi26;
    void** edi27;
    void** ebx28;
    void** v29;
    void** ecx30;
    void** eax31;
    int1_t less32;

    v15 = reinterpret_cast<void**>(__return_address());
    v16 = ebp17;
    v18 = ebx19;
    v20 = esi21;
    esi22 = edx23;
    eax24 = esi22->f0;
    v25 = edi26;
    edi27 = reinterpret_cast<void**>(0);
    ebx28 = ecx;
    v29 = reinterpret_cast<void**>(0);
    if (reinterpret_cast<signed char>(eax24) > reinterpret_cast<signed char>(0)) {
        do {
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(esi22->f4) + reinterpret_cast<unsigned char>(edi27))) + reinterpret_cast<unsigned char>(ebx28) - 4) != 0xcccccccc || *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(esi22->f4) + reinterpret_cast<unsigned char>(edi27) + 4)) + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(esi22->f4) + reinterpret_cast<unsigned char>(edi27))) + reinterpret_cast<unsigned char>(ebx28)) != 0xcccccccc) {
                ecx30 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(esi22->f4) + reinterpret_cast<unsigned char>(edi27) + 8);
                fun_4112ad(ecx30, v15, ecx30, v25, v20, v18, v29, v16, v15, a2, a3, a4, a5, a6, a7);
            }
            eax31 = v29 + 1;
            edi27 = edi27 + 12;
            less32 = reinterpret_cast<signed char>(eax31) < reinterpret_cast<signed char>(esi22->f0);
            v29 = eax31;
        } while (less32);
    }
    return;
}

void** fun_411474(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    return fun_41119f;
}

void** g42960c = reinterpret_cast<void**>(0);

void** fun_41138e(void** a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    void** eax7;

    eax7 = g42960c;
    g42960c = a1;
    return eax7;
}

void** g428b68 = reinterpret_cast<void**>(1);

void fun_414c20(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21);

int32_t g425594 = 0x61772027;

void fun_412930(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12);

void fun_4112ad(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    uint40_t v3;
    void** v16;
    void** v17;
    void** ebp18;
    void** eax19;
    void** v20;
    void** ebx21;
    void** v22;
    void** esi23;
    void*** esp24;
    void** v25;
    void** edi26;
    void** v27;
    void** ebx28;
    void** eax29;
    void** edx30;
    int32_t ecx31;
    void** eax32;
    void** esi33;
    void* eax34;
    uint32_t ecx35;
    uint32_t ecx36;
    int32_t eax37;

    *reinterpret_cast<void***>(&v3) = a3;
    v16 = reinterpret_cast<void**>(__return_address());
    v17 = ebp18;
    eax19 = g428b68;
    v20 = ebx21;
    v22 = esi23;
    esp24 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4);
    v25 = edi26;
    v27 = eax19;
    if (eax19 != 0xffffffff) {
        ebx28 = *reinterpret_cast<void***>(&v3);
        eax29 = ebx28;
        do {
            ecx = *reinterpret_cast<void***>(eax29);
            ++eax29;
        } while (ecx);
        fun_414c20(ecx, v25, v22, v20, v27, v17, v16, a2, *reinterpret_cast<void***>(&v3), a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
        edx30 = reinterpret_cast<void**>(esp24 - 4 + 4);
        ecx31 = 7;
        eax32 = ebx28;
        while (ecx31) {
            --ecx31;
        }
        esi33 = eax32;
        do {
            ++eax32;
        } while (*reinterpret_cast<void***>(eax32));
        eax34 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax32) - reinterpret_cast<unsigned char>(esi33));
        do {
        } while (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v3) + 1));
        ecx35 = reinterpret_cast<uint32_t>(eax34) >> 2;
        while (ecx35) {
            --ecx35;
        }
        ecx36 = reinterpret_cast<uint32_t>(eax34) & 3;
        while (ecx36) {
            --ecx36;
        }
        do {
        } while (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v3) + 1));
        eax37 = g425594;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v3) + 1) = eax37;
        fun_412930(a2, v27, 2, edx30, v25, v22, v20, v27, v17, v16, a2, *reinterpret_cast<void***>(&v3));
    }
    return;
}

int32_t GetModuleHandleA = 0x2c532;

struct s1 {
    uint16_t f0;
    signed char[58] pad60;
    int32_t f60;
};

struct s2 {
    int32_t f0;
    signed char[20] pad24;
    uint16_t f24;
};

void** fun_4126e0(void** a1) {
    struct s1* eax2;
    struct s2* v3;
    uint32_t v4;
    void** ecx5;
    void** eax6;

    eax2 = reinterpret_cast<struct s1*>(GetModuleHandleA(0));
    if (static_cast<uint32_t>(eax2->f0) == 0x5a4d) {
        v3 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(eax2) + eax2->f60);
        if (v3->f0 == 0x4550) {
            v4 = v3->f24;
            if (v4 == 0x10b) {
                if (*reinterpret_cast<uint32_t*>(&v3->f24 + 46) > 14) {
                    ecx5 = reinterpret_cast<void**>(0);
                    *reinterpret_cast<unsigned char*>(&ecx5) = reinterpret_cast<uint1_t>(!!*reinterpret_cast<int32_t*>(&v3->f24 + 0x68));
                    eax6 = ecx5;
                } else {
                    eax6 = reinterpret_cast<void**>(0);
                }
            } else {
                if (v4 == 0x20b) {
                    if (*reinterpret_cast<uint32_t*>(&v3->f24 + 54) > 14) {
                        eax6 = reinterpret_cast<void**>(0);
                        *reinterpret_cast<unsigned char*>(&eax6) = reinterpret_cast<uint1_t>(!!*reinterpret_cast<int32_t*>(&v3->f24 + 0x70));
                    } else {
                        eax6 = reinterpret_cast<void**>(0);
                    }
                } else {
                    eax6 = reinterpret_cast<void**>(0);
                }
            }
        } else {
            eax6 = reinterpret_cast<void**>(0);
        }
    } else {
        eax6 = reinterpret_cast<void**>(0);
    }
    return eax6;
}

int32_t HeapCreate = 0x2c6ee;

void** g42af80;

int32_t fun_411442(void** ecx);

int32_t g42af90;

int32_t fun_411497(void** a1);

int32_t HeapDestroy = 0x2c6e0;

int32_t fun_411078(void** ecx, int32_t a2, void** a3) {
    void** eax4;
    int1_t zf5;
    int32_t eax6;
    int1_t zf7;
    int32_t eax8;
    void** ecx9;

    eax4 = reinterpret_cast<void**>(HeapCreate());
    g42af80 = eax4;
    zf5 = g42af80 == 0;
    if (!zf5) {
        eax6 = fun_411442(ecx);
        g42af90 = eax6;
        zf7 = g42af90 == 3;
        if (!(!zf7 || (eax8 = fun_411497(0x3f8), !!eax8))) {
            ecx9 = g42af80;
            HeapDestroy(ecx9);
        }
    }
    goto 0x1000;
}

int32_t g429604 = 0;

void** fun_4114bf();

void** fun_411230(void** a1);

int32_t* fun_41122b(void** a1);

int32_t* fun_4126a0(void** a1, void** a2) {
    int1_t zf3;
    int32_t* eax4;

    zf3 = g429604 == 1;
    if (zf3) {
        fun_4114bf();
    }
    fun_411230(a1);
    eax4 = fun_41122b(0xff);
    return eax4;
}

int32_t g428b40 = 0x411212;

void fun_4114e2(void** a1, void** a2) {
    int1_t zf3;

    zf3 = g429604 == 1;
    if (zf3) {
        fun_4114bf();
    }
    fun_411230(a1);
    g428b40(0xff);
    return;
}

int32_t g4297d4 = 0;

int32_t GetEnvironmentStringsW = 0x2c696;

int32_t GetLastError = 0x2c686;

int32_t GetEnvironmentStrings = 0x2c63e;

void** fun_411064(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23);

int32_t WideCharToMultiByte = 0x2c670;

void** fun_411352(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

int32_t FreeEnvironmentStringsA = 0x2c624;

int32_t FreeEnvironmentStringsW = 0x2c656;

void** fun_41141a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20);

void** fun_41100f(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** v11;
    void** v12;
    void** ebp13;
    void** v14;
    void** v15;
    int1_t zf16;
    void** eax17;
    int32_t eax18;
    int1_t zf19;
    int1_t zf20;
    int1_t zf21;
    void** eax22;
    void** v23;
    void** ecx24;
    void** v25;
    void** v26;
    void** eax27;
    void** eax28;
    void** eax29;
    void** v30;
    void** eax31;
    void** v32;
    void** eax33;
    void** v34;
    void** v35;
    void** v36;
    int32_t eax37;

    v11 = reinterpret_cast<void**>(__return_address());
    v12 = ebp13;
    v14 = reinterpret_cast<void**>(0);
    v15 = reinterpret_cast<void**>(0);
    zf16 = g4297d4 == 0;
    if (zf16) {
        eax17 = reinterpret_cast<void**>(GetEnvironmentStringsW());
        v14 = eax17;
        if (!v14) {
            eax18 = reinterpret_cast<int32_t>(GetLastError());
            if (eax18 == 0x78) {
                g4297d4 = 2;
            }
        } else {
            g4297d4 = 1;
        }
    }
    zf19 = g4297d4 == 1;
    if (!zf19) {
        zf20 = g4297d4 == 2;
        if (zf20 || (zf21 = g4297d4 == 0, zf21)) {
            if (static_cast<int1_t>(eax22 = reinterpret_cast<void**>(GetEnvironmentStrings()), v15 = eax22, !!v15)) {
                v23 = v15;
                while (*reinterpret_cast<void***>(v23)) {
                    ++v23;
                    if (!*reinterpret_cast<void***>(v23)) {
                        ++v23;
                    }
                }
                ecx24 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v23) - reinterpret_cast<unsigned char>(v15) + 1);
                eax27 = fun_411064(ecx24, ecx24, 2, 0x4256b0, 0x8c, v15, v25, v23, v26, v14, ecx24, v12, v11, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
                if (!eax27) 
                    goto addr_41419a_16;
            } else {
                eax28 = reinterpret_cast<void**>(0);
                goto addr_4141cd_18;
            }
        } else {
            eax28 = reinterpret_cast<void**>(0);
            goto addr_4141cd_18;
        }
    } else {
        if (v14 || (eax29 = reinterpret_cast<void**>(GetEnvironmentStringsW()), v14 = eax29, !!v14)) {
            v30 = v14;
            while (*reinterpret_cast<void***>(v30)) {
                v30 = v30 + 2;
                if (!*reinterpret_cast<void***>(v30)) {
                    v30 = v30 + 2;
                }
            }
            eax31 = reinterpret_cast<void**>(WideCharToMultiByte(0, 0, v14, (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(v30) - reinterpret_cast<unsigned char>(v14)) >> 1) + 1, 0, 0, 0, 0));
            if (!eax31) 
                goto addr_4140b3_27;
            eax33 = fun_411064(eax31, eax31, 2, 0x4256b0, 97, 0, 0, v14, (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(v30) - reinterpret_cast<unsigned char>(v14)) >> 1) + 1, 0, 0, 0, 0, 0, (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(v30) - reinterpret_cast<unsigned char>(v14)) >> 1) + 1, v32, v30, v14, eax31, v12, v11, a1, a2);
            v34 = eax33;
            if (v34) 
                goto addr_4140c4_29; else 
                goto addr_4140b3_27;
        } else {
            eax28 = reinterpret_cast<void**>(0);
            goto addr_4141cd_18;
        }
    }
    fun_411352(eax27, v15, ecx24, v15, v35, eax27);
    FreeEnvironmentStringsA(v15);
    eax28 = eax27;
    addr_4141cd_18:
    return eax28;
    addr_41419a_16:
    FreeEnvironmentStringsA(v15);
    eax28 = reinterpret_cast<void**>(0);
    goto addr_4141cd_18;
    addr_4140b3_27:
    FreeEnvironmentStringsW(v14, 0, 0, v14, (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(v30) - reinterpret_cast<unsigned char>(v14)) >> 1) + 1, 0, 0, 0, 0);
    eax28 = reinterpret_cast<void**>(0);
    goto addr_4141cd_18;
    addr_4140c4_29:
    v36 = v34;
    eax37 = reinterpret_cast<int32_t>(WideCharToMultiByte(0, 0, v14, (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(v30) - reinterpret_cast<unsigned char>(v14)) >> 1) + 1, v36, eax31, 0, 0, 0, 0, v14, (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(v30) - reinterpret_cast<unsigned char>(v14)) >> 1) + 1, 0, 0, 0, 0));
    if (!eax37) {
        fun_41141a(v34, v34, 2, 0, 0, v14, (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(v30) - reinterpret_cast<unsigned char>(v14)) >> 1) + 1, v36, eax31, 0, 0, 0, 0, v14, (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(v30) - reinterpret_cast<unsigned char>(v14)) >> 1) + 1, 0, 0, 0, 0, v34);
        v34 = reinterpret_cast<void**>(0);
    }
    FreeEnvironmentStringsW(v14, 0, 0, v14, (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(v30) - reinterpret_cast<unsigned char>(v14)) >> 1) + 1, v36, eax31, 0, 0, 0, 0, v14, (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(v30) - reinterpret_cast<unsigned char>(v14)) >> 1) + 1, 0, 0, 0, 0);
    eax28 = v34;
    goto addr_4141cd_18;
}

int32_t g42b0f8;

int32_t fun_41109b();

signed char g42979c = 0;

int32_t GetModuleFileNameA = 0x2c60e;

void** g429668 = reinterpret_cast<void**>(0);

void** g42b100;

void fun_413b80(void** a1, void** a2, void** a3, int32_t* a4, int32_t* a5, void** a6, void** a7, void** a8);

int32_t g42964c = 0;

void** g429650 = reinterpret_cast<void**>(0);

uint32_t fun_411032(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void*** ebp9;
    int1_t zf10;
    int1_t zf11;
    void** eax12;
    void** eax13;
    void** v14;
    void** edx15;
    void** ecx16;
    void*** v17;
    int32_t v18;
    void** v19;
    void** v20;
    void** v21;
    void** ebp22;
    void** eax23;
    int32_t v24;
    int32_t v25;
    uint32_t eax26;

    ebp9 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    zf10 = g42b0f8 == 0;
    if (zf10) {
        fun_41109b();
    }
    g42979c = 0;
    GetModuleFileNameA(0, 0x429698, 0x104);
    g429668 = reinterpret_cast<void**>(0x429698);
    zf11 = g42b100 == 0;
    if (zf11 || (eax12 = g42b100, static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax12))) == 0)) {
        eax13 = g429668;
        v14 = eax13;
    } else {
        edx15 = g42b100;
        v14 = edx15;
    }
    fun_413b80(v14, 0, 0, ebp9 - 8, ebp9 - 16, 0, 0x429698, 0x104);
    ecx16 = reinterpret_cast<void**>(v17 + v18 * 4);
    eax23 = fun_411064(ecx16, ecx16, 2, 0x4256a4, 0x82, 0, 0x429698, 0x104, v14, v19, v14, v20, v21, ebp22, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8);
    if (eax23) {
        fun_413b80(v14, eax23, eax23 + v24 * 4, ebp9 - 8, ebp9 - 16, 0, 0x429698, 0x104);
        g42964c = v25 - 1;
        g429650 = eax23;
        eax26 = 0;
    } else {
        eax26 = 0xffffffff;
    }
    return eax26;
}

int32_t g42b0fc;

void** fun_413460(void** ecx, int32_t* a2, int32_t* a3, void** a4);

int32_t fun_411181(void** ecx, void** a2);

void fun_4110cd();

int32_t* fun_413430(int32_t* a1, int32_t* a2);

void** fun_411587(void** ecx, int32_t a2, void** a3) {
    int1_t zf4;
    void** eax5;
    void** eax6;

    zf4 = g42b0fc == 0;
    if (!zf4) {
        g42b0fc(a2, ecx);
    }
    eax5 = fun_413460(ecx, 0x42830c, 0x428520, ecx);
    if (!eax5) {
        fun_411181(ecx, fun_4110cd);
        fun_413430(0x428000, 0x428208);
        eax6 = reinterpret_cast<void**>(0);
    } else {
        eax6 = eax5;
    }
    return eax6;
}

int32_t* fun_4132b0(void** a1, int32_t a2, int32_t a3);

int32_t* fun_41158c(void** a1, void** a2, void** a3, void** a4) {
    int32_t* eax5;

    eax5 = fun_4132b0(a1, 0, 0);
    return eax5;
}

int32_t* fun_41115e(void** a1, void** a2, void** a3) {
    int32_t* eax4;

    eax4 = fun_4132b0(0, 0, 1);
    return eax4;
}

int32_t* fun_411212(void** a1) {
    int32_t* eax2;

    eax2 = fun_4132b0(a1, 1, 0);
    return eax2;
}

int32_t* fun_411172() {
    int32_t* eax1;

    eax1 = fun_4132b0(0, 1, 1);
    return eax1;
}

int32_t g428b44 = 2;

int32_t g4297d8 = 0;

void** fun_4114bf() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    void** eax5;

    zf1 = g429604 == 1;
    if (zf1 || (zf2 = g429604 == 0, zf2) && (zf3 = g428b44 == 1, zf3)) {
        fun_411230(0xfc);
        zf4 = g4297d8 == 0;
        if (!zf4) {
            g4297d8();
        }
        eax5 = fun_411230(0xff);
    }
    return eax5;
}

void** g428eb0 = reinterpret_cast<void**>(78);

void** fun_411235(void** a1, void** a2, void** a3, void** a4);

int32_t GetStdHandle = 0x2c6c2;

int32_t WriteFile = 0x2c722;

void** fun_411258(void** a1, void** a2, void** a3, void** a4, void** a5);

void** fun_411492(void** a1, void*** a2, uint32_t a3, void** a4, void** a5, void** a6);

void** fun_41120d(void** a1, void** a2, void** a3, void** a4, void** a5);

int32_t fun_41107d(void** a1, int32_t a2, uint32_t a3, void** a4, void** a5, void** a6);

void** fun_411087(void** ecx, void** a2, void** a3, void** a4, void** a5);

void** fun_411230(void** a1) {
    void* esp2;
    void* ebp3;
    void** eax4;
    void** v5;
    void*** esp6;
    void** v7;
    void** esi8;
    uint32_t v9;
    void** v10;
    void** v11;
    void** v12;
    void** eax13;
    int1_t zf14;
    int1_t zf15;
    int1_t zf16;
    void** v17;
    void** v18;
    void** eax19;
    int32_t v20;
    int32_t eax21;
    void** v22;
    int32_t eax23;
    void* esp24;
    void** v25;
    void** eax26;
    void* esp27;
    void** eax28;
    void** ecx29;
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
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** eax50;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebp3 = esp2;
    eax4 = g428eb0;
    v5 = eax4;
    esp6 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp2) - 0x124 - 4);
    v7 = esi8;
    v9 = 0;
    while (v9 < 19) {
        if (a1 == *reinterpret_cast<void***>(v9 * 8 + 0x428c60)) 
            goto addr_414d09_5;
        ++v9;
    }
    addr_414d0d_8:
    if (a1 == *reinterpret_cast<void***>(v9 * 8 + 0x428c60)) {
        if (a1 != 0xfc && (a1 != 0xff && (v10 = *reinterpret_cast<void***>(v9 * 8 + 0x428c64), eax13 = fun_41119f(a1, 1, 0, 0, 0, v10, v7, v11, v12), esp6 = esp6 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 20, reinterpret_cast<int1_t>(eax13 == 1)))) {
        }
        zf14 = g429604 == 1;
        if (zf14 || (zf15 = g429604 == 0, zf15) && (zf16 = g428b44 == 1, zf16)) {
            v17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffff8);
            v18 = *reinterpret_cast<void***>(v9 * 8 + 0x428c64);
            eax19 = fun_411235(v18, v17, 0, v7);
            v20 = *reinterpret_cast<int32_t*>(v9 * 8 + 0x428c64);
            eax21 = reinterpret_cast<int32_t>(GetStdHandle(0xf4, v20, eax19, v17, 0));
            WriteFile(eax21, 0xf4, v20, eax19, v17, 0);
        } else {
            if (a1 != 0xfc) {
                v22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffee0);
                eax23 = reinterpret_cast<int32_t>(GetModuleFileNameA(0, v22, 0x104));
                esp24 = reinterpret_cast<void*>(esp6 - 4 - 4 - 4 - 4 + 4);
                if (!eax23) {
                    fun_411258(reinterpret_cast<int32_t>(ebp3) + 0xfffffee0, 0x425b7c, 0, v22, 0x104);
                    esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) - 4 - 4 - 4 + 4 + 8);
                }
                v25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffee0);
                eax26 = fun_411235(v25, 0, v22, 0x104);
                esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) - 4 - 4 + 4 + 4);
                if (reinterpret_cast<unsigned char>(eax26 + 1) > reinterpret_cast<unsigned char>(60)) {
                    eax28 = fun_411235(reinterpret_cast<int32_t>(ebp3) + 0xfffffee0, 0, v22, 0x104);
                    v25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v25) + reinterpret_cast<unsigned char>(eax28) + 0xffffffc5);
                    fun_411492(v25, 0x425b78, 3, 0, v22, 0x104);
                    esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 - 4 + 4 + 4 - 4 - 4 - 4 - 4 + 4 + 12);
                }
                fun_411235(v25, 0, v22, 0x104);
                ecx29 = *reinterpret_cast<void***>(v9 * 8 + 0x428c64);
                fun_411235(ecx29, 0, v22, 0x104);
                fun_414c20(ecx29, 0, v22, 0x104, v7, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45);
                v46 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp27) - 4 - 4 + 4 + 4 - 4 - 4 + 4 + 4 - 4 + 4);
                fun_411258(v46, 0x425b58, 0, v22, 0x104);
                fun_41120d(v46, v25, 0, v22, 0x104);
                fun_41120d(v46, 0x425b54, 0, v22, 0x104);
                v47 = *reinterpret_cast<void***>(v9 * 8 + 0x428c64);
                fun_41120d(v46, v47, 0, v22, 0x104);
                fun_41107d(v46, "Microsoft Visual C++ Runtime Library", 0x12010, 0, v22, 0x104);
            }
        }
    }
    eax50 = fun_411087(v5, v7, v46, v48, v49);
    return eax50;
    addr_414d09_5:
    goto addr_414d0d_8;
}

int32_t GetProcAddress = 0x2c59a;

int32_t ExitProcess = 0x2c5e4;

int32_t* fun_41122b(void** a1) {
    int32_t eax2;
    int32_t eax3;
    int32_t* eax4;

    eax2 = reinterpret_cast<int32_t>(GetModuleHandleA("mscoree.dll"));
    if (eax2 && (eax3 = reinterpret_cast<int32_t>(GetProcAddress(eax2, "CorExitProcess", "mscoree.dll")), !!eax3)) {
        eax3(a1, eax2, "CorExitProcess", "mscoree.dll");
    }
    eax4 = reinterpret_cast<int32_t*>(ExitProcess(a1, "mscoree.dll"));
    return eax4;
}

void** fun_4115b4(void** a1);

int32_t fun_412a60(int32_t a1, void** a2);

int32_t fun_4130a0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14);

void** fun_411334(void** ecx, void** a2, void** a3, void* a4, void** a5, void*** a6);

int32_t DebugBreak = 0x2c57a;

int32_t fun_412b00(void** a1, int32_t a2, void** a3, int16_t* a4);

void fun_412930(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** v13;
    void*** esp14;
    void** v15;
    void** ebp16;
    void*** ebp17;
    void** v18;
    void** ebx19;
    void** ebx20;
    void** v21;
    void** esi22;
    void** v23;
    void** edi24;
    void** eax25;
    void** esi26;
    void** v27;
    int32_t eax28;
    void** edi29;
    void* esp30;
    signed char al31;
    void** eax32;
    void** ecx33;
    void** v34;
    void** v35;
    int16_t* esp36;
    void** ecx37;
    void* eax38;
    int16_t* edx39;
    void** v40;
    void** v41;
    int32_t eax42;
    void** v43;
    void** v44;
    void** esi45;
    void*** v46;
    void** ecx47;
    int32_t v48;
    int32_t v49;
    int32_t eax50;
    int32_t edx51;
    int32_t eax52;

    v13 = reinterpret_cast<void**>(__return_address());
    esp14 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v15 = ebp16;
    ebp17 = esp14;
    v18 = ebx19;
    ebx20 = a1;
    v21 = esi22;
    v23 = edi24;
    eax25 = fun_4115b4(ebx20);
    esi26 = eax25;
    v27 = esi26;
    eax28 = fun_412a60(0x1002, ebx20);
    edi29 = a4;
    esp30 = reinterpret_cast<void*>(esp14 - 12 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4 + 8);
    if (!eax28) {
        al31 = 1;
    } else {
        eax32 = edi29;
        do {
            ecx33 = *reinterpret_cast<void***>(eax32);
            ++eax32;
        } while (ecx33);
        fun_414c20(ecx33, v23, v21, v18, v27, v34, v35, v15, v13, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
        esp36 = reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp30) - 4 + 4);
        ecx37 = *reinterpret_cast<void***>(edi29);
        eax38 = reinterpret_cast<void*>(0);
        edx39 = esp36;
        if (!ecx37) 
            goto addr_412993_6; else 
            goto addr_412982_7;
    }
    addr_4129b9_8:
    if (!esi26 || (al31 && (eax42 = fun_4130a0(ecx37, v23, v21, v18, v27, v40, v41, v15, v13, a1, a2, a3, a4, a5), esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 + 4), !!eax42) || (fun_414c20(ecx37, v23, v21, v18, v27, v43, v44, v15, v13, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12), esi45 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) - 4 + 4), v46 = ebp17 - 4, ecx47 = reinterpret_cast<void**>(ebp17 + 0xfffffff8), fun_411334(ecx47, ebx20 + 0xfffffffb, esi45, 0x200, ecx47, v46), eax50 = reinterpret_cast<int32_t>(v27(a2, esi45, v48, v49, "Run-Time Check Failure #%d - %s", a3, edi29, ebx20 + 0xfffffffb, esi45, 0x200, ecx47, v46)), eax50 == 1))) {
        DebugBreak();
        goto addr_412a15_10;
    }
    addr_412993_6:
    edx39[static_cast<int32_t>(eax38)] = 0;
    edx51 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(a3) * 4 + 0x4251f8);
    eax52 = fun_412b00(a3, edx51, ebx20, edx39);
    esp30 = reinterpret_cast<void*>(esp36 - 2 - 2 - 2 - 2 - 2 + 2 + 8);
    if (eax52) {
        addr_412a15_10:
        return;
    } else {
        al31 = 0;
        goto addr_4129b9_8;
    }
    do {
        addr_412982_7:
        *reinterpret_cast<int16_t*>(&ecx37) = reinterpret_cast<signed char>(ecx37);
        edx39[static_cast<int32_t>(eax38)] = *reinterpret_cast<int16_t*>(&ecx37);
        ecx37 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(eax38) + reinterpret_cast<unsigned char>(edi29) + 1);
        eax38 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax38) + 1);
    } while (ecx37);
    goto addr_412993_6;
}

void fun_414c20(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21) {
    int32_t v22;
    uint32_t eax23;
    void* ecx24;
    uint32_t eax25;
    int32_t* esp26;
    int32_t* esp27;
    int32_t eax28;

    v22 = reinterpret_cast<int32_t>(__return_address());
    if (eax23 >= 0x1000) {
        ecx24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 8);
        do {
            ecx24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx24) - 0x1000);
            eax25 = eax25 - 0x1000;
        } while (eax25 >= 0x1000);
        esp26 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx24) - eax25 - 4);
        *esp26 = v22;
        goto *esp26;
    } else {
        esp27 = reinterpret_cast<int32_t*>(-eax28 + reinterpret_cast<int32_t>(__zero_stack_offset()) + 4 - 4);
        *esp27 = v22;
        goto *esp27;
    }
}

struct s4 {
    signed char[12] pad12;
    int32_t f12;
};

struct s3 {
    struct s3* f0;
    int32_t f4;
    int32_t f8;
    struct s4* f12;
};

struct s3* g0;

int32_t RaiseException = 0x2c588;

int32_t fun_412b00(void** a1, int32_t a2, void** a3, int16_t* a4) {
    struct s3* eax5;

    eax5 = g0;
    g0 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4);
    RaiseException();
    g0 = eax5;
    return 0;
}

int32_t g429628 = 0;

int32_t fun_4130e0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

int32_t g429610 = 0;

int32_t fun_4130a0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    int32_t eax15;
    int32_t eax16;

    eax15 = g429628;
    if (!eax15) {
        eax16 = fun_4130e0(ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        if (!eax16) {
            RaiseException(0xc0000135, eax16, eax16, eax16, __return_address());
        }
        g429628 = 1;
    }
    goto g429610;
}

void** fun_4160c0(void** a1);

int32_t g429838 = 0;

int32_t g4297e0 = 0;

int32_t fun_416570();

int32_t g4297f0 = 0;

int32_t g4297f4 = 0;

int32_t g4297f8 = 0;

int32_t g4297fc = 0;

int32_t g429800 = 0;

int32_t g429804 = 0;

int32_t g429808 = 0;

struct s5 {
    void** f0;
    signed char[11] pad12;
    uint32_t f12;
    uint32_t f16;
};

int32_t GetProcessHeap = 0x2c780;

int32_t HeapAlloc = 0x2c774;

int32_t HeapFree = 0x2c6fc;

struct s6 {
    void** f0;
    signed char f1;
};

void** fun_411334(void** ecx, void** a2, void** a3, void* a4, void** a5, void*** a6) {
    void** v7;
    void*** esp8;
    void** v9;
    void** ebp10;
    void*** ebp11;
    void** v12;
    void** ebx13;
    void** v14;
    void** esi15;
    void** v16;
    void** edi17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** esp31;
    void** v32;
    void** v33;
    void** eax34;
    void** edi35;
    void* esp36;
    int32_t eax37;
    void* esi38;
    int32_t eax39;
    int32_t eax40;
    int32_t ebx41;
    int32_t eax42;
    int32_t eax43;
    int32_t eax44;
    int32_t ecx45;
    int32_t eax46;
    int32_t edx47;
    int32_t eax48;
    int32_t eax49;
    int32_t eax50;
    int32_t ecx51;
    int32_t eax52;
    int32_t edx53;
    int32_t eax54;
    void** edx55;
    int32_t ebx56;
    void** v57;
    void** ecx58;
    uint32_t eax59;
    void* eax60;
    struct s5* eax61;
    uint32_t eax62;
    void** esi63;
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
    void** ecx74;
    int32_t eax75;
    int32_t v76;
    int32_t eax77;
    int32_t v78;
    int32_t v79;
    int32_t eax80;
    int32_t v81;
    int32_t v82;
    int32_t eax83;
    int32_t v84;
    int32_t v85;
    int32_t eax86;
    int32_t v87;
    uint16_t* eax88;
    uint16_t* edi89;
    uint16_t* v90;
    int32_t v91;
    int32_t eax92;
    int32_t v93;
    uint32_t eax94;
    uint32_t ebx95;
    uint32_t v96;
    int32_t eax97;
    uint32_t edx98;
    void* eax99;
    void*** esi100;
    struct s6* v101;
    uint32_t ecx102;
    void** ebx103;
    int1_t less104;
    uint32_t esi105;
    void* eax106;
    uint16_t* v107;
    uint32_t edi108;
    uint32_t edx109;
    uint32_t v110;
    uint32_t ecx111;
    void* edi112;
    struct s6* eax113;
    void* ecx114;
    void* esi115;

    v7 = reinterpret_cast<void**>(__return_address());
    esp8 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v9 = ebp10;
    ebp11 = esp8;
    v12 = ebx13;
    v14 = esi15;
    v16 = edi17;
    fun_414c20(ecx, v16, v14, v12, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v9, v7, a2, a3);
    esp31 = reinterpret_cast<void**>(esp8 - 52 - 4 - 4 - 4 - 4 + 4);
    *reinterpret_cast<void***>(a5) = reinterpret_cast<void**>(0);
    v32 = esp31;
    *reinterpret_cast<void***>(a3) = reinterpret_cast<void**>(0);
    v33 = reinterpret_cast<void**>(0);
    *a6 = reinterpret_cast<void**>(0);
    eax34 = fun_4160c0(a2);
    edi35 = eax34;
    esp36 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp31 - 4) - 4 + 4 + 4);
    if (!edi35) 
        goto addr_415fca_3;
    eax37 = g429838;
    esi38 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a2) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi35 + 4)));
    *a6 = *reinterpret_cast<void***>(edi35 + 24);
    v33 = reinterpret_cast<void**>(1);
    if (!eax37) {
        eax39 = g4297e0;
        if (eax39) 
            goto addr_415fca_3;
        eax40 = fun_416570();
        g4297e0 = eax40;
        if (!eax40) 
            goto addr_415fca_3;
        ebx41 = GetProcAddress;
        eax42 = reinterpret_cast<int32_t>(ebx41(eax40, "PDBOpenValidate3"));
        g4297f0 = eax42;
        if (!eax42 || ((eax43 = g4297e0, eax44 = reinterpret_cast<int32_t>(ebx41(eax43, "PDBOpenDBI", eax40, "PDBOpenValidate3")), g4297f4 = eax44, eax44 == 0) || ((ecx45 = g4297e0, eax46 = reinterpret_cast<int32_t>(ebx41(ecx45, "DBIQueryModFromAddr", eax43, "PDBOpenDBI", eax40, "PDBOpenValidate3")), g4297f8 = eax46, eax46 == 0) || ((edx47 = g4297e0, eax48 = reinterpret_cast<int32_t>(ebx41(edx47, "ModQueryLines", ecx45, "DBIQueryModFromAddr", eax43, "PDBOpenDBI", eax40, "PDBOpenValidate3")), g4297fc = eax48, eax48 == 0) || ((eax49 = g4297e0, eax50 = reinterpret_cast<int32_t>(ebx41(eax49, "ModClose", edx47, "ModQueryLines", ecx45, "DBIQueryModFromAddr", eax43, "PDBOpenDBI", eax40, "PDBOpenValidate3")), g429800 = eax50, eax50 == 0) || ((ecx51 = g4297e0, eax52 = reinterpret_cast<int32_t>(ebx41(ecx51, "DBIClose", eax49, "ModClose", edx47, "ModQueryLines", ecx45, "DBIQueryModFromAddr", eax43, "PDBOpenDBI", eax40, "PDBOpenValidate3")), g429804 = eax52, eax52 == 0) || (edx53 = g4297e0, eax54 = reinterpret_cast<int32_t>(ebx41(edx53, "PDBClose", ecx51, "DBIClose", eax49, "ModClose", edx47, "ModQueryLines", ecx45, "DBIQueryModFromAddr", eax43, "PDBOpenDBI", eax40, "PDBOpenValidate3")), esp36 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp36) - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4), g429808 = eax54, !eax54))))))) {
            return 0;
        } else {
            g429838 = 1;
        }
    }
    edx55 = reinterpret_cast<void**>(0);
    *reinterpret_cast<uint16_t*>(&edx55) = *reinterpret_cast<uint16_t*>(*reinterpret_cast<void***>(edi35 + 16) + 6);
    ebx56 = 0;
    v57 = edx55;
    if (!*reinterpret_cast<uint16_t*>(&edx55)) 
        goto addr_415fca_3;
    ecx58 = *reinterpret_cast<void***>(edi35 + 20);
    do {
        eax59 = *reinterpret_cast<uint16_t*>(&ebx56);
        eax60 = reinterpret_cast<void*>(eax59 + eax59 * 4 << 3);
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx58) + reinterpret_cast<uint32_t>(eax60) + 12)) < reinterpret_cast<uint32_t>(esi38)) {
            eax61 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(eax60) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi35 + 20)));
            if (reinterpret_cast<uint32_t>(esi38) - eax61->f12 < eax61->f16) 
                goto addr_415dd4_14;
            edx55 = v57;
        }
        ++ebx56;
    } while (*reinterpret_cast<uint16_t*>(&ebx56) < *reinterpret_cast<uint16_t*>(&edx55));
    return 1;
    addr_415dd4_14:
    eax62 = *reinterpret_cast<uint16_t*>(&ebx56);
    esi63 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi38) - *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ecx58 + (eax62 + eax62 * 4) * 8) + 12));
    v64 = esi63;
    if (esi63 == 0xffffffff || (fun_414c20(ecx58, v16, v14, v12, v65, v66, v67, v68, v69, v64, 1, v70, v71, v57, v32, v72, v73, v9, v7, a2, a3), ecx74 = *reinterpret_cast<void***>(edi35 + 24), eax75 = reinterpret_cast<int32_t>(g4297f0(ecx74, 0x4250ec, ebp11 - 48, v32, reinterpret_cast<uint32_t>(esp36) - 4 + 4, ebp11 - 44, ebp11 - 40, ebp11 - 24)), eax75 == 0)) {
        addr_415fca_3:
        return v33;
    } else {
        eax77 = reinterpret_cast<int32_t>(g4297f4(v76, "r", 0, ebp11 - 20));
        if (!eax77) {
            addr_415fbd_19:
            g429808(v78);
            goto addr_415fca_3;
        } else {
            eax80 = reinterpret_cast<int32_t>(g4297f8(v79, ebx56 + 1, esi63, ebp11 - 8, ebp11 + 26, ebp11 - 52, ebp11 - 4));
            if (!eax80) {
                addr_415fb0_21:
                g429804(v81);
                goto addr_415fbd_19;
            } else {
                eax83 = reinterpret_cast<int32_t>(g4297fc(v82, 0, ebp11 - 4));
                if (!eax83 || (!v84 || (v85 = v84, eax86 = reinterpret_cast<int32_t>(GetProcessHeap(0, v85)), v87 = eax86, eax88 = reinterpret_cast<uint16_t*>(HeapAlloc(v87, 0, v85)), edi89 = eax88, v90 = edi89, eax92 = reinterpret_cast<int32_t>(g4297fc(v91, edi89, ebp11 - 4, v87, 0, v85)), eax92 == 0))) {
                    addr_415fa3_23:
                    g429800(v93);
                    goto addr_415fb0_21;
                } else {
                    eax94 = *edi89;
                    ebx95 = 0;
                    v96 = 0;
                    if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax94) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax94 == 0)) {
                        addr_415f93_25:
                        eax97 = reinterpret_cast<int32_t>(GetProcessHeap(0, edi89, v87, 0, v85));
                        HeapFree(eax97, 0, edi89, v87, 0, v85);
                        goto addr_415fa3_23;
                    } else {
                        do {
                            edx98 = *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(edi89 + ebx95 * 2 + 2)) + reinterpret_cast<uint32_t>(edi89));
                            eax99 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(edi89 + ebx95 * 2 + 2)) + reinterpret_cast<uint32_t>(edi89));
                            esi100 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax99) + edx98 * 4 + 4);
                            v101 = reinterpret_cast<struct s6*>(esi100 + edx98 * 8);
                            ecx102 = 0;
                            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx98) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edx98 == 0))) {
                                do {
                                    ebx103 = v64;
                                    if (reinterpret_cast<unsigned char>(esi100[ecx102 * 8]) > reinterpret_cast<unsigned char>(ebx103)) 
                                        continue;
                                    if (reinterpret_cast<unsigned char>(ebx103) <= reinterpret_cast<unsigned char>((esi100 + ecx102 * 8)[4])) 
                                        goto addr_415f16_30;
                                    ++ecx102;
                                } while (reinterpret_cast<int32_t>(ecx102) < reinterpret_cast<int32_t>(edx98));
                                ebx95 = v96;
                            }
                            ++ebx95;
                            less104 = reinterpret_cast<int32_t>(ebx95) < reinterpret_cast<int32_t>(static_cast<uint32_t>(*edi89));
                            v96 = ebx95;
                        } while (less104);
                    }
                }
            }
        }
    }
    goto addr_415f93_25;
    addr_415f16_30:
    esi105 = *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax99) + ecx102 * 4 + 4)) + reinterpret_cast<uint32_t>(edi89) + 2);
    eax106 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax99) + ecx102 * 4 + 4)) + reinterpret_cast<uint32_t>(edi89));
    v107 = reinterpret_cast<uint16_t*>(reinterpret_cast<uint32_t>(eax106) + esi105 * 4 + 4);
    edi108 = 0xffffffff;
    edx109 = 0;
    v110 = 0xffffffff;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi105) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi105 == 0)) {
        addr_415f90_35:
        edi89 = v90;
        goto addr_415f93_25;
    } else {
        do {
            ecx111 = reinterpret_cast<unsigned char>(ebx103) - *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax106) + edx109 * 4 + 4);
            if (ecx111 < edi108) {
                v110 = edx109;
                edi108 = ecx111;
            }
            ++edx109;
        } while (reinterpret_cast<int32_t>(edx109) < reinterpret_cast<int32_t>(esi105));
        if (reinterpret_cast<int32_t>(v110) < reinterpret_cast<int32_t>(0)) 
            goto addr_415f90_35;
    }
    edi112 = a4;
    *reinterpret_cast<void***>(a5) = reinterpret_cast<void**>(static_cast<uint32_t>(v107[v110]));
    eax113 = v101;
    ecx114 = reinterpret_cast<void*>(0);
    if (eax113->f0) {
        esi115 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a3) - reinterpret_cast<uint32_t>(eax113));
        edi112 = edi112;
        do {
            if (reinterpret_cast<int32_t>(ecx114) >= reinterpret_cast<int32_t>(edi112)) 
                goto addr_415f86_43;
            *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esi115) + reinterpret_cast<uint32_t>(eax113)) = eax113->f0;
            ecx114 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx114) + 1);
            eax113 = reinterpret_cast<struct s6*>(&eax113->f1);
        } while (eax113->f1);
    }
    if (reinterpret_cast<int32_t>(ecx114) < reinterpret_cast<int32_t>(edi112)) {
        addr_415f89_46:
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx114) + reinterpret_cast<unsigned char>(a3)) = 0;
        goto addr_415f90_35;
    } else {
        addr_415f86_43:
        ecx114 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edi112) - 1);
        goto addr_415f89_46;
    }
}

void** g428b80 = reinterpret_cast<void**>(16);

void fun_41155a(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** edx8;
    void** ebp9;
    void** ecx10;
    void** v11;

    if (reinterpret_cast<signed char>(a2) >= reinterpret_cast<signed char>(4) || reinterpret_cast<signed char>(a2) < reinterpret_cast<signed char>(0)) {
        edx8 = g428b80;
        fun_412930(a1, 1, 4, edx8, ebp9, __return_address(), a1, a2, a3, a4, a5, a6);
        return;
    } else {
        ecx10 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(a2) * 4 + 0x428b60);
        if (ecx10 != 0xffffffff) {
            v11 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(a2) * 4 + 0x428b70);
            fun_412930(a1, ecx10, a2, v11, ebp9, __return_address(), a1, a2, a3, a4, a5, a6);
        }
        return;
    }
}

signed char g429622 = 0;

signed char* fun_412e30(int32_t a1, void** a2) {
    int32_t eax3;
    unsigned char bl4;
    int32_t ecx5;
    int32_t edx6;

    eax3 = a1;
    bl4 = reinterpret_cast<uint1_t>(eax3 < 0);
    ecx5 = 14;
    g429622 = 0;
    do {
        __asm__("cdq ");
        edx6 = eax3 % 10;
        eax3 = eax3 / 10;
        --ecx5;
        *reinterpret_cast<signed char*>(ecx5 + 0x429614) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&edx6) + 48);
    } while (eax3);
    if (bl4) {
        --ecx5;
        *reinterpret_cast<signed char*>(ecx5 + 0x429614) = 45;
    }
    return ecx5 + 0x429614;
}

int32_t LoadLibraryA = 0x2c5ac;

int32_t GetVersionExA = 0x2c56a;

int32_t fun_413180();

int32_t fun_4130e0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** eax16;
    int32_t eax17;
    void** esi18;
    void** ebp19;
    int32_t eax20;
    int32_t ecx21;

    eax16 = reinterpret_cast<void**>(LoadLibraryA(0x425664));
    eax17 = reinterpret_cast<int32_t>(GetProcAddress(eax16));
    g429610 = eax17;
    if (!eax17) {
        fun_414c20(ecx, eax16, 0x42564c, 0x425664, esi18, ebp19, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
        eax20 = reinterpret_cast<int32_t>(GetVersionExA(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 + 4, 0x94));
        if (!eax20 || (!reinterpret_cast<int1_t>(ebp19 == 1) || 1)) {
            eax17 = g429610;
        } else {
            g429610 = reinterpret_cast<int32_t>(fun_413180);
            return 1;
        }
    }
    ecx21 = 0;
    *reinterpret_cast<unsigned char*>(&ecx21) = reinterpret_cast<uint1_t>(!!eax17);
    return ecx21;
}

void** fun_413460(void** ecx, int32_t* a2, int32_t* a3, void** a4) {
    void** v5;
    void** eax6;

    v5 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<uint32_t>(a2) < reinterpret_cast<uint32_t>(a3) && !v5) {
        if (*a2) {
            eax6 = reinterpret_cast<void**>(*a2());
            v5 = eax6;
        }
        ++a2;
    }
    return v5;
}

uint32_t g428d4c = 1;

void* g429858 = reinterpret_cast<void*>(0);

void** g429848 = reinterpret_cast<void**>(0);

uint32_t fun_41114f(void** ecx, uint32_t a2) {
    uint32_t eax3;

    eax3 = g428d4c;
    if (a2 != 0xffffffff) {
        if (!(a2 & 4)) {
            g429858 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(a2) >> 16) & 0xffff);
        } else {
            g429858 = reinterpret_cast<void*>(1);
        }
        g429848 = reinterpret_cast<void**>(0);
        g428d4c = a2;
    }
    return eax3;
}

void fun_411294(void** ecx, void** a2);

void fun_4114b0(void** ecx, void** a2);

int32_t* fun_4113de(void** ecx) {
    int32_t v2;
    int32_t v3;
    uint32_t ecx4;
    int32_t v5;
    void** v6;
    void** v7;
    void** eax8;
    int32_t* eax9;

    fun_411294(ecx, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xffffffcc);
    if (v2 || (v3 || (ecx4 = g428d4c, ecx = reinterpret_cast<void**>(ecx4 & 16), !!ecx) && v5)) {
        eax8 = fun_41119f(ecx, 0, 0, 0, 0, 0x426074, 0x4267dc, v6, v7);
        if (reinterpret_cast<int1_t>(eax8 == 1)) {
        }
        fun_4114b0(ecx, 0);
        eax9 = reinterpret_cast<int32_t*>(1);
    } else {
        eax9 = reinterpret_cast<int32_t*>(0);
    }
    return eax9;
}

struct s7 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

struct s7* fun_413700(int32_t ecx, int32_t a2);

int32_t UnhandledExceptionFilter = 0x2c5f2;

int32_t g429690 = 0;

int32_t g428c08 = 3;

int32_t g428c0c = 7;

uint32_t g428c14 = 0x8c;

uint32_t fun_4114f6(int32_t ecx, int32_t a2, int32_t a3) {
    struct s7* eax4;
    struct s7* v5;
    uint32_t eax6;
    int32_t v7;
    int32_t edx8;
    int32_t v9;
    int32_t v10;
    int32_t edx11;
    int32_t v12;
    int32_t ecx13;
    int32_t tmp32_14;
    uint32_t eax15;
    uint32_t edx16;

    eax4 = fun_413700(ecx, a2);
    v5 = eax4;
    if (!v5 || !v5->f8) {
        eax6 = reinterpret_cast<uint32_t>(UnhandledExceptionFilter(a3));
    } else {
        if (v5->f8 != 5) {
            if (v5->f8 != 1) {
                v7 = v5->f8;
                edx8 = g429690;
                v9 = edx8;
                g429690 = a3;
                if (v5->f4 != 8) {
                    v5->f8 = 0;
                    v10 = v5->f4;
                    v7(v10);
                    goto addr_413679_8;
                } else {
                    edx11 = g428c08;
                    v12 = edx11;
                    while (ecx13 = g428c08, tmp32_14 = ecx13 + g428c0c, v12 < tmp32_14) {
                        *reinterpret_cast<int32_t*>(v12 * 12 + 0x428b98) = 0;
                        ++v12;
                    }
                    eax15 = g428c14;
                    if (v5->f0 != 0xc000008e) 
                        goto addr_4135c1_14; else 
                        goto addr_4135b2_15;
                }
            } else {
                eax6 = 0xffffffff;
            }
        } else {
            v5->f8 = 0;
            eax6 = 1;
        }
    }
    addr_413685_18:
    return eax6;
    addr_413679_8:
    g429690 = v9;
    eax6 = 0xffffffff;
    goto addr_413685_18;
    addr_4135c1_14:
    if (v5->f0 != 0xc0000090) {
        if (v5->f0 != 0xc0000091) {
            if (v5->f0 != 0xc0000093) {
                if (v5->f0 != 0xc000008d) {
                    if (v5->f0 != 0xc000008f) {
                        if (v5->f0 == 0xc0000092) {
                            g428c14 = 0x8a;
                        }
                    } else {
                        g428c14 = 0x86;
                    }
                } else {
                    g428c14 = 0x82;
                }
            } else {
                g428c14 = 0x85;
            }
        } else {
            g428c14 = 0x84;
        }
    } else {
        g428c14 = 0x81;
    }
    addr_413649_30:
    edx16 = g428c14;
    v7(8, edx16);
    g428c14 = eax15;
    goto addr_413679_8;
    addr_4135b2_15:
    g428c14 = 0x83;
    goto addr_413649_30;
}

void** fun_411023(void** a1);

int32_t fun_41109b() {
    int1_t zf1;

    zf1 = g42b0f8 == 0;
    if (zf1) {
        fun_411023(0xfd);
        g42b0f8 = 1;
    }
    return 0;
}

void** fun_411235(void** a1, void** a2, void** a3, void** a4) {
    void** ecx5;
    void** eax6;

    ecx5 = a1;
    if (!(reinterpret_cast<unsigned char>(ecx5) & 3)) {
        while (1) {
            addr_41a1b0_3:
            ecx5 = ecx5 + 4;
            if (!((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx5)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx5) + 0x7efefeff)) & 0x81010100)) 
                continue;
            eax6 = *reinterpret_cast<void***>(ecx5 + 0xfffffffc);
            if (!*reinterpret_cast<signed char*>(&eax6)) 
                break;
            if (!*reinterpret_cast<signed char*>(&eax6 + 1)) 
                goto addr_41a1f7_6;
            if (!(reinterpret_cast<unsigned char>(eax6) & 0xff0000)) 
                goto addr_41a1ed_8;
            if (!(reinterpret_cast<unsigned char>(eax6) & 0xff000000)) 
                goto addr_41a1e3_10;
        }
    } else {
        do {
            ++ecx5;
            if (!*reinterpret_cast<void***>(ecx5)) 
                goto addr_41a1e3_10;
        } while (reinterpret_cast<unsigned char>(ecx5) & 3);
        goto addr_41a19d_14;
    }
    return reinterpret_cast<unsigned char>(ecx5 + 0xfffffffc) - reinterpret_cast<unsigned char>(a1);
    addr_41a1f7_6:
    return reinterpret_cast<unsigned char>(ecx5 + 0xfffffffd) - reinterpret_cast<unsigned char>(a1);
    addr_41a1ed_8:
    return reinterpret_cast<unsigned char>(ecx5 + 0xfffffffe) - reinterpret_cast<unsigned char>(a1);
    addr_41a1e3_10:
    return reinterpret_cast<unsigned char>(ecx5 + 0xffffffff) - reinterpret_cast<unsigned char>(a1);
    addr_41a19d_14:
    goto addr_41a1b0_3;
}

int32_t g4298f4 = 0;

void** fun_41143d(void** ecx, void** a2, int32_t a3, void** a4, void** a5, void** a6, void** a7);

void** fun_411064(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23) {
    int32_t eax24;
    void** eax25;

    eax24 = g4298f4;
    eax25 = fun_41143d(a2, a2, eax24, a3, a4, a5, ecx);
    return eax25;
}

void** fun_411096(void** ecx, void** a2);

unsigned char g428d5b = 0xbd;

void** fun_417d50(void** ecx, void** a2, unsigned char a3, void** a4, void** a5);

int32_t g428ec0 = 0x4112f3;

uint32_t fun_4111ea(void** ecx, void** a2, void** a3);

unsigned char g428d58 = 0xfd;

void** g429854 = reinterpret_cast<void**>(0);

unsigned char g428d59 = 0xdd;

void** fun_411195(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

void** g429844 = reinterpret_cast<void**>(0);

void** g429850 = reinterpret_cast<void**>(0);

void** fun_4113e8(void** ecx, void** a2);

void** fun_41141a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20) {
    int1_t below_or_equal21;
    void* eax22;
    void** eax23;
    int1_t zf24;
    void** edx25;
    void** ebp26;
    void** v27;
    void** ecx28;
    void** eax29;
    int32_t eax30;
    uint32_t eax31;
    void** eax32;
    void** eax33;
    void** v34;
    uint32_t edx35;
    void** v36;
    void** ecx37;
    void** eax38;
    void** v39;
    void** ecx40;
    void** v41;
    void** ecx42;
    void** eax43;
    void** v44;
    void** ecx45;
    void** eax46;
    void** eax47;
    void** edx48;
    uint32_t eax49;
    void** v50;
    uint32_t eax51;
    uint32_t v52;
    void** eax53;
    void** eax54;
    void** eax55;
    void** eax56;
    void** v57;
    uint32_t eax58;
    uint32_t v59;
    void** eax60;
    void** v61;
    uint32_t eax62;
    uint32_t v63;

    below_or_equal21 = reinterpret_cast<uint32_t>(g429858) <= 0;
    if (!below_or_equal21) {
        eax22 = g429858;
        eax23 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax22) - 1);
        zf24 = g429848 == eax23;
        if (!zf24) {
            edx25 = g429848;
            g429848 = edx25 + 1;
        } else {
            eax23 = fun_411096(ecx, ecx);
            if (!eax23 && (eax23 = fun_41119f(ecx, 2, 0x4260e0, 0x44c, 0, 0x4260ec, ecx, ebp26, __return_address()), reinterpret_cast<int1_t>(eax23 == 1))) {
            }
            g429848 = reinterpret_cast<void**>(0);
        }
    }
    if (a2) {
        if (!reinterpret_cast<int1_t>(a3 == 1) || (*reinterpret_cast<unsigned char*>(&eax23) = g428d5b, v27 = eax23, ecx28 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(a2) & 0xfffffffc) - 4), eax29 = fun_417d50(ecx28, ecx28, *reinterpret_cast<unsigned char*>(&v27), 4, ecx), eax29 == 0)) {
            eax30 = reinterpret_cast<int32_t>(g428ec0(3, a2, 0, a3, 0, 0, 0, ecx));
            if (eax30) {
                eax31 = fun_4111ea(a2, a2, ecx);
                if (!eax31 && (eax32 = fun_41119f(a2, 2, 0x4260e0, 0x46c, 0, 0x4261d4, ecx, ebp26, __return_address()), reinterpret_cast<int1_t>(eax32 == 1))) {
                }
                eax33 = a2 - 32;
                v34 = eax33;
                if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v34 + 20)) & 0xffff) != 4 && ((eax33 = v34, *reinterpret_cast<void***>(eax33 + 20) != 1) && ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v34 + 20)) & 0xffff) != 2 && ((eax33 = v34, *reinterpret_cast<void***>(eax33 + 20) != 3) && (eax33 = fun_41119f(v34, 2, 0x4260e0, 0x472, 0, 0x426410, v34, ebp26, __return_address()), reinterpret_cast<int1_t>(eax33 == 1)))))) {
                }
                edx35 = g428d4c;
                if (!(edx35 & 4)) {
                    *reinterpret_cast<unsigned char*>(&eax33) = g428d58;
                    v36 = eax33;
                    ecx37 = v34 + 28;
                    eax38 = fun_417d50(ecx37, ecx37, *reinterpret_cast<unsigned char*>(&v36), 4, v34);
                    if (!eax38 && (v39 = *reinterpret_cast<void***>(v34 + 24), ecx40 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v34 + 20)) & 0xffff) * 4 + 0x428d5c), eax38 = fun_41119f(ecx40, 1, 0, 0, 0, 0x4263dc, ecx40, v39, v34 + 32), reinterpret_cast<int1_t>(eax38 == 1))) {
                    }
                    *reinterpret_cast<unsigned char*>(&eax38) = g428d58;
                    v41 = eax38;
                    ecx42 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v34) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v34 + 16)) + 32);
                    eax43 = fun_417d50(ecx42, ecx42, *reinterpret_cast<unsigned char*>(&v41), 4, v34);
                    if (!eax43 && (v44 = *reinterpret_cast<void***>(v34 + 24), ecx45 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v34 + 20)) & 0xffff) * 4 + 0x428d5c), eax46 = fun_41119f(ecx45, 1, 0, 0, 0, 0x4263ac, ecx45, v44, v34 + 32), reinterpret_cast<int1_t>(eax46 == 1))) {
                    }
                }
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v34 + 20) == 3)) {
                    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v34 + 20) == 2) && reinterpret_cast<int1_t>(a3 == 1)) {
                        a3 = reinterpret_cast<void**>(2);
                    }
                    if (*reinterpret_cast<void***>(v34 + 20) != a3 && (eax47 = fun_41119f(v34, 2, 0x4260e0, 0x497, 0, 0x42633c, v34, ebp26, __return_address()), reinterpret_cast<int1_t>(eax47 == 1))) {
                    }
                    edx48 = g429854;
                    g429854 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx48) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v34 + 16)));
                    eax49 = g428d4c;
                    if (eax49 & 2) {
                        *reinterpret_cast<void***>(v34 + 20) = reinterpret_cast<void**>(0);
                        v50 = *reinterpret_cast<void***>(v34 + 16);
                        eax51 = g428d59;
                        v52 = eax51;
                        eax23 = fun_411195(v34 + 32, *reinterpret_cast<void***>(&v52), v50, v34, ebp26, __return_address(), a2, a3, a4);
                    } else {
                        if (!*reinterpret_cast<void***>(v34)) {
                            eax53 = g429844;
                            if (eax53 != v34 && (eax54 = fun_41119f(v34, 2, 0x4260e0, 0x4a6, 0, 0x426320, v34, ebp26, __return_address()), reinterpret_cast<int1_t>(eax54 == 1))) {
                            }
                            g429844 = *reinterpret_cast<void***>(v34 + 4);
                        } else {
                            *reinterpret_cast<void***>(*reinterpret_cast<void***>(v34) + 4) = *reinterpret_cast<void***>(v34 + 4);
                        }
                        if (!*reinterpret_cast<void***>(v34 + 4)) {
                            eax55 = g429850;
                            if (eax55 != v34 && (eax56 = fun_41119f(v34, 2, 0x4260e0, 0x4b0, 0, 0x426304, v34, ebp26, __return_address()), reinterpret_cast<int1_t>(eax56 == 1))) {
                            }
                            g429850 = *reinterpret_cast<void***>(v34);
                        } else {
                            *reinterpret_cast<void***>(*reinterpret_cast<void***>(v34 + 4)) = *reinterpret_cast<void***>(v34);
                        }
                        v57 = *reinterpret_cast<void***>(v34 + 16) + 36;
                        eax58 = g428d59;
                        v59 = eax58;
                        fun_411195(v34, *reinterpret_cast<void***>(&v59), v57, v34, ebp26, __return_address(), a2, a3, a4);
                        eax23 = fun_4113e8(v34, v34);
                    }
                } else {
                    if ((!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v34 + 12) == 0xfedcbabc) || *reinterpret_cast<void***>(v34 + 24)) && (eax60 = fun_41119f(v34, 2, 0x4260e0, 0x489, 0, 0x426360, v34, ebp26, __return_address()), reinterpret_cast<int1_t>(eax60 == 1))) {
                    }
                    v61 = *reinterpret_cast<void***>(v34 + 16) + 36;
                    eax62 = g428d59;
                    v63 = eax62;
                    fun_411195(v34, *reinterpret_cast<void***>(&v63), v61, v34, ebp26, __return_address(), a2, a3, a4);
                    eax23 = fun_4113e8(v34, v34);
                }
            } else {
                eax23 = fun_41119f(a3, 0, 0, 0, 0, 0x426074, 0x426440, ecx, ebp26);
                if (reinterpret_cast<int1_t>(eax23 == 1)) {
                }
            }
        } else {
            eax23 = fun_41119f(ecx28, 1, 0, 0, 0, 0x426460, a2, ecx, ebp26);
            if (reinterpret_cast<int1_t>(eax23 == 1)) {
            }
        }
    }
    return eax23;
}

void** g42aca0;

void** g42aca4;

void** g42aca8;

void** g42ac98;

int32_t g42ac9c;

int32_t g42acac;

int32_t fun_411497(void** a1) {
    void** eax2;
    int1_t zf3;
    void** edx4;

    eax2 = reinterpret_cast<void**>(HeapAlloc());
    g42aca0 = eax2;
    zf3 = g42aca0 == 0;
    if (!zf3) {
        g42aca4 = a1;
        edx4 = g42aca0;
        g42aca8 = edx4;
        g42ac98 = reinterpret_cast<void**>(0);
        g42ac9c = 0;
        g42acac = 16;
    }
    goto 0;
}

int32_t g428c4c = 0;

struct s8 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t g428c48 = 0;

int32_t g428c50 = 0;

void fun_414a72(uint32_t ecx, int32_t a2) {
    struct s8* ebp3;
    int32_t eax4;
    int32_t ebp5;

    g428c4c = ebp3->f8;
    g428c48 = eax4;
    g428c50 = ebp5;
    return;
}

struct s9 {
    uint32_t f0;
    int32_t f4;
    struct s9* f8;
    uint32_t f12;
};

struct s10 {
    signed char[4] pad4;
    struct s9* f4;
    struct s9* f8;
    signed char[20] pad32;
    int32_t f32;
};

struct s10* g18;

int32_t g429868 = 0;

int32_t VirtualQuery = 0x2c81e;

struct s11 {
    uint16_t f0;
    signed char[58] pad60;
    void* f60;
};

struct s12 {
    int32_t f0;
    signed char[2] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
    signed char[2] pad24;
    uint16_t f24;
};

struct s13 {
    signed char[8] pad8;
    void* f8;
    void* f12;
    signed char[20] pad36;
    uint32_t f36;
};

int32_t InterlockedExchange = 0x2c82e;

uint32_t fun_41137f(struct s9* a1) {
    void* ebp2;
    struct s9* v3;
    struct s10* eax4;
    struct s10* v5;
    int32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t eax9;
    uint32_t v10;
    int32_t v11;
    int1_t less12;
    void* v13;
    struct s9* v14;
    uint32_t eax15;
    int32_t v16;
    uint32_t v17;
    struct s11* v18;
    struct s12* v19;
    void* v20;
    struct s13* v21;
    int32_t eax22;
    int32_t edx23;
    int32_t v24;
    int1_t less_or_equal25;
    int32_t eax26;
    int32_t v27;
    int32_t v28;
    int32_t v29;
    uint32_t v30;
    int1_t less31;
    int32_t eax32;
    int32_t eax33;
    int32_t eax34;
    int1_t less35;
    int32_t ecx36;
    int32_t edx37;
    int32_t v38;
    uint32_t v39;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v3 = a1->f8;
    if (!(reinterpret_cast<uint32_t>(v3) & 3)) {
        eax4 = g18;
        v5 = eax4;
        if (reinterpret_cast<uint32_t>(v3) < reinterpret_cast<uint32_t>(v5->f8) || reinterpret_cast<uint32_t>(v3) >= reinterpret_cast<uint32_t>(v5->f4)) {
            if (a1->f12 != 0xffffffff) {
                v6 = 0;
                v7 = 0;
                while (v7 <= a1->f12) {
                    v8 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v3) + v7 * 12);
                    if (v8 == 0xffffffff) 
                        goto addr_41c95f_8;
                    if (v8 >= v7) 
                        goto addr_41c958_10;
                    addr_41c95f_8:
                    if (*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(v3) + v7 * 12 + 4)) {
                        ++v6;
                    }
                    ++v7;
                }
            } else {
                eax9 = 1;
                goto addr_41cca4_15;
            }
        } else {
            eax9 = 0;
            goto addr_41cca4_15;
        }
    } else {
        eax9 = 0;
        goto addr_41cca4_15;
    }
    if (!v6 || reinterpret_cast<uint32_t>(*reinterpret_cast<struct s9**>(reinterpret_cast<uint32_t>(a1) - 8)) >= reinterpret_cast<uint32_t>(v5->f8) && reinterpret_cast<uint32_t>(*reinterpret_cast<struct s9**>(reinterpret_cast<uint32_t>(a1) - 8)) < reinterpret_cast<uint32_t>(a1)) {
        v10 = reinterpret_cast<uint32_t>(v3) & 0xfffff000;
        v11 = 0;
        while (less12 = v11 < g429868, less12) {
            if (*reinterpret_cast<uint32_t*>(v11 * 4 + 0x429870) == v10) 
                goto addr_41c9e0_22;
            ++v11;
        }
    } else {
        eax9 = 0;
        goto addr_41cca4_15;
    }
    v13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp2) - 84);
    v14 = v3;
    eax15 = reinterpret_cast<uint32_t>(VirtualQuery(v14, v13, 28));
    if (!eax15 || v16 != 0x1000000) {
        eax9 = 0xffffffff;
    } else {
        if (v17 & 0xcc) {
            if (static_cast<uint32_t>(v18->f0) == 0x5a4d) {
                v19 = reinterpret_cast<struct s12*>(reinterpret_cast<int32_t>(v18) + reinterpret_cast<int32_t>(v18->f60));
                if (v19->f0 == 0x4550) {
                    if (static_cast<uint32_t>(v19->f24) == 0x10b) {
                        v20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v3) - reinterpret_cast<int32_t>(v18));
                        v21 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(v19) + v19->f20 + 24);
                        if (0 >= static_cast<uint32_t>(v19->f6)) {
                            eax9 = 0xffffffff;
                        } else {
                            if (reinterpret_cast<uint32_t>(v20) < reinterpret_cast<uint32_t>(v21->f12) || (reinterpret_cast<uint32_t>(v20) >= reinterpret_cast<uint32_t>(v21->f12) + reinterpret_cast<int32_t>(v21->f8) || !(v21->f36 & 0x80000000))) {
                                goto addr_41cbd2_36;
                            } else {
                                eax9 = 0;
                            }
                        }
                    } else {
                        eax9 = 0xffffffff;
                    }
                } else {
                    eax9 = 0xffffffff;
                }
            } else {
                eax9 = 0xffffffff;
            }
        } else {
            goto addr_41cbd2_36;
        }
    }
    addr_41cca4_15:
    return eax9;
    addr_41cbd2_36:
    eax22 = reinterpret_cast<int32_t>(InterlockedExchange(0x4298b0, 1, v14, v13, 28));
    if (!eax22) {
        edx23 = g429868;
        v24 = edx23;
        while (v24 > 0) {
            if (*reinterpret_cast<uint32_t*>(v24 * 4 + 0x42986c) == v10) 
                goto addr_41cc16_45;
            --v24;
        }
    } else {
        eax9 = 1;
        goto addr_41cca4_15;
    }
    addr_41cc1a_49:
    if (!v24) {
        less_or_equal25 = g429868 <= 15;
        if (less_or_equal25) {
            eax26 = g429868;
            v27 = eax26;
        } else {
            v27 = 15;
        }
        v28 = v27;
        v29 = 0;
        while (v29 <= v28) {
            v30 = *reinterpret_cast<uint32_t*>(v29 * 4 + 0x429870);
            *reinterpret_cast<uint32_t*>(v29 * 4 + 0x429870) = v10;
            v10 = v30;
            ++v29;
        }
        less31 = g429868 < 16;
        if (less31) {
            eax32 = g429868;
            g429868 = eax32 + 1;
        }
    }
    InterlockedExchange(0x4298b0, 0, 0x4298b0, 1, v14, v13, 28);
    eax9 = 1;
    goto addr_41cca4_15;
    addr_41cc16_45:
    goto addr_41cc1a_49;
    addr_41c9e0_22:
    if (v11 <= 0 || (eax33 = reinterpret_cast<int32_t>(InterlockedExchange(0x4298b0, 1)), !!eax33)) {
        addr_41cacf_60:
        eax9 = 1;
        goto addr_41cca4_15;
    } else {
        if (*reinterpret_cast<uint32_t*>(v11 * 4 + 0x429870) == v10) 
            goto addr_41ca86_62;
        eax34 = g429868;
        v11 = eax34 - 1;
        while (v11 >= 0) {
            if (*reinterpret_cast<uint32_t*>(v11 * 4 + 0x429870) == v10) 
                goto addr_41ca39_66;
            --v11;
        }
    }
    addr_41ca3d_69:
    if (v11 < 0) {
        less35 = g429868 < 16;
        if (less35) {
            ecx36 = g429868;
            g429868 = ecx36 + 1;
        }
        edx37 = g429868;
        v11 = edx37 - 1;
        goto addr_41ca86_62;
    }
    if (v11) {
        addr_41ca86_62:
        v38 = 0;
    } else {
        InterlockedExchange(0x4298b0, 0, 0x4298b0, 1);
        eax9 = 1;
        goto addr_41cca4_15;
    }
    while (v38 <= v11) {
        v39 = *reinterpret_cast<uint32_t*>(v38 * 4 + 0x429870);
        *reinterpret_cast<uint32_t*>(v38 * 4 + 0x429870) = v10;
        v10 = v39;
        ++v38;
    }
    InterlockedExchange(0x4298b0, 0, 0x4298b0, 1);
    goto addr_41cacf_60;
    addr_41ca39_66:
    goto addr_41ca3d_69;
    addr_41c958_10:
    eax9 = 0;
    goto addr_41cca4_15;
}

void fun_4113a7();

void fun_411320(struct s9* a1) {
    fun_4113a7();
    goto a1->f4;
}

void fun_4111bd(struct s9* a1, uint32_t a2) {
    struct s3* v3;
    struct s9* ebx4;
    uint32_t esi5;
    uint32_t ecx6;

    v3 = g0;
    g0 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 4);
    while ((ebx4 = a1->f8, a1->f12 != 0xffffffff) && a1->f12 != a2) {
        esi5 = a1->f12 + a1->f12 * 2;
        ecx6 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebx4) + esi5 * 4);
        a1->f12 = ecx6;
        if (!*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx4) + esi5 * 4 + 4)) {
            fun_414a72(ecx6, 0x101);
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx4) + esi5 * 4 + 8)();
        }
    }
    g0 = v3;
    return;
}

struct s14 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_4114a1(uint32_t ecx, int32_t a2) {
    struct s14* ebp3;
    int32_t eax4;
    int32_t ebp5;

    g428c4c = ebp3->f8;
    g428c48 = eax4;
    g428c50 = ebp5;
    return;
}

void fun_411131(void** ecx);

int32_t InterlockedIncrement = 0x2c75c;

void** fun_41127b(void** ecx, void** a2, void* a3, void** a4, void** a5);

void** g42af7c;

int32_t g4297dc = 0;

int32_t OutputDebugStringA = 0x2c746;

int32_t InterlockedDecrement = 0x2c72e;

int32_t fun_411037(void** a1);

int32_t g42af6c;

void** fun_4111e0(void** a1, void** a2, uint32_t a3);

void** fun_415880(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6);

void** fun_41119f(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** v10;
    void** v11;
    void** ebp12;
    void*** ebp13;
    void** eax14;
    void** v15;
    int32_t ecx16;
    int32_t ecx17;
    int32_t ecx18;
    void** v19;
    int32_t eax20;
    void** eax21;
    void** v22;
    void** eax23;
    int1_t zf24;
    int1_t zf25;
    int32_t eax26;
    int1_t zf27;
    void** eax28;
    int1_t zf29;
    int32_t eax30;
    void** eax31;
    int32_t v32;
    void** v33;
    void** eax34;
    void** ecx35;
    void** v36;
    int32_t eax37;

    v10 = reinterpret_cast<void**>(__return_address());
    v11 = ebp12;
    ebp13 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_411131(ecx);
    eax14 = g428eb0;
    v15 = eax14;
    ecx16 = 0x3ff;
    while (ecx16) {
        --ecx16;
    }
    ecx17 = 0x3ff;
    while (ecx17) {
        --ecx17;
    }
    ecx18 = 0x3ff;
    while (ecx18) {
        --ecx18;
    }
    v19 = reinterpret_cast<void**>(ebp13 + 28);
    if (!(reinterpret_cast<signed char>(a2) < reinterpret_cast<signed char>(0) || reinterpret_cast<signed char>(a2) >= reinterpret_cast<signed char>(3))) {
        if (!reinterpret_cast<int1_t>(a2 == 2) || (eax20 = reinterpret_cast<int32_t>(InterlockedIncrement(0x428d18)), reinterpret_cast<uint1_t>(eax20 < 0) | reinterpret_cast<uint1_t>(eax20 == 0))) {
            if (a6 && (eax21 = fun_41127b(a6, ebp13 + 0xffffcff0, 0xfeb, a6, v19), reinterpret_cast<signed char>(eax21) < reinterpret_cast<signed char>(0))) {
                fun_411258(ebp13 + 0xffffcff0, 0x425c14, v19, v11, v10);
            }
            if (reinterpret_cast<int1_t>(a2 == 2)) {
                if (!a6) {
                    v22 = reinterpret_cast<void**>(0x425be4);
                } else {
                    v22 = reinterpret_cast<void**>(0x425bfc);
                }
                fun_411258(ebp13 + 0xffffdff0, v22, v19, v11, v10);
            }
            fun_41120d(ebp13 + 0xffffdff0, ebp13 + 0xffffcff0, v19, v11, v10);
            if (reinterpret_cast<int1_t>(a2 == 2)) {
                if (*reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(a2) * 4 + 0x428d1c) & 1) {
                    fun_41120d(ebp13 + 0xffffdff0, 0x425be0, v19, v11, v10);
                }
                fun_41120d(ebp13 + 0xffffdff0, 0x425bdc, v19, v11, v10);
            }
            if (!a3) {
                v15 = reinterpret_cast<void**>(ebp13 + 0xffffeff0);
                fun_411258(v15, ebp13 + 0xffffdff0, v19, v11, v10);
            } else {
                v15 = a4;
                eax23 = fun_41100a(ebp13 + 0xffffeff0, 0x1000, 0x425bcc, a3, v15, ebp13 - 0x2010, v19, v11, v10, a2, a3, a4, a5, a6, a7);
                if (reinterpret_cast<signed char>(eax23) < reinterpret_cast<signed char>(0)) {
                    v15 = reinterpret_cast<void**>(ebp13 + 0xffffeff0);
                    fun_411258(v15, 0x425c14, v19, v11, v10);
                }
            }
            zf24 = g42af7c == 0;
            if (zf24) 
                goto addr_415641_49; else 
                goto addr_4155e1_50;
        } else {
            zf25 = g4297dc == 0;
            if (!zf25 || (v15 = reinterpret_cast<void**>(0x425c90), eax26 = reinterpret_cast<int32_t>(LoadLibraryA()), !!eax26) && (eax26 = reinterpret_cast<int32_t>(GetProcAddress(eax26, "wsprintfA")), g4297dc = eax26, zf27 = g4297dc == 0, !zf27)) {
                g4297dc(ebp13 - 0x1010, "Second Chance Assertion Failed: File %s, Line %d\n", a3, a4, 0x428d18);
                v15 = reinterpret_cast<void**>(ebp13 + 0xffffeff0);
                OutputDebugStringA();
                InterlockedDecrement(0x428d18);
                fun_411037(0x428d18);
            }
        }
    }
    addr_415772_54:
    eax28 = fun_411087(v15, v19, v11, v10, a2);
    return eax28;
    addr_415641_49:
    zf29 = g42af6c == 0;
    if (zf29 || (v15 = reinterpret_cast<void**>(ebp13 + 0xffffeff0), eax30 = reinterpret_cast<int32_t>(g42af6c(a2)), eax30 == 0)) {
        if (*reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(a2) * 4 + 0x428d1c) & 1 && *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(a2) * 4 + 0x428d28) != -1) {
            v15 = reinterpret_cast<void**>(ebp13 + 0xffffcfe4);
            eax31 = fun_411235(ebp13 + 0xffffeff0, v15, 0, v19);
            v32 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(a2) * 4 + 0x428d28);
            WriteFile(v32, ebp13 - 0x1010, eax31);
        }
        if (*reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(a2) * 4 + 0x428d1c) & 2) {
            v15 = reinterpret_cast<void**>(0x4156e8);
            OutputDebugStringA(ebp13 - 0x1010);
        }
        if (!(*reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(a2) * 4 + 0x428d1c) & 4)) {
            if (reinterpret_cast<int1_t>(a2 == 2)) {
                v15 = reinterpret_cast<void**>(0x415770);
                InterlockedDecrement(0x428d18);
            }
            goto addr_415772_54;
        } else {
            if (!a4) {
                v33 = reinterpret_cast<void**>(0);
            } else {
                eax34 = fun_4111e0(a4, ebp13 + 0xffffcfd0, 10);
                v33 = eax34;
            }
            v15 = a5;
            fun_415880(v33, a2, a3, v33, v15, ebp13 + 0xffffcff0);
            if (reinterpret_cast<int1_t>(a2 == 2)) {
                v15 = reinterpret_cast<void**>(0x41575a);
                InterlockedDecrement();
            }
            goto addr_415772_54;
        }
    } else {
        if (reinterpret_cast<int1_t>(a2 == 2)) {
            v15 = reinterpret_cast<void**>(0x415677);
            InterlockedDecrement();
        }
        goto addr_415772_54;
    }
    addr_4155e1_50:
    ecx35 = g42af7c;
    v36 = ecx35;
    while (v36) {
        v15 = reinterpret_cast<void**>(ebp13 + 0xffffeff0);
        eax37 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(v36 + 12)(a2));
        if (eax37) 
            goto addr_415626_74;
        v36 = *reinterpret_cast<void***>(v36 + 4);
    }
    goto addr_415641_49;
    addr_415626_74:
    if (reinterpret_cast<int1_t>(a2 == 2)) {
        v15 = reinterpret_cast<void**>(0x415637);
        InterlockedDecrement();
    }
    goto addr_415772_54;
}

void** fun_411258(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** edi6;
    void** ecx7;
    void** edx8;

    edi6 = a1;
    ecx7 = a2;
    if (!(reinterpret_cast<unsigned char>(ecx7) & 3)) {
        while (1) {
            addr_41a0de_4:
            edx8 = *reinterpret_cast<void***>(ecx7);
            ecx7 = ecx7 + 4;
            if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx7)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx7) + 0x7efefeff)) & 0x81010100) {
                if (!edx8) 
                    break;
                if (!*reinterpret_cast<signed char*>(&edx8 + 1)) 
                    goto addr_41a127_7;
                if (!(reinterpret_cast<unsigned char>(edx8) & 0xff0000)) 
                    goto addr_41a11a_9;
                if (!(reinterpret_cast<unsigned char>(edx8) & 0xff000000)) 
                    goto addr_41a112_11;
            }
            *reinterpret_cast<void***>(edi6) = edx8;
            edi6 = edi6 + 4;
        }
    } else {
        do {
            edx8 = *reinterpret_cast<void***>(ecx7);
            ++ecx7;
            if (!edx8) 
                break;
            *reinterpret_cast<void***>(edi6) = edx8;
            ++edi6;
        } while (reinterpret_cast<unsigned char>(ecx7) & 3);
        goto addr_41a0d7_16;
    }
    *reinterpret_cast<void***>(edi6) = edx8;
    return a1;
    addr_41a127_7:
    *reinterpret_cast<void***>(edi6) = edx8;
    return a1;
    addr_41a11a_9:
    *reinterpret_cast<void***>(edi6) = edx8;
    *reinterpret_cast<signed char*>(edi6 + 2) = 0;
    return a1;
    addr_41a112_11:
    *reinterpret_cast<void***>(edi6) = edx8;
    return a1;
    addr_41a0d7_16:
    goto addr_41a0de_4;
}

void** fun_411492(void** a1, void*** a2, uint32_t a3, void** a4, void** a5, void** a6) {
    uint32_t ecx7;
    uint32_t ebx8;
    void*** esi9;
    void** edi10;
    uint32_t ecx11;
    void** eax12;
    uint32_t ecx13;
    void** edx14;

    ecx7 = a3;
    if (!ecx7) {
        addr_41d01f_3:
        return a1;
    } else {
        ebx8 = ecx7;
        esi9 = a2;
        edi10 = a1;
        if (!(reinterpret_cast<uint32_t>(esi9) & 3)) {
            ecx11 = ecx7 >> 2;
            if (!ecx11) {
                goto addr_41cfd3_7;
            }
        }
        do {
            eax12 = *esi9;
            ++esi9;
            *reinterpret_cast<void***>(edi10) = eax12;
            ++edi10;
            --ecx7;
            if (!ecx7) 
                goto addr_41cfe6_9;
            if (!eax12) 
                break;
        } while (reinterpret_cast<uint32_t>(esi9) & 3);
        goto addr_41cfc7_12;
    }
    if (reinterpret_cast<unsigned char>(edi10) & 3) {
        do {
            *reinterpret_cast<void***>(edi10) = eax12;
            ++edi10;
            --ecx7;
            if (!ecx7) 
                goto addr_41d09c_15;
        } while (reinterpret_cast<unsigned char>(edi10) & 3);
    }
    ebx8 = ecx7;
    ecx13 = ecx7 >> 2;
    if (ecx13) 
        goto addr_41d087_18; else 
        goto addr_41d013_19;
    addr_41cfc7_12:
    ebx8 = ecx7;
    ecx11 = ecx7 >> 2;
    if (ecx11) {
        do {
            edx14 = *esi9;
            esi9 = esi9 + 4;
            if ((reinterpret_cast<unsigned char>(*esi9) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*esi9 + 0x7efefeff)) & 0x81010100) {
                if (!*reinterpret_cast<signed char*>(&edx14)) 
                    break;
                if (!*reinterpret_cast<signed char*>(&edx14 + 1)) 
                    goto addr_41d06f_23;
                if (!(reinterpret_cast<unsigned char>(edx14) & 0xff0000)) 
                    goto addr_41d065_25;
                if (!(reinterpret_cast<unsigned char>(edx14) & 0xff000000)) 
                    goto addr_41d061_27;
            }
            *reinterpret_cast<void***>(edi10) = edx14;
            edi10 = edi10 + 4;
            --ecx11;
        } while (ecx11);
        goto addr_41cfce_29;
    } else {
        addr_41cfce_29:
        ebx8 = ebx8 & 3;
        if (!ebx8) {
            addr_41cfe6_9:
            return a1;
        } else {
            do {
                addr_41cfd3_7:
                eax12 = *esi9;
                ++esi9;
                *reinterpret_cast<void***>(edi10) = eax12;
                ++edi10;
                if (!eax12) 
                    goto addr_41d018_30;
                --ebx8;
            } while (ebx8);
            goto addr_41cfe6_9;
        }
    }
    *reinterpret_cast<void***>(edi10) = reinterpret_cast<void**>(0);
    addr_41d07d_33:
    edi10 = edi10 + 4;
    eax12 = reinterpret_cast<void**>(0);
    ecx13 = ecx11 - 1;
    if (!ecx13) {
        addr_41d093_34:
        ebx8 = ebx8 & 3;
        if (ebx8) {
            do {
                addr_41d013_19:
                *reinterpret_cast<void***>(edi10) = eax12;
                ++edi10;
                addr_41d018_30:
                --ebx8;
            } while (ebx8);
        } else {
            addr_41d09c_15:
            return a1;
        }
    } else {
        addr_41d087_18:
        eax12 = reinterpret_cast<void**>(0);
        goto addr_41d089_35;
    }
    goto addr_41d01f_3;
    do {
        addr_41d089_35:
        *reinterpret_cast<void***>(edi10) = reinterpret_cast<void**>(0);
        edi10 = edi10 + 4;
        --ecx13;
    } while (ecx13);
    goto addr_41d093_34;
    addr_41d06f_23:
    *reinterpret_cast<void***>(edi10) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx14) & 0xff);
    goto addr_41d07d_33;
    addr_41d065_25:
    *reinterpret_cast<void***>(edi10) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx14) & 0xffff);
    goto addr_41d07d_33;
    addr_41d061_27:
    *reinterpret_cast<void***>(edi10) = edx14;
    goto addr_41d07d_33;
}

void** fun_41120d(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** ecx6;
    void** eax7;
    void** edi8;
    void** ecx9;
    void** edx10;

    ecx6 = a1;
    if (!(reinterpret_cast<unsigned char>(ecx6) & 3)) {
        while (1) {
            addr_41a070_3:
            ecx6 = ecx6 + 4;
            if (!((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx6)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx6) + 0x7efefeff)) & 0x81010100)) 
                continue;
            eax7 = *reinterpret_cast<void***>(ecx6 + 0xfffffffc);
            if (!*reinterpret_cast<signed char*>(&eax7)) 
                break;
            if (!*reinterpret_cast<signed char*>(&eax7 + 1)) 
                goto addr_41a0ad_6;
            if (!(reinterpret_cast<unsigned char>(eax7) & 0xff0000)) 
                goto addr_41a0a8_8;
            if (!(reinterpret_cast<unsigned char>(eax7) & 0xff000000)) 
                goto addr_41a0a3_10;
        }
    } else {
        do {
            ++ecx6;
            if (!*reinterpret_cast<void***>(ecx6)) 
                goto addr_41a0a3_10;
        } while (reinterpret_cast<unsigned char>(ecx6) & 3);
        goto addr_41a06e_14;
    }
    edi8 = ecx6 + 0xfffffffc;
    addr_41a0b5_16:
    ecx9 = a2;
    if (!(reinterpret_cast<unsigned char>(ecx9) & 3)) {
        while (1) {
            addr_41a0de_17:
            edx10 = *reinterpret_cast<void***>(ecx9);
            ecx9 = ecx9 + 4;
            if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx9)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx9) + 0x7efefeff)) & 0x81010100) {
                if (!edx10) 
                    break;
                if (!*reinterpret_cast<signed char*>(&edx10 + 1)) 
                    goto addr_41a127_20;
                if (!(reinterpret_cast<unsigned char>(edx10) & 0xff0000)) 
                    goto addr_41a11a_22;
                if (!(reinterpret_cast<unsigned char>(edx10) & 0xff000000)) 
                    goto addr_41a112_24;
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
        goto addr_41a0d7_29;
    }
    *reinterpret_cast<void***>(edi8) = edx10;
    return a1;
    addr_41a127_20:
    *reinterpret_cast<void***>(edi8) = edx10;
    return a1;
    addr_41a11a_22:
    *reinterpret_cast<void***>(edi8) = edx10;
    *reinterpret_cast<signed char*>(edi8 + 2) = 0;
    return a1;
    addr_41a112_24:
    *reinterpret_cast<void***>(edi8) = edx10;
    return a1;
    addr_41a0d7_29:
    goto addr_41a0de_17;
    addr_41a0ad_6:
    edi8 = ecx6 + 0xfffffffd;
    goto addr_41a0b5_16;
    addr_41a0a8_8:
    edi8 = ecx6 + 0xfffffffe;
    goto addr_41a0b5_16;
    addr_41a0a3_10:
    edi8 = ecx6 + 0xffffffff;
    goto addr_41a0b5_16;
    addr_41a06e_14:
    goto addr_41a070_3;
}

int32_t g4298c4 = 0;

int32_t g4298d0 = 0;

int32_t g4298d4 = 0;

int32_t g4298c8 = 0;

int32_t g4298cc = 0;

void** g429638 = reinterpret_cast<void**>(0);

void** g429644 = reinterpret_cast<void**>(0);

int32_t fun_41107d(void** a1, int32_t a2, uint32_t a3, void** a4, void** a5, void** a6) {
    void* ebp7;
    int32_t v8;
    int32_t v9;
    int1_t zf10;
    int1_t zf11;
    int32_t eax12;
    int32_t eax13;
    uint32_t v14;
    int32_t eax15;
    int32_t eax16;
    int1_t zf17;
    int32_t eax18;
    int32_t eax19;
    int32_t eax20;
    int1_t zf21;
    int32_t eax22;
    int1_t zf23;
    int32_t eax24;
    int1_t zf25;
    int32_t eax26;
    int1_t zf27;
    int32_t eax28;
    int1_t cf29;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v8 = 0;
    v9 = 0;
    zf10 = g4298c4 == 0;
    if (!zf10) {
        addr_41ce6b_3:
        zf11 = g4298d0 == 0;
        if (!zf11 && ((eax12 = reinterpret_cast<int32_t>(g4298d0()), eax12 == 0) || ((eax13 = reinterpret_cast<int32_t>(g4298d4(eax12, 1, reinterpret_cast<int32_t>(ebp7) - 12, 12, reinterpret_cast<int32_t>(ebp7) - 24)), eax13 == 0) || !(v14 & 1)))) {
            v9 = 1;
        }
    } else {
        eax15 = reinterpret_cast<int32_t>(LoadLibraryA("user32.dll"));
        if (!eax15 || (eax16 = reinterpret_cast<int32_t>(GetProcAddress(eax15, "MessageBoxA", "user32.dll")), g4298c4 = eax16, zf17 = g4298c4 == 0, zf17)) {
            eax18 = 0;
            goto addr_41cf1a_7;
        } else {
            eax19 = reinterpret_cast<int32_t>(GetProcAddress(eax15, "GetActiveWindow", eax15, "MessageBoxA", "user32.dll"));
            g4298c8 = eax19;
            eax20 = reinterpret_cast<int32_t>(GetProcAddress(eax15, "GetLastActivePopup", eax15, "GetActiveWindow", eax15, "MessageBoxA", "user32.dll"));
            g4298cc = eax20;
            zf21 = reinterpret_cast<int1_t>(g429638 == 2);
            if (zf21 && (eax22 = reinterpret_cast<int32_t>(GetProcAddress(eax15, "GetUserObjectInformationA", eax15, "GetLastActivePopup", eax15, "GetActiveWindow", eax15, "MessageBoxA", "user32.dll")), g4298d4 = eax22, zf23 = g4298d4 == 0, !zf23)) {
                eax24 = reinterpret_cast<int32_t>(GetProcAddress(eax15, "GetProcessWindowStation", eax15, "GetUserObjectInformationA", eax15, "GetLastActivePopup", eax15, "GetActiveWindow", eax15, "MessageBoxA", "user32.dll"));
                g4298d0 = eax24;
                goto addr_41ce6b_3;
            }
        }
    }
    if (!v9) {
        zf25 = g4298c8 == 0;
        if (!zf25) {
            eax26 = reinterpret_cast<int32_t>(g4298c8());
            v8 = eax26;
        }
        if (v8 && (zf27 = g4298cc == 0, !zf27)) {
            eax28 = reinterpret_cast<int32_t>(g4298cc(v8));
            v8 = eax28;
        }
    } else {
        cf29 = reinterpret_cast<unsigned char>(g429644) < reinterpret_cast<unsigned char>(4);
        if (cf29) {
            a3 = a3 | 0x40000;
        } else {
            a3 = a3 | 0x200000;
        }
    }
    eax18 = reinterpret_cast<int32_t>(g4298c4(v8, a1, a2, a3));
    addr_41cf1a_7:
    return eax18;
}

void** fun_41127b(void** ecx, void** a2, void* a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** eax10;
    int32_t v11;
    void** eax12;
    void** v13;
    void** v14;

    v6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xffffffd8);
    if (!a4 && (eax10 = fun_41119f(ecx, 2, 0x426aa0, 90, 0, 0x426a8c, v7, v8, v9), reinterpret_cast<int1_t>(eax10 == 1))) {
    }
    eax12 = fun_41134d(v6, a4, a5, v11, a2, a3, a2, 66);
    if (a2) {
        v13 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(a3) - 1);
        if (reinterpret_cast<signed char>(v13) < reinterpret_cast<signed char>(0)) {
            fun_4114ab(v6, 0, v6, v14, a2, v13, a2, 66);
        } else {
            *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
        }
    }
    return eax12;
}

void fun_41d200(void** a1, void** a2, uint32_t a3, int32_t a4);

void** fun_4111e0(void** a1, void** a2, uint32_t a3) {
    if (a3 != 10 || reinterpret_cast<signed char>(a1) >= reinterpret_cast<signed char>(0)) {
        fun_41d200(a1, a2, a3, 0);
    } else {
        fun_41d200(a1, a2, a3, 1);
    }
    return a2;
}

int32_t fun_411037(void** a1) {
    int32_t eax2;

    eax2 = reinterpret_cast<int32_t>(DebugBreak());
    return eax2;
}

void** g4298dc = reinterpret_cast<void**>(0);

void** fun_41dc20(void** ecx, void** a2);

void** g4298e8 = reinterpret_cast<void**>(0);

void** g4298e0 = reinterpret_cast<void**>(0);

void** g4298e4 = reinterpret_cast<void**>(0);

uint32_t fun_411401(void** a1) {
    void** ecx2;
    void** v3;
    void** edx4;
    void** v5;
    void** eax6;
    void** edx7;
    void** ecx8;
    void** eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;
    uint32_t ecx13;
    uint32_t v14;
    int32_t edx15;
    int32_t v16;
    int32_t ecx17;
    int32_t tmp32_18;
    uint32_t ecx19;

    ecx2 = a1 - 2;
    if (reinterpret_cast<unsigned char>(ecx2) > reinterpret_cast<unsigned char>(20)) 
        goto addr_41da8c_3;
    switch (*reinterpret_cast<unsigned char*>(ecx2 + 0x41db9b)) {
    case 0:
        v3 = reinterpret_cast<void**>(0x4298dc);
        edx4 = g4298dc;
        v5 = edx4;
        break;
    case 1:
        eax6 = fun_41dc20(ecx2, a1);
        v3 = eax6 + 8;
        v5 = *reinterpret_cast<void***>(v3);
        break;
    case 2:
        v3 = reinterpret_cast<void**>(0x4298e8);
        edx7 = g4298e8;
        v5 = edx7;
        break;
    case 3:
        v3 = reinterpret_cast<void**>(0x4298e0);
        ecx8 = g4298e0;
        v5 = ecx8;
        break;
    case 4:
        v3 = reinterpret_cast<void**>(0x4298e4);
        eax9 = g4298e4;
        v5 = eax9;
        break;
        addr_41da8c_3:
    case 5:
        eax10 = 0xffffffff;
        goto addr_41db7f_10;
    }
    if (!reinterpret_cast<int1_t>(v5 == 1)) {
        if (!v5) {
            fun_411212(3);
        }
        if ((a1 == 8 || (a1 == 11 || reinterpret_cast<int1_t>(a1 == 4))) && (eax11 = g429690, v12 = eax11, g429690 = 0, reinterpret_cast<int1_t>(a1 == 8))) {
            ecx13 = g428c14;
            v14 = ecx13;
            g428c14 = 0x8c;
        }
        if (!reinterpret_cast<int1_t>(a1 == 8)) {
            *reinterpret_cast<void***>(v3) = reinterpret_cast<void**>(0);
        } else {
            edx15 = g428c08;
            v16 = edx15;
            while (ecx17 = g428c08, tmp32_18 = ecx17 + g428c0c, v16 < tmp32_18) {
                *reinterpret_cast<int32_t*>(v16 * 12 + 0x428b98) = 0;
                ++v16;
            }
        }
        if (!reinterpret_cast<int1_t>(a1 == 8)) {
            v5(a1);
        } else {
            ecx19 = g428c14;
            v5(8, ecx19);
        }
        if ((a1 == 8 || (a1 == 11 || reinterpret_cast<int1_t>(a1 == 4))) && (g429690 = v12, reinterpret_cast<int1_t>(a1 == 8))) {
            g428c14 = v14;
        }
        eax10 = 0;
    } else {
        eax10 = 0;
    }
    addr_41db7f_10:
    return eax10;
}

int32_t g42983c = 0;

void** g428d48 = reinterpret_cast<void**>(16);

int32_t FreeLibrary = 0x2c7a0;

int32_t fun_416570() {
    void* esp1;
    int32_t eax2;
    void** eax3;
    int32_t esi4;
    void** v5;
    int32_t eax6;
    void** eax7;
    int32_t esi8;
    void** v9;
    int32_t eax10;
    void** v11;
    int32_t eax12;
    void** v13;
    int32_t eax14;
    void** v15;
    int32_t eax16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    int32_t eax21;
    void* v22;
    void* v23;
    void** edi24;
    void* esi25;
    void* v26;
    void* v27;
    void* v28;
    int32_t v29;
    int32_t v30;
    int32_t eax31;
    int32_t v32;
    int32_t v33;
    void** v34;
    void** ecx35;
    void* eax36;
    void* ecx37;
    int32_t edi38;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax2 = g42983c;
    if (eax2) 
        goto addr_416601_2;
    eax3 = g428d48;
    esi4 = LoadLibraryA;
    v5 = eax3;
    g42983c = 1;
    eax6 = reinterpret_cast<int32_t>(esi4(v5));
    if (eax6) {
        addr_4166a4_4:
        return eax6;
    } else {
        eax7 = reinterpret_cast<void**>(esi4(0x425fcc, v5));
        if (!eax7) 
            goto addr_416601_2;
        esi8 = GetProcAddress;
        v9 = eax7;
        eax10 = reinterpret_cast<int32_t>(esi8(v9, 0x425fbc, 0x425fcc, v5));
        if (!eax10) 
            goto addr_416601_2;
        v11 = eax7;
        eax12 = reinterpret_cast<int32_t>(esi8(v11, 0x425fa8, v9, 0x425fbc, 0x425fcc, v5));
        if (!eax12) 
            goto addr_416601_2;
        v13 = eax7;
        eax14 = reinterpret_cast<int32_t>(esi8(v13, 0x425f98, v11, 0x425fa8, v9, 0x425fbc, 0x425fcc, v5));
        if (!eax14) 
            goto addr_416601_2;
        v15 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp1) + 0xfffffff8);
        eax16 = reinterpret_cast<int32_t>(eax10(0x80000002, 0x425f60, 0, 1, v15, v13, 0x425f98, v11, 0x425fa8, v9, 0x425fbc, 0x425fcc, v5));
        if (eax16) 
            goto addr_4165fa_10;
    }
    v17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp1) + 0xfffffffc);
    v18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp1) + 0xfffffff0);
    v19 = v20;
    eax21 = reinterpret_cast<int32_t>(eax12(v19, 0x425f44, 0, v18, 0, v17, 0x80000002, 0x425f60, 0, 1, v15, v13, 0x425f98, v11, 0x425fa8, v9, 0x425fbc, 0x425fcc, v5));
    if (eax21 || (v22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v23) + 13), fun_414c20(v20, v19, 0x425f44, 0, v18, 0, v17, 0x80000002, 0x425f60, 0, 1, v15, v13, 0x425f98, v11, 0x425fa8, v9, 0x425fbc, 0x425fcc, v5, edi24), esi25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp1) - 20 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4), v26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp1) - 4), v27 = esi25, v28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp1) - 16), v29 = v30, eax31 = reinterpret_cast<int32_t>(eax12(v29, "EnvironmentDirectory", 0, v28, v27, v26, v19, 0x425f44, 0, v18, 0, v17, 0x80000002, 0x425f60, 0, 1, v15, v13, 0x425f98, v11, 0x425fa8, v9, 0x425fbc, 0x425fcc, v5)), v32 = v33, eax14(v32, v29, "EnvironmentDirectory", 0, v28, v27, v26, v19, 0x425f44, 0, v18, 0, v17, 0x80000002, 0x425f60, 0, 1, v15, v13, 0x425f98, v11, 0x425fa8, v9, 0x425fbc, 0x425fcc, v5), v34 = eax7, FreeLibrary(v34, v32, v29, "EnvironmentDirectory", 0, v28, v27, v26, v19, 0x425f44, 0, v18, 0, v17, 0x80000002, 0x425f60, 0, 1, v15, v13, 0x425f98, v11, 0x425fa8, v9, 0x425fbc, 0x425fcc, v5), !!eax31)) {
        addr_416601_2:
        return 0;
    } else {
        if (*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi25) + reinterpret_cast<int32_t>(v22) - 2) == 92) {
            v22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v22) - 1);
        } else {
            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi25) + reinterpret_cast<int32_t>(v22) - 1) = 92;
        }
        ecx35 = g428d48;
        eax36 = esi25;
        ecx37 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx35) - reinterpret_cast<uint32_t>(esi25));
        edi38 = 12;
        do {
            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax36) + reinterpret_cast<int32_t>(v22)) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx37) + reinterpret_cast<uint32_t>(eax36));
            eax36 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax36) + 1);
            --edi38;
        } while (edi38);
        eax6 = reinterpret_cast<int32_t>(LoadLibraryA(esi25, v34, v32, v29, "EnvironmentDirectory", 0, v28, v27, v26, v19, 0x425f44, 0, v18, 0, v17, 0x80000002, 0x425f60, 0, 1, v15, v13, 0x425f98, v11, 0x425fa8, v9, 0x425fbc, 0x425fcc, v5));
        goto addr_4166a4_4;
    }
    addr_4165fa_10:
    FreeLibrary(eax7, 0x80000002, 0x425f60, 0, 1, v15, v13, 0x425f98, v11, 0x425fa8, v9, 0x425fbc, 0x425fcc, v5);
    goto addr_416601_2;
}

void** fun_416ec0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12);

void** fun_4114ec(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** ebp8;
    void** eax9;

    eax9 = fun_416ec0(a2, a2, a3, a4, a5, a6, 1, ecx, ebp8, __return_address(), a2, a3);
    return eax9;
}

void** fun_4111fe(void** ecx);

void** fun_411096(void** ecx, void** a2) {
    uint32_t eax3;
    void** eax4;
    void** v5;
    void** eax6;
    void** v7;
    int32_t v8;
    void** eax9;
    void** v10;
    void** v11;
    void** ecx12;
    void** v13;
    void** eax14;
    void** eax15;
    void** v16;
    void** v17;
    void** v18;
    void** eax19;
    void** v20;
    void** eax21;
    void** edx22;
    void** ecx23;
    void** v24;
    void** v25;
    void** eax26;
    void** ecx27;
    void** v28;
    void** eax29;
    void** v30;
    void** ecx31;
    void** eax32;
    void** v33;
    void** eax34;
    void** v35;
    void** eax36;
    void** v37;
    void** eax38;
    void** v39;
    void** eax40;
    void** v41;
    void** eax42;
    void** v43;
    void** eax44;
    void** eax45;

    eax3 = g428d4c;
    if (eax3 & 1) {
        eax4 = fun_4111fe(ecx);
        if (eax4 == 0xffffffff || eax4 == 0xfffffffe) {
            v5 = reinterpret_cast<void**>(1);
            eax6 = g429850;
            v7 = eax6;
            while (v7) {
                v8 = 1;
                if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7 + 20)) & 0xffff) == 4 || (*reinterpret_cast<void***>(v7 + 20) == 1 || ((eax9 = v7, (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax9 + 20)) & 0xffff) == 2) || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v7 + 20) == 3)))) {
                    eax9 = v7;
                    v10 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax9 + 20)) & 0xffff) * 4 + 0x428d5c);
                } else {
                    v10 = reinterpret_cast<void**>(0x426540);
                }
                *reinterpret_cast<unsigned char*>(&eax9) = g428d58;
                v11 = eax9;
                ecx12 = v7 + 28;
                eax14 = fun_417d50(ecx12, ecx12, *reinterpret_cast<unsigned char*>(&v11), 4, v13);
                if (!eax14) {
                    ecx12 = *reinterpret_cast<void***>(v7 + 24);
                    eax15 = fun_41119f(ecx12, 0, 0, 0, 0, 0x4263dc, v10, ecx12, v7 + 32);
                    if (reinterpret_cast<int1_t>(eax15 == 1)) {
                    }
                    v8 = 0;
                }
                *reinterpret_cast<unsigned char*>(&ecx12) = g428d58;
                v16 = ecx12;
                v17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v7) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7 + 16)) + 32);
                eax19 = fun_417d50(v7, v17, *reinterpret_cast<unsigned char*>(&v16), 4, v18);
                if (!eax19) {
                    v20 = *reinterpret_cast<void***>(v7 + 24);
                    eax21 = fun_41119f(v7, 0, 0, 0, 0, 0x4263ac, v10, v20, v7 + 32);
                    if (reinterpret_cast<int1_t>(eax21 == 1)) {
                    }
                    v8 = 0;
                }
                edx22 = v7;
                if (!*reinterpret_cast<void***>(edx22 + 20) && (ecx23 = *reinterpret_cast<void***>(v7 + 16), *reinterpret_cast<unsigned char*>(&edx22) = g428d59, v24 = edx22, eax26 = fun_417d50(ecx23, v7 + 32, *reinterpret_cast<unsigned char*>(&v24), ecx23, v25), !eax26)) {
                    ecx27 = v7 + 32;
                    eax29 = fun_41119f(ecx27, 0, 0, 0, 0, 0x426510, ecx27, v28, v10);
                    if (reinterpret_cast<int1_t>(eax29 == 1)) {
                    }
                    v8 = 0;
                }
                if (!v8) {
                    if (*reinterpret_cast<void***>(v7 + 8) && (v30 = *reinterpret_cast<void***>(v7 + 12), ecx31 = *reinterpret_cast<void***>(v7 + 8), eax32 = fun_41119f(ecx31, 0, 0, 0, 0, 0x4264e8, v10, ecx31, v30), reinterpret_cast<int1_t>(eax32 == 1))) {
                    }
                    v33 = *reinterpret_cast<void***>(v7 + 16);
                    eax34 = fun_41119f(v10, 0, 0, 0, 0, 0x4264b8, v10, v7 + 32, v33);
                    if (reinterpret_cast<int1_t>(eax34 == 1)) {
                    }
                    v5 = reinterpret_cast<void**>(0);
                }
                v7 = *reinterpret_cast<void***>(v7);
            }
        } else {
            switch (eax4 + 6) {
            default:
                eax36 = fun_41119f(eax4, 0, 0, 0, 0, 0x426074, 0x42654c, eax4 + 6, v35);
                if (reinterpret_cast<int1_t>(eax36 == 1)) {
                    break;
                }
            case 0:
                eax38 = fun_41119f(eax4, 0, 0, 0, 0, 0x426074, 0x426580, eax4 + 6, v37);
                if (reinterpret_cast<int1_t>(eax38 == 1)) {
                }
                break;
            case 1:
                eax40 = fun_41119f(eax4, 0, 0, 0, 0, 0x426074, 0x4265a8, eax4 + 6, v39);
                if (reinterpret_cast<int1_t>(eax40 == 1)) {
                }
                break;
            case 2:
                eax42 = fun_41119f(eax4, 0, 0, 0, 0, 0x426074, 0x4265d0, eax4 + 6, v41);
                if (reinterpret_cast<int1_t>(eax42 == 1)) {
                }
                break;
            case 3:
                eax44 = fun_41119f(eax4, 0, 0, 0, 0, 0x426074, 0x4265fc, eax4 + 6, v43);
                if (reinterpret_cast<int1_t>(eax44 == 1)) {
                }
            }
            v5 = reinterpret_cast<void**>(0);
        }
        eax45 = v5;
    } else {
        eax45 = reinterpret_cast<void**>(1);
    }
    return eax45;
}

int32_t HeapReAlloc = 0x2c810;

int32_t fun_4113d9(void** ecx, void** a2);

void** fun_4111c7(void** a1, void** a2);

int32_t fun_4111e5(void** a1, void** a2, void** a3);

void** fun_411528(void** a1, void** a2);

void** fun_41149c(void** a1, void** a2, void** a3, void** a4, void** a5);

void** fun_411127(void** ecx, void** a2);

void** fun_411203(void** ecx, void** a2, void** a3) {
    int1_t zf4;
    void** v5;
    void** edx6;
    void** eax7;
    int1_t zf8;
    int32_t eax9;
    void** v10;
    void** v11;
    void** eax12;
    void** v13;
    int1_t below_or_equal14;
    int32_t eax15;
    void** eax16;
    void** v17;
    void** v18;
    void** eax19;
    void** v20;
    void** edx21;
    void** eax22;
    void** v23;
    void** eax24;
    int1_t zf25;
    int32_t eax26;
    void** eax27;

    if (a2) {
        if (a3) {
            zf4 = g42af90 == 3;
            if (!zf4) {
                while (1) {
                    v5 = reinterpret_cast<void**>(0);
                    if (reinterpret_cast<unsigned char>(a3) <= reinterpret_cast<unsigned char>(0xffffffe0)) {
                        if (!a3) {
                            a3 = reinterpret_cast<void**>(1);
                        }
                        ecx = a2;
                        edx6 = g42af80;
                        eax7 = reinterpret_cast<void**>(HeapReAlloc(edx6, 0, ecx, a3));
                        v5 = eax7;
                    }
                    if (v5) 
                        break;
                    zf8 = g4298f4 == 0;
                    if (zf8) 
                        break;
                    eax9 = fun_4113d9(ecx, a3);
                    if (!eax9) 
                        goto addr_41e22b_12;
                }
            } else {
                while (1) {
                    v10 = reinterpret_cast<void**>(0);
                    if (reinterpret_cast<unsigned char>(a3) <= reinterpret_cast<unsigned char>(0xffffffe0)) {
                        eax12 = fun_4111c7(a2, v11);
                        v13 = eax12;
                        if (v13) {
                            ecx = a3;
                            below_or_equal14 = reinterpret_cast<unsigned char>(ecx) <= reinterpret_cast<unsigned char>(g42aca4);
                            if (below_or_equal14) {
                                ecx = v13;
                                eax15 = fun_4111e5(ecx, a2, a3);
                                if (!eax15) {
                                    eax16 = fun_411528(a3, v11);
                                    v10 = eax16;
                                    if (v10) {
                                        v17 = *reinterpret_cast<void***>(a2 + 0xfffffffc) - 1;
                                        if (reinterpret_cast<unsigned char>(v17) >= reinterpret_cast<unsigned char>(a3)) {
                                            v18 = a3;
                                        } else {
                                            v18 = v17;
                                        }
                                        fun_411352(v10, a2, v18, v11, v18, v13);
                                        eax19 = fun_4111c7(a2, v11);
                                        v13 = eax19;
                                        ecx = a2;
                                        fun_41149c(v13, ecx, v11, v18, v13);
                                    }
                                } else {
                                    v10 = a2;
                                }
                            }
                            if (!v10) {
                                if (!a3) {
                                    a3 = reinterpret_cast<void**>(1);
                                }
                                a3 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a3 + 15) & 0xfffffff0);
                                ecx = a3;
                                v20 = ecx;
                                edx21 = g42af80;
                                eax22 = reinterpret_cast<void**>(HeapAlloc(edx21, 0, v20));
                                v10 = eax22;
                                if (v10) {
                                    v23 = *reinterpret_cast<void***>(a2 + 0xfffffffc) - 1;
                                    if (reinterpret_cast<unsigned char>(v23) >= reinterpret_cast<unsigned char>(a3)) {
                                        v11 = a3;
                                    } else {
                                        v11 = v23;
                                    }
                                    ecx = v10;
                                    fun_411352(ecx, a2, v11, edx21, 0, v20);
                                    fun_41149c(v13, a2, edx21, 0, v20);
                                }
                            }
                        }
                        if (!v13) {
                            if (!a3) {
                                a3 = reinterpret_cast<void**>(1);
                            }
                            a3 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a3 + 15) & 0xfffffff0);
                            ecx = g42af80;
                            eax24 = reinterpret_cast<void**>(HeapReAlloc(ecx, 0, a2, a3));
                            v10 = eax24;
                        }
                    }
                    if (v10) 
                        goto addr_41e1b5_37;
                    zf25 = g4298f4 == 0;
                    if (zf25) 
                        goto addr_41e1b5_37;
                    eax26 = fun_4113d9(ecx, a3);
                    if (!eax26) 
                        goto addr_41e1ca_40;
                }
            }
        } else {
            fun_4113e8(ecx, a2);
            eax27 = reinterpret_cast<void**>(0);
            goto addr_41e231_43;
        }
    } else {
        eax27 = fun_411127(a3, a3);
        goto addr_41e231_43;
    }
    eax27 = v5;
    addr_41e231_43:
    return eax27;
    addr_41e22b_12:
    eax27 = reinterpret_cast<void**>(0);
    goto addr_41e231_43;
    addr_41e1b5_37:
    eax27 = v10;
    goto addr_41e231_43;
    addr_41e1ca_40:
    eax27 = reinterpret_cast<void**>(0);
    goto addr_41e231_43;
}

void** fun_411195(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** edx10;
    void** eax11;
    void** edi12;
    uint32_t ecx13;
    void*** eax14;
    void** ecx15;
    uint32_t ecx16;

    edx10 = a3;
    if (!edx10) {
        return a1;
    }
    eax11 = reinterpret_cast<void**>(0);
    eax11 = a2;
    edi12 = a1;
    if (reinterpret_cast<unsigned char>(edx10) < reinterpret_cast<unsigned char>(4)) {
        do {
            addr_41dd6b_5:
            *reinterpret_cast<void***>(edi12) = eax11;
            ++edi12;
            --edx10;
        } while (edx10);
    } else {
        ecx13 = reinterpret_cast<uint32_t>(-reinterpret_cast<unsigned char>(a1)) & 3;
        if (ecx13) {
            edx10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx10) - ecx13);
            do {
                *reinterpret_cast<void***>(edi12) = eax11;
                ++edi12;
                --ecx13;
            } while (ecx13);
        }
        eax14 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(eax11) << 8) + reinterpret_cast<unsigned char>(eax11));
        eax11 = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(eax14) << 16) + reinterpret_cast<uint32_t>(eax14));
        ecx15 = edx10;
        edx10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx10) & 3);
        ecx16 = reinterpret_cast<unsigned char>(ecx15) >> 2;
        if (!ecx16) 
            goto addr_41dd6b_5; else 
            goto addr_41dd65_10;
    }
    addr_41dd75_11:
    return a1;
    addr_41dd65_10:
    while (ecx16) {
        --ecx16;
        *reinterpret_cast<void***>(edi12) = eax11;
        edi12 = edi12 + 4;
    }
    if (!edx10) 
        goto addr_41dd75_11; else 
        goto addr_41dd6b_5;
}

void** fun_417d50(void** ecx, void** a2, unsigned char a3, void** a4, void** a5) {
    void** v6;
    void** eax7;
    uint32_t ecx8;

    v6 = reinterpret_cast<void**>(1);
    while (eax7 = a4, --a4, !!eax7) {
        ecx8 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2));
        ++a2;
        if (ecx8 != static_cast<uint32_t>(a3)) {
            v6 = reinterpret_cast<void**>(0);
        }
    }
    return v6;
}

void** fun_4111c7(void** a1, void** a2) {
    int32_t eax3;
    void** tmp32_4;
    void** v5;
    void** ecx6;
    void** v7;
    void* v8;
    void** eax9;

    eax3 = g42ac9c;
    tmp32_4 = g42aca0 + eax3 * 20;
    v5 = tmp32_4;
    ecx6 = g42aca0;
    v7 = ecx6;
    while (reinterpret_cast<unsigned char>(v7) < reinterpret_cast<unsigned char>(v5)) {
        v8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a1) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7 + 12)));
        if (reinterpret_cast<uint32_t>(v8) < 0x100000) 
            goto addr_41a7ad_5;
        v7 = v7 + 20;
    }
    eax9 = reinterpret_cast<void**>(0);
    addr_41a7bf_8:
    return eax9;
    addr_41a7ad_5:
    eax9 = v7;
    goto addr_41a7bf_8;
}

struct s15 {
    signed char[20] pad20;
    uint32_t f20;
};

uint32_t fun_411221(void** a1, struct s15* a2) {
    void* v3;
    uint32_t ecx4;
    uint32_t v5;

    v3 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a2) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)));
    ecx4 = reinterpret_cast<uint32_t>(v3) >> 15;
    if (0x80000000 >> *reinterpret_cast<signed char*>(&ecx4) & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 8)) || (reinterpret_cast<uint32_t>(v3) & 15 || !(reinterpret_cast<uint32_t>(v3) & 0xfff))) {
        v5 = 0;
    } else {
        v5 = 1;
    }
    return v5;
}

int32_t IsBadReadPtr = 0x2c7be;

int32_t IsBadWritePtr = 0x2c7ae;

int32_t fun_4112f8(void** ecx, void** a2, void** a3, int32_t a4, void** a5) {
    int32_t eax6;
    int32_t eax7;
    int32_t v8;

    if (!a2 || ((eax6 = reinterpret_cast<int32_t>(IsBadReadPtr(a2, a3, ecx)), !!eax6) || a4 && (eax7 = reinterpret_cast<int32_t>(IsBadWritePtr(a2, a3, a2, a3, ecx)), !!eax7))) {
        v8 = 0;
    } else {
        v8 = 1;
    }
    return v8;
}

void** g428ed4 = reinterpret_cast<void**>(24);

void** g429904 = reinterpret_cast<void**>(0);

void** g429914 = reinterpret_cast<void**>(0);

void** fun_4113c0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, int32_t a7, ...);

void** fun_41124e(void** a1, uint32_t a2) {
    void* ebp3;
    uint32_t eax4;
    void** edx5;
    void** v6;
    void** ecx7;
    void** edx8;
    void** v9;
    void** v10;
    void** eax11;
    void** eax12;
    uint16_t v13;
    void** edx14;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    if (reinterpret_cast<unsigned char>(a1 + 1) > reinterpret_cast<unsigned char>(0x100)) {
        eax4 = reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(a1) >> 8) & 0xff;
        edx5 = g428ed4;
        if (!(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(edx5 + *reinterpret_cast<unsigned char*>(&eax4) * 2))) & 0x8000)) {
            v6 = reinterpret_cast<void**>(1);
        } else {
            v6 = reinterpret_cast<void**>(2);
        }
        ecx7 = g429904;
        edx8 = g429914;
        v9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffffc);
        v10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffff4);
        eax11 = fun_4113c0(1, v10, v6, v9, edx8, ecx7, 1, 1, v10, v6, v9, edx8, ecx7, 1);
        if (eax11) {
            eax12 = reinterpret_cast<void**>(static_cast<uint32_t>(v13) & a2);
        } else {
            eax12 = reinterpret_cast<void**>(0);
        }
    } else {
        edx14 = g428ed4;
        eax12 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(edx14 + reinterpret_cast<unsigned char>(a1) * 2))) & a2);
    }
    return eax12;
}

void** fun_4111f4(void** ecx, void** a2, int32_t a3);

void** fun_411087(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    int1_t zf6;
    struct s3* eax7;
    void** eax8;
    void** eax9;

    zf6 = ecx == g428eb0;
    if (!zf6) {
        eax7 = g0;
        g0 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4);
        fun_4111f4(ecx, 1, 0);
        eax8 = reinterpret_cast<void**>(ExitProcess());
        g0 = eax7;
        return eax8;
    } else {
        return eax9;
    }
}

int32_t g42962c = 0;

void** fun_4111ae(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** v12;
    void** v13;
    void** v14;
    void** ecx15;
    void** v16;
    void** v17;
    void** v18;
    void** ebp19;
    void** eax20;
    void** v21;
    void** v22;
    uint32_t ecx23;
    uint32_t v24;
    void** eax25;
    void** v26;
    void** v27;
    void** v28;
    void** eax29;
    void** v30;
    void** v31;
    void** v32;
    void** eax33;

    if (!(reinterpret_cast<unsigned char>(a2 - 1) & reinterpret_cast<unsigned char>(a2))) {
        if (reinterpret_cast<unsigned char>(a3) < reinterpret_cast<unsigned char>(a1) || !a3) {
            if (reinterpret_cast<unsigned char>(a2) <= reinterpret_cast<unsigned char>(4)) {
                v12 = reinterpret_cast<void**>(4);
            } else {
                v12 = a2;
            }
            v13 = v12 - 1;
            v14 = reinterpret_cast<void**>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(a3)) & 3);
            ecx15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v14) + reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v13) + 8);
            eax20 = fun_411064(ecx15, ecx15, 1, a4, a5, v12, v14, v16, v17, v18, ebp19, __return_address(), a1, v13, a3, a4, a5, a6, a7, a8, a9, a10, a11);
            if (eax20) {
                v21 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(eax20) + reinterpret_cast<unsigned char>(v13) + reinterpret_cast<unsigned char>(v14) + reinterpret_cast<unsigned char>(a3) + 8 & ~reinterpret_cast<unsigned char>(v13)) - reinterpret_cast<unsigned char>(a3));
                v22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v21) - reinterpret_cast<unsigned char>(v14) - 8);
                ecx23 = g428d5b;
                v24 = ecx23;
                fun_411195(v22 + 4, *reinterpret_cast<void***>(&v24), 4, v12, v14, eax20, v21, v22, ebp19);
                *reinterpret_cast<void***>(v22) = eax20;
                eax25 = v21;
            } else {
                eax25 = reinterpret_cast<void**>(0);
            }
        } else {
            if (!0 && (eax29 = fun_41119f(0, 2, 0x4260e0, 0x9a6, 0, 0x42686c, v26, v27, v28), reinterpret_cast<int1_t>(eax29 == 1))) {
            }
            g42962c = 22;
            eax25 = reinterpret_cast<void**>(0);
        }
    } else {
        if (!0 && (eax33 = fun_41119f(0, 2, 0x4260e0, 0x99f, 0, 0x426894, v30, v31, v32), reinterpret_cast<int1_t>(eax33 == 1))) {
        }
        g42962c = 22;
        eax25 = reinterpret_cast<void**>(0);
    }
    return eax25;
}

void** fun_4115af(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** v16;
    void** v17;
    void** edx18;
    void** eax19;
    void** v20;
    void** eax21;
    void** ebp22;
    void** eax23;
    void** ecx24;
    void** eax25;

    if (a2) {
        v16 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(a2) & 0xfffffffc) - 8);
        *reinterpret_cast<unsigned char*>(&ecx) = g428d58;
        v17 = ecx;
        edx18 = a2 - 4;
        eax19 = fun_417d50(ecx, edx18, *reinterpret_cast<unsigned char*>(&v17), 4, v16);
        if (!eax19) {
            *reinterpret_cast<unsigned char*>(&edx18) = g428d5b;
            v20 = edx18;
            eax21 = fun_417d50(ecx, v16 + 4, *reinterpret_cast<unsigned char*>(&v20), 4, v16);
            if (!eax21 && (eax23 = fun_41119f(a2, 1, 0, 0, 0, 0x4268c0, a2, v16, ebp22), reinterpret_cast<int1_t>(eax23 == 1))) {
            }
            ecx24 = *reinterpret_cast<void***>(v16);
            eax25 = fun_41141a(ecx24, ecx24, 1, v16, ebp22, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
        } else {
            eax25 = fun_41119f(ecx, 1, 0, 0, 0, 0x426960, a2, v16, ebp22);
            if (reinterpret_cast<int1_t>(eax25 == 1)) {
            }
        }
    }
    return eax25;
}

int32_t fun_419600(unsigned char a1, uint32_t a2, uint32_t a3, int32_t a4) {
    uint32_t v5;
    int32_t v6;
    uint32_t v7;
    void** ecx8;

    v5 = a1;
    if (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(v5 + 0x42ad41)) & a3) {
        addr_41964d_2:
        v6 = 1;
    } else {
        if (!a2) {
            v7 = 0;
        } else {
            ecx8 = g428ed4;
            v7 = static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(ecx8 + v5 * 2))) & a2;
        }
        if (v7) 
            goto addr_41964d_2; else 
            goto addr_419644_7;
    }
    addr_419654_8:
    return v6;
    addr_419644_7:
    v6 = 0;
    goto addr_419654_8;
}

void** g42ae44;

int32_t g42ad2c;

void** g42acb4;

void fun_419b60(void** ecx, void** a2, void* a3) {
    int32_t v4;
    int32_t v5;

    v4 = 0;
    while (v4 < 0x101) {
        *reinterpret_cast<signed char*>(v4 + 0x42ad40) = 0;
        ++v4;
    }
    g42ae44 = reinterpret_cast<void**>(0);
    g42ad2c = 0;
    g42acb4 = reinterpret_cast<void**>(0);
    v5 = 0;
    while (v5 < 6) {
        *reinterpret_cast<int16_t*>(v5 * 2 + 0x42ae50) = 0;
        ++v5;
    }
    return;
}

int32_t GetCPInfo = 0x2c7de;

void** fun_4113ed(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, int32_t a8, void** a9, void** a10);

struct s16 {
    signed char[4369729] pad4369729;
    unsigned char f4369729;
    signed char[286] pad4370016;
    signed char f4370016;
};

void** fun_419c00(void** a1, void* a2) {
    void* ebp3;
    void** eax4;
    void** v5;
    void** v6;
    void** ecx7;
    void** v8;
    int32_t eax9;
    uint32_t v10;
    uint32_t ecx11;
    uint32_t eax12;
    uint32_t edx13;
    uint32_t ecx14;
    void* v15;
    unsigned char v16;
    void* v17;
    unsigned char v18;
    unsigned char v19;
    void** eax20;
    void** ecx21;
    void** v22;
    void** v23;
    void** ecx24;
    void** ecx25;
    void** edx26;
    void** edx27;
    struct s16* v28;
    uint32_t eax29;
    uint32_t ecx30;
    void** v31;
    void** v32;
    void** eax33;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax4 = g428eb0;
    v5 = eax4;
    v6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffad8);
    ecx7 = g42ae44;
    v8 = ecx7;
    eax9 = reinterpret_cast<int32_t>(GetCPInfo(v8, v6));
    if (eax9 != 1) {
        v10 = 0;
        while (v10 < 0x100) {
            if (v10 < 65 || v10 > 90) {
                if (v10 < 97 || v10 > 0x7a) {
                    *reinterpret_cast<signed char*>(v10 + 0x42ae60) = 0;
                } else {
                    ecx11 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(v10 + 0x42ad41)) | 32;
                    *reinterpret_cast<unsigned char*>(v10 + 0x42ad41) = *reinterpret_cast<unsigned char*>(&ecx11);
                    eax12 = v10 - 32;
                    *reinterpret_cast<signed char*>(v10 + 0x42ae60) = *reinterpret_cast<signed char*>(&eax12);
                }
            } else {
                edx13 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(v10 + 0x42ad41)) | 16;
                *reinterpret_cast<unsigned char*>(v10 + 0x42ad41) = *reinterpret_cast<unsigned char*>(&edx13);
                ecx14 = v10 + 32;
                *reinterpret_cast<signed char*>(v10 + 0x42ae60) = *reinterpret_cast<signed char*>(&ecx14);
            }
            ++v10;
        }
    } else {
        v15 = reinterpret_cast<void*>(0);
        while (reinterpret_cast<uint32_t>(v15) < 0x100) {
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp3) + reinterpret_cast<uint32_t>(v15) - 0x510) = *reinterpret_cast<signed char*>(&v15);
            v15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v15) + 1);
        }
        while (v16) {
            v17 = reinterpret_cast<void*>(static_cast<uint32_t>(v18));
            while (reinterpret_cast<uint32_t>(v17) <= static_cast<uint32_t>(v19)) {
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp3) + reinterpret_cast<uint32_t>(v17) - 0x510) = 32;
                v17 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v17) + 1);
            }
        }
        eax20 = g42acb4;
        ecx21 = g42ae44;
        v22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffdf8);
        v23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffaf0);
        fun_4113c0(1, v23, 0x100, v22, ecx21, eax20, 0, 1, v23, 0x100, v22, ecx21, eax20, 0);
        ecx24 = g42ae44;
        ecx25 = g42acb4;
        fun_4113ed(ecx25, 0x100, reinterpret_cast<int32_t>(ebp3) + 0xfffffaf0, 0x100, reinterpret_cast<int32_t>(ebp3) + 0xfffffcf8, 0x100, ecx24, 0, v8, v6);
        edx26 = g42ae44;
        edx27 = g42acb4;
        fun_4113ed(edx27, 0x200, reinterpret_cast<int32_t>(ebp3) + 0xfffffaf0, 0x100, reinterpret_cast<int32_t>(ebp3) + 0xfffffbf8, 0x100, edx26, 0, v8, v6);
        v28 = reinterpret_cast<struct s16*>(0);
        while (reinterpret_cast<uint32_t>(v28) < 0x100) {
            if (!(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(ebp3) + reinterpret_cast<uint32_t>(v28) * 2 - 0x208)) & 1)) {
                if (!(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(ebp3) + reinterpret_cast<uint32_t>(v28) * 2 - 0x208)) & 2)) {
                    v28->f4370016 = 0;
                } else {
                    eax29 = static_cast<uint32_t>(v28->f4369729) | 32;
                    v28->f4369729 = *reinterpret_cast<unsigned char*>(&eax29);
                    v28->f4370016 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp3) + reinterpret_cast<uint32_t>(v28) - 0x408);
                }
            } else {
                ecx30 = static_cast<uint32_t>(v28->f4369729) | 16;
                v28->f4369729 = *reinterpret_cast<unsigned char*>(&ecx30);
                v28->f4370016 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp3) + reinterpret_cast<uint32_t>(v28) - 0x308);
            }
            v28 = reinterpret_cast<struct s16*>(reinterpret_cast<uint32_t>(v28) + 1);
        }
    }
    eax33 = fun_411087(v5, v8, v6, v31, v32);
    return eax33;
}

void** fun_419a50(void** a1);

int32_t g429864 = 0;

void** fun_419ac0(void** ecx, void** a2, void** a3, void* a4);

struct s17 {
    unsigned char f0;
    unsigned char f1;
};

void** fun_411023(void** a1) {
    void* ebp2;
    void** eax3;
    void** v4;
    void** eax5;
    void** v6;
    int1_t zf7;
    uint32_t v8;
    void** ecx9;
    void** v10;
    void* v11;
    void** v12;
    void* v13;
    void* v14;
    void** v15;
    int32_t eax16;
    int1_t zf17;
    uint32_t v18;
    uint32_t v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** eax24;
    uint32_t v25;
    void** ecx26;
    uint32_t v27;
    uint32_t edx28;
    void** v29;
    uint32_t eax30;
    void** edx31;
    void** eax32;
    uint32_t v33;
    void** v34;
    struct s17* v35;
    uint32_t v36;
    uint32_t eax37;
    void** eax38;
    void** v39;
    void* v40;
    void** eax41;
    uint32_t v42;
    void** v43;
    void* v44;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax3 = g428eb0;
    v4 = eax3;
    eax5 = fun_419a50(a1);
    v6 = eax5;
    zf7 = v6 == g42ae44;
    if (!zf7) {
        if (v6) {
            v8 = 0;
            while (v8 < 5) {
                ecx9 = *reinterpret_cast<void***>(v8 * 48 + 0x428d80);
                if (ecx9 == v6) 
                    goto addr_4196f7_7;
                ++v8;
            }
        } else {
            fun_419b60(v6, v10, v11);
            fun_419c00(v12, v13);
            goto addr_419980_11;
        }
    } else {
        goto addr_419980_11;
    }
    v14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp2) - 40);
    v15 = v6;
    eax16 = reinterpret_cast<int32_t>(GetCPInfo(v15, v14));
    if (eax16 != 1) {
        zf17 = g429864 == 0;
        if (!zf17) {
            fun_419b60(v6, v15, v14);
            fun_419c00(v15, v14);
        }
    } else {
        v18 = 0;
        while (v18 < 0x101) {
            *reinterpret_cast<signed char*>(v18 + 0x42ad40) = 0;
            ++v18;
        }
        g42ae44 = v6;
        g42acb4 = reinterpret_cast<void**>(0);
        if (v19 <= 1) 
            goto addr_41992c_22; else 
            goto addr_419879_23;
    }
    addr_419980_11:
    eax24 = fun_411087(v4, v20, v21, v22, v23);
    return eax24;
    addr_41992c_22:
    g42ad2c = 0;
    addr_419936_24:
    v25 = 0;
    while (v25 < 6) {
        *reinterpret_cast<int16_t*>(v25 * 2 + 0x42ae50) = 0;
        ++v25;
    }
    fun_419c00(v15, v14);
    goto addr_419980_11;
    addr_419879_23:
    v20 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xffffffde);
    while ((ecx26 = v20, !!v4) && (ecx26 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v4 + 1))), !!ecx26)) {
        v27 = reinterpret_cast<unsigned char>(v4);
        while (v27 <= static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v4 + 1))) {
            edx28 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(v27 + 0x42ad41)) | 4;
            *reinterpret_cast<unsigned char*>(v27 + 0x42ad41) = *reinterpret_cast<unsigned char*>(&edx28);
            ++v27;
        }
        v20 = v20 + 2;
    }
    v29 = reinterpret_cast<void**>(1);
    while (reinterpret_cast<unsigned char>(v29) < reinterpret_cast<unsigned char>(0xff)) {
        eax30 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(v29 + 0x42ad41)) | 8;
        *reinterpret_cast<unsigned char*>(v29 + 0x42ad41) = *reinterpret_cast<unsigned char*>(&eax30);
        ecx26 = v29 + 1;
        v29 = ecx26;
    }
    edx31 = g42ae44;
    eax32 = fun_419ac0(ecx26, edx31, v15, v14);
    g42acb4 = eax32;
    g42ad2c = 1;
    goto addr_419936_24;
    addr_4196f7_7:
    v33 = 0;
    while (v33 < 0x101) {
        *reinterpret_cast<signed char*>(v33 + 0x42ad40) = 0;
        ++v33;
    }
    v34 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<unsigned char>(v34) < reinterpret_cast<unsigned char>(4)) {
        v35 = reinterpret_cast<struct s17*>(v8 * 48 + reinterpret_cast<unsigned char>(v34) * 8 + 0x428d90);
        while (v35->f0 && v35->f1) {
            v36 = v35->f0;
            while (v36 <= static_cast<uint32_t>(v35->f1)) {
                eax37 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(v36 + 0x42ad41)) | reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(v34 + 0x428d78)));
                *reinterpret_cast<unsigned char*>(v36 + 0x42ad41) = *reinterpret_cast<unsigned char*>(&eax37);
                ++v36;
            }
            ++v35;
        }
        ecx9 = v34 + 1;
        v34 = ecx9;
    }
    g42ae44 = v6;
    g42ad2c = 1;
    eax38 = g42ae44;
    eax41 = fun_419ac0(ecx9, eax38, v39, v40);
    g42acb4 = eax41;
    v42 = 0;
    while (v42 < 6) {
        *reinterpret_cast<int16_t*>(v42 * 2 + 0x42ae50) = *reinterpret_cast<int16_t*>(v8 * 48 + v42 * 2 + 0x428d84);
        ++v42;
    }
    fun_419c00(v43, v44);
    goto addr_419980_11;
}

struct s18 {
    void** f0;
    void** f1;
    signed char f2;
    signed char f3;
};

void** fun_411343(void** a1, void** a2, void* a3, void** a4, int32_t a5, void** a6, void** a7, int32_t a8, int32_t a9, void** a10, int32_t a11, int32_t a12) {
    void** esi13;
    void** edi14;
    void** eax15;
    uint32_t ecx16;
    uint32_t edx17;
    struct s18* esi18;
    void** edi19;
    uint32_t ecx20;
    uint32_t edx21;

    esi13 = a2;
    edi14 = a1;
    eax15 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a3) + reinterpret_cast<unsigned char>(esi13));
    if (reinterpret_cast<unsigned char>(edi14) <= reinterpret_cast<unsigned char>(esi13) || reinterpret_cast<unsigned char>(edi14) >= reinterpret_cast<unsigned char>(eax15)) {
        if (reinterpret_cast<unsigned char>(edi14) & 3) {
            if (reinterpret_cast<uint32_t>(a3) < 4) {
                goto *reinterpret_cast<int32_t*>((reinterpret_cast<uint32_t>(a3) - 4) * 4 + 0x41f2cc);
            } else {
                goto *reinterpret_cast<int32_t*>((reinterpret_cast<unsigned char>(edi14) & 3) * 4 + 0x41f1d0);
            }
        }
        ecx16 = reinterpret_cast<uint32_t>(a3) >> 2;
        edx17 = reinterpret_cast<uint32_t>(a3) & 3;
        if (ecx16 >= 8) 
            goto addr_41f1a3_8;
    } else {
        esi18 = reinterpret_cast<struct s18*>(reinterpret_cast<uint32_t>(a3) + reinterpret_cast<unsigned char>(esi13) + 0xfffffffc);
        edi19 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a3) + reinterpret_cast<unsigned char>(edi14) + 0xfffffffc);
        if (reinterpret_cast<unsigned char>(edi19) & 3) {
            eax15 = edi19;
            if (reinterpret_cast<uint32_t>(a3) >= 4) {
                goto *reinterpret_cast<int32_t*>((reinterpret_cast<unsigned char>(eax15) & 3) * 4 + 0x41f35c);
            }
            goto *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(a3) * 4 + 0x41f458);
        } else {
            ecx20 = reinterpret_cast<uint32_t>(a3) >> 2;
            edx21 = reinterpret_cast<uint32_t>(a3) & 3;
            if (ecx20 < 8) {
                goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(-ecx20) * 4 + 0x41f408);
                goto *reinterpret_cast<int32_t*>(edx21 * 4 + 0x41f458);
            } else {
                while (ecx20) {
                    --ecx20;
                    *reinterpret_cast<void***>(edi19) = esi18->f0;
                    edi19 = edi19 + 0xfffffffc;
                    --esi18;
                }
                goto *reinterpret_cast<int32_t*>(edx21 * 4 + 0x41f458);
            }
        }
    }
    switch (ecx16) {
        addr_41f2b3_21:
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
            *reinterpret_cast<signed char*>(edi14 + 2) = *reinterpret_cast<signed char*>(esi13 + 2);
            return a1;
        }
        addr_41f2a0_26:
    case 1:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi14 + ecx16 * 4) - 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi13 + ecx16 * 4) - 4);
        eax15 = reinterpret_cast<void**>(ecx16 * 4);
        esi13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi13) + reinterpret_cast<unsigned char>(eax15));
        edi14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + reinterpret_cast<unsigned char>(eax15));
        goto addr_41f2b3_21;
        addr_41f298_27:
    case 2:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi14 + ecx16 * 4) - 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi13 + ecx16 * 4) - 8);
        goto addr_41f2a0_26;
        addr_41f290_28:
    case 3:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi14 + ecx16 * 4) - 12) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi13 + ecx16 * 4) - 12);
        goto addr_41f298_27;
        addr_41f288_29:
    case 4:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi14 + ecx16 * 4) - 16) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi13 + ecx16 * 4) - 16);
        goto addr_41f290_28;
        addr_41f280_30:
    case 5:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi14 + ecx16 * 4) - 20) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi13 + ecx16 * 4) - 20);
        goto addr_41f288_29;
    case 6:
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edi14 + ecx16 * 4) - 24) = eax15;
        goto addr_41f280_30;
    case 7:
    }
    addr_41f1a3_8:
    while (ecx16) {
        --ecx16;
        *reinterpret_cast<void***>(edi14) = *reinterpret_cast<void***>(esi13);
        edi14 = edi14 + 4;
        esi13 = esi13 + 4;
    }
    goto *reinterpret_cast<int32_t*>(edx17 * 4 + 0x41f2bc);
    return eax15;
    *reinterpret_cast<signed char*>(edi19 + 3) = esi18->f3;
    return a1;
    *reinterpret_cast<signed char*>(edi19 + 3) = esi18->f3;
    *reinterpret_cast<signed char*>(edi19 + 2) = esi18->f2;
    return a1;
    *reinterpret_cast<signed char*>(edi19 + 3) = esi18->f3;
    *reinterpret_cast<signed char*>(edi19 + 2) = esi18->f2;
    *reinterpret_cast<void***>(edi19 + 1) = esi18->f1;
    return a1;
}

int32_t VirtualAlloc = 0x2c800;

void** fun_4112cb(void** ecx) {
    int32_t eax2;
    int1_t zf3;
    int32_t eax4;
    void** tmp32_5;
    void** ecx6;
    void** eax7;
    void** eax8;
    int32_t eax9;
    void** eax10;
    void** v11;
    void** edx12;
    int32_t ecx13;
    void** edx14;
    void** eax15;
    void** eax16;
    int32_t edx17;

    eax2 = g42ac9c;
    zf3 = eax2 == g42acac;
    if (!zf3) {
        addr_41b63b_3:
        eax4 = g42ac9c;
        tmp32_5 = g42aca0 + eax4 * 20;
        ecx6 = g42af80;
        eax7 = reinterpret_cast<void**>(HeapAlloc(ecx6, 8, 0x41c4));
        *reinterpret_cast<void***>(tmp32_5 + 16) = eax7;
        if (*reinterpret_cast<void***>(tmp32_5 + 16)) {
            eax8 = reinterpret_cast<void**>(VirtualAlloc(0, 0x100000, 0x2000, 4, ecx6, 8, 0x41c4));
            *reinterpret_cast<void***>(tmp32_5 + 12) = eax8;
            if (*reinterpret_cast<void***>(tmp32_5 + 12)) {
                *reinterpret_cast<void***>(tmp32_5) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(tmp32_5 + 4) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(tmp32_5 + 8) = reinterpret_cast<void**>(0xffffffff);
                eax9 = g42ac9c;
                g42ac9c = eax9 + 1;
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(tmp32_5 + 16)) = reinterpret_cast<void**>(0xffffffff);
                eax10 = tmp32_5;
            } else {
                v11 = *reinterpret_cast<void***>(tmp32_5 + 16);
                edx12 = g42af80;
                HeapFree(edx12, 0, v11, 0, 0x100000, 0x2000, 4, ecx6, 8, 0x41c4);
                eax10 = reinterpret_cast<void**>(0);
            }
        } else {
            eax10 = reinterpret_cast<void**>(0);
        }
    } else {
        ecx13 = g42acac;
        edx14 = g42aca0;
        eax15 = g42af80;
        eax16 = reinterpret_cast<void**>(HeapReAlloc(eax15, 0, edx14, (ecx13 + 16) * 20, ecx));
        if (eax16) {
            g42aca0 = eax16;
            edx17 = g42acac;
            g42acac = edx17 + 16;
            goto addr_41b63b_3;
        } else {
            eax10 = reinterpret_cast<void**>(0);
        }
    }
    return eax10;
}

void fun_41d200(void** a1, void** a2, uint32_t a3, int32_t a4) {
    void** v5;
    void** v6;
    uint32_t v7;
    uint32_t edx8;
    uint32_t edx9;
    void** v10;
    void** v11;

    v5 = a2;
    if (a4) {
        *reinterpret_cast<void***>(v5) = reinterpret_cast<void**>(45);
        ++v5;
        a1 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(a1));
    }
    v6 = v5;
    do {
        v7 = reinterpret_cast<unsigned char>(a1) % a3;
        a1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a1) / a3);
        if (v7 <= 9) {
            edx8 = v7 + 48;
            *reinterpret_cast<void***>(v5) = *reinterpret_cast<void***>(&edx8);
            ++v5;
        } else {
            edx9 = v7 + 87;
            *reinterpret_cast<void***>(v5) = *reinterpret_cast<void***>(&edx9);
            ++v5;
        }
    } while (reinterpret_cast<unsigned char>(a1) > reinterpret_cast<unsigned char>(0));
    *reinterpret_cast<void***>(v5) = reinterpret_cast<void**>(0);
    v10 = v5 - 1;
    do {
        v11 = *reinterpret_cast<void***>(v10);
        *reinterpret_cast<void***>(v10) = *reinterpret_cast<void***>(v6);
        *reinterpret_cast<void***>(v6) = v11;
        --v10;
        ++v6;
    } while (reinterpret_cast<unsigned char>(v6) < reinterpret_cast<unsigned char>(v10));
    return;
}

uint32_t fun_4115a0(void** a1, void** a2, uint32_t a3, void** a4) {
    void** ecx5;
    uint32_t ebx6;
    void** eax7;
    uint32_t eax8;
    void** eax9;
    void** tmp32_10;
    uint32_t eax11;

    if (a4) {
        ecx5 = a4;
        ebx6 = a3;
        eax7 = a1;
        do {
            ecx5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx5) >> 1);
            __asm__("rcr ebx, 1");
            __asm__("rcr eax, 1");
        } while (ecx5);
        eax8 = reinterpret_cast<unsigned char>(eax7) / ebx6;
        eax9 = reinterpret_cast<void**>(eax8 * a3);
        tmp32_10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(__intrinsic()) + eax8 * reinterpret_cast<unsigned char>(a4));
        if (reinterpret_cast<unsigned char>(tmp32_10) < reinterpret_cast<unsigned char>(__intrinsic())) 
            goto addr_41fa4a_6;
        if (reinterpret_cast<unsigned char>(tmp32_10) > reinterpret_cast<unsigned char>(a2)) 
            goto addr_41fa4a_6;
        if (reinterpret_cast<unsigned char>(tmp32_10) < reinterpret_cast<unsigned char>(a2)) 
            goto addr_41fa52_9;
        if (reinterpret_cast<unsigned char>(eax9) <= reinterpret_cast<unsigned char>(a1)) 
            goto addr_41fa52_9;
    } else {
        eax11 = reinterpret_cast<unsigned char>(a1) % a3;
        goto addr_41fa61_12;
    }
    addr_41fa4a_6:
    eax9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax9) - a3);
    addr_41fa52_9:
    eax11 = -(reinterpret_cast<unsigned char>(eax9) - reinterpret_cast<unsigned char>(a1));
    addr_41fa61_12:
    return eax11;
}

void** fun_411555(void** a1, void** a2, uint32_t a3, void** a4) {
    void** ecx5;
    uint32_t ebx6;
    void** eax7;
    void** eax8;
    void** esi9;
    void** tmp32_10;
    void** eax11;

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
            goto addr_41f9be_6;
        if (reinterpret_cast<unsigned char>(tmp32_10) > reinterpret_cast<unsigned char>(a2)) 
            goto addr_41f9be_6;
        if (reinterpret_cast<unsigned char>(tmp32_10) < reinterpret_cast<unsigned char>(a2)) 
            goto addr_41f9bf_9;
        if (reinterpret_cast<unsigned char>(a3 * reinterpret_cast<unsigned char>(esi9)) <= reinterpret_cast<unsigned char>(a1)) 
            goto addr_41f9bf_9;
    } else {
        eax11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a1) / a3);
        goto addr_41f9c3_12;
    }
    addr_41f9be_6:
    --esi9;
    addr_41f9bf_9:
    eax11 = esi9;
    addr_41f9c3_12:
    return eax11;
}

void** fun_41106e(void** ecx, void** a2, void** a3) {
    void** v4;
    int1_t zf5;
    int1_t below_or_equal6;
    void** eax7;
    int1_t zf8;
    void** ecx9;
    void** eax10;

    v4 = ecx;
    zf5 = g42af90 == 3;
    if (!zf5 || ((below_or_equal6 = reinterpret_cast<unsigned char>(a2) <= reinterpret_cast<unsigned char>(g42aca4), !below_or_equal6) || (eax7 = fun_411528(a2, v4), v4 = eax7, v4 == 0))) {
        if (!a2) {
            a2 = reinterpret_cast<void**>(1);
        }
        zf8 = g42af90 == 1;
        if (!zf8) {
            a2 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a2 + 15) & 0xfffffff0);
        }
        ecx9 = g42af80;
        eax10 = reinterpret_cast<void**>(HeapAlloc(ecx9, 0, a2, v4));
    } else {
        eax10 = v4;
    }
    return eax10;
}

void** fun_4110af(void** a1);

struct s19 {
    void* f0;
    struct s19* f4;
    struct s19* f8;
};

void** g42acb0;

void** fun_411528(void** a1, void** a2) {
    int32_t eax3;
    void** tmp32_4;
    void** v5;
    void* v6;
    int32_t v7;
    uint32_t v8;
    int32_t ecx9;
    uint32_t v10;
    int32_t ecx11;
    void** eax12;
    void** v13;
    void** edx14;
    int1_t cf15;
    int1_t zf16;
    void** ecx17;
    void** edx18;
    int1_t cf19;
    int1_t zf20;
    void** eax21;
    void** eax22;
    void** v23;
    void** v24;
    void** eax25;
    void** v26;
    void* v27;
    uint32_t ecx28;
    uint32_t v29;
    struct s19* v30;
    void* v31;
    void* v32;
    uint32_t ecx33;
    uint32_t ecx34;
    void* ecx35;
    void* ecx36;
    struct s19* v37;
    int32_t eax38;
    uint32_t ecx39;
    uint32_t ecx40;
    int32_t eax41;
    void* ecx42;
    void* ecx43;
    void* eax44;
    int1_t zf45;
    int1_t zf46;

    eax3 = g42ac9c;
    tmp32_4 = g42aca0 + eax3 * 20;
    v5 = tmp32_4;
    v6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a1 + 23) & 0xfffffff0);
    v7 = (reinterpret_cast<int32_t>(v6) >> 4) - 1;
    if (v7 >= 32) {
        v8 = 0;
        ecx9 = v7 - 32;
        v10 = 0xffffffff >> *reinterpret_cast<signed char*>(&ecx9);
    } else {
        ecx11 = v7;
        v8 = 0xffffffff >> *reinterpret_cast<signed char*>(&ecx11);
        v10 = 0xffffffff;
    }
    eax12 = g42aca8;
    v13 = eax12;
    while (reinterpret_cast<unsigned char>(v13) < reinterpret_cast<unsigned char>(v5)) {
        if (v8 & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v13)) | v10 & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v13 + 4))) 
            goto addr_41b004_8;
        v13 = v13 + 20;
    }
    addr_41b011_10:
    if (v13 != v5) 
        goto addr_41b0f8_11;
    edx14 = g42aca0;
    v13 = edx14;
    while (cf15 = reinterpret_cast<unsigned char>(v13) < reinterpret_cast<unsigned char>(g42aca8), cf15) {
        if (v8 & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v13)) | v10 & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v13 + 4))) 
            goto addr_41b046_15;
        v13 = v13 + 20;
    }
    addr_41b053_17:
    zf16 = v13 == g42aca8;
    if (!zf16) 
        goto addr_41b0f8_11;
    while (reinterpret_cast<unsigned char>(v13) < reinterpret_cast<unsigned char>(v5)) {
        if (*reinterpret_cast<void***>(v13 + 8)) 
            goto addr_41b073_20;
        v13 = v13 + 20;
    }
    addr_41b080_22:
    ecx17 = v13;
    if (ecx17 != v5) 
        goto addr_41b0d2_23;
    edx18 = g42aca0;
    v13 = edx18;
    while (cf19 = reinterpret_cast<unsigned char>(v13) < reinterpret_cast<unsigned char>(g42aca8), cf19) {
        ecx17 = v13;
        if (*reinterpret_cast<void***>(ecx17 + 8)) 
            goto addr_41b0a5_27;
        v13 = v13 + 20;
    }
    addr_41b0b2_29:
    zf20 = v13 == g42aca8;
    if (!zf20 || (eax21 = fun_4112cb(ecx17), v13 = eax21, !!v13)) {
        addr_41b0d2_23:
        eax22 = fun_4110af(v13);
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(v13 + 16)) = eax22;
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v13 + 16)) == 0xffffffff)) {
            addr_41b0f8_11:
            g42aca8 = v13;
            v23 = *reinterpret_cast<void***>(v13 + 16);
            v24 = *reinterpret_cast<void***>(v23);
            if (v24 == 0xffffffff || !(v8 & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v23 + reinterpret_cast<unsigned char>(v24) * 4) + 68) | v10 & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v23 + reinterpret_cast<unsigned char>(v24) * 4) + 0xc4))) {
                v24 = reinterpret_cast<void**>(0);
                while (!(v8 & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v23 + reinterpret_cast<unsigned char>(v24) * 4) + 68) | v10 & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v23 + reinterpret_cast<unsigned char>(v24) * 4) + 0xc4))) {
                    ++v24;
                }
            }
        } else {
            eax25 = reinterpret_cast<void**>(0);
            goto addr_41b494_34;
        }
    } else {
        eax25 = reinterpret_cast<void**>(0);
        goto addr_41b494_34;
    }
    v26 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v23 + reinterpret_cast<unsigned char>(v24) * 0x204) + 0x144);
    v27 = reinterpret_cast<void*>(0);
    ecx28 = v8 & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v23 + reinterpret_cast<unsigned char>(v24) * 4) + 68);
    v29 = ecx28;
    if (!ecx28) {
        v27 = reinterpret_cast<void*>(32);
        v29 = v10 & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v23 + reinterpret_cast<unsigned char>(v24) * 4) + 0xc4);
    }
    while (reinterpret_cast<int32_t>(v29) >= reinterpret_cast<int32_t>(0)) {
        v29 = v29 << 1;
        v27 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v27) + 1);
    }
    v30 = *reinterpret_cast<struct s19**>(v26 + reinterpret_cast<uint32_t>(v27) * 2 + 1);
    v31 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v30->f0) - reinterpret_cast<uint32_t>(v6));
    v32 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(v31) >> 4) - 1);
    if (reinterpret_cast<int32_t>(v32) > reinterpret_cast<int32_t>(63)) {
        v32 = reinterpret_cast<void*>(63);
    }
    if (v32 != v27) {
        if (v30->f4 == v30->f8) {
            if (reinterpret_cast<int32_t>(v27) >= reinterpret_cast<int32_t>(32)) {
                ecx33 = reinterpret_cast<uint32_t>(v27) - 32;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v23 + reinterpret_cast<unsigned char>(v24) * 4) + 0xc4) = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx33)) & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v23 + reinterpret_cast<unsigned char>(v24) * 4) + 0xc4);
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v23) + reinterpret_cast<uint32_t>(v27) + 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v23) + reinterpret_cast<uint32_t>(v27) + 4) - 1);
                if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v23) + reinterpret_cast<uint32_t>(v27) + 4)) {
                    ecx34 = reinterpret_cast<uint32_t>(v27) - 32;
                    *reinterpret_cast<void***>(v13 + 4) = reinterpret_cast<void**>(~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx34)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v13 + 4)));
                }
            } else {
                ecx35 = v27;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v23 + reinterpret_cast<unsigned char>(v24) * 4) + 68) = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx35)) & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v23 + reinterpret_cast<unsigned char>(v24) * 4) + 68);
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v23) + reinterpret_cast<uint32_t>(v27) + 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v23) + reinterpret_cast<uint32_t>(v27) + 4) - 1);
                if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v23) + reinterpret_cast<uint32_t>(v27) + 4)) {
                    ecx36 = v27;
                    *reinterpret_cast<void***>(v13) = reinterpret_cast<void**>(~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx36)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v13)));
                }
            }
        }
        v30->f8->f4 = v30->f4;
        v30->f4->f8 = v30->f8;
        if (v31 && (v37 = reinterpret_cast<struct s19*>(v26 + reinterpret_cast<uint32_t>(v32) * 2), v30->f4 = v37->f4, v30->f8 = v37, v37->f4 = v30, v30->f4->f8 = v30, v30->f4 == v30->f8)) {
            if (reinterpret_cast<int32_t>(v32) >= reinterpret_cast<int32_t>(32)) {
                eax38 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v23) + reinterpret_cast<uint32_t>(v32) + 4);
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v23) + reinterpret_cast<uint32_t>(v32) + 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v23) + reinterpret_cast<uint32_t>(v32) + 4) + 1);
                if (!eax38) {
                    ecx39 = reinterpret_cast<uint32_t>(v32) - 32;
                    *reinterpret_cast<void***>(v13 + 4) = reinterpret_cast<void**>(0x80000000 >> *reinterpret_cast<signed char*>(&ecx39) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v13 + 4)));
                }
                ecx40 = reinterpret_cast<uint32_t>(v32) - 32;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v23 + reinterpret_cast<unsigned char>(v24) * 4) + 0xc4) = 0x80000000 >> *reinterpret_cast<signed char*>(&ecx40) | *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v23 + reinterpret_cast<unsigned char>(v24) * 4) + 0xc4);
            } else {
                eax41 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v23) + reinterpret_cast<uint32_t>(v32) + 4);
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v23) + reinterpret_cast<uint32_t>(v32) + 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v23) + reinterpret_cast<uint32_t>(v32) + 4) + 1);
                if (!eax41) {
                    ecx42 = v32;
                    *reinterpret_cast<void***>(v13) = reinterpret_cast<void**>(0x80000000 >> *reinterpret_cast<signed char*>(&ecx42) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v13)));
                }
                ecx43 = v32;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v23 + reinterpret_cast<unsigned char>(v24) * 4) + 68) = 0x80000000 >> *reinterpret_cast<signed char*>(&ecx43) | *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v23 + reinterpret_cast<unsigned char>(v24) * 4) + 68);
            }
        }
    }
    if (v31) {
        v30->f0 = v31;
        *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v30) + reinterpret_cast<uint32_t>(v31) + 0xfffffffc) = v31;
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v30) + reinterpret_cast<uint32_t>(v31)) = reinterpret_cast<uint32_t>(v6) + 1;
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v30) + reinterpret_cast<uint32_t>(v31) + reinterpret_cast<uint32_t>(v6) + 0xfffffffc) = reinterpret_cast<uint32_t>(v6) + 1;
    eax44 = *v26;
    *v26 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(*v26) + 1);
    if (!eax44 && ((zf45 = v13 == g42ac98, zf45) && (zf46 = v24 == g42acb0, zf46))) {
        g42ac98 = reinterpret_cast<void**>(0);
    }
    *reinterpret_cast<void***>(v23) = v24;
    eax25 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v30) + reinterpret_cast<uint32_t>(v31) + 4);
    addr_41b494_34:
    return eax25;
    addr_41b0a5_27:
    goto addr_41b0b2_29;
    addr_41b073_20:
    goto addr_41b080_22;
    addr_41b046_15:
    goto addr_41b053_17;
    addr_41b004_8:
    goto addr_41b011_10;
}

struct s20 {
    signed char[4] pad4;
    struct s20* f4;
    struct s20* f8;
};

struct s21 {
    void* f0;
    struct s21* f4;
    struct s21* f8;
};

struct s22 {
    void* f0;
    struct s22* f4;
    struct s22* f8;
};

int32_t fun_4111e5(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void* v6;
    uint32_t v7;
    void** v8;
    void** v9;
    void** v10;
    void* v11;
    void* v12;
    void* v13;
    void* v14;
    uint32_t ecx15;
    uint32_t ecx16;
    void* ecx17;
    void* ecx18;
    struct s21* v19;
    int32_t eax20;
    uint32_t ecx21;
    uint32_t ecx22;
    int32_t edx23;
    void* ecx24;
    void* ecx25;
    int32_t eax26;
    void* v27;
    uint32_t ecx28;
    uint32_t ecx29;
    void* ecx30;
    void* ecx31;
    void* v32;
    void* v33;
    struct s22* v34;
    int32_t eax35;
    uint32_t ecx36;
    uint32_t ecx37;
    int32_t eax38;
    void* ecx39;
    void* ecx40;

    v4 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a3 + 23) & 0xfffffff0);
    v5 = *reinterpret_cast<void***>(a1 + 16);
    v6 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a2) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)));
    v7 = reinterpret_cast<uint32_t>(v6) >> 15;
    v8 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v5 + v7 * 0x204) + 0x144);
    v9 = a2 - 4;
    v10 = *reinterpret_cast<void***>(v9) - 1;
    v11 = *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v10));
    if (reinterpret_cast<signed char>(v4) <= reinterpret_cast<signed char>(v10)) {
        if (reinterpret_cast<signed char>(v4) < reinterpret_cast<signed char>(v10)) {
            *reinterpret_cast<void***>(v9) = v4 + 1;
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v4) + 0xfffffffc) = v4 + 1;
            v12 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v10) - reinterpret_cast<unsigned char>(v4));
            v13 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(v12) >> 4) - 1);
            if (reinterpret_cast<uint32_t>(v13) > 63) {
                v13 = reinterpret_cast<void*>(63);
            }
            if (!(reinterpret_cast<uint32_t>(v11) & 1)) {
                v14 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(v11) >> 4) - 1);
                if (reinterpret_cast<uint32_t>(v14) > 63) {
                    v14 = reinterpret_cast<void*>(63);
                }
                if (*reinterpret_cast<struct s20**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v10) + 4) == *reinterpret_cast<struct s20**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v10) + 8)) {
                    if (reinterpret_cast<uint32_t>(v14) >= 32) {
                        ecx15 = reinterpret_cast<uint32_t>(v14) - 32;
                        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v5 + v7 * 4) + 0xc4) = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx15)) & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v5 + v7 * 4) + 0xc4);
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v14) + 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v14) + 4) - 1);
                        if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v14) + 4)) {
                            ecx16 = reinterpret_cast<uint32_t>(v14) - 32;
                            *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx16)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)));
                        }
                    } else {
                        ecx17 = v14;
                        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v5 + v7 * 4) + 68) = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx17)) & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v5 + v7 * 4) + 68);
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v14) + 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v14) + 4) - 1);
                        if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v14) + 4)) {
                            ecx18 = v14;
                            *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx18)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)));
                        }
                    }
                }
                (*reinterpret_cast<struct s20**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v10) + 8))->f4 = *reinterpret_cast<struct s20**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v10) + 4);
                (*reinterpret_cast<struct s20**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v10) + 4))->f8 = *reinterpret_cast<struct s20**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v10) + 8);
                v12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v12) + reinterpret_cast<uint32_t>(v11));
                v13 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(v12) >> 4) - 1);
                if (reinterpret_cast<uint32_t>(v13) > 63) {
                    v13 = reinterpret_cast<void*>(63);
                }
            }
            v19 = reinterpret_cast<struct s21*>(v8 + reinterpret_cast<uint32_t>(v13) * 2);
            *reinterpret_cast<struct s21**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v4) + 4) = v19->f4;
            *reinterpret_cast<struct s21**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v4) + 8) = v19;
            v19->f4 = reinterpret_cast<struct s21*>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v4));
            (*reinterpret_cast<struct s21**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v4) + 4))->f8 = reinterpret_cast<struct s21*>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v4));
            if (*reinterpret_cast<struct s21**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v4) + 4) == *reinterpret_cast<struct s21**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v4) + 8)) {
                if (reinterpret_cast<uint32_t>(v13) >= 32) {
                    eax20 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v13) + 4);
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v13) + 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v13) + 4) + 1);
                    if (!eax20) {
                        ecx21 = reinterpret_cast<uint32_t>(v13) - 32;
                        *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(0x80000000 >> *reinterpret_cast<signed char*>(&ecx21) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)));
                    }
                    ecx22 = reinterpret_cast<uint32_t>(v13) - 32;
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v5 + v7 * 4) + 0xc4) = 0x80000000 >> *reinterpret_cast<signed char*>(&ecx22) | *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v5 + v7 * 4) + 0xc4);
                } else {
                    edx23 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v13) + 4);
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v13) + 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v13) + 4) + 1);
                    if (!edx23) {
                        ecx24 = v13;
                        *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0x80000000 >> *reinterpret_cast<signed char*>(&ecx24) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)));
                    }
                    ecx25 = v13;
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v5 + v7 * 4) + 68) = 0x80000000 >> *reinterpret_cast<signed char*>(&ecx25) | *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v5 + v7 * 4) + 68);
                }
            }
            *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v4)) = v12;
            *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v4) + reinterpret_cast<uint32_t>(v12) + 0xfffffffc) = v12;
        }
    } else {
        if (reinterpret_cast<uint32_t>(v11) & 1 || reinterpret_cast<signed char>(v4) > reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(v10) + reinterpret_cast<uint32_t>(v11))) {
            eax26 = 0;
            goto addr_41bf62_29;
        } else {
            v27 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(v11) >> 4) - 1);
            if (reinterpret_cast<uint32_t>(v27) > 63) {
                v27 = reinterpret_cast<void*>(63);
            }
            if (*reinterpret_cast<struct s20**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v10) + 4) == *reinterpret_cast<struct s20**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v10) + 8)) {
                if (reinterpret_cast<uint32_t>(v27) >= 32) {
                    ecx28 = reinterpret_cast<uint32_t>(v27) - 32;
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v5 + v7 * 4) + 0xc4) = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx28)) & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v5 + v7 * 4) + 0xc4);
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v27) + 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v27) + 4) - 1);
                    if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v27) + 4)) {
                        ecx29 = reinterpret_cast<uint32_t>(v27) - 32;
                        *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx29)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)));
                    }
                } else {
                    ecx30 = v27;
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v5 + v7 * 4) + 68) = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx30)) & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v5 + v7 * 4) + 68);
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v27) + 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v27) + 4) - 1);
                    if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v27) + 4)) {
                        ecx31 = v27;
                        *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx31)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)));
                    }
                }
            }
            (*reinterpret_cast<struct s20**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v10) + 8))->f4 = *reinterpret_cast<struct s20**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v10) + 4);
            (*reinterpret_cast<struct s20**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v10) + 4))->f8 = *reinterpret_cast<struct s20**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v10) + 8);
            v32 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v10) + reinterpret_cast<uint32_t>(v11) - reinterpret_cast<unsigned char>(v4));
            if (reinterpret_cast<int32_t>(v32) > reinterpret_cast<int32_t>(0)) {
                v33 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(v32) >> 4) - 1);
                if (reinterpret_cast<uint32_t>(v33) > 63) {
                    v33 = reinterpret_cast<void*>(63);
                }
                v34 = reinterpret_cast<struct s22*>(v8 + reinterpret_cast<uint32_t>(v33) * 2);
                *reinterpret_cast<struct s22**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v4) + 4) = v34->f4;
                *reinterpret_cast<struct s22**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v4) + 8) = v34;
                v34->f4 = reinterpret_cast<struct s22*>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v4));
                (*reinterpret_cast<struct s22**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v4) + 4))->f8 = reinterpret_cast<struct s22*>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v4));
                if (*reinterpret_cast<struct s22**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v4) + 4) == *reinterpret_cast<struct s22**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v4) + 8)) {
                    if (reinterpret_cast<uint32_t>(v33) >= 32) {
                        eax35 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v33) + 4);
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v33) + 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v33) + 4) + 1);
                        if (!eax35) {
                            ecx36 = reinterpret_cast<uint32_t>(v33) - 32;
                            *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(0x80000000 >> *reinterpret_cast<signed char*>(&ecx36) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)));
                        }
                        ecx37 = reinterpret_cast<uint32_t>(v33) - 32;
                        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v5 + v7 * 4) + 0xc4) = 0x80000000 >> *reinterpret_cast<signed char*>(&ecx37) | *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v5 + v7 * 4) + 0xc4);
                    } else {
                        eax38 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v33) + 4);
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v33) + 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint32_t>(v33) + 4) + 1);
                        if (!eax38) {
                            ecx39 = v33;
                            *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0x80000000 >> *reinterpret_cast<signed char*>(&ecx39) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)));
                        }
                        ecx40 = v33;
                        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v5 + v7 * 4) + 68) = 0x80000000 >> *reinterpret_cast<signed char*>(&ecx40) | *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v5 + v7 * 4) + 68);
                    }
                }
                *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v4)) = v32;
                *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v4) + reinterpret_cast<uint32_t>(v32) + 0xfffffffc) = v32;
            }
            *reinterpret_cast<void***>(v9) = v4 + 1;
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v4) + 0xfffffffc) = v4 + 1;
        }
    }
    eax26 = 1;
    addr_41bf62_29:
    return eax26;
}

void** fun_4110a5(void** ecx, void** a2, int32_t a3, void** a4);

void** fun_411127(void** ecx, void** a2) {
    int32_t eax3;
    void** eax4;

    eax3 = g4298f4;
    eax4 = fun_4110a5(a2, a2, eax3, ecx);
    return eax4;
}

void** fun_4113e8(void** ecx, void** a2) {
    int1_t zf3;
    void** eax4;
    void** eax5;
    void** v6;
    void** ebp7;
    void** ecx8;

    if (a2) {
        zf3 = g42af90 == 3;
        if (!zf3) {
            eax4 = g42af80;
            eax5 = reinterpret_cast<void**>(HeapFree(eax4, 0, a2, ecx));
        } else {
            eax5 = fun_4111c7(a2, ecx);
            v6 = eax5;
            if (v6) {
                eax5 = fun_41149c(v6, a2, v6, ebp7, __return_address());
            }
            if (!v6) {
                ecx8 = g42af80;
                eax5 = reinterpret_cast<void**>(HeapFree(ecx8, 0, a2));
            }
        }
    }
    return eax5;
}

struct s23 {
    signed char[4] pad4;
    struct s23* f4;
    struct s23* f8;
};

int32_t VirtualFree = 0x2c708;

void** fun_41149c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void* v7;
    void** v8;
    void** v9;
    void** v10;
    void** eax11;
    void** v12;
    void* v13;
    void** v14;
    void* v15;
    uint32_t ecx16;
    uint32_t ecx17;
    void* ecx18;
    void* ecx19;
    void* v20;
    void** v21;
    void* v22;
    uint32_t ecx23;
    uint32_t ecx24;
    void* ecx25;
    void* ecx26;
    void** v27;
    int32_t eax28;
    uint32_t ecx29;
    uint32_t ecx30;
    int32_t eax31;
    void* ecx32;
    void* ecx33;
    int1_t zf34;
    void** ecx35;
    void** edx36;
    void** v37;
    void** ecx38;
    void** eax39;
    void** ecx40;
    void** edx41;
    void** ecx42;
    void** edx43;
    void** edx44;
    void** ecx45;
    void** ecx46;
    void** eax47;
    void** ecx48;
    void** edx49;
    void** v50;
    void** ecx51;
    void** v52;
    void** eax53;
    int32_t ecx54;
    void*** tmp32_55;
    void** edx56;
    void** eax57;
    void** ecx58;
    int32_t edx59;
    int1_t below_or_equal60;
    void** edx61;

    v6 = *reinterpret_cast<void***>(a1 + 16);
    v7 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a2) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)));
    v8 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v7) >> 15);
    v9 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v6 + reinterpret_cast<unsigned char>(v8) * 0x204) + 0x144);
    v10 = a2 - 4;
    eax11 = v10;
    v12 = *reinterpret_cast<void***>(eax11) - 1;
    if (!(reinterpret_cast<unsigned char>(v12) & 1)) {
        v13 = *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v10) + reinterpret_cast<unsigned char>(v12));
        v14 = *reinterpret_cast<void***>(v10 + 0xfffffffc);
        if (!(reinterpret_cast<uint32_t>(v13) & 1)) {
            v15 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(v13) >> 4) - 1);
            if (reinterpret_cast<uint32_t>(v15) > 63) {
                v15 = reinterpret_cast<void*>(63);
            }
            if (*reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(v10) + reinterpret_cast<unsigned char>(v12) + 4) == *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(v10) + reinterpret_cast<unsigned char>(v12) + 8)) {
                if (reinterpret_cast<uint32_t>(v15) >= 32) {
                    ecx16 = reinterpret_cast<uint32_t>(v15) - 32;
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v6 + reinterpret_cast<unsigned char>(v8) * 4) + 0xc4) = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx16)) & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v6 + reinterpret_cast<unsigned char>(v8) * 4) + 0xc4);
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<uint32_t>(v15) + 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<uint32_t>(v15) + 4) - 1);
                    if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<uint32_t>(v15) + 4)) {
                        ecx17 = reinterpret_cast<uint32_t>(v15) - 32;
                        *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx17)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)));
                    }
                } else {
                    ecx18 = v15;
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v6 + reinterpret_cast<unsigned char>(v8) * 4) + 68) = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx18)) & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v6 + reinterpret_cast<unsigned char>(v8) * 4) + 68);
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<uint32_t>(v15) + 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<uint32_t>(v15) + 4) - 1);
                    if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<uint32_t>(v15) + 4)) {
                        ecx19 = v15;
                        *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx19)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)));
                    }
                }
            }
            (*reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(v10) + reinterpret_cast<unsigned char>(v12) + 8))->f4 = *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(v10) + reinterpret_cast<unsigned char>(v12) + 4);
            (*reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(v10) + reinterpret_cast<unsigned char>(v12) + 4))->f8 = *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(v10) + reinterpret_cast<unsigned char>(v12) + 8);
            v12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v12) + reinterpret_cast<uint32_t>(v13));
        }
        v20 = reinterpret_cast<void*>((reinterpret_cast<signed char>(v12) >> 4) - 1);
        if (reinterpret_cast<uint32_t>(v20) > 63) {
            v20 = reinterpret_cast<void*>(63);
        }
        if (!(reinterpret_cast<unsigned char>(v14) & 1)) {
            v21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v10) - reinterpret_cast<unsigned char>(v14));
            v22 = reinterpret_cast<void*>((reinterpret_cast<signed char>(v14) >> 4) - 1);
            if (reinterpret_cast<uint32_t>(v22) > 63) {
                v22 = reinterpret_cast<void*>(63);
            }
            v12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v12) + reinterpret_cast<unsigned char>(v14));
            v20 = reinterpret_cast<void*>((reinterpret_cast<signed char>(v12) >> 4) - 1);
            if (reinterpret_cast<uint32_t>(v20) > 63) {
                v20 = reinterpret_cast<void*>(63);
            }
            if (v22 != v20) {
                if (*reinterpret_cast<void***>(v21 + 4) == *reinterpret_cast<void***>(v21 + 8)) {
                    if (reinterpret_cast<uint32_t>(v22) >= 32) {
                        ecx23 = reinterpret_cast<uint32_t>(v22) - 32;
                        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v6 + reinterpret_cast<unsigned char>(v8) * 4) + 0xc4) = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx23)) & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v6 + reinterpret_cast<unsigned char>(v8) * 4) + 0xc4);
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<uint32_t>(v22) + 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<uint32_t>(v22) + 4) - 1);
                        if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<uint32_t>(v22) + 4)) {
                            ecx24 = reinterpret_cast<uint32_t>(v22) - 32;
                            *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx24)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)));
                        }
                    } else {
                        ecx25 = v22;
                        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v6 + reinterpret_cast<unsigned char>(v8) * 4) + 68) = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx25)) & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v6 + reinterpret_cast<unsigned char>(v8) * 4) + 68);
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<uint32_t>(v22) + 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<uint32_t>(v22) + 4) - 1);
                        if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<uint32_t>(v22) + 4)) {
                            ecx26 = v22;
                            *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx26)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)));
                        }
                    }
                }
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(v21 + 8) + 4) = *reinterpret_cast<void***>(v21 + 4);
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(v21 + 4) + 8) = *reinterpret_cast<void***>(v21 + 8);
            }
            v10 = v21;
        }
        if ((reinterpret_cast<unsigned char>(v14) & 1 || v22 != v20) && (v27 = v9 + reinterpret_cast<uint32_t>(v20) * 8, *reinterpret_cast<void***>(v10 + 4) = *reinterpret_cast<void***>(v27 + 4), *reinterpret_cast<void***>(v10 + 8) = v27, *reinterpret_cast<void***>(v27 + 4) = v10, *reinterpret_cast<void***>(*reinterpret_cast<void***>(v10 + 4) + 8) = v10, *reinterpret_cast<void***>(v10 + 4) == *reinterpret_cast<void***>(v10 + 8))) {
            if (reinterpret_cast<uint32_t>(v20) >= 32) {
                eax28 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<uint32_t>(v20) + 4);
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<uint32_t>(v20) + 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<uint32_t>(v20) + 4) + 1);
                if (!eax28) {
                    ecx29 = reinterpret_cast<uint32_t>(v20) - 32;
                    *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(0x80000000 >> *reinterpret_cast<signed char*>(&ecx29) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)));
                }
                ecx30 = reinterpret_cast<uint32_t>(v20) - 32;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v6 + reinterpret_cast<unsigned char>(v8) * 4) + 0xc4) = 0x80000000 >> *reinterpret_cast<signed char*>(&ecx30) | *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v6 + reinterpret_cast<unsigned char>(v8) * 4) + 0xc4);
            } else {
                eax31 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<uint32_t>(v20) + 4);
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<uint32_t>(v20) + 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<uint32_t>(v20) + 4) + 1);
                if (!eax31) {
                    ecx32 = v20;
                    *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0x80000000 >> *reinterpret_cast<signed char*>(&ecx32) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)));
                }
                ecx33 = v20;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v6 + reinterpret_cast<unsigned char>(v8) * 4) + 68) = 0x80000000 >> *reinterpret_cast<signed char*>(&ecx33) | *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v6 + reinterpret_cast<unsigned char>(v8) * 4) + 68);
            }
        }
        *reinterpret_cast<void***>(v10) = v12;
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v10) + reinterpret_cast<unsigned char>(v12) + 0xfffffffc) = v12;
        *reinterpret_cast<void***>(v9) = *reinterpret_cast<void***>(v9) - 1;
        eax11 = v9;
        if (!*reinterpret_cast<void***>(eax11)) {
            zf34 = g42ac98 == 0;
            if (!zf34) {
                ecx35 = g42acb0;
                edx36 = g42ac98;
                v37 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(ecx35) << 15) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx36 + 12)));
                VirtualFree(v37, 0x8000, 0x4000);
                ecx38 = g42acb0;
                eax39 = g42ac98;
                ecx40 = g42ac98;
                *reinterpret_cast<void***>(ecx40 + 8) = reinterpret_cast<void**>(0x80000000 >> *reinterpret_cast<signed char*>(&ecx38) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax39 + 8)));
                edx41 = g42ac98;
                ecx42 = g42acb0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(edx41 + 16) + reinterpret_cast<unsigned char>(ecx42) * 4) + 0xc4) = 0;
                edx43 = g42ac98;
                edx44 = g42ac98;
                *reinterpret_cast<signed char*>(*reinterpret_cast<void***>(edx44 + 16) + 67) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(*reinterpret_cast<void***>(edx43 + 16) + 67) - 1);
                ecx45 = g42ac98;
                if (!*reinterpret_cast<signed char*>(*reinterpret_cast<void***>(ecx45 + 16) + 67)) {
                    ecx46 = g42ac98;
                    eax47 = g42ac98;
                    *reinterpret_cast<void***>(eax47 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx46 + 4)) & 0xfffffffe);
                }
                ecx48 = g42ac98;
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx48 + 8) == 0xffffffff)) {
                    edx49 = g42ac98;
                    v50 = *reinterpret_cast<void***>(edx49 + 12);
                    VirtualFree(v50, 0, 0x8000, v37, 0x8000, 0x4000);
                    ecx51 = g42ac98;
                    v52 = *reinterpret_cast<void***>(ecx51 + 16);
                    eax53 = g42af80;
                    HeapFree(eax53, 0, v52, v50, 0, 0x8000, v37, 0x8000, 0x4000);
                    ecx54 = g42ac9c;
                    tmp32_55 = reinterpret_cast<void***>(g42aca0 + ecx54 * 20);
                    edx56 = g42ac98;
                    eax57 = g42ac98;
                    ecx58 = g42ac98;
                    fun_411343(ecx58, eax57 + 20, reinterpret_cast<uint32_t>(tmp32_55) - reinterpret_cast<unsigned char>(edx56 + 20), eax53, 0, v52, v50, 0, 0x8000, v37, 0x8000, 0x4000);
                    edx59 = g42ac9c;
                    g42ac9c = edx59 - 1;
                    below_or_equal60 = reinterpret_cast<unsigned char>(a1) <= reinterpret_cast<unsigned char>(g42ac98);
                    if (!below_or_equal60) {
                        a1 = a1 - 20;
                    }
                    edx61 = g42aca0;
                    g42aca8 = edx61;
                }
            }
            eax11 = a1;
            g42ac98 = eax11;
            g42acb0 = v8;
        }
    }
    return eax11;
}

uint32_t fun_4111d6() {
    void* ebp1;
    int32_t eax2;
    int32_t v3;
    void** ecx4;
    void** v5;
    uint32_t eax6;
    void** edx7;
    void** v8;
    int32_t v9;
    int1_t less10;
    void** v11;
    void** v12;
    int32_t eax13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    int32_t v19;
    uint32_t v20;
    uint32_t v21;
    void** v22;
    int32_t v23;
    int32_t eax24;
    void** v25;
    int32_t v26;
    void*** v27;
    void*** v28;
    void** v29;
    void** v30;
    int32_t v31;
    void** v32;
    int32_t v33;
    int32_t v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    int32_t v39;
    int32_t ecx40;
    int32_t ecx41;
    int32_t ecx42;
    int32_t ecx43;
    uint32_t eax44;

    ebp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax2 = g42ac9c;
    v3 = eax2 * 20;
    ecx4 = g42aca0;
    v5 = ecx4;
    eax6 = reinterpret_cast<uint32_t>(IsBadWritePtr(v5, v3));
    if (!eax6) {
        edx7 = g42aca0;
        v8 = edx7;
        v9 = 0;
        while (less10 = v9 < g42ac9c, less10) {
            v11 = *reinterpret_cast<void***>(v8 + 16);
            v12 = v11;
            eax13 = reinterpret_cast<int32_t>(IsBadWritePtr(v12, 0x41c4, v5, v3));
            if (eax13) 
                goto addr_41c2dd_6;
            v14 = *reinterpret_cast<void***>(v8 + 12);
            v15 = v11 + 0x144;
            v16 = *reinterpret_cast<void***>(v8 + 8);
            v17 = reinterpret_cast<void**>(0);
            v18 = reinterpret_cast<void**>(0);
            v19 = 0;
            while (v19 < 32) {
                v20 = 0;
                v21 = 0;
                v22 = reinterpret_cast<void**>(0);
                v23 = 0;
                while (v23 < 64) {
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp1) + v23 * 4 - 0x158) = 0;
                    ++v23;
                }
                if (reinterpret_cast<signed char>(v16) >= reinterpret_cast<signed char>(0)) {
                    eax24 = reinterpret_cast<int32_t>(IsBadWritePtr(v14, 0x8000, v12, 0x41c4, v5, v3));
                    if (eax24) 
                        goto addr_41c39e_15;
                    v25 = v14;
                    v26 = 0;
                    while (v26 < 8) {
                        v27 = reinterpret_cast<void***>(v25 + 12);
                        v28 = v27 + 0xff0;
                        if (*reinterpret_cast<int32_t*>(v27 - 4) != -1) 
                            goto addr_41c3f0_19;
                        if (*v28 != 0xffffffff) 
                            goto addr_41c3f0_19;
                        do {
                            v29 = *v27;
                            v30 = v29;
                            if (!(reinterpret_cast<unsigned char>(v30) & 1)) {
                                v31 = (reinterpret_cast<signed char>(v29) >> 4) - 1;
                                if (v31 > 63) {
                                    v31 = 63;
                                }
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp1) + v31 * 4 - 0x158) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp1) + v31 * 4 - 0x158) + 1;
                            } else {
                                --v29;
                                if (reinterpret_cast<signed char>(v29) > reinterpret_cast<signed char>(0x400)) 
                                    goto addr_41c428_26;
                                ++v22;
                            }
                            if (reinterpret_cast<signed char>(v29) < reinterpret_cast<signed char>(16)) 
                                goto addr_41c493_29;
                            if (reinterpret_cast<unsigned char>(v29) & 15) 
                                goto addr_41c493_29;
                            if (reinterpret_cast<signed char>(v29) > reinterpret_cast<signed char>(0xff0)) 
                                goto addr_41c493_29;
                            if (*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(v27) + reinterpret_cast<unsigned char>(v29) - 4) != v30) 
                                goto addr_41c4ae_33;
                            v27 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(v27) + reinterpret_cast<unsigned char>(v29));
                        } while (reinterpret_cast<uint32_t>(v27) < reinterpret_cast<uint32_t>(v28));
                        if (v27 != v28) 
                            goto addr_41c4d5_36;
                        v25 = v25 + 0x1000;
                        ++v26;
                    }
                    if (*reinterpret_cast<void***>(v15) != v22) 
                        goto addr_41c4f9_40;
                    v32 = v15;
                    v33 = 0;
                    while (v33 < 64) {
                        v34 = 0;
                        v35 = v32;
                        while ((v36 = *reinterpret_cast<void***>(v35 + 4), v36 != v32) && v34 != *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp1) + v33 * 4 - 0x158)) {
                            if (reinterpret_cast<unsigned char>(v36) < reinterpret_cast<unsigned char>(v14)) 
                                goto addr_41c57e_46;
                            if (reinterpret_cast<unsigned char>(v36) >= reinterpret_cast<unsigned char>(v14 + 0x8000)) 
                                goto addr_41c57e_46;
                            v37 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(v36) & 0xfffff000) + 12);
                            v38 = v37 + 0xff0;
                            while (v37 != v38) {
                                if (v37 == v36) 
                                    goto addr_41c5b8_51;
                                v37 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v37)) & 0xfffffffe) + reinterpret_cast<unsigned char>(v37));
                            }
                            addr_41c5ca_53:
                            if (v37 == v38) 
                                goto addr_41c5d2_54;
                            v39 = (reinterpret_cast<signed char>(*reinterpret_cast<void***>(v36)) >> 4) - 1;
                            if (v39 > 63) {
                                v39 = 63;
                            }
                            if (v39 != v33) 
                                goto addr_41c60e_58;
                            if (*reinterpret_cast<void***>(v36 + 8) != v35) 
                                goto addr_41c623_60;
                            v35 = v36;
                            ++v34;
                            continue;
                            addr_41c5b8_51:
                            goto addr_41c5ca_53;
                        }
                        if (v34) {
                            if (v33 >= 32) {
                                ecx40 = v33 - 32;
                                v21 = 0x80000000 >> *reinterpret_cast<signed char*>(&ecx40) | v21;
                                ecx41 = v33 - 32;
                                v18 = reinterpret_cast<void**>(0x80000000 >> *reinterpret_cast<signed char*>(&ecx41) | reinterpret_cast<unsigned char>(v18));
                            } else {
                                ecx42 = v33;
                                v20 = 0x80000000 >> *reinterpret_cast<signed char*>(&ecx42) | v20;
                                ecx43 = v33;
                                v17 = reinterpret_cast<void**>(0x80000000 >> *reinterpret_cast<signed char*>(&ecx43) | reinterpret_cast<unsigned char>(v17));
                            }
                        }
                        if (*reinterpret_cast<void***>(v35 + 4) != v32) 
                            goto addr_41c6c1_67;
                        if (v34 != *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp1) + v33 * 4 - 0x158)) 
                            goto addr_41c6c1_67;
                        if (*reinterpret_cast<void***>(v32 + 8) != v35) 
                            goto addr_41c6d6_70;
                        v32 = v32 + 8;
                        ++v33;
                    }
                }
                if (v20 != *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v11 + v19 * 4) + 68)) 
                    goto addr_41c70f_74;
                if (v21 != *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(v11 + v19 * 4) + 0xc4)) 
                    goto addr_41c70f_74;
                v14 = v14 + 0x8000;
                v15 = v15 + 0x204;
                v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) << 1);
                ++v19;
            }
            if (v17 != *reinterpret_cast<void***>(v8)) 
                goto addr_41c755_79;
            if (v18 != *reinterpret_cast<void***>(v8 + 4)) 
                goto addr_41c755_79;
            v8 = v8 + 20;
            ++v9;
        }
    } else {
        eax44 = 0xffffffff;
        goto addr_41c76c_84;
    }
    eax44 = 0;
    addr_41c76c_84:
    return eax44;
    addr_41c2dd_6:
    eax44 = 0xfffffffe;
    goto addr_41c76c_84;
    addr_41c70f_74:
    eax44 = 0xfffffff0;
    goto addr_41c76c_84;
    addr_41c39e_15:
    eax44 = 0xfffffffc;
    goto addr_41c76c_84;
    addr_41c3f0_19:
    eax44 = 0xfffffffb;
    goto addr_41c76c_84;
    addr_41c493_29:
    eax44 = 0xfffffff9;
    goto addr_41c76c_84;
    addr_41c4ae_33:
    eax44 = 0xfffffff8;
    goto addr_41c76c_84;
    addr_41c428_26:
    eax44 = 0xfffffffa;
    goto addr_41c76c_84;
    addr_41c4d5_36:
    eax44 = 0xfffffff8;
    goto addr_41c76c_84;
    addr_41c4f9_40:
    eax44 = 0xfffffff7;
    goto addr_41c76c_84;
    addr_41c57e_46:
    eax44 = 0xfffffff6;
    goto addr_41c76c_84;
    addr_41c5d2_54:
    eax44 = 0xfffffff5;
    goto addr_41c76c_84;
    addr_41c60e_58:
    eax44 = 0xfffffff4;
    goto addr_41c76c_84;
    addr_41c623_60:
    eax44 = 0xfffffff3;
    goto addr_41c76c_84;
    addr_41c6c1_67:
    eax44 = 0xfffffff2;
    goto addr_41c76c_84;
    addr_41c6d6_70:
    eax44 = 0xfffffff1;
    goto addr_41c76c_84;
    addr_41c755_79:
    eax44 = 0xffffffef;
    goto addr_41c76c_84;
}

void** fun_41edd0(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** edx5;

    v3 = a2;
    v4 = a1;
    while ((edx5 = v3, --v3, !!edx5) && *reinterpret_cast<void***>(v4)) {
        ++v4;
    }
    return reinterpret_cast<unsigned char>(a2) - reinterpret_cast<unsigned char>(v3) - 1;
}

int32_t GetLocaleInfoA = 0x2c948;

uint32_t fun_41157d(void** a1, void** a2, void** a3, void** a4, void** a5);

void** fun_411578(void** a1) {
    void* ebp2;
    void** eax3;
    void** v4;
    int32_t eax5;
    void** eax6;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax3 = g428eb0;
    v4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xfffffff0);
    eax5 = reinterpret_cast<int32_t>(GetLocaleInfoA(a1, 0x1004, v4, 6));
    if (eax5) {
        fun_41157d(reinterpret_cast<int32_t>(ebp2) + 0xfffffff0, a1, 0x1004, v4, 6);
    }
    eax6 = fun_411087(eax3, a1, 0x1004, v4, 6);
    return eax6;
}

int32_t MultiByteToWideChar = 0x2c85c;

void** fun_411564(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

void** fun_411253(void** a1, void** a2, void** a3, void*** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18) {
    void* esp19;
    struct s3* eax20;
    struct s3* esp21;
    void** eax22;
    void** esp23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** edi30;
    void** esi31;
    void** ebx32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** ecx41;
    void** v42;
    int32_t eax43;
    void* esp44;
    int32_t v45;
    int32_t eax46;
    int32_t v47;
    void** eax48;
    void** eax49;
    void** eax50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** esp59;
    void** v60;
    int32_t eax61;
    void** eax62;
    void** eax63;
    void** v64;
    void** v65;
    void** eax66;
    int32_t eax67;
    void** v68;
    void** v69;
    void** eax70;

    esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax20 = g0;
    esp21 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(esp19) - 4 - 4 - 4 - 4);
    g0 = esp21;
    eax22 = g428eb0;
    esp23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp21) - 60 - 4 - 4 - 4);
    v24 = esp23;
    v25 = reinterpret_cast<void**>(0);
    v26 = reinterpret_cast<void**>(0);
    v27 = *a4;
    v28 = reinterpret_cast<void**>(0);
    if (a1 == a2) {
        addr_421569_3:
        if (v26) {
            fun_41141a(v29, v29, 2, edi30, esi31, ebx32, v33, v34, v35, v36, v37, v38, eax22, v29, v26, v39, v28, v25, v27, v24);
        }
    } else {
        v40 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp19) + 0xffffffb8);
        ecx41 = a1;
        v42 = ecx41;
        eax43 = reinterpret_cast<int32_t>(GetCPInfo(v42, v40));
        esp44 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp23 - 4) - 4 - 4 + 4);
        if (eax43 && (v45 == 1 && ((eax46 = reinterpret_cast<int32_t>(GetCPInfo(a2, reinterpret_cast<int32_t>(esp19) - 72, v42, v40)), esp44 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp44) - 4 - 4 - 4 + 4), !!eax46) && v47 == 1))) {
            v28 = reinterpret_cast<void**>(1);
        }
        if (v28) {
            if (v27 == 0xffffffff) {
                eax48 = fun_411235(a3, v42, v40, edi30);
                esp44 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp44) - 4 - 4 + 4 + 4);
                v39 = eax48 + 1;
            } else {
                ecx41 = v27;
                v39 = ecx41;
            }
        }
        if (v28) 
            goto addr_4213e2_12;
        ecx41 = a3;
        eax49 = reinterpret_cast<void**>(MultiByteToWideChar(a1, 1, ecx41, v27, 0, 0, v42, v40));
        esp44 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp44) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
        v39 = eax49;
        if (v39) 
            goto addr_4213e2_12; else 
            goto addr_4213db_14;
    }
    addr_421580_16:
    g0 = eax20;
    eax50 = fun_411087(eax22, edi30, esi31, ebx32, v33);
    return eax50;
    addr_4213e2_12:
    fun_414c20(ecx41, v42, v40, edi30, esi31, ebx32, v51, v52, v53, v54, v55, v56, eax22, v57, 0, v39, v28, 0, v27, v24, v58);
    esp59 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp44) - 4 + 4);
    v33 = esp59;
    v24 = esp59;
    v29 = v33;
    fun_411195(v29, 0, reinterpret_cast<unsigned char>(v39) << 1, v42, v40, edi30, esi31, ebx32, v33);
    if (!v29) 
        goto addr_421444_18;
    addr_421474_19:
    v60 = v39;
    eax61 = reinterpret_cast<int32_t>(MultiByteToWideChar(a1, 1, a3, v27, v29, v60, v42, v40));
    if (eax61) {
        if (!a5) {
            if ((v28 || (eax62 = reinterpret_cast<void**>(WideCharToMultiByte(a2, 0, v29, v39, 0, 0, 0, 0, a1, 1, a3, v27, v29, v60, v42, v40)), v39 = eax62, !!v39)) && (eax63 = fun_411564(1, v39, 2, 0x427484, 0xa1, a1, 1, a3, v27, v29, v60, v42, v40), v25 = eax63, !!v25)) {
                v64 = v39;
                v65 = v39;
                eax66 = reinterpret_cast<void**>(WideCharToMultiByte(a2, 0, v29, v65, v25, v64, 0, 0, a1, 1, a3, v27, v29, v60, v42, v40));
                v39 = eax66;
                if (v39) {
                    if (v27 != 0xffffffff) {
                        *a4 = v39;
                        goto addr_421569_3;
                    }
                } else {
                    fun_41141a(v25, v25, 2, a2, 0, v29, v65, v25, v64, 0, 0, a1, 1, a3, v27, v29, v60, v42, v40, edi30);
                    v25 = reinterpret_cast<void**>(0);
                    goto addr_421569_3;
                }
            }
        } else {
            eax67 = reinterpret_cast<int32_t>(WideCharToMultiByte(a2, 0, v29, v39, a5, a6, 0, 0, a1, 1, a3, v27, v29, v60, v42, v40));
            if (eax67) {
                v25 = a5;
            }
            goto addr_421569_3;
        }
    }
    addr_421444_18:
    eax70 = fun_411564(2, v39, 2, 0x427484, 0x7e, v42, v40, edi30, esi31, ebx32, v33, v68, v69);
    v29 = eax70;
    if (v29) {
        v26 = reinterpret_cast<void**>(1);
        goto addr_421474_19;
    } else {
        goto addr_421580_16;
    }
    addr_4213db_14:
    goto addr_421580_16;
}

void** fun_411564(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** ebp18;
    void** eax19;
    void** v20;
    void** v21;
    void** v22;

    v14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a2) * reinterpret_cast<unsigned char>(a1));
    eax19 = fun_411064(v14, v14, a3, a4, a5, v15, v16, v17, ebp18, __return_address(), a1, v14, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    v20 = eax19;
    if (v20) {
        v21 = v20;
        v22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v21) + reinterpret_cast<unsigned char>(v14));
        while (reinterpret_cast<unsigned char>(v21) < reinterpret_cast<unsigned char>(v22)) {
            *reinterpret_cast<void***>(v21) = reinterpret_cast<void**>(0);
            ++v21;
        }
    }
    return v20;
}

void** g42af94;

uint32_t fun_4114ba(void** a1) {
    int1_t cf2;
    uint32_t eax3;

    cf2 = reinterpret_cast<unsigned char>(a1) < reinterpret_cast<unsigned char>(g42af94);
    if (cf2) {
        eax3 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(a1) >> 5) * 4 + 0x42afe0)) + (reinterpret_cast<unsigned char>(a1) & 31) * 8 + 4))) & 64;
    } else {
        eax3 = 0;
    }
    return eax3;
}

void** g429930 = reinterpret_cast<void**>(0);

void fun_411415(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16) {
    void** ebp17;
    void** eax18;
    void** ecx19;
    void** ecx20;
    void** eax21;

    if (!a2 && (eax18 = fun_41119f(ecx, 2, 0x4274a8, 46, 0, 0x4273d0, ecx, ebp17, __return_address()), reinterpret_cast<int1_t>(eax18 == 1))) {
    }
    ecx19 = g429930;
    ecx20 = ecx19 + 1;
    g429930 = ecx20;
    eax21 = fun_411064(ecx20, 0x1000, 2, 0x4274a8, 58, a2, ebp17, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
    *reinterpret_cast<void***>(a2 + 8) = eax21;
    if (!*reinterpret_cast<void***>(a2 + 8)) {
        *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) | 4);
        *reinterpret_cast<void***>(a2 + 8) = a2 + 20;
        *reinterpret_cast<void***>(a2 + 24) = reinterpret_cast<void**>(2);
    } else {
        *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) | 8);
        *reinterpret_cast<void***>(a2 + 24) = reinterpret_cast<void**>(0x1000);
    }
    *reinterpret_cast<void***>(a2) = *reinterpret_cast<void***>(a2 + 8);
    *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(0);
    return;
}

void** g429630 = reinterpret_cast<void**>(0);

uint32_t fun_4112fd(void** a1, void** a2, int32_t a3, void** a4);

void** fun_411113(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6);

void** fun_411154(void** a1, void** a2, void** a3) {
    void* ebp4;
    void** eax5;
    void** v6;
    int1_t cf7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** eax13;
    void* v14;
    void** ecx15;
    int32_t v16;
    void** eax17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void* v22;
    void* v23;
    void* v24;
    void** v25;
    int32_t eax26;
    void* v27;
    void** v28;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax5 = g428eb0;
    v6 = eax5;
    cf7 = reinterpret_cast<unsigned char>(a1) < reinterpret_cast<unsigned char>(g42af94);
    if (!cf7 || !(reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>((reinterpret_cast<signed char>(a1) >> 5) * 4 + 0x42afe0) + (reinterpret_cast<unsigned char>(a1) & 31) * 8) + 4))) & 1)) {
        g42962c = 9;
        g429630 = reinterpret_cast<void**>(0);
    } else {
        v8 = reinterpret_cast<void**>(0);
        v9 = reinterpret_cast<void**>(0);
        if (a3) {
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(a1) >> 5) * 4 + 0x42afe0)) + (reinterpret_cast<unsigned char>(a1) & 31) * 8 + 4))) & 32) {
                fun_4112fd(a1, 0, 0, 2);
            }
            if (!(reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(a1) >> 5) * 4 + 0x42afe0)) + (reinterpret_cast<unsigned char>(a1) & 31) * 8 + 4))) & 0x80)) 
                goto addr_421996_8; else 
                goto addr_42184b_9;
        }
    }
    addr_421a88_11:
    eax13 = fun_411087(v6, v10, v9, v11, v12);
    return eax13;
    addr_421996_8:
    v14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp4) - 0x420);
    ecx15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a1) & 31);
    v16 = (*reinterpret_cast<int32_t**>((reinterpret_cast<signed char>(a1) >> 5) * 4 + 0x42afe0))[reinterpret_cast<unsigned char>(ecx15) * 2];
    eax17 = reinterpret_cast<void**>(WriteFile(v16, a2, a3, v14, 0));
    if (!eax17) {
        eax17 = reinterpret_cast<void**>(GetLastError(v16, a2, a3, v14, 0));
        v18 = eax17;
    } else {
        v18 = reinterpret_cast<void**>(0);
        ecx15 = v19;
        v8 = ecx15;
    }
    addr_4219ec_14:
    if (v8) {
        goto addr_421a88_11;
    } else {
        if (!v18) {
            if (!(reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(a1) >> 5) * 4 + 0x42afe0)) + (reinterpret_cast<unsigned char>(a1) & 31) * 8 + 4))) & 64) || static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(a2))) != 26) {
                g42962c = 28;
                g429630 = reinterpret_cast<void**>(0);
                goto addr_421a88_11;
            } else {
                goto addr_421a88_11;
            }
        } else {
            if (!reinterpret_cast<int1_t>(v18 == 5)) {
                fun_411113(ecx15, v18, v10, v9, v11, v20);
            } else {
                g42962c = 9;
                g429630 = v18;
            }
            goto addr_421a88_11;
        }
    }
    addr_42184b_9:
    v21 = a2;
    v18 = reinterpret_cast<void**>(0);
    while (ecx15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v21) - reinterpret_cast<unsigned char>(a2)), reinterpret_cast<unsigned char>(ecx15) < reinterpret_cast<unsigned char>(a3)) {
        v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xfffffbf0);
        while (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(v11) - (reinterpret_cast<int32_t>(ebp4) + 0xfffffbf0)) < reinterpret_cast<int32_t>(0x400) && reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v21) - reinterpret_cast<unsigned char>(a2)) < reinterpret_cast<unsigned char>(a3)) {
            (&v10)[3] = *reinterpret_cast<void***>(v21);
            ++v21;
            if (static_cast<int32_t>(reinterpret_cast<signed char>((&v10)[3])) == 10) {
                ++v9;
                ++v11;
            }
            ++v11;
        }
        v22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp4) - 0x420);
        v23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v11) - (reinterpret_cast<int32_t>(ebp4) + 0xfffffbf0));
        v24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp4) - 0x410);
        ecx15 = *reinterpret_cast<void***>((reinterpret_cast<signed char>(a1) >> 5) * 4 + 0x42afe0);
        v25 = *reinterpret_cast<void***>(ecx15 + (reinterpret_cast<unsigned char>(a1) & 31) * 8);
        eax26 = reinterpret_cast<int32_t>(WriteFile(v25, v24, v23, v22, 0));
        if (!eax26) 
            goto addr_421981_31;
        v8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v8) + reinterpret_cast<uint32_t>(v27));
        ecx15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v11) - (reinterpret_cast<int32_t>(ebp4) + 0xfffffbf0));
        if (reinterpret_cast<signed char>(v28) < reinterpret_cast<signed char>(ecx15)) 
            goto addr_42197d_33;
    }
    addr_421994_36:
    goto addr_4219ec_14;
    addr_421981_31:
    eax17 = reinterpret_cast<void**>(GetLastError(v25, v24, v23, v22, 0));
    v18 = eax17;
    goto addr_421994_36;
    addr_42197d_33:
    goto addr_421994_36;
}

void** fun_411375(void** a1, void** a2, void** a3);

int32_t SetFilePointer = 0x2c95a;

uint32_t fun_41116d(void** a1, void** a2, void** a3) {
    int1_t cf4;
    uint32_t eax5;
    void** v6;
    void** v7;
    void** eax8;
    uint32_t eax9;
    void** v10;
    void** eax11;
    uint32_t ecx12;

    cf4 = reinterpret_cast<unsigned char>(a1) < reinterpret_cast<unsigned char>(g42af94);
    if (!cf4 || !(reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>((reinterpret_cast<signed char>(a1) >> 5) * 4 + 0x42afe0) + (reinterpret_cast<unsigned char>(a1) & 31) * 8) + 4))) & 1)) {
        g42962c = 9;
        g429630 = reinterpret_cast<void**>(0);
        eax5 = 0xffffffff;
    } else {
        eax8 = fun_411375(a1, v6, v7);
        if (!reinterpret_cast<int1_t>(eax8 == 0xffffffff)) {
            eax9 = reinterpret_cast<uint32_t>(SetFilePointer(eax8, a2, 0, a3));
            if (eax9 != 0xffffffff) {
                v10 = reinterpret_cast<void**>(0);
            } else {
                eax11 = reinterpret_cast<void**>(GetLastError(eax8, a2, 0, a3));
                v10 = eax11;
            }
            if (!v10) {
                ecx12 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(a1) >> 5) * 4 + 0x42afe0)) + (reinterpret_cast<unsigned char>(a1) & 31) * 8 + 4))) & 0xfffffffd;
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(a1) >> 5) * 4 + 0x42afe0)) + (reinterpret_cast<unsigned char>(a1) & 31) * 8 + 4) = *reinterpret_cast<signed char*>(&ecx12);
                eax5 = eax9;
            } else {
                fun_411113(a2, v10, eax8, a2, 0, a3);
                eax5 = 0xffffffff;
            }
        } else {
            g42962c = 9;
            eax5 = 0xffffffff;
        }
    }
    return eax5;
}

void fun_420ec0(void** ecx, void** a2, void** a3, void** a4, int24_t a5) {
    void** ecx6;
    void** ebp7;
    uint32_t eax8;
    uint32_t v9;

    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) & 64) || *reinterpret_cast<void***>(a3 + 8)) {
        ecx6 = *reinterpret_cast<void***>(a3 + 4) - 1;
        *reinterpret_cast<void***>(a3 + 4) = ecx6;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(a3 + 4)) < reinterpret_cast<signed char>(0)) {
            eax8 = fun_4114ab(ecx6, static_cast<int32_t>(reinterpret_cast<signed char>(a2)), a3, ecx, ebp7, __return_address(), a2, a3);
            v9 = eax8;
        } else {
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(a3)) = a2;
            v9 = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(a2))) & 0xff;
            *reinterpret_cast<void***>(a3) = *reinterpret_cast<void***>(a3) + 1;
        }
        if (v9 != 0xffffffff) {
            *reinterpret_cast<void***>(a4) = *reinterpret_cast<void***>(a4) + 1;
        } else {
            *reinterpret_cast<void***>(a4) = reinterpret_cast<void**>(0xffffffff);
        }
    } else {
        *reinterpret_cast<void***>(a4) = *reinterpret_cast<void***>(a4) + 1;
    }
    return;
}

void** fun_421070(void** a1) {
    *reinterpret_cast<void***>(a1) = *reinterpret_cast<void***>(a1) + 4;
    return *reinterpret_cast<void***>(*reinterpret_cast<void***>(a1) + 0xfffffffc);
}

void** fun_4210c0(int32_t* a1) {
    *a1 = *a1 + 4;
    return *reinterpret_cast<void***>(*a1 - 4);
}

int32_t g428ec4 = 1;

void** fun_411262(void** a1, uint16_t a2) {
    void* ebp3;
    int1_t zf4;
    int32_t ecx5;
    void** ecx6;
    void** eax7;
    void** eax8;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    if (a1) {
        zf4 = g429904 == 0;
        if (!zf4) {
            ecx5 = g428ec4;
            ecx6 = g429914;
            eax7 = reinterpret_cast<void**>(WideCharToMultiByte(ecx6, 0, reinterpret_cast<int32_t>(ebp3) + 12, 1, a1, ecx5, 0, reinterpret_cast<int32_t>(ebp3) - 4));
            if (!eax7 || !1) {
                g42962c = 42;
                eax8 = reinterpret_cast<void**>(0xffffffff);
            } else {
                eax8 = eax7;
            }
        } else {
            if (reinterpret_cast<int32_t>(static_cast<uint32_t>(a2)) <= reinterpret_cast<int32_t>(0xff)) {
                *reinterpret_cast<void***>(a1) = *reinterpret_cast<void***>(&a2);
                eax8 = reinterpret_cast<void**>(1);
            } else {
                g42962c = 42;
                eax8 = reinterpret_cast<void**>(0xffffffff);
            }
        }
    } else {
        eax8 = reinterpret_cast<void**>(0);
    }
    return eax8;
}

void** fun_421090(void** a1) {
    *reinterpret_cast<void***>(a1) = *reinterpret_cast<void***>(a1) + 8;
    return *reinterpret_cast<void***>(*reinterpret_cast<void***>(a1) + 0xfffffff8);
}

void fun_420f90(signed char a1, void** a2, void** a3, void** a4) {
    int32_t v5;
    int32_t ebp6;
    void** eax7;
    void** ecx8;

    v5 = ebp6;
    while (eax7 = a2, ecx8 = a2 - 1, a2 = ecx8, !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax7) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax7 == 0))) {
        *reinterpret_cast<signed char*>(&ecx8) = a1;
        fun_420ec0(ecx8, ecx8, a3, a4, *reinterpret_cast<int24_t*>(&v5));
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a4) == 0xffffffff)) 
            goto addr_420fbf_4;
    }
    addr_420fc3_6:
    return;
    addr_420fbf_4:
    goto addr_420fc3_6;
}

void fun_420fe0(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** eax7;
    void** v8;

    v6 = ecx;
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a4 + 12)) & 64) || *reinterpret_cast<void***>(a4 + 8)) {
        while (eax7 = a3, --a3, !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax7) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax7 == 0))) {
            v8 = *reinterpret_cast<void***>(a2);
            eax7 = v8;
            fun_420ec0(a5, eax7, a4, a5, *reinterpret_cast<int24_t*>(&v6));
            ++a2;
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a5) == 0xffffffff)) 
                goto addr_421044_4;
        }
    } else {
        *reinterpret_cast<void***>(a5) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a5)) + reinterpret_cast<unsigned char>(a3));
    }
    addr_421048_7:
    return;
    addr_421044_4:
    goto addr_421048_7;
}

void** fun_411113(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** eax7;
    uint32_t v8;

    eax7 = a2;
    g429630 = eax7;
    v8 = 0;
    while (v8 < 45) {
        eax7 = a2;
        if (eax7 == *reinterpret_cast<void***>(v8 * 8 + 0x429220)) 
            goto addr_422173_5;
        ++v8;
    }
    if (reinterpret_cast<unsigned char>(a2) < reinterpret_cast<unsigned char>(19) || reinterpret_cast<unsigned char>(a2) > reinterpret_cast<unsigned char>(36)) {
        if (reinterpret_cast<unsigned char>(a2) < reinterpret_cast<unsigned char>(0xbc) || reinterpret_cast<unsigned char>(a2) > reinterpret_cast<unsigned char>(0xca)) {
            g42962c = 22;
        } else {
            g42962c = 8;
        }
    } else {
        g42962c = 13;
    }
    addr_4221c7_13:
    return eax7;
    addr_422173_5:
    g42962c = *reinterpret_cast<int32_t*>(v8 * 8 + 0x429224);
    goto addr_4221c7_13;
}

uint32_t fun_4112fd(void** a1, void** a2, int32_t a3, void** a4) {
    int1_t cf5;
    uint32_t eax6;
    void** v7;
    void** v8;
    void** eax9;
    void** v10;
    uint32_t eax11;
    void** eax12;
    uint32_t ecx13;

    cf5 = reinterpret_cast<unsigned char>(a1) < reinterpret_cast<unsigned char>(g42af94);
    if (!cf5 || !(reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>((reinterpret_cast<signed char>(a1) >> 5) * 4 + 0x42afe0) + (reinterpret_cast<unsigned char>(a1) & 31) * 8) + 4))) & 1)) {
        g42962c = 9;
        g429630 = reinterpret_cast<void**>(0);
        eax6 = 0xffffffff;
    } else {
        eax9 = fun_411375(a1, v7, v8);
        if (!reinterpret_cast<int1_t>(eax9 == 0xffffffff)) {
            v10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffffc);
            eax11 = reinterpret_cast<uint32_t>(SetFilePointer(eax9, a2, v10, a4));
            if (eax11 != 0xffffffff || (eax12 = reinterpret_cast<void**>(GetLastError(eax9, a2, v10, a4)), eax12 == 0)) {
                ecx13 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(a1) >> 5) * 4 + 0x42afe0)) + (reinterpret_cast<unsigned char>(a1) & 31) * 8 + 4))) & 0xfffffffd;
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(a1) >> 5) * 4 + 0x42afe0)) + (reinterpret_cast<unsigned char>(a1) & 31) * 8 + 4) = *reinterpret_cast<signed char*>(&ecx13);
                eax6 = eax11;
            } else {
                fun_411113(a2, eax12, eax9, a2, v10, a4);
                eax6 = 0xffffffff;
            }
        } else {
            g42962c = 9;
            eax6 = 0xffffffff;
        }
    }
    return eax6;
}

void** g42ac80;

void** g429934 = reinterpret_cast<void**>(0);

void** fun_411145(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

void** fun_411285(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** v15;
    void** ebp16;
    void** v17;
    void** v18;
    int1_t less19;
    void** eax20;
    void** edx21;
    void** eax22;
    void** v23;
    void** eax24;
    void** ecx25;
    void** v26;
    void** ecx27;

    v14 = reinterpret_cast<void**>(__return_address());
    v15 = ebp16;
    v17 = reinterpret_cast<void**>(0);
    v18 = reinterpret_cast<void**>(3);
    while (less19 = reinterpret_cast<signed char>(v18) < reinterpret_cast<signed char>(g42ac80), less19) {
        eax20 = g429934;
        if (*reinterpret_cast<void***>(eax20 + reinterpret_cast<unsigned char>(v18) * 4)) {
            edx21 = g429934;
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(edx21 + reinterpret_cast<unsigned char>(v18) * 4) + 12)) & 0x83 && (eax22 = g429934, v23 = *reinterpret_cast<void***>(eax22 + reinterpret_cast<unsigned char>(v18) * 4), eax24 = fun_411145(v23, v18, v17, v15, v14, a1, a2, a3, a4, a5, a6, a7, a8), eax24 != 0xffffffff)) {
                ++v17;
            }
            if (reinterpret_cast<signed char>(v18) >= reinterpret_cast<signed char>(20)) {
                ecx25 = g429934;
                v26 = *reinterpret_cast<void***>(ecx25 + reinterpret_cast<unsigned char>(v18) * 4);
                fun_41141a(ecx25, v26, 2, v18, v17, v15, v14, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
                ecx27 = g429934;
                *reinterpret_cast<void***>(ecx27 + reinterpret_cast<unsigned char>(v18) * 4) = reinterpret_cast<void**>(0);
            }
        }
        ++v18;
    }
    return v17;
}

uint32_t fun_41113b(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    if (a4 | a2) {
        return a1 * a3;
    } else {
        return a1 * a3;
    }
}

void** fun_41152d(void** a1);

void fun_411244(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16);

uint32_t fun_41151e(void** ecx, void** a2);

void** fun_411145(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** ebp15;
    void** eax16;
    void** eax17;
    void** ecx18;
    uint32_t eax19;
    void** ecx20;
    void** eax21;

    v14 = reinterpret_cast<void**>(0xffffffff);
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) & 64)) {
        if (!a1 && (eax16 = fun_41119f(a1, 2, 0x4274cc, 0x71, 0, 0x4273d0, 0xffffffff, a1, ebp15), reinterpret_cast<int1_t>(eax16 == 1))) {
        }
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) & 0x83) {
            eax17 = fun_41152d(a1);
            v14 = eax17;
            fun_411244(a1, a1, v14, a1, ebp15, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
            ecx18 = *reinterpret_cast<void***>(a1 + 16);
            eax19 = fun_41151e(ecx18, ecx18);
            if (reinterpret_cast<int32_t>(eax19) >= reinterpret_cast<int32_t>(0)) {
                if (*reinterpret_cast<void***>(a1 + 28)) {
                    ecx20 = *reinterpret_cast<void***>(a1 + 28);
                    fun_41141a(ecx20, ecx20, 2, v14, a1, ebp15, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
                    *reinterpret_cast<void***>(a1 + 28) = reinterpret_cast<void**>(0);
                }
            } else {
                v14 = reinterpret_cast<void**>(0xffffffff);
            }
        }
        *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(0);
        eax21 = v14;
    } else {
        *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(0);
        eax21 = reinterpret_cast<void**>(0xffffffff);
    }
    return eax21;
}

uint32_t fun_411550(void** a1);

uint32_t fun_422aa0(int32_t a1) {
    uint32_t v2;
    uint32_t v3;
    void** v4;
    int1_t less5;
    void** eax6;
    void** edx7;
    void** ecx8;
    void** edx9;
    void** v10;
    uint32_t eax11;
    void** eax12;
    void** v13;
    uint32_t eax14;
    uint32_t eax15;

    v2 = 0;
    v3 = 0;
    v4 = reinterpret_cast<void**>(0);
    while (less5 = reinterpret_cast<signed char>(v4) < reinterpret_cast<signed char>(g42ac80), less5) {
        eax6 = g429934;
        if (*reinterpret_cast<void***>(eax6 + reinterpret_cast<unsigned char>(v4) * 4) && (edx7 = g429934, !!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(edx7 + reinterpret_cast<unsigned char>(v4) * 4) + 12)) & 0x83))) {
            if (a1 != 1) {
                if (!a1 && ((ecx8 = g429934, !!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx8 + reinterpret_cast<unsigned char>(v4) * 4) + 12)) & 2)) && (edx9 = g429934, v10 = *reinterpret_cast<void***>(edx9 + reinterpret_cast<unsigned char>(v4) * 4), eax11 = fun_411550(v10), eax11 == 0xffffffff))) {
                    v3 = 0xffffffff;
                }
            } else {
                eax12 = g429934;
                v13 = *reinterpret_cast<void***>(eax12 + reinterpret_cast<unsigned char>(v4) * 4);
                eax14 = fun_411550(v13);
                if (eax14 != 0xffffffff) {
                    ++v2;
                }
            }
        }
        ++v4;
    }
    if (a1 != 1) {
        eax15 = v3;
    } else {
        eax15 = v2;
    }
    return eax15;
}

int32_t FlushFileBuffers = 0x2c97c;

void** fun_4112ee(void** ecx, void** a2) {
    int1_t cf3;
    void** eax4;
    void** ebp5;
    void** eax6;
    int32_t eax7;
    void** v8;
    void** eax9;

    cf3 = reinterpret_cast<unsigned char>(a2) < reinterpret_cast<unsigned char>(g42af94);
    if (!cf3 || !(reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>((reinterpret_cast<signed char>(a2) >> 5) * 4 + 0x42afe0) + (reinterpret_cast<unsigned char>(a2) & 31) * 8) + 4))) & 1)) {
        g42962c = 9;
        eax4 = reinterpret_cast<void**>(0xffffffff);
    } else {
        eax6 = fun_411375(a2, ecx, ebp5);
        eax7 = reinterpret_cast<int32_t>(FlushFileBuffers(eax6, ecx));
        if (eax7) {
            v8 = reinterpret_cast<void**>(0);
        } else {
            eax9 = reinterpret_cast<void**>(GetLastError(eax6, ecx));
            v8 = eax9;
        }
        if (v8) {
            g429630 = v8;
            g42962c = 9;
            v8 = reinterpret_cast<void**>(0xffffffff);
        }
        eax4 = v8;
    }
    return eax4;
}

uint32_t fun_411550(void** a1) {
    void** eax2;
    uint32_t eax3;
    void** ecx4;
    void** eax5;
    uint32_t eax6;

    if (a1) {
        eax2 = fun_41152d(a1);
        if (!eax2) {
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) & 0x4000)) {
                eax3 = 0;
            } else {
                ecx4 = *reinterpret_cast<void***>(a1 + 16);
                eax5 = fun_4112ee(ecx4, ecx4);
                eax6 = -reinterpret_cast<unsigned char>(eax5);
                eax3 = eax6 - (eax6 + reinterpret_cast<uint1_t>(eax6 < eax6 + reinterpret_cast<uint1_t>(!!eax5)));
            }
        } else {
            eax3 = 0xffffffff;
        }
    } else {
        eax3 = fun_422aa0(0);
    }
    return eax3;
}

void** fun_41152d(void** a1) {
    void** v2;
    void** v3;
    void** v4;
    void** v5;
    void** eax6;

    v2 = reinterpret_cast<void**>(0);
    if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) & 3) == 2 && (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) & 0x108 && (v3 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 8))), reinterpret_cast<signed char>(v3) > reinterpret_cast<signed char>(0)))) {
        v4 = *reinterpret_cast<void***>(a1 + 8);
        v5 = *reinterpret_cast<void***>(a1 + 16);
        eax6 = fun_411154(v5, v4, v3);
        if (eax6 != v3) {
            *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) | 32);
            v2 = reinterpret_cast<void**>(0xffffffff);
        } else {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) & 0x80) {
                *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) & 0xfffffffd);
            }
        }
    }
    *reinterpret_cast<void***>(a1) = *reinterpret_cast<void***>(a1 + 8);
    *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(0);
    return v2;
}

void fun_411244(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16) {
    void** ebp17;
    void** eax18;
    void** ecx19;
    void** v20;

    if (!a2 && (eax18 = fun_41119f(ecx, 2, 0x4274d8, 48, 0, 0x4274e8, ebp17, __return_address(), a2), reinterpret_cast<int1_t>(eax18 == 1))) {
    }
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 0x83 && (ecx19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 8), !!ecx19)) {
        v20 = *reinterpret_cast<void***>(a2 + 8);
        fun_41141a(ecx19, v20, 2, ebp17, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
        *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 0xfffffbf7);
        *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(a2 + 8) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(0);
    }
    return;
}

int32_t CloseHandle = 0x2c792;

uint32_t fun_41102d(void** ecx, void** a2);

uint32_t fun_41151e(void** ecx, void** a2) {
    int1_t cf3;
    uint32_t eax4;
    void** esi5;
    void** eax6;
    void** eax7;
    void** eax8;
    void** eax9;
    int32_t eax10;
    void** v11;
    void** eax12;
    void** ecx13;
    void** ebp14;

    cf3 = reinterpret_cast<unsigned char>(a2) < reinterpret_cast<unsigned char>(g42af94);
    if (!cf3 || !(reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>((reinterpret_cast<signed char>(a2) >> 5) * 4 + 0x42afe0) + (reinterpret_cast<unsigned char>(a2) & 31) * 8) + 4))) & 1)) {
        g42962c = 9;
        g429630 = reinterpret_cast<void**>(0);
        eax4 = 0xffffffff;
    } else {
        eax6 = fun_411375(a2, esi5, ecx);
        if (eax6 == 0xffffffff || ((a2 == 1 || reinterpret_cast<int1_t>(a2 == 2)) && (eax7 = fun_411375(1, esi5, ecx), eax8 = fun_411375(2, esi5, ecx), eax7 == eax8) || (eax9 = fun_411375(a2, esi5, ecx), eax10 = reinterpret_cast<int32_t>(CloseHandle(eax9)), !!eax10))) {
            v11 = reinterpret_cast<void**>(0);
        } else {
            eax12 = reinterpret_cast<void**>(GetLastError(eax9));
            v11 = eax12;
        }
        fun_41102d(a2, a2);
        ecx13 = *reinterpret_cast<void***>((reinterpret_cast<signed char>(a2) >> 5) * 4 + 0x42afe0);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx13 + (reinterpret_cast<unsigned char>(a2) & 31) * 8) + 4) = 0;
        if (!v11) {
            eax4 = 0;
        } else {
            fun_411113(ecx13, v11, esi5, v11, ebp14, __return_address());
            eax4 = 0xffffffff;
        }
    }
    return eax4;
}

void** fun_411375(void** a1, void** a2, void** a3) {
    int1_t cf4;
    void** eax5;

    cf4 = reinterpret_cast<unsigned char>(a1) < reinterpret_cast<unsigned char>(g42af94);
    if (!cf4 || !(reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>((reinterpret_cast<signed char>(a1) >> 5) * 4 + 0x42afe0) + (reinterpret_cast<unsigned char>(a1) & 31) * 8) + 4))) & 1)) {
        g42962c = 9;
        g429630 = reinterpret_cast<void**>(0);
        eax5 = reinterpret_cast<void**>(0xffffffff);
    } else {
        eax5 = (*reinterpret_cast<void****>((reinterpret_cast<signed char>(a1) >> 5) * 4 + 0x42afe0))[(reinterpret_cast<unsigned char>(a1) & 31) * 8];
    }
    return eax5;
}

int32_t HeapValidate = 0x2c7ce;

void** fun_4111fe(void** ecx) {
    void** v2;
    int1_t zf3;
    uint32_t eax4;
    void** eax5;
    int32_t eax6;
    int32_t eax7;

    v2 = reinterpret_cast<void**>(0xfffffffe);
    zf3 = g42af90 == 3;
    if (zf3 && (eax4 = fun_4111d6(), reinterpret_cast<int32_t>(eax4) < reinterpret_cast<int32_t>(0))) {
        v2 = reinterpret_cast<void**>(0xfffffffc);
    }
    eax5 = g42af80;
    eax6 = reinterpret_cast<int32_t>(HeapValidate(eax5, 0, 0));
    if (!eax6) {
        eax7 = reinterpret_cast<int32_t>(GetLastError(eax5, 0, 0));
        if (eax7 != 0x78) {
            v2 = reinterpret_cast<void**>(0xfffffffc);
        } else {
            g429630 = reinterpret_cast<void**>(0x78);
            g42962c = 40;
        }
    }
    return v2;
}

void fun_41144c(void** a1) {
    struct s3* eax2;
    struct s3* v3;
    int32_t* esi4;
    int32_t eax5;

    eax2 = g0;
    v3 = eax2;
    g0 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4);
    esi4 = reinterpret_cast<int32_t*>(0x427828);
    while (reinterpret_cast<uint32_t>(esi4) < 0x427a2c) {
        eax5 = *esi4;
        if (eax5) {
            eax5();
        }
        ++esi4;
    }
    g0 = v3;
    return;
}

void** g42afe0;

int32_t GetStartupInfoA = 0x2c546;

struct s24 {
    void** f0;
    signed char[3] pad4;
    signed char f4;
};

int32_t GetFileType = 0x2c6d2;

int32_t SetHandleCount = 0x2c6b0;

struct s25 {
    signed char[4] pad4;
    void** f4;
};

struct s26 {
    signed char[256] pad256;
    void** f256;
};

struct s27 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

uint32_t fun_41140b(void** ecx, void** a2) {
    void* ebp3;
    void** v4;
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
    void** v20;
    void** v21;
    void** eax22;
    void** v23;
    void** edx24;
    void** v25;
    uint16_t v26;
    int32_t v27;
    uint32_t eax28;
    int32_t v29;
    void** ecx30;
    struct s24* v31;
    uint32_t ecx32;
    int32_t edx33;
    uint32_t edx34;
    uint32_t v35;
    void** eax36;
    uint32_t eax37;
    uint32_t ecx38;
    uint32_t ecx39;
    uint32_t eax40;
    void** eax41;
    void** v42;
    void*** v43;
    void** v44;
    struct s25* v45;
    void** v46;
    void** v47;
    void** ecx48;
    void** v49;
    void** v50;
    void** eax51;
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
    void** eax63;
    void** ecx64;
    void** v65;
    void** v66;
    int32_t eax67;
    struct s27* v68;
    void** ecx69;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax22 = fun_411064(ecx, 0x100, 2, 0x4256bc, 0x82, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21);
    v23 = eax22;
    if (v23) {
        g42afe0 = v23;
        g42af94 = reinterpret_cast<void**>(32);
        while (edx24 = g42afe0, reinterpret_cast<unsigned char>(v23) < reinterpret_cast<unsigned char>(edx24 + 0x100)) {
            *reinterpret_cast<void***>(v23 + 4) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(v23) = reinterpret_cast<void**>(0xffffffff);
            *reinterpret_cast<signed char*>(v23 + 5) = 10;
            v23 = v23 + 8;
        }
        v25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffffb8);
        GetStartupInfoA(v25);
        if (!v26) 
            goto addr_414463_8;
        if (v27) 
            goto addr_4142f7_10;
    } else {
        eax28 = 0xffffffff;
        goto addr_414566_12;
    }
    addr_414463_8:
    v29 = 0;
    while (v29 < 3) {
        ecx30 = g42afe0;
        v31 = reinterpret_cast<struct s24*>(ecx30 + v29 * 8);
        if (!reinterpret_cast<int1_t>(v31->f0 == 0xffffffff)) {
            ecx32 = reinterpret_cast<uint32_t>(static_cast<int32_t>(v31->f4)) | 0x80;
            v31->f4 = *reinterpret_cast<signed char*>(&ecx32);
        } else {
            v31->f4 = 0x81;
            if (v29) {
                edx33 = v29 - 1;
                edx34 = reinterpret_cast<uint32_t>(-edx33);
                v35 = edx34 - (edx34 + reinterpret_cast<uint1_t>(edx34 < edx34 + reinterpret_cast<uint1_t>(!!edx33))) - 11;
            } else {
                v35 = 0xfffffff6;
            }
            eax36 = reinterpret_cast<void**>(GetStdHandle(v35, v25));
            if (eax36 == 0xffffffff || (eax37 = reinterpret_cast<uint32_t>(GetFileType(eax36, v35, v25)), eax37 == 0)) {
                ecx38 = reinterpret_cast<uint32_t>(static_cast<int32_t>(v31->f4)) | 64;
                v31->f4 = *reinterpret_cast<signed char*>(&ecx38);
            } else {
                v31->f0 = eax36;
                if ((eax37 & 0xff) != 2) {
                    if ((eax37 & 0xff) == 3) {
                        ecx39 = reinterpret_cast<uint32_t>(static_cast<int32_t>(v31->f4)) | 8;
                        v31->f4 = *reinterpret_cast<signed char*>(&ecx39);
                    }
                } else {
                    eax40 = reinterpret_cast<uint32_t>(static_cast<int32_t>(v31->f4)) | 64;
                    v31->f4 = *reinterpret_cast<signed char*>(&eax40);
                }
            }
        }
        ++v29;
    }
    eax41 = g42af94;
    SetHandleCount(eax41, v25);
    eax28 = 0;
    addr_414566_12:
    return eax28;
    addr_4142f7_10:
    v42 = *v43;
    v44 = reinterpret_cast<void**>(&v45->f4);
    v46 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v44) + reinterpret_cast<unsigned char>(v42));
    if (reinterpret_cast<signed char>(v42) >= reinterpret_cast<signed char>(0x800)) {
        v47 = reinterpret_cast<void**>(0x800);
    } else {
        v47 = v42;
    }
    ecx48 = v47;
    v49 = ecx48;
    v50 = reinterpret_cast<void**>(1);
    while (eax51 = g42af94, reinterpret_cast<signed char>(eax51) < reinterpret_cast<signed char>(v49)) {
        eax63 = fun_411064(ecx48, 0x100, 2, 0x4256bc, 0xb7, v25, v52, v47, v46, v23, v53, v44, v49, v54, v55, v50, v56, v57, v58, v59, v60, v61, v62);
        v23 = eax63;
        if (!v23) 
            goto addr_414371_35;
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v50) * 4 + 0x42afe0) = v23;
        ecx64 = g42af94;
        g42af94 = ecx64 + 32;
        while (ecx48 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s26**>(reinterpret_cast<unsigned char>(v50) * 4 + 0x42afe0))->f256), reinterpret_cast<unsigned char>(v23) < reinterpret_cast<unsigned char>(ecx48)) {
            *reinterpret_cast<void***>(v23 + 4) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(v23) = reinterpret_cast<void**>(0xffffffff);
            *reinterpret_cast<signed char*>(v23 + 5) = 10;
            v23 = v23 + 8;
        }
        ++v50;
    }
    addr_4143d6_42:
    v65 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<signed char>(v65) < reinterpret_cast<signed char>(v49)) {
        if (*reinterpret_cast<void***>(v46) != 0xffffffff && (reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(v44)))) & 1 && (reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(v44)))) & 8 || (v66 = *reinterpret_cast<void***>(v46), eax67 = reinterpret_cast<int32_t>(GetFileType(v66, v25)), !!eax67)))) {
            v68 = reinterpret_cast<struct s27*>(*reinterpret_cast<void****>((reinterpret_cast<signed char>(v65) >> 5) * 4 + 0x42afe0) + (reinterpret_cast<unsigned char>(v65) & 31) * 8);
            v68->f0 = *reinterpret_cast<void***>(v46);
            v68->f4 = *reinterpret_cast<void***>(v44);
        }
        ++v65;
        ++v44;
        v46 = v46 + 4;
    }
    goto addr_414463_8;
    addr_414371_35:
    ecx69 = g42af94;
    v49 = ecx69;
    goto addr_4143d6_42;
}

void** g4295fc = reinterpret_cast<void**>(0);

void** g429658 = reinterpret_cast<void**>(0);

int32_t g42b0e0;

uint32_t fun_411596(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** v13;
    void** v14;
    void** ebp15;
    int1_t zf16;
    void** v17;
    void** eax18;
    void** v19;
    void** v20;
    void** v21;
    void** eax22;
    void** ecx23;
    void** v24;
    void** v25;
    void** eax26;
    void** v27;
    int1_t zf28;
    uint32_t eax29;
    void** eax30;
    void** v31;
    void** v32;
    void** eax33;
    void** eax34;
    void** v35;
    void** eax36;
    void** ecx37;

    v13 = reinterpret_cast<void**>(__return_address());
    v14 = ebp15;
    zf16 = g42b0f8 == 0;
    if (zf16) {
        fun_41109b();
    }
    v17 = reinterpret_cast<void**>(0);
    eax18 = g4295fc;
    v19 = eax18;
    if (v19) {
        while (*reinterpret_cast<void***>(v19)) {
            if (static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(v19))) != 61) {
                ++v17;
            }
            eax22 = fun_411235(v19, v20, v21, v17);
            v19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v19) + reinterpret_cast<unsigned char>(eax22) + 1);
        }
        ecx23 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v17) * 4 + 4);
        eax26 = fun_411064(ecx23, ecx23, 2, 0x425698, 0x75, v24, v25, v17, v19, v14, v13, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
        v27 = eax26;
        g429658 = v27;
        zf28 = g429658 == 0;
        if (zf28) 
            goto addr_413918_10;
    } else {
        eax29 = 0xffffffff;
        goto addr_4139f2_12;
    }
    eax30 = g4295fc;
    v31 = eax30;
    while (*reinterpret_cast<void***>(v31)) {
        eax33 = fun_411235(v31, v32, v27, v17);
        v32 = eax33 + 1;
        if (static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(v31))) != 61) {
            eax34 = fun_411064(v32, v32, 2, 0x425698, 0x82, v32, v27, v17, v31, v14, v13, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
            *reinterpret_cast<void***>(v27) = eax34;
            if (!*reinterpret_cast<void***>(v27)) 
                goto addr_413983_17;
            v35 = *reinterpret_cast<void***>(v27);
            fun_411258(v35, v31, v32, v27, v17);
            v27 = v27 + 4;
        }
        ecx23 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) + reinterpret_cast<unsigned char>(v32));
        v31 = ecx23;
    }
    eax36 = g4295fc;
    fun_41141a(ecx23, eax36, 2, v32, v27, v17, v31, v14, v13, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    g4295fc = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(v27) = reinterpret_cast<void**>(0);
    g42b0e0 = 1;
    eax29 = 0;
    addr_4139f2_12:
    return eax29;
    addr_413983_17:
    ecx37 = g429658;
    fun_41141a(ecx37, ecx37, 2, v32, v27, v17, v31, v14, v13, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    g429658 = reinterpret_cast<void**>(0);
    eax29 = 0xffffffff;
    goto addr_4139f2_12;
    addr_413918_10:
    eax29 = 0xffffffff;
    goto addr_4139f2_12;
}

int32_t fun_4113fc(uint32_t a1);

void** fun_41142e(void** a1, void** a2) {
    int32_t v3;
    int1_t zf4;
    int1_t zf5;
    void** eax6;
    void** v7;
    void** v8;
    int32_t edx9;
    uint32_t v10;
    int32_t eax11;

    v3 = 0;
    zf4 = g42b0f8 == 0;
    if (zf4) {
        fun_41109b();
    }
    zf5 = g42b100 == 0;
    if (!zf5) {
        eax6 = g42b100;
        v7 = eax6;
    } else {
        v7 = reinterpret_cast<void**>(0x4250ec);
    }
    v8 = v7;
    while (reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v8)))) > reinterpret_cast<int32_t>(32) || *reinterpret_cast<void***>(v8) && v3) {
        if (static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v8))) == 34) {
            edx9 = 0;
            *reinterpret_cast<unsigned char*>(&edx9) = reinterpret_cast<uint1_t>(v3 == 0);
            v3 = edx9;
        }
        v10 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v8));
        eax11 = fun_4113fc(v10);
        if (eax11 && v8) {
            ++v8;
        }
        ++v8;
    }
    while (*reinterpret_cast<void***>(v8) && reinterpret_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v8)))) <= reinterpret_cast<int32_t>(32)) {
        ++v8;
    }
    return v8;
}

int32_t LoadStringA = 0x2c44e;

int32_t LoadAcceleratorsA = 0x2c43a;

int32_t GetMessageA = 0x2c42c;

int32_t TranslateAcceleratorA = 0x2c414;

int32_t TranslateMessage = 0x2c400;

int32_t DispatchMessageA = 0x2c3ec;

void** fun_4114a6(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** v13;
    void** v14;
    void** ebp15;
    void** ebp16;
    void** v17;
    void** ebx18;
    void** v19;
    void** esi20;
    void** v21;
    void** edi22;
    void** ecx23;
    void** v24;
    void** v25;
    void** v26;
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
    void** v39;
    void** v40;
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
    void** ecx53;
    void** eax54;
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
    void** eax65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** eax73;
    void** v74;
    void** edx75;
    void** v76;
    void** v77;
    void** v78;
    void** eax79;
    void** v80;
    void** v81;
    void** v82;
    void** eax83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** eax93;

    v13 = reinterpret_cast<void**>(__return_address());
    v14 = ebp15;
    ebp16 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v17 = ebx18;
    v19 = esi20;
    v21 = edi22;
    ecx23 = reinterpret_cast<void**>(60);
    while (ecx23) {
        --ecx23;
    }
    fun_4111f9(21, "foo", "bar", v21, v19, v17);
    v24 = a1;
    LoadStringA(v24, 0x67, 0x429568, 100, v21, v19, v17);
    fun_411424(ecx23, v24, 0x67, 0x429568, 100, v21, v19, v17, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39);
    v40 = a1;
    LoadStringA();
    fun_411424(ecx23, v40, 0x6d, 0x429500, 100, v24, 0x67, 0x429568, 100, v21, v19, v17, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51);
    fun_41159b(a1, v40, 0x6d, 0x429500, 100, v24, 0x67, 0x429568, 100, v21, v19, v17, v52);
    ecx53 = a1;
    eax54 = fun_41133e(ecx53, a4, v40, 0x6d, 0x429500, 100, v24, 0x67, 0x429568, 100, v21, v19, v17);
    if (eax54) {
        v55 = a1;
        LoadAcceleratorsA(v55, 0x6d);
        eax65 = fun_411424(ecx53, v55, 0x6d, v40, 0x6d, 0x429500, 100, v24, 0x67, 0x429568, 100, v21, v19, v17, v56, v57, v58, v59, v60, v61, v62, v63, v64);
        v66 = eax65;
        while (v67 = ebp16 + 0xffffffe0, GetMessageA(v67, 0, 0, 0, v55, 0x6d), eax73 = fun_411424(ecx53, v67, 0, 0, 0, v55, 0x6d, v40, 0x6d, 0x429500, 100, v24, 0x67, 0x429568, 100, v21, v19, v17, v68, v69, v70, v71, v72), !!eax73) {
            v74 = ebp16 + 0xffffffe0;
            ecx53 = v66;
            edx75 = v76;
            TranslateAcceleratorA(edx75, ecx53, v74, v67, 0, 0, 0, v55, 0x6d);
            eax79 = fun_411424(ecx53, edx75, ecx53, v74, v67, 0, 0, 0, v55, 0x6d, v40, 0x6d, 0x429500, 100, v24, 0x67, 0x429568, 100, v21, v19, v17, v77, v78);
            if (!eax79) {
                v80 = ebp16 + 0xffffffe0;
                TranslateMessage(v80, edx75, ecx53, v74, v67, 0, 0, 0, v55, 0x6d);
                fun_411424(ecx53, v80, edx75, ecx53, v74, v67, 0, 0, 0, v55, 0x6d, v40, 0x6d, 0x429500, 100, v24, 0x67, 0x429568, 100, v21, v19, v17, v81);
                v82 = ebp16 + 0xffffffe0;
                DispatchMessageA(v82, v80, edx75, ecx53, v74, v67, 0, 0, 0, v55, 0x6d);
                fun_411424(ecx53, v82, v80, edx75, ecx53, v74, v67, 0, 0, 0, v55, 0x6d, v40, 0x6d, 0x429500, 100, v24, 0x67, 0x429568, 100, v21, v19, v17);
            }
        }
        eax83 = v84;
    } else {
        eax83 = reinterpret_cast<void**>(0);
    }
    fun_4111d1(ebp16, eax83, edx75, v40, 0x6d, 0x429500, 100, v24, 0x67, 0x429568, 100, v21, v19, v17);
    eax93 = fun_411424(ebp16, v85, v86, v87, v88, v89, v90, v91, v92, v14, v13, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    return eax93;
}

void** fun_4115b4(void** a1) {
    void** eax2;

    eax2 = g42960c;
    return eax2;
}

int32_t fun_412a60(int32_t a1, void** a2) {
    struct s3* eax3;

    eax3 = g0;
    g0 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4);
    RaiseException();
    g0 = eax3;
    return 0;
}

void** fun_41136b(void** ecx, void** a2);

int32_t fun_411181(void** ecx, void** a2) {
    void** eax3;
    uint32_t eax4;

    eax3 = fun_41136b(ecx, a2);
    eax4 = -reinterpret_cast<unsigned char>(eax3);
    return reinterpret_cast<int32_t>(-(eax4 - (eax4 + reinterpret_cast<uint1_t>(eax4 < eax4 + reinterpret_cast<uint1_t>(!!eax3))))) - 1;
}

int32_t* fun_413430(int32_t* a1, int32_t* a2) {
    while (reinterpret_cast<uint32_t>(a1) < reinterpret_cast<uint32_t>(a2)) {
        if (*a1) {
            *a1();
        }
        ++a1;
    }
    return a1;
}

void** fun_4114fb(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, int32_t a7) {
    void** ebp8;
    void** eax9;

    eax9 = fun_416ec0(a2, a2, a3, a4, a5, a6, 0, ecx, ebp8, __return_address(), a2, a3);
    return eax9;
}

int32_t SetStdHandle = 0x2c96c;

uint32_t fun_4110a0(void** ecx, void** a2, void** a3, void** a4) {
    int1_t cf5;
    uint32_t eax6;
    int1_t zf7;

    cf5 = reinterpret_cast<unsigned char>(a2) < reinterpret_cast<unsigned char>(g42af94);
    if (!cf5 || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>((reinterpret_cast<signed char>(a2) >> 5) * 4 + 0x42afe0) + (reinterpret_cast<unsigned char>(a2) & 31) * 8) == 0xffffffff)) {
        g42962c = 9;
        g429630 = reinterpret_cast<void**>(0);
        eax6 = 0xffffffff;
    } else {
        zf7 = g428b44 == 1;
        if (zf7) {
            if (!a2) {
                SetStdHandle(0xf6, a3);
            } else {
                if (a2 == 1) {
                    SetStdHandle(0xf5, a3);
                } else {
                    if (a2 == 2) {
                        SetStdHandle(0xf4, a3);
                    }
                }
            }
        }
        (*reinterpret_cast<void****>((reinterpret_cast<signed char>(a2) >> 5) * 4 + 0x42afe0))[(reinterpret_cast<unsigned char>(a2) & 31) * 8] = a3;
        eax6 = 0;
    }
    return eax6;
}

int32_t fun_4113fc(uint32_t a1) {
    uint32_t v2;
    int32_t ebp3;
    int32_t eax4;

    v2 = a1;
    eax4 = fun_419600(*reinterpret_cast<unsigned char*>(&v2), 0, 4, ebp3);
    return eax4;
}

void fun_413b80(void** a1, void** a2, void** a3, int32_t* a4, int32_t* a5, void** a6, void** a7, void** a8) {
    void** v9;
    int32_t v10;
    void** v11;
    int32_t edx12;
    int32_t v13;
    int32_t v14;
    uint32_t v15;
    int32_t edx16;
    uint32_t ecx17;

    *a5 = 0;
    *a4 = 1;
    v9 = a1;
    if (a2) {
        *reinterpret_cast<void***>(a2) = a3;
        a2 = a2 + 4;
    }
    v10 = 0;
    do {
        if (static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(v9))) != 34) {
            *a5 = *a5 + 1;
            if (a3) {
                *reinterpret_cast<void***>(a3) = *reinterpret_cast<void***>(v9);
                ++a3;
            }
            v11 = *reinterpret_cast<void***>(v9);
            ++v9;
            if (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(v11 + 0x42ad41)) & 4) {
                *a5 = *a5 + 1;
                if (a3) {
                    *reinterpret_cast<void***>(a3) = *reinterpret_cast<void***>(v9);
                    ++a3;
                }
                ++v9;
            }
        } else {
            edx12 = 0;
            *reinterpret_cast<unsigned char*>(&edx12) = reinterpret_cast<uint1_t>(v10 == 0);
            v10 = edx12;
            v11 = *reinterpret_cast<void***>(v9);
            ++v9;
        }
    } while (v11 && (v10 || static_cast<uint32_t>(reinterpret_cast<unsigned char>(v11)) != 32 && static_cast<uint32_t>(reinterpret_cast<unsigned char>(v11)) != 9));
    if (v11) {
        if (a3) {
            *reinterpret_cast<void***>(a3 + 0xffffffff) = reinterpret_cast<void**>(0);
        }
    } else {
        --v9;
    }
    v13 = 0;
    while (1) {
        if (*reinterpret_cast<void***>(v9)) {
            while (static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(v9))) == 32 || static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(v9))) == 9) {
                ++v9;
            }
        }
        if (!*reinterpret_cast<void***>(v9)) 
            break;
        if (a2) {
            *reinterpret_cast<void***>(a2) = a3;
            a2 = a2 + 4;
        }
        *a4 = *a4 + 1;
        while (1) {
            v14 = 1;
            v15 = 0;
            while (static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(v9))) == 92) {
                ++v9;
                ++v15;
            }
            if (static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(v9))) == 34) {
                if (!(v15 % 2)) {
                    if (!v13) {
                        v14 = 0;
                    } else {
                        if (static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(v9 + 1))) != 34) {
                            v14 = 0;
                        } else {
                            ++v9;
                        }
                    }
                    edx16 = 0;
                    *reinterpret_cast<unsigned char*>(&edx16) = reinterpret_cast<uint1_t>(v13 == 0);
                    v13 = edx16;
                }
                v15 = v15 >> 1;
            }
            while (ecx17 = v15, --v15, !!ecx17) {
                if (a3) {
                    *reinterpret_cast<void***>(a3) = reinterpret_cast<void**>(92);
                    ++a3;
                }
                *a5 = *a5 + 1;
            }
            if (!*reinterpret_cast<void***>(v9)) 
                break;
            if (v13) 
                goto addr_413df1_44;
            if (static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(v9))) == 32) 
                break;
            if (static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(v9))) == 9) 
                break;
            addr_413df1_44:
            if (v14) {
                if (!a3) {
                    if (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(*reinterpret_cast<void***>(v9) + 0x42ad41)) & 4) {
                        ++v9;
                        *a5 = *a5 + 1;
                    }
                } else {
                    if (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(*reinterpret_cast<void***>(v9) + 0x42ad41)) & 4) {
                        *reinterpret_cast<void***>(a3) = *reinterpret_cast<void***>(v9);
                        ++a3;
                        ++v9;
                        *a5 = *a5 + 1;
                    }
                    *reinterpret_cast<void***>(a3) = *reinterpret_cast<void***>(v9);
                    ++a3;
                }
                *a5 = *a5 + 1;
            }
            ++v9;
        }
        if (a3) {
            *reinterpret_cast<void***>(a3) = reinterpret_cast<void**>(0);
            ++a3;
        }
        *a5 = *a5 + 1;
    }
    if (a2) {
        *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
    }
    *a4 = *a4 + 1;
    return;
}

struct s28 {
    void** f0;
    void** f1;
    signed char f2;
    signed char f3;
};

void** fun_411352(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** esi7;
    void** edi8;
    void** eax9;
    uint32_t ecx10;
    uint32_t edx11;
    struct s28* esi12;
    void** edi13;
    uint32_t ecx14;
    uint32_t edx15;
    unsigned char bl16;

    esi7 = a2;
    edi8 = a1;
    eax9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(esi7));
    if (reinterpret_cast<unsigned char>(edi8) <= reinterpret_cast<unsigned char>(esi7) || reinterpret_cast<unsigned char>(edi8) >= reinterpret_cast<unsigned char>(eax9)) {
        if (reinterpret_cast<unsigned char>(edi8) & 3) {
            if (reinterpret_cast<unsigned char>(a3) < reinterpret_cast<unsigned char>(4)) {
                goto *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(a3 - 4) * 4 + 0x41a38c);
            } else {
                goto *reinterpret_cast<int32_t*>((reinterpret_cast<unsigned char>(edi8) & 3) * 4 + 0x41a290);
            }
        }
        ecx10 = reinterpret_cast<unsigned char>(a3) >> 2;
        edx11 = reinterpret_cast<unsigned char>(a3) & 3;
        if (ecx10 >= 8) 
            goto addr_41a263_8;
    } else {
        esi12 = reinterpret_cast<struct s28*>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(esi7) + 0xfffffffc);
        edi13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(edi8) + 0xfffffffc);
        if (reinterpret_cast<unsigned char>(edi13) & 3) {
            eax9 = edi13;
            if (reinterpret_cast<unsigned char>(a3) >= reinterpret_cast<unsigned char>(4)) {
                goto *reinterpret_cast<int32_t*>((reinterpret_cast<unsigned char>(eax9) & 3) * 4 + 0x41a41c);
            }
            goto *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(a3) * 4 + 0x41a518);
        } else {
            ecx14 = reinterpret_cast<unsigned char>(a3) >> 2;
            edx15 = reinterpret_cast<unsigned char>(a3) & 3;
            if (ecx14 < 8) {
                goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(-ecx14) * 4 + 0x41a4c8);
                goto *reinterpret_cast<int32_t*>(edx15 * 4 + 0x41a518);
            } else {
                while (ecx14) {
                    --ecx14;
                    *reinterpret_cast<void***>(edi13) = esi12->f0;
                    edi13 = edi13 + 0xfffffffc;
                    --esi12;
                }
                goto *reinterpret_cast<int32_t*>(edx15 * 4 + 0x41a518);
            }
        }
    }
    switch (ecx10) {
        addr_41a373_21:
    case 0:
        switch (edx11) {
        case 0:
            *reinterpret_cast<unsigned char*>(esi7 + 95) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(esi7 + 95) | bl16);
            return eax9;
        case 1:
            *reinterpret_cast<void***>(edi8) = *reinterpret_cast<void***>(esi7);
            return a1;
        case 2:
            *reinterpret_cast<void***>(edi8) = *reinterpret_cast<void***>(esi7);
            *reinterpret_cast<void***>(edi8 + 1) = *reinterpret_cast<void***>(esi7 + 1);
            return a1;
        case 3:
            *reinterpret_cast<void***>(edi8) = *reinterpret_cast<void***>(esi7);
            *reinterpret_cast<void***>(edi8 + 1) = *reinterpret_cast<void***>(esi7 + 1);
            *reinterpret_cast<signed char*>(edi8 + 2) = *reinterpret_cast<signed char*>(esi7 + 2);
            return a1;
        }
        addr_41a360_26:
    case 1:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi8 + ecx10 * 4) - 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi7 + ecx10 * 4) - 4);
        eax9 = reinterpret_cast<void**>(ecx10 * 4);
        esi7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi7) + reinterpret_cast<unsigned char>(eax9));
        edi8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi8) + reinterpret_cast<unsigned char>(eax9));
        goto addr_41a373_21;
        addr_41a358_27:
    case 2:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi8 + ecx10 * 4) - 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi7 + ecx10 * 4) - 8);
        goto addr_41a360_26;
        addr_41a350_28:
    case 3:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi8 + ecx10 * 4) - 12) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi7 + ecx10 * 4) - 12);
        goto addr_41a358_27;
        addr_41a348_29:
    case 4:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi8 + ecx10 * 4) - 16) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi7 + ecx10 * 4) - 16);
        goto addr_41a350_28;
        addr_41a340_30:
    case 5:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi8 + ecx10 * 4) - 20) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi7 + ecx10 * 4) - 20);
        goto addr_41a348_29;
    case 6:
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edi8 + ecx10 * 4) - 24) = eax9;
        goto addr_41a340_30;
    case 7:
    }
    addr_41a263_8:
    while (ecx10) {
        --ecx10;
        *reinterpret_cast<void***>(edi8) = *reinterpret_cast<void***>(esi7);
        edi8 = edi8 + 4;
        esi7 = esi7 + 4;
    }
    goto *reinterpret_cast<int32_t*>(edx11 * 4 + 0x41a37c);
    return eax9;
    *reinterpret_cast<signed char*>(edi13 + 3) = esi12->f3;
    return a1;
    *reinterpret_cast<signed char*>(edi13 + 3) = esi12->f3;
    *reinterpret_cast<signed char*>(edi13 + 2) = esi12->f2;
    return a1;
    *reinterpret_cast<signed char*>(edi13 + 3) = esi12->f3;
    *reinterpret_cast<signed char*>(edi13 + 2) = esi12->f2;
    *reinterpret_cast<void***>(edi13 + 1) = esi12->f1;
    return a1;
}

int32_t fun_411442(void** ecx) {
    int1_t zf2;
    int1_t cf3;
    int32_t eax4;

    zf2 = reinterpret_cast<int1_t>(g429638 == 2);
    if (!zf2 || (cf3 = reinterpret_cast<unsigned char>(g429644) < reinterpret_cast<unsigned char>(5), cf3)) {
        eax4 = 3;
    } else {
        eax4 = 1;
    }
    return eax4;
}

void** g428d50 = reinterpret_cast<void**>(1);

void** g428d54 = reinterpret_cast<void**>(0xff);

void** g429840 = reinterpret_cast<void**>(0);

void** g42984c = reinterpret_cast<void**>(0);

unsigned char g428d5a = 0xcd;

void** fun_411384(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** v7;
    int1_t below_or_equal8;
    void* eax9;
    int1_t zf10;
    void** edx11;
    void** v12;
    void** eax13;
    void** v14;
    void** v15;
    void** v16;
    void** eax17;
    void** eax18;
    int1_t zf19;
    int1_t zf20;
    void** ecx21;
    int32_t eax22;
    uint32_t eax23;
    void** v24;
    void** eax25;
    void** eax26;
    void** ecx27;
    void** v28;
    void** eax29;
    void** ecx30;
    void** eax31;
    void** eax32;
    void** eax33;
    void** ecx34;
    void** edx35;
    int1_t below_or_equal36;
    void** eax37;
    int1_t zf38;
    void** ecx39;
    void** edx40;
    uint32_t eax41;
    uint32_t v42;
    void** ebp43;
    uint32_t edx44;
    uint32_t v45;
    uint32_t ecx46;
    uint32_t v47;
    void** v48;
    void** eax49;
    void** v50;
    void** eax51;

    v7 = reinterpret_cast<void**>(0);
    below_or_equal8 = reinterpret_cast<uint32_t>(g429858) <= 0;
    if (!below_or_equal8) {
        eax9 = g429858;
        zf10 = reinterpret_cast<int1_t>(g429848 == reinterpret_cast<uint32_t>(eax9) - 1);
        if (!zf10) {
            edx11 = g429848;
            g429848 = edx11 + 1;
        } else {
            eax13 = fun_411096(ecx, v12);
            if (!eax13 && (eax17 = fun_41119f(ecx, 2, 0x4260e0, 0x15a, 0, 0x4260ec, v14, v15, v16), reinterpret_cast<int1_t>(eax17 == 1))) {
            }
            g429848 = reinterpret_cast<void**>(0);
        }
    }
    eax18 = g428d50;
    zf19 = reinterpret_cast<int1_t>(g428d54 == 0xffffffff);
    if (!zf19 && (zf20 = eax18 == g428d54, zf20)) {
    }
    ecx21 = eax18;
    eax22 = reinterpret_cast<int32_t>(g428ec0(1, 0, a2, a3, ecx21, a4, a5));
    if (eax22) {
        if ((reinterpret_cast<unsigned char>(a3) & 0xffff) != 2 && (eax23 = g428d4c, !(eax23 & 1))) {
            v7 = reinterpret_cast<void**>(1);
        }
        if (reinterpret_cast<unsigned char>(a2) > reinterpret_cast<unsigned char>(0xffffffe0) || (ecx21 = a2 + 36, reinterpret_cast<unsigned char>(ecx21) > reinterpret_cast<unsigned char>(0xffffffe0))) {
            eax25 = fun_41119f(ecx21, 1, 0, 0, 0, 0x426048, a2, v24, eax18);
            if (reinterpret_cast<int1_t>(eax25 == 1)) {
            }
            eax26 = reinterpret_cast<void**>(0);
        } else {
            ecx27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) & 0xffff);
            if (ecx27 != 4 && (a3 != 1 && ((reinterpret_cast<unsigned char>(a3) & 0xffff) != 2 && (a3 != 3 && (eax29 = fun_41119f(ecx27, 1, 0, 0, 0, 0x426074, 0x42600c, v28, eax18), reinterpret_cast<int1_t>(eax29 == 1)))))) {
            }
            ecx30 = a2 + 36;
            eax31 = fun_41106e(ecx30, ecx30, ecx30);
            if (eax31) {
                eax32 = g428d50;
                g428d50 = eax32 + 1;
                if (!v7) {
                    eax33 = g429840;
                    g429840 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax33) + reinterpret_cast<unsigned char>(a2));
                    ecx34 = g429854;
                    g429854 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx34) + reinterpret_cast<unsigned char>(a2));
                    edx35 = g429854;
                    below_or_equal36 = reinterpret_cast<unsigned char>(edx35) <= reinterpret_cast<unsigned char>(g42984c);
                    if (!below_or_equal36) {
                        eax37 = g429854;
                        g42984c = eax37;
                    }
                    zf38 = g429850 == 0;
                    if (zf38) {
                        g429844 = eax31;
                    } else {
                        ecx39 = g429850;
                        *reinterpret_cast<void***>(ecx39 + 4) = eax31;
                    }
                    edx40 = g429850;
                    *reinterpret_cast<void***>(eax31) = edx40;
                    *reinterpret_cast<void***>(eax31 + 4) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<void***>(eax31 + 8) = a4;
                    *reinterpret_cast<void***>(eax31 + 12) = a5;
                    *reinterpret_cast<void***>(eax31 + 16) = a2;
                    *reinterpret_cast<void***>(eax31 + 20) = a3;
                    *reinterpret_cast<void***>(eax31 + 24) = eax18;
                    g429850 = eax31;
                } else {
                    *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<void***>(eax31 + 4) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<void***>(eax31 + 8) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<void***>(eax31 + 12) = reinterpret_cast<void**>(0xfedcbabc);
                    *reinterpret_cast<void***>(eax31 + 16) = a2;
                    *reinterpret_cast<void***>(eax31 + 20) = reinterpret_cast<void**>(3);
                    *reinterpret_cast<void***>(eax31 + 24) = reinterpret_cast<void**>(0);
                }
                eax41 = g428d58;
                v42 = eax41;
                fun_411195(eax31 + 28, *reinterpret_cast<void***>(&v42), 4, ecx30, eax18, eax31, v7, ebp43, __return_address());
                edx44 = g428d58;
                v45 = edx44;
                fun_411195(reinterpret_cast<unsigned char>(eax31) + reinterpret_cast<unsigned char>(a2) + 32, *reinterpret_cast<void***>(&v45), 4, ecx30, eax18, eax31, v7, ebp43, __return_address());
                ecx46 = g428d5a;
                v47 = ecx46;
                fun_411195(eax31 + 32, *reinterpret_cast<void***>(&v47), a2, ecx30, eax18, eax31, v7, ebp43, __return_address());
                eax26 = eax31 + 32;
            } else {
                eax26 = reinterpret_cast<void**>(0);
            }
        }
    } else {
        if (!a4) {
            eax49 = fun_41119f(ecx21, 0, 0, 0, 0, 0x426074, 0x426078, v48, eax18);
            if (reinterpret_cast<int1_t>(eax49 == 1)) {
            }
        } else {
            eax51 = fun_41119f(a5, 0, 0, 0, 0, 0x4260a0, a4, a5, v50);
            if (reinterpret_cast<int1_t>(eax51 == 1)) {
            }
        }
        eax26 = reinterpret_cast<void**>(0);
    }
    return eax26;
}

int32_t GetSystemInfo = 0x2c938;

int32_t VirtualProtect = 0x2c926;

int32_t fun_411325(void** ecx) {
    void* esp2;
    void* ebp3;
    void** v4;
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
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void* v24;
    void* v25;
    int32_t eax26;
    void* v27;
    int32_t v28;
    int32_t v29;
    uint32_t v30;
    void** ecx31;
    void** ecx32;
    uint32_t ecx33;
    uint32_t v34;
    int32_t v35;
    int1_t zf36;
    uint32_t v37;
    int32_t v38;
    void* v39;
    int32_t v40;
    int32_t eax41;
    int32_t v42;
    uint32_t v43;
    int32_t eax44;
    void** ecx45;
    void** ecx46;
    uint32_t ecx47;
    uint32_t v48;
    uint32_t v49;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebp3 = esp2;
    fun_414c20(ecx, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23);
    v24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp3) - 88);
    v25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 100 - 4 + 4);
    eax26 = reinterpret_cast<int32_t>(VirtualQuery(v25, v24, 28));
    if (eax26) {
        v27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp3) - 60);
        GetSystemInfo(v27, v25, v24, 28);
        v28 = v29;
        v30 = (reinterpret_cast<uint32_t>(~(v28 - 1)) & reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(esp2) - 100 - 4 + 4)) - v28;
        ecx31 = g429638;
        ecx32 = ecx31 - 1;
        ecx33 = -reinterpret_cast<unsigned char>(ecx32);
        v34 = ((ecx33 - (ecx33 + reinterpret_cast<uint1_t>(ecx33 < ecx33 + reinterpret_cast<uint1_t>(!!ecx32))) & 0xfffffff1) + 17) * v28 + v35;
        if (v30 >= v34) {
            zf36 = reinterpret_cast<int1_t>(g429638 == 1);
            if (zf36) {
                v37 = v30;
            } else {
                v38 = v35;
                do {
                    v39 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp3) - 88);
                    v40 = v38;
                    eax41 = reinterpret_cast<int32_t>(VirtualQuery(v40, v39, 28, v27, v25, v24, 28));
                    if (!eax41) 
                        goto addr_42119a_8;
                    v38 = v38 + v42;
                } while (!(v43 & 0x1000));
                goto addr_4211b5_10;
            }
        } else {
            eax44 = 0;
            goto addr_421232_12;
        }
    } else {
        eax44 = 0;
        goto addr_421232_12;
    }
    addr_421203_14:
    ecx45 = g429638;
    ecx46 = ecx45 - 1;
    ecx47 = -reinterpret_cast<unsigned char>(ecx46);
    eax44 = reinterpret_cast<int32_t>(VirtualProtect(v37, v28, (ecx47 - (ecx47 + reinterpret_cast<uint1_t>(ecx47 < ecx47 + reinterpret_cast<uint1_t>(!!ecx46))) & 0x103) + 1, reinterpret_cast<int32_t>(ebp3) - 12, v27, v25, v24, 28));
    addr_421232_12:
    return eax44;
    addr_42119a_8:
    eax44 = 0;
    goto addr_421232_12;
    addr_4211b5_10:
    v37 = v48;
    if (!(v49 & 0x100)) {
        if (v30 >= v37) {
            if (v37 < v34) {
                v37 = v34;
            }
            VirtualAlloc(v37, v28, 0x1000, 4, v40, v39, 28, v27, v25, v24, 28);
            goto addr_421203_14;
        } else {
            eax44 = 0;
            goto addr_421232_12;
        }
    } else {
        eax44 = 1;
        goto addr_421232_12;
    }
}

void** fun_415880(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void*** ebp7;
    void** ebp8;
    void** eax9;
    int32_t eax10;
    void** v11;
    void** eax12;
    void** eax13;
    void** v14;
    void** eax15;
    void** eax16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void* v26;
    void** v27;
    void** eax28;
    int32_t eax29;
    void** eax30;

    ebp7 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_411131(ecx);
    if (!a6 && (eax9 = fun_41119f(ecx, 2, 0x425bc0, 0x23a, 0, 0x425df4, ebp8, __return_address(), a2), reinterpret_cast<int1_t>(eax9 == 1))) {
        fun_411037(ebp8);
    }
    eax10 = reinterpret_cast<int32_t>(GetModuleFileNameA());
    if (!eax10) {
        fun_411258(ebp7 + 0xffffeee8, 0x425b7c, 0, ebp7 + 0xffffeee8, 0x104);
    }
    v11 = reinterpret_cast<void**>(ebp7 + 0xffffeee8);
    eax12 = fun_411235(v11, 0, v11, 0x104);
    if (reinterpret_cast<unsigned char>(eax12) > reinterpret_cast<unsigned char>(64)) {
        eax13 = fun_411235(v11, 0, v11, 0x104);
        v11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v11) + reinterpret_cast<unsigned char>(eax13) + 0xffffffc0);
        fun_411492(v11, 0x425b78, 3, 0, v11, 0x104);
    }
    v14 = a5;
    if (v14 && (eax15 = fun_411235(v14, 0, v11, v14), reinterpret_cast<unsigned char>(eax15) > reinterpret_cast<unsigned char>(64))) {
        eax16 = fun_411235(v14, 0, v11, v14);
        v14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v14) + reinterpret_cast<unsigned char>(eax16) + 0xffffffc0);
        fun_411492(v14, 0x425b78, 3, 0, v11, v14);
    }
    if (!reinterpret_cast<int1_t>(a2 == 2)) {
        v17 = reinterpret_cast<void**>(0x4250ec);
    } else {
        v17 = reinterpret_cast<void**>(0x425d68);
    }
    if (!*reinterpret_cast<void***>(a6)) {
        v18 = reinterpret_cast<void**>(0x4250ec);
    } else {
        v18 = a6;
    }
    if (!*reinterpret_cast<void***>(a6) || !reinterpret_cast<int1_t>(a2 == 2)) {
        v19 = reinterpret_cast<void**>(0x4250ec);
    } else {
        v19 = reinterpret_cast<void**>(0x425d58);
    }
    if (!*reinterpret_cast<void***>(a6)) {
        v20 = reinterpret_cast<void**>(0x4250ec);
    } else {
        v20 = reinterpret_cast<void**>(0x425b54);
    }
    if (!a4) {
        v21 = reinterpret_cast<void**>(0x4250ec);
    } else {
        v21 = a4;
    }
    if (!a4) {
        v22 = reinterpret_cast<void**>(0x4250ec);
    } else {
        v22 = reinterpret_cast<void**>(0x425d4c);
    }
    if (!a3) {
        v23 = reinterpret_cast<void**>(0x4250ec);
    } else {
        v23 = a3;
    }
    if (!a3) {
        v24 = reinterpret_cast<void**>(0x4250ec);
    } else {
        v24 = reinterpret_cast<void**>(0x425d40);
    }
    if (!v14) {
        v25 = reinterpret_cast<void**>(0x4250ec);
    } else {
        v25 = v14;
    }
    if (!v14) {
        v26 = reinterpret_cast<void*>(0x4250ec);
    } else {
        v26 = reinterpret_cast<void*>("\nModule: ");
    }
    v27 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(a2) * 4 + 0x428d34);
    eax28 = fun_41100a(ebp7 + 0xffffeff0, 0x1000, 0x425cd0, v27, v11, v26, v25, v24, v23, v22, v21, v20, v19, v18, v17);
    if (reinterpret_cast<signed char>(eax28) < reinterpret_cast<signed char>(0)) {
        fun_411258(ebp7 + 0xffffeff0, 0x425c14, 0, v11, v14);
    }
    eax29 = fun_41107d(ebp7 + 0xffffeff0, "Microsoft Visual C++ Debug Library", 0x12012, 0, v11, v14);
    if (eax29 == 3) {
        fun_411401(22);
        fun_411212(3);
    }
    if (eax29 != 4) {
    }
    eax30 = fun_411087(0, 0, v11, v14, ebp8);
    return eax30;
}

int32_t g4298f8 = 0;

int32_t fun_4113d9(void** ecx, void** a2) {
    int32_t eax3;
    int32_t eax4;
    int32_t eax5;

    eax3 = g4298f8;
    if (!eax3 || (eax4 = reinterpret_cast<int32_t>(eax3(a2)), !eax4)) {
        eax5 = 0;
    } else {
        eax5 = 1;
    }
    return eax5;
}

void** fun_411366(void** ecx, void** a2);

void** fun_41119a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** v10;
    void** v11;
    void** edx12;
    void** v13;
    void** eax14;
    void** v15;
    void** v16;
    void** eax17;
    void** v18;
    void** v19;
    void** eax20;
    void** ecx21;
    void** eax22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** ecx27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** ebp32;
    void** eax33;
    void** v34;
    void** v35;
    uint32_t eax36;
    uint32_t v37;
    void** v38;
    void** v39;
    void** v40;
    void** eax41;
    void** v42;
    void** v43;
    void** eax44;
    void** v45;
    void** v46;
    void** eax47;
    void** v48;
    void** v49;
    void** eax50;
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

    if (a2) {
        if (a3) {
            v10 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(a2) & 0xfffffffc) - 8);
            *reinterpret_cast<unsigned char*>(&ecx) = g428d58;
            v11 = ecx;
            edx12 = a2 - 4;
            eax14 = fun_417d50(ecx, edx12, *reinterpret_cast<unsigned char*>(&v11), 4, v13);
            if (!eax14) {
                *reinterpret_cast<unsigned char*>(&edx12) = g428d5b;
                v15 = edx12;
                eax17 = fun_417d50(ecx, v10 + 4, *reinterpret_cast<unsigned char*>(&v15), 4, v16);
                if (!eax17 && (eax20 = fun_41119f(a2, 1, 0, 0, 0, 0x4268c0, a2, v18, v19), reinterpret_cast<int1_t>(eax20 == 1))) {
                }
                if (!(reinterpret_cast<unsigned char>(a4 - 1) & reinterpret_cast<unsigned char>(a4))) {
                    if (reinterpret_cast<unsigned char>(a5) < reinterpret_cast<unsigned char>(a3) || !a5) {
                        ecx21 = *reinterpret_cast<void***>(v10);
                        eax22 = fun_411366(ecx21, ecx21);
                        v23 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax22) - (reinterpret_cast<unsigned char>(a2) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v10))));
                        if (reinterpret_cast<unsigned char>(a4) <= reinterpret_cast<unsigned char>(4)) {
                            v24 = reinterpret_cast<void**>(4);
                        } else {
                            v24 = a4;
                        }
                        v25 = v24 - 1;
                        v26 = reinterpret_cast<void**>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(a5)) & 3);
                        ecx27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v26) + reinterpret_cast<unsigned char>(a3));
                        eax33 = fun_411064(ecx27, reinterpret_cast<unsigned char>(ecx27) + reinterpret_cast<unsigned char>(v25) + 8, 1, a6, a7, v28, v24, v10, v26, v29, v23, v30, v31, ebp32, __return_address(), a2, a3, v25, a5, a6, a7, a8, a9);
                        if (eax33) {
                            v34 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(eax33) + reinterpret_cast<unsigned char>(v25) + reinterpret_cast<unsigned char>(v26) + reinterpret_cast<unsigned char>(a5) + 8 & ~reinterpret_cast<unsigned char>(v25)) - reinterpret_cast<unsigned char>(a5));
                            v35 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v34) - reinterpret_cast<unsigned char>(v26) - 8);
                            eax36 = g428d5b;
                            v37 = eax36;
                            fun_411195(v35 + 4, *reinterpret_cast<void***>(&v37), 4, v38, v24, v10, v26, eax33, v23);
                            *reinterpret_cast<void***>(v35) = eax33;
                            if (reinterpret_cast<unsigned char>(v23) <= reinterpret_cast<unsigned char>(a3)) {
                                v39 = v23;
                            } else {
                                v39 = a3;
                            }
                            fun_411352(v34, a2, v39, v39, v24, v10);
                            v40 = *reinterpret_cast<void***>(v10);
                            fun_41141a(v10, v40, 1, v39, v24, v10, v26, eax33, v23, v34, v35, ebp32, __return_address(), a2, a3, v25, a5, a6, a7, a8);
                            eax41 = v34;
                        } else {
                            eax41 = reinterpret_cast<void**>(0);
                        }
                    } else {
                        if (!0 && (eax44 = fun_41119f(0, 2, 0x4260e0, 0xa28, 0, 0x42686c, v42, v43, v10), reinterpret_cast<int1_t>(eax44 == 1))) {
                        }
                        g42962c = 22;
                        eax41 = reinterpret_cast<void**>(0);
                    }
                } else {
                    if (!0 && (eax47 = fun_41119f(0, 2, 0x4260e0, 0xa22, 0, 0x426894, v45, v46, v10), reinterpret_cast<int1_t>(eax47 == 1))) {
                    }
                    g42962c = 22;
                    eax41 = reinterpret_cast<void**>(0);
                }
            } else {
                eax50 = fun_41119f(ecx, 1, 0, 0, 0, 0x426908, a2, v48, v49);
                if (reinterpret_cast<int1_t>(eax50 == 1)) {
                }
                eax41 = reinterpret_cast<void**>(0);
            }
        } else {
            fun_4115af(ecx, a2, v51, v52, v53, v54, v55, v56, v57, v58, ebp32, __return_address(), a2, a3, a4);
            eax41 = reinterpret_cast<void**>(0);
        }
    } else {
        eax41 = fun_4111ae(a3, a4, a5, a6, a7, v59, v60, v61, v62, v63, v64);
    }
    return eax41;
}

void** g42963c = reinterpret_cast<void**>(0);

uint32_t fun_4111ea(void** ecx, void** a2, void** a3) {
    int32_t eax4;
    int1_t zf5;
    void** edx6;
    uint32_t eax7;
    void** eax8;
    void** ecx9;
    void** eax10;

    if (a2) {
        eax4 = fun_4112f8(ecx, a2 - 32, 32, 0, ecx);
        if (eax4) {
            zf5 = g42af90 == 3;
            if (!zf5) {
                edx6 = g42af80;
                eax7 = reinterpret_cast<uint32_t>(HeapValidate(edx6, 0, a2 - 32, ecx));
            } else {
                eax8 = fun_4111c7(a2 - 32, ecx);
                if (!eax8) {
                    ecx9 = g42963c;
                    if (!(reinterpret_cast<unsigned char>(ecx9) & 0x8000)) {
                        eax10 = g42af80;
                        eax7 = reinterpret_cast<uint32_t>(HeapValidate(eax10, 0, a2 - 32));
                    } else {
                        eax7 = 1;
                    }
                } else {
                    eax7 = fun_411221(eax8, a2 - 32);
                }
            }
        } else {
            eax7 = 0;
        }
    } else {
        eax7 = 0;
    }
    return eax7;
}

void** fun_4110c8(void** ecx, void** a2, uint32_t a3);

void** fun_411456(void** a1, void** a2, uint32_t a3);

void** fun_418b40(void** a1) {
    void* ebp2;
    void** eax3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    int1_t less_or_equal8;
    void** eax9;
    void** v10;
    void** eax11;
    void** v12;
    void** ecx13;
    void** eax14;
    void** eax15;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax3 = g428eb0;
    v4 = eax3;
    v5 = reinterpret_cast<void**>(0);
    while (1) {
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(a1 + 16)) >= reinterpret_cast<signed char>(16)) {
            v6 = reinterpret_cast<void**>(16);
        } else {
            v6 = *reinterpret_cast<void***>(a1 + 16);
        }
        if (reinterpret_cast<signed char>(v5) >= reinterpret_cast<signed char>(v6)) 
            break;
        *reinterpret_cast<unsigned char*>(&v7 + 3) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v5) + 32);
        less_or_equal8 = g428ec4 <= 1;
        if (less_or_equal8) {
            eax9 = fun_4110c8(v5, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v7 + 3)), 0x157);
            v10 = eax9;
        } else {
            eax11 = fun_41124e(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v7 + 3)), 0x157);
            v10 = eax11;
        }
        if (!v10) {
            v12 = reinterpret_cast<void**>(32);
        } else {
            v12 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v7 + 3)));
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp2) + reinterpret_cast<unsigned char>(v5) + 0xffffffb0) = *reinterpret_cast<signed char*>(&v12);
        fun_411456(reinterpret_cast<int32_t>(ebp2) + reinterpret_cast<unsigned char>(v5) * 3 + 0xffffffc4, 0x4267d4, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v7 + 3)));
        ++v5;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp2) + reinterpret_cast<unsigned char>(v5) + 0xffffffb0) = 0;
    ecx13 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xffffffc4);
    eax14 = fun_41119f(ecx13, 0, 0, 0, 0, 0x4267c0, reinterpret_cast<int32_t>(ebp2) + 0xffffffb0, ecx13, v12);
    if (reinterpret_cast<int1_t>(eax14 == 1)) {
    }
    eax15 = fun_411087(v4, v12, v10, v6, v7);
    return eax15;
}

void** fun_4110c8(void** ecx, void** a2, uint32_t a3) {
    void** ebp4;
    void** eax5;
    void** eax6;

    if (reinterpret_cast<unsigned char>(a2 + 1) > reinterpret_cast<unsigned char>(0x100) && (eax5 = fun_41119f(ecx, 2, 0x426ae8, 56, 0, 0x426af4, ebp4, __return_address(), a2), reinterpret_cast<int1_t>(eax5 == 1))) {
    }
    eax6 = g428ed4;
    return static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(eax6 + reinterpret_cast<unsigned char>(a2) * 2))) & a3;
}

void** fun_411456(void** a1, void** a2, uint32_t a3) {
    void* ebp4;
    void** v5;
    void** ecx6;
    void** v7;
    void** v8;
    void** v9;
    void** eax10;
    void** v11;
    void** v12;
    void** v13;
    void** eax14;
    int32_t v15;
    void** eax16;
    void** v17;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xffffffd4);
    ecx6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 16);
    if (!a2 && (eax10 = fun_41119f(ecx6, 2, 0x426adc, 93, 0, 0x426a8c, v7, v8, v9), reinterpret_cast<int1_t>(eax10 == 1))) {
    }
    if (!a1 && (eax14 = fun_41119f(ecx6, 2, 0x426adc, 94, 0, 0x426a40, v11, v12, v13), reinterpret_cast<int1_t>(eax14 == 1))) {
    }
    eax16 = fun_41134d(v5, a2, ecx6, v15, a1, 0x7fffffff, a1, 66);
    if (a1) {
        if (0) {
            fun_4114ab(v5, 0, v5, v17, a1, 0x7ffffffe, a1, 66);
        } else {
            *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0);
        }
    }
    return eax16;
}

int32_t g42af60;

void fun_4114b0(void** ecx, void** a2) {
    void** v3;
    void** v4;
    void** eax5;
    void** eax6;
    void** v7;
    uint32_t ecx8;
    void** ecx9;
    int32_t eax10;
    void** v11;
    void** v12;
    void** eax13;
    void** v14;
    void** eax15;
    void** v16;
    void** eax17;
    void** v18;
    void** v19;
    void** ecx20;
    void** eax21;
    void** v22;
    void** ecx23;
    void** eax24;
    void** v25;
    void** v26;
    void** ecx27;
    void** eax28;
    int1_t zf29;
    void** v30;
    void** eax31;

    v3 = reinterpret_cast<void**>(0);
    eax5 = fun_41119f(ecx, 0, 0, 0, 0, 0x426074, 0x4267a8, 0, v4);
    if (reinterpret_cast<int1_t>(eax5 == 1)) {
    }
    if (a2) {
        ecx = a2;
        v3 = *reinterpret_cast<void***>(ecx);
    }
    eax6 = g429850;
    v7 = eax6;
    while (v7 && v7 != v3) {
        if (!((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7 + 20)) & 0xffff) == 3 || (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7 + 20)) & 0xffff) || (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7 + 20)) & 0xffff) == 2 && (ecx8 = g428d4c, !(ecx8 & 16))))) {
            if (*reinterpret_cast<void***>(v7 + 8)) {
                ecx9 = *reinterpret_cast<void***>(v7 + 8);
                eax10 = fun_4112f8(ecx9, ecx9, 1, 0, v3);
                if (eax10) {
                    v11 = *reinterpret_cast<void***>(v7 + 12);
                    v12 = *reinterpret_cast<void***>(v7 + 8);
                    eax13 = fun_41119f(v7, 0, 0, 0, 0, 0x426780, v12, v11, v3);
                    if (reinterpret_cast<int1_t>(eax13 == 1)) {
                    }
                } else {
                    v14 = *reinterpret_cast<void***>(v7 + 12);
                    eax15 = fun_41119f(ecx9, 0, 0, 0, 0, 0x426790, v14, v3, v7);
                    if (reinterpret_cast<int1_t>(eax15 == 1)) {
                    }
                }
            }
            v16 = *reinterpret_cast<void***>(v7 + 24);
            eax17 = fun_41119f(v7, 0, 0, 0, 0, 0x426778, v16, v3, v7);
            if (reinterpret_cast<int1_t>(eax17 == 1)) {
            }
            if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7 + 20)) & 0xffff) != 4) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v7 + 20) == 1)) {
                    if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7 + 20)) & 0xffff) == 2) {
                        v18 = *reinterpret_cast<void***>(v7 + 16);
                        v19 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(v7 + 20)) >> 16) & 0xffff);
                        ecx20 = v7 + 32;
                        eax21 = fun_41119f(ecx20, 0, 0, 0, 0, 0x4266cc, ecx20, v19, v18);
                        if (reinterpret_cast<int1_t>(eax21 == 1)) {
                        }
                        fun_418b40(v7);
                    }
                } else {
                    v22 = *reinterpret_cast<void***>(v7 + 16);
                    ecx23 = v7 + 32;
                    eax24 = fun_41119f(ecx23, 0, 0, 0, 0, 0x426708, ecx23, v22, v3);
                    if (reinterpret_cast<int1_t>(eax24 == 1)) {
                    }
                    fun_418b40(v7);
                }
            } else {
                v25 = *reinterpret_cast<void***>(v7 + 16);
                v26 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(v7 + 20)) >> 16) & 0xffff);
                ecx27 = v7 + 32;
                eax28 = fun_41119f(ecx27, 0, 0, 0, 0, 0x426738, ecx27, v26, v25);
                if (reinterpret_cast<int1_t>(eax28 == 1)) {
                }
                zf29 = g42af60 == 0;
                if (zf29) {
                    fun_418b40(v7);
                } else {
                    v30 = *reinterpret_cast<void***>(v7 + 16);
                    g42af60(v7 + 32, v30);
                }
            }
        }
        ecx = v7;
        v7 = *reinterpret_cast<void***>(ecx);
    }
    eax31 = fun_41119f(ecx, 0, 0, 0, 0, 0x426074, 0x4266b0, v3, v7);
    if (reinterpret_cast<int1_t>(eax31 == 1)) {
    }
    return;
}

void** fun_41128a(void** ecx, void** a2, int32_t a3);

void** fun_411366(void** ecx, void** a2) {
    void** eax3;

    eax3 = fun_41128a(ecx, a2, 1);
    return eax3;
}

void** fun_419ac0(void** ecx, void** a2, void** a3, void* a4) {
    uint32_t v5;
    void** eax6;

    v5 = reinterpret_cast<uint32_t>(a2 - 0x3a4);
    if (v5 > 18) 
        goto addr_419b09_2;
    switch (*reinterpret_cast<unsigned char*>(v5 + 0x419b23)) {
    case 0:
        eax6 = reinterpret_cast<void**>(0x411);
        break;
    case 1:
        eax6 = reinterpret_cast<void**>(0x804);
        break;
    case 2:
        eax6 = reinterpret_cast<void**>(0x412);
        break;
    case 3:
        eax6 = reinterpret_cast<void**>(0x404);
        break;
        addr_419b09_2:
    case 4:
        eax6 = reinterpret_cast<void**>(0);
    }
    return eax6;
}

int32_t g42992c = 0;

int32_t fun_411028(int32_t ecx, int32_t a2) {
    int32_t eax3;

    eax3 = g42992c;
    g42992c = a2;
    return eax3;
}

struct s29 {
    signed char[4] pad4;
    struct s29* f4;
    struct s29* f8;
};

struct s30 {
    void** f0;
    signed char[7] pad8;
    int32_t f8;
    int32_t f12;
    signed char[4076] pad4092;
    int32_t f4092;
};

struct s32 {
    int32_t f0;
    struct s31* f4;
    struct s31* f8;
    signed char[4064] pad4076;
    int32_t f4076;
};

struct s31 {
    signed char[4] pad4;
    struct s32* f4;
    struct s32* f8;
};

void** fun_4110af(void** a1) {
    void** v2;
    void** v3;
    void** v4;
    void* v5;
    int32_t v6;
    struct s29* v7;
    struct s30* v8;
    uint32_t eax9;
    struct s30* v10;
    struct s30* v11;
    struct s32* v12;
    struct s32* v13;
    int32_t ecx14;
    void** eax15;
    void** ecx16;

    v2 = *reinterpret_cast<void***>(a1 + 16);
    v3 = *reinterpret_cast<void***>(a1 + 8);
    v4 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<signed char>(v3) >= reinterpret_cast<signed char>(0)) {
        v3 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v3) << 1);
        ++v4;
    }
    v5 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v2 + reinterpret_cast<unsigned char>(v4) * 0x204) + 0x144);
    v6 = 0;
    while (v6 < 63) {
        v7 = reinterpret_cast<struct s29*>(reinterpret_cast<uint32_t>(v5) + v6 * 8);
        v7->f8 = v7;
        v7->f4 = v7;
        ++v6;
    }
    v8 = reinterpret_cast<struct s30*>((reinterpret_cast<unsigned char>(v4) << 15) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)));
    eax9 = reinterpret_cast<uint32_t>(VirtualAlloc(v8, 0x8000, 0x1000, 4));
    if (eax9) {
        v10 = v8 + 7;
        v11 = v8;
        while (reinterpret_cast<uint32_t>(v11) <= reinterpret_cast<uint32_t>(v10)) {
            v11->f8 = -1;
            v11->f4092 = -1;
            v11->f12 = 0xff0;
            *reinterpret_cast<struct s31**>(&v11->f12 + 1) = reinterpret_cast<struct s31*>(&v11->f12 + 0x400);
            *reinterpret_cast<struct s31**>(&v11->f12 + 2) = reinterpret_cast<struct s31*>(&v11->f12 - 0x400);
            (&v11->f12)[0x3fb] = 0xff0;
            ++v11;
        }
        *reinterpret_cast<struct s32**>(reinterpret_cast<uint32_t>(v5) + 0x1f8 + 4) = reinterpret_cast<struct s32*>(&v8->f12);
        v12 = *reinterpret_cast<struct s32**>(reinterpret_cast<uint32_t>(v5) + 0x1f8 + 4);
        v12->f8 = reinterpret_cast<struct s31*>(reinterpret_cast<uint32_t>(v5) + 0x1f8);
        *reinterpret_cast<struct s32**>(reinterpret_cast<uint32_t>(v5) + 0x1f8 + 8) = reinterpret_cast<struct s32*>(&v10->f12);
        v13 = *reinterpret_cast<struct s32**>(reinterpret_cast<uint32_t>(v5) + 0x1f8 + 8);
        v13->f4 = reinterpret_cast<struct s31*>(reinterpret_cast<uint32_t>(v5) + 0x1f8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(v2 + reinterpret_cast<unsigned char>(v4) * 4) + 68) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(v2 + reinterpret_cast<unsigned char>(v4) * 4) + 0xc4) = 1;
        ecx14 = *reinterpret_cast<signed char*>(v2 + 67);
        *reinterpret_cast<signed char*>(v2 + 67) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(v2 + 67) + 1);
        if (!ecx14) 
            goto addr_41b8ec_15;
    } else {
        eax15 = reinterpret_cast<void**>(0xffffffff);
        goto addr_41b916_17;
    }
    addr_41b8fb_18:
    ecx16 = v4;
    *reinterpret_cast<void***>(a1 + 8) = reinterpret_cast<void**>(~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx16)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 8)));
    eax15 = v4;
    addr_41b916_17:
    return eax15;
    addr_41b8ec_15:
    *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)) | 1);
    goto addr_41b8fb_18;
}

void fun_41d3e0(void** a1, void** a2, signed char* a3, uint32_t a4, int32_t a5) {
    signed char* v6;
    void** ecx7;
    signed char* v8;
    uint32_t eax9;
    void** eax10;
    uint32_t edx11;
    uint32_t edx12;
    signed char* v13;
    signed char v14;

    v6 = a3;
    if (a5) {
        *v6 = 45;
        ++v6;
        ecx7 = reinterpret_cast<void**>(-(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<uint1_t>(!!a1)));
        a1 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(a1));
        a2 = ecx7;
    }
    v8 = v6;
    do {
        eax9 = fun_4115a0(a1, a2, a4, 0);
        eax10 = fun_411555(a1, a2, a4, 0);
        a1 = eax10;
        a2 = reinterpret_cast<void**>(0);
        if (eax9 <= 9) {
            edx11 = eax9 + 48;
            *v6 = *reinterpret_cast<signed char*>(&edx11);
            ++v6;
        } else {
            edx12 = eax9 + 87;
            *v6 = *reinterpret_cast<signed char*>(&edx12);
            ++v6;
        }
    } while (!0 && reinterpret_cast<unsigned char>(a1) > reinterpret_cast<unsigned char>(0));
    *v6 = 0;
    v13 = v6 - 1;
    do {
        v14 = *v13;
        *v13 = *v8;
        *v8 = v14;
        --v13;
        ++v8;
    } while (reinterpret_cast<uint32_t>(v8) < reinterpret_cast<uint32_t>(v13));
    return;
}

int32_t g429200 = 0x4112df;

int32_t g42920c = 0x4112df;

int32_t g429204 = 0x4112df;

void** g428ef0 = reinterpret_cast<void**>(92);

void** g428ef4 = reinterpret_cast<void**>(76);

void** fun_41134d(void** a1, void** a2, void** a3, int32_t a4, void** a5, void* a6, void** a7, void** a8) {
    void* ebp9;
    void** eax10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** ecx18;
    int32_t v19;
    void** eax20;
    void** ecx21;
    void** v22;
    void** ecx23;
    void** v24;
    void** v25;
    void** ecx26;
    int32_t v27;
    int32_t v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** eax34;
    void** eax35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** edx47;
    void** eax48;
    int16_t v49;
    void** ax50;
    void** v51;
    void** eax52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** eax57;
    void** eax58;
    void** v59;
    void** eax60;
    void** edx61;
    void** v62;
    void** eax63;
    void** v64;
    void** edx65;
    void** eax66;
    void** edx67;
    void** eax68;
    uint32_t v69;
    void** eax70;
    void** edx71;
    void** eax72;
    void** v73;
    void** eax74;
    void** eax75;
    void** edx76;
    void** eax77;
    void** eax78;
    void** edx79;
    void** eax80;
    void** edx81;
    void** eax82;
    void* v83;
    void** edx84;
    uint32_t eax85;
    void** edx86;
    void** eax87;
    void** v88;
    void** eax89;

    ebp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax10 = g428eb0;
    v11 = eax10;
    v12 = reinterpret_cast<void**>(0);
    v13 = reinterpret_cast<void**>(0);
    v14 = reinterpret_cast<void**>(0);
    while ((v15 = *reinterpret_cast<void***>(a2), ++a2, !!v15) && !0) {
        if (static_cast<int32_t>(reinterpret_cast<signed char>(v15)) < 32 || static_cast<int32_t>(reinterpret_cast<signed char>(v15)) > 0x78) {
            v16 = reinterpret_cast<void**>(0);
        } else {
            v16 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(v15 + 0x4273c0))) & 15);
        }
        v13 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(v13 + reinterpret_cast<unsigned char>(v16) * 8) + 0x4273e0)) >> 4);
        v17 = v13;
        ecx18 = v17;
        switch (ecx18) {
            addr_41fe6d_9:
        case 0:
            v19 = 0;
            eax20 = g428ed4;
            ecx21 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(eax20 + reinterpret_cast<unsigned char>(v15) * 2))) & 0x8000);
            if (ecx21 && ((eax20 = a1, ecx21 = v15, fun_420ec0(ecx21, ecx21, eax20, reinterpret_cast<int32_t>(ebp9) + 0xfffffdc4, *reinterpret_cast<int24_t*>(&v22)), v15 = *reinterpret_cast<void***>(a2), ecx23 = a2 + 1, a2 = ecx23, !v15) && (eax20 = fun_41119f(ecx23, 2, 0x427464, 0x192, 0, 0x427470, v22, v24, v25), reinterpret_cast<int1_t>(eax20 == 1)))) {
            }
            ecx26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffffdc4);
            eax20 = v15;
            fun_420ec0(ecx26, eax20, a1, ecx26, *reinterpret_cast<int24_t*>(&v22));
            break;
        case 1:
            v27 = 0;
            v28 = 0;
            v29 = reinterpret_cast<void**>(0);
            v30 = reinterpret_cast<void**>(0);
            v31 = reinterpret_cast<void**>(0);
            v32 = reinterpret_cast<void**>(0xffffffff);
            v19 = 0;
            break;
        case 2:
            v33 = v15 - 32;
            if (reinterpret_cast<unsigned char>(v33) <= reinterpret_cast<unsigned char>(16)) {
                switch (*reinterpret_cast<unsigned char*>(v33 + 0x420a80)) {
                case 0:
                    v31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) | 2);
                    break;
                case 1:
                    v31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) | 0x80);
                    break;
                case 2:
                    v31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) | 1);
                    break;
                case 3:
                    v31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) | 4);
                    break;
                case 4:
                    v31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) | 8);
                case 5:
                    goto 0x41ffa9;
                }
            }
            break;
        case 3:
            if (static_cast<int32_t>(reinterpret_cast<signed char>(v15)) != 42) {
                v29 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v29) * 10 + static_cast<int32_t>(reinterpret_cast<signed char>(v15)) + 0xffffffd0);
            } else {
                eax34 = fun_421070(reinterpret_cast<int32_t>(ebp9) + 16);
                v29 = eax34;
                if (reinterpret_cast<signed char>(v29) < reinterpret_cast<signed char>(0)) {
                    v31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) | 4);
                    v29 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(v29));
                }
            }
            break;
        case 4:
            v32 = reinterpret_cast<void**>(0);
            break;
        case 5:
            if (static_cast<int32_t>(reinterpret_cast<signed char>(v15)) != 42) {
                v32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v32) * 10 + static_cast<int32_t>(reinterpret_cast<signed char>(v15)) + 0xffffffd0);
            } else {
                eax35 = fun_421070(reinterpret_cast<int32_t>(ebp9) + 16);
                v32 = eax35;
                if (reinterpret_cast<signed char>(v32) < reinterpret_cast<signed char>(0)) {
                    v32 = reinterpret_cast<void**>(0xffffffff);
                }
            }
            break;
        case 6:
            v36 = v15 - 73;
            if (reinterpret_cast<unsigned char>(v36) > reinterpret_cast<unsigned char>(46)) {
                addr_420160_35:
                break;
            } else {
                switch (*reinterpret_cast<unsigned char*>(v36 + 0x420aa5)) {
                case 0:
                    if (static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(a2))) != 54 || static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(a2 + 1))) != 52) {
                        if (static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(a2))) != 51 || static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(a2 + 1))) != 50) {
                            if (!(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(a2))) == 100 || (static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(a2))) == 0x69 || (static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(a2))) == 0x6f || (static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(a2))) == 0x75 || (static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(a2))) == 0x78 || static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(a2))) == 88)))))) {
                                v13 = reinterpret_cast<void**>(0);
                                goto addr_41fe6d_9;
                            }
                        } else {
                            a2 = a2 + 2;
                            v31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) & 0xffff7fff);
                        }
                    } else {
                        a2 = a2 + 2;
                        v31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) | 0x8000);
                    }
                    break;
                case 1:
                    v31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) | 32);
                    break;
                case 2:
                    v31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) | 16);
                    break;
                case 3:
                    v31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) | 0x800);
                case 4:
                    goto 0x420160;
                }
                goto addr_420160_35;
            }
        case 7:
            v25 = v15 - 67;
            if (reinterpret_cast<unsigned char>(v25) > reinterpret_cast<unsigned char>(53)) {
                addr_42085d_49:
                if (v28) {
                    addr_420a16_50:
                    if (v14) {
                        fun_41141a(ecx18, v14, 2, v22, v24, v25, v36, v33, v17, v16, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46);
                        v14 = reinterpret_cast<void**>(0);
                        break;
                    }
                } else {
                    if (reinterpret_cast<unsigned char>(v31) & 64) {
                        if (!(reinterpret_cast<unsigned char>(v31) & 0x100)) {
                            if (!(reinterpret_cast<unsigned char>(v31) & 1)) {
                                if (reinterpret_cast<unsigned char>(v31) & 2) {
                                    v30 = reinterpret_cast<void**>(1);
                                }
                            } else {
                                v30 = reinterpret_cast<void**>(1);
                            }
                        } else {
                            v30 = reinterpret_cast<void**>(1);
                        }
                    }
                    v42 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v29) - reinterpret_cast<unsigned char>(v12) - reinterpret_cast<unsigned char>(v30));
                    if (!(reinterpret_cast<unsigned char>(v31) & 12)) {
                        fun_420f90(32, v42, a1, reinterpret_cast<int32_t>(ebp9) + 0xfffffdc4);
                    }
                    fun_420fe0(a1, reinterpret_cast<int32_t>(ebp9) + 0xffffffec, v30, a1, reinterpret_cast<int32_t>(ebp9) + 0xfffffdc4);
                    if (reinterpret_cast<unsigned char>(v31) & 8 && !(reinterpret_cast<unsigned char>(v31) & 4)) {
                        fun_420f90(48, v42, a1, reinterpret_cast<int32_t>(ebp9) + 0xfffffdc4);
                    }
                    if (!v19) 
                        goto addr_4209d7_64;
                    if (reinterpret_cast<signed char>(v12) > reinterpret_cast<signed char>(0)) 
                        goto addr_42093d_66;
                }
            } else {
                ecx18 = v25;
                edx47 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ecx18 + 0x420b10)));
                switch (edx47) {
                case 0:
                    if (!(reinterpret_cast<unsigned char>(v31) & 0x830)) {
                        ecx18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) | 0x800);
                        v31 = ecx18;
                    }
                case 5:
                    if (!(reinterpret_cast<unsigned char>(v31) & 0x810)) {
                        eax48 = fun_421070(reinterpret_cast<int32_t>(ebp9) + 16);
                        v49 = *reinterpret_cast<int16_t*>(&eax48);
                        ecx18 = *reinterpret_cast<void***>(&v49);
                        v12 = reinterpret_cast<void**>(1);
                    } else {
                        ax50 = fun_4210c0(reinterpret_cast<int32_t>(ebp9) + 16);
                        ecx18 = ax50;
                        v51 = ecx18;
                        eax52 = fun_411262(reinterpret_cast<int32_t>(ebp9) + 0xfffffdc8, *reinterpret_cast<uint16_t*>(&v51));
                        v12 = eax52;
                        if (reinterpret_cast<signed char>(v12) < reinterpret_cast<signed char>(0)) {
                            v28 = 1;
                        }
                    }
                    v53 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffffdc8);
                    break;
                case 1:
                    v27 = 1;
                    ecx18 = v15 + 32;
                    v15 = ecx18;
                case 7:
                    v31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) | 64);
                    v53 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffffdc8);
                    if (reinterpret_cast<signed char>(v32) >= reinterpret_cast<signed char>(0)) {
                        if (v32 || (ecx18 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(v15))), !reinterpret_cast<int1_t>(ecx18 == 0x67))) {
                            if (reinterpret_cast<signed char>(v32) > reinterpret_cast<signed char>(0x200)) {
                                v32 = reinterpret_cast<void**>(0x200);
                            }
                        } else {
                            v32 = reinterpret_cast<void**>(1);
                        }
                    } else {
                        v32 = reinterpret_cast<void**>(6);
                    }
                    if (reinterpret_cast<signed char>(v32) > reinterpret_cast<signed char>(0xa3)) {
                        eax57 = fun_411064(ecx18, v32 + 0x15d, 2, 0x427464, 0x300, v22, v24, v25, v36, v33, v17, v16, v54, v55, v39, v40, v41, v42, v43, v44, v45, v46, v56);
                        v14 = eax57;
                        if (!v14) {
                            v32 = reinterpret_cast<void**>(0xa3);
                        } else {
                            v53 = v14;
                        }
                    }
                    g429200(reinterpret_cast<int32_t>(ebp9) - 0x270, v53, static_cast<int32_t>(reinterpret_cast<signed char>(v15)), v32, v27);
                    if (reinterpret_cast<unsigned char>(v31) & 0x80 && !v32) {
                        g42920c(v53);
                    }
                    if (static_cast<int32_t>(reinterpret_cast<signed char>(v15)) == 0x67 && !(reinterpret_cast<unsigned char>(v31) & 0x80)) {
                        g429204(v53);
                    }
                    if (static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(v53))) == 45) {
                        v31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) | 0x100);
                        ++v53;
                    }
                    ecx18 = v53;
                    eax58 = fun_411235(ecx18, v22, v24, v25);
                    v12 = eax58;
                    break;
                case 2:
                    if (!(reinterpret_cast<unsigned char>(v31) & 0x830)) {
                        v31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) | 0x800);
                    }
                case 11:
                    if (!reinterpret_cast<int1_t>(v32 == 0xffffffff)) {
                        v24 = v32;
                    } else {
                        v24 = reinterpret_cast<void**>(0x7fffffff);
                    }
                    v59 = v24;
                    eax60 = fun_421070(reinterpret_cast<int32_t>(ebp9) + 16);
                    v53 = eax60;
                    if (!(reinterpret_cast<unsigned char>(v31) & 0x810)) {
                        if (!v53) {
                            edx61 = g428ef0;
                            v53 = edx61;
                        }
                        v62 = v53;
                        while ((ecx18 = v59, --v59, !!ecx18) && (ecx18 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(v62)))), !!ecx18)) {
                            ++v62;
                        }
                        v12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v62) - reinterpret_cast<unsigned char>(v53));
                    } else {
                        if (!v53) {
                            eax63 = g428ef4;
                            v53 = eax63;
                        }
                        v19 = 1;
                        v64 = v53;
                        while ((edx65 = v59, --v59, !!edx65) && *reinterpret_cast<void***>(v64)) {
                            v64 = v64 + 2;
                        }
                        ecx18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(v64) - reinterpret_cast<unsigned char>(v53)) >> 1);
                        v12 = ecx18;
                    }
                    break;
                    addr_4205a7_113:
                case 3:
                    goto addr_4205bd_114;
                case 4:
                    eax66 = fun_421070(reinterpret_cast<int32_t>(ebp9) + 16);
                    if (!eax66 || (ecx18 = eax66, !*reinterpret_cast<void***>(ecx18 + 4))) {
                        edx67 = g428ef0;
                        v53 = edx67;
                        eax68 = fun_411235(v53, v22, v24, v25);
                        v12 = eax68;
                    } else {
                        if (!(reinterpret_cast<unsigned char>(v31) & 0x800)) {
                            v19 = 0;
                            v53 = *reinterpret_cast<void***>(eax66 + 4);
                            ecx18 = eax66;
                            v12 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ecx18))));
                        } else {
                            v53 = *reinterpret_cast<void***>(eax66 + 4);
                            ecx18 = eax66;
                            __asm__("cdq ");
                            v12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ecx18)) - reinterpret_cast<unsigned char>(eax66)) >> 1);
                            v19 = 1;
                        }
                    }
                    break;
                case 6:
                    edx47 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) | 64);
                    v31 = edx47;
                    v69 = 10;
                    goto addr_420604_122;
                case 8:
                    ecx18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 16);
                    eax70 = fun_421070(ecx18);
                    if (!(reinterpret_cast<unsigned char>(v31) & 32)) {
                        *reinterpret_cast<void***>(eax70) = reinterpret_cast<void**>(0);
                    } else {
                        ecx18 = reinterpret_cast<void**>(0);
                        *reinterpret_cast<void***>(eax70) = reinterpret_cast<void**>(0);
                    }
                    v28 = 1;
                    break;
                case 9:
                    v69 = 8;
                    edx47 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) & 0x80);
                    if (edx47) {
                        v31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) | 0x200);
                        goto addr_420604_122;
                    }
                case 10:
                    v32 = reinterpret_cast<void**>(8);
                    goto addr_4205a7_113;
                case 12:
                    v69 = 10;
                    goto addr_420604_122;
                case 13:
                    goto addr_4205bd_114;
                case 14:
                    goto 0x42085d;
                }
                goto addr_42085d_49;
            }
            addr_4209d7_64:
            ecx18 = v53;
            fun_420fe0(ecx18, ecx18, v12, a1, reinterpret_cast<int32_t>(ebp9) + 0xfffffdc4);
            addr_4209f2_132:
            if (reinterpret_cast<unsigned char>(v31) & 4) {
                ecx18 = a1;
                fun_420f90(32, v42, ecx18, reinterpret_cast<int32_t>(ebp9) + 0xfffffdc4);
                goto addr_420a16_50;
            }
            addr_42093d_66:
            v41 = v53;
            ecx18 = v12;
            v40 = ecx18;
            while (edx71 = v40, eax72 = v40 - 1, v40 = eax72, !!edx71) {
                (&v22)[2] = *reinterpret_cast<void***>(v41);
                eax72 = (&v22)[2];
                v73 = eax72;
                ecx18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffffd60);
                eax74 = fun_411262(ecx18, *reinterpret_cast<uint16_t*>(&v73));
                v39 = eax74;
                v41 = v41 + 2;
                if (reinterpret_cast<signed char>(v39) <= reinterpret_cast<signed char>(0)) 
                    goto addr_4209ad_136;
                ecx18 = a1;
                fun_420fe0(ecx18, reinterpret_cast<int32_t>(ebp9) + 0xfffffd60, v39, ecx18, reinterpret_cast<int32_t>(ebp9) + 0xfffffdc4);
            }
            addr_4209d5_138:
            goto addr_4209f2_132;
            addr_4209ad_136:
            goto addr_4209d5_138;
            addr_420604_122:
            if (!(reinterpret_cast<unsigned char>(v31) & 0x8000)) {
                if (!(reinterpret_cast<unsigned char>(v31) & 32)) {
                    if (!(reinterpret_cast<unsigned char>(v31) & 64)) {
                        eax75 = fun_421070(reinterpret_cast<int32_t>(ebp9) + 16);
                        v45 = eax75;
                        v46 = reinterpret_cast<void**>(0);
                    } else {
                        edx76 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 16);
                        eax77 = fun_421070(edx76);
                        __asm__("cdq ");
                        v45 = eax77;
                        v46 = edx76;
                    }
                } else {
                    if (!(reinterpret_cast<unsigned char>(v31) & 64)) {
                        eax78 = fun_421070(reinterpret_cast<int32_t>(ebp9) + 16);
                        __asm__("cdq ");
                        v45 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax78)));
                        v46 = edx47;
                    } else {
                        edx79 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 16);
                        eax80 = fun_421070(edx79);
                        __asm__("cdq ");
                        v45 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax80)));
                        v46 = edx79;
                    }
                }
            } else {
                edx81 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 16);
                eax82 = fun_421090(edx81);
                v45 = eax82;
                v46 = edx81;
            }
            if (!(reinterpret_cast<unsigned char>(v31) & 64) || (reinterpret_cast<signed char>(v46) > reinterpret_cast<signed char>(0) || reinterpret_cast<signed char>(v46) >= reinterpret_cast<signed char>(0) && reinterpret_cast<unsigned char>(v45) >= reinterpret_cast<unsigned char>(0))) {
                v43 = v45;
                v44 = v46;
            } else {
                v43 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(v45));
                v44 = reinterpret_cast<void**>(-(reinterpret_cast<unsigned char>(v46) + reinterpret_cast<uint1_t>(!!v45)));
                v31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) | 0x100);
            }
            if (!(reinterpret_cast<unsigned char>(v31) & 0x8000)) {
                v43 = v43;
                v44 = reinterpret_cast<void**>(0);
            }
            if (reinterpret_cast<signed char>(v32) >= reinterpret_cast<signed char>(0)) {
                v31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) & 0xfffffff7);
                if (reinterpret_cast<signed char>(v32) > reinterpret_cast<signed char>(0x200)) {
                    v32 = reinterpret_cast<void**>(0x200);
                }
            } else {
                v32 = reinterpret_cast<void**>(1);
            }
            if (!(reinterpret_cast<unsigned char>(v43) | reinterpret_cast<unsigned char>(v44))) {
                v30 = reinterpret_cast<void**>(0);
            }
            v83 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp9) + 0xffffffc7);
            while ((edx84 = v32, --v32, !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx84) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx84 == 0))) || reinterpret_cast<unsigned char>(v43) | reinterpret_cast<unsigned char>(v44)) {
                __asm__("cdq ");
                eax85 = fun_4115a0(v43, v44, v69, edx84);
                __asm__("cdq ");
                edx86 = v43;
                eax87 = fun_411555(edx86, v44, v69, v44);
                v43 = eax87;
                v44 = edx86;
                if (reinterpret_cast<int32_t>(eax85 + 48) > reinterpret_cast<int32_t>(57)) {
                }
                v83 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v83) - 1);
            }
            ecx18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) - 57 - reinterpret_cast<uint32_t>(v83));
            v12 = ecx18;
            v53 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v83) + 1);
            if (reinterpret_cast<unsigned char>(v31) & 0x200 && ((ecx18 = v53, static_cast<int32_t>(reinterpret_cast<signed char>(v88)) != 48) || !v12)) {
                --v53;
                ecx18 = v53;
                ++v12;
                goto addr_42085d_49;
            }
            addr_4205bd_114:
            v69 = 16;
            if (reinterpret_cast<unsigned char>(v31) & 0x80) {
                v30 = reinterpret_cast<void**>(2);
            }
            goto addr_420604_122;
        }
    }
    eax89 = fun_411087(v11, v22, v24, v25, v36);
    return eax89;
}

struct s33 {
    signed char[4] pad4;
    signed char f4;
};

uint32_t fun_4114ab(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** v10;
    void** v11;
    void** eax12;
    void** v13;
    uint32_t eax14;
    void** v15;
    void** ecx16;
    uint32_t eax17;
    void** v18;
    void** ebp19;
    void** v20;
    void** eax21;
    void** v22;
    void** eax23;
    struct s33* v24;
    void** v25;
    void** eax26;

    if (!a3 && (eax12 = fun_41119f(ecx, 2, 0x4273c4, 0x66, 0, 0x4273d0, v9, v10, v11), reinterpret_cast<int1_t>(eax12 == 1))) {
    }
    v13 = *reinterpret_cast<void***>(a3 + 16);
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) & 0x82) || reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) & 64) {
        *reinterpret_cast<void***>(a3 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) | 32);
        eax14 = 0xffffffff;
    } else {
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) & 1)) {
            addr_41fb4c_7:
            *reinterpret_cast<void***>(a3 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) | 2);
            *reinterpret_cast<void***>(a3 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) & 0xffffffef);
            *reinterpret_cast<void***>(a3 + 4) = reinterpret_cast<void**>(0);
            v15 = reinterpret_cast<void**>(0);
            ecx16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) & 0x10c);
            if (!ecx16 && (a3 != 0x428f20 && !reinterpret_cast<int1_t>(a3 == 0x428f40) || (eax17 = fun_4114ba(v13), !eax17))) {
                fun_411415(ecx16, a3, v18, v13, 0, a3, 0, ebp19, __return_address(), a2, a3, a4, a5, a6, a7, a8);
                goto addr_41fbbd_9;
            }
        } else {
            *reinterpret_cast<void***>(a3 + 4) = reinterpret_cast<void**>(0);
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) & 16)) {
                *reinterpret_cast<void***>(a3 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) | 32);
                eax14 = 0xffffffff;
            } else {
                *reinterpret_cast<void***>(a3) = *reinterpret_cast<void***>(a3 + 8);
                *reinterpret_cast<void***>(a3 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) & 0xfffffffe);
                goto addr_41fb4c_7;
            }
        }
    }
    addr_41fcdd_13:
    return eax14;
    addr_41fbbd_9:
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) & 0x108)) {
        v20 = reinterpret_cast<void**>(1);
        eax21 = fun_411154(v13, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 8, 1);
        v15 = eax21;
    } else {
        if (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 8))) < reinterpret_cast<int32_t>(0) && (eax23 = fun_41119f(a3, 2, 0x4273c4, 0x9d, 0, 0x427378, v22, v13, 0), reinterpret_cast<int1_t>(eax23 == 1))) {
        }
        v20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 8)));
        *reinterpret_cast<void***>(a3) = *reinterpret_cast<void***>(a3 + 8) + 1;
        *reinterpret_cast<void***>(a3 + 4) = *reinterpret_cast<void***>(a3 + 24) - 1;
        if (reinterpret_cast<signed char>(v20) <= reinterpret_cast<signed char>(0)) {
            if (v13 == 0xffffffff) {
                v24 = reinterpret_cast<struct s33*>(0x428c34);
            } else {
                v24 = reinterpret_cast<struct s33*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(v13) >> 5) * 4 + 0x42afe0)) + (reinterpret_cast<unsigned char>(v13) & 31) * 8);
            }
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(v24->f4)) & 32) {
                fun_41116d(v13, 0, 2);
            }
        } else {
            v25 = *reinterpret_cast<void***>(a3 + 8);
            eax26 = fun_411154(v13, v25, v20);
            v15 = eax26;
        }
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(a3 + 8)) = a2;
    }
    if (v15 == v20) {
        eax14 = reinterpret_cast<unsigned char>(a2) & 0xff;
        goto addr_41fcdd_13;
    } else {
        *reinterpret_cast<void***>(a3 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) | 32);
        eax14 = 0xffffffff;
        goto addr_41fcdd_13;
    }
}

int32_t g428c10 = 10;

void** fun_41dc20(void** ecx, void** a2) {
    void** v3;
    int32_t eax4;
    int32_t ecx5;
    void** eax6;

    v3 = reinterpret_cast<void**>(0x428b90);
    while (*reinterpret_cast<void***>(v3 + 4) != a2 && (v3 = v3 + 12, eax4 = g428c10, reinterpret_cast<unsigned char>(v3) < reinterpret_cast<unsigned char>(eax4 * 12 + 0x428b90))) {
    }
    ecx5 = g428c10;
    if (reinterpret_cast<unsigned char>(v3) >= reinterpret_cast<unsigned char>(ecx5 * 12 + 0x428b90) || *reinterpret_cast<void***>(v3 + 4) != a2) {
        eax6 = reinterpret_cast<void**>(0);
    } else {
        eax6 = v3;
    }
    return eax6;
}

int32_t g429924 = 0;

int32_t LCMapStringW = 0x2c882;

int32_t LCMapStringA = 0x2c872;

void** fun_4113ed(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, int32_t a8, void** a9, void** a10) {
    void* esp11;
    struct s3* eax12;
    struct s3* esp13;
    void*** esp14;
    int1_t zf15;
    int32_t eax16;
    int32_t eax17;
    void** eax18;
    int1_t zf19;
    int1_t zf20;
    void** v21;
    void** v22;
    int32_t v23;
    void** edx24;
    void** eax25;
    void** eax26;
    int1_t zf27;
    void** eax28;
    void** v29;
    void** v30;
    void** v31;
    void** eax32;
    int32_t eax33;
    void** v34;
    void** eax35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** ecx41;
    void** v42;
    void** eax43;
    void** v44;
    void** edi45;
    void** esi46;
    void** ebx47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** eax57;
    void** eax58;
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
    int32_t eax79;
    void** eax80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** eax95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** esp103;
    void** v104;
    void** v105;
    void** ecx106;
    void** v107;
    int32_t eax108;
    void** v109;
    void** eax110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    int32_t eax115;
    void** eax116;
    void** eax117;
    void** eax118;
    int32_t eax119;
    void** v120;
    void** v121;
    void** v122;
    void** eax123;

    esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax12 = g0;
    esp13 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(esp11) - 4 - 4 - 4 - 4);
    g0 = esp13;
    esp14 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp13) - 72 - 4 - 4 - 4);
    zf15 = g429924 == 0;
    if (zf15) {
        eax16 = reinterpret_cast<int32_t>(LCMapStringW(0, 0x100, 0x427128, 1, 0, 0));
        esp14 = esp14 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4;
        if (!eax16) {
            eax17 = reinterpret_cast<int32_t>(GetLastError(0, 0x100, 0x427128, 1, 0, 0));
            esp14 = esp14 - 4 + 4;
            if (eax17 == 0x78) {
                g429924 = 2;
            }
        } else {
            g429924 = 1;
        }
    }
    if (reinterpret_cast<signed char>(a4) > reinterpret_cast<signed char>(0)) {
        eax18 = fun_41edd0(a3, a4);
        esp14 = esp14 - 4 - 4 - 4 + 4 + 8;
        a4 = eax18;
    }
    zf19 = g429924 == 2;
    if (zf19 || (zf20 = g429924 == 0, zf20)) {
        v21 = reinterpret_cast<void**>(0);
        v22 = reinterpret_cast<void**>(0);
        v23 = 0;
        if (!a1) {
            edx24 = g429904;
            a1 = edx24;
        }
        if (!a7) {
            eax25 = g429914;
            a7 = eax25;
        }
        eax26 = fun_411578(a1);
        if (reinterpret_cast<int1_t>(eax26 == 0xffffffff)) 
            goto addr_41e7f2_15;
    } else {
        zf27 = g429924 == 1;
        if (!zf27) {
            eax28 = reinterpret_cast<void**>(0);
            goto addr_41ec5f_18;
        } else {
            v29 = reinterpret_cast<void**>(0);
            v30 = reinterpret_cast<void**>(0);
            v31 = reinterpret_cast<void**>(0);
            if (!a7) {
                eax32 = g429914;
                a7 = eax32;
            }
            eax33 = 0;
            *reinterpret_cast<unsigned char*>(&eax33) = reinterpret_cast<uint1_t>(!!a8);
            v34 = reinterpret_cast<void**>(eax33 * 8 + 1);
            eax35 = reinterpret_cast<void**>(MultiByteToWideChar(a7, v34, a3, a4, 0, 0));
            if (eax35) 
                goto addr_41ea20_22; else 
                goto addr_41ea19_23;
        }
    }
    if (eax26 == a7) {
        v36 = a6;
        v37 = a5;
        v38 = a4;
        v39 = a3;
        v40 = a2;
        ecx41 = a1;
        v42 = ecx41;
        eax43 = reinterpret_cast<void**>(LCMapStringA(v42, v40, v39, v38, v37, v36));
        v44 = eax43;
    } else {
        eax57 = fun_411253(a7, eax26, a3, reinterpret_cast<int32_t>(esp11) + 20, 0, 0, edi45, esi46, ebx47, v48, v49, v50, v51, v52, v53, v54, v55, v56);
        v21 = eax57;
        if (v21) {
            v36 = reinterpret_cast<void**>(0);
            v37 = reinterpret_cast<void**>(0);
            v38 = a4;
            v39 = v21;
            ecx41 = a2;
            v40 = ecx41;
            v42 = a1;
            eax58 = reinterpret_cast<void**>(LCMapStringA(v42, v40, v39, v38, 0, 0));
            if (eax58) {
                fun_414c20(ecx41, v42, v40, v39, v38, 0, 0, edi45, esi46, ebx47, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69);
                v70 = reinterpret_cast<void**>(esp14 - 4 - 4 + 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 24 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
                v22 = v70;
                ecx41 = eax58;
                fun_411195(v22, 0, ecx41, v42, v40, v39, v38, 0, 0);
                if (v22) 
                    goto addr_41e902_30; else 
                    goto addr_41e8bd_31;
            } else {
                goto addr_41e966_33;
            }
        } else {
            eax28 = reinterpret_cast<void**>(0);
            goto addr_41ec5f_18;
        }
    }
    addr_41e99d_35:
    if (v21) {
        fun_41141a(ecx41, v21, 2, v42, v40, v39, v38, v37, v36, edi45, esi46, ebx47, v71, v72, v70, v73, v74, v75, v76, v77);
    }
    eax28 = v44;
    addr_41ec5f_18:
    g0 = eax12;
    return eax28;
    addr_41e902_30:
    ecx41 = v21;
    v78 = ecx41;
    eax79 = reinterpret_cast<int32_t>(LCMapStringA(a1, a2, v78, a4, v22, eax58, v42, v40, v39, v38, 0, 0));
    if (eax79) {
        ecx41 = v22;
        eax80 = fun_411253(eax26, a7, ecx41, reinterpret_cast<int32_t>(esp11) - 32, a5, a6, a1, a2, v78, a4, v22, eax58, v42, v40, v39, v38, 0, 0);
        if (eax80) {
            v44 = reinterpret_cast<void**>(1);
        } else {
            v44 = reinterpret_cast<void**>(0);
        }
    } else {
        v44 = reinterpret_cast<void**>(0);
    }
    addr_41e966_33:
    if (v23) {
        ecx41 = v22;
        fun_41141a(ecx41, ecx41, 2, v42, v40, v39, v38, 0, 0, edi45, esi46, ebx47, v81, 0, v70, v82, v83, v84, v85, v86);
    }
    goto addr_41e99d_35;
    addr_41e8bd_31:
    eax95 = fun_411064(ecx41, eax58, 2, 0x42711c, 0xa6, v42, v40, v39, v38, 0, 0, edi45, esi46, ebx47, v87, v88, v70, v89, v90, v91, v92, v93, v94);
    v22 = eax95;
    if (v22) {
        fun_411195(v22, 0, eax58, v42, v40, v39, v38, 0, 0);
        v23 = 1;
        goto addr_41e902_30;
    } else {
        v44 = reinterpret_cast<void**>(0);
        goto addr_41e966_33;
    }
    addr_41e7f2_15:
    eax28 = reinterpret_cast<void**>(0);
    goto addr_41ec5f_18;
    addr_41ea20_22:
    fun_414c20(a7, a7, v34, a3, a4, 0, 0, edi45, esi46, ebx47, v96, v97, v98, 0, v99, eax35, v100, 0, 0, v101, v102);
    esp103 = reinterpret_cast<void**>(esp14 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
    v104 = esp103;
    v105 = v104;
    if (!v105) 
        goto addr_41ea6e_47;
    addr_41eaa1_48:
    ecx106 = a4;
    v107 = ecx106;
    eax108 = reinterpret_cast<int32_t>(MultiByteToWideChar(a7, 1, a3, v107, v105, eax35, a7, v34, a3, a4, 0, 0));
    if (eax108) {
        ecx106 = a1;
        v109 = ecx106;
        eax110 = reinterpret_cast<void**>(LCMapStringW(v109, a2, v105, eax35, 0, 0, a7, 1, a3, v107, v105, eax35, a7, v34, a3, a4, 0, 0));
        v29 = eax110;
        if (v29) {
            if (!(reinterpret_cast<unsigned char>(a2) & 0x400)) {
                ecx106 = v29;
                v111 = ecx106;
                fun_414c20(ecx106, v109, a2, v105, eax35, 0, 0, a7, 1, a3, v107, v105, eax35, a7, v34, a3, a4, 0, 0, edi45, esi46);
                v112 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<uint32_t>(esp103 - 4) - 4 - 4 - 4 - 4 - 4 - 4 + 4) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4) - 4 + 4);
                v113 = v112;
                if (!v113) 
                    goto addr_41eb8c_53;
            } else {
                if (!a6) 
                    goto addr_41eb33_55;
                if (reinterpret_cast<signed char>(v29) <= reinterpret_cast<signed char>(a6)) 
                    goto addr_41eb0c_57; else 
                    goto addr_41eb07_58;
            }
        } else {
            goto addr_41ec30_60;
        }
    } else {
        goto addr_41ec30_60;
    }
    addr_41ebba_62:
    ecx106 = a1;
    v114 = ecx106;
    eax115 = reinterpret_cast<int32_t>(LCMapStringW(v114, a2, v105, eax35, v113, v111, v109, a2, v105, eax35, 0, 0, a7, 1, a3, v107, v105, eax35, a7, v34, a3, a4, 0, 0));
    if (eax115) {
        if (a6) {
            ecx106 = v111;
            eax116 = reinterpret_cast<void**>(WideCharToMultiByte(a7, 0, v113, ecx106, a5, a6, 0, 0, v114, a2, v105, eax35, v113, v111, v109, a2, v105, eax35, 0, 0, a7, 1, a3, v107, v105, eax35, a7, v34, a3, a4, 0, 0));
            v29 = eax116;
        } else {
            ecx106 = a7;
            eax117 = reinterpret_cast<void**>(WideCharToMultiByte(ecx106, 0, v113, v111, 0, 0, 0, 0, v114, a2, v105, eax35, v113, v111, v109, a2, v105, eax35, 0, 0, a7, 1, a3, v107, v105, eax35, a7, v34, a3, a4, 0, 0));
            v29 = eax117;
            if (v29) {
            }
        }
    }
    addr_41ec30_60:
    if (v31) {
        ecx106 = v113;
        fun_41141a(ecx106, ecx106, 2, a7, 1, a3, v107, v105, eax35, a7, v34, a3, a4, 0, 0, edi45, esi46, ebx47, v112, v104);
    }
    if (v30) {
        fun_41141a(ecx106, v105, 2, a7, 1, a3, v107, v105, eax35, a7, v34, a3, a4, 0, 0, edi45, esi46, ebx47, v112, v104);
    }
    eax28 = v29;
    goto addr_41ec5f_18;
    addr_41eb8c_53:
    eax118 = fun_411064(ecx106, reinterpret_cast<unsigned char>(v111) << 1, 2, 0x42711c, 0x13a, v109, a2, v105, eax35, 0, 0, a7, 1, a3, v107, v105, eax35, a7, v34, a3, a4, 0, 0);
    v113 = eax118;
    if (v113) {
        v31 = reinterpret_cast<void**>(1);
        goto addr_41ebba_62;
    } else {
        goto addr_41ec30_60;
    }
    addr_41eb0c_57:
    ecx106 = v105;
    eax119 = reinterpret_cast<int32_t>(LCMapStringW(a1, a2, ecx106, eax35, a5, a6, v109, a2, v105, eax35, 0, 0, a7, 1, a3, v107, v105, eax35, a7, v34, a3, a4, 0, 0));
    if (eax119) {
        addr_41eb33_55:
        goto addr_41ec30_60;
    } else {
        goto addr_41ec30_60;
    }
    addr_41eb07_58:
    goto addr_41ec30_60;
    addr_41ea6e_47:
    eax123 = fun_411064(a7, reinterpret_cast<unsigned char>(eax35) << 1, 2, 0x42711c, 0x101, a7, v34, a3, a4, 0, 0, edi45, esi46, ebx47, v120, v104, v121, 0, v122, eax35, v105, 0, 0);
    esp103 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp103 - 4) - 4 - 4 - 4 - 4 + 4 + 16);
    v105 = eax123;
    if (v105) {
        v30 = reinterpret_cast<void**>(1);
        goto addr_41eaa1_48;
    } else {
        eax28 = reinterpret_cast<void**>(0);
        goto addr_41ec5f_18;
    }
    addr_41ea19_23:
    eax28 = reinterpret_cast<void**>(0);
    goto addr_41ec5f_18;
}

int32_t g429928 = 0;

int32_t GetStringTypeW = 0x2c8a4;

int32_t GetStringTypeA = 0x2c892;

void** fun_4113c0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, int32_t a7, ...) {
    void* esp8;
    struct s3* eax9;
    struct s3* esp10;
    void** esp11;
    void** v12;
    int1_t zf13;
    void* v14;
    int32_t eax15;
    int32_t eax16;
    int1_t zf17;
    int1_t zf18;
    void** v19;
    void** ecx20;
    void** edx21;
    void** eax22;
    int1_t zf23;
    void** eax24;
    void** v25;
    void** v26;
    void** ecx27;
    int32_t ecx28;
    void** ecx29;
    void** eax30;
    void** eax31;
    void** edi32;
    void** esi33;
    void** ebx34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** eax48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** ecx58;
    void** v59;
    int32_t eax60;
    void** eax61;
    void** eax62;

    esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax9 = g0;
    esp10 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(esp8) - 4 - 4 - 4 - 4);
    g0 = esp10;
    esp11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp10 - 3) - 4 - 4 - 4);
    v12 = esp11;
    zf13 = g429928 == 0;
    if (zf13) {
        v14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 28);
        eax15 = reinterpret_cast<int32_t>(GetStringTypeW(1, 0x427128, 1, v14));
        esp11 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp11 - 4) - 4 - 4 - 4 - 4 + 4);
        if (!eax15) {
            eax16 = reinterpret_cast<int32_t>(GetLastError(1, 0x427128, 1, v14));
            esp11 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp11 - 4) + 4);
            if (eax16 == 0x78) {
                g429928 = 2;
            }
        } else {
            g429928 = 1;
        }
    }
    zf17 = g429928 == 2;
    if (zf17 || (zf18 = g429928 == 0, zf18)) {
        v19 = reinterpret_cast<void**>(0);
        if (!a6) {
            ecx20 = g429904;
            a6 = ecx20;
        }
        if (!a5) {
            edx21 = g429914;
            a5 = edx21;
        }
        eax22 = fun_411578(a6);
        if (reinterpret_cast<int1_t>(eax22 == 0xffffffff)) 
            goto addr_41eee7_13;
    } else {
        zf23 = g429928 == 1;
        if (!zf23) {
            eax24 = reinterpret_cast<void**>(0);
            goto addr_41f0ad_16;
        } else {
            v25 = reinterpret_cast<void**>(0);
            v26 = reinterpret_cast<void**>(0);
            if (!a5) {
                ecx27 = g429914;
                a5 = ecx27;
            }
            ecx28 = 0;
            *reinterpret_cast<unsigned char*>(&ecx28) = reinterpret_cast<uint1_t>(!!a7);
            ecx29 = reinterpret_cast<void**>(ecx28 * 8 + 1);
            eax30 = reinterpret_cast<void**>(MultiByteToWideChar(a5, ecx29, a2, a3, 0, 0));
            if (eax30) 
                goto addr_41efc2_20; else 
                goto addr_41efbb_21;
        }
    }
    if (eax22 == a5) {
        addr_41ef28_23:
        eax31 = reinterpret_cast<void**>(GetStringTypeA(a6, a1, a2, a3, a4));
        if (v19) {
            fun_41141a(a1, v19, 2, a6, a1, a2, a3, a4, edi32, esi33, ebx34, v35, v36, v37, v38, v39, v40, eax31, eax22, v19);
        }
    } else {
        eax48 = fun_411253(a5, eax22, a2, reinterpret_cast<int32_t>(esp8) + 16, 0, 0, edi32, esi33, ebx34, v41, v42, v43, v44, v45, v46, v47, eax22, 0);
        v19 = eax48;
        if (v19) {
            a2 = v19;
            goto addr_41ef28_23;
        } else {
            eax24 = reinterpret_cast<void**>(0);
            goto addr_41f0ad_16;
        }
    }
    eax24 = eax31;
    addr_41f0ad_16:
    g0 = eax9;
    return eax24;
    addr_41eee7_13:
    eax24 = reinterpret_cast<void**>(0);
    goto addr_41f0ad_16;
    addr_41efc2_20:
    fun_414c20(ecx29, a5, ecx29, a2, a3, 0, 0, edi32, esi33, ebx34, v49, v50, 0, eax30, v51, 0, v52, v53, v54, v55, v12);
    v56 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp11 - 4) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
    v57 = v56;
    fun_411195(v57, 0, reinterpret_cast<unsigned char>(eax30) << 1, a5, ecx29, a2, a3, 0, 0);
    if (!v57) 
        goto addr_41f024_30;
    addr_41f054_31:
    ecx58 = a3;
    v59 = ecx58;
    eax60 = reinterpret_cast<int32_t>(MultiByteToWideChar(a5, 1, a2, v59, v57, eax30, a5, ecx29, a2, a3, 0, 0));
    if (eax60) {
        ecx58 = a1;
        eax61 = reinterpret_cast<void**>(GetStringTypeW(ecx58, v57, eax60, a4, a5, 1, a2, v59, v57, eax30, a5, ecx29, a2, a3, 0, 0));
        v25 = eax61;
    }
    if (v26) {
        fun_41141a(ecx58, v57, 2, a5, 1, a2, v59, v57, eax30, a5, ecx29, a2, a3, 0, 0, edi32, esi33, ebx34, v56, v57);
    }
    eax24 = v25;
    goto addr_41f0ad_16;
    addr_41f024_30:
    eax62 = fun_411564(2, eax30, 2, 0x42715c, 0xa6, a5, ecx29, a2, a3, 0, 0, edi32, esi33);
    v57 = eax62;
    if (v57) {
        v26 = reinterpret_cast<void**>(1);
        goto addr_41f054_31;
    } else {
        eax24 = reinterpret_cast<void**>(0);
        goto addr_41f0ad_16;
    }
    addr_41efbb_21:
    eax24 = reinterpret_cast<void**>(0);
    goto addr_41f0ad_16;
}

void** fun_411118(void** a1);

uint32_t fun_41157d(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** eax7;
    uint32_t v8;
    void** v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t eax13;

    while (v6 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)))), eax7 = fun_411118(v6), !!eax7) {
        ++a1;
    }
    v8 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1));
    v9 = a1 + 1;
    v10 = v8;
    if (v8 == 45 || v8 == 43) {
        v8 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
        ++v9;
    }
    v11 = 0;
    while (1) {
        if (reinterpret_cast<int32_t>(v8) < reinterpret_cast<int32_t>(48) || reinterpret_cast<int32_t>(v8) > reinterpret_cast<int32_t>(57)) {
            v12 = 0xffffffff;
        } else {
            v12 = v8 - 48;
        }
        if (v12 == 0xffffffff) 
            break;
        v11 = v11 * 10 + v12;
        v8 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
        ++v9;
    }
    if (v10 != 45) {
        eax13 = v11;
    } else {
        eax13 = -v11;
    }
    return eax13;
}

void** fun_411118(void** a1) {
    void* ebp2;
    int1_t less_or_equal3;
    void** eax4;
    void** v5;
    void** eax6;
    void** eax7;
    int1_t zf8;
    void** eax9;
    void** ecx10;
    void** eax11;
    void** v12;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    if (reinterpret_cast<unsigned char>(a1) <= reinterpret_cast<unsigned char>(0xff)) {
        less_or_equal3 = g428ec4 <= 1;
        if (less_or_equal3) {
            eax4 = fun_4110c8(a1, a1, 8);
            v5 = eax4;
        } else {
            eax6 = fun_41124e(a1, 8);
            v5 = eax6;
        }
        eax7 = v5;
    } else {
        zf8 = g42ad2c == 0;
        if (!zf8) {
            eax9 = g42acb4;
            ecx10 = g42ae44;
            eax11 = fun_4113c0(1, reinterpret_cast<int32_t>(ebp2) + 0xfffffff8, 2, reinterpret_cast<int32_t>(ebp2) + 0xfffffffc, ecx10, eax9, 1);
            if (eax11) {
                if (1) {
                    v12 = reinterpret_cast<void**>(0);
                } else {
                    v12 = reinterpret_cast<void**>(1);
                }
                eax7 = v12;
            } else {
                eax7 = reinterpret_cast<void**>(0);
            }
        } else {
            eax7 = reinterpret_cast<void**>(0);
        }
    }
    return eax7;
}

void** fun_41128a(void** ecx, void** a2, int32_t a3) {
    int1_t below_or_equal4;
    void* eax5;
    int1_t zf6;
    void** edx7;
    void** v8;
    void** eax9;
    void** v10;
    void** v11;
    void** ebp12;
    void** eax13;
    void** v14;
    uint32_t eax15;
    void** v16;
    void** v17;
    void** eax18;
    void** v19;
    void** ecx20;
    void** v21;
    void** eax22;
    void** v23;

    below_or_equal4 = reinterpret_cast<uint32_t>(g429858) <= 0;
    if (!below_or_equal4) {
        eax5 = g429858;
        zf6 = reinterpret_cast<int1_t>(g429848 == reinterpret_cast<uint32_t>(eax5) - 1);
        if (!zf6) {
            edx7 = g429848;
            g429848 = edx7 + 1;
        } else {
            eax9 = fun_411096(ecx, v8);
            if (!eax9 && (eax13 = fun_41119f(ecx, 2, 0x4260e0, 0x4fb, 0, 0x4260ec, v10, v11, ebp12), reinterpret_cast<int1_t>(eax13 == 1))) {
            }
            g429848 = reinterpret_cast<void**>(0);
        }
    }
    eax15 = fun_4111ea(ecx, a2, v14);
    if (!eax15 && (eax18 = fun_41119f(ecx, 2, 0x4260e0, 0x50b, 0, 0x4261d4, v16, v17, ebp12), reinterpret_cast<int1_t>(eax18 == 1))) {
    }
    v19 = a2 - 32;
    if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v19 + 20)) & 0xffff) != 4 && (*reinterpret_cast<void***>(v19 + 20) != 1 && ((ecx20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v19 + 20)) & 0xffff), ecx20 != 2) && (*reinterpret_cast<void***>(v19 + 20) != 3 && (eax22 = fun_41119f(ecx20, 2, 0x4260e0, 0x511, 0, 0x426410, v19, v21, ebp12), reinterpret_cast<int1_t>(eax22 == 1)))))) {
    }
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v19 + 20) == 2) && a3 == 1) {
    }
    v23 = *reinterpret_cast<void***>(v19 + 16);
    return v23;
}

struct s34 {
    signed char[256] pad256;
    void** f256;
};

struct s35 {
    signed char[256] pad256;
    void** f256;
};

void** fun_41101e(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** v15;
    void** ebp16;
    void** v17;
    void** v18;
    void** v19;
    void** eax20;
    void** v21;
    void** eax22;

    v14 = reinterpret_cast<void**>(__return_address());
    v15 = ebp16;
    v17 = reinterpret_cast<void**>(0xffffffff);
    v18 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<signed char>(v18) < reinterpret_cast<signed char>(64)) {
        if (!*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(v18) * 4 + 0x42afe0)) 
            goto addr_422293_5;
        v19 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v18) * 4 + 0x42afe0);
        while (reinterpret_cast<unsigned char>(v19) < reinterpret_cast<unsigned char>(&(*reinterpret_cast<struct s34**>(reinterpret_cast<unsigned char>(v18) * 4 + 0x42afe0))->f256)) {
            if (!(reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(v19 + 4)))) & 1)) 
                goto addr_42225e_9;
            v19 = v19 + 8;
        }
        addr_422286_12:
        if (v17 != 0xffffffff) 
            goto addr_42228c_13;
        ++v18;
        continue;
        addr_42225e_9:
        *reinterpret_cast<void***>(v19) = reinterpret_cast<void**>(0xffffffff);
        v17 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(v18) << 5) + (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(v19) - *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(v18) * 4 + 0x42afe0)) >> 3));
        goto addr_422286_12;
    }
    addr_422317_17:
    return v17;
    addr_422293_5:
    eax20 = fun_411064(v18, 0x100, 2, 0x4274c0, 0x85, v19, v17, v18, v15, v14, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    v21 = eax20;
    if (v21) {
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v18) * 4 + 0x42afe0) = v21;
        eax22 = g42af94;
        g42af94 = eax22 + 32;
        while (reinterpret_cast<unsigned char>(v21) < reinterpret_cast<unsigned char>(&(*reinterpret_cast<struct s35**>(reinterpret_cast<unsigned char>(v18) * 4 + 0x42afe0))->f256)) {
            *reinterpret_cast<void***>(v21 + 4) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(v21) = reinterpret_cast<void**>(0xffffffff);
            *reinterpret_cast<signed char*>(v21 + 5) = 10;
            v21 = v21 + 8;
        }
        v17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v18) << 5);
    }
    goto addr_422317_17;
    addr_42228c_13:
    goto addr_422317_17;
}

uint32_t fun_41102d(void** ecx, void** a2) {
    int1_t cf3;
    uint32_t eax4;
    int1_t zf5;

    cf3 = reinterpret_cast<unsigned char>(a2) < reinterpret_cast<unsigned char>(g42af94);
    if (!cf3 || (!(reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>((reinterpret_cast<signed char>(a2) >> 5) * 4 + 0x42afe0) + (reinterpret_cast<unsigned char>(a2) & 31) * 8) + 4))) & 1) || (*reinterpret_cast<int32_t**>((reinterpret_cast<signed char>(a2) >> 5) * 4 + 0x42afe0))[reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(a2) & 31) * 2] == -1)) {
        g42962c = 9;
        g429630 = reinterpret_cast<void**>(0);
        eax4 = 0xffffffff;
    } else {
        zf5 = g428b44 == 1;
        if (zf5) {
            if (!a2) {
                SetStdHandle(0xf6, 0);
            } else {
                if (a2 == 1) {
                    SetStdHandle(0xf5, 0);
                } else {
                    if (a2 == 2) {
                        SetStdHandle(0xf4, 0);
                    }
                }
            }
        }
        (*reinterpret_cast<int32_t**>((reinterpret_cast<signed char>(a2) >> 5) * 4 + 0x42afe0))[(reinterpret_cast<unsigned char>(a2) & 31) * 2] = -1;
        eax4 = 0;
    }
    return eax4;
}

int32_t g429678 = 0;

int32_t GetCurrentProcess = 0x2c5d0;

int32_t TerminateProcess = 0x2c5bc;

int32_t g429674 = 0;

signed char g429670 = 0;

void** g42b0f4;

void** g42b0f0;

int32_t g42967c = 0;

int32_t* fun_4132b0(void** a1, int32_t a2, int32_t a3) {
    int1_t zf4;
    int32_t eax5;
    void** ecx6;
    int1_t zf7;
    void** edx8;
    void** eax9;
    int1_t cf10;
    void** edx11;
    int32_t* eax12;
    int1_t zf13;
    uint32_t eax14;

    zf4 = g429678 == 1;
    if (zf4) {
        eax5 = reinterpret_cast<int32_t>(GetCurrentProcess(a1));
        TerminateProcess(eax5, a1);
    }
    g429674 = 1;
    *reinterpret_cast<signed char*>(&ecx6) = *reinterpret_cast<signed char*>(&a3);
    g429670 = *reinterpret_cast<signed char*>(&ecx6);
    if (!a2) {
        zf7 = g42b0f4 == 0;
        if (!zf7) {
            while (edx8 = g42b0f0, g42b0f0 = edx8 - 4, eax9 = g42b0f0, cf10 = reinterpret_cast<unsigned char>(eax9) < reinterpret_cast<unsigned char>(g42b0f4), !cf10) {
                ecx6 = g42b0f0;
                if (*reinterpret_cast<void***>(ecx6)) {
                    edx11 = g42b0f0;
                    *reinterpret_cast<void***>(edx11)();
                }
            }
        }
        fun_413430(0x428624, 0x42882c);
    }
    eax12 = fun_413430(0x428930, 0x428a34);
    zf13 = g42967c == 0;
    if (zf13 && (eax14 = fun_41114f(ecx6, 0xff), eax12 = reinterpret_cast<int32_t*>(eax14 & 32), !!eax12)) {
        g42967c = 1;
        eax12 = fun_4113de(ecx6);
    }
    if (!a3) {
        g429678 = 1;
        eax12 = fun_41122b(a1);
    }
    return eax12;
}

uint32_t fun_41121c() {
    uint32_t eax1;

    eax1 = fun_422aa0(1);
    return eax1;
}

void** g429824 = reinterpret_cast<void**>(0);

int32_t g4297e8 = 0;

int32_t g429818 = 0;

int32_t g42981c = 0;

int32_t g429814 = 0;

void** g4297ec = reinterpret_cast<void**>(0);

int32_t g42980c = 0;

int32_t g429820 = 0;

void** g429810 = reinterpret_cast<void**>(0);

void** g4297e4 = reinterpret_cast<void**>(0);

void** fun_4160c0(void** a1) {
    void* esp2;
    void* ebp3;
    void** ecx4;
    void** v5;
    void** ebx6;
    void** v7;
    void** esi8;
    void*** esp9;
    void** v10;
    void** edi11;
    void** eax12;
    int32_t eax13;
    int32_t eax14;
    int32_t ebx15;
    void** v16;
    void** eax17;
    void** edi18;
    void** v19;
    void** v20;
    void** v21;
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
    void** v32;
    void** v33;
    void** esp34;
    void** esi35;
    void** v36;
    void** v37;
    void** v38;
    int32_t eax39;
    void* esp40;
    void** eax41;
    void** edi42;
    int32_t eax43;
    void* esp44;
    uint32_t eax45;
    uint32_t v46;
    uint32_t esi47;
    uint32_t v48;
    int32_t edi49;
    void** eax50;
    int32_t eax51;
    int32_t esi52;
    int32_t eax53;
    void** eax54;
    int32_t eax55;
    void* esp56;
    void** v57;
    void** eax58;
    void** esi59;
    void** ecx60;
    void** eax61;
    void** ecx62;
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
    signed char* esp75;
    signed char* edi76;
    void** eax77;
    signed char* v78;
    void** v79;
    int32_t eax80;
    void* eax81;
    int32_t v82;
    int32_t eax83;
    void** eax84;
    void* eax85;
    void** esi86;
    void** v87;
    int32_t eax88;
    int32_t eax89;
    void** ecx90;
    int32_t eax91;
    void** eax92;
    void** v93;
    void** v94;
    void** v95;
    int32_t eax96;
    int32_t ecx97;
    void* v98;
    int32_t eax99;
    int32_t eax100;
    void** v101;
    void** ecx102;
    void** v103;
    void** edx104;
    int32_t eax105;
    void** eax106;
    int32_t eax107;
    void** eax108;
    int32_t eax109;
    void** eax110;
    void** esi111;
    int32_t eax112;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebp3 = esp2;
    ecx4 = g429824;
    v5 = ebx6;
    v7 = esi8;
    esp9 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp2) - 0x810 - 4 - 4 - 4);
    v10 = edi11;
    eax12 = ecx4;
    if (!ecx4) {
        addr_416113_2:
        eax13 = g4297e8;
        if (eax13) {
            addr_416207_3:
            eax14 = g429818;
            ebx15 = HeapAlloc;
            if (eax14) {
                v16 = reinterpret_cast<void**>(0);
                eax17 = reinterpret_cast<void**>(eax14(8, 0));
                edi18 = eax17;
                if (edi18 == 0xffffffff) 
                    goto addr_41639a_5;
                fun_414c20(ecx4, 8, 0, v10, v7, v5, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33);
                esp34 = reinterpret_cast<void**>(esp9 - 4 - 4 - 4 + 4 - 4 + 4);
                esi35 = esp34;
                v36 = esi35;
                v37 = edi18;
                v38 = reinterpret_cast<void**>(0x224);
                eax39 = reinterpret_cast<int32_t>(g42981c(v37, v36, 0x224, 0));
                esp40 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp34 - 4) - 4 - 4 + 4);
                if (eax39) 
                    goto addr_4162ed_7;
            } else {
                eax41 = reinterpret_cast<void**>(GetCurrentProcess());
                v16 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffffc);
                v38 = reinterpret_cast<void**>(0x800);
                edi42 = eax41;
                v36 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffff7f0);
                v37 = edi42;
                eax43 = reinterpret_cast<int32_t>(g429814(v37, v36, 0x800, v16));
                esp44 = reinterpret_cast<void*>(esp9 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4);
                if (!eax43) 
                    goto addr_41639a_5;
                eax45 = v46 >> 2;
                esi47 = 0;
                v48 = eax45;
                if (!eax45) 
                    goto addr_41633b_10; else 
                    goto addr_416254_11;
            }
        } else {
            edi49 = LoadLibraryA;
            eax50 = reinterpret_cast<void**>(edi49("KERNEL32.DLL"));
            g4297ec = eax50;
            eax51 = reinterpret_cast<int32_t>(edi49("IMAGEHLP.DLL", "KERNEL32.DLL"));
            ecx4 = g4297ec;
            g4297e8 = eax51;
            if (!ecx4) 
                goto addr_41639a_5;
            if (!eax51) 
                goto addr_41639a_5;
            esi52 = GetProcAddress;
            eax53 = reinterpret_cast<int32_t>(esi52(eax51, "ImageNtHeader", "IMAGEHLP.DLL", "KERNEL32.DLL"));
            g42980c = eax53;
            if (!eax53) 
                goto addr_41639a_5;
            eax54 = g4297ec;
            eax55 = reinterpret_cast<int32_t>(esi52(eax54, "CreateToolhelp32Snapshot", eax51, "ImageNtHeader", "IMAGEHLP.DLL", "KERNEL32.DLL"));
            esp56 = reinterpret_cast<void*>(esp9 - 4 - 4 + 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4);
            g429818 = eax55;
            if (eax55) 
                goto addr_4161d2_16; else 
                goto addr_416185_17;
        }
    } else {
        do {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax12 + 4)) > reinterpret_cast<unsigned char>(a1)) 
                continue;
            if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(a1) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax12 + 4))) <= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax12 + 8))) 
                goto addr_41639c_20;
            eax12 = *reinterpret_cast<void***>(eax12 + 28);
        } while (eax12);
        goto addr_4160f4_22;
    }
    addr_416334_23:
    v57 = edi18;
    CloseHandle(v57, v37, v36, 0x224, 0);
    esp44 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp40) - 4 - 4 + 4);
    addr_41633b_10:
    eax58 = g429824;
    addr_416340_24:
    esi59 = eax58;
    if (!eax58) {
        addr_416446_25:
        ecx60 = eax58;
        if (!eax58) {
            addr_41639a_5:
            eax12 = reinterpret_cast<void**>(0);
        } else {
            do {
                if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx60 + 4)) > reinterpret_cast<unsigned char>(a1)) 
                    continue;
                if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(a1) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx60 + 4))) <= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx60 + 8))) 
                    goto addr_41646d_28;
                ecx60 = *reinterpret_cast<void***>(ecx60 + 28);
            } while (ecx60);
            goto addr_416468_30;
        }
    } else {
        while (v57 = *reinterpret_cast<void***>(esi59 + 4), eax61 = reinterpret_cast<void**>(g42980c()), *reinterpret_cast<void***>(esi59 + 16) = eax61, ecx62 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(eax61 + 20)))), *reinterpret_cast<void***>(esi59 + 20) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx62) + reinterpret_cast<unsigned char>(eax61) + 24), fun_414c20(ecx62, v57, v37, v36, v38, v16, v10, v7, v5, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74), esp75 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esp44) - 4 - 4 + 4 - 4 + 4), edi76 = esp75, eax77 = *reinterpret_cast<void***>(esi59 + 12), v78 = edi76, v79 = eax77, eax80 = reinterpret_cast<int32_t>(GetModuleFileNameA(v79, v78, 0x200)), esp44 = reinterpret_cast<void*>(esp75 - 4 - 4 - 4 - 4 + 4), !!eax80) {
            eax81 = reinterpret_cast<void*>(0);
            if (*reinterpret_cast<signed char*>(&v57)) {
                do {
                    eax81 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax81) + 1);
                } while (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax81) + reinterpret_cast<uint32_t>(edi76) + 1));
            }
            v82 = reinterpret_cast<int32_t>(eax81) + 1;
            eax83 = reinterpret_cast<int32_t>(GetProcessHeap(0, v82, v79, v78, 0x200, v57, v37, v36, v38, v16));
            eax84 = reinterpret_cast<void**>(ebx15(eax83, 0, v82, v79, v78, 0x200, v57, v37, v36, v38, v16));
            esp44 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp44) - 4 - 4 - 4 + 4 - 4 - 4 + 4);
            *reinterpret_cast<void***>(esi59 + 24) = eax84;
            if (!eax84) 
                break;
            eax85 = reinterpret_cast<void*>(0);
            do {
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax85) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi59 + 24))) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax85) + reinterpret_cast<uint32_t>(edi76));
                eax85 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax85) + 1);
            } while (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax85) + reinterpret_cast<uint32_t>(edi76)));
            esi59 = *reinterpret_cast<void***>(esi59 + 28);
            if (!esi59) 
                goto addr_416441_40;
            ebx15 = HeapAlloc;
        }
        goto addr_416353_42;
    }
    addr_41639c_20:
    return eax12;
    addr_41646d_28:
    return ecx60;
    addr_416468_30:
    addr_416358_43:
    if (eax58) {
        do {
            esi86 = *reinterpret_cast<void***>(eax58 + 28);
            if (*reinterpret_cast<void***>(eax58 + 24)) {
                v87 = *reinterpret_cast<void***>(eax58 + 24);
                eax88 = reinterpret_cast<int32_t>(GetProcessHeap(0, v87, v37, v36, v38, v16));
                HeapFree(eax88, 0, v87, v37, v36, v38, v16);
                eax58 = g429824;
            }
            eax89 = reinterpret_cast<int32_t>(GetProcessHeap(0, eax58, v37, v36, v38, v16));
            HeapFree(eax89, 0, eax58, v37, v36, v38, v16);
            eax58 = esi86;
            g429824 = eax58;
        } while (esi86);
        goto addr_41639a_5;
    }
    addr_416353_42:
    eax58 = g429824;
    goto addr_416358_43;
    addr_416441_40:
    eax58 = g429824;
    goto addr_416446_25;
    addr_4162ed_7:
    ecx90 = ecx4;
    do {
        eax91 = reinterpret_cast<int32_t>(GetProcessHeap(ecx90, 0, 32, v37, v36, 0x224, 0));
        eax92 = reinterpret_cast<void**>(ebx15(ecx90, eax91, 0, 32, v37, v36, 0x224, 0));
        if (!eax92) 
            break;
        *reinterpret_cast<void***>(eax92 + 12) = v93;
        *reinterpret_cast<void***>(eax92 + 4) = v94;
        ecx90 = g429824;
        *reinterpret_cast<void***>(eax92 + 8) = v95;
        *reinterpret_cast<void***>(eax92 + 24) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax92 + 28) = ecx90;
        g429824 = eax92;
        eax96 = reinterpret_cast<int32_t>(g429820(edi18, esi35, eax91, 0, 32, v37, v36, 0x224, 0));
        esp40 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp40) - 4 - 4 - 4 + 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4);
    } while (eax96);
    goto addr_416334_23;
    CloseHandle(ecx90, edi18, eax91, 0, 32, v37, v36, 0x224, 0);
    goto addr_416353_42;
    do {
        addr_416254_11:
        ecx97 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp3) + esi47 * 4 - 0x810);
        v98 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp3) - 16);
        eax99 = reinterpret_cast<int32_t>(g429810(edi42, ecx97, v98, 12, v37, v36, 0x800, v16));
        if (!eax99) 
            goto addr_41639a_5;
        eax100 = reinterpret_cast<int32_t>(GetProcessHeap(0, 32, edi42, ecx97, v98, 12, v37, v36, 0x800, v16));
        eax58 = reinterpret_cast<void**>(ebx15(eax100, 0, 32, edi42, ecx97, v98, 12, v37, v36, 0x800, v16));
        esp44 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp44) - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4);
        if (!eax58) 
            goto addr_416353_42;
        *reinterpret_cast<void***>(eax58 + 12) = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp3) + esi47 * 4 - 0x810);
        *reinterpret_cast<void***>(eax58 + 4) = v101;
        ecx102 = g429824;
        *reinterpret_cast<void***>(eax58 + 8) = v103;
        *reinterpret_cast<void***>(eax58 + 24) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax58 + 28) = ecx102;
        ++esi47;
        g429824 = eax58;
    } while (esi47 < v48);
    goto addr_416340_24;
    addr_4161d2_16:
    edx104 = g4297ec;
    eax105 = reinterpret_cast<int32_t>(esi52(edx104, "Module32First", eax54, "CreateToolhelp32Snapshot", eax51, "ImageNtHeader", "IMAGEHLP.DLL", "KERNEL32.DLL"));
    g42981c = eax105;
    if (!eax105) 
        goto addr_41639a_5;
    eax106 = g4297ec;
    eax107 = reinterpret_cast<int32_t>(esi52(eax106, "Module32Next", edx104, "Module32First", eax54, "CreateToolhelp32Snapshot", eax51, "ImageNtHeader", "IMAGEHLP.DLL", "KERNEL32.DLL"));
    esp9 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp56) - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4);
    g429820 = eax107;
    if (!eax107) 
        goto addr_41639a_5; else 
        goto addr_416207_3;
    addr_416185_17:
    eax108 = reinterpret_cast<void**>(edi49("PSAPI.DLL", eax54, "CreateToolhelp32Snapshot", eax51, "ImageNtHeader", "IMAGEHLP.DLL", "KERNEL32.DLL"));
    g4297e4 = eax108;
    if (!eax108) 
        goto addr_41639a_5;
    eax109 = reinterpret_cast<int32_t>(esi52(eax108, "EnumProcessModules", "PSAPI.DLL", eax54, "CreateToolhelp32Snapshot", eax51, "ImageNtHeader", "IMAGEHLP.DLL", "KERNEL32.DLL"));
    g429814 = eax109;
    if (!eax109) 
        goto addr_41639a_5;
    ecx4 = g4297e4;
    eax110 = reinterpret_cast<void**>(esi52(ecx4, "GetModuleInformation", eax108, "EnumProcessModules", "PSAPI.DLL", eax54, "CreateToolhelp32Snapshot", eax51, "ImageNtHeader", "IMAGEHLP.DLL", "KERNEL32.DLL"));
    esp9 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp56) - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4);
    g429810 = eax110;
    if (!eax110) {
        return eax110;
    }
    do {
        addr_4160f4_22:
        esi111 = *reinterpret_cast<void***>(ecx4 + 28);
        eax112 = reinterpret_cast<int32_t>(GetProcessHeap(0, ecx4));
        HeapFree(eax112, 0, ecx4);
        esp9 = esp9 - 4 - 4 - 4 + 4 - 4 - 4 + 4;
        ecx4 = esi111;
        g429824 = ecx4;
    } while (esi111);
    goto addr_416113_2;
}

void fun_411294(void** ecx, void** a2) {
    void** ecx3;
    void** edx4;
    void** v5;
    void** edx6;
    void** v7;
    void** eax8;
    void** edx9;
    void** ecx10;
    void** v11;
    void** v12;
    void** eax13;

    if (a2) {
        ecx3 = a2;
        edx4 = g429850;
        *reinterpret_cast<void***>(ecx3) = edx4;
        v5 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<signed char>(v5) < reinterpret_cast<signed char>(5)) {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(a2 + reinterpret_cast<unsigned char>(v5) * 4) + 24) = 0;
            ecx3 = a2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx3 + reinterpret_cast<unsigned char>(v5) * 4) + 4) = 0;
            ++v5;
        }
        edx6 = g429850;
        v7 = edx6;
        while (v7) {
            if (__intrinsic() || (ecx3 = v7, reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx3 + 20)) & 0xffff) >= reinterpret_cast<int32_t>(5))) {
                eax8 = fun_41119f(ecx3, 0, 0, 0, 0, 0x426628, v7, v7, v5);
                if (reinterpret_cast<int1_t>(eax8 == 1)) {
                }
            } else {
                *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(a2 + (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7 + 20)) & 0xffff) * 4) + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(a2 + (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7 + 20)) & 0xffff) * 4) + 4) + 1;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(a2 + (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7 + 20)) & 0xffff) * 4) + 24) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(a2 + (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7 + 20)) & 0xffff) * 4) + 24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7 + 16));
            }
            ecx3 = *reinterpret_cast<void***>(v7);
            v7 = ecx3;
        }
        edx9 = g42984c;
        *reinterpret_cast<void***>(a2 + 44) = edx9;
        ecx10 = g429840;
        *reinterpret_cast<void***>(a2 + 48) = ecx10;
    } else {
        eax13 = fun_41119f(ecx, 0, 0, 0, 0, 0x426074, 0x426650, v11, v12);
        if (reinterpret_cast<int1_t>(eax13 == 1)) {
        }
    }
    return;
}

struct s7* fun_413700(int32_t ecx, int32_t a2) {
    struct s7* v3;
    int32_t eax4;
    int32_t ecx5;
    struct s7* eax6;

    v3 = reinterpret_cast<struct s7*>(0x428b90);
    while (v3->f0 != a2 && (++v3, eax4 = g428c10, reinterpret_cast<uint32_t>(v3) < reinterpret_cast<uint32_t>(eax4 * 12 + 0x428b90))) {
    }
    ecx5 = g428c10;
    if (reinterpret_cast<uint32_t>(v3) >= reinterpret_cast<uint32_t>(ecx5 * 12 + 0x428b90) || v3->f0 != a2) {
        eax6 = reinterpret_cast<struct s7*>(0);
    } else {
        eax6 = v3;
    }
    return eax6;
}

void** fun_4110a5(void** ecx, void** a2, int32_t a3, void** a4) {
    void** v5;
    void** eax6;
    int32_t eax7;
    void** eax8;

    v5 = ecx;
    if (reinterpret_cast<unsigned char>(a2) <= reinterpret_cast<unsigned char>(0xffffffe0)) {
        while (1) {
            if (reinterpret_cast<unsigned char>(a2) > reinterpret_cast<unsigned char>(0xffffffe0)) {
                v5 = reinterpret_cast<void**>(0);
            } else {
                eax6 = fun_41106e(ecx, a2, v5);
                v5 = eax6;
            }
            if (v5) 
                break;
            if (!a3) 
                break;
            ecx = a2;
            eax7 = fun_4113d9(ecx, ecx);
            if (!eax7) 
                goto addr_41de1d_9;
        }
    } else {
        eax8 = reinterpret_cast<void**>(0);
        goto addr_41de23_12;
    }
    eax8 = v5;
    addr_41de23_12:
    return eax8;
    addr_41de1d_9:
    eax8 = reinterpret_cast<void**>(0);
    goto addr_41de23_12;
}

void** fun_41143d(void** ecx, void** a2, int32_t a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** eax9;
    int32_t eax10;
    void** eax11;

    v8 = ecx;
    while ((eax9 = fun_411384(a5, a2, a4, a5, a6, v8), v8 = eax9, !v8) && a3) {
        eax10 = fun_4113d9(a2, a2);
        if (!eax10) 
            goto addr_416980_5;
    }
    eax11 = v8;
    addr_416986_8:
    return eax11;
    addr_416980_5:
    eax11 = reinterpret_cast<void**>(0);
    goto addr_416986_8;
}

int32_t RtlUnwind = 0x2c716;

void fun_4113a7() {
    goto RtlUnwind;
}

void fun_411131(void** ecx) {
    int32_t v2;
    uint32_t eax3;
    void* ecx4;
    uint32_t eax5;
    int32_t* esp6;
    int32_t* esp7;
    int32_t eax8;

    v2 = reinterpret_cast<int32_t>(__return_address());
    if (eax3 >= 0x1000) {
        ecx4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 8);
        do {
            ecx4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx4) - 0x1000);
            eax5 = eax5 - 0x1000;
        } while (eax5 >= 0x1000);
        esp6 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx4) - eax5 - 4);
        *esp6 = v2;
        goto *esp6;
    } else {
        esp7 = reinterpret_cast<int32_t*>(-eax8 + reinterpret_cast<int32_t>(__zero_stack_offset()) + 4 - 4);
        *esp7 = v2;
        goto *esp7;
    }
}

void** fun_4110be(void** a1, void** a2);

void** fun_416ec0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** v13;
    int1_t below_or_equal14;
    void* eax15;
    int1_t zf16;
    void** edx17;
    void** v18;
    void** eax19;
    void** v20;
    void** v21;
    void** v22;
    void** eax23;
    void** eax24;
    int1_t zf25;
    int1_t zf26;
    void** edx27;
    int32_t eax28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** ebp33;
    void** eax34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** eax40;
    void** v41;
    void** eax42;
    uint32_t eax43;
    void** v44;
    void** v45;
    void** eax46;
    void** v47;
    void** eax48;
    void** v49;
    void** eax50;
    void** v51;
    void** v52;
    void** v53;
    void** eax54;
    void** eax55;
    void** v56;
    void** edx57;
    void** ecx58;
    void** edx59;
    void** ecx60;
    void** edx61;
    void** eax62;
    int1_t below_or_equal63;
    void** ecx64;
    void** ecx65;
    void** eax66;
    void** v67;
    uint32_t ecx68;
    uint32_t v69;
    void** v70;
    uint32_t ecx71;
    uint32_t v72;
    void** eax73;
    void** ecx74;
    void** eax75;
    void** ecx76;
    void** eax77;
    int1_t zf78;
    void** edx79;
    void** eax80;
    void** v81;
    void** eax82;
    void** eax83;

    v13 = reinterpret_cast<void**>(0);
    if (a2) {
        if (!a7 || a3) {
            below_or_equal14 = reinterpret_cast<uint32_t>(g429858) <= 0;
            if (!below_or_equal14) {
                eax15 = g429858;
                zf16 = reinterpret_cast<int1_t>(g429848 == reinterpret_cast<uint32_t>(eax15) - 1);
                if (!zf16) {
                    edx17 = g429848;
                    g429848 = edx17 + 1;
                } else {
                    eax19 = fun_411096(ecx, v18);
                    if (!eax19 && (eax23 = fun_41119f(ecx, 2, 0x4260e0, 0x264, 0, 0x4260ec, v20, v21, v22), reinterpret_cast<int1_t>(eax23 == 1))) {
                    }
                    g429848 = reinterpret_cast<void**>(0);
                }
            }
            eax24 = g428d50;
            zf25 = reinterpret_cast<int1_t>(g428d54 == 0xffffffff);
            if (!zf25 && (zf26 = eax24 == g428d54, zf26)) {
            }
            edx27 = a4;
            eax28 = reinterpret_cast<int32_t>(g428ec0(2, a2, a3, edx27, eax24, a5, a6));
            if (!eax28) 
                goto addr_416fb5_12;
        } else {
            fun_41141a(a4, a2, a4, v29, v30, v31, v32, 0, ebp33, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
            eax34 = reinterpret_cast<void**>(0);
            goto addr_4173cb_14;
        }
    } else {
        eax34 = fun_411064(a5, a3, a4, a5, a6, v35, v36, v37, v38, 0, ebp33, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
        goto addr_4173cb_14;
    }
    if (reinterpret_cast<unsigned char>(a3) <= reinterpret_cast<unsigned char>(0xffffffdb)) {
        if (a4 != 1 && ((edx27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a4) & 0xffff), edx27 != 4) && (reinterpret_cast<unsigned char>(a4) & 0xffff) != 2)) {
            eax40 = fun_41119f(a2, 1, 0, 0, 0, 0x426074, 0x42600c, eax24, v39);
            if (reinterpret_cast<int1_t>(eax40 == 1)) {
            }
            goto addr_4170bb_21;
        }
        *reinterpret_cast<unsigned char*>(&edx27) = g428d5b;
        v41 = edx27;
        eax42 = fun_417d50(a2, (reinterpret_cast<unsigned char>(a2) & 0xfffffffc) - 4, *reinterpret_cast<unsigned char*>(&v41), 4, eax24);
        if (!eax42) {
            addr_4170bb_21:
            eax43 = fun_4111ea(a2, a2, eax24);
            if (!eax43 && (eax46 = fun_41119f(a2, 2, 0x4260e0, 0x297, 0, 0x4261d4, eax24, v44, v45), reinterpret_cast<int1_t>(eax46 == 1))) {
            }
        } else {
            eax48 = fun_41119f(a2, 1, 0, 0, 0, 0x426200, a2, eax24, v47);
            if (reinterpret_cast<int1_t>(eax48 == 1)) {
            }
            eax34 = reinterpret_cast<void**>(0);
            goto addr_4173cb_14;
        }
    } else {
        eax50 = fun_41119f(a2, 1, 0, 0, 0, 0x42625c, a3, eax24, v49);
        if (reinterpret_cast<int1_t>(eax50 == 1)) {
        }
        eax34 = reinterpret_cast<void**>(0);
        goto addr_4173cb_14;
    }
    v51 = a2 - 32;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v51 + 20) == 3)) {
        v13 = reinterpret_cast<void**>(1);
    }
    if (!v13) {
        if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v51 + 20)) & 0xffff) == 2 && (reinterpret_cast<unsigned char>(a4) & 0xffff) == 1) {
        }
    } else {
        if ((!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v51 + 12) == 0xfedcbabc) || *reinterpret_cast<void***>(v51 + 24)) && (eax54 = fun_41119f(v51, 2, 0x4260e0, 0x2a1, 0, 0x426180, eax24, v52, v53), reinterpret_cast<int1_t>(eax54 == 1))) {
        }
    }
    if (!a7) {
        eax55 = fun_4110be(v51, a3 + 36);
        v56 = eax55;
        if (v56) {
            addr_4171b6_40:
            edx57 = g428d50;
            g428d50 = edx57 + 1;
            if (!v13 && (ecx58 = g429840, g429840 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx58) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v56 + 16))), edx59 = g429840, g429840 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx59) + reinterpret_cast<unsigned char>(a3)), ecx60 = g429854, g429854 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx60) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v56 + 16))), edx61 = g429854, g429854 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx61) + reinterpret_cast<unsigned char>(a3)), eax62 = g429854, below_or_equal63 = reinterpret_cast<unsigned char>(eax62) <= reinterpret_cast<unsigned char>(g42984c), !below_or_equal63)) {
                ecx64 = g429854;
                g42984c = ecx64;
            }
        } else {
            eax34 = reinterpret_cast<void**>(0);
            goto addr_4173cb_14;
        }
    } else {
        ecx65 = a3 + 36;
        eax66 = fun_411203(ecx65, v51, ecx65);
        v56 = eax66;
        if (v56) {
            goto addr_4171b6_40;
        } else {
            eax34 = reinterpret_cast<void**>(0);
            goto addr_4173cb_14;
        }
    }
    if (reinterpret_cast<unsigned char>(a3) > reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v56 + 16))) {
        v67 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v56 + 16)));
        ecx68 = g428d5a;
        v69 = ecx68;
        v70 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v56 + 32) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v56 + 16)));
        fun_411195(v70, *reinterpret_cast<void***>(&v69), v67, eax24, v56 + 32, v56, v51, v13, ebp33);
    }
    ecx71 = g428d58;
    v72 = ecx71;
    fun_411195(reinterpret_cast<unsigned char>(v56 + 32) + reinterpret_cast<unsigned char>(a3), *reinterpret_cast<void***>(&v72), 4, eax24, v56 + 32, v56, v51, v13, ebp33);
    if (!v13) {
        *reinterpret_cast<void***>(v56 + 8) = a5;
        *reinterpret_cast<void***>(v56 + 12) = a6;
        *reinterpret_cast<void***>(v56 + 24) = eax24;
    }
    *reinterpret_cast<void***>(v56 + 16) = a3;
    if (!a7 && ((a7 || v56 != v51) && (eax73 = fun_41119f(a3, 2, 0x4260e0, 0x2eb, 0, 0x426144, eax24, v56 + 32, v56), reinterpret_cast<int1_t>(eax73 == 1)))) {
    }
    if (v56 == v51 || v13) {
        eax34 = v56 + 32;
    } else {
        if (!*reinterpret_cast<void***>(v56)) {
            ecx74 = g429844;
            if (ecx74 != v51 && (eax75 = fun_41119f(ecx74, 2, 0x4260e0, 0x2fc, 0, 0x426124, eax24, v56 + 32, v56), reinterpret_cast<int1_t>(eax75 == 1))) {
            }
            g429844 = *reinterpret_cast<void***>(v56 + 4);
        } else {
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(v56) + 4) = *reinterpret_cast<void***>(v56 + 4);
        }
        if (!*reinterpret_cast<void***>(v56 + 4)) {
            ecx76 = g429850;
            if (ecx76 != v51 && (eax77 = fun_41119f(ecx76, 2, 0x4260e0, 0x307, 0, 0x426104, eax24, v56 + 32, v56), reinterpret_cast<int1_t>(eax77 == 1))) {
            }
            g429850 = *reinterpret_cast<void***>(v56);
        } else {
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(v56 + 4)) = *reinterpret_cast<void***>(v56);
        }
        zf78 = g429850 == 0;
        if (zf78) {
            g429844 = v56;
        } else {
            edx79 = g429850;
            *reinterpret_cast<void***>(edx79 + 4) = v56;
        }
        eax80 = g429850;
        *reinterpret_cast<void***>(v56) = eax80;
        *reinterpret_cast<void***>(v56 + 4) = reinterpret_cast<void**>(0);
        g429850 = v56;
        eax34 = v56 + 32;
    }
    addr_4173cb_14:
    return eax34;
    addr_416fb5_12:
    if (!a5) {
        eax82 = fun_41119f(a2, 0, 0, 0, 0, 0x426074, 0x426294, eax24, v81);
        if (reinterpret_cast<int1_t>(eax82 == 1)) {
        }
    } else {
        eax83 = fun_41119f(a2, 0, 0, 0, 0, 0x4262c0, a5, a6, eax24);
        if (reinterpret_cast<int1_t>(eax83 == 1)) {
        }
    }
    eax34 = reinterpret_cast<void**>(0);
    goto addr_4173cb_14;
}

void** fun_4110be(void** a1, void** a2) {
    int1_t zf3;
    void** eax4;
    void** eax5;
    void** v6;
    void** v7;
    void** eax8;
    int1_t below_or_equal9;
    int32_t eax10;
    void** eax11;
    void** eax12;
    void** eax13;

    if (reinterpret_cast<unsigned char>(a2) <= reinterpret_cast<unsigned char>(0xffffffe0)) {
        zf3 = g42af90 == 3;
        if (!zf3) {
            if (!a2) {
                a2 = reinterpret_cast<void**>(1);
            }
            eax4 = g42af80;
            eax5 = reinterpret_cast<void**>(HeapReAlloc(eax4, 16, a1, a2));
            v6 = eax5;
        } else {
            eax8 = fun_4111c7(a1, v7);
            if (eax8 && ((v6 = reinterpret_cast<void**>(0), below_or_equal9 = reinterpret_cast<unsigned char>(a2) <= reinterpret_cast<unsigned char>(g42aca4), below_or_equal9) && (eax10 = fun_4111e5(eax8, a1, a2), !!eax10))) {
                v6 = a1;
            }
            if (!eax8) {
                if (!a2) {
                    a2 = reinterpret_cast<void**>(1);
                }
                eax11 = g42af80;
                eax12 = reinterpret_cast<void**>(HeapReAlloc(eax11, 16, a1, reinterpret_cast<uint32_t>(a2 + 15) & 0xfffffff0));
                v6 = eax12;
            }
        }
        eax13 = v6;
    } else {
        eax13 = reinterpret_cast<void**>(0);
    }
    return eax13;
}

struct s36 {
    signed char[4] pad4;
    void** f4;
};

void** fun_41136b(void** ecx, void** a2) {
    void** eax3;
    void** eax4;
    void** ecx5;
    struct s36* ecx6;
    void** edx7;
    void** ecx8;
    void** eax9;
    void** v10;
    void** ecx11;
    void** eax12;
    void** v13;
    void** eax14;
    void** eax15;
    void** ecx16;
    void* ecx17;

    eax3 = g42b0f4;
    eax4 = fun_41128a(ecx, eax3, 2);
    ecx5 = g42b0f0;
    ecx6 = reinterpret_cast<struct s36*>(reinterpret_cast<unsigned char>(ecx5) - reinterpret_cast<unsigned char>(g42b0f4));
    if (reinterpret_cast<unsigned char>(eax4) >= reinterpret_cast<unsigned char>(&ecx6->f4)) {
        addr_4167c2_3:
        edx7 = g42b0f0;
        *reinterpret_cast<void***>(edx7) = a2;
        ecx8 = g42b0f0;
        g42b0f0 = ecx8 + 4;
        eax9 = a2;
    } else {
        if (reinterpret_cast<unsigned char>(eax4) >= reinterpret_cast<unsigned char>(0x800)) {
            v10 = reinterpret_cast<void**>(0x800);
        } else {
            v10 = eax4;
        }
        ecx11 = g42b0f4;
        eax12 = fun_4114ec(ecx11, ecx11, reinterpret_cast<unsigned char>(eax4) + reinterpret_cast<unsigned char>(v10), 2, 0x425fdc, 0x7d, v10);
        v13 = eax12;
        if (v13) 
            goto addr_41679f_8;
        eax14 = g42b0f4;
        eax15 = fun_4114ec(ecx11, eax14, eax4 + 16, 2, 0x425fdc, 0x83, v10);
        v13 = eax15;
        if (v13) 
            goto addr_41679f_8; else 
            goto addr_41679b_10;
    }
    addr_4167df_11:
    return eax9;
    addr_41679f_8:
    ecx16 = g42b0f0;
    ecx17 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx16) - reinterpret_cast<unsigned char>(g42b0f4));
    g42b0f0 = v13 + (reinterpret_cast<int32_t>(ecx17) >> 2) * 4;
    g42b0f4 = v13;
    goto addr_4167c2_3;
    addr_41679b_10:
    eax9 = reinterpret_cast<void**>(0);
    goto addr_4167df_11;
}

int32_t GetACP = 0x2c7ea;

int32_t GetOEMCP = 0x2c7f4;

void** fun_419a50(void** a1) {
    void** eax2;

    g429864 = 0;
    if (!reinterpret_cast<int1_t>(a1 == 0xfffffffe)) {
        if (!reinterpret_cast<int1_t>(a1 == 0xfffffffd)) {
            if (!reinterpret_cast<int1_t>(a1 == 0xfffffffc)) {
                eax2 = a1;
            } else {
                g429864 = 1;
                eax2 = g429914;
            }
        } else {
            g429864 = 1;
            eax2 = reinterpret_cast<void**>(GetACP());
        }
    } else {
        g429864 = 1;
        eax2 = reinterpret_cast<void**>(GetOEMCP());
    }
    return eax2;
}

void** fun_4111f4(void** ecx, void** a2, int32_t a3) {
    void* esp4;
    struct s3* eax5;
    struct s3* esp6;
    void** eax7;
    int1_t zf8;
    void** v9;
    void** v10;
    void** edi11;
    void** esi12;
    void** eax13;
    void** v14;
    int32_t eax15;
    void* esp16;
    void** v17;
    void** eax18;
    void* esp19;
    void** eax20;
    void** ebx21;
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
    void** v32;
    void** v33;
    void** v34;
    void** eax35;

    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax5 = g0;
    esp6 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(esp4) - 4 - 4 - 4 - 4);
    g0 = esp6;
    eax7 = g428eb0;
    zf8 = g42992c == 0;
    if (zf8) {
        if (a2 == 1) {
            v9 = reinterpret_cast<void**>(0x427248);
            v10 = reinterpret_cast<void**>(0x427188);
        } else {
            v9 = reinterpret_cast<void**>(0x42733c);
            v10 = reinterpret_cast<void**>(0x427268);
        }
        eax13 = fun_41119f(ecx, 1, 0, 0, 0, 0x426074, v10, edi11, esi12);
        if (reinterpret_cast<int1_t>(eax13 == 1)) {
        }
        v14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp4) + 0xfffffec8);
        eax15 = reinterpret_cast<int32_t>(GetModuleFileNameA(0, v14, 0x104));
        esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 0x134 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 24 - 4 - 4 - 4 - 4 + 4);
        if (!eax15) {
            fun_411258(reinterpret_cast<int32_t>(esp4) + 0xfffffec8, 0x425b7c, 0, v14, 0x104);
            esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 - 4 - 4 + 4 + 8);
        }
        v17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp4) + 0xfffffec8);
        eax18 = fun_411235(reinterpret_cast<int32_t>(esp4) + 0xfffffec8, 0, v14, 0x104);
        esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 - 4 + 4 + 4);
        if (reinterpret_cast<uint32_t>(eax18 + 11) > 60) {
            eax20 = fun_411235(reinterpret_cast<int32_t>(esp4) + 0xfffffec8, 0, v14, 0x104);
            v17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v17) + reinterpret_cast<unsigned char>(eax20) + 0xffffffcf);
            fun_411492(v17, 0x425b78, 3, 0, v14, 0x104);
            esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 - 4 + 4 + 4 - 4 - 4 - 4 - 4 + 4 + 12);
        }
        fun_411235(v17, 0, v14, 0x104);
        fun_414c20(v17, 0, v14, 0x104, edi11, esi12, ebx21, v22, a2, v9, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33);
        v34 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp19) - 4 - 4 + 4 + 4 - 4 + 4);
        fun_411258(v34, v9, 0, v14, 0x104);
        fun_41120d(v34, 0x425b54, 0, v14, 0x104);
        fun_41120d(v34, 0x427178, 0, v14, 0x104);
        fun_41120d(v34, v17, 0, v14, 0x104);
        fun_41120d(v34, 0x425b54, 0, v14, 0x104);
        fun_41120d(v34, v10, 0, v14, 0x104);
        fun_41107d(v34, "Microsoft Visual C++ Runtime Library", 0x12010, 0, v14, 0x104);
    } else {
        g42992c(a2, a3);
    }
    fun_411212(3);
    g0 = eax5;
    eax35 = fun_411087(eax7, edi11, esi12, ebx21, v34);
    return eax35;
}

struct s10* fun_4131a0();

int32_t fun_413190() {
    struct s10* eax1;

    eax1 = fun_4131a0();
    return eax1->f32;
}

struct s10* fun_4131a0() {
    struct s10* eax1;

    eax1 = g18;
    return eax1;
}

void fun_411005() {
    goto GetEnvironmentStrings;
}

unsigned char g736d0041;

void fun_411cff(signed char cl) {
    int32_t eax2;
    int32_t eax3;
    signed char* eax4;
    unsigned char bl5;

    eax4 = reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(eax2 + eax3)(__return_address()));
    *eax4 = reinterpret_cast<signed char>(*eax4 + *reinterpret_cast<signed char*>(&eax4));
    g736d0041 = reinterpret_cast<unsigned char>(g736d0041 | bl5);
}

struct s37 {
    signed char[30] pad30;
    signed char f30;
};

struct s38 {
    signed char[99] pad99;
    signed char f99;
};

struct s39 {
    signed char[99] pad99;
    signed char f99;
};

struct s40 {
    signed char[99] pad99;
    signed char f99;
};

void fun_411e48(struct s37* ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    signed char dl5;
    struct s38* edi6;
    struct s39* edi7;
    signed char dh8;
    struct s40* edi9;

    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    ecx->f30 = reinterpret_cast<signed char>(ecx->f30 + dl5);
    edi6->f99 = reinterpret_cast<signed char>(edi7->f99 + dh8);
}

void fun_4120fb(unsigned char* ecx) {
    unsigned char al2;
    signed char* edi3;
    signed char* esi4;

    *ecx = reinterpret_cast<unsigned char>(*ecx & al2);
    *edi3 = *esi4;
}

struct s41 {
    signed char[115] pad115;
    signed char f115;
};

int32_t EndDialog = 0x2c51a;

void** fun_412101(unsigned char* ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21) {
    void** v22;
    int32_t* eax23;
    int32_t* eax24;
    signed char* eax25;
    signed char* eax26;
    signed char al27;
    struct s41* eax28;
    unsigned char ah29;
    signed char dh30;
    void** v31;
    void** ebp32;
    void** v33;
    void** ebx34;
    void** v35;
    void** esi36;
    void** v37;
    void** edi38;
    void** ecx39;
    uint32_t eax40;
    uint32_t eax41;
    uint32_t eax42;
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
    void** v58;
    void** eax59;

    v22 = reinterpret_cast<void**>(__return_address());
    *eax23 = *eax24 + 1;
    *eax25 = reinterpret_cast<signed char>(*eax26 + al27);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax28) + 1) = reinterpret_cast<unsigned char>(ah29 | *ecx);
    eax28->f115 = reinterpret_cast<signed char>(eax28->f115 + dh30);
    v31 = ebp32;
    v33 = ebx34;
    v35 = esi36;
    v37 = edi38;
    ecx39 = reinterpret_cast<void**>(49);
    while (ecx39) {
        --ecx39;
    }
    if (a3 != 0x110) {
        if (a3 == 0x111) {
            eax40 = reinterpret_cast<unsigned char>(a4) & 0xffff;
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax40)) == 1 || (eax41 = reinterpret_cast<unsigned char>(a4) & 0xffff, ecx39 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax41))), reinterpret_cast<int1_t>(ecx39 == 2))) {
                eax42 = reinterpret_cast<unsigned char>(a4) & 0xffff;
                ecx39 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax42)));
                EndDialog(a2, ecx39);
                fun_411424(ecx39, a2, ecx39, v37, v35, v33, a3, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58);
            } else {
                addr_4121fe_10:
            }
        } else {
            goto addr_4121fe_10;
        }
    }
    eax59 = fun_411424(ecx39, v31, v22, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21);
    return eax59;
}

void fun_41a337() {
    __asm__("in al, 0x8b");
}

void fun_41a4d3(int32_t ecx) {
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

void fun_41f277() {
    __asm__("in al, 0x8b");
}

void fun_41f413(int32_t ecx) {
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

void fun_411e3d(int32_t ecx) {
    int32_t* eax2;
    int32_t* eax3;
    int32_t eax4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;

    *eax2 = *eax3 + eax4;
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
}

void** fun_4122e9() {
    void** eax1;

    eax1 = fun_411474(0, 0, 0, 1, 1);
    return eax1;
}

void** g429648 = reinterpret_cast<void**>(0);

void*** g429640 = reinterpret_cast<void***>(0);

int32_t GetCommandLineA = 0x2c558;

void** fun_4123b3(void** ecx) {
    void* esp2;
    struct s3* eax3;
    struct s3* esp4;
    void** edi5;
    void** esi6;
    void** ebx7;
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
    void** v25;
    void** ecx26;
    uint32_t v27;
    int1_t zf28;
    void** edx29;
    void** eax30;
    void*** tmp32_31;
    void** eax32;
    int32_t eax33;
    uint32_t eax34;
    void** eax35;
    void** v36;
    void** v37;
    void** v38;
    void** eax39;
    void** v40;
    void** v41;
    void** v42;
    uint32_t eax43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    uint32_t eax49;
    void** eax50;
    void** v51;
    void** eax52;
    void** v53;
    uint16_t v54;
    void** eax55;
    void** eax56;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax3 = g0;
    esp4 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 - 4);
    g0 = esp4;
    fun_414c20(ecx, edi5, esi6, ebx7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24);
    v25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp4 - 7) - 4 - 4 - 4 - 4 + 4);
    GetVersionExA(v25);
    g429638 = v25;
    g429644 = esi6;
    g429648 = ebx7;
    ecx26 = reinterpret_cast<void**>(v27 & 0x7fff);
    g42963c = ecx26;
    zf28 = reinterpret_cast<int1_t>(g429638 == 2);
    if (!zf28) {
        edx29 = g42963c;
        g42963c = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx29) | 0x8000);
    }
    eax30 = g429644;
    tmp32_31 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(eax30) << 8) + reinterpret_cast<unsigned char>(g429648));
    g429640 = tmp32_31;
    eax32 = fun_4126e0(v25);
    eax33 = fun_411078(ecx26, 0, v25);
    if (!eax33) {
        fun_4126a0(28, v25);
    }
    fun_41144c(v25);
    eax34 = fun_41140b(ecx26, v25);
    if (reinterpret_cast<int32_t>(eax34) < reinterpret_cast<int32_t>(0)) {
        fun_4114e2(27, v25);
    }
    eax35 = reinterpret_cast<void**>(GetCommandLineA(v25));
    g42b100 = eax35;
    eax39 = fun_41100f(v25, 0x94, esi6, ebx7, v36, v25, v37, v38, v25, eax32);
    g4295fc = eax39;
    eax43 = fun_411032(v25, 0x94, esi6, ebx7, v40, v25, v41, v42);
    if (reinterpret_cast<int32_t>(eax43) < reinterpret_cast<int32_t>(0)) {
        fun_4114e2(8, v25);
    }
    eax49 = fun_411596(v25, 0x94, esi6, ebx7, v44, v25, v45, v46, v25, eax32, v47, v48);
    if (reinterpret_cast<int32_t>(eax49) < reinterpret_cast<int32_t>(0)) {
        fun_4114e2(9, v25);
    }
    eax50 = fun_411587(ecx26, 1, v25);
    if (eax50) {
        fun_4114e2(eax50, v25);
    }
    v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp2) + 0xffffffa0);
    GetStartupInfoA(v51, v25);
    eax52 = fun_41142e(v51, v25);
    if (1) {
        v53 = reinterpret_cast<void**>(10);
    } else {
        v53 = reinterpret_cast<void**>(static_cast<uint32_t>(v54));
    }
    eax55 = reinterpret_cast<void**>(GetModuleHandleA(0, 0, eax52, v53, v51, v25));
    eax56 = fun_4114a6(eax55, 0, 0, eax52, v53, v51, v25, 0x94, esi6, ebx7, v53, v25);
    if (!eax32) {
        fun_41158c(eax56, v53, v51, v25);
    }
    fun_41115e(v53, v51, v25);
    g0 = eax3;
    return eax56;
}

uint32_t fun_412584() {
    int32_t ecx1;
    int32_t ebp2;
    int32_t ebp3;
    int32_t v4;
    int32_t ebp5;
    int32_t v6;
    int32_t ebp7;
    uint32_t eax8;

    ecx1 = ***reinterpret_cast<int32_t***>(ebp2 - 20);
    *reinterpret_cast<int32_t*>(ebp3 - 0x78) = ecx1;
    v4 = *reinterpret_cast<int32_t*>(ebp5 - 20);
    v6 = *reinterpret_cast<int32_t*>(ebp7 - 0x78);
    eax8 = fun_4114f6(ecx1, v6, v4);
    return eax8;
}

struct s42 {
    int32_t f0;
    signed char f1;
};

struct s43 {
    signed char f0;
    signed char f1;
};

struct s44 {
    int32_t f0;
    signed char f1;
    int32_t f4;
    signed char f8;
};

int32_t g425558 = 0x694c0d0a;

int32_t g42555c = 0x93a656e;

signed char g425560 = 0;

struct s45 {
    signed char f0;
    signed char f1;
};

struct s46 {
    int32_t f0;
    signed char f1;
    int32_t f4;
    int16_t f8;
    signed char f10;
};

int32_t g425548 = 0x6f4d0d0a;

int32_t g42554c = 0x656c7564;

int16_t g425550 = 0x93a;

signed char g425552 = 0;

struct s47 {
    signed char f0;
    signed char f1;
};

struct s48 {
    signed char[8] pad8;
    void** f8;
};

struct s49 {
    signed char[12] pad12;
    void** f12;
};

struct s50 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_412c6d(signed char* ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    signed char* ecx10;
    signed char dl11;
    signed char* eax12;
    struct s42* edi13;
    void* ebx14;
    signed char* eax15;
    int32_t ebp16;
    int32_t ecx17;
    int32_t* esi18;
    signed char* esi19;
    uint32_t eax20;
    struct s43* edi21;
    void* ebx22;
    uint32_t ecx23;
    uint32_t ecx24;
    struct s44* edi25;
    void* ebx26;
    int32_t ecx27;
    int32_t edx28;
    signed char al29;
    int32_t v30;
    int32_t ebp31;
    signed char* eax32;
    signed char* edx33;
    uint32_t eax34;
    struct s45* edi35;
    void* ebx36;
    uint32_t ecx37;
    signed char* esi38;
    uint32_t ecx39;
    struct s46* edi40;
    void* ebx41;
    int32_t edx42;
    int32_t eax43;
    signed char dl44;
    signed char* eax45;
    int32_t ebp46;
    signed char* edx47;
    uint32_t eax48;
    struct s47* edi49;
    void* ebx50;
    uint32_t ecx51;
    signed char* esi52;
    void** edx53;
    struct s48* ebp54;
    void** eax55;
    struct s49* ebp56;
    uint32_t ecx57;
    void** v58;
    void** ebx59;
    void** ecx60;
    int32_t ebp61;
    struct s50* ebp62;

    v9 = reinterpret_cast<void**>(__return_address());
    ecx10 = ecx;
    do {
        dl11 = *eax12;
        ++eax12;
        *ecx10 = dl11;
        ++ecx10;
    } while (dl11);
    edi13 = reinterpret_cast<struct s42*>(reinterpret_cast<int32_t>(ebx14) - 1);
    do {
        edi13 = reinterpret_cast<struct s42*>(reinterpret_cast<int32_t>(edi13) + 1);
    } while (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi13) + 1));
    eax15 = *reinterpret_cast<signed char**>(ebp16 - 16);
    ecx17 = 10;
    esi18 = reinterpret_cast<int32_t*>(0x425564);
    while (ecx17) {
        --ecx17;
        edi13->f0 = *esi18;
        edi13 = reinterpret_cast<struct s42*>(&edi13->f1);
        ++esi18;
    }
    esi19 = eax15;
    do {
        ++eax15;
    } while (*eax15);
    eax20 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax15) - reinterpret_cast<int32_t>(esi19));
    edi21 = reinterpret_cast<struct s43*>(reinterpret_cast<int32_t>(ebx22) - 1);
    do {
        edi21 = reinterpret_cast<struct s43*>(&edi21->f1);
    } while (edi21->f1);
    ecx23 = eax20 >> 2;
    while (ecx23) {
        --ecx23;
        edi21->f0 = *esi19;
        edi21 = edi21 + 2;
        esi19 = esi19 + 4;
    }
    ecx24 = eax20 & 3;
    while (ecx24) {
        --ecx24;
        edi21->f0 = *esi19;
        edi21 = reinterpret_cast<struct s43*>(&edi21->f1);
        ++esi19;
    }
    edi25 = reinterpret_cast<struct s44*>(reinterpret_cast<int32_t>(ebx26) - 1);
    do {
        edi25 = reinterpret_cast<struct s44*>(reinterpret_cast<int32_t>(edi25) + 1);
    } while (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi25) + 1));
    ecx27 = g425558;
    edi25->f0 = ecx27;
    edx28 = g42555c;
    *reinterpret_cast<int32_t*>(&edi25->f1) = edx28;
    al29 = g425560;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi25) + 8) = al29;
    v30 = *reinterpret_cast<int32_t*>(ebp31 - 4);
    eax32 = fun_412e30(v30, v9);
    edx33 = eax32;
    do {
        ++eax32;
    } while (*eax32);
    eax34 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax32) - reinterpret_cast<int32_t>(edx33));
    edi35 = reinterpret_cast<struct s45*>(reinterpret_cast<int32_t>(ebx36) - 1);
    do {
        edi35 = reinterpret_cast<struct s45*>(&edi35->f1);
    } while (edi35->f1);
    ecx37 = eax34 >> 2;
    esi38 = edx33;
    while (ecx37) {
        --ecx37;
        edi35->f0 = *esi38;
        edi35 = edi35 + 2;
        esi38 = esi38 + 4;
    }
    ecx39 = eax34 & 3;
    while (ecx39) {
        --ecx39;
        edi35->f0 = *esi38;
        edi35 = reinterpret_cast<struct s45*>(&edi35->f1);
        ++esi38;
    }
    edi40 = reinterpret_cast<struct s46*>(reinterpret_cast<int32_t>(ebx41) - 1);
    do {
        edi40 = reinterpret_cast<struct s46*>(reinterpret_cast<int32_t>(edi40) + 1);
    } while (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi40) + 1));
    edx42 = g425548;
    edi40->f0 = edx42;
    eax43 = g42554c;
    *reinterpret_cast<int32_t*>(&edi40->f1) = eax43;
    *reinterpret_cast<int16_t*>(&ecx39) = g425550;
    *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(edi40) + 8) = *reinterpret_cast<int16_t*>(&ecx39);
    dl44 = g425552;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi40) + 10) = dl44;
    eax45 = *reinterpret_cast<signed char**>(ebp46 - 8);
    edx47 = eax45;
    do {
        ++eax45;
    } while (*eax45);
    eax48 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax45) - reinterpret_cast<int32_t>(edx47));
    edi49 = reinterpret_cast<struct s47*>(reinterpret_cast<int32_t>(ebx50) - 1);
    do {
        edi49 = reinterpret_cast<struct s47*>(&edi49->f1);
    } while (edi49->f1);
    ecx51 = eax48 >> 2;
    esi52 = edx47;
    edx53 = ebp54->f8;
    while (ecx51) {
        --ecx51;
        edi49->f0 = *esi52;
        edi49 = edi49 + 2;
        esi52 = esi52 + 4;
    }
    eax55 = ebp56->f12;
    ecx57 = eax48 & 3;
    v58 = ebx59;
    while (ecx57) {
        --ecx57;
        edi49->f0 = *esi52;
        edi49 = reinterpret_cast<struct s47*>(&edi49->f1);
        ++esi52;
    }
    ecx60 = *reinterpret_cast<void***>(ebp61 - 20);
    fun_412930(edx53, ecx60, eax55, v58, v9, a2, a3, a4, a5, a6, a7, a8);
    goto ebp62->f4;
}

void fun_412d2d(int32_t ecx) {
}

void** g428b6c = reinterpret_cast<void**>(1);

void** g425638 = reinterpret_cast<void**>(84);

void** g42563c = reinterpret_cast<void**>(0x76);

void** g425640 = reinterpret_cast<void**>(97);

int16_t g425644 = 0x2720;

signed char g425646 = 0;

void fun_412f4e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16) {
    void** v17;
    void** v18;
    void** ebp19;
    void** v20;
    void** ebx21;
    void** ebx22;
    void** v23;
    void** esi24;
    void*** esp25;
    void** v26;
    void** edi27;
    void** esi28;
    void** eax29;
    void** ecx30;
    void** edx31;
    int32_t ecx32;
    void** ecx33;
    void** ecx34;
    void** ecx35;
    int16_t cx36;
    signed char cl37;
    void** eax38;
    void* eax39;
    uint32_t ecx40;
    uint32_t ecx41;
    int32_t ecx42;

    v17 = reinterpret_cast<void**>(__return_address());
    v18 = ebp19;
    v20 = ebx21;
    ebx22 = g428b6c;
    v23 = esi24;
    esp25 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4);
    v26 = edi27;
    if (ebx22 == 0xffffffff) {
        addr_413057_3:
        return;
    } else {
        esi28 = a2;
        eax29 = esi28;
        ecx30 = ecx;
        do {
            ecx30 = *reinterpret_cast<void***>(eax29);
            ++eax29;
        } while (ecx30);
        fun_414c20(ecx30, v26, v23, v20, v18, v17, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
        edx31 = reinterpret_cast<void**>(esp25 - 4 + 4);
        if (esi28) 
            goto addr_412fbe_7;
    }
    ecx32 = 12;
    while (ecx32) {
        --ecx32;
    }
    addr_413047_11:
    fun_412930(v17, ebx22, 3, edx31, v26, v23, v20, v18, v17, a2, a3, a4);
    goto addr_413057_3;
    addr_412fbe_7:
    ecx33 = g425638;
    v26 = ecx33;
    ecx34 = g42563c;
    v23 = ecx34;
    ecx35 = g425640;
    v20 = ecx35;
    cx36 = g425644;
    *reinterpret_cast<int16_t*>(&v18) = cx36;
    cl37 = g425646;
    *reinterpret_cast<signed char*>(&v18 + 2) = cl37;
    eax38 = esi28;
    do {
        ++eax38;
    } while (*reinterpret_cast<void***>(eax38));
    eax39 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax38) - reinterpret_cast<unsigned char>(esi28));
    do {
    } while (*reinterpret_cast<signed char*>(&a4 + 1));
    ecx40 = reinterpret_cast<uint32_t>(eax39) >> 2;
    while (ecx40) {
        --ecx40;
    }
    ecx41 = reinterpret_cast<uint32_t>(eax39) & 3;
    while (ecx41) {
        --ecx41;
    }
    do {
    } while (*reinterpret_cast<signed char*>(&a4 + 1));
    ecx42 = 9;
    while (ecx42) {
        --ecx42;
    }
    goto addr_413047_11;
}

void fun_415d9d(int32_t ecx) {
}

void fun_4163fd(int32_t ecx) {
}

struct s51 {
    signed char[1] pad1;
    signed char f1;
};

struct s52 {
    signed char[1] pad1;
    signed char f1;
};

struct s53 {
    signed char[2] pad2;
    int32_t f2;
};

struct s54 {
    signed char[2] pad2;
    int32_t f2;
};

void fun_41a2c9(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    signed char* edi4;
    signed char* esi5;
    uint32_t ecx6;
    struct s51* edi7;
    struct s52* esi8;
    int32_t* esi9;
    struct s53* esi10;
    int32_t* edi11;
    struct s54* edi12;

    edx2 = edx3 & ecx;
    *edi4 = *esi5;
    ecx6 = ecx >> 2;
    edi7->f1 = esi8->f1;
    esi9 = &esi10->f2;
    edi11 = &edi12->f2;
    if (ecx6 < 8) 
        goto 0x41a28c;
    while (ecx6) {
        --ecx6;
        *edi11 = *esi9;
        ++edi11;
        ++esi9;
    }
    switch (edx2) {
    case 3:
        goto 0x41a3b4;
    case 2:
        goto 0x41a3a0;
    case 1:
        goto 0x41a394;
    case 0:
        goto 0x41a38c;
    }
}

struct s55 {
    signed char[1] pad1;
    int32_t f1;
};

struct s56 {
    signed char[1] pad1;
    int32_t f1;
};

void fun_41a2f0(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    signed char* edi4;
    signed char* esi5;
    int32_t* esi6;
    struct s55* esi7;
    uint32_t ecx8;
    int32_t* edi9;
    struct s56* edi10;

    edx2 = edx3 & ecx;
    *edi4 = *esi5;
    esi6 = &esi7->f1;
    ecx8 = ecx >> 2;
    edi9 = &edi10->f1;
    if (ecx8 < 8) 
        goto 0x41a28c;
    while (ecx8) {
        --ecx8;
        *edi9 = *esi6;
        ++edi9;
        ++esi6;
    }
    switch (edx2) {
    case 3:
        goto 0x41a3b4;
    case 2:
        goto 0x41a3a0;
    case 1:
        goto 0x41a394;
    case 0:
        goto 0x41a38c;
    }
}

struct s57 {
    signed char[3] pad3;
    int32_t f3;
};

struct s58 {
    signed char[3] pad3;
    int32_t f3;
};

int32_t ga3300041;

void fun_41a30d(uint32_t ecx) {
    uint32_t ecx2;
    int1_t cf3;
    int32_t* esi4;
    struct s57* esi5;
    int32_t* edi6;
    struct s58* edi7;
    int32_t edx8;
    int32_t eax9;
    int32_t eax10;
    signed char ah11;
    int32_t eax12;
    int32_t eax13;
    signed char bl14;
    int32_t eax15;
    int32_t eax16;
    signed char dl17;
    uint32_t ecx18;
    int32_t eax19;
    int32_t eax20;
    int32_t eax21;
    int32_t eax22;
    signed char al23;
    signed char* eax24;
    signed char* eax25;
    signed char bh26;
    int32_t eax27;
    uint32_t ecx28;
    int32_t ebx29;
    int32_t ebx30;

    ecx2 = ecx;
    if (!cf3) {
        esi4 = &esi5->f3;
        edi6 = &edi7->f3;
        if (ecx2 < 8) 
            goto 0x41a28c;
        while (ecx2) {
            --ecx2;
            *edi6 = *esi4;
            ++edi6;
            ++esi4;
        }
        goto *reinterpret_cast<int32_t*>(edx8 * 4 + 0x41a37c);
    } else {
        *reinterpret_cast<signed char*>(eax9 - 93) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax10 - 93) + ah11);
        *reinterpret_cast<signed char*>(eax12 - 93) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax13 - 93) + bl14);
        *reinterpret_cast<signed char*>(eax15 - 93) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax16 - 93) + dl17);
        ecx18 = ecx2 + 1 + 1 + 1 + 1;
        *reinterpret_cast<signed char*>(eax19 - 93) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax20 - 93) + *reinterpret_cast<signed char*>(&ecx18));
        *reinterpret_cast<signed char*>(eax21 - 93) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax22 - 93) + al23);
        *eax24 = reinterpret_cast<signed char>(*eax25 + bh26);
        ga3300041 = eax27;
        ecx28 = ecx18 + 1 + 1 + 1;
        *reinterpret_cast<signed char*>(ebx29 - 0x761b71bc) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx30 - 0x761b71bc) + *reinterpret_cast<signed char*>(&ecx28));
    }
}

int32_t g458b0041;

void fun_41a37a(int32_t ecx) {
    int32_t ebx2;
    uint16_t fs3;
    int32_t eax4;
    int32_t eax5;
    signed char ah6;
    int32_t eax7;

    *reinterpret_cast<uint32_t*>(ebx2 - 0x5c6bffbf) = fs3;
    *reinterpret_cast<signed char*>(eax4 - 0x4bffbe5d) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax5 - 0x4bffbe5d) + ah6);
    g458b0041 = eax7;
}

void fun_41a3f2() {
}

struct s59 {
    signed char[3] pad3;
    signed char f3;
};

struct s60 {
    signed char[3] pad3;
    signed char f3;
};

struct s61 {
    signed char[2] pad2;
    signed char f2;
};

struct s62 {
    signed char[2] pad2;
    signed char f2;
};

void fun_41a44d(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    struct s59* edi4;
    struct s60* esi5;
    uint32_t ecx6;
    struct s61* edi7;
    struct s62* esi8;
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
        goto 0x41a3f4;
    while (ecx6) {
        --ecx6;
        *edi11 = *esi9;
        --edi11;
        --esi9;
    }
    switch (edx2) {
    case 3:
        goto 0x41a554;
    case 2:
        goto 0x41a540;
    case 1:
        goto 0x41a530;
    case 0:
        goto 0x41a528;
    }
}

struct s63 {
    signed char[3] pad3;
    signed char f3;
};

struct s64 {
    signed char[3] pad3;
    signed char f3;
};

struct s65 {
    signed char[2] pad2;
    signed char f2;
};

struct s66 {
    signed char[2] pad2;
    signed char f2;
};

struct s67 {
    signed char[1] pad1;
    signed char f1;
};

struct s68 {
    signed char[1] pad1;
    signed char f1;
};

void fun_41a478(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    struct s63* edi4;
    struct s64* esi5;
    struct s65* edi6;
    struct s66* esi7;
    uint32_t ecx8;
    struct s67* edi9;
    struct s68* esi10;
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
        goto 0x41a3f4;
    while (ecx8) {
        --ecx8;
        *edi13 = *esi11;
        --edi13;
        --esi11;
    }
    switch (edx2) {
    case 3:
        goto 0x41a554;
    case 2:
        goto 0x41a540;
    case 1:
        goto 0x41a530;
    case 0:
        goto 0x41a528;
    }
}

struct s69 {
    signed char f0;
    signed char f1;
};

struct s70 {
    signed char[1] pad1;
    signed char f1;
};

struct s71 {
    signed char f0;
    signed char f1;
};

struct s72 {
    signed char[1] pad1;
    signed char f1;
};

struct s73 {
    signed char f0;
    signed char f1;
};

struct s74 {
    signed char f0;
    signed char f1;
};

struct s75 {
    signed char f0;
    signed char f1;
};

struct s76 {
    signed char f0;
    signed char f1;
};

struct s77 {
    signed char f0;
    signed char f1;
};

struct s78 {
    signed char f0;
    signed char f1;
};

struct s79 {
    signed char f0;
    signed char f1;
};

struct s80 {
    signed char f0;
    signed char f1;
};

struct s81 {
    signed char f0;
    signed char f1;
};

struct s82 {
    signed char f0;
    signed char f1;
};

void fun_41a4a9(int32_t ecx) {
    signed char* edi2;
    signed char* esi3;
    struct s69* edi4;
    struct s70* edi5;
    struct s71* esi6;
    struct s72* esi7;
    struct s73* edi8;
    struct s74* esi9;
    struct s75* edi10;
    struct s76* esi11;
    struct s77* edi12;
    struct s78* esi13;
    struct s79* edi14;
    struct s80* esi15;
    struct s81* edi16;
    struct s82* esi17;
    signed char* edi18;
    int32_t ecx19;
    int32_t ecx20;
    int32_t ebx21;
    int32_t ebx22;

    *edi2 = *esi3;
    edi4 = reinterpret_cast<struct s69*>(&edi5->f1);
    esi6 = reinterpret_cast<struct s71*>(&esi7->f1);
    edi4->f0 = esi6->f0;
    edi8 = reinterpret_cast<struct s73*>(&edi4->f1);
    esi9 = reinterpret_cast<struct s74*>(&esi6->f1);
    edi8->f0 = esi9->f0;
    edi10 = reinterpret_cast<struct s75*>(&edi8->f1);
    esi11 = reinterpret_cast<struct s76*>(&esi9->f1);
    edi10->f0 = esi11->f0;
    edi12 = reinterpret_cast<struct s77*>(&edi10->f1);
    esi13 = reinterpret_cast<struct s78*>(&esi11->f1);
    edi12->f0 = esi13->f0;
    edi14 = reinterpret_cast<struct s79*>(&edi12->f1);
    esi15 = reinterpret_cast<struct s80*>(&esi13->f1);
    edi14->f0 = esi15->f0;
    edi16 = reinterpret_cast<struct s81*>(&edi14->f1);
    esi17 = reinterpret_cast<struct s82*>(&esi15->f1);
    edi16->f0 = esi17->f0;
    edi18 = &edi16->f1;
    ecx19 = ecx + 1 + 1 + 1 + 1 + 1 + 1 + 1;
    *edi18 = reinterpret_cast<signed char>(*edi18 + *reinterpret_cast<signed char*>(&ecx19));
    *edi18 = esi17->f1;
    ecx20 = ecx19 + 1;
    *reinterpret_cast<signed char*>(ebx21 - 0x76e371bc) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx22 - 0x76e371bc) + *reinterpret_cast<signed char*>(&ecx20));
}

struct s83 {
    signed char[65] pad65;
    signed char f65;
};

struct s84 {
    signed char[65] pad65;
    signed char f65;
};

void fun_41a516(int32_t ecx) {
    int32_t ebp2;
    int32_t ebp3;
    signed char ah4;
    int32_t eax5;
    int32_t eax6;
    signed char al7;
    int32_t ecx8;
    struct s83* ebp9;
    struct s84* ebp10;
    signed char dl11;
    int32_t ebx12;
    int32_t ebx13;

    *reinterpret_cast<signed char*>(ebp2 - 0x5acfffbf) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp3 - 0x5acfffbf) - ah4);
    *reinterpret_cast<signed char*>(eax5 - 91) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax6 - 91) + al7);
    ecx8 = ecx + 1 + 1;
    ebp9->f65 = reinterpret_cast<signed char>(ebp10->f65 + dl11);
    *reinterpret_cast<signed char*>(ebx12 + 0x5f5e0845) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx13 + 0x5f5e0845) + *reinterpret_cast<signed char*>(&ecx8));
}

void** fun_41d2c2(int32_t ecx, void** a2, void** a3, uint32_t a4) {
    int32_t v5;

    if (a4 != 10 || reinterpret_cast<signed char>(a2) >= reinterpret_cast<signed char>(0)) {
        v5 = 0;
    } else {
        v5 = 1;
    }
    fun_41d200(a2, a3, a4, v5);
    return a3;
}

signed char* fun_41d4d2(void** a1, void** a2, signed char* a3, uint32_t a4) {
    fun_41d3e0(a1, a2, a3, a4, 0);
    return a3;
}

struct s85 {
    signed char[3] pad3;
    int32_t f3;
};

struct s86 {
    signed char[3] pad3;
    int32_t f3;
};

void fun_41f1f5(uint32_t ecx) {
    int32_t* esi2;
    struct s85* esi3;
    int32_t* edi4;
    struct s86* edi5;
    int32_t edx6;

    esi2 = &esi3->f3;
    edi4 = &edi5->f3;
    if (ecx < 8) 
        goto 0x41f1cc;
    while (ecx) {
        --ecx;
        *edi4 = *esi2;
        ++edi4;
        ++esi2;
    }
    switch (edx6) {
    case 3:
        goto 0x41f2f4;
    case 2:
        goto 0x41f2e0;
    case 1:
        goto 0x41f2d4;
    case 0:
        goto 0x41f2cc;
    }
}

struct s87 {
    signed char[1] pad1;
    signed char f1;
};

struct s88 {
    signed char[1] pad1;
    signed char f1;
};

struct s89 {
    signed char[2] pad2;
    int32_t f2;
};

struct s90 {
    signed char[2] pad2;
    int32_t f2;
};

void fun_41f209(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    signed char* edi4;
    signed char* esi5;
    uint32_t ecx6;
    struct s87* edi7;
    struct s88* esi8;
    int32_t* esi9;
    struct s89* esi10;
    int32_t* edi11;
    struct s90* edi12;

    edx2 = edx3 & ecx;
    *edi4 = *esi5;
    ecx6 = ecx >> 2;
    edi7->f1 = esi8->f1;
    esi9 = &esi10->f2;
    edi11 = &edi12->f2;
    if (ecx6 < 8) 
        goto 0x41f1cc;
    while (ecx6) {
        --ecx6;
        *edi11 = *esi9;
        ++edi11;
        ++esi9;
    }
    switch (edx2) {
    case 3:
        goto 0x41f2f4;
    case 2:
        goto 0x41f2e0;
    case 1:
        goto 0x41f2d4;
    case 0:
        goto 0x41f2cc;
    }
}

struct s91 {
    signed char[1] pad1;
    int32_t f1;
};

struct s92 {
    signed char[1] pad1;
    int32_t f1;
};

void fun_41f230(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    signed char* edi4;
    signed char* esi5;
    int32_t* esi6;
    struct s91* esi7;
    uint32_t ecx8;
    int32_t* edi9;
    struct s92* edi10;

    edx2 = edx3 & ecx;
    *edi4 = *esi5;
    esi6 = &esi7->f1;
    ecx8 = ecx >> 2;
    edi9 = &edi10->f1;
    if (ecx8 < 8) 
        goto 0x41f1cc;
    while (ecx8) {
        --ecx8;
        *edi9 = *esi6;
        ++edi9;
        ++esi6;
    }
    switch (edx2) {
    case 3:
        goto 0x41f2f4;
    case 2:
        goto 0x41f2e0;
    case 1:
        goto 0x41f2d4;
    case 0:
        goto 0x41f2cc;
    }
}

void fun_41f24d(int32_t ecx) {
    int32_t ebx2;
    int32_t eax3;
    int32_t eax4;
    signed char ah5;
    int32_t eax6;
    int32_t eax7;
    signed char dl8;
    int32_t eax9;
    int32_t eax10;
    signed char al11;
    int32_t eax12;
    int32_t eax13;
    signed char dh14;
    int32_t ecx15;

    *reinterpret_cast<signed char*>(&ebx2) = -14;
    *reinterpret_cast<signed char*>(eax3 - 0x67ffbe0e) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax4 - 0x67ffbe0e) + ah5);
    *reinterpret_cast<signed char*>(eax6 - 0x77ffbe0e) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax7 - 0x77ffbe0e) + dl8);
    *reinterpret_cast<signed char*>(eax9 + 0x780041f2) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax10 + 0x780041f2) + al11);
    *reinterpret_cast<signed char*>(eax12 - 14) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax13 - 14) + dh14);
    ecx15 = ecx + 1 + 1 + 1 + 1 + 1;
    *reinterpret_cast<signed char*>(ebx2 - 0x761b71bc) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx2 - 0x761b71bc) + *reinterpret_cast<signed char*>(&ecx15));
}

void fun_41f2ba(int32_t ecx) {
    int32_t ecx2;
    int32_t ebx3;
    int32_t ebx4;

    ecx2 = ecx + 1 + 1 + 1 + 1;
    *reinterpret_cast<signed char*>(ebx3 + 0x5f5e0845) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx4 + 0x5f5e0845) + *reinterpret_cast<signed char*>(&ecx2));
}

void fun_41f332() {
}

struct s93 {
    signed char[3] pad3;
    signed char f3;
};

struct s94 {
    signed char[3] pad3;
    signed char f3;
};

struct s95 {
    signed char[2] pad2;
    signed char f2;
};

struct s96 {
    signed char[2] pad2;
    signed char f2;
};

void fun_41f38d(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    struct s93* edi4;
    struct s94* esi5;
    uint32_t ecx6;
    struct s95* edi7;
    struct s96* esi8;
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
        goto 0x41f334;
    while (ecx6) {
        --ecx6;
        *edi11 = *esi9;
        --edi11;
        --esi9;
    }
    switch (edx2) {
    case 3:
        goto 0x41f494;
    case 2:
        goto 0x41f480;
    case 1:
        goto 0x41f470;
    case 0:
        goto 0x41f468;
    }
}

struct s97 {
    signed char[3] pad3;
    signed char f3;
};

struct s98 {
    signed char[3] pad3;
    signed char f3;
};

struct s99 {
    signed char[2] pad2;
    signed char f2;
};

struct s100 {
    signed char[2] pad2;
    signed char f2;
};

struct s101 {
    signed char[1] pad1;
    signed char f1;
};

struct s102 {
    signed char[1] pad1;
    signed char f1;
};

void fun_41f3b8(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    struct s97* edi4;
    struct s98* esi5;
    struct s99* edi6;
    struct s100* esi7;
    uint32_t ecx8;
    struct s101* edi9;
    struct s102* esi10;
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
        goto 0x41f334;
    while (ecx8) {
        --ecx8;
        *edi13 = *esi11;
        --edi13;
        --esi11;
    }
    switch (edx2) {
    case 3:
        goto 0x41f494;
    case 2:
        goto 0x41f480;
    case 1:
        goto 0x41f470;
    case 0:
        goto 0x41f468;
    }
}

void fun_41f3e9(int32_t ecx) {
    int32_t esi2;
    int32_t esi3;
    signed char dl4;
    int32_t esi5;
    int32_t esi6;
    signed char bl7;
    int32_t esi8;
    int32_t esi9;
    signed char ah10;
    int32_t ecx11;
    int32_t esi12;
    int32_t esi13;
    int32_t esi14;
    int32_t esi15;
    signed char dh16;
    int32_t esi17;
    int32_t esi18;
    signed char bh19;
    int32_t ecx20;
    int32_t edi21;
    int32_t edi22;
    int32_t ecx23;
    int32_t ebx24;
    int32_t ebx25;

    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + esi2 * 8) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + esi3 * 8) + dl4);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + esi5 * 8) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + esi6 * 8) + bl7);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + esi8 * 8) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + esi9 * 8) + ah10);
    ecx11 = ecx + 1 + 1 + 1 + 1;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + esi12 * 8) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + esi13 * 8) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx11) + 1));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + esi14 * 8) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + esi15 * 8) + dh16);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + esi17 * 8) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + esi18 * 8) + bh19);
    ecx20 = ecx11 + 1 + 1 + 1;
    *reinterpret_cast<signed char*>(edi21 - 12) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edi22 - 12) + *reinterpret_cast<signed char*>(&ecx20));
    ecx23 = ecx20 + 1;
    *reinterpret_cast<signed char*>(ebx24 - 0x76e371bc) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx25 - 0x76e371bc) + *reinterpret_cast<signed char*>(&ecx23));
}

void fun_41f456() {
    __asm__("hlt ");
}

int32_t fun_41f69b() {
    return 1;
}

void fun_411429(void** ecx, void** a2, void** a3) {
    uint32_t eax4;
    void** v5;
    void** ebp6;
    void** eax7;

    eax4 = fun_4111ea(ecx, a2, ecx);
    if (eax4) {
        v5 = a2 - 32;
        if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v5 + 20)) & 0xffff) != 4 && (*reinterpret_cast<void***>(v5 + 20) != 1 && ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v5 + 20)) & 0xffff) != 2 && (*reinterpret_cast<void***>(v5 + 20) != 3 && (eax7 = fun_41119f(v5, 2, 0x4260e0, 0x562, 0, 0x426410, v5, ebp6, __return_address()), reinterpret_cast<int1_t>(eax7 == 1)))))) {
        }
        *reinterpret_cast<void***>(v5 + 20) = a3;
    }
    return;
}

void fun_411cf4() {
    int32_t* eax1;
    int32_t* eax2;
    int32_t eax3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = *eax2 + eax3;
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

int32_t PostQuitMessage = 0x2c4ba;

int32_t BeginPaint = 0x2c4d8;

int32_t EndPaint = 0x2c4cc;

int32_t DialogBoxParamA = 0x2c508;

void fun_411339();

int32_t DestroyWindow = 0x2c4f8;

int32_t DefWindowProcA = 0x2c4e6;

void** fun_411f4e(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19) {
    void** v20;
    void** v21;
    void** ebp22;
    void** ebp23;
    void** v24;
    void** ebx25;
    void** v26;
    void** esi27;
    void** v28;
    void** edi29;
    void** ecx30;
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
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    uint32_t eax81;
    uint32_t eax82;
    void** ecx83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** edx114;
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
    void** eax129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    void** v136;
    void** v137;
    void** v138;
    void** v139;
    void** v140;
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
    void** eax151;

    v20 = reinterpret_cast<void**>(__return_address());
    v21 = ebp22;
    ebp23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v24 = ebx25;
    v26 = esi27;
    v28 = edi29;
    ecx30 = reinterpret_cast<void**>(76);
    while (ecx30) {
        --ecx30;
    }
    v31 = a2;
    if (v31 == 2) {
        v32 = reinterpret_cast<void**>(0);
        PostQuitMessage();
        fun_411424(ecx30, 0, v28, v26, v24, v31, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49);
    } else {
        if (v31 == 15) {
            v32 = ebp23 + 0xffffffa4;
            BeginPaint(a1);
            fun_411424(a1, a1, v32, v28, v26, v24, v31, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65);
            v66 = ebp23 + 0xffffffa4;
            EndPaint(a1, v66, a1);
            fun_411424(a1, a1, v66, a1, v32, v28, v26, v24, v31, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80);
        } else {
            if (v31 == 0x111) {
                eax81 = reinterpret_cast<unsigned char>(a3) & 0xffff;
                eax82 = reinterpret_cast<unsigned char>(a3) >> 16;
                v31 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax81)));
                if (v31 == 0x68) {
                    v32 = reinterpret_cast<void**>(0);
                    ecx83 = g4295cc;
                    DialogBoxParamA(ecx83, 0x67, a1, fun_411339);
                    fun_411424(ecx83, ecx83, 0x67, a1, fun_411339, 0, v28, v26, v24, v31, v84, v85, v86, v87, v88, v89, v90, v91, v92, v93, v94, v95, v96);
                    goto addr_412064_12;
                } else {
                    if (v31 == 0x69) {
                        v32 = a1;
                        DestroyWindow();
                        fun_411424(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax82)), v32, v28, v26, v24, v31, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107, v108, v109, v110, v111, v112, v113);
                        goto addr_412064_12;
                    } else {
                        v32 = a4;
                        edx114 = a2;
                        DefWindowProcA(a1, edx114, a3);
                        eax129 = fun_411424(a3, a1, edx114, a3, v32, v28, v26, v24, v31, v115, v116, v117, v118, v119, v120, v121, v122, v123, v124, v125, v126, v127, v128);
                        goto addr_4120cf_17;
                    }
                }
            } else {
                v32 = a4;
                edx114 = a2;
                DefWindowProcA(a1, edx114, a3);
                eax129 = fun_411424(a3, a1, edx114, a3, v32, v28, v26, v24, v31, v130, v131, v132, v133, v134, v135, v136, v137, v138, v139, v140, v141, v142, v143);
                goto addr_4120cf_17;
            }
        }
    }
    addr_4120cd_20:
    eax129 = reinterpret_cast<void**>(0);
    addr_4120cf_17:
    fun_4111d1(ebp23, eax129, edx114, v32, v28, v26, v24, v31, v144, v145, v146, v147, v148, v149);
    eax151 = fun_411424(ebp23, v150, v21, v20, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
    return eax151;
    addr_412064_12:
    goto addr_4120cd_20;
}

void fun_412216() {
    goto DispatchMessageA;
}

int32_t GetSystemTimeAsFileTime = 0x2c90c;

void fun_411479() {
    goto GetSystemTimeAsFileTime;
}

void fun_411393(int32_t ecx, int32_t a2, int32_t a3) {
    uint32_t eax4;
    void** ecx5;
    void** v6;

    eax4 = g428d4c;
    if (eax4 & 1) {
        ecx5 = g429850;
        v6 = ecx5;
        while (v6) {
            if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v6 + 20)) & 0xffff) == 4) {
                a2(v6 + 32, a3);
            }
            v6 = *reinterpret_cast<void***>(v6);
        }
    }
    return;
}

void fun_4112b2() {
    goto OutputDebugStringA;
}

int32_t fun_4114e7(void** ecx, void** a2, void** a3, void*** a4, void*** a5, void*** a6) {
    void** v7;
    uint32_t eax8;
    void** ecx9;
    void** v10;
    int32_t eax11;
    int1_t less_or_equal12;
    int32_t v13;
    int32_t eax14;

    eax8 = fun_4111ea(ecx, a2, v7);
    if (eax8) {
        ecx9 = a2 - 32;
        v10 = ecx9;
        if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v10 + 20)) & 0xffff) != 4 && ((ecx9 = v10, *reinterpret_cast<void***>(ecx9 + 20) != 1) && ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v10 + 20)) & 0xffff) != 2 && (ecx9 = v10, !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx9 + 20) == 3)))) || ((eax11 = fun_4112f8(ecx9, a2, a3, 1, v10), eax11 == 0) || (*reinterpret_cast<void***>(v10 + 16) != a3 || (less_or_equal12 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(v10 + 24)) <= reinterpret_cast<signed char>(g428d50), !less_or_equal12)))) {
            v13 = 0;
        } else {
            if (a4) {
                *a4 = *reinterpret_cast<void***>(v10 + 24);
            }
            if (a5) {
                *a5 = *reinterpret_cast<void***>(v10 + 8);
            }
            if (a6) {
                *a6 = *reinterpret_cast<void***>(v10 + 12);
            }
            v13 = 1;
        }
        eax14 = v13;
    } else {
        eax14 = 0;
    }
    return eax14;
}

void fun_411014() {
    goto GetModuleHandleA;
}

void** fun_411591() {
    int1_t zf1;
    void** eax2;

    zf1 = g42ad2c == 0;
    if (zf1) {
        eax2 = reinterpret_cast<void**>(0);
    } else {
        eax2 = g42ae44;
    }
    return eax2;
}

int32_t fun_411163(void** ecx) {
    int1_t zf2;
    void** edi3;
    void** esi4;
    void** ebx5;
    void** eax6;
    int32_t eax7;
    int32_t eax8;

    if (!zf2) {
        eax6 = fun_41119f(ecx, 1, 0x4250dc, 65, 0x4250ec, 0x4250f0, edi3, esi4, ebx5);
        if (reinterpret_cast<int1_t>(eax6 == 1)) {
        }
        return eax7;
    } else {
        return eax8;
    }
}

struct s103 {
    int32_t f0;
    void** f4;
};

void fun_41259f() {
    void*** esp1;
    int32_t ebp2;
    int32_t ebp3;
    int32_t ebp4;
    int32_t ebp5;
    int32_t* esp6;
    int32_t ebp7;
    struct s103* esp8;
    int32_t ebp9;

    esp1 = *reinterpret_cast<void****>(ebp2 - 24);
    *reinterpret_cast<int32_t*>(ebp3 - 0x74) = *reinterpret_cast<int32_t*>(ebp4 - 0x78);
    if (!*reinterpret_cast<int32_t*>(ebp5 - 0x6c)) {
        esp6 = reinterpret_cast<int32_t*>(esp1 - 4);
        *esp6 = *reinterpret_cast<int32_t*>(ebp7 - 0x74);
        esp8 = reinterpret_cast<struct s103*>(esp6 - 1);
        esp8->f0 = 0x4125b7;
        fun_411212(esp8->f4);
        esp1 = &esp8->f4;
    }
    *reinterpret_cast<int32_t*>(esp1 - 4) = 0x4125bc;
    fun_411172();
    *reinterpret_cast<int32_t*>(ebp9 - 4) = -1;
}

void fun_411217() {
    goto InterlockedDecrement;
}

void fun_411177() {
    goto VirtualProtect;
}

void** fun_4114c4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    uint32_t eax9;
    void** ecx10;
    uint32_t edx11;
    void** eax12;
    uint32_t edx13;
    uint32_t ecx14;
    void** v15;
    void** ebp16;
    void** eax17;
    uint32_t edx18;
    void** eax19;
    void** eax20;
    void** v21;

    *reinterpret_cast<signed char*>(&v8 + 3) = 0;
    if (reinterpret_cast<unsigned char>(a2) & 8) {
        *reinterpret_cast<signed char*>(&v8 + 3) = 32;
    }
    if (reinterpret_cast<unsigned char>(a2) & 0x4000) {
        eax9 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&v8 + 3))) | 0x80;
        *reinterpret_cast<signed char*>(&v8 + 3) = *reinterpret_cast<signed char*>(&eax9);
    }
    ecx10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a2) & 0x80);
    if (ecx10) {
        edx11 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&v8 + 3))) | 16;
        *reinterpret_cast<signed char*>(&v8 + 3) = *reinterpret_cast<signed char*>(&edx11);
    }
    eax12 = reinterpret_cast<void**>(GetFileType(a1));
    if (eax12) {
        if (!reinterpret_cast<int1_t>(eax12 == 2)) {
            if (reinterpret_cast<int1_t>(eax12 == 3)) {
                edx13 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&v8 + 3))) | 8;
                *reinterpret_cast<signed char*>(&v8 + 3) = *reinterpret_cast<signed char*>(&edx13);
            }
        } else {
            ecx14 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&v8 + 3))) | 64;
            *reinterpret_cast<signed char*>(&v8 + 3) = *reinterpret_cast<signed char*>(&ecx14);
        }
        eax17 = fun_41101e(a1, v15, eax12, v8, ebp16, __return_address(), a1, a2, a3, a4, a5, a6, a7);
        if (!reinterpret_cast<int1_t>(eax17 == 0xffffffff)) {
            fun_4110a0(eax17, eax17, a1, a1);
            edx18 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&v8 + 3))) | 1;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(eax17) >> 5) * 4 + 0x42afe0)) + (reinterpret_cast<unsigned char>(eax17) & 31) * 8 + 4) = *reinterpret_cast<signed char*>(&edx18);
            eax19 = eax17;
        } else {
            g42962c = 24;
            g429630 = reinterpret_cast<void**>(0);
            eax19 = reinterpret_cast<void**>(0xffffffff);
        }
    } else {
        eax20 = reinterpret_cast<void**>(GetLastError(a1));
        fun_411113(ecx10, eax20, a1, v21, eax12, v8);
        eax19 = reinterpret_cast<void**>(0xffffffff);
    }
    return eax19;
}

int32_t fun_412791() {
    return 4;
}

int32_t fun_4127ec(int32_t a1, int32_t a2) {
    int32_t eax3;

    if (a1 < 0 || a1 >= 4) {
        return -1;
    } else {
        eax3 = *reinterpret_cast<int32_t*>(a1 * 4 + 0x428b60);
        *reinterpret_cast<int32_t*>(a1 * 4 + 0x428b60) = a2;
        return eax3;
    }
}

int32_t fun_412b67() {
    return -1;
}

void fun_411339() {
    goto 0x412170;
}

void** fun_41155f(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16) {
    void** ebp17;
    void** eax18;

    eax18 = fun_41141a(ecx, a2, 1, ebp17, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
    return eax18;
}

int32_t QueryPerformanceCounter = 0x2c8b6;

void fun_4113e3() {
    goto QueryPerformanceCounter;
}

uint32_t fun_41349b(int32_t a1, int32_t a2) {
    uint32_t eax3;

    if (a1 != 0xe06d7363) {
        eax3 = 0;
    } else {
        eax3 = fun_4114f6(a1, a1, a2);
    }
    return eax3;
}

void** fun_41123a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** ebp7;
    void** eax8;

    eax8 = fun_411564(a2, a3, 1, 0, 0, ecx, ebp7, __return_address(), a2, a3, a4, a5, a6);
    return eax8;
}

void** fun_411069(void** a1, int32_t a2) {
    void** ebp3;
    void** eax4;

    eax4 = fun_41143d(a1, a1, a2, 1, 0, 0, ebp3);
    return eax4;
}

int32_t g4298ec = 0;

int32_t SetConsoleCtrlHandler = 0x2c844;

void** fun_41141f(void** ecx, void** a2, void** a3) {
    int1_t zf4;
    void** v5;
    void** ecx6;
    void** v7;
    void** ecx8;
    void** eax9;
    void** edx10;
    int32_t eax11;
    void** eax12;
    void** v13;
    int32_t edx14;
    void** eax15;

    if (!(a3 == 4 || reinterpret_cast<int1_t>(a3 == 3))) {
        if (a2 == 2 || (a2 == 21 || (a2 == 22 || reinterpret_cast<int1_t>(a2 == 15)))) {
            if (a2 != 2 && !reinterpret_cast<int1_t>(a2 == 21) || (zf4 = g4298ec == 0, !zf4)) {
                addr_41d7e6_6:
                v5 = a2 - 2;
                if (reinterpret_cast<unsigned char>(v5) <= reinterpret_cast<unsigned char>(20)) {
                    switch (*reinterpret_cast<unsigned char*>(v5 + 0x41d8ed)) {
                    case 0:
                        ecx6 = g4298dc;
                        v7 = ecx6;
                        g4298dc = a3;
                        break;
                    case 1:
                        ecx8 = g4298e8;
                        v7 = ecx8;
                        g4298e8 = a3;
                        break;
                    case 2:
                        eax9 = g4298e0;
                        v7 = eax9;
                        g4298e0 = a3;
                        break;
                    case 3:
                        edx10 = g4298e4;
                        v7 = edx10;
                        g4298e4 = a3;
                    case 4:
                        goto 0x41d858;
                    }
                    goto addr_41d858_12;
                }
            } else {
                eax11 = reinterpret_cast<int32_t>(SetConsoleCtrlHandler(0x41d970, 1));
                if (eax11 != 1) {
                    eax12 = reinterpret_cast<void**>(GetLastError(0x41d970, 1));
                    g429630 = eax12;
                } else {
                    g4298ec = 1;
                    goto addr_41d7e6_6;
                }
            }
        } else {
            if (a2 == 8 || (a2 == 4 || a2 == 11)) {
                eax12 = fun_41dc20(ecx, a2);
                v13 = eax12;
                if (v13) {
                    v7 = *reinterpret_cast<void***>(v13 + 8);
                    while (*reinterpret_cast<void***>(v13 + 4) == a2) {
                        *reinterpret_cast<void***>(v13 + 8) = a3;
                        v13 = v13 + 12;
                        edx14 = g428c10;
                        if (reinterpret_cast<unsigned char>(v13) >= reinterpret_cast<unsigned char>(edx14 * 12 + 0x428b90)) 
                            goto addr_41d8bf_21;
                    }
                    goto addr_41d8c3_23;
                }
            }
        }
    }
    g42962c = 22;
    eax15 = reinterpret_cast<void**>(0xffffffff);
    addr_41d8d5_27:
    return eax15;
    addr_41d858_12:
    addr_41d8c3_23:
    eax15 = v7;
    goto addr_41d8d5_27;
    addr_41d8bf_21:
    goto addr_41d8c3_23;
}

void fun_41456a(int32_t ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** v16;
    void** v17;
    void** ebp18;
    void** v19;
    void** v20;

    v16 = reinterpret_cast<void**>(__return_address());
    v17 = ebp18;
    v19 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<signed char>(v19) < reinterpret_cast<signed char>(64)) {
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(v19) * 4 + 0x42afe0)) {
            v20 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v19) * 4 + 0x42afe0);
            fun_41141a(v19, v20, 2, v19, v17, v16, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
            *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(v19) * 4 + 0x42afe0) = 0;
        }
        ++v19;
    }
    return;
}

int32_t fun_4146f0() {
    return 1;
}

int32_t fun_414790() {
    return 1;
}

void fun_414888() {
    int1_t zf1;
    void** eax2;
    void** v3;
    int32_t v4;
    int1_t less5;
    void** v6;
    void** v7;
    void** v8;
    void** eax9;
    void** edx10;
    void** eax11;
    void** ecx12;

    zf1 = g42af90 == 3;
    if (zf1) {
        eax2 = g42aca0;
        v3 = eax2;
        v4 = 0;
        while (less5 = v4 < g42ac9c, less5) {
            v6 = *reinterpret_cast<void***>(v3 + 12);
            VirtualFree(v6, 0x100000, 0x4000);
            v7 = *reinterpret_cast<void***>(v3 + 12);
            VirtualFree(v7, 0, 0x8000, v6, 0x100000, 0x4000);
            v8 = *reinterpret_cast<void***>(v3 + 16);
            eax9 = g42af80;
            HeapFree(eax9, 0, v8, v7, 0, 0x8000, v6, 0x100000, 0x4000);
            v3 = v3 + 20;
            ++v4;
        }
        edx10 = g42aca0;
        eax11 = g42af80;
        HeapFree(eax11, 0, edx10);
    }
    ecx12 = g42af80;
    HeapDestroy(ecx12);
    return;
}

void** fun_414959() {
    void** eax1;

    eax1 = g42af80;
    return eax1;
}

struct s104 {
    signed char[4] pad4;
    uint32_t f4;
};

struct s105 {
    signed char[12] pad12;
    struct s9* f12;
};

int32_t fun_414ac8(struct s104* a1, struct s9* a2, int32_t a3) {
    unsigned char* esi4;
    unsigned char dh5;
    unsigned char* eax6;
    struct s105* ebp7;
    struct s9* ebx8;
    int32_t eax9;
    uint32_t esi10;
    struct s9* edi11;
    uint32_t eax12;
    int32_t eax13;
    int32_t eax14;
    struct s9* edi15;
    uint32_t ecx16;
    int32_t eax17;

    *esi4 = reinterpret_cast<unsigned char>(*esi4 ^ reinterpret_cast<unsigned char>(dh5 ^ *eax6));
    ebp7 = reinterpret_cast<struct s105*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4);
    ebx8 = a2;
    if (a1->f4 & 6) {
        fun_4111bd(ebx8, 0xff);
        eax9 = 1;
    } else {
        *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx8) - 4) = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp7) - 8);
        esi10 = ebx8->f12;
        edi11 = ebx8->f8;
        eax12 = fun_41137f(ebx8);
        if (!eax12) {
            a1->f4 = a1->f4 | 8;
            goto addr_414b92_6;
        } else {
            while (esi10 != 0xffffffff) {
                eax13 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi11) + (esi10 + esi10 * 2) * 4 + 4);
                if (eax13 && (eax14 = reinterpret_cast<int32_t>(eax13()), ebp7 = ebp7, esi10 = esi10, ebx8 = ebp7->f12, !!eax14)) {
                    if (__intrinsic()) 
                        goto addr_414b84_10;
                    edi15 = ebx8->f8;
                    fun_411320(ebx8);
                    ebp7 = reinterpret_cast<struct s105*>(ebx8 + 1);
                    fun_4111bd(ebx8, esi10);
                    ecx16 = esi10 + esi10 * 2;
                    fun_4114a1(ecx16, 1);
                    ebx8->f12 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(edi15) + ecx16 * 4);
                    eax17 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi15) + ecx16 * 4 + 8);
                    ebx8 = reinterpret_cast<struct s9*>(0);
                    esi10 = 0;
                    eax17();
                }
                edi11 = ebx8->f8;
                esi10 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(edi11) + (esi10 + esi10 * 2) * 4);
            }
            goto addr_414b92_6;
        }
    }
    addr_414bae_13:
    return eax9;
    addr_414b92_6:
    eax9 = 1;
    goto addr_414bae_13;
    addr_414b84_10:
    eax9 = 0;
    goto addr_414bae_13;
}

void fun_4111c2() {
    goto GetProcAddress;
}

void fun_4111a4() {
    goto 0x414ad0;
}

int32_t fun_414ede(int32_t ecx, int32_t a2) {
    uint32_t v3;
    int32_t eax4;

    v3 = 0;
    while (v3 < 19) {
        if (a2 == *reinterpret_cast<int32_t*>(v3 * 8 + 0x428c60)) 
            goto addr_414f9b_5;
        ++v3;
    }
    addr_414f9f_8:
    if (a2 != *reinterpret_cast<int32_t*>(v3 * 8 + 0x428c60)) {
        eax4 = 0;
    } else {
        eax4 = *reinterpret_cast<int32_t*>(v3 * 8 + 0x428c64);
    }
    return eax4;
    addr_414f9b_5:
    goto addr_414f9f_8;
}

int32_t fun_41125d(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    int1_t zf7;
    int1_t less8;
    void** eax9;
    void** ebp10;
    void** eax11;
    int1_t zf12;
    void** ecx13;
    void** eax14;
    int1_t zf15;
    int32_t v16;
    void** edx17;
    uint32_t v18;
    int32_t eax19;

    zf7 = g42ac80 == 0;
    if (!zf7) {
        less8 = reinterpret_cast<signed char>(g42ac80) < reinterpret_cast<signed char>(20);
        if (less8) {
            g42ac80 = reinterpret_cast<void**>(20);
        }
    } else {
        g42ac80 = reinterpret_cast<void**>(0x200);
    }
    eax9 = g42ac80;
    eax11 = fun_411564(eax9, 4, 2, 0x4274b4, 0x89, ecx, ebp10, __return_address(), a2, a3, a4, a5, a6);
    g429934 = eax11;
    zf12 = g429934 == 0;
    if (!zf12 || (g42ac80 = reinterpret_cast<void**>(20), ecx13 = g42ac80, eax14 = fun_411564(ecx13, 4, 2, 0x4274b4, 0x8c, ecx, ebp10, __return_address(), a2, a3, a4, a5, a6), g429934 = eax14, zf15 = g429934 == 0, !zf15)) {
        v16 = 0;
        while (v16 < 20) {
            edx17 = g429934;
            *reinterpret_cast<void***>(edx17 + v16 * 4) = reinterpret_cast<void**>((v16 << 5) + 0x428f00);
            ++v16;
        }
        v18 = 0;
        while (reinterpret_cast<int32_t>(v18) < reinterpret_cast<int32_t>(3)) {
            if ((*reinterpret_cast<int32_t**>((reinterpret_cast<int32_t>(v18) >> 5) * 4 + 0x42afe0))[(v18 & 31) * 2] == -1 || !(*reinterpret_cast<int32_t**>((reinterpret_cast<int32_t>(v18) >> 5) * 4 + 0x42afe0))[(v18 & 31) * 2]) {
                *reinterpret_cast<int32_t*>((v18 << 5) + 0x428f10) = -1;
            }
            ++v18;
        }
        eax19 = 0;
    } else {
        eax19 = 26;
    }
    return eax19;
}

uint32_t fun_411082(void** ecx, void** a2) {
    uint32_t eax3;
    uint32_t eax4;

    eax3 = fun_4111ea(ecx, a2, ecx);
    if (eax3) {
        eax4 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(a2 - 32) + 20);
    } else {
        eax4 = 0xffffffff;
    }
    return eax4;
}

int32_t fun_415045(int32_t ecx, int32_t a2, int32_t a3) {
    int32_t eax4;
    int32_t v5;
    int32_t eax6;
    int32_t eax7;

    if (a2 < 0 || a2 >= 3) {
        eax4 = -2;
    } else {
        if (a3 != -6) {
            v5 = *reinterpret_cast<int32_t*>(a2 * 4 + 0x428d28);
            if (a3 != -4) {
                if (a3 != -5) {
                    *reinterpret_cast<int32_t*>(a2 * 4 + 0x428d28) = a3;
                } else {
                    eax6 = reinterpret_cast<int32_t>(GetStdHandle(0xf4));
                    *reinterpret_cast<int32_t*>(a2 * 4 + 0x428d28) = eax6;
                }
            } else {
                eax7 = reinterpret_cast<int32_t>(GetStdHandle(0xf5));
                *reinterpret_cast<int32_t*>(a2 * 4 + 0x428d28) = eax7;
            }
            eax4 = v5;
        } else {
            eax4 = *reinterpret_cast<int32_t*>(a2 * 4 + 0x428d28);
        }
    }
    return eax4;
}

int32_t fun_4150de(int32_t ecx, int32_t a2) {
    int32_t eax3;

    eax3 = g42af6c;
    g42af6c = a2;
    return eax3;
}

void fun_411280() {
    goto 0x412300;
}

void fun_41103c() {
    goto FreeEnvironmentStringsW;
}

void fun_411406() {
    goto LoadIconA;
}

int32_t fun_4114f1(void** a1) {
    int1_t zf2;
    int1_t zf3;
    int32_t eax4;
    int32_t eax5;

    zf2 = g42af90 == 3;
    if (!zf2) {
        zf3 = g42af90 == 1;
        if (!zf3 || (reinterpret_cast<unsigned char>(a1) <= reinterpret_cast<unsigned char>(0) || (reinterpret_cast<unsigned char>(a1) > reinterpret_cast<unsigned char>(0x3f8) || (eax4 = fun_411497(a1), eax4 == 0)))) {
            eax5 = 0;
        } else {
            g42aca4 = a1;
            g42af90 = 3;
            eax5 = 1;
        }
    } else {
        if (reinterpret_cast<unsigned char>(a1) > reinterpret_cast<unsigned char>(0x3f8)) {
            eax5 = 0;
        } else {
            g42aca4 = a1;
            eax5 = 1;
        }
    }
    return eax5;
}

void** fun_41688c(void** ecx, void** a2) {
    int32_t eax3;
    void** eax4;

    eax3 = g4298f4;
    eax4 = fun_41143d(a2, a2, eax3, 1, 0, 0, ecx);
    return eax4;
}

void** fun_41698a(void** ecx, void** a2) {
    void** ebp3;
    void** eax4;

    eax4 = fun_411384(ecx, a2, 1, 0, 0, ebp3);
    return eax4;
}

void** fun_416e30(void** ecx, void** a2, void** a3) {
    void** eax4;

    eax4 = fun_4114ec(a2, a2, a3, 1, 0, 0, ecx);
    return eax4;
}

void** fun_4173cf(int32_t ecx, void** a2, void** a3) {
    void** eax4;

    eax4 = fun_4114fb(a2, a2, a3, 1, 0, 0, ecx);
    return eax4;
}

void fun_411208() {
    goto UpdateWindow;
}

void** fun_417c09(int32_t ecx, void** a2) {
    void** eax3;

    eax3 = g428d54;
    g428d54 = a2;
    return eax3;
}

int32_t fun_417cfd(int32_t ecx, int32_t a2) {
    int32_t eax3;

    eax3 = g428ec0;
    g428ec0 = a2;
    return eax3;
}

struct s106 {
    signed char[126] pad126;
    signed char f126;
};

struct s107 {
    signed char[126] pad126;
    signed char f126;
};

void fun_4180b2(void* ecx) {
    int1_t cf2;
    struct s106* eax3;
    struct s107* eax4;
    signed char dl5;
    signed char* ecx6;
    signed char* esi7;
    signed char* esi8;
    signed char* esi9;
    signed char* esi10;

    if (!cf2) {
        eax3->f126 = reinterpret_cast<signed char>(eax4->f126 + dl5);
        ecx6 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + 1 + 1);
        *esi7 = reinterpret_cast<signed char>(*esi8 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx6) + 1));
        if (reinterpret_cast<uint1_t>(*esi9 < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(*esi10 == 0)) {
            addr_4180fe_3:
            goto addr_418102_4;
        } else {
            *ecx6 = reinterpret_cast<signed char>(*ecx6 + *reinterpret_cast<signed char*>(&ecx6));
            if (reinterpret_cast<uint1_t>(*ecx6 < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(*ecx6 == 0)) {
                addr_418102_4:
            } else {
                goto addr_4180fe_3;
            }
        }
    }
}

void** fun_4111cc(void** a1, void** a2, void** a3, void** a4) {
    void** ebp5;
    void** eax6;

    eax6 = fun_4111ae(a1, a2, a3, 0, 0, ebp5, __return_address(), a1, a2, a3, a4);
    return eax6;
}

int32_t GetCurrentThreadId = 0x2c8e0;

void fun_411226() {
    goto GetCurrentThreadId;
}

int32_t fun_4184ec(int32_t ecx, int32_t a2) {
    int32_t eax3;

    eax3 = g42af60;
    g42af60 = a2;
    return eax3;
}

void fun_41108c() {
    goto DefWindowProcA;
}

void fun_418cf6(int32_t ecx, void** a2) {
    void** v3;
    void** ebp4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** eax9;
    void** v10;
    void** eax11;
    void** v12;
    void** eax13;

    v3 = ebp4;
    if (a2) {
        v5 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<signed char>(v5) < reinterpret_cast<signed char>(5)) {
            v6 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v5) * 4 + 0x428d5c);
            v7 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(a2 + reinterpret_cast<unsigned char>(v5) * 4) + 4);
            v8 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(a2 + reinterpret_cast<unsigned char>(v5) * 4) + 24);
            eax9 = fun_41119f(a2, 0, 0, 0, 0, 0x426848, v8, v7, v6);
            if (reinterpret_cast<int1_t>(eax9 == 1)) {
            }
            ++v5;
        }
        v10 = *reinterpret_cast<void***>(a2 + 44);
        eax11 = fun_41119f(a2, 0, 0, 0, 0, 0x426820, v10, v5, v3);
        if (reinterpret_cast<int1_t>(eax11 == 1)) 
            goto addr_418d96_10;
    } else {
        goto addr_418db9_12;
    }
    addr_418d97_13:
    v12 = *reinterpret_cast<void***>(a2 + 48);
    eax13 = fun_41119f(a2, 0, 0, 0, 0, 0x4267f8, v12, v5, v3);
    if (reinterpret_cast<int1_t>(eax13 == 1)) {
    }
    addr_418db9_12:
    return;
    addr_418d96_10:
    goto addr_418d97_13;
}

void** fun_418dbd(void** a1, void** a2, void** a3, void** a4) {
    void** ebp5;
    void** eax6;

    eax6 = fun_4111ae(a1, a2, 0, 0, 0, ebp5, __return_address(), a1, a2, a3, a4);
    return eax6;
}

void** fun_419012(void** a1, void** a2, void** a3, void** a4) {
    void** ebp5;
    void** eax6;

    eax6 = fun_41119a(a3, a1, a2, a3, a4, 0, 0, ebp5, __return_address());
    return eax6;
}

void fun_4111b3() {
    goto 0x412240;
}

void** fun_4192e3(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** ebp13;
    void** eax14;

    eax14 = fun_4115af(ecx, a2, ebp13, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    return eax14;
}

int32_t fun_419447(int32_t a1) {
    int32_t v2;
    int32_t ebp3;
    int32_t eax4;

    v2 = a1;
    eax4 = fun_419600(*reinterpret_cast<unsigned char*>(&v2), 0, 1, ebp3);
    return eax4;
}

signed char gcc0041a2;

signed char ga2f00041;

void fun_41a294(int32_t ecx) {
    int32_t eax2;
    signed char* ebx3;
    signed char* ebx4;
    signed char ah5;

    *reinterpret_cast<signed char*>(&eax2) = gcc0041a2;
    ga2f00041 = *reinterpret_cast<signed char*>(&eax2);
    *ebx3 = reinterpret_cast<signed char>(*ebx4 + ah5);
    __asm__("ror dword [edx+0x8a078806], 1");
    *reinterpret_cast<int32_t*>(eax2 + 0x468a0147) = *reinterpret_cast<int32_t*>(eax2 + 0x468a0147) + (ecx + 1);
}

void fun_41a3b1(int32_t ecx) {
}

void fun_41a3fd(int32_t ecx) {
}

void fun_41a53d(int32_t ecx) {
}

void** fun_41a56d() {
    int1_t zf1;
    void** eax2;

    zf1 = g42af90 == 3;
    if (!zf1) {
        eax2 = reinterpret_cast<void**>(0);
    } else {
        eax2 = g42aca4;
    }
    return eax2;
}

struct s108 {
    signed char[3] pad3;
    signed char f3;
};

void fun_41a420(int32_t ecx) {
    int32_t eax2;
    signed char al3;
    signed char dl4;
    signed char bh5;
    uint32_t ecx6;
    int32_t edx7;
    int32_t edx8;
    struct s108* edi9;
    int32_t* esi10;
    void* esi11;
    uint32_t ecx12;
    int32_t* edi13;
    void* edi14;
    int32_t edx15;

    *reinterpret_cast<signed char*>(&eax2) = reinterpret_cast<signed char>(al3 + 92);
    *reinterpret_cast<signed char*>(eax2 - 92) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax2 - 92) + dl4);
    *reinterpret_cast<signed char*>(eax2 - 92) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax2 - 92) + bh5);
    ecx6 = reinterpret_cast<uint32_t>(ecx + 1 + 1 + 1);
    *reinterpret_cast<signed char*>(edx7 - 0x2edcfcba) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx8 - 0x2edcfcba) + *reinterpret_cast<signed char*>(&ecx6));
    edi9->f3 = *reinterpret_cast<signed char*>(&eax2);
    esi10 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi11) - 1);
    ecx12 = ecx6 >> 2;
    edi13 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi14) - 1);
    if (ecx12 < 8) 
        goto 0x41a3f4;
    while (ecx12) {
        --ecx12;
        *edi13 = *esi10;
        --edi13;
        --esi10;
    }
    switch (edx15) {
    case 3:
        goto 0x41a554;
    case 2:
        goto 0x41a540;
    case 1:
        goto 0x41a530;
    case 0:
        goto 0x41a528;
    }
}

void fun_411348() {
    goto TranslateMessage;
}

void fun_4112d0() {
    goto RaiseException;
}

void** fun_41bf66(int32_t ecx) {
    int1_t zf2;
    void** eax3;
    void** ecx4;
    void** v5;
    void** ecx6;
    void** ecx7;
    void** edx8;
    void** eax9;
    void** edx10;
    void** eax11;
    void** eax12;
    void** edx13;
    void** eax14;
    void** edx15;
    void** ecx16;
    void** edx17;
    int1_t less_or_equal18;
    void** eax19;
    void** v20;
    void** edx21;
    int32_t eax22;
    void*** tmp32_23;
    void** ecx24;
    void** edx25;
    void** eax26;
    int32_t ebp27;
    int32_t ecx28;

    zf2 = g42ac98 == 0;
    if (!zf2) {
        eax3 = g42acb0;
        ecx4 = g42ac98;
        v5 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(eax3) << 15) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx4 + 12)));
        VirtualFree(v5, 0x8000, 0x4000);
        ecx6 = g42acb0;
        ecx7 = g42ac98;
        edx8 = g42ac98;
        *reinterpret_cast<void***>(edx8 + 8) = reinterpret_cast<void**>(0x80000000 >> *reinterpret_cast<signed char*>(&ecx6) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx7 + 8)));
        eax9 = g42ac98;
        edx10 = g42acb0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(eax9 + 16) + reinterpret_cast<unsigned char>(edx10) * 4) + 0xc4) = 0;
        eax11 = g42ac98;
        eax12 = g42ac98;
        *reinterpret_cast<signed char*>(*reinterpret_cast<void***>(eax12 + 16) + 67) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(*reinterpret_cast<void***>(eax11 + 16) + 67) - 1);
        edx13 = g42ac98;
        eax14 = *reinterpret_cast<void***>(edx13 + 16);
        if (!*reinterpret_cast<signed char*>(eax14 + 67)) {
            edx15 = g42ac98;
            eax14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx15 + 4)) & 0xfffffffe);
            ecx16 = g42ac98;
            *reinterpret_cast<void***>(ecx16 + 4) = eax14;
        }
        edx17 = g42ac98;
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edx17 + 8) == 0xffffffff) && (less_or_equal18 = g42ac9c <= 1, !less_or_equal18)) {
            eax19 = g42ac98;
            v20 = *reinterpret_cast<void***>(eax19 + 16);
            edx21 = g42af80;
            HeapFree(edx21, 0, v20, v5, 0x8000, 0x4000);
            eax22 = g42ac9c;
            tmp32_23 = reinterpret_cast<void***>(g42aca0 + eax22 * 20);
            ecx24 = g42ac98;
            edx25 = g42ac98;
            eax26 = g42ac98;
            eax14 = fun_411343(eax26, edx25 + 20, reinterpret_cast<uint32_t>(tmp32_23) - reinterpret_cast<unsigned char>(ecx24 + 20), edx21, 0, v20, v5, 0x8000, 0x4000, v5, ebp27, __return_address());
            ecx28 = g42ac9c;
            g42ac9c = ecx28 - 1;
        }
        g42ac98 = reinterpret_cast<void**>(0);
    }
    return eax14;
}

void** fun_41d33f(void** a1, void** a2, uint32_t a3) {
    fun_41d200(a1, a2, a3, 0);
    return a2;
}

void fun_4115a5() {
    goto FreeLibrary;
}

int32_t fun_41d8d9(int32_t ecx, int32_t a2) {
    unsigned char* eax3;
    unsigned char al4;
    int32_t esi5;
    int32_t esi6;
    signed char ah7;
    uint32_t ebx8;
    uint32_t ebx9;
    int32_t eax10;
    int32_t* v11;
    void** eax12;
    void** v13;
    int32_t v14;
    void** ecx15;
    int32_t eax16;

    *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<unsigned char>(al4 | 0xd8);
    *reinterpret_cast<unsigned char*>(esi5 - 40) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(esi6 - 40) + *reinterpret_cast<unsigned char*>(&eax3));
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + ah7);
    __asm__("fadd dword [ecx+0x0]");
    ebx8 = ebx9 ^ reinterpret_cast<uint32_t>(eax3);
    *reinterpret_cast<signed char*>(eax3 - 40) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax3 - 40) + *reinterpret_cast<signed char*>(&ebx8));
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
    *reinterpret_cast<unsigned char*>(&eax10) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax3) + 4) + 4) + 4) + 4) + 4) + 4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax10) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax10) + eax10;
    if (a2) {
        v11 = reinterpret_cast<int32_t*>(0x4298e0);
        eax12 = g4298e0;
        v13 = eax12;
        v14 = 21;
    } else {
        v11 = reinterpret_cast<int32_t*>(0x4298dc);
        ecx15 = g4298dc;
        v13 = ecx15;
        v14 = 2;
    }
    if (v13) {
        if (v13 != 1) {
            *v11 = 0;
            v13(v14);
        }
        eax16 = 1;
    } else {
        eax16 = 0;
    }
    return eax16;
}

signed char g4e0041da;

int32_t g5050105;

void fun_41db83(int32_t ecx) {
    signed char* eax2;
    signed char al3;
    signed char dh4;
    int32_t edi5;
    int32_t edi6;
    signed char bl7;
    signed char tmp8_8;
    signed char bh9;
    int32_t tmp32_10;

    *reinterpret_cast<signed char*>(&eax2) = reinterpret_cast<signed char>(al3 + 38);
    *(eax2 - 38) = reinterpret_cast<signed char>(*(eax2 - 38) + dh4);
    *reinterpret_cast<signed char*>(edi5 - 38) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edi6 - 38) + bl7);
    tmp8_8 = reinterpret_cast<signed char>(g4e0041da + bh9);
    g4e0041da = tmp8_8;
    __asm__("fiadd dword [ecx+0x0]");
    *eax2 = reinterpret_cast<signed char>(*eax2 + *reinterpret_cast<signed char*>(&eax2));
    tmp32_10 = g5050105 + reinterpret_cast<int32_t>(eax2 + 0x5050501);
    g5050105 = tmp32_10;
}

int32_t fun_41dc7d(int32_t ecx, int32_t a2) {
    int32_t eax3;

    eax3 = g4298f8;
    g4298f8 = a2;
    return eax3;
}

void fun_411073() {
    goto InterlockedIncrement;
}

int32_t fun_41deab() {
    return 1;
}

void fun_41112c() {
    goto DialogBoxParamA;
}

void fun_4111db() {
    goto LoadAcceleratorsA;
}

void** fun_41e3c7(void** ecx) {
    void** eax2;

    eax2 = fun_4111fe(ecx);
    return eax2;
}

void** fun_41e4de(void** a1) {
    void* ebp2;
    void** ecx3;
    void** v4;
    void** v5;
    void** v6;
    void** eax7;
    void** v8;
    void** eax9;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ecx3 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 12);
    if (!a1 && (eax7 = fun_41119f(ecx3, 2, 0x426adc, 0x91, 0, 0x426a8c, v4, v5, v6), reinterpret_cast<int1_t>(eax7 == 1))) {
    }
    eax9 = fun_41134d(reinterpret_cast<int32_t>(ebp2) + 0xffffffd4, a1, ecx3, 0, 0x7fffffff, 0, 66, v8);
    return eax9;
}

int32_t g428ed8 = 0x426e1a;

int32_t fun_41e6c3() {
    int32_t eax1;

    eax1 = g428ed8;
    return eax1;
}

int32_t fun_41e89b() {
    return 1;
}

int32_t fun_41ea4c() {
    return 1;
}

int32_t fun_41f002() {
    return 1;
}

void fun_411569() {
    goto ShowWindow;
}

void fun_41f1d4(int32_t ecx) {
    int32_t ecx2;
    int1_t zf3;
    int32_t ecx4;
    signed char* edx5;
    int32_t esi6;
    signed char* edx7;
    int32_t esi8;
    signed char* eax9;
    signed char* eax10;
    signed char dh11;
    signed char* ebx12;
    signed char* ebx13;
    signed char ah14;
    int32_t eax15;
    int32_t eax16;

    ecx2 = ecx - 1;
    if (!(reinterpret_cast<uint1_t>(!!ecx2) & reinterpret_cast<uint1_t>(!zf3))) {
        ecx4 = ecx2 + 1;
        edx5[esi6 * 8] = reinterpret_cast<signed char>(edx7[esi8 * 8] + *reinterpret_cast<signed char*>(&ecx4));
        *eax9 = reinterpret_cast<signed char>(*eax10 + dh11);
        *ebx12 = reinterpret_cast<signed char>(*ebx13 + ah14);
        __asm__("ror dword [edx+0x8a078806], 1");
        *reinterpret_cast<int32_t*>(eax15 + 0x468a0147) = *reinterpret_cast<int32_t*>(eax16 + 0x468a0147) + (ecx4 + 1 + 1);
    }
}

void fun_41f2f1(int32_t ecx) {
}

void fun_41f33d(int32_t ecx) {
}

void fun_41f47d(int32_t ecx) {
}

int32_t GetCurrentProcessId = 0x2c8f6;

int32_t GetTickCount = 0x2c8d0;

void fun_41f4ad() {
    void* ebp1;
    int1_t zf2;
    int1_t zf3;
    void* v4;
    uint32_t eax5;
    uint32_t eax6;
    uint32_t eax7;
    void** edx8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    void** v13;

    ebp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    zf2 = g428eb0 == 0;
    if (zf2 || (zf3 = reinterpret_cast<int1_t>(g428eb0 == 0xbb40e64e), zf3)) {
        v4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp1) - 8);
        GetSystemTimeAsFileTime(v4);
        eax5 = reinterpret_cast<uint32_t>(GetCurrentProcessId(v4));
        eax6 = reinterpret_cast<uint32_t>(GetCurrentThreadId(v4));
        eax7 = reinterpret_cast<uint32_t>(GetTickCount(v4));
        QueryPerformanceCounter(reinterpret_cast<int32_t>(ebp1) - 24, v4);
        edx8 = reinterpret_cast<void**>(eax7 ^ (eax6 ^ (eax5 ^ (v9 ^ v10))) ^ v11 ^ v12);
        if (!edx8) {
            v13 = reinterpret_cast<void**>(0xbb40e64e);
        } else {
            v13 = edx8;
        }
        g428eb0 = v13;
    }
    return;
}

struct s109 {
    signed char[3] pad3;
    signed char f3;
};

void fun_41f360(int32_t ecx) {
    int32_t eax2;
    int32_t eax3;
    signed char dl4;
    uint32_t ecx5;
    int32_t edx6;
    int32_t edx7;
    struct s109* edi8;
    signed char al9;
    int32_t* esi10;
    void* esi11;
    uint32_t ecx12;
    int32_t* edi13;
    void* edi14;
    int32_t edx15;

    __asm__("insb ");
    *reinterpret_cast<signed char*>(eax2 - 0x47ffbe0d) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax3 - 0x47ffbe0d) + dl4);
    ecx5 = reinterpret_cast<uint32_t>(ecx + 1 + 1);
    *reinterpret_cast<signed char*>(edx6 - 0x2edcfcba) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx7 - 0x2edcfcba) + *reinterpret_cast<signed char*>(&ecx5));
    edi8->f3 = al9;
    esi10 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi11) - 1);
    ecx12 = ecx5 >> 2;
    edi13 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi14) - 1);
    if (ecx12 < 8) 
        goto 0x41f334;
    while (ecx12) {
        --ecx12;
        *edi13 = *esi10;
        --edi13;
        --esi10;
    }
    switch (edx15) {
    case 3:
        goto 0x41f494;
    case 2:
        goto 0x41f480;
    case 1:
        goto 0x41f470;
    case 0:
        goto 0x41f468;
    }
}

void fun_41f45e(int32_t ecx) {
    int32_t eax2;
    int32_t eax3;
    signed char al4;

    *reinterpret_cast<signed char*>(eax2 - 0x6bffbe0c) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax3 - 0x6bffbe0c) + al4);
    __asm__("hlt ");
}

void fun_41f6a1() {
    int32_t ebp1;

    *reinterpret_cast<int32_t*>(ebp1 - 4) = -1;
}

void** fun_41f90c(void** ecx) {
    void** eax2;

    eax2 = fun_4111f4(ecx, 1, 0);
    return eax2;
}

void fun_411159() {
    goto SetFilePointer;
}

struct s110 {
    signed char f0;
    int32_t f1;
};

struct s111 {
    int32_t f0;
    void* f4;
};

struct s112 {
    signed char[1] pad1;
    int32_t f1;
};

struct s113 {
    signed char f0;
    signed char[2080391678] pad2080391679;
    signed char f2080391679;
};

struct s114 {
    int32_t f0;
    int32_t f1;
};

struct s115 {
    signed char[8] pad8;
    signed char f8;
};

signed char g4050503;

struct s116 {
    struct s116* f0;
    signed char f1;
};

struct s117 {
    signed char[1] pad1;
    void* f1;
};

struct s118 {
    void* f0;
    signed char[721437184] pad721437185;
    void* f721437185;
};

struct s119 {
    signed char[1] pad1;
    int32_t f1;
};

void fun_420a48(struct s110* ecx) {
    int32_t v2;
    int32_t eax3;
    int32_t eax4;
    struct s111* esi5;
    struct s112* esi6;
    void* esp7;
    signed char* edx8;
    signed char* edx9;
    struct s113* edx10;
    void* edx11;
    struct s114* ecx12;
    int32_t* ecx13;
    signed char tmp8_14;
    struct s115* eax15;
    signed char tmp8_16;
    struct s116* eax17;
    struct s116* ebp18;
    void* ecx19;
    struct s116* tmp32_20;
    struct s116* eax21;
    struct s117* edx22;
    struct s118* edx23;
    void* esp24;
    struct s119* edi25;
    void** esi26;
    void* eax27;
    signed char bh28;
    void* eax29;
    void* eax30;
    signed char* eax31;
    signed char bl32;
    int16_t* esp33;
    int16_t cs34;
    int16_t* esp35;
    int16_t cs36;
    int16_t* esp37;
    int16_t cs38;
    int16_t* esp39;
    int16_t cs40;
    int16_t* esp41;
    int16_t cs42;
    int16_t* esp43;
    int16_t cs44;
    int16_t* esp45;
    int16_t cs46;
    int16_t* esp47;
    int16_t cs48;
    int16_t* esp49;
    int16_t cs50;
    int16_t* esp51;
    int16_t cs52;
    int16_t* esp53;
    int16_t cs54;
    int16_t* esp55;
    int16_t cs56;
    int16_t* esp57;
    int16_t cs58;
    int16_t* esp59;
    int16_t cs60;
    unsigned char* ecx61;
    int16_t* esp62;
    int16_t cs63;
    int16_t* esp64;
    int16_t cs65;
    int16_t* esp66;
    int16_t cs67;
    int16_t* esp68;
    int16_t cs69;
    int16_t* esp70;
    int16_t cs71;
    int16_t* esp72;
    int16_t cs73;
    int16_t* esp74;
    int16_t cs75;
    int16_t* esp76;
    int16_t cs77;
    int16_t* esp78;
    int16_t* esp79;
    int16_t cs80;
    int16_t* esp81;
    int16_t cs82;
    int16_t* esp83;
    int16_t cs84;
    int16_t* esp85;
    int16_t cs86;
    int16_t* esp87;
    int16_t cs88;
    int16_t cs89;

    v2 = reinterpret_cast<int32_t>(__return_address());
    __asm__("insd ");
    ecx->f0 = reinterpret_cast<signed char>(ecx->f0 + 1);
    eax3 = eax4 + 0x380041ff;
    ecx->f0 = reinterpret_cast<signed char>(ecx->f0 + 1);
    esi5 = reinterpret_cast<struct s111*>(&esi6->f1);
    ecx->f0 = reinterpret_cast<signed char>(ecx->f0 + 1);
    __asm__("sti ");
    ecx->f0 = reinterpret_cast<signed char>(ecx->f0 + 1);
    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 2);
    *edx8 = reinterpret_cast<signed char>(*edx9 + *reinterpret_cast<signed char*>(&eax3));
    edx10 = reinterpret_cast<struct s113*>(reinterpret_cast<int32_t>(edx11) - 1);
    *reinterpret_cast<signed char*>(edx10) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx10) + *reinterpret_cast<signed char*>(&eax3));
    *reinterpret_cast<signed char*>(edx10) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx10) + eax3);
    ecx12 = reinterpret_cast<struct s114*>(&ecx->f1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edx10) + 0x7c0041ff) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edx10) + 0x7c0041ff) + *reinterpret_cast<signed char*>(&edx10));
    ecx12->f0 = ecx12->f0 + 1;
    if (!__intrinsic()) {
    }
    ecx13 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx12) + 1);
    *reinterpret_cast<signed char*>(eax3 - 0x56ffbe01) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax3 - 0x56ffbe01) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax3) + 1));
    *ecx13 = *ecx13 + 1;
    tmp8_14 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&g5050105) + *reinterpret_cast<signed char*>(&eax3));
    *reinterpret_cast<signed char*>(&g5050105) = tmp8_14;
    eax15 = reinterpret_cast<struct s115*>(eax3 + 0x5050505);
    tmp8_16 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax15) + g4050503);
    *reinterpret_cast<signed char*>(&eax15) = tmp8_16;
    eax17 = ebp18;
    *reinterpret_cast<signed char*>(edx10) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx10) + *reinterpret_cast<signed char*>(&eax17));
    ecx19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx13) - 1);
    *reinterpret_cast<signed char*>(edx10) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx10) + reinterpret_cast<signed char>(eax17));
    tmp32_20 = *reinterpret_cast<struct s116**>(&eax17->f0);
    *reinterpret_cast<struct s116**>(&eax17->f0) = eax17;
    eax21 = tmp32_20;
    edx22 = reinterpret_cast<struct s117*>(reinterpret_cast<int32_t>(edx10) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx19) + reinterpret_cast<signed char>(eax21) + 66) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx19) + reinterpret_cast<signed char>(eax21) + 66) + *reinterpret_cast<signed char*>(&edx22));
    eax21->f1 = reinterpret_cast<signed char>(eax21->f1 + *reinterpret_cast<signed char*>(&eax21 + 1));
    edx23 = reinterpret_cast<struct s118*>(&edx22->f1);
    *reinterpret_cast<struct s116**>(&eax21->f0) = reinterpret_cast<struct s116*>(reinterpret_cast<signed char>(*reinterpret_cast<struct s116**>(&eax21->f0)) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax21)));
    *reinterpret_cast<void**>(&eax21) = reinterpret_cast<void*>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax21)) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp7) + reinterpret_cast<signed char>(eax21)) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp7) + reinterpret_cast<signed char>(eax21)) + reinterpret_cast<signed char>(eax21);
    esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(edx23) + 0x2b004201)));
    *reinterpret_cast<signed char*>(&ecx19) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ecx19) + *reinterpret_cast<signed char*>(&ecx19));
    *reinterpret_cast<void**>(&eax21) = reinterpret_cast<void*>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax21)) + 2) + 4) + 4) + 4) + 4) + 4) + 66) + reinterpret_cast<signed char>(edx23->f0));
    edi25->f1 = esi5->f0;
    esi26 = &esi5->f4;
    eax27 = reinterpret_cast<void*>(&(eax21 + 0x1198021)->f0);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax27) - 0x7affbdff) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax27) - 0x7affbdff) + bh28);
    eax29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax27) + 0x4420042);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx19) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx19) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
    eax30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax29) + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&edx23->pad721437185) + 1)));
    __asm__("out 0x5, eax");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax30) - 0x20ffbdfb) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax30) - 0x20ffbdfb) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax30) + 1));
    eax31 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edi25->f1 + 1) + 0x5b30042);
    eax15->f8 = reinterpret_cast<signed char>(eax15->f8 + bl32);
    *eax31 = reinterpret_cast<signed char>(*eax31 + *reinterpret_cast<signed char*>(&eax31));
    esp33 = reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp24) - 2);
    *esp33 = cs34;
    *esi26 = reinterpret_cast<void*>(reinterpret_cast<signed char>(*esi26) + reinterpret_cast<int32_t>(ecx19));
    *esi26 = reinterpret_cast<void*>(reinterpret_cast<signed char>(*esi26) + reinterpret_cast<int32_t>(ecx19));
    esp35 = esp33 - 1;
    *esp35 = cs36;
    esp37 = esp35 - 1;
    *esp37 = cs38;
    esp39 = esp37 - 1;
    *esp39 = cs40;
    esp41 = esp39 - 1;
    *esp41 = cs42;
    esp43 = esp41 - 1;
    *esp43 = cs44;
    esp45 = esp43 - 1;
    *esp45 = cs46;
    esp47 = esp45 - 1;
    *esp47 = cs48;
    esp49 = esp47 - 1;
    *esp49 = cs50;
    esp51 = esp49 - 1;
    *esp51 = cs52;
    esp53 = esp51 - 1;
    *esp53 = cs54;
    *reinterpret_cast<signed char*>(&ecx19) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ecx19) + reinterpret_cast<signed char>(*esi26));
    esp55 = esp53 - 1;
    *esp55 = cs56;
    esp57 = esp55 - 1;
    *esp57 = cs58;
    esp59 = esp57 - 1;
    *esp59 = cs60;
    ecx61 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx19) + reinterpret_cast<signed char>(*esi26));
    esp62 = esp59 - 1;
    *esp62 = cs63;
    esp64 = esp62 - 1;
    *esp64 = cs65;
    esp66 = esp64 - 1;
    *esp66 = cs67;
    esp68 = esp66 - 1;
    *esp68 = cs69;
    esp70 = esp68 - 1;
    *esp70 = cs71;
    esp72 = esp70 - 1;
    *esp72 = cs73;
    esp74 = esp72 - 1;
    *esp74 = cs75;
    esp76 = esp74 - 1;
    *esp76 = cs77;
    esp78 = esp76 - 1;
    *esp78 = *reinterpret_cast<int16_t*>(&v2);
    esp79 = esp78 - 1;
    *esp79 = cs80;
    esp81 = esp79 - 1;
    *esp81 = cs82;
    esp83 = esp81 - 1;
    *esp83 = cs84;
    esp85 = esp83 - 1;
    *esp85 = cs86;
    *ecx61 = reinterpret_cast<unsigned char>(*ecx61 | *reinterpret_cast<unsigned char*>(&ecx61));
    esp87 = esp85 - 1;
    *esp87 = cs88;
    *(esp87 - 1) = cs89;
}

void fun_411267() {
    goto GetCurrentProcess;
}

int32_t fun_421422() {
    return 1;
}

void fun_411302() {
    goto BeginPaint;
}

int32_t fun_421c7f() {
    return 0x428f00;
}

void** fun_421dc8(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** eax12;
    void** ebp13;

    fun_41121c();
    eax12 = reinterpret_cast<void**>(static_cast<int32_t>(g429670));
    if (eax12) {
        eax12 = fun_411285(ebp13, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }
    return eax12;
}

uint32_t fun_421fbf(void** a1, void** a2) {
    void** ebp3;
    uint32_t eax4;

    eax4 = fun_41157d(a1, ebp3, __return_address(), a1, a2);
    return eax4;
}

void fun_411140() {
    goto 0x41f580;
}

void fun_41114a() {
    goto 0x415100;
}

void fun_4112f3() {
    goto 0x41ded0;
}

void fun_422b76() {
    void** ebp1;

    fun_4114e2(2, ebp1);
    return;
}

void fun_411532() {
    goto GetCPInfo;
}

void fun_411249() {
    goto 0x41f920;
}

void fun_411523() {
    goto GetSystemInfo;
}

void fun_41137a() {
    goto HeapFree;
}

void fun_4120f6() {
    int32_t* eax1;
    int32_t* eax2;
    int32_t eax3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = *eax2 + eax3;
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

int32_t fun_41147e(int32_t ecx, int32_t a2) {
    int32_t eax3;

    eax3 = fun_411028(ecx, a2);
    return eax3;
}

void** fun_411398(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** ebp6;
    void** eax7;

    eax7 = fun_41119a(a1, a1, a2, a3, 0, a4, a5, ebp6, __return_address());
    return eax7;
}

void fun_4112b7() {
    goto WriteFile;
}

void** fun_411451(void** a1, void** a2, void** a3) {
    void** ebp4;
    void** eax5;

    eax5 = fun_41119a(a2, a1, a2, a3, 0, 0, 0, ebp4, __return_address());
    return eax5;
}

void fun_411410() {
    goto GetCurrentProcessId;
}

void fun_411019(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** v12;
    void*** esp13;
    void** v14;
    void** ebp15;
    void** v16;
    void** ebx17;
    void** v18;
    void** esi19;
    void** v20;
    void** edi21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** eax27;
    void** edi28;
    void** v29;
    void** v30;
    void** ecx31;
    int32_t v32;
    void** eax33;
    void** v34;
    signed char* eax35;
    signed char* v36;
    void** v37;
    void** v38;

    v12 = reinterpret_cast<void**>(__return_address());
    esp13 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v14 = ebp15;
    v16 = ebx17;
    v18 = esi19;
    v20 = edi21;
    fun_414c20(ecx, v20, v18, v16, v22, v23, v24, v25, v26, v14, v12, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    eax27 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(a3) * 4 + 0x428b60);
    edi28 = reinterpret_cast<void**>(esp13 - 20 - 4 - 4 - 4 - 4 + 4);
    v29 = edi28;
    v30 = eax27;
    if (eax27 == 0xffffffff) 
        goto 0x412d9d;
    ecx31 = reinterpret_cast<void**>(esp13 + 0xfffffffc);
    fun_411334(ecx31, a4 + 0xfffffffb, edi28, 0x200, ecx31, esp13 - 8);
    if (v32) {
        eax33 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(a3) * 4 + 0x428b70);
        v34 = eax33;
        do {
            ++eax33;
        } while (*reinterpret_cast<void***>(eax33));
        do {
        } while (*reinterpret_cast<signed char*>(&v20 + 3));
        eax35 = v36;
        do {
            *reinterpret_cast<signed char*>(&ecx31) = *eax35;
            ++eax35;
        } while (*reinterpret_cast<signed char*>(&ecx31));
        fun_414c20(ecx31, v20, v18, v16, v30, v29, v34, v37, v38, v14, v12, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
        goto 0x412c70;
    } else {
        fun_41155a(a2, a3, v20, v18, v16, v30, v29);
        return;
    }
}

void fun_411433() {
    goto 0x41a640;
}

void** fun_411168() {
    void** eax1;

    eax1 = g428ed4;
    return eax1;
}

void fun_41117c() {
    goto VirtualQuery;
}

int32_t fun_4114c9(int32_t ecx, int32_t a2) {
    int1_t zf3;
    int32_t v4;
    int32_t eax5;
    int32_t v6;

    zf3 = reinterpret_cast<int1_t>(g42ae44 == 0x3a4);
    if (!zf3 || (v4 = a2, eax5 = fun_419600(*reinterpret_cast<unsigned char*>(&v4), 0, 3, ecx), eax5 == 0)) {
        v6 = 0;
    } else {
        v6 = 1;
    }
    return v6;
}

int32_t fun_4127c6(int32_t a1) {
    if (a1 < 0 || a1 >= 4) {
        return 0;
    } else {
        return *reinterpret_cast<int32_t*>(a1 * 4 + 0x428b4c);
    }
}

void fun_4115b9() {
    goto GetStringTypeW;
}

int32_t fun_412ab5() {
    return -1;
}

void fun_412b6b() {
}

int32_t fun_413180() {
    int32_t eax1;
    uint32_t eax2;

    eax1 = fun_413190();
    eax2 = reinterpret_cast<uint32_t>(-eax1);
    return -(eax2 - (eax2 + reinterpret_cast<uint1_t>(eax2 < eax2 + reinterpret_cast<uint1_t>(!!eax1))));
}

void fun_411186() {
    goto MultiByteToWideChar;
}

int32_t fun_411500() {
    int32_t eax1;

    eax1 = g4298f8;
    return eax1;
}

void fun_41123f() {
    goto 0x4168a0;
}

void fun_411357() {
    goto GetProcessHeap;
}

void fun_4146f6() {
    int32_t ebp1;

    *reinterpret_cast<int32_t*>(ebp1 - 4) = -1;
    goto 0x4146ce;
}

struct s120 {
    signed char[4] pad4;
    int32_t f4;
};

struct s121 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_414796() {
    void* esp1;
    int32_t ebp2;
    int32_t ebp3;
    int32_t* esi4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebp7;
    int32_t eax8;
    int32_t* esp9;
    int32_t ebp10;
    int32_t ebp11;
    struct s121* ebp12;

    esp1 = *reinterpret_cast<void**>(ebp2 - 24);
    *reinterpret_cast<int32_t*>(ebp3 - 4) = -1;
    esi4 = &(*reinterpret_cast<struct s120**>(ebp5 - 28))->f4;
    while (*reinterpret_cast<int32_t**>(ebp6 - 28) = esi4, reinterpret_cast<uint32_t>(esi4) < 0x427d38) {
        *reinterpret_cast<int32_t*>(ebp7 - 4) = 0;
        eax8 = *esi4;
        if (eax8) {
            esp9 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp1) - 4);
            *esp9 = 0x414788;
            eax8();
            esp1 = reinterpret_cast<void*>(esp9 + 1);
        }
        *reinterpret_cast<int32_t*>(ebp10 - 4) = -1;
        ++esi4;
    }
    g0 = *reinterpret_cast<struct s3**>(ebp11 - 16);
    goto ebp12->f4;
}

void fun_411447() {
    goto 0x411f80;
}

void fun_411389() {
    goto GetOEMCP;
}

struct s122 {
    signed char[4] pad4;
    uint32_t f4;
};

int32_t fun_4149bc(struct s122* a1, int32_t a2) {
    int32_t eax3;
    int32_t* v4;

    eax3 = 1;
    if (a1->f4 & 6) {
        *v4 = a2;
        eax3 = 3;
    }
    return eax3;
}

void fun_41132a() {
    goto LoadStringA;
}

void fun_4111a9() {
    goto VirtualFree;
}

void fun_41a047() {
}

void** fun_41511c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** v15;
    void** v16;
    void** ebp17;
    void** eax18;
    void** eax19;
    void** v20;
    void** ecx21;
    void** v22;
    void** eax23;
    void** ecx24;
    int1_t zf25;
    void** edx26;
    void** v27;
    int1_t zf28;
    void** ecx29;
    void** edx30;

    v15 = reinterpret_cast<void**>(__return_address());
    v16 = ebp17;
    if (a1 && !reinterpret_cast<int1_t>(a1 == 1) || !a2) {
        g42962c = 22;
        eax18 = reinterpret_cast<void**>(0xffffffff);
    } else {
        eax19 = g42af7c;
        v20 = eax19;
        while (v20) {
            ecx21 = *reinterpret_cast<void***>(v20 + 12);
            if (ecx21 == a2) 
                goto addr_41517e_7;
            ecx21 = v20;
            v20 = *reinterpret_cast<void***>(ecx21 + 4);
        }
        goto addr_415182_10;
    }
    addr_415308_11:
    return eax18;
    addr_415182_10:
    if (!reinterpret_cast<int1_t>(a1 == 1)) {
        if (!v20) {
            eax23 = fun_411064(ecx21, 16, 2, 0x425bc0, 0x125, v22, v20, v16, v15, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
            if (eax23) {
                *reinterpret_cast<void***>(eax23) = reinterpret_cast<void**>(0);
                ecx24 = g42af7c;
                *reinterpret_cast<void***>(eax23 + 4) = ecx24;
                zf25 = g42af7c == 0;
                if (!zf25) {
                    edx26 = g42af7c;
                    *reinterpret_cast<void***>(edx26) = eax23;
                }
                *reinterpret_cast<void***>(eax23 + 8) = reinterpret_cast<void**>(1);
                v27 = reinterpret_cast<void**>(1);
                *reinterpret_cast<void***>(eax23 + 12) = a2;
                g42af7c = eax23;
            } else {
                v27 = reinterpret_cast<void**>(0xffffffff);
                g42962c = 12;
            }
        } else {
            *reinterpret_cast<void***>(v20 + 8) = *reinterpret_cast<void***>(v20 + 8) + 1;
            v27 = *reinterpret_cast<void***>(v20 + 8);
            zf28 = v20 == g42af7c;
            if (!zf28) {
                if (*reinterpret_cast<void***>(v20 + 4)) {
                    *reinterpret_cast<void***>(*reinterpret_cast<void***>(v20 + 4)) = *reinterpret_cast<void***>(v20);
                }
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(v20) + 4) = *reinterpret_cast<void***>(v20 + 4);
                *reinterpret_cast<void***>(v20) = reinterpret_cast<void**>(0);
                ecx29 = g42af7c;
                *reinterpret_cast<void***>(v20 + 4) = ecx29;
                edx30 = g42af7c;
                *reinterpret_cast<void***>(edx30) = v20;
                g42af7c = v20;
            }
        }
    } else {
        if (!v20) {
            v27 = reinterpret_cast<void**>(0xffffffff);
            g42962c = 22;
        } else {
            *reinterpret_cast<void***>(v20 + 8) = *reinterpret_cast<void***>(v20 + 8) - 1;
            v27 = *reinterpret_cast<void***>(v20 + 8);
            if (!v27) {
                if (*reinterpret_cast<void***>(v20 + 4)) {
                    *reinterpret_cast<void***>(*reinterpret_cast<void***>(v20 + 4)) = *reinterpret_cast<void***>(v20);
                }
                if (!*reinterpret_cast<void***>(v20)) {
                    g42af7c = *reinterpret_cast<void***>(v20 + 4);
                } else {
                    *reinterpret_cast<void***>(*reinterpret_cast<void***>(v20) + 4) = *reinterpret_cast<void***>(v20 + 4);
                }
                fun_41141a(v20, v20, 2, v27, v20, v16, v15, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
            }
        }
    }
    eax18 = v27;
    goto addr_415308_11;
    addr_41517e_7:
    goto addr_415182_10;
}

uint32_t fun_414feb(int32_t ecx, int32_t a2, uint32_t a3) {
    uint32_t eax4;
    uint32_t v5;

    if (a2 < 0 || a2 >= 3) {
        eax4 = 0xffffffff;
    } else {
        if (a3 != 0xffffffff) {
            if (!(a3 & 0xfffffff8)) {
                v5 = *reinterpret_cast<uint32_t*>(a2 * 4 + 0x428d1c);
                *reinterpret_cast<uint32_t*>(a2 * 4 + 0x428d1c) = a3;
                eax4 = v5;
            } else {
                eax4 = 0xffffffff;
            }
        } else {
            eax4 = *reinterpret_cast<uint32_t*>(a2 * 4 + 0x428d1c);
        }
    }
    return eax4;
}

void fun_411041() {
    goto GetStdHandle;
}

void fun_4111ef() {
    goto EndPaint;
}

struct s123 {
    int32_t f0;
    signed char[40] pad44;
    int32_t f44;
    int32_t f48;
};

struct s124 {
    signed char[44] pad44;
    int32_t f44;
    int32_t f48;
};

struct s125 {
    signed char[44] pad44;
    int32_t f44;
    int32_t f48;
};

int32_t fun_418672(void** ecx, struct s123* a2, struct s124* a3, struct s125* a4) {
    int32_t v5;
    void** esi6;
    void** v7;
    void** eax8;
    int32_t eax9;
    int32_t v10;
    uint32_t eax11;

    v5 = 0;
    if (!a2 || (!a3 || !a4)) {
        eax8 = fun_41119f(ecx, 0, 0, 0, 0, 0x426074, 0x426680, esi6, v7);
        if (reinterpret_cast<int1_t>(eax8 == 1)) {
        }
        eax9 = 0;
    } else {
        v10 = 0;
        while (v10 < 5) {
            *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(a2) + v10 * 4 + 24) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(a4) + v10 * 4 + 24) - *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(a3) + v10 * 4 + 24);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(a2) + v10 * 4 + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(a4) + v10 * 4 + 4) - *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(a3) + v10 * 4 + 4);
            if ((*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(a2) + v10 * 4 + 24) || *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(a2) + v10 * 4 + 4)) && (v10 && (v10 != 2 || v10 == 2 && (eax11 = g428d4c, !!(eax11 & 16))))) {
                v5 = 1;
            }
            ++v10;
        }
        a2->f44 = a4->f44 - a3->f44;
        a2->f48 = a4->f48 - a3->f48;
        a2->f0 = 0;
        eax9 = v5;
    }
    return eax9;
}

void fun_4110cd() {
    g0 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4);
}

void fun_41145b() {
    goto 0x4123d0;
}

void fun_411091() {
    goto 0x41dca0;
}

void fun_4114b5() {
    goto 0x414990;
}

void** fun_418e0b(void** a1, void** a2, void** a3, void** a4) {
    void** ebp5;
    void** eax6;

    eax6 = fun_4111ae(a1, a2, 0, a3, a4, ebp5, __return_address(), a1, a2, a3, a4);
    return eax6;
}

int32_t fun_4111b8() {
    int32_t eax1;
    struct s3* ecx2;

    eax1 = 0;
    ecx2 = g0;
    if (reinterpret_cast<int1_t>(ecx2->f4 == fun_4149bc) && ecx2->f8 == ecx2->f12->f12) {
        eax1 = 1;
    }
    return eax1;
}

int32_t fun_419485(int32_t a1) {
    int32_t v2;
    int32_t ebp3;
    int32_t eax4;

    v2 = a1;
    eax4 = fun_419600(*reinterpret_cast<unsigned char*>(&v2), 0, 3, ebp3);
    return eax4;
}

void fun_9af40451(int32_t a1);

int32_t fun_9b020451(int32_t a1);

void fun_419b0f() {
    int32_t eax1;
    void* esp2;
    int32_t ebx3;
    int32_t ebx4;
    uint32_t ebx5;

    __asm__("in eax, dx");
    fun_9af40451(__return_address());
    __asm__("sti ");
    eax1 = fun_9b020451(__return_address());
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4 + 4);
    *reinterpret_cast<uint32_t*>(ebx3 + 0x4000041) = *reinterpret_cast<uint32_t*>(ebx4 + 0x4000041) | ebx5;
    *reinterpret_cast<signed char*>(&eax1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax1) + 4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp2) + eax1) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp2) + eax1) + eax1;
}

void fun_4112d5() {
    goto LCMapStringW;
}

int32_t fun_4110b4(int32_t a1) {
    int32_t v2;
    int32_t ebp3;
    int32_t eax4;

    v2 = a1;
    eax4 = fun_419600(*reinterpret_cast<unsigned char*>(&v2), 0, 2, ebp3);
    return eax4;
}

int32_t fun_41d152() {
    return 1;
}

signed char* fun_41d36e(int32_t ecx, void** a2, void** a3, signed char* a4, uint32_t a5) {
    int32_t v6;

    if (a5 != 10 || (reinterpret_cast<signed char>(a3) > reinterpret_cast<signed char>(0) || reinterpret_cast<signed char>(a3) >= reinterpret_cast<signed char>(0) && reinterpret_cast<unsigned char>(a2) >= reinterpret_cast<unsigned char>(0))) {
        v6 = 0;
    } else {
        v6 = 1;
    }
    fun_41d3e0(a2, a3, a4, a5, v6);
    return a4;
}

void fun_4115aa() {
    goto GetLastError;
}

void fun_4113f2() {
    goto FlushFileBuffers;
}

void fun_4113c5() {
    goto 0x421c90;
}

void fun_411582() {
    goto 0x41d350;
}

void fun_41e8a1(void** ecx) {
    int32_t ebp2;
    int32_t ebp3;
    int32_t ebp4;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp2 - 24)) - 4) = 0x41e8a9;
    fun_411325(ecx);
    *reinterpret_cast<int32_t*>(ebp3 - 40) = 0;
    *reinterpret_cast<int32_t*>(ebp4 - 4) = -1;
}

void fun_41ea52(void** ecx) {
    int32_t ebp2;
    int32_t ebp3;
    int32_t ebp4;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp2 - 24)) - 4) = 0x41ea5a;
    fun_411325(ecx);
    *reinterpret_cast<int32_t*>(ebp3 - 64) = 0;
    *reinterpret_cast<int32_t*>(ebp4 - 4) = -1;
}

int32_t fun_41eb6a() {
    return 1;
}

void fun_41f008(void** ecx) {
    int32_t ebp2;
    int32_t ebp3;
    int32_t ebp4;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp2 - 24)) - 4) = 0x41f010;
    fun_411325(ecx);
    *reinterpret_cast<int32_t*>(ebp3 - 60) = 0;
    *reinterpret_cast<int32_t*>(ebp4 - 4) = -1;
}

void fun_41156e() {
    goto 0x421ff0;
}

void fun_41f466(int32_t ecx) {
    int32_t ecx2;
    int32_t ebx3;
    int32_t ebx4;

    ecx2 = ecx + 1;
    *reinterpret_cast<signed char*>(ebx3 + 0x5f5e0845) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx4 + 0x5f5e0845) + *reinterpret_cast<signed char*>(&ecx2));
}

void fun_41126c() {
    goto 0x418df0;
}

void fun_421428(void** ecx) {
    int32_t ebp2;
    int32_t ebp3;
    int32_t ebp4;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp2 - 24)) - 4) = 0x421430;
    fun_411325(ecx);
    *reinterpret_cast<int32_t*>(ebp3 - 48) = 0;
    *reinterpret_cast<int32_t*>(ebp4 - 4) = -1;
}

int32_t fun_41111d(int32_t a1) {
    int32_t v2;
    int32_t ebp3;
    int32_t eax4;

    v2 = a1;
    eax4 = fun_419600(*reinterpret_cast<unsigned char*>(&v2), 0, 8, ebp3);
    return eax4;
}

void fun_411307() {
    goto 0x417520;
}

void fun_41128f() {
    goto GetMessageA;
}

struct s126 {
    unsigned char f0;
    unsigned char f1;
};

uint32_t fun_422001() {
    void** v1;
    struct s126* v2;
    void** eax3;
    uint32_t v4;
    unsigned char* v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t eax10;
    uint32_t tmp32_11;
    uint32_t eax12;

    while (v1 = reinterpret_cast<void**>(static_cast<uint32_t>(v2->f0)), eax3 = fun_411118(v1), !!eax3) {
        v2 = reinterpret_cast<struct s126*>(&v2->f1);
    }
    v4 = v2->f0;
    v5 = &v2->f1;
    v6 = v4;
    if (v4 == 45 || v4 == 43) {
        v4 = *v5;
        ++v5;
    }
    v7 = 0;
    v8 = 0;
    while (1) {
        if (reinterpret_cast<int32_t>(v4) < reinterpret_cast<int32_t>(48) || reinterpret_cast<int32_t>(v4) > reinterpret_cast<int32_t>(57)) {
            v9 = 0xffffffff;
        } else {
            v9 = v4 - 48;
        }
        if (v9 == 0xffffffff) 
            break;
        eax10 = fun_41113b(v7, v8, 10, 0);
        __asm__("cdq ");
        tmp32_11 = eax10 + v9;
        v7 = tmp32_11;
        v8 = v9 + v9 + reinterpret_cast<uint1_t>(tmp32_11 < eax10);
        v4 = *v5;
        ++v5;
    }
    if (v6 != 45) {
        eax12 = v7;
    } else {
        eax12 = -v7;
    }
    return eax12;
}

int32_t fun_411537(int32_t a1) {
    int32_t v2;
    int32_t ebp3;
    int32_t eax4;

    v2 = a1;
    eax4 = fun_419600(*reinterpret_cast<unsigned char*>(&v2), 0x117, 3, ebp3);
    return eax4;
}

void fun_411483() {
    goto GetFileType;
}

void fun_41139d() {
    goto 0x419490;
}

void fun_4112bc() {
    goto 0x419380;
}

void fun_411438() {
    goto PostQuitMessage;
}

void fun_4114ce() {
    goto GetTickCount;
}

void fun_412ab9() {
}

int32_t fun_416838(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    void** ebp18;
    void** eax19;
    int1_t zf20;
    void** eax21;
    void** ecx22;
    int32_t eax23;

    eax19 = fun_411064(ecx, 0x80, 2, 0x425fdc, 0xc6, ebp18, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
    g42b0f4 = eax19;
    zf20 = g42b0f4 == 0;
    if (!zf20) {
        eax21 = g42b0f4;
        *reinterpret_cast<void***>(eax21) = reinterpret_cast<void**>(0);
        ecx22 = g42b0f4;
        g42b0f0 = ecx22;
        eax23 = 0;
    } else {
        eax23 = 24;
    }
    return eax23;
}

void fun_41118b() {
    goto 0x412800;
}

void fun_411299() {
    goto IsBadWritePtr;
}

void fun_411505() {
    goto LoadCursorA;
}

void fun_4110aa() {
    goto SetHandleCount;
}

void fun_41135c() {
    goto 0x41e520;
}

void fun_4113ac() {
    goto GetStringTypeA;
}

void fun_41132f() {
    goto GetVersionExA;
}

void fun_411136() {
    goto GetLocaleInfoA;
}

void fun_411046() {
    goto 0x419060;
}

void fun_4110c3() {
    goto EndDialog;
}

void fun_4110d2() {
    goto WideCharToMultiByte;
}

void fun_411460() {
    goto 0x415060;
}

void fun_411370() {
    goto 0x414f70;
}

void fun_4112da() {
    goto TranslateAcceleratorA;
}

void fun_4110b9() {
    goto 0x4169a0;
}

void fun_41d158() {
    int32_t ebp1;

    *reinterpret_cast<int32_t*>(ebp1 - 4) = -1;
}

void fun_4113f7() {
    goto 0x417d20;
}

void fun_4113ca() {
    goto 0x41e3e0;
}

void fun_41eb70(void** ecx) {
    int32_t ebp2;
    int32_t ebp3;
    int32_t ebp4;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp2 - 24)) - 4) = 0x41eb78;
    fun_411325(ecx);
    *reinterpret_cast<int32_t*>(ebp3 - 52) = 0;
    *reinterpret_cast<int32_t*>(ebp4 - 4) = -1;
}

void fun_411573() {
    goto 0x41d510;
}

void fun_411271() {
    goto 0x4148b0;
}

int32_t fun_411122(int32_t a1) {
    int32_t v2;
    int32_t ebp3;
    int32_t eax4;

    v2 = a1;
    eax4 = fun_419600(*reinterpret_cast<unsigned char*>(&v2), 16, 2, ebp3);
    return eax4;
}

void fun_41130c() {
    goto 0x419470;
}

void fun_41153c() {
    goto HeapValidate;
}

void fun_411488() {
    goto 0x417c50;
}

void fun_4113a2() {
    goto TerminateProcess;
}

void fun_4112c1() {
    goto LoadLibraryA;
}

void fun_4114d3() {
    goto ExitProcess;
}

void fun_411190() {
    goto 0x41c0e0;
}

signed char g4295f9 = 0;

void** fun_41129e() {
    void** eax1;
    void** eax2;

    *reinterpret_cast<signed char*>(&eax1) = g4295f9;
    if (!*reinterpret_cast<signed char*>(&eax1)) {
        g4295f9 = 1;
        eax2 = fun_411474(0, 0, 0, 1, 0);
        eax1 = fun_41138e(eax2, 0, 0, 0, 1, 0);
    }
    return eax1;
}

void fun_41150a() {
    goto CreateWindowExA;
}

void fun_411361() {
    goto HeapCreate;
}

void fun_4113b1(int32_t ecx) {
    goto 0x414a7c;
}

void fun_41104b() {
    goto FreeEnvironmentStringsA;
}

void fun_4110d7() {
    goto CloseHandle;
}

void fun_411465() {
    goto HeapDestroy;
}

void fun_4112df() {
    goto 0x422bb0;
}

int32_t fun_4194c5(int32_t a1) {
    int32_t v2;
    int32_t ebp3;
    int32_t eax4;

    v2 = a1;
    eax4 = fun_419600(*reinterpret_cast<unsigned char*>(&v2), 0x107, 1, ebp3);
    return eax4;
}

void fun_424093() {
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
    signed char* eax2023;
    signed char* eax2024;
    signed char al2025;
    signed char* eax2026;
    signed char* eax2027;
    signed char al2028;
    signed char* eax2029;
    signed char* eax2030;
    signed char al2031;
    signed char* eax2032;
    signed char* eax2033;
    signed char al2034;
    signed char* eax2035;
    signed char* eax2036;
    signed char al2037;
    signed char* eax2038;
    signed char* eax2039;
    signed char al2040;
    signed char* eax2041;
    signed char* eax2042;
    signed char al2043;
    signed char* eax2044;
    signed char* eax2045;
    signed char al2046;
    signed char* eax2047;
    signed char* eax2048;
    signed char al2049;
    signed char* eax2050;
    signed char* eax2051;
    signed char al2052;
    signed char* eax2053;
    signed char* eax2054;
    signed char al2055;
    signed char* eax2056;
    signed char* eax2057;
    signed char al2058;
    signed char* eax2059;
    signed char* eax2060;
    signed char al2061;
    signed char* eax2062;
    signed char* eax2063;
    signed char al2064;
    signed char* eax2065;
    signed char* eax2066;
    signed char al2067;
    signed char* eax2068;
    signed char* eax2069;
    signed char al2070;
    signed char* eax2071;
    signed char* eax2072;
    signed char al2073;
    signed char* eax2074;
    signed char* eax2075;
    signed char al2076;
    signed char* eax2077;
    signed char* eax2078;
    signed char al2079;
    signed char* eax2080;
    signed char* eax2081;
    signed char al2082;
    signed char* eax2083;
    signed char* eax2084;
    signed char al2085;
    signed char* eax2086;
    signed char* eax2087;
    signed char al2088;
    signed char* eax2089;
    signed char* eax2090;
    signed char al2091;
    signed char* eax2092;
    signed char* eax2093;
    signed char al2094;
    signed char* eax2095;
    signed char* eax2096;
    signed char al2097;
    signed char* eax2098;
    signed char* eax2099;
    signed char al2100;
    signed char* eax2101;
    signed char* eax2102;
    signed char al2103;
    signed char* eax2104;
    signed char* eax2105;
    signed char al2106;
    signed char* eax2107;
    signed char* eax2108;
    signed char al2109;
    signed char* eax2110;
    signed char* eax2111;
    signed char al2112;
    signed char* eax2113;
    signed char* eax2114;
    signed char al2115;
    signed char* eax2116;
    signed char* eax2117;
    signed char al2118;
    signed char* eax2119;
    signed char* eax2120;
    signed char al2121;
    signed char* eax2122;
    signed char* eax2123;
    signed char al2124;
    signed char* eax2125;
    signed char* eax2126;
    signed char al2127;
    signed char* eax2128;
    signed char* eax2129;
    signed char al2130;
    signed char* eax2131;
    signed char* eax2132;
    signed char al2133;
    signed char* eax2134;
    signed char* eax2135;
    signed char al2136;
    signed char* eax2137;
    signed char* eax2138;
    signed char al2139;
    signed char* eax2140;
    signed char* eax2141;
    signed char al2142;
    signed char* eax2143;
    signed char* eax2144;
    signed char al2145;
    signed char* eax2146;
    signed char* eax2147;
    signed char al2148;
    signed char* eax2149;
    signed char* eax2150;
    signed char al2151;
    signed char* eax2152;
    signed char* eax2153;
    signed char al2154;
    signed char* eax2155;
    signed char* eax2156;
    signed char al2157;
    signed char* eax2158;
    signed char* eax2159;
    signed char al2160;
    signed char* eax2161;
    signed char* eax2162;
    signed char al2163;
    signed char* eax2164;
    signed char* eax2165;
    signed char al2166;
    signed char* eax2167;
    signed char* eax2168;
    signed char al2169;
    signed char* eax2170;
    signed char* eax2171;
    signed char al2172;
    signed char* eax2173;
    signed char* eax2174;
    signed char al2175;
    signed char* eax2176;
    signed char* eax2177;
    signed char al2178;
    signed char* eax2179;
    signed char* eax2180;
    signed char al2181;
    signed char* eax2182;
    signed char* eax2183;
    signed char al2184;
    signed char* eax2185;
    signed char* eax2186;
    signed char al2187;
    signed char* eax2188;
    signed char* eax2189;
    signed char al2190;
    signed char* eax2191;
    signed char* eax2192;
    signed char al2193;
    signed char* eax2194;
    signed char* eax2195;
    signed char al2196;
    signed char* eax2197;
    signed char* eax2198;
    signed char al2199;
    signed char* eax2200;
    signed char* eax2201;
    signed char al2202;
    signed char* eax2203;
    signed char* eax2204;
    signed char al2205;
    signed char* eax2206;
    signed char* eax2207;
    signed char al2208;
    signed char* eax2209;
    signed char* eax2210;
    signed char al2211;
    signed char* eax2212;
    signed char* eax2213;
    signed char al2214;
    signed char* eax2215;
    signed char* eax2216;
    signed char al2217;
    signed char* eax2218;
    signed char* eax2219;
    signed char al2220;
    signed char* eax2221;
    signed char* eax2222;
    signed char al2223;
    signed char* eax2224;
    signed char* eax2225;
    signed char al2226;
    signed char* eax2227;
    signed char* eax2228;
    signed char al2229;
    signed char* eax2230;
    signed char* eax2231;
    signed char al2232;
    signed char* eax2233;
    signed char* eax2234;
    signed char al2235;
    signed char* eax2236;
    signed char* eax2237;
    signed char al2238;
    signed char* eax2239;
    signed char* eax2240;
    signed char al2241;
    signed char* eax2242;
    signed char* eax2243;
    signed char al2244;
    signed char* eax2245;
    signed char* eax2246;
    signed char al2247;
    signed char* eax2248;
    signed char* eax2249;
    signed char al2250;
    signed char* eax2251;
    signed char* eax2252;
    signed char al2253;
    signed char* eax2254;
    signed char* eax2255;
    signed char al2256;
    signed char* eax2257;
    signed char* eax2258;
    signed char al2259;
    signed char* eax2260;
    signed char* eax2261;
    signed char al2262;
    signed char* eax2263;
    signed char* eax2264;
    signed char al2265;
    signed char* eax2266;
    signed char* eax2267;
    signed char al2268;
    signed char* eax2269;
    signed char* eax2270;
    signed char al2271;
    signed char* eax2272;
    signed char* eax2273;
    signed char al2274;
    signed char* eax2275;
    signed char* eax2276;
    signed char al2277;
    signed char* eax2278;
    signed char* eax2279;
    signed char al2280;
    signed char* eax2281;
    signed char* eax2282;
    signed char al2283;
    signed char* eax2284;
    signed char* eax2285;
    signed char al2286;
    signed char* eax2287;
    signed char* eax2288;
    signed char al2289;
    signed char* eax2290;
    signed char* eax2291;
    signed char al2292;
    signed char* eax2293;
    signed char* eax2294;
    signed char al2295;
    signed char* eax2296;
    signed char* eax2297;
    signed char al2298;
    signed char* eax2299;
    signed char* eax2300;
    signed char al2301;
    signed char* eax2302;
    signed char* eax2303;
    signed char al2304;
    signed char* eax2305;
    signed char* eax2306;
    signed char al2307;
    signed char* eax2308;
    signed char* eax2309;
    signed char al2310;
    signed char* eax2311;
    signed char* eax2312;
    signed char al2313;
    signed char* eax2314;
    signed char* eax2315;
    signed char al2316;
    signed char* eax2317;
    signed char* eax2318;
    signed char al2319;
    signed char* eax2320;
    signed char* eax2321;
    signed char al2322;
    signed char* eax2323;
    signed char* eax2324;
    signed char al2325;
    signed char* eax2326;
    signed char* eax2327;
    signed char al2328;
    signed char* eax2329;
    signed char* eax2330;
    signed char al2331;
    signed char* eax2332;
    signed char* eax2333;
    signed char al2334;
    signed char* eax2335;
    signed char* eax2336;
    signed char al2337;
    signed char* eax2338;
    signed char* eax2339;
    signed char al2340;
    signed char* eax2341;
    signed char* eax2342;
    signed char al2343;
    signed char* eax2344;
    signed char* eax2345;
    signed char al2346;
    signed char* eax2347;
    signed char* eax2348;
    signed char al2349;
    signed char* eax2350;
    signed char* eax2351;
    signed char al2352;
    signed char* eax2353;
    signed char* eax2354;
    signed char al2355;
    signed char* eax2356;
    signed char* eax2357;
    signed char al2358;
    signed char* eax2359;
    signed char* eax2360;
    signed char al2361;
    signed char* eax2362;
    signed char* eax2363;
    signed char al2364;
    signed char* eax2365;
    signed char* eax2366;
    signed char al2367;
    signed char* eax2368;
    signed char* eax2369;
    signed char al2370;
    signed char* eax2371;
    signed char* eax2372;
    signed char al2373;
    signed char* eax2374;
    signed char* eax2375;
    signed char al2376;
    signed char* eax2377;
    signed char* eax2378;
    signed char al2379;
    signed char* eax2380;
    signed char* eax2381;
    signed char al2382;
    signed char* eax2383;
    signed char* eax2384;
    signed char al2385;
    signed char* eax2386;
    signed char* eax2387;
    signed char al2388;
    signed char* eax2389;
    signed char* eax2390;
    signed char al2391;
    signed char* eax2392;
    signed char* eax2393;
    signed char al2394;
    signed char* eax2395;
    signed char* eax2396;
    signed char al2397;
    signed char* eax2398;
    signed char* eax2399;
    signed char al2400;
    signed char* eax2401;
    signed char* eax2402;
    signed char al2403;
    signed char* eax2404;
    signed char* eax2405;
    signed char al2406;
    signed char* eax2407;
    signed char* eax2408;
    signed char al2409;
    signed char* eax2410;
    signed char* eax2411;
    signed char al2412;
    signed char* eax2413;
    signed char* eax2414;
    signed char al2415;
    signed char* eax2416;
    signed char* eax2417;
    signed char al2418;
    signed char* eax2419;
    signed char* eax2420;
    signed char al2421;
    signed char* eax2422;
    signed char* eax2423;
    signed char al2424;
    signed char* eax2425;
    signed char* eax2426;
    signed char al2427;
    signed char* eax2428;
    signed char* eax2429;
    signed char al2430;
    signed char* eax2431;
    signed char* eax2432;
    signed char al2433;
    signed char* eax2434;
    signed char* eax2435;
    signed char al2436;
    signed char* eax2437;
    signed char* eax2438;
    signed char al2439;
    signed char* eax2440;
    signed char* eax2441;
    signed char al2442;
    signed char* eax2443;
    signed char* eax2444;
    signed char al2445;
    signed char* eax2446;
    signed char* eax2447;
    signed char al2448;
    signed char* eax2449;
    signed char* eax2450;
    signed char al2451;
    signed char* eax2452;
    signed char* eax2453;
    signed char al2454;
    signed char* eax2455;
    signed char* eax2456;
    signed char al2457;
    signed char* eax2458;
    signed char* eax2459;
    signed char al2460;
    signed char* eax2461;
    signed char* eax2462;
    signed char al2463;
    signed char* eax2464;
    signed char* eax2465;
    signed char al2466;
    signed char* eax2467;
    signed char* eax2468;
    signed char al2469;
    signed char* eax2470;
    signed char* eax2471;
    signed char al2472;
    signed char* eax2473;
    signed char* eax2474;
    signed char al2475;
    signed char* eax2476;
    signed char* eax2477;
    signed char al2478;
    signed char* eax2479;
    signed char* eax2480;
    signed char al2481;
    signed char* eax2482;
    signed char* eax2483;
    signed char al2484;
    signed char* eax2485;
    signed char* eax2486;
    signed char al2487;
    signed char* eax2488;
    signed char* eax2489;
    signed char al2490;
    signed char* eax2491;
    signed char* eax2492;
    signed char al2493;
    signed char* eax2494;
    signed char* eax2495;
    signed char al2496;
    signed char* eax2497;
    signed char* eax2498;
    signed char al2499;
    signed char* eax2500;
    signed char* eax2501;
    signed char al2502;
    signed char* eax2503;
    signed char* eax2504;
    signed char al2505;
    signed char* eax2506;
    signed char* eax2507;
    signed char al2508;
    signed char* eax2509;
    signed char* eax2510;
    signed char al2511;
    signed char* eax2512;
    signed char* eax2513;
    signed char al2514;
    signed char* eax2515;
    signed char* eax2516;
    signed char al2517;
    signed char* eax2518;
    signed char* eax2519;
    signed char al2520;
    signed char* eax2521;
    signed char* eax2522;
    signed char al2523;
    signed char* eax2524;
    signed char* eax2525;
    signed char al2526;
    signed char* eax2527;
    signed char* eax2528;
    signed char al2529;
    signed char* eax2530;
    signed char* eax2531;
    signed char al2532;
    signed char* eax2533;
    signed char* eax2534;
    signed char al2535;
    signed char* eax2536;
    signed char* eax2537;
    signed char al2538;
    signed char* eax2539;
    signed char* eax2540;
    signed char al2541;
    signed char* eax2542;
    signed char* eax2543;
    signed char al2544;
    signed char* eax2545;
    signed char* eax2546;
    signed char al2547;
    signed char* eax2548;
    signed char* eax2549;
    signed char al2550;
    signed char* eax2551;
    signed char* eax2552;
    signed char al2553;
    signed char* eax2554;
    signed char* eax2555;
    signed char al2556;
    signed char* eax2557;
    signed char* eax2558;
    signed char al2559;
    signed char* eax2560;
    signed char* eax2561;
    signed char al2562;
    signed char* eax2563;
    signed char* eax2564;
    signed char al2565;
    signed char* eax2566;
    signed char* eax2567;
    signed char al2568;
    signed char* eax2569;
    signed char* eax2570;
    signed char al2571;
    signed char* eax2572;
    signed char* eax2573;
    signed char al2574;
    signed char* eax2575;
    signed char* eax2576;
    signed char al2577;
    signed char* eax2578;
    signed char* eax2579;
    signed char al2580;
    signed char* eax2581;
    signed char* eax2582;
    signed char al2583;
    signed char* eax2584;
    signed char* eax2585;
    signed char al2586;
    signed char* eax2587;
    signed char* eax2588;
    signed char al2589;
    signed char* eax2590;
    signed char* eax2591;
    signed char al2592;
    signed char* eax2593;
    signed char* eax2594;
    signed char al2595;
    signed char* eax2596;
    signed char* eax2597;
    signed char al2598;
    signed char* eax2599;
    signed char* eax2600;
    signed char al2601;
    signed char* eax2602;
    signed char* eax2603;
    signed char al2604;
    signed char* eax2605;
    signed char* eax2606;
    signed char al2607;
    signed char* eax2608;
    signed char* eax2609;
    signed char al2610;
    signed char* eax2611;
    signed char* eax2612;
    signed char al2613;
    signed char* eax2614;
    signed char* eax2615;
    signed char al2616;
    signed char* eax2617;
    signed char* eax2618;
    signed char al2619;
    signed char* eax2620;
    signed char* eax2621;
    signed char al2622;
    signed char* eax2623;
    signed char* eax2624;
    signed char al2625;
    signed char* eax2626;
    signed char* eax2627;
    signed char al2628;
    signed char* eax2629;
    signed char* eax2630;
    signed char al2631;
    signed char* eax2632;
    signed char* eax2633;
    signed char al2634;
    signed char* eax2635;
    signed char* eax2636;
    signed char al2637;
    signed char* eax2638;
    signed char* eax2639;
    signed char al2640;
    signed char* eax2641;
    signed char* eax2642;
    signed char al2643;
    signed char* eax2644;
    signed char* eax2645;
    signed char al2646;
    signed char* eax2647;
    signed char* eax2648;
    signed char al2649;
    signed char* eax2650;
    signed char* eax2651;
    signed char al2652;
    signed char* eax2653;
    signed char* eax2654;
    signed char al2655;
    signed char* eax2656;
    signed char* eax2657;
    signed char al2658;
    signed char* eax2659;
    signed char* eax2660;
    signed char al2661;
    signed char* eax2662;
    signed char* eax2663;
    signed char al2664;
    signed char* eax2665;
    signed char* eax2666;
    signed char al2667;
    signed char* eax2668;
    signed char* eax2669;
    signed char al2670;
    signed char* eax2671;
    signed char* eax2672;
    signed char al2673;
    signed char* eax2674;
    signed char* eax2675;
    signed char al2676;
    signed char* eax2677;
    signed char* eax2678;
    signed char al2679;
    signed char* eax2680;
    signed char* eax2681;
    signed char al2682;
    signed char* eax2683;
    signed char* eax2684;
    signed char al2685;
    signed char* eax2686;
    signed char* eax2687;
    signed char al2688;
    signed char* eax2689;
    signed char* eax2690;
    signed char al2691;
    signed char* eax2692;
    signed char* eax2693;
    signed char al2694;
    signed char* eax2695;
    signed char* eax2696;
    signed char al2697;
    signed char* eax2698;
    signed char* eax2699;
    signed char al2700;
    signed char* eax2701;
    signed char* eax2702;
    signed char al2703;
    signed char* eax2704;
    signed char* eax2705;
    signed char al2706;
    signed char* eax2707;
    signed char* eax2708;
    signed char al2709;
    signed char* eax2710;
    signed char* eax2711;
    signed char al2712;
    signed char* eax2713;
    signed char* eax2714;
    signed char al2715;
    signed char* eax2716;
    signed char* eax2717;
    signed char al2718;
    signed char* eax2719;
    signed char* eax2720;
    signed char al2721;
    signed char* eax2722;
    signed char* eax2723;
    signed char al2724;
    signed char* eax2725;
    signed char* eax2726;
    signed char al2727;
    signed char* eax2728;
    signed char* eax2729;
    signed char al2730;
    signed char* eax2731;
    signed char* eax2732;
    signed char al2733;
    signed char* eax2734;
    signed char* eax2735;
    signed char al2736;
    signed char* eax2737;
    signed char* eax2738;
    signed char al2739;
    signed char* eax2740;
    signed char* eax2741;
    signed char al2742;
    signed char* eax2743;
    signed char* eax2744;
    signed char al2745;
    signed char* eax2746;
    signed char* eax2747;
    signed char al2748;
    signed char* eax2749;
    signed char* eax2750;
    signed char al2751;
    signed char* eax2752;
    signed char* eax2753;
    signed char al2754;
    signed char* eax2755;
    signed char* eax2756;
    signed char al2757;
    signed char* eax2758;
    signed char* eax2759;
    signed char al2760;
    signed char* eax2761;
    signed char* eax2762;
    signed char al2763;
    signed char* eax2764;
    signed char* eax2765;
    signed char al2766;
    signed char* eax2767;
    signed char* eax2768;
    signed char al2769;
    signed char* eax2770;
    signed char* eax2771;
    signed char al2772;
    signed char* eax2773;
    signed char* eax2774;
    signed char al2775;
    signed char* eax2776;
    signed char* eax2777;
    signed char al2778;
    signed char* eax2779;
    signed char* eax2780;
    signed char al2781;
    signed char* eax2782;
    signed char* eax2783;
    signed char al2784;
    signed char* eax2785;
    signed char* eax2786;
    signed char al2787;
    signed char* eax2788;
    signed char* eax2789;
    signed char al2790;
    signed char* eax2791;
    signed char* eax2792;
    signed char al2793;
    signed char* eax2794;
    signed char* eax2795;
    signed char al2796;
    signed char* eax2797;
    signed char* eax2798;
    signed char al2799;
    signed char* eax2800;
    signed char* eax2801;
    signed char al2802;
    signed char* eax2803;
    signed char* eax2804;
    signed char al2805;
    signed char* eax2806;
    signed char* eax2807;
    signed char al2808;
    signed char* eax2809;
    signed char* eax2810;
    signed char al2811;
    signed char* eax2812;
    signed char* eax2813;
    signed char al2814;
    signed char* eax2815;
    signed char* eax2816;
    signed char al2817;
    signed char* eax2818;
    signed char* eax2819;
    signed char al2820;
    signed char* eax2821;
    signed char* eax2822;
    signed char al2823;
    signed char* eax2824;
    signed char* eax2825;
    signed char al2826;
    signed char* eax2827;
    signed char* eax2828;
    signed char al2829;
    signed char* eax2830;
    signed char* eax2831;
    signed char al2832;
    signed char* eax2833;
    signed char* eax2834;
    signed char al2835;
    signed char* eax2836;
    signed char* eax2837;
    signed char al2838;
    signed char* eax2839;
    signed char* eax2840;
    signed char al2841;
    signed char* eax2842;
    signed char* eax2843;
    signed char al2844;
    signed char* eax2845;
    signed char* eax2846;
    signed char al2847;
    signed char* eax2848;
    signed char* eax2849;
    signed char al2850;
    signed char* eax2851;
    signed char* eax2852;
    signed char al2853;
    signed char* eax2854;
    signed char* eax2855;
    signed char al2856;
    signed char* eax2857;
    signed char* eax2858;
    signed char al2859;
    signed char* eax2860;
    signed char* eax2861;
    signed char al2862;
    signed char* eax2863;
    signed char* eax2864;
    signed char al2865;
    signed char* eax2866;
    signed char* eax2867;
    signed char al2868;
    signed char* eax2869;
    signed char* eax2870;
    signed char al2871;
    signed char* eax2872;
    signed char* eax2873;
    signed char al2874;
    signed char* eax2875;
    signed char* eax2876;
    signed char al2877;
    signed char* eax2878;
    signed char* eax2879;
    signed char al2880;
    signed char* eax2881;
    signed char* eax2882;
    signed char al2883;
    signed char* eax2884;
    signed char* eax2885;
    signed char al2886;
    signed char* eax2887;
    signed char* eax2888;
    signed char al2889;
    signed char* eax2890;
    signed char* eax2891;
    signed char al2892;
    signed char* eax2893;
    signed char* eax2894;
    signed char al2895;
    signed char* eax2896;
    signed char* eax2897;
    signed char al2898;
    signed char* eax2899;
    signed char* eax2900;
    signed char al2901;
    signed char* eax2902;
    signed char* eax2903;
    signed char al2904;
    signed char* eax2905;
    signed char* eax2906;
    signed char al2907;
    signed char* eax2908;
    signed char* eax2909;
    signed char al2910;
    signed char* eax2911;
    signed char* eax2912;
    signed char al2913;
    signed char* eax2914;
    signed char* eax2915;
    signed char al2916;
    signed char* eax2917;
    signed char* eax2918;
    signed char al2919;
    signed char* eax2920;
    signed char* eax2921;
    signed char al2922;
    signed char* eax2923;
    signed char* eax2924;
    signed char al2925;
    signed char* eax2926;
    signed char* eax2927;
    signed char al2928;
    signed char* eax2929;
    signed char* eax2930;
    signed char al2931;
    signed char* eax2932;
    signed char* eax2933;
    signed char al2934;
    signed char* eax2935;
    signed char* eax2936;
    signed char al2937;
    signed char* eax2938;
    signed char* eax2939;
    signed char al2940;
    signed char* eax2941;
    signed char* eax2942;
    signed char al2943;
    signed char* eax2944;
    signed char* eax2945;
    signed char al2946;
    signed char* eax2947;
    signed char* eax2948;
    signed char al2949;
    signed char* eax2950;
    signed char* eax2951;
    signed char al2952;
    signed char* eax2953;
    signed char* eax2954;
    signed char al2955;
    signed char* eax2956;
    signed char* eax2957;
    signed char al2958;
    signed char* eax2959;
    signed char* eax2960;
    signed char al2961;
    signed char* eax2962;
    signed char* eax2963;
    signed char al2964;
    signed char* eax2965;
    signed char* eax2966;
    signed char al2967;
    signed char* eax2968;
    signed char* eax2969;
    signed char al2970;
    signed char* eax2971;
    signed char* eax2972;
    signed char al2973;
    signed char* eax2974;
    signed char* eax2975;
    signed char al2976;
    signed char* eax2977;
    signed char* eax2978;
    signed char al2979;
    signed char* eax2980;
    signed char* eax2981;
    signed char al2982;
    signed char* eax2983;
    signed char* eax2984;
    signed char al2985;
    signed char* eax2986;
    signed char* eax2987;
    signed char al2988;
    signed char* eax2989;
    signed char* eax2990;
    signed char al2991;
    signed char* eax2992;
    signed char* eax2993;
    signed char al2994;
    signed char* eax2995;
    signed char* eax2996;
    signed char al2997;
    signed char* eax2998;
    signed char* eax2999;
    signed char al3000;
    signed char* eax3001;
    signed char* eax3002;
    signed char al3003;
    signed char* eax3004;
    signed char* eax3005;
    signed char al3006;
    signed char* eax3007;
    signed char* eax3008;
    signed char al3009;
    signed char* eax3010;
    signed char* eax3011;
    signed char al3012;
    signed char* eax3013;
    signed char* eax3014;
    signed char al3015;
    signed char* eax3016;
    signed char* eax3017;
    signed char al3018;
    signed char* eax3019;
    signed char* eax3020;
    signed char al3021;
    signed char* eax3022;
    signed char* eax3023;
    signed char al3024;
    signed char* eax3025;
    signed char* eax3026;
    signed char al3027;
    signed char* eax3028;
    signed char* eax3029;
    signed char al3030;
    signed char* eax3031;
    signed char* eax3032;
    signed char al3033;
    signed char* eax3034;
    signed char* eax3035;
    signed char al3036;
    signed char* eax3037;
    signed char* eax3038;
    signed char al3039;
    signed char* eax3040;
    signed char* eax3041;
    signed char al3042;
    signed char* eax3043;
    signed char* eax3044;
    signed char al3045;
    signed char* eax3046;
    signed char* eax3047;
    signed char al3048;
    signed char* eax3049;
    signed char* eax3050;
    signed char al3051;
    signed char* eax3052;
    signed char* eax3053;
    signed char al3054;
    signed char* eax3055;
    signed char* eax3056;
    signed char al3057;
    signed char* eax3058;
    signed char* eax3059;
    signed char al3060;
    signed char* eax3061;
    signed char* eax3062;
    signed char al3063;
    signed char* eax3064;
    signed char* eax3065;
    signed char al3066;
    signed char* eax3067;
    signed char* eax3068;
    signed char al3069;
    signed char* eax3070;
    signed char* eax3071;
    signed char al3072;
    signed char* eax3073;
    signed char* eax3074;
    signed char al3075;
    signed char* eax3076;
    signed char* eax3077;
    signed char al3078;
    signed char* eax3079;
    signed char* eax3080;
    signed char al3081;
    signed char* eax3082;
    signed char* eax3083;
    signed char al3084;
    signed char* eax3085;
    signed char* eax3086;
    signed char al3087;
    signed char* eax3088;
    signed char* eax3089;
    signed char al3090;
    signed char* eax3091;
    signed char* eax3092;
    signed char al3093;
    signed char* eax3094;
    signed char* eax3095;
    signed char al3096;
    signed char* eax3097;
    signed char* eax3098;
    signed char al3099;
    signed char* eax3100;
    signed char* eax3101;
    signed char al3102;
    signed char* eax3103;
    signed char* eax3104;
    signed char al3105;
    signed char* eax3106;
    signed char* eax3107;
    signed char al3108;
    signed char* eax3109;
    signed char* eax3110;
    signed char al3111;
    signed char* eax3112;
    signed char* eax3113;
    signed char al3114;
    signed char* eax3115;
    signed char* eax3116;
    signed char al3117;
    signed char* eax3118;
    signed char* eax3119;
    signed char al3120;
    signed char* eax3121;
    signed char* eax3122;
    signed char al3123;
    signed char* eax3124;
    signed char* eax3125;
    signed char al3126;
    signed char* eax3127;
    signed char* eax3128;
    signed char al3129;
    signed char* eax3130;
    signed char* eax3131;
    signed char al3132;
    signed char* eax3133;
    signed char* eax3134;
    signed char al3135;
    signed char* eax3136;
    signed char* eax3137;
    signed char al3138;
    signed char* eax3139;
    signed char* eax3140;
    signed char al3141;
    signed char* eax3142;
    signed char* eax3143;
    signed char al3144;
    signed char* eax3145;
    signed char* eax3146;
    signed char al3147;
    signed char* eax3148;
    signed char* eax3149;
    signed char al3150;
    signed char* eax3151;
    signed char* eax3152;
    signed char al3153;
    signed char* eax3154;
    signed char* eax3155;
    signed char al3156;
    signed char* eax3157;
    signed char* eax3158;
    signed char al3159;
    signed char* eax3160;
    signed char* eax3161;
    signed char al3162;
    signed char* eax3163;
    signed char* eax3164;
    signed char al3165;
    signed char* eax3166;
    signed char* eax3167;
    signed char al3168;
    signed char* eax3169;
    signed char* eax3170;
    signed char al3171;
    signed char* eax3172;
    signed char* eax3173;
    signed char al3174;
    signed char* eax3175;
    signed char* eax3176;
    signed char al3177;
    signed char* eax3178;
    signed char* eax3179;
    signed char al3180;
    signed char* eax3181;
    signed char* eax3182;
    signed char al3183;
    signed char* eax3184;
    signed char* eax3185;
    signed char al3186;
    signed char* eax3187;
    signed char* eax3188;
    signed char al3189;
    signed char* eax3190;
    signed char* eax3191;
    signed char al3192;
    signed char* eax3193;
    signed char* eax3194;
    signed char al3195;
    signed char* eax3196;
    signed char* eax3197;
    signed char al3198;
    signed char* eax3199;
    signed char* eax3200;
    signed char al3201;
    signed char* eax3202;
    signed char* eax3203;
    signed char al3204;
    signed char* eax3205;
    signed char* eax3206;
    signed char al3207;
    signed char* eax3208;
    signed char* eax3209;
    signed char al3210;
    signed char* eax3211;
    signed char* eax3212;
    signed char al3213;
    signed char* eax3214;
    signed char* eax3215;
    signed char al3216;
    signed char* eax3217;
    signed char* eax3218;
    signed char al3219;
    signed char* eax3220;
    signed char* eax3221;
    signed char al3222;
    signed char* eax3223;
    signed char* eax3224;
    signed char al3225;
    signed char* eax3226;
    signed char* eax3227;
    signed char al3228;
    signed char* eax3229;
    signed char* eax3230;
    signed char al3231;
    signed char* eax3232;
    signed char* eax3233;
    signed char al3234;
    signed char* eax3235;
    signed char* eax3236;
    signed char al3237;
    signed char* eax3238;
    signed char* eax3239;
    signed char al3240;
    signed char* eax3241;
    signed char* eax3242;
    signed char al3243;
    signed char* eax3244;
    signed char* eax3245;
    signed char al3246;
    signed char* eax3247;
    signed char* eax3248;
    signed char al3249;
    signed char* eax3250;
    signed char* eax3251;
    signed char al3252;
    signed char* eax3253;
    signed char* eax3254;
    signed char al3255;
    signed char* eax3256;
    signed char* eax3257;
    signed char al3258;
    signed char* eax3259;
    signed char* eax3260;
    signed char al3261;
    signed char* eax3262;
    signed char* eax3263;
    signed char al3264;
    signed char* eax3265;
    signed char* eax3266;
    signed char al3267;
    signed char* eax3268;
    signed char* eax3269;
    signed char al3270;
    signed char* eax3271;
    signed char* eax3272;
    signed char al3273;
    signed char* eax3274;
    signed char* eax3275;
    signed char al3276;
    signed char* eax3277;
    signed char* eax3278;
    signed char al3279;
    signed char* eax3280;
    signed char* eax3281;
    signed char al3282;
    signed char* eax3283;
    signed char* eax3284;
    signed char al3285;
    signed char* eax3286;
    signed char* eax3287;
    signed char al3288;
    signed char* eax3289;
    signed char* eax3290;
    signed char al3291;
    signed char* eax3292;
    signed char* eax3293;
    signed char al3294;
    signed char* eax3295;
    signed char* eax3296;
    signed char al3297;
    signed char* eax3298;
    signed char* eax3299;
    signed char al3300;
    signed char* eax3301;
    signed char* eax3302;
    signed char al3303;
    signed char* eax3304;
    signed char* eax3305;
    signed char al3306;
    signed char* eax3307;
    signed char* eax3308;
    signed char al3309;
    signed char* eax3310;
    signed char* eax3311;
    signed char al3312;
    signed char* eax3313;
    signed char* eax3314;
    signed char al3315;
    signed char* eax3316;
    signed char* eax3317;
    signed char al3318;
    signed char* eax3319;
    signed char* eax3320;
    signed char al3321;
    signed char* eax3322;
    signed char* eax3323;
    signed char al3324;
    signed char* eax3325;
    signed char* eax3326;
    signed char al3327;
    signed char* eax3328;
    signed char* eax3329;
    signed char al3330;
    signed char* eax3331;
    signed char* eax3332;
    signed char al3333;
    signed char* eax3334;
    signed char* eax3335;
    signed char al3336;
    signed char* eax3337;
    signed char* eax3338;
    signed char al3339;
    signed char* eax3340;
    signed char* eax3341;
    signed char al3342;
    signed char* eax3343;
    signed char* eax3344;
    signed char al3345;
    signed char* eax3346;
    signed char* eax3347;
    signed char al3348;
    signed char* eax3349;
    signed char* eax3350;
    signed char al3351;
    signed char* eax3352;
    signed char* eax3353;
    signed char al3354;
    signed char* eax3355;
    signed char* eax3356;
    signed char al3357;
    signed char* eax3358;
    signed char* eax3359;
    signed char al3360;
    signed char* eax3361;
    signed char* eax3362;
    signed char al3363;
    signed char* eax3364;
    signed char* eax3365;
    signed char al3366;
    signed char* eax3367;
    signed char* eax3368;
    signed char al3369;
    signed char* eax3370;
    signed char* eax3371;
    signed char al3372;
    signed char* eax3373;
    signed char* eax3374;
    signed char al3375;
    signed char* eax3376;
    signed char* eax3377;
    signed char al3378;
    signed char* eax3379;
    signed char* eax3380;
    signed char al3381;
    signed char* eax3382;
    signed char* eax3383;
    signed char al3384;
    signed char* eax3385;
    signed char* eax3386;
    signed char al3387;
    signed char* eax3388;
    signed char* eax3389;
    signed char al3390;
    signed char* eax3391;
    signed char* eax3392;
    signed char al3393;
    signed char* eax3394;
    signed char* eax3395;
    signed char al3396;
    signed char* eax3397;
    signed char* eax3398;
    signed char al3399;
    signed char* eax3400;
    signed char* eax3401;
    signed char al3402;
    signed char* eax3403;
    signed char* eax3404;
    signed char al3405;
    signed char* eax3406;
    signed char* eax3407;
    signed char al3408;
    signed char* eax3409;
    signed char* eax3410;
    signed char al3411;
    signed char* eax3412;
    signed char* eax3413;
    signed char al3414;
    signed char* eax3415;
    signed char* eax3416;
    signed char al3417;
    signed char* eax3418;
    signed char* eax3419;
    signed char al3420;
    signed char* eax3421;
    signed char* eax3422;
    signed char al3423;
    signed char* eax3424;
    signed char* eax3425;
    signed char al3426;
    signed char* eax3427;
    signed char* eax3428;
    signed char al3429;
    signed char* eax3430;
    signed char* eax3431;
    signed char al3432;
    signed char* eax3433;
    signed char* eax3434;
    signed char al3435;
    signed char* eax3436;
    signed char* eax3437;
    signed char al3438;
    signed char* eax3439;
    signed char* eax3440;
    signed char al3441;
    signed char* eax3442;
    signed char* eax3443;
    signed char al3444;
    signed char* eax3445;
    signed char* eax3446;
    signed char al3447;
    signed char* eax3448;
    signed char* eax3449;
    signed char al3450;
    signed char* eax3451;
    signed char* eax3452;
    signed char al3453;
    signed char* eax3454;
    signed char* eax3455;
    signed char al3456;
    signed char* eax3457;
    signed char* eax3458;
    signed char al3459;
    signed char* eax3460;
    signed char* eax3461;
    signed char al3462;
    signed char* eax3463;
    signed char* eax3464;
    signed char al3465;
    signed char* eax3466;
    signed char* eax3467;
    signed char al3468;
    signed char* eax3469;
    signed char* eax3470;
    signed char al3471;
    signed char* eax3472;
    signed char* eax3473;
    signed char al3474;
    signed char* eax3475;
    signed char* eax3476;
    signed char al3477;
    signed char* eax3478;
    signed char* eax3479;
    signed char al3480;
    signed char* eax3481;
    signed char* eax3482;
    signed char al3483;
    signed char* eax3484;
    signed char* eax3485;
    signed char al3486;
    signed char* eax3487;
    signed char* eax3488;
    signed char al3489;
    signed char* eax3490;
    signed char* eax3491;
    signed char al3492;
    signed char* eax3493;
    signed char* eax3494;
    signed char al3495;
    signed char* eax3496;
    signed char* eax3497;
    signed char al3498;
    signed char* eax3499;
    signed char* eax3500;
    signed char al3501;
    signed char* eax3502;
    signed char* eax3503;
    signed char al3504;
    signed char* eax3505;
    signed char* eax3506;
    signed char al3507;
    signed char* eax3508;
    signed char* eax3509;
    signed char al3510;
    signed char* eax3511;
    signed char* eax3512;
    signed char al3513;
    signed char* eax3514;
    signed char* eax3515;
    signed char al3516;
    signed char* eax3517;
    signed char* eax3518;
    signed char al3519;
    signed char* eax3520;
    signed char* eax3521;
    signed char al3522;
    signed char* eax3523;
    signed char* eax3524;
    signed char al3525;
    signed char* eax3526;
    signed char* eax3527;
    signed char al3528;
    signed char* eax3529;
    signed char* eax3530;
    signed char al3531;
    signed char* eax3532;
    signed char* eax3533;
    signed char al3534;
    signed char* eax3535;
    signed char* eax3536;
    signed char al3537;
    signed char* eax3538;
    signed char* eax3539;
    signed char al3540;
    signed char* eax3541;
    signed char* eax3542;
    signed char al3543;
    signed char* eax3544;
    signed char* eax3545;
    signed char al3546;
    signed char* eax3547;
    signed char* eax3548;
    signed char al3549;
    signed char* eax3550;
    signed char* eax3551;
    signed char al3552;
    signed char* eax3553;
    signed char* eax3554;
    signed char al3555;
    signed char* eax3556;
    signed char* eax3557;
    signed char al3558;
    signed char* eax3559;
    signed char* eax3560;
    signed char al3561;
    signed char* eax3562;
    signed char* eax3563;
    signed char al3564;
    signed char* eax3565;
    signed char* eax3566;
    signed char al3567;
    signed char* eax3568;
    signed char* eax3569;
    signed char al3570;
    signed char* eax3571;
    signed char* eax3572;
    signed char al3573;
    signed char* eax3574;
    signed char* eax3575;
    signed char al3576;
    signed char* eax3577;
    signed char* eax3578;
    signed char al3579;
    signed char* eax3580;
    signed char* eax3581;
    signed char al3582;
    signed char* eax3583;
    signed char* eax3584;
    signed char al3585;
    signed char* eax3586;
    signed char* eax3587;
    signed char al3588;
    signed char* eax3589;
    signed char* eax3590;
    signed char al3591;
    signed char* eax3592;
    signed char* eax3593;
    signed char al3594;
    signed char* eax3595;
    signed char* eax3596;
    signed char al3597;
    signed char* eax3598;
    signed char* eax3599;
    signed char al3600;
    signed char* eax3601;
    signed char* eax3602;
    signed char al3603;
    signed char* eax3604;
    signed char* eax3605;
    signed char al3606;
    signed char* eax3607;
    signed char* eax3608;
    signed char al3609;
    signed char* eax3610;
    signed char* eax3611;
    signed char al3612;
    signed char* eax3613;
    signed char* eax3614;
    signed char al3615;
    signed char* eax3616;
    signed char* eax3617;
    signed char al3618;
    signed char* eax3619;
    signed char* eax3620;
    signed char al3621;
    signed char* eax3622;
    signed char* eax3623;
    signed char al3624;
    signed char* eax3625;
    signed char* eax3626;
    signed char al3627;
    signed char* eax3628;
    signed char* eax3629;
    signed char al3630;
    signed char* eax3631;
    signed char* eax3632;
    signed char al3633;
    signed char* eax3634;
    signed char* eax3635;
    signed char al3636;
    signed char* eax3637;
    signed char* eax3638;
    signed char al3639;
    signed char* eax3640;
    signed char* eax3641;
    signed char al3642;
    signed char* eax3643;
    signed char* eax3644;
    signed char al3645;
    signed char* eax3646;
    signed char* eax3647;
    signed char al3648;
    signed char* eax3649;
    signed char* eax3650;
    signed char al3651;
    signed char* eax3652;
    signed char* eax3653;
    signed char al3654;
    signed char* eax3655;
    signed char* eax3656;
    signed char al3657;
    signed char* eax3658;
    signed char* eax3659;
    signed char al3660;
    signed char* eax3661;
    signed char* eax3662;
    signed char al3663;
    signed char* eax3664;
    signed char* eax3665;
    signed char al3666;
    signed char* eax3667;
    signed char* eax3668;
    signed char al3669;
    signed char* eax3670;
    signed char* eax3671;
    signed char al3672;
    signed char* eax3673;
    signed char* eax3674;
    signed char al3675;
    signed char* eax3676;
    signed char* eax3677;
    signed char al3678;
    signed char* eax3679;
    signed char* eax3680;
    signed char al3681;
    signed char* eax3682;
    signed char* eax3683;
    signed char al3684;
    signed char* eax3685;
    signed char* eax3686;
    signed char al3687;
    signed char* eax3688;
    signed char* eax3689;
    signed char al3690;
    signed char* eax3691;
    signed char* eax3692;
    signed char al3693;
    signed char* eax3694;
    signed char* eax3695;
    signed char al3696;
    signed char* eax3697;
    signed char* eax3698;
    signed char al3699;
    signed char* eax3700;
    signed char* eax3701;
    signed char al3702;
    signed char* eax3703;
    signed char* eax3704;
    signed char al3705;
    signed char* eax3706;
    signed char* eax3707;
    signed char al3708;
    signed char* eax3709;
    signed char* eax3710;
    signed char al3711;
    signed char* eax3712;
    signed char* eax3713;
    signed char al3714;
    signed char* eax3715;
    signed char* eax3716;
    signed char al3717;
    signed char* eax3718;
    signed char* eax3719;
    signed char al3720;
    signed char* eax3721;
    signed char* eax3722;
    signed char al3723;
    signed char* eax3724;
    signed char* eax3725;
    signed char al3726;
    signed char* eax3727;
    signed char* eax3728;
    signed char al3729;
    signed char* eax3730;
    signed char* eax3731;
    signed char al3732;
    signed char* eax3733;
    signed char* eax3734;
    signed char al3735;
    signed char* eax3736;
    signed char* eax3737;
    signed char al3738;
    signed char* eax3739;
    signed char* eax3740;
    signed char al3741;
    signed char* eax3742;
    signed char* eax3743;
    signed char al3744;
    signed char* eax3745;
    signed char* eax3746;
    signed char al3747;
    signed char* eax3748;
    signed char* eax3749;
    signed char al3750;
    signed char* eax3751;
    signed char* eax3752;
    signed char al3753;
    signed char* eax3754;
    signed char* eax3755;
    signed char al3756;
    signed char* eax3757;
    signed char* eax3758;
    signed char al3759;
    signed char* eax3760;
    signed char* eax3761;
    signed char al3762;
    signed char* eax3763;
    signed char* eax3764;
    signed char al3765;
    signed char* eax3766;
    signed char* eax3767;
    signed char al3768;
    signed char* eax3769;
    signed char* eax3770;
    signed char al3771;
    signed char* eax3772;
    signed char* eax3773;
    signed char al3774;
    signed char* eax3775;
    signed char* eax3776;
    signed char al3777;
    signed char* eax3778;
    signed char* eax3779;
    signed char al3780;
    signed char* eax3781;
    signed char* eax3782;
    signed char al3783;
    signed char* eax3784;
    signed char* eax3785;
    signed char al3786;
    signed char* eax3787;
    signed char* eax3788;
    signed char al3789;
    signed char* eax3790;
    signed char* eax3791;
    signed char al3792;
    signed char* eax3793;
    signed char* eax3794;
    signed char al3795;
    signed char* eax3796;
    signed char* eax3797;
    signed char al3798;
    signed char* eax3799;
    signed char* eax3800;
    signed char al3801;
    signed char* eax3802;
    signed char* eax3803;
    signed char al3804;
    signed char* eax3805;
    signed char* eax3806;
    signed char al3807;
    signed char* eax3808;
    signed char* eax3809;
    signed char al3810;
    signed char* eax3811;
    signed char* eax3812;
    signed char al3813;
    signed char* eax3814;
    signed char* eax3815;
    signed char al3816;
    signed char* eax3817;
    signed char* eax3818;
    signed char al3819;
    signed char* eax3820;
    signed char* eax3821;
    signed char al3822;
    signed char* eax3823;
    signed char* eax3824;
    signed char al3825;
    signed char* eax3826;
    signed char* eax3827;
    signed char al3828;
    signed char* eax3829;
    signed char* eax3830;
    signed char al3831;
    signed char* eax3832;
    signed char* eax3833;
    signed char al3834;
    signed char* eax3835;
    signed char* eax3836;
    signed char al3837;
    signed char* eax3838;
    signed char* eax3839;
    signed char al3840;
    signed char* eax3841;
    signed char* eax3842;
    signed char al3843;
    signed char* eax3844;
    signed char* eax3845;
    signed char al3846;
    signed char* eax3847;
    signed char* eax3848;
    signed char al3849;
    signed char* eax3850;
    signed char* eax3851;
    signed char al3852;
    signed char* eax3853;
    signed char* eax3854;
    signed char al3855;
    signed char* eax3856;
    signed char* eax3857;
    signed char al3858;
    signed char* eax3859;
    signed char* eax3860;
    signed char al3861;
    signed char* eax3862;
    signed char* eax3863;
    signed char al3864;
    signed char* eax3865;
    signed char* eax3866;
    signed char al3867;
    signed char* eax3868;
    signed char* eax3869;
    signed char al3870;
    signed char* eax3871;
    signed char* eax3872;
    signed char al3873;
    signed char* eax3874;
    signed char* eax3875;
    signed char al3876;
    signed char* eax3877;
    signed char* eax3878;
    signed char al3879;
    signed char* eax3880;
    signed char* eax3881;
    signed char al3882;
    signed char* eax3883;
    signed char* eax3884;
    signed char al3885;
    signed char* eax3886;
    signed char* eax3887;
    signed char al3888;
    signed char* eax3889;
    signed char* eax3890;
    signed char al3891;
    signed char* eax3892;
    signed char* eax3893;
    signed char al3894;
    signed char* eax3895;
    signed char* eax3896;
    signed char al3897;
    signed char* eax3898;
    signed char* eax3899;
    signed char al3900;
    signed char* eax3901;
    signed char* eax3902;
    signed char al3903;
    signed char* eax3904;
    signed char* eax3905;
    signed char al3906;
    signed char* eax3907;
    signed char* eax3908;
    signed char al3909;
    signed char* eax3910;
    signed char* eax3911;
    signed char al3912;
    signed char* eax3913;
    signed char* eax3914;
    signed char al3915;
    signed char* eax3916;
    signed char* eax3917;
    signed char al3918;
    signed char* eax3919;
    signed char* eax3920;
    signed char al3921;
    signed char* eax3922;
    signed char* eax3923;
    signed char al3924;
    signed char* eax3925;
    signed char* eax3926;
    signed char al3927;
    signed char* eax3928;
    signed char* eax3929;
    signed char al3930;
    signed char* eax3931;
    signed char* eax3932;
    signed char al3933;
    signed char* eax3934;
    signed char* eax3935;
    signed char al3936;
    signed char* eax3937;
    signed char* eax3938;
    signed char al3939;
    signed char* eax3940;
    signed char* eax3941;
    signed char al3942;
    signed char* eax3943;
    signed char* eax3944;
    signed char al3945;
    signed char* eax3946;
    signed char* eax3947;
    signed char al3948;
    signed char* eax3949;
    signed char* eax3950;
    signed char al3951;
    signed char* eax3952;
    signed char* eax3953;
    signed char al3954;
    signed char* eax3955;
    signed char* eax3956;
    signed char al3957;
    signed char* eax3958;
    signed char* eax3959;
    signed char al3960;
    signed char* eax3961;
    signed char* eax3962;
    signed char al3963;
    signed char* eax3964;
    signed char* eax3965;
    signed char al3966;
    signed char* eax3967;
    signed char* eax3968;
    signed char al3969;
    signed char* eax3970;
    signed char* eax3971;
    signed char al3972;
    signed char* eax3973;
    signed char* eax3974;
    signed char al3975;
    signed char* eax3976;
    signed char* eax3977;
    signed char al3978;
    signed char* eax3979;
    signed char* eax3980;
    signed char al3981;
    signed char* eax3982;
    signed char* eax3983;
    signed char al3984;
    signed char* eax3985;
    signed char* eax3986;
    signed char al3987;
    signed char* eax3988;
    signed char* eax3989;
    signed char al3990;
    signed char* eax3991;
    signed char* eax3992;
    signed char al3993;
    signed char* eax3994;
    signed char* eax3995;
    signed char al3996;
    signed char* eax3997;
    signed char* eax3998;
    signed char al3999;
    signed char* eax4000;
    signed char* eax4001;
    signed char al4002;
    signed char* eax4003;
    signed char* eax4004;
    signed char al4005;
    signed char* eax4006;
    signed char* eax4007;
    signed char al4008;
    signed char* eax4009;
    signed char* eax4010;
    signed char al4011;
    signed char* eax4012;
    signed char* eax4013;
    signed char al4014;
    signed char* eax4015;
    signed char* eax4016;
    signed char al4017;
    signed char* eax4018;
    signed char* eax4019;
    signed char al4020;
    signed char* eax4021;
    signed char* eax4022;
    signed char al4023;
    signed char* eax4024;
    signed char* eax4025;
    signed char al4026;
    signed char* eax4027;
    signed char* eax4028;
    signed char al4029;
    signed char* eax4030;
    signed char* eax4031;
    signed char al4032;
    signed char* eax4033;
    signed char* eax4034;
    signed char al4035;
    signed char* eax4036;
    signed char* eax4037;
    signed char al4038;
    signed char* eax4039;
    signed char* eax4040;
    signed char al4041;
    signed char* eax4042;
    signed char* eax4043;
    signed char al4044;
    signed char* eax4045;
    signed char* eax4046;
    signed char al4047;
    signed char* eax4048;
    signed char* eax4049;
    signed char al4050;
    signed char* eax4051;
    signed char* eax4052;
    signed char al4053;
    signed char* eax4054;
    signed char* eax4055;
    signed char al4056;
    signed char* eax4057;
    signed char* eax4058;
    signed char al4059;
    signed char* eax4060;
    signed char* eax4061;
    signed char al4062;
    signed char* eax4063;
    signed char* eax4064;
    signed char al4065;
    signed char* eax4066;
    signed char* eax4067;
    signed char al4068;
    signed char* eax4069;
    signed char* eax4070;
    signed char al4071;
    signed char* eax4072;
    signed char* eax4073;
    signed char al4074;
    signed char* eax4075;
    signed char* eax4076;
    signed char al4077;
    signed char* eax4078;
    signed char* eax4079;
    signed char al4080;
    signed char* eax4081;
    signed char* eax4082;
    signed char al4083;
    signed char* eax4084;
    signed char* eax4085;
    signed char al4086;
    signed char* eax4087;
    signed char* eax4088;
    signed char al4089;
    signed char* eax4090;
    signed char* eax4091;
    signed char al4092;
    signed char* eax4093;
    signed char* eax4094;
    signed char al4095;
    signed char* eax4096;
    signed char* eax4097;
    signed char al4098;
    signed char* eax4099;
    signed char* eax4100;
    signed char al4101;
    signed char* eax4102;
    signed char* eax4103;
    signed char al4104;
    signed char* eax4105;
    signed char* eax4106;
    signed char al4107;
    signed char* eax4108;
    signed char* eax4109;
    signed char al4110;
    signed char* eax4111;
    signed char* eax4112;
    signed char al4113;
    signed char* eax4114;
    signed char* eax4115;
    signed char al4116;
    signed char* eax4117;
    signed char* eax4118;
    signed char al4119;
    signed char* eax4120;
    signed char* eax4121;
    signed char al4122;
    signed char* eax4123;
    signed char* eax4124;
    signed char al4125;
    signed char* eax4126;
    signed char* eax4127;
    signed char al4128;
    signed char* eax4129;
    signed char* eax4130;
    signed char al4131;
    signed char* eax4132;
    signed char* eax4133;
    signed char al4134;
    signed char* eax4135;
    signed char* eax4136;
    signed char al4137;
    signed char* eax4138;
    signed char* eax4139;
    signed char al4140;
    signed char* eax4141;
    signed char* eax4142;
    signed char al4143;
    signed char* eax4144;
    signed char* eax4145;
    signed char al4146;
    signed char* eax4147;
    signed char* eax4148;
    signed char al4149;
    signed char* eax4150;
    signed char* eax4151;
    signed char al4152;
    signed char* eax4153;
    signed char* eax4154;
    signed char al4155;
    signed char* eax4156;
    signed char* eax4157;
    signed char al4158;
    signed char* eax4159;
    signed char* eax4160;
    signed char al4161;
    signed char* eax4162;
    signed char* eax4163;
    signed char al4164;
    signed char* eax4165;
    signed char* eax4166;
    signed char al4167;
    signed char* eax4168;
    signed char* eax4169;
    signed char al4170;
    signed char* eax4171;
    signed char* eax4172;
    signed char al4173;
    signed char* eax4174;
    signed char* eax4175;
    signed char al4176;
    signed char* eax4177;
    signed char* eax4178;
    signed char al4179;
    signed char* eax4180;
    signed char* eax4181;
    signed char al4182;
    signed char* eax4183;
    signed char* eax4184;
    signed char al4185;
    signed char* eax4186;
    signed char* eax4187;
    signed char al4188;
    signed char* eax4189;
    signed char* eax4190;
    signed char al4191;
    signed char* eax4192;
    signed char* eax4193;
    signed char al4194;
    signed char* eax4195;
    signed char* eax4196;
    signed char al4197;
    signed char* eax4198;
    signed char* eax4199;
    signed char al4200;
    signed char* eax4201;
    signed char* eax4202;
    signed char al4203;
    signed char* eax4204;
    signed char* eax4205;
    signed char al4206;
    signed char* eax4207;
    signed char* eax4208;
    signed char al4209;
    signed char* eax4210;
    signed char* eax4211;
    signed char al4212;
    signed char* eax4213;
    signed char* eax4214;
    signed char al4215;
    signed char* eax4216;
    signed char* eax4217;
    signed char al4218;
    signed char* eax4219;
    signed char* eax4220;
    signed char al4221;
    signed char* eax4222;
    signed char* eax4223;
    signed char al4224;
    signed char* eax4225;
    signed char* eax4226;
    signed char al4227;
    signed char* eax4228;
    signed char* eax4229;
    signed char al4230;
    signed char* eax4231;
    signed char* eax4232;
    signed char al4233;
    signed char* eax4234;
    signed char* eax4235;
    signed char al4236;
    signed char* eax4237;
    signed char* eax4238;
    signed char al4239;
    signed char* eax4240;
    signed char* eax4241;
    signed char al4242;
    signed char* eax4243;
    signed char* eax4244;
    signed char al4245;
    signed char* eax4246;
    signed char* eax4247;
    signed char al4248;
    signed char* eax4249;
    signed char* eax4250;
    signed char al4251;
    signed char* eax4252;
    signed char* eax4253;
    signed char al4254;
    signed char* eax4255;
    signed char* eax4256;
    signed char al4257;
    signed char* eax4258;
    signed char* eax4259;
    signed char al4260;
    signed char* eax4261;
    signed char* eax4262;
    signed char al4263;
    signed char* eax4264;
    signed char* eax4265;
    signed char al4266;
    signed char* eax4267;
    signed char* eax4268;
    signed char al4269;
    signed char* eax4270;
    signed char* eax4271;
    signed char al4272;
    signed char* eax4273;
    signed char* eax4274;
    signed char al4275;
    signed char* eax4276;
    signed char* eax4277;
    signed char al4278;
    signed char* eax4279;
    signed char* eax4280;
    signed char al4281;
    signed char* eax4282;
    signed char* eax4283;
    signed char al4284;
    signed char* eax4285;
    signed char* eax4286;
    signed char al4287;
    signed char* eax4288;
    signed char* eax4289;
    signed char al4290;
    signed char* eax4291;
    signed char* eax4292;
    signed char al4293;
    signed char* eax4294;
    signed char* eax4295;
    signed char al4296;
    signed char* eax4297;
    signed char* eax4298;
    signed char al4299;
    signed char* eax4300;
    signed char* eax4301;
    signed char al4302;
    signed char* eax4303;
    signed char* eax4304;
    signed char al4305;
    signed char* eax4306;
    signed char* eax4307;
    signed char al4308;
    signed char* eax4309;
    signed char* eax4310;
    signed char al4311;
    signed char* eax4312;
    signed char* eax4313;
    signed char al4314;
    signed char* eax4315;
    signed char* eax4316;
    signed char al4317;
    signed char* eax4318;
    signed char* eax4319;
    signed char al4320;
    signed char* eax4321;
    signed char* eax4322;
    signed char al4323;
    signed char* eax4324;
    signed char* eax4325;
    signed char al4326;
    signed char* eax4327;
    signed char* eax4328;
    signed char al4329;
    signed char* eax4330;
    signed char* eax4331;
    signed char al4332;
    signed char* eax4333;
    signed char* eax4334;
    signed char al4335;
    signed char* eax4336;
    signed char* eax4337;
    signed char al4338;
    signed char* eax4339;
    signed char* eax4340;
    signed char al4341;
    signed char* eax4342;
    signed char* eax4343;
    signed char al4344;
    signed char* eax4345;
    signed char* eax4346;
    signed char al4347;
    signed char* eax4348;
    signed char* eax4349;
    signed char al4350;
    signed char* eax4351;
    signed char* eax4352;
    signed char al4353;
    signed char* eax4354;
    signed char* eax4355;
    signed char al4356;
    signed char* eax4357;
    signed char* eax4358;
    signed char al4359;
    signed char* eax4360;
    signed char* eax4361;
    signed char al4362;
    signed char* eax4363;
    signed char* eax4364;
    signed char al4365;
    signed char* eax4366;
    signed char* eax4367;
    signed char al4368;
    signed char* eax4369;
    signed char* eax4370;
    signed char al4371;
    signed char* eax4372;
    signed char* eax4373;
    signed char al4374;
    signed char* eax4375;
    signed char* eax4376;
    signed char al4377;
    signed char* eax4378;
    signed char* eax4379;
    signed char al4380;
    signed char* eax4381;
    signed char* eax4382;
    signed char al4383;
    signed char* eax4384;
    signed char* eax4385;
    signed char al4386;
    signed char* eax4387;
    signed char* eax4388;
    signed char al4389;
    signed char* eax4390;
    signed char* eax4391;
    signed char al4392;
    signed char* eax4393;
    signed char* eax4394;
    signed char al4395;
    signed char* eax4396;
    signed char* eax4397;
    signed char al4398;
    signed char* eax4399;
    signed char* eax4400;
    signed char al4401;
    signed char* eax4402;
    signed char* eax4403;
    signed char al4404;
    signed char* eax4405;
    signed char* eax4406;
    signed char al4407;
    signed char* eax4408;
    signed char* eax4409;
    signed char al4410;
    signed char* eax4411;
    signed char* eax4412;
    signed char al4413;
    signed char* eax4414;
    signed char* eax4415;
    signed char al4416;
    signed char* eax4417;
    signed char* eax4418;
    signed char al4419;
    signed char* eax4420;
    signed char* eax4421;
    signed char al4422;
    signed char* eax4423;
    signed char* eax4424;
    signed char al4425;
    signed char* eax4426;
    signed char* eax4427;
    signed char al4428;
    signed char* eax4429;
    signed char* eax4430;
    signed char al4431;
    signed char* eax4432;
    signed char* eax4433;
    signed char al4434;
    signed char* eax4435;
    signed char* eax4436;
    signed char al4437;
    signed char* eax4438;
    signed char* eax4439;
    signed char al4440;
    signed char* eax4441;
    signed char* eax4442;
    signed char al4443;
    signed char* eax4444;
    signed char* eax4445;
    signed char al4446;
    signed char* eax4447;
    signed char* eax4448;
    signed char al4449;
    signed char* eax4450;
    signed char* eax4451;
    signed char al4452;
    signed char* eax4453;
    signed char* eax4454;
    signed char al4455;
    signed char* eax4456;
    signed char* eax4457;
    signed char al4458;
    signed char* eax4459;
    signed char* eax4460;
    signed char al4461;
    signed char* eax4462;
    signed char* eax4463;
    signed char al4464;
    signed char* eax4465;
    signed char* eax4466;
    signed char al4467;
    signed char* eax4468;
    signed char* eax4469;
    signed char al4470;
    signed char* eax4471;
    signed char* eax4472;
    signed char al4473;
    signed char* eax4474;
    signed char* eax4475;
    signed char al4476;
    signed char* eax4477;
    signed char* eax4478;
    signed char al4479;
    signed char* eax4480;
    signed char* eax4481;
    signed char al4482;
    signed char* eax4483;
    signed char* eax4484;
    signed char al4485;
    signed char* eax4486;
    signed char* eax4487;
    signed char al4488;
    signed char* eax4489;
    signed char* eax4490;
    signed char al4491;
    signed char* eax4492;
    signed char* eax4493;
    signed char al4494;
    signed char* eax4495;
    signed char* eax4496;
    signed char al4497;
    signed char* eax4498;
    signed char* eax4499;
    signed char al4500;
    signed char* eax4501;
    signed char* eax4502;
    signed char al4503;
    signed char* eax4504;
    signed char* eax4505;
    signed char al4506;
    signed char* eax4507;
    signed char* eax4508;
    signed char al4509;
    signed char* eax4510;
    signed char* eax4511;
    signed char al4512;
    signed char* eax4513;
    signed char* eax4514;
    signed char al4515;
    signed char* eax4516;
    signed char* eax4517;
    signed char al4518;
    signed char* eax4519;
    signed char* eax4520;
    signed char al4521;
    signed char* eax4522;
    signed char* eax4523;
    signed char al4524;
    signed char* eax4525;
    signed char* eax4526;
    signed char al4527;
    signed char* eax4528;
    signed char* eax4529;
    signed char al4530;
    signed char* eax4531;
    signed char* eax4532;
    signed char al4533;
    signed char* eax4534;
    signed char* eax4535;
    signed char al4536;
    signed char* eax4537;
    signed char* eax4538;
    signed char al4539;
    signed char* eax4540;
    signed char* eax4541;
    signed char al4542;
    signed char* eax4543;
    signed char* eax4544;
    signed char al4545;
    signed char* eax4546;
    signed char* eax4547;
    signed char al4548;
    signed char* eax4549;
    signed char* eax4550;
    signed char al4551;
    signed char* eax4552;
    signed char* eax4553;
    signed char al4554;
    signed char* eax4555;
    signed char* eax4556;
    signed char al4557;
    signed char* eax4558;
    signed char* eax4559;
    signed char al4560;
    signed char* eax4561;
    signed char* eax4562;
    signed char al4563;
    signed char* eax4564;
    signed char* eax4565;
    signed char al4566;
    signed char* eax4567;
    signed char* eax4568;
    signed char al4569;
    signed char* eax4570;
    signed char* eax4571;
    signed char al4572;
    signed char* eax4573;
    signed char* eax4574;
    signed char al4575;
    signed char* eax4576;
    signed char* eax4577;
    signed char al4578;
    signed char* eax4579;
    signed char* eax4580;
    signed char al4581;
    signed char* eax4582;
    signed char* eax4583;
    signed char al4584;
    signed char* eax4585;
    signed char* eax4586;
    signed char al4587;
    signed char* eax4588;
    signed char* eax4589;
    signed char al4590;
    signed char* eax4591;
    signed char* eax4592;
    signed char al4593;
    signed char* eax4594;
    signed char* eax4595;
    signed char al4596;
    signed char* eax4597;
    signed char* eax4598;
    signed char al4599;
    signed char* eax4600;
    signed char* eax4601;
    signed char al4602;
    signed char* eax4603;
    signed char* eax4604;
    signed char al4605;
    signed char* eax4606;
    signed char* eax4607;
    signed char al4608;
    signed char* eax4609;
    signed char* eax4610;
    signed char al4611;
    signed char* eax4612;
    signed char* eax4613;
    signed char al4614;
    signed char* eax4615;
    signed char* eax4616;
    signed char al4617;
    signed char* eax4618;
    signed char* eax4619;
    signed char al4620;
    signed char* eax4621;
    signed char* eax4622;
    signed char al4623;
    signed char* eax4624;
    signed char* eax4625;
    signed char al4626;
    signed char* eax4627;
    signed char* eax4628;
    signed char al4629;
    signed char* eax4630;
    signed char* eax4631;
    signed char al4632;
    signed char* eax4633;
    signed char* eax4634;
    signed char al4635;
    signed char* eax4636;
    signed char* eax4637;
    signed char al4638;
    signed char* eax4639;
    signed char* eax4640;
    signed char al4641;
    signed char* eax4642;
    signed char* eax4643;
    signed char al4644;
    signed char* eax4645;
    signed char* eax4646;
    signed char al4647;
    signed char* eax4648;
    signed char* eax4649;
    signed char al4650;
    signed char* eax4651;
    signed char* eax4652;
    signed char al4653;
    signed char* eax4654;
    signed char* eax4655;
    signed char al4656;
    signed char* eax4657;
    signed char* eax4658;
    signed char al4659;
    signed char* eax4660;
    signed char* eax4661;
    signed char al4662;
    signed char* eax4663;
    signed char* eax4664;
    signed char al4665;
    signed char* eax4666;
    signed char* eax4667;
    signed char al4668;
    signed char* eax4669;
    signed char* eax4670;
    signed char al4671;
    signed char* eax4672;
    signed char* eax4673;
    signed char al4674;
    signed char* eax4675;
    signed char* eax4676;
    signed char al4677;
    signed char* eax4678;
    signed char* eax4679;
    signed char al4680;
    signed char* eax4681;
    signed char* eax4682;
    signed char al4683;
    signed char* eax4684;
    signed char* eax4685;
    signed char al4686;
    signed char* eax4687;
    signed char* eax4688;
    signed char al4689;
    signed char* eax4690;
    signed char* eax4691;
    signed char al4692;
    signed char* eax4693;
    signed char* eax4694;
    signed char al4695;
    signed char* eax4696;
    signed char* eax4697;
    signed char al4698;
    signed char* eax4699;
    signed char* eax4700;
    signed char al4701;
    signed char* eax4702;
    signed char* eax4703;
    signed char al4704;
    signed char* eax4705;
    signed char* eax4706;
    signed char al4707;
    signed char* eax4708;
    signed char* eax4709;
    signed char al4710;
    signed char* eax4711;
    signed char* eax4712;
    signed char al4713;
    signed char* eax4714;
    signed char* eax4715;
    signed char al4716;
    signed char* eax4717;
    signed char* eax4718;
    signed char al4719;
    signed char* eax4720;
    signed char* eax4721;
    signed char al4722;
    signed char* eax4723;
    signed char* eax4724;
    signed char al4725;
    signed char* eax4726;
    signed char* eax4727;
    signed char al4728;
    signed char* eax4729;
    signed char* eax4730;
    signed char al4731;
    signed char* eax4732;
    signed char* eax4733;
    signed char al4734;
    signed char* eax4735;
    signed char* eax4736;
    signed char al4737;
    signed char* eax4738;
    signed char* eax4739;
    signed char al4740;
    signed char* eax4741;
    signed char* eax4742;
    signed char al4743;
    signed char* eax4744;
    signed char* eax4745;
    signed char al4746;
    signed char* eax4747;
    signed char* eax4748;
    signed char al4749;
    signed char* eax4750;
    signed char* eax4751;
    signed char al4752;
    signed char* eax4753;
    signed char* eax4754;
    signed char al4755;
    signed char* eax4756;
    signed char* eax4757;
    signed char al4758;
    signed char* eax4759;
    signed char* eax4760;
    signed char al4761;
    signed char* eax4762;
    signed char* eax4763;
    signed char al4764;
    signed char* eax4765;
    signed char* eax4766;
    signed char al4767;
    signed char* eax4768;
    signed char* eax4769;
    signed char al4770;
    signed char* eax4771;
    signed char* eax4772;
    signed char al4773;
    signed char* eax4774;
    signed char* eax4775;
    signed char al4776;
    signed char* eax4777;
    signed char* eax4778;
    signed char al4779;
    signed char* eax4780;
    signed char* eax4781;
    signed char al4782;
    signed char* eax4783;
    signed char* eax4784;
    signed char al4785;
    signed char* eax4786;
    signed char* eax4787;
    signed char al4788;
    signed char* eax4789;
    signed char* eax4790;
    signed char al4791;
    signed char* eax4792;
    signed char* eax4793;
    signed char al4794;
    signed char* eax4795;
    signed char* eax4796;
    signed char al4797;
    signed char* eax4798;
    signed char* eax4799;
    signed char al4800;
    signed char* eax4801;
    signed char* eax4802;
    signed char al4803;
    signed char* eax4804;
    signed char* eax4805;
    signed char al4806;
    signed char* eax4807;
    signed char* eax4808;
    signed char al4809;
    signed char* eax4810;
    signed char* eax4811;
    signed char al4812;
    signed char* eax4813;
    signed char* eax4814;
    signed char al4815;
    signed char* eax4816;
    signed char* eax4817;
    signed char al4818;
    signed char* eax4819;
    signed char* eax4820;
    signed char al4821;
    signed char* eax4822;
    signed char* eax4823;
    signed char al4824;
    signed char* eax4825;
    signed char* eax4826;
    signed char al4827;
    signed char* eax4828;
    signed char* eax4829;
    signed char al4830;
    signed char* eax4831;
    signed char* eax4832;
    signed char al4833;
    signed char* eax4834;
    signed char* eax4835;
    signed char al4836;
    signed char* eax4837;
    signed char* eax4838;
    signed char al4839;
    signed char* eax4840;
    signed char* eax4841;
    signed char al4842;
    signed char* eax4843;
    signed char* eax4844;
    signed char al4845;
    signed char* eax4846;
    signed char* eax4847;
    signed char al4848;
    signed char* eax4849;
    signed char* eax4850;
    signed char al4851;
    signed char* eax4852;
    signed char* eax4853;
    signed char al4854;
    signed char* eax4855;
    signed char* eax4856;
    signed char al4857;
    signed char* eax4858;
    signed char* eax4859;
    signed char al4860;
    signed char* eax4861;
    signed char* eax4862;
    signed char al4863;
    signed char* eax4864;
    signed char* eax4865;
    signed char al4866;
    signed char* eax4867;
    signed char* eax4868;
    signed char al4869;
    signed char* eax4870;
    signed char* eax4871;
    signed char al4872;
    signed char* eax4873;
    signed char* eax4874;
    signed char al4875;
    signed char* eax4876;
    signed char* eax4877;
    signed char al4878;
    signed char* eax4879;
    signed char* eax4880;
    signed char al4881;
    signed char* eax4882;
    signed char* eax4883;
    signed char al4884;
    signed char* eax4885;
    signed char* eax4886;
    signed char al4887;
    signed char* eax4888;
    signed char* eax4889;
    signed char al4890;
    signed char* eax4891;
    signed char* eax4892;
    signed char al4893;
    signed char* eax4894;
    signed char* eax4895;
    signed char al4896;
    signed char* eax4897;
    signed char* eax4898;
    signed char al4899;
    signed char* eax4900;
    signed char* eax4901;
    signed char al4902;
    signed char* eax4903;
    signed char* eax4904;
    signed char al4905;
    signed char* eax4906;
    signed char* eax4907;
    signed char al4908;
    signed char* eax4909;
    signed char* eax4910;
    signed char al4911;
    signed char* eax4912;
    signed char* eax4913;
    signed char al4914;
    signed char* eax4915;
    signed char* eax4916;
    signed char al4917;
    signed char* eax4918;
    signed char* eax4919;
    signed char al4920;
    signed char* eax4921;
    signed char* eax4922;
    signed char al4923;
    signed char* eax4924;
    signed char* eax4925;
    signed char al4926;
    signed char* eax4927;
    signed char* eax4928;
    signed char al4929;
    signed char* eax4930;
    signed char* eax4931;
    signed char al4932;
    signed char* eax4933;
    signed char* eax4934;
    signed char al4935;
    signed char* eax4936;
    signed char* eax4937;
    signed char al4938;
    signed char* eax4939;
    signed char* eax4940;
    signed char al4941;
    signed char* eax4942;
    signed char* eax4943;
    signed char al4944;
    signed char* eax4945;
    signed char* eax4946;
    signed char al4947;
    signed char* eax4948;
    signed char* eax4949;
    signed char al4950;
    signed char* eax4951;
    signed char* eax4952;
    signed char al4953;
    signed char* eax4954;
    signed char* eax4955;
    signed char al4956;
    signed char* eax4957;
    signed char* eax4958;
    signed char al4959;
    signed char* eax4960;
    signed char* eax4961;
    signed char al4962;
    signed char* eax4963;
    signed char* eax4964;
    signed char al4965;
    signed char* eax4966;
    signed char* eax4967;
    signed char al4968;
    signed char* eax4969;
    signed char* eax4970;
    signed char al4971;
    signed char* eax4972;
    signed char* eax4973;
    signed char al4974;
    signed char* eax4975;
    signed char* eax4976;
    signed char al4977;
    signed char* eax4978;
    signed char* eax4979;
    signed char al4980;
    signed char* eax4981;
    signed char* eax4982;
    signed char al4983;
    signed char* eax4984;
    signed char* eax4985;
    signed char al4986;
    signed char* eax4987;
    signed char* eax4988;
    signed char al4989;
    signed char* eax4990;
    signed char* eax4991;
    signed char al4992;
    signed char* eax4993;
    signed char* eax4994;
    signed char al4995;
    signed char* eax4996;
    signed char* eax4997;
    signed char al4998;
    signed char* eax4999;
    signed char* eax5000;
    signed char al5001;
    signed char* eax5002;
    signed char* eax5003;
    signed char al5004;
    signed char* eax5005;
    signed char* eax5006;
    signed char al5007;
    signed char* eax5008;
    signed char* eax5009;
    signed char al5010;
    signed char* eax5011;
    signed char* eax5012;
    signed char al5013;
    signed char* eax5014;
    signed char* eax5015;
    signed char al5016;
    signed char* eax5017;
    signed char* eax5018;
    signed char al5019;
    signed char* eax5020;
    signed char* eax5021;
    signed char al5022;
    signed char* eax5023;
    signed char* eax5024;
    signed char al5025;
    signed char* eax5026;
    signed char* eax5027;
    signed char al5028;
    signed char* eax5029;
    signed char* eax5030;
    signed char al5031;
    signed char* eax5032;
    signed char* eax5033;
    signed char al5034;
    signed char* eax5035;
    signed char* eax5036;
    signed char al5037;
    signed char* eax5038;
    signed char* eax5039;
    signed char al5040;
    signed char* eax5041;
    signed char* eax5042;
    signed char al5043;
    signed char* eax5044;
    signed char* eax5045;
    signed char al5046;
    signed char* eax5047;
    signed char* eax5048;
    signed char al5049;
    signed char* eax5050;
    signed char* eax5051;
    signed char al5052;
    signed char* eax5053;
    signed char* eax5054;
    signed char al5055;
    signed char* eax5056;
    signed char* eax5057;
    signed char al5058;
    signed char* eax5059;
    signed char* eax5060;
    signed char al5061;
    signed char* eax5062;
    signed char* eax5063;
    signed char al5064;
    signed char* eax5065;
    signed char* eax5066;
    signed char al5067;
    signed char* eax5068;
    signed char* eax5069;
    signed char al5070;
    signed char* eax5071;
    signed char* eax5072;
    signed char al5073;
    signed char* eax5074;
    signed char* eax5075;
    signed char al5076;
    signed char* eax5077;
    signed char* eax5078;
    signed char al5079;
    signed char* eax5080;
    signed char* eax5081;
    signed char al5082;
    signed char* eax5083;
    signed char* eax5084;
    signed char al5085;
    signed char* eax5086;
    signed char* eax5087;
    signed char al5088;
    signed char* eax5089;
    signed char* eax5090;
    signed char al5091;
    signed char* eax5092;
    signed char* eax5093;
    signed char al5094;
    signed char* eax5095;
    signed char* eax5096;
    signed char al5097;
    signed char* eax5098;
    signed char* eax5099;
    signed char al5100;
    signed char* eax5101;
    signed char* eax5102;
    signed char al5103;
    signed char* eax5104;
    signed char* eax5105;
    signed char al5106;
    signed char* eax5107;
    signed char* eax5108;
    signed char al5109;
    signed char* eax5110;
    signed char* eax5111;
    signed char al5112;
    signed char* eax5113;
    signed char* eax5114;
    signed char al5115;
    signed char* eax5116;
    signed char* eax5117;
    signed char al5118;
    signed char* eax5119;
    signed char* eax5120;
    signed char al5121;
    signed char* eax5122;
    signed char* eax5123;
    signed char al5124;
    signed char* eax5125;
    signed char* eax5126;
    signed char al5127;
    signed char* eax5128;
    signed char* eax5129;
    signed char al5130;
    signed char* eax5131;
    signed char* eax5132;
    signed char al5133;
    signed char* eax5134;
    signed char* eax5135;
    signed char al5136;
    signed char* eax5137;
    signed char* eax5138;
    signed char al5139;
    signed char* eax5140;
    signed char* eax5141;
    signed char al5142;
    signed char* eax5143;
    signed char* eax5144;
    signed char al5145;
    signed char* eax5146;
    signed char* eax5147;
    signed char al5148;
    signed char* eax5149;
    signed char* eax5150;
    signed char al5151;
    signed char* eax5152;
    signed char* eax5153;
    signed char al5154;
    signed char* eax5155;
    signed char* eax5156;
    signed char al5157;
    signed char* eax5158;
    signed char* eax5159;
    signed char al5160;
    signed char* eax5161;
    signed char* eax5162;
    signed char al5163;
    signed char* eax5164;
    signed char* eax5165;
    signed char al5166;
    signed char* eax5167;
    signed char* eax5168;
    signed char al5169;
    signed char* eax5170;
    signed char* eax5171;
    signed char al5172;
    signed char* eax5173;
    signed char* eax5174;
    signed char al5175;
    signed char* eax5176;
    signed char* eax5177;
    signed char al5178;
    signed char* eax5179;
    signed char* eax5180;
    signed char al5181;
    signed char* eax5182;
    signed char* eax5183;
    signed char al5184;
    signed char* eax5185;
    signed char* eax5186;
    signed char al5187;
    signed char* eax5188;
    signed char* eax5189;
    signed char al5190;
    signed char* eax5191;
    signed char* eax5192;
    signed char al5193;
    signed char* eax5194;
    signed char* eax5195;
    signed char al5196;
    signed char* eax5197;
    signed char* eax5198;
    signed char al5199;
    signed char* eax5200;
    signed char* eax5201;
    signed char al5202;
    signed char* eax5203;
    signed char* eax5204;
    signed char al5205;
    signed char* eax5206;
    signed char* eax5207;
    signed char al5208;
    signed char* eax5209;
    signed char* eax5210;
    signed char al5211;
    signed char* eax5212;
    signed char* eax5213;
    signed char al5214;
    signed char* eax5215;
    signed char* eax5216;
    signed char al5217;
    signed char* eax5218;
    signed char* eax5219;
    signed char al5220;
    signed char* eax5221;
    signed char* eax5222;
    signed char al5223;
    signed char* eax5224;
    signed char* eax5225;
    signed char al5226;
    signed char* eax5227;
    signed char* eax5228;
    signed char al5229;
    signed char* eax5230;
    signed char* eax5231;
    signed char al5232;
    signed char* eax5233;
    signed char* eax5234;
    signed char al5235;
    signed char* eax5236;
    signed char* eax5237;
    signed char al5238;
    signed char* eax5239;
    signed char* eax5240;
    signed char al5241;
    signed char* eax5242;
    signed char* eax5243;
    signed char al5244;
    signed char* eax5245;
    signed char* eax5246;
    signed char al5247;
    signed char* eax5248;
    signed char* eax5249;
    signed char al5250;
    signed char* eax5251;
    signed char* eax5252;
    signed char al5253;
    signed char* eax5254;
    signed char* eax5255;
    signed char al5256;
    signed char* eax5257;
    signed char* eax5258;
    signed char al5259;
    signed char* eax5260;
    signed char* eax5261;
    signed char al5262;
    signed char* eax5263;
    signed char* eax5264;
    signed char al5265;
    signed char* eax5266;
    signed char* eax5267;
    signed char al5268;
    signed char* eax5269;
    signed char* eax5270;
    signed char al5271;
    signed char* eax5272;
    signed char* eax5273;
    signed char al5274;
    signed char* eax5275;
    signed char* eax5276;
    signed char al5277;
    signed char* eax5278;
    signed char* eax5279;
    signed char al5280;
    signed char* eax5281;
    signed char* eax5282;
    signed char al5283;
    signed char* eax5284;
    signed char* eax5285;
    signed char al5286;
    signed char* eax5287;
    signed char* eax5288;
    signed char al5289;
    signed char* eax5290;
    signed char* eax5291;
    signed char al5292;
    signed char* eax5293;
    signed char* eax5294;
    signed char al5295;
    signed char* eax5296;
    signed char* eax5297;
    signed char al5298;
    signed char* eax5299;
    signed char* eax5300;
    signed char al5301;
    signed char* eax5302;
    signed char* eax5303;
    signed char al5304;
    signed char* eax5305;
    signed char* eax5306;
    signed char al5307;
    signed char* eax5308;
    signed char* eax5309;
    signed char al5310;
    signed char* eax5311;
    signed char* eax5312;
    signed char al5313;
    signed char* eax5314;
    signed char* eax5315;
    signed char al5316;
    signed char* eax5317;
    signed char* eax5318;
    signed char al5319;
    signed char* eax5320;
    signed char* eax5321;
    signed char al5322;
    signed char* eax5323;
    signed char* eax5324;
    signed char al5325;
    signed char* eax5326;
    signed char* eax5327;
    signed char al5328;
    signed char* eax5329;
    signed char* eax5330;
    signed char al5331;
    signed char* eax5332;
    signed char* eax5333;
    signed char al5334;
    signed char* eax5335;
    signed char* eax5336;
    signed char al5337;
    signed char* eax5338;
    signed char* eax5339;
    signed char al5340;
    signed char* eax5341;
    signed char* eax5342;
    signed char al5343;
    signed char* eax5344;
    signed char* eax5345;
    signed char al5346;
    signed char* eax5347;
    signed char* eax5348;
    signed char al5349;
    signed char* eax5350;
    signed char* eax5351;
    signed char al5352;
    signed char* eax5353;
    signed char* eax5354;
    signed char al5355;
    signed char* eax5356;
    signed char* eax5357;
    signed char al5358;
    signed char* eax5359;
    signed char* eax5360;
    signed char al5361;
    signed char* eax5362;
    signed char* eax5363;
    signed char al5364;
    signed char* eax5365;
    signed char* eax5366;
    signed char al5367;
    signed char* eax5368;
    signed char* eax5369;
    signed char al5370;
    signed char* eax5371;
    signed char* eax5372;
    signed char al5373;
    signed char* eax5374;
    signed char* eax5375;
    signed char al5376;
    signed char* eax5377;
    signed char* eax5378;
    signed char al5379;
    signed char* eax5380;
    signed char* eax5381;
    signed char al5382;
    signed char* eax5383;
    signed char* eax5384;
    signed char al5385;
    signed char* eax5386;
    signed char* eax5387;
    signed char al5388;
    signed char* eax5389;
    signed char* eax5390;
    signed char al5391;
    signed char* eax5392;
    signed char* eax5393;
    signed char al5394;
    signed char* eax5395;
    signed char* eax5396;
    signed char al5397;
    signed char* eax5398;
    signed char* eax5399;
    signed char al5400;
    signed char* eax5401;
    signed char* eax5402;
    signed char al5403;
    signed char* eax5404;
    signed char* eax5405;
    signed char al5406;
    signed char* eax5407;
    signed char* eax5408;
    signed char al5409;
    signed char* eax5410;
    signed char* eax5411;
    signed char al5412;
    signed char* eax5413;
    signed char* eax5414;
    signed char al5415;
    signed char* eax5416;
    signed char* eax5417;
    signed char al5418;
    signed char* eax5419;
    signed char* eax5420;
    signed char al5421;
    signed char* eax5422;
    signed char* eax5423;
    signed char al5424;
    signed char* eax5425;
    signed char* eax5426;
    signed char al5427;
    signed char* eax5428;
    signed char* eax5429;
    signed char al5430;
    signed char* eax5431;
    signed char* eax5432;
    signed char al5433;
    signed char* eax5434;
    signed char* eax5435;
    signed char al5436;
    signed char* eax5437;
    signed char* eax5438;
    signed char al5439;
    signed char* eax5440;
    signed char* eax5441;
    signed char al5442;
    signed char* eax5443;
    signed char* eax5444;
    signed char al5445;
    signed char* eax5446;
    signed char* eax5447;
    signed char al5448;
    signed char* eax5449;
    signed char* eax5450;
    signed char al5451;
    signed char* eax5452;
    signed char* eax5453;
    signed char al5454;
    signed char* eax5455;
    signed char* eax5456;
    signed char al5457;
    signed char* eax5458;
    signed char* eax5459;
    signed char al5460;
    signed char* eax5461;
    signed char* eax5462;
    signed char al5463;
    signed char* eax5464;
    signed char* eax5465;
    signed char al5466;
    signed char* eax5467;
    signed char* eax5468;
    signed char al5469;
    signed char* eax5470;
    signed char* eax5471;
    signed char al5472;
    signed char* eax5473;
    signed char* eax5474;
    signed char al5475;
    signed char* eax5476;
    signed char* eax5477;
    signed char al5478;
    signed char* eax5479;
    signed char* eax5480;
    signed char al5481;
    signed char* eax5482;
    signed char* eax5483;
    signed char al5484;
    signed char* eax5485;
    signed char* eax5486;
    signed char al5487;
    signed char* eax5488;
    signed char* eax5489;
    signed char al5490;
    signed char* eax5491;
    signed char* eax5492;
    signed char al5493;
    signed char* eax5494;
    signed char* eax5495;
    signed char al5496;
    signed char* eax5497;
    signed char* eax5498;
    signed char al5499;
    signed char* eax5500;
    signed char* eax5501;
    signed char al5502;
    signed char* eax5503;
    signed char* eax5504;
    signed char al5505;
    signed char* eax5506;
    signed char* eax5507;
    signed char al5508;
    signed char* eax5509;
    signed char* eax5510;
    signed char al5511;
    signed char* eax5512;
    signed char* eax5513;
    signed char al5514;
    signed char* eax5515;
    signed char* eax5516;
    signed char al5517;
    signed char* eax5518;
    signed char* eax5519;
    signed char al5520;
    signed char* eax5521;
    signed char* eax5522;
    signed char al5523;
    signed char* eax5524;
    signed char* eax5525;
    signed char al5526;
    signed char* eax5527;
    signed char* eax5528;
    signed char al5529;
    signed char* eax5530;
    signed char* eax5531;
    signed char al5532;
    signed char* eax5533;
    signed char* eax5534;
    signed char al5535;
    signed char* eax5536;
    signed char* eax5537;
    signed char al5538;
    signed char* eax5539;
    signed char* eax5540;
    signed char al5541;
    signed char* eax5542;
    signed char* eax5543;
    signed char al5544;
    signed char* eax5545;
    signed char* eax5546;
    signed char al5547;
    signed char* eax5548;
    signed char* eax5549;
    signed char al5550;
    signed char* eax5551;
    signed char* eax5552;
    signed char al5553;
    signed char* eax5554;
    signed char* eax5555;
    signed char al5556;
    signed char* eax5557;
    signed char* eax5558;
    signed char al5559;
    signed char* eax5560;
    signed char* eax5561;
    signed char al5562;
    signed char* eax5563;
    signed char* eax5564;
    signed char al5565;
    signed char* eax5566;
    signed char* eax5567;
    signed char al5568;
    signed char* eax5569;
    signed char* eax5570;
    signed char al5571;
    signed char* eax5572;
    signed char* eax5573;
    signed char al5574;
    signed char* eax5575;
    signed char* eax5576;
    signed char al5577;
    signed char* eax5578;
    signed char* eax5579;
    signed char al5580;
    signed char* eax5581;
    signed char* eax5582;
    signed char al5583;
    signed char* eax5584;
    signed char* eax5585;
    signed char al5586;
    signed char* eax5587;
    signed char* eax5588;
    signed char al5589;
    signed char* eax5590;
    signed char* eax5591;
    signed char al5592;
    signed char* eax5593;
    signed char* eax5594;
    signed char al5595;
    signed char* eax5596;
    signed char* eax5597;
    signed char al5598;
    signed char* eax5599;
    signed char* eax5600;
    signed char al5601;
    signed char* eax5602;
    signed char* eax5603;
    signed char al5604;
    signed char* eax5605;
    signed char* eax5606;
    signed char al5607;
    signed char* eax5608;
    signed char* eax5609;
    signed char al5610;
    signed char* eax5611;
    signed char* eax5612;
    signed char al5613;
    signed char* eax5614;
    signed char* eax5615;
    signed char al5616;
    signed char* eax5617;
    signed char* eax5618;
    signed char al5619;
    signed char* eax5620;
    signed char* eax5621;
    signed char al5622;
    signed char* eax5623;
    signed char* eax5624;
    signed char al5625;
    signed char* eax5626;
    signed char* eax5627;
    signed char al5628;
    signed char* eax5629;
    signed char* eax5630;
    signed char al5631;
    signed char* eax5632;
    signed char* eax5633;
    signed char al5634;
    signed char* eax5635;
    signed char* eax5636;
    signed char al5637;
    signed char* eax5638;
    signed char* eax5639;
    signed char al5640;
    signed char* eax5641;
    signed char* eax5642;
    signed char al5643;
    signed char* eax5644;
    signed char* eax5645;
    signed char al5646;
    signed char* eax5647;
    signed char* eax5648;
    signed char al5649;
    signed char* eax5650;
    signed char* eax5651;
    signed char al5652;
    signed char* eax5653;
    signed char* eax5654;
    signed char al5655;
    signed char* eax5656;
    signed char* eax5657;
    signed char al5658;
    signed char* eax5659;
    signed char* eax5660;
    signed char al5661;
    signed char* eax5662;
    signed char* eax5663;
    signed char al5664;
    signed char* eax5665;
    signed char* eax5666;
    signed char al5667;
    signed char* eax5668;
    signed char* eax5669;
    signed char al5670;
    signed char* eax5671;
    signed char* eax5672;
    signed char al5673;
    signed char* eax5674;
    signed char* eax5675;
    signed char al5676;
    signed char* eax5677;
    signed char* eax5678;
    signed char al5679;
    signed char* eax5680;
    signed char* eax5681;
    signed char al5682;
    signed char* eax5683;
    signed char* eax5684;
    signed char al5685;
    signed char* eax5686;
    signed char* eax5687;
    signed char al5688;
    signed char* eax5689;
    signed char* eax5690;
    signed char al5691;
    signed char* eax5692;
    signed char* eax5693;
    signed char al5694;
    signed char* eax5695;
    signed char* eax5696;
    signed char al5697;
    signed char* eax5698;
    signed char* eax5699;
    signed char al5700;
    signed char* eax5701;
    signed char* eax5702;
    signed char al5703;
    signed char* eax5704;
    signed char* eax5705;
    signed char al5706;
    signed char* eax5707;
    signed char* eax5708;
    signed char al5709;
    signed char* eax5710;
    signed char* eax5711;
    signed char al5712;
    signed char* eax5713;
    signed char* eax5714;
    signed char al5715;
    signed char* eax5716;
    signed char* eax5717;
    signed char al5718;
    signed char* eax5719;
    signed char* eax5720;
    signed char al5721;
    signed char* eax5722;
    signed char* eax5723;
    signed char al5724;
    signed char* eax5725;
    signed char* eax5726;
    signed char al5727;
    signed char* eax5728;
    signed char* eax5729;
    signed char al5730;
    signed char* eax5731;
    signed char* eax5732;
    signed char al5733;
    signed char* eax5734;
    signed char* eax5735;
    signed char al5736;
    signed char* eax5737;
    signed char* eax5738;
    signed char al5739;
    signed char* eax5740;
    signed char* eax5741;
    signed char al5742;
    signed char* eax5743;
    signed char* eax5744;
    signed char al5745;
    signed char* eax5746;
    signed char* eax5747;
    signed char al5748;
    signed char* eax5749;
    signed char* eax5750;
    signed char al5751;
    signed char* eax5752;
    signed char* eax5753;
    signed char al5754;
    signed char* eax5755;
    signed char* eax5756;
    signed char al5757;
    signed char* eax5758;
    signed char* eax5759;
    signed char al5760;
    signed char* eax5761;
    signed char* eax5762;
    signed char al5763;
    signed char* eax5764;
    signed char* eax5765;
    signed char al5766;
    signed char* eax5767;
    signed char* eax5768;
    signed char al5769;
    signed char* eax5770;
    signed char* eax5771;
    signed char al5772;
    signed char* eax5773;
    signed char* eax5774;
    signed char al5775;
    signed char* eax5776;
    signed char* eax5777;
    signed char al5778;
    signed char* eax5779;
    signed char* eax5780;
    signed char al5781;
    signed char* eax5782;
    signed char* eax5783;
    signed char al5784;
    signed char* eax5785;
    signed char* eax5786;
    signed char al5787;
    signed char* eax5788;
    signed char* eax5789;
    signed char al5790;
    signed char* eax5791;
    signed char* eax5792;
    signed char al5793;
    signed char* eax5794;
    signed char* eax5795;
    signed char al5796;
    signed char* eax5797;
    signed char* eax5798;
    signed char al5799;
    signed char* eax5800;
    signed char* eax5801;
    signed char al5802;
    signed char* eax5803;
    signed char* eax5804;
    signed char al5805;
    signed char* eax5806;
    signed char* eax5807;
    signed char al5808;
    signed char* eax5809;
    signed char* eax5810;
    signed char al5811;
    signed char* eax5812;
    signed char* eax5813;
    signed char al5814;
    signed char* eax5815;
    signed char* eax5816;
    signed char al5817;
    signed char* eax5818;
    signed char* eax5819;
    signed char al5820;
    signed char* eax5821;
    signed char* eax5822;
    signed char al5823;
    signed char* eax5824;
    signed char* eax5825;
    signed char al5826;
    signed char* eax5827;
    signed char* eax5828;
    signed char al5829;
    signed char* eax5830;
    signed char* eax5831;
    signed char al5832;
    signed char* eax5833;
    signed char* eax5834;
    signed char al5835;
    signed char* eax5836;
    signed char* eax5837;
    signed char al5838;
    signed char* eax5839;
    signed char* eax5840;
    signed char al5841;
    signed char* eax5842;
    signed char* eax5843;
    signed char al5844;
    signed char* eax5845;
    signed char* eax5846;
    signed char al5847;
    signed char* eax5848;
    signed char* eax5849;
    signed char al5850;
    signed char* eax5851;
    signed char* eax5852;
    signed char al5853;
    signed char* eax5854;
    signed char* eax5855;
    signed char al5856;
    signed char* eax5857;
    signed char* eax5858;
    signed char al5859;
    signed char* eax5860;
    signed char* eax5861;
    signed char al5862;
    signed char* eax5863;
    signed char* eax5864;
    signed char al5865;
    signed char* eax5866;
    signed char* eax5867;
    signed char al5868;
    signed char* eax5869;
    signed char* eax5870;
    signed char al5871;
    signed char* eax5872;
    signed char* eax5873;
    signed char al5874;
    signed char* eax5875;
    signed char* eax5876;
    signed char al5877;
    signed char* eax5878;
    signed char* eax5879;
    signed char al5880;
    signed char* eax5881;
    signed char* eax5882;
    signed char al5883;
    signed char* eax5884;
    signed char* eax5885;
    signed char al5886;
    signed char* eax5887;
    signed char* eax5888;
    signed char al5889;
    signed char* eax5890;
    signed char* eax5891;
    signed char al5892;
    signed char* eax5893;
    signed char* eax5894;
    signed char al5895;
    signed char* eax5896;
    signed char* eax5897;
    signed char al5898;
    signed char* eax5899;
    signed char* eax5900;
    signed char al5901;
    signed char* eax5902;
    signed char* eax5903;
    signed char al5904;
    signed char* eax5905;
    signed char* eax5906;
    signed char al5907;
    signed char* eax5908;
    signed char* eax5909;
    signed char al5910;
    signed char* eax5911;
    signed char* eax5912;
    signed char al5913;
    signed char* eax5914;
    signed char* eax5915;
    signed char al5916;
    signed char* eax5917;
    signed char* eax5918;
    signed char al5919;
    signed char* eax5920;
    signed char* eax5921;
    signed char al5922;

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
    *eax2023 = reinterpret_cast<signed char>(*eax2024 + al2025);
    *eax2026 = reinterpret_cast<signed char>(*eax2027 + al2028);
    *eax2029 = reinterpret_cast<signed char>(*eax2030 + al2031);
    *eax2032 = reinterpret_cast<signed char>(*eax2033 + al2034);
    *eax2035 = reinterpret_cast<signed char>(*eax2036 + al2037);
    *eax2038 = reinterpret_cast<signed char>(*eax2039 + al2040);
    *eax2041 = reinterpret_cast<signed char>(*eax2042 + al2043);
    *eax2044 = reinterpret_cast<signed char>(*eax2045 + al2046);
    *eax2047 = reinterpret_cast<signed char>(*eax2048 + al2049);
    *eax2050 = reinterpret_cast<signed char>(*eax2051 + al2052);
    *eax2053 = reinterpret_cast<signed char>(*eax2054 + al2055);
    *eax2056 = reinterpret_cast<signed char>(*eax2057 + al2058);
    *eax2059 = reinterpret_cast<signed char>(*eax2060 + al2061);
    *eax2062 = reinterpret_cast<signed char>(*eax2063 + al2064);
    *eax2065 = reinterpret_cast<signed char>(*eax2066 + al2067);
    *eax2068 = reinterpret_cast<signed char>(*eax2069 + al2070);
    *eax2071 = reinterpret_cast<signed char>(*eax2072 + al2073);
    *eax2074 = reinterpret_cast<signed char>(*eax2075 + al2076);
    *eax2077 = reinterpret_cast<signed char>(*eax2078 + al2079);
    *eax2080 = reinterpret_cast<signed char>(*eax2081 + al2082);
    *eax2083 = reinterpret_cast<signed char>(*eax2084 + al2085);
    *eax2086 = reinterpret_cast<signed char>(*eax2087 + al2088);
    *eax2089 = reinterpret_cast<signed char>(*eax2090 + al2091);
    *eax2092 = reinterpret_cast<signed char>(*eax2093 + al2094);
    *eax2095 = reinterpret_cast<signed char>(*eax2096 + al2097);
    *eax2098 = reinterpret_cast<signed char>(*eax2099 + al2100);
    *eax2101 = reinterpret_cast<signed char>(*eax2102 + al2103);
    *eax2104 = reinterpret_cast<signed char>(*eax2105 + al2106);
    *eax2107 = reinterpret_cast<signed char>(*eax2108 + al2109);
    *eax2110 = reinterpret_cast<signed char>(*eax2111 + al2112);
    *eax2113 = reinterpret_cast<signed char>(*eax2114 + al2115);
    *eax2116 = reinterpret_cast<signed char>(*eax2117 + al2118);
    *eax2119 = reinterpret_cast<signed char>(*eax2120 + al2121);
    *eax2122 = reinterpret_cast<signed char>(*eax2123 + al2124);
    *eax2125 = reinterpret_cast<signed char>(*eax2126 + al2127);
    *eax2128 = reinterpret_cast<signed char>(*eax2129 + al2130);
    *eax2131 = reinterpret_cast<signed char>(*eax2132 + al2133);
    *eax2134 = reinterpret_cast<signed char>(*eax2135 + al2136);
    *eax2137 = reinterpret_cast<signed char>(*eax2138 + al2139);
    *eax2140 = reinterpret_cast<signed char>(*eax2141 + al2142);
    *eax2143 = reinterpret_cast<signed char>(*eax2144 + al2145);
    *eax2146 = reinterpret_cast<signed char>(*eax2147 + al2148);
    *eax2149 = reinterpret_cast<signed char>(*eax2150 + al2151);
    *eax2152 = reinterpret_cast<signed char>(*eax2153 + al2154);
    *eax2155 = reinterpret_cast<signed char>(*eax2156 + al2157);
    *eax2158 = reinterpret_cast<signed char>(*eax2159 + al2160);
    *eax2161 = reinterpret_cast<signed char>(*eax2162 + al2163);
    *eax2164 = reinterpret_cast<signed char>(*eax2165 + al2166);
    *eax2167 = reinterpret_cast<signed char>(*eax2168 + al2169);
    *eax2170 = reinterpret_cast<signed char>(*eax2171 + al2172);
    *eax2173 = reinterpret_cast<signed char>(*eax2174 + al2175);
    *eax2176 = reinterpret_cast<signed char>(*eax2177 + al2178);
    *eax2179 = reinterpret_cast<signed char>(*eax2180 + al2181);
    *eax2182 = reinterpret_cast<signed char>(*eax2183 + al2184);
    *eax2185 = reinterpret_cast<signed char>(*eax2186 + al2187);
    *eax2188 = reinterpret_cast<signed char>(*eax2189 + al2190);
    *eax2191 = reinterpret_cast<signed char>(*eax2192 + al2193);
    *eax2194 = reinterpret_cast<signed char>(*eax2195 + al2196);
    *eax2197 = reinterpret_cast<signed char>(*eax2198 + al2199);
    *eax2200 = reinterpret_cast<signed char>(*eax2201 + al2202);
    *eax2203 = reinterpret_cast<signed char>(*eax2204 + al2205);
    *eax2206 = reinterpret_cast<signed char>(*eax2207 + al2208);
    *eax2209 = reinterpret_cast<signed char>(*eax2210 + al2211);
    *eax2212 = reinterpret_cast<signed char>(*eax2213 + al2214);
    *eax2215 = reinterpret_cast<signed char>(*eax2216 + al2217);
    *eax2218 = reinterpret_cast<signed char>(*eax2219 + al2220);
    *eax2221 = reinterpret_cast<signed char>(*eax2222 + al2223);
    *eax2224 = reinterpret_cast<signed char>(*eax2225 + al2226);
    *eax2227 = reinterpret_cast<signed char>(*eax2228 + al2229);
    *eax2230 = reinterpret_cast<signed char>(*eax2231 + al2232);
    *eax2233 = reinterpret_cast<signed char>(*eax2234 + al2235);
    *eax2236 = reinterpret_cast<signed char>(*eax2237 + al2238);
    *eax2239 = reinterpret_cast<signed char>(*eax2240 + al2241);
    *eax2242 = reinterpret_cast<signed char>(*eax2243 + al2244);
    *eax2245 = reinterpret_cast<signed char>(*eax2246 + al2247);
    *eax2248 = reinterpret_cast<signed char>(*eax2249 + al2250);
    *eax2251 = reinterpret_cast<signed char>(*eax2252 + al2253);
    *eax2254 = reinterpret_cast<signed char>(*eax2255 + al2256);
    *eax2257 = reinterpret_cast<signed char>(*eax2258 + al2259);
    *eax2260 = reinterpret_cast<signed char>(*eax2261 + al2262);
    *eax2263 = reinterpret_cast<signed char>(*eax2264 + al2265);
    *eax2266 = reinterpret_cast<signed char>(*eax2267 + al2268);
    *eax2269 = reinterpret_cast<signed char>(*eax2270 + al2271);
    *eax2272 = reinterpret_cast<signed char>(*eax2273 + al2274);
    *eax2275 = reinterpret_cast<signed char>(*eax2276 + al2277);
    *eax2278 = reinterpret_cast<signed char>(*eax2279 + al2280);
    *eax2281 = reinterpret_cast<signed char>(*eax2282 + al2283);
    *eax2284 = reinterpret_cast<signed char>(*eax2285 + al2286);
    *eax2287 = reinterpret_cast<signed char>(*eax2288 + al2289);
    *eax2290 = reinterpret_cast<signed char>(*eax2291 + al2292);
    *eax2293 = reinterpret_cast<signed char>(*eax2294 + al2295);
    *eax2296 = reinterpret_cast<signed char>(*eax2297 + al2298);
    *eax2299 = reinterpret_cast<signed char>(*eax2300 + al2301);
    *eax2302 = reinterpret_cast<signed char>(*eax2303 + al2304);
    *eax2305 = reinterpret_cast<signed char>(*eax2306 + al2307);
    *eax2308 = reinterpret_cast<signed char>(*eax2309 + al2310);
    *eax2311 = reinterpret_cast<signed char>(*eax2312 + al2313);
    *eax2314 = reinterpret_cast<signed char>(*eax2315 + al2316);
    *eax2317 = reinterpret_cast<signed char>(*eax2318 + al2319);
    *eax2320 = reinterpret_cast<signed char>(*eax2321 + al2322);
    *eax2323 = reinterpret_cast<signed char>(*eax2324 + al2325);
    *eax2326 = reinterpret_cast<signed char>(*eax2327 + al2328);
    *eax2329 = reinterpret_cast<signed char>(*eax2330 + al2331);
    *eax2332 = reinterpret_cast<signed char>(*eax2333 + al2334);
    *eax2335 = reinterpret_cast<signed char>(*eax2336 + al2337);
    *eax2338 = reinterpret_cast<signed char>(*eax2339 + al2340);
    *eax2341 = reinterpret_cast<signed char>(*eax2342 + al2343);
    *eax2344 = reinterpret_cast<signed char>(*eax2345 + al2346);
    *eax2347 = reinterpret_cast<signed char>(*eax2348 + al2349);
    *eax2350 = reinterpret_cast<signed char>(*eax2351 + al2352);
    *eax2353 = reinterpret_cast<signed char>(*eax2354 + al2355);
    *eax2356 = reinterpret_cast<signed char>(*eax2357 + al2358);
    *eax2359 = reinterpret_cast<signed char>(*eax2360 + al2361);
    *eax2362 = reinterpret_cast<signed char>(*eax2363 + al2364);
    *eax2365 = reinterpret_cast<signed char>(*eax2366 + al2367);
    *eax2368 = reinterpret_cast<signed char>(*eax2369 + al2370);
    *eax2371 = reinterpret_cast<signed char>(*eax2372 + al2373);
    *eax2374 = reinterpret_cast<signed char>(*eax2375 + al2376);
    *eax2377 = reinterpret_cast<signed char>(*eax2378 + al2379);
    *eax2380 = reinterpret_cast<signed char>(*eax2381 + al2382);
    *eax2383 = reinterpret_cast<signed char>(*eax2384 + al2385);
    *eax2386 = reinterpret_cast<signed char>(*eax2387 + al2388);
    *eax2389 = reinterpret_cast<signed char>(*eax2390 + al2391);
    *eax2392 = reinterpret_cast<signed char>(*eax2393 + al2394);
    *eax2395 = reinterpret_cast<signed char>(*eax2396 + al2397);
    *eax2398 = reinterpret_cast<signed char>(*eax2399 + al2400);
    *eax2401 = reinterpret_cast<signed char>(*eax2402 + al2403);
    *eax2404 = reinterpret_cast<signed char>(*eax2405 + al2406);
    *eax2407 = reinterpret_cast<signed char>(*eax2408 + al2409);
    *eax2410 = reinterpret_cast<signed char>(*eax2411 + al2412);
    *eax2413 = reinterpret_cast<signed char>(*eax2414 + al2415);
    *eax2416 = reinterpret_cast<signed char>(*eax2417 + al2418);
    *eax2419 = reinterpret_cast<signed char>(*eax2420 + al2421);
    *eax2422 = reinterpret_cast<signed char>(*eax2423 + al2424);
    *eax2425 = reinterpret_cast<signed char>(*eax2426 + al2427);
    *eax2428 = reinterpret_cast<signed char>(*eax2429 + al2430);
    *eax2431 = reinterpret_cast<signed char>(*eax2432 + al2433);
    *eax2434 = reinterpret_cast<signed char>(*eax2435 + al2436);
    *eax2437 = reinterpret_cast<signed char>(*eax2438 + al2439);
    *eax2440 = reinterpret_cast<signed char>(*eax2441 + al2442);
    *eax2443 = reinterpret_cast<signed char>(*eax2444 + al2445);
    *eax2446 = reinterpret_cast<signed char>(*eax2447 + al2448);
    *eax2449 = reinterpret_cast<signed char>(*eax2450 + al2451);
    *eax2452 = reinterpret_cast<signed char>(*eax2453 + al2454);
    *eax2455 = reinterpret_cast<signed char>(*eax2456 + al2457);
    *eax2458 = reinterpret_cast<signed char>(*eax2459 + al2460);
    *eax2461 = reinterpret_cast<signed char>(*eax2462 + al2463);
    *eax2464 = reinterpret_cast<signed char>(*eax2465 + al2466);
    *eax2467 = reinterpret_cast<signed char>(*eax2468 + al2469);
    *eax2470 = reinterpret_cast<signed char>(*eax2471 + al2472);
    *eax2473 = reinterpret_cast<signed char>(*eax2474 + al2475);
    *eax2476 = reinterpret_cast<signed char>(*eax2477 + al2478);
    *eax2479 = reinterpret_cast<signed char>(*eax2480 + al2481);
    *eax2482 = reinterpret_cast<signed char>(*eax2483 + al2484);
    *eax2485 = reinterpret_cast<signed char>(*eax2486 + al2487);
    *eax2488 = reinterpret_cast<signed char>(*eax2489 + al2490);
    *eax2491 = reinterpret_cast<signed char>(*eax2492 + al2493);
    *eax2494 = reinterpret_cast<signed char>(*eax2495 + al2496);
    *eax2497 = reinterpret_cast<signed char>(*eax2498 + al2499);
    *eax2500 = reinterpret_cast<signed char>(*eax2501 + al2502);
    *eax2503 = reinterpret_cast<signed char>(*eax2504 + al2505);
    *eax2506 = reinterpret_cast<signed char>(*eax2507 + al2508);
    *eax2509 = reinterpret_cast<signed char>(*eax2510 + al2511);
    *eax2512 = reinterpret_cast<signed char>(*eax2513 + al2514);
    *eax2515 = reinterpret_cast<signed char>(*eax2516 + al2517);
    *eax2518 = reinterpret_cast<signed char>(*eax2519 + al2520);
    *eax2521 = reinterpret_cast<signed char>(*eax2522 + al2523);
    *eax2524 = reinterpret_cast<signed char>(*eax2525 + al2526);
    *eax2527 = reinterpret_cast<signed char>(*eax2528 + al2529);
    *eax2530 = reinterpret_cast<signed char>(*eax2531 + al2532);
    *eax2533 = reinterpret_cast<signed char>(*eax2534 + al2535);
    *eax2536 = reinterpret_cast<signed char>(*eax2537 + al2538);
    *eax2539 = reinterpret_cast<signed char>(*eax2540 + al2541);
    *eax2542 = reinterpret_cast<signed char>(*eax2543 + al2544);
    *eax2545 = reinterpret_cast<signed char>(*eax2546 + al2547);
    *eax2548 = reinterpret_cast<signed char>(*eax2549 + al2550);
    *eax2551 = reinterpret_cast<signed char>(*eax2552 + al2553);
    *eax2554 = reinterpret_cast<signed char>(*eax2555 + al2556);
    *eax2557 = reinterpret_cast<signed char>(*eax2558 + al2559);
    *eax2560 = reinterpret_cast<signed char>(*eax2561 + al2562);
    *eax2563 = reinterpret_cast<signed char>(*eax2564 + al2565);
    *eax2566 = reinterpret_cast<signed char>(*eax2567 + al2568);
    *eax2569 = reinterpret_cast<signed char>(*eax2570 + al2571);
    *eax2572 = reinterpret_cast<signed char>(*eax2573 + al2574);
    *eax2575 = reinterpret_cast<signed char>(*eax2576 + al2577);
    *eax2578 = reinterpret_cast<signed char>(*eax2579 + al2580);
    *eax2581 = reinterpret_cast<signed char>(*eax2582 + al2583);
    *eax2584 = reinterpret_cast<signed char>(*eax2585 + al2586);
    *eax2587 = reinterpret_cast<signed char>(*eax2588 + al2589);
    *eax2590 = reinterpret_cast<signed char>(*eax2591 + al2592);
    *eax2593 = reinterpret_cast<signed char>(*eax2594 + al2595);
    *eax2596 = reinterpret_cast<signed char>(*eax2597 + al2598);
    *eax2599 = reinterpret_cast<signed char>(*eax2600 + al2601);
    *eax2602 = reinterpret_cast<signed char>(*eax2603 + al2604);
    *eax2605 = reinterpret_cast<signed char>(*eax2606 + al2607);
    *eax2608 = reinterpret_cast<signed char>(*eax2609 + al2610);
    *eax2611 = reinterpret_cast<signed char>(*eax2612 + al2613);
    *eax2614 = reinterpret_cast<signed char>(*eax2615 + al2616);
    *eax2617 = reinterpret_cast<signed char>(*eax2618 + al2619);
    *eax2620 = reinterpret_cast<signed char>(*eax2621 + al2622);
    *eax2623 = reinterpret_cast<signed char>(*eax2624 + al2625);
    *eax2626 = reinterpret_cast<signed char>(*eax2627 + al2628);
    *eax2629 = reinterpret_cast<signed char>(*eax2630 + al2631);
    *eax2632 = reinterpret_cast<signed char>(*eax2633 + al2634);
    *eax2635 = reinterpret_cast<signed char>(*eax2636 + al2637);
    *eax2638 = reinterpret_cast<signed char>(*eax2639 + al2640);
    *eax2641 = reinterpret_cast<signed char>(*eax2642 + al2643);
    *eax2644 = reinterpret_cast<signed char>(*eax2645 + al2646);
    *eax2647 = reinterpret_cast<signed char>(*eax2648 + al2649);
    *eax2650 = reinterpret_cast<signed char>(*eax2651 + al2652);
    *eax2653 = reinterpret_cast<signed char>(*eax2654 + al2655);
    *eax2656 = reinterpret_cast<signed char>(*eax2657 + al2658);
    *eax2659 = reinterpret_cast<signed char>(*eax2660 + al2661);
    *eax2662 = reinterpret_cast<signed char>(*eax2663 + al2664);
    *eax2665 = reinterpret_cast<signed char>(*eax2666 + al2667);
    *eax2668 = reinterpret_cast<signed char>(*eax2669 + al2670);
    *eax2671 = reinterpret_cast<signed char>(*eax2672 + al2673);
    *eax2674 = reinterpret_cast<signed char>(*eax2675 + al2676);
    *eax2677 = reinterpret_cast<signed char>(*eax2678 + al2679);
    *eax2680 = reinterpret_cast<signed char>(*eax2681 + al2682);
    *eax2683 = reinterpret_cast<signed char>(*eax2684 + al2685);
    *eax2686 = reinterpret_cast<signed char>(*eax2687 + al2688);
    *eax2689 = reinterpret_cast<signed char>(*eax2690 + al2691);
    *eax2692 = reinterpret_cast<signed char>(*eax2693 + al2694);
    *eax2695 = reinterpret_cast<signed char>(*eax2696 + al2697);
    *eax2698 = reinterpret_cast<signed char>(*eax2699 + al2700);
    *eax2701 = reinterpret_cast<signed char>(*eax2702 + al2703);
    *eax2704 = reinterpret_cast<signed char>(*eax2705 + al2706);
    *eax2707 = reinterpret_cast<signed char>(*eax2708 + al2709);
    *eax2710 = reinterpret_cast<signed char>(*eax2711 + al2712);
    *eax2713 = reinterpret_cast<signed char>(*eax2714 + al2715);
    *eax2716 = reinterpret_cast<signed char>(*eax2717 + al2718);
    *eax2719 = reinterpret_cast<signed char>(*eax2720 + al2721);
    *eax2722 = reinterpret_cast<signed char>(*eax2723 + al2724);
    *eax2725 = reinterpret_cast<signed char>(*eax2726 + al2727);
    *eax2728 = reinterpret_cast<signed char>(*eax2729 + al2730);
    *eax2731 = reinterpret_cast<signed char>(*eax2732 + al2733);
    *eax2734 = reinterpret_cast<signed char>(*eax2735 + al2736);
    *eax2737 = reinterpret_cast<signed char>(*eax2738 + al2739);
    *eax2740 = reinterpret_cast<signed char>(*eax2741 + al2742);
    *eax2743 = reinterpret_cast<signed char>(*eax2744 + al2745);
    *eax2746 = reinterpret_cast<signed char>(*eax2747 + al2748);
    *eax2749 = reinterpret_cast<signed char>(*eax2750 + al2751);
    *eax2752 = reinterpret_cast<signed char>(*eax2753 + al2754);
    *eax2755 = reinterpret_cast<signed char>(*eax2756 + al2757);
    *eax2758 = reinterpret_cast<signed char>(*eax2759 + al2760);
    *eax2761 = reinterpret_cast<signed char>(*eax2762 + al2763);
    *eax2764 = reinterpret_cast<signed char>(*eax2765 + al2766);
    *eax2767 = reinterpret_cast<signed char>(*eax2768 + al2769);
    *eax2770 = reinterpret_cast<signed char>(*eax2771 + al2772);
    *eax2773 = reinterpret_cast<signed char>(*eax2774 + al2775);
    *eax2776 = reinterpret_cast<signed char>(*eax2777 + al2778);
    *eax2779 = reinterpret_cast<signed char>(*eax2780 + al2781);
    *eax2782 = reinterpret_cast<signed char>(*eax2783 + al2784);
    *eax2785 = reinterpret_cast<signed char>(*eax2786 + al2787);
    *eax2788 = reinterpret_cast<signed char>(*eax2789 + al2790);
    *eax2791 = reinterpret_cast<signed char>(*eax2792 + al2793);
    *eax2794 = reinterpret_cast<signed char>(*eax2795 + al2796);
    *eax2797 = reinterpret_cast<signed char>(*eax2798 + al2799);
    *eax2800 = reinterpret_cast<signed char>(*eax2801 + al2802);
    *eax2803 = reinterpret_cast<signed char>(*eax2804 + al2805);
    *eax2806 = reinterpret_cast<signed char>(*eax2807 + al2808);
    *eax2809 = reinterpret_cast<signed char>(*eax2810 + al2811);
    *eax2812 = reinterpret_cast<signed char>(*eax2813 + al2814);
    *eax2815 = reinterpret_cast<signed char>(*eax2816 + al2817);
    *eax2818 = reinterpret_cast<signed char>(*eax2819 + al2820);
    *eax2821 = reinterpret_cast<signed char>(*eax2822 + al2823);
    *eax2824 = reinterpret_cast<signed char>(*eax2825 + al2826);
    *eax2827 = reinterpret_cast<signed char>(*eax2828 + al2829);
    *eax2830 = reinterpret_cast<signed char>(*eax2831 + al2832);
    *eax2833 = reinterpret_cast<signed char>(*eax2834 + al2835);
    *eax2836 = reinterpret_cast<signed char>(*eax2837 + al2838);
    *eax2839 = reinterpret_cast<signed char>(*eax2840 + al2841);
    *eax2842 = reinterpret_cast<signed char>(*eax2843 + al2844);
    *eax2845 = reinterpret_cast<signed char>(*eax2846 + al2847);
    *eax2848 = reinterpret_cast<signed char>(*eax2849 + al2850);
    *eax2851 = reinterpret_cast<signed char>(*eax2852 + al2853);
    *eax2854 = reinterpret_cast<signed char>(*eax2855 + al2856);
    *eax2857 = reinterpret_cast<signed char>(*eax2858 + al2859);
    *eax2860 = reinterpret_cast<signed char>(*eax2861 + al2862);
    *eax2863 = reinterpret_cast<signed char>(*eax2864 + al2865);
    *eax2866 = reinterpret_cast<signed char>(*eax2867 + al2868);
    *eax2869 = reinterpret_cast<signed char>(*eax2870 + al2871);
    *eax2872 = reinterpret_cast<signed char>(*eax2873 + al2874);
    *eax2875 = reinterpret_cast<signed char>(*eax2876 + al2877);
    *eax2878 = reinterpret_cast<signed char>(*eax2879 + al2880);
    *eax2881 = reinterpret_cast<signed char>(*eax2882 + al2883);
    *eax2884 = reinterpret_cast<signed char>(*eax2885 + al2886);
    *eax2887 = reinterpret_cast<signed char>(*eax2888 + al2889);
    *eax2890 = reinterpret_cast<signed char>(*eax2891 + al2892);
    *eax2893 = reinterpret_cast<signed char>(*eax2894 + al2895);
    *eax2896 = reinterpret_cast<signed char>(*eax2897 + al2898);
    *eax2899 = reinterpret_cast<signed char>(*eax2900 + al2901);
    *eax2902 = reinterpret_cast<signed char>(*eax2903 + al2904);
    *eax2905 = reinterpret_cast<signed char>(*eax2906 + al2907);
    *eax2908 = reinterpret_cast<signed char>(*eax2909 + al2910);
    *eax2911 = reinterpret_cast<signed char>(*eax2912 + al2913);
    *eax2914 = reinterpret_cast<signed char>(*eax2915 + al2916);
    *eax2917 = reinterpret_cast<signed char>(*eax2918 + al2919);
    *eax2920 = reinterpret_cast<signed char>(*eax2921 + al2922);
    *eax2923 = reinterpret_cast<signed char>(*eax2924 + al2925);
    *eax2926 = reinterpret_cast<signed char>(*eax2927 + al2928);
    *eax2929 = reinterpret_cast<signed char>(*eax2930 + al2931);
    *eax2932 = reinterpret_cast<signed char>(*eax2933 + al2934);
    *eax2935 = reinterpret_cast<signed char>(*eax2936 + al2937);
    *eax2938 = reinterpret_cast<signed char>(*eax2939 + al2940);
    *eax2941 = reinterpret_cast<signed char>(*eax2942 + al2943);
    *eax2944 = reinterpret_cast<signed char>(*eax2945 + al2946);
    *eax2947 = reinterpret_cast<signed char>(*eax2948 + al2949);
    *eax2950 = reinterpret_cast<signed char>(*eax2951 + al2952);
    *eax2953 = reinterpret_cast<signed char>(*eax2954 + al2955);
    *eax2956 = reinterpret_cast<signed char>(*eax2957 + al2958);
    *eax2959 = reinterpret_cast<signed char>(*eax2960 + al2961);
    *eax2962 = reinterpret_cast<signed char>(*eax2963 + al2964);
    *eax2965 = reinterpret_cast<signed char>(*eax2966 + al2967);
    *eax2968 = reinterpret_cast<signed char>(*eax2969 + al2970);
    *eax2971 = reinterpret_cast<signed char>(*eax2972 + al2973);
    *eax2974 = reinterpret_cast<signed char>(*eax2975 + al2976);
    *eax2977 = reinterpret_cast<signed char>(*eax2978 + al2979);
    *eax2980 = reinterpret_cast<signed char>(*eax2981 + al2982);
    *eax2983 = reinterpret_cast<signed char>(*eax2984 + al2985);
    *eax2986 = reinterpret_cast<signed char>(*eax2987 + al2988);
    *eax2989 = reinterpret_cast<signed char>(*eax2990 + al2991);
    *eax2992 = reinterpret_cast<signed char>(*eax2993 + al2994);
    *eax2995 = reinterpret_cast<signed char>(*eax2996 + al2997);
    *eax2998 = reinterpret_cast<signed char>(*eax2999 + al3000);
    *eax3001 = reinterpret_cast<signed char>(*eax3002 + al3003);
    *eax3004 = reinterpret_cast<signed char>(*eax3005 + al3006);
    *eax3007 = reinterpret_cast<signed char>(*eax3008 + al3009);
    *eax3010 = reinterpret_cast<signed char>(*eax3011 + al3012);
    *eax3013 = reinterpret_cast<signed char>(*eax3014 + al3015);
    *eax3016 = reinterpret_cast<signed char>(*eax3017 + al3018);
    *eax3019 = reinterpret_cast<signed char>(*eax3020 + al3021);
    *eax3022 = reinterpret_cast<signed char>(*eax3023 + al3024);
    *eax3025 = reinterpret_cast<signed char>(*eax3026 + al3027);
    *eax3028 = reinterpret_cast<signed char>(*eax3029 + al3030);
    *eax3031 = reinterpret_cast<signed char>(*eax3032 + al3033);
    *eax3034 = reinterpret_cast<signed char>(*eax3035 + al3036);
    *eax3037 = reinterpret_cast<signed char>(*eax3038 + al3039);
    *eax3040 = reinterpret_cast<signed char>(*eax3041 + al3042);
    *eax3043 = reinterpret_cast<signed char>(*eax3044 + al3045);
    *eax3046 = reinterpret_cast<signed char>(*eax3047 + al3048);
    *eax3049 = reinterpret_cast<signed char>(*eax3050 + al3051);
    *eax3052 = reinterpret_cast<signed char>(*eax3053 + al3054);
    *eax3055 = reinterpret_cast<signed char>(*eax3056 + al3057);
    *eax3058 = reinterpret_cast<signed char>(*eax3059 + al3060);
    *eax3061 = reinterpret_cast<signed char>(*eax3062 + al3063);
    *eax3064 = reinterpret_cast<signed char>(*eax3065 + al3066);
    *eax3067 = reinterpret_cast<signed char>(*eax3068 + al3069);
    *eax3070 = reinterpret_cast<signed char>(*eax3071 + al3072);
    *eax3073 = reinterpret_cast<signed char>(*eax3074 + al3075);
    *eax3076 = reinterpret_cast<signed char>(*eax3077 + al3078);
    *eax3079 = reinterpret_cast<signed char>(*eax3080 + al3081);
    *eax3082 = reinterpret_cast<signed char>(*eax3083 + al3084);
    *eax3085 = reinterpret_cast<signed char>(*eax3086 + al3087);
    *eax3088 = reinterpret_cast<signed char>(*eax3089 + al3090);
    *eax3091 = reinterpret_cast<signed char>(*eax3092 + al3093);
    *eax3094 = reinterpret_cast<signed char>(*eax3095 + al3096);
    *eax3097 = reinterpret_cast<signed char>(*eax3098 + al3099);
    *eax3100 = reinterpret_cast<signed char>(*eax3101 + al3102);
    *eax3103 = reinterpret_cast<signed char>(*eax3104 + al3105);
    *eax3106 = reinterpret_cast<signed char>(*eax3107 + al3108);
    *eax3109 = reinterpret_cast<signed char>(*eax3110 + al3111);
    *eax3112 = reinterpret_cast<signed char>(*eax3113 + al3114);
    *eax3115 = reinterpret_cast<signed char>(*eax3116 + al3117);
    *eax3118 = reinterpret_cast<signed char>(*eax3119 + al3120);
    *eax3121 = reinterpret_cast<signed char>(*eax3122 + al3123);
    *eax3124 = reinterpret_cast<signed char>(*eax3125 + al3126);
    *eax3127 = reinterpret_cast<signed char>(*eax3128 + al3129);
    *eax3130 = reinterpret_cast<signed char>(*eax3131 + al3132);
    *eax3133 = reinterpret_cast<signed char>(*eax3134 + al3135);
    *eax3136 = reinterpret_cast<signed char>(*eax3137 + al3138);
    *eax3139 = reinterpret_cast<signed char>(*eax3140 + al3141);
    *eax3142 = reinterpret_cast<signed char>(*eax3143 + al3144);
    *eax3145 = reinterpret_cast<signed char>(*eax3146 + al3147);
    *eax3148 = reinterpret_cast<signed char>(*eax3149 + al3150);
    *eax3151 = reinterpret_cast<signed char>(*eax3152 + al3153);
    *eax3154 = reinterpret_cast<signed char>(*eax3155 + al3156);
    *eax3157 = reinterpret_cast<signed char>(*eax3158 + al3159);
    *eax3160 = reinterpret_cast<signed char>(*eax3161 + al3162);
    *eax3163 = reinterpret_cast<signed char>(*eax3164 + al3165);
    *eax3166 = reinterpret_cast<signed char>(*eax3167 + al3168);
    *eax3169 = reinterpret_cast<signed char>(*eax3170 + al3171);
    *eax3172 = reinterpret_cast<signed char>(*eax3173 + al3174);
    *eax3175 = reinterpret_cast<signed char>(*eax3176 + al3177);
    *eax3178 = reinterpret_cast<signed char>(*eax3179 + al3180);
    *eax3181 = reinterpret_cast<signed char>(*eax3182 + al3183);
    *eax3184 = reinterpret_cast<signed char>(*eax3185 + al3186);
    *eax3187 = reinterpret_cast<signed char>(*eax3188 + al3189);
    *eax3190 = reinterpret_cast<signed char>(*eax3191 + al3192);
    *eax3193 = reinterpret_cast<signed char>(*eax3194 + al3195);
    *eax3196 = reinterpret_cast<signed char>(*eax3197 + al3198);
    *eax3199 = reinterpret_cast<signed char>(*eax3200 + al3201);
    *eax3202 = reinterpret_cast<signed char>(*eax3203 + al3204);
    *eax3205 = reinterpret_cast<signed char>(*eax3206 + al3207);
    *eax3208 = reinterpret_cast<signed char>(*eax3209 + al3210);
    *eax3211 = reinterpret_cast<signed char>(*eax3212 + al3213);
    *eax3214 = reinterpret_cast<signed char>(*eax3215 + al3216);
    *eax3217 = reinterpret_cast<signed char>(*eax3218 + al3219);
    *eax3220 = reinterpret_cast<signed char>(*eax3221 + al3222);
    *eax3223 = reinterpret_cast<signed char>(*eax3224 + al3225);
    *eax3226 = reinterpret_cast<signed char>(*eax3227 + al3228);
    *eax3229 = reinterpret_cast<signed char>(*eax3230 + al3231);
    *eax3232 = reinterpret_cast<signed char>(*eax3233 + al3234);
    *eax3235 = reinterpret_cast<signed char>(*eax3236 + al3237);
    *eax3238 = reinterpret_cast<signed char>(*eax3239 + al3240);
    *eax3241 = reinterpret_cast<signed char>(*eax3242 + al3243);
    *eax3244 = reinterpret_cast<signed char>(*eax3245 + al3246);
    *eax3247 = reinterpret_cast<signed char>(*eax3248 + al3249);
    *eax3250 = reinterpret_cast<signed char>(*eax3251 + al3252);
    *eax3253 = reinterpret_cast<signed char>(*eax3254 + al3255);
    *eax3256 = reinterpret_cast<signed char>(*eax3257 + al3258);
    *eax3259 = reinterpret_cast<signed char>(*eax3260 + al3261);
    *eax3262 = reinterpret_cast<signed char>(*eax3263 + al3264);
    *eax3265 = reinterpret_cast<signed char>(*eax3266 + al3267);
    *eax3268 = reinterpret_cast<signed char>(*eax3269 + al3270);
    *eax3271 = reinterpret_cast<signed char>(*eax3272 + al3273);
    *eax3274 = reinterpret_cast<signed char>(*eax3275 + al3276);
    *eax3277 = reinterpret_cast<signed char>(*eax3278 + al3279);
    *eax3280 = reinterpret_cast<signed char>(*eax3281 + al3282);
    *eax3283 = reinterpret_cast<signed char>(*eax3284 + al3285);
    *eax3286 = reinterpret_cast<signed char>(*eax3287 + al3288);
    *eax3289 = reinterpret_cast<signed char>(*eax3290 + al3291);
    *eax3292 = reinterpret_cast<signed char>(*eax3293 + al3294);
    *eax3295 = reinterpret_cast<signed char>(*eax3296 + al3297);
    *eax3298 = reinterpret_cast<signed char>(*eax3299 + al3300);
    *eax3301 = reinterpret_cast<signed char>(*eax3302 + al3303);
    *eax3304 = reinterpret_cast<signed char>(*eax3305 + al3306);
    *eax3307 = reinterpret_cast<signed char>(*eax3308 + al3309);
    *eax3310 = reinterpret_cast<signed char>(*eax3311 + al3312);
    *eax3313 = reinterpret_cast<signed char>(*eax3314 + al3315);
    *eax3316 = reinterpret_cast<signed char>(*eax3317 + al3318);
    *eax3319 = reinterpret_cast<signed char>(*eax3320 + al3321);
    *eax3322 = reinterpret_cast<signed char>(*eax3323 + al3324);
    *eax3325 = reinterpret_cast<signed char>(*eax3326 + al3327);
    *eax3328 = reinterpret_cast<signed char>(*eax3329 + al3330);
    *eax3331 = reinterpret_cast<signed char>(*eax3332 + al3333);
    *eax3334 = reinterpret_cast<signed char>(*eax3335 + al3336);
    *eax3337 = reinterpret_cast<signed char>(*eax3338 + al3339);
    *eax3340 = reinterpret_cast<signed char>(*eax3341 + al3342);
    *eax3343 = reinterpret_cast<signed char>(*eax3344 + al3345);
    *eax3346 = reinterpret_cast<signed char>(*eax3347 + al3348);
    *eax3349 = reinterpret_cast<signed char>(*eax3350 + al3351);
    *eax3352 = reinterpret_cast<signed char>(*eax3353 + al3354);
    *eax3355 = reinterpret_cast<signed char>(*eax3356 + al3357);
    *eax3358 = reinterpret_cast<signed char>(*eax3359 + al3360);
    *eax3361 = reinterpret_cast<signed char>(*eax3362 + al3363);
    *eax3364 = reinterpret_cast<signed char>(*eax3365 + al3366);
    *eax3367 = reinterpret_cast<signed char>(*eax3368 + al3369);
    *eax3370 = reinterpret_cast<signed char>(*eax3371 + al3372);
    *eax3373 = reinterpret_cast<signed char>(*eax3374 + al3375);
    *eax3376 = reinterpret_cast<signed char>(*eax3377 + al3378);
    *eax3379 = reinterpret_cast<signed char>(*eax3380 + al3381);
    *eax3382 = reinterpret_cast<signed char>(*eax3383 + al3384);
    *eax3385 = reinterpret_cast<signed char>(*eax3386 + al3387);
    *eax3388 = reinterpret_cast<signed char>(*eax3389 + al3390);
    *eax3391 = reinterpret_cast<signed char>(*eax3392 + al3393);
    *eax3394 = reinterpret_cast<signed char>(*eax3395 + al3396);
    *eax3397 = reinterpret_cast<signed char>(*eax3398 + al3399);
    *eax3400 = reinterpret_cast<signed char>(*eax3401 + al3402);
    *eax3403 = reinterpret_cast<signed char>(*eax3404 + al3405);
    *eax3406 = reinterpret_cast<signed char>(*eax3407 + al3408);
    *eax3409 = reinterpret_cast<signed char>(*eax3410 + al3411);
    *eax3412 = reinterpret_cast<signed char>(*eax3413 + al3414);
    *eax3415 = reinterpret_cast<signed char>(*eax3416 + al3417);
    *eax3418 = reinterpret_cast<signed char>(*eax3419 + al3420);
    *eax3421 = reinterpret_cast<signed char>(*eax3422 + al3423);
    *eax3424 = reinterpret_cast<signed char>(*eax3425 + al3426);
    *eax3427 = reinterpret_cast<signed char>(*eax3428 + al3429);
    *eax3430 = reinterpret_cast<signed char>(*eax3431 + al3432);
    *eax3433 = reinterpret_cast<signed char>(*eax3434 + al3435);
    *eax3436 = reinterpret_cast<signed char>(*eax3437 + al3438);
    *eax3439 = reinterpret_cast<signed char>(*eax3440 + al3441);
    *eax3442 = reinterpret_cast<signed char>(*eax3443 + al3444);
    *eax3445 = reinterpret_cast<signed char>(*eax3446 + al3447);
    *eax3448 = reinterpret_cast<signed char>(*eax3449 + al3450);
    *eax3451 = reinterpret_cast<signed char>(*eax3452 + al3453);
    *eax3454 = reinterpret_cast<signed char>(*eax3455 + al3456);
    *eax3457 = reinterpret_cast<signed char>(*eax3458 + al3459);
    *eax3460 = reinterpret_cast<signed char>(*eax3461 + al3462);
    *eax3463 = reinterpret_cast<signed char>(*eax3464 + al3465);
    *eax3466 = reinterpret_cast<signed char>(*eax3467 + al3468);
    *eax3469 = reinterpret_cast<signed char>(*eax3470 + al3471);
    *eax3472 = reinterpret_cast<signed char>(*eax3473 + al3474);
    *eax3475 = reinterpret_cast<signed char>(*eax3476 + al3477);
    *eax3478 = reinterpret_cast<signed char>(*eax3479 + al3480);
    *eax3481 = reinterpret_cast<signed char>(*eax3482 + al3483);
    *eax3484 = reinterpret_cast<signed char>(*eax3485 + al3486);
    *eax3487 = reinterpret_cast<signed char>(*eax3488 + al3489);
    *eax3490 = reinterpret_cast<signed char>(*eax3491 + al3492);
    *eax3493 = reinterpret_cast<signed char>(*eax3494 + al3495);
    *eax3496 = reinterpret_cast<signed char>(*eax3497 + al3498);
    *eax3499 = reinterpret_cast<signed char>(*eax3500 + al3501);
    *eax3502 = reinterpret_cast<signed char>(*eax3503 + al3504);
    *eax3505 = reinterpret_cast<signed char>(*eax3506 + al3507);
    *eax3508 = reinterpret_cast<signed char>(*eax3509 + al3510);
    *eax3511 = reinterpret_cast<signed char>(*eax3512 + al3513);
    *eax3514 = reinterpret_cast<signed char>(*eax3515 + al3516);
    *eax3517 = reinterpret_cast<signed char>(*eax3518 + al3519);
    *eax3520 = reinterpret_cast<signed char>(*eax3521 + al3522);
    *eax3523 = reinterpret_cast<signed char>(*eax3524 + al3525);
    *eax3526 = reinterpret_cast<signed char>(*eax3527 + al3528);
    *eax3529 = reinterpret_cast<signed char>(*eax3530 + al3531);
    *eax3532 = reinterpret_cast<signed char>(*eax3533 + al3534);
    *eax3535 = reinterpret_cast<signed char>(*eax3536 + al3537);
    *eax3538 = reinterpret_cast<signed char>(*eax3539 + al3540);
    *eax3541 = reinterpret_cast<signed char>(*eax3542 + al3543);
    *eax3544 = reinterpret_cast<signed char>(*eax3545 + al3546);
    *eax3547 = reinterpret_cast<signed char>(*eax3548 + al3549);
    *eax3550 = reinterpret_cast<signed char>(*eax3551 + al3552);
    *eax3553 = reinterpret_cast<signed char>(*eax3554 + al3555);
    *eax3556 = reinterpret_cast<signed char>(*eax3557 + al3558);
    *eax3559 = reinterpret_cast<signed char>(*eax3560 + al3561);
    *eax3562 = reinterpret_cast<signed char>(*eax3563 + al3564);
    *eax3565 = reinterpret_cast<signed char>(*eax3566 + al3567);
    *eax3568 = reinterpret_cast<signed char>(*eax3569 + al3570);
    *eax3571 = reinterpret_cast<signed char>(*eax3572 + al3573);
    *eax3574 = reinterpret_cast<signed char>(*eax3575 + al3576);
    *eax3577 = reinterpret_cast<signed char>(*eax3578 + al3579);
    *eax3580 = reinterpret_cast<signed char>(*eax3581 + al3582);
    *eax3583 = reinterpret_cast<signed char>(*eax3584 + al3585);
    *eax3586 = reinterpret_cast<signed char>(*eax3587 + al3588);
    *eax3589 = reinterpret_cast<signed char>(*eax3590 + al3591);
    *eax3592 = reinterpret_cast<signed char>(*eax3593 + al3594);
    *eax3595 = reinterpret_cast<signed char>(*eax3596 + al3597);
    *eax3598 = reinterpret_cast<signed char>(*eax3599 + al3600);
    *eax3601 = reinterpret_cast<signed char>(*eax3602 + al3603);
    *eax3604 = reinterpret_cast<signed char>(*eax3605 + al3606);
    *eax3607 = reinterpret_cast<signed char>(*eax3608 + al3609);
    *eax3610 = reinterpret_cast<signed char>(*eax3611 + al3612);
    *eax3613 = reinterpret_cast<signed char>(*eax3614 + al3615);
    *eax3616 = reinterpret_cast<signed char>(*eax3617 + al3618);
    *eax3619 = reinterpret_cast<signed char>(*eax3620 + al3621);
    *eax3622 = reinterpret_cast<signed char>(*eax3623 + al3624);
    *eax3625 = reinterpret_cast<signed char>(*eax3626 + al3627);
    *eax3628 = reinterpret_cast<signed char>(*eax3629 + al3630);
    *eax3631 = reinterpret_cast<signed char>(*eax3632 + al3633);
    *eax3634 = reinterpret_cast<signed char>(*eax3635 + al3636);
    *eax3637 = reinterpret_cast<signed char>(*eax3638 + al3639);
    *eax3640 = reinterpret_cast<signed char>(*eax3641 + al3642);
    *eax3643 = reinterpret_cast<signed char>(*eax3644 + al3645);
    *eax3646 = reinterpret_cast<signed char>(*eax3647 + al3648);
    *eax3649 = reinterpret_cast<signed char>(*eax3650 + al3651);
    *eax3652 = reinterpret_cast<signed char>(*eax3653 + al3654);
    *eax3655 = reinterpret_cast<signed char>(*eax3656 + al3657);
    *eax3658 = reinterpret_cast<signed char>(*eax3659 + al3660);
    *eax3661 = reinterpret_cast<signed char>(*eax3662 + al3663);
    *eax3664 = reinterpret_cast<signed char>(*eax3665 + al3666);
    *eax3667 = reinterpret_cast<signed char>(*eax3668 + al3669);
    *eax3670 = reinterpret_cast<signed char>(*eax3671 + al3672);
    *eax3673 = reinterpret_cast<signed char>(*eax3674 + al3675);
    *eax3676 = reinterpret_cast<signed char>(*eax3677 + al3678);
    *eax3679 = reinterpret_cast<signed char>(*eax3680 + al3681);
    *eax3682 = reinterpret_cast<signed char>(*eax3683 + al3684);
    *eax3685 = reinterpret_cast<signed char>(*eax3686 + al3687);
    *eax3688 = reinterpret_cast<signed char>(*eax3689 + al3690);
    *eax3691 = reinterpret_cast<signed char>(*eax3692 + al3693);
    *eax3694 = reinterpret_cast<signed char>(*eax3695 + al3696);
    *eax3697 = reinterpret_cast<signed char>(*eax3698 + al3699);
    *eax3700 = reinterpret_cast<signed char>(*eax3701 + al3702);
    *eax3703 = reinterpret_cast<signed char>(*eax3704 + al3705);
    *eax3706 = reinterpret_cast<signed char>(*eax3707 + al3708);
    *eax3709 = reinterpret_cast<signed char>(*eax3710 + al3711);
    *eax3712 = reinterpret_cast<signed char>(*eax3713 + al3714);
    *eax3715 = reinterpret_cast<signed char>(*eax3716 + al3717);
    *eax3718 = reinterpret_cast<signed char>(*eax3719 + al3720);
    *eax3721 = reinterpret_cast<signed char>(*eax3722 + al3723);
    *eax3724 = reinterpret_cast<signed char>(*eax3725 + al3726);
    *eax3727 = reinterpret_cast<signed char>(*eax3728 + al3729);
    *eax3730 = reinterpret_cast<signed char>(*eax3731 + al3732);
    *eax3733 = reinterpret_cast<signed char>(*eax3734 + al3735);
    *eax3736 = reinterpret_cast<signed char>(*eax3737 + al3738);
    *eax3739 = reinterpret_cast<signed char>(*eax3740 + al3741);
    *eax3742 = reinterpret_cast<signed char>(*eax3743 + al3744);
    *eax3745 = reinterpret_cast<signed char>(*eax3746 + al3747);
    *eax3748 = reinterpret_cast<signed char>(*eax3749 + al3750);
    *eax3751 = reinterpret_cast<signed char>(*eax3752 + al3753);
    *eax3754 = reinterpret_cast<signed char>(*eax3755 + al3756);
    *eax3757 = reinterpret_cast<signed char>(*eax3758 + al3759);
    *eax3760 = reinterpret_cast<signed char>(*eax3761 + al3762);
    *eax3763 = reinterpret_cast<signed char>(*eax3764 + al3765);
    *eax3766 = reinterpret_cast<signed char>(*eax3767 + al3768);
    *eax3769 = reinterpret_cast<signed char>(*eax3770 + al3771);
    *eax3772 = reinterpret_cast<signed char>(*eax3773 + al3774);
    *eax3775 = reinterpret_cast<signed char>(*eax3776 + al3777);
    *eax3778 = reinterpret_cast<signed char>(*eax3779 + al3780);
    *eax3781 = reinterpret_cast<signed char>(*eax3782 + al3783);
    *eax3784 = reinterpret_cast<signed char>(*eax3785 + al3786);
    *eax3787 = reinterpret_cast<signed char>(*eax3788 + al3789);
    *eax3790 = reinterpret_cast<signed char>(*eax3791 + al3792);
    *eax3793 = reinterpret_cast<signed char>(*eax3794 + al3795);
    *eax3796 = reinterpret_cast<signed char>(*eax3797 + al3798);
    *eax3799 = reinterpret_cast<signed char>(*eax3800 + al3801);
    *eax3802 = reinterpret_cast<signed char>(*eax3803 + al3804);
    *eax3805 = reinterpret_cast<signed char>(*eax3806 + al3807);
    *eax3808 = reinterpret_cast<signed char>(*eax3809 + al3810);
    *eax3811 = reinterpret_cast<signed char>(*eax3812 + al3813);
    *eax3814 = reinterpret_cast<signed char>(*eax3815 + al3816);
    *eax3817 = reinterpret_cast<signed char>(*eax3818 + al3819);
    *eax3820 = reinterpret_cast<signed char>(*eax3821 + al3822);
    *eax3823 = reinterpret_cast<signed char>(*eax3824 + al3825);
    *eax3826 = reinterpret_cast<signed char>(*eax3827 + al3828);
    *eax3829 = reinterpret_cast<signed char>(*eax3830 + al3831);
    *eax3832 = reinterpret_cast<signed char>(*eax3833 + al3834);
    *eax3835 = reinterpret_cast<signed char>(*eax3836 + al3837);
    *eax3838 = reinterpret_cast<signed char>(*eax3839 + al3840);
    *eax3841 = reinterpret_cast<signed char>(*eax3842 + al3843);
    *eax3844 = reinterpret_cast<signed char>(*eax3845 + al3846);
    *eax3847 = reinterpret_cast<signed char>(*eax3848 + al3849);
    *eax3850 = reinterpret_cast<signed char>(*eax3851 + al3852);
    *eax3853 = reinterpret_cast<signed char>(*eax3854 + al3855);
    *eax3856 = reinterpret_cast<signed char>(*eax3857 + al3858);
    *eax3859 = reinterpret_cast<signed char>(*eax3860 + al3861);
    *eax3862 = reinterpret_cast<signed char>(*eax3863 + al3864);
    *eax3865 = reinterpret_cast<signed char>(*eax3866 + al3867);
    *eax3868 = reinterpret_cast<signed char>(*eax3869 + al3870);
    *eax3871 = reinterpret_cast<signed char>(*eax3872 + al3873);
    *eax3874 = reinterpret_cast<signed char>(*eax3875 + al3876);
    *eax3877 = reinterpret_cast<signed char>(*eax3878 + al3879);
    *eax3880 = reinterpret_cast<signed char>(*eax3881 + al3882);
    *eax3883 = reinterpret_cast<signed char>(*eax3884 + al3885);
    *eax3886 = reinterpret_cast<signed char>(*eax3887 + al3888);
    *eax3889 = reinterpret_cast<signed char>(*eax3890 + al3891);
    *eax3892 = reinterpret_cast<signed char>(*eax3893 + al3894);
    *eax3895 = reinterpret_cast<signed char>(*eax3896 + al3897);
    *eax3898 = reinterpret_cast<signed char>(*eax3899 + al3900);
    *eax3901 = reinterpret_cast<signed char>(*eax3902 + al3903);
    *eax3904 = reinterpret_cast<signed char>(*eax3905 + al3906);
    *eax3907 = reinterpret_cast<signed char>(*eax3908 + al3909);
    *eax3910 = reinterpret_cast<signed char>(*eax3911 + al3912);
    *eax3913 = reinterpret_cast<signed char>(*eax3914 + al3915);
    *eax3916 = reinterpret_cast<signed char>(*eax3917 + al3918);
    *eax3919 = reinterpret_cast<signed char>(*eax3920 + al3921);
    *eax3922 = reinterpret_cast<signed char>(*eax3923 + al3924);
    *eax3925 = reinterpret_cast<signed char>(*eax3926 + al3927);
    *eax3928 = reinterpret_cast<signed char>(*eax3929 + al3930);
    *eax3931 = reinterpret_cast<signed char>(*eax3932 + al3933);
    *eax3934 = reinterpret_cast<signed char>(*eax3935 + al3936);
    *eax3937 = reinterpret_cast<signed char>(*eax3938 + al3939);
    *eax3940 = reinterpret_cast<signed char>(*eax3941 + al3942);
    *eax3943 = reinterpret_cast<signed char>(*eax3944 + al3945);
    *eax3946 = reinterpret_cast<signed char>(*eax3947 + al3948);
    *eax3949 = reinterpret_cast<signed char>(*eax3950 + al3951);
    *eax3952 = reinterpret_cast<signed char>(*eax3953 + al3954);
    *eax3955 = reinterpret_cast<signed char>(*eax3956 + al3957);
    *eax3958 = reinterpret_cast<signed char>(*eax3959 + al3960);
    *eax3961 = reinterpret_cast<signed char>(*eax3962 + al3963);
    *eax3964 = reinterpret_cast<signed char>(*eax3965 + al3966);
    *eax3967 = reinterpret_cast<signed char>(*eax3968 + al3969);
    *eax3970 = reinterpret_cast<signed char>(*eax3971 + al3972);
    *eax3973 = reinterpret_cast<signed char>(*eax3974 + al3975);
    *eax3976 = reinterpret_cast<signed char>(*eax3977 + al3978);
    *eax3979 = reinterpret_cast<signed char>(*eax3980 + al3981);
    *eax3982 = reinterpret_cast<signed char>(*eax3983 + al3984);
    *eax3985 = reinterpret_cast<signed char>(*eax3986 + al3987);
    *eax3988 = reinterpret_cast<signed char>(*eax3989 + al3990);
    *eax3991 = reinterpret_cast<signed char>(*eax3992 + al3993);
    *eax3994 = reinterpret_cast<signed char>(*eax3995 + al3996);
    *eax3997 = reinterpret_cast<signed char>(*eax3998 + al3999);
    *eax4000 = reinterpret_cast<signed char>(*eax4001 + al4002);
    *eax4003 = reinterpret_cast<signed char>(*eax4004 + al4005);
    *eax4006 = reinterpret_cast<signed char>(*eax4007 + al4008);
    *eax4009 = reinterpret_cast<signed char>(*eax4010 + al4011);
    *eax4012 = reinterpret_cast<signed char>(*eax4013 + al4014);
    *eax4015 = reinterpret_cast<signed char>(*eax4016 + al4017);
    *eax4018 = reinterpret_cast<signed char>(*eax4019 + al4020);
    *eax4021 = reinterpret_cast<signed char>(*eax4022 + al4023);
    *eax4024 = reinterpret_cast<signed char>(*eax4025 + al4026);
    *eax4027 = reinterpret_cast<signed char>(*eax4028 + al4029);
    *eax4030 = reinterpret_cast<signed char>(*eax4031 + al4032);
    *eax4033 = reinterpret_cast<signed char>(*eax4034 + al4035);
    *eax4036 = reinterpret_cast<signed char>(*eax4037 + al4038);
    *eax4039 = reinterpret_cast<signed char>(*eax4040 + al4041);
    *eax4042 = reinterpret_cast<signed char>(*eax4043 + al4044);
    *eax4045 = reinterpret_cast<signed char>(*eax4046 + al4047);
    *eax4048 = reinterpret_cast<signed char>(*eax4049 + al4050);
    *eax4051 = reinterpret_cast<signed char>(*eax4052 + al4053);
    *eax4054 = reinterpret_cast<signed char>(*eax4055 + al4056);
    *eax4057 = reinterpret_cast<signed char>(*eax4058 + al4059);
    *eax4060 = reinterpret_cast<signed char>(*eax4061 + al4062);
    *eax4063 = reinterpret_cast<signed char>(*eax4064 + al4065);
    *eax4066 = reinterpret_cast<signed char>(*eax4067 + al4068);
    *eax4069 = reinterpret_cast<signed char>(*eax4070 + al4071);
    *eax4072 = reinterpret_cast<signed char>(*eax4073 + al4074);
    *eax4075 = reinterpret_cast<signed char>(*eax4076 + al4077);
    *eax4078 = reinterpret_cast<signed char>(*eax4079 + al4080);
    *eax4081 = reinterpret_cast<signed char>(*eax4082 + al4083);
    *eax4084 = reinterpret_cast<signed char>(*eax4085 + al4086);
    *eax4087 = reinterpret_cast<signed char>(*eax4088 + al4089);
    *eax4090 = reinterpret_cast<signed char>(*eax4091 + al4092);
    *eax4093 = reinterpret_cast<signed char>(*eax4094 + al4095);
    *eax4096 = reinterpret_cast<signed char>(*eax4097 + al4098);
    *eax4099 = reinterpret_cast<signed char>(*eax4100 + al4101);
    *eax4102 = reinterpret_cast<signed char>(*eax4103 + al4104);
    *eax4105 = reinterpret_cast<signed char>(*eax4106 + al4107);
    *eax4108 = reinterpret_cast<signed char>(*eax4109 + al4110);
    *eax4111 = reinterpret_cast<signed char>(*eax4112 + al4113);
    *eax4114 = reinterpret_cast<signed char>(*eax4115 + al4116);
    *eax4117 = reinterpret_cast<signed char>(*eax4118 + al4119);
    *eax4120 = reinterpret_cast<signed char>(*eax4121 + al4122);
    *eax4123 = reinterpret_cast<signed char>(*eax4124 + al4125);
    *eax4126 = reinterpret_cast<signed char>(*eax4127 + al4128);
    *eax4129 = reinterpret_cast<signed char>(*eax4130 + al4131);
    *eax4132 = reinterpret_cast<signed char>(*eax4133 + al4134);
    *eax4135 = reinterpret_cast<signed char>(*eax4136 + al4137);
    *eax4138 = reinterpret_cast<signed char>(*eax4139 + al4140);
    *eax4141 = reinterpret_cast<signed char>(*eax4142 + al4143);
    *eax4144 = reinterpret_cast<signed char>(*eax4145 + al4146);
    *eax4147 = reinterpret_cast<signed char>(*eax4148 + al4149);
    *eax4150 = reinterpret_cast<signed char>(*eax4151 + al4152);
    *eax4153 = reinterpret_cast<signed char>(*eax4154 + al4155);
    *eax4156 = reinterpret_cast<signed char>(*eax4157 + al4158);
    *eax4159 = reinterpret_cast<signed char>(*eax4160 + al4161);
    *eax4162 = reinterpret_cast<signed char>(*eax4163 + al4164);
    *eax4165 = reinterpret_cast<signed char>(*eax4166 + al4167);
    *eax4168 = reinterpret_cast<signed char>(*eax4169 + al4170);
    *eax4171 = reinterpret_cast<signed char>(*eax4172 + al4173);
    *eax4174 = reinterpret_cast<signed char>(*eax4175 + al4176);
    *eax4177 = reinterpret_cast<signed char>(*eax4178 + al4179);
    *eax4180 = reinterpret_cast<signed char>(*eax4181 + al4182);
    *eax4183 = reinterpret_cast<signed char>(*eax4184 + al4185);
    *eax4186 = reinterpret_cast<signed char>(*eax4187 + al4188);
    *eax4189 = reinterpret_cast<signed char>(*eax4190 + al4191);
    *eax4192 = reinterpret_cast<signed char>(*eax4193 + al4194);
    *eax4195 = reinterpret_cast<signed char>(*eax4196 + al4197);
    *eax4198 = reinterpret_cast<signed char>(*eax4199 + al4200);
    *eax4201 = reinterpret_cast<signed char>(*eax4202 + al4203);
    *eax4204 = reinterpret_cast<signed char>(*eax4205 + al4206);
    *eax4207 = reinterpret_cast<signed char>(*eax4208 + al4209);
    *eax4210 = reinterpret_cast<signed char>(*eax4211 + al4212);
    *eax4213 = reinterpret_cast<signed char>(*eax4214 + al4215);
    *eax4216 = reinterpret_cast<signed char>(*eax4217 + al4218);
    *eax4219 = reinterpret_cast<signed char>(*eax4220 + al4221);
    *eax4222 = reinterpret_cast<signed char>(*eax4223 + al4224);
    *eax4225 = reinterpret_cast<signed char>(*eax4226 + al4227);
    *eax4228 = reinterpret_cast<signed char>(*eax4229 + al4230);
    *eax4231 = reinterpret_cast<signed char>(*eax4232 + al4233);
    *eax4234 = reinterpret_cast<signed char>(*eax4235 + al4236);
    *eax4237 = reinterpret_cast<signed char>(*eax4238 + al4239);
    *eax4240 = reinterpret_cast<signed char>(*eax4241 + al4242);
    *eax4243 = reinterpret_cast<signed char>(*eax4244 + al4245);
    *eax4246 = reinterpret_cast<signed char>(*eax4247 + al4248);
    *eax4249 = reinterpret_cast<signed char>(*eax4250 + al4251);
    *eax4252 = reinterpret_cast<signed char>(*eax4253 + al4254);
    *eax4255 = reinterpret_cast<signed char>(*eax4256 + al4257);
    *eax4258 = reinterpret_cast<signed char>(*eax4259 + al4260);
    *eax4261 = reinterpret_cast<signed char>(*eax4262 + al4263);
    *eax4264 = reinterpret_cast<signed char>(*eax4265 + al4266);
    *eax4267 = reinterpret_cast<signed char>(*eax4268 + al4269);
    *eax4270 = reinterpret_cast<signed char>(*eax4271 + al4272);
    *eax4273 = reinterpret_cast<signed char>(*eax4274 + al4275);
    *eax4276 = reinterpret_cast<signed char>(*eax4277 + al4278);
    *eax4279 = reinterpret_cast<signed char>(*eax4280 + al4281);
    *eax4282 = reinterpret_cast<signed char>(*eax4283 + al4284);
    *eax4285 = reinterpret_cast<signed char>(*eax4286 + al4287);
    *eax4288 = reinterpret_cast<signed char>(*eax4289 + al4290);
    *eax4291 = reinterpret_cast<signed char>(*eax4292 + al4293);
    *eax4294 = reinterpret_cast<signed char>(*eax4295 + al4296);
    *eax4297 = reinterpret_cast<signed char>(*eax4298 + al4299);
    *eax4300 = reinterpret_cast<signed char>(*eax4301 + al4302);
    *eax4303 = reinterpret_cast<signed char>(*eax4304 + al4305);
    *eax4306 = reinterpret_cast<signed char>(*eax4307 + al4308);
    *eax4309 = reinterpret_cast<signed char>(*eax4310 + al4311);
    *eax4312 = reinterpret_cast<signed char>(*eax4313 + al4314);
    *eax4315 = reinterpret_cast<signed char>(*eax4316 + al4317);
    *eax4318 = reinterpret_cast<signed char>(*eax4319 + al4320);
    *eax4321 = reinterpret_cast<signed char>(*eax4322 + al4323);
    *eax4324 = reinterpret_cast<signed char>(*eax4325 + al4326);
    *eax4327 = reinterpret_cast<signed char>(*eax4328 + al4329);
    *eax4330 = reinterpret_cast<signed char>(*eax4331 + al4332);
    *eax4333 = reinterpret_cast<signed char>(*eax4334 + al4335);
    *eax4336 = reinterpret_cast<signed char>(*eax4337 + al4338);
    *eax4339 = reinterpret_cast<signed char>(*eax4340 + al4341);
    *eax4342 = reinterpret_cast<signed char>(*eax4343 + al4344);
    *eax4345 = reinterpret_cast<signed char>(*eax4346 + al4347);
    *eax4348 = reinterpret_cast<signed char>(*eax4349 + al4350);
    *eax4351 = reinterpret_cast<signed char>(*eax4352 + al4353);
    *eax4354 = reinterpret_cast<signed char>(*eax4355 + al4356);
    *eax4357 = reinterpret_cast<signed char>(*eax4358 + al4359);
    *eax4360 = reinterpret_cast<signed char>(*eax4361 + al4362);
    *eax4363 = reinterpret_cast<signed char>(*eax4364 + al4365);
    *eax4366 = reinterpret_cast<signed char>(*eax4367 + al4368);
    *eax4369 = reinterpret_cast<signed char>(*eax4370 + al4371);
    *eax4372 = reinterpret_cast<signed char>(*eax4373 + al4374);
    *eax4375 = reinterpret_cast<signed char>(*eax4376 + al4377);
    *eax4378 = reinterpret_cast<signed char>(*eax4379 + al4380);
    *eax4381 = reinterpret_cast<signed char>(*eax4382 + al4383);
    *eax4384 = reinterpret_cast<signed char>(*eax4385 + al4386);
    *eax4387 = reinterpret_cast<signed char>(*eax4388 + al4389);
    *eax4390 = reinterpret_cast<signed char>(*eax4391 + al4392);
    *eax4393 = reinterpret_cast<signed char>(*eax4394 + al4395);
    *eax4396 = reinterpret_cast<signed char>(*eax4397 + al4398);
    *eax4399 = reinterpret_cast<signed char>(*eax4400 + al4401);
    *eax4402 = reinterpret_cast<signed char>(*eax4403 + al4404);
    *eax4405 = reinterpret_cast<signed char>(*eax4406 + al4407);
    *eax4408 = reinterpret_cast<signed char>(*eax4409 + al4410);
    *eax4411 = reinterpret_cast<signed char>(*eax4412 + al4413);
    *eax4414 = reinterpret_cast<signed char>(*eax4415 + al4416);
    *eax4417 = reinterpret_cast<signed char>(*eax4418 + al4419);
    *eax4420 = reinterpret_cast<signed char>(*eax4421 + al4422);
    *eax4423 = reinterpret_cast<signed char>(*eax4424 + al4425);
    *eax4426 = reinterpret_cast<signed char>(*eax4427 + al4428);
    *eax4429 = reinterpret_cast<signed char>(*eax4430 + al4431);
    *eax4432 = reinterpret_cast<signed char>(*eax4433 + al4434);
    *eax4435 = reinterpret_cast<signed char>(*eax4436 + al4437);
    *eax4438 = reinterpret_cast<signed char>(*eax4439 + al4440);
    *eax4441 = reinterpret_cast<signed char>(*eax4442 + al4443);
    *eax4444 = reinterpret_cast<signed char>(*eax4445 + al4446);
    *eax4447 = reinterpret_cast<signed char>(*eax4448 + al4449);
    *eax4450 = reinterpret_cast<signed char>(*eax4451 + al4452);
    *eax4453 = reinterpret_cast<signed char>(*eax4454 + al4455);
    *eax4456 = reinterpret_cast<signed char>(*eax4457 + al4458);
    *eax4459 = reinterpret_cast<signed char>(*eax4460 + al4461);
    *eax4462 = reinterpret_cast<signed char>(*eax4463 + al4464);
    *eax4465 = reinterpret_cast<signed char>(*eax4466 + al4467);
    *eax4468 = reinterpret_cast<signed char>(*eax4469 + al4470);
    *eax4471 = reinterpret_cast<signed char>(*eax4472 + al4473);
    *eax4474 = reinterpret_cast<signed char>(*eax4475 + al4476);
    *eax4477 = reinterpret_cast<signed char>(*eax4478 + al4479);
    *eax4480 = reinterpret_cast<signed char>(*eax4481 + al4482);
    *eax4483 = reinterpret_cast<signed char>(*eax4484 + al4485);
    *eax4486 = reinterpret_cast<signed char>(*eax4487 + al4488);
    *eax4489 = reinterpret_cast<signed char>(*eax4490 + al4491);
    *eax4492 = reinterpret_cast<signed char>(*eax4493 + al4494);
    *eax4495 = reinterpret_cast<signed char>(*eax4496 + al4497);
    *eax4498 = reinterpret_cast<signed char>(*eax4499 + al4500);
    *eax4501 = reinterpret_cast<signed char>(*eax4502 + al4503);
    *eax4504 = reinterpret_cast<signed char>(*eax4505 + al4506);
    *eax4507 = reinterpret_cast<signed char>(*eax4508 + al4509);
    *eax4510 = reinterpret_cast<signed char>(*eax4511 + al4512);
    *eax4513 = reinterpret_cast<signed char>(*eax4514 + al4515);
    *eax4516 = reinterpret_cast<signed char>(*eax4517 + al4518);
    *eax4519 = reinterpret_cast<signed char>(*eax4520 + al4521);
    *eax4522 = reinterpret_cast<signed char>(*eax4523 + al4524);
    *eax4525 = reinterpret_cast<signed char>(*eax4526 + al4527);
    *eax4528 = reinterpret_cast<signed char>(*eax4529 + al4530);
    *eax4531 = reinterpret_cast<signed char>(*eax4532 + al4533);
    *eax4534 = reinterpret_cast<signed char>(*eax4535 + al4536);
    *eax4537 = reinterpret_cast<signed char>(*eax4538 + al4539);
    *eax4540 = reinterpret_cast<signed char>(*eax4541 + al4542);
    *eax4543 = reinterpret_cast<signed char>(*eax4544 + al4545);
    *eax4546 = reinterpret_cast<signed char>(*eax4547 + al4548);
    *eax4549 = reinterpret_cast<signed char>(*eax4550 + al4551);
    *eax4552 = reinterpret_cast<signed char>(*eax4553 + al4554);
    *eax4555 = reinterpret_cast<signed char>(*eax4556 + al4557);
    *eax4558 = reinterpret_cast<signed char>(*eax4559 + al4560);
    *eax4561 = reinterpret_cast<signed char>(*eax4562 + al4563);
    *eax4564 = reinterpret_cast<signed char>(*eax4565 + al4566);
    *eax4567 = reinterpret_cast<signed char>(*eax4568 + al4569);
    *eax4570 = reinterpret_cast<signed char>(*eax4571 + al4572);
    *eax4573 = reinterpret_cast<signed char>(*eax4574 + al4575);
    *eax4576 = reinterpret_cast<signed char>(*eax4577 + al4578);
    *eax4579 = reinterpret_cast<signed char>(*eax4580 + al4581);
    *eax4582 = reinterpret_cast<signed char>(*eax4583 + al4584);
    *eax4585 = reinterpret_cast<signed char>(*eax4586 + al4587);
    *eax4588 = reinterpret_cast<signed char>(*eax4589 + al4590);
    *eax4591 = reinterpret_cast<signed char>(*eax4592 + al4593);
    *eax4594 = reinterpret_cast<signed char>(*eax4595 + al4596);
    *eax4597 = reinterpret_cast<signed char>(*eax4598 + al4599);
    *eax4600 = reinterpret_cast<signed char>(*eax4601 + al4602);
    *eax4603 = reinterpret_cast<signed char>(*eax4604 + al4605);
    *eax4606 = reinterpret_cast<signed char>(*eax4607 + al4608);
    *eax4609 = reinterpret_cast<signed char>(*eax4610 + al4611);
    *eax4612 = reinterpret_cast<signed char>(*eax4613 + al4614);
    *eax4615 = reinterpret_cast<signed char>(*eax4616 + al4617);
    *eax4618 = reinterpret_cast<signed char>(*eax4619 + al4620);
    *eax4621 = reinterpret_cast<signed char>(*eax4622 + al4623);
    *eax4624 = reinterpret_cast<signed char>(*eax4625 + al4626);
    *eax4627 = reinterpret_cast<signed char>(*eax4628 + al4629);
    *eax4630 = reinterpret_cast<signed char>(*eax4631 + al4632);
    *eax4633 = reinterpret_cast<signed char>(*eax4634 + al4635);
    *eax4636 = reinterpret_cast<signed char>(*eax4637 + al4638);
    *eax4639 = reinterpret_cast<signed char>(*eax4640 + al4641);
    *eax4642 = reinterpret_cast<signed char>(*eax4643 + al4644);
    *eax4645 = reinterpret_cast<signed char>(*eax4646 + al4647);
    *eax4648 = reinterpret_cast<signed char>(*eax4649 + al4650);
    *eax4651 = reinterpret_cast<signed char>(*eax4652 + al4653);
    *eax4654 = reinterpret_cast<signed char>(*eax4655 + al4656);
    *eax4657 = reinterpret_cast<signed char>(*eax4658 + al4659);
    *eax4660 = reinterpret_cast<signed char>(*eax4661 + al4662);
    *eax4663 = reinterpret_cast<signed char>(*eax4664 + al4665);
    *eax4666 = reinterpret_cast<signed char>(*eax4667 + al4668);
    *eax4669 = reinterpret_cast<signed char>(*eax4670 + al4671);
    *eax4672 = reinterpret_cast<signed char>(*eax4673 + al4674);
    *eax4675 = reinterpret_cast<signed char>(*eax4676 + al4677);
    *eax4678 = reinterpret_cast<signed char>(*eax4679 + al4680);
    *eax4681 = reinterpret_cast<signed char>(*eax4682 + al4683);
    *eax4684 = reinterpret_cast<signed char>(*eax4685 + al4686);
    *eax4687 = reinterpret_cast<signed char>(*eax4688 + al4689);
    *eax4690 = reinterpret_cast<signed char>(*eax4691 + al4692);
    *eax4693 = reinterpret_cast<signed char>(*eax4694 + al4695);
    *eax4696 = reinterpret_cast<signed char>(*eax4697 + al4698);
    *eax4699 = reinterpret_cast<signed char>(*eax4700 + al4701);
    *eax4702 = reinterpret_cast<signed char>(*eax4703 + al4704);
    *eax4705 = reinterpret_cast<signed char>(*eax4706 + al4707);
    *eax4708 = reinterpret_cast<signed char>(*eax4709 + al4710);
    *eax4711 = reinterpret_cast<signed char>(*eax4712 + al4713);
    *eax4714 = reinterpret_cast<signed char>(*eax4715 + al4716);
    *eax4717 = reinterpret_cast<signed char>(*eax4718 + al4719);
    *eax4720 = reinterpret_cast<signed char>(*eax4721 + al4722);
    *eax4723 = reinterpret_cast<signed char>(*eax4724 + al4725);
    *eax4726 = reinterpret_cast<signed char>(*eax4727 + al4728);
    *eax4729 = reinterpret_cast<signed char>(*eax4730 + al4731);
    *eax4732 = reinterpret_cast<signed char>(*eax4733 + al4734);
    *eax4735 = reinterpret_cast<signed char>(*eax4736 + al4737);
    *eax4738 = reinterpret_cast<signed char>(*eax4739 + al4740);
    *eax4741 = reinterpret_cast<signed char>(*eax4742 + al4743);
    *eax4744 = reinterpret_cast<signed char>(*eax4745 + al4746);
    *eax4747 = reinterpret_cast<signed char>(*eax4748 + al4749);
    *eax4750 = reinterpret_cast<signed char>(*eax4751 + al4752);
    *eax4753 = reinterpret_cast<signed char>(*eax4754 + al4755);
    *eax4756 = reinterpret_cast<signed char>(*eax4757 + al4758);
    *eax4759 = reinterpret_cast<signed char>(*eax4760 + al4761);
    *eax4762 = reinterpret_cast<signed char>(*eax4763 + al4764);
    *eax4765 = reinterpret_cast<signed char>(*eax4766 + al4767);
    *eax4768 = reinterpret_cast<signed char>(*eax4769 + al4770);
    *eax4771 = reinterpret_cast<signed char>(*eax4772 + al4773);
    *eax4774 = reinterpret_cast<signed char>(*eax4775 + al4776);
    *eax4777 = reinterpret_cast<signed char>(*eax4778 + al4779);
    *eax4780 = reinterpret_cast<signed char>(*eax4781 + al4782);
    *eax4783 = reinterpret_cast<signed char>(*eax4784 + al4785);
    *eax4786 = reinterpret_cast<signed char>(*eax4787 + al4788);
    *eax4789 = reinterpret_cast<signed char>(*eax4790 + al4791);
    *eax4792 = reinterpret_cast<signed char>(*eax4793 + al4794);
    *eax4795 = reinterpret_cast<signed char>(*eax4796 + al4797);
    *eax4798 = reinterpret_cast<signed char>(*eax4799 + al4800);
    *eax4801 = reinterpret_cast<signed char>(*eax4802 + al4803);
    *eax4804 = reinterpret_cast<signed char>(*eax4805 + al4806);
    *eax4807 = reinterpret_cast<signed char>(*eax4808 + al4809);
    *eax4810 = reinterpret_cast<signed char>(*eax4811 + al4812);
    *eax4813 = reinterpret_cast<signed char>(*eax4814 + al4815);
    *eax4816 = reinterpret_cast<signed char>(*eax4817 + al4818);
    *eax4819 = reinterpret_cast<signed char>(*eax4820 + al4821);
    *eax4822 = reinterpret_cast<signed char>(*eax4823 + al4824);
    *eax4825 = reinterpret_cast<signed char>(*eax4826 + al4827);
    *eax4828 = reinterpret_cast<signed char>(*eax4829 + al4830);
    *eax4831 = reinterpret_cast<signed char>(*eax4832 + al4833);
    *eax4834 = reinterpret_cast<signed char>(*eax4835 + al4836);
    *eax4837 = reinterpret_cast<signed char>(*eax4838 + al4839);
    *eax4840 = reinterpret_cast<signed char>(*eax4841 + al4842);
    *eax4843 = reinterpret_cast<signed char>(*eax4844 + al4845);
    *eax4846 = reinterpret_cast<signed char>(*eax4847 + al4848);
    *eax4849 = reinterpret_cast<signed char>(*eax4850 + al4851);
    *eax4852 = reinterpret_cast<signed char>(*eax4853 + al4854);
    *eax4855 = reinterpret_cast<signed char>(*eax4856 + al4857);
    *eax4858 = reinterpret_cast<signed char>(*eax4859 + al4860);
    *eax4861 = reinterpret_cast<signed char>(*eax4862 + al4863);
    *eax4864 = reinterpret_cast<signed char>(*eax4865 + al4866);
    *eax4867 = reinterpret_cast<signed char>(*eax4868 + al4869);
    *eax4870 = reinterpret_cast<signed char>(*eax4871 + al4872);
    *eax4873 = reinterpret_cast<signed char>(*eax4874 + al4875);
    *eax4876 = reinterpret_cast<signed char>(*eax4877 + al4878);
    *eax4879 = reinterpret_cast<signed char>(*eax4880 + al4881);
    *eax4882 = reinterpret_cast<signed char>(*eax4883 + al4884);
    *eax4885 = reinterpret_cast<signed char>(*eax4886 + al4887);
    *eax4888 = reinterpret_cast<signed char>(*eax4889 + al4890);
    *eax4891 = reinterpret_cast<signed char>(*eax4892 + al4893);
    *eax4894 = reinterpret_cast<signed char>(*eax4895 + al4896);
    *eax4897 = reinterpret_cast<signed char>(*eax4898 + al4899);
    *eax4900 = reinterpret_cast<signed char>(*eax4901 + al4902);
    *eax4903 = reinterpret_cast<signed char>(*eax4904 + al4905);
    *eax4906 = reinterpret_cast<signed char>(*eax4907 + al4908);
    *eax4909 = reinterpret_cast<signed char>(*eax4910 + al4911);
    *eax4912 = reinterpret_cast<signed char>(*eax4913 + al4914);
    *eax4915 = reinterpret_cast<signed char>(*eax4916 + al4917);
    *eax4918 = reinterpret_cast<signed char>(*eax4919 + al4920);
    *eax4921 = reinterpret_cast<signed char>(*eax4922 + al4923);
    *eax4924 = reinterpret_cast<signed char>(*eax4925 + al4926);
    *eax4927 = reinterpret_cast<signed char>(*eax4928 + al4929);
    *eax4930 = reinterpret_cast<signed char>(*eax4931 + al4932);
    *eax4933 = reinterpret_cast<signed char>(*eax4934 + al4935);
    *eax4936 = reinterpret_cast<signed char>(*eax4937 + al4938);
    *eax4939 = reinterpret_cast<signed char>(*eax4940 + al4941);
    *eax4942 = reinterpret_cast<signed char>(*eax4943 + al4944);
    *eax4945 = reinterpret_cast<signed char>(*eax4946 + al4947);
    *eax4948 = reinterpret_cast<signed char>(*eax4949 + al4950);
    *eax4951 = reinterpret_cast<signed char>(*eax4952 + al4953);
    *eax4954 = reinterpret_cast<signed char>(*eax4955 + al4956);
    *eax4957 = reinterpret_cast<signed char>(*eax4958 + al4959);
    *eax4960 = reinterpret_cast<signed char>(*eax4961 + al4962);
    *eax4963 = reinterpret_cast<signed char>(*eax4964 + al4965);
    *eax4966 = reinterpret_cast<signed char>(*eax4967 + al4968);
    *eax4969 = reinterpret_cast<signed char>(*eax4970 + al4971);
    *eax4972 = reinterpret_cast<signed char>(*eax4973 + al4974);
    *eax4975 = reinterpret_cast<signed char>(*eax4976 + al4977);
    *eax4978 = reinterpret_cast<signed char>(*eax4979 + al4980);
    *eax4981 = reinterpret_cast<signed char>(*eax4982 + al4983);
    *eax4984 = reinterpret_cast<signed char>(*eax4985 + al4986);
    *eax4987 = reinterpret_cast<signed char>(*eax4988 + al4989);
    *eax4990 = reinterpret_cast<signed char>(*eax4991 + al4992);
    *eax4993 = reinterpret_cast<signed char>(*eax4994 + al4995);
    *eax4996 = reinterpret_cast<signed char>(*eax4997 + al4998);
    *eax4999 = reinterpret_cast<signed char>(*eax5000 + al5001);
    *eax5002 = reinterpret_cast<signed char>(*eax5003 + al5004);
    *eax5005 = reinterpret_cast<signed char>(*eax5006 + al5007);
    *eax5008 = reinterpret_cast<signed char>(*eax5009 + al5010);
    *eax5011 = reinterpret_cast<signed char>(*eax5012 + al5013);
    *eax5014 = reinterpret_cast<signed char>(*eax5015 + al5016);
    *eax5017 = reinterpret_cast<signed char>(*eax5018 + al5019);
    *eax5020 = reinterpret_cast<signed char>(*eax5021 + al5022);
    *eax5023 = reinterpret_cast<signed char>(*eax5024 + al5025);
    *eax5026 = reinterpret_cast<signed char>(*eax5027 + al5028);
    *eax5029 = reinterpret_cast<signed char>(*eax5030 + al5031);
    *eax5032 = reinterpret_cast<signed char>(*eax5033 + al5034);
    *eax5035 = reinterpret_cast<signed char>(*eax5036 + al5037);
    *eax5038 = reinterpret_cast<signed char>(*eax5039 + al5040);
    *eax5041 = reinterpret_cast<signed char>(*eax5042 + al5043);
    *eax5044 = reinterpret_cast<signed char>(*eax5045 + al5046);
    *eax5047 = reinterpret_cast<signed char>(*eax5048 + al5049);
    *eax5050 = reinterpret_cast<signed char>(*eax5051 + al5052);
    *eax5053 = reinterpret_cast<signed char>(*eax5054 + al5055);
    *eax5056 = reinterpret_cast<signed char>(*eax5057 + al5058);
    *eax5059 = reinterpret_cast<signed char>(*eax5060 + al5061);
    *eax5062 = reinterpret_cast<signed char>(*eax5063 + al5064);
    *eax5065 = reinterpret_cast<signed char>(*eax5066 + al5067);
    *eax5068 = reinterpret_cast<signed char>(*eax5069 + al5070);
    *eax5071 = reinterpret_cast<signed char>(*eax5072 + al5073);
    *eax5074 = reinterpret_cast<signed char>(*eax5075 + al5076);
    *eax5077 = reinterpret_cast<signed char>(*eax5078 + al5079);
    *eax5080 = reinterpret_cast<signed char>(*eax5081 + al5082);
    *eax5083 = reinterpret_cast<signed char>(*eax5084 + al5085);
    *eax5086 = reinterpret_cast<signed char>(*eax5087 + al5088);
    *eax5089 = reinterpret_cast<signed char>(*eax5090 + al5091);
    *eax5092 = reinterpret_cast<signed char>(*eax5093 + al5094);
    *eax5095 = reinterpret_cast<signed char>(*eax5096 + al5097);
    *eax5098 = reinterpret_cast<signed char>(*eax5099 + al5100);
    *eax5101 = reinterpret_cast<signed char>(*eax5102 + al5103);
    *eax5104 = reinterpret_cast<signed char>(*eax5105 + al5106);
    *eax5107 = reinterpret_cast<signed char>(*eax5108 + al5109);
    *eax5110 = reinterpret_cast<signed char>(*eax5111 + al5112);
    *eax5113 = reinterpret_cast<signed char>(*eax5114 + al5115);
    *eax5116 = reinterpret_cast<signed char>(*eax5117 + al5118);
    *eax5119 = reinterpret_cast<signed char>(*eax5120 + al5121);
    *eax5122 = reinterpret_cast<signed char>(*eax5123 + al5124);
    *eax5125 = reinterpret_cast<signed char>(*eax5126 + al5127);
    *eax5128 = reinterpret_cast<signed char>(*eax5129 + al5130);
    *eax5131 = reinterpret_cast<signed char>(*eax5132 + al5133);
    *eax5134 = reinterpret_cast<signed char>(*eax5135 + al5136);
    *eax5137 = reinterpret_cast<signed char>(*eax5138 + al5139);
    *eax5140 = reinterpret_cast<signed char>(*eax5141 + al5142);
    *eax5143 = reinterpret_cast<signed char>(*eax5144 + al5145);
    *eax5146 = reinterpret_cast<signed char>(*eax5147 + al5148);
    *eax5149 = reinterpret_cast<signed char>(*eax5150 + al5151);
    *eax5152 = reinterpret_cast<signed char>(*eax5153 + al5154);
    *eax5155 = reinterpret_cast<signed char>(*eax5156 + al5157);
    *eax5158 = reinterpret_cast<signed char>(*eax5159 + al5160);
    *eax5161 = reinterpret_cast<signed char>(*eax5162 + al5163);
    *eax5164 = reinterpret_cast<signed char>(*eax5165 + al5166);
    *eax5167 = reinterpret_cast<signed char>(*eax5168 + al5169);
    *eax5170 = reinterpret_cast<signed char>(*eax5171 + al5172);
    *eax5173 = reinterpret_cast<signed char>(*eax5174 + al5175);
    *eax5176 = reinterpret_cast<signed char>(*eax5177 + al5178);
    *eax5179 = reinterpret_cast<signed char>(*eax5180 + al5181);
    *eax5182 = reinterpret_cast<signed char>(*eax5183 + al5184);
    *eax5185 = reinterpret_cast<signed char>(*eax5186 + al5187);
    *eax5188 = reinterpret_cast<signed char>(*eax5189 + al5190);
    *eax5191 = reinterpret_cast<signed char>(*eax5192 + al5193);
    *eax5194 = reinterpret_cast<signed char>(*eax5195 + al5196);
    *eax5197 = reinterpret_cast<signed char>(*eax5198 + al5199);
    *eax5200 = reinterpret_cast<signed char>(*eax5201 + al5202);
    *eax5203 = reinterpret_cast<signed char>(*eax5204 + al5205);
    *eax5206 = reinterpret_cast<signed char>(*eax5207 + al5208);
    *eax5209 = reinterpret_cast<signed char>(*eax5210 + al5211);
    *eax5212 = reinterpret_cast<signed char>(*eax5213 + al5214);
    *eax5215 = reinterpret_cast<signed char>(*eax5216 + al5217);
    *eax5218 = reinterpret_cast<signed char>(*eax5219 + al5220);
    *eax5221 = reinterpret_cast<signed char>(*eax5222 + al5223);
    *eax5224 = reinterpret_cast<signed char>(*eax5225 + al5226);
    *eax5227 = reinterpret_cast<signed char>(*eax5228 + al5229);
    *eax5230 = reinterpret_cast<signed char>(*eax5231 + al5232);
    *eax5233 = reinterpret_cast<signed char>(*eax5234 + al5235);
    *eax5236 = reinterpret_cast<signed char>(*eax5237 + al5238);
    *eax5239 = reinterpret_cast<signed char>(*eax5240 + al5241);
    *eax5242 = reinterpret_cast<signed char>(*eax5243 + al5244);
    *eax5245 = reinterpret_cast<signed char>(*eax5246 + al5247);
    *eax5248 = reinterpret_cast<signed char>(*eax5249 + al5250);
    *eax5251 = reinterpret_cast<signed char>(*eax5252 + al5253);
    *eax5254 = reinterpret_cast<signed char>(*eax5255 + al5256);
    *eax5257 = reinterpret_cast<signed char>(*eax5258 + al5259);
    *eax5260 = reinterpret_cast<signed char>(*eax5261 + al5262);
    *eax5263 = reinterpret_cast<signed char>(*eax5264 + al5265);
    *eax5266 = reinterpret_cast<signed char>(*eax5267 + al5268);
    *eax5269 = reinterpret_cast<signed char>(*eax5270 + al5271);
    *eax5272 = reinterpret_cast<signed char>(*eax5273 + al5274);
    *eax5275 = reinterpret_cast<signed char>(*eax5276 + al5277);
    *eax5278 = reinterpret_cast<signed char>(*eax5279 + al5280);
    *eax5281 = reinterpret_cast<signed char>(*eax5282 + al5283);
    *eax5284 = reinterpret_cast<signed char>(*eax5285 + al5286);
    *eax5287 = reinterpret_cast<signed char>(*eax5288 + al5289);
    *eax5290 = reinterpret_cast<signed char>(*eax5291 + al5292);
    *eax5293 = reinterpret_cast<signed char>(*eax5294 + al5295);
    *eax5296 = reinterpret_cast<signed char>(*eax5297 + al5298);
    *eax5299 = reinterpret_cast<signed char>(*eax5300 + al5301);
    *eax5302 = reinterpret_cast<signed char>(*eax5303 + al5304);
    *eax5305 = reinterpret_cast<signed char>(*eax5306 + al5307);
    *eax5308 = reinterpret_cast<signed char>(*eax5309 + al5310);
    *eax5311 = reinterpret_cast<signed char>(*eax5312 + al5313);
    *eax5314 = reinterpret_cast<signed char>(*eax5315 + al5316);
    *eax5317 = reinterpret_cast<signed char>(*eax5318 + al5319);
    *eax5320 = reinterpret_cast<signed char>(*eax5321 + al5322);
    *eax5323 = reinterpret_cast<signed char>(*eax5324 + al5325);
    *eax5326 = reinterpret_cast<signed char>(*eax5327 + al5328);
    *eax5329 = reinterpret_cast<signed char>(*eax5330 + al5331);
    *eax5332 = reinterpret_cast<signed char>(*eax5333 + al5334);
    *eax5335 = reinterpret_cast<signed char>(*eax5336 + al5337);
    *eax5338 = reinterpret_cast<signed char>(*eax5339 + al5340);
    *eax5341 = reinterpret_cast<signed char>(*eax5342 + al5343);
    *eax5344 = reinterpret_cast<signed char>(*eax5345 + al5346);
    *eax5347 = reinterpret_cast<signed char>(*eax5348 + al5349);
    *eax5350 = reinterpret_cast<signed char>(*eax5351 + al5352);
    *eax5353 = reinterpret_cast<signed char>(*eax5354 + al5355);
    *eax5356 = reinterpret_cast<signed char>(*eax5357 + al5358);
    *eax5359 = reinterpret_cast<signed char>(*eax5360 + al5361);
    *eax5362 = reinterpret_cast<signed char>(*eax5363 + al5364);
    *eax5365 = reinterpret_cast<signed char>(*eax5366 + al5367);
    *eax5368 = reinterpret_cast<signed char>(*eax5369 + al5370);
    *eax5371 = reinterpret_cast<signed char>(*eax5372 + al5373);
    *eax5374 = reinterpret_cast<signed char>(*eax5375 + al5376);
    *eax5377 = reinterpret_cast<signed char>(*eax5378 + al5379);
    *eax5380 = reinterpret_cast<signed char>(*eax5381 + al5382);
    *eax5383 = reinterpret_cast<signed char>(*eax5384 + al5385);
    *eax5386 = reinterpret_cast<signed char>(*eax5387 + al5388);
    *eax5389 = reinterpret_cast<signed char>(*eax5390 + al5391);
    *eax5392 = reinterpret_cast<signed char>(*eax5393 + al5394);
    *eax5395 = reinterpret_cast<signed char>(*eax5396 + al5397);
    *eax5398 = reinterpret_cast<signed char>(*eax5399 + al5400);
    *eax5401 = reinterpret_cast<signed char>(*eax5402 + al5403);
    *eax5404 = reinterpret_cast<signed char>(*eax5405 + al5406);
    *eax5407 = reinterpret_cast<signed char>(*eax5408 + al5409);
    *eax5410 = reinterpret_cast<signed char>(*eax5411 + al5412);
    *eax5413 = reinterpret_cast<signed char>(*eax5414 + al5415);
    *eax5416 = reinterpret_cast<signed char>(*eax5417 + al5418);
    *eax5419 = reinterpret_cast<signed char>(*eax5420 + al5421);
    *eax5422 = reinterpret_cast<signed char>(*eax5423 + al5424);
    *eax5425 = reinterpret_cast<signed char>(*eax5426 + al5427);
    *eax5428 = reinterpret_cast<signed char>(*eax5429 + al5430);
    *eax5431 = reinterpret_cast<signed char>(*eax5432 + al5433);
    *eax5434 = reinterpret_cast<signed char>(*eax5435 + al5436);
    *eax5437 = reinterpret_cast<signed char>(*eax5438 + al5439);
    *eax5440 = reinterpret_cast<signed char>(*eax5441 + al5442);
    *eax5443 = reinterpret_cast<signed char>(*eax5444 + al5445);
    *eax5446 = reinterpret_cast<signed char>(*eax5447 + al5448);
    *eax5449 = reinterpret_cast<signed char>(*eax5450 + al5451);
    *eax5452 = reinterpret_cast<signed char>(*eax5453 + al5454);
    *eax5455 = reinterpret_cast<signed char>(*eax5456 + al5457);
    *eax5458 = reinterpret_cast<signed char>(*eax5459 + al5460);
    *eax5461 = reinterpret_cast<signed char>(*eax5462 + al5463);
    *eax5464 = reinterpret_cast<signed char>(*eax5465 + al5466);
    *eax5467 = reinterpret_cast<signed char>(*eax5468 + al5469);
    *eax5470 = reinterpret_cast<signed char>(*eax5471 + al5472);
    *eax5473 = reinterpret_cast<signed char>(*eax5474 + al5475);
    *eax5476 = reinterpret_cast<signed char>(*eax5477 + al5478);
    *eax5479 = reinterpret_cast<signed char>(*eax5480 + al5481);
    *eax5482 = reinterpret_cast<signed char>(*eax5483 + al5484);
    *eax5485 = reinterpret_cast<signed char>(*eax5486 + al5487);
    *eax5488 = reinterpret_cast<signed char>(*eax5489 + al5490);
    *eax5491 = reinterpret_cast<signed char>(*eax5492 + al5493);
    *eax5494 = reinterpret_cast<signed char>(*eax5495 + al5496);
    *eax5497 = reinterpret_cast<signed char>(*eax5498 + al5499);
    *eax5500 = reinterpret_cast<signed char>(*eax5501 + al5502);
    *eax5503 = reinterpret_cast<signed char>(*eax5504 + al5505);
    *eax5506 = reinterpret_cast<signed char>(*eax5507 + al5508);
    *eax5509 = reinterpret_cast<signed char>(*eax5510 + al5511);
    *eax5512 = reinterpret_cast<signed char>(*eax5513 + al5514);
    *eax5515 = reinterpret_cast<signed char>(*eax5516 + al5517);
    *eax5518 = reinterpret_cast<signed char>(*eax5519 + al5520);
    *eax5521 = reinterpret_cast<signed char>(*eax5522 + al5523);
    *eax5524 = reinterpret_cast<signed char>(*eax5525 + al5526);
    *eax5527 = reinterpret_cast<signed char>(*eax5528 + al5529);
    *eax5530 = reinterpret_cast<signed char>(*eax5531 + al5532);
    *eax5533 = reinterpret_cast<signed char>(*eax5534 + al5535);
    *eax5536 = reinterpret_cast<signed char>(*eax5537 + al5538);
    *eax5539 = reinterpret_cast<signed char>(*eax5540 + al5541);
    *eax5542 = reinterpret_cast<signed char>(*eax5543 + al5544);
    *eax5545 = reinterpret_cast<signed char>(*eax5546 + al5547);
    *eax5548 = reinterpret_cast<signed char>(*eax5549 + al5550);
    *eax5551 = reinterpret_cast<signed char>(*eax5552 + al5553);
    *eax5554 = reinterpret_cast<signed char>(*eax5555 + al5556);
    *eax5557 = reinterpret_cast<signed char>(*eax5558 + al5559);
    *eax5560 = reinterpret_cast<signed char>(*eax5561 + al5562);
    *eax5563 = reinterpret_cast<signed char>(*eax5564 + al5565);
    *eax5566 = reinterpret_cast<signed char>(*eax5567 + al5568);
    *eax5569 = reinterpret_cast<signed char>(*eax5570 + al5571);
    *eax5572 = reinterpret_cast<signed char>(*eax5573 + al5574);
    *eax5575 = reinterpret_cast<signed char>(*eax5576 + al5577);
    *eax5578 = reinterpret_cast<signed char>(*eax5579 + al5580);
    *eax5581 = reinterpret_cast<signed char>(*eax5582 + al5583);
    *eax5584 = reinterpret_cast<signed char>(*eax5585 + al5586);
    *eax5587 = reinterpret_cast<signed char>(*eax5588 + al5589);
    *eax5590 = reinterpret_cast<signed char>(*eax5591 + al5592);
    *eax5593 = reinterpret_cast<signed char>(*eax5594 + al5595);
    *eax5596 = reinterpret_cast<signed char>(*eax5597 + al5598);
    *eax5599 = reinterpret_cast<signed char>(*eax5600 + al5601);
    *eax5602 = reinterpret_cast<signed char>(*eax5603 + al5604);
    *eax5605 = reinterpret_cast<signed char>(*eax5606 + al5607);
    *eax5608 = reinterpret_cast<signed char>(*eax5609 + al5610);
    *eax5611 = reinterpret_cast<signed char>(*eax5612 + al5613);
    *eax5614 = reinterpret_cast<signed char>(*eax5615 + al5616);
    *eax5617 = reinterpret_cast<signed char>(*eax5618 + al5619);
    *eax5620 = reinterpret_cast<signed char>(*eax5621 + al5622);
    *eax5623 = reinterpret_cast<signed char>(*eax5624 + al5625);
    *eax5626 = reinterpret_cast<signed char>(*eax5627 + al5628);
    *eax5629 = reinterpret_cast<signed char>(*eax5630 + al5631);
    *eax5632 = reinterpret_cast<signed char>(*eax5633 + al5634);
    *eax5635 = reinterpret_cast<signed char>(*eax5636 + al5637);
    *eax5638 = reinterpret_cast<signed char>(*eax5639 + al5640);
    *eax5641 = reinterpret_cast<signed char>(*eax5642 + al5643);
    *eax5644 = reinterpret_cast<signed char>(*eax5645 + al5646);
    *eax5647 = reinterpret_cast<signed char>(*eax5648 + al5649);
    *eax5650 = reinterpret_cast<signed char>(*eax5651 + al5652);
    *eax5653 = reinterpret_cast<signed char>(*eax5654 + al5655);
    *eax5656 = reinterpret_cast<signed char>(*eax5657 + al5658);
    *eax5659 = reinterpret_cast<signed char>(*eax5660 + al5661);
    *eax5662 = reinterpret_cast<signed char>(*eax5663 + al5664);
    *eax5665 = reinterpret_cast<signed char>(*eax5666 + al5667);
    *eax5668 = reinterpret_cast<signed char>(*eax5669 + al5670);
    *eax5671 = reinterpret_cast<signed char>(*eax5672 + al5673);
    *eax5674 = reinterpret_cast<signed char>(*eax5675 + al5676);
    *eax5677 = reinterpret_cast<signed char>(*eax5678 + al5679);
    *eax5680 = reinterpret_cast<signed char>(*eax5681 + al5682);
    *eax5683 = reinterpret_cast<signed char>(*eax5684 + al5685);
    *eax5686 = reinterpret_cast<signed char>(*eax5687 + al5688);
    *eax5689 = reinterpret_cast<signed char>(*eax5690 + al5691);
    *eax5692 = reinterpret_cast<signed char>(*eax5693 + al5694);
    *eax5695 = reinterpret_cast<signed char>(*eax5696 + al5697);
    *eax5698 = reinterpret_cast<signed char>(*eax5699 + al5700);
    *eax5701 = reinterpret_cast<signed char>(*eax5702 + al5703);
    *eax5704 = reinterpret_cast<signed char>(*eax5705 + al5706);
    *eax5707 = reinterpret_cast<signed char>(*eax5708 + al5709);
    *eax5710 = reinterpret_cast<signed char>(*eax5711 + al5712);
    *eax5713 = reinterpret_cast<signed char>(*eax5714 + al5715);
    *eax5716 = reinterpret_cast<signed char>(*eax5717 + al5718);
    *eax5719 = reinterpret_cast<signed char>(*eax5720 + al5721);
    *eax5722 = reinterpret_cast<signed char>(*eax5723 + al5724);
    *eax5725 = reinterpret_cast<signed char>(*eax5726 + al5727);
    *eax5728 = reinterpret_cast<signed char>(*eax5729 + al5730);
    *eax5731 = reinterpret_cast<signed char>(*eax5732 + al5733);
    *eax5734 = reinterpret_cast<signed char>(*eax5735 + al5736);
    *eax5737 = reinterpret_cast<signed char>(*eax5738 + al5739);
    *eax5740 = reinterpret_cast<signed char>(*eax5741 + al5742);
    *eax5743 = reinterpret_cast<signed char>(*eax5744 + al5745);
    *eax5746 = reinterpret_cast<signed char>(*eax5747 + al5748);
    *eax5749 = reinterpret_cast<signed char>(*eax5750 + al5751);
    *eax5752 = reinterpret_cast<signed char>(*eax5753 + al5754);
    *eax5755 = reinterpret_cast<signed char>(*eax5756 + al5757);
    *eax5758 = reinterpret_cast<signed char>(*eax5759 + al5760);
    *eax5761 = reinterpret_cast<signed char>(*eax5762 + al5763);
    *eax5764 = reinterpret_cast<signed char>(*eax5765 + al5766);
    *eax5767 = reinterpret_cast<signed char>(*eax5768 + al5769);
    *eax5770 = reinterpret_cast<signed char>(*eax5771 + al5772);
    *eax5773 = reinterpret_cast<signed char>(*eax5774 + al5775);
    *eax5776 = reinterpret_cast<signed char>(*eax5777 + al5778);
    *eax5779 = reinterpret_cast<signed char>(*eax5780 + al5781);
    *eax5782 = reinterpret_cast<signed char>(*eax5783 + al5784);
    *eax5785 = reinterpret_cast<signed char>(*eax5786 + al5787);
    *eax5788 = reinterpret_cast<signed char>(*eax5789 + al5790);
    *eax5791 = reinterpret_cast<signed char>(*eax5792 + al5793);
    *eax5794 = reinterpret_cast<signed char>(*eax5795 + al5796);
    *eax5797 = reinterpret_cast<signed char>(*eax5798 + al5799);
    *eax5800 = reinterpret_cast<signed char>(*eax5801 + al5802);
    *eax5803 = reinterpret_cast<signed char>(*eax5804 + al5805);
    *eax5806 = reinterpret_cast<signed char>(*eax5807 + al5808);
    *eax5809 = reinterpret_cast<signed char>(*eax5810 + al5811);
    *eax5812 = reinterpret_cast<signed char>(*eax5813 + al5814);
    *eax5815 = reinterpret_cast<signed char>(*eax5816 + al5817);
    *eax5818 = reinterpret_cast<signed char>(*eax5819 + al5820);
    *eax5821 = reinterpret_cast<signed char>(*eax5822 + al5823);
    *eax5824 = reinterpret_cast<signed char>(*eax5825 + al5826);
    *eax5827 = reinterpret_cast<signed char>(*eax5828 + al5829);
    *eax5830 = reinterpret_cast<signed char>(*eax5831 + al5832);
    *eax5833 = reinterpret_cast<signed char>(*eax5834 + al5835);
    *eax5836 = reinterpret_cast<signed char>(*eax5837 + al5838);
    *eax5839 = reinterpret_cast<signed char>(*eax5840 + al5841);
    *eax5842 = reinterpret_cast<signed char>(*eax5843 + al5844);
    *eax5845 = reinterpret_cast<signed char>(*eax5846 + al5847);
    *eax5848 = reinterpret_cast<signed char>(*eax5849 + al5850);
    *eax5851 = reinterpret_cast<signed char>(*eax5852 + al5853);
    *eax5854 = reinterpret_cast<signed char>(*eax5855 + al5856);
    *eax5857 = reinterpret_cast<signed char>(*eax5858 + al5859);
    *eax5860 = reinterpret_cast<signed char>(*eax5861 + al5862);
    *eax5863 = reinterpret_cast<signed char>(*eax5864 + al5865);
    *eax5866 = reinterpret_cast<signed char>(*eax5867 + al5868);
    *eax5869 = reinterpret_cast<signed char>(*eax5870 + al5871);
    *eax5872 = reinterpret_cast<signed char>(*eax5873 + al5874);
    *eax5875 = reinterpret_cast<signed char>(*eax5876 + al5877);
    *eax5878 = reinterpret_cast<signed char>(*eax5879 + al5880);
    *eax5881 = reinterpret_cast<signed char>(*eax5882 + al5883);
    *eax5884 = reinterpret_cast<signed char>(*eax5885 + al5886);
    *eax5887 = reinterpret_cast<signed char>(*eax5888 + al5889);
    *eax5890 = reinterpret_cast<signed char>(*eax5891 + al5892);
    *eax5893 = reinterpret_cast<signed char>(*eax5894 + al5895);
    *eax5896 = reinterpret_cast<signed char>(*eax5897 + al5898);
    *eax5899 = reinterpret_cast<signed char>(*eax5900 + al5901);
    *eax5902 = reinterpret_cast<signed char>(*eax5903 + al5904);
    *eax5905 = reinterpret_cast<signed char>(*eax5906 + al5907);
    *eax5908 = reinterpret_cast<signed char>(*eax5909 + al5910);
    *eax5911 = reinterpret_cast<signed char>(*eax5912 + al5913);
    *eax5914 = reinterpret_cast<signed char>(*eax5915 + al5916);
    *eax5917 = reinterpret_cast<signed char>(*eax5918 + al5919);
    *eax5920 = reinterpret_cast<signed char>(*eax5921 + al5922);
}

void fun_4113cf() {
    goto 0x418d10;
}

void fun_411276() {
    goto 0x412f80;
}

void fun_411311() {
    goto 0x4134b0;
}

int32_t fun_419528(int32_t a1) {
    int32_t v2;
    int32_t ebp3;
    int32_t eax4;

    v2 = a1;
    eax4 = fun_419600(*reinterpret_cast<unsigned char*>(&v2), 0x157, 3, ebp3);
    return eax4;
}

void fun_411541() {
    goto GetCommandLineA;
}

void fun_41148d() {
    goto GetACP;
}

void fun_4112c6() {
    goto LCMapStringA;
}

void fun_4114d8() {
    goto HeapAlloc;
}

void fun_4112a3() {
    goto IsBadReadPtr;
}

void fun_41150f() {
    goto InterlockedExchange;
}

void fun_4113b6() {
    goto 0x422010;
}

void fun_411050() {
    goto 0x41d300;
}

void fun_4110dc() {
    goto GetModuleFileNameA;
}

void fun_41146a() {
    goto 0x418e20;
}

void fun_4112e4() {
    goto VirtualAlloc;
}

int32_t fun_4194e8(int32_t a1) {
    int32_t v2;
    int32_t ebp3;
    int32_t eax4;

    v2 = a1;
    eax4 = fun_419600(*reinterpret_cast<unsigned char*>(&v2), 0x103, 1, ebp3);
    return eax4;
}

void fun_4113d4() {
    goto 0x421e20;
}

void fun_411316() {
    goto SetStdHandle;
}

struct s127 {
    signed char[24] pad24;
    struct s9* f24;
    uint32_t f28;
};

void fun_411546(struct s127* a1) {
    uint32_t v2;
    struct s9* v3;

    v2 = a1->f28;
    v3 = a1->f24;
    fun_4111bd(v3, v2);
    return;
}

void fun_4114dd() {
    goto HeapReAlloc;
}

void fun_4112a8() {
    goto 0x418500;
}

void fun_411514() {
    goto UnhandledExceptionFilter;
}

void fun_4113bb() {
    goto SetConsoleCtrlHandler;
}

void fun_411055() {
    goto DebugBreak;
}

void fun_4110e1() {
    goto 0x4127c0;
}

void fun_41146f() {
    goto 0x415130;
}

void fun_4112e9() {
    goto 0x414630;
}

void fun_41131b() {
    goto 0x416e50;
}

void fun_41154b() {
    goto 0x419530;
}

void fun_411519() {
    goto 0x4186d0;
}

void fun_41105a() {
    goto GetStartupInfoA;
}

void fun_4110e6() {
    goto 0x4194f0;
}

void fun_41105f() {
    goto 0x4127d0;
}

void fun_4110eb() {
    goto RegisterClassExA;
}

void fun_4110f0() {
    goto GetEnvironmentStringsW;
}

void fun_4110f5() {
    goto 0x4194d0;
}

void fun_4110fa() {
    goto 0x41e6f0;
}

void fun_4110ff() {
    goto DestroyWindow;
}

void fun_411104() {
    goto 0x414ff0;
}

void fun_411109() {
    goto 0x41d380;
}

void fun_41110e() {
    goto 0x416840;
}
