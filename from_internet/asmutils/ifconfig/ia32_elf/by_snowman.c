
void fun_8048141(void* ecx) {
    int32_t eax2;
    int32_t ecx3;
    int32_t edx4;
    int1_t cf5;
    int32_t edi6;

    eax2 = 0;
    ecx3 = 0;
    do {
        edx4 = 0;
        while ((cf5 = *reinterpret_cast<unsigned char*>(&eax2) < 48, *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax2) - 48), !cf5) && *reinterpret_cast<unsigned char*>(&eax2) < 49) {
            edx4 = edx4 * 10 + eax2;
        }
        *reinterpret_cast<signed char*>(edi6 + ecx3) = *reinterpret_cast<signed char*>(&edx4);
        ++ecx3;
    } while (ecx3 != 4);
    return;
}

void fun_8048352(void* ecx);

signed char g80485b4;

int32_t fun_80480e8(void* ecx);

void fun_804835a(void* ecx);

int32_t g804855c;

void fun_8048455(void* ecx);

struct s0 {
    signed char f0;
    int16_t f1;
};

struct s0* g80485b0;

int32_t fun_8048237(void* ecx) {
    int32_t ebx2;

    fun_8048352(ecx);
    g80485b4 = 9;
    fun_80480e8(0x8927);
    __asm__("lodsb ");
    fun_804835a(0x8927);
    __asm__("lodsb ");
    fun_804835a(0x8927);
    __asm__("lodsb ");
    fun_804835a(0x8927);
    __asm__("lodsb ");
    fun_804835a(0x8927);
    __asm__("lodsb ");
    fun_804835a(0x8927);
    __asm__("lodsb ");
    fun_804835a(0x8927);
    g80485b4 = 32;
    fun_80480e8(0x8913);
    ebx2 = g804855c;
    if (*reinterpret_cast<unsigned char*>(&ebx2) & 1) {
        fun_8048352(0x8913);
    }
    if (*reinterpret_cast<unsigned char*>(&ebx2) & 2) {
        fun_8048352(0x8913);
    }
    if (*reinterpret_cast<unsigned char*>(&ebx2) & 8) {
        fun_8048352(0x8913);
    }
    if (*reinterpret_cast<unsigned char*>(&ebx2) & 64) {
        fun_8048352(0x8913);
    }
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1) & 1) {
        fun_8048352(0x8913);
    }
    fun_80480e8(0x8915);
    fun_8048352(0x8915);
    fun_8048455(0x8915);
    fun_80480e8(0x891b);
    fun_8048352(0x891b);
    fun_8048455(0x891b);
    fun_80480e8(0x8918);
    fun_8048352(0x8918);
    fun_8048455(0x8918);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&g80485b0) + 2) = 10;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&g80485b0) + 3) = 10;
    __asm__("int 0x80");
    return 4;
}

int32_t fun_80480e8(void* ecx) {
    __asm__("int 0x80");
    return 54;
}

void fun_804836d();

void fun_804835a(void* ecx) {
    signed char* edi2;

    fun_804836d();
    fun_804836d();
    *edi2 = 58;
    return;
}

void fun_8048352(void* ecx) {
    signed char* edi2;
    signed char al3;
    signed char al4;

    __asm__("lodsb ");
    do {
        *edi2 = al3;
        ++edi2;
        __asm__("lodsb ");
    } while (al4);
    return;
}

void fun_804836d() {
    unsigned char al1;
    unsigned char al2;
    unsigned char* edi3;

    al1 = reinterpret_cast<unsigned char>(al2 & 15);
    if (al1 >= 10) {
        al1 = reinterpret_cast<unsigned char>(al1 + 7);
    }
    *edi3 = reinterpret_cast<unsigned char>(al1 + 48);
    return;
}

unsigned char fun_8048437(void* ecx) {
    unsigned char al2;
    int32_t eax3;
    int32_t ecx4;

    do {
        __asm__("lodsb ");
    } while (al2 <= 32);
    eax3 = 0;
    ecx4 = 8;
    do {
        __asm__("lodsb ");
        if (*reinterpret_cast<unsigned char*>(&eax3) >= 65) {
            *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax3) - 7);
        }
        *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax3) - 48);
        --ecx4;
    } while (ecx4);
    return *reinterpret_cast<unsigned char*>(&eax3);
}

