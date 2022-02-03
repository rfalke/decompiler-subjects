
signed char g804881c;

uint32_t fun_8048264();

uint32_t fun_804835d();

void fun_8048138();

uint32_t g80483bf;

uint32_t g80483c7;

void fun_80480f8() {
    int1_t zf1;
    uint32_t edi2;
    uint32_t eax3;
    uint32_t eax4;
    signed char ah5;
    int1_t zf6;
    uint32_t eax7;
    int1_t zf8;
    uint32_t eax9;

    while (1) {
        __asm__("int 0x80");
        if (!0) 
            break;
        __asm__("int 0x80");
        __asm__("int 0x80");
    }
    if (0) {
        zf1 = g804881c == 2;
        if (!zf1) {
            fun_8048264();
        } else {
            fun_804835d();
        }
        fun_8048138();
        __asm__("int 0x80");
        edi2 = 0;
        do {
            eax3 = g80483bf;
            eax4 = eax3 + edi2;
            if (!(*reinterpret_cast<unsigned char*>(&eax4) & 15)) {
                fun_8048264();
            }
            do {
                if (*reinterpret_cast<signed char*>(edi2 + 0x80483cb) < reinterpret_cast<signed char>(32)) {
                    if (*reinterpret_cast<unsigned char*>(edi2 + 0x80483cb) == 10) {
                        goto addr_8048251_16;
                    }
                    if (*reinterpret_cast<unsigned char*>(edi2 + 0x80483cb) == 9) {
                        goto addr_8048251_16;
                    }
                    if (*reinterpret_cast<unsigned char*>(edi2 + 0x80483cb) == 10) {
                        goto addr_8048251_16;
                    }
                    if (!*reinterpret_cast<unsigned char*>(edi2 + 0x80483cb)) {
                        addr_8048251_16:
                        ah5 = 4;
                    } else {
                        if (*reinterpret_cast<unsigned char*>(edi2 + 0x80483cb) == 12) {
                            goto addr_8048251_16;
                        } else {
                            if (*reinterpret_cast<unsigned char*>(edi2 + 0x80483cb) == 8) {
                                goto addr_8048251_16;
                            } else {
                                addr_8048208_26:
                                fun_8048138();
                                fun_8048138();
                                fun_8048138();
                                continue;
                            }
                        }
                    }
                } else {
                    if (*reinterpret_cast<signed char*>(edi2 + 0x80483cb) > reinterpret_cast<signed char>(0x7e)) 
                        goto addr_8048208_26;
                    fun_8048138();
                    fun_8048138();
                    fun_8048138();
                    fun_8048138();
                    continue;
                }
                do {
                    fun_8048138();
                    ah5 = reinterpret_cast<signed char>(ah5 - 1);
                } while (ah5);
                ++edi2;
                zf6 = edi2 == g80483c7;
            } while (!zf6 && (eax7 = edi2, !!(*reinterpret_cast<unsigned char*>(&eax7) & 15)));
            fun_8048138();
            zf8 = edi2 == g80483c7;
        } while (!zf8);
        eax9 = g80483bf;
        g80483bf = eax9 + edi2;
        return;
    } else {
        g80483c7 = 3;
        return;
    }
}

