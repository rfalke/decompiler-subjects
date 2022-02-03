
int32_t call_gmon_start();

int32_t frame_dummy(int32_t ecx);

int32_t __do_global_ctors_aux();

int32_t _init(int32_t ecx) {
    int32_t eax2;

    call_gmon_start();
    frame_dummy(ecx);
    eax2 = __do_global_ctors_aux();
    return eax2;
}

void fun_80489ed(int32_t a1);

int32_t call_gmon_start() {
    int32_t ebx1;
    int32_t eax2;
    int32_t edx3;

    fun_80489ed(ebx1);
    eax2 = *reinterpret_cast<int32_t*>(ebx1 + 0x2d57 - 4);
    if (eax2) {
        eax2();
    }
    return edx3;
}

int32_t g804b670 = 0;

int32_t __gmon_start__(int32_t a1);

int32_t frame_dummy(int32_t ecx) {
    int32_t edx2;
    int32_t eax3;

    edx2 = g804b670;
    if (edx2 && (eax3 = 0, !1)) {
        eax3 = __gmon_start__(0x804b670);
    }
    return eax3;
}

int32_t __init_array_start = -1;

int32_t __do_global_ctors_aux() {
    int32_t v1;
    int32_t edx2;
    int32_t* ebx3;
    int32_t eax4;

    v1 = edx2;
    ebx3 = reinterpret_cast<int32_t*>(0x804b660);
    eax4 = __init_array_start;
    if (eax4 != -1) {
        do {
            --ebx3;
            eax4();
            eax4 = *ebx3;
        } while (eax4 != -1);
    }
    return v1;
}

int32_t __libc_start_main = 0x80488ce;

