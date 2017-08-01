
int32_t fun_8048ae4();

void fun_8048b3c();

int32_t fun_804a0d0();

int32_t fun_80488bc() {
    int32_t eax1;

    fun_8048ae4();
    fun_8048b3c();
    eax1 = fun_804a0d0();
    return eax1;
}

void fun_8048aed(int32_t a1);

int32_t fun_8048ae4() {
    int32_t ebx1;
    int32_t eax2;
    int32_t edx3;

    fun_8048aed(ebx1);
    eax2 = *reinterpret_cast<int32_t*>(ebx1 + 0x2e5f - 4);
    if (eax2) {
        eax2();
    }
    return edx3;
}

int32_t g804b83c = 0;

void __gmon_start__(int32_t a1);

void fun_8048b3c() {
    int32_t eax1;

    eax1 = g804b83c;
    if (eax1 && !1) {
        __gmon_start__(0x804b83c);
    }
    return;
}

int32_t g804b82c = -1;

int32_t fun_804a0d0() {
    int32_t v1;
    int32_t edx2;
    int32_t* ebx3;
    int32_t eax4;

    v1 = edx2;
    ebx3 = reinterpret_cast<int32_t*>(0x804b82c);
    eax4 = g804b82c;
    while (eax4 != -1) {
        --ebx3;
        eax4();
        eax4 = *ebx3;
    }
    return v1;
}

int32_t __libc_start_main = 0x80489ca;

void fun_80489c4(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

struct s0 {
    struct s0* f0;
    signed char[3] pad4;
    int32_t f4;
    int32_t f8;
    int32_t f12;
    int32_t f16;
    signed char* f20;
    signed char* f24;
    int32_t f28;
    int32_t f32;
    signed char[108] pad144;
    struct s0* f144;
    signed char[3] pad148;
    struct s0* f148;
    signed char[3] pad152;
    int32_t f152;
    struct s0* f156;
};

int32_t exit = 0x8048a3a;

void fun_8048a34(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8) {
    goto exit;
}

int32_t getenv = 0x804892a;

int32_t fun_8048924(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6) {
    goto getenv;
}

struct s0* fun_8048d64(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5);

void fun_8049ac0(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5);

void fun_8049ccd(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6) {
    struct s0* ebx7;
    struct s0* ebp8;

    fun_8048d64(ebx7, ebp8, __return_address(), a1, a2);
    fun_8049ac0(a1, a2, a3, a4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 24);
    return;
}

int32_t __fpending = 0x80488ea;

int32_t fun_80488e4(struct s0* a1) {
    goto __fpending;
}

int32_t fclose = 0x8048a1a;

int32_t fun_8048a14(struct s0* a1) {
    goto fclose;
}

int32_t dcgettext = 0x804893a;

struct s0* fun_8048934(int32_t a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8) {
    goto dcgettext;
}

struct s0* fun_80499f0(struct s0* a1, signed char a2);

struct s0* fun_8049a8b(struct s0* a1, struct s0* a2, struct s0* a3) {
    struct s0* ebx4;
    struct s0* ebp5;
    struct s0* eax6;

    fun_8048d64(ebx4, ebp5, __return_address(), a1, a2);
    eax6 = fun_80499f0(a1, 58);
    return eax6;
}

int32_t error = 0x8048a9a;

void fun_8048a94(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8) {
    goto error;
}

int32_t fun_8048a24();

int32_t fun_8048aa4(void* a1, void* a2, void* a3, void* a4);

void* fun_80489b4(void* a1, void* a2, void* a3, void* a4);

int32_t fun_8048a54(void* a1, void* a2, void* a3, void* a4);

int32_t fun_8048a84(void* a1, void* a2, void* a3, void* a4);

struct s0* fun_8048ff6(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4) {
    struct s0** ebp5;
    struct s0* ebx6;
    struct s0* esi7;
    struct s0* edi8;
    struct s0* ebp9;
    struct s0* eax10;
    int32_t ebx11;
    int32_t ebx12;
    struct s0* v13;
    struct s0* v14;
    struct s0* edx15;
    struct s0* v16;
    struct s0** v17;
    int32_t eax18;
    uint32_t v19;
    struct s0* v20;
    uint32_t eax21;
    unsigned char v22;
    uint32_t eax23;
    struct s0* esi24;
    void* ecx25;
    int1_t zf26;
    struct s0** edi27;
    void* v28;
    void* v29;
    void* v30;
    void* v31;
    void* v32;
    void* v33;
    struct s0* ecx34;
    struct s0* edi35;
    void* v36;
    struct s0* v37;
    void* eax38;
    void* v39;
    int32_t eax40;
    struct s0* ecx41;
    struct s0* edx42;
    uint32_t eax43;
    uint32_t ecx44;
    int32_t eax45;
    struct s0* v46;
    uint32_t eax47;
    struct s0* v48;
    uint32_t eax49;
    uint32_t eax50;
    uint32_t eax51;
    uint32_t eax52;
    uint32_t eax53;
    int1_t cf54;
    uint32_t eax55;

    ebp5 = reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax10 = fun_8048d64(ebx6, esi7, edi8, ebp9, __return_address());
    ebx11 = ebx12 + 0x294b;
    v13 = eax10;
    v14 = edx15;
    v16 = reinterpret_cast<struct s0*>(0);
    v17 = reinterpret_cast<struct s0**>(0);
    eax18 = fun_8048a24();
    v19 = reinterpret_cast<uint1_t>(eax18 == 1);
    if (reinterpret_cast<unsigned char>(a3) <= reinterpret_cast<unsigned char>(6)) {
        goto *reinterpret_cast<int32_t*>(ebx11 + reinterpret_cast<unsigned char>(a3) * 4 - 0x1680) + ebx11;
    }
    v20 = reinterpret_cast<struct s0*>(0);
    if (a2 != 0xffffffff) 
        goto addr_8049087_4;
    while (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v20))) {
        do {
            if (1 || reinterpret_cast<unsigned char>(&v20->f0) > reinterpret_cast<unsigned char>(a2)) {
                addr_80490df_7:
                eax21 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v20));
                v22 = *reinterpret_cast<unsigned char*>(&eax21);
                eax23 = *reinterpret_cast<unsigned char*>(&eax21);
                if (eax23 <= 0x7e) 
                    goto addr_80490f4_8;
            } else {
                esi24 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v20));
                ecx25 = reinterpret_cast<void*>(0);
                zf26 = 1;
                edi27 = reinterpret_cast<struct s0**>(0);
                while (ecx25) {
                    ecx25 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx25) - 1);
                    zf26 = *reinterpret_cast<struct s0**>(&esi24->f0) == *edi27;
                    *edi27 = *reinterpret_cast<struct s0**>(&esi24->f0);
                    ++edi27;
                    esi24 = reinterpret_cast<struct s0*>(&esi24->pad4);
                }
                if (!zf26) 
                    goto addr_80490df_7; else 
                    goto addr_80490c9_13;
            }
            if (v19) {
                v28 = reinterpret_cast<void*>(1);
                fun_8048aa4(v29, v30, v31, v32);
                if (1) 
                    goto addr_804933e_16; else 
                    goto addr_8049142_17;
            }
            v33 = reinterpret_cast<void*>(ebp5 - 32);
            v28 = reinterpret_cast<void*>(0);
            if (a2 == 0xffffffff) {
                ecx34 = a2;
                edi35 = a1;
                do {
                    if (!ecx34) 
                        break;
                    ecx34 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(ecx34) - 1);
                    edi35 = reinterpret_cast<struct s0*>(&edi35->pad4);
                } while (*reinterpret_cast<struct s0**>(&edi35->f0));
                a2 = reinterpret_cast<struct s0*>(~reinterpret_cast<unsigned char>(ecx34) - 1);
            }
            v36 = reinterpret_cast<void*>(ebp5 - 36);
            v37 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(v20) + reinterpret_cast<unsigned char>(a1));
            do {
                v32 = v33;
                esi24 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(v20) + reinterpret_cast<uint32_t>(v28));
                v31 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a2) - reinterpret_cast<unsigned char>(esi24));
                v30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esi24) + reinterpret_cast<unsigned char>(a1));
                v29 = v36;
                eax38 = fun_80489b4(v29, v30, v31, v32);
                if (!eax38) 
                    goto addr_804931a_25;
                if (eax38 == 0xffffffff) 
                    break;
                if (eax38 == 0xfffffffe) 
                    goto addr_8049573_28;
                fun_8048a54(v39, v30, v31, v32);
                v28 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v28) + reinterpret_cast<uint32_t>(eax38));
                v29 = v33;
                eax40 = fun_8048a84(v29, v30, v31, v32);
            } while (!eax40);
            goto addr_804931a_25;
            if (reinterpret_cast<uint32_t>(v28) > 1) {
                goto addr_8049142_17;
            }
            addr_8049325_32:
            if (0) {
                addr_8049142_17:
                ecx41 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(v20) + reinterpret_cast<uint32_t>(v28));
            } else {
                addr_804933e_16:
                edx42 = reinterpret_cast<struct s0*>(&v20->pad4);
                if (!1 && (eax43 = v22, ecx44 = static_cast<uint32_t>(v22) & 31, eax45 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(a4) + reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax43) >> 5) * 4 + 4) >> *reinterpret_cast<signed char*>(&ecx44), !!(*reinterpret_cast<unsigned char*>(&eax45) & 1))) {
                    if (reinterpret_cast<unsigned char>(v16) < reinterpret_cast<unsigned char>(v14)) {
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v13) + reinterpret_cast<unsigned char>(v16)) = 92;
                    }
                    v16 = reinterpret_cast<struct s0*>(&v16->pad4);
                    edx42 = reinterpret_cast<struct s0*>(&v20->pad4);
                    goto addr_80491f2_36;
                }
            }
            while (1) {
                if (!1) {
                    if (reinterpret_cast<unsigned char>(v16) < reinterpret_cast<unsigned char>(v14)) {
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v13) + reinterpret_cast<unsigned char>(v16)) = 92;
                    }
                    v46 = reinterpret_cast<struct s0*>(&v16->pad4);
                    if (reinterpret_cast<unsigned char>(v46) < reinterpret_cast<unsigned char>(v14)) {
                        eax47 = v22;
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v13) + reinterpret_cast<unsigned char>(v46)) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax47) >> 6) + 48);
                    }
                    v48 = reinterpret_cast<struct s0*>(&v46->pad4);
                    if (reinterpret_cast<unsigned char>(v48) < reinterpret_cast<unsigned char>(v14)) {
                        eax49 = v22;
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v13) + reinterpret_cast<unsigned char>(v48)) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax49) >> 3) & 7) + 48);
                    }
                    eax50 = v22;
                    v16 = reinterpret_cast<struct s0*>(&v48->pad4);
                    v22 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax50) & 7) + 48);
                }
                edx42 = reinterpret_cast<struct s0*>(&v20->pad4);
                if (reinterpret_cast<unsigned char>(edx42) >= reinterpret_cast<unsigned char>(ecx41)) 
                    break;
                if (reinterpret_cast<unsigned char>(v16) < reinterpret_cast<unsigned char>(v14)) {
                    eax51 = v22;
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v13) + reinterpret_cast<unsigned char>(v16)) = *reinterpret_cast<signed char*>(&eax51);
                }
                v16 = reinterpret_cast<struct s0*>(&v16->pad4);
                v20 = edx42;
                eax52 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx42) + reinterpret_cast<unsigned char>(a1));
                v22 = *reinterpret_cast<unsigned char*>(&eax52);
            }
            addr_80491f2_36:
            if (reinterpret_cast<unsigned char>(v16) < reinterpret_cast<unsigned char>(v14)) {
                eax53 = v22;
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v13) + reinterpret_cast<unsigned char>(v16)) = *reinterpret_cast<signed char*>(&eax53);
            }
            v16 = reinterpret_cast<struct s0*>(&v16->pad4);
            v20 = edx42;
            if (!reinterpret_cast<int1_t>(a2 == 0xffffffff)) 
                continue; else 
                break;
            addr_8049573_28:
            cf54 = reinterpret_cast<unsigned char>(esi24) < reinterpret_cast<unsigned char>(a2);
            if (!cf54 || !*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v37) + reinterpret_cast<uint32_t>(v28))) {
                addr_804931a_25:
                if (reinterpret_cast<uint32_t>(v28) > 1) 
                    goto addr_8049142_17; else 
                    goto addr_8049325_32;
            } else {
                do {
                    v28 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v28) + 1);
                    if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v20) + reinterpret_cast<uint32_t>(v28)) >= reinterpret_cast<unsigned char>(a2)) 
                        goto addr_804931a_25;
                } while (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v37) + reinterpret_cast<uint32_t>(v28)));
            }
            if (reinterpret_cast<uint32_t>(v28) > 1) {
                goto addr_8049142_17;
            }
            addr_80490c9_13:
            if (reinterpret_cast<unsigned char>(v16) < reinterpret_cast<unsigned char>(v14)) {
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v13) + reinterpret_cast<unsigned char>(v16)) = 92;
            }
            v16 = reinterpret_cast<struct s0*>(&v16->pad4);
            goto addr_80490df_7;
            addr_8049087_4:
        } while (v20 != a2);
        break;
    }
    if (0) {
        while (eax55 = reinterpret_cast<unsigned char>(*v17), !!*reinterpret_cast<signed char*>(&eax55)) {
            if (reinterpret_cast<unsigned char>(v16) < reinterpret_cast<unsigned char>(v14)) {
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v13) + reinterpret_cast<unsigned char>(v16)) = *reinterpret_cast<signed char*>(&eax55);
            }
            v16 = reinterpret_cast<struct s0*>(&v16->pad4);
            ++v17;
        }
    }
    if (reinterpret_cast<unsigned char>(v16) < reinterpret_cast<unsigned char>(v14)) {
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v13) + reinterpret_cast<unsigned char>(v16)) = 0;
    }
    return v16;
    addr_80490f4_8:
    goto *reinterpret_cast<int32_t*>(ebx11 + eax23 * 4 - 0x1664) + ebx11;
}

