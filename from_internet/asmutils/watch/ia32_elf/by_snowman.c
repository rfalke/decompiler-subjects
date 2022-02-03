
int32_t fun_804812b(int32_t ecx) {
    int32_t eax2;

    eax2 = 0;
    while (*reinterpret_cast<signed char*>(&eax2)) {
        *reinterpret_cast<signed char*>(&eax2) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax2) - 48);
    }
    return eax2;
}

struct s0 {
    signed char[94] pad94;
    signed char f5e;
};

void fun_804813e(void* ecx);

void fun_8048000(int32_t* ecx, int32_t a2, int32_t a3) {
    int1_t less_or_equal4;
    struct s0* esi5;
    void* esi6;
    int32_t eax7;
    int32_t* ebx8;
    int32_t* ebx9;
    int32_t eax10;
    signed char* eax11;
    signed char* eax12;
    signed char al13;
    signed char* eax14;
    signed char* eax15;
    signed char al16;
    signed char* eax17;
    signed char* eax18;
    signed char al19;
    signed char* eax20;
    signed char* eax21;
    signed char al22;
    void** eax23;
    signed char al24;
    signed char* eax25;
    void** eax26;
    signed char dh27;
    void* tmp8_28;
    uint1_t cf29;
    unsigned char* edx30;
    signed char* edx31;
    void* tmp8_32;
    uint1_t cf33;
    unsigned char* edx34;
    signed char* edx35;
    void** tmp32_36;
    uint1_t cf37;
    void** eax38;
    signed char bl39;
    int32_t eax40;

    if (less_or_equal4) {
        esi5 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esi6) + 1);
        *ecx = *ecx + eax7;
        *ebx8 = *ebx9 + eax10;
        *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
        *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
        *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
        *eax20 = reinterpret_cast<signed char>(*eax21 + al22);
        *reinterpret_cast<signed char*>(&eax23) = reinterpret_cast<signed char>(al24 + *eax25);
        eax26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(*eax23));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<uint32_t>(eax26));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax26) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax26) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax26) + reinterpret_cast<uint32_t>(eax26)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax26) + reinterpret_cast<uint32_t>(eax26)) + dh27);
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<uint32_t>(eax26));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<unsigned char*>(eax26 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax26 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        tmp8_28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)) + 8);
        cf29 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_28) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<void**>(&eax26) = tmp8_28;
        *edx30 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*edx31 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26))) + cf29);
        tmp8_32 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        cf33 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_32) < reinterpret_cast<unsigned char>(*eax26));
        *eax26 = tmp8_32;
        *edx34 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*edx35 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26))) + cf33);
        *eax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax26) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        tmp32_36 = eax26;
        cf37 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_36) < reinterpret_cast<uint32_t>(eax26));
        eax38 = tmp32_36;
    }
    *eax38 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax38) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax38))) + cf37);
    esi5->f5e = reinterpret_cast<signed char>(esi5->f5e + bl39);
    if (!__return_address()) {
        __asm__("int 0x80");
    } else {
        eax40 = 4;
        __asm__("int 0x80");
        if (*reinterpret_cast<int16_t*>(__return_address()) == 0x6e2d) {
            eax40 = fun_804812b(fun_804813e);
            goto addr_8048084_7;
        } else {
            if (*reinterpret_cast<int16_t*>(__return_address()) == 0x6e692d2d) {
                do {
                    __asm__("lodsb ");
                    if (0) 
                        goto addr_8048110_11;
                } while (1);
                goto addr_80480f4_13;
            } else {
                goto addr_8048084_7;
            }
        }
    }
    addr_8048122_15:
    __asm__("int 0x80");
    addr_8048084_7:
    do {
        __asm__("lodsd ");
    } while (eax40);
    while (1) {
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
    }
    __asm__("int 0x80");
    addr_8048110_11:
    __asm__("int 0x80");
    goto addr_8048122_15;
    addr_80480f4_13:
    eax40 = fun_804812b(fun_804813e);
    goto addr_8048084_7;
}

