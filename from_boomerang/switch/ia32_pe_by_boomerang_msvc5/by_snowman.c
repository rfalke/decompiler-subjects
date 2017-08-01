
struct s0 {
    signed char f0;
    signed char f1;
};

void fun_4010a0(int32_t a1, struct s0* a2);

int32_t fun_401000(int32_t a1, void** a2, void** a3) {
    uint32_t eax4;

    eax4 = reinterpret_cast<uint32_t>(a1 - 2);
    if (eax4 > 5) {
        fun_4010a0("Other!\n", __return_address());
        return 0;
    }
    switch (eax4) {
    case 0:
        fun_4010a0("Two!\n", __return_address());
        return 0;
    case 1:
        fun_4010a0("Three!\n", __return_address());
        return 0;
    case 2:
        fun_4010a0("Four!\n", __return_address());
        return 0;
    case 3:
        fun_4010a0("Five!\n", __return_address());
        return 0;
    case 4:
        fun_4010a0("Six!\n", __return_address());
        return 0;
    case 5:
        fun_4010a0("Seven!\n", __return_address());
        return 0;
    }
}

int32_t g408900 = 0;

void fun_402d90();

void fun_402dd0(uint32_t a1);

int32_t g406068 = 0x401f20;

void fun_401200(uint32_t a1) {
    int1_t zf2;

    zf2 = g408900 == 2;
    if (!zf2) {
        fun_402d90();
    }
    fun_402dd0(a1);
    g406068(0xff);
    return;
}

void** fun_402fb0(void* a1);

void** g408be0;

int32_t* g408ce0;

int32_t GetStartupInfoA = 0xa296;

struct s1 {
    int32_t* f0;
    unsigned char f4;
};

int32_t GetStdHandle = 0xa278;

struct s2 {
    void** f0;
    signed char[3] pad4;
    unsigned char f4;
};

int32_t GetFileType = 0xa288;

int32_t SetHandleCount = 0xa266;

void fun_402980() {
    void** eax1;
    void** esi2;
    void** ecx3;
    int16_t v4;
    struct s1* v5;
    int32_t ebp6;
    int32_t ebx7;
    int32_t* ecx8;
    unsigned char* edi9;
    int32_t* v10;
    int32_t* ebp11;
    int32_t* ecx12;
    void** edx13;
    struct s2* esi14;
    unsigned char al15;
    int32_t eax16;
    uint32_t eax17;
    uint32_t eax18;
    void** eax19;
    uint32_t eax20;
    uint32_t eax21;
    int32_t v22;
    int32_t* esi23;
    int32_t v24;
    int32_t eax25;
    uint32_t eax26;
    int32_t* ecx27;
    void*** esi28;
    void** eax29;
    int32_t* ecx30;
    int32_t* eax31;
    int32_t* ecx32;

    eax1 = fun_402fb0(0x100);
    esi2 = eax1;
    if (!esi2) {
        fun_401200(27);
    }
    g408be0 = esi2;
    g408ce0 = reinterpret_cast<int32_t*>(32);
    if (reinterpret_cast<unsigned char>(esi2) < reinterpret_cast<unsigned char>(esi2 + 0x100)) {
        do {
            *reinterpret_cast<void***>(esi2 + 4) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(esi2) = reinterpret_cast<void**>(0xffffffff);
            *reinterpret_cast<signed char*>(esi2 + 5) = 10;
            ecx3 = g408be0;
            esi2 = esi2 + 8;
        } while (reinterpret_cast<unsigned char>(esi2) < reinterpret_cast<unsigned char>(ecx3 + 0x100));
    }
    GetStartupInfoA();
    if (!v4 || !v5) {
        addr_402ae9_6:
        ebp6 = GetStdHandle;
        ebx7 = 0;
    } else {
        ecx8 = v5->f0;
        edi9 = &v5->f4;
        v10 = ecx8;
        ebp11 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi9) + reinterpret_cast<uint32_t>(ecx8));
        if (reinterpret_cast<int32_t>(ecx8) >= reinterpret_cast<int32_t>(0x800)) {
            v10 = reinterpret_cast<int32_t*>(0x800);
        }
        ecx12 = g408ce0;
        if (reinterpret_cast<int32_t>(ecx12) >= reinterpret_cast<int32_t>(v10)) 
            goto addr_402a96_10; else 
            goto addr_402a2d_11;
    }
    while (1) {
        edx13 = g408be0;
        esi14 = reinterpret_cast<struct s2*>(edx13 + ebx7 * 8);
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edx13 + ebx7 * 8) == 0xffffffff)) {
            al15 = reinterpret_cast<unsigned char>(esi14->f4 | 0x80);
        } else {
            esi14->f4 = 0x81;
            if (ebx7) {
                eax16 = ebx7 - 1;
                eax17 = reinterpret_cast<uint32_t>(-eax16);
                eax18 = eax17 - (eax17 + reinterpret_cast<uint1_t>(eax17 < eax17 + reinterpret_cast<uint1_t>(!!eax16))) - 11;
            } else {
                eax18 = 0xfffffff6;
            }
            eax19 = reinterpret_cast<void**>(ebp6(eax18));
            if (eax19 == 0xffffffff) 
                goto addr_402b4f_18;
            eax20 = reinterpret_cast<uint32_t>(GetFileType(eax19, eax18));
            if (!eax20) 
                goto addr_402b4f_18; else 
                goto addr_402b30_20;
        }
        addr_402b5b_21:
        esi14->f4 = al15;
        goto addr_402b5e_22;
        addr_402b4f_18:
        al15 = reinterpret_cast<unsigned char>(esi14->f4 | 64);
        goto addr_402b5b_21;
        addr_402b30_20:
        eax21 = eax20 & 0xff;
        esi14->f0 = eax19;
        if (eax21 != 2) {
            if (eax21 != 3) {
                addr_402b5e_22:
                ++ebx7;
                if (ebx7 >= 3) 
                    break;
            } else {
                al15 = reinterpret_cast<unsigned char>(esi14->f4 | 8);
                goto addr_402b5b_21;
            }
        } else {
            al15 = reinterpret_cast<unsigned char>(esi14->f4 | 64);
            goto addr_402b5b_21;
        }
    }
    SetHandleCount();
    goto v22;
    addr_402a96_10:
    esi23 = reinterpret_cast<int32_t*>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v10) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(v10 == 0))) {
        do {
            if (*ebp11 != -1 && (*edi9 & 1 && (*edi9 & 8 || (v24 = *ebp11, eax25 = reinterpret_cast<int32_t>(GetFileType(v24)), !!eax25)))) {
                eax26 = reinterpret_cast<uint32_t>(esi23) & 31;
                ecx27 = *reinterpret_cast<int32_t**>((reinterpret_cast<int32_t>(esi23) >> 5) * 4 + 0x408be0);
                ecx27[eax26 * 2] = *ebp11;
                *reinterpret_cast<unsigned char*>(ecx27 + eax26 * 2 + 1) = *edi9;
            }
            esi23 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi23) + 1);
            ++edi9;
            ++ebp11;
        } while (reinterpret_cast<int32_t>(esi23) < reinterpret_cast<int32_t>(v10));
        goto addr_402ae9_6;
    }
    addr_402a2d_11:
    esi28 = reinterpret_cast<void***>(0x408be4);
    do {
        eax29 = fun_402fb0(0x100);
        if (!eax29) 
            break;
        ecx30 = g408ce0;
        *esi28 = eax29;
        g408ce0 = ecx30 + 8;
        if (reinterpret_cast<unsigned char>(eax29) < reinterpret_cast<unsigned char>(eax29 + 0x100)) {
            do {
                *reinterpret_cast<void***>(eax29 + 4) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(eax29) = reinterpret_cast<void**>(0xffffffff);
                *reinterpret_cast<signed char*>(eax29 + 5) = 10;
                eax29 = eax29 + 8;
            } while (reinterpret_cast<unsigned char>(eax29) < reinterpret_cast<unsigned char>(*esi28 + 0x100));
        }
        eax31 = g408ce0;
        esi28 = esi28 + 4;
    } while (reinterpret_cast<int32_t>(eax31) < reinterpret_cast<int32_t>(v10));
    goto addr_402a8a_34;
    ecx32 = g408ce0;
    v10 = ecx32;
    goto addr_402a96_10;
    addr_402a8a_34:
    goto addr_402a96_10;
}

int32_t fun_4026a0(int32_t a1);

int32_t fun_402970() {
    int32_t eax1;

    eax1 = fun_4026a0(0xfd);
    return eax1;
}

struct s3 {
    void** f0;
    signed char[15] pad16;
    uint32_t f16;
};

int32_t g408a70;

int32_t GetEnvironmentStrings = 0xa1fc;

struct s4 {
    void** f0;
    signed char f1;
};

int32_t GetEnvironmentStringsW = 0xa214;

int32_t FreeEnvironmentStringsA = 0xa1c8;

int32_t WideCharToMultiByte = 0xa22e;

int32_t FreeEnvironmentStringsW = 0xa1e2;

void fun_403590(struct s3* ecx, void** a2);

void** fun_402540(struct s3* ecx) {
    int32_t eax2;
    int32_t v3;
    int32_t ebx4;
    int32_t ebp5;
    int16_t* esi6;
    struct s4* ebx7;
    int32_t edi8;
    int16_t* eax9;
    struct s4* eax10;
    struct s4* eax11;
    struct s4* eax12;
    void* esi13;
    void** eax14;
    struct s4* esi15;
    void* eax16;
    void** edi17;
    uint32_t ecx18;
    uint32_t ecx19;
    int16_t* eax20;
    int16_t* eax21;
    int32_t ebp22;
    void* eax23;
    void** eax24;
    int32_t eax25;

    eax2 = g408a70;
    v3 = ebx4;
    ebp5 = GetEnvironmentStrings;
    esi6 = reinterpret_cast<int16_t*>(0);
    ebx7 = reinterpret_cast<struct s4*>(0);
    edi8 = GetEnvironmentStringsW;
    if (!eax2) {
        eax9 = reinterpret_cast<int16_t*>(edi8());
        esi6 = eax9;
        if (!esi6) {
            eax10 = reinterpret_cast<struct s4*>(ebp5());
            ebx7 = eax10;
            if (!ebx7) {
                return 0;
            } else {
                eax2 = 2;
            }
        } else {
            eax2 = 1;
        }
        g408a70 = eax2;
    }
    if (eax2 != 1) {
        if (eax2 == 2 && (ebx7 || (eax11 = reinterpret_cast<struct s4*>(ebp5()), ebx7 = eax11, !!ebx7))) {
            eax12 = ebx7;
            if (ebx7->f0) {
                addr_40263b_11:
                eax12 = reinterpret_cast<struct s4*>(&eax12->f1);
                if (eax12->f1) 
                    goto addr_40263b_11;
                eax12 = reinterpret_cast<struct s4*>(&eax12->f1);
                if (eax12->f1) 
                    goto addr_40263b_11;
            }
            esi13 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax12) - reinterpret_cast<uint32_t>(ebx7) + 1);
            eax14 = fun_402fb0(esi13);
            if (eax14) {
                esi15 = ebx7;
                eax16 = esi13;
                edi17 = eax14;
                ecx18 = reinterpret_cast<uint32_t>(esi13) >> 2;
                while (ecx18) {
                    --ecx18;
                    *reinterpret_cast<void***>(edi17) = esi15->f0;
                    edi17 = edi17 + 4;
                    esi15 = esi15 + 2;
                }
                ecx19 = reinterpret_cast<uint32_t>(eax16) & 3;
                while (ecx19) {
                    --ecx19;
                    *reinterpret_cast<void***>(edi17) = esi15->f0;
                    ++edi17;
                    esi15 = reinterpret_cast<struct s4*>(&esi15->f1);
                }
                FreeEnvironmentStringsA();
                goto v3;
            } else {
                FreeEnvironmentStringsA();
                goto v3;
            }
        }
    } else {
        if (esi6 || (eax20 = reinterpret_cast<int16_t*>(edi8()), esi6 = eax20, !!esi6)) {
            eax21 = esi6;
            if (*esi6) {
                addr_4025a3_24:
                ++eax21;
                if (*eax21) 
                    goto addr_4025a3_24;
                ++eax21;
                if (*eax21) 
                    goto addr_4025a3_24;
            }
            ebp22 = (reinterpret_cast<int32_t>(eax21) - reinterpret_cast<int32_t>(esi6) >> 1) + 1;
            eax23 = reinterpret_cast<void*>(WideCharToMultiByte());
            if (!eax23 || (eax24 = fun_402fb0(eax23), eax24 == 0)) {
                FreeEnvironmentStringsW();
                goto ebp22;
            } else {
                eax25 = reinterpret_cast<int32_t>(WideCharToMultiByte());
                if (!eax25) {
                    fun_403590(ecx, eax24);
                }
                FreeEnvironmentStringsW();
                goto ebp22;
            }
        }
    }
}

void fun_401f40(int32_t a1, int32_t a2, int32_t a3);

void fun_401f00(int32_t a1) {
    fun_401f40(a1, 0, 0);
    return;
}

int32_t g40606c = 1;

int32_t g408b98;

void fun_402d90() {
    int32_t eax1;
    int1_t zf2;
    int32_t eax3;

    eax1 = g408900;
    if (eax1 == 1 || !eax1 && (zf2 = g40606c == 1, zf2)) {
        fun_402dd0(0xfc);
        eax3 = g408b98;
        if (eax3) {
            eax3();
        }
        fun_402dd0(0xff);
    }
    return;
}

int32_t WriteFile = 0xa2de;

int32_t GetModuleFileNameA = 0xa1b2;

unsigned char* fun_403d90(unsigned char* a1, unsigned char* a2, uint32_t a3);

void fun_403d00(void* a1, int32_t a2, int32_t a3);

void fun_402dd0(uint32_t a1) {
    uint32_t ecx2;
    uint32_t* eax3;
    void* esp4;
    int32_t ebp5;
    int32_t eax6;
    int1_t zf7;
    void** eax8;
    int32_t* esi9;
    int32_t v10;
    int32_t* eax11;
    signed char* edx12;
    void* v13;
    signed char* edi14;
    uint32_t ecx15;
    int32_t eax16;
    void* esp17;
    uint32_t ecx18;
    unsigned char* ebx19;
    signed char v20;
    uint32_t ecx21;
    signed char v22;
    void* esp23;
    uint32_t ecx24;
    uint32_t ecx25;
    unsigned char* edi26;
    uint32_t ebx27;
    uint32_t ecx28;
    unsigned char v29;
    uint32_t ecx30;
    uint32_t ecx31;
    void* esp32;
    unsigned char* edi33;
    uint32_t ecx34;
    void* esp35;
    uint32_t ebx36;
    uint32_t ecx37;
    unsigned char v38;
    uint32_t ecx39;
    uint32_t ecx40;
    unsigned char* edi41;
    uint32_t ecx42;
    uint32_t ebx43;
    uint32_t ecx44;
    unsigned char v45;
    uint32_t ecx46;
    uint32_t ecx47;
    void* v48;
    int32_t v49;

    ecx2 = a1;
    eax3 = reinterpret_cast<uint32_t*>(0x406498);
    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x1a8 - 4 - 4 - 4 - 4);
    ebp5 = 0;
    do {
        if (ecx2 == *eax3) 
            break;
        eax3 = eax3 + 2;
        ++ebp5;
    } while (reinterpret_cast<uint32_t>(eax3) < 0x406528);
    if (ecx2 == *reinterpret_cast<uint32_t*>(ebp5 * 8 + 0x406498)) {
        eax6 = g408900;
        if (eax6 == 1 || !eax6 && (zf7 = g40606c == 1, zf7)) {
            eax8 = g408be0;
            if (!eax8 || (esi9 = *reinterpret_cast<int32_t**>(eax8 + 16), reinterpret_cast<int1_t>(esi9 == 0xffffffff))) {
                v10 = 0xf4;
                eax11 = reinterpret_cast<int32_t*>(GetStdHandle(0xf4));
                esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 - 4 + 4);
                esi9 = eax11;
            }
            edx12 = *reinterpret_cast<signed char**>(ebp5 * 8 + 0x40649c);
            v10 = 0;
            v13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) + 16);
            edi14 = edx12;
            ecx15 = 0xffffffff;
            do {
                if (!ecx15) 
                    break;
                --ecx15;
                ++edi14;
                esi9 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi9) + 1);
            } while (*edi14);
            WriteFile(esi9, edx12, reinterpret_cast<int32_t>(~ecx15) - 1, v13, v10);
        } else {
            if (ecx2 != 0xfc) {
                eax16 = reinterpret_cast<int32_t>(GetModuleFileNameA());
                esp17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 - 4 - 4 - 4 + 4);
                if (!eax16) {
                    ecx2 = 5;
                    while (ecx2) {
                        --ecx2;
                    }
                }
                ecx18 = 0xffffffff;
                ebx19 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp17) + 0xb4);
                do {
                    if (!ecx18) 
                        break;
                    --ecx18;
                } while (v20);
                if (~ecx18 > 60) {
                    ecx21 = 0xffffffff;
                    do {
                        if (!ecx21) 
                            break;
                        --ecx21;
                    } while (v22);
                    esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp17) - 4);
                    ebx19 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(~ecx21) - 1 + (reinterpret_cast<int32_t>(esp23) + 0xb8 - 59));
                    fun_403d90(ebx19, 0x405358, 3);
                    esp17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 + 4 + 12);
                }
                ecx24 = 6;
                while (ecx24) {
                    --ecx24;
                }
                ecx25 = 0xffffffff;
                edi26 = ebx19;
                do {
                    if (!ecx25) 
                        break;
                    --ecx25;
                    ++edi26;
                } while (*edi26);
                ebx27 = ~ecx25;
                ecx28 = 0xffffffff;
                do {
                    if (!ecx28) 
                        break;
                    --ecx28;
                } while (v29);
                ecx30 = ebx27 >> 2;
                while (ecx30) {
                    --ecx30;
                }
                ecx31 = ebx27 & 3;
                esp32 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp17) - 4);
                while (ecx31) {
                    --ecx31;
                }
                edi33 = reinterpret_cast<unsigned char*>(0x405338);
                ecx34 = 0xffffffff;
                do {
                    if (!ecx34) 
                        break;
                    --ecx34;
                    ++edi33;
                } while (*edi33);
                esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp32) - 4);
                ebx36 = ~ecx34;
                ecx37 = 0xffffffff;
                do {
                    if (!ecx37) 
                        break;
                    --ecx37;
                } while (v38);
                ecx39 = ebx36 >> 2;
                while (ecx39) {
                    --ecx39;
                }
                ecx40 = ebx36 & 3;
                while (ecx40) {
                    --ecx40;
                }
                edi41 = *reinterpret_cast<unsigned char**>(ebp5 * 8 + 0x40649c);
                ecx42 = 0xffffffff;
                do {
                    if (!ecx42) 
                        break;
                    --ecx42;
                    ++edi41;
                } while (*edi41);
                ebx43 = ~ecx42;
                ecx44 = 0xffffffff;
                do {
                    if (!ecx44) 
                        break;
                    --ecx44;
                } while (v45);
                ecx46 = ebx43 >> 2;
                while (ecx46) {
                    --ecx46;
                }
                ecx47 = ebx43 & 3;
                v48 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp35) + 28);
                while (ecx47) {
                    --ecx47;
                }
                fun_403d00(v48, "Microsoft Visual C++ Runtime Library", 0x12010);
                goto v49;
            }
        }
    }
    return;
}

int32_t g408bcc;

void** fun_402fd0(void* a1, int32_t a2);

void** fun_402fb0(void* a1) {
    int32_t eax2;
    void** eax3;

    eax2 = g408bcc;
    eax3 = fun_402fd0(a1, eax2);
    return eax3;
}

void* fun_403f10(int32_t* a1, void** a2, void* a3);

void** fun_4030e0(void** a1) {
    void** ebx2;
    uint32_t ecx3;
    void** eax4;
    void* edi5;
    int32_t* edx6;
    void* eax7;
    void** eax8;
    void** eax9;

    ebx2 = reinterpret_cast<void**>(0);
    ecx3 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) & 3;
    if (*reinterpret_cast<signed char*>(&ecx3) == 2 && (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) & 0x108 && (eax4 = *reinterpret_cast<void***>(a1 + 8), edi5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)) - reinterpret_cast<unsigned char>(eax4)), !(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edi5) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edi5 == 0))))) {
        edx6 = *reinterpret_cast<int32_t**>(a1 + 16);
        eax7 = fun_403f10(edx6, eax4, edi5);
        eax8 = *reinterpret_cast<void***>(a1 + 12);
        if (eax7 != edi5) {
            *reinterpret_cast<unsigned char*>(&eax8) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax8) | 32);
            ebx2 = reinterpret_cast<void**>(0xffffffff);
            *reinterpret_cast<void***>(a1 + 12) = eax8;
        } else {
            if (*reinterpret_cast<unsigned char*>(&eax8) & 0x80) {
                *reinterpret_cast<unsigned char*>(&eax8) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax8) & 0xfd);
                *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(a1 + 12) = eax8;
                *reinterpret_cast<void***>(a1) = *reinterpret_cast<void***>(a1 + 8);
                return 0;
            }
        }
    }
    eax9 = *reinterpret_cast<void***>(a1 + 8);
    *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(a1) = eax9;
    return ebx2;
}

struct s5 {
    signed char f0;
    signed char[3] pad4;
    struct s5* f4;
};