void fun_804817c() {
    uint32_t edi1;
    uint32_t eax2;
    uint32_t eax3;
    signed char ah4;
    int1_t zf5;
    uint32_t eax6;
    int1_t zf7;
    uint32_t eax8;

    edi1 = 0;
    do {
        eax2 = g80483bf;
        eax3 = eax2 + edi1;
        if (!(*reinterpret_cast<unsigned char*>(&eax3) & 15)) {
            fun_8048264();
        }
        do {
            if (*reinterpret_cast<signed char*>(edi1 + 0x80483cb) < reinterpret_cast<signed char>(32)) {
                if (*reinterpret_cast<unsigned char*>(edi1 + 0x80483cb) == 10) {
                    goto addr_8048251_8;
                }
                if (*reinterpret_cast<unsigned char*>(edi1 + 0x80483cb) == 9) {
                    goto addr_8048251_8;
                }
                if (*reinterpret_cast<unsigned char*>(edi1 + 0x80483cb) == 10) {
                    goto addr_8048251_8;
                }
                if (!*reinterpret_cast<unsigned char*>(edi1 + 0x80483cb)) {
                    addr_8048251_8:
                    ah4 = 4;
                } else {
                    if (*reinterpret_cast<unsigned char*>(edi1 + 0x80483cb) == 12) {
                        goto addr_8048251_8;
                    } else {
                        if (*reinterpret_cast<unsigned char*>(edi1 + 0x80483cb) == 8) {
                            goto addr_8048251_8;
                        } else {
                            addr_8048208_18:
                            fun_8048138();
                            fun_8048138();
                            fun_8048138();
                            continue;
                        }
                    }
                }
            } else {
                if (*reinterpret_cast<signed char*>(edi1 + 0x80483cb) > reinterpret_cast<signed char>(0x7e)) 
                    goto addr_8048208_18;
                fun_8048138();
                fun_8048138();
                fun_8048138();
                fun_8048138();
                continue;
            }
            do {
                fun_8048138();
                ah4 = reinterpret_cast<signed char>(ah4 - 1);
            } while (ah4);
            ++edi1;
            zf5 = edi1 == g80483c7;
        } while (!zf5 && (eax6 = edi1, !!(*reinterpret_cast<unsigned char*>(&eax6) & 15)));
        fun_8048138();
        zf7 = edi1 == g80483c7;
    } while (!zf7);
    eax8 = g80483bf;
    g80483bf = eax8 + edi1;
    return;
}

uint32_t g80483c3;

void fun_8048281() {
    uint32_t ebx1;
    uint32_t edi2;
    uint32_t eax3;
    uint32_t eax4;
    int1_t less5;
    uint32_t tmp32_6;
    uint32_t eax7;
    uint32_t tmp32_8;
    uint32_t ebx9;
    uint32_t eax10;
    int1_t zf11;
    uint32_t edi12;
    uint32_t eax13;
    uint32_t eax14;
    signed char ah15;
    int1_t zf16;
    uint32_t eax17;
    int1_t zf18;
    uint32_t eax19;

    ebx1 = g80483c7;
    *reinterpret_cast<unsigned char*>(ebx1 + 0x80483cb) = 0;
    edi2 = 0;
    while (1) {
        eax3 = g80483bf;
        eax4 = eax3 + edi2;
        if (!(*reinterpret_cast<unsigned char*>(&eax4) & 15)) {
            fun_8048264();
        }
        while (fun_8048264(), edi2 = edi2 + 1 + 1, less5 = reinterpret_cast<int32_t>(edi2) < reinterpret_cast<int32_t>(g80483c7), less5) {
            tmp32_6 = edi2 + g80483bf;
            if (!(tmp32_6 & 15)) 
                goto addr_80482e7_7;
        }
        break;
        addr_80482e7_7:
        fun_8048138();
    }
    eax7 = g80483c7;
    if (eax7 & 1) {
        --edi2;
    }
    tmp32_8 = g80483bf + edi2;
    g80483bf = tmp32_8;
    ebx9 = g80483c3;
    *reinterpret_cast<signed char*>(ebx9 + 0x80487cc) = 10;
    g80483c3 = ebx9 + 1;
    if (!1) {
        return;
    }
    eax10 = 4;
    __asm__("int 0x80");
    if (!0) {
        g80483c3 = 0;
        return;
    }
    while (0) {
        __asm__("int 0x80");
        __asm__("int 0x80");
        eax10 = 3;
        __asm__("int 0x80");
    }
    if (!0) 
        goto addr_8048113_20;
    zf11 = g804881c == 2;
    if (!zf11) {
        fun_8048264();
    } else {
        fun_804835d();
    }
    fun_8048138();
    __asm__("int 0x80");
    edi12 = 0;
    do {
        eax13 = g80483bf;
        eax14 = eax13 + edi12;
        if (!(*reinterpret_cast<unsigned char*>(&eax14) & 15)) {
            fun_8048264();
        }
        do {
            if (*reinterpret_cast<signed char*>(edi12 + 0x80483cb) < reinterpret_cast<signed char>(32)) {
                if (*reinterpret_cast<unsigned char*>(edi12 + 0x80483cb) == 10) {
                    goto addr_8048251_32;
                }
                if (*reinterpret_cast<unsigned char*>(edi12 + 0x80483cb) == 9) {
                    goto addr_8048251_32;
                }
                if (*reinterpret_cast<unsigned char*>(edi12 + 0x80483cb) == 10) {
                    goto addr_8048251_32;
                }
                if (!*reinterpret_cast<unsigned char*>(edi12 + 0x80483cb)) {
                    addr_8048251_32:
                    ah15 = 4;
                } else {
                    if (*reinterpret_cast<unsigned char*>(edi12 + 0x80483cb) == 12) {
                        goto addr_8048251_32;
                    } else {
                        if (*reinterpret_cast<unsigned char*>(edi12 + 0x80483cb) == 8) {
                            goto addr_8048251_32;
                        } else {
                            addr_8048208_42:
                            fun_8048138();
                            fun_8048138();
                            fun_8048138();
                            continue;
                        }
                    }
                }
            } else {
                if (*reinterpret_cast<signed char*>(edi12 + 0x80483cb) > reinterpret_cast<signed char>(0x7e)) 
                    goto addr_8048208_42;
                fun_8048138();
                fun_8048138();
                fun_8048138();
                fun_8048138();
                continue;
            }
            do {
                fun_8048138();
                ah15 = reinterpret_cast<signed char>(ah15 - 1);
            } while (ah15);
            ++edi12;
            zf16 = edi12 == g80483c7;
        } while (!zf16 && (eax17 = edi12, !!(*reinterpret_cast<unsigned char*>(&eax17) & 15)));
        fun_8048138();
        zf18 = edi12 == g80483c7;
    } while (!zf18);
    eax19 = g80483bf;
    g80483bf = eax19 + edi12;
    return;
    addr_8048113_20:
    g80483c7 = eax10;
    return;
}