struct s1 {
    signed char[50] pad50;
    int32_t f32;
};

struct s2 {
    signed char[101] pad101;
    unsigned char f65;
    signed char[2] pad104;
    unsigned char f68;
};

struct s3 {
    signed char[50] pad50;
    int32_t f32;
};

struct s4 {
    unsigned char f0;
    signed char[116] pad117;
    unsigned char f75;
    signed char[3] pad121;
    unsigned char f79;
};

struct s5 {
    signed char[101] pad101;
    unsigned char f65;
    signed char[12] pad114;
    unsigned char f72;
};

struct s6 {
    signed char[117] pad117;
    unsigned char f75;
};

struct s7 {
    signed char[118] pad118;
    unsigned char f76;
};

struct s8 {
    signed char[118] pad118;
    unsigned char f76;
};

struct s9 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s10 {
    signed char[120] pad120;
    unsigned char f78;
};

struct s11 {
    signed char[120] pad120;
    unsigned char f78;
};

struct s12 {
    signed char[120] pad120;
    unsigned char f78;
};

struct s13 {
    signed char[120] pad120;
    unsigned char f78;
};

struct s14 {
    signed char[120] pad120;
    signed char f78;
};

unsigned char g726f206e;

unsigned char g746e692d;

struct s15 {
    signed char[97] pad97;
    unsigned char f61;
};

struct s16 {
    signed char[97] pad97;
    unsigned char f61;
};

struct s17 {
    signed char[102] pad102;
    unsigned char f66;
};

struct s18 {
    signed char[102] pad102;
    unsigned char f66;
};

struct s19 {
    signed char[102] pad102;
    signed char f66;
};