void fun_80488c8(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t exit = 0x804893e;

void fun_8048938(int32_t a1, void** a2, void** a3, void** a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    goto exit;
}

int32_t getenv = 0x804881e;

int32_t fun_8048818(int32_t a1, void** a2, void** a3, void** a4, int32_t a5, int32_t a6) {
    goto getenv;
}

void version_etc_va(void** a1, void** a2, void** a3, void** a4, void** a5);

void version_etc(void** a1, void** a2, void** a3, void** a4, int32_t a5, int32_t a6) {
    version_etc_va(a1, a2, a3, a4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 24);
    return;
}

int32_t __fpending = 0x80487de;

int32_t fun_80487d8(void** a1) {
    goto __fpending;
}

int32_t fclose = 0x804891e;

int32_t fun_8048918(void** a1) {
    goto fclose;
}

int32_t __errno_location = 0x804885e;

uint32_t* fun_8048858(void** a1, void** a2, void** a3, void** a4, int32_t* a5) {
    goto __errno_location;
}

int32_t dcgettext = 0x804882e;

void** fun_8048828(int32_t a1, void** a2, void** a3, void** a4, void** a5) {
    goto dcgettext;
}

void** quotearg_char(void** a1, signed char a2);

void** quotearg_colon(void** a1, void** a2, void** a3) {
    void** eax4;

    eax4 = quotearg_char(a1, 58);
    return eax4;
}

int32_t error = 0x804899e;

void fun_8048998(void** a1, uint32_t a2, void** a3, void** a4, void** a5) {
    goto error;
}

int32_t __ctype_b_loc = 0x80489ae;

uint16_t** fun_80489a8(void** a1, signed char* a2, void* a3, void** a4) {
    goto __ctype_b_loc;
}

int32_t mbrtowc = 0x80488be;

void** fun_80488b8(void** a1, signed char* a2, void* a3, void** a4) {
    goto mbrtowc;
}

int32_t iswprint = 0x804895e;

int32_t fun_8048958(void** a1, signed char* a2, void* a3, void** a4) {
    goto iswprint;
}

int32_t mbsinit = 0x804898e;

void** fun_8048988(void** a1, signed char* a2, void* a3, void** a4) {
    goto mbsinit;
}

int32_t fun_8048928();

void** gettext_quote();

void** fun_80488a8(void** a1, signed char* a2, void* a3, void** a4);

void** quotearg_buffer_restyled(void** ecx, void** a2, int32_t a3, int32_t* a4, void** a5) {
    void* ebp6;
    void** v7;
    void** eax8;
    void** v9;
    void** edx10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    int32_t eax16;
    void** v17;
    void** edx18;
    void** eax19;
    void** eax20;
    void** v21;
    uint32_t eax22;
    void** v23;
    signed char* v24;
    void* v25;
    void** v26;
    void** eax27;
    void** v28;
    uint32_t ebx29;
    unsigned char v30;
    void** v31;
    void** v32;
    signed char* v33;
    void* v34;
    void** v35;
    void** eax36;
    void** ebx37;
    signed char* eax38;
    void** eax39;
    void** v40;
    int32_t eax41;
    uint16_t** eax42;
    uint32_t eax43;
    uint32_t eax44;
    int32_t eax45;
    uint32_t eax46;
    void** eax47;
    uint32_t eax48;
    void** v49;
    uint32_t eax50;
    void** v51;
    uint32_t eax52;
    uint32_t eax53;
    void** v54;
    void** v55;
    uint32_t eax56;
    void** v57;
    void** v58;
    uint32_t eax59;
    void** v60;
    void** edi61;
    void*** esi62;
    int1_t zf63;
    uint32_t eax64;
    void** eax65;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v7 = eax8;
    v9 = edx10;
    v11 = ecx;
    v12 = reinterpret_cast<void**>(0);
    v13 = reinterpret_cast<void**>(0);
    v14 = reinterpret_cast<void**>(0);
    v15 = reinterpret_cast<void**>(0);
    eax16 = fun_8048928();
    v17 = reinterpret_cast<void**>(static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(eax16 - 1 == 0))));
    switch (a3) {
    case 2:
        if (reinterpret_cast<unsigned char>(0) < reinterpret_cast<unsigned char>(v9)) {
            edx18 = v7;
            *reinterpret_cast<void***>(edx18) = reinterpret_cast<void**>(39);
        }
        v12 = reinterpret_cast<void**>(1);
        v13 = reinterpret_cast<void**>("'");
        goto addr_8048f90_6;
    case 3:
        edx18 = v9;
        if (reinterpret_cast<unsigned char>(0) < reinterpret_cast<unsigned char>(edx18)) {
            ecx = v7;
            *reinterpret_cast<void***>(ecx) = reinterpret_cast<void**>(34);
        }
        v12 = reinterpret_cast<void**>(1);
        v15 = reinterpret_cast<void**>(1);
        v13 = reinterpret_cast<void**>("\"");
        goto addr_8048f90_6;
    case 4:
        v15 = reinterpret_cast<void**>(1);
        break;
    case 5:
    case 6:
        eax19 = gettext_quote();
        eax20 = gettext_quote();
        v21 = eax19;
        edx18 = eax20;
        if (*reinterpret_cast<void***>(eax19)) {
            do {
                if (reinterpret_cast<unsigned char>(v12) < reinterpret_cast<unsigned char>(v9)) {
                    ecx = v7;
                    eax22 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v21));
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v12) + reinterpret_cast<unsigned char>(ecx)) = *reinterpret_cast<signed char*>(&eax22);
                }
                ++v21;
                ++v12;
            } while (*reinterpret_cast<void***>(v21));
        }
        v15 = reinterpret_cast<void**>(1);
        v13 = edx18;
        v23 = edx18;
        eax27 = fun_80488a8(v23, v24, v25, v26);
        v14 = eax27;
    case 0:
    case 1:
        goto 0x8048f97;
    }
    addr_8048f97_16:
    v28 = reinterpret_cast<void**>(0);
    while (1) {
        if (a2 == 0xffffffff) {
            if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v28) + reinterpret_cast<unsigned char>(v11))) 
                break;
        } else {
            edx18 = a2;
            if (v28 == edx18) 
                break;
        }
        if (!v15 || (!v14 || reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v28) + reinterpret_cast<unsigned char>(v14)) > reinterpret_cast<unsigned char>(a2))) {
            addr_8049000_21:
            ebx29 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v28) + reinterpret_cast<unsigned char>(v11));
            v30 = *reinterpret_cast<unsigned char*>(&ebx29);
            switch (*reinterpret_cast<unsigned char*>(&ebx29)) {
            default:
                if (!v17) {
                    v31 = reinterpret_cast<void**>(0);
                    v32 = reinterpret_cast<void**>(1);
                    if (a2 == 0xffffffff) {
                        eax36 = fun_80488a8(v11, v33, v34, v35);
                        a2 = eax36;
                    }
                    do {
                        edx18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) - 36);
                        v35 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) - 32);
                        ebx37 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v28) + reinterpret_cast<unsigned char>(v31));
                        v34 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a2) - reinterpret_cast<unsigned char>(ebx37));
                        eax38 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v11) + reinterpret_cast<unsigned char>(ebx37));
                        v33 = eax38;
                        v23 = edx18;
                        eax39 = fun_80488b8(v23, v33, v34, v35);
                        if (!eax39) 
                            goto addr_80494ce_28;
                        if (eax39 == 0xffffffff) 
                            break;
                        if (eax39 == 0xfffffffe) 
                            goto addr_80494dd_31;
                        eax41 = fun_8048958(v40, v33, v34, v35);
                        v31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) + reinterpret_cast<unsigned char>(eax39));
                        v32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v32) & -static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!eax41))));
                        v23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) - 32);
                        eax39 = fun_8048988(v23, v33, v34, v35);
                    } while (!eax39);
                    goto addr_8049215_33;
                } else {
                    v31 = reinterpret_cast<void**>(1);
                    eax42 = fun_80489a8(v23, v33, v34, v35);
                    eax39 = reinterpret_cast<void**>(static_cast<uint32_t>((*eax42)[v30]) & 0x4000);
                    v32 = eax39;
                    goto addr_8049049_35;
                }
                v32 = reinterpret_cast<void**>(0);
                goto addr_80494ce_28;
                addr_80494dd_31:
                v32 = reinterpret_cast<void**>(0);
                if (reinterpret_cast<unsigned char>(ebx37) >= reinterpret_cast<unsigned char>(a2) || !*eax38) {
                    addr_80494ce_28:
                    if (reinterpret_cast<unsigned char>(v31) > reinterpret_cast<unsigned char>(1)) {
                        goto addr_8049063_38;
                    }
                } else {
                    do {
                        ++v31;
                        eax39 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v28) + reinterpret_cast<unsigned char>(v31));
                        if (reinterpret_cast<unsigned char>(eax39) >= reinterpret_cast<unsigned char>(a2)) 
                            goto addr_80494ce_28;
                    } while (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax39) + reinterpret_cast<unsigned char>(v11)));
                    goto addr_804950b_41;
                }
                addr_8049049_35:
                edx18 = v32;
                *reinterpret_cast<unsigned char*>(&eax39) = reinterpret_cast<uint1_t>(!!v15);
                *reinterpret_cast<unsigned char*>(&edx18) = reinterpret_cast<uint1_t>(edx18 == 0);
                eax43 = reinterpret_cast<unsigned char>(eax39) & reinterpret_cast<unsigned char>(edx18);
                if (!(*reinterpret_cast<unsigned char*>(&eax43) & 1)) {
                    addr_8049240_42:
                case 37:
                case 43:
                case 44:
                case 45:
                case 46:
                case 47:
                case 48:
                case 49:
                case 50:
                case 51:
                case 52:
                case 53:
                case 54:
                case 55:
                case 56:
                case 57:
                case 58:
                case 61:
                case 65:
                case 66:
                case 67:
                case 68:
                case 69:
                case 70:
                case 71:
                case 72:
                case 73:
                case 74:
                case 75:
                case 76:
                case 77:
                case 78:
                case 79:
                case 80:
                case 81:
                case 82:
                case 83:
                case 84:
                case 85:
                case 86:
                case 87:
                case 88:
                case 89:
                case 90:
                case 93:
                case 95:
                case 97:
                case 98:
                case 99:
                case 100:
                case 0x65:
                case 0x66:
                case 0x67:
                case 0x68:
                case 0x69:
                case 0x6a:
                case 0x6b:
                case 0x6c:
                case 0x6d:
                case 0x6e:
                case 0x6f:
                case 0x70:
                case 0x71:
                case 0x72:
                case 0x73:
                case 0x74:
                case 0x75:
                case 0x76:
                case 0x77:
                case 0x78:
                case 0x79:
                case 0x7a:
                case 0x7b:
                case 0x7d:
                    ecx = v28;
                    edx18 = ecx + 1;
                    if (!v15 || (eax44 = v30, ecx = reinterpret_cast<void**>(static_cast<uint32_t>(v30) & 31), eax45 = (a4 + reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax44) >> 5))[1] >> *reinterpret_cast<unsigned char*>(&ecx), (*reinterpret_cast<unsigned char*>(&eax45) & 1) == 0)) {
                        addr_8049290_43:
                        if (reinterpret_cast<unsigned char>(v12) < reinterpret_cast<unsigned char>(v9)) {
                            eax46 = v30;
                            ecx = v7;
                            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v12) + reinterpret_cast<unsigned char>(ecx)) = *reinterpret_cast<signed char*>(&eax46);
                        }
                    } else {
                        addr_804926b_45:
                        if (reinterpret_cast<unsigned char>(v12) < reinterpret_cast<unsigned char>(v9)) {
                            ecx = v12;
                            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx) + reinterpret_cast<unsigned char>(v7)) = 92;
                            goto addr_804927d_47;
                        }
                    }
                } else {
                    addr_8049063_38:
                    eax47 = v31;
                    ecx = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v28) + reinterpret_cast<unsigned char>(eax47));
                    goto addr_8049095_48;
                }
                ++v12;
                v28 = edx18;
                continue;
                addr_804927d_47:
                ++v12;
                edx18 = v28 + 1;
                goto addr_8049290_43;
                while (1) {
                    addr_8049095_48:
                    *reinterpret_cast<unsigned char*>(&eax47) = reinterpret_cast<uint1_t>(!!v15);
                    *reinterpret_cast<unsigned char*>(&edx18) = reinterpret_cast<uint1_t>(v32 == 0);
                    eax48 = reinterpret_cast<unsigned char>(eax47) & reinterpret_cast<unsigned char>(edx18);
                    if (*reinterpret_cast<unsigned char*>(&eax48) & 1) {
                        if (reinterpret_cast<unsigned char>(v12) < reinterpret_cast<unsigned char>(v9)) {
                            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v12) + reinterpret_cast<unsigned char>(v7)) = 92;
                        }
                        v49 = v12 + 1;
                        if (reinterpret_cast<unsigned char>(v49) < reinterpret_cast<unsigned char>(v9)) {
                            eax50 = v30;
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v49) + reinterpret_cast<unsigned char>(v7)) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax50) >> 6) + 48);
                        }
                        v51 = v49 + 1;
                        if (reinterpret_cast<unsigned char>(v51) < reinterpret_cast<unsigned char>(v9)) {
                            eax52 = v30;
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v51) + reinterpret_cast<unsigned char>(v7)) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax52) >> 3) & 7) + 48);
                        }
                        v12 = v51 + 1;
                        v30 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v30 & 7) + 48);
                    }
                    edx18 = v28 + 1;
                    if (reinterpret_cast<unsigned char>(ecx) <= reinterpret_cast<unsigned char>(edx18)) 
                        break;
                    if (reinterpret_cast<unsigned char>(v12) < reinterpret_cast<unsigned char>(v9)) {
                        eax53 = v30;
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v12) + reinterpret_cast<unsigned char>(v7)) = *reinterpret_cast<signed char*>(&eax53);
                    }
                    ++v12;
                    v28 = edx18;
                    eax47 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx18) + reinterpret_cast<unsigned char>(v11))));
                    v30 = *reinterpret_cast<unsigned char*>(&eax47);
                }
                goto addr_8049290_43;
                addr_804950b_41:
                goto addr_80494ce_28;
                addr_8049215_33:
                goto addr_80494ce_28;
            case 0:
                edx18 = v28 + 1;
                if (!v15) 
                    goto addr_8049290_43;
                if (reinterpret_cast<unsigned char>(v12) < reinterpret_cast<unsigned char>(v9)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v12) + reinterpret_cast<unsigned char>(v7)) = 92;
                }
                v54 = v12 + 1;
                if (reinterpret_cast<unsigned char>(v54) < reinterpret_cast<unsigned char>(v9)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v54) + reinterpret_cast<unsigned char>(v7)) = 48;
                }
                v55 = v54 + 1;
                if (reinterpret_cast<unsigned char>(v55) < reinterpret_cast<unsigned char>(v9)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v55) + reinterpret_cast<unsigned char>(v7)) = 48;
                }
                v12 = v55 + 1;
                v30 = 48;
                goto addr_8049240_42;
            case 7:
                *reinterpret_cast<unsigned char*>(&eax56) = 97;
                goto addr_80492be_71;
            case 8:
                *reinterpret_cast<unsigned char*>(&eax56) = 98;
                goto addr_80492be_71;
            case 9:
                *reinterpret_cast<unsigned char*>(&eax56) = 0x74;
                goto addr_80492b4_74;
            case 10:
                *reinterpret_cast<unsigned char*>(&eax56) = 0x6e;
                goto addr_80492b4_74;
            case 11:
                *reinterpret_cast<unsigned char*>(&eax56) = 0x76;
                goto addr_80492be_71;
            case 12:
                *reinterpret_cast<unsigned char*>(&eax56) = 0x66;
                goto addr_80492be_71;
            case 13:
                *reinterpret_cast<unsigned char*>(&eax56) = 0x72;
                if (a3 != 1) 
                    goto addr_80492be_71; else 
                    goto addr_8049386_79;
                addr_8049234_80:
            case 32:
            case 33:
            case 34:
            case 36:
            case 38:
            case 40:
            case 41:
            case 42:
            case 59:
            case 60:
            case 62:
            case 91:
            case 94:
            case 96:
            case 0x7c:
                if (a3 == 1) 
                    goto addr_8049386_79;
                goto addr_8049240_42;
            case 35:
            case 0x7e:
                if (v28) 
                    goto addr_8049240_42; else 
                    goto addr_8049234_80;
            case 39:
                if (a3 == 1) 
                    goto addr_8049386_79;
                if (a3 != 2) 
                    goto addr_8049240_42;
                if (reinterpret_cast<unsigned char>(v12) < reinterpret_cast<unsigned char>(v9)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v12) + reinterpret_cast<unsigned char>(v7)) = 39;
                }
                v57 = v12 + 1;
                if (reinterpret_cast<unsigned char>(v57) < reinterpret_cast<unsigned char>(v9)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v57) + reinterpret_cast<unsigned char>(v7)) = 92;
                }
                v58 = v57 + 1;
                if (reinterpret_cast<unsigned char>(v58) < reinterpret_cast<unsigned char>(v9)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v58) + reinterpret_cast<unsigned char>(v7)) = 39;
                    break;
                }
            case 63:
                if (a3 == 1) 
                    goto addr_8049386_79;
                if (a3 != 3) 
                    goto addr_8049240_42;
                edx18 = v28 + 2;
                if (reinterpret_cast<unsigned char>(edx18) >= reinterpret_cast<unsigned char>(a2)) 
                    goto addr_8049240_42;
                if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v28) + reinterpret_cast<unsigned char>(v11) + 1) != 63) 
                    goto addr_8049240_42;
                ecx = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v28) + reinterpret_cast<unsigned char>(v11) + 2)));
                eax59 = *reinterpret_cast<signed char*>(&ecx) - 33;
                if (eax59 > 29) 
                    goto addr_8049240_42;
                switch (eax59) {
                case 0:
                case 6:
                case 7:
                case 8:
                case 12:
                case 14:
                case 27:
                case 28:
                case 29:
                    v30 = *reinterpret_cast<unsigned char*>(&ecx);
                    v28 = edx18;
                    if (reinterpret_cast<unsigned char>(v12) < reinterpret_cast<unsigned char>(v9)) {
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v12) + reinterpret_cast<unsigned char>(v7)) = 63;
                    }
                    v60 = v12 + 1;
                    if (reinterpret_cast<unsigned char>(v60) < reinterpret_cast<unsigned char>(v9)) {
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v60) + reinterpret_cast<unsigned char>(v7)) = 92;
                    }
                    v58 = v60 + 1;
                    if (reinterpret_cast<unsigned char>(v58) < reinterpret_cast<unsigned char>(v9)) {
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v58) + reinterpret_cast<unsigned char>(v7)) = 63;
                        goto addr_8049372_103;
                    }
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 9:
                case 10:
                case 11:
                case 13:
                case 15:
                case 16:
                case 17:
                case 18:
                case 19:
                case 20:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                case 26:
                    goto 0x8049240;
                }
            case 92:
                eax56 = v30;
                goto addr_80492b4_74;
            }
        } else {
            ecx = v14;
            edi61 = v13;
            esi62 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v11) + reinterpret_cast<unsigned char>(v28));
            zf63 = ecx == ecx;
            do {
                if (!ecx) 
                    break;
                --ecx;
                zf63 = *esi62 == *reinterpret_cast<void***>(edi61);
                ++edi61;
                ++esi62;
            } while (zf63);
            if (!zf63) 
                goto addr_8049000_21; else 
                goto addr_8048fe8_109;
        }
        addr_8049372_103:
        v12 = v58 + 1;
        goto addr_8049240_42;
        addr_80492b4_74:
        if (a3 == 1) 
            goto addr_8049386_79;
        addr_80492be_71:
        ecx = v15;
        edx18 = v28 + 1;
        if (!ecx) 
            goto addr_8049290_43;
        v30 = *reinterpret_cast<unsigned char*>(&eax56);
        goto addr_804926b_45;
        addr_8048fe8_109:
        if (reinterpret_cast<unsigned char>(v12) < reinterpret_cast<unsigned char>(v9)) {
            edx18 = v7;
            ecx = v12;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx) + reinterpret_cast<unsigned char>(edx18)) = 92;
        }
        ++v12;
        goto addr_8049000_21;
    }
    if (v13 && (eax64 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v13)), !!*reinterpret_cast<signed char*>(&eax64))) {
        do {
            if (reinterpret_cast<unsigned char>(v12) < reinterpret_cast<unsigned char>(v9)) {
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v12) + reinterpret_cast<unsigned char>(v7)) = *reinterpret_cast<signed char*>(&eax64);
            }
            ++v13;
            ++v12;
            eax64 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v13));
        } while (*reinterpret_cast<signed char*>(&eax64));
    }
    if (reinterpret_cast<unsigned char>(v12) < reinterpret_cast<unsigned char>(v9)) {
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v12) + reinterpret_cast<unsigned char>(v7)) = 0;
    }
    return v12;
    addr_8049386_79:
    eax65 = quotearg_buffer_restyled(v11, a2, 2, a4, v35);
    return eax65;
    addr_8048f90_6:
    v14 = reinterpret_cast<void**>(1);
    goto addr_8048f97_16;
}

