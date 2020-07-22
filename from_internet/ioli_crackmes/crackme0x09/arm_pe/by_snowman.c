
int32_t g11124 = 0x13008;

void fun_118dc(int32_t r0, void** r1, void** r2, ...);

void** fun_11520(int32_t r0, void** r1, void** r2, void** r3, void** a5, void** a6, int32_t a7, uint32_t a8, void* a9, ...);

void** g111cc = reinterpret_cast<void**>(28);

void fun_118d0(void** r0, void** r1, void** r2);

void** fun_11050(int32_t r0, void** r1, void** r2);

void*** g111d0 = reinterpret_cast<void***>(0x14000);

int32_t g111d4 = 0x13020;

void** fun_11108() {
    int32_t r0_1;
    void** r1_2;
    void** r2_3;
    int32_t r1_4;
    int32_t r2_5;
    void** r1_6;
    void** r2_7;
    void** r3_8;
    void** r11_9;
    void* v10;
    int32_t r1_11;
    int32_t r2_12;
    void** r0_13;
    int1_t z14;
    void* v15;
    void** v16;
    void** v17;
    void** r1_18;
    void** r1_19;
    void** r2_20;
    void** r1_21;
    int32_t v22;
    void** r0_23;
    uint32_t v24;
    uint32_t v25;
    void*** r3_26;
    int32_t r0_27;
    int32_t v28;

    r0_1 = g11124;
    fun_118dc(r0_1, r1_2, r2_3, r0_1, r1_4, r2_5);
    r0_13 = fun_11520(0, r1_6, r2_7, r3_8, r11_9, __zero_stack_offset(), __return_address(), 0x11114, v10, 0, r1_11, r2_12);
    if (z14) {
    }
    v15 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(__zero_stack_offset()) - 4);
    v16 = r0_13;
    v17 = r1_18;
    r1_19 = g111cc;
    r2_20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(__zero_stack_offset()) - 16 - 4 - 20);
    fun_118d0(v16, r1_19, r2_20);
    r1_21 = v17;
    r0_23 = fun_11050(v22, r1_21, r2_20);
    if (r0_23) {
        v24 = 0;
        while (reinterpret_cast<int32_t>(v24) <= reinterpret_cast<int32_t>(9)) {
            if (!(v25 & 1)) {
                r3_26 = g111d0;
                if (reinterpret_cast<int1_t>(*r3_26 == 1)) {
                    r0_27 = g111d4;
                    fun_118dc(r0_27, r1_21, r2_20);
                }
                r0_23 = fun_11520(0, r1_21, r2_20, *r3_26, v17, v16, v28, v24, v15);
            }
            ++v24;
        }
    }
    return r0_23;
}

void** fun_11128(void** r0, void** r1) {
    void* v3;
    void* r11_4;
    void** v5;
    void** v6;
    void** r1_7;
    void** r2_8;
    void** r1_9;
    int32_t v10;
    void** r0_11;
    uint32_t v12;
    uint32_t v13;
    void*** r3_14;
    int32_t r0_15;
    int32_t v16;

    v3 = r11_4;
    v5 = r0;
    v6 = r1;
    r1_7 = g111cc;
    r2_8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 20);
    fun_118d0(v5, r1_7, r2_8);
    r1_9 = v6;
    r0_11 = fun_11050(v10, r1_9, r2_8);
    if (r0_11) {
        v12 = 0;
        while (reinterpret_cast<int32_t>(v12) <= reinterpret_cast<int32_t>(9)) {
            if (!(v13 & 1)) {
                r3_14 = g111d0;
                if (reinterpret_cast<int1_t>(*r3_14 == 1)) {
                    r0_15 = g111d4;
                    fun_118dc(r0_15, r1_9, r2_8);
                }
                r0_11 = fun_11520(0, r1_9, r2_8, *r3_14, v6, v5, v16, v12, v3);
            }
            ++v12;
        }
    }
    return r0_11;
}

void* fun_118c4(void** r0, void** r1, void** r2);

void** g112e8 = reinterpret_cast<void**>(28);

int32_t g112ec = 0x13030;