int32_t __ctype_b_loc = 0x8048aaa;

int32_t fun_8048aa4(void* a1, void* a2, void* a3, void* a4) {
    goto __ctype_b_loc;
}

int32_t mbrtowc = 0x80489ba;

void* fun_80489b4(void* a1, void* a2, void* a3, void* a4) {
    goto mbrtowc;
}

int32_t iswprint = 0x8048a5a;

int32_t fun_8048a54(void* a1, void* a2, void* a3, void* a4) {
    goto iswprint;
}

int32_t mbsinit = 0x8048a8a;

int32_t fun_8048a84(void* a1, void* a2, void* a3, void* a4) {
    goto mbsinit;
}

struct s0** fun_8048964(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5);

struct s0* fun_80496c3(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5) {
    struct s0* ebx6;
    struct s0* esi7;
    struct s0* edi8;
    struct s0* ebp9;
    struct s0* edi10;
    void* ebx11;
    struct s0* v12;
    struct s0* v13;
    struct s0* v14;
    struct s0* v15;
    struct s0* v16;
    struct s0** eax17;
    struct s0* eax18;
    struct s0* v19;
    struct s0* eax20;

    fun_8048d64(ebx6, esi7, edi8, ebp9, __return_address());
    edi10 = a5;
    if (!edi10) {
        edi10 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(ebx11) + 0x227e + 0x1d4);
    }
    eax17 = fun_8048964(v12, v13, v14, v15, v16);
    eax18 = *eax17;
    v19 = *reinterpret_cast<struct s0**>(&edi10->f0);
    eax20 = fun_8048ff6(a3, a4, v19, edi10);
    *eax17 = eax18;
    return eax20;
}

int32_t __errno_location = 0x804896a;

struct s0** fun_8048964(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5) {
    goto __errno_location;
}

struct s1 {
    signed char[6916] pad6916;
    struct s0* f6916;
};

struct s0* fun_80489d4();

void fun_8049d10(struct s0* a1, struct s0* a2);

struct s0* g8049e80 = reinterpret_cast<struct s0*>(0x81);

struct s0* fun_8049dc5(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5);

void fun_8048a74(struct s0* a1, int32_t a2, struct s0* a3, struct s0* a4);

struct s0* fun_8049e3f(struct s0* a1, struct s0* a2) {
    struct s0* esp3;
    struct s0* ebx4;
    struct s0* ebp5;
    struct s0* ebx6;
    struct s1* ebx7;
    struct s0* eax8;
    struct s0* esp9;
    struct s0* esi10;
    struct s0* edi11;
    struct s0* ebx12;
    uint32_t ecx13;
    uint32_t* v14;
    uint32_t ecx15;
    struct s0* v16;
    uint32_t eax17;
    struct s0* v18;
    struct s0* v19;
    struct s0* v20;
    struct s0* v21;
    struct s0* eax22;
    struct s0* v23;
    struct s0* v24;
    struct s0* v25;
    struct s0* v26;
    struct s0* v27;
    struct s0* v28;
    struct s0* v29;
    struct s0* v30;
    struct s0* eax31;
    int32_t v32;
    int32_t v33;

    esp3 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_8048d64(ebx4, ebp5, __return_address(), a1, a2);
    ebx6 = reinterpret_cast<struct s0*>(&ebx7->f6916);
    eax8 = fun_80489d4();
    if (!eax8) {
        fun_8049d10(a1, a2);
        esp9 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(esp3) - 4 - 4 + 4 - 20 - 4 + 4 - 4 + 4 - 4);
        fun_8048d64(ebx6, esi10, edi11, esp3, a1);
        ebx12 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(ebx6) + 0x1acc);
        ecx13 = *v14;
        if (!a2) {
            if (!ecx13) {
                ecx15 = 64 / reinterpret_cast<unsigned char>(v16);
                eax17 = 0;
                *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<uint1_t>(ecx15 == 0);
                ecx13 = ecx15 + eax17;
            }
        } else {
            if (0x7fffffff / reinterpret_cast<unsigned char>(v16) < ecx13) {
                fun_8049d10(v18, v19);
                fun_8048d64(ebx12, esp9, v20, v21, 0x8049e80);
                eax22 = g8049e80;
                if (!v23) {
                    if (!eax22) {
                        *reinterpret_cast<signed char*>(&eax22) = 64;
                    }
                } else {
                    if (reinterpret_cast<signed char>(eax22) < reinterpret_cast<signed char>(0)) {
                        fun_8049d10(v24, v25);
                        fun_8048d64(reinterpret_cast<unsigned char>(ebx12) + 0x1a61, v16, reinterpret_cast<unsigned char>(esp9) - 4 - 4 - 4 - 4 + 4 - 12 - 4 + 4 - 4, v26, v27);
                        eax31 = fun_8049dc5(v28, v29, v30, 0x8049f31, reinterpret_cast<unsigned char>(ebx12) + 0x1a61);
                        fun_8048a74(eax31, 0, v28, 0x8049f31);
                        goto v32;
                    } else {
                        eax22 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(eax22) + reinterpret_cast<unsigned char>(eax22));
                    }
                }
                g8049e80 = eax22;
                fun_8049e3f(v23, eax22);
                goto v33;
            } else {
                ecx13 = ecx13 + ecx13;
            }
        }
        *v14 = ecx13;
        fun_8049e3f(a2, ecx13 * reinterpret_cast<unsigned char>(v16));
        goto a1;
    } else {
        return eax8;
    }
}

int32_t memset = 0x8048a7a;