int32_t strlen = 0x80488ae;

void** fun_80488a8(void** a1, signed char* a2, void* a3, void** a4) {
    goto strlen;
}

void** fun_80488d8();

void xalloc_die(void** a1, void** a2);

void** fun_8048868();

void** xmalloc(void** a1, void** a2, void** a3, void** a4, int32_t* a5);

void fun_8048908(void** a1, int32_t a2, void** a3);

void** xrealloc(void** a1, void** a2) {
    void** esp3;
    void** eax4;
    void** esp5;
    void** ebp6;
    void** v7;
    void** v8;
    int32_t ebx9;
    void** v10;
    void** v11;
    uint32_t v12;
    void** v13;
    void** v14;
    void** v15;
    void** eax16;
    int32_t v17;
    void** eax18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    int32_t* v23;
    void** eax24;
    int32_t v25;

    while (esp3 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4), eax4 = fun_80488d8(), eax4 == 0) {
        xalloc_die(a1, a2);
        esp5 = esp3 - 2 - 1 + 1 - 1 + 1 - 1;
        if (!a2) {
            if (!ebp6) {
            }
        } else {
            if (reinterpret_cast<int32_t>(ebp6) < reinterpret_cast<int32_t>(0)) {
                xalloc_die(v7, v8);
                if (!v8) {
                    if (!ebp6) {
                    }
                } else {
                    if (0x7fffffff / reinterpret_cast<unsigned char>(a1) < reinterpret_cast<uint32_t>(ebp6)) 
                        goto addr_8049c9a_10;
                }
                v8 = v8;
                ebx9 = ebx9;
                ebp6 = esp5;
                continue;
            }
        }
        ebp6 = esp3;
    }
    return eax4;
    addr_8049c9a_10:
    xalloc_die(v10, v11);
    if (-1 / reinterpret_cast<uint32_t>(ebx9) >= v12 && (v13 = v14, v15 = reinterpret_cast<void**>(v12 * ebx9), eax16 = fun_80488d8(), !!eax16)) {
        goto v17;
    }
    xalloc_die(v13, v15);
    eax18 = fun_8048868();
    if (eax18) 
        goto addr_8049d05_19;
    xalloc_die(v15, v19);
    eax24 = xmalloc(esp5 - 2 - 1 + 1 - 1 - 6 - 1 + 1 - 1, v20, v21, v22, v23);
    fun_8048908(eax24, v25, esp5 - 2 - 1 + 1 - 1 - 6 - 1 + 1 - 1);
    goto v15;
    addr_8049d05_19:
    goto v13;
}