struct s5* fun_401d90(struct s5* a1) {
    signed char ecx2;

    ecx2 = reinterpret_cast<signed char>(a1->f0 + 4);
    a1->f0 = ecx2;
    return *reinterpret_cast<struct s5**>(ecx2 - 4);
}

struct s6 {
    void** f0;
    signed char[3] pad4;
    void* f4;
    void** f8;
    signed char[3] pad12;
    uint32_t f12;
    int32_t* f16;
    void** f20;
    signed char[3] pad24;
    void* f24;
};

uint32_t fun_403350(uint32_t a1, struct s6* a2);

void fun_401cc0(uint32_t a1, struct s6* a2, uint32_t* a3) {
    void* eax4;
    uint32_t eax5;
    uint32_t eax6;

    eax4 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a2->f4) - 1);
    a2->f4 = eax4;
    if (reinterpret_cast<int32_t>(eax4) < reinterpret_cast<int32_t>(0)) {
        eax5 = fun_403350(a1, a2);
    } else {
        eax6 = a1;
        *reinterpret_cast<void***>(a2->f0) = *reinterpret_cast<void***>(&eax6);
        eax5 = eax6 & 0xff;
        a2->f0 = a2->f0 + 1;
    }
    if (eax5 != 0xffffffff) {
        *a3 = *a3 + 1;
        return;
    } else {
        *a3 = eax5;
        return;
    }
}

int32_t fun_401dd0(int32_t* a1) {
    int32_t ecx2;
    int32_t eax3;

    ecx2 = *a1 + 4;
    *a1 = ecx2;
    eax3 = ecx2;
    *reinterpret_cast<int16_t*>(&eax3) = *reinterpret_cast<int16_t*>(eax3 - 4);
    return eax3;
}

int32_t g408ba8;

int32_t g408bb8;

int32_t** g408914 = reinterpret_cast<int32_t**>(0);

struct s5* fun_4031e0(struct s5* a1, uint16_t a2) {
    int32_t ecx3;
    int32_t ecx4;
    struct s5* eax5;
    uint16_t cx6;

    if (!a1) {
        return a1;
    }
    ecx3 = g408ba8;
    if (ecx3) {
        ecx4 = g408bb8;
        eax5 = reinterpret_cast<struct s5*>(WideCharToMultiByte(ecx4));
        if (!eax5 || !0) {
            g408914 = reinterpret_cast<int32_t**>(42);
            eax5 = reinterpret_cast<struct s5*>(0xffffffff);
            goto addr_403250_6;
        } else {
            addr_403250_6:
            return eax5;
        }
    } else {
        cx6 = a2;
        if (cx6 <= 0xff) {
            a1->f0 = *reinterpret_cast<signed char*>(&cx6);
            return 1;
        }
    }
}

struct s5* fun_401db0(struct s5* a1) {
    signed char ecx2;

    ecx2 = reinterpret_cast<signed char>(a1->f0 + 8);
    a1->f0 = ecx2;
    return *reinterpret_cast<struct s5**>(ecx2 - 8);
}

uint32_t fun_4032d0(struct s5* a1, struct s5* a2, uint32_t a3, struct s5* a4) {
    struct s5* ecx5;
    uint32_t ebx6;
    struct s5* eax7;
    uint32_t eax8;
    struct s5* eax9;
    struct s5* tmp32_10;
    uint32_t eax11;

    if (a4) {
        ecx5 = a4;
        ebx6 = a3;
        eax7 = a1;
        do {
            __asm__("rcr ebx, 1");
            __asm__("rcr eax, 1");
            ecx5 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(ecx5) >> 1);
        } while (ecx5);
        eax8 = reinterpret_cast<uint32_t>(eax7) / ebx6;
        eax9 = reinterpret_cast<struct s5*>(eax8 * a3);
        tmp32_10 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(__intrinsic()) + eax8 * reinterpret_cast<uint32_t>(a4));
        if (reinterpret_cast<uint32_t>(tmp32_10) < reinterpret_cast<uint32_t>(__intrinsic())) 
            goto addr_40332a_5;
        if (reinterpret_cast<uint32_t>(tmp32_10) > reinterpret_cast<uint32_t>(a2)) 
            goto addr_40332a_5;
        if (reinterpret_cast<uint32_t>(tmp32_10) < reinterpret_cast<uint32_t>(a2)) 
            goto addr_403332_8;
        if (reinterpret_cast<uint32_t>(eax9) <= reinterpret_cast<uint32_t>(a1)) 
            goto addr_403332_8;
    } else {
        eax11 = reinterpret_cast<uint32_t>(a1) % a3;
        goto addr_403341_11;
    }
    addr_40332a_5:
    eax9 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(eax9) - a3);
    addr_403332_8:
    eax11 = -(reinterpret_cast<uint32_t>(eax9) - reinterpret_cast<uint32_t>(a1));
    addr_403341_11:
    return eax11;
}

struct s5* fun_403260(struct s5* a1, struct s5* a2, uint32_t a3, struct s5* a4) {
    struct s5* ecx5;
    uint32_t ebx6;
    struct s5* eax7;
    struct s5* eax8;
    struct s5* esi9;
    struct s5* tmp32_10;
    struct s5* eax11;

    if (a4) {
        ecx5 = a4;
        ebx6 = a3;
        eax7 = a1;
        do {
            __asm__("rcr ebx, 1");
            __asm__("rcr eax, 1");
            ecx5 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(ecx5) >> 1);
        } while (ecx5);
        eax8 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(eax7) / ebx6);
        esi9 = eax8;
        tmp32_10 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(__intrinsic()) + reinterpret_cast<uint32_t>(eax8) * reinterpret_cast<uint32_t>(a4));
        if (reinterpret_cast<uint32_t>(tmp32_10) < reinterpret_cast<uint32_t>(__intrinsic())) 
            goto addr_4032be_5;
        if (reinterpret_cast<uint32_t>(tmp32_10) > reinterpret_cast<uint32_t>(a2)) 
            goto addr_4032be_5;
        if (reinterpret_cast<uint32_t>(tmp32_10) < reinterpret_cast<uint32_t>(a2)) 
            goto addr_4032bf_8;
        if (a3 * reinterpret_cast<uint32_t>(esi9) <= reinterpret_cast<uint32_t>(a1)) 
            goto addr_4032bf_8;
    } else {
        eax11 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(a1) / a3);
        goto addr_4032c3_11;
    }
    addr_4032be_5:
    esi9 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esi9) - 1);
    addr_4032bf_8:
    eax11 = esi9;
    addr_4032c3_11:
    return eax11;
}

void fun_401d10(uint32_t a1, void* a2, struct s6* a3, uint32_t* a4) {
    uint32_t ebp5;
    uint32_t* esi6;
    struct s6* edi7;
    uint32_t ebx8;
    uint32_t ecx9;

    ebp5 = reinterpret_cast<uint32_t>(a2) - 1;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(a2) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(a2 == 0))) {
        esi6 = a4;
        edi7 = a3;
        ebx8 = a1;
        do {
            fun_401cc0(ebx8, edi7, esi6);
            if (*esi6 == 0xffffffff) 
                break;
            ecx9 = ebp5;
            --ebp5;
        } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ecx9) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ecx9 == 0)));
    }
    return;
}

void fun_401d50(struct s5* a1, struct s5* a2, struct s6* a3, uint32_t* a4) {
    uint32_t ebp5;
    uint32_t* edi6;
    struct s6* ebx7;
    struct s5* esi8;
    uint32_t eax9;
    uint32_t ecx10;

    ebp5 = reinterpret_cast<uint32_t>(a2) - 1;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(a2) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(a2 == 0))) {
        edi6 = a4;
        ebx7 = a3;
        esi8 = a1;
        do {
            eax9 = reinterpret_cast<uint32_t>(static_cast<int32_t>(esi8->f0));
            esi8 = reinterpret_cast<struct s5*>(&esi8->pad4);
            fun_401cc0(eax9, ebx7, edi6);
            if (*edi6 == 0xffffffff) 
                break;
            ecx10 = ebp5;
            --ebp5;
        } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ecx10) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ecx10 == 0)));
    }
    return;
}

int32_t HeapAlloc = 0xa2ea;

void* g408774 = reinterpret_cast<void*>(0x1e0);

struct s3* fun_403940(void* ecx, void* a2);

void* g408bd4;

struct s3* fun_403e90(void* a1);

struct s3* fun_403480(uint32_t a1, int32_t a2) {
    void* esi3;
    int32_t ebx4;
    struct s3* edx5;
    int1_t below_or_equal6;
    void* ecx7;
    struct s3* eax8;
    struct s3* eax9;
    void* ebp10;
    struct s3* edi11;
    uint32_t ecx12;
    uint32_t ecx13;
    int32_t eax14;
    struct s3* eax15;

    esi3 = reinterpret_cast<void*>(a2 * a1);
    if (reinterpret_cast<uint32_t>(esi3) <= 0xffffffe0) {
        if (!esi3) {
            esi3 = reinterpret_cast<void*>(16);
        } else {
            esi3 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi3) + 15 & 0xfffffff0);
        }
    }
    ebx4 = HeapAlloc;
    do {
        edx5 = reinterpret_cast<struct s3*>(0);
        if (reinterpret_cast<uint32_t>(esi3) <= 0xffffffe0) {
            below_or_equal6 = reinterpret_cast<uint32_t>(esi3) <= reinterpret_cast<uint32_t>(g408774);
            if (!below_or_equal6) {
                addr_4034e0_8:
                if (edx5) 
                    break; else 
                    goto addr_4034e4_9;
            } else {
                eax8 = fun_403940(ecx7, reinterpret_cast<uint32_t>(esi3) >> 4);
                edx5 = eax8;
                if (!edx5) {
                    addr_4034e4_9:
                    ecx7 = g408bd4;
                    eax9 = reinterpret_cast<struct s3*>(ebx4(ecx7, 8, esi3));
                    edx5 = eax9;
                } else {
                    ebp10 = esi3;
                    edi11 = edx5;
                    ecx12 = reinterpret_cast<uint32_t>(esi3) >> 2;
                    while (ecx12) {
                        --ecx12;
                        edi11->f0 = reinterpret_cast<void**>(0);
                        edi11 = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(edi11) + 4);
                        esi3 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi3) + 4);
                    }
                    ecx13 = reinterpret_cast<uint32_t>(ebp10) & 3;
                    while (ecx13) {
                        --ecx13;
                        edi11->f0 = reinterpret_cast<void**>(0);
                        edi11 = reinterpret_cast<struct s3*>(&edi11->pad16);
                        esi3 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi3) + 1);
                    }
                    goto addr_4034e0_8;
                }
            }
        }
        if (edx5) 
            break;
        eax14 = g408bcc;
        if (!eax14) 
            break;
        eax15 = fun_403e90(esi3);
    } while (eax15);
    goto addr_40350c_20;
    return edx5;
    addr_40350c_20:
    return eax15;
}

void fun_401ff0(int32_t* a1, int32_t* a2) {
    int32_t* esi3;
    int32_t* edi4;
    int32_t eax5;

    esi3 = a1;
    edi4 = a2;
    if (reinterpret_cast<uint32_t>(esi3) < reinterpret_cast<uint32_t>(edi4)) {
        do {
            eax5 = *esi3;
            if (eax5) {
                eax5();
            }
            ++esi3;
        } while (reinterpret_cast<uint32_t>(esi3) < reinterpret_cast<uint32_t>(edi4));
    }
    return;
}

struct s7 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

struct s7* fun_402150(int32_t a1);

int32_t UnhandledExceptionFilter = 0xa196;

int32_t** g408960 = reinterpret_cast<int32_t**>(0);

int32_t g406370 = 3;

int32_t g406374 = 7;

int32_t g40637c = 0x8c;

int32_t fun_402010(int32_t a1, int32_t** a2) {
    struct s7* eax3;
    int32_t ebx4;
    int32_t ebx5;
    int32_t** ebp6;
    int32_t v7;
    int32_t esi8;
    int32_t edx9;
    int32_t edx10;
    int32_t edx11;
    int32_t* ecx12;
    int32_t ecx13;
    int32_t esi14;

    eax3 = fun_402150(a1);
    if (!eax3 || (ebx4 = eax3->f8, ebx4 == 0)) {
        UnhandledExceptionFilter();
        goto ebx5;
    }
    if (ebx4 == 5) {
        eax3->f8 = 0;
        return 1;
    }
    if (ebx4 == 1) {
        return -1;
    }
    ebp6 = g408960;
    g408960 = a2;
    if (eax3->f4 != 8) {
        v7 = eax3->f4;
        eax3->f8 = 0;
        ebx4(v7);
        g408960 = ebp6;
        return -1;
    }
    esi8 = g406370;
    edx9 = g406374;
    edx10 = edx9 + esi8;
    if (esi8 < edx10) {
        edx11 = edx10 - esi8;
        ecx12 = reinterpret_cast<int32_t*>((esi8 + esi8 * 2) * 4 + 0x406300);
        do {
            *ecx12 = 0;
            ecx12 = ecx12 + 3;
            --edx11;
        } while (edx11);
    }
    ecx13 = g40637c;
    esi14 = ecx13;
    if (eax3->f0 == 0xc000008e) 
        goto addr_4020ab_13;
    if (eax3->f0 != 0xc0000090) {
        if (eax3->f0 != 0xc0000091) {
            if (eax3->f0 != 0xc0000093) {
                if (eax3->f0 != 0xc000008d) {
                    if (eax3->f0 != 0xc000008f) {
                        if (eax3->f0 != 0xc0000092) {
                            addr_40210a_20:
                            ebx4(8, ecx13);
                            g40637c = esi14;
                            g408960 = ebp6;
                            return -1;
                        } else {
                            ecx13 = 0x8a;
                        }
                    } else {
                        ecx13 = 0x86;
                    }
                } else {
                    ecx13 = 0x82;
                }
            } else {
                ecx13 = 0x85;
            }
        } else {
            ecx13 = 0x84;
        }
    } else {
        ecx13 = 0x81;
    }
    addr_402104_27:
    g40637c = ecx13;
    goto addr_40210a_20;
    addr_4020ab_13:
    ecx13 = 0x83;
    goto addr_402104_27;
}

struct s8 {
    struct s8* f0;
    signed char[12] pad16;
    void** f16;
    signed char[3] pad20;
    void** f20;
};

signed char* fun_403880(void** a1, struct s8** a2, uint32_t* a3);

int32_t HeapFree = 0xa2f6;

void fun_4038e0(struct s3* a1, void** a2, signed char* a3);

void fun_403590(struct s3* ecx, void** a2) {
    void* esp3;
    signed char* eax4;
    void* ecx5;

    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4);
    if (a2) {
        eax4 = fun_403880(a2, reinterpret_cast<int32_t>(esp3) + 4, reinterpret_cast<int32_t>(esp3) + 12);
        if (!eax4) {
            ecx5 = g408bd4;
            HeapFree(ecx5, 0, a2);
        } else {
            fun_4038e0(ecx, a2, eax4);
            return;
        }
    }
    return;
}

struct s9 {
    void** f0;
    signed char f1;
};

void fun_402330(struct s9* a1, void** a2, void** a3, int32_t* a4, int32_t* a5) {
    void** ebp6;
    void** esi7;
    int32_t* edi8;
    struct s9* eax9;
    void** cl10;
    uint32_t ecx11;
    int32_t edx12;
    int32_t v13;
    uint32_t ecx14;
    int32_t ebp15;
    uint32_t ecx16;

    ebp6 = a2;
    esi7 = a3;
    edi8 = a5;
    *edi8 = 0;
    *a4 = 1;
    eax9 = a1;
    if (ebp6) {
        *reinterpret_cast<void***>(ebp6) = esi7;
        ebp6 = ebp6 + 4;
        a2 = ebp6;
    }
    if (!reinterpret_cast<int1_t>(eax9->f0 == 34)) {
        do {
            *edi8 = *edi8 + 1;
            if (esi7) {
                *reinterpret_cast<void***>(esi7) = eax9->f0;
                ++esi7;
            }
            cl10 = eax9->f0;
            eax9 = reinterpret_cast<struct s9*>(&eax9->f1);
            *reinterpret_cast<void***>(&a5) = cl10;
            if (*reinterpret_cast<unsigned char*>((reinterpret_cast<uint32_t>(a5) & 0xff) + 0x408a79) & 4) {
                *edi8 = *edi8 + 1;
                if (esi7) {
                    *reinterpret_cast<void***>(esi7) = eax9->f0;
                    ++esi7;
                }
                eax9 = reinterpret_cast<struct s9*>(&eax9->f1);
            }
            if (cl10 == 32) 
                break;
            if (!cl10) 
                goto addr_402409_12;
        } while (!reinterpret_cast<int1_t>(cl10 == 9));
        if (cl10) {
            if (esi7) {
                *reinterpret_cast<signed char*>(esi7 + 0xffffffff) = 0;
            }
        } else {
            addr_402409_12:
            eax9 = reinterpret_cast<struct s9*>(reinterpret_cast<int32_t>(eax9) - 1);
        }
    } else {
        *reinterpret_cast<signed char*>(&ecx11) = eax9->f1;
        eax9 = reinterpret_cast<struct s9*>(&eax9->f1);
        if (*reinterpret_cast<signed char*>(&ecx11) != 34) {
            do {
                if (!*reinterpret_cast<signed char*>(&ecx11)) 
                    break;
                ecx11 = ecx11 & 0xff;
                if (*reinterpret_cast<unsigned char*>(ecx11 + 0x408a79) & 4 && (*edi8 = *edi8 + 1, !!esi7)) {
                    *reinterpret_cast<void***>(esi7) = eax9->f0;
                    ++esi7;
                    eax9 = reinterpret_cast<struct s9*>(&eax9->f1);
                }
                *edi8 = *edi8 + 1;
                if (esi7) {
                    *reinterpret_cast<void***>(esi7) = eax9->f0;
                    ++esi7;
                }
                *reinterpret_cast<signed char*>(&ecx11) = eax9->f1;
                eax9 = reinterpret_cast<struct s9*>(&eax9->f1);
            } while (*reinterpret_cast<signed char*>(&ecx11) != 34);
        }
        *edi8 = *edi8 + 1;
        if (esi7) {
            *reinterpret_cast<void***>(esi7) = reinterpret_cast<void**>(0);
            ++esi7;
        }
        if (reinterpret_cast<int1_t>(eax9->f0 == 34)) {
            eax9 = reinterpret_cast<struct s9*>(&eax9->f1);
        }
    }
    edx12 = 0;
    v13 = 0;
    while (eax9->f0) {
        while (eax9->f0 == 32 || reinterpret_cast<int1_t>(eax9->f0 == 9)) {
            eax9 = reinterpret_cast<struct s9*>(&eax9->f1);
        }
        if (!eax9->f0) 
            break;
        if (ebp6) {
            *reinterpret_cast<void***>(ebp6) = esi7;
            a2 = ebp6 + 4;
        }
        *a4 = *a4 + 1;
        while (1) {
            ecx14 = 0;
            ebp15 = 1;
            if (reinterpret_cast<int1_t>(eax9->f0 == 92)) {
                do {
                    eax9 = reinterpret_cast<struct s9*>(&eax9->f1);
                    ++ecx14;
                } while (eax9->f1 == 92);
            }
            if (reinterpret_cast<int1_t>(eax9->f0 == 34)) {
                if (!(*reinterpret_cast<unsigned char*>(&ecx14) & 1)) {
                    if (!edx12 || eax9->f1 != 34) {
                        ebp15 = 0;
                    } else {
                        eax9 = reinterpret_cast<struct s9*>(&eax9->f1);
                    }
                    edx12 = 0;
                    *reinterpret_cast<unsigned char*>(&edx12) = reinterpret_cast<uint1_t>(v13 == 0);
                    v13 = edx12;
                }
                ecx14 = ecx14 >> 1;
            }
            ecx16 = ecx14 - 1;
            if (ecx14) {
                ++ecx16;
                do {
                    if (esi7) {
                        *reinterpret_cast<void***>(esi7) = reinterpret_cast<void**>(92);
                        ++esi7;
                    }
                    --ecx16;
                    *edi8 = *edi8 + 1;
                } while (ecx16);
            }
            *reinterpret_cast<void***>(&ecx16) = eax9->f0;
            if (!*reinterpret_cast<void***>(&ecx16)) 
                break;
            if (edx12) 
                goto addr_4024bc_52;
            if (*reinterpret_cast<void***>(&ecx16) == 32) 
                break;
            if (*reinterpret_cast<void***>(&ecx16) == 9) 
                break;
            addr_4024bc_52:
            if (ebp15) {
                if (!esi7) {
                    if (*reinterpret_cast<unsigned char*>((ecx16 & 0xff) + 0x408a79) & 4) {
                        eax9 = reinterpret_cast<struct s9*>(&eax9->f1);
                        *edi8 = *edi8 + 1;
                    }
                    *edi8 = *edi8 + 1;
                } else {
                    if (*reinterpret_cast<unsigned char*>((ecx16 & 0xff) + 0x408a79) & 4) {
                        *reinterpret_cast<void***>(esi7) = *reinterpret_cast<void***>(&ecx16);
                        ++esi7;
                        eax9 = reinterpret_cast<struct s9*>(&eax9->f1);
                        *edi8 = *edi8 + 1;
                    }
                    *reinterpret_cast<void***>(esi7) = eax9->f0;
                    ++esi7;
                    *edi8 = *edi8 + 1;
                    eax9 = reinterpret_cast<struct s9*>(&eax9->f1);
                    continue;
                }
            }
            eax9 = reinterpret_cast<struct s9*>(&eax9->f1);
        }
        if (esi7) {
            *reinterpret_cast<void***>(esi7) = reinterpret_cast<void**>(0);
            ++esi7;
        }
        ebp6 = a2;
        *edi8 = *edi8 + 1;
    }
    if (ebp6) {
        *reinterpret_cast<void***>(ebp6) = reinterpret_cast<void**>(0);
    }
    *a4 = *a4 + 1;
    return;
}

