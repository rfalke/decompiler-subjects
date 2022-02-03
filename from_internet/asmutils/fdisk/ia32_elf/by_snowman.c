
int32_t fun_80483df(int32_t ecx);

int32_t fun_80481a6(int32_t ecx) {
    int32_t eax2;

    fun_80483df(ecx);
    __asm__("int 0x80");
    fun_80483df("/S  FAT16 FAT32 Extended Linux ext2 Linux swap BSD slice Unk update me! FreeBad sector signature ! - Do not panic might be fdisk bug...\n");
    __asm__("int 0x80");
    eax2 = fun_80483df("/S  FAT16 FAT32 Extended Linux ext2 Linux swap BSD slice Unk update me! FreeBad sector signature ! - Do not panic might be fdisk bug...\n");
    return eax2;
}

int16_t g804870e;

struct s0 {
    signed char[4] pad4;
    signed char f4;
    signed char[3] pad8;
    uint32_t f8;
};

int32_t fun_80482e2();

uint32_t g80484f0;

int32_t fun_80481eb(uint32_t ecx) {
    int1_t zf2;
    int1_t zf3;
    struct s0* edi4;

    zf2 = g804870e == 0x55aa;
    if (zf2 || (zf3 = g804870e == 0xaa55, zf3)) {
        __asm__("int 0x80");
        fun_80483df("partition lin start/len  is bootable (active) has C/H/S  FAT16 FAT32 Extended Linux ext2 Linux swap BSD slice Unk update me! FreeBad sector signature ! - Do not panic might be fdisk bug...\n");
        if (edi4->f4 != 6) {
            if (edi4->f4 == 11 || edi4->f4 == 12) {
                goto fun_80482e2;
            } else {
                if (edi4->f4 == -91 || edi4->f4 == -90) {
                    goto fun_80482e2;
                } else {
                    if (edi4->f4 != 0x82) {
                        if (edi4->f4 != 0x83) {
                            if (edi4->f4) {
                                if (edi4->f4 == 5 || (edi4->f4 == 15 || edi4->f4 == 0x85)) {
                                    g80484f0 = edi4->f8;
                                    goto fun_80482e2;
                                } else {
                                    goto fun_80482e2;
                                }
                            } else {
                                goto fun_80482e2;
                            }
                        } else {
                            goto fun_80482e2;
                        }
                    } else {
                        goto fun_80482e2;
                    }
                }
            }
        } else {
            goto fun_80482e2;
        }
    } else {
        __asm__("int 0x80");
        __asm__("int 0x80");
        return 1;
    }
}

void fun_80483ff();

int32_t fun_80483df(int32_t ecx) {
    fun_80483ff();
    __asm__("int 0x80");
    return 4;
}

void fun_80483ff() {
    uint32_t eax1;
    int32_t eax2;
    int32_t v3;
    signed char* edi4;
    int32_t v5;

    do {
        eax1 = eax1 / 10;
    } while (eax1);
    do {
        eax2 = v3;
        *edi4 = *reinterpret_cast<signed char*>(&eax2);
        ++edi4;
    } while (*reinterpret_cast<signed char*>(&eax2));
    goto v5;
}

int32_t g80484ec;

uint32_t g80484f4;