signed char fun_8048480(void* ecx) {
    signed char* edi2;
    void* edi3;
    int32_t ecx4;
    int32_t edi5;

    fun_8048455(ecx);
    edi2 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi3) - 1);
    ecx4 = edi5 - reinterpret_cast<int32_t>(edi2) + 16;
    do {
        *edi2 = 32;
        ++edi2;
        --ecx4;
    } while (ecx4);
    return 32;
}

void fun_8048455(void* ecx) {
    int32_t ecx2;
    int32_t v3;
    uint32_t eax4;
    int32_t ecx5;
    int32_t eax6;
    signed char* edi7;
    int32_t v8;

    ecx2 = 4;
    do {
        v3 = ecx2;
        eax4 = 0;
        ecx5 = 0;
        do {
            eax4 = eax4 / 10;
            ++ecx5;
        } while (eax4);
        do {
            eax6 = v3;
            *edi7 = *reinterpret_cast<signed char*>(&eax6);
            ++edi7;
            --ecx5;
        } while (ecx5);
        *edi7 = 46;
        ++edi7;
        ecx2 = v8 - 1;
    } while (ecx2);
    return;
}

unsigned char fun_8048493(void* ecx) {
    int32_t ecx2;
    int32_t eax3;
    int32_t ecx4;

    ecx2 = 0x80485b4;
    do {
        __asm__("int 0x80");
        if (0) 
            break;
        ++ecx2;
    } while (*reinterpret_cast<signed char*>(ecx2 - 1) != 10);
    goto addr_80484b3_4;
    __asm__("int 0x80");
    do {
        __asm__("lodsb ");
    } while (1);
    eax3 = 0;
    ecx4 = 8;
    do {
        __asm__("lodsb ");
        if (*reinterpret_cast<unsigned char*>(&eax3) >= 65) {
            *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax3) - 7);
        }
        *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax3) - 48);
        --ecx4;
    } while (ecx4);
    return *reinterpret_cast<unsigned char*>(&eax3);
    addr_80484b3_4:
    return 3;
}

struct s1 {
    signed char[77] pad77;
    signed char f4d;
};

struct s2 {
    signed char[77] pad77;
    signed char f4d;
};

int32_t g8048548;

unsigned char g80485a0;

int32_t g8048570;

