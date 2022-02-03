
int32_t fun_8048298() {
    unsigned char* ebp1;
    int32_t ebx2;

    while (*ebp1 >= 48 && reinterpret_cast<signed char>(*ebp1 - 48) <= reinterpret_cast<signed char>(9)) {
        ++ebp1;
    }
    return ebx2;
}

struct s0 {
    unsigned char f0;
    unsigned char f1;
};

struct s1 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s2 {
    unsigned char f0;
    unsigned char f1;
};

unsigned char fun_80482bc() {
    unsigned char al1;
    unsigned char* ebp2;
    struct s0* ebp3;
    struct s1* ebp4;
    unsigned char ah5;
    struct s2* ebp6;
    unsigned char al7;
    unsigned char al8;

    al1 = *ebp2;
    ebp3 = reinterpret_cast<struct s0*>(&ebp4->f1);
    if (al1 == 92) {
        al1 = ebp3->f0;
        if (al1 == 97) {
            return 7;
        } else {
            if (al1 == 98) {
                return 8;
            } else {
                if (al1 == 0x74) {
                    return 9;
                } else {
                    if (al1 == 0x72) {
                        return 13;
                    } else {
                        if (al1 == 0x6e) {
                            return 10;
                        } else {
                            if (reinterpret_cast<signed char>(al1) >= reinterpret_cast<signed char>(48) && reinterpret_cast<signed char>(al1) <= reinterpret_cast<signed char>(55)) {
                                ah5 = reinterpret_cast<unsigned char>(al1 - 48);
                                ebp6 = reinterpret_cast<struct s2*>(&ebp3->f1);
                                al7 = reinterpret_cast<unsigned char>(ebp6->f0 - 48);
                                if (ebp6->f0 >= 48 && (reinterpret_cast<signed char>(al7) <= reinterpret_cast<signed char>(7) && ((ah5 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ah5 << 3) ^ al7), al8 = reinterpret_cast<unsigned char>(ebp6->f1 - 48), ebp6->f1 >= 48) && reinterpret_cast<signed char>(al8) <= reinterpret_cast<signed char>(7)))) {
                                    ah5 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ah5 << 3) ^ al8);
                                }
                                al1 = ah5;
                            }
                        }
                    }
                }
            }
        }
    }
    return al1;
}

signed char g8048445;

int32_t fun_8048246() {
    int32_t ebx1;
    int32_t edx2;
    int32_t ebp3;
    int32_t eax4;

    if (ebx1 >= edx2) {
        __asm__("int 0x80");
        if (0) {
            if (ebp3 - 0x8048c45) {
                __asm__("int 0x80");
            }
            while (1) {
                __asm__("int 0x80");
            }
        } else {
            eax4 = 0x800;
        }
    }
    *reinterpret_cast<signed char*>(&eax4) = g8048445;
    return eax4;
}

int32_t fun_8048275() {
    signed char* ebp1;
    signed char al2;
    int32_t ebp3;

    *ebp1 = al2;
    if (ebp3 + 1 == 0x8049445) {
        __asm__("int 0x80");
    }
    return 4;
}

struct s3 {
    signed char[93] pad93;
    signed char f5d;
};

struct s4 {
    signed char[93] pad93;
    signed char f5d;
};

unsigned char g8048337;

int32_t g8048439;

int32_t g804843d;

signed char g8048338;

signed char g8048336;

int32_t g8048441;

signed char g8048335;