void fun_8048a74(struct s0* a1, int32_t a2, struct s0* a3, struct s0* a4) {
    goto memset;
}

void fun_8048a64(struct s0* a1);

void fun_8049fe0(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5) {
    struct s0* ebx6;
    struct s0* ebp7;

    fun_8048d64(ebx6, ebp7, __return_address(), a1, a2);
    if (a1) {
        fun_8048a64(a1);
    }
    return;
}

struct s2 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t f12;
    int32_t f16;
    int32_t f20;
    int32_t f24;
    int32_t f28;
    int32_t f32;
};

struct s2* fun_8049905();

struct s0* fun_8049721(struct s0* a1, struct s0* a2, uint32_t a3);

struct s0* fun_804995f(int32_t a1, struct s0* a2, struct s0* a3) {
    uint32_t v4;
    struct s0* eax5;

    fun_8049905();
    eax5 = fun_8049721(0xffffffff, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xffffffc8, v4);
    return eax5;
}

int32_t fprintf = 0x804891a;

void fun_8048914(struct s0* a1, int32_t a2, struct s0* a3, struct s0* a4, struct s0* a5) {
    goto fprintf;
}

int32_t fputs_unlocked = 0x804890a;

void fun_8048904(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8) {
    goto fputs_unlocked;
}

int32_t abort = 0x804898a;

int32_t fun_8048984(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8) {
    goto abort;
}

int32_t malloc = 0x804897a;

struct s0* fun_8048974(struct s0* a1) {
    goto malloc;
}

int32_t realloc = 0x80489da;

struct s0* fun_80489d4() {
    goto realloc;
}

int32_t calloc = 0x8048a4a;

int32_t fun_8048a44() {
    goto calloc;
}

int32_t free = 0x8048a6a;

void fun_8048a64(struct s0* a1) {
    goto free;
}

int32_t fun_804a0fd(int32_t a1);

void fun_8048b08();

void fun_804a0f4() {
    int32_t ebx1;

    fun_804a0fd(ebx1);
    fun_8048b08();
    return;
}

int32_t __cxa_atexit = 0x804895a;

void fun_8048954(int32_t a1, int32_t a2, int32_t a3) {
    goto __cxa_atexit;
}

struct s3 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048aed(int32_t a1) {
    int32_t eax2;
    struct s3* ebp3;

    eax2 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x2e5f - 4);
    if (eax2) {
        eax2();
    }
    goto ebp3->f4;
}

struct s4 {
    signed char[11738] pad11738;
    struct s0* f11738;
};

void fun_80489f4(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8);

int32_t g5;

void fun_8048944(int32_t a1, uint32_t a2);

void fun_80489a4(uint32_t a1, struct s0* a2);

void fun_80489e4(uint32_t a1, struct s0* a2);

void fun_804a0a0(int32_t a1, struct s0* a2);

signed char* g9;

void fun_8048b68(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6) {
    struct s0* ebx7;
    struct s0* esi8;
    struct s0* ebp9;
    struct s0* ebx10;
    struct s4* ebx11;
    struct s0* eax12;
    struct s0* edx13;
    struct s0* eax14;
    struct s0* esi15;
    struct s0* edx16;
    struct s0* eax17;
    struct s0* v18;
    struct s0* eax19;
    struct s0* v20;
    struct s0* edi21;
    void* ebx22;
    uint32_t esi23;
    int32_t edx24;
    struct s0* v25;
    int32_t v26;
    struct s0* v27;
    struct s0* v28;
    struct s0* v29;
    int32_t eax30;
    int1_t zf31;
    struct s0* v32;
    struct s0* v33;
    signed char* ecx34;
    signed char* edi35;
    signed char* v36;
    signed char* esi37;
    int32_t ecx38;
    signed char* eax39;
    signed char* edi40;
    signed char* esi41;
    int32_t ecx42;
    struct s0* v43;

    fun_8048d64(ebx7, esi8, ebp9, __return_address(), a1);
    ebx10 = reinterpret_cast<struct s0*>(&ebx11->f11738);
    eax12 = fun_8048934(0, reinterpret_cast<unsigned char>(ebx10) + 0xffffe7cc, 5, 0x8048b72, ebx7, esi8, ebp9, __return_address());
    edx13 = **reinterpret_cast<struct s0***>(reinterpret_cast<unsigned char>(ebx10) + 0xffffffec);
    fun_80489f4(eax12, edx13, edx13, 0x8048b72, ebx7, esi8, ebp9, __return_address());
    eax14 = fun_8048934(0, reinterpret_cast<unsigned char>(ebx10) + 0xffffe864, 5, 0x8048b72, ebx7, esi8, ebp9, __return_address());
    esi15 = *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(ebx10) + 0xfffffff4);
    edx16 = *reinterpret_cast<struct s0**>(&esi15->f0);
    fun_8048904(eax14, edx16, 5, 0x8048b72, ebx7, esi8, ebp9, __return_address());
    eax17 = fun_8048934(0, reinterpret_cast<unsigned char>(ebx10) + 0xffffe894, 5, 0x8048b72, ebx7, esi8, ebp9, __return_address());
    v18 = *reinterpret_cast<struct s0**>(&esi15->f0);
    fun_8048904(eax17, v18, 5, 0x8048b72, ebx7, esi8, ebp9, __return_address());
    eax19 = fun_8048934(0, reinterpret_cast<unsigned char>(ebx10) + 0xffffe8ca, 5, 0x8048b72, ebx7, esi8, ebp9, __return_address());
    v20 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(ebx10) + 0xffffe8e1);
    fun_80489f4(eax19, v20, 5, 0x8048b72, ebx7, esi8, ebp9, __return_address());
    fun_8048a34(a1, v20, 5, 0x8048b72, ebx7, esi8, ebp9, __return_address());
    fun_8048d64(ebx10, esi15, edi21, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, a1);
    ebx22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx10) + 0x2cf7);
    esi23 = reinterpret_cast<uint32_t>(ebx22) + 0xffffe941;
    edx24 = g5;
    **reinterpret_cast<int32_t**>(reinterpret_cast<uint32_t>(ebx22) + 0xffffffec) = edx24;
    fun_8048944(6, reinterpret_cast<uint32_t>(ebx22) + 0xffffe8e0);
    v25 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebx22) + 0xffffe8f7);
    fun_80489a4(esi23, v25);
    fun_80489e4(esi23, v25);
    v26 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx22) + 0xffffffe0);
    fun_804a0a0(v26, v25);
    if (v20 != 2) 
        goto addr_8048cbb_2;
    while (1) {
        eax30 = fun_8048924(reinterpret_cast<uint32_t>(ebx22) + 0xffffe909, v25, v27, v28, v29, 0);
        zf31 = eax30 == 0;
        if (!zf31) {
            addr_8048cbb_2:
            fun_8048a34(0, v25, v27, v28, v29, 0, v32, v33);
            continue;
        } else {
            *reinterpret_cast<signed char*>(&eax30) = 7;
            ecx34 = g9;
            edi35 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx22) + 0xffffe919);
            v36 = ecx34;
            esi37 = ecx34;
            ecx38 = eax30;
            while (ecx38) {
                --ecx38;
                zf31 = *esi37 == *edi35;
                *edi35 = *esi37;
                ++edi35;
                ++esi37;
            }
            if (!zf31) 
                goto addr_8048cf3_8;
        }
        fun_8048b68(0, v25, v27, v28, v29, 0);
        eax39 = g9;
        v36 = eax39;
        addr_8048cf3_8:
        edi40 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx22) + 0xffffe920);
        esi41 = v36;
        ecx42 = 10;
        while (ecx42) {
            --ecx42;
            zf31 = *esi41 == *edi40;
            *edi40 = *esi41;
            ++edi40;
            ++esi41;
        }
        if (zf31) {
            v29 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebx22) + 0xffffe92a);
            v28 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebx22) + 0xffffe937);
            v27 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebx22) + 0xffffe93d);
            v25 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebx22) + 0xffffe94b);
            v43 = **reinterpret_cast<struct s0***>(reinterpret_cast<uint32_t>(ebx22) + 0xfffffff4);
            fun_8049ccd(v43, v25, v27, v28, v29, 0);
            goto addr_8048cbb_2;
        }
    }
}

struct s0* fun_8048d64(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5) {
    struct s0* eax6;

    return eax6;
}

void fun_8048994(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5);

void fun_80488f4(struct s0* a1, int32_t a2, struct s0* a3, struct s0* a4, struct s0* a5);

