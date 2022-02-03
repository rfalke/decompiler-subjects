
void fun_80489a4();

void fun_8048a04();

int32_t fun_8049ec0();

int32_t fun_8048778() {
    int32_t eax1;

    fun_80489a4();
    fun_8048a04();
    eax1 = fun_8049ec0();
    return eax1;
}

int32_t fun_80489ad();

void fun_80489a4() {
    int32_t eax1;
    int32_t eax2;
    int32_t ebx3;

    eax1 = fun_80489ad();
    eax2 = *reinterpret_cast<int32_t*>(ebx3 + 0x2d7f - 4);
    if (eax2) {
        eax2(eax1);
    }
    return;
}

int32_t g804b658 = 0;

void __gmon_start__(int32_t a1);

void fun_8048a04() {
    int32_t eax1;

    eax1 = g804b658;
    if (eax1 && !1) {
        __gmon_start__(0x804b658);
    }
    return;
}

int32_t g804b648 = -1;

int32_t fun_8049ec0() {
    int32_t v1;
    int32_t edx2;
    int32_t eax3;
    int32_t* ebx4;

    v1 = edx2;
    eax3 = g804b648;
    ebx4 = reinterpret_cast<int32_t*>(0x804b648);
    if (eax3 != -1) {
        do {
            --ebx4;
            eax3();
            eax3 = *ebx4;
        } while (eax3 != -1);
    }
    return v1;
}

int32_t exit = 0x8048906;

void fun_8048900(int32_t a1, void** a2, void** a3, void** a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    goto exit;
}

int32_t getenv = 0x80487e6;

int32_t fun_80487e0(int32_t a1, void** a2, void** a3, void** a4, int32_t a5, int32_t a6) {
    goto getenv;
}

