
uint32_t fun_80482df(uint32_t ecx) {
    int32_t esi2;
    uint32_t ecx3;
    signed char al4;
    uint32_t eax5;

    if (esi2) {
        ecx3 = 0;
        while (al4) {
            ++ecx3;
        }
        __asm__("int 0x80");
        eax5 = ecx3;
    }
    return eax5;
}

uint32_t fun_80482cf(uint32_t ecx);

uint32_t fun_804809d(uint32_t ecx) {
    void* v2;
    void* esi3;
    uint32_t v4;
    uint32_t v5;
    uint32_t ecx6;
    void* esi7;
    signed char* edi8;
    uint32_t eax9;
    uint32_t eax10;
    uint32_t ecx11;
    uint32_t eax12;
    uint32_t eax13;
    uint32_t eax14;
    void* esi15;
    signed char* esi16;
    void* esi17;
    signed char* esi18;
    void* esi19;
    signed char* esi20;
    void* esi21;
    void* esi22;
    void* v23;
    uint32_t eax24;
    void* esi25;
    void* v26;
    uint32_t eax27;
    void* esi28;
    void* v29;
    uint32_t eax30;
    void* esi31;
    uint32_t eax32;
    uint32_t ecx33;

    v2 = esi3;
    v4 = ecx;
    v5 = 0;
    while (ecx6 = v4, !!ecx6) {
        esi7 = v2;
        edi8 = reinterpret_cast<signed char*>(0x808839b);
        do {
            __asm__("lodsb ");
            *edi8 = *reinterpret_cast<signed char*>(&eax9);
            ++edi8;
            esi7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi7) + 1);
        } while (*reinterpret_cast<signed char*>(&eax9) != 10 && (--ecx6, !!ecx6));
        *edi8 = 0;
        v2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi7) + 1);
        v4 = ecx6;
        eax10 = fun_80482cf(8);
        if (eax10) {
            ecx11 = 9;
            eax12 = fun_80482cf(9);
            if (eax12) {
                eax13 = fun_80482cf(17);
                if (eax13) {
                    eax14 = fun_80482cf(12);
                    if (eax14) {
                        eax9 = fun_80482cf(10);
                        if (eax9) 
                            continue;
                        esi15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v2) + 62);
                        do {
                            __asm__("lodsb ");
                        } while (*reinterpret_cast<signed char*>(&eax9) != 10);
                        esi16 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi15) - 1);
                        *esi16 = 0;
                        fun_80482df(10);
                        fun_80482df(10);
                        *esi16 = 10;
                        fun_80482df(10);
                        eax9 = fun_80482df(10);
                        continue;
                    } else {
                        esi17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v2) + 12);
                        do {
                            __asm__("lodsb ");
                        } while (*reinterpret_cast<signed char*>(&eax14) != 10);
                        esi18 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi17) - 1);
                        *esi18 = 0;
                        eax9 = fun_80482df(12);
                        *esi18 = 10;
                        continue;
                    }
                } else {
                    esi19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v2) + 17);
                    do {
                        __asm__("lodsb ");
                    } while (*reinterpret_cast<signed char*>(&eax13) != 10);
                    esi20 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi19) - 1);
                    *esi20 = 0;
                    fun_80482df(17);
                    fun_80482df(17);
                    *esi20 = 10;
                    eax9 = fun_80482df(17);
                    continue;
                }
            }
            esi21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v2) + 9);
            do {
                __asm__("lodsb ");
            } while (*reinterpret_cast<signed char*>(&eax12) != 32);
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi21) - 1) = 0;
            if (v5 <= 0) 
                goto addr_80481d4_28;
        } else {
            v5 = 1;
            esi22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v2) + 8);
            v23 = esi22;
            do {
                __asm__("lodsb ");
            } while (*reinterpret_cast<signed char*>(&eax10) != 32);
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi22) - 1) = 0;
            fun_80482df(8);
            eax24 = fun_80482df(8);
            esi25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v23) + 23);
            v26 = esi25;
            do {
                __asm__("lodsb ");
            } while (*reinterpret_cast<signed char*>(&eax24) != 32);
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi25) - 1) = 0;
            fun_80482df(8);
            eax27 = fun_80482df(8);
            esi28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v26) + 15);
            v29 = esi28;
            do {
                __asm__("lodsb ");
            } while (*reinterpret_cast<signed char*>(&eax27) == 32);
            do {
                __asm__("lodsb ");
            } while (*reinterpret_cast<signed char*>(&eax27) != 32);
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi28) - 1) = 0;
            fun_80482df(8);
            eax30 = fun_80482df(8);
            esi31 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v29) + 8);
            do {
                __asm__("lodsb ");
            } while (*reinterpret_cast<signed char*>(&eax30) != 32);
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi31) - 1) = 0;
            eax32 = fun_80482df(8);
            ecx33 = 4 - eax32;
            if (reinterpret_cast<int32_t>(ecx33) <= reinterpret_cast<int32_t>(0)) 
                goto addr_8048183_39; else 
                goto addr_8048177_40;
        }
        addr_80481e5_41:
        fun_80482df(ecx11);
        eax9 = fun_80482df(ecx11);
        continue;
        addr_80481d4_28:
        ecx11 = 18;
        do {
            fun_80482df(ecx11);
            --ecx11;
        } while (ecx11);
        goto addr_80481e5_41;
        addr_8048183_39:
        fun_80482df(ecx33);
        fun_80482df(ecx33);
        eax9 = fun_80482df(ecx33);
        continue;
        addr_8048177_40:
        do {
            fun_80482df(ecx33);
            --ecx33;
        } while (ecx33);
        goto addr_8048183_39;
    }
    return eax9;
}