void** fun_111d8(void** r0, void** r1) {
    void* r11_3;
    void** v4;
    void** v5;
    void* v6;
    void* v7;
    void** r2_8;
    void* r0_9;
    int32_t v10;
    void** v11;
    void** r1_12;
    int32_t v13;
    void** r0_14;
    int32_t v15;
    void** r3_16;
    uint32_t v17;
    int32_t r0_18;
    uint32_t v19;

    r11_3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v4 = r0;
    v5 = r1;
    v6 = reinterpret_cast<void*>(0);
    v7 = reinterpret_cast<void*>(0);
    while (r0_9 = fun_118c4(v4, r1, r2_8), reinterpret_cast<uint32_t>(v7) >= reinterpret_cast<uint32_t>(r0_9)) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v10) + 3) = static_cast<signed char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v7) + reinterpret_cast<unsigned char>(v4))));
        r1 = g112e8;
        fun_118d0(reinterpret_cast<int32_t>(r11_3) - 29, r1, reinterpret_cast<int32_t>(r11_3) - 28);
        r2_8 = v11;
        v6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v6) + reinterpret_cast<unsigned char>(r2_8));
        if (reinterpret_cast<int1_t>(v6 == 16)) {
            r1 = v5;
            fun_11128(v4, r1);
        }
        v7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v7) + 1);
    }
    fun_11108();
    r1_12 = v5;
    r0_14 = fun_11050(v13, r1_12, r2_8);
    if (r0_14) {
        v15 = 0;
        while (v15 <= 9) {
            r3_16 = reinterpret_cast<void**>(v17 & 1);
            if (!r3_16) {
                r0_18 = g112ec;
                fun_118dc(r0_18, r1_12, r2_8);
                r0_14 = fun_11520(0, r1_12, r2_8, r3_16, v5, v4, v10, v19, v6);
            }
            ++v15;
        }
    }
    return r0_14;
}

void** fun_11620(void** r0);

int32_t g11350 = 0x13038;

int32_t g11354 = 0x13050;

void fun_118e8(int32_t r0);

int32_t g11358 = 0x1305c;

void fun_118b8(int32_t r0, void* r1);

int32_t fun_112f0(void** r0, void** r1, void** r2) {
    void* r11_4;
    int32_t r0_5;
    int32_t r0_6;
    int32_t r0_7;

    r11_4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_11620(r0);
    r0_5 = g11350;
    fun_118dc(r0_5, r1, r2, r0_5, r1, r2);
    r0_6 = g11354;
    fun_118e8(r0_6);
    r0_7 = g11358;
    fun_118b8(r0_7, reinterpret_cast<int32_t>(r11_4) - 0x70);
    fun_111d8(reinterpret_cast<int32_t>(r11_4) - 0x70, r2);
    return 0;
}

struct s0 {
    int32_t 0x0;
    int32_t 0x4;
};

struct s0* g11394 = reinterpret_cast<struct s0*>(0x1306c);

struct s0* g11398 = reinterpret_cast<struct s0*>(0x1306c);

int32_t g1139c = 0x10000;

void fun_1135c() {
    struct s0* r0_1;
    struct s0* lr2;
    int32_t r12_3;

    r0_1 = g11394;
    lr2 = g11398;
    if (reinterpret_cast<uint32_t>(r0_1) < reinterpret_cast<uint32_t>(lr2)) {
        return;
    } else {
        r12_3 = g1139c;
        while (++r0_1, *reinterpret_cast<int32_t*>(r0_1->0x4 + r12_3) = *reinterpret_cast<int32_t*>(r0_1->0x4 + r12_3) + r0_1->0x0, reinterpret_cast<uint32_t>(r0_1) >= reinterpret_cast<uint32_t>(lr2)) {
        }
        return;
    }
}

void fun_11930();

void fun_113b0() {
    fun_11930();
    return;
}

void*** g11490 = reinterpret_cast<void***>(0x14004);

void**** g11494 = reinterpret_cast<void****>(0x14008);

void** fun_113e0(void** r0, void*** r1, void**** r2);

void** fun_11470(void** r0) {
    void*** r1_2;
    void**** r2_3;
    void** r0_4;
    int1_t z5;

    r1_2 = g11490;
    r2_3 = g11494;
    r0_4 = fun_113e0(r0, r1_2, r2_3);
    z5 = r0_4 == 0;
    if (!z5) {
        r0_4 = reinterpret_cast<void**>(0);
    }
    if (z5) {
        r0_4 = reinterpret_cast<void**>(0xffffffff);
    }
    return r0_4;
}