void fun_80498b0(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_8049ac0(void** a1, void** a2, void** a3, void** a4, int32_t a5, int32_t a6) {
    fun_80498b0(a1, a2, a3, a4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 24);
    return;
}

int32_t __fpending = 0x80487a6;

int32_t fun_80487a0(void** a1) {
    goto __fpending;
}

int32_t fclose = 0x80488e6;

int32_t fun_80488e0(void** a1) {
    goto fclose;
}

int32_t __errno_location = 0x8048826;

void**** fun_8048820(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void*** a7, void** a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12) {
    goto __errno_location;
}

int32_t dcgettext = 0x80487f6;

void** fun_80487f0(int32_t a1, void** a2, void** a3, void** a4, void** a5) {
    goto dcgettext;
}

void** fun_80497f0(void** a1, signed char a2);

void** fun_8049890(void** a1, void** a2, void** a3) {
    void** eax4;

    eax4 = fun_80497f0(a1, 58);
    return eax4;
}

int32_t error = 0x8048966;

void fun_8048960(void** a1, void*** a2, void** a3, void** a4, void** a5) {
    goto error;
}

int32_t fun_80488f0();

void** fun_8048e10(void** a1, void** a2);

void** fun_8048870(void** a1, void** a2, void* a3, void* a4);

void** fun_8048880(void** a1, void** a2, void* a3, void* a4);

int32_t fun_8048920(void** a1, void** a2, void* a3, void* a4);

int32_t fun_8048950(void** a1, void** a2, void* a3, void* a4);

uint16_t** fun_8048970(void** a1, void** a2, void* a3, void* a4);

void** fun_8048e50(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void* ebp7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    int32_t eax12;
    uint32_t v13;
    void** edx14;
    void** eax15;
    void** v16;
    void** eax17;
    void** v18;
    uint32_t eax19;
    void** v20;
    void* v21;
    void* v22;
    void** eax23;
    void** v24;
    int1_t zf25;
    uint32_t ecx26;
    unsigned char v27;
    void* v28;
    uint32_t v29;
    void* v30;
    void* v31;
    void** eax32;
    void** ebx33;
    void** esi34;
    void** eax35;
    void** v36;
    int32_t eax37;
    int32_t eax38;
    uint16_t** eax39;
    void** eax40;
    uint32_t eax41;
    uint32_t ecx42;
    int32_t eax43;
    uint32_t eax44;
    void** ecx45;
    void** v46;
    uint32_t eax47;
    void** v48;
    uint32_t eax49;
    uint32_t eax50;
    uint32_t eax51;
    void** v52;
    void** v53;
    uint32_t eax54;
    void** v55;
    void** v56;
    uint32_t eax57;
    void** v58;
    void** edi59;
    void** ecx60;
    int1_t zf61;
    uint32_t eax62;
    void** eax63;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v8 = reinterpret_cast<void**>(0);
    v9 = reinterpret_cast<void**>(0);
    v10 = reinterpret_cast<void**>(0);
    v11 = reinterpret_cast<void**>(0);
    eax12 = fun_80488f0();
    v13 = reinterpret_cast<uint1_t>(eax12 - 1 == 0);
    switch (a5) {
    case 2:
        edx14 = a2;
        if (reinterpret_cast<unsigned char>(0) < reinterpret_cast<unsigned char>(edx14)) {
            *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(39);
        }
        v8 = reinterpret_cast<void**>(1);
        v9 = reinterpret_cast<void**>("'");
        goto addr_8048eb7_6;
    case 3:
        edx14 = a2;
        if (reinterpret_cast<unsigned char>(0) < reinterpret_cast<unsigned char>(edx14)) {
            *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(34);
        }
        v8 = reinterpret_cast<void**>(1);
        v11 = reinterpret_cast<void**>(1);
        v9 = reinterpret_cast<void**>("\"");
        goto addr_8048eb7_6;
    case 4:
        v11 = reinterpret_cast<void**>(1);
        break;
    case 5:
    case 6:
        eax15 = fun_8048e10("`", a5);
        v16 = a5;
        eax17 = fun_8048e10("'", v16);
        v18 = eax15;
        edx14 = eax17;
        if (*reinterpret_cast<void***>(eax15)) {
            do {
                if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                    eax19 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v18));
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v8) + reinterpret_cast<unsigned char>(a1)) = *reinterpret_cast<signed char*>(&eax19);
                }
                ++v18;
                ++v8;
            } while (*reinterpret_cast<void***>(v18));
        }
        v11 = reinterpret_cast<void**>(1);
        v9 = edx14;
        v20 = edx14;
        eax23 = fun_8048870(v20, v16, v21, v22);
        v10 = eax23;
    case 0:
    case 1:
        goto 0x8048ebe;
    }
    addr_8048ebe_16:
    v24 = reinterpret_cast<void**>(0);
    while (1) {
        if (a4 == 0xffffffff) {
            zf25 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v24) + reinterpret_cast<unsigned char>(a3)) == 0;
        } else {
            edx14 = a4;
            zf25 = v24 == edx14;
        }
        if (zf25) 
            break;
        if (!v11 || (!v10 || (edx14 = v10, reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v24) + reinterpret_cast<unsigned char>(edx14)) > reinterpret_cast<unsigned char>(a4)))) {
            addr_8048f30_22:
            ecx26 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v24) + reinterpret_cast<unsigned char>(a3));
            v27 = *reinterpret_cast<unsigned char*>(&ecx26);
            switch (*reinterpret_cast<unsigned char*>(&ecx26)) {
            default:
                if (!v13) {
                    v28 = reinterpret_cast<void*>(0);
                    v29 = 1;
                    if (a4 == 0xffffffff) {
                        eax32 = fun_8048870(a3, v16, v30, v31);
                        a4 = eax32;
                    }
                    do {
                        v31 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp7) - 32);
                        ebx33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v24) + reinterpret_cast<uint32_t>(v28));
                        esi34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(ebx33));
                        v30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a4) - reinterpret_cast<unsigned char>(ebx33));
                        v16 = esi34;
                        v20 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffffdc);
                        eax35 = fun_8048880(v20, v16, v30, v31);
                        if (!eax35) 
                            goto addr_8049315_29;
                        if (eax35 == 0xffffffff) 
                            break;
                        if (eax35 == 0xfffffffe) 
                            goto addr_8049324_32;
                        eax37 = fun_8048920(v36, v16, v30, v31);
                        v28 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v28) + reinterpret_cast<unsigned char>(eax35));
                        v20 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffffe0);
                        v29 = v29 & static_cast<unsigned char>(reinterpret_cast<uint1_t>(eax37 == 0)) - 1;
                        eax38 = fun_8048950(v20, v16, v30, v31);
                    } while (!eax38);
                    goto addr_8049315_29;
                } else {
                    v28 = reinterpret_cast<void*>(1);
                    eax39 = fun_8048970(v20, v16, v30, v31);
                    v29 = static_cast<uint32_t>((*eax39)[v27]) & 0x4000;
                    goto addr_80491ae_35;
                }
                v29 = 0;
                goto addr_8049315_29;
                addr_8049324_32:
                v29 = 0;
                if (reinterpret_cast<unsigned char>(ebx33) >= reinterpret_cast<unsigned char>(a4) || !*reinterpret_cast<void***>(esi34)) {
                    addr_8049315_29:
                    if (reinterpret_cast<uint32_t>(v28) > 1) {
                        goto addr_80491ca_38;
                    }
                } else {
                    do {
                        v28 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v28) + 1);
                        eax40 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v24) + reinterpret_cast<uint32_t>(v28));
                        if (reinterpret_cast<unsigned char>(eax40) >= reinterpret_cast<unsigned char>(a4)) 
                            goto addr_8049315_29;
                    } while (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax40) + reinterpret_cast<unsigned char>(a3)));
                    goto addr_804934e_41;
                }
                addr_80491ae_35:
                edx14 = v24 + 1;
                if (!v11) 
                    goto addr_8049000_42;
                if (v29) {
                    addr_8048fb0_44:
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
                    edx14 = v24 + 1;
                    if (!v11 || (eax41 = v27, ecx42 = static_cast<uint32_t>(v27) & 31, eax43 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(a6 + reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax41) >> 5) * 4) + 4) >> *reinterpret_cast<signed char*>(&ecx42), (*reinterpret_cast<unsigned char*>(&eax43) & 1) == 0)) {
                        addr_8049000_42:
                        if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                            eax44 = v27;
                            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v8) + reinterpret_cast<unsigned char>(a1)) = *reinterpret_cast<signed char*>(&eax44);
                        }
                    } else {
                        addr_8048fdb_46:
                        if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v8) + reinterpret_cast<unsigned char>(a1)) = 92;
                            goto addr_8048fed_48;
                        }
                    }
                } else {
                    addr_80491ca_38:
                    ecx45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v24) + reinterpret_cast<uint32_t>(v28));
                    goto addr_80491e0_49;
                }
                ++v8;
                v24 = edx14;
                continue;
                addr_8048fed_48:
                ++v8;
                edx14 = v24 + 1;
                goto addr_8049000_42;
                while (1) {
                    addr_80491e0_49:
                    if (v11 && !v29) {
                        if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v8) + reinterpret_cast<unsigned char>(a1)) = 92;
                        }
                        v46 = v8 + 1;
                        if (reinterpret_cast<unsigned char>(v46) < reinterpret_cast<unsigned char>(a2)) {
                            eax47 = v27;
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v46) + reinterpret_cast<unsigned char>(a1)) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax47) >> 6) + 48);
                        }
                        v48 = v46 + 1;
                        if (reinterpret_cast<unsigned char>(v48) < reinterpret_cast<unsigned char>(a2)) {
                            eax49 = v27;
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v48) + reinterpret_cast<unsigned char>(a1)) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax49) >> 3) & 7) + 48);
                        }
                        v8 = v48 + 1;
                        v27 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v27 & 7) + 48);
                    }
                    edx14 = v24 + 1;
                    if (reinterpret_cast<unsigned char>(ecx45) <= reinterpret_cast<unsigned char>(edx14)) 
                        goto addr_8049000_42;
                    if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                        eax50 = v27;
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v8) + reinterpret_cast<unsigned char>(a1)) = *reinterpret_cast<signed char*>(&eax50);
                    }
                    ++v8;
                    v24 = edx14;
                    eax51 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx14) + reinterpret_cast<unsigned char>(a3));
                    v27 = *reinterpret_cast<unsigned char*>(&eax51);
                }
                addr_804934e_41:
                goto addr_8049315_29;
            case 0:
                edx14 = v24 + 1;
                if (!v11) 
                    goto addr_8049000_42;
                if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v8) + reinterpret_cast<unsigned char>(a1)) = 92;
                }
                v52 = v8 + 1;
                if (reinterpret_cast<unsigned char>(v52) < reinterpret_cast<unsigned char>(a2)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v52) + reinterpret_cast<unsigned char>(a1)) = 48;
                }
                v53 = v52 + 1;
                if (reinterpret_cast<unsigned char>(v53) < reinterpret_cast<unsigned char>(a2)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v53) + reinterpret_cast<unsigned char>(a1)) = 48;
                }
                v8 = v53 + 1;
                v27 = 48;
                goto addr_8048fb0_44;
            case 7:
                *reinterpret_cast<unsigned char*>(&eax54) = 97;
                goto addr_8049030_71;
            case 8:
                *reinterpret_cast<unsigned char*>(&eax54) = 98;
                goto addr_8049030_71;
            case 9:
                *reinterpret_cast<unsigned char*>(&eax54) = 0x74;
                goto addr_8049048_74;
            case 10:
                *reinterpret_cast<unsigned char*>(&eax54) = 0x6e;
                goto addr_8049048_74;
            case 11:
                *reinterpret_cast<unsigned char*>(&eax54) = 0x76;
                goto addr_8049030_71;
            case 12:
                *reinterpret_cast<unsigned char*>(&eax54) = 0x66;
                goto addr_8049030_71;
            case 13:
                *reinterpret_cast<unsigned char*>(&eax54) = 0x72;
                goto addr_8049048_74;
                addr_8049375_79:
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
                if (!reinterpret_cast<int1_t>(a5 == 1)) 
                    goto addr_8048fb0_44; else 
                    goto addr_804937f_80;
            case 35:
            case 0x7e:
                if (v24) 
                    goto addr_8048fb0_44;
                goto addr_8049375_79;
            case 39:
                if (a5 == 1) 
                    goto addr_804904e_84;
                if (!reinterpret_cast<int1_t>(a5 == 2)) 
                    goto addr_8048fb0_44;
                if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v8) + reinterpret_cast<unsigned char>(a1)) = 39;
                }
                v55 = v8 + 1;
                if (reinterpret_cast<unsigned char>(v55) < reinterpret_cast<unsigned char>(a2)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v55) + reinterpret_cast<unsigned char>(a1)) = 92;
                }
                v56 = v55 + 1;
                if (reinterpret_cast<unsigned char>(v56) < reinterpret_cast<unsigned char>(a2)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v56) + reinterpret_cast<unsigned char>(a1)) = 39;
                    break;
                }
            case 63:
                if (a5 == 1) 
                    goto addr_804904e_84;
                if (!reinterpret_cast<int1_t>(a5 == 3)) 
                    goto addr_8048fb0_44;
                edx14 = v24 + 2;
                if (reinterpret_cast<unsigned char>(edx14) >= reinterpret_cast<unsigned char>(a4)) 
                    goto addr_8048fb0_44;
                if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v24) + reinterpret_cast<unsigned char>(a3) + 1) != 63) 
                    goto addr_8048fb0_44;
                ecx26 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v24) + reinterpret_cast<unsigned char>(a3) + 2);
                eax57 = *reinterpret_cast<signed char*>(&ecx26) - 33;
                if (eax57 > 29) 
                    goto addr_8048fb0_44;
                switch (eax57) {
                case 0:
                case 6:
                case 7:
                case 8:
                case 12:
                case 14:
                case 27:
                case 28:
                case 29:
                    v24 = edx14;
                    v27 = *reinterpret_cast<unsigned char*>(&ecx26);
                    if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v8) + reinterpret_cast<unsigned char>(a1)) = 63;
                    }
                    v58 = v8 + 1;
                    if (reinterpret_cast<unsigned char>(v58) < reinterpret_cast<unsigned char>(a2)) {
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v58) + reinterpret_cast<unsigned char>(a1)) = 92;
                    }
                    v56 = v58 + 1;
                    if (reinterpret_cast<unsigned char>(v56) < reinterpret_cast<unsigned char>(a2)) {
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v56) + reinterpret_cast<unsigned char>(a1)) = 63;
                        goto addr_80490e2_104;
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
                    goto 0x8048fb0;
                }
            case 92:
                eax54 = v27;
                goto addr_8049048_74;
            }
        } else {
            edi59 = v9;
            ecx60 = v10;
            esi34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(v24));
            zf61 = v10 == v10;
            do {
                if (!ecx60) 
                    break;
                --ecx60;
                zf61 = *reinterpret_cast<void***>(esi34) == *reinterpret_cast<void***>(edi59);
                ++edi59;
                ++esi34;
            } while (zf61);
            if (!zf61) 
                goto addr_8048f30_22; else 
                goto addr_8048f18_110;
        }
        addr_80490e2_104:
        v8 = v56 + 1;
        goto addr_8048fb0_44;
        addr_8049048_74:
        if (reinterpret_cast<int1_t>(a5 == 1)) 
            goto addr_804904e_84;
        addr_8049030_71:
        edx14 = v24 + 1;
        if (!v11) 
            goto addr_8049000_42;
        v27 = *reinterpret_cast<unsigned char*>(&eax54);
        goto addr_8048fdb_46;
        addr_8048f18_110:
        if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
            edx14 = v8;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edx14) + reinterpret_cast<unsigned char>(a1)) = 92;
        }
        ++v8;
        goto addr_8048f30_22;
    }
    if (v9 && (eax62 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9)), !!*reinterpret_cast<signed char*>(&eax62))) {
        do {
            if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v8) + reinterpret_cast<unsigned char>(a1)) = *reinterpret_cast<signed char*>(&eax62);
            }
            ++v9;
            ++v8;
            eax62 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
        } while (*reinterpret_cast<signed char*>(&eax62));
    }
    if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v8) + reinterpret_cast<unsigned char>(a1)) = 0;
    }
    eax63 = v8;
    addr_804907e_121:
    return eax63;
    addr_804904e_84:
    eax63 = fun_8048e50(a1, a2, a3, a4, 2, a6);
    goto addr_804907e_121;
    addr_804937f_80:
    goto addr_804904e_84;
    addr_8048eb7_6:
    v10 = reinterpret_cast<void**>(1);
    goto addr_8048ebe_16;
}