void fun_804813e(void* ecx) {
    uint1_t cf2;
    uint32_t ebx3;
    struct s1* ebx4;
    uint1_t cf5;
    struct s2* ebx6;
    void* ebx7;
    struct s3* ebx8;
    struct s4* edx9;
    void* edx10;
    uint1_t zf11;
    struct s5* eax12;
    int16_t di13;
    struct s7* ebp14;
    struct s8* ebp15;
    struct s9* ebp16;
    struct s10* ebp17;
    struct s11* ebp18;
    unsigned char ah19;
    struct s12* ebp20;
    struct s13* ebp21;
    unsigned char ah22;
    uint1_t zf23;
    struct s14* ebp24;
    uint1_t below_or_equal25;
    int1_t zf26;
    void* eax27;
    int1_t sf28;
    int32_t ebp29;
    int32_t ebp30;
    int32_t ebp31;
    int32_t ebp32;
    struct s15* esi33;
    struct s16* esi34;
    struct s17* ebp35;
    struct s18* ebp36;
    struct s19* ebp37;

    cf2 = reinterpret_cast<uint1_t>(ebx3 < ebx4->f32 + cf5);
    ebx6 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(ebx7) - (ebx8->f32 + cf2));
    edx9 = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(edx10) - 1);
    zf11 = reinterpret_cast<uint1_t>(edx9 == 0);
    if (reinterpret_cast<uint1_t>(cf2 | zf11)) {
        if (zf11) {
            addr_80481a9_4:
            goto addr_80481ab_5;
        } else {
            if (!cf2) {
                addr_80481ab_5:
                eax12->f72 = 0;
                __asm__("outsd ");
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<struct s6**>(&ebx6)) + di13) + 0x73) = 0;
                edx9->f75 = 0;
                __asm__("outsb ");
                ebp14->f76 = reinterpret_cast<unsigned char>(ebp15->f76 & 0xff);
                if (!0) {
                    edx9->f0 = 0;
                    ebx6->f65 = 0;
                    __asm__("arpl [ebx], di");
                    ebp16->f73 = 0;
                    goto addr_80481c8_9;
                }
            } else {
                ebp17->f78 = reinterpret_cast<unsigned char>(ebp18->f78 & ah19);
                __asm__("arpl [gs:edi+0x6e], bx");
                __asm__("popad ");
                __asm__("insd ");
                ebp20->f78 = reinterpret_cast<unsigned char>(ebp21->f78 & ah22);
                zf23 = reinterpret_cast<uint1_t>(ebp24->f78 == 0);
                below_or_equal25 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf23));
                __asm__("arpl [gs:edi+0x61], bx");
                if (0) {
                    addr_80481c8_9:
                    g726f206e = 0;
                    g746e692d = 0;
                    cf2 = 0;
                    goto addr_80481d3_11;
                } else {
                    if (1) {
                        addr_8048183_13:
                        __asm__("outsd ");
                        if (!below_or_equal25) {
                            goto addr_80481f1_15;
                        } else {
                            __asm__("outsb ");
                            *reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s6**>(&ebx6))->f75) = 0;
                            zf26 = *reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s6**>(&ebx6))->f75) == 0;
                            if (zf26) 
                                goto addr_80481fe_17;
                            if (!zf26) 
                                goto addr_8048204_19; else 
                                goto addr_8048190_20;
                        }
                    } else {
                        eax12 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(eax27) - 0x65786520);
                        __asm__("arpl [eax], sp");
                        __asm__("popad ");
                        eax12->f72 = 0;
                        cf2 = 0;
                        __asm__("outsd ");
                        if (0) {
                            addr_80481d3_11:
                            goto addr_80481d4_22;
                        } else {
                            __asm__("insd ");
                            eax12->f65 = 0;
                            sf28 = __intrinsic();
                            if (0) {
                                goto addr_80481e2_25;
                            } else {
                                __asm__("outsd ");
                                ebx6->f68 = 0;
                                zf23 = reinterpret_cast<uint1_t>(ebx6->f68 == 0);
                                below_or_equal25 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf23));
                                goto addr_8048183_13;
                            }
                        }
                    }
                }
            }
        }
    }
    if (zf11) {
        addr_80481d4_22:
        if (!cf2) {
            __asm__("popad ");
            __asm__("insb ");
            sf28 = reinterpret_cast<int32_t>(eax12) < reinterpret_cast<int32_t>(0x206f740a);
            if (reinterpret_cast<uint32_t>(eax12) >= 0x206f740a) {
            }
        }
    } else {
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax12) + ebp29 * 2 + 0x65) = 0;
        goto addr_80481a9_4;
    }
    addr_80481e2_25:
    __asm__("arpl [gs:ecx+0x66], bp");
    if (!sf28) {
        addr_8048208_32:
    } else {
        __asm__("popad ");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) + ebp30 * 2 + 0x66) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) + ebp31 * 2 + 0x66) & 0xff);
        zf23 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + ebp32 * 2 + 0x66) == 0);
        if (0) {
        }
    }
    addr_80481f1_15:
    __asm__("outsb ");
    if (!zf23) {
        goto addr_80481fa_37;
    }
    addr_8048204_19:
    esi33->f61 = reinterpret_cast<unsigned char>(esi34->f61 & 0xff);
    goto addr_8048208_32;
    addr_8048190_20:
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax12) + 1) = 0xff;
    __asm__("insb ");
    __asm__("insb ");
    if (1) {
        addr_80481fa_37:
        __asm__("insb ");
        goto addr_80481fe_17;
    } else {
        if (0) {
            addr_80481fe_17:
            __asm__("arpl [gs:esi+0x65], si");
            goto addr_8048204_19;
        } else {
            __asm__("outsb ");
            edx9->f79 = reinterpret_cast<unsigned char>(edx9->f79 & *reinterpret_cast<unsigned char*>(&eax12));
            ebp35->f66 = reinterpret_cast<unsigned char>(ebp36->f66 & 0xff);
            cf2 = 0;
            zf11 = reinterpret_cast<uint1_t>(ebp37->f66 == 0);
            __asm__("popad ");
            if (!zf11) {
            }
        }
    }
}