int32_t g408b7c;

int32_t g408b80;

int32_t g408b88;

int32_t g408b8c;

int32_t g408b90;

void fun_402940() {
    int32_t ecx1;
    signed char* edi2;

    ecx1 = 64;
    edi2 = reinterpret_cast<signed char*>(0x408a78);
    while (ecx1) {
        --ecx1;
        *edi2 = reinterpret_cast<signed char>(0);
        edi2 = edi2 + 4;
    }
    *edi2 = 0;
    g408b7c = 0;
    g408b80 = 0;
    g408b88 = 0;
    g408b8c = 0;
    g408b90 = 0;
    return;
}

int32_t fun_4028e0(int32_t a1) {
    uint32_t eax2;
    int32_t ecx3;

    eax2 = reinterpret_cast<uint32_t>(a1 - 0x3a4);
    if (eax2 > 18) 
        goto addr_402915_2;
    ecx3 = 0;
    *reinterpret_cast<signed char*>(&ecx3) = *reinterpret_cast<signed char*>(eax2 + 0x40292c);
    switch (ecx3) {
    case 0:
        return 0x411;
    case 1:
        return 0x804;
    case 2:
        return 0x412;
    case 3:
        return 0x404;
        addr_402915_2:
    case 4:
        return 0;
    }
}

struct s10 {
    signed char[4] pad4;
    int32_t f4;
    int32_t* f8;
    int32_t f12;
};

struct s12 {
    signed char[12] pad12;
    int32_t f12;
};

struct s11 {
    struct s11* f0;
    int32_t f4;
    int32_t f8;
    struct s12* f12;
};

struct s11* g0;

void fun_402c96(int32_t ecx, int32_t a2);

void fun_402c02(struct s10* a1, int32_t a2) {
    struct s11* v3;
    int32_t* ebx4;
    int32_t esi5;
    int32_t ecx6;

    v3 = g0;
    g0 = reinterpret_cast<struct s11*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 4);
    while ((ebx4 = a1->f8, a1->f12 != -1) && a1->f12 != a2) {
        esi5 = a1->f12 + a1->f12 * 2;
        ecx6 = ebx4[esi5];
        a1->f12 = ecx6;
        if (!(ebx4 + esi5)[1]) {
            fun_402c96(ecx6, 0x101);
            (ebx4 + esi5)[2]();
        }
    }
    g0 = v3;
    return;
}

int32_t g40648c = 0;

struct s13 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t g406488 = 0;

int32_t g406490 = 0;

void fun_402c96(int32_t ecx, int32_t a2) {
    struct s13* ebp3;
    int32_t eax4;
    int32_t ebp5;

    g40648c = ebp3->f8;
    g406488 = eax4;
    g406490 = ebp5;
    return;
}

void fun_404560();

void fun_402bc0(struct s10* a1) {
    fun_404560();
    goto a1->f4;
}

unsigned char* fun_403d90(unsigned char* a1, unsigned char* a2, uint32_t a3) {
    uint32_t ecx4;
    uint32_t ebx5;
    unsigned char* esi6;
    unsigned char* edi7;
    uint32_t ecx8;
    unsigned char eax9;
    uint32_t ecx10;
    unsigned char edx11;

    ecx4 = a3;
    if (!ecx4) {
        addr_403e13_2:
        return a1;
    } else {
        ebx5 = ecx4;
        esi6 = a2;
        edi7 = a1;
        if (!(reinterpret_cast<uint32_t>(esi6) & 3)) {
            ecx8 = ecx4 >> 2;
            if (!ecx8) {
                goto addr_403dd5_6;
            }
        }
        do {
            eax9 = *esi6;
            ++esi6;
            *edi7 = eax9;
            ++edi7;
            --ecx4;
            if (!ecx4) 
                goto addr_403de2_8;
            if (!eax9) 
                break;
        } while (reinterpret_cast<uint32_t>(esi6) & 3);
        goto addr_403dc9_11;
    }
    if (reinterpret_cast<uint32_t>(edi7) & 3) {
        do {
            *edi7 = eax9;
            ++edi7;
            --ecx4;
            if (!ecx4) 
                goto addr_403e86_14;
        } while (reinterpret_cast<uint32_t>(edi7) & 3);
    }
    ebx5 = ecx4;
    ecx10 = ecx4 >> 2;
    if (ecx10) 
        goto addr_403e77_17; else 
        goto addr_403e0b_18;
    addr_403dc9_11:
    ebx5 = ecx4;
    ecx8 = ecx4 >> 2;
    if (ecx8) {
        do {
            edx11 = *esi6;
            esi6 = esi6 + 4;
            if ((*esi6 ^ 0xffffffff ^ 0x7efefeff + *esi6) & 0x81010100) {
                if (!*reinterpret_cast<signed char*>(&edx11)) 
                    break;
                if (!*reinterpret_cast<signed char*>(&edx11 + 1)) 
                    goto addr_403e61_22;
                if (!(edx11 & 0xff0000)) 
                    goto addr_403e57_24;
                if (!(edx11 & 0xff000000)) 
                    goto addr_403e53_26;
            }
            *edi7 = edx11;
            edi7 = edi7 + 4;
            --ecx8;
        } while (ecx8);
        goto addr_403dd0_28;
    } else {
        addr_403dd0_28:
        ebx5 = ebx5 & 3;
        if (!ebx5) {
            addr_403de2_8:
            return a1;
        } else {
            do {
                addr_403dd5_6:
                eax9 = *esi6;
                ++esi6;
                *edi7 = eax9;
                ++edi7;
                if (!eax9) 
                    goto addr_403e0e_29;
                --ebx5;
            } while (ebx5);
            goto addr_403de2_8;
        }
    }
    *edi7 = reinterpret_cast<unsigned char>(0);
    addr_403e6f_32:
    edi7 = edi7 + 4;
    eax9 = reinterpret_cast<unsigned char>(0);
    ecx10 = ecx8 - 1;
    if (!ecx10) {
        addr_403e81_33:
        ebx5 = ebx5 & 3;
        if (ebx5) {
            do {
                addr_403e0b_18:
                *edi7 = eax9;
                ++edi7;
                addr_403e0e_29:
                --ebx5;
            } while (ebx5);
        } else {
            addr_403e86_14:
            return a1;
        }
    } else {
        addr_403e77_17:
        eax9 = reinterpret_cast<unsigned char>(0);
        goto addr_403e79_34;
    }
    goto addr_403e13_2;
    do {
        addr_403e79_34:
        *edi7 = reinterpret_cast<unsigned char>(0);
        edi7 = edi7 + 4;
        --ecx10;
    } while (ecx10);
    goto addr_403e81_33;
    addr_403e61_22:
    *edi7 = reinterpret_cast<unsigned char>(edx11 & 0xff);
    goto addr_403e6f_32;
    addr_403e57_24:
    *edi7 = reinterpret_cast<unsigned char>(edx11 & 0xffff);
    goto addr_403e6f_32;
    addr_403e53_26:
    *edi7 = edx11;
    goto addr_403e6f_32;
}

int32_t g408bc0;

int32_t LoadLibraryA = 0xa324;

int32_t GetProcAddress = 0xa312;

int32_t g408bc4;

int32_t g408bc8;

void fun_403d00(void* a1, int32_t a2, int32_t a3) {
    int32_t eax4;
    int32_t ebx5;
    int32_t eax6;
    int32_t edi7;
    int32_t eax8;
    int32_t ebx9;
    int32_t eax10;
    int32_t eax11;
    int32_t eax12;
    int32_t eax13;
    int32_t eax14;

    eax4 = g408bc0;
    ebx5 = 0;
    if (!eax4) {
        eax6 = reinterpret_cast<int32_t>(LoadLibraryA());
        if (!eax6 || (edi7 = GetProcAddress, eax8 = reinterpret_cast<int32_t>(edi7(eax6, "MessageBoxA")), g408bc0 = eax8, eax8 == 0)) {
            goto ebx9;
        } else {
            eax10 = reinterpret_cast<int32_t>(edi7(eax6, "GetActiveWindow", eax6, "MessageBoxA"));
            g408bc4 = eax10;
            eax11 = reinterpret_cast<int32_t>(edi7(eax6, "GetLastActivePopup", eax6, "GetActiveWindow", eax6, "MessageBoxA"));
            g408bc8 = eax11;
        }
    }
    eax12 = g408bc4;
    if (eax12) {
        eax13 = reinterpret_cast<int32_t>(eax12());
        ebx5 = eax13;
    }
    if (ebx5 && (eax14 = g408bc8, !!eax14)) {
        eax14(ebx5);
    }
    g408bc0();
    goto a3;
}

void** fun_403020(void* a1) {
    void* eax2;
    void* esi3;
    void* ecx4;
    struct s3* eax5;
    void* edx6;

    eax2 = g408774;
    esi3 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a1) + 15 & 0xfffffff0);
    if (reinterpret_cast<uint32_t>(esi3) > reinterpret_cast<uint32_t>(eax2) || (ecx4 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi3) >> 4), eax5 = fun_403940(ecx4, ecx4), !eax5)) {
        edx6 = g408bd4;
        HeapAlloc(edx6, 0, esi3);
    }
    goto __return_address();
}

int32_t g408bd0;

struct s3* fun_403e90(void* a1) {
    int32_t eax2;
    int32_t eax3;

    eax2 = g408bd0;
    if (!eax2 || (eax3 = reinterpret_cast<int32_t>(eax2(a1)), eax3 == 0)) {
        return 0;
    } else {
        return 1;
    }
}

struct s15 {
    void* f0;
    void* f4;
};

struct s18 {
    signed char f0;
    signed char f1;
};

struct s17 {
    struct s18* f0;
    void* f4;
    signed char f8;
    signed char[239] pad248;
    signed char f248;
    signed char[7] pad256;
    void** f256;
};

struct s16 {
    struct s17* f0;
    signed char[4] pad8;
    struct s17* f8;
};

struct s14 {
    struct s14* f0;
    struct s14* f4;
    struct s15* f8;
    struct s16* f12;
    struct s17* f16;
    uint32_t f20;
    void* f24;
    signed char[4] pad32;
    int32_t f32;
    signed char[116] pad152;
    struct s17* f152;
    signed char[8052] pad8208;
    struct s17* f8208;
    signed char[4] pad8216;
    void* f8216;
};

struct s14* g408770 = reinterpret_cast<struct s14*>(0x406750);

struct s3* fun_403b80(struct s17* a1, void* a2, void* a3);

struct s19 {
    struct s18* f0;
    uint32_t f4;
    signed char f8;
};

int32_t VirtualAlloc = 0xa302;

struct s20 {
    uint32_t f0;
    signed char[240] pad244;
    signed char f244;
};

struct s14* fun_4035e0();

struct s3* fun_403940(void* ecx, void* a2) {
    struct s14* ecx3;
    void* ebx4;
    struct s15* v5;
    struct s15* ebp6;
    int32_t v7;
    int32_t esi8;
    struct s14* v9;
    struct s15* edi10;
    struct s15* ebp11;
    struct s17* esi12;
    void* eax13;
    struct s3* eax14;
    struct s15* ebp15;
    struct s17* edi16;
    struct s15* esi17;
    void* eax18;
    struct s3* eax19;
    struct s14* eax20;
    struct s14* ebp21;
    struct s16* eax22;
    struct s17* esi23;
    struct s19* edi24;
    int32_t esi25;
    struct s19* eax26;
    struct s15* edx27;
    struct s15* ecx28;
    struct s20* eax29;
    struct s15* eax30;
    uint1_t cf31;
    struct s14* eax32;
    struct s17* ecx33;

    ecx3 = g408770;
    ebx4 = a2;
    v5 = ebp6;
    v7 = esi8;
    v9 = ecx3;
    while (1) {
        if (ecx3->f16 != 0xffffffff) {
            edi10 = ecx3->f8;
            ebp11 = reinterpret_cast<struct s15*>(&ecx3->f8216);
            esi12 = reinterpret_cast<struct s17*>((reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(edi10) - reinterpret_cast<uint32_t>(ecx3) - 24) >> 3 << 12) + reinterpret_cast<uint32_t>(ecx3->f16));
            if (reinterpret_cast<uint32_t>(edi10) < reinterpret_cast<uint32_t>(ebp11)) {
                do {
                    eax13 = edi10->f0;
                    if (reinterpret_cast<int32_t>(eax13) >= reinterpret_cast<int32_t>(ebx4) && reinterpret_cast<uint32_t>(edi10->f4) > reinterpret_cast<uint32_t>(ebx4)) {
                        eax14 = fun_403b80(esi12, eax13, ebx4);
                        if (eax14) 
                            goto addr_4039f8_6;
                        ecx3 = v9;
                        edi10->f4 = ebx4;
                    }
                    ++edi10;
                    esi12 = reinterpret_cast<struct s17*>(reinterpret_cast<uint32_t>(esi12) + 0x1000);
                } while (reinterpret_cast<uint32_t>(edi10) < reinterpret_cast<uint32_t>(ebp11));
            }
            ebp15 = ecx3->f8;
            edi16 = ecx3->f16;
            esi17 = reinterpret_cast<struct s15*>(&ecx3->f24);
            if (reinterpret_cast<uint32_t>(esi17) < reinterpret_cast<uint32_t>(ebp15)) {
                do {
                    eax18 = esi17->f0;
                    if (reinterpret_cast<int32_t>(eax18) >= reinterpret_cast<int32_t>(ebx4) && reinterpret_cast<uint32_t>(esi17->f4) > reinterpret_cast<uint32_t>(ebx4)) {
                        eax19 = fun_403b80(edi16, eax18, ebx4);
                        if (eax19) 
                            goto addr_403a11_12;
                        ecx3 = v9;
                        esi17->f4 = ebx4;
                    }
                    ++esi17;
                    edi16 = reinterpret_cast<struct s17*>(reinterpret_cast<uint32_t>(edi16) + 0x1000);
                } while (reinterpret_cast<uint32_t>(esi17) < reinterpret_cast<uint32_t>(ebp15));
            }
        }
        ecx3 = ecx3->f0;
        eax20 = g408770;
        v9 = ecx3;
        if (ecx3 == eax20) 
            break;
    }
    ebp21 = reinterpret_cast<struct s14*>(0x406750);
    while (ebp21->f16 == 0xffffffff || !ebp21->f12) {
        ebp21 = ebp21->f0;
        if (ebp21 == 0x406750) 
            goto addr_403b2d_20;
    }
    eax22 = ebp21->f12;
    esi23 = ebp21->f16;
    edi24 = reinterpret_cast<struct s19*>((reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(eax22) - reinterpret_cast<uint32_t>(ebp21) - 24) >> 3 << 12) + reinterpret_cast<uint32_t>(esi23));
    esi25 = 0;
    if (reinterpret_cast<int1_t>(eax22->f0 == 0xffffffff)) {
        do {
            if (esi25 >= 16) 
                break;
            eax22 = reinterpret_cast<struct s16*>(&eax22->f8);
            ++esi25;
        } while (eax22->f8 == 0xffffffff);
    }
    eax26 = reinterpret_cast<struct s19*>(VirtualAlloc());
    if (eax26 == edi24) {
        edx27 = v5;
        ecx28 = edx27;
        if (!(reinterpret_cast<uint1_t>(esi25 < 0) | reinterpret_cast<uint1_t>(esi25 == 0))) {
            eax29 = reinterpret_cast<struct s20*>(&edi24->f4);
            do {
                eax29->f0 = 0xf0;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax29) - 4) = reinterpret_cast<uint32_t>(&eax29->pad244);
                eax29->f244 = -1;
                ecx28->f0 = reinterpret_cast<void*>(0xf0);
                ecx28->f4 = reinterpret_cast<void*>(0xf1);
                eax29 = reinterpret_cast<struct s20*>(reinterpret_cast<uint32_t>(eax29) + 0x1000);
                ++ecx28;
                --esi25;
            } while (esi25);
            edx27 = v5;
        }
        eax30 = reinterpret_cast<struct s15*>(&ebp21->f8216);
        g408770 = ebp21;
        cf31 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(ecx28) < reinterpret_cast<uint32_t>(eax30));
        if (cf31) {
            do {
                if (ecx28->f0 == 0xffffffff) 
                    break;
                ++ecx28;
            } while (reinterpret_cast<uint32_t>(ecx28) < reinterpret_cast<uint32_t>(eax30));
            cf31 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(ecx28) < reinterpret_cast<uint32_t>(eax30));
        }
        ebp21->f12 = reinterpret_cast<struct s16*>(reinterpret_cast<uint32_t>(eax30) - (reinterpret_cast<uint32_t>(eax30) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax30) < reinterpret_cast<uint32_t>(eax30) + cf31)) & reinterpret_cast<uint32_t>(ecx28));
        edi24->f8 = *reinterpret_cast<signed char*>(&ebx4);
        ebp21->f8 = edx27;
        edx27->f0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx27->f0) - reinterpret_cast<uint32_t>(ebx4));
        edi24->f4 = edi24->f4 - reinterpret_cast<uint32_t>(ebx4);
        edi24->f0 = reinterpret_cast<struct s18*>(reinterpret_cast<uint32_t>(edi24) + reinterpret_cast<uint32_t>(ebx4) + 8);
        goto v7;
    }
    return 0;
    addr_403b2d_20:
    eax32 = fun_4035e0();
    if (eax32) {
        ecx33 = eax32->f16;
        ecx33->f8 = *reinterpret_cast<signed char*>(&ebx4);
        g408770 = eax32;
        ecx33->f0 = reinterpret_cast<struct s18*>(reinterpret_cast<uint32_t>(ecx33) + reinterpret_cast<uint32_t>(ebx4) + 8);
        ecx33->f4 = reinterpret_cast<void*>(0xf0 - reinterpret_cast<uint32_t>(ebx4));
        eax32->f24 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax32->f24) - (reinterpret_cast<uint32_t>(ebx4) & 0xff));
        return &ecx33->f256;
    }
    addr_403a11_12:
    g408770 = v9;
    esi17->f0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi17->f0) - reinterpret_cast<uint32_t>(ebx4));
    v9->f8 = esi17;
    return eax19;
    addr_4039f8_6:
    g408770 = v9;
    edi10->f0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi10->f0) - reinterpret_cast<uint32_t>(ebx4));
    v9->f8 = edi10;
    return eax14;
}

uint32_t g409d00;

struct s3* g408cf0;

uint32_t fun_403090(void** a1);

uint32_t fun_403160(void** a1) {
    uint32_t eax2;
    void** ebx3;
    uint32_t ebp4;
    uint32_t edi5;
    uint32_t esi6;
    struct s3* eax7;
    void** ecx8;
    void** v9;
    uint32_t eax10;
    void** v11;
    uint32_t eax12;
    uint32_t eax13;
    uint32_t eax14;

    eax2 = g409d00;
    ebx3 = a1;
    ebp4 = 0;
    edi5 = 0;
    esi6 = 0;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax2) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax2 == 0))) {
        do {
            eax7 = g408cf0;
            if (*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax7) + esi6 * 4) && (ecx8 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax7) + esi6 * 4) + 12), !!(*reinterpret_cast<unsigned char*>(&ecx8) & 0x83))) {
                if (!reinterpret_cast<int1_t>(ebx3 == 1)) {
                    if (!ebx3 && (*reinterpret_cast<unsigned char*>(&ecx8) & 2 && (v9 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax7) + esi6 * 4), eax10 = fun_403090(v9), eax10 == 0xffffffff))) {
                        edi5 = edi5 | eax10;
                    }
                } else {
                    v11 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax7) + esi6 * 4);
                    eax12 = fun_403090(v11);
                    if (eax12 != 0xffffffff) {
                        ++ebp4;
                    }
                }
            }
            eax13 = g409d00;
            ++esi6;
        } while (reinterpret_cast<int32_t>(esi6) < reinterpret_cast<int32_t>(eax13));
    }
    eax14 = ebp4;
    if (ebx3 != 1) {
        eax14 = edi5;
    }
    return eax14;
}

int32_t fun_404380(int32_t* a1);

int32_t FlushFileBuffers = 0xa344;

int32_t GetLastError = 0xa334;

int32_t* g408918 = reinterpret_cast<int32_t*>(0);

int32_t* fun_403eb0(int32_t* a1) {
    int32_t* ecx2;
    int32_t* eax3;
    int32_t eax4;
    int32_t eax5;

    ecx2 = g408ce0;
    if (reinterpret_cast<uint32_t>(a1) >= reinterpret_cast<uint32_t>(ecx2) || !(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(a1) >> 5) * 4 + 0x408be0)) + (reinterpret_cast<uint32_t>(a1) & 31) * 8 + 4) & 1)) {
        addr_403efd_2:
        g408914 = reinterpret_cast<int32_t**>(9);
        eax3 = reinterpret_cast<int32_t*>(0xffffffff);
    } else {
        eax4 = fun_404380(a1);
        eax5 = reinterpret_cast<int32_t>(FlushFileBuffers(eax4));
        if (eax5) {
            eax3 = reinterpret_cast<int32_t*>(0);
        } else {
            eax3 = reinterpret_cast<int32_t*>(GetLastError(eax4));
        }
        if (eax3) 
            goto addr_403ef8_7;
    }
    return eax3;
    addr_403ef8_7:
    g408918 = eax3;
    goto addr_403efd_2;
}