struct s1 {
    signed char[4] pad4;
    int32_t 0x4;
};

struct s1** g11508 = reinterpret_cast<struct s1**>(0x14004);

void** g1150c = reinterpret_cast<void**>(0x14008);

void fun_11918(int32_t r0);

void fun_1190c();

void fun_11498() {
    struct s1** r3_1;
    void** r3_2;
    struct s1* r4_3;
    struct s1** r6_4;
    struct s1* r5_5;
    int1_t z6;
    struct s1** r3_7;

    r3_1 = g11508;
    if (*r3_1) {
        r3_2 = g1150c;
        if (reinterpret_cast<uint32_t>(*r3_1) > reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(*r3_2) - 4)) {
            goto addr_114ec_5;
        } else {
            r4_3 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(*r3_2) - 8);
            r6_4 = g11508;
            while (1) {
                r5_5 = r4_3;
                z6 = r4_3->0x4 == 0;
                if (!z6) {
                }
                if (!z6) 
                    goto label_10;
                r4_3 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(r4_3) - 4);
                if (reinterpret_cast<uint32_t>(*r6_4) > reinterpret_cast<uint32_t>(r5_5)) 
                    goto addr_114ec_5;
            }
        }
    }
    addr_114fc_13:
    fun_11918(0);
    return;
    addr_114ec_5:
    fun_1190c();
    r3_7 = g11508;
    *r3_7 = reinterpret_cast<struct s1*>(0);
    goto addr_114fc_13;
    label_10:
    goto r4_3->0x4;
}

void fun_11510() {
    fun_11498();
    fun_113b0();
    return;
}

struct s2 {
    int32_t 0x0;
    int32_t 0x4;
};

struct s2* g11618 = reinterpret_cast<struct s2*>(0x11984);

void** g1161c = reinterpret_cast<void**>(0x74);

void** fun_115b8() {
    struct s2* r3_1;
    int32_t r2_2;
    struct s2* r0_3;
    int1_t z4;
    struct s2* r3_5;
    int32_t* r5_6;
    int32_t r4_7;
    void** r0_8;
    void** r0_9;

    r3_1 = g11618;
    r2_2 = r3_1->0x0;
    if (r2_2 == -1) {
        r0_3 = r3_1;
        ++r2_2;
        while (1) {
            r0_3 = reinterpret_cast<struct s2*>(&r0_3->0x4);
            z4 = r0_3->0x4 == 0;
            if (!z4) {
                ++r2_2;
            }
            if (z4) 
                break;
        }
    }
    if (r2_2) {
        r3_5 = g11618;
        r5_6 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r3_5) + (r2_2 << 2));
        r4_7 = r2_2;
        while (--r5_6, *r5_6(), --r4_7, !!r4_7) {
        }
    }
    r0_8 = g1161c;
    r0_9 = fun_11470(r0_8);
    return r0_9;
}

int32_t* g11644 = reinterpret_cast<int32_t*>(0x1400c);

void** fun_11620(void** r0) {
    int32_t* r2_2;
    void** r0_3;

    r2_2 = g11644;
    if (*r2_2) {
        return r0;
    } else {
        *r2_2 = *r2_2 + 1;
        r0_3 = fun_115b8();
        return r0_3;
    }
}

void** g1188c = reinterpret_cast<void**>(0);

int32_t fun_11960();

void** fun_1196c(void** r0, void** r1, void** r2);

void** fun_11900(uint32_t r0, void** r1, void** r2);

void fun_118ac(uint32_t r0, int32_t r1, void** r2, void** r3, void** a5, void** a6, int32_t a7, uint32_t a8, void* a9);

void** g11890 = reinterpret_cast<void**>(20);

void fun_11978(void** r0, void** r1, void** r2);

void** g11894 = reinterpret_cast<void**>(16);

int32_t g11898 = 0x13060;

void* fun_1193c(void** r0, int32_t r1, void** r2);

void** g1189c = reinterpret_cast<void**>(0x68);

void* fun_11954(void* r0, int32_t r1);

void** fun_11924(void** r0, void* r1);

void** fun_11948(void* r0, int32_t r1);