void fun_8048000(int32_t* ecx) {
    int1_t less_or_equal2;
    int32_t eax3;
    int32_t* ebx4;
    int32_t* ebx5;
    int32_t eax6;
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
    void** eax19;
    signed char al20;
    signed char* eax21;
    void** eax22;
    signed char dh23;
    unsigned char* eax24;
    unsigned char* edi25;
    signed char* edi26;
    unsigned char tmp8_27;
    uint1_t cf28;
    struct s3* ebp29;
    struct s4* ebp30;
    signed char bl31;
    signed char* ebp32;
    signed char* v33;
    signed char* ebp34;
    signed char* v35;
    int32_t ebx36;
    int32_t ebx37;
    signed char* v38;
    unsigned char al39;
    signed char* ebp40;
    signed char* v41;
    signed char* v42;
    int32_t eax43;
    int32_t esi44;
    int32_t esi45;
    int32_t eax46;
    int32_t esi47;
    int32_t edi48;
    int32_t eax49;
    int1_t zf50;
    int1_t zf51;
    int1_t zf52;
    int1_t zf53;
    int1_t zf54;
    int32_t eax55;

    if (less_or_equal2) {
        *ecx = *ecx + eax3;
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(*eax19));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<uint32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax22) + reinterpret_cast<uint32_t>(eax22)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax22) + reinterpret_cast<uint32_t>(eax22)) + dh23);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<uint32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8);
        eax24 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax22) ^ 0x45000003);
        *reinterpret_cast<unsigned char*>(&eax24) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax24)))));
        *edi25 = reinterpret_cast<unsigned char>(*edi26 + *reinterpret_cast<unsigned char*>(&eax24));
        *eax24 = reinterpret_cast<unsigned char>(*eax24 + *reinterpret_cast<unsigned char*>(&eax24));
    }
    tmp8_27 = reinterpret_cast<unsigned char>(*eax24 + *reinterpret_cast<unsigned char*>(&eax24));
    cf28 = reinterpret_cast<uint1_t>(tmp8_27 < *eax24);
    *eax24 = tmp8_27;
    *eax24 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax24 + *reinterpret_cast<unsigned char*>(&eax24)) + cf28);
    ebp29->f5d = reinterpret_cast<signed char>(ebp30->f5d + bl31);
    g8048337 = 9;
    while (ebp32 = v33, !!ebp32) {
        if (*ebp32 == 0x632d) {
            ebp34 = ebp32 + 2;
            if (!*ebp34) {
                ebp34 = v35;
                if (!ebp34) 
                    goto 0x8048242;
            }
            fun_8048298();
            g8048439 = ebx36;
            g804843d = 1;
            if (*ebp34 != 45) 
                continue;
            fun_8048298();
            ebx37 = ebx36 - g8048439;
            if (ebx37 < 0) 
                goto 0x8048242;
            ebx36 = ebx37 + 1;
            g804843d = ebx36;
            continue;
        }
        if (*ebp32 == 0x7a2d) {
            g8048338 = 1;
            continue;
        }
        if (*ebp32 == 0x642d) {
            if (!ebp32[2]) {
                if (!v38) 
                    goto 0x8048242;
            }
            al39 = fun_80482bc();
            g8048337 = al39;
            continue;
        }
        if (*ebp32 != 0x662d) 
            goto addr_8048082_18;
        g8048336 = 1;
        ebp40 = ebp32 + 2;
        if (!*ebp40) 
            goto addr_8048117_20;
        do {
            addr_8048120_21:
            fun_8048298();
            if (ebx36 <= 0xff) {
                *reinterpret_cast<signed char*>(ebx36 + 0x8048339) = 1;
            }
            ++ebp40;
        } while (*(ebp40 - 1) == 44);
        continue;
        addr_8048117_20:
        ebp40 = v41;
        if (!ebp40) 
            goto 0x8048242; else 
            goto addr_8048120_21;
    }
    goto addr_8048145_25;
    addr_8048082_18:
    if (*ebp32 == 0x2d2d) {
        ebp32 = v42;
        if (ebp32) {
            addr_804814a_27:
            if (*ebp32 == 45) {
                addr_8048146_28:
                eax43 = 0;
            } else {
                eax43 = 5;
                __asm__("int 0x80");
                if (0) 
                    goto 0x8048242;
            }
        } else {
            addr_8048145_25:
            goto addr_8048146_28;
        }
        g8048441 = eax43;
        while (1) {
            addr_804816e_31:
            esi44 = g8048439;
            if (esi44 && (esi45 = esi44 - 1, !!esi45)) {
                g8048335 = 0;
                do {
                    eax46 = fun_8048246();
                    if (*reinterpret_cast<signed char*>(&eax46) == 10) 
                        goto addr_804816e_31;
                    --esi45;
                } while (esi45);
            }
            g8048335 = 0;
            esi47 = 1;
            edi48 = g804843d;
            do {
                eax49 = fun_8048246();
                if (*reinterpret_cast<unsigned char*>(&eax49) == 10) 
                    break;
                zf50 = g8048336 == 0;
                if (zf50) {
                    addr_80481de_38:
                    g8048335 = 2;
                    fun_8048275();
                    continue;
                } else {
                    zf51 = *reinterpret_cast<unsigned char*>(&eax49) == g8048337;
                    if (zf51) {
                        ++esi47;
                        zf52 = g8048338 == 1;
                        if (!zf52 && (zf53 = g8048335 == 2, zf53)) {
                            g8048335 = 1;
                            continue;
                        }
                    } else {
                        if (esi47 > 0xff) 
                            goto addr_804820b_43;
                        if (!*reinterpret_cast<signed char*>(esi47 + 0x8048339)) 
                            continue;
                    }
                }
                zf54 = g8048335 == 1;
                if (zf54) {
                    fun_8048275();
                    goto addr_80481de_38;
                }
                --edi48;
            } while (edi48);
            goto addr_80481ed_48;
            addr_8048214_49:
            fun_8048275();
            continue;
            addr_80481ed_48:
            do {
                addr_804820b_43:
                eax55 = fun_8048246();
            } while (*reinterpret_cast<signed char*>(&eax55) != 10);
            goto addr_8048214_49;
        }
    } else {
        goto addr_804814a_27;
    }
}

void fun_80482b8() {
    unsigned char* eax1;
    unsigned char al2;
    unsigned char* eax3;

    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<unsigned char>(al2 | *eax3);
    *eax1 = reinterpret_cast<unsigned char>(*eax1 + *reinterpret_cast<unsigned char*>(&eax1));
}

int32_t fun_804831c() {
    __asm__("pushad ");
    __asm__("int 0x80");
    __asm__("popad ");
    return 4;
}

void fun_804832f() {
}