void fun_8048138() {
    uint32_t ebx1;
    signed char al2;
    signed char al3;
    uint32_t eax4;
    int1_t zf5;
    uint32_t edi6;
    uint32_t eax7;
    uint32_t eax8;
    signed char ah9;
    int1_t zf10;
    uint32_t eax11;
    int1_t zf12;
    uint32_t eax13;

    ebx1 = g80483c3;
    *reinterpret_cast<signed char*>(ebx1 + 0x80487cc) = al2;
    g80483c3 = ebx1 + 1;
    if (al3 != 10) {
        return;
    }
    eax4 = 4;
    __asm__("int 0x80");
    if (!0) {
        g80483c3 = 0;
        return;
    }
    while (0) {
        __asm__("int 0x80");
        __asm__("int 0x80");
        eax4 = 3;
        __asm__("int 0x80");
    }
    if (!0) 
        goto addr_8048113_9;
    zf5 = g804881c == 2;
    if (!zf5) {
        fun_8048264();
    } else {
        fun_804835d();
    }
    fun_8048138();
    __asm__("int 0x80");
    edi6 = 0;
    do {
        eax7 = g80483bf;
        eax8 = eax7 + edi6;
        if (!(*reinterpret_cast<unsigned char*>(&eax8) & 15)) {
            fun_8048264();
        }
        do {
            if (*reinterpret_cast<signed char*>(edi6 + 0x80483cb) < reinterpret_cast<signed char>(32)) {
                if (*reinterpret_cast<unsigned char*>(edi6 + 0x80483cb) == 10) {
                    goto addr_8048251_21;
                }
                if (*reinterpret_cast<unsigned char*>(edi6 + 0x80483cb) == 9) {
                    goto addr_8048251_21;
                }
                if (*reinterpret_cast<unsigned char*>(edi6 + 0x80483cb) == 10) {
                    goto addr_8048251_21;
                }
                if (!*reinterpret_cast<unsigned char*>(edi6 + 0x80483cb)) {
                    addr_8048251_21:
                    ah9 = 4;
                } else {
                    if (*reinterpret_cast<unsigned char*>(edi6 + 0x80483cb) == 12) {
                        goto addr_8048251_21;
                    } else {
                        if (*reinterpret_cast<unsigned char*>(edi6 + 0x80483cb) == 8) {
                            goto addr_8048251_21;
                        } else {
                            addr_8048208_31:
                            fun_8048138();
                            fun_8048138();
                            fun_8048138();
                            continue;
                        }
                    }
                }
            } else {
                if (*reinterpret_cast<signed char*>(edi6 + 0x80483cb) > reinterpret_cast<signed char>(0x7e)) 
                    goto addr_8048208_31;
                fun_8048138();
                fun_8048138();
                fun_8048138();
                fun_8048138();
                continue;
            }
            do {
                fun_8048138();
                ah9 = reinterpret_cast<signed char>(ah9 - 1);
            } while (ah9);
            ++edi6;
            zf10 = edi6 == g80483c7;
        } while (!zf10 && (eax11 = edi6, !!(*reinterpret_cast<unsigned char*>(&eax11) & 15)));
        fun_8048138();
        zf12 = edi6 == g80483c7;
    } while (!zf12);
    eax13 = g80483bf;
    g80483bf = eax13 + edi6;
    return;
    addr_8048113_9:
    g80483c7 = eax4;
    return;
}