int32_t fun_404140(int32_t* a1, int32_t a2, int32_t a3);

struct s21 {
    int32_t f0;
    unsigned char f4;
};

int32_t** fun_4043d0(int32_t* a1);

void* fun_403f10(int32_t* a1, void** a2, void* a3) {
    int32_t* ecx4;
    int32_t v5;
    int32_t ebp6;
    uint32_t* esp7;
    uint32_t v8;
    uint32_t edi9;
    int32_t ecx10;
    void* edx11;
    int32_t** edi12;
    uint32_t esi13;
    int32_t** v14;
    uint32_t v15;
    unsigned char cl16;
    void* ebx17;
    void* v18;
    struct s21* eax19;
    int32_t edx20;
    void** ebp21;
    void* v22;
    int32_t eax23;
    void** edi24;
    void* eax25;
    int32_t esi26;
    void** esp27;
    void* v28;
    int32_t* eax29;
    void* v30;
    int32_t v31;
    int32_t eax32;

    ecx4 = g408ce0;
    v5 = ebp6;
    esp7 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x41c - 4 - 4 - 4 - 4);
    v8 = edi9;
    if (reinterpret_cast<uint32_t>(a1) >= reinterpret_cast<uint32_t>(ecx4) || (ecx10 = reinterpret_cast<int32_t>(a1) >> 5, edx11 = *reinterpret_cast<void**>(ecx10 * 4 + 0x408be0), edi12 = reinterpret_cast<int32_t**>(ecx10 * 4 + 0x408be0), esi13 = (reinterpret_cast<uint32_t>(a1) & 31) << 3, v14 = edi12, v15 = esi13, cl16 = *reinterpret_cast<unsigned char*>(esi13 + reinterpret_cast<int32_t>(edx11) + 4), (cl16 & 1) == 0)) {
        g408914 = reinterpret_cast<int32_t**>(9);
    } else {
        ebx17 = a3;
        v18 = reinterpret_cast<void*>(0);
        if (!ebx17) {
            return 0;
        }
        if (cl16 & 32) {
            fun_404140(a1, 0, 2);
            esp7 = esp7 - 1 - 1 - 1 - 1 + 1 + 3;
        }
        eax19 = reinterpret_cast<struct s21*>(reinterpret_cast<int32_t>(*edi12) + esi13);
        if (!(eax19->f4 & 0x80)) 
            goto addr_4040ee_8; else 
            goto addr_403f9d_9;
    }
    addr_4040c7_10:
    g408918 = reinterpret_cast<int32_t*>(0);
    return 0xffffffff;
    addr_4040ee_8:
    edx20 = eax19->f0;
    ebp21 = a2;
    v22 = reinterpret_cast<void*>(esp7 + 7);
    eax23 = reinterpret_cast<int32_t>(WriteFile(edx20, ebp21, ebx17, v22, 0));
    if (!eax23) {
        GetLastError(edx20, ebp21, ebx17, v22, 0);
        goto addr_404039_12;
    } else {
        goto addr_404039_12;
    }
    addr_403f9d_9:
    ebp21 = a2;
    edi24 = ebp21;
    if (!ebx17) {
        addr_404039_12:
        if (0) {
            return -static_cast<uint32_t>(v18);
        } else {
            if (1) {
                if (!(*reinterpret_cast<unsigned char*>(esi13 + reinterpret_cast<int32_t>(*v14) + 4) & 64) || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebp21) == 26)) {
                    g408914 = reinterpret_cast<int32_t**>(28);
                    goto addr_4040c7_10;
                } else {
                    return 0;
                }
            } else {
                if (1) {
                    fun_4043d0(0);
                    return 0xffffffff;
                } else {
                    g408918 = reinterpret_cast<int32_t*>(0);
                    g408914 = reinterpret_cast<int32_t**>(9);
                    return 0xffffffff;
                }
            }
        }
    } else {
        do {
            eax25 = reinterpret_cast<void*>(esp7 + 10);
            do {
                if (reinterpret_cast<unsigned char>(edi24) - reinterpret_cast<unsigned char>(ebp21) >= reinterpret_cast<uint32_t>(ebx17)) 
                    break;
                ++edi24;
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi24) == 10)) {
                    eax25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax25) + 1);
                    v18 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v18) + 1);
                }
                eax25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax25) + 1);
            } while (reinterpret_cast<int32_t>(eax25) - reinterpret_cast<int32_t>(esp7 + 10) < 0x400);
            esi26 = reinterpret_cast<int32_t>(eax25) - reinterpret_cast<int32_t>(esp7 + 10);
            esp27 = reinterpret_cast<void**>(esp7 - 1 - 1);
            v28 = reinterpret_cast<void*>(esp7 + 7);
            eax29 = *v14;
            v30 = reinterpret_cast<void*>(esp27 + 12);
            v31 = *reinterpret_cast<int32_t*>(v15 + reinterpret_cast<int32_t>(eax29));
            eax32 = reinterpret_cast<int32_t>(WriteFile(v31, v30, esi26, v28));
            esp7 = reinterpret_cast<uint32_t*>(esp27 - 1 - 1 - 1 - 1 + 1);
            if (!eax32) 
                break;
        } while (v5 >= esi26 && reinterpret_cast<unsigned char>(edi24) - reinterpret_cast<unsigned char>(ebp21) < reinterpret_cast<uint32_t>(ebx17));
        goto addr_404035_29;
    }
    GetLastError(v31, v30, esi26, v28);
    addr_404035_29:
    esi13 = v8;
    goto addr_404039_12;
}

uint32_t fun_403090(void** a1) {
    void** eax2;
    void** eax3;
    int32_t* v4;
    int32_t* eax5;
    uint32_t eax6;
    uint32_t eax7;

    if (a1) {
        eax2 = fun_4030e0(a1);
        if (!eax2) {
            eax3 = *reinterpret_cast<void***>(a1 + 12);
            if (!(*reinterpret_cast<unsigned char*>(&eax3 + 1) & 64)) {
                return 0;
            } else {
                v4 = *reinterpret_cast<int32_t**>(a1 + 16);
                eax5 = fun_403eb0(v4);
                eax6 = -reinterpret_cast<uint32_t>(eax5);
                return eax6 - (eax6 + reinterpret_cast<uint1_t>(eax6 < eax6 + reinterpret_cast<uint1_t>(!!eax5)));
            }
        } else {
            return 0xffffffff;
        }
    } else {
        eax7 = fun_403160(a1);
        return eax7;
    }
}

uint32_t fun_403060(int32_t* a1) {
    int32_t* ecx2;
    uint32_t eax3;

    ecx2 = g408ce0;
    if (reinterpret_cast<uint32_t>(a1) < reinterpret_cast<uint32_t>(ecx2)) {
        eax3 = reinterpret_cast<uint32_t>(a1) & 31;
        *reinterpret_cast<signed char*>(&eax3) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(a1) >> 5) * 4 + 0x408be0)) + eax3 * 8 + 4);
        return eax3 & 64;
    } else {
        return 0;
    }
}

int32_t g408910 = 0;

void fun_404200(struct s6* a1) {
    int32_t eax2;
    void** eax3;
    uint32_t eax4;
    void** eax5;
    void** edx6;

    eax2 = g408910;
    g408910 = eax2 + 1;
    eax3 = fun_402fb0(0x1000);
    a1->f8 = eax3;
    eax4 = a1->f12;
    if (!eax3) {
        *reinterpret_cast<unsigned char*>(&eax4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax4) | 4);
        a1->f24 = reinterpret_cast<void*>(2);
        a1->f12 = eax4;
        eax5 = reinterpret_cast<void**>(&a1->f20);
        a1->f8 = eax5;
        a1->f0 = eax5;
        a1->f4 = reinterpret_cast<void*>(0);
        return;
    } else {
        edx6 = a1->f8;
        *reinterpret_cast<unsigned char*>(&eax4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax4) | 8);
        a1->f12 = eax4;
        a1->f24 = reinterpret_cast<void*>(0x1000);
        a1->f0 = edx6;
        a1->f4 = reinterpret_cast<void*>(0);
        return;
    }
}

int32_t SetFilePointer = 0xa358;

int32_t fun_404140(int32_t* a1, int32_t a2, int32_t a3) {
    int32_t* ecx4;
    int32_t ecx5;
    uint32_t esi6;
    int32_t eax7;
    int32_t eax8;
    int32_t* eax9;

    ecx4 = g408ce0;
    if (reinterpret_cast<uint32_t>(a1) >= reinterpret_cast<uint32_t>(ecx4) || (ecx5 = reinterpret_cast<int32_t>(a1) >> 5, esi6 = (reinterpret_cast<uint32_t>(a1) & 31) << 3, (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ecx5 * 4 + 0x408be0)) + esi6 + 4) & 1) == 0)) {
        g408914 = reinterpret_cast<int32_t**>(9);
        g408918 = reinterpret_cast<int32_t*>(0);
        return -1;
    } else {
        eax7 = fun_404380(a1);
        if (eax7 != -1) {
            eax8 = reinterpret_cast<int32_t>(SetFilePointer());
            if (eax8 != -1) {
                eax9 = reinterpret_cast<int32_t*>(0);
            } else {
                eax9 = reinterpret_cast<int32_t*>(GetLastError());
            }
            if (!eax9) {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ecx5 * 4 + 0x408be0)) + esi6 + 4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ecx5 * 4 + 0x408be0)) + esi6 + 4) & 0xfd);
                goto a3;
            } else {
                fun_4043d0(eax9);
                goto a3;
            }
        } else {
            g408914 = reinterpret_cast<int32_t**>(9);
            return eax7;
        }
    }
}

void fun_404520(struct s3* ecx, void** a2);

int32_t fun_404440(int32_t* a1);

void** fun_404260(struct s3* ecx, void** a2) {
    void** edi3;
    void** eax4;
    void** eax5;
    int32_t* v6;
    int32_t eax7;
    void** v8;

    edi3 = reinterpret_cast<void**>(0xffffffff);
    eax4 = *reinterpret_cast<void***>(a2 + 12);
    if (!(*reinterpret_cast<unsigned char*>(&eax4) & 64)) {
        if (*reinterpret_cast<unsigned char*>(&eax4) & 0x83) {
            eax5 = fun_4030e0(a2);
            edi3 = eax5;
            fun_404520(ecx, a2);
            v6 = *reinterpret_cast<int32_t**>(a2 + 16);
            eax7 = fun_404440(v6);
            if (eax7 >= 0) {
                if (*reinterpret_cast<void***>(a2 + 28)) {
                    v8 = *reinterpret_cast<void***>(a2 + 28);
                    fun_403590(ecx, v8);
                    *reinterpret_cast<void***>(a2 + 28) = reinterpret_cast<void**>(0);
                }
            } else {
                *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(0);
                return 0xffffffff;
            }
        }
        *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(0);
        return edi3;
    } else {
        *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(0);
        return 0xffffffff;
    }
}

signed char* fun_403880(void** a1, struct s8** a2, uint32_t* a3) {
    void** ecx4;
    struct s8* eax5;
    uint32_t eax6;

    ecx4 = a1;
    eax5 = reinterpret_cast<struct s8*>(0x406750);
    while (reinterpret_cast<unsigned char>(ecx4) <= reinterpret_cast<unsigned char>(eax5->f16) || reinterpret_cast<unsigned char>(ecx4) >= reinterpret_cast<unsigned char>(eax5->f20)) {
        eax5 = eax5->f0;
        if (eax5 == 0x406750) 
            goto addr_4038d6_4;
    }
    if (!(*reinterpret_cast<unsigned char*>(&ecx4) & 15) && (reinterpret_cast<unsigned char>(ecx4) & 0xfff) >= 0x100) {
        *a2 = eax5;
        eax6 = reinterpret_cast<unsigned char>(ecx4) & 0xfffff000;
        *a3 = eax6;
        return (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(ecx4) - eax6 - 0x100) >> 4) + eax6 + 8;
    }
    addr_4038d6_4:
    return 0;
}

struct s22 {
    int32_t f0;
    int32_t f4;
};

int32_t g408bbc;

void fun_4037b0(int32_t a1);

void fun_4038e0(struct s3* a1, void** a2, signed char* a3) {
    int32_t edx4;
    int32_t ecx5;
    struct s22* eax6;
    int32_t ecx7;
    int32_t eax8;
    int32_t eax9;

    edx4 = 0;
    ecx5 = reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(a2) - a1->f16) >> 12;
    eax6 = reinterpret_cast<struct s22*>(reinterpret_cast<uint32_t>(a1) + ecx5 * 8 + 24);
    *reinterpret_cast<signed char*>(&edx4) = *a3;
    eax6->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(a1) + ecx5 * 8 + 24) + edx4;
    *a3 = 0;
    ecx7 = eax6->f0;
    eax6->f4 = 0xf1;
    if (ecx7 == 0xf0 && (eax8 = g408bbc, eax9 = eax8 + 1, g408bbc = eax9, eax9 == 32)) {
        fun_4037b0(16);
    }
    return;
}

int32_t VirtualFree = 0xa2c4;

int32_t g406760 = -1;

void fun_403750(struct s14* a1) {
    int1_t zf2;
    struct s14* edx3;
    struct s14* eax4;

    VirtualFree();
    zf2 = g408770 == a1;
    if (zf2) {
        g408770 = a1->f4;
    }
    if (a1 == 0x406750) {
        g406760 = -1;
        goto 0;
    } else {
        edx3 = a1->f4;
        eax4 = a1->f0;
        edx3->f0 = eax4;
        a1->f0->f4 = a1->f4;
        HeapFree();
        goto 0;
    }
}

struct s14* g406754 = reinterpret_cast<struct s14*>(0x406750);

void fun_4037b0(int32_t a1) {
    int32_t v2;
    int32_t ebp3;
    struct s14* edi4;
    int1_t zf5;
    int32_t ebp6;
    struct s16* esi7;
    uint32_t ebx8;
    struct s17* eax9;
    int32_t eax10;
    int32_t edx11;
    int32_t eax12;
    struct s14* edx13;
    int32_t eax14;
    int32_t* ecx15;

    v2 = ebp3;
    edi4 = g406754;
    while (1) {
        if (edi4->f16 == 0xffffffff) {
            addr_403864_3:
            zf5 = edi4 == g406754;
            if (zf5) 
                break;
            if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(a1 < 0) | reinterpret_cast<uint1_t>(a1 == 0))) 
                continue; else 
                break;
        } else {
            ebp6 = 0;
            esi7 = reinterpret_cast<struct s16*>(&edi4->f8208);
            ebx8 = 0x3ff000;
            do {
                if (reinterpret_cast<int1_t>(esi7->f0 == 0xf0) && (eax9 = edi4->f16, eax10 = reinterpret_cast<int32_t>(VirtualFree(reinterpret_cast<uint32_t>(eax9) + ebx8, 0x1000, 0x4000)), !!eax10)) {
                    esi7->f0 = reinterpret_cast<struct s17*>(0xffffffff);
                    edx11 = g408bbc;
                    g408bbc = edx11 - 1;
                    if (!edi4->f12 || reinterpret_cast<uint32_t>(edi4->f12) > reinterpret_cast<uint32_t>(esi7)) {
                        edi4->f12 = esi7;
                    }
                    ++ebp6;
                    eax12 = v2 - 1;
                    v2 = eax12;
                    if (!eax12) 
                        break;
                }
                ebx8 = ebx8 - 0x1000;
                esi7 = reinterpret_cast<struct s16*>(reinterpret_cast<uint32_t>(esi7) - 8);
            } while (reinterpret_cast<int32_t>(ebx8) >= reinterpret_cast<int32_t>(0));
            edx13 = edi4;
            edi4 = edi4->f4;
            if (!ebp6) 
                goto addr_403864_3;
            if (!reinterpret_cast<int1_t>(edx13->f24 == 0xffffffff)) 
                goto addr_403864_3;
        }
        eax14 = 1;
        ecx15 = &edx13->f32;
        do {
            if (*ecx15 != -1) 
                break;
            ++eax14;
            ecx15 = ecx15 + 2;
        } while (eax14 < 0x400);
        if (eax14 != 0x400) 
            goto addr_403864_3;
        fun_403750(edx13);
        goto addr_403864_3;
    }
    return;
}

struct s3* fun_403b80(struct s17* a1, void* a2, void* a3) {
    void* edx4;
    struct s17* edi5;
    void* eax6;
    struct s18* ecx7;
    struct s18* v8;
    struct s18* esi9;
    struct s18* ebx10;
    void* eax11;
    struct s18** eax12;
    struct s18* eax13;
    struct s18* eax14;
    void* ebx15;
    struct s18* ebp16;
    struct s18* eax17;
    struct s18* eax18;
    void* ecx19;
    struct s18* eax20;
    struct s18** eax21;
    struct s18* eax22;
    void* ecx23;
    struct s18* eax24;

    edx4 = a3;
    edi5 = a1;
    eax6 = edi5->f4;
    ecx7 = edi5->f0;
    v8 = ecx7;
    esi9 = ecx7;
    ebx10 = reinterpret_cast<struct s18*>(&edi5->f248);
    if (reinterpret_cast<uint32_t>(eax6) >= reinterpret_cast<uint32_t>(edx4)) {
        ecx7->f0 = *reinterpret_cast<signed char*>(&edx4);
        if (reinterpret_cast<uint32_t>(ecx7) + reinterpret_cast<uint32_t>(edx4) >= reinterpret_cast<uint32_t>(ebx10)) {
            edi5->f4 = reinterpret_cast<void*>(0);
            edi5->f0 = reinterpret_cast<struct s18*>(&edi5->f8);
        } else {
            eax11 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi5->f4) - reinterpret_cast<uint32_t>(edx4));
            edi5->f0 = reinterpret_cast<struct s18*>(reinterpret_cast<uint32_t>(edi5->f0) + reinterpret_cast<uint32_t>(edx4));
            edi5->f4 = eax11;
        }
        eax12 = reinterpret_cast<struct s18**>(reinterpret_cast<uint32_t>(edi5) + reinterpret_cast<uint32_t>(edi5) * 2);
        return (reinterpret_cast<uint32_t>(ecx7 + 4) << 4) - reinterpret_cast<uint32_t>(eax12 + static_cast<uint32_t>(eax12));
    }
    eax13 = reinterpret_cast<struct s18*>(reinterpret_cast<uint32_t>(eax6) + reinterpret_cast<uint32_t>(ecx7));
    if (eax13->f0) {
        esi9 = eax13;
    }
    eax14 = reinterpret_cast<struct s18*>(reinterpret_cast<uint32_t>(esi9) + reinterpret_cast<uint32_t>(edx4));
    ebx15 = a2;
    if (reinterpret_cast<uint32_t>(eax14) < reinterpret_cast<uint32_t>(ebx10)) 
        goto addr_403bef_9;
    addr_403c64_10:
    ebp16 = reinterpret_cast<struct s18*>(&edi5->f8);
    esi9 = ebp16;
    if (reinterpret_cast<uint32_t>(esi9) >= reinterpret_cast<uint32_t>(ecx7)) {
        addr_403ceb_11:
        return 0;
    } else {
        do {
            eax17 = reinterpret_cast<struct s18*>(&edi5->f248);
            if (reinterpret_cast<uint32_t>(esi9) + reinterpret_cast<uint32_t>(edx4) >= reinterpret_cast<uint32_t>(eax17)) 
                goto addr_403ceb_11;
            *reinterpret_cast<signed char*>(&eax17) = esi9->f0;
            if (*reinterpret_cast<signed char*>(&eax17)) {
                esi9 = reinterpret_cast<struct s18*>(reinterpret_cast<uint32_t>(esi9) + (reinterpret_cast<uint32_t>(eax17) & 0xff));
            } else {
                eax18 = reinterpret_cast<struct s18*>(&esi9->f1);
                ecx19 = reinterpret_cast<void*>(1);
                if (!esi9->f1) {
                    do {
                        eax18 = reinterpret_cast<struct s18*>(&eax18->f1);
                        ecx19 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx19) + 1);
                    } while (!eax18->f0);
                }
                if (reinterpret_cast<uint32_t>(ecx19) >= reinterpret_cast<uint32_t>(edx4)) 
                    goto addr_403cb7_18;
                ebx15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx15) - reinterpret_cast<uint32_t>(ecx19));
                if (reinterpret_cast<uint32_t>(ebx15) < reinterpret_cast<uint32_t>(edx4)) 
                    goto addr_403ceb_11;
                esi9 = eax18;
            }
        } while (reinterpret_cast<uint32_t>(esi9) < reinterpret_cast<uint32_t>(v8));
    }
    return 0;
    addr_403cb7_18:
    eax20 = reinterpret_cast<struct s18*>(reinterpret_cast<uint32_t>(esi9) + reinterpret_cast<uint32_t>(edx4));
    if (reinterpret_cast<uint32_t>(eax20) >= reinterpret_cast<uint32_t>(&edi5->f248)) {
        edi5->f0 = ebp16;
    } else {
        edi5->f0 = eax20;
        edi5->f4 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx19) - reinterpret_cast<uint32_t>(edx4));
        goto addr_403cd6_25;
    }
    addr_403ccf_26:
    edi5->f4 = reinterpret_cast<void*>(0);
    addr_403cd6_25:
    eax21 = reinterpret_cast<struct s18**>(reinterpret_cast<uint32_t>(edi5) + reinterpret_cast<uint32_t>(edi5) * 2);
    esi9->f0 = *reinterpret_cast<signed char*>(&edx4);
    return (reinterpret_cast<uint32_t>(esi9 + 4) << 4) - reinterpret_cast<uint32_t>(eax21 + static_cast<uint32_t>(eax21));
    do {
        addr_403bef_9:
        *reinterpret_cast<signed char*>(&eax14) = esi9->f0;
        if (*reinterpret_cast<signed char*>(&eax14)) {
            esi9 = reinterpret_cast<struct s18*>(reinterpret_cast<uint32_t>(esi9) + (reinterpret_cast<uint32_t>(eax14) & 0xff));
        } else {
            eax22 = reinterpret_cast<struct s18*>(&esi9->f1);
            ecx23 = reinterpret_cast<void*>(1);
            if (!esi9->f1) {
                do {
                    eax22 = reinterpret_cast<struct s18*>(&eax22->f1);
                    ecx23 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx23) + 1);
                } while (!eax22->f0);
            }
            if (reinterpret_cast<uint32_t>(ecx23) >= reinterpret_cast<uint32_t>(edx4)) 
                goto addr_403c47_31;
            if (esi9 != v8) {
                ebx15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx15) - reinterpret_cast<uint32_t>(ecx23));
                if (reinterpret_cast<uint32_t>(ebx15) < reinterpret_cast<uint32_t>(edx4)) 
                    goto addr_403ceb_11;
                ecx7 = v8;
                esi9 = eax22;
            } else {
                edi5->f4 = ecx23;
                esi9 = eax22;
                ecx7 = v8;
            }
        }
        eax14 = reinterpret_cast<struct s18*>(&edi5->f248);
    } while (reinterpret_cast<uint32_t>(esi9) + reinterpret_cast<uint32_t>(edx4) < reinterpret_cast<uint32_t>(eax14));
    goto addr_403c64_10;
    addr_403c47_31:
    eax24 = reinterpret_cast<struct s18*>(reinterpret_cast<uint32_t>(esi9) + reinterpret_cast<uint32_t>(edx4));
    if (reinterpret_cast<uint32_t>(eax24) >= reinterpret_cast<uint32_t>(&edi5->f248)) {
        edi5->f0 = reinterpret_cast<struct s18*>(&edi5->f8);
        goto addr_403ccf_26;
    } else {
        edi5->f0 = eax24;
        edi5->f4 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx23) - reinterpret_cast<uint32_t>(edx4));
        goto addr_403cd6_25;
    }
}

