
signed char* g8048560;

void fun_80484fb() {
    int32_t eax1;
    int32_t esi2;
    int32_t esi3;
    signed char** eax4;
    signed char* esi5;

    __asm__("pushad ");
    eax1 = 0;
    *reinterpret_cast<signed char*>(&eax1) = *reinterpret_cast<signed char*>(esi2 - 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) = *reinterpret_cast<signed char*>(esi3 - 2);
    eax4 = reinterpret_cast<signed char**>((eax1 << 2) + 0x8048569);
    g8048560 = *eax4;
    *eax4 = esi5;
    __asm__("popad ");
    return;
}

signed char fun_8048546() {
    signed char al1;

    return al1;
}

int16_t g804855a = 0;

struct s0 {
    unsigned char f0;
    signed char f1;
};

struct s0* g8048564;

void fun_804848c() {
    unsigned char cl1;
    unsigned char bl2;
    unsigned char bl3;
    unsigned char al4;
    unsigned char cl5;
    struct s0* eax6;
    struct s0* edi7;

    __asm__("pushad ");
    cl1 = *reinterpret_cast<unsigned char*>(&g804855a);
    bl2 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g804855a) + 1);
    bl3 = reinterpret_cast<unsigned char>(bl2 | reinterpret_cast<unsigned char>(al4 << cl1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g804855a) + 1) = bl3;
    cl5 = reinterpret_cast<unsigned char>(cl1 + 1);
    if (cl5 != 8) {
        *reinterpret_cast<unsigned char*>(&g804855a) = cl5;
        __asm__("popad ");
        return;
    } else {
        g804855a = 0;
        eax6 = g8048564;
        eax6->f0 = bl3;
        g8048564 = edi7;
        __asm__("popad ");
        return;
    }
}

void fun_8048552() {
    ++g8048560;
    return;
}

void fun_8048518(int32_t ecx) {
    int32_t eax2;
    int32_t edi3;
    int32_t edi4;
    signed char** eax5;
    signed char* edi6;

    __asm__("pushad ");
    eax2 = 0;
    *reinterpret_cast<signed char*>(&eax2) = *reinterpret_cast<signed char*>(edi3 - 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax2) + 1) = *reinterpret_cast<signed char*>(edi4 - 2);
    eax5 = reinterpret_cast<signed char**>((eax2 << 2) + 0x8048569);
    g8048560 = *eax5;
    *eax5 = edi6;
    __asm__("popad ");
    return;
}

signed char fun_8048535() {
    signed char* esi1;
    int32_t ecx2;
    signed char* edi3;
    signed char al4;

    esi1 = g8048560;
    while (ecx2) {
        --ecx2;
        *edi3 = *esi1;
        ++edi3;
        ++esi1;
    }
    g8048560 = esi1;
    return al4;
}

unsigned char fun_80484cb(int32_t ecx) {
    unsigned char al2;
    unsigned char cl3;
    int32_t eax4;
    unsigned char cl5;
    int32_t eax6;

    al2 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g804855a) + 1);
    cl3 = *reinterpret_cast<unsigned char*>(&g804855a);
    *reinterpret_cast<unsigned char*>(&eax4) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(al2 >> cl3) & 1);
    cl5 = reinterpret_cast<unsigned char>(cl3 + 1);
    if (cl5 != 8) {
        *reinterpret_cast<unsigned char*>(&g804855a) = cl5;
        return *reinterpret_cast<unsigned char*>(&eax4);
    } else {
        *reinterpret_cast<unsigned char*>(&g804855a) = 0;
        __asm__("lodsb ");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g804855a) + 1) = *reinterpret_cast<unsigned char*>(&eax4);
        eax6 = eax4;
        return *reinterpret_cast<unsigned char*>(&eax6);
    }
}

int32_t fun_8048478(int32_t ecx) {
    int32_t* edi2;
    int32_t ecx3;

    __asm__("pushad ");
    edi2 = reinterpret_cast<int32_t*>(0x8048569);
    ecx3 = 0x10000;
    while (ecx3) {
        --ecx3;
        *edi2 = 0x8088569;
        ++edi2;
    }
    __asm__("popad ");
    return 0x8088569;
}

struct s1 {
    signed char[94] pad94;
    signed char f5e;
};

struct s2 {
    void* f0;
    signed char[90767359] pad90767360;
    unsigned char f5690000;
};

signed char g1;

unsigned char g8188569;

int32_t g818856a;

int32_t g804806c = 0x80480f6;