uint32_t fun_804835d() {
    signed char cl1;
    uint32_t eax2;
    uint32_t ebx3;
    uint32_t eax4;
    int1_t zf5;
    uint32_t edi6;
    uint32_t eax7;
    uint32_t eax8;
    signed char ah9;
    int1_t zf10;
    uint32_t eax11;
    int1_t zf12;
    uint32_t eax13;
    uint32_t eax14;

    while (cl1 = reinterpret_cast<signed char>(cl1 - 4), fun_8048138(), !!cl1) {
    }
    *reinterpret_cast<signed char*>(&eax2) = 32;
    ebx3 = g80483c3;
    *reinterpret_cast<signed char*>(ebx3 + 0x80487cc) = 32;
    g80483c3 = ebx3 + 1;
    if (!0) {
        return eax2;
    }
    eax4 = 4;
    __asm__("int 0x80");
    if (!0) {
        g80483c3 = 0;
        return 0;
    }
    while (0) {
        __asm__("int 0x80");
        __asm__("int 0x80");
        eax4 = 3;
        __asm__("int 0x80");
    }
    if (!0) 
        goto addr_8048113_13;
    zf5 = g804881c == 2;
    if (!zf5) {
        fun_8048264();
    } else {
        fun_804835d();
    }
    fun_8048138();
    __asm__("int 0x80");
    edi6 = 0;
    do {
        eax7 = g80483bf;
        eax8 = eax7 + edi6;
        if (!(*reinterpret_cast<unsigned char*>(&eax8) & 15)) {
            fun_8048264();
        }
        do {
            if (*reinterpret_cast<signed char*>(edi6 + 0x80483cb) < reinterpret_cast<signed char>(32)) {
                if (*reinterpret_cast<unsigned char*>(edi6 + 0x80483cb) == 10) {
                    goto addr_8048251_25;
                }
                if (*reinterpret_cast<unsigned char*>(edi6 + 0x80483cb) == 9) {
                    goto addr_8048251_25;
                }
                if (*reinterpret_cast<unsigned char*>(edi6 + 0x80483cb) == 10) {
                    goto addr_8048251_25;
                }
                if (!*reinterpret_cast<unsigned char*>(edi6 + 0x80483cb)) {
                    addr_8048251_25:
                    ah9 = 4;
                } else {
                    if (*reinterpret_cast<unsigned char*>(edi6 + 0x80483cb) == 12) {
                        goto addr_8048251_25;
                    } else {
                        if (*reinterpret_cast<unsigned char*>(edi6 + 0x80483cb) == 8) {
                            goto addr_8048251_25;
                        } else {
                            addr_8048208_35:
                            fun_8048138();
                            fun_8048138();
                            fun_8048138();
                            continue;
                        }
                    }
                }
            } else {
                if (*reinterpret_cast<signed char*>(edi6 + 0x80483cb) > reinterpret_cast<signed char>(0x7e)) 
                    goto addr_8048208_35;
                fun_8048138();
                fun_8048138();
                fun_8048138();
                fun_8048138();
                continue;
            }
            do {
                fun_8048138();
                ah9 = reinterpret_cast<signed char>(ah9 - 1);
            } while (ah9);
            ++edi6;
            zf10 = edi6 == g80483c7;
        } while (!zf10 && (eax11 = edi6, !!(*reinterpret_cast<unsigned char*>(&eax11) & 15)));
        fun_8048138();
        zf12 = edi6 == g80483c7;
    } while (!zf12);
    eax13 = g80483bf;
    eax14 = eax13 + edi6;
    g80483bf = eax14;
    return eax14;
    addr_8048113_13:
    g80483c7 = eax4;
    return eax4;
}