uint32_t fun_80482cf(uint32_t ecx) {
    uint32_t eax2;
    uint1_t cf3;
    int1_t zf4;
    unsigned char* esi5;
    unsigned char* edi6;

    eax2 = 0;
    cf3 = 0;
    zf4 = 1;
    do {
        if (!ecx) 
            break;
        --ecx;
        cf3 = reinterpret_cast<uint1_t>(*esi5 < *edi6);
        zf4 = *esi5 == *edi6;
        ++edi6;
        ++esi5;
    } while (zf4);
    if (!zf4) {
        eax2 = -static_cast<uint32_t>(reinterpret_cast<uint1_t>(0 < static_cast<uint32_t>(cf3))) | 1;
    }
    return eax2;
}

struct s0 {
    int32_t f0;
    uint32_t f4;
};

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
    int32_t ebx25;
    int32_t ebx26;
    signed char bl27;
    unsigned char tmp8_28;
    uint1_t cf29;
    int32_t ebp30;
    int32_t ebp31;
    signed char dl32;
    int32_t ebp33;
    int32_t* ebp34;
    uint32_t* esp35;
    void* esp36;
    int1_t zf37;
    uint32_t* esp38;
    uint32_t* esp39;
    struct s0* esp40;
    uint32_t* esp41;
    uint32_t ecx42;
    int32_t* esp43;
    int32_t* esp44;

    if (less_or_equal2) {
        *ecx = *ecx + eax3;
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(*eax19));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<int32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(eax22)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(eax22)) + dh23);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<int32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8);
        __asm__("wait ");
        eax24 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<unsigned char>(*eax22));
        *reinterpret_cast<signed char*>(ebx25 + 0x7000803) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx26 + 0x7000803) + bl27);
        *eax24 = reinterpret_cast<unsigned char>(*eax24 + *reinterpret_cast<signed char*>(&eax24));
    }
    tmp8_28 = reinterpret_cast<unsigned char>(*eax24 + *reinterpret_cast<signed char*>(&eax24));
    cf29 = reinterpret_cast<uint1_t>(tmp8_28 < *eax24);
    *eax24 = tmp8_28;
    *eax24 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax24 + *reinterpret_cast<signed char*>(&eax24)) + cf29);
    *reinterpret_cast<signed char*>(ebp30 - 0x77) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp31 - 0x77) + dl32);
    __asm__("in eax, 0x83");
    __asm__("in al, dx");
    ebp33 = *ebp34;
    esp35 = reinterpret_cast<uint32_t*>(ebp34 + 1 - 1);
    *esp35 = 5;
    esp36 = reinterpret_cast<void*>(esp35 + 1);
    __asm__("int 0x80");
    zf37 = *esp35 == 0;
    if (reinterpret_cast<int32_t>(*esp35) >= reinterpret_cast<int32_t>(0) && (*reinterpret_cast<uint32_t*>(ebp33 - 4) = *esp35, esp38 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(esp36) - 4), *esp38 = 3, esp36 = reinterpret_cast<void*>(esp38 + 1), !zf37)) {
        esp39 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(esp36) - 4);
        *esp39 = *esp38;
        esp40 = reinterpret_cast<struct s0*>(esp39 - 1);
        esp40->f0 = 6;
        esp41 = &esp40->f4;
        __asm__("int 0x80");
        ecx42 = *esp41;
        esp43 = reinterpret_cast<int32_t*>(esp41 + 1 - 1);
        *esp43 = 0x804808c;
        fun_80482df(ecx42);
        esp44 = esp43 + 1 - 1;
        *esp44 = 0x8048096;
        fun_804809d(ecx42);
        esp36 = reinterpret_cast<void*>(esp44 + 1);
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(esp36) - 4) = 1;
    __asm__("int 0x80");
}