void fun_8049ac0(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5) {
    uint32_t esi6;
    struct s0* v7;
    struct s0* ebx8;
    struct s0* esi9;
    struct s0* edi10;
    struct s0* ebp11;
    void* ebx12;
    void* ebx13;
    struct s0* edi14;
    struct s0* ecx15;
    struct s0* edx16;
    struct s0* eax17;
    struct s0* v18;
    struct s0* v19;
    struct s0* v20;
    struct s0* v21;
    struct s0* eax22;
    struct s0* v23;
    struct s0* v24;
    struct s0* v25;
    struct s0* eax26;
    struct s0* v27;

    esi6 = 0;
    v7 = ebx8;
    fun_8048d64(v7, esi9, edi10, ebp11, __return_address());
    ebx12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx13) + 0x1e7f);
    edi14 = a1;
    ecx15 = a2;
    edx16 = reinterpret_cast<struct s0*>(&a5->f4);
    eax17 = a5;
    while (*reinterpret_cast<struct s0**>(&eax17->f0)) {
        eax17 = edx16;
        ++esi6;
        edx16 = reinterpret_cast<struct s0*>(&edx16->f4);
    }
    if (!ecx15) {
        v18 = a4;
        fun_8048914(edi14, reinterpret_cast<int32_t>(ebx12) - 0x1169, a3, v18, v19);
    } else {
        v18 = a3;
        v20 = a4;
        fun_8048914(edi14, reinterpret_cast<int32_t>(ebx12) - 0x11b8, ecx15, v18, v20);
    }
    if (esi6 <= 9) {
        goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebx12) + esi6 * 4 - 0x1160) + reinterpret_cast<int32_t>(ebx12);
    }
    eax22 = fun_8048934(0, reinterpret_cast<int32_t>(ebx12) + 0xffffec78, 5, v18, v20, v21, 0x8049acd, v7);
    fun_8048994(edi14, eax22, a5, v18, v20);
    if (reinterpret_cast<uint32_t>(edi14->f20) < reinterpret_cast<uint32_t>(edi14->f24)) 
        goto addr_8049b6e_11;
    fun_80488f4(edi14, 10, a5, v18, v20);
    addr_8049b75_13:
    v23 = **reinterpret_cast<struct s0***>(reinterpret_cast<int32_t>(ebx12) - 28);
    fun_8048904(v23, edi14, a5, v18, v20, v24, 0x8049acd, v7);
    if (reinterpret_cast<uint32_t>(edi14->f20) >= reinterpret_cast<uint32_t>(edi14->f24)) {
        fun_80488f4(edi14, 10, a5, v18, v20);
    } else {
        *edi14->f20 = 10;
        edi14->f20 = edi14->f20 + 1;
    }
    eax26 = fun_8048934(0, reinterpret_cast<int32_t>(ebx12) + 0xffffecb4, 5, v18, v20, v25, 0x8049acd, v7);
    fun_8048904(eax26, edi14, 5, v18, v20, v27, 0x8049acd, v7);
    return;
    addr_8049b6e_11:
    *edi14->f20 = 10;
    edi14->f20 = edi14->f20 + 1;
    goto addr_8049b75_13;
}

void fun_8048e5f() {
    return;
}

void fun_8048f36(struct s0* a1, unsigned char a2, uint32_t a3);

struct s0* fun_80499f0(struct s0* a1, signed char a2) {
    struct s0* ebx3;
    struct s0* esi4;
    struct s0* ebp5;
    struct s0* esi6;
    int32_t v7;
    struct s0* eax8;

    fun_8048d64(ebx3, esi4, ebp5, __return_address(), a1);
    esi6 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xffffffc8);
    v7 = a2;
    fun_8048f36(esi6, *reinterpret_cast<unsigned char*>(&v7), 1);
    eax8 = fun_8049721(0xffffffff, esi6, 1);
    return eax8;
}

void fun_8048f36(struct s0* a1, unsigned char a2, uint32_t a3) {
    struct s0* ebx4;
    struct s0* esi5;
    struct s0* edi6;
    struct s0* ebp7;
    uint32_t ecx8;
    uint32_t eax9;
    void* eax10;
    uint32_t* edi11;
    uint32_t* edi12;
    void* ebx13;
    uint32_t ecx14;
    uint32_t ecx15;

    fun_8048d64(ebx4, esi5, edi6, ebp7, __return_address());
    ecx8 = a2;
    eax9 = ecx8;
    eax10 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax9) >> 5)) << 2);
    edi11 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax10) + reinterpret_cast<unsigned char>(a1) + 4);
    if (!a1) {
        edi12 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ebx13) + 0x2a0b + reinterpret_cast<uint32_t>(eax10) + 0x1d8);
        ecx14 = ecx8 & 31;
        *edi12 = *edi12 ^ (a3 & 1 ^ reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(*edi12) >> *reinterpret_cast<unsigned char*>(&ecx14)) & 1) << *reinterpret_cast<unsigned char*>(&ecx14);
        return;
    } else {
        ecx15 = ecx8 & 31;
        *edi11 = *edi11 ^ (a3 & 1 ^ reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(*edi11) >> *reinterpret_cast<unsigned char*>(&ecx15)) & 1) << *reinterpret_cast<unsigned char*>(&ecx15);
        return;
    }
}

struct s0* fun_8048fa3(int32_t a1) {
    struct s0* ebx2;
    struct s0* esi3;
    struct s0* edi4;
    struct s0* ebp5;
    struct s0* eax6;
    struct s0* eax7;
    struct s0* ecx8;
    uint32_t edx9;
    struct s0* eax10;
    uint32_t eax11;
    int32_t edx12;
    void* ebx13;

    eax6 = fun_8048d64(ebx2, esi3, edi4, ebp5, __return_address());
    eax7 = fun_8048934(0, eax6, 5, ebx2, esi3, edi4, ebp5, __return_address());
    ecx8 = eax7;
    *reinterpret_cast<unsigned char*>(&edx9) = reinterpret_cast<uint1_t>(eax7 == eax10);
    eax11 = 0;
    *reinterpret_cast<unsigned char*>(&eax11) = reinterpret_cast<uint1_t>(edx12 == 6);
    if (edx9 & eax11) {
        ecx8 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(ebx13) + 0x299a + 0xffffec3c);
    }
    return ecx8;
}

int32_t __ctype_get_mb_cur_max = 0x8048a2a;

int32_t fun_8048a24() {
    goto __ctype_get_mb_cur_max;
}

struct s0* fun_8049721(struct s0* a1, struct s0* a2, uint32_t a3) {
    struct s0* ebx4;
    struct s0* esi5;
    struct s0* edi6;
    struct s0* eax7;
    struct s0* ebx8;
    struct s0* v9;
    struct s0* v10;
    struct s0* v11;
    struct s0* v12;
    struct s0** eax13;
    struct s0* v14;
    struct s0* v15;
    struct s0* v16;
    struct s0* v17;
    struct s0* v18;
    struct s0* v19;
    struct s0* v20;
    struct s0* v21;
    struct s0* v22;
    struct s0* edx23;
    struct s0* eax24;
    struct s0* v25;
    struct s0* edi26;
    struct s0* v27;
    struct s0* v28;
    struct s0* v29;
    struct s0* v30;
    struct s0* v31;
    struct s0* eax32;
    struct s0* eax33;
    struct s0* esi34;
    struct s0* eax35;
    struct s0** eax36;
    struct s0* esi37;
    struct s0* v38;
    struct s0* v39;
    struct s0* eax40;
    int32_t edx41;
    struct s0* eax42;
    struct s0* edx43;
    struct s0* v44;

    while (1) {
        eax7 = fun_8048d64(ebx4, esi5, edi6, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, __return_address());
        ebx8 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(ebx4) + 0x2220);
        eax13 = fun_8048964(v9, 0xffffffff, v10, v11, v12);
        v14 = *eax13;
        if (reinterpret_cast<signed char>(eax7) < reinterpret_cast<signed char>(0)) {
            fun_8048984(v15, 0xffffffff, v10, v16, v17, v18, v19, v20);
        } else {
            if (reinterpret_cast<unsigned char>(ebx8->f144) > reinterpret_cast<unsigned char>(eax7)) 
                break;
            edi6 = reinterpret_cast<struct s0*>(&eax7->pad4);
            if (reinterpret_cast<unsigned char>(edi6) <= reinterpret_cast<unsigned char>(0x1fffffff)) 
                goto addr_804976c_5;
        }
        fun_8049d10(v21, 0xffffffff);
        fun_8048d64(ebx8, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, v22, 0xffffffff, v10);
        edx23 = v10;
        v10 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(ebx8) + 0x2095 + 0x1d4);
        ebx4 = ebx8;
    }
    addr_80497c5_8:
    eax24 = ebx8->f156;
    v25 = *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax24) + reinterpret_cast<unsigned char>(eax7) * 8);
    edi26 = *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax24) + reinterpret_cast<unsigned char>(eax7) * 8 + 4);
    v27 = a2;
    v28 = a1;
    v29 = edx23;
    v30 = edi26;
    v31 = v25;
    eax32 = fun_80496c3(v30, v31, v29, v28, v27);
    if (reinterpret_cast<unsigned char>(v25) <= reinterpret_cast<unsigned char>(eax32)) {
        eax33 = reinterpret_cast<struct s0*>(&eax32->pad4);
        esi34 = ebx8->f156;
        *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(esi34) + reinterpret_cast<unsigned char>(eax7) * 8) = eax33;
        if (edi26 != reinterpret_cast<unsigned char>(ebx8) + 0xd4) {
            fun_8049fe0(edi26, v31, v29, v28, v27);
            esi34 = ebx8->f156;
        }
        eax35 = fun_8049dc5(eax33, v31, v29, v28, v27);
        *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(esi34) + reinterpret_cast<unsigned char>(eax7) * 8 + 4) = eax35;
        edi26 = eax35;
        v28 = a1;
        v27 = a2;
        v31 = eax33;
        v29 = edx23;
        v30 = edi26;
        fun_80496c3(v30, v31, v29, v28, v27);
    }
    eax36 = fun_8048964(v30, v31, v29, v28, v27);
    *eax36 = v14;
    return edi26;
    addr_804976c_5:
    esi37 = ebx8->f156;
    if (esi37 == &ebx8->f148) {
        eax40 = fun_8049dc5(8, 0xffffffff, v10, v38, v39);
        edx41 = ebx8->f152;
        esi37 = eax40;
        ebx8->f156 = eax40;
        *reinterpret_cast<struct s0**>(&esi37->f0) = ebx8->f148;
        esi37->f4 = edx41;
    }
    eax42 = fun_8049e3f(esi37, reinterpret_cast<unsigned char>(edi6) * 8);
    edx43 = ebx8->f144;
    ebx8->f156 = eax42;
    fun_8048a74(reinterpret_cast<unsigned char>(eax42) + reinterpret_cast<unsigned char>(edx43) * 8, 0, reinterpret_cast<unsigned char>(edi6) - reinterpret_cast<unsigned char>(edx43) << 3, v44);
    ebx8->f144 = edi6;
    goto addr_80497c5_8;
}