struct s1 {
    signed char[4] pad4;
    signed char f4;
    signed char[3] pad8;
    uint32_t f8;
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
    unsigned char* edi26;
    signed char* edi27;
    void* tmp8_28;
    uint1_t cf29;
    signed char* edx30;
    signed char* edx31;
    int32_t v32;
    unsigned char* edx33;
    unsigned char* v34;
    int32_t edi35;
    uint32_t eax36;
    uint32_t ecx37;
    struct s1* edi38;
    int32_t esi39;
    uint32_t tmp32_40;
    uint1_t cf41;

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
        __asm__("in al, 0x4");
        tmp8_24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        cf25 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_24) < reinterpret_cast<unsigned char>(*eax22));
        *eax22 = tmp8_24;
        *edi26 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*edi27 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))) + cf25);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    }
    tmp8_28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    cf29 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_28) < reinterpret_cast<unsigned char>(*eax22));
    *eax22 = tmp8_28;
    *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))) + cf29);
    *edx30 = reinterpret_cast<signed char>(*edx31 + *reinterpret_cast<signed char*>(&ecx));
    addr_804804d_4:
    __asm__("int 0x80");
    if (v32 != 2) 
        goto addr_804804d_4;
    __asm__("int 0x80");
    if (0) 
        goto addr_804804d_4;
    edx33 = v34;
    do {
        ++edx33;
    } while (*edx33 >= 1);
    __asm__("int 0x80");
    __asm__("int 0x80");
    __asm__("int 0x80");
    fun_80481a6(" has C/H/S  FAT16 FAT32 Extended Linux ext2 Linux swap BSD slice Unk update me! FreeBad sector signature ! - Do not panic might be fdisk bug...\n");
    __asm__("int 0x80");
    __asm__("int 0x80");
    g80484ec = 5;
    edi35 = 0x80486ce;
    do {
        fun_80481eb(0x8048510);
        edi35 = edi35 + 16;
    } while (edi35 != 0x804870e);
    eax36 = g80484f0;
    if (eax36) {
        g80484f4 = eax36;
        __asm__("shld ecx, edx, 0x9");
        do {
            __asm__("int 0x80");
            ecx37 = 0x8048510;
            __asm__("int 0x80");
            edi38 = reinterpret_cast<struct s1*>(0x80486ce);
            esi39 = 0;
            do {
                if (edi38->f4 == 5 || (edi38->f4 == 15 || edi38->f4 == 0x85)) {
                    ++esi39;
                    tmp32_40 = edi38->f8 + g80484f0;
                    cf41 = reinterpret_cast<uint1_t>(tmp32_40 < edi38->f8);
                    g80484f4 = tmp32_40;
                    ecx37 = cf41;
                    __asm__("shld ecx, edx, 0x9");
                } else {
                    if (edi38->f4) {
                        fun_80481eb(ecx37);
                        esi39 = esi39;
                        edi38 = edi38;
                    }
                }
                edi38 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(edi38) + 16);
            } while (!reinterpret_cast<int1_t>(edi38 == 0x804870e));
        } while (esi39);
    }
    __asm__("int 0x80");
    __asm__("int 0x80");
}

struct s2 {
    unsigned char f0;
    signed char[98] pad99;
    unsigned char f63;
};

struct s3 {
    signed char[32] pad32;
    int32_t f20;
    signed char[65] pad101;
    unsigned char f65;
    signed char[3] pad105;
    unsigned char f69;
    signed char[2] pad108;
    unsigned char f6c;
    signed char[7] pad116;
    unsigned char f74;
    signed char[2] pad119;
    unsigned char f77;
};

struct s4 {
    signed char[112] pad112;
    unsigned char f70;
};

struct s5 {
    signed char[112] pad112;
    signed char f70;
};

unsigned char g206f4420;

struct s6 {
    uint32_t f0;
    signed char[61] pad65;
    unsigned char f41;
};

struct s7 {
    signed char[1] pad1;
    uint32_t f1;
};

struct s8 {
    signed char[120] pad120;
    unsigned char f78;
};

struct s9 {
    signed char[120] pad120;
    unsigned char f78;
};

struct s10 {
    signed char[120] pad120;
    signed char f78;
};

struct s11 {
    signed char[120] pad120;
    unsigned char f78;
};

struct s12 {
    signed char[120] pad120;
    signed char f78;
};

struct s13 {
    signed char[101] pad101;
    unsigned char f65;
};