int32_t free = 0x804896e;

void fun_8048968(void** a1, void** a2, void** a3, void** a4, int32_t* a5) {
    goto free;
}

int32_t fprintf = 0x804880e;

void fun_8048808(void** a1, uint32_t a2, void** a3, void** a4, void** a5) {
    goto fprintf;
}

int32_t fputs_unlocked = 0x80487fe;

void fun_80487f8(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto fputs_unlocked;
}

int32_t abort = 0x804887e;

int32_t fun_8048878(void** a1, uint32_t a2, void** a3, void** a4, void** a5) {
    goto abort;
}

int32_t calloc = 0x804894e;

int32_t fun_8048948(void** a1, void** a2) {
    goto calloc;
}

int32_t realloc = 0x80488de;

void** fun_80488d8() {
    goto realloc;
}

int32_t malloc = 0x804886e;

void** fun_8048868() {
    goto malloc;
}

int32_t fun_8049efd(int32_t a1);

void __do_global_dtors_aux();

void _fini() {
    int32_t ebx1;

    fun_8049efd(ebx1);
    __do_global_dtors_aux();
    return;
}

/* __i686.get_pc_thunk.bx */
int32_t __i686_get_pc_thunk_bx() {
    int32_t eax1;

    return eax1;
}

int32_t __cxa_atexit = 0x804884e;

void fun_8048848(int32_t a1, int32_t a2, int32_t a3) {
    goto __cxa_atexit;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80489ed(int32_t a1) {
    int32_t eax2;
    struct s0* ebp3;

    eax2 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x2d57 - 4);
    if (eax2) {
        eax2();
    }
    goto ebp3->f4;
}

void** program_name = reinterpret_cast<void**>(0);

void fun_80488f8(void** a1, void** a2, void** a3);

void** stdout = reinterpret_cast<void**>(0);

void** g5;

void fun_8048838(int32_t a1, int32_t a2);

void fun_8048898(int32_t a1, void** a2);

void fun_80488e8(int32_t a1, void** a2);

void atexit(int32_t a1, void** a2);

void usage(int32_t a1, void** a2, void** a3, void** a4, int32_t a5, int32_t a6) {
    void** v7;
    void** v8;
    void** eax9;
    void** edx10;
    void** v11;
    void** v12;
    void** eax13;
    void** edx14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** eax19;
    void** edx20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** eax25;
    void** v26;
    int32_t v27;
    int32_t v28;
    int32_t ebp29;
    void** ebx30;
    void** eax31;
    void** v32;
    int32_t eax33;
    int1_t zf34;
    int32_t v35;
    int32_t v36;
    void*** edi37;
    void** v38;
    void** esi39;
    int32_t ecx40;
    void** esi41;
    void*** edi42;
    int32_t ecx43;
    void** eax44;

    eax9 = fun_8048828(0, "Usage: %s [ignored command line arguments]\n  or:  %s OPTION\nExit with a status code indicating success.\n\nThese option names may not be abbreviated.\n\n", 5, v7, v8);
    edx10 = program_name;
    fun_80488f8(eax9, edx10, edx10);
    eax13 = fun_8048828(0, "      --help     display this help and exit\n", 5, v11, v12);
    edx14 = stdout;
    fun_80487f8(eax13, edx14, 5, v15, v16);
    eax19 = fun_8048828(0, "      --version  output version information and exit\n", 5, v17, v18);
    edx20 = stdout;
    fun_80487f8(eax19, edx20, 5, v21, v22);
    eax25 = fun_8048828(0, "\nReport bugs to <%s>.\n", 5, v23, v24);
    fun_80488f8(eax25, "bug-coreutils@gnu.org", 5);
    fun_8048938(a1, "bug-coreutils@gnu.org", 5, v26, v27, v28, ebp29, __return_address());
    ebx30 = reinterpret_cast<void**>(5);
    eax31 = g5;
    program_name = eax31;
    fun_8048838(6, 0x804a03c);
    v32 = reinterpret_cast<void**>("/usr/share/locale");
    fun_8048898("coreutils", "/usr/share/locale");
    fun_80488e8("coreutils", "/usr/share/locale");
    atexit(0x8048c80, "/usr/share/locale");
    if (!0) 
        goto addr_8048bc7_2;
    while (1) {
        eax33 = fun_8048818("POSIXLY_CORRECT", v32, "GNU coreutils", "5.2.1", "Jim Meyering", 0);
        zf34 = eax33 == 0;
        if (!zf34) {
            addr_8048bc7_2:
            fun_8048938(0, v32, "GNU coreutils", "5.2.1", "Jim Meyering", 0, v35, v36);
            continue;
        } else {
            edi37 = reinterpret_cast<void***>("--help");
            v38 = *reinterpret_cast<void***>(ebx30 + 4);
            esi39 = v38;
            ecx40 = 7;
            do {
                if (!ecx40) 
                    break;
                --ecx40;
                zf34 = *reinterpret_cast<void***>(esi39) == *edi37;
                ++edi37;
                ++esi39;
            } while (zf34);
            if (!zf34) 
                goto addr_8048bfd_8;
        }
        usage(0, v32, "GNU coreutils", "5.2.1", "Jim Meyering", 0);
        ebx30 = *reinterpret_cast<void***>(ebx30 + 4);
        v38 = ebx30;
        addr_8048bfd_8:
        esi41 = v38;
        edi42 = reinterpret_cast<void***>("--version");
        ecx43 = 10;
        do {
            if (!ecx43) 
                break;
            --ecx43;
            zf34 = *reinterpret_cast<void***>(esi41) == *edi42;
            ++edi42;
            ++esi41;
        } while (zf34);
        if (zf34) {
            eax44 = stdout;
            ebx30 = reinterpret_cast<void**>("GNU coreutils");
            v32 = reinterpret_cast<void**>("true");
            version_etc(eax44, "true", "GNU coreutils", "5.2.1", "Jim Meyering", 0);
            goto addr_8048bc7_2;
        }
    }
}