void fun_8049d10(struct s0* a1, struct s0* a2) {
    struct s0* v3;
    struct s0* v4;
    struct s0* ebp5;
    struct s0* v6;
    struct s0* ebx7;
    void* ebx8;
    void* ebx9;
    int32_t eax10;
    struct s0* v11;
    struct s0* v12;
    struct s0* v13;
    struct s0* eax14;
    struct s0* eax15;

    v3 = reinterpret_cast<struct s0*>(__return_address());
    v4 = ebp5;
    v6 = ebx7;
    fun_8048d64(v6, v4, v3, a1, a2);
    ebx8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx9) + 0x1c33);
    eax10 = **reinterpret_cast<int32_t**>(reinterpret_cast<int32_t>(ebx8) - 36);
    if (!eax10) 
        goto addr_8049d2e_2;
    while (1) {
        eax10(v11, 0, v12, v13, 0x8049d19, v6, v4, v3);
        addr_8049d2e_2:
        eax14 = *reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(ebx8) - 8);
        eax15 = fun_8048934(0, eax14, 5, v13, 0x8049d19, v6, v4, v3);
        v13 = eax15;
        v12 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(ebx8) + 0xffffe960);
        v11 = **reinterpret_cast<struct s0***>(reinterpret_cast<int32_t>(ebx8) - 16);
        fun_8048a94(v11, 0, v12, v13, 0x8049d19, v6, v4, v3);
        eax10 = fun_8048984(v11, 0, v12, v13, 0x8049d19, v6, v4, v3);
    }
}

struct s5 {
    signed char[7038] pad7038;
    struct s0* f7038;
};

struct s0* fun_8049dc5(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5) {
    struct s0* esp6;
    struct s0* ebx7;
    struct s0* ebp8;
    struct s0* ebx9;
    struct s5* ebx10;
    struct s0* eax11;
    struct s0* esp12;
    struct s0* esi13;
    struct s0* edi14;
    struct s0* eax15;
    struct s0* ebx16;
    struct s0** esp17;
    struct s0* v18;
    struct s0* v19;
    struct s0* eax20;
    struct s0* esp21;
    struct s0* ebx22;
    struct s0* eax23;
    struct s0* esp24;
    struct s0* ebx25;
    uint32_t ecx26;
    uint32_t* v27;
    uint32_t ecx28;
    struct s0* v29;
    uint32_t eax30;
    struct s0* v31;
    struct s0* v32;
    struct s0* v33;
    struct s0* v34;
    struct s0* eax35;
    struct s0* v36;
    struct s0* v37;
    struct s0* v38;
    struct s0* v39;
    struct s0* v40;
    struct s0* v41;
    struct s0* v42;
    struct s0* v43;
    struct s0* eax44;
    int32_t v45;
    int32_t v46;

    esp6 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_8048d64(ebx7, ebp8, __return_address(), a1, a2);
    ebx9 = reinterpret_cast<struct s0*>(&ebx10->f7038);
    eax11 = fun_8048974(a1);
    if (eax11) {
        return eax11;
    }
    fun_8049d10(a1, ebx7);
    esp12 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(esp6) - 4 - 4 + 4 - 4 - 4 + 4 - 4 + 4 - 4);
    eax15 = fun_8048d64(ebx9, esi13, edi14, esp6, a1);
    ebx16 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(ebx9) + 0x1b45);
    esp17 = reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(esp12) - 4 - 4 - 4 - 4 + 4 - 12);
    if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax15) / reinterpret_cast<unsigned char>(__return_address())) >= reinterpret_cast<unsigned char>(ebp8) && (v18 = ebx7, v19 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(ebp8) * reinterpret_cast<unsigned char>(__return_address())), eax20 = fun_80489d4(), esp17 = esp17 - 4 + 4, !!eax20)) {
        goto a1;
    }
    fun_8049d10(v18, v19);
    esp21 = reinterpret_cast<struct s0*>(esp17 - 4 + 4 - 4);
    fun_8048d64(ebx16, esp12, v18, v19, 0x8049e07);
    ebx22 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(ebx16) + 0x1b04);
    eax23 = fun_80489d4();
    if (eax23) 
        goto addr_8049e67_7;
    fun_8049d10(v19, 0x8049e07);
    esp24 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(esp21) - 4 - 4 + 4 - 20 - 4 + 4 - 4 + 4 - 4);
    fun_8048d64(ebx22, ebx7, __return_address(), esp21, v19);
    ebx25 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(ebx22) + 0x1acc);
    ecx26 = *v27;
    if (0) {
        if (!ecx26) {
            ecx28 = 64 / reinterpret_cast<unsigned char>(v29);
            eax30 = 0;
            *reinterpret_cast<unsigned char*>(&eax30) = reinterpret_cast<uint1_t>(ecx28 == 0);
            ecx26 = ecx28 + eax30;
        }
    } else {
        if (0x7fffffff / reinterpret_cast<unsigned char>(v29) < ecx26) {
            fun_8049d10(v31, v32);
            fun_8048d64(ebx25, esp24, v33, v34, 0x8049e80);
            eax35 = g8049e80;
            if (!v36) {
                if (!eax35) {
                    *reinterpret_cast<signed char*>(&eax35) = 64;
                }
            } else {
                if (reinterpret_cast<signed char>(eax35) < reinterpret_cast<signed char>(0)) {
                    fun_8049d10(v37, v38);
                    fun_8048d64(reinterpret_cast<unsigned char>(ebx25) + 0x1a61, v29, reinterpret_cast<unsigned char>(esp24) - 4 - 4 - 4 - 4 + 4 - 12 - 4 + 4 - 4, v39, v40);
                    eax44 = fun_8049dc5(v41, v42, v43, 0x8049f31, reinterpret_cast<unsigned char>(ebx25) + 0x1a61);
                    fun_8048a74(eax44, 0, v41, 0x8049f31);
                    goto v45;
                } else {
                    eax35 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(eax35) + reinterpret_cast<unsigned char>(eax35));
                }
            }
            g8049e80 = eax35;
            fun_8049e3f(v36, eax35);
            goto v46;
        } else {
            ecx26 = ecx26 + ecx26;
        }
    }
    *v27 = ecx26;
    fun_8049e3f(0x8049e07, ecx26 * reinterpret_cast<unsigned char>(v29));
    goto v19;
    addr_8049e67_7:
    goto v18;
}

struct s2* fun_8049905() {
    int32_t ecx1;
    struct s2* esi2;
    struct s2* eax3;
    int32_t v4;
    int32_t edx5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    int32_t v13;

    ecx1 = 8;
    esi2 = eax3;
    v4 = edx5;
    while (ecx1) {
        --ecx1;
        esi2 = reinterpret_cast<struct s2*>(&esi2->f4);
    }
    esi2->f0 = v4;
    esi2->f4 = v6;
    esi2->f8 = v7;
    esi2->f12 = v8;
    esi2->f16 = v9;
    esi2->f20 = v10;
    esi2->f24 = v11;
    esi2->f28 = v12;
    esi2->f32 = v13;
    return esi2;
}

int32_t vfprintf = 0x804899a;

void fun_8048994(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5) {
    goto vfprintf;
}

int32_t __overflow = 0x80488fa;

void fun_80488f4(struct s0* a1, int32_t a2, struct s0* a3, struct s0* a4, struct s0* a5) {
    goto __overflow;
}

int32_t memcpy = 0x8048a0a;

void fun_8048a04(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4) {
    goto memcpy;
}

struct s6 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_804a016() {
    int32_t ebx1;
    int32_t* eax2;
    int32_t* edx3;
    int32_t ebp4;
    int32_t* edi5;
    uint32_t esi6;
    int32_t ebp7;
    struct s6* ebp8;

    ebx1 = reinterpret_cast<int32_t>(__return_address()) + 0x1936;
    fun_80488bc();
    eax2 = reinterpret_cast<int32_t*>(ebx1 - 0x120);
    edx3 = reinterpret_cast<int32_t*>(ebx1 - 0x120);
    *reinterpret_cast<int32_t**>(ebp4 - 16) = eax2;
    if (0 < reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax2) - reinterpret_cast<int32_t>(edx3) >> 2)) {
        edi5 = edx3;
        esi6 = 0;
        do {
            edx3[esi6]();
            ++esi6;
            edx3 = edi5;
        } while (esi6 < reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(ebp7 - 16) - reinterpret_cast<int32_t>(edi5) >> 2));
    }
    goto ebp8->f4;
}

struct s7 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_804a067(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t ebx6;
    int32_t* edi7;
    int32_t esi8;
    struct s7* ebp9;

    ebx6 = reinterpret_cast<int32_t>(__return_address()) + 0x18e5;
    edi7 = reinterpret_cast<int32_t*>(ebx6 - 0x120);
    esi8 = (ebx6 - 0x120 - reinterpret_cast<int32_t>(edi7) >> 2) - 1;
    while (esi8 != -1) {
        edi7[esi8]();
        --esi8;
    }
    fun_804a0f4();
    goto ebp9->f4;
}

struct s8 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t fun_804a0fd(int32_t a1) {
    struct s8* ebp2;

    fun_8048b08();
    goto ebp2->f4;
}

struct s9 {
    signed char[8] pad8;
    int32_t f8;
};

struct s10 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_804a0a9() {
    int32_t eax1;
    int32_t v2;
    struct s9* ebp3;
    struct s10* ebp4;

    eax1 = 0;
    if (*reinterpret_cast<int32_t**>(reinterpret_cast<int32_t>(__return_address()) + 0x18a3 - 24)) {
        eax1 = **reinterpret_cast<int32_t**>(reinterpret_cast<int32_t>(__return_address()) + 0x18a3 - 24);
    }
    v2 = ebp3->f8;
    fun_8048954(v2, 0, eax1);
    goto ebp4->f4;
}

int32_t printf = 0x80489fa;

void fun_80489f4(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8) {
    goto printf;
}

int32_t setlocale = 0x804894a;