int32_t fun_404380(int32_t* a1) {
    int32_t* ecx2;
    uint32_t eax3;

    ecx2 = g408ce0;
    if (reinterpret_cast<uint32_t>(a1) >= reinterpret_cast<uint32_t>(ecx2) || (eax3 = reinterpret_cast<uint32_t>(a1) & 31, (*reinterpret_cast<unsigned char*>(*reinterpret_cast<int32_t**>((reinterpret_cast<int32_t>(a1) >> 5) * 4 + 0x408be0) + eax3 * 2 + 1) & 1) == 0)) {
        g408914 = reinterpret_cast<int32_t**>(9);
        g408918 = reinterpret_cast<int32_t*>(0);
        return -1;
    } else {
        return (*reinterpret_cast<int32_t**>((reinterpret_cast<int32_t>(a1) >> 5) * 4 + 0x408be0))[eax3 * 2];
    }
}

int32_t** fun_4043d0(int32_t* a1) {
    int32_t* edx2;
    int32_t ecx3;
    int32_t** eax4;
    int32_t** eax5;

    edx2 = a1;
    g408918 = edx2;
    ecx3 = 0;
    eax4 = reinterpret_cast<int32_t**>(0x408790);
    do {
        if (edx2 == *eax4) 
            break;
        eax4 = eax4 + 2;
        ++ecx3;
    } while (reinterpret_cast<uint32_t>(eax4) < 0x4088f8);
    goto addr_4043f0_4;
    eax5 = *reinterpret_cast<int32_t***>(ecx3 * 8 + 0x408794);
    g408914 = eax5;
    return eax5;
    addr_4043f0_4:
    if (reinterpret_cast<uint32_t>(edx2) < 19 || reinterpret_cast<uint32_t>(edx2) > 36) {
        if (reinterpret_cast<uint32_t>(edx2) < 0xbc || (g408914 = reinterpret_cast<int32_t**>(8), reinterpret_cast<uint32_t>(edx2) > 0xca)) {
            g408914 = reinterpret_cast<int32_t**>(22);
        }
        return eax4;
    } else {
        g408914 = reinterpret_cast<int32_t**>(13);
        return eax4;
    }
}

void fun_404520(struct s3* ecx, void** a2) {
    void** eax3;
    void** v4;

    eax3 = *reinterpret_cast<void***>(a2 + 12);
    if (*reinterpret_cast<unsigned char*>(&eax3) & 0x83 && *reinterpret_cast<unsigned char*>(&eax3) & 8) {
        v4 = *reinterpret_cast<void***>(a2 + 8);
        fun_403590(ecx, v4);
        *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 0xfffffbf7);
        *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(a2 + 8) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(0);
    }
    return;
}

int32_t CloseHandle = 0xa37a;

int32_t fun_4042e0(int32_t* a1);

int32_t fun_404440(int32_t* a1) {
    int32_t* eax2;
    uint32_t edi3;
    int32_t eax4;
    int32_t eax5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;
    int32_t* ebx9;
    int32_t* eax10;

    eax2 = g408ce0;
    if (reinterpret_cast<uint32_t>(a1) >= reinterpret_cast<uint32_t>(eax2) || (eax2 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(a1) >> 5), edi3 = (reinterpret_cast<uint32_t>(a1) & 31) << 3, (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax2) * 4 + 0x408be0)) + edi3 + 4) & 1) == 0)) {
        g408914 = reinterpret_cast<int32_t**>(9);
        g408918 = reinterpret_cast<int32_t*>(0);
        return -1;
    } else {
        eax4 = fun_404380(a1);
        if (eax4 == -1 || ((a1 == 1 || reinterpret_cast<int1_t>(a1 == 2)) && (eax5 = fun_404380(2), eax6 = fun_404380(1), eax6 == eax5) || (eax7 = fun_404380(a1), eax8 = reinterpret_cast<int32_t>(CloseHandle(eax7)), !!eax8))) {
            ebx9 = reinterpret_cast<int32_t*>(0);
        } else {
            eax10 = reinterpret_cast<int32_t*>(GetLastError(eax7));
            ebx9 = eax10;
        }
        fun_4042e0(a1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax2) * 4 + 0x408be0)) + edi3 + 4) = 0;
        if (!ebx9) {
            return 0;
        } else {
            fun_4043d0(ebx9);
            return -1;
        }
    }
}

struct s23 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    uint32_t f12;
    int32_t* f16;
    signed char[4] pad24;
    int32_t f24;
};

int32_t fun_401230(struct s23* a1);

int32_t fun_401330(struct s6* a1, struct s0* a2, void* a3);

void** fun_4012d0(int32_t a1, void** a2);

void fun_4010a0(int32_t a1, struct s0* a2) {
    int32_t eax3;

    eax3 = fun_401230(0x406098);
    fun_401330(0x406098, a2, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 + 4 + 4 + 16);
    fun_4012d0(eax3, 0x406098);
    goto a1;
}

int32_t fun_402890(int32_t a1);

struct s24 {
    signed char f0;
    signed char f1;
    signed char f2;
};

int32_t GetCPInfo = 0xa244;

int32_t g408b94;

int32_t fun_4026a0(int32_t a1) {
    int32_t v2;
    int32_t ebx3;
    uint32_t v4;
    uint32_t ebp5;
    int32_t eax6;
    int32_t ebp7;
    int32_t eax8;
    int32_t v9;
    int32_t esi10;
    int32_t edx11;
    int32_t* eax12;
    uint32_t ecx13;
    signed char* edi14;
    int32_t ebx15;
    uint32_t edi16;
    int32_t ebx17;
    struct s24* ebp18;
    struct s24* esi19;
    uint32_t eax20;
    unsigned char dl21;
    int32_t eax22;
    int32_t ecx23;
    int32_t edx24;
    int32_t eax25;
    int32_t eax26;
    int1_t zf27;
    int32_t v28;
    int32_t v29;
    uint32_t ecx30;
    signed char* edi31;
    int32_t esi32;
    int32_t v33;
    signed char v34;
    uint32_t eax35;
    signed char v36;
    signed char v37;
    uint32_t eax38;
    int32_t eax39;

    v2 = ebx3;
    v4 = ebp5;
    eax6 = fun_402890(a1);
    ebp7 = eax6;
    eax8 = g408b7c;
    v9 = ebp7;
    if (ebp7 == eax8) {
        return 0;
    }
    esi10 = 0;
    if (!ebp7) {
        fun_402940();
        return 0;
    }
    edx11 = 0;
    eax12 = reinterpret_cast<int32_t*>(0x406388);
    do {
        if (*eax12 == ebp7) 
            break;
        eax12 = eax12 + 12;
        ++edx11;
    } while (reinterpret_cast<uint32_t>(eax12) < 0x406478);
    goto addr_4026fc_8;
    ecx13 = 64;
    edi14 = reinterpret_cast<signed char*>(0x408a78);
    ebx15 = edx11 + edx11 * 2;
    while (ecx13) {
        --ecx13;
        *edi14 = reinterpret_cast<signed char>(0);
        edi14 = edi14 + 4;
    }
    *edi14 = 0;
    edi16 = 0;
    ebx17 = ebx15 << 4;
    ebp18 = reinterpret_cast<struct s24*>(ebx17 + 0x406398);
    do {
        esi19 = ebp18;
        if (ebp18->f0) {
            do {
                *reinterpret_cast<signed char*>(&ecx13) = esi19->f1;
                if (!*reinterpret_cast<signed char*>(&ecx13)) 
                    break;
                eax20 = 0;
                ecx13 = ecx13 & 0xff;
                *reinterpret_cast<signed char*>(&eax20) = esi19->f0;
                if (eax20 <= ecx13) {
                    dl21 = *reinterpret_cast<unsigned char*>(edi16 + 0x406380);
                    do {
                        *reinterpret_cast<unsigned char*>(eax20 + 0x408a79) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax20 + 0x408a79) | dl21);
                        ++eax20;
                    } while (eax20 <= ecx13);
                }
                esi19 = reinterpret_cast<struct s24*>(&esi19->f2);
            } while (esi19->f2);
        }
        ++edi16;
        ebp18 = reinterpret_cast<struct s24*>(reinterpret_cast<int32_t>(ebp18) + 8);
    } while (edi16 < 4);
    g408b7c = v9;
    eax22 = fun_4028e0(v9);
    ecx23 = *reinterpret_cast<int32_t*>(ebx17 + 0x40638c);
    edx24 = *reinterpret_cast<int32_t*>(ebx17 + 0x406390);
    g408b80 = eax22;
    g408b88 = ecx23;
    eax25 = *reinterpret_cast<int32_t*>(ebx17 + 0x40638c + 8);
    g408b8c = edx24;
    g408b90 = eax25;
    return 0;
    addr_4026fc_8:
    eax26 = reinterpret_cast<int32_t>(GetCPInfo());
    if (eax26 != 1) {
        zf27 = g408b94 == 0;
        if (zf27) {
            goto v28;
        } else {
            fun_402940();
            goto v29;
        }
    }
    ecx30 = 64;
    edi31 = reinterpret_cast<signed char*>(0x408a78);
    while (ecx30) {
        --ecx30;
        *edi31 = reinterpret_cast<signed char>(0);
        edi31 = edi31 + 4;
        esi10 = esi10 + 4;
    }
    *edi31 = 0;
    esi32 = esi10 + 1;
    if (v4 > 1) 
        goto addr_402727_34;
    g408b7c = esi32;
    g408b80 = esi32;
    addr_4027a4_36:
    g408b88 = 0;
    g408b8c = 0;
    g408b90 = 0;
    goto v33;
    addr_402727_34:
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v2) + 2)) {
        do {
            *reinterpret_cast<signed char*>(&ecx30) = v34;
            if (!*reinterpret_cast<signed char*>(&ecx30)) 
                break;
            eax35 = 0;
            ecx30 = ecx30 & 0xff;
            *reinterpret_cast<signed char*>(&eax35) = v36;
            if (eax35 <= ecx30) {
                do {
                    *reinterpret_cast<unsigned char*>(eax35 + 0x408a79) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax35 + 0x408a79) | 4);
                    ++eax35;
                } while (eax35 <= ecx30);
            }
        } while (v37);
    }
    eax38 = 1;
    do {
        *reinterpret_cast<unsigned char*>(eax38 + 0x408a79) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax38 + 0x408a79) | 8);
        ++eax38;
    } while (eax38 < 0xff);
    g408b7c = ebp7;
    eax39 = fun_4028e0(ebp7);
    g408b80 = eax39;
    goto addr_4027a4_36;
}

struct s9* g409d04;

int32_t g40894c = 0;

void** g408934 = reinterpret_cast<void**>(0);

int32_t g408930 = 0;

void fun_402290() {
    void* esp1;
    struct s9* edi2;
    void* edi3;
    void** eax4;
    void* esp5;
    int32_t esi6;

    GetModuleFileNameA();
    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    edi2 = g409d04;
    g40894c = 0x408968;
    if (!edi2->f0) {
        edi2 = reinterpret_cast<struct s9*>(0x408968);
    }
    fun_402330(edi2, 0, 0, reinterpret_cast<int32_t>(esp1) + 8, reinterpret_cast<int32_t>(esp1) + 12);
    eax4 = fun_402fb0(reinterpret_cast<int32_t>(edi3) + 0x410);
    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp1) - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 20 - 4 - 4 + 4 + 4);
    if (!eax4) {
        fun_401200(8);
        esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4 + 4);
    }
    fun_402330(edi2, eax4, eax4 + 0x410, reinterpret_cast<int32_t>(esp5) - 4 + 12, reinterpret_cast<int32_t>(esp5) + 12);
    g408934 = eax4;
    g408930 = 0x103;
    goto esi6;
}

void** g4088f8 = reinterpret_cast<void**>(0);

void** g40893c = reinterpret_cast<void**>(0);

void fun_4021a0(struct s3* ecx) {
    void** edx2;
    void** al3;
    void* esi4;
    void** edi5;
    uint32_t ecx6;
    void** eax7;
    void** esi8;
    void** v9;
    void** ebp10;
    void** dl11;
    void** edi12;
    uint32_t ecx13;
    void* ebx14;
    void** eax15;
    void** edi16;
    uint32_t ecx17;
    void** eax18;
    uint32_t ecx19;
    uint32_t edx20;
    void*** esi21;
    void** edi22;
    uint32_t ecx23;
    void** eax24;
    void** eax25;

    edx2 = g4088f8;
    al3 = *reinterpret_cast<void***>(edx2);
    esi4 = reinterpret_cast<void*>(0);
    if (al3) {
        do {
            if (al3 != 61) {
                esi4 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi4) + 1);
            }
            edi5 = edx2;
            ecx6 = 0xffffffff;
            do {
                if (!ecx6) 
                    break;
                --ecx6;
                ++edi5;
                esi4 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi4) + 1);
            } while (*reinterpret_cast<void***>(edi5));
            ecx = reinterpret_cast<struct s3*>(~ecx6 - 1);
            al3 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx2) + reinterpret_cast<uint32_t>(ecx) + 1);
            edx2 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx2) + reinterpret_cast<uint32_t>(ecx) + 1);
        } while (al3);
    }
    eax7 = fun_402fb0(reinterpret_cast<uint32_t>(esi4) * 4 + 4);
    esi8 = eax7;
    v9 = esi8;
    g40893c = esi8;
    if (!esi8) {
        fun_401200(9);
    }
    ebp10 = g4088f8;
    dl11 = *reinterpret_cast<void***>(ebp10);
    if (dl11) {
        do {
            edi12 = ebp10;
            ecx13 = 0xffffffff;
            do {
                if (!ecx13) 
                    break;
                --ecx13;
                ++edi12;
                ++esi8;
            } while (*reinterpret_cast<void***>(edi12));
            ecx = reinterpret_cast<struct s3*>(~ecx13 - 1);
            ebx14 = reinterpret_cast<void*>(&ecx->pad16);
            if (dl11 != 61) {
                eax15 = fun_402fb0(ebx14);
                *reinterpret_cast<void***>(esi8) = eax15;
                if (!eax15) {
                    fun_401200(9);
                }
                edi16 = ebp10;
                ecx17 = 0xffffffff;
                do {
                    if (!ecx17) 
                        break;
                    --ecx17;
                    ++edi16;
                } while (*reinterpret_cast<void***>(edi16));
                eax18 = v9;
                ecx19 = ~ecx17;
                edx20 = ecx19;
                esi21 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi16) - ecx19);
                edi22 = *reinterpret_cast<void***>(eax18);
                ecx23 = ecx19 >> 2;
                while (ecx23) {
                    --ecx23;
                    *reinterpret_cast<void***>(edi22) = *esi21;
                    edi22 = edi22 + 4;
                    esi21 = esi21 + 4;
                }
                ecx = reinterpret_cast<struct s3*>(edx20 & 3);
                eax24 = eax18 + 4;
                while (ecx) {
                    ecx = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(ecx) - 1);
                    *reinterpret_cast<void***>(edi22) = *esi21;
                    ++edi22;
                    ++esi21;
                }
                v9 = eax24;
                esi8 = eax24;
            }
            dl11 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ebp10) + reinterpret_cast<uint32_t>(ebx14));
            ebp10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp10) + reinterpret_cast<uint32_t>(ebx14));
        } while (dl11);
    }
    eax25 = g4088f8;
    fun_403590(ecx, eax25);
    g4088f8 = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(esi8) = reinterpret_cast<void**>(0);
    return;
}

int32_t g408cec;

void fun_401ed0() {
    int32_t eax1;

    eax1 = g408cec;
    if (eax1) {
        eax1();
    }
    fun_401ff0(0x406008, 0x406010);
    fun_401ff0(0x406000, 0x406004);
    return;
}

int32_t g40895c = 0;

int32_t GetCurrentProcess = 0xa182;

int32_t TerminateProcess = 0xa16e;

int32_t g408958 = 0;

signed char g408954 = 0;

int32_t* g408ce8;

void* g408ce4;

int32_t ExitProcess = 0xa160;

void fun_401f40(int32_t a1, int32_t a2, int32_t a3) {
    int32_t eax4;
    int32_t ebp5;
    int32_t eax6;
    int32_t ebx7;
    int32_t* ecx8;
    void* esi9;
    int32_t* esi10;
    int32_t eax11;

    eax4 = g40895c;
    ebp5 = a1;
    if (eax4 == 1) {
        eax6 = reinterpret_cast<int32_t>(GetCurrentProcess(ebp5));
        TerminateProcess(eax6, ebp5);
    }
    ebx7 = a3;
    g408958 = 1;
    g408954 = *reinterpret_cast<signed char*>(&ebx7);
    if (!a2) {
        ecx8 = g408ce8;
        if (ecx8 && (esi9 = g408ce4, esi10 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi9) - 4), reinterpret_cast<uint32_t>(esi10) >= reinterpret_cast<uint32_t>(ecx8))) {
            do {
                eax11 = *esi10;
                if (eax11) {
                    eax11();
                    ecx8 = g408ce8;
                }
                --esi10;
            } while (reinterpret_cast<uint32_t>(esi10) >= reinterpret_cast<uint32_t>(ecx8));
        }
        fun_401ff0(0x406014, 0x40601c);
    }
    fun_401ff0(0x406020, 0x406024);
    if (!ebx7) {
        g40895c = 1;
        ExitProcess(ebp5);
    }
    return;
}

void** fun_402fd0(void* a1, int32_t a2) {
    void* esi3;
    void** eax4;
    int32_t edi5;
    struct s3* eax6;

    esi3 = a1;
    if (reinterpret_cast<uint32_t>(esi3) > 0xffffffe0) {
        addr_40300f_2:
        eax4 = reinterpret_cast<void**>(0);
    } else {
        if (!esi3) {
            esi3 = reinterpret_cast<void*>(1);
        }
        edi5 = a2;
        do {
            if (reinterpret_cast<uint32_t>(esi3) > 0xffffffe0) {
                eax4 = reinterpret_cast<void**>(0);
            } else {
                eax4 = fun_403020(esi3);
            }
            if (eax4) 
                break;
            if (!edi5) 
                break;
            eax6 = fun_403e90(esi3);
        } while (eax6);
        goto addr_40300f_2;
    }
    return eax4;
}

struct s25 {
    signed char[4] pad4;
    unsigned char f4;
};