uint32_t fun_8048264() {
    uint32_t esi1;
    uint32_t eax2;
    int1_t cf3;
    unsigned char cl4;
    uint32_t eax5;
    uint32_t ebx6;
    uint32_t eax7;
    int1_t zf8;
    uint32_t edi9;
    uint32_t eax10;
    uint32_t eax11;
    signed char ah12;
    int1_t zf13;
    uint32_t eax14;
    int1_t zf15;
    uint32_t eax16;
    uint32_t eax17;

    esi1 = eax2;
    while (cf3 = cl4 < 3, cl4 = reinterpret_cast<unsigned char>(cl4 - 3), !cf3) {
        eax5 = esi1 >> cl4;
        fun_8048138();
    }
    *reinterpret_cast<signed char*>(&eax5) = 32;
    ebx6 = g80483c3;
    *reinterpret_cast<signed char*>(ebx6 + 0x80487cc) = 32;
    g80483c3 = ebx6 + 1;
    if (!0) {
        return eax5;
    }
    eax7 = 4;
    __asm__("int 0x80");
    if (!0) {
        g80483c3 = 0;
        return 0;
    }
    while (0) {
        __asm__("int 0x80");
        __asm__("int 0x80");
        eax7 = 3;
        __asm__("int 0x80");
    }
    if (!0) 
        goto addr_8048113_13;
    zf8 = g804881c == 2;
    if (!zf8) {
        fun_8048264();
    } else {
        fun_804835d();
    }
    fun_8048138();
    __asm__("int 0x80");
    edi9 = 0;
    do {
        eax10 = g80483bf;
        eax11 = eax10 + edi9;
        if (!(*reinterpret_cast<unsigned char*>(&eax11) & 15)) {
            fun_8048264();
        }
        do {
            if (*reinterpret_cast<signed char*>(edi9 + 0x80483cb) < reinterpret_cast<signed char>(32)) {
                if (*reinterpret_cast<unsigned char*>(edi9 + 0x80483cb) == 10) {
                    goto addr_8048251_25;
                }
                if (*reinterpret_cast<unsigned char*>(edi9 + 0x80483cb) == 9) {
                    goto addr_8048251_25;
                }
                if (*reinterpret_cast<unsigned char*>(edi9 + 0x80483cb) == 10) {
                    goto addr_8048251_25;
                }
                if (!*reinterpret_cast<unsigned char*>(edi9 + 0x80483cb)) {
                    addr_8048251_25:
                    ah12 = 4;
                } else {
                    if (*reinterpret_cast<unsigned char*>(edi9 + 0x80483cb) == 12) {
                        goto addr_8048251_25;
                    } else {
                        if (*reinterpret_cast<unsigned char*>(edi9 + 0x80483cb) == 8) {
                            goto addr_8048251_25;
                        } else {
                            addr_8048208_35:
                            fun_8048138();
                            fun_8048138();
                            fun_8048138();
                            continue;
                        }
                    }
                }
            } else {
                if (*reinterpret_cast<signed char*>(edi9 + 0x80483cb) > reinterpret_cast<signed char>(0x7e)) 
                    goto addr_8048208_35;
                fun_8048138();
                fun_8048138();
                fun_8048138();
                fun_8048138();
                continue;
            }
            do {
                fun_8048138();
                ah12 = reinterpret_cast<signed char>(ah12 - 1);
            } while (ah12);
            ++edi9;
            zf13 = edi9 == g80483c7;
        } while (!zf13 && (eax14 = edi9, !!(*reinterpret_cast<unsigned char*>(&eax14) & 15)));
        fun_8048138();
        zf15 = edi9 == g80483c7;
    } while (!zf15);
    eax16 = g80483bf;
    eax17 = eax16 + edi9;
    g80483bf = eax17;
    return eax17;
    addr_8048113_13:
    g80483c7 = eax7;
    return eax7;
}