void fun_8048944(int32_t a1, uint32_t a2) {
    goto setlocale;
}

int32_t bindtextdomain = 0x80489aa;

void fun_80489a4(uint32_t a1, struct s0* a2) {
    goto bindtextdomain;
}

int32_t textdomain = 0x80489ea;

void fun_80489e4(uint32_t a1, struct s0* a2) {
    goto textdomain;
}

void fun_804a0a0(int32_t a1, struct s0* a2) {
    int32_t eax3;
    int32_t ebx4;

    fun_804a0a9();
    eax3 = 0;
    if (*reinterpret_cast<int32_t**>(ebx4 + 0x18a3 - 24)) {
        eax3 = **reinterpret_cast<int32_t**>(ebx4 + 0x18a3 - 24);
    }
    fun_8048954(a1, 0, eax3);
    return;
}

struct s0* fun_80498ae(struct s0* a1, struct s0* a2) {
    struct s0* v3;
    struct s0* v4;
    struct s0* ebx5;
    struct s0* esi6;
    struct s0* edi7;
    struct s0* eax8;
    struct s0* v9;
    struct s0* v10;
    struct s0* v11;
    struct s0* v12;
    struct s0* v13;
    struct s0** eax14;
    struct s0* v15;
    struct s0* v16;
    struct s0* v17;
    struct s0* v18;
    struct s0* v19;
    struct s0* v20;
    struct s0* v21;
    struct s0* v22;
    struct s0* v23;
    struct s0* v24;
    struct s0* v25;
    struct s0* eax26;
    struct s0* v27;
    struct s0* edi28;
    struct s0* v29;
    struct s0* v30;
    struct s0* v31;
    struct s0* v32;
    struct s0* eax33;
    struct s0* eax34;
    struct s0* esi35;
    struct s0* eax36;
    struct s0** eax37;
    struct s0* esi38;
    struct s0* v39;
    struct s0* v40;
    struct s0* v41;
    struct s0* v42;
    struct s0* eax43;
    int32_t edx44;
    struct s0* eax45;
    struct s0* edx46;
    struct s0* v47;

    while (1) {
        fun_8048d64(v3, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 + 4 + 4 + 4 - 4, __return_address(), a1, a2);
        v4 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(ebx5) + 0x2095 + 0x1d4);
        eax8 = fun_8048d64(v3, esi6, edi7, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 + 4 + 4 + 4 - 4, __return_address());
        ebx5 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(v3) + 0x2220);
        eax14 = fun_8048964(v9, v10, v11, v12, v13);
        v15 = *eax14;
        if (reinterpret_cast<signed char>(eax8) < reinterpret_cast<signed char>(0)) {
            fun_8048984(v16, v17, v18, v19, v20, v21, v22, v23);
        } else {
            if (reinterpret_cast<unsigned char>(ebx5->f144) > reinterpret_cast<unsigned char>(eax8)) 
                break;
            edi7 = reinterpret_cast<struct s0*>(&eax8->pad4);
            if (reinterpret_cast<unsigned char>(edi7) <= reinterpret_cast<unsigned char>(0x1fffffff)) 
                goto addr_804976c_6;
        }
        fun_8049d10(v24, v25);
    }
    addr_80497c5_8:
    eax26 = ebx5->f156;
    v27 = *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax26) + reinterpret_cast<unsigned char>(eax8) * 8);
    edi28 = *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax26) + reinterpret_cast<unsigned char>(eax8) * 8 + 4);
    v29 = v4;
    v30 = a2;
    v31 = edi28;
    v32 = v27;
    eax33 = fun_80496c3(v31, v32, v30, 0xffffffff, v29);
    if (reinterpret_cast<unsigned char>(v27) <= reinterpret_cast<unsigned char>(eax33)) {
        eax34 = reinterpret_cast<struct s0*>(&eax33->pad4);
        esi35 = ebx5->f156;
        *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(esi35) + reinterpret_cast<unsigned char>(eax8) * 8) = eax34;
        if (edi28 != reinterpret_cast<unsigned char>(ebx5) + 0xd4) {
            fun_8049fe0(edi28, v32, v30, 0xffffffff, v29);
            esi35 = ebx5->f156;
        }
        eax36 = fun_8049dc5(eax34, v32, v30, 0xffffffff, v29);
        *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(esi35) + reinterpret_cast<unsigned char>(eax8) * 8 + 4) = eax36;
        edi28 = eax36;
        v29 = v4;
        v32 = eax34;
        v30 = a2;
        v31 = edi28;
        fun_80496c3(v31, v32, v30, 0xffffffff, v29);
    }
    eax37 = fun_8048964(v31, v32, v30, 0xffffffff, v29);
    *eax37 = v15;
    return edi28;
    addr_804976c_6:
    esi38 = ebx5->f156;
    if (esi38 == &ebx5->f148) {
        eax43 = fun_8049dc5(8, v39, v40, v41, v42);
        edx44 = ebx5->f152;
        esi38 = eax43;
        ebx5->f156 = eax43;
        *reinterpret_cast<struct s0**>(&esi38->f0) = ebx5->f148;
        esi38->f4 = edx44;
    }
    eax45 = fun_8049e3f(esi38, reinterpret_cast<unsigned char>(edi7) * 8);
    edx46 = ebx5->f144;
    ebx5->f156 = eax45;
    fun_8048a74(reinterpret_cast<unsigned char>(eax45) + reinterpret_cast<unsigned char>(edx46) * 8, 0, reinterpret_cast<unsigned char>(edi7) - reinterpret_cast<unsigned char>(edx46) << 3, v47);
    ebx5->f144 = edi7;
    goto addr_80497c5_8;
}

signed char g804ba00 = 0;

int32_t* g804b9d4 = reinterpret_cast<int32_t*>(0x804b838);

void fun_8048b08() {
    int1_t zf1;
    int32_t* eax2;
    int32_t edx3;

    zf1 = g804ba00 == 0;
    if (zf1) {
        while (eax2 = g804b9d4, edx3 = *eax2, !!edx3) {
            g804b9d4 = eax2 + 1;
            edx3();
        }
        g804ba00 = 1;
    }
    return;
}

void fun_804a008();

void fun_8048ac0() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80489c4(0x8048c4a, __return_address(), esp1, fun_804a008, 0x804a05c, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_80488e0() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8048b19() {
}

void fun_8049051() {
    int32_t ebp1;
    int32_t ebp2;
    int32_t ebp3;
    int32_t ebp4;
    int32_t ebp5;
    int32_t ebx6;
    int32_t ebp7;

    if (*reinterpret_cast<uint32_t*>(ebp1 - 52) < *reinterpret_cast<uint32_t*>(ebp2 - 44)) {
        **reinterpret_cast<signed char**>(ebp3 - 40) = 39;
    }
    *reinterpret_cast<int32_t*>(ebp4 - 52) = 1;
    *reinterpret_cast<int32_t*>(ebp5 - 56) = ebx6 - 0x13c2;
    *reinterpret_cast<int32_t*>(ebp7 - 60) = 1;
}

struct s11 {
    signed char[16] pad16;
    int32_t f16;
};

struct s12 {
    signed char[20] pad20;
    struct s0* f20;
};

struct s13 {
    signed char[12] pad12;
    struct s0* f12;
};

struct s14 {
    signed char[8] pad8;
    struct s0* f8;
};

void fun_80493cf() {
    uint32_t eax1;
    int32_t ebp2;
    struct s11* ebp3;
    struct s0* edx4;
    struct s12* ebp5;
    struct s0* v6;
    struct s13* ebp7;
    struct s0* v8;
    struct s14* ebp9;
    int32_t v10;
    int32_t ebp11;
    int32_t ebp12;

    eax1 = *reinterpret_cast<unsigned char*>(ebp2 - 88);
    if (ebp3->f16 == 1) {
        edx4 = ebp5->f20;
        v6 = ebp7->f12;
        v8 = ebp9->f8;
        fun_8048ff6(v8, v6, 2, edx4);
        goto v10;
    } else {
        if (!*reinterpret_cast<int32_t*>(ebp11 - 64)) 
            goto 0x80491f2;
        *reinterpret_cast<signed char*>(ebp12 - 88) = *reinterpret_cast<signed char*>(&eax1);
        goto 0x8049372;
    }
}

struct s15 {
    signed char[16] pad16;
    int32_t f16;
};

struct s16 {
    signed char[16] pad16;
    int32_t f16;
};

struct s17 {
    signed char[12] pad12;
    uint32_t f12;
};

struct s18 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_80493f0() {
    struct s15* ebp1;
    struct s16* ebp2;
    int32_t ebp3;
    struct s17* ebp4;
    struct s18* ebp5;
    int32_t ebp6;
    uint32_t ecx7;
    uint32_t eax8;
    int32_t ebx9;
    int32_t ebx10;

    if (ebp1->f16 == 1) 
        goto 0x80493a0;
    if (ebp2->f16 != 3) 
        goto 0x804933e;
    if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(ebp3 - 48) + 2) >= ebp4->f12) 
        goto 0x804933e;
    if (*reinterpret_cast<signed char*>(ebp5->f8 + *reinterpret_cast<int32_t*>(ebp6 - 48) + 1) != 63) 
        goto 0x804933e;
    ecx7 = *reinterpret_cast<unsigned char*>(ebp5->f8 + *reinterpret_cast<int32_t*>(ebp6 - 48) + 2);
    eax8 = *reinterpret_cast<signed char*>(&ecx7) - 33;
    if (eax8 > 29) 
        goto 0x804933e;
    goto *reinterpret_cast<int32_t*>(ebx9 + eax8 * 4 - 0x1468) + ebx10;
}

struct s19 {
    signed char[16] pad16;
    int32_t f16;
};

struct s20 {
    signed char[16] pad16;
    int32_t f16;
};