uint32_t fun_403350(uint32_t a1, struct s6* a2) {
    void* esp3;
    uint32_t eax4;
    int32_t* ebp5;
    void* ebx6;
    uint32_t eax7;
    uint32_t eax8;
    void* edi9;
    void* eax10;
    void** eax11;
    void* ecx12;
    struct s25* eax13;
    void* eax14;
    uint32_t eax15;

    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4);
    eax4 = a2->f12;
    ebp5 = a2->f16;
    if (!(*reinterpret_cast<unsigned char*>(&eax4) & 0x82)) 
        goto addr_403470_2;
    if (*reinterpret_cast<unsigned char*>(&eax4) & 64) 
        goto addr_403470_2;
    ebx6 = reinterpret_cast<void*>(0);
    if (*reinterpret_cast<unsigned char*>(&eax4) & 1) {
        a2->f4 = reinterpret_cast<void*>(0);
        if (!(*reinterpret_cast<unsigned char*>(&eax4) & 16)) {
            addr_403470_2:
            *reinterpret_cast<unsigned char*>(&eax4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax4) | 32);
            a2->f12 = eax4;
            return 0xffffffff;
        } else {
            *reinterpret_cast<unsigned char*>(&eax4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax4) & 0xfe);
            a2->f0 = a2->f8;
            a2->f12 = eax4;
        }
    }
    eax7 = a2->f12;
    a2->f4 = reinterpret_cast<void*>(0);
    *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax7) & 0xef) | 2);
    a2->f12 = eax7;
    if (!(eax7 & 0x10c) && (a2 != 0x406098 && !reinterpret_cast<int1_t>(a2 == 0x4060b8) || (eax8 = fun_403060(ebp5), esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 - 4 + 4 + 4), !eax8))) {
        fun_404200(a2);
        esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 - 4 + 4 + 4);
    }
    if (!(a2->f12 & 0x108)) {
        edi9 = reinterpret_cast<void*>(1);
        eax10 = fun_403f10(ebp5, reinterpret_cast<int32_t>(esp3) + 20, 1);
        ebx6 = eax10;
    } else {
        eax11 = a2->f8;
        edi9 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a2->f0) - reinterpret_cast<unsigned char>(eax11));
        ecx12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2->f24) - 1);
        a2->f0 = eax11 + 1;
        a2->f4 = ecx12;
        if (reinterpret_cast<int32_t>(edi9) <= reinterpret_cast<int32_t>(0)) {
            if (ebp5 == 0xffffffff) {
                eax13 = reinterpret_cast<struct s25*>(0x406478);
            } else {
                eax13 = reinterpret_cast<struct s25*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(ebp5) >> 5) * 4 + 0x408be0)) + (reinterpret_cast<uint32_t>(ebp5) & 31) * 8);
            }
            if (eax13->f4 & 32) {
                fun_404140(ebp5, 0, 2);
            }
            *reinterpret_cast<void***>(a2->f8) = *reinterpret_cast<void***>(&a1);
        } else {
            eax14 = fun_403f10(ebp5, eax11, edi9);
            ebx6 = eax14;
            *reinterpret_cast<void***>(a2->f8) = *reinterpret_cast<void***>(&a1);
        }
    }
    if (ebx6 == edi9) {
        return a1 & 0xff;
    } else {
        eax15 = a2->f12;
        *reinterpret_cast<unsigned char*>(&eax15) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax15) | 32);
        a2->f12 = eax15;
        return 0xffffffff;
    }
}

uint32_t fun_403150() {
    uint32_t eax1;

    eax1 = fun_403160(1);
    return eax1;
}

int32_t g4062f8 = 0xc0000005;

int32_t g406378 = 10;

struct s7* fun_402150(int32_t a1) {
    int32_t edx2;
    int32_t ecx3;
    int32_t esi4;
    struct s7* eax5;
    struct s7* ecx6;

    edx2 = a1;
    ecx3 = g4062f8;
    esi4 = g406378;
    eax5 = reinterpret_cast<struct s7*>(0x4062f8);
    if (ecx3 != edx2) {
        ecx6 = reinterpret_cast<struct s7*>((esi4 + esi4 * 2) * 4 + 0x4062f8);
        do {
            ++eax5;
            if (reinterpret_cast<uint32_t>(eax5) >= reinterpret_cast<uint32_t>(ecx6)) 
                break;
        } while (eax5->f0 != edx2);
    }
    if (reinterpret_cast<uint32_t>(eax5) >= reinterpret_cast<uint32_t>((esi4 + esi4 * 2) * 4 + 0x4062f8) || eax5->f0 != edx2) {
        eax5 = reinterpret_cast<struct s7*>(0);
    }
    return eax5;
}

int32_t g406750 = 0x406750;

struct s14* fun_4035e0() {
    int32_t eax1;
    struct s14* eax2;
    struct s14* ebp3;
    int32_t edi4;
    int32_t edi5;
    struct s17* eax6;
    struct s17* esi7;
    int32_t eax8;
    struct s14* ecx9;
    int32_t eax10;
    struct s14* eax11;
    struct s15* ecx12;
    int32_t eax13;
    int32_t edx14;
    int32_t ecx15;
    struct s17* edi16;
    void* eax17;

    eax1 = g406760;
    if (eax1 != -1) {
        eax2 = reinterpret_cast<struct s14*>(HeapAlloc());
        ebp3 = eax2;
        if (!ebp3) {
            addr_40373c_3:
            goto edi4;
        } else {
            addr_403611_4:
            edi5 = VirtualAlloc;
            eax6 = reinterpret_cast<struct s17*>(edi5(0));
            esi7 = eax6;
            if (esi7) {
                eax8 = reinterpret_cast<int32_t>(edi5());
                if (!eax8) {
                    VirtualFree(esi7, 0, 0x8000);
                } else {
                    if (!reinterpret_cast<int1_t>(ebp3 == 0x406750)) {
                        ebp3->f0 = reinterpret_cast<struct s14*>(0x406750);
                        ecx9 = g406754;
                        ebp3->f4 = ecx9;
                        g406754 = ebp3;
                        ebp3->f4->f0 = ebp3;
                    } else {
                        eax10 = g406750;
                        if (!eax10) {
                            g406750 = reinterpret_cast<int32_t>("Pg@");
                        }
                        eax11 = g406754;
                        if (!eax11) {
                            g406754 = reinterpret_cast<struct s14*>(0x406750);
                        }
                    }
                    ecx12 = reinterpret_cast<struct s15*>(&ebp3->f24);
                    ebp3->f20 = reinterpret_cast<uint32_t>(esi7) + 0x400000;
                    ebp3->f16 = esi7;
                    ebp3->f8 = ecx12;
                    ebp3->f12 = reinterpret_cast<struct s16*>(&ebp3->f152);
                    eax13 = 0;
                    do {
                        edx14 = 0;
                        *reinterpret_cast<unsigned char*>(&edx14) = reinterpret_cast<uint1_t>(eax13 >= 16);
                        ++ecx12;
                        ++eax13;
                        *reinterpret_cast<uint32_t*>(&(ecx12 + 0xffffffff)->f0) = (reinterpret_cast<uint32_t>(edx14 - 1) & 0xf1) - 1;
                        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ecx12) + 0xfffffffc) = 0xf1;
                    } while (eax13 < 0x400);
                    ecx15 = 0x4000;
                    edi16 = esi7;
                    while (ecx15) {
                        --ecx15;
                        edi16->f0 = reinterpret_cast<struct s18*>(0);
                        edi16 = reinterpret_cast<struct s17*>(&edi16->f4);
                        esi7 = reinterpret_cast<struct s17*>(&esi7->f4);
                    }
                    if (reinterpret_cast<uint32_t>(esi7) < reinterpret_cast<uint32_t>(ebp3->f16) + 0x10000) {
                        do {
                            esi7->f4 = reinterpret_cast<void*>(0xf0);
                            esi7->f0 = reinterpret_cast<struct s18*>(&esi7->f8);
                            esi7->f248 = -1;
                            esi7 = reinterpret_cast<struct s17*>(reinterpret_cast<uint32_t>(esi7) + 0x1000);
                        } while (reinterpret_cast<uint32_t>(esi7) < reinterpret_cast<uint32_t>(ebp3->f16) + 0x10000);
                    }
                    goto 4;
                }
            }
        }
        if (ebp3 != 0x406750) {
            eax17 = g408bd4;
            HeapFree(eax17, 0, ebp3, 0);
            goto addr_40373c_3;
        }
    } else {
        ebp3 = reinterpret_cast<struct s14*>(0x406750);
        goto addr_403611_4;
    }
}

int32_t RtlUnwind = 0xa2d2;

void fun_404560() {
    goto RtlUnwind;
}

int32_t SetStdHandle = 0xa36a;

int32_t fun_4042e0(int32_t* a1) {
    int32_t* ecx2;
    int32_t ecx3;
    uint32_t esi4;
    int1_t zf5;
    int32_t* eax6;
    int32_t v7;
    uint32_t eax8;

    ecx2 = g408ce0;
    if (reinterpret_cast<uint32_t>(a1) >= reinterpret_cast<uint32_t>(ecx2) || ((ecx3 = reinterpret_cast<int32_t>(a1) >> 5, esi4 = (reinterpret_cast<uint32_t>(a1) & 31) << 3, (1 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<int32_t**>(ecx3 * 4 + 0x408be0)) + esi4 + 4)) == 0) || *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<int32_t**>(ecx3 * 4 + 0x408be0)) + esi4) == -1)) {
        g408914 = reinterpret_cast<int32_t**>(9);
        g408918 = reinterpret_cast<int32_t*>(0);
        return -1;
    }
    zf5 = g40606c == 1;
    if (!zf5) 
        goto addr_40434a_4;
    eax6 = a1;
    if (!eax6) {
        v7 = 0xf6;
    } else {
        eax8 = reinterpret_cast<uint32_t>(eax6) - 1;
        if (!eax8) {
            v7 = 0xf5;
        } else {
            if (eax8 - 1) {
                addr_40434a_4:
                *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<int32_t**>(ecx3 * 4 + 0x408be0)) + esi4) = -1;
                return 0;
            } else {
                v7 = 0xf4;
            }
        }
    }
    SetStdHandle(v7, 0);
    goto addr_40434a_4;
}

int32_t fun_401230(struct s23* a1) {
    int32_t* v2;
    uint32_t eax3;
    int32_t edi4;
    int32_t ecx5;
    void** eax6;
    int32_t eax7;
    uint32_t eax8;

    v2 = a1->f16;
    eax3 = fun_403060(v2);
    if (!eax3) 
        goto addr_4012ca_2;
    if (!reinterpret_cast<int1_t>(a1 == 0x406098)) {
        if (!reinterpret_cast<int1_t>(a1 == 0x4060b8)) {
            addr_4012ca_2:
            return 0;
        } else {
            edi4 = 1;
        }
    } else {
        edi4 = 0;
    }
    ecx5 = g408910;
    g408910 = ecx5 + 1;
    if (!(a1->f12 & 0x10c) && (*reinterpret_cast<int32_t*>(edi4 * 4 + 0x408908) || (eax6 = fun_402fb0(0x1000), *reinterpret_cast<void***>(edi4 * 4 + 0x408908) = eax6, !!eax6))) {
        eax7 = *reinterpret_cast<int32_t*>(edi4 * 4 + 0x408908);
        a1->f24 = 0x1000;
        a1->f8 = eax7;
        a1->f0 = eax7;
        eax8 = a1->f12;
        a1->f4 = 0x1000;
        a1->f12 = eax8 | 0x1102;
        return 1;
    }
}

struct s26 {
    signed char f0;
    signed char f1;
};

void* g406540 = reinterpret_cast<void*>(0x40654a);

int32_t g406528 = 0x404130;

int32_t g406534 = 0x404130;

int32_t g40652c = 0x404130;

struct s5* g406070 = reinterpret_cast<struct s5*>(0x40507c);

struct s5* g406074 = reinterpret_cast<struct s5*>(0x40506c);