void fun_8048888(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_80487e8(void** a1, int32_t a2, void** a3, void** a4, void** a5);

void** version_etc_copyright = reinterpret_cast<void**>(0xc4);

void version_etc_va(void** a1, void** a2, void** a3, void** a4, void** a5) {
    uint32_t ebx6;
    void** edi7;
    void** esi8;
    void** v9;
    void** ecx10;
    void*** edx11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    uint32_t v17;
    void** eax18;
    void** v19;
    void** eax20;
    void** eax21;

    ebx6 = 0;
    edi7 = a5;
    esi8 = a1;
    v9 = a3;
    ecx10 = a2;
    edx11 = reinterpret_cast<void***>(edi7 + 4);
    v12 = a4;
    if (*reinterpret_cast<void***>(edi7)) {
        esi8 = esi8;
        do {
            ++ebx6;
            edx11 = edx11 + 4;
        } while (*edx11);
    }
    if (ecx10) {
        v13 = v12;
        v14 = ecx10;
        v15 = esi8;
        v16 = v9;
        v17 = reinterpret_cast<uint32_t>("%s (%s) %s\n");
        fun_8048808(v15, "%s (%s) %s\n", v14, v16, v13);
        goto addr_8049937_6;
    }
    while (1) {
        v16 = v12;
        v15 = esi8;
        v14 = v9;
        v17 = reinterpret_cast<uint32_t>("%s %s\n");
        fun_8048808(v15, "%s %s\n", v14, v16, v13);
        addr_8049937_6:
        if (ebx6 > 9) 
            break;
        switch (ebx6) {
        case 0:
            fun_8048878(v15, v17, v14, v16, v13);
        case 9:
            goto 0x80499d6;
        case 8:
            goto 0x80499e9;
        case 7:
            goto 0x80499fc;
        case 6:
            goto 0x8049a13;
        case 5:
            goto 0x8049a2a;
        case 4:
            goto 0x8049a3d;
        case 3:
            goto 0x8049a50;
        case 2:
            goto 0x8049a63;
        case 1:
            goto 0x8049a7a;
        }
    }
    eax18 = reinterpret_cast<void**>("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n");
    addr_8049951_11:
    v19 = eax18;
    addr_8049955_12:
    eax20 = fun_8048828(0, v19, 5, v16, v13);
    fun_8048888(esi8, eax20, edi7, v16, v13);
    if (reinterpret_cast<uint32_t>(*reinterpret_cast<signed char**>(esi8 + 20)) >= reinterpret_cast<uint32_t>(*reinterpret_cast<signed char**>(esi8 + 24))) {
        fun_80487e8(esi8, 10, edi7, v16, v13);
    } else {
        **reinterpret_cast<signed char**>(esi8 + 20) = 10;
        *reinterpret_cast<signed char**>(esi8 + 20) = *reinterpret_cast<signed char**>(esi8 + 20) + 1;
    }
    eax21 = version_etc_copyright;
    fun_80487f8(eax21, esi8, edi7, v16, v13);
    if (reinterpret_cast<uint32_t>(*reinterpret_cast<signed char**>(esi8 + 20)) >= reinterpret_cast<uint32_t>(*reinterpret_cast<signed char**>(esi8 + 24))) {
        fun_80487e8(esi8, 10, edi7, v16, v13);
    } else {
        **reinterpret_cast<signed char**>(esi8 + 20) = 10;
        *reinterpret_cast<signed char**>(esi8 + 20) = *reinterpret_cast<signed char**>(esi8 + 20) + 1;
    }
    fun_8048828(0, "This is free software; see the source for copying conditions.  There is NO\nwarranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n", 5, v16, v13);
    goto fputs_unlocked;
    eax18 = reinterpret_cast<void**>("Written by %s.\n");
    goto addr_8049951_11;
    v19 = reinterpret_cast<void**>("Written by %s and %s.\n");
    goto addr_8049955_12;
    eax18 = reinterpret_cast<void**>("Written by %s, %s, and %s.\n");
    goto addr_8049951_11;
    eax18 = reinterpret_cast<void**>("Written by %s, %s, %s,\nand %s.\n");
    goto addr_8049951_11;
    eax18 = reinterpret_cast<void**>("Written by %s, %s, %s,\n%s, and %s.\n");
    goto addr_8049951_11;
    v19 = reinterpret_cast<void**>("Written by %s, %s, %s,\n%s, %s, and %s.\n");
    goto addr_8049955_12;
    v19 = reinterpret_cast<void**>("Written by %s, %s, %s,\n%s, %s, %s, and %s.\n");
    goto addr_8049955_12;
    eax18 = reinterpret_cast<void**>("Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");
    goto addr_8049951_11;
    eax18 = reinterpret_cast<void**>("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n");
    goto addr_8049951_11;
}

void set_char_quoting(int32_t* a1, unsigned char a2, uint32_t a3);

void** quotearg_n_options(void** ecx, int32_t* a2, int32_t a3, uint32_t a4);

void** quotearg_char(void** a1, signed char a2) {
    int32_t* ebx3;
    int32_t v4;
    void** eax5;

    ebx3 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 56);
    v4 = a2;
    set_char_quoting(ebx3, *reinterpret_cast<unsigned char*>(&v4), 1);
    eax5 = quotearg_n_options(0xffffffff, ebx3, v4, 1);
    return eax5;
}

void** gettext_quote() {
    void** eax1;
    void** v2;
    void** ebx3;
    void** eax4;
    void** ecx5;
    uint32_t edx6;
    int32_t edx7;
    uint32_t eax8;

    eax4 = fun_8048828(0, eax1, 5, v2, ebx3);
    ecx5 = eax4;
    *reinterpret_cast<unsigned char*>(&edx6) = reinterpret_cast<uint1_t>(eax4 == eax1);
    *reinterpret_cast<unsigned char*>(&eax4) = reinterpret_cast<uint1_t>(edx7 == 6);
    eax8 = reinterpret_cast<unsigned char>(eax4) & edx6;
    if (*reinterpret_cast<unsigned char*>(&eax8) & 1) {
        ecx5 = reinterpret_cast<void**>("\"");
    }
    return ecx5;
}

int32_t __ctype_get_mb_cur_max = 0x804892e;

int32_t fun_8048928() {
    goto __ctype_get_mb_cur_max;
}

void** quotearg_buffer(void** a1, void** a2, void** a3, void** a4, int32_t* a5) {
    int32_t* edi6;
    void** v7;
    void** v8;
    void** v9;
    void** ebx10;
    int32_t* esi11;
    uint32_t* eax12;
    uint32_t esi13;
    int32_t v14;
    void** eax15;

    edi6 = a5;
    if (!edi6) {
        edi6 = reinterpret_cast<int32_t*>(0x804b920);
    }
    eax12 = fun_8048858(v7, v8, v9, ebx10, esi11);
    esi13 = *eax12;
    v14 = *edi6;
    eax15 = quotearg_buffer_restyled(a3, a4, v14, edi6, ebx10);
    *eax12 = esi13;
    return eax15;
}

int32_t xalloc_fail_func = 0;

void** exit_failure = reinterpret_cast<void**>(1);

void xalloc_die(void** a1, void** a2) {
    int32_t eax3;
    void** v4;
    void** v5;
    void** v6;
    void** eax7;
    void** eax8;
    void** v9;
    void** v10;

    eax3 = xalloc_fail_func;
    if (!eax3) 
        goto addr_8049b2f_2;
    while (1) {
        eax3(v4, 0, "%s", v5);
        addr_8049b2f_2:
        eax7 = fun_8048828(0, "memory exhausted", 5, v5, v6);
        v5 = eax7;
        eax8 = exit_failure;
        v4 = eax8;
        fun_8048998(v4, 0, "%s", v5, v9);
        eax3 = fun_8048878(v4, 0, "%s", v5, v10);
    }
}

void** xmalloc(void** a1, void** a2, void** a3, void** a4, int32_t* a5) {
    void** eax6;
    void** v7;
    void** ebp8;
    void** v9;
    void** v10;
    void** v11;
    int32_t* v12;
    void** eax13;
    int32_t v14;

    eax6 = fun_8048868();
    if (!eax6) {
        xalloc_die(a1, v7);
        eax13 = xmalloc(ebp8, v9, v10, v11, v12);
        fun_8048908(eax13, v14, ebp8);
        goto a1;
    } else {
        return eax6;
    }
}

int32_t vfprintf = 0x804888e;

void fun_8048888(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto vfprintf;
}

int32_t __overflow = 0x80487ee;

void fun_80487e8(void** a1, int32_t a2, void** a3, void** a4, void** a5) {
    goto __overflow;
}

int32_t memcpy = 0x804890e;

