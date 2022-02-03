
struct s0 {
    signed char[112] pad112;
    unsigned char f70;
};

void fun_8048147() {
    int32_t eax1;
    int32_t ecx2;
    signed char* ebx3;
    int1_t cf4;
    uint32_t edi5;
    int1_t zf6;
    int32_t edi7;
    int1_t below_or_equal8;
    uint32_t edi9;
    int32_t edi10;
    int32_t* edi11;
    struct s0* edi12;

    eax1 = 0;
    ecx2 = 0;
    while ((*reinterpret_cast<signed char*>(&ecx2) = reinterpret_cast<signed char>(*ebx3 - 48), *reinterpret_cast<signed char*>(&ecx2) >= 0) && *reinterpret_cast<signed char*>(&ecx2) <= 9) {
        eax1 = eax1 * 10 + ecx2;
        ++ebx3;
    }
    cf4 = edi5 < 0x804825a;
    zf6 = edi7 == 0x804825a;
    below_or_equal8 = edi9 <= 0x804825a;
    if (edi10 < 0x804825a) {
        *edi11 = eax1;
        return;
    }
    __asm__("int 0x80");
    __asm__("int 0x80");
    if (!zf6) 
        goto addr_80481b7_9;
    addr_80481b7_9:
    __asm__("arpl [ebx+0x20], bp");
    __asm__("outsd ");
    if (!below_or_equal8) {
        if (!cf4) {
            __asm__("insb ");
            __asm__("outsd ");
            if (below_or_equal8) {
                if (!zf6) {
                    __asm__("arpl [ebx+0x20], bp");
                    if (zf6) {
                        if (cf4) {
                        }
                    }
                }
            }
            __asm__("insb ");
            __asm__("outsd ");
            if (below_or_equal8) {
                __asm__("popad ");
                edi12->f70 = 0;
            }
        }
    }
}

struct s1 {
    signed char[112] pad112;
    unsigned char f70;
};

int32_t fun_8048166() {
    int1_t cf1;
    uint32_t edi2;
    int1_t zf3;
    int32_t edi4;
    int1_t below_or_equal5;
    uint32_t edi6;
    int32_t edi7;
    int32_t eax8;
    struct s1* edi9;

    cf1 = edi2 < 0x80481da;
    zf3 = edi4 == 0x80481da;
    below_or_equal5 = edi6 <= 0x80481da;
    if (edi7 > 0x80481da) {
        return eax8;
    }
    __asm__("int 0x80");
    __asm__("int 0x80");
    if (!zf3) 
        goto addr_80481b7_5;
    addr_80481b7_5:
    __asm__("arpl [ebx+0x20], bp");
    __asm__("outsd ");
    if (!below_or_equal5) {
        if (!cf1) {
            __asm__("insb ");
            __asm__("outsd ");
            if (below_or_equal5) {
                if (!zf3) {
                    __asm__("arpl [ebx+0x20], bp");
                    if (zf3) {
                        if (cf1) {
                        }
                    }
                }
            }
            __asm__("insb ");
            __asm__("outsd ");
            if (below_or_equal5) {
                __asm__("popad ");
                edi9->f70 = 0;
            }
        }
    }
}

struct s2 {
    signed char[112] pad112;
    unsigned char f70;
};

void fun_8048174() {
    int1_t cf1;
    uint32_t edi2;
    int1_t zf3;
    int32_t edi4;
    int1_t below_or_equal5;
    uint32_t edi6;
    int32_t edi7;
    int32_t* edi8;
    int32_t eax9;
    struct s2* edi10;

    cf1 = edi2 < 0x804825a;
    zf3 = edi4 == 0x804825a;
    below_or_equal5 = edi6 <= 0x804825a;
    if (edi7 < 0x804825a) {
        *edi8 = eax9;
        return;
    }
    __asm__("int 0x80");
    __asm__("int 0x80");
    if (!zf3) 
        goto addr_80481b7_5;
    addr_80481b7_5:
    __asm__("arpl [ebx+0x20], bp");
    __asm__("outsd ");
    if (!below_or_equal5) {
        if (!cf1) {
            __asm__("insb ");
            __asm__("outsd ");
            if (below_or_equal5) {
                if (!zf3) {
                    __asm__("arpl [ebx+0x20], bp");
                    if (zf3) {
                        if (cf1) {
                        }
                    }
                }
            }
            __asm__("insb ");
            __asm__("outsd ");
            if (below_or_equal5) {
                __asm__("popad ");
                edi10->f70 = 0;
            }
        }
    }
}

int32_t fun_8048117() {
    int32_t ecx1;
    signed char* edi2;
    uint32_t eax3;
    int32_t eax4;
    int32_t v5;

    ecx1 = 0;
    edi2 = reinterpret_cast<signed char*>(0x80483da);
    do {
        eax3 = eax3 / 10;
        ++ecx1;
    } while (eax3);
    do {
        eax4 = v5;
        *edi2 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax4) + 48);
        ++edi2;
        --ecx1;
    } while (ecx1);
    *edi2 = 10;
    __asm__("int 0x80");
    return 4;
}

struct s3 {
    signed char[88] pad88;
    signed char f58;
};

struct s4 {
    signed char[88] pad88;
    signed char f58;
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
    void* tmp8_24;
    uint1_t cf25;
    struct s3* ebp26;
    struct s4* ebp27;
    signed char bl28;
    int32_t ebp29;
    signed char* v30;

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
        __asm__("fiadd dword [ecx]");
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        __asm__("out 0x3, eax");
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    }
    tmp8_24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    cf25 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_24) < reinterpret_cast<unsigned char>(*eax22));
    *eax22 = tmp8_24;
    *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))) + cf25);
    ebp26->f58 = reinterpret_cast<signed char>(ebp27->f58 + bl28);
    while (1) {
        --ebp29;
        if (!ebp29) {
            fun_8048166();
            fun_8048117();
            __asm__("int 0x80");
        } else {
            if (*v30 >= 48 && *v30 <= 57) {
                fun_8048147();
                continue;
            }
            fun_8048166();
            if (*v30 != 0x70) 
                goto addr_8048095_9;
        }
        fun_8048174();
        fun_8048117();
        continue;
        addr_8048095_9:
        if (!(*v30 == 33 || (*v30 == 0x7e || *v30 == 0x6e))) {
            if (*v30 == 100) 
                continue;
            fun_8048166();
            if (*v30 == 43) 
                goto addr_80480f0_14; else 
                goto addr_80480b4_15;
        }
        addr_80480e6_16:
        fun_8048174();
        continue;
        addr_80480f0_14:
        goto addr_80480e6_16;
        addr_80480b4_15:
        if (*v30 == 45) {
            goto addr_80480e6_16;
        } else {
            if (*v30 == 42 || *v30 == 0x78) {
                goto addr_80480e6_16;
            } else {
                if (*v30 == 47) {
                    goto addr_80480e6_16;
                } else {
                    if (*v30 == 37) {
                        goto addr_80480e6_16;
                    } else {
                        if (*v30 == 97) {
                            goto addr_80480e6_16;
                        } else {
                            if (*v30 == 0x6f) {
                                goto addr_80480e6_16;
                            } else {
                                if (*v30 == 0x78) 
                                    goto addr_8048106_29;
                                if (*v30 != 0x65) 
                                    break;
                                addr_8048106_29:
                                goto addr_80480e6_16;
                            }
                        }
                    }
                }
            }
        }
    }
}