int32_t __ctype_b_loc = 0x8048976;

uint16_t** fun_8048970(void** a1, void** a2, void* a3, void* a4) {
    goto __ctype_b_loc;
}

int32_t mbrtowc = 0x8048886;

void** fun_8048880(void** a1, void** a2, void* a3, void* a4) {
    goto mbrtowc;
}

int32_t iswprint = 0x8048926;

int32_t fun_8048920(void** a1, void** a2, void* a3, void* a4) {
    goto iswprint;
}

int32_t mbsinit = 0x8048956;

int32_t fun_8048950(void** a1, void** a2, void* a3, void* a4) {
    goto mbsinit;
}

int32_t strlen = 0x8048876;

void** fun_8048870(void** a1, void** a2, void* a3, void* a4) {
    goto strlen;
}

void** fun_80488a0(void** a1);

void fun_8049b00(void** a1);

void** fun_8049ba0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void*** a7, void** a8);

void fun_8048940(void** a1, int32_t a2, void** a3);

void** fun_8049c20(void** a1, uint32_t a2) {
    void** esp3;
    void** eax4;
    void** esp5;
    void** ebp6;
    void** v7;
    void** ecx8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** eax17;
    int32_t v18;

    while (esp3 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4), eax4 = fun_80488a0(a1), eax4 == 0) {
        fun_8049b00(a1);
        esp5 = esp3 - 2 - 1 + 1 - 1 + 1 - 1;
        if (!a2) {
            if (!ebp6 && !(64 / reinterpret_cast<uint32_t>(__return_address()))) {
            }
        } else {
            if (0x7fffffff / reinterpret_cast<uint32_t>(__return_address()) < reinterpret_cast<uint32_t>(ebp6)) {
                fun_8049b00(v7);
                ecx8 = *reinterpret_cast<void***>(v9);
                if (!v10) {
                    if (!ecx8 && (ecx8 = reinterpret_cast<void**>(64), !1)) {
                        ecx8 = reinterpret_cast<void**>(1);
                    }
                } else {
                    if (reinterpret_cast<unsigned char>(0x7fffffff) < reinterpret_cast<unsigned char>(ecx8)) 
                        goto addr_8049d2c_10;
                    ecx8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx8) + reinterpret_cast<unsigned char>(ecx8));
                }
                *reinterpret_cast<void***>(v9) = ecx8;
                v10 = v10;
                v9 = ecx8;
                ebp6 = esp5;
                continue;
            }
        }
        ebp6 = esp3;
    }
    return eax4;
    addr_8049d2c_10:
    fun_8049b00(v11);
    eax17 = fun_8049ba0(v12, v13, v14, v15, v9, v10, esp5 - 6 - 1 + 1 - 1, v16);
    fun_8048940(eax17, 0, v12);
    goto v18;
}