void fun_8048000(int32_t* ecx, struct s0* a2) {
    void* esp3;
    int1_t less_or_equal4;
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
    void** eax24;
    signed char dh25;
    unsigned char* eax26;
    unsigned char tmp8_27;
    uint1_t cf28;
    struct s1* ebp29;
    struct s2* ebp30;
    signed char bl31;
    int32_t ebp32;
    int32_t ebp33;
    void* ecx34;
    int32_t esi35;
    void* ebx36;
    struct s0* esi37;
    void* ecx38;
    unsigned char al39;
    unsigned char* edi40;
    unsigned char al41;
    int32_t v42;
    void* ecx43;
    signed char* edi44;
    signed char al45;
    struct s0* v46;
    struct s0* v47;
    int16_t* edi48;
    struct s0* v49;
    void* ecx50;
    int1_t zf51;
    signed char* edi52;
    struct s0* v53;
    struct s0* v54;
    struct s0* v55;

    esp3 = __zero_stack_offset();
    if (less_or_equal4) {
        *ecx = *ecx + eax5;
        *ebx6 = *ebx7 + eax8;
        *eax9 = reinterpret_cast<signed char>(*eax10 + al11);
        *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
        *eax15 = reinterpret_cast<signed char>(*eax16 + al17);
        *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
        *reinterpret_cast<signed char*>(&eax21) = reinterpret_cast<signed char>(al22 + *eax23);
        eax24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax21) + reinterpret_cast<int32_t>(*eax21));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<int32_t>(eax24));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(eax24)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(eax24)) + dh25);
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<int32_t>(eax24));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<unsigned char*>(eax24 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax24 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)) + 8);
        eax26 = reinterpret_cast<unsigned char*>(eax24 - 1 + 0x6b40000);
        *eax26 = reinterpret_cast<unsigned char>(*eax26 + *reinterpret_cast<signed char*>(&eax26));
        esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 1 - 1 + 2);
        *eax26 = reinterpret_cast<unsigned char>(*eax26 + *reinterpret_cast<signed char*>(&eax26));
    }
    tmp8_27 = reinterpret_cast<unsigned char>(*eax26 + *reinterpret_cast<signed char*>(&eax26));
    cf28 = reinterpret_cast<uint1_t>(tmp8_27 < *eax26);
    *eax26 = tmp8_27;
    *eax26 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax26 + *reinterpret_cast<signed char*>(&eax26)) + cf28);
    ebp29->f4d = reinterpret_cast<signed char>(ebp30->f4d + bl31);
    ebp32 = ebp33 - 1;
    ecx34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 - 4 - 4);
    __asm__("int 0x80");
    g8048548 = 0x66;
    esi35 = reinterpret_cast<int32_t>(__return_address());
    do {
        __asm__("lodsb ");
    } while (1);
    if (*reinterpret_cast<signed char*>(esi35 - 2) == 0x65) {
        g80485a0 = reinterpret_cast<unsigned char>(g80485a0 | 4);
        ebx36 = reinterpret_cast<void*>(0x890b);
        esi37 = a2;
        if (!esi37) {
            __asm__("int 0x80");
            g8048548 = 5;
            fun_8048493(0);
            ecx38 = reinterpret_cast<void*>("Destination     Netmask         Gateway         Iface\nUP ");
            __asm__("int 0x80");
            while (1) {
                al39 = fun_8048493(ecx38);
                edi40 = reinterpret_cast<unsigned char*>(0x804854c);
                while (al39 > 32) {
                    *edi40 = al39;
                    ++edi40;
                }
                *edi40 = 10;
                fun_8048437(ecx38);
                g8048570 = ebp32;
                al41 = fun_8048437(ecx38);
                v42 = ebp32;
                do {
                    __asm__("lodsb ");
                } while (al41 <= 32);
                do {
                    __asm__("lodsb ");
                } while (al41 > 32);
                __asm__("lodsb ");
                if (al41 >= 65) {
                    al41 = reinterpret_cast<unsigned char>(al41 - 1);
                }
                if (!(al41 & 1)) 
                    continue;
                ecx43 = reinterpret_cast<void*>(3);
                do {
                    addr_80483e1_24:
                    __asm__("lodsb ");
                    if (al41 <= 32) 
                        goto addr_80483e1_24;
                    do {
                        __asm__("lodsb ");
                    } while (al41 > 32);
                    ecx43 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx43) - 1);
                } while (ecx43);
                fun_8048437(ecx43);
                edi44 = reinterpret_cast<signed char*>(0x80485b4);
                fun_8048480(ecx43);
                fun_8048480(ecx43);
                ebp32 = v42;
                al45 = fun_8048480(ecx43);
                do {
                    __asm__("lodsb ");
                    *edi44 = al45;
                    ++edi44;
                } while (al45 != 10);
                ecx38 = reinterpret_cast<void*>(0x80485b4);
                __asm__("int 0x80");
            }
        } else {
            if (esi37->f0 != 97) {
                ebx36 = reinterpret_cast<void*>(0x890c);
            }
            while (--ebp32, ebp32 < 0 == __intrinsic()) {
                esi37 = v46;
                if (esi37->f0 == 0x6e2d) {
                    g80485a0 = reinterpret_cast<unsigned char>(g80485a0 & 0xfb);
                }
                if (esi37->f0 == 0x682d) 
                    continue;
                if (esi37->f0 != 0x67) {
                    if (esi37->f0 != 0x6e) {
                        if (esi37->f1 != 0x7665) {
                            *reinterpret_cast<int16_t*>(&g8048570) = 2;
                            if (esi37->f0 == 100) {
                                g80485a0 = reinterpret_cast<unsigned char>(g80485a0 & 0xfb);
                            }
                        } else {
                            esi37 = v47;
                            --ebp32;
                            g80485b0 = esi37;
                            continue;
                        }
                    } else {
                        edi48 = reinterpret_cast<int16_t*>(0x8048590);
                        goto addr_8048201_46;
                    }
                } else {
                    g80485a0 = reinterpret_cast<unsigned char>(g80485a0 | 2);
                    edi48 = reinterpret_cast<int16_t*>(0x8048580);
                    goto addr_8048201_46;
                }
                addr_80481e3_48:
                fun_8048141(ecx34);
                continue;
                addr_8048201_46:
                esi37 = v49;
                --ebp32;
                *edi48 = 2;
                goto addr_80481e3_48;
            }
            ecx50 = ebx36;
            __asm__("int 0x80");
        }
    } else {
        esi37 = a2;
        zf51 = esi37 == 0;
        if (zf51) {
            ebp32 = 1;
            while (g804855c = ebp32, ecx50 = reinterpret_cast<void*>(0x8910), fun_80480e8(0x8910), !__intrinsic()) {
                fun_8048237(0x8910);
                ++ebp32;
            }
        } else {
            edi52 = reinterpret_cast<signed char*>(0x804854c);
            ecx50 = reinterpret_cast<void*>(16);
            do {
                if (!ecx50) 
                    break;
                ecx50 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx50) - 1);
                *edi52 = esi37->f0;
                ++edi52;
                esi37 = reinterpret_cast<struct s0*>(&esi37->f1);
            } while (!zf51);
            if (ebp32) 
                goto addr_8048093_58;
        }
    }
    while (1) {
        addr_80480f9_60:
        __asm__("int 0x80");
        while (1) {
            addr_8048100_61:
            fun_8048141(ecx50);
            *reinterpret_cast<int16_t*>(&g804855c) = 2;
            fun_80480e8(0x8916);
            while (1) {
                fun_80480e8(0x8913);
                *reinterpret_cast<unsigned char*>(&g804855c) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&g804855c) & 0xfe);
                if (esi37->f0 != 100) {
                    *reinterpret_cast<unsigned char*>(&g804855c) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&g804855c) | 1);
                }
                ecx50 = reinterpret_cast<void*>(0x8914);
                while (1) {
                    fun_80480e8(ecx50);
                    addr_8048093_58:
                    --ebp32;
                    if (ebp32 < 0 != __intrinsic()) 
                        goto addr_80480f9_60;
                    esi37 = v53;
                    if (esi37->f0 <= 57) 
                        goto addr_8048100_61;
                    if (esi37->f0 != 98) {
                        if (esi37->f0 != 0x6e) 
                            break;
                        esi37 = v54;
                        --ebp32;
                        fun_8048141(ecx50);
                        *reinterpret_cast<int16_t*>(&g804855c) = 2;
                        ecx50 = reinterpret_cast<void*>(0x891c);
                    } else {
                        esi37 = v55;
                        --ebp32;
                        fun_8048141(ecx50);
                        *reinterpret_cast<int16_t*>(&g804855c) = 2;
                        ecx50 = reinterpret_cast<void*>(0x891a);
                    }
                }
            }
        }
    }
}

