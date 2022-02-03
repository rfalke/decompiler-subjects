
struct s2 {
    signed char f0;
    signed char[96] pad97;
    unsigned char f61;
    signed char[7] pad105;
    unsigned char f69;
    signed char[5] pad111;
    unsigned char f6f;
    signed char[2] pad114;
    unsigned char f72;
};

struct s1 {
    int32_t f0;
    struct s2* f4;
};

struct s0 {
    struct s1* f0;
    signed char[104] pad105;
    int32_t f69;
    signed char[6] pad115;
    int32_t f73;
};

struct s3 {
    unsigned char f0;
    signed char[31] pad32;
    unsigned char f20;
    signed char[65] pad98;
    unsigned char f62;
    signed char[1] pad100;
    unsigned char f64;
    unsigned char f65;
    signed char[7] pad109;
    unsigned char f6d;
    unsigned char f6e;
    unsigned char f6f;
    signed char[2] pad114;
    unsigned char f72;
    unsigned char f73;
    signed char[1] pad117;
    unsigned char f75;
};

struct s4 {
    signed char[1] pad1;
    signed char f1;
};

int32_t g20;

struct s5 {
    signed char[116] pad116;
    unsigned char f74;
};

struct s6 {
    signed char[116] pad116;
    signed char f74;
};

int32_t g61;

unsigned char gff51;

struct s7 {
    signed char[116] pad116;
    unsigned char f74;
};

unsigned char gffb6;

unsigned char g6228090a;

struct s8 {
    signed char[102] pad102;
    unsigned char f66;
};

unsigned char g6f;

unsigned char g74;

struct s9 {
    signed char[110] pad110;
    unsigned char f6e;
};

struct s10 {
    int32_t f0;
    int32_t f4;
};

struct s11 {
    signed char[104] pad104;
    unsigned char f68;
};

unsigned char gffc6;

struct s12 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s13 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s14 {
    signed char[105] pad105;
    signed char f69;
};

struct s15 {
    signed char[104] pad104;
    unsigned char f68;
};

struct s16 {
    signed char[104] pad104;
    unsigned char f68;
};

struct s17 {
    struct s2* f0;
    int32_t f4;
};

struct s18 {
    signed char[104] pad104;
    unsigned char f68;
};

struct s19 {
    signed char[104] pad104;
    unsigned char f68;
};

struct s20 {
    signed char[110] pad110;
    unsigned char f6e;
};

struct s0* fun_8048000(struct s3* ecx) {
    void* esp2;
    int1_t less_or_equal3;
    struct s2* esi4;
    struct s4* esi5;
    int32_t eax6;
    int32_t* ebx7;
    int32_t* ebx8;
    int32_t eax9;
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
    void** eax22;
    signed char al23;
    signed char* eax24;
    struct s0* eax25;
    struct s1* tmp8_26;
    uint1_t cf27;
    struct s0* tmp32_28;
    uint32_t tmp32_29;
    int1_t cf30;
    struct s2* ebx31;
    int1_t zf32;
    void* tmp8_33;
    int1_t cf34;
    uint32_t ebp35;
    int32_t ebp36;
    int32_t ebx37;
    int32_t edi38;
    int32_t edi39;
    signed char dl40;
    void* tmp8_41;
    int1_t cf42;
    struct s1* esp43;
    void* al44;
    int32_t edi45;
    int32_t edi46;
    signed char dl47;
    int1_t zf48;
    void* edi49;
    int1_t cf50;
    int1_t zf51;
    void* edi52;
    uint32_t tmp32_53;
    int1_t cf54;
    uint1_t cf55;
    uint1_t zf56;
    int1_t of57;
    struct s5* edi58;
    uint1_t cf59;
    uint1_t zf60;
    struct s6* edi61;
    int1_t of62;
    uint1_t below_or_equal63;
    int1_t sf64;
    uint1_t below_or_equal65;
    struct s7* edi66;
    uint1_t below_or_equal67;
    struct s8* edi68;
    void** esp69;
    int1_t zf70;
    void** esp71;
    int1_t below_or_equal72;
    struct s9* edi73;
    struct s10* esp74;
    int1_t sf75;
    void** esp76;
    uint1_t zf77;
    struct s12* edi78;
    struct s13* edi79;
    struct s14* edi80;
    struct s15* edi81;
    struct s16* edi82;
    int1_t cf83;
    int1_t zf84;
    int32_t eax85;
    struct s17* esp86;
    struct s18* edi87;
    struct s19* edi88;
    struct s20* edi89;
    struct s2* v90;