void fun_8049445() {
    struct s19* ebp1;
    struct s20* ebp2;
    int32_t ebp3;
    int32_t ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t ebp16;
    int32_t ebp17;
    int32_t ebp18;
    int32_t ebp19;
    int32_t ebp20;

    if (ebp1->f16 == 1) 
        goto 0x80493a0;
    if (ebp2->f16 != 2) 
        goto 0x804933e;
    if (*reinterpret_cast<uint32_t*>(ebp3 - 52) < *reinterpret_cast<uint32_t*>(ebp4 - 44)) {
        *reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(ebp5 - 40) + *reinterpret_cast<int32_t*>(ebp6 - 52)) = 39;
    }
    *reinterpret_cast<int32_t*>(ebp7 - 52) = *reinterpret_cast<int32_t*>(ebp8 - 52) + 1;
    if (*reinterpret_cast<uint32_t*>(ebp9 - 52) < *reinterpret_cast<uint32_t*>(ebp10 - 44)) {
        *reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(ebp11 - 40) + *reinterpret_cast<int32_t*>(ebp12 - 52)) = 92;
    }
    *reinterpret_cast<int32_t*>(ebp13 - 52) = *reinterpret_cast<int32_t*>(ebp14 - 52) + 1;
    if (*reinterpret_cast<uint32_t*>(ebp15 - 52) < *reinterpret_cast<uint32_t*>(ebp16 - 44)) {
        *reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(ebp17 - 40) + *reinterpret_cast<int32_t*>(ebp18 - 52)) = 39;
    }
    *reinterpret_cast<int32_t*>(ebp19 - 52) = *reinterpret_cast<int32_t*>(ebp20 - 52) + 1;
    goto 0x804933e;
}

void fun_80495c7() {
    int32_t ebp1;
    int32_t ebp2;
    int32_t ebp3;
    int32_t ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebx7;

    if (*reinterpret_cast<uint32_t*>(ebp1 - 52) < *reinterpret_cast<uint32_t*>(ebp2 - 44)) {
        **reinterpret_cast<signed char**>(ebp3 - 40) = 34;
    }
    *reinterpret_cast<int32_t*>(ebp4 - 52) = 1;
    *reinterpret_cast<int32_t*>(ebp5 - 64) = 1;
    *reinterpret_cast<int32_t*>(ebp6 - 56) = ebx7 - 0x13c4;
    goto 0x804906f;
}

void fun_80495f4() {
    int32_t ebp1;

    *reinterpret_cast<int32_t*>(ebp1 - 64) = 1;
    goto 0x8049076;
}

void fun_8049672(signed char cl) {
    uint32_t eax2;
    int32_t ebp3;
    int32_t ebp4;
    int32_t ebp5;
    int32_t edx6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t ebp16;
    int32_t ebp17;
    int32_t ebp18;
    int32_t ebp19;
    int32_t ebp20;
    int32_t ebp21;
    int32_t ebp22;
    int32_t ebp23;

    eax2 = *reinterpret_cast<uint32_t*>(ebp3 - 44);
    *reinterpret_cast<signed char*>(ebp4 - 88) = cl;
    *reinterpret_cast<int32_t*>(ebp5 - 48) = edx6;
    if (*reinterpret_cast<uint32_t*>(ebp7 - 52) < eax2) {
        *reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(ebp8 - 40) + *reinterpret_cast<int32_t*>(ebp9 - 52)) = 63;
    }
    *reinterpret_cast<int32_t*>(ebp10 - 52) = *reinterpret_cast<int32_t*>(ebp11 - 52) + 1;
    if (*reinterpret_cast<uint32_t*>(ebp12 - 52) < *reinterpret_cast<uint32_t*>(ebp13 - 44)) {
        *reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(ebp14 - 40) + *reinterpret_cast<int32_t*>(ebp15 - 52)) = 92;
    }
    *reinterpret_cast<int32_t*>(ebp16 - 52) = *reinterpret_cast<int32_t*>(ebp17 - 52) + 1;
    if (*reinterpret_cast<uint32_t*>(ebp18 - 52) >= *reinterpret_cast<uint32_t*>(ebp19 - 44)) 
        goto 0x8049498;
    *reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(ebp20 - 40) + *reinterpret_cast<int32_t*>(ebp21 - 52)) = 63;
    *reinterpret_cast<int32_t*>(ebp22 - 52) = *reinterpret_cast<int32_t*>(ebp23 - 52) + 1;
    goto 0x804933e;
}

void fun_8049bce() {
    goto 0x8049b3f;
}

void fun_8049d82(struct s0* a1, uint32_t a2) {
    struct s0* ebx3;
    struct s0* esi4;
    struct s0* ebp5;
    struct s0* eax6;
    struct s0* v7;
    struct s0* eax8;
    struct s0* v9;

    eax6 = fun_8048d64(ebx3, esi4, ebp5, __return_address(), a1);
    if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax6) / a2) < reinterpret_cast<unsigned char>(a1) || (v7 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(a1) * a2), eax8 = fun_8048974(v7), eax8 == 0)) {
        fun_8049d10(v7, v9);
    } else {
        return;
    }
}

void fun_804a008() {
    fun_804a016();
}

void fun_804a05a() {
    int32_t ebx1;
    int32_t esi2;
    int32_t edi3;
    int32_t ebp4;

    fun_804a067(ebx1, esi2, edi3, ebp4, __return_address());
}

void fun_804a0e1() {
}

int32_t g804b954 = 0;

void fun_80489ca() {
    goto g804b954;
}

void fun_8048b3a() {
}

void fun_8048a3a() {
    goto 0x80488d4;
}

void fun_804892a() {
    goto 0x80488d4;
}

void fun_80488ea() {
    goto 0x80488d4;
}

void fun_8048a1a() {
    goto 0x80488d4;
}

void fun_804893a() {
    goto 0x80488d4;
}

void fun_8048a9a() {
    goto 0x80488d4;
}

int32_t fun_8048eea(int32_t ecx, int32_t* a2) {
    fun_8048e5f();
    if (!a2) {
        return *reinterpret_cast<int32_t*>(ecx + 0x2a5c + 0x1d4);
    } else {
        return *a2;
    }
}

void fun_8048f0d(int32_t ecx, int32_t* a2, int32_t a3) {
    fun_8048e5f();
    if (!a2) {
        *reinterpret_cast<int32_t*>(ecx + 0x2a39 + 0x1d4) = a3;
        return;
    } else {
        *a2 = a3;
        return;
    }
}

void fun_8048aaa() {
    goto 0x80488d4;
}

void fun_80489ba() {
    goto 0x80488d4;
}

void fun_8048a5a() {
    goto 0x80488d4;
}

void fun_8048a8a() {
    goto 0x80488d4;
}

struct s21 {
    signed char[16] pad16;
    int32_t f16;
};

void fun_8049393() {
    int32_t ebp1;
    struct s21* ebp2;

    if (*reinterpret_cast<int32_t*>(ebp1 - 48)) 
        goto 0x804933e;
    if (ebp2->f16 != 1) 
        goto 0x804933e; else 
        goto "???";
}

void fun_80494a1() {
    goto 0x80493d3;
}

void fun_804953b() {
    goto 0x80493da;
}

void fun_8049600() {
    struct s0* eax1;
    struct s0* eax2;
    int32_t ebp3;
    struct s0* edx4;
    int1_t zf5;
    int32_t ebp6;
    int32_t ebp7;
    uint32_t eax8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t ebp16;
    int32_t ebp17;
    int32_t ebp18;
    int32_t ecx19;
    struct s0* edi20;
    int32_t ebp21;

    eax1 = fun_8048fa3(__return_address());
    eax2 = fun_8048fa3(__return_address());
    *reinterpret_cast<struct s0**>(ebp3 - 56) = eax1;
    edx4 = eax2;
    zf5 = *reinterpret_cast<struct s0**>(&eax1->f0) == 0;
    while (!zf5) {
        if (*reinterpret_cast<uint32_t*>(ebp6 - 52) < *reinterpret_cast<uint32_t*>(ebp7 - 44)) {
            eax8 = **reinterpret_cast<unsigned char**>(ebp9 - 56);
            *reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(ebp10 - 40) + *reinterpret_cast<int32_t*>(ebp11 - 52)) = *reinterpret_cast<signed char*>(&eax8);
        }
        *reinterpret_cast<int32_t*>(ebp12 - 56) = *reinterpret_cast<int32_t*>(ebp13 - 56) + 1;
        *reinterpret_cast<int32_t*>(ebp14 - 52) = *reinterpret_cast<int32_t*>(ebp15 - 52) + 1;
        zf5 = **reinterpret_cast<signed char**>(ebp16 - 56) == 0;
    }
    *reinterpret_cast<int32_t*>(ebp17 - 64) = 1;
    *reinterpret_cast<struct s0**>(ebp18 - 56) = edx4;
    ecx19 = -1;
    edi20 = edx4;
    do {
        if (!ecx19) 
            break;
        --ecx19;
        edi20 = reinterpret_cast<struct s0*>(&edi20->pad4);
    } while (*reinterpret_cast<struct s0**>(&edi20->f0));
    *reinterpret_cast<int32_t*>(ebp21 - 60) = ~ecx19 - 1;
    goto 0x8049076;
}

void fun_804896a() {
    goto 0x80488d4;
}

struct s0* fun_80498da(struct s0* a1, struct s0* a2) {
    struct s0* ebx3;
    struct s0* ebp4;
    struct s0* eax5;

    fun_8048d64(ebx3, ebp4, __return_address(), a1, a2);
    eax5 = fun_80498ae(0, a1);
    return eax5;
}

void fun_8048a7a() {
    goto 0x80488d4;
}

struct s0* fun_804998f(int32_t a1, int32_t a2, int32_t a3, struct s0* a4) {
    uint32_t v5;
    struct s0* eax6;