void fun_80480bd() {
    goto 0x80480f9;
}

struct s3 {
    signed char[115] pad115;
    signed char f73;
};

struct s4 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s5 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s6 {
    signed char[115] pad115;
    signed char f73;
};

struct s7 {
    signed char[114] pad114;
    unsigned char f72;
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
    signed char[97] pad97;
    unsigned char f61;
};

struct s12 {
    signed char[97] pad97;
    unsigned char f61;
};

struct s13 {
    signed char[97] pad97;
    signed char f61;
};

void fun_80484b4(int32_t ecx) {
    int1_t of2;
    int1_t cf3;
    int1_t zf4;
    unsigned char* eax5;
    unsigned char* eax6;
    unsigned char ah7;
    unsigned char* eax8;
    unsigned char* eax9;
    unsigned char ah10;
    unsigned char* eax11;
    unsigned char* eax12;
    unsigned char ah13;
    unsigned char* eax14;
    unsigned char* eax15;
    unsigned char al16;
    void* edx17;
    void* edx18;
    unsigned char* eax19;
    unsigned char* eax20;
    unsigned char al21;
    int1_t cf22;
    int1_t zf23;
    unsigned char tmp8_24;
    struct s3* ebp25;
    signed char al26;
    int1_t cf27;
    struct s4* ebp28;
    struct s5* ebp29;
    int1_t zf30;
    struct s6* ebp31;
    unsigned char tmp8_32;
    signed char* eax33;
    signed char ah34;
    unsigned char* eax35;
    unsigned char* eax36;
    signed char* eax37;
    struct s7* edx38;
    unsigned char ah39;
    int1_t zf40;
    unsigned char* eax41;
    unsigned char* eax42;
    unsigned char al43;
    unsigned char* eax44;
    unsigned char* eax45;
    unsigned char al46;
    unsigned char* eax47;
    unsigned char* eax48;
    unsigned char al49;
    unsigned char* eax50;
    unsigned char* eax51;
    unsigned char ah52;
    unsigned char* eax53;
    unsigned char* eax54;
    unsigned char ah55;
    struct s8* esi56;
    struct s9* esi57;
    struct s10* esi58;
    unsigned char* eax59;
    unsigned char* eax60;
    unsigned char ah61;
    unsigned char* eax62;
    unsigned char* eax63;
    unsigned char ah64;
    unsigned char* eax65;
    unsigned char* eax66;
    unsigned char ah67;
    unsigned char* eax68;
    unsigned char* eax69;
    unsigned char ah70;
    struct s11* edi71;
    struct s12* edi72;
    unsigned char al73;
    uint1_t zf74;
    struct s13* edi75;
    unsigned char* eax76;
    unsigned char* eax77;
    unsigned char ah78;

    __asm__("das ");
    if (of2) {
        addr_8048529_2:
        if (cf3) {
        }
    } else {
        __asm__("outsd ");
        __asm__("arpl [edi], bp");
        __asm__("outsb ");
        if (zf4) {
            addr_80484ed_5:
            *eax5 = reinterpret_cast<unsigned char>(*eax6 & ah7);
            *eax8 = reinterpret_cast<unsigned char>(*eax9 & ah10);
            *eax11 = reinterpret_cast<unsigned char>(*eax12 & ah13);
            __asm__("popa ");
            __asm__("arpl [ebp+0xa], sp");
            *eax14 = reinterpret_cast<unsigned char>(*eax15 & al16);
            edx17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx18) + 1);
            *eax19 = reinterpret_cast<unsigned char>(*eax20 & al21);
            goto addr_804850c_6;
        } else {
            if (!cf22) {
                if (!zf23) 
                    goto addr_8048536_10;
                tmp8_24 = reinterpret_cast<unsigned char>(ebp25->f73 + al26);
                cf27 = tmp8_24 < ebp28->f73;
                ebp29->f73 = tmp8_24;
                zf30 = ebp31->f73 == 0;
                if (zf30) 
                    goto addr_8048532_12; else 
                    goto addr_80484c9_13;
            }
        }
    }
    tmp8_32 = reinterpret_cast<unsigned char>(*eax33 + ah34);
    cf27 = tmp8_32 < *eax35;
    *eax36 = tmp8_32;
    zf30 = *eax37 == 0;
    addr_8048532_12:
    __asm__("outsb ");
    if (zf30) {
    }
    addr_8048537_16:
    __asm__("popad ");
    if (cf27) {
        edx38->f72 = reinterpret_cast<unsigned char>(edx38->f72 & ah39);
        zf40 = edx38->f72 == 0;
        __asm__("outsd ");
        __asm__("popad ");
        __asm__("arpl [fs:ecx+0x73], sp");
        goto addr_8048545_19;
    }
    addr_804850c_6:
    edx38 = reinterpret_cast<struct s7*>(reinterpret_cast<int32_t>(edx17) + 1);
    *eax41 = reinterpret_cast<unsigned char>(*eax42 & al43);
    *eax44 = reinterpret_cast<unsigned char>(*eax45 & al46);
    *eax47 = reinterpret_cast<unsigned char>(*eax48 & al49);
    cf3 = __intrinsic();
    goto addr_8048529_2;
    addr_80484c9_13:
    __asm__("outsb ");
    __asm__("popad ");
    if (zf30) {
        addr_8048536_10:
        goto addr_8048537_16;
    } else {
        __asm__("outsd ");
        __asm__("outsb ");
        *eax50 = reinterpret_cast<unsigned char>(*eax51 & ah52);
        *eax53 = reinterpret_cast<unsigned char>(*eax54 & ah55);
        esi56->f65 = reinterpret_cast<unsigned char>(esi57->f65 & *reinterpret_cast<unsigned char*>(&ecx));
        zf40 = esi58->f65 == 0;
        if (zf40) {
            addr_8048545_19:
            if (zf40) {
            }
        } else {
            __asm__("popad ");
            if (!1) {
                *eax59 = reinterpret_cast<unsigned char>(*eax60 & ah61);
                *eax62 = reinterpret_cast<unsigned char>(*eax63 & ah64);
                *eax65 = reinterpret_cast<unsigned char>(*eax66 & ah67);
                *eax68 = reinterpret_cast<unsigned char>(*eax69 & ah70);
                edi71->f61 = reinterpret_cast<unsigned char>(edi72->f61 & al73);
                zf74 = reinterpret_cast<uint1_t>(edi75->f61 == 0);
                if (zf74) {
                }
                if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf74))) {
                }
                if (!__intrinsic()) 
                    goto addr_804850c_6; else 
                    goto addr_80484ec_29;
            }
        }
    }
    addr_80484ec_29:
    *eax76 = reinterpret_cast<unsigned char>(*eax77 & ah78);
    goto addr_80484ed_5;
}