void fun_80482f0() {
    uint32_t ebx1;
    uint32_t edi2;
    uint32_t eax3;
    uint32_t eax4;
    int1_t less5;
    uint32_t tmp32_6;
    uint32_t eax7;
    uint32_t tmp32_8;
    uint32_t ebx9;
    uint32_t eax10;
    int1_t zf11;
    uint32_t edi12;
    uint32_t eax13;
    uint32_t eax14;
    signed char ah15;
    int1_t zf16;
    uint32_t eax17;
    int1_t zf18;
    uint32_t eax19;

    ebx1 = g80483c7;
    *reinterpret_cast<unsigned char*>(ebx1 + 0x80483cb) = 0;
    edi2 = 0;
    while (1) {
        eax3 = g80483bf;
        eax4 = eax3 + edi2;
        if (!(*reinterpret_cast<unsigned char*>(&eax4) & 15)) {
            fun_804835d();
        }
        while (fun_804835d(), edi2 = edi2 + 1 + 1, less5 = reinterpret_cast<int32_t>(edi2) < reinterpret_cast<int32_t>(g80483c7), less5) {
            tmp32_6 = edi2 + g80483bf;
            if (!(tmp32_6 & 15)) 
                goto addr_8048354_7;
        }
        break;
        addr_8048354_7:
        fun_8048138();
    }
    eax7 = g80483c7;
    if (eax7 & 1) {
        --edi2;
    }
    tmp32_8 = g80483bf + edi2;
    g80483bf = tmp32_8;
    ebx9 = g80483c3;
    *reinterpret_cast<signed char*>(ebx9 + 0x80487cc) = 10;
    g80483c3 = ebx9 + 1;
    if (!1) {
        return;
    }
    eax10 = 4;
    __asm__("int 0x80");
    if (!0) {
        g80483c3 = 0;
        return;
    }
    while (0) {
        __asm__("int 0x80");
        __asm__("int 0x80");
        eax10 = 3;
        __asm__("int 0x80");
    }
    if (!0) 
        goto addr_8048113_20;
    zf11 = g804881c == 2;
    if (!zf11) {
        fun_8048264();
    } else {
        fun_804835d();
    }
    fun_8048138();
    __asm__("int 0x80");
    edi12 = 0;
    do {
        eax13 = g80483bf;
        eax14 = eax13 + edi12;
        if (!(*reinterpret_cast<unsigned char*>(&eax14) & 15)) {
            fun_8048264();
        }
        do {
            if (*reinterpret_cast<signed char*>(edi12 + 0x80483cb) < reinterpret_cast<signed char>(32)) {
                if (*reinterpret_cast<unsigned char*>(edi12 + 0x80483cb) == 10) {
                    goto addr_8048251_32;
                }
                if (*reinterpret_cast<unsigned char*>(edi12 + 0x80483cb) == 9) {
                    goto addr_8048251_32;
                }
                if (*reinterpret_cast<unsigned char*>(edi12 + 0x80483cb) == 10) {
                    goto addr_8048251_32;
                }
                if (!*reinterpret_cast<unsigned char*>(edi12 + 0x80483cb)) {
                    addr_8048251_32:
                    ah15 = 4;
                } else {
                    if (*reinterpret_cast<unsigned char*>(edi12 + 0x80483cb) == 12) {
                        goto addr_8048251_32;
                    } else {
                        if (*reinterpret_cast<unsigned char*>(edi12 + 0x80483cb) == 8) {
                            goto addr_8048251_32;
                        } else {
                            addr_8048208_42:
                            fun_8048138();
                            fun_8048138();
                            fun_8048138();
                            continue;
                        }
                    }
                }
            } else {
                if (*reinterpret_cast<signed char*>(edi12 + 0x80483cb) > reinterpret_cast<signed char>(0x7e)) 
                    goto addr_8048208_42;
                fun_8048138();
                fun_8048138();
                fun_8048138();
                fun_8048138();
                continue;
            }
            do {
                fun_8048138();
                ah15 = reinterpret_cast<signed char>(ah15 - 1);
            } while (ah15);
            ++edi12;
            zf16 = edi12 == g80483c7;
        } while (!zf16 && (eax17 = edi12, !!(*reinterpret_cast<unsigned char*>(&eax17) & 15)));
        fun_8048138();
        zf18 = edi12 == g80483c7;
    } while (!zf18);
    eax19 = g80483bf;
    g80483bf = eax19 + edi12;
    return;
    addr_8048113_20:
    g80483c7 = eax10;
    return;
}

struct s0 {
    signed char[91] pad91;
    signed char f5b;
};

struct s1 {
    signed char[91] pad91;
    signed char f5b;
};