int32_t fun_11648(int32_t r0, int32_t r1, void** r2, void** r3, void** a5, void** a6, int32_t a7, uint32_t a8, void* a9) {
    void** sp10;
    void** r3_11;
    int32_t r0_12;
    int1_t z13;
    void** r6_14;
    void** r0_15;
    void** r0_16;
    void** r5_17;
    void** v18;
    void** v19;
    int32_t v20;
    uint32_t v21;
    void* v22;
    void** r0_23;
    void** r3_24;
    void** r0_25;
    void** r2_26;
    void** r0_27;
    void** r1_28;
    void** r2_29;
    int32_t r0_30;
    void** r3_31;
    void* r0_32;
    void** r4_33;
    void** r2_34;
    void* r0_35;
    void** r8_36;
    void** r3_37;
    void** r10_38;
    int32_t r1_39;
    void* r0_40;
    void* r6_41;
    uint32_t r0_42;
    uint32_t r3_43;
    int1_t z44;
    int32_t r12_45;
    int32_t r1_46;
    void* r0_47;
    void** r7_48;
    void* r5_49;
    void** r0_50;
    int1_t z51;
    uint32_t r3_52;
    void** r0_53;
    void** r3_54;
    void** v55;
    void** v56;
    int32_t v57;
    uint32_t v58;
    void* v59;
    void** v60;
    void** v61;
    int32_t v62;
    uint32_t v63;
    void* v64;

    sp10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 28 - 0x400);
    r3_11 = g1188c;
    *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(sp10 + 0x400) - reinterpret_cast<unsigned char>(r3_11)) = 0;
    r0_12 = fun_11960();
    z13 = r2 == 0;
    if (z13) {
        r6_14 = r2;
    }
    if (!z13) {
        r0_15 = fun_1196c(r2, sp10, 0x200);
        r6_14 = r0_15;
    }
    r0_16 = fun_11900(r0_12 + reinterpret_cast<uint32_t>(r6_14 + 2), sp10, 0x200);
    r5_17 = r0_16;
    if (!r5_17) {
        fun_118ac(r0_16 + 66, -1, 0x200, r3_11, v18, v19, v20, v21, v22);
        while (1) {
        }
    }
    r0_23 = fun_11900(4, sp10, 0x200);
    r3_24 = g11890;
    *reinterpret_cast<void***>(r3_24) = r0_23;
    if (!r0_23) 
        goto addr_116c8_11;
    *reinterpret_cast<void***>(r0_23) = r5_17;
    r0_25 = fun_1196c(sp10, sp10, 0x200);
    fun_11978(r5_17, sp10, r0_25 + 1);
    r2_26 = g11894;
    *reinterpret_cast<void***>(r2_26) = *reinterpret_cast<void***>(r2_26) + 1;
    if (reinterpret_cast<signed char>(r6_14) > reinterpret_cast<signed char>(0)) 
        goto addr_11710_14;
    addr_11860_16:
    r0_27 = g11894;
    r1_28 = g11890;
    r2_29 = *reinterpret_cast<void***>(r1_28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(r2_29) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r0_27)) << 2) = 0;
    r0_30 = fun_112f0(*reinterpret_cast<void***>(r0_27), *reinterpret_cast<void***>(r1_28), r2_29);
    return r0_30;
    addr_11710_14:
    r3_31 = g11890;
    r0_32 = fun_118c4(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r3_31)), sp10, r2_26);
    r4_33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r3_31))) + reinterpret_cast<uint32_t>(r0_32) + 1);
    r2_34 = r6_14 + 1;
    fun_11978(r4_33, r2, r2_34);
    r0_35 = fun_118c4(r4_33, r2, r2_34);
    r8_36 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r4_33) + reinterpret_cast<uint32_t>(r0_35));
    if (!r4_33) {
        r3_37 = g11894;
        *reinterpret_cast<void***>(r3_37) = reinterpret_cast<void**>(1);
        goto addr_11860_16;
    } else {
        r10_38 = reinterpret_cast<void**>(1);
        while (r1_39 = g11898, r0_40 = fun_1193c(r4_33, r1_39, r2_34), r6_41 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r4_33) + reinterpret_cast<uint32_t>(r0_40)), r0_42 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r4_33) + reinterpret_cast<uint32_t>(r0_40)), !!r0_42) {
            r2_34 = g1189c;
            r3_43 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r2_34));
            if (r3_43) {
                z44 = r0_42 == r3_43;
                if (!z44) {
                    r3_43 = r0_42 << 24;
                }
                if (!z44) {
                    r12_45 = reinterpret_cast<int32_t>(r3_43) >> 24;
                }
                if (!z44) 
                    goto label_28; else 
                    goto addr_11790_29;
            }
            addr_117d4_30:
            r1_46 = g11898;
            r0_47 = fun_11954(r6_41, r1_46);
            r4_33 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r6_41) + reinterpret_cast<uint32_t>(r0_47));
            addr_117e4_31:
            *reinterpret_cast<void***>(r4_33) = reinterpret_cast<void**>(0);
            ++r10_38;
            r7_48 = g11890;
            r5_49 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r10_38) << 2);
            r0_50 = fun_11924(*reinterpret_cast<void***>(r7_48), r5_49);
            if (!r0_50) 
                goto label_32;
            *reinterpret_cast<void***>(r7_48) = r0_50;
            *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r5_49) + reinterpret_cast<unsigned char>(r0_50) + 0xfffffffc) = r6_41;
            z51 = r4_33 == r8_36;
            if (!z51) {
                ++r4_33;
            }
            if (z51) 
                goto addr_11824_36;
            continue;
            label_28:
            do {
                r3_52 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r2_34 + 1));
                if (!r3_52) 
                    break;
                ++r2_34;
            } while (r12_45 != reinterpret_cast<int32_t>(r3_52 << 24) >> 24);
            goto label_41;
            goto addr_117d4_30;
            label_41:
            addr_117b4_43:
            r6_41 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r6_41) + 1);
            r0_53 = fun_11948(r6_41, reinterpret_cast<int32_t>(r0_42 << 24) >> 24);
            r4_33 = r0_53;
            if (!r4_33) {
                r4_33 = r8_36;
            }
            goto addr_117e4_31;
            addr_11790_29:
            goto addr_117b4_43;
        }
    }
    addr_11824_36:
    r3_54 = g11894;
    *reinterpret_cast<void***>(r3_54) = r10_38;
    if (reinterpret_cast<signed char>(r10_38) >= reinterpret_cast<signed char>(0)) {
        goto addr_11860_16;
    } else {
        addr_11834_48:
        fun_118ac(66, -1, r2_34, r3_54, v55, v56, v57, v58, v59);
    }
    while (1) {
    }
    label_32:
    r2_34 = reinterpret_cast<void**>(0xffffffff);
    r3_54 = g11894;
    *reinterpret_cast<void***>(r3_54) = reinterpret_cast<void**>(0xffffffff);
    goto addr_11834_48;
    addr_116c8_11:
    fun_118ac(r0_23 + 66, -1, 0x200, r3_24, v60, v61, v62, v63, v64);
    while (1) {
    }
}