int32_t memset = 0x8048946;

void fun_8048940(void** a1, int32_t a2, void** a3) {
    goto memset;
}

int32_t free = 0x8048936;

void fun_8049df0(void** a1, void** a2, void** a3, void** a4, void** a5) {
    if (!a1) {
        return;
    } else {
        goto free;
    }
}

int32_t fprintf = 0x80487d6;

void fun_80487d0(void** a1, void*** a2, void** a3, void** a4, void** a5) {
    goto fprintf;
}

int32_t fputs_unlocked = 0x80487c6;

void fun_80487c0(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto fputs_unlocked;
}

int32_t abort = 0x8048846;

int32_t fun_8048840(void** a1, void*** a2, void** a3, void** a4, void** a5) {
    goto abort;
}

int32_t malloc = 0x8048836;

void** fun_8048830(void** a1) {
    goto malloc;
}

int32_t realloc = 0x80488a6;

void** fun_80488a0(void** a1) {
    goto realloc;
}

int32_t calloc = 0x8048916;

int32_t fun_8048910() {
    goto calloc;
}

void fun_8049eed();

void fun_80489c8(int32_t a1);

void fun_8049ee4() {
    int32_t edx1;

    fun_8049eed();
    fun_80489c8(edx1);
    return;
}

void fun_8049e99();

void fun_8048810(int32_t a1, int32_t a2, int32_t a3);

void fun_8049e90(int32_t a1, void** a2) {
    int32_t edx3;
    int32_t ebx4;

    fun_8049e99();
    edx3 = 0;
    if (*reinterpret_cast<int32_t**>(ebx4 + 0x1893 - 8)) {
        edx3 = **reinterpret_cast<int32_t**>(ebx4 + 0x1893 - 8);
    }
    fun_8048810(a1, 0, edx3);
    return;
}

int32_t __cxa_atexit = 0x8048816;

void fun_8048810(int32_t a1, int32_t a2, int32_t a3) {
    goto __cxa_atexit;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t fun_80489ad() {
    int32_t eax1;
    int32_t eax2;
    struct s0* ebp3;

    eax1 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x2d7f - 4);
    if (eax1) {
        eax1(eax2);
    }
    goto ebp3->f4;
}

void** g804b928 = reinterpret_cast<void**>(0);

void fun_80488c0(void** a1, void** a2, void** a3);

void** stdout = reinterpret_cast<void**>(0);

void** g5;

void fun_8048800(int32_t a1, int32_t a2);

void fun_8048860(int32_t a1, void** a2);

void fun_80488b0(int32_t a1, void** a2);

void fun_8048a30(int32_t a1, void** a2, void** a3, void** a4, int32_t a5, int32_t a6) {
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

    eax9 = fun_80487f0(0, "Usage: %s [ignored command line arguments]\n  or:  %s OPTION\nExit with a status code indicating success.\n\nThese option names may not be abbreviated.\n\n", 5, v7, v8);
    edx10 = g804b928;
    fun_80488c0(eax9, edx10, edx10);
    eax13 = fun_80487f0(0, "      --help     display this help and exit\n", 5, v11, v12);
    edx14 = stdout;
    fun_80487c0(eax13, edx14, 5, v15, v16);
    eax19 = fun_80487f0(0, "      --version  output version information and exit\n", 5, v17, v18);
    edx20 = stdout;
    fun_80487c0(eax19, edx20, 5, v21, v22);
    eax25 = fun_80487f0(0, "\nReport bugs to <%s>.\n", 5, v23, v24);
    fun_80488c0(eax25, "bug-coreutils@gnu.org", 5);
    fun_8048900(a1, "bug-coreutils@gnu.org", 5, v26, v27, v28, ebp29, __return_address());
    ebx30 = reinterpret_cast<void**>(5);
    eax31 = g5;
    g804b928 = eax31;
    fun_8048800(6, 0x804a01c);
    v32 = reinterpret_cast<void**>("/usr/share/locale");
    fun_8048860("coreutils", "/usr/share/locale");
    fun_80488b0("coreutils", "/usr/share/locale");
    fun_8049e90(0x8048c20, "/usr/share/locale");
    if (!0) 
        goto addr_8048b74_2;
    while (1) {
        eax33 = fun_80487e0("POSIXLY_CORRECT", v32, "GNU coreutils", "5.2.1", "Jim Meyering", 0);
        zf34 = eax33 == 0;
        if (!zf34) {
            addr_8048b74_2:
            fun_8048900(0, v32, "GNU coreutils", "5.2.1", "Jim Meyering", 0, v35, v36);
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
                goto addr_8048baa_8;
        }
        fun_8048a30(0, v32, "GNU coreutils", "5.2.1", "Jim Meyering", 0);
        ebx30 = *reinterpret_cast<void***>(ebx30 + 4);
        v38 = ebx30;
        addr_8048baa_8:
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
            ebx30 = reinterpret_cast<void**>("GNU coreutils");
            eax44 = stdout;
            v32 = reinterpret_cast<void**>("true");
            fun_8049ac0(eax44, "true", "GNU coreutils", "5.2.1", "Jim Meyering", 0);
            goto addr_8048b74_2;
        }
    }
}