void fun_8048417(struct s2* ecx) {
    struct s3* ebx2;
    void* ebx3;
    unsigned char* eax4;
    void* eax5;
    void* esp6;
    unsigned char dh7;
    struct s4* ebp8;
    struct s5* ebp9;
    int1_t cf10;
    int1_t below_or_equal11;
    int1_t zf12;
    int1_t zf13;
    struct s6* esi14;
    struct s7* esi15;
    struct s8* ebp16;
    struct s9* ebp17;
    struct s10* ebp18;
    int32_t ebp19;
    int32_t ebp20;
    int32_t ebp21;
    struct s11* ebp22;
    struct s12* ebp23;
    struct s13* ebp24;
    unsigned char dh25;
    int32_t ebp26;
    int32_t ebp27;
    int32_t ebp28;
    unsigned char dh29;

    ebx2 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(ebx3) + 1);
    eax4 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax5) - 1);
    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebx2->f74 = reinterpret_cast<unsigned char>(ebx2->f74 & dh7);
    __asm__("popad ");
    if (0) {
        addr_8048494_2:
        goto addr_8048498_3;
    } else {
        *eax4 = 0;
        if (1) {
            addr_8048498_3:
            ebp8->f70 = 0;
            __asm__("popad ");
            if (!ebp9->f70) {
            }
        } else {
            __asm__("outsd ");
            if (0) {
                addr_8048447_7:
                __asm__("popad ");
                cf10 = ecx->f63 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax4) + 1);
                below_or_equal11 = ecx->f63 <= *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax4) + 1);
                ecx->f63 = reinterpret_cast<unsigned char>(ecx->f63 - *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax4) + 1));
                zf12 = ecx->f63 == 0;
                if (zf12) {
                    if (!cf10) {
                        ecx->f0 = 0;
                        g206f4420 = 0;
                        zf13 = g206f4420 == 0;
                        __asm__("outsb ");
                        __asm__("outsd ");
                        if (!zf13) {
                            if (!0) {
                                __asm__("outsb ");
                                if (!__undefined()) {
                                    goto addr_80484d5_17;
                                }
                            }
                        }
                    }
                } else {
                    if (below_or_equal11) {
                        addr_80484b8_19:
                        if (zf12) {
                        }
                    } else {
                        *eax4 = reinterpret_cast<unsigned char>(*eax4 - reinterpret_cast<uint32_t>(esp6));
                        __asm__("das ");
                        --eax4;
                        __asm__("das ");
                        *eax4 = 0;
                        esi14 = reinterpret_cast<struct s6*>(&esi15->f1);
                        ecx = reinterpret_cast<struct s2*>(&ecx->pad99);
                        esi14->f0 = esi14->f0 ^ reinterpret_cast<uint32_t>(esi14);
                        esi14->f41 = reinterpret_cast<unsigned char>(esi14->f41 & *reinterpret_cast<unsigned char*>(&eax4));
                        ebp16->f78 = reinterpret_cast<unsigned char>(ebp17->f78 & *reinterpret_cast<unsigned char*>(&eax4));
                        if (!ebp18->f78) {
                            addr_80484d5_17:
                            if (!__undefined()) {
                            }
                        } else {
                            __asm__("outsb ");
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) + ebp19 * 2 + 0x6e) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) + ebp20 * 2 + 0x6e) & *reinterpret_cast<unsigned char*>(&ecx));
                            if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + ebp21 * 2 + 0x6e)) {
                            }
                            ebp22->f78 = 0;
                            if (ebp23->f78) 
                                goto addr_804847f_27;
                        }
                    }
                }
            } else {
                if (0) {
                    goto addr_804848b_30;
                } else {
                    if (0) {
                        ebp24->f65 = 0;
                        *eax4 = reinterpret_cast<unsigned char>(*eax4 & reinterpret_cast<uint32_t>(esp6));
                        if (!0) {
                            __asm__("popad ");
                            ebx2->f65 = 0;
                            goto addr_80484ab_35;
                        }
                    } else {
                        __asm__("outsb ");
                        ebx2->f74 = reinterpret_cast<unsigned char>(ebx2->f74 & dh25);
                        __asm__("popad ");
                        if (0) {
                            addr_80484ae_37:
                            __asm__("arpl [edi+ebp*2+0x72], si");
                        } else {
                            __asm__("das ");
                            __asm__("insb ");
                            __asm__("outsb ");
                            *eax4 = 0;
                            esi15 = reinterpret_cast<struct s7*>(ebx2->f20 * 0x746f6f62);
                            goto addr_8048447_7;
                        }
                    }
                }
            }
        }
    }
    ebx2->f69 = 0;
    cf10 = 0;
    zf12 = ebx2->f69 == 0;
    __asm__("a16 outsb ");
    __asm__("popad ");
    goto addr_80484b8_19;
    addr_804847f_27:
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) + ebp26 * 2 + 0x6e) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) + ebp27 * 2 + 0x6e) & *reinterpret_cast<unsigned char*>(&ecx));
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + ebp28 * 2 + 0x6e)) {
    }
    ebx2->f77 = reinterpret_cast<unsigned char>(ebx2->f77 & dh29);
    __asm__("popad ");
    if (!0) 
        goto addr_804848b_30;
    addr_80484ab_35:
    goto addr_80484ae_37;
    addr_804848b_30:
    ebx2->f6c = 0;
    esp6 = reinterpret_cast<void*>(ebx2->f65 * 0x6b6e5520);
    goto addr_8048494_2;
}