void fun_8048908(void** a1, int32_t a2, void** a3) {
    goto memcpy;
}

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t fun_8049efd(int32_t a1) {
    struct s1* ebp2;

    __do_global_dtors_aux();
    goto ebp2->f4;
}

int32_t printf = 0x80488fe;

void fun_80488f8(void** a1, void** a2, void** a3) {
    goto printf;
}

int32_t setlocale = 0x804883e;

void fun_8048838(int32_t a1, int32_t a2) {
    goto setlocale;
}

int32_t bindtextdomain = 0x804889e;

void fun_8048898(int32_t a1, void** a2) {
    goto bindtextdomain;
}

int32_t textdomain = 0x80488ee;

void fun_80488e8(int32_t a1, void** a2) {
    goto textdomain;
}

void atexit(int32_t a1, void** a2) {
    int32_t eax3;
    int32_t ebx4;

    eax3 = __i686_get_pc_thunk_bx();
    if (*reinterpret_cast<int32_t**>(ebx4 + 0x18a6 - 8)) {
        eax3 = **reinterpret_cast<int32_t**>(ebx4 + 0x18a6 - 8);
    }
    fun_8048848(a1, 0, eax3);
    return;
}

void set_char_quoting(int32_t* a1, unsigned char a2, uint32_t a3) {
    uint32_t ecx4;
    uint32_t edx5;
    uint32_t* esi6;
    uint32_t* esi7;
    uint32_t ecx8;
    uint32_t ecx9;

    ecx4 = a2;
    edx5 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx4) >> 5)) << 2;
    esi6 = reinterpret_cast<uint32_t*>(edx5 + reinterpret_cast<int32_t>(a1) + 4);
    if (!a1) {
        esi7 = reinterpret_cast<uint32_t*>(edx5 + 0x804b924);
        ecx8 = ecx4 & 31;
        *esi7 = *esi7 ^ (a3 & 1 ^ reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(*esi7) >> *reinterpret_cast<unsigned char*>(&ecx8)) & 1) << *reinterpret_cast<unsigned char*>(&ecx8);
        return;
    } else {
        ecx9 = ecx4 & 31;
        *esi6 = *esi6 ^ (a3 & 1 ^ reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(*esi6) >> *reinterpret_cast<unsigned char*>(&ecx9)) & 1) << *reinterpret_cast<unsigned char*>(&ecx9);
        return;
    }
}

/* nslots.1 */
void* nslots_1 = reinterpret_cast<void*>(1);

/* slotvec.3 */
void** slotvec_3 = reinterpret_cast<void**>(0xdc);

void** g804b7e0 = reinterpret_cast<void**>(32);

/* slotvec0.2 */
void** slotvec0_2 = reinterpret_cast<void**>(0);

void** quotearg_n_options(void** ecx, int32_t* a2, int32_t a3, uint32_t a4) {
    void* v5;
    void* eax6;
    void** v7;
    void** edx8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    int32_t* v14;
    uint32_t* eax15;
    void*** esp16;
    uint32_t v17;
    void** v18;
    uint32_t v19;
    void** v20;
    void** v21;
    void** v22;
    int1_t below_or_equal23;
    void** eax24;
    void** esi25;
    void** edi26;
    int32_t* v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** eax32;
    void** ebx33;
    void** esi34;
    void** eax35;
    void* esi36;
    void** v37;
    void** v38;
    void** ebx39;
    void** v40;
    void** v41;
    void** v42;
    int32_t* v43;
    void** eax44;
    void** edx45;
    void** eax46;
    void** eax47;
    void* eax48;
    void*** edi49;
    uint32_t eax50;
    uint32_t ecx51;
    uint32_t* eax52;
    int32_t* ebx53;
    int32_t v54;
    signed char v55;
    int32_t v56;

    v5 = eax6;
    v7 = edx8;
    v9 = ecx;
    eax15 = fun_8048858(v10, v11, v12, v13, v14);
    esp16 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 44 - 4 + 4);
    v17 = *eax15;
    if (reinterpret_cast<int32_t>(v5) < reinterpret_cast<int32_t>(0)) {
        fun_8048878(v18, v19, v20, v21, v22);
        esp16 = esp16 - 4 + 4;
        goto addr_804973d_3;
    }
    below_or_equal23 = reinterpret_cast<uint32_t>(nslots_1) <= reinterpret_cast<uint32_t>(v5);
    if (!below_or_equal23) {
        addr_8049670_5:
        eax24 = slotvec_3;
        esi25 = *reinterpret_cast<void***>(eax24 + reinterpret_cast<uint32_t>(v5) * 8);
        edi26 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax24 + reinterpret_cast<uint32_t>(v5) * 8) + 4);
        v27 = a2;
        v28 = v9;
        v29 = esi25;
        v30 = edi26;
        v31 = v7;
        eax32 = quotearg_buffer(v30, v29, v31, v28, v27);
        if (reinterpret_cast<unsigned char>(esi25) <= reinterpret_cast<unsigned char>(eax32)) {
            ebx33 = slotvec_3;
            esi34 = eax32 + 1;
            *reinterpret_cast<void***>(ebx33 + reinterpret_cast<uint32_t>(v5) * 8) = esi34;
            if (edi26 != 0x804b820) {
                fun_8048968(edi26, v29, v31, v28, v27);
                ebx33 = slotvec_3;
            }
            eax35 = xmalloc(esi34, v29, v31, v28, v27);
            edi26 = eax35;
            *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebx33 + reinterpret_cast<uint32_t>(v5) * 8) + 4) = edi26;
            v27 = a2;
            v28 = v9;
            v29 = esi34;
            v30 = edi26;
            v31 = v7;
            quotearg_buffer(v30, v29, v31, v28, v27);
        }
    } else {
        esi36 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v5) + 1);
        if (reinterpret_cast<uint32_t>(esi36) > 0x1fffffff) {
            addr_804973d_3:
            xalloc_die(v37, v38);
            goto addr_8049750_10;
        } else {
            ebx39 = slotvec_3;
            if (ebx39 == 0x804b7dc) {
                eax44 = xmalloc(8, v40, v41, v42, v43);
                slotvec_3 = eax44;
                ebx39 = eax44;
                edx45 = g804b7e0;
                eax46 = slotvec0_2;
                *reinterpret_cast<void***>(ebx39 + 4) = edx45;
                *reinterpret_cast<void***>(ebx39) = eax46;
            }
            eax47 = xrealloc(ebx39, reinterpret_cast<uint32_t>(esi36) * 8);
            slotvec_3 = eax47;
            eax48 = nslots_1;
            edi49 = reinterpret_cast<void***>(eax47 + reinterpret_cast<uint32_t>(eax48) * 8);
            eax50 = (reinterpret_cast<uint32_t>(esi36) - reinterpret_cast<uint32_t>(eax48)) * 8;
            if (eax50 > 7 && reinterpret_cast<uint32_t>(edi49) & 4) {
                *edi49 = reinterpret_cast<void**>(0);
                eax50 = eax50 - 4;
                edi49 = edi49 + 4;
                esi36 = esi36;
            }
            ecx51 = eax50 >> 2;
            while (ecx51) {
                --ecx51;
                *edi49 = reinterpret_cast<void**>(0);
                edi49 = edi49 + 4;
                esi36 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi36) + 4);
            }
            nslots_1 = esi36;
            goto addr_8049670_5;
        }
    }
    eax52 = fun_8048858(v30, v29, v31, v28, v27);
    *eax52 = v17;
    return edi26;
    addr_8049750_10:
    ebx53 = reinterpret_cast<int32_t*>(esp16 - 4 + 4 - 4 - 56);
    v54 = v55;
    set_char_quoting(ebx53, *reinterpret_cast<unsigned char*>(&v54), 1);
    quotearg_n_options(0xffffffff, ebx53, v54, 1);
    goto v56;
}

struct s2 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    int32_t f14;
    int32_t f18;
    int32_t f1c;
    int32_t f20;
};

struct s2* quoting_options_from_style() {
    int32_t ecx1;
    int32_t v2;
    int32_t edx3;
    struct s2* ebx4;
    struct s2* eax5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    int32_t v13;