void fun_8048850(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_80487b0(void** a1, int32_t a2, void** a3, void** a4, void** a5);

void** g804b7d0 = reinterpret_cast<void**>(0xac);

void fun_80498b0(void** a1, void** a2, void** a3, void** a4, void** a5) {
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
    void*** v16;
    void** v17;
    void** v18;
    void** eax19;
    void** v20;
    void** eax21;
    void** eax22;

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
    if (!ecx10) {
        v13 = v12;
        v14 = esi8;
        v15 = v9;
        v16 = reinterpret_cast<void***>("%s %s\n");
        fun_80487d0(v14, "%s %s\n", v15, v13, v17);
    } else {
        v18 = v12;
        v15 = ecx10;
        v14 = esi8;
        v13 = v9;
        v16 = reinterpret_cast<void***>("%s (%s) %s\n");
        fun_80487d0(v14, "%s (%s) %s\n", v15, v13, v18);
    }
    if (ebx6 > 9) {
        eax19 = reinterpret_cast<void**>("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n");
    } else {
        switch (ebx6) {
        case 0:
            fun_8048840(v14, v16, v15, v13, v18);
        case 1:
            eax19 = reinterpret_cast<void**>("Written by %s.\n");
            esi8 = esi8;
            break;
        case 2:
            v20 = reinterpret_cast<void**>("Written by %s and %s.\n");
            goto addr_8049944_13;
        case 3:
            eax19 = reinterpret_cast<void**>("Written by %s, %s, and %s.\n");
            break;
        case 4:
            eax19 = reinterpret_cast<void**>("Written by %s, %s, %s,\nand %s.\n");
            break;
        case 5:
            eax19 = reinterpret_cast<void**>("Written by %s, %s, %s,\n%s, and %s.\n");
            break;
        case 6:
            v20 = reinterpret_cast<void**>("Written by %s, %s, %s,\n%s, %s, and %s.\n");
            goto addr_8049944_13;
        case 7:
            v20 = reinterpret_cast<void**>("Written by %s, %s, %s,\n%s, %s, %s, and %s.\n");
            goto addr_8049944_13;
        case 8:
            eax19 = reinterpret_cast<void**>("Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");
            break;
        case 9:
            eax19 = reinterpret_cast<void**>("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n");
        }
    }
    v20 = eax19;
    addr_8049944_13:
    eax21 = fun_80487f0(0, v20, 5, v13, v18);
    fun_8048850(esi8, eax21, edi7, v13, v18);
    if (reinterpret_cast<uint32_t>(*reinterpret_cast<signed char**>(esi8 + 20)) >= reinterpret_cast<uint32_t>(*reinterpret_cast<signed char**>(esi8 + 24))) {
        fun_80487b0(esi8, 10, edi7, v13, v18);
    } else {
        **reinterpret_cast<signed char**>(esi8 + 20) = 10;
        *reinterpret_cast<signed char**>(esi8 + 20) = *reinterpret_cast<signed char**>(esi8 + 20) + 1;
    }
    eax22 = g804b7d0;
    fun_80487c0(eax22, esi8, edi7, v13, v18);
    if (reinterpret_cast<uint32_t>(*reinterpret_cast<signed char**>(esi8 + 20)) >= reinterpret_cast<uint32_t>(*reinterpret_cast<signed char**>(esi8 + 24))) {
        fun_80487b0(esi8, 10, edi7, v13, v18);
    } else {
        **reinterpret_cast<signed char**>(esi8 + 20) = 10;
        *reinterpret_cast<signed char**>(esi8 + 20) = *reinterpret_cast<signed char**>(esi8 + 20) + 1;
    }
    fun_80487f0(0, "This is free software; see the source for copying conditions.  There is NO\nwarranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n", 5, v13, v18);
    goto fputs_unlocked;
}

int32_t g804b900 = 0;

int32_t g804b904 = 0;

int32_t* g804b908 = reinterpret_cast<int32_t*>(0);

int32_t g804b90c = 0;

uint32_t g804b910 = 0;

void** g804b914 = reinterpret_cast<void**>(0);

int32_t g804b918 = 0;

int32_t g804b91c = 0;

void** g804b920 = reinterpret_cast<void**>(0);

void fun_8048db0(void** a1, unsigned char a2, uint32_t a3);

void** fun_80494f0(uint32_t a1, void** a2, void** a3, void** a4, int32_t a5, int32_t a6, int32_t* a7, int32_t a8, uint32_t a9, void** a10, int32_t a11, int32_t a12, void** a13);

void** fun_80497f0(void** a1, signed char a2) {
    int32_t eax3;
    void** ebx4;
    int32_t eax5;
    int32_t v6;
    int32_t* eax7;
    int32_t eax8;
    uint32_t eax9;
    void** eax10;
    int32_t eax11;
    int32_t eax12;
    void** eax13;
    void** eax14;

    eax3 = g804b900;
    ebx4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xffffffc8);
    eax5 = g804b904;
    v6 = a2;
    eax7 = g804b908;
    eax8 = g804b90c;
    eax9 = g804b910;
    eax10 = g804b914;
    eax11 = g804b918;
    eax12 = g804b91c;
    eax13 = g804b920;
    fun_8048db0(ebx4, *reinterpret_cast<unsigned char*>(&v6), 1);
    eax14 = fun_80494f0(0, a1, 0xffffffff, ebx4, eax3, eax5, eax7, eax8, eax9, eax10, eax11, eax12, eax13);
    return eax14;
}

void** fun_8048e10(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** eax5;

    eax5 = fun_80487f0(0, a1, 5, v3, v4);
    if (eax5 == a1 && reinterpret_cast<int1_t>(a2 == 6)) {
        eax5 = reinterpret_cast<void**>("\"");
    }
    return eax5;
}

int32_t __ctype_get_mb_cur_max = 0x80488f6;

int32_t fun_80488f0() {
    goto __ctype_get_mb_cur_max;
}

void** fun_8049490(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** edi6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void*** v13;
    void** ebx14;
    int32_t esi15;
    int32_t edi16;
    int32_t ebp17;
    void**** eax18;
    void*** esi19;
    void** v20;
    void** eax21;

    edi6 = a5;
    if (!edi6) {
        edi6 = reinterpret_cast<void**>(0x804b900);
    }
    eax18 = fun_8048820(v7, v8, v9, v10, v11, v12, v13, ebx14, esi15, edi16, ebp17, __return_address());
    esi19 = *eax18;
    v20 = *reinterpret_cast<void***>(edi6);
    eax21 = fun_8048e50(a1, a2, a3, a4, v20, edi6);
    *eax18 = esi19;
    return eax21;
}

int32_t g804b924 = 0;

void** g804b7bc = reinterpret_cast<void**>(1);

void fun_8049b00(void** a1) {
    int32_t eax2;
    void** v3;
    void** v4;
    void** v5;
    void** eax6;
    void** eax7;
    void** v8;
    void** v9;

    eax2 = g804b924;
    if (!eax2) 
        goto addr_8049b0f_2;
    while (1) {
        eax2(v3, 0, "%s", v4);
        addr_8049b0f_2:
        eax6 = fun_80487f0(0, "memory exhausted", 5, v4, v5);
        v4 = eax6;
        eax7 = g804b7bc;
        v3 = eax7;
        fun_8048960(v3, 0, "%s", v4, v8);
        eax2 = fun_8048840(v3, 0, "%s", v4, v9);
    }
}

uint32_t g804b7c0 = 1;

void** g804b7cc = reinterpret_cast<void**>(0xc4);

void** g804b7c8 = reinterpret_cast<void**>(0);

void** g804b7c4 = reinterpret_cast<void**>(0);