void fun_8048000(int32_t* ecx) {
    int1_t less_or_equal2;
    struct s1* esi3;
    void* esi4;
    int32_t eax5;
    int32_t* ebx6;
    int32_t* ebx7;
    int32_t eax8;
    signed char* eax9;
    signed char* eax10;
    signed char al11;
    signed char* eax12;
    signed char* eax13;
    signed char al14;
    signed char* eax15;
    signed char* eax16;
    signed char al17;
    signed char* eax18;
    signed char* eax19;
    signed char al20;
    void** eax21;
    signed char al22;
    signed char* eax23;
    struct s2* eax24;
    signed char dh25;
    unsigned char* eax26;
    unsigned char tmp8_27;
    uint1_t cf28;
    signed char bl29;
    int32_t eax30;
    signed char tmp8_31;

    if (less_or_equal2) {
        esi3 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(esi4) + 1);
        *ecx = *ecx + eax5;
        *ebx6 = *ebx7 + eax8;
        *eax9 = reinterpret_cast<signed char>(*eax10 + al11);
        *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
        *eax15 = reinterpret_cast<signed char>(*eax16 + al17);
        *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
        *reinterpret_cast<signed char*>(&eax21) = reinterpret_cast<signed char>(al22 + *eax23);
        eax24 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(eax21) + reinterpret_cast<int32_t>(*eax21));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<int32_t>(eax24));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(ecx)) + 44);
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(eax24)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(eax24)) + dh25);
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<int32_t>(eax24));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax24) - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax24) - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)) + 8);
        eax26 = &eax24->f5690000;
        *reinterpret_cast<unsigned char*>(&eax26) = 0;
        *eax26 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*eax26));
    }
    tmp8_27 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*eax26));
    cf28 = reinterpret_cast<uint1_t>(tmp8_27 < *eax26);
    *eax26 = tmp8_27;
    *eax26 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(*eax26)) + cf28);
    esi3->f5e = reinterpret_cast<signed char>(esi3->f5e + bl29);
    do {
        __asm__("lodsb ");
    } while (0);
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi3) - 8) == 0x69) {
        eax30 = 0x80480ab;
    } else {
        eax30 = 0x8048070;
    }
    eax30();
    __asm__("int 0x80");
    tmp8_31 = reinterpret_cast<signed char>(g1 + 1);
    g1 = tmp8_31;
    __asm__("int 0x80");
    g8188569 = 0;
    g818856a = 3;
    goto g804806c;
}

struct s3 {
    signed char f0;
    signed char f1;
};

struct s3* g804855c;

struct s4 {
    signed char f0;
    unsigned char f1;
};

struct s5 {
    signed char[2] pad2;
    signed char f2;
};

struct s6 {
    signed char f0;
    signed char f1;
};

struct s7 {
    signed char[2] pad2;
    signed char f2;
};

struct s8 {
    signed char f0;
    signed char f1;
};

signed char g8048568;

struct s9 {
    signed char f0;
    signed char f1;
};

struct s10 {
    signed char f0;
    signed char f1;
};