    ecx1 = 8;
    v2 = edx3;
    ebx4 = eax5;
    while (ecx1) {
        --ecx1;
    }
    ebx4->f0 = v2;
    ebx4->f4 = v6;
    ebx4->f8 = v7;
    ebx4->fc = v8;
    ebx4->f10 = v9;
    ebx4->f14 = v10;
    ebx4->f18 = v11;
    ebx4->f1c = v12;
    ebx4->f20 = v13;
    return ebx4;
}

int32_t memset = 0x804897e;

void fun_8048978(void** a1, int32_t a2, void** a3) {
    goto memset;
}

/* completed.1 */
signed char completed_1 = 0;

/* p.0 */
int32_t* p_0 = reinterpret_cast<int32_t*>(0x804b66c);

void __do_global_dtors_aux() {
    int32_t v1;
    int32_t eax2;
    int32_t v3;
    int32_t eax4;
    int1_t zf5;
    int32_t* eax6;
    int32_t edx7;

    v1 = eax2;
    v3 = eax4;
    zf5 = completed_1 == 0;
    if (zf5) {
        eax6 = p_0;
        edx7 = *eax6;
        if (edx7) {
            do {
                p_0 = eax6 + 1;
                edx7(v3, v1);
                eax6 = p_0;
                edx7 = *eax6;
            } while (edx7);
        }
        completed_1 = 1;
    }
    return;
}

void** quotearg_n_style(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v4;
    uint32_t v5;
    void** eax6;

    quoting_options_from_style();
    eax6 = quotearg_n_options(0xffffffff, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 56, v4, v5);
    return eax6;
}

void** quotearg_n(void* a1, void** a2) {
    void* v3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    int32_t* v9;
    uint32_t* eax10;
    void*** esp11;
    uint32_t v12;
    void** v13;
    uint32_t v14;
    void** v15;
    void** v16;
    void** v17;
    int1_t below_or_equal18;
    void** eax19;
    void** esi20;
    void** edi21;
    void** v22;
    void** v23;
    void** v24;
    void** eax25;
    void** ebx26;
    void** esi27;
    void** eax28;
    void* esi29;
    void** v30;
    void** v31;
    void** ebx32;
    void** v33;
    void** v34;
    void** v35;
    int32_t* v36;
    void** eax37;
    void** edx38;
    void** eax39;
    void** eax40;
    void* eax41;
    void*** edi42;
    uint32_t eax43;
    uint32_t ecx44;
    uint32_t* eax45;
    int32_t* ebx46;
    int32_t v47;
    signed char v48;
    int32_t v49;

    v3 = a1;
    v4 = a2;
    eax10 = fun_8048858(v5, v6, v7, v8, v9);
    esp11 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4 - 4 - 4 - 4 - 44 - 4 + 4);
    v12 = *eax10;
    if (reinterpret_cast<int32_t>(v3) < reinterpret_cast<int32_t>(0)) {
        fun_8048878(v13, v14, v15, v16, v17);
        esp11 = esp11 - 4 + 4;
        goto addr_804973d_4;
    }
    below_or_equal18 = reinterpret_cast<uint32_t>(nslots_1) <= reinterpret_cast<uint32_t>(v3);
    if (!below_or_equal18) {
        addr_8049670_6:
        eax19 = slotvec_3;
        esi20 = *reinterpret_cast<void***>(eax19 + reinterpret_cast<uint32_t>(v3) * 8);
        edi21 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax19 + reinterpret_cast<uint32_t>(v3) * 8) + 4);
        v22 = esi20;
        v23 = edi21;
        v24 = v4;
        eax25 = quotearg_buffer(v23, v22, v24, 0xffffffff, 0x804b920);
        if (reinterpret_cast<unsigned char>(esi20) <= reinterpret_cast<unsigned char>(eax25)) {
            ebx26 = slotvec_3;
            esi27 = eax25 + 1;
            *reinterpret_cast<void***>(ebx26 + reinterpret_cast<uint32_t>(v3) * 8) = esi27;
            if (edi21 != 0x804b820) {
                fun_8048968(edi21, v22, v24, 0xffffffff, 0x804b920);
                ebx26 = slotvec_3;
            }
            eax28 = xmalloc(esi27, v22, v24, 0xffffffff, 0x804b920);
            edi21 = eax28;
            *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebx26 + reinterpret_cast<uint32_t>(v3) * 8) + 4) = edi21;
            v22 = esi27;
            v23 = edi21;
            v24 = v4;
            quotearg_buffer(v23, v22, v24, 0xffffffff, 0x804b920);
        }
    } else {
        esi29 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v3) + 1);
        if (reinterpret_cast<uint32_t>(esi29) > 0x1fffffff) {
            addr_804973d_4:
            xalloc_die(v30, v31);
            goto addr_8049750_11;
        } else {
            ebx32 = slotvec_3;
            if (ebx32 == 0x804b7dc) {
                eax37 = xmalloc(8, v33, v34, v35, v36);
                slotvec_3 = eax37;
                ebx32 = eax37;
                edx38 = g804b7e0;
                eax39 = slotvec0_2;
                *reinterpret_cast<void***>(ebx32 + 4) = edx38;
                *reinterpret_cast<void***>(ebx32) = eax39;
            }
            eax40 = xrealloc(ebx32, reinterpret_cast<uint32_t>(esi29) * 8);
            slotvec_3 = eax40;
            eax41 = nslots_1;
            edi42 = reinterpret_cast<void***>(eax40 + reinterpret_cast<uint32_t>(eax41) * 8);
            eax43 = (reinterpret_cast<uint32_t>(esi29) - reinterpret_cast<uint32_t>(eax41)) * 8;
            if (eax43 > 7 && reinterpret_cast<uint32_t>(edi42) & 4) {
                *edi42 = reinterpret_cast<void**>(0);
                eax43 = eax43 - 4;
                edi42 = edi42 + 4;
                esi29 = esi29;
            }
            ecx44 = eax43 >> 2;
            while (ecx44) {
                --ecx44;
                *edi42 = reinterpret_cast<void**>(0);
                edi42 = edi42 + 4;
                esi29 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi29) + 4);
            }
            nslots_1 = esi29;
            goto addr_8049670_6;
        }
    }
    eax45 = fun_8048858(v23, v22, v24, 0xffffffff, 0x804b920);
    *eax45 = v12;
    return edi21;
    addr_8049750_11:
    ebx46 = reinterpret_cast<int32_t*>(esp11 - 4 + 4 - 4 - 56);
    v47 = v48;
    set_char_quoting(ebx46, *reinterpret_cast<unsigned char*>(&v47), 1);
    quotearg_n_options(0xffffffff, ebx46, v47, 1);
    goto v49;
}

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80488c8(0x8048b60, __return_address(), esp1, 0x8049e30, 0x8049dc0, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_80487d4() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8048a4e() {
}

void fun_8048d5e(int32_t a1) {
    goto a1;
}

void fun_8048dcd() {
}

void fun_8048eca() {
}

void fun_8048f1d() {
}

void fun_804901c() {
}

void fun_804906d() {
}

void fun_8049559() {
}

void fun_80495ac() {
}

void fun_8049b76(void** a1, void** a2) {
    void** v3;
    void** v4;
    int32_t eax5;

    if (reinterpret_cast<unsigned char>(-1 / reinterpret_cast<unsigned char>(a2)) < reinterpret_cast<unsigned char>(a1) || (v3 = a2, v4 = a1, eax5 = fun_8048948(v4, v3), eax5 == 0)) {
        xalloc_die(v4, v3);
    } else {
        return;
    }
}

void fun_8049bde() {
}

void fun_8049c79() {
}

void fun_8049dad(void** a1) {
    int32_t ebx2;
    int32_t ebx3;
    int32_t* edi4;
    int32_t eax5;
    int32_t esi6;
    int32_t eax7;

    xalloc_die(__return_address(), a1);
    __i686_get_pc_thunk_bx();
    ebx2 = ebx3 + 0x1976;
    edi4 = reinterpret_cast<int32_t*>(ebx2 - 0xe4);
    eax5 = ebx2 - 0xe4 - reinterpret_cast<int32_t>(edi4) >> 2;
    esi6 = eax5 - 1;
    if (eax5) {
        do {
            edi4[esi6]();
            eax7 = esi6;
            --esi6;
        } while (eax7);
        _fini();
        return;
    } else {
        _fini();
        return;
    }
}

void fun_8049e22(int32_t ecx) {
    int32_t ebx2;
    int32_t ebx3;
    int32_t* eax4;
    uint32_t edx5;
    int32_t* v6;
    uint32_t edi7;
    uint32_t esi8;

    __i686_get_pc_thunk_bx();
    ebx2 = ebx3 + 0x1901;
    _init(ecx);
    eax4 = reinterpret_cast<int32_t*>(ebx2 - 0xe4);
    edx5 = reinterpret_cast<uint32_t>(ebx2 - 0xe4 - reinterpret_cast<int32_t>(eax4) >> 2);
    if (0 < edx5) {
        v6 = eax4;
        edi7 = edx5;
        esi8 = 0;
        do {
            eax4[esi8]();
            ++esi8;
            eax4 = v6;
        } while (esi8 < edi7);
    }
    return;
}

int32_t g804b74c = 0;

void fun_80488ce() {
    goto g804b74c;
}

void fun_804893e() {
    goto 0x80487c8;
}

void fun_804881e() {
    goto 0x80487c8;
}

void** file_name = reinterpret_cast<void**>(0);

void close_stdout_set_file_name(void** a1) {
    file_name = a1;
    return;
}

void fun_80487de() {
    goto 0x80487c8;
}

void fun_804891e() {
    goto 0x80487c8;
}

void fun_804885e() {
    goto 0x80487c8;
}

void fun_804882e() {
    goto 0x80487c8;
}

int32_t get_quoting_style(int32_t* a1) {
    if (!a1) 
        goto 0x8048d60;
    return *a1;
}

void** fun_80497fc(int32_t a1, int32_t a2, int32_t a3, void** a4) {
    int32_t v5;
    uint32_t v6;
    void** eax7;

    quoting_options_from_style();
    eax7 = quotearg_n_options(a4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 56, v5, v6);
    return eax7;
}

void fun_804899e() {
    goto 0x80487c8;
}

int32_t default_quoting_options = 0;

void fun_8048d69(int32_t* a1, int32_t a2) {
    if (!a1) {
        default_quoting_options = a2;
        return;
    } else {
        *a1 = a2;
        return;
    }
}

void fun_8048d8d() {
}

struct s3 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    signed char* f14;
    signed char* f18;
    int32_t f1c;
    int32_t f20;
};