int32_t* g118a8 = reinterpret_cast<int32_t*>(0x1508c);

void fun_118a0() {
    int32_t* r12_1;

    r12_1 = g118a8;
    goto *r12_1;
}

int32_t* g118b4 = reinterpret_cast<int32_t*>(0x15084);

void fun_118ac(uint32_t r0, int32_t r1, void** r2, void** r3, void** a5, void** a6, int32_t a7, uint32_t a8, void* a9) {
    int32_t* r12_10;

    r12_10 = g118b4;
    goto *r12_10;
}

int32_t* g118c0 = reinterpret_cast<int32_t*>(0x150a8);

void fun_118b8(int32_t r0, void* r1) {
    int32_t* r12_3;

    r12_3 = g118c0;
    goto *r12_3;
}

int32_t* g118cc = reinterpret_cast<int32_t*>(0x150b8);

void* fun_118c4(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g118cc;
    goto *r12_4;
}

int32_t* g118d8 = reinterpret_cast<int32_t*>(0x150ac);

void fun_118d0(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g118d8;
    goto *r12_4;
}

int32_t* g118e4 = reinterpret_cast<int32_t*>(0x150a0);

void fun_118dc(int32_t r0, void** r1, void** r2, ...) {
    int32_t* r12_4;

    r12_4 = g118e4;
    goto *r12_4;
}

int32_t* g118f0 = reinterpret_cast<int32_t*>(0x1509c);

void fun_118e8(int32_t r0) {
    int32_t* r12_2;

    r12_2 = g118f0;
    goto *r12_2;
}