struct s14 {
    signed char[4] pad4;
    signed char f4;
};

signed char g80484f8;

struct s15 {
    signed char[1] pad1;
    signed char f1;
};

unsigned char g80484f9;

struct s16 {
    signed char[2] pad2;
    unsigned char f2;
};

struct s17 {
    signed char[2] pad2;
    unsigned char f2;
};

struct s18 {
    signed char[3] pad3;
    signed char f3;
};

int16_t g80484fa;

struct s19 {
    signed char[5] pad5;
    signed char f5;
};

struct s20 {
    signed char[6] pad6;
    unsigned char f6;
};

struct s21 {
    signed char[6] pad6;
    unsigned char f6;
};

struct s22 {
    signed char[7] pad7;
    signed char f7;
};

int32_t fun_80482e2() {
    struct s14* ebp1;
    signed char* ebp2;
    struct s15* ebp3;
    struct s16* ebp4;
    int16_t ax5;
    struct s17* ebp6;
    struct s18* ebp7;
    struct s19* ebp8;
    struct s20* ebp9;
    int16_t ax10;
    struct s21* ebp11;
    struct s22* ebp12;

    __asm__("int 0x80");
    if (ebp1->f4) {
        if (*ebp2 == 0x80) {
            __asm__("int 0x80");
        }
        __asm__("int 0x80");
        __asm__("int 0x80");
        g80484f8 = ebp3->f1;
        g80484f9 = reinterpret_cast<unsigned char>(ebp4->f2 & 63);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax5) + 1) = reinterpret_cast<unsigned char>(ebp6->f2 >> 6);
        *reinterpret_cast<signed char*>(&ax5) = ebp7->f3;
        g80484fa = ax5;
        fun_80481a6(fun_8048417);
        __asm__("int 0x80");
        g80484f8 = ebp8->f5;
        g80484f9 = reinterpret_cast<unsigned char>(ebp9->f6 & 63);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax10) + 1) = reinterpret_cast<unsigned char>(ebp11->f6 >> 6);
        *reinterpret_cast<signed char*>(&ax10) = ebp12->f7;
        g80484fa = ax10;
        fun_80481a6(" stop partition lin start/len  is bootable (active) has C/H/S  FAT16 FAT32 Extended Linux ext2 Linux swap BSD slice Unk update me! FreeBad sector signature ! - Do not panic might be fdisk bug...\n");
        __asm__("int 0x80");
        __asm__("int 0x80");
        fun_80483df("lin start/len  is bootable (active) has C/H/S  FAT16 FAT32 Extended Linux ext2 Linux swap BSD slice Unk update me! FreeBad sector signature ! - Do not panic might be fdisk bug...\n");
        __asm__("int 0x80");
        fun_80483df("/S  FAT16 FAT32 Extended Linux ext2 Linux swap BSD slice Unk update me! FreeBad sector signature ! - Do not panic might be fdisk bug...\n");
    }
    __asm__("int 0x80");
    return 4;
}