int32_t fun_401330(struct s6* a1, struct s0* a2, void* a3) {
    int32_t v4;
    void* esp5;
    struct s5* ecx6;
    struct s5* ebp7;
    signed char bl8;
    struct s26* edi9;
    uint32_t v10;
    struct s26* v11;
    struct s5* esi12;
    struct s5* v13;
    struct s5* edx14;
    uint32_t eax15;
    uint32_t eax16;
    struct s5* eax17;
    struct s5* v18;
    void* eax19;
    struct s5* v20;
    struct s5* v21;
    struct s5* v22;
    struct s5* v23;
    struct s5* v24;
    struct s5* v25;
    struct s5* v26;
    uint32_t eax27;
    int32_t ecx28;
    struct s5* eax29;
    struct s5* eax30;
    struct s5* eax31;
    struct s5* eax32;
    struct s5* eax33;
    struct s5* eax34;
    struct s5* eax35;
    uint32_t eax36;
    int32_t ecx37;
    struct s5* eax38;
    struct s5* eax39;
    struct s5* eax40;
    struct s5* eax41;
    uint32_t eax42;
    struct s5* ecx43;
    struct s5* eax44;
    struct s5* eax45;
    signed char v46;
    int32_t eax47;
    int32_t* esp48;
    int32_t v49;
    struct s5* eax50;
    struct s5* v51;
    struct s5** esp52;
    void** esp53;
    uint32_t esi54;
    struct s5* eax55;
    uint32_t ecx56;
    signed char v57;
    struct s5* eax58;
    struct s5* esi59;
    struct s5* eax60;
    struct s5* ecx61;
    uint32_t esi62;
    struct s5* eax63;
    uint32_t edx64;
    uint32_t esi65;
    struct s5* eax66;
    uint32_t edx67;
    struct s5* eax68;
    struct s5* edi69;
    uint32_t ecx70;
    struct s5* edx71;
    uint32_t ebp72;
    struct s5* eax73;
    uint32_t v74;
    struct s5* eax75;
    struct s5* eax76;
    struct s5* ebx77;
    void* edi78;
    struct s6* esi79;
    struct s6** esp80;
    struct s5* eax81;
    struct s5* esi82;
    uint32_t ebx83;
    struct s5* v84;
    struct s5* eax85;
    struct s5** esp86;
    uint32_t ecx87;
    struct s5* ebx88;
    struct s5* eax89;
    struct s5* eax90;
    struct s5* eax91;
    uint1_t less92;
    struct s5* esi93;
    struct s5* edi94;
    struct s5* ecx95;
    void* eax96;
    void* v97;
    uint32_t eax98;
    struct s5* eax99;
    struct s5* ecx100;
    struct s5* eax101;

    v4 = reinterpret_cast<int32_t>(__return_address());
    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x24c - 4 - 4 - 4 - 4);
    ecx6 = reinterpret_cast<struct s5*>(0);
    ebp7 = reinterpret_cast<struct s5*>(0);
    bl8 = a2->f0;
    edi9 = reinterpret_cast<struct s26*>(&a2->f1);
    *reinterpret_cast<signed char*>(&v10) = bl8;
    v11 = edi9;
    if (bl8) {
        esi12 = v13;
        while (edx14 = reinterpret_cast<struct s5*>(0), !0) {
            if (bl8 < 32 || bl8 > 0x78) {
                eax15 = 0;
            } else {
                eax16 = reinterpret_cast<uint32_t>(static_cast<int32_t>(bl8));
                *reinterpret_cast<signed char*>(&eax16) = *reinterpret_cast<signed char*>(eax16 + 0x404ff0);
                eax15 = eax16 & 15;
            }
            eax17 = reinterpret_cast<struct s5*>(static_cast<int32_t>((ecx6 + eax15 + 0x80a02)->f0) >> 4);
            v18 = eax17;
            switch (eax17) {
                addr_401530_9:
            case 0:
                eax19 = g406540;
                v20 = reinterpret_cast<struct s5*>(0);
                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax19) + (v10 & 0xff) * 2 + 1) & 0x80) {
                    fun_401cc0(static_cast<int32_t>(bl8), a1, reinterpret_cast<int32_t>(esp5) + 28);
                    bl8 = edi9->f0;
                    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 + 4 + 12);
                    v11 = reinterpret_cast<struct s26*>(&edi9->f1);
                }
                fun_401cc0(static_cast<int32_t>(bl8), a1, reinterpret_cast<int32_t>(esp5) + 28);
                esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 + 4 + 12);
                goto addr_401b6a_12;
            case 1:
                v21 = reinterpret_cast<struct s5*>(0);
                v22 = reinterpret_cast<struct s5*>(0);
                v23 = reinterpret_cast<struct s5*>(0);
                v24 = reinterpret_cast<struct s5*>(0);
                v25 = reinterpret_cast<struct s5*>(0);
                v26 = reinterpret_cast<struct s5*>(0xffffffff);
                v20 = reinterpret_cast<struct s5*>(0);
                goto addr_401b6a_12;
            case 2:
                eax27 = bl8 + 0xffffffe0;
                if (eax27 <= 16) {
                    ecx28 = 0;
                    *reinterpret_cast<signed char*>(&ecx28) = *reinterpret_cast<signed char*>(eax27 + 0x401be4);
                    switch (ecx28) {
                    case 0:
                        eax29 = v25;
                        *reinterpret_cast<unsigned char*>(&eax29) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax29) | 2);
                        v25 = eax29;
                        break;
                    case 1:
                        eax30 = v25;
                        *reinterpret_cast<unsigned char*>(&eax30) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax30) | 0x80);
                        v25 = eax30;
                        break;
                    case 2:
                        eax31 = v25;
                        *reinterpret_cast<unsigned char*>(&eax31) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax31) | 1);
                        v25 = eax31;
                        break;
                    case 3:
                        eax32 = v25;
                        *reinterpret_cast<unsigned char*>(&eax32) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax32) | 4);
                        v25 = eax32;
                        break;
                    case 4:
                        eax33 = v25;
                        *reinterpret_cast<unsigned char*>(&eax33) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax33) | 8);
                        v25 = eax33;
                    case 5:
                        goto 0x401b6a;
                    }
                    goto addr_401b6a_12;
                }
            case 3:
                if (bl8 != 42) {
                    v23 = reinterpret_cast<struct s5*>(bl8 + (reinterpret_cast<uint32_t>(esi12) + reinterpret_cast<uint32_t>(esi12) * 4) * 2 + 0xffffffd0);
                    goto addr_401b6a_12;
                } else {
                    eax34 = fun_401d90(reinterpret_cast<int32_t>(esp5) + 0x268);
                    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4 + 4);
                    v23 = eax34;
                    if (reinterpret_cast<int32_t>(eax34) < reinterpret_cast<int32_t>(0)) {
                        v25 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(v25) | 4);
                        v23 = reinterpret_cast<struct s5*>(-reinterpret_cast<uint32_t>(eax34));
                        goto addr_401b6a_12;
                    }
                }
            case 4:
                v26 = reinterpret_cast<struct s5*>(0);
                goto addr_401b6a_12;
            case 5:
                if (bl8 != 42) {
                    v26 = reinterpret_cast<struct s5*>(bl8 + (reinterpret_cast<uint32_t>(v26) + reinterpret_cast<uint32_t>(v26) * 4) * 2 + 0xffffffd0);
                    goto addr_401b6a_12;
                } else {
                    eax35 = fun_401d90(reinterpret_cast<int32_t>(esp5) + 0x268);
                    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4 + 4);
                    v26 = eax35;
                    if (reinterpret_cast<int32_t>(eax35) < reinterpret_cast<int32_t>(0)) {
                        v26 = reinterpret_cast<struct s5*>(0xffffffff);
                        goto addr_401b6a_12;
                    }
                }
            case 6:
                eax36 = bl8 + 0xffffffb7;
                if (eax36 > 46) {
                    addr_401b6a_12:
                    bl8 = v11->f0;
                    edi9 = reinterpret_cast<struct s26*>(&v11->f1);
                    *reinterpret_cast<signed char*>(&v10) = bl8;
                    v11 = edi9;
                    if (!bl8) 
                        goto addr_401b87_31;
                } else {
                    ecx37 = 0;
                    *reinterpret_cast<signed char*>(&ecx37) = *reinterpret_cast<signed char*>(eax36 + 0x401c0c);
                    switch (ecx37) {
                    case 0:
                        if (edi9->f0 != 54 || edi9->f1 != 52) {
                            v18 = reinterpret_cast<struct s5*>(0);
                            goto addr_401530_9;
                        } else {
                            eax38 = v25;
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax38) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax38) + 1) | 0x80);
                            v11 = edi9 + 1;
                            v25 = eax38;
                            break;
                        }
                    case 1:
                        eax39 = v25;
                        *reinterpret_cast<unsigned char*>(&eax39) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax39) | 32);
                        v25 = eax39;
                        break;
                    case 2:
                        eax40 = v25;
                        *reinterpret_cast<unsigned char*>(&eax40) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax40) | 16);
                        v25 = eax40;
                        break;
                    case 3:
                        eax41 = v25;
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax41) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax41) + 1) | 8);
                        v25 = eax41;
                    case 4:
                        goto 0x401b6a;
                    }
                    goto addr_401b6a_12;
                }
                esi12 = v23;
                ecx6 = v18;
                break;
            case 7:
                eax42 = bl8 + 0xffffffbd;
                if (eax42 > 53) {
                    addr_401a50_41:
                    if (v22) 
                        goto addr_401b6a_12;
                } else {
                    ecx43 = reinterpret_cast<struct s5*>(0);
                    *reinterpret_cast<signed char*>(&ecx43) = *reinterpret_cast<signed char*>(eax42 + 0x401c80);
                    switch (ecx43) {
                    case 0:
                        eax44 = v25;
                        if (!(reinterpret_cast<uint32_t>(eax44) & 0x830)) {
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax44) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax44) + 1) | 8);
                            v25 = eax44;
                        }
                    case 6:
                        if (!(reinterpret_cast<uint32_t>(v25) & 0x810)) {
                            eax45 = fun_401d90(reinterpret_cast<int32_t>(esp5) + 0x268);
                            esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4 + 4);
                            v46 = *reinterpret_cast<signed char*>(&eax45);
                            ebp7 = reinterpret_cast<struct s5*>(1);
                            goto addr_401636_47;
                        } else {
                            eax47 = fun_401dd0(reinterpret_cast<int32_t>(esp5) + 0x268);
                            esp48 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4 + 4 - 4);
                            v49 = eax47;
                            eax50 = fun_4031e0(esp48 + 24, *reinterpret_cast<uint16_t*>(&v49));
                            ebp7 = eax50;
                            esp5 = reinterpret_cast<void*>(esp48 - 1 - 1 + 1 + 2);
                            if (reinterpret_cast<int32_t>(ebp7) >= reinterpret_cast<int32_t>(0)) {
                                addr_401636_47:
                                v51 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(esp5) + 92);
                                break;
                            } else {
                                v22 = reinterpret_cast<struct s5*>(1);
                                v51 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(esp5) + 92);
                                break;
                            }
                        }
                    case 1:
                    case 2:
                        v21 = reinterpret_cast<struct s5*>(1);
                        bl8 = reinterpret_cast<signed char>(bl8 + 32);
                    case 8:
                        v51 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(esp5) + 92);
                        v25 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(v25) | 64);
                        if (reinterpret_cast<int32_t>(v26) >= reinterpret_cast<int32_t>(0)) {
                            if (!v26 && bl8 == 0x67) {
                                v26 = reinterpret_cast<struct s5*>(1);
                            }
                        } else {
                            v26 = reinterpret_cast<struct s5*>(6);
                        }
                        esp52 = reinterpret_cast<struct s5**>(reinterpret_cast<int32_t>(esp5) - 4 - 4);
                        esp53 = reinterpret_cast<void**>(esp52 - 1);
                        g406528(esp53 + 22, esp52 + 25, static_cast<int32_t>(bl8), v26, v21);
                        esp5 = reinterpret_cast<void*>(esp53 - 1 - 1 - 1 + 1 + 5);
                        esi54 = reinterpret_cast<uint32_t>(v25) & 0x80;
                        if (esi54 && !v26) {
                            g406534(reinterpret_cast<int32_t>(esp5) + 92);
                            esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4 + 4);
                        }
                        if (bl8 == 0x67 && !esi54) {
                            g40652c(reinterpret_cast<int32_t>(esp5) + 92);
                            esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4 + 4);
                        }
                        if (v46 == 45) {
                            eax55 = v25;
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax55) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax55) + 1) | 1);
                            v25 = eax55;
                            v51 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(esp5) + 93);
                        }
                        ecx56 = 0xffffffff;
                        do {
                            if (!ecx56) 
                                break;
                            --ecx56;
                        } while (v57);
                        ebp7 = reinterpret_cast<struct s5*>(~ecx56 - 1);
                        break;
                    case 3:
                        eax58 = v25;
                        if (!(reinterpret_cast<uint32_t>(eax58) & 0x830)) {
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax58) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax58) + 1) | 8);
                            v25 = eax58;
                        }
                    case 13:
                        esi59 = reinterpret_cast<struct s5*>(0x7fffffff);
                        if (v26 != 0xffffffff) {
                            esi59 = v26;
                        }
                        eax60 = fun_401d90(reinterpret_cast<int32_t>(esp5) + 0x268);
                        ecx61 = eax60;
                        esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4 + 4);
                        v51 = ecx61;
                        if (!(reinterpret_cast<uint32_t>(v25) & 0x810)) {
                            if (!ecx61) {
                                ecx61 = g406070;
                                v51 = ecx61;
                            }
                            esi62 = reinterpret_cast<uint32_t>(esi59) - 1;
                            eax63 = ecx61;
                            if (esi59) {
                                do {
                                    if (!eax63->f0) 
                                        break;
                                    eax63 = reinterpret_cast<struct s5*>(&eax63->pad4);
                                    edx64 = esi62;
                                    --esi62;
                                } while (edx64);
                            }
                            ebp7 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(eax63) - reinterpret_cast<uint32_t>(ecx61));
                            break;
                        } else {
                            if (!ecx61) {
                                ecx61 = g406074;
                                v51 = ecx61;
                            }
                            esi65 = reinterpret_cast<uint32_t>(esi59) - 1;
                            v20 = reinterpret_cast<struct s5*>(1);
                            eax66 = ecx61;
                            if (esi59) {
                                do {
                                    if (!eax66->f0) 
                                        break;
                                    eax66 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(eax66) + 2);
                                    edx67 = esi65;
                                    --esi65;
                                } while (edx67);
                            }
                            ebp7 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(eax66) - reinterpret_cast<uint32_t>(ecx61)) >> 1);
                            break;
                        }
                        addr_4018a0_82:
                    case 4:
                        goto addr_4018b2_83;
                    case 5:
                        eax68 = fun_401d90(reinterpret_cast<int32_t>(esp5) + 0x268);
                        esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4 + 4);
                        if (!eax68 || (ecx43 = eax68->f4, ecx43 == 0)) {
                            edi69 = g406070;
                            ecx70 = 0xffffffff;
                            v51 = edi69;
                            do {
                                if (!ecx70) 
                                    break;
                                --ecx70;
                                edi69 = reinterpret_cast<struct s5*>(&edi69->pad4);
                            } while (edi69->f0);
                            ebp7 = reinterpret_cast<struct s5*>(~ecx70 - 1);
                            break;
                        } else {
                            edx71 = v25;
                            if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx71) + 1) & 8)) {
                                ebp7 = reinterpret_cast<struct s5*>(static_cast<int32_t>(reinterpret_cast<int16_t>(eax68->f0)));
                                v20 = reinterpret_cast<struct s5*>(0);
                                v51 = ecx43;
                                break;
                            } else {
                                ebp72 = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(eax68->f0)));
                                v51 = ecx43;
                                v20 = reinterpret_cast<struct s5*>(1);
                                ebp7 = reinterpret_cast<struct s5*>(ebp72 >> 1);
                                break;
                            }
                        }
                    case 7:
                    case 9:
                        eax73 = v25;
                        v74 = 10;
                        *reinterpret_cast<unsigned char*>(&eax73) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax73) | 64);
                        v25 = eax73;
                        goto addr_4018f7_93;
                    case 10:
                        eax75 = fun_401d90(reinterpret_cast<int32_t>(esp5) + 0x268);
                        esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4 + 4);
                        if (!(*reinterpret_cast<unsigned char*>(&v25) & 32)) {
                            v22 = reinterpret_cast<struct s5*>(1);
                            eax75->f0 = reinterpret_cast<signed char>(0);
                            break;
                        } else {
                            v22 = reinterpret_cast<struct s5*>(1);
                            eax75->f0 = reinterpret_cast<signed char>(0);
                            break;
                        }
                    case 11:
                        v74 = 8;
                        if (*reinterpret_cast<unsigned char*>(&v25) & 0x80) {
                            eax76 = v25;
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax76) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax76) + 1) | 2);
                            v25 = eax76;
                            goto addr_4018f7_93;
                        }
                    case 12:
                        v26 = reinterpret_cast<struct s5*>(8);
                        goto addr_4018a0_82;
                    case 14:
                        v74 = 10;
                        goto addr_4018f7_93;
                    case 15:
                        goto addr_4018b2_83;
                    case 16:
                        goto 0x401a50;
                    }
                    goto addr_401a50_41;
                }
                ebx77 = v25;
                if (!(*reinterpret_cast<unsigned char*>(&ebx77) & 64)) 
                    goto addr_401a8f_103;
                if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx77) + 1) & 1)) {
                    if (!(*reinterpret_cast<unsigned char*>(&ebx77) & 1)) {
                        if (!(*reinterpret_cast<unsigned char*>(&ebx77) & 2)) {
                            addr_401a8f_103:
                            edi78 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v23) - reinterpret_cast<uint32_t>(v24) - reinterpret_cast<uint32_t>(ebp7));
                            if (*reinterpret_cast<unsigned char*>(&ebx77) & 12) {
                                esi79 = a1;
                            } else {
                                esi79 = a1;
                                fun_401d10(32, edi78, esi79, reinterpret_cast<int32_t>(esp5) + 28);
                                esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
                            }
                        } else {
                            goto addr_401a87_110;
                        }
                    } else {
                        goto addr_401a87_110;
                    }
                } else {
                    goto addr_401a87_110;
                }
                esp80 = reinterpret_cast<struct s6**>(reinterpret_cast<int32_t>(esp5) - 4 - 4);
                fun_401d50(reinterpret_cast<int32_t>(esp80) + 42, v24, esi79, reinterpret_cast<int32_t>(esp5) + 28);
                esp5 = reinterpret_cast<void*>(esp80 - 1 - 1 - 1 + 1 + 4);
                if (*reinterpret_cast<unsigned char*>(&ebx77) & 8 && !(*reinterpret_cast<unsigned char*>(&ebx77) & 4)) {
                    fun_401d10(48, edi78, esi79, reinterpret_cast<int32_t>(esp5) + 28);
                    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
                }
                eax81 = v20;
                if (!eax81 || reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebp7) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ebp7 == 0)) {
                    fun_401d50(v51, ebp7, esi79, reinterpret_cast<int32_t>(esp5) + 28);
                    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
                } else {
                    esi82 = v51;
                    ebx83 = reinterpret_cast<uint32_t>(ebp7) + 0xffffffff;
                    do {
                        *reinterpret_cast<signed char*>(&eax81) = esi82->f0;
                        v84 = eax81;
                        esi82 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esi82) + 2);
                        eax85 = fun_4031e0(reinterpret_cast<int32_t>(esp5) + 72, *reinterpret_cast<uint16_t*>(&v84));
                        esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 + 4 + 8);
                        if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax85) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax85 == 0)) 
                            break;
                        esp86 = reinterpret_cast<struct s5**>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4);
                        eax81 = reinterpret_cast<struct s5*>(esp86 + 21);
                        fun_401d50(eax81, eax85, a1, reinterpret_cast<int32_t>(esp5) + 28);
                        esp5 = reinterpret_cast<void*>(esp86 - 1 - 1 + 1 + 4);
                        ecx87 = ebx83;
                        --ebx83;
                    } while (ecx87);
                    ebx77 = v25;
                }
                if (*reinterpret_cast<unsigned char*>(&ebx77) & 4) {
                    fun_401d10(32, edi78, a1, reinterpret_cast<int32_t>(esp5) + 28);
                    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
                    goto addr_401b6a_12;
                }
                addr_401a87_110:
                v24 = reinterpret_cast<struct s5*>(1);
                goto addr_401a8f_103;
                addr_4018f7_93:
                ebx88 = v25;
                if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx88) + 1) & 0x80)) {
                    if (!(*reinterpret_cast<unsigned char*>(&ebx88) & 32)) {
                        if (!(*reinterpret_cast<unsigned char*>(&ebx88) & 64)) {
                            eax89 = fun_401d90(reinterpret_cast<int32_t>(esp5) + 0x268);
                            esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4 + 4);
                            edx14 = reinterpret_cast<struct s5*>(0);
                        } else {
                            edx14 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(esp5) + 0x268);
                            eax89 = fun_401d90(edx14);
                            esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4 + 4);
                            __asm__("cdq ");
                        }
                    } else {
                        if (!(*reinterpret_cast<unsigned char*>(&ebx88) & 64)) {
                            eax90 = fun_401d90(reinterpret_cast<int32_t>(esp5) + 0x268);
                            esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4 + 4);
                            eax89 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(eax90) & 0xffff);
                            __asm__("cdq ");
                        } else {
                            eax91 = fun_401d90(reinterpret_cast<int32_t>(esp5) + 0x268);
                            eax89 = reinterpret_cast<struct s5*>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax91)));
                            esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4 + 4);
                            __asm__("cdq ");
                        }
                    }
                } else {
                    edx14 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(esp5) + 0x268);
                    eax89 = fun_401db0(edx14);
                    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4 + 4);
                }
                if (!(*reinterpret_cast<unsigned char*>(&ebx88) & 64) || ((less92 = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx14) < reinterpret_cast<int32_t>(0)), !reinterpret_cast<uint1_t>(less92 | reinterpret_cast<uint1_t>(edx14 == 0))) || static_cast<int1_t>(!less92))) {
                    esi93 = eax89;
                    edi94 = edx14;
                } else {
                    esi93 = reinterpret_cast<struct s5*>(-reinterpret_cast<uint32_t>(eax89));
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx88) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx88) + 1) | 1);
                    edi94 = reinterpret_cast<struct s5*>(-(reinterpret_cast<uint32_t>(&edx14->f0) + reinterpret_cast<uint1_t>(!!eax89)));
                    v25 = ebx88;
                }
                if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx88) + 1) & 0x80)) {
                    edi94 = reinterpret_cast<struct s5*>(0);
                }
                ecx95 = v26;
                if (reinterpret_cast<int32_t>(ecx95) >= reinterpret_cast<int32_t>(0)) {
                    v25 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(ebx88) & 0xfffffff7);
                } else {
                    ecx95 = reinterpret_cast<struct s5*>(1);
                }
                if (!(reinterpret_cast<uint32_t>(esi93) | reinterpret_cast<uint32_t>(edi94))) {
                    v24 = reinterpret_cast<struct s5*>(0);
                }
                eax96 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) + 0x25b);
                v97 = eax96;
                while ((v26 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(ecx95) - 1), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ecx95) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ecx95 == 0))) || reinterpret_cast<uint32_t>(esi93) | reinterpret_cast<uint32_t>(edi94)) {
                    __asm__("cdq ");
                    eax98 = fun_4032d0(esi93, edi94, v74, ecx95);
                    eax99 = fun_403260(esi93, edi94, v74, ecx95);
                    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 - 4 + 16 + 4 - 4 - 4 - 4 - 4 - 4 + 16 + 4);
                    esi93 = eax99;
                    edi94 = ecx95;
                    if (reinterpret_cast<int32_t>(eax98 + 48) > reinterpret_cast<int32_t>(57)) {
                    }
                    ecx95 = v26;
                    eax96 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v97) - 1);
                    v97 = eax96;
                }
                ecx100 = v25;
                ebp7 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(esp5) + 0x25b - reinterpret_cast<uint32_t>(eax96));
                eax101 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(eax96) + 1);
                v51 = eax101;
                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx100) + 1) & 2 && (*reinterpret_cast<signed char*>(&v4) != 48 || !ebp7)) {
                    ebp7 = reinterpret_cast<struct s5*>(&ebp7->pad4);
                    v51 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(eax101) - 1);
                    goto addr_401a50_41;
                }
                addr_4018b2_83:
                v74 = 16;
                if (*reinterpret_cast<unsigned char*>(&v25) & 0x80) {
                    v24 = reinterpret_cast<struct s5*>(2);
                    goto addr_4018f7_93;
                }
            }
        }
    }
    addr_401b87_31:
    return 0;
}

void** fun_4012d0(int32_t a1, void** a2) {
    void** eax3;
    void** ecx4;
    void** eax5;

    if (!a1) {
        eax3 = a2;
        ecx4 = *reinterpret_cast<void***>(eax3 + 12);
        if (*reinterpret_cast<unsigned char*>(&ecx4 + 1) & 16) {
            eax3 = fun_4030e0(eax3);
        }
    } else {
        eax3 = *reinterpret_cast<void***>(a2 + 12);
        if (*reinterpret_cast<unsigned char*>(&eax3 + 1) & 16) {
            fun_4030e0(a2);
            eax5 = *reinterpret_cast<void***>(a2 + 12);
            *reinterpret_cast<unsigned char*>(&eax5 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax5 + 1) & 0xee);
            *reinterpret_cast<int32_t*>(a2 + 24) = 0;
            *reinterpret_cast<void***>(a2 + 12) = eax5;
            *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(a2 + 8) = reinterpret_cast<void**>(0);
            return eax5;
        }
    }
    return eax3;
}

int32_t GetACP = 0xa250;

int32_t GetOEMCP = 0xa25a;

int32_t fun_402890(int32_t a1) {
    int32_t eax2;

    eax2 = a1;
    g408b94 = 0;
    if (eax2 != -2) {
        if (eax2 != -3) {
            if (eax2 == -4) {
                eax2 = g408bb8;
                g408b94 = 1;
            }
            return eax2;
        } else {
            g408b94 = 1;
            goto GetACP;
        }
    } else {
        g408b94 = 1;
        goto GetOEMCP;
    }
}

int32_t HeapCreate = 0xa2b6;

int32_t HeapDestroy = 0xa2a8;

int32_t fun_402b80() {
    void* eax1;
    struct s14* eax2;
    void* eax3;

    eax1 = reinterpret_cast<void*>(HeapCreate());
    g408bd4 = eax1;
    if (eax1) {
        eax2 = fun_4035e0();
        if (eax2) {
            goto 1;
        } else {
            eax3 = g408bd4;
            HeapDestroy();
            goto eax3;
        }
    } else {
        goto 1;
    }
}

void fun_401f20(int32_t a1) {
    fun_401f40(a1, 1, 0);
    return;
}

uint32_t fun_401eb0() {
    uint32_t eax1;
    uint32_t eax2;
    uint32_t esi3;
    uint32_t edi4;
    struct s3* eax5;
    void** v6;
    struct s3* ecx7;
    void** eax8;
    void** v9;
    struct s3* eax10;
    uint32_t eax11;

    eax1 = fun_403150();
    *reinterpret_cast<signed char*>(&eax1) = g408954;
    if (!*reinterpret_cast<signed char*>(&eax1)) {
        return eax1;
    }
    eax2 = g409d00;
    esi3 = 3;
    edi4 = 0;
    if (reinterpret_cast<int32_t>(eax2) > reinterpret_cast<int32_t>(3)) 
        goto addr_403532_5;
    addr_403583_6:
    return edi4;
    addr_403532_5:
    do {
        eax5 = g408cf0;
        if (*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax5) + esi3 * 4)) {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax5) + esi3 * 4) + 12)) & 0x83 && (v6 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax5) + esi3 * 4), eax8 = fun_404260(ecx7, v6), eax8 != 0xffffffff)) {
                ++edi4;
            }
            if (reinterpret_cast<int32_t>(esi3) >= reinterpret_cast<int32_t>(20)) {
                ecx7 = g408cf0;
                v9 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ecx7) + esi3 * 4);
                fun_403590(ecx7, v9);
                eax10 = g408cf0;
                *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax10) + esi3 * 4) = reinterpret_cast<void**>(0);
            }
        }
        eax11 = g409d00;
        ++esi3;
    } while (reinterpret_cast<int32_t>(esi3) < reinterpret_cast<int32_t>(eax11));
    goto addr_403583_6;
}

struct s27 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s28 {
    signed char[16] pad16;
    signed char f16;
};

struct s29 {
    signed char[16] pad16;
    signed char f16;
};

struct s30 {
    signed char[16] pad16;
    signed char f16;
};

struct s31 {
    signed char[16] pad16;
    signed char f16;
};

struct s32 {
    signed char[16] pad16;
    signed char f16;
};

struct s33 {
    signed char[16] pad16;
    signed char f16;
};

struct s34 {
    signed char[1452314768] pad1452314768;
    signed char f1452314768;
};

void fun_401084() {
    uint32_t edx1;
    int32_t edx2;
    int32_t* eax3;
    uint1_t cf4;
    unsigned char* eax5;
    struct s27* eax6;
    unsigned char tmp8_7;
    signed char* ebx8;
    uint1_t cf9;
    unsigned char* ebx10;
    unsigned char* ebx11;
    uint32_t edx12;
    void* eax13;
    struct s28* ebx14;
    struct s29* ebx15;
    struct s30* ebx16;
    struct s31* ebx17;
    void* eax18;
    struct s32* ebx19;
    struct s33* ebx20;
    struct s34* eax21;

    edx1 = edx2 + *eax3 + cf4;
    eax5 = &eax6->f1;
    tmp8_7 = reinterpret_cast<unsigned char>(*ebx8 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax5) + 1));
    cf9 = reinterpret_cast<uint1_t>(tmp8_7 < *ebx10);
    *ebx11 = tmp8_7;
    *eax5 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax5 + *reinterpret_cast<signed char*>(&eax5)) + cf9);
    edx12 = edx1 ^ *eax5;
    eax13 = reinterpret_cast<void*>(eax5 + 1);
    ebx14->f16 = reinterpret_cast<signed char>(ebx15->f16 + *reinterpret_cast<signed char*>(&eax13));
    ebx16->f16 = reinterpret_cast<signed char>(ebx17->f16 + *reinterpret_cast<signed char*>(&edx12));
    eax18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax13) + 1 + 1);
    ebx19->f16 = reinterpret_cast<signed char>(ebx20->f16 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax18) + 1));
    eax21 = reinterpret_cast<struct s34*>(reinterpret_cast<int32_t>(eax18) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax21) + 0x56909090) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax21) + 0x56909090) + *reinterpret_cast<signed char*>(&edx12));
}