int32_t* g118fc = reinterpret_cast<int32_t*>(0x150bc);

int32_t fun_118f4(void** r0, void** r1, int32_t r2) {
    int32_t* r12_4;

    r12_4 = g118fc;
    goto *r12_4;
}

int32_t* g11908 = reinterpret_cast<int32_t*>(0x15098);

void** fun_11900(uint32_t r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g11908;
    goto *r12_4;
}

int32_t* g11914 = reinterpret_cast<int32_t*>(0x15094);

void fun_1190c() {
    int32_t* r12_1;

    r12_1 = g11914;
    goto *r12_1;
}

int32_t* g11920 = reinterpret_cast<int32_t*>(0x15090);

void fun_11918(int32_t r0) {
    int32_t* r12_2;

    r12_2 = g11920;
    goto *r12_2;
}

int32_t* g1192c = reinterpret_cast<int32_t*>(0x150a4);

void** fun_11924(void** r0, void* r1) {
    int32_t* r12_3;

    r12_3 = g1192c;
    goto *r12_3;
}

int32_t* g11938 = reinterpret_cast<int32_t*>(0x15088);

void fun_11930() {
    int32_t* r12_1;

    r12_1 = g11938;
    goto *r12_1;
}

int32_t* g11944 = reinterpret_cast<int32_t*>(0x150c0);

void* fun_1193c(void** r0, int32_t r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g11944;
    goto *r12_4;
}

int32_t* g11950 = reinterpret_cast<int32_t*>(0x150b0);

void** fun_11948(void* r0, int32_t r1) {
    int32_t* r12_3;

    r12_3 = g11950;
    goto *r12_3;
}

int32_t* g1195c = reinterpret_cast<int32_t*>(0x150b4);

void* fun_11954(void* r0, int32_t r1) {
    int32_t* r12_3;

    r12_3 = g1195c;
    goto *r12_3;
}

int32_t* g11968 = reinterpret_cast<int32_t*>(0x15080);

int32_t fun_11960() {
    int32_t* r12_1;

    r12_1 = g11968;
    goto *r12_1;
}

int32_t* g11974 = reinterpret_cast<int32_t*>(0x150c4);

void** fun_1196c(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g11974;
    goto *r12_4;
}

int32_t* g11980 = reinterpret_cast<int32_t*>(0x150c8);

void fun_11978(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g11980;
    goto *r12_4;
}

void*** g1156c = reinterpret_cast<void***>(0x14004);

void*** g11570 = reinterpret_cast<void***>(0x14008);

void** fun_11538() {
    void** r1_1;
    void** r2_2;
    void** r0_3;
    void*** r3_4;
    void*** r3_5;

    r0_3 = fun_11900(0x80, r1_1, r2_2);
    r3_4 = g1156c;
    *r3_4 = r0_3;
    if (!r0_3) {
        return r0_3;
    } else {
        *reinterpret_cast<void***>(r0_3) = reinterpret_cast<void**>(0);
        r3_5 = g11570;
        *r3_5 = r0_3;
        return 1;
    }
}

void** g11100 = reinterpret_cast<void**>(0);

int32_t* g11104 = reinterpret_cast<int32_t*>(0x14000);

void** fun_11050(int32_t r0, void** r1, void** r2) {
    void* v4;
    void* r11_5;
    int32_t v6;
    void** v7;
    uint32_t v8;
    void** r2_9;
    void** r2_10;
    int32_t r0_11;
    void** v12;
    int32_t* r3_13;

    v4 = r11_5;
    v6 = r0;
    v7 = r1;
    v8 = 0;
    while (r2_9 = reinterpret_cast<void**>(v8 << 2), !!*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r2_9) + reinterpret_cast<unsigned char>(v7))) {
        r2_10 = *reinterpret_cast<void***>((v8 << 2) + reinterpret_cast<unsigned char>(v7));
        ++v8;
        r1 = g11100;
        r0_11 = fun_118f4(r2_10, r1, 3);
        if (!r0_11) 
            goto addr_110b4_5;
    }
    fun_11520(-1, r1, r2_9, *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r2_9) + reinterpret_cast<unsigned char>(v7)), v12, v7, v6, v8, v4, -1, r1, r2_9);
    addr_110f4_8:
    return 1;
    addr_110b4_5:
    r3_13 = g11104;
    *r3_13 = 1;
    goto addr_110f4_8;
}