void** fun_8048df1(struct s3* a1) {
    void** v2;
    void** v3;
    void** v4;
    void** v5;
    int32_t* ebx6;
    uint32_t* eax7;
    uint32_t esi8;
    void** v9;
    void** v10;
    void** v11;
    void** eax12;
    struct s3* edx13;

    eax7 = fun_8048858(v2, v3, v4, v5, ebx6);
    esi8 = *eax7;
    eax12 = xmalloc(36, v9, v10, v11, ebx6);
    edx13 = a1;
    if (!edx13) {
        edx13 = reinterpret_cast<struct s3*>(0x804b920);
    }
    *reinterpret_cast<void***>(eax12) = edx13->f0;
    *reinterpret_cast<void***>(eax12 + 4) = edx13->f4;
    *reinterpret_cast<int32_t*>(eax12 + 8) = edx13->f8;
    *reinterpret_cast<int32_t*>(eax12 + 12) = edx13->fc;
    *reinterpret_cast<int32_t*>(eax12 + 16) = edx13->f10;
    *reinterpret_cast<signed char**>(eax12 + 20) = edx13->f14;
    *reinterpret_cast<signed char**>(eax12 + 24) = edx13->f18;
    *reinterpret_cast<int32_t*>(eax12 + 28) = edx13->f1c;
    *reinterpret_cast<int32_t*>(eax12 + 32) = edx13->f20;
    *eax7 = esi8;
    return eax12;
}

void fun_8048e6c() {
}

void fun_80489ae() {
    goto 0x80487c8;
}

void fun_80488be() {
    goto 0x80487c8;
}

void fun_804895e() {
    goto 0x80487c8;
}

void fun_804898e() {
    goto 0x80487c8;
}

void fun_80488ae() {
    goto 0x80487c8;
}

void fun_804896e() {
    goto 0x80487c8;
}

void fun_804880e() {
    goto 0x80487c8;
}

void fun_80487fe() {
    goto 0x80487c8;
}

void fun_804887e() {
    goto 0x80487c8;
}

void fun_804894e() {
    goto 0x80487c8;
}

void fun_80488de() {
    goto 0x80487c8;
}

void fun_8049d4c(void** a1) {
    void** v2;
    void** v3;
    void** v4;
    int32_t* v5;
    void** eax6;

    eax6 = xmalloc(a1, v2, v3, v4, v5);
    fun_8048978(eax6, 0, a1);
    return;
}

void fun_804886e() {
    goto 0x80487c8;
}

void fun_804884e() {
    goto 0x80487c8;
}

void fun_8048c7d() {
    void** edx1;
    uint32_t ebx2;
    int32_t ebx3;
    int32_t ebx4;
    uint32_t ebx5;
    int32_t ebx6;
    int32_t eax7;
    int32_t eax8;
    void** v9;
    void** v10;
    void** v11;
    int32_t* v12;
    uint32_t* eax13;
    void** v14;
    void** v15;
    void** eax16;
    void** eax17;
    void** eax18;
    void** v19;
    void** eax20;
    void** eax21;

    edx1 = stdout;
    ebx2 = ebx3 - (ebx4 + reinterpret_cast<uint1_t>(ebx5 < ebx6 + reinterpret_cast<uint1_t>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx1)) >> 5 & 1) < 1)));
    if (ebx2) {
        eax7 = fun_80487d8(edx1);
        if (!eax7) {
            addr_8048d20_3:
            return;
        } else {
            edx1 = stdout;
        }
    }
    eax8 = fun_8048918(edx1);
    if (eax8) {
        eax13 = fun_8048858(edx1, v9, v10, v11, v12);
        ebx2 = *eax13;
    }
    if (reinterpret_cast<int32_t>(ebx2) >= reinterpret_cast<int32_t>(0)) {
        eax16 = fun_8048828(0, "write error", 5, v14, v15);
        eax17 = file_name;
        if (!eax17) {
            eax18 = exit_failure;
            fun_8048998(eax18, ebx2, "%s", eax16, v19);
            return;
        } else {
            eax20 = quotearg_colon(eax17, "write error", 5);
            eax21 = exit_failure;
            fun_8048998(eax21, ebx2, "%s: %s", eax20, eax16);
            goto addr_8048d20_3;
        }
    }
}

void fun_80497d3() {
}

void fun_804982c() {
}

void fun_804892e() {
    goto 0x80487c8;
}

void fun_80495b7() {
}

void fun_804888e() {
    goto 0x80487c8;
}

void fun_8049ae2() {
}

void fun_80487ee() {
    goto 0x80487c8;
}

void fun_804890e() {
    goto 0x80487c8;
}

void fun_8049d7a(uint32_t a1, int32_t a2) {
    void** eax3;

    if (-1 / reinterpret_cast<uint32_t>(a2) < a1) 
        goto 0x8049db0;
    eax3 = fun_8048868();
    if (!eax3) 
        goto 0x8049db0;
    return;
}

void fun_80488fe() {
    goto 0x80487c8;
}

void fun_804883e() {
    goto 0x80487c8;
}

void fun_804889e() {
    goto 0x80487c8;
}

void fun_80488ee() {
    goto 0x80487c8;
}

void** fun_804985d(int32_t a1, int32_t a2) {
    void** eax3;

    eax3 = quotearg_n_style(0, a1, a2);
    return eax3;
}

void fun_804897e() {
    goto 0x80487c8;
}

void fun_8049882() {
}

void** fun_80498ac(void** a1) {
    void** eax2;

    eax2 = quotearg_n(0, a1);
    return eax2;
}