    fun_8049905();
    eax6 = fun_8049721(a4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xffffffc8, v5);
    return eax6;
}

void fun_804891a() {
    goto 0x80488d4;
}

void fun_804890a() {
    goto 0x80488d4;
}

void fun_8049be1() {
    goto 0x8049b3f;
}

void fun_804898a() {
    goto 0x80488d4;
}

void fun_804897a() {
    goto 0x80488d4;
}

void fun_80489da() {
    goto 0x80488d4;
}

struct s22 {
    signed char[6619] pad6619;
    struct s0* f6619;
};

void fun_8049f60(struct s0* a1, struct s0* a2) {
    struct s0* ebx3;
    struct s0* esi4;
    struct s0* ebp5;
    struct s0* eax6;
    struct s0* v7;
    struct s0* v8;
    int32_t eax9;
    struct s22* ebx10;
    struct s0* v11;
    struct s0* v12;
    struct s0* v13;
    struct s0* eax14;

    eax6 = fun_8048d64(ebx3, esi4, ebp5, __return_address(), a1);
    if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax6) / reinterpret_cast<unsigned char>(a2)) < reinterpret_cast<unsigned char>(a1) || (v7 = a2, v8 = a1, eax9 = fun_8048a44(), eax9 == 0)) {
        fun_8049d10(v8, v7);
        fun_8048d64(&ebx10->f6619, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, v8, v7);
        eax14 = fun_8049dc5(v11, v12, v13, 0x8049faf, &ebx10->f6619);
        fun_8048a04(eax14, v7, v11, 0x8049faf);
        goto v8;
    } else {
        return;
    }
}

void fun_8048a4a() {
    goto 0x80488d4;
}

void fun_8048a6a() {
    goto 0x80488d4;
}

void fun_804895a() {
    goto 0x80488d4;
}

void fun_8048d68(int32_t ecx, int32_t a2) {
    fun_8048e5f();
    *reinterpret_cast<int32_t*>(ecx + 0x2bde + 0xb8) = a2;
    return;
}

struct s23 {
    struct s0* f0;
    signed char[3] pad4;
    int32_t f4;
    int32_t f8;
    int32_t f12;
    int32_t f16;
    signed char* f20;
    signed char* f24;
    int32_t f28;
    int32_t f32;
};

struct s0* fun_8048e70(struct s23* a1) {
    struct s0* ebx2;
    struct s0* esi3;
    struct s0* edi4;
    struct s0* ebp5;
    struct s0* v6;
    struct s0* v7;
    struct s0** eax8;
    struct s0* edi9;
    struct s0* v10;
    struct s0* eax11;
    struct s23* edx12;
    int32_t ebx13;

    fun_8048d64(ebx2, esi3, edi4, ebp5, __return_address());
    eax8 = fun_8048964(v6, v7, 0x8048e7b, ebx2, esi3);
    edi9 = *eax8;
    eax11 = fun_8049dc5(36, v10, 0x8048e7b, ebx2, esi3);
    edx12 = a1;
    if (!edx12) {
        edx12 = reinterpret_cast<struct s23*>(ebx13 + 0x2ad1 + 0x1d4);
    }
    *reinterpret_cast<struct s0**>(&eax11->f0) = edx12->f0;
    eax11->f4 = edx12->f4;
    eax11->f8 = edx12->f8;
    eax11->f12 = edx12->f12;
    eax11->f16 = edx12->f16;
    eax11->f20 = edx12->f20;
    eax11->f24 = edx12->f24;
    eax11->f28 = edx12->f28;
    eax11->f32 = edx12->f32;
    *eax8 = edi9;
    return eax11;
}

void fun_8048a2a() {
    goto 0x80488d4;
}

void fun_80494ab() {
    goto 0x80493da;
}

struct s0* fun_80499be(struct s0* a1, struct s0* a2) {
    struct s0* ebx3;
    struct s0* ebp4;
    struct s0* eax5;

    fun_8048d64(ebx3, ebp4, __return_address(), a1, a2);
    eax5 = fun_804995f(0, a1, a2);
    return eax5;
}

void fun_804899a() {
    goto 0x80488d4;
}

void fun_80488fa() {
    goto 0x80488d4;
}

void fun_8049bf4() {
    goto 0x8049b3f;
}

void fun_8048a0a() {
    goto 0x80488d4;
}

void fun_80489fa() {
    goto 0x80488d4;
}

void fun_804894a() {
    goto 0x80488d4;
}

void fun_80489aa() {
    goto 0x80488d4;
}

void fun_80489ea() {
    goto 0x80488d4;
}

struct s24 {
    signed char[184] pad184;
    struct s0* f184;
};

void close_stdout() {
    struct s0* ebx1;
    struct s0* esi2;
    struct s0* edi3;
    struct s0* ebp4;
    struct s24* ebx5;
    void* ebx6;
    struct s0** edi7;
    struct s0* esi8;
    void* esi9;
    int32_t esi10;
    uint32_t esi11;
    int32_t esi12;
    struct s0* v13;
    int32_t eax14;
    struct s0* v15;
    int32_t eax16;
    struct s0* v17;
    struct s0* v18;
    struct s0* v19;
    struct s0* v20;
    struct s0** eax21;
    struct s0* v22;
    struct s0* v23;
    struct s0* v24;
    struct s0* v25;
    struct s0* eax26;
    struct s0* v27;
    struct s0* v28;
    struct s0* v29;
    struct s0* v30;
    struct s0* eax31;
    struct s0* v32;
    struct s0* v33;

    fun_8048d64(ebx1, esi2, edi3, ebp4, __return_address());
    ebx5 = reinterpret_cast<struct s24*>(reinterpret_cast<int32_t>(ebx6) + 0x2bc0);
    edi7 = *reinterpret_cast<struct s0***>(reinterpret_cast<int32_t>(ebx5) - 12);
    esi8 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esi9) - (esi10 + reinterpret_cast<uint1_t>(esi11 < esi12 + reinterpret_cast<uint1_t>((reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(&(*edi7)->f0)) >> 5 & 1) < 1))));
    if (!esi8 || (v13 = *edi7, eax14 = fun_80488e4(v13), !!eax14)) {
        v15 = *edi7;
        eax16 = fun_8048a14(v15);
        if (eax16) {
            eax21 = fun_8048964(v15, v17, v18, v19, v20);
            esi8 = *eax21;
        }
        if (reinterpret_cast<signed char>(esi8) >= reinterpret_cast<signed char>(0)) {
            v22 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(ebx5) + 0xffffe950);
            eax26 = fun_8048934(0, v22, 5, v23, v24, v25, 0x8048d8c, ebx1);
            if (!ebx5->f184) {
                v27 = **reinterpret_cast<struct s0***>(reinterpret_cast<int32_t>(ebx5) - 16);
                fun_8048a94(v27, esi8, reinterpret_cast<int32_t>(ebx5) + 0xffffe960, eax26, v28, v29, 0x8048d8c, ebx1);
                return;
            } else {
                v30 = ebx5->f184;
                eax31 = fun_8049a8b(v30, v22, 5);
                v32 = **reinterpret_cast<struct s0***>(reinterpret_cast<int32_t>(ebx5) - 16);
                fun_8048a94(v32, esi8, reinterpret_cast<int32_t>(ebx5) + 0xffffe95c, eax31, eax26, v33, 0x8048d8c, ebx1);
            }
        }
    }
    return;
}

void fun_80494b5() {
    goto 0x80493d3;
}

void fun_8049c07() {
    goto 0x8049b3f;
}

void fun_80494bf() {
    goto 0x80493d3;
}

void fun_8049c1a() {
    goto 0x8049b3f;
}

void fun_80494c9() {
    goto 0x80493da;
}

void fun_8049c2d() {
    goto 0x8049b3f;
}

void fun_80494d5() {
    goto 0x80493da;
}

void fun_8049c40() {
    goto 0x8049b3f;
}

void fun_80494df() {
    int32_t ebp1;
    int32_t ebp2;
    int32_t ebp3;
    int32_t ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t ebp16;
    int32_t ebp17;
    int32_t ebp18;
    int32_t ebp19;
    int32_t ebp20;

    if (!*reinterpret_cast<int32_t*>(ebp1 - 64)) 
        goto 0x80491f2;
    if (*reinterpret_cast<uint32_t*>(ebp2 - 52) < *reinterpret_cast<uint32_t*>(ebp3 - 44)) {
        *reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(ebp4 - 40) + *reinterpret_cast<int32_t*>(ebp5 - 52)) = 92;
    }
    *reinterpret_cast<int32_t*>(ebp6 - 52) = *reinterpret_cast<int32_t*>(ebp7 - 52) + 1;
    if (*reinterpret_cast<uint32_t*>(ebp8 - 52) < *reinterpret_cast<uint32_t*>(ebp9 - 44)) {
        *reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(ebp10 - 40) + *reinterpret_cast<int32_t*>(ebp11 - 52)) = 48;
    }
    *reinterpret_cast<int32_t*>(ebp12 - 52) = *reinterpret_cast<int32_t*>(ebp13 - 52) + 1;
    if (*reinterpret_cast<uint32_t*>(ebp14 - 52) < *reinterpret_cast<uint32_t*>(ebp15 - 44)) {
        *reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(ebp16 - 40) + *reinterpret_cast<int32_t*>(ebp17 - 52)) = 48;
    }
    *reinterpret_cast<int32_t*>(ebp18 - 52) = *reinterpret_cast<int32_t*>(ebp19 - 52) + 1;
    *reinterpret_cast<signed char*>(ebp20 - 88) = 48;
    goto 0x804933e;
}

void fun_8049c53() {
    goto 0x8049b3f;
}

void fun_8049c66() {
    goto 0x8049b3f;
}

void fun_8049c79(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7) {
    fun_8048984(__return_address(), a1, a2, a3, a4, a5, a6, a7);
}