int32_t fun_80480f6(int32_t ecx) {
    int32_t eax2;
    void* esi3;
    int16_t* edi4;
    int16_t* esi5;
    struct s4* edi6;
    struct s5* edi7;
    struct s6* esi8;
    struct s7* esi9;
    struct s0* edi10;
    struct s3* esi11;
    struct s8* edi12;
    int1_t zf13;
    int1_t below_or_equal14;
    signed char al15;
    signed char al16;
    signed char al17;
    struct s9* edi18;
    struct s10* esi19;
    uint32_t ecx20;
    int1_t cf21;
    int1_t zf22;
    struct s0* eax23;
    unsigned char bl24;

    eax2 = fun_8048478(ecx);
    g804855c = reinterpret_cast<struct s3*>(eax2 + reinterpret_cast<int32_t>(esi3));
    *edi4 = *esi5;
    edi6 = reinterpret_cast<struct s4*>(&edi7->f2);
    esi8 = reinterpret_cast<struct s6*>(&esi9->f2);
    edi6->f0 = esi8->f0;
    edi10 = reinterpret_cast<struct s0*>(&edi6->f1);
    esi11 = reinterpret_cast<struct s3*>(&esi8->f1);
    g8048564 = edi10;
    edi12 = reinterpret_cast<struct s8*>(&edi10->f1);
    while (zf13 = g804855c == esi11, below_or_equal14 = reinterpret_cast<uint32_t>(g804855c) <= reinterpret_cast<uint32_t>(esi11), !below_or_equal14) {
        fun_80484fb();
        al15 = fun_8048546();
        if (zf13) {
            fun_804848c();
            fun_804848c();
        } else {
            __asm__("lodsb ");
            g8048568 = al15;
            fun_80484fb();
            fun_8048546();
            if (zf13) {
                fun_804848c();
                fun_804848c();
                al16 = g8048568;
                edi12->f0 = al16;
                edi12 = reinterpret_cast<struct s8*>(&edi12->f1);
                esi11 = reinterpret_cast<struct s3*>(&esi11->f1);
            } else {
                fun_804848c();
                al17 = g8048568;
                edi12->f0 = al17;
                edi18 = reinterpret_cast<struct s9*>(&edi12->f1);
                esi19 = reinterpret_cast<struct s10*>(&esi11->f1);
                edi18->f0 = esi19->f0;
                edi12 = reinterpret_cast<struct s8*>(&edi18->f1);
                esi11 = reinterpret_cast<struct s3*>(&esi19->f1);
                continue;
            }
        }
        fun_8048552();
        fun_8048546();
        if (!zf13) {
            fun_804848c();
            continue;
        }
        fun_8048552();
        fun_804848c();
        fun_8048546();
        if (!zf13) {
            addr_8048291_26:
            fun_804848c();
            fun_804848c();
            continue;
        } else {
            fun_8048552();
            fun_8048546();
            if (!zf13) {
                addr_8048279_28:
                fun_804848c();
                fun_804848c();
                continue;
            } else {
                fun_8048552();
                fun_8048546();
                if (!zf13) {
                    addr_80482ef_30:
                    fun_804848c();
                    fun_804848c();
                    continue;
                } else {
                    fun_8048552();
                    fun_804848c();
                    fun_804848c();
                    fun_8048546();
                    if (!zf13) {
                        fun_804848c();
                        fun_804848c();
                        fun_804848c();
                        continue;
                    }
                    fun_8048552();
                    fun_8048546();
                    if (!zf13) {
                        fun_804848c();
                        fun_804848c();
                        fun_804848c();
                        continue;
                    }
                    fun_8048552();
                    fun_8048546();
                    if (zf13) 
                        goto addr_80481ef_36;
                }
            }
        }
        fun_804848c();
        goto addr_80482ef_30;
        addr_80481ef_36:
        fun_8048552();
        fun_8048546();
        if (!zf13) {
            fun_804848c();
            fun_804848c();
            fun_804848c();
            continue;
        }
        fun_8048552();
        fun_8048546();
        if (zf13) 
            goto addr_804820f_40;
        fun_804848c();
        goto addr_8048291_26;
        addr_804820f_40:
        fun_8048552();
        fun_8048546();
        if (!zf13) {
            fun_804848c();
            goto addr_8048279_28;
        } else {
            fun_8048552();
            fun_8048546();
            if (!zf13) {
                fun_804848c();
                fun_804848c();
                fun_804848c();
            } else {
                fun_8048552();
                fun_804848c();
                fun_804848c();
                fun_804848c();
                ecx20 = 0;
                while ((cf21 = reinterpret_cast<uint32_t>(esi11) < reinterpret_cast<uint32_t>(g804855c), zf22 = esi11 == g804855c, cf21) && (fun_8048546(), zf22)) {
                    ++ecx20;
                    fun_8048552();
                }
                while (ecx20 >= 0xff) {
                    edi12->f0 = -1;
                    edi12 = reinterpret_cast<struct s8*>(&edi12->f1);
                    esi11 = reinterpret_cast<struct s3*>(&esi11->f1);
                    ecx20 = ecx20 - 0xff;
                }
                edi12->f0 = *reinterpret_cast<signed char*>(&ecx20);
                edi12 = reinterpret_cast<struct s8*>(&edi12->f1);
                esi11 = reinterpret_cast<struct s3*>(&esi11->f1);
            }
        }
    }
    eax23 = g8048564;
    bl24 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g804855a) + 1);
    eax23->f0 = bl24;
    __asm__("int 0x80");
    return 4;
}

int16_t g8088569;

signed char g808856b;

struct s11 {
    signed char f0;
    signed char f1;
};

struct s12 {
    signed char f0;
    signed char f1;
};