void** fun_11520(int32_t r0, void** r1, void** r2, void** r3, void** a5, void** a6, int32_t a7, uint32_t a8, void* a9, ...) {
    fun_11510();
    fun_118ac(66, r0, r2, r3, a5, a6, a7, a8, a9);
    while (1) {
    }
}

void** fun_113e0(void** r0, void*** r1, void**** r2) {
    void** r4_4;
    void*** r6_5;
    int1_t z6;
    void*** r3_7;
    void* r1_8;
    void* r7_9;
    void** r0_10;
    int1_t z11;

    r4_4 = r0;
    r6_5 = r1;
    if (r6_5) {
        z6 = r2 == 0;
        if (!z6) {
            z6 = *r6_5 == 0;
        }
        if (z6) 
            goto label_6; else 
            goto addr_11404_7;
    }
    addr_11448_8:
    r4_4 = reinterpret_cast<void**>(0);
    addr_1144c_9:
    return r4_4;
    label_6:
    goto addr_11448_8;
    addr_11404_7:
    if (!*r2) {
        goto addr_11448_8;
    } else {
        r3_7 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(*r2) - reinterpret_cast<unsigned char>(*r6_5)) >> 2);
        r1_8 = reinterpret_cast<void*>(r3_7 + 1);
        if (reinterpret_cast<int32_t>(r1_8) <= reinterpret_cast<int32_t>(0)) {
            goto addr_11448_8;
        } else {
            r7_9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r1_8) << 2);
            r0_10 = fun_11924(*r6_5, r7_9);
            z11 = r0_10 == 0;
            if (!z11) {
                *r6_5 = r0_10;
            }
            if (!z11) {
                r3_7 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r0_10) + reinterpret_cast<uint32_t>(r7_9));
            }
            if (!z11) {
                *r2 = r3_7;
            }
            if (!z11) {
                r3_7[0xfffffffc] = r4_4;
            }
            if (z11) 
                goto addr_11448_8;
        }
    }
    goto addr_1144c_9;
}

void fun_11000(int32_t r0, int32_t r1, void** r2, void** r3) {
    void** r0_5;
    void** r4_6;
    void** r5_7;
    int32_t r6_8;
    uint32_t r7_9;
    int32_t r0_10;

    fun_118a0();
    fun_1135c();
    r0_5 = fun_11538();
    fun_11620(r0_5);
    r0_10 = fun_11648(r0, r1, r2, r3, r4_6, r5_7, r6_8, r7_9, __return_address());
    fun_11510();
    fun_118ac(66, r0_10, r2, r3, r4_6, r5_7, r6_8, r7_9, __return_address());
    while (1) {
    }
}

void fun_11890(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;
    int1_t z5;
    int1_t z6;

    if (z3) {
    }
    if (z4) {
    }
    if (z5) {
    }
    if (!z6) 
        goto "???";
}

void fun_11988(int32_t r0) {
    int1_t z2;

    if (z2) {
    }
}

void fun_11990(int32_t r0) {
    int1_t z2;
    int1_t z3;
    int1_t z4;
    int1_t z5;
    int1_t z6;
    int1_t z7;
    int1_t z8;
    int1_t z9;
    int1_t z10;
    int1_t z11;
    int1_t z12;
    int1_t z13;
    int1_t z14;
    int1_t z15;
    int1_t z16;
    int1_t z17;
    int1_t z18;
    int1_t z19;
    int1_t z20;
    int1_t z21;
    int1_t z22;
    int1_t z23;
    int1_t z24;
    int1_t z25;
    int1_t z26;
    int1_t z27;
    int1_t z28;
    int1_t z29;

    if (z2) {
    }
    if (z3) {
    }
    if (z4) {
    }
    if (z5) {
    }
    if (z6) {
    }
    if (z7) {
    }
    if (z8) {
    }
    if (z9) {
    }
    if (z10) {
    }
    if (z11) {
    }
    if (z12) {
    }
    if (z13) {
    }
    if (z14) {
    }
    if (z15) {
    }
    if (z16) {
    }
    if (z17) {
    }
    if (z18) {
    }
    if (z19) {
    }
    if (z20) {
    }
    if (z21) {
    }
    if (z22) {
    }
    if (z23) {
    }
    if (z24) {
    }
    if (z25) {
    }
    if (z26) {
    }
    if (z27) {
    }
    if (z28) {
    }
    if (z29) {
    }
}