void** fun_80494f0(uint32_t a1, void** a2, void** a3, void** a4, int32_t a5, int32_t a6, int32_t* a7, int32_t a8, uint32_t a9, void** a10, int32_t a11, int32_t a12, void** a13) {
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void*** v20;
    void** ebx21;
    int32_t esi22;
    int32_t edi23;
    int32_t ebp24;
    void**** eax25;
    void*** v26;
    void** v27;
    void*** v28;
    void** v29;
    void** v30;
    void** v31;
    int1_t below_or_equal32;
    void** eax33;
    void** edi34;
    void** esi35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** eax41;
    void** ebx42;
    void** edi43;
    void** v44;
    void** eax45;
    uint32_t esi46;
    void** v47;
    void** ebx48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** eax54;
    void** edx55;
    void** eax56;
    void** eax57;
    uint32_t eax58;
    void** v59;
    void**** eax60;
    uint32_t v61;
    void** v62;
    int32_t v63;
    int32_t v64;
    int32_t v65;
    uint32_t v66;
    void** v67;
    int32_t v68;
    int32_t v69;
    void** v70;
    int32_t v71;

    eax25 = fun_8048820(v14, v15, v16, v17, v18, v19, v20, ebx21, esi22, edi23, ebp24, __return_address());
    v26 = *eax25;
    if (reinterpret_cast<int32_t>(a1) < reinterpret_cast<int32_t>(0)) {
        fun_8048840(v27, v28, v29, v30, v31);
        goto addr_804964d_3;
    }
    below_or_equal32 = g804b7c0 <= a1;
    if (!below_or_equal32) {
        addr_804957d_5:
        eax33 = g804b7cc;
        edi34 = *reinterpret_cast<void***>(eax33 + a1 * 8);
        esi35 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax33 + a1 * 8) + 4);
        v36 = a4;
        v37 = edi34;
        v38 = a3;
        v39 = a2;
        v40 = esi35;
        eax41 = fun_8049490(v40, v37, v39, v38, v36);
        if (reinterpret_cast<unsigned char>(edi34) <= reinterpret_cast<unsigned char>(eax41)) {
            ebx42 = g804b7cc;
            edi43 = eax41 + 1;
            *reinterpret_cast<void***>(ebx42 + a1 * 8) = edi43;
            if (esi35 != 0x804b800) {
                fun_8049df0(esi35, v37, v39, v38, v36);
                ebx42 = g804b7cc;
            }
            eax45 = fun_8049ba0(edi43, v37, v39, v38, v36, v44, v26, ebx21);
            esi35 = eax45;
            *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebx42 + a1 * 8) + 4) = esi35;
            v36 = a4;
            v38 = a3;
            v39 = a2;
            v37 = edi43;
            v40 = esi35;
            fun_8049490(v40, v37, v39, v38, v36);
        }
    } else {
        esi46 = a1 + 1;
        if (esi46 > 0x1fffffff) {
            addr_804964d_3:
            fun_8049b00(v47);
            goto addr_8049660_10;
        } else {
            ebx48 = g804b7cc;
            if (ebx48 == 0x804b7c4) {
                eax54 = fun_8049ba0(8, v49, v50, v51, v52, v53, v26, ebx21);
                g804b7cc = eax54;
                ebx48 = eax54;
                edx55 = g804b7c8;
                eax56 = g804b7c4;
                *reinterpret_cast<void***>(ebx48 + 4) = edx55;
                *reinterpret_cast<void***>(ebx48) = eax56;
            }
            eax57 = fun_8049c20(ebx48, esi46 * 8);
            g804b7cc = eax57;
            eax58 = g804b7c0;
            fun_8048940(eax57 + eax58 * 8, 0, esi46 - eax58 << 3);
            g804b7c0 = esi46;
            goto addr_804957d_5;
        }
    }
    eax60 = fun_8048820(v40, v37, v39, v38, v36, v59, v26, ebx21, esi22, edi23, ebp24, __return_address());
    *eax60 = v26;
    return esi35;
    addr_8049660_10:
    fun_80494f0(v61, v62, 0xffffffff, 0x804b900, v63, v64, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, v65, v66, v67, v68, v69, v70);
    goto v71;
}

void** fun_8049ba0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void*** a7, void** a8) {
    uint32_t* esp9;
    void** eax10;
    uint32_t* v11;
    void*** esp12;
    uint32_t ebp13;
    void** v14;
    void** v15;
    void** v16;
    void** eax17;
    void* esp18;
    void** eax19;
    void* esp20;
    uint32_t* ecx21;
    int32_t v22;
    uint32_t* eax23;
    void** v24;
    void*** ebp25;
    void** ecx26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** eax35;
    int32_t v36;

    esp9 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax10 = fun_8048830(a1);
    if (eax10) {
        return eax10;
    }
    fun_8049b00(a1);
    v11 = esp9;
    esp12 = reinterpret_cast<void***>(esp9 - 2 - 1 + 1 - 1 + 1 - 1 - 6);
    if (-1 / reinterpret_cast<uint32_t>(__return_address()) >= ebp13 && (v14 = v15, v16 = reinterpret_cast<void**>(ebp13 * reinterpret_cast<uint32_t>(__return_address())), eax17 = fun_80488a0(v14), esp12 = esp12 - 4 + 4, !!eax17)) {
        goto a1;
    }
    fun_8049b00(v14);
    esp18 = reinterpret_cast<void*>(esp12 - 4 + 4);
    while (eax19 = fun_80488a0(v16), eax19 == 0) {
        fun_8049b00(v16);
        esp20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp18) - 4 - 8 - 4 + 4 - 4 + 4 - 4);
        ecx21 = v11;
        if (!v22) {
            if (!ecx21 && (eax23 = reinterpret_cast<uint32_t*>(64 / reinterpret_cast<unsigned char>(v14)), ecx21 = eax23, !eax23)) {
                ecx21 = reinterpret_cast<uint32_t*>(1);
            }
        } else {
            if (0x7fffffff / reinterpret_cast<unsigned char>(v14) < reinterpret_cast<uint32_t>(ecx21)) {
                fun_8049b00(v24);
                ebp25 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp20) - 24 - 4 + 4 - 4);
                ecx26 = *reinterpret_cast<void***>(v27);
                if (!v28) {
                    if (!ecx26 && (ecx26 = reinterpret_cast<void**>(64), !1)) {
                        ecx26 = reinterpret_cast<void**>(1);
                    }
                } else {
                    if (reinterpret_cast<unsigned char>(0x7fffffff) < reinterpret_cast<unsigned char>(ecx26)) 
                        goto addr_8049d2c_15;
                    ecx26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx26) + reinterpret_cast<unsigned char>(ecx26));
                }
                *reinterpret_cast<void***>(v27) = ecx26;
                v28 = v28;
                v27 = ecx26;
                esp18 = reinterpret_cast<void*>(ebp25 + 1);
                continue;
            } else {
                ecx21 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ecx21) + reinterpret_cast<uint32_t>(ecx21));
            }
        }
        v11 = ecx21;
        esp18 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp20) + 4);
    }
    goto v14;
    addr_8049d2c_15:
    fun_8049b00(v29);
    eax35 = fun_8049ba0(v30, v31, v32, v33, v27, v28, ebp25, v34);
    fun_8048940(eax35, 0, v30);
    goto v36;
}

void** fun_80496b0(void** a1, void** a2) {
    int32_t ecx3;
    void** v4;
    void** ebx5;
    void** v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    signed char* v10;
    signed char* v11;
    int32_t v12;
    int32_t v13;

    ecx3 = 8;
    v4 = a2;
    ebx5 = a1;
    while (ecx3) {
        --ecx3;
    }
    *reinterpret_cast<void***>(ebx5) = v4;
    *reinterpret_cast<void***>(ebx5 + 4) = v6;
    *reinterpret_cast<int32_t*>(ebx5 + 8) = v7;
    *reinterpret_cast<int32_t*>(ebx5 + 12) = v8;
    *reinterpret_cast<int32_t*>(ebx5 + 16) = v9;
    *reinterpret_cast<signed char**>(ebx5 + 20) = v10;
    *reinterpret_cast<signed char**>(ebx5 + 24) = v11;
    *reinterpret_cast<int32_t*>(ebx5 + 28) = v12;
    *reinterpret_cast<int32_t*>(ebx5 + 32) = v13;
    return ebx5;
}