    esp2 = __zero_stack_offset();
    if (less_or_equal3) {
        esp2 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp2) - 1);
        esi4 = reinterpret_cast<struct s2*>(&esi5->f1);
        ecx->f0 = reinterpret_cast<unsigned char>(ecx->f0 + eax6);
        *ebx7 = *ebx8 + eax9;
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
        *reinterpret_cast<signed char*>(&eax22) = reinterpret_cast<signed char>(al23 + *eax24);
        eax25 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<uint32_t>(*eax22));
        eax25->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<uint32_t>(eax25));
        eax25->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax25) + 1) = 0x80;
        *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) + 8)));
        eax25->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        eax25->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        eax25->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        eax25->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        eax25->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25))));
        eax25->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax25->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        eax25->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<uint32_t>(eax25));
        eax25->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        eax25->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        eax25->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax25) + 0x80000804) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax25) + 0x80000804) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) + 8);
        if (reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax25)) < reinterpret_cast<signed char>(0)) {
            goto addr_8048042_4;
        } else {
            tmp8_26 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
            cf27 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_26) < reinterpret_cast<unsigned char>(eax25->f0));
            eax25->f0 = tmp8_26;
            if (reinterpret_cast<signed char>(eax25->f0) < reinterpret_cast<signed char>(0)) {
                addr_8048045_6:
            } else {
                addr_8048042_4:
                eax25->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                tmp32_28 = reinterpret_cast<struct s0*>(&eax25->f0);
                cf27 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_28) < reinterpret_cast<uint32_t>(eax25));
                eax25 = tmp32_28;
                goto addr_8048045_6;
            }
        }
    }
    eax25->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25))) + cf27);
    ecx->f72 = reinterpret_cast<unsigned char>(ecx->f72 + 0x80);
    __asm__("arpl [eax+0x57], bp");
    tmp32_29 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) + 98);
    cf30 = tmp32_29 < *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ecx));
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) = tmp32_29;
    __asm__("popad ");
    if (!cf30) {
        while (*reinterpret_cast<void**>(&eax25)) {
            addr_80480bc_9:
            __asm__("lodsb ");
        }
        do {
            esi4 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(esi4) - 1);
            if (ebx31 == esi4) 
                break;
            zf32 = esi4->f0 == 47;
            addr_80480c8_12:
        } while (!zf32);
        goto addr_80480cb_13;
    } else {
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) + 0x65;
        __asm__("arpl [eax+0x6f], bp");
        esp2 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp2) - 4 - 4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) + 0x66;
        __asm__("popad ");
        __asm__("arpl [edi+edx*2-0x7d], si");
        tmp8_33 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) + 8);
        cf34 = reinterpret_cast<unsigned char>(tmp8_33) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25));
        *reinterpret_cast<void**>(&eax25) = tmp8_33;
        zf32 = *reinterpret_cast<void**>(&eax25) == 0;
        __asm__("popa ");
        __asm__("insb ");
        if (!cf34) 
            goto addr_80480c8_12;
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) + 0x6b;
        ebp35 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esp2) + ebp36 * 2 + 87) * 0x70080483);
        if (!reinterpret_cast<uint1_t>(__intrinsic() | __undefined())) 
            goto addr_80480e3_16; else 
            goto addr_804807f_17;
    }
    addr_80480cc_18:
    ebx37 = 0;
    while (*reinterpret_cast<signed char*>(ebx37 + 0x804804c)) {
        if (*reinterpret_cast<signed char*>(ebx37 + 0x804804c) == esi4->f0) 
            goto addr_80480e1_21;
        ebx37 = ebx37 + 8;
    }
    goto addr_80480f2_24;
    addr_80480e1_21:
    eax25 = *reinterpret_cast<struct s0**>(ebx37 + 0x8048050);
    addr_80480e3_16:
    __asm__("popad ");
    return eax25;
    addr_80480cb_13:
    esi4 = reinterpret_cast<struct s2*>(&esi4->pad97);
    goto addr_80480cc_18;
    addr_804807f_17:
    *reinterpret_cast<signed char*>(edi38 - 0x7d) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edi39 - 0x7d) + dl40);
    tmp8_41 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) + 8);
    cf42 = reinterpret_cast<unsigned char>(tmp8_41) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25));
    *reinterpret_cast<void**>(&eax25) = tmp8_41;
    if (!cf42) {
        addr_80480f2_24:
        ecx = reinterpret_cast<struct s3*>(0x8048106);
        esp43 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(esp2) - 4 + 4 - 4);
        goto addr_80480fb_25;
    } else {
        esp43 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(esp2) - 4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) + 0x73;
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) >= 0) {
            addr_80480fd_27:
            __asm__("int 0x80");
            eax25 = reinterpret_cast<struct s0*>(1);
            esp43 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(esp43) - 4 + 4);
            __asm__("int 0x80");
            goto addr_8048105_28;
        } else {
            __asm__("arpl [edi-0x7d], dx");
            al44 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) + 8);
            if (!al44) {
                addr_80480fb_25:
                esp43 = reinterpret_cast<struct s1*>(&esp43->f4);
                goto addr_80480fd_27;
            } else {
                *reinterpret_cast<signed char*>(edi45 - 0x7d) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edi46 - 0x7d) + dl47);
                *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(al44) + 8);
                zf48 = *reinterpret_cast<void**>(&eax25) == 0;
                if (zf48) {
                    addr_8048110_31:
                    __asm__("popad ");
                    esi4->f61 = 0;
                    if (1) 
                        goto addr_804818d_32;
                } else {
                    if (!zf48) {
                        addr_8048105_28:
                        if (1) {
                            addr_804812c_34:
                            __asm__("arpl [edi+0x6f], bp");
                            __asm__("insb ");
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi49) + ebp35 * 2 + 0x6f) = 0;
                            cf50 = 0;
                            zf51 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi52) + ebp35 * 2 + 0x6f) == 0;
                            if (0) {
                                addr_804819a_35:
                                if (!zf51) {
                                    goto addr_8048211_37;
                                } else {
                                    goto addr_80481a2_39;
                                }
                            } else {
                                __asm__("popad ");
                                __asm__("arpl [ebx+0xa], bp");
                                goto addr_804813b_41;
                            }
                        } else {
                            esi4 = reinterpret_cast<struct s2*>(g20 * 0x20746f6e);
                            goto addr_8048110_31;
                        }
                    } else {
                        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) + 0x75;
                        __asm__("outsb ");
                        __asm__("popad ");
                        __asm__("insd ");
                        tmp32_53 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) + 0x79);
                        cf54 = tmp32_53 < *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ecx));
                        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) = tmp32_53;
                        if (!cf54) 
                            goto addr_80480b0_44; else 
                            goto addr_80480b0_44;
                    }
                }
            }
        }
    }
    if (!__intrinsic()) {
        addr_804813b_41:
        *reinterpret_cast<unsigned char*>(&ecx) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx) | ecx->f0);
        cf55 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax25) < 0x206e6120);
        eax25 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(eax25) - 0x206e6120);
        zf56 = reinterpret_cast<uint1_t>(eax25 == 0);
        of57 = __intrinsic();
        __asm__("popad ");
        goto addr_8048144_46;
    } else {
        cf55 = 0;
        zf56 = 0;
        of57 = 0;
        if (1) {
            addr_8048144_46:
            __asm__("outsb ");
            __asm__("arpl [ecx+0x65], bp");
            __asm__("outsb ");
            if (zf56) {
                addr_804816b_48:
                __asm__("popad ");
                if (!cf55) {
                    addr_80481e1_49:
                    if (zf56) {
                        addr_8048253_50:
                        edi58->f74 = 0;
                        cf59 = 0;
                        zf60 = reinterpret_cast<uint1_t>(edi61->f74 == 0);
                        of62 = 0;
                        below_or_equal63 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf60));
                        esp43 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(esp43) - 4);
                        *reinterpret_cast<int32_t*>(&esp43->f0) = 0x70207265;
                        if (0) {
                            addr_80482cd_51:
                            goto addr_80482cf_52;
                        } else {
                            if (0) 
                                goto addr_80482c2_54;
                            __asm__("insd ");
                            if (!1) 
                                goto addr_8048264_56;
                        }
                    } else {
                        cf55 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax25) < 0x656e6567);
                        eax25 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(eax25) - 0x656e6567);
                        zf56 = reinterpret_cast<uint1_t>(eax25 == 0);
                        goto addr_80481e5_58;
                    }
                } else {
                    __asm__("insd ");
                    if (of57) {
                        addr_80481e5_58:
                        goto addr_80481e8_60;
                    } else {
                        if (zf56) {
                            addr_80481a2_39:
                            esp43 = reinterpret_cast<struct s1*>(g61 * 0x62206c6c);
                            goto addr_80481ab_62;
                        } else {
                            *reinterpret_cast<unsigned char*>(&ecx) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx) | gff51);
                            cf55 = 0;
                            zf56 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&ecx) == 0);
                            sf64 = __intrinsic();
                            below_or_equal65 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf56));
                            esp43 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(esp43) - 4 - 4);
                            goto addr_8048180_64;
                        }
                    }
                }
            } else {
                __asm__("popad ");
                if (!cf55) {
                    addr_80481c1_66:
                    esp43 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(esp43) - 4);
                    *reinterpret_cast<int32_t*>(&esp43->f0) = 0x20646e69;
                    goto addr_80481c5_67;
                } else {
                    __asm__("insd ");
                    if (of57) {
                        addr_80481c5_67:
                        esi4 = reinterpret_cast<struct s2*>(eax25->f69 * 0x68742073);
                        __asm__("popad ");
                        if (__undefined()) {
                            addr_80481f3_69:
                            edi66->f74 = 0;
                            goto addr_80481f6_70;
                        } else {
                            esi4 = reinterpret_cast<struct s2*>(eax25->f73 * 0x6c756f68);
                            gffb6 = reinterpret_cast<unsigned char>(gffb6 & 0x80);
                            ecx->f75 = reinterpret_cast<unsigned char>(ecx->f75 & 0x80);
                            zf56 = reinterpret_cast<uint1_t>(ecx->f75 == 0);
                            goto addr_80481e1_49;
                        }
                    } else {
                        __asm__("insd ");
                        g6228090a = 0;
                        cf55 = 0;
                        zf56 = reinterpret_cast<uint1_t>(g6228090a == 0);
                        sf64 = __intrinsic();
                        below_or_equal65 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf56));
                        if (!sf64) {
                            addr_8048180_64:
                            if (below_or_equal65) {
                                addr_80481e8_60:
                                if (cf55) {
                                    goto addr_804824d_74;
                                }
                            } else {
                                __asm__("outsb ");
                                if (zf56) {
                                    addr_80481fb_76:
                                    __asm__("popad ");
                                    if (1) {
                                        addr_804826b_77:
                                        ecx->f6e = 0;
                                        ecx->f20 = reinterpret_cast<unsigned char>(ecx->f20 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax25) + 1));
                                        below_or_equal67 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(ecx->f20 == 0)));
                                        __asm__("insd ");
                                        __asm__("outsd ");
                                        if (0) {
                                            addr_80482da_78:
                                            __asm__("popad ");
                                            __asm__("outsb ");
                                            if (!below_or_equal67) {
                                                addr_8048346_79:
                                                __asm__("arpl [edx+0x69], si");
                                                goto addr_804834d_80;
                                            } else {
                                                ebp35 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(ebp35 + 44) * 0x206f640a);
                                                cf59 = __intrinsic();
                                                zf60 = __undefined();
                                                below_or_equal63 = reinterpret_cast<uint1_t>(cf59 | zf60);
                                                goto addr_80482df_82;
                                            }
                                        } else {
                                            cf50 = reinterpret_cast<uint32_t>(eax25) < 0x6c2d726f;
                                            eax25 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(eax25) - 0x6c2d726f);
                                            zf51 = eax25 == 0;
                                            goto addr_8048278_84;
                                        }
                                    } else {
                                        esi4->f69 = reinterpret_cast<unsigned char>(esi4->f69 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax25) + 1));
                                        __asm__("insb ");
                                        if (1) {
                                            goto addr_8048226_87;
                                        }
                                        ecx->f6e = reinterpret_cast<unsigned char>(ecx->f6e - *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax25) + 1));
                                        edi68->f66 = 0;
                                        g6f = reinterpret_cast<unsigned char>(g6f & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax25) + 1));
                                        cf50 = 0;
                                        zf51 = g6f == 0;
                                        if (!zf51) 
                                            goto addr_8048283_89; else 
                                            goto addr_8048211_37;
                                    }
                                } else {
                                    __asm__("popad ");
                                    __asm__("insb ");
                                    __asm__("insb ");
                                    if (!sf64) {
                                        addr_80481ab_62:
                                        ebp35 = esi4->f61 * 0xa2e7972;
                                        esp69 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esp43) - 4);
                                        *reinterpret_cast<void***>(esp69) = esp69;
                                        esp43 = reinterpret_cast<struct s1*>(esp69 - 1);
                                        *reinterpret_cast<int32_t*>(&esp43->f0) = 0x68772065;
                                        __asm__("outsd ");
                                        __asm__("insb ");
                                        ecx->f64 = 0;
                                        __asm__("popad ");
                                        gffb6 = reinterpret_cast<unsigned char>(gffb6 & 0x80);
                                        goto addr_80481c1_66;
                                    } else {
                                        addr_804818b_91:
                                        if (!below_or_equal65) {
                                            addr_80481f6_70:
                                            esp43 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(esp43) - 4);
                                            *reinterpret_cast<int32_t*>(&esp43->f0) = 0x2e207265;
                                            goto addr_80481fb_76;
                                        } else {
                                            addr_804818d_32:
                                            __asm__("insb ");
                                            __asm__("insb ");
                                            gffb6 = reinterpret_cast<unsigned char>(gffb6 & 0x80);
                                            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax25) + ebp35 * 2 + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax25) + ebp35 * 2 + 0x65) & 0xff);
                                            ecx->f73 = reinterpret_cast<unsigned char>(ecx->f73 & 0x80);
                                            cf50 = 0;
                                            zf51 = ecx->f73 == 0;
                                            __asm__("insd ");
                                            goto addr_804819a_35;
                                        }
                                    }
                                }
                            }
                        } else {
                            __asm__("popad ");
                            __asm__("outsb ");
                            ecx->f6e = reinterpret_cast<unsigned char>(ecx->f6e & 0x80);
                            cf55 = 0;
                            zf56 = reinterpret_cast<uint1_t>(ecx->f6e == 0);
                            of57 = 0;
                            below_or_equal65 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf56));
                            __asm__("arpl [ecx+0x65], bp");
                            __asm__("outsb ");
                            if (zf56) 
                                goto addr_804818b_91; else 
                                goto addr_804816b_48;
                        }
                    }
                }
            }
        } else {
            esi4 = reinterpret_cast<struct s2*>(g20 * 0x7473756a);
            ecx->f20 = reinterpret_cast<unsigned char>(ecx->f20 & 0x80);
            goto addr_804812c_34;
        }
    }
    addr_8048284_94:
    __asm__("popad ");
    __asm__("outsb ");
    gffb6 = reinterpret_cast<unsigned char>(gffb6 & 0xff);
    addr_804828b_95:
    __asm__("insb ");
    esp43 = reinterpret_cast<struct s1*>(ecx->f62 * 0x7320656c);
    zf70 = __undefined();
    goto addr_804828d_96;
    addr_8048264_56:
    if (!below_or_equal63) {
        addr_80482cf_52:
        if (0) {
            addr_8048336_97:
            if (!zf60) {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax25) + ebp35 * 2 + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax25) + ebp35 * 2 + 0x65) & 0xff);
                goto addr_804833b_100;
            }
        } else {
            __asm__("insb ");
            __asm__("popad ");
            if (1) {
                addr_804833b_100:
                ecx->f62 = reinterpret_cast<unsigned char>(ecx->f62 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax25) + 1));
                __asm__("outsd ");
                if (ecx->f62) {
                    *reinterpret_cast<unsigned char*>(ebp35 + 0x73) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp35 + 0x73) & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax25) + 1));
                    goto addr_8048346_79;
                }
            } else {
                *reinterpret_cast<unsigned char*>(ebp35 + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp35 + 0x65) & *reinterpret_cast<unsigned char*>(&ecx));
                below_or_equal67 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(ebp35 + 0x65) == 0)));
                goto addr_80482d8_105;
            }
        }
    } else {
        __asm__("insb ");
        __asm__("insb ");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax25) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax25) + 1) | gffb6);
        goto addr_804826b_77;
    }
    if (zf56) {
        addr_8048252_108:
        __asm__("outsb ");
        goto addr_8048253_50;
    } else {
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax25) + 1) = reinterpret_cast<unsigned char>(0x80 | esi4->f72);
        __asm__("outsd ");
        __asm__("insd ");
        goto addr_80481f3_69;
    }
    addr_8048283_89:
    goto addr_8048284_94;
    addr_8048211_37:
    if (1) {
        addr_8048278_84:
        if (!cf50) {
            addr_80482f0_110:
            if (!zf51) {
                addr_8048366_111:
                esp71 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esp43) - 4);
                *reinterpret_cast<void***>(esp71) = reinterpret_cast<void**>(1);
                esp43 = reinterpret_cast<struct s1*>(esp71 + 1 - 1);
                *reinterpret_cast<int32_t*>(&esp43->f0) = 4;
                goto addr_804836d_112;
            } else {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + ebp35 * 2 + 0x6d) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + ebp35 * 2 + 0x6d) & 0xff);
                goto addr_80482f6_114;
            }
        } else {
            *reinterpret_cast<unsigned char*>(ebp35 + 0x73) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp35 + 0x73) & 0xff);
            __asm__("popad ");
            goto addr_8048283_89;
        }
    } else {
        g74 = reinterpret_cast<unsigned char>(g74 & 0xff);
        zf70 = g74 == 0;
        __asm__("popad ");
        if (0) 
            goto addr_804828d_96;
        if (!zf70) 
            goto addr_804828b_95;
    }
    g6f = reinterpret_cast<unsigned char>(g6f & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax25) + 1));
    below_or_equal72 = reinterpret_cast<unsigned char>(eax25->f0) <= reinterpret_cast<unsigned char>(esp43);
    eax25->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax25->f0) - reinterpret_cast<unsigned char>(esp43));
    zf70 = eax25->f0 == 0;
    if (!below_or_equal72) {
        addr_804828d_96:
        goto addr_804828e_119;
    } else {
        if (zf70) {
            addr_804828e_119:
            if (zf70) {
                addr_80482f6_114:
                edi73->f6e = 0;
                goto addr_80482fc_121;
            } else {
                if (zf70) {
                    addr_80482fc_121:
                    ecx->f6d = 0;
                    if (0) {
                        addr_8048373_123:
                        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(esp43) - 4) = reinterpret_cast<void**>(1);
                        __asm__("int 0x80");
                    } else {
                        __asm__("outsd ");
                        if (!ecx->f6d) {
                            addr_804836d_112:
                            __asm__("int 0x80");
                            esp74 = reinterpret_cast<struct s10*>(&esp43->f4 - 1);
                            esp74->f0 = 1;
                            esp43 = reinterpret_cast<struct s1*>(&esp74->f4);
                            goto addr_8048373_123;
                        } else {
                            __asm__("outsb ");
                            *reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s11**>(&esi4))->f68) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s11**>(&esi4))->f68) & 0xff);
                            goto addr_804830a_126;
                        }
                    }
                } else {
                    eax25->f0 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax25->f0) & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax25) + 1));
                    cf59 = 0;
                    zf60 = reinterpret_cast<uint1_t>(eax25->f0 == 0);
                    sf75 = __intrinsic();
                    of62 = 0;
                    below_or_equal63 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf60));
                    goto addr_8048299_128;
                }
            }
        } else {
            addr_8048226_87:
            g6f = reinterpret_cast<unsigned char>(g6f & 0xff);
            __asm__("insd ");
            cf59 = 0;
            zf60 = 0;
            sf75 = __intrinsic();
            of62 = 0;
            below_or_equal63 = 0;
            if (0) {
                addr_8048299_128:
                esp76 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esp43) - 4);
                *reinterpret_cast<void***>(esp76) = esp76;
                esp43 = reinterpret_cast<struct s1*>(esp76 - 1);
                *reinterpret_cast<int32_t*>(&esp43->f0) = 0x61642065;
                goto addr_804829f_129;
            } else {
                if (0) {
                    addr_80482a6_131:
                    __asm__("outsd ");
                    if (zf60) {
                        addr_80482ca_132:
                        __asm__("arpl [eax+0x20], bp");
                        goto addr_80482cd_51;
                    } else {
                        __asm__("arpl [edi+0x6d], bp");
                        ecx->f65 = 0;
                        cf59 = 0;
                        zf60 = reinterpret_cast<uint1_t>(ecx->f65 == 0);
                        below_or_equal63 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf60));
                        if (zf60) {
                            addr_80482df_82:
                            goto addr_80482e5_134;
                        } else {
                            gffc6 = reinterpret_cast<unsigned char>(gffc6 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax25) + 1));
                            zf77 = reinterpret_cast<uint1_t>(gffc6 == 0);
                            below_or_equal67 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf77));
                            if (zf77) {
                                addr_80482d8_105:
                                goto addr_80482da_78;
                            } else {
                                esi4 = reinterpret_cast<struct s2*>(eax25->f69 * 0x6c632073);
                                cf59 = __intrinsic();
                                of62 = __intrinsic();
                                zf60 = __undefined();
                                below_or_equal63 = reinterpret_cast<uint1_t>(cf59 | zf60);
                            }
                        }
                    }
                } else {
                    edi78->f69 = reinterpret_cast<unsigned char>(edi79->f69 & 0xff);
                    cf59 = 0;
                    zf60 = reinterpret_cast<uint1_t>(edi80->f69 == 0);
                    sf75 = __intrinsic();
                    of62 = 0;
                    below_or_equal63 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf60));
                    if (zf60) {
                        addr_804829f_129:
                        if (!sf75) {
                            addr_80482c2_54:
                            goto addr_80482c3_138;
                        } else {
                            addr_80482a2_139:
                            esp43 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(esp43) - 4);
                            *reinterpret_cast<int32_t*>(&esp43->f0) = 0x6e0a7361;
                            goto addr_80482a6_131;
                        }
                    } else {
                        esi4->f6f = 0;
                        *reinterpret_cast<unsigned char*>(ebp35 + 97) = 0;
                        zf60 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(ebp35 + 97) == 0);
                        __asm__("outsb ");
                        if (!zf60) {
                            goto addr_80482a2_139;
                        }
                        __asm__("insb ");
                        ecx->f64 = reinterpret_cast<unsigned char>(ecx->f64 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax25) + 1));
                        cf59 = 0;
                        zf60 = reinterpret_cast<uint1_t>(ecx->f64 == 0);
                        of62 = 0;
                        below_or_equal63 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf60));
                        esp43 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(esp43) - 4);
                        *reinterpret_cast<int32_t*>(&esp43->f0) = 0x75;
                        if (!1) 
                            goto addr_8048248_143;
                    }
                }
            }
        }
    }
    goto addr_80482c0_145;
    addr_8048248_143:
    __asm__("insd ");
    __asm__("outsb ");
    if (zf60) {
        addr_80482c0_145:
        __asm__("outsd ");
        if (!cf59) {
            addr_8048328_146:
            edi81->f68 = reinterpret_cast<unsigned char>(edi82->f68 & 0xff);
            goto addr_804832a_147;
        } else {
            addr_80482c3_138:
            if (cf59) {
                addr_80482e5_134:
                __asm__("outsb ");
                __asm__("outsd ");
                if (zf60) {
                    addr_804830a_126:
                    __asm__("arpl [ebp+0x20], sp");
                    __asm__("arpl [edi+0x64], bp");
                    cf83 = reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) < 32;
                    *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) - 32);
                    zf84 = *reinterpret_cast<void**>(&eax25) == 0;
                    if (zf84) {
                    }
                } else {
                    if (!below_or_equal63) {
                        addr_804834d_80:
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g61) + 2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g61) + 2) & 0xff);
                        if (!0) {
                            if (!0) {
                                eax85 = *reinterpret_cast<int32_t*>(&esp43->f0);
                                esp86 = reinterpret_cast<struct s17*>(&esp43->f4);
                                esi4 = esp86->f0;
                                esp43 = reinterpret_cast<struct s1*>(&esp86->f4);
                                do {
                                    __asm__("lodsb ");
                                } while (*reinterpret_cast<signed char*>(&eax85));
                                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi4) - 1) = 10;
                                goto addr_8048362_156;
                            }
                        }
                    } else {
                        if (!cf59) {
                            addr_8048362_156:
                            goto addr_8048366_111;
                        } else {
                            ecx->f6f = 0;
                            zf51 = ecx->f6f == 0;
                            goto addr_80482f0_110;
                        }
                    }
                }
            } else {
                if (!below_or_equal63) {
                    addr_8048330_160:
                    goto addr_8048331_161;
                } else {
                    if (zf60) {
                        addr_8048331_161:
                        if (!of62) {
                            __asm__("insd ");
                            __asm__("outsb ");
                            goto addr_8048336_97;
                        }
                    } else {
                        *reinterpret_cast<unsigned char*>(ebp35 + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp35 + 97) & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax25) + 1));
                        zf60 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(ebp35 + 97) == 0);
                        goto addr_80482ca_132;
                    }
                }
            }
        }
    } else {
        addr_804824d_74:
        *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) - 32);
        edi87->f68 = reinterpret_cast<unsigned char>(edi88->f68 & 0xff);
        goto addr_8048252_108;
    }
    if (cf83) {
        addr_804832a_147:
        __asm__("outsd ");
        ecx->f6d = 0;
        zf60 = reinterpret_cast<uint1_t>(ecx->f6d == 0);
        of62 = 0;
        goto addr_8048330_160;
    } else {
        if (!zf84) {
            edi89->f6e = 0;
            goto addr_8048328_146;
        }
    }
    addr_80480b0_44:
    esp2 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esp43) - 4 - 4 - 4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) + 80;
    __asm__("pushad ");
    esi4 = v90;
    ebx31 = esi4;
    goto addr_80480bc_9;
}