int32_t g80483bb;

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
    unsigned char* edi24;
    signed char* edi25;
    void* tmp8_26;
    uint1_t cf27;
    struct s0* ebp28;
    struct s1* ebp29;
    signed char* ebx30;
    int32_t ebp31;
    int16_t* v32;
    int1_t zf33;
    int1_t zf34;

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
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *edi24 = reinterpret_cast<unsigned char>(*edi25 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    }
    tmp8_26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    cf27 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_26) < reinterpret_cast<unsigned char>(*eax22));
    *eax22 = tmp8_26;
    *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))) + cf27);
    ebp28->f5b = reinterpret_cast<signed char>(ebp29->f5b + 3);
    ebx30 = reinterpret_cast<signed char*>(0x1d000002);
    do {
        ++ebx30;
    } while (*ebx30);
    if (*(ebx30 - 2) == 0x78) {
        g804881c = 2;
    }
    while (--ebp31, !!ebp31) {
        if (*v32 == 0x6f2d) {
            g804881c = 0;
        } else {
            if (*v32 == 0x632d) {
                g804881c = 1;
            } else {
                if (*v32 == 0x782d) {
                    g804881c = 2;
                } else {
                    __asm__("int 0x80");
                    if (0) 
                        goto 0x80480de;
                    g80483bb = 5;
                }
            }
        }
    }
    zf33 = g804881c == 1;
    if (!zf33) {
        zf34 = g804881c == 0;
        if (!zf34) {
            while (1) {
                fun_80480f8();
                fun_80482f0();
            }
        } else {
            while (1) {
                fun_80480f8();
                fun_8048281();
            }
        }
    } else {
        while (1) {
            fun_80480f8();
            fun_804817c();
        }
    }
}

struct s2 {
    unsigned char f0;
    signed char[98] pad99;
    unsigned char f63;
};

struct s3 {
    signed char[32] pad32;
    unsigned char f20;
};

struct s4 {
    signed char[32] pad32;
    unsigned char f20;
};

struct s5 {
    signed char[32] pad32;
    unsigned char f20;
};

struct s6 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s7 {
    signed char[105] pad105;
    unsigned char f69;
};

void fun_8048381(struct s2* ecx) {
    int16_t* esp2;
    int32_t v3;
    unsigned char dh4;
    struct s3* edx5;
    unsigned char dh6;
    unsigned char* ebx7;
    unsigned char* eax8;
    unsigned char al9;
    void* esp10;
    unsigned char ah11;
    unsigned char bl12;
    struct s4* esi13;
    struct s5* esi14;
    unsigned char bl15;
    void* esi16;
    int32_t ebp17;
    void* esi18;
    int32_t ebp19;
    unsigned char bl20;
    int32_t esi21;
    int32_t esi22;
    unsigned char bl23;
    int32_t esi24;
    int32_t esi25;
    unsigned char bl26;
    struct s6* esi27;
    struct s7* esi28;
    unsigned char ah29;

    esp2 = reinterpret_cast<int16_t*>(__zero_stack_offset());
    v3 = reinterpret_cast<int32_t>(__return_address());
    ecx->f0 = reinterpret_cast<unsigned char>(ecx->f0 ^ dh4);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx5) + 1) = reinterpret_cast<unsigned char>(dh6 ^ *ebx7);
    *reinterpret_cast<unsigned char*>(&eax8) = reinterpret_cast<unsigned char>(al9 ^ 53);
    __asm__("aaa ");
    __asm__("popad ");
    *reinterpret_cast<int16_t*>(&esp2) = *reinterpret_cast<int16_t*>(&v3);
    esp10 = reinterpret_cast<void*>(esp2 + 1);
    *eax8 = reinterpret_cast<unsigned char>(*eax8 ^ ah11);
    edx5->f20 = reinterpret_cast<unsigned char>(edx5->f20 & bl12);
    esi13->f20 = reinterpret_cast<unsigned char>(esi14->f20 & bl15);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi16) + ebp17 * 2 + 32) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi18) + ebp19 * 2 + 32) & bl20);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edx5) + esi21 * 2 + 32) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edx5) + esi22 * 2 + 32) & bl23);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp10) + esi24 * 2 + 32) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp10) + esi25 * 2 + 32) & bl26);
    esi27->f69 = reinterpret_cast<unsigned char>(esi28->f69 & *reinterpret_cast<unsigned char*>(&eax8));
    __asm__("insb ");
    ecx->f63 = reinterpret_cast<unsigned char>(ecx->f63 & ah29);
    __asm__("arpl [ebp+0x73], sp");
    if (!1) {
        if (!0) {
            __asm__("outsd ");
            if (0) {
            }
        }
    }
}