int32_t __overflow = 0x80487b6;

void fun_80487b0(void** a1, int32_t a2, void** a3, void** a4, void** a5) {
    goto __overflow;
}

int32_t memcpy = 0x80488d6;

void fun_80488d0(void** a1, int32_t a2, void** a3) {
    goto memcpy;
}

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8049e56(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t ebx5;
    int32_t ecx6;
    int32_t esi7;
    int32_t edx8;
    struct s1* ebp9;

    ebx5 = reinterpret_cast<int32_t>(__return_address()) + 0x18d6;
    ecx6 = ebx5 - 0xe4 - (ebx5 - 0xe4) >> 2;
    esi7 = ecx6 - 1;
    if (ecx6) {
        do {
            *reinterpret_cast<int32_t*>(ebx5 + esi7 * 4 - 0xe4)();
            edx8 = esi7;
            --esi7;
        } while (edx8);
    }
    fun_8049ee4();
    goto ebp9->f4;
}

struct s2 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8049eed() {
    int32_t edx1;
    struct s2* ebp2;

    fun_80489c8(edx1);
    goto ebp2->f4;
}

struct s3 {
    signed char[8] pad8;
    int32_t f8;
};

struct s4 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8049e99() {
    int32_t edx1;
    int32_t v2;
    struct s3* ebp3;
    struct s4* ebp4;

    edx1 = 0;
    if (*reinterpret_cast<int32_t**>(reinterpret_cast<int32_t>(__return_address()) + 0x1893 - 8)) {
        edx1 = **reinterpret_cast<int32_t**>(reinterpret_cast<int32_t>(__return_address()) + 0x1893 - 8);
    }
    v2 = ebp3->f8;
    fun_8048810(v2, 0, edx1);
    goto ebp4->f4;
}

int32_t printf = 0x80488c6;

void fun_80488c0(void** a1, void** a2, void** a3) {
    goto printf;
}

int32_t setlocale = 0x8048806;

void fun_8048800(int32_t a1, int32_t a2) {
    goto setlocale;
}

int32_t bindtextdomain = 0x8048866;

void fun_8048860(int32_t a1, void** a2) {
    goto bindtextdomain;
}

int32_t textdomain = 0x80488b6;

void fun_80488b0(int32_t a1, void** a2) {
    goto textdomain;
}

struct s5 {
    signed char[134527236] pad134527236;
    uint32_t f804b904;
};

void fun_8048db0(void** a1, unsigned char a2, uint32_t a3) {
    uint32_t ecx4;
    struct s5* edx5;
    uint32_t* esi6;
    uint32_t ecx7;

    ecx4 = a2;
    edx5 = reinterpret_cast<struct s5*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx4) >> 5)) << 2);
    esi6 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(edx5) + reinterpret_cast<unsigned char>(a1) + 4);
    if (!a1) {
        esi6 = &edx5->f804b904;
    }
    ecx7 = ecx4 & 31;
    *esi6 = *esi6 ^ (a3 & 1 ^ reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(*esi6) >> *reinterpret_cast<unsigned char*>(&ecx7)) & 1) << *reinterpret_cast<unsigned char*>(&ecx7);
    return;
}

int32_t __libc_start_main = 0x8048896;

void fun_8048890(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

void** fun_8049660(uint32_t a1, void** a2, int32_t a3, int32_t a4, void** a5) {
    int32_t v6;
    int32_t v7;
    int32_t* ebp8;
    void** eax9;

    eax9 = fun_80494f0(a1, a2, 0xffffffff, 0x804b900, v6, v7, ebp8, __return_address(), a1, a2, a3, a4, a5);
    return eax9;
}

int32_t vfprintf = 0x8048856;

void fun_8048850(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto vfprintf;
}

struct s6 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8049e12() {
    int32_t ebx1;
    uint32_t esi2;
    uint32_t edx3;
    uint32_t edi4;
    struct s6* ebp5;

    ebx1 = reinterpret_cast<int32_t>(__return_address()) + 0x191a;
    fun_8048778();
    esi2 = 0;
    edx3 = reinterpret_cast<uint32_t>(ebx1 - 0xe4 - (ebx1 - 0xe4) >> 2);
    if (0 < edx3) {
        edi4 = edx3;
        do {
            *reinterpret_cast<int32_t*>(ebx1 + esi2 * 4 - 0xe4)();
            ++esi2;
        } while (esi2 < edi4);
    }
    goto ebp5->f4;
}

signed char g804b7e4 = 0;

int32_t* g804b7b8 = reinterpret_cast<int32_t*>(0x804b654);

void fun_80489c8(int32_t a1) {
    int1_t zf2;
    int32_t* eax3;
    int32_t edx4;

    zf2 = g804b7e4 == 0;
    if (zf2) {
        eax3 = g804b7b8;
        edx4 = *eax3;
        if (edx4) {
            do {
                g804b7b8 = eax3 + 1;
                edx4();
                eax3 = g804b7b8;
                edx4 = *eax3;
            } while (edx4);
        }
        g804b7e4 = 1;
    }
    return;
}

void** fun_8049720(uint32_t a1, void** a2, void** a3) {
    void** ebx4;
    int32_t v5;
    int32_t v6;
    int32_t* v7;
    int32_t v8;
    uint32_t v9;
    void** v10;
    int32_t v11;
    int32_t v12;
    void** v13;
    void** eax14;

    ebx4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xffffffc8);
    fun_80496b0(ebx4, a2);
    eax14 = fun_80494f0(a1, a3, 0xffffffff, ebx4, v5, v6, v7, v8, v9, v10, v11, v12, v13);
    return eax14;
}

void fun_804879c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8048a02() {
}

struct s7 {
    int32_t f0;
    int32_t f4;
    int32_t* f8;
    int32_t fc;
    uint32_t f10;
    void** f14;
    signed char[3] pad24;
    int32_t f18;
    int32_t f1c;
    void** f20;
};

struct s8 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048d5c(struct s7* ecx) {
    int32_t eax2;
    int32_t eax3;
    int32_t* eax4;
    int32_t eax5;
    uint32_t eax6;
    void** eax7;
    int32_t eax8;
    int32_t eax9;
    void** eax10;
    int32_t* ebx11;
    int32_t esi12;
    struct s8* ebp13;

    eax2 = g804b900;
    ecx->f0 = eax2;
    eax3 = g804b904;
    ecx->f4 = eax3;
    eax4 = g804b908;
    ecx->f8 = eax4;
    eax5 = g804b90c;
    ecx->fc = eax5;
    eax6 = g804b910;
    ecx->f10 = eax6;
    eax7 = g804b914;
    ecx->f14 = eax7;
    eax8 = g804b918;
    ecx->f18 = eax8;
    eax9 = g804b91c;
    ecx->f1c = eax9;
    eax10 = g804b920;
    ecx->f20 = eax10;
    *ebx11 = esi12;
    goto ebp13->f4;
}

void fun_8048d7e(int32_t a1) {
    goto a1;
}

void fun_8048dfc() {
}

void fun_8048e4d() {
}

void fun_804948a() {
}

void fun_8049717() {
}