struct s1 {
    unsigned char f0;
    signed char[113] pad114;
    unsigned char f72;
};

struct s2 {
    signed char[117] pad117;
    unsigned char f75;
};

struct s3 {
    signed char[117] pad117;
    unsigned char f75;
};

struct s4 {
    signed char[117] pad117;
    signed char f75;
};

struct s5 {
    signed char[117] pad117;
    unsigned char f75;
};

struct s6 {
    signed char[117] pad117;
    unsigned char f75;
};

uint32_t g3a443020;

struct s7 {
    signed char f0;
    signed char[96] pad97;
    unsigned char f61;
};

struct s8 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s9 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s10 {
    signed char[101] pad101;
    signed char f65;
};

struct s11 {
    signed char[102] pad102;
    unsigned char f66;
};

void fun_8048300(void* ecx) {
    uint56_t v2;
    int1_t of3;
    void* edx4;
    uint32_t edi5;
    void* edx6;
    unsigned char dl7;
    int1_t zf8;
    unsigned char* eax9;
    struct s1* eax10;
    int1_t below_or_equal11;
    struct s2* edx12;
    struct s3* edx13;
    unsigned char tmp8_14;
    struct s4* edx15;
    signed char al16;
    uint1_t cf17;
    struct s5* edx18;
    struct s6* edx19;
    uint32_t edi20;
    unsigned char ah21;
    struct s7* ebp22;
    int32_t ebx23;
    uint1_t below_or_equal24;
    unsigned char al25;
    unsigned char* eax26;
    int32_t ebx27;
    int1_t zf28;
    int32_t ebx29;
    signed char ah30;
    signed char ah31;
    unsigned char* eax32;
    unsigned char* eax33;
    unsigned char ah34;
    struct s8* esi35;
    struct s9* esi36;
    unsigned char dl37;
    struct s10* esi38;
    void* ebp39;
    int32_t esi40;
    unsigned char dl41;
    int1_t zf42;
    struct s11* ecx43;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 3) = reinterpret_cast<int32_t>(__return_address());
    __asm__("das ");
    if (of3) {
        addr_8048375_2:
        if (!0) {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edx4) + edi5 + 32) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edx6) + edi5 + 32) & dl7);
            goto addr_804837b_5;
        }
    } else {
        __asm__("outsd ");
        __asm__("arpl [edi], bp");
        __asm__("das ");
        if (!zf8) {
            addr_804837f_7:
            if (!1) {
                if (0) {
                }
                __asm__("outsd ");
                *reinterpret_cast<unsigned char*>(&eax9) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax10) | eax10->f0);
                goto addr_8048389_13;
            }
        } else {
            if (below_or_equal11) {
                addr_804837b_5:
                edx12->f75 = reinterpret_cast<unsigned char>(edx13->f75 & *reinterpret_cast<unsigned char*>(&eax10));
                goto addr_804837f_7;
            } else {
                __asm__("arpl [ebp+0x73], sp");
                tmp8_14 = reinterpret_cast<unsigned char>(edx15->f75 + al16);
                cf17 = reinterpret_cast<uint1_t>(tmp8_14 < edx18->f75);
                edx19->f75 = tmp8_14;
                if (!cf17) {
                    addr_804836a_16:
                    edi5 = edi20 & g3a443020;
                    eax10->f0 = reinterpret_cast<unsigned char>(eax10->f0 & ah21);
                    goto addr_8048375_2;
                } else {
                    __asm__("outsd ");
                    if (cf17) {
                        addr_8048391_18:
                        ebp22->f0 = reinterpret_cast<signed char>(ebp22->f0 + *reinterpret_cast<signed char*>(&ebx23));
                    } else {
                        below_or_equal24 = reinterpret_cast<uint1_t>(cf17 | reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 1 == 0));
                        if (below_or_equal24) {
                            if (!cf17) {
                                if (!below_or_equal24) {
                                    if (!cf17) {
                                        *reinterpret_cast<unsigned char*>(&eax10) = reinterpret_cast<unsigned char>(al25 | *eax26);
                                        *reinterpret_cast<int32_t*>(&v2) = ebx27;
                                        ebp22->f61 = reinterpret_cast<unsigned char>(ebp22->f61 & *reinterpret_cast<unsigned char*>(&ecx));
                                        zf28 = ebp22->f61 == 0;
                                        goto addr_804834d_27;
                                    }
                                }
                            }
                        } else {
                            *reinterpret_cast<int32_t*>(&v2) = ebx29;
                            if (__intrinsic()) {
                                addr_8048389_13:
                                *eax9 = reinterpret_cast<unsigned char>(*eax9 + ah30);
                                *eax9 = reinterpret_cast<unsigned char>(*eax9 + ah31);
                                *eax9 = reinterpret_cast<unsigned char>(*eax9 & *reinterpret_cast<unsigned char*>(&eax9));
                                ebx23 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 3);
                                goto addr_8048391_18;
                            } else {
                                *eax32 = reinterpret_cast<unsigned char>(*eax33 & ah34);
                                esi35->f65 = reinterpret_cast<unsigned char>(esi36->f65 & dl37);
                                cf17 = 0;
                                zf28 = esi38->f65 == 0;
                                if (0) {
                                    addr_804834d_27:
                                    __asm__("outsb ");
                                    if (!zf28) {
                                    }
                                } else {
                                    ebx27 = *reinterpret_cast<int32_t*>(&v2);
                                    ebp22 = reinterpret_cast<struct s7*>(reinterpret_cast<int32_t>(ebp39) - 1);
                                    __asm__("popad ");
                                    __asm__("outsb ");
                                    if (ebp22) {
                                        addr_8048399_32:
                                    } else {
                                        __asm__("popad ");
                                        __asm__("arpl [ebp+esi*2+0x72], si");
                                        if (0) {
                                            addr_8048398_34:
                                            goto addr_8048399_32;
                                        } else {
                                            below_or_equal24 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(esi40 - 1 == 0)));
                                            __asm__("popad ");
                                            __asm__("insd ");
                                            if (!__intrinsic()) {
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (ebp22->f0 < 0 == __intrinsic()) 
        goto addr_8048398_34; else 
        goto addr_8048398_34;
    __asm__("popad ");
    __asm__("arpl [ebp+esi*2+0x72], si");
    if (0) {
        goto addr_8048398_34;
    } else {
        eax10->f72 = reinterpret_cast<unsigned char>(eax10->f72 & dl41);
        zf42 = eax10->f72 == 0;
        __asm__("outsd ");
        if (zf42) {
            if (!zf42) {
                ecx43 = reinterpret_cast<struct s11*>(reinterpret_cast<int32_t>(ecx) - 1);
                ecx43->f66 = reinterpret_cast<unsigned char>(ecx43->f66 & *reinterpret_cast<unsigned char*>(&ecx43));
                goto addr_804836a_16;
            }
        }
    }
}