int32_t fun_4011c1() {
    int32_t** eax1;
    int32_t ebp2;
    int32_t ecx3;
    int32_t ebp4;
    int32_t eax5;

    eax1 = *reinterpret_cast<int32_t***>(ebp2 - 20);
    ecx3 = **eax1;
    *reinterpret_cast<int32_t*>(ebp4 - 32) = ecx3;
    eax5 = fun_402010(ecx3, eax1);
    return eax5;
}

void fun_401df0() {
    uint32_t eax1;
    struct s3* eax2;
    void* edx3;
    int32_t ecx4;
    uint32_t eax5;
    int32_t* edx6;

    eax1 = g409d00;
    if (eax1) {
        if (reinterpret_cast<int32_t>(eax1) >= reinterpret_cast<int32_t>(20)) {
            addr_401e10_3:
            eax2 = fun_403480(eax1, 4);
            g408cf0 = eax2;
            if (!eax2 && (g409d00 = 20, eax2 = fun_403480(20, 4), g408cf0 = eax2, !eax2)) {
                fun_401200(26);
                eax2 = g408cf0;
            }
        } else {
            eax1 = 20;
            goto addr_401e0b_6;
        }
    } else {
        eax1 = 0x200;
        goto addr_401e0b_6;
    }
    edx3 = reinterpret_cast<void*>(0);
    ecx4 = 0x406078;
    while (*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(edx3)) = ecx4, ecx4 = ecx4 + 32, edx3 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx3) + 4), ecx4 < 0x4062f8) {
        eax2 = g408cf0;
    }
    eax5 = 0;
    edx6 = reinterpret_cast<int32_t*>(0x406088);
    do {
        if ((*reinterpret_cast<int32_t**>((reinterpret_cast<int32_t>(eax5) >> 5) * 4 + 0x408be0))[(eax5 & 31) * 2] == -1 || !(*reinterpret_cast<int32_t**>((reinterpret_cast<int32_t>(eax5) >> 5) * 4 + 0x408be0))[(eax5 & 31) * 2]) {
            *edx6 = -1;
        }
        edx6 = edx6 + 8;
        ++eax5;
    } while (reinterpret_cast<int32_t>(edx6) < 0x4060e8);
    return;
    addr_401e0b_6:
    g409d00 = eax1;
    goto addr_401e10_3;
}

unsigned char g13b40040;

struct s35 {
    signed char[1] pad1;
    void* f1;
};

struct s36 {
    signed char[352337941] pad352337941;
    unsigned char f352337941;
};

struct s37 {
    signed char[1] pad1;
    void* f1;
};

struct s38 {
    uint32_t f0;
    signed char f1;
};

struct s39 {
    signed char[27] pad27;
    signed char f27;
    signed char[1778401273] pad1778401301;
    unsigned char f1778401301;
};

signed char g4050503;

struct s40 {
    void* f0;
    signed char[4199879] pad4199880;
    void* f4199880;
};

struct s41 {
    unsigned char f0;
    signed char[2046836758] pad2046836759;
    unsigned char f2046836759;
};

struct s42 {
    unsigned char f0;
    unsigned char f1;
};

unsigned char g10100e10;

void fun_401bac(int16_t cx) {
    uint32_t ecx1;
    unsigned char dl2;
    void** eax3;
    struct s35* eax4;
    unsigned char tmp8_5;
    signed char bl6;
    uint1_t cf7;
    void** tmp32_8;
    void** eax9;
    struct s36* edx10;
    void* edx11;
    struct s37* eax12;
    unsigned char tmp8_13;
    signed char bl14;
    uint1_t cf15;
    unsigned char tmp8_16;
    uint1_t cf17;
    void** eax18;
    unsigned char tmp8_19;
    signed char* esi20;
    uint1_t cf21;
    unsigned char* esi22;
    unsigned char* esi23;
    unsigned char tmp8_24;
    signed char bh25;
    struct s38* eax26;
    unsigned char bh27;
    struct s39* edx28;
    signed char* eax29;
    uint32_t eax30;
    unsigned char tmp8_31;
    uint1_t cf32;
    void* esp33;
    int32_t* eax34;
    unsigned char tmp8_35;
    unsigned char tmp8_36;
    signed char bl37;
    uint1_t cf38;
    struct s40* eax39;
    struct s41* edx40;
    int32_t eax41;
    int32_t edi42;
    void* tmp8_43;
    void* bl44;
    uint1_t cf45;
    struct s42* eax46;
    unsigned char tmp8_47;
    uint1_t cf48;
    unsigned char* eax49;
    unsigned char tmp8_50;
    signed char bl51;
    uint1_t cf52;
    uint1_t cf53;
    void** eax54;
    uint1_t cf55;
    uint1_t cf56;
    uint1_t cf57;
    void* tmp8_58;
    uint1_t cf59;
    void* tmp8_60;
    uint1_t cf61;
    void* tmp8_62;
    uint1_t cf63;
    void* tmp8_64;
    uint1_t cf65;
    void* tmp8_66;
    uint1_t cf67;
    struct s41* tmp32_68;
    struct s41* edx69;
    void* tmp8_70;
    uint1_t cf71;
    void** tmp32_72;
    void* tmp8_73;
    uint1_t cf74;
    void* tmp8_75;
    uint1_t cf76;
    uint32_t ecx77;
    unsigned char tmp8_78;

    *reinterpret_cast<int16_t*>(&ecx1) = cx;
    g13b40040 = reinterpret_cast<unsigned char>(g13b40040 ^ dl2);
    eax3 = &eax4->f1;
    tmp8_5 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx1) + bl6);
    cf7 = reinterpret_cast<uint1_t>(tmp8_5 < *reinterpret_cast<unsigned char*>(&ecx1));
    *reinterpret_cast<unsigned char*>(&ecx1) = tmp8_5;
    tmp32_8 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax3) + reinterpret_cast<int32_t>(*eax3) + cf7);
    eax9 = tmp32_8;
    edx10 = reinterpret_cast<struct s36*>(reinterpret_cast<int32_t>(edx11) + 1);
    *reinterpret_cast<unsigned char*>(&eax9) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax9) + 64) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_8) < reinterpret_cast<uint32_t>(eax3)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + reinterpret_cast<uint32_t>(edx10) + 0x14950040) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + reinterpret_cast<uint32_t>(edx10) + 0x14950040) + *reinterpret_cast<unsigned char*>(&ecx1));
    eax12 = reinterpret_cast<struct s37*>(reinterpret_cast<uint32_t>(eax9) + 1);
    tmp8_13 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx10) + bl14);
    cf15 = reinterpret_cast<uint1_t>(tmp8_13 < *reinterpret_cast<unsigned char*>(&edx10));
    *reinterpret_cast<unsigned char*>(&edx10) = tmp8_13;
    tmp8_16 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx10) + 0x15004015) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx1) + 1));
    cf17 = reinterpret_cast<uint1_t>(tmp8_16 < *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx10) + 0x15004015));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx10) + 0x15004015) = tmp8_16;
    *reinterpret_cast<unsigned char*>(&eax12) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax12) + 64) + cf15) + 64) + cf17);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + reinterpret_cast<uint32_t>(edx10)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + reinterpret_cast<uint32_t>(edx10)) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax12) + 1));
    eax18 = &eax12->f1;
    tmp8_19 = reinterpret_cast<unsigned char>(*esi20 + *reinterpret_cast<unsigned char*>(&eax18));
    cf21 = reinterpret_cast<uint1_t>(tmp8_19 < *esi22);
    *esi23 = tmp8_19;
    *reinterpret_cast<unsigned char*>(&eax18) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax18) + 64) + cf21);
    tmp8_24 = reinterpret_cast<unsigned char>(bh25 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx10) + 1));
    eax26 = reinterpret_cast<struct s38*>(reinterpret_cast<uint32_t>(eax18) + reinterpret_cast<int32_t>(*eax18) + reinterpret_cast<uint1_t>(tmp8_24 < bh27));
    edx28 = reinterpret_cast<struct s39*>(reinterpret_cast<uint32_t>(edx10) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax26) + reinterpret_cast<uint32_t>(eax26) * 2));
    edx28->f27 = reinterpret_cast<signed char>(edx28->f27 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx1) + 1));
    eax29 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax26) + 1);
    *eax29 = reinterpret_cast<signed char>(*eax29 + *reinterpret_cast<signed char*>(&eax29));
    eax30 = reinterpret_cast<uint32_t>(eax29 + 0x5050105 + 0x5050505);
    tmp8_31 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax30) + g4050503);
    cf32 = reinterpret_cast<uint1_t>(tmp8_31 < *reinterpret_cast<unsigned char*>(&eax30));
    *reinterpret_cast<unsigned char*>(&eax30) = tmp8_31;
    esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 2);
    eax34 = reinterpret_cast<int32_t*>(eax30 + 0x158b0040 + cf32 + 1);
    tmp8_35 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax34) + tmp8_24);
    *reinterpret_cast<unsigned char*>(&eax34) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(tmp8_35 + 64) + reinterpret_cast<uint1_t>(tmp8_35 < *reinterpret_cast<unsigned char*>(&eax34)));
    tmp8_36 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx28) + 0x6a004015) + bl37);
    cf38 = reinterpret_cast<uint1_t>(tmp8_36 < *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx28) + 0x6a004015));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx28) + 0x6a004015) = tmp8_36;
    eax39 = reinterpret_cast<struct s40*>(reinterpret_cast<uint32_t>(eax34) - (*eax34 + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax34) < *eax34 + cf38)));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp33) + reinterpret_cast<uint32_t>(eax39)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp33) + reinterpret_cast<uint32_t>(eax39)) + *reinterpret_cast<signed char*>(&eax39));
    *reinterpret_cast<signed char*>(&eax39) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax39) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4);
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(esp33) + reinterpret_cast<uint32_t>(eax39)) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp33) + reinterpret_cast<uint32_t>(eax39)) + reinterpret_cast<uint32_t>(eax39);
    *reinterpret_cast<signed char*>(&eax39) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax39) + 2) + 4) + 4) + 4) + 4) + 4);
    edx40 = reinterpret_cast<struct s41*>(reinterpret_cast<uint32_t>(edx28) + reinterpret_cast<int32_t>(eax39->f4199880));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax39) - 0x53ffbfe9) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax39) - 0x53ffbfe9) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx40)));
    eax41 = edi42 + 1 + 1;
    *reinterpret_cast<signed char*>(eax41 + 0x43004018) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax41 + 0x43004018) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax41) + 1));
    tmp8_43 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx40)) + reinterpret_cast<signed char>(bl44));
    cf45 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_43) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx40)));
    *reinterpret_cast<void**>(&edx40) = tmp8_43;
    eax46 = reinterpret_cast<struct s42*>(eax41 + 1 + 0x187a0040 + cf45 + 1);
    tmp8_47 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx40) + 0x7a004017) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax46) + 1));
    cf48 = reinterpret_cast<uint1_t>(tmp8_47 < *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx40) + 0x7a004017));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx40) + 0x7a004017) = tmp8_47;
    eax46->f0 = reinterpret_cast<unsigned char>(eax46->f0 - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&eax46) + reinterpret_cast<uint1_t>(eax46->f0 < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&eax46) + cf48))));
    eax49 = &eax46->f1;
    tmp8_50 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax49) + 1) + bl51);
    cf52 = reinterpret_cast<uint1_t>(tmp8_50 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax49) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax49) + 1) = tmp8_50;
    cf53 = reinterpret_cast<uint1_t>(*eax49 < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&eax49) + cf52));
    *eax49 = reinterpret_cast<unsigned char>(*eax49 - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&eax49) + cf53));
    eax54 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax49)));
    cf55 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*eax54) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax54)) + cf53));
    *eax54 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax54) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax54)) + cf55));
    cf56 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*eax54) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax54)) + cf55));
    *eax54 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax54) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax54)) + cf56));
    eax39->f0 = *reinterpret_cast<void**>(&eax54);
    cf57 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*eax54) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax54)) + cf56));
    *eax54 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax54) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax54)) + cf57));
    *reinterpret_cast<void**>(&eax54) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax54)) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax54) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax54)) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax54) + cf57))));
    *eax54 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax54) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx40)));
    *eax54 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax54) + reinterpret_cast<uint32_t>(edx40));
    tmp8_58 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx40)) + reinterpret_cast<unsigned char>(*eax54));
    cf59 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_58) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx40)));
    *reinterpret_cast<void**>(&edx40) = tmp8_58;
    tmp8_60 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax54) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx40))) + cf59);
    cf61 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_60) < reinterpret_cast<unsigned char>(*eax54));
    *eax54 = tmp8_60;
    tmp8_62 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax54) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx40))) + cf61);
    cf63 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_62) < reinterpret_cast<unsigned char>(*eax54));
    *eax54 = tmp8_62;
    tmp8_64 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax54) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx40))) + cf63);
    cf65 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_64) < reinterpret_cast<unsigned char>(*eax54));
    *eax54 = tmp8_64;
    tmp8_66 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax54) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx40))) + cf65);
    cf67 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_66) < reinterpret_cast<unsigned char>(*eax54));
    *eax54 = tmp8_66;
    *eax54 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax54) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx40))) + cf67);
    tmp32_68 = reinterpret_cast<struct s41*>(reinterpret_cast<uint32_t>(edx40) + reinterpret_cast<unsigned char>(*eax54));
    edx69 = tmp32_68;
    tmp8_70 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax54) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx69))) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_68) < reinterpret_cast<uint32_t>(edx40)));
    cf71 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_70) < reinterpret_cast<unsigned char>(*eax54));
    *eax54 = tmp8_70;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax54) + reinterpret_cast<uint32_t>(edx69)) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax54) + reinterpret_cast<uint32_t>(edx69)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax54))) + cf71);
    tmp32_72 = eax54 + 0x10101010;
    tmp8_73 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*tmp32_72) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx69))) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_72) < reinterpret_cast<uint32_t>(eax54)));
    cf74 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_73) < reinterpret_cast<unsigned char>(*tmp32_72));
    *tmp32_72 = tmp8_73;
    *tmp32_72 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*tmp32_72) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx69))) + cf74);
    *tmp32_72 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*tmp32_72) | *reinterpret_cast<unsigned char*>(&ecx1));
    *tmp32_72 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*tmp32_72) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx69)));
    *tmp32_72 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*tmp32_72) | reinterpret_cast<uint32_t>(edx69));
    tmp8_75 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*tmp32_72) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx69)))));
    cf76 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_75) < reinterpret_cast<unsigned char>(*tmp32_72));
    *tmp32_72 = tmp8_75;
    *reinterpret_cast<unsigned char*>(edx69) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx69) + *reinterpret_cast<unsigned char*>(&ecx1)) + cf76);
    ecx77 = ecx1 | *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(tmp32_72) + reinterpret_cast<uint32_t>(edx69));
    tmp8_78 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(g10100e10 + *reinterpret_cast<signed char*>(&ecx77))));
    g10100e10 = tmp8_78;
    *reinterpret_cast<unsigned char*>(tmp32_72 + 0x90909090) = __intrinsic();
}

struct s43 {
    signed char[1] pad1;
    int32_t f1;
};

void fun_402918(signed char* ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    int32_t* eax5;
    struct s43* eax6;

    *eax2 = reinterpret_cast<signed char>(*eax3 - al4);
    eax5 = &eax6->f1;
    *ecx = reinterpret_cast<signed char>(*ecx + *reinterpret_cast<signed char*>(&ecx));
    *eax5 = *eax5 - reinterpret_cast<int32_t>(eax5);
    __asm__("movaps [eax+0x0], xmm0");
}

struct s44 {
    signed char[4] pad4;
    uint32_t f4;
};

int32_t fun_402be0(struct s44* a1, int32_t a2);

int32_t fun_402c6a() {
    int32_t eax1;
    struct s11* ecx2;

    eax1 = 0;
    ecx2 = g0;
    if (reinterpret_cast<int1_t>(ecx2->f4 == fun_402be0) && ecx2->f8 == ecx2->f12->f12) {
        eax1 = 1;
    }
    return eax1;
}

struct s45 {
    signed char[4] pad4;
    uint32_t f4;
};

struct s46 {
    signed char[12] pad12;
    struct s10* f12;
};

int32_t fun_402cb0(struct s45* a1, struct s10* a2, int32_t a3) {
    unsigned char* esi4;
    unsigned char dh5;
    unsigned char* eax6;
    struct s46* ebp7;
    struct s10* ebx8;
    int32_t eax9;
    int32_t esi10;
    int32_t* edi11;
    int32_t ecx12;
    int32_t eax13;
    int32_t* edi14;
    int32_t ecx15;

    *esi4 = reinterpret_cast<unsigned char>(*esi4 ^ reinterpret_cast<unsigned char>(dh5 ^ *eax6));
    ebp7 = reinterpret_cast<struct s46*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4);
    ebx8 = a2;
    if (a1->f4 & 6) {
        fun_402c02(ebx8, 0xff);
        eax9 = 1;
    } else {
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebx8) - 4) = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp7) - 8);
        esi10 = ebx8->f12;
        edi11 = ebx8->f8;
        while (esi10 != -1) {
            ecx12 = esi10 + esi10 * 2;
            if ((edi11 + ecx12)[1] && (eax13 = reinterpret_cast<int32_t>((edi11 + ecx12)[1]()), ebp7 = ebp7, esi10 = esi10, ebx8 = ebp7->f12, !!eax13)) {
                if (__intrinsic()) 
                    goto addr_402d4a_7;
                edi14 = ebx8->f8;
                fun_402bc0(ebx8);
                ebp7 = reinterpret_cast<struct s46*>(ebx8 + 1);
                fun_402c02(ebx8, esi10);
                ecx15 = esi10 + esi10 * 2;
                fun_402c96(ecx15, 1);
                ebx8->f12 = edi14[ecx15];
                (edi14 + ecx15)[2]();
            }
            edi11 = ebx8->f8;
            esi10 = edi11[esi10 + esi10 * 2];
        }
        goto addr_402d51_10;
    }
    addr_402d6d_11:
    return eax9;
    addr_402d51_10:
    eax9 = 1;
    goto addr_402d6d_11;
    addr_402d4a_7:
    eax9 = 0;
    goto addr_402d6d_11;
}

void fun_402c8d(int32_t ecx) {
    goto 0x402ca0;
}

int32_t fun_402be0(struct s44* a1, int32_t a2) {
    int32_t eax3;
    int32_t* v4;

    eax3 = 1;
    if (a1->f4 & 6) {
        *v4 = a2;
        eax3 = 3;
    }
    return eax3;
}

void fun_404130() {
    fun_401200(2);
    return;
}

int32_t GetVersion = 0xa152;

void*** g40892c = reinterpret_cast<void***>(0);

uint32_t g408928 = 0;

struct s3* g408924 = reinterpret_cast<struct s3*>(0);

uint32_t g408920 = 0;

int32_t GetCommandLineA = 0xa140;

void** g408940 = reinterpret_cast<void**>(0);

void fun_4010e0() {
    struct s11* eax1;
    uint32_t eax2;
    void*** edx3;
    uint32_t ecx4;
    struct s3* ecx5;
    int32_t eax6;
    struct s9* eax7;
    void** eax8;
    struct s9* eax9;
    void** eax10;
    void** eax11;
    int32_t ecx12;
    int32_t eax13;

    eax1 = g0;
    g0 = reinterpret_cast<struct s11*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4);
    eax2 = reinterpret_cast<uint32_t>(GetVersion());
    edx3 = reinterpret_cast<void***>(0);
    *reinterpret_cast<signed char*>(&edx3) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax2) + 1);
    g40892c = edx3;
    ecx4 = eax2 & 0xff;
    g408928 = ecx4;
    ecx5 = reinterpret_cast<struct s3*>((ecx4 << 8) + reinterpret_cast<uint32_t>(edx3));
    g408924 = ecx5;
    g408920 = eax2 >> 16;
    eax6 = fun_402b80();
    if (!eax6) {
        fun_401200(28);
    }
    fun_402980();
    fun_402970();
    eax7 = reinterpret_cast<struct s9*>(GetCommandLineA());
    g409d04 = eax7;
    eax8 = fun_402540(ecx5);
    g4088f8 = eax8;
    if (!eax8 || (eax9 = g409d04, !eax9)) {
        fun_401f00(0xff);
    }
    fun_402290();
    fun_4021a0(ecx5);
    fun_401ed0();
    eax10 = g40893c;
    g408940 = eax10;
    eax11 = g408934;
    ecx12 = g408930;
    eax13 = fun_401000(ecx12, eax11, eax10);
    fun_401f00(eax13);
    g0 = eax1;
    return;
}

struct s47 {
    int32_t f0;
    int32_t f4;
};

void fun_4011d6() {
    int32_t* esp1;
    int32_t ebp2;
    int32_t ebp3;
    struct s47* esp4;

    esp1 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp2 - 24)) - 4);
    *esp1 = *reinterpret_cast<int32_t*>(ebp3 - 32);
    esp4 = reinterpret_cast<struct s47*>(esp1 - 1);
    esp4->f0 = 0x4011e2;
    fun_401f20(esp4->f4);
}

struct s48 {
    signed char[24] pad24;
    struct s10* f24;
    int32_t f28;
};

void fun_402d75(struct s48* a1) {
    int32_t v2;
    struct s10* v3;

    v2 = a1->f28;
    v3 = a1->f24;
    fun_402c02(v3, v2);
    return;
}

void fun_404566() {
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
}