void fun_8049b56(uint32_t a1, uint32_t a2) {
    void** v3;
    void** eax4;

    if (-1 / a2 < a1 || (v3 = reinterpret_cast<void**>(a1 * a2), eax4 = fun_8048830(v3), eax4 == 0)) {
        fun_8049b00(v3);
    } else {
        return;
    }
}

void fun_8049bb9() {
}

void fun_8049c99() {
}

void fun_8049d0a() {
}

void fun_8049e4c() {
    int32_t ebx1;
    int32_t esi2;
    int32_t ebp3;

    fun_8049e56(ebx1, esi2, ebp3, __return_address());
}

void fun_8049e7e() {
}

int32_t g804b734 = 0;

void fun_8048906() {
    goto g804b734;
}

void fun_80487e6() {
    goto 0x8048790;
}

void** g804b7e8 = reinterpret_cast<void**>(0);

void fun_8048c10(void** a1) {
    g804b7e8 = a1;
    return;
}

void fun_80487a6() {
    goto 0x8048790;
}

struct s9 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048cca() {
    void** eax1;
    void*** ebx2;
    void** esi3;
    void** v4;
    struct s9* ebp5;

    eax1 = g804b7bc;
    fun_8048960(eax1, ebx2, "%s", esi3, v4);
    goto ebp5->f4;
}

void fun_80488e6() {
    goto 0x8048790;
}

void fun_8048826() {
    goto 0x8048790;
}

void fun_80487f6() {
    goto 0x8048790;
}

void fun_8048cf0(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** ebx9;
    void** esi10;
    void*** ebp11;
    void** v12;
    void** v13;
    void** v14;

    fun_8048820(v5, v6, v7, v8, ebx9, esi10, ebp11, __return_address(), a1, a2, a3, a4);
    fun_8049ba0(36, v12, v13, v14, ebx9, esi10, ebp11, __return_address());
    if (!a1) 
        goto 0x8048d60; else 
        goto "???";
}

void fun_8048966() {
    goto 0x8048790;
}

void fun_8048d67(int32_t a1) {
    if (!a1) 
        goto 0x8048d80; else 
        goto "???";
}

void fun_8048d87(int32_t* a1, int32_t a2) {
    int32_t* edx3;

    edx3 = a1;
    if (!edx3) {
        edx3 = reinterpret_cast<int32_t*>(0x804b900);
    }
    *edx3 = a2;
    return;
}

void fun_8048da9() {
}

void fun_8048e09() {
}

void fun_8048976() {
    goto 0x8048790;
}

void fun_8048886() {
    goto 0x8048790;
}

void fun_8048926() {
    goto 0x8048790;
}

void fun_8048956() {
    goto 0x8048790;
}

void fun_80493dd() {
}

void fun_8048876() {
    goto 0x8048790;
}

void** fun_804968e(void** a1) {
    int32_t ebp2;
    void** eax3;

    eax3 = fun_8049660(0, a1, ebp2, __return_address(), a1);
    return eax3;
}

void fun_8048946() {
    goto 0x8048790;
}

void** fun_8049764(uint32_t a1, void** a2, void** a3, void** a4) {
    void** ebx5;
    int32_t v6;
    int32_t v7;
    int32_t* v8;
    int32_t v9;
    uint32_t v10;
    void** v11;
    int32_t v12;
    int32_t v13;
    void** v14;
    void** eax15;

    ebx5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xffffffc8);
    fun_80496b0(ebx5, a2);
    eax15 = fun_80494f0(a1, a3, a4, ebx5, v6, v7, v8, v9, v10, v11, v12, v13, v14);
    return eax15;
}

void fun_8049abe() {
}

void fun_80487d6() {
    goto 0x8048790;
}

void fun_80487c6() {
    goto 0x8048790;
}

void fun_8048846() {
    goto 0x8048790;
}

void fun_8048836() {
    goto 0x8048790;
}

void fun_80488a6() {
    goto 0x8048790;
}

void fun_8048916() {
    goto 0x8048790;
}

void fun_8048936() {
    goto 0x8048790;
}

void fun_8049e04() {
    fun_8049e12();
}

void fun_8048816() {
    goto 0x8048790;
}

void fun_8048c1d() {
    void* eax1;
    void** edx2;
    void*** ebx3;
    int32_t eax4;
    int32_t eax5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void*** v11;
    void** v12;
    int32_t ebx13;
    int32_t esi14;
    int32_t ebp15;
    void**** eax16;
    void** v17;
    void** v18;
    void** eax19;
    void** eax20;
    void** eax21;
    void** eax22;

    eax1 = reinterpret_cast<void*>(0);
    edx2 = stdout;
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<uint1_t>(!!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx2)) & 32));
    ebx3 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(eax1) - 1);
    if (ebx3) {
        eax4 = fun_80487a0(edx2);
        if (!eax4) 
            goto 0x8048cc0;
        edx2 = stdout;
    }
    eax5 = fun_80488e0(edx2);
    if (eax5) {
        eax16 = fun_8048820(edx2, v6, v7, v8, v9, v10, v11, v12, ebx13, esi14, ebp15, __return_address());
        ebx3 = *eax16;
    }
    if (reinterpret_cast<int32_t>(ebx3) < reinterpret_cast<int32_t>(0)) 
        goto 0x8048cc0;
    eax19 = fun_80487f0(0, "write error", 5, v17, v18);
    eax20 = g804b7e8;
    if (!eax20) 
        goto 0x8048cd0;
    eax21 = fun_8049890(eax20, "write error", 5);
    eax22 = g804b7bc;
    fun_8048960(eax22, ebx3, "%s: %s", eax21, eax19);
}

void fun_8049884() {
}

void fun_80488f6() {
    goto 0x8048790;
}

void fun_8048980() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_8048890(0x8048b10, __return_address(), esp1, fun_8049e04, fun_8049e4c, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_804961c() {
}

void fun_80496ad() {
}

void** fun_80497b2(void** a1, void** a2) {
    void** eax3;

    eax3 = fun_8049720(0, a1, a2);
    return eax3;
}

void fun_80487b6() {
    goto 0x8048790;
}

void fun_8049d77(void** a1, int32_t a2) {
    int32_t v3;
    void** v4;
    int32_t eax5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** eax11;

    if (reinterpret_cast<unsigned char>(-1 / reinterpret_cast<uint32_t>(a2)) < reinterpret_cast<unsigned char>(a1) || (v3 = a2, v4 = a1, eax5 = fun_8048910(), eax5 == 0)) {
        fun_8049b00(v4);
        eax11 = fun_8049ba0(v6, v7, v8, v9, v10, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, v4);
        fun_80488d0(eax11, v3, v6);
        goto v4;
    } else {
        return;
    }
}

void fun_80488d6() {
    goto 0x8048790;
}

void fun_80488c6() {
    goto 0x8048790;
}

void fun_8048806() {
    goto 0x8048790;
}

void fun_8048866() {
    goto 0x8048790;
}

void fun_80488b6() {
    goto 0x8048790;
}

void fun_8048896() {
    goto 0x8048790;
}

void fun_80497e4() {
}

void fun_8048856() {
    goto 0x8048790;
}