void fun_111cc(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;
    int1_t z5;

    if (z3) {
    }
    if (z4) {
    }
    if (!z5) 
        goto "???";
}

void fun_112e8(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (!z4) 
        goto "???";
}

void fun_11350(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;
    int1_t z5;

    if (z3) {
    }
    if (z4) {
    }
    if (!z5) 
        goto "???";
}

int32_t* g113ac = reinterpret_cast<int32_t*>(0x14004);

int32_t fun_11394(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;
    int1_t z5;
    int32_t* r3_6;

    if (z3) {
    }
    if (z4) {
    }
    if (z5) {
    }
    r3_6 = g113ac;
    return *r3_6;
}

void fun_113ac() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_113bc(int32_t r0) {
    void** r2_2;
    void** r3_3;
    void** v4;
    void** v5;
    int32_t v6;
    uint32_t v7;
    void* v8;

    fun_113b0();
    fun_118ac(66, r0, r2_2, r3_3, v4, v5, v6, v7, v8);
    while (1) {
    }
}

void*** g11468 = reinterpret_cast<void***>(0x14004);

void**** g1146c = reinterpret_cast<void****>(0x14008);

void** fun_11454(void** r0) {
    void*** r1_2;
    void**** r2_3;
    void** r0_4;

    r1_2 = g11468;
    r2_3 = g1146c;
    r0_4 = fun_113e0(r0, r1_2, r2_3);
    return r0_4;
}

void fun_11490() {
    int1_t z1;
    int1_t z2;

    if (z1) {
    }
    if (!z2) 
        goto "???";
}

struct s3 {
    int32_t 0x0;
    int32_t 0x4;
};

struct s3** g115b4 = reinterpret_cast<struct s3**>(0x12000);

void fun_1156c() {
    int1_t z1;
    int1_t z2;
    struct s3** r3_3;
    int32_t r3_4;
    struct s3** r4_5;
    struct s3* r2_6;

    if (z1) {
    }
    if (z2) {
    }
    r3_3 = g115b4;
    r3_4 = (*r3_3)->0x0;
    if (!r3_4) {
        return;
    } else {
        r4_5 = g115b4;
        while (r3_4(), r2_6 = *r4_5, *r4_5 = reinterpret_cast<struct s3*>(&r2_6->0x4), r3_4 = r2_6->0x4, !!r3_4) {
        }
        return;
    }
}

void fun_115b4(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_11618() {
    int1_t z1;
    int1_t z2;

    if (z1) {
    }
    if (!z2) 
        goto "???";
}

void fun_11644() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_118a8() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_118b4() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_118c0() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_118cc() {
    int1_t z1;
    int16_t* r1_2;
    int32_t r5_3;

    if (!z1) 
        goto "???";
    *r1_2 = static_cast<int16_t>(r5_3);
}

void fun_118d8() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_118e4(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_118f0(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_118fc() {
    int1_t z1;
    int16_t* r1_2;
    int32_t r5_3;

    if (!z1) 
        goto "???";
    *r1_2 = static_cast<int16_t>(r5_3);
}

void fun_11908(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_11914(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_11920(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_1192c() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11938() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11944(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_11950(int32_t r0, int16_t* r1) {
    int1_t z3;
    int32_t r5_4;

    if (!z3) 
        goto "???";
    *r1 = static_cast<int16_t>(r5_4);
}

void fun_1195c() {
    int1_t z1;
    int16_t* r1_2;
    int32_t r5_3;

    if (!z1) 
        goto "???";
    *r1_2 = static_cast<int16_t>(r5_3);
}

void fun_11968(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_11974() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11980() {
    int1_t z1;

    if (z1) {
    }
}

void fun_11100(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (!z4) 
        goto "???";
}

void fun_113d4() {
    fun_113b0();
    return;
}

void fun_11468() {
    int1_t z1;
    int1_t z2;

    if (z1) {
    }
    if (!z2) 
        goto "???";
}

void fun_11508() {
    int1_t z1;
    int1_t z2;

    if (z1) {
    }
    if (!z2) 
        goto "???";
}