int32_t fun_80480a7(int32_t ecx) {
    int32_t eax2;
    int32_t eax3;
    unsigned char* eax4;
    unsigned char al5;
    unsigned char* eax6;
    int32_t ecx7;
    int32_t eax8;
    int32_t eax9;
    struct s3* edi10;
    struct s11* esi11;
    int1_t below_or_equal12;
    unsigned char al13;
    struct s10* edi14;
    struct s12* esi15;
    unsigned char al16;
    unsigned char al17;
    unsigned char al18;
    unsigned char al19;
    unsigned char al20;
    unsigned char al21;
    unsigned char al22;
    unsigned char al23;
    unsigned char al24;
    unsigned char al25;
    signed char al26;

    __asm__("aaa ");
    *reinterpret_cast<int32_t*>(eax2 + ecx) = *reinterpret_cast<int32_t*>(eax3 + ecx) - 24;
    *reinterpret_cast<unsigned char*>(&eax4) = reinterpret_cast<unsigned char>(al5 ^ *eax6);
    *eax4 = reinterpret_cast<unsigned char>(*eax4 + *reinterpret_cast<unsigned char*>(&eax4));
    ecx7 = 0x8188569;
    __asm__("int 0x80");
    eax8 = 0;
    *reinterpret_cast<unsigned char*>(&eax8) = g8188569;
    if (*reinterpret_cast<unsigned char*>(&eax8) < 1) {
        goto *reinterpret_cast<int32_t*>(eax8 * 4 + reinterpret_cast<int32_t>(fun_80480a7));
        eax9 = fun_8048478(0x8188569);
        __asm__("lodsd ");
        g804855c = reinterpret_cast<struct s3*>(0x8088569 + eax9);
        g8088569 = *reinterpret_cast<int16_t*>(&g818856a);
        g808856b = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&g818856a) + 2);
        edi10 = reinterpret_cast<struct s3*>(0x808856c);
        esi11 = reinterpret_cast<struct s11*>(0x818856d);
        __asm__("lodsb ");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g804855a) + 1) = *reinterpret_cast<unsigned char*>(&eax9);
        *reinterpret_cast<unsigned char*>(&g804855a) = 0;
        while (below_or_equal12 = reinterpret_cast<uint32_t>(g804855c) <= reinterpret_cast<uint32_t>(edi10), !below_or_equal12) {
            al13 = fun_80484cb(ecx7);
            if (!al13) {
                fun_8048518(ecx7);
                edi10->f0 = esi11->f0;
                edi14 = reinterpret_cast<struct s10*>(&edi10->f1);
                esi15 = reinterpret_cast<struct s12*>(&esi11->f1);
                fun_8048518(ecx7);
                edi14->f0 = esi15->f0;
                edi10 = reinterpret_cast<struct s3*>(&edi14->f1);
                esi11 = reinterpret_cast<struct s11*>(&esi15->f1);
                continue;
            }
            al16 = fun_80484cb(ecx7);
            if (!al16) {
                fun_8048518(ecx7);
                edi10->f0 = esi11->f0;
                edi10 = reinterpret_cast<struct s3*>(&edi10->f1);
                esi11 = reinterpret_cast<struct s11*>(&esi11->f1);
            }
            fun_8048518(ecx7);
            ecx7 = 1;
            fun_8048535();
            al17 = fun_80484cb(1);
            if (!al17) 
                continue;
            ecx7 = 1;
            fun_8048535();
            al18 = fun_80484cb(1);
            if (al18) 
                goto addr_80483c3_25;
            al19 = fun_80484cb(ecx7);
            if (al19) {
                ecx7 = 1;
                fun_8048535();
            }
            continue;
            addr_80483c3_25:
            ecx7 = 2;
            fun_8048535();
            al20 = fun_80484cb(2);
            if (!al20) 
                continue;
            ecx7 = 1;
            fun_8048535();
            al21 = fun_80484cb(1);
            if (al21) 
                goto addr_80483e9_30;
            al22 = fun_80484cb(1);
            if (al22) {
                al23 = fun_80484cb(1);
                ecx7 = 3;
                if (al23 != 1) {
                    ecx7 = 2;
                }
                fun_8048535();
                continue;
            }
            addr_80483e9_30:
            ecx7 = 4;
            fun_8048535();
            al24 = fun_80484cb(4);
            if (al24) {
                al25 = fun_80484cb(4);
                if (!al25) {
                    ecx7 = 2;
                    fun_8048535();
                } else {
                    al26 = fun_8048535();
                    while (ecx7 = 0, *reinterpret_cast<signed char*>(&ecx7) = al26, al26 = fun_8048535(), al26 == -1) {
                    }
                }
            }
        }
        __asm__("int 0x80");
        return 4;
    } else {
        return eax8;
    }
}

void fun_804855a() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
}

void fun_80480e2() {
    int32_t ecx1;
    int32_t* edi2;

    __asm__("pushad ");
    ecx1 = 0x80000;
    edi2 = reinterpret_cast<int32_t*>(0x8088569);
    while (ecx1) {
        --ecx1;
        *edi2 = 0xf7d9a03f;
        ++edi2;
    }
    __asm__("popad ");
    return;
}
