
struct s0 {
    struct s0* f0;
    signed char[31] pad32;
    int32_t f20;
    signed char[41] pad77;
    int32_t f4d;
    unsigned char f50;
    signed char[15] pad97;
    unsigned char f61;
    signed char[2] pad100;
    int32_t f64;
    unsigned char f65;
    int32_t f67;
    unsigned char f69;
    unsigned char f6c;
    unsigned char f6e;
    unsigned char f6f;
    unsigned char f70;
    unsigned char f72;
    signed char[1] pad116;
    unsigned char f74;
    unsigned char f75;
    signed char[973733794] pad973733912;
    unsigned char f3a0a0018;
    signed char[1207959538] pad1107951627;
    unsigned char f420a000b;
    signed char[1073741825] pad1107951629;
    unsigned char f420a000d;
    signed char[1140850700] pad1175060506;
    unsigned char f460a001a;
    signed char[1107296237] pad1208614920;
    unsigned char f480a0008;
    signed char[1090519057] pad1225392154;
    unsigned char f490a001a;
    signed char[1191182334] pad1342832665;
    unsigned char f500a0019;
    signed char[1677721597] pad1409941527;
    unsigned char f540a0017;
    signed char[1627389952] pad1426718744;
    unsigned char f550a0018;
    signed char[1644167159] pad1460273168;
    unsigned char f570a0010;
};

struct s0* fun_80492f1() {
    int32_t ebx1;
    int32_t* eax2;
    int32_t edx3;
    int32_t ecx4;
    int32_t eax5;
    int32_t eax6;
    int32_t eax7;
    struct s0* eax8;

    ebx1 = *eax2;
    edx3 = 8;
    do {
        __asm__("lodsw ");
        ecx4 = eax5;
        __asm__("lodsd ");
        if (!eax6) 
            break;
        if (*reinterpret_cast<int16_t*>(&ebx1) == *reinterpret_cast<int16_t*>(&ecx4) || ebx1 == eax7) {
        }
        *reinterpret_cast<unsigned char*>(&edx3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx3) >> 1);
    } while (*reinterpret_cast<unsigned char*>(&edx3));
    return eax8;
}

struct s1 {
    signed char[3648] pad3648;
    uint32_t fe40;
};

int32_t fun_80492d9(unsigned char* ecx);

void* fun_80492a1() {
    int32_t ecx1;
    int32_t ebp2;
    uint32_t edx3;
    struct s1* ebp4;
    int32_t eax5;
    uint32_t eax6;
    int32_t eax7;
    unsigned char* esi8;
    void* eax9;
    int32_t edx10;

    ecx1 = ebp2 + 0xd46;
    edx3 = ebp4->fe40;
    if (eax5 < 0) {
        eax6 = reinterpret_cast<uint32_t>(-eax7);
    }
    if (eax6 >= edx3) {
        fun_80492d9(esi8);
        ecx1 = ecx1;
        eax6 = edx3;
    }
    eax9 = reinterpret_cast<void*>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(ecx1 + eax6 * 2 - 2)));
    edx10 = *reinterpret_cast<int16_t*>(ecx1 + reinterpret_cast<int32_t>(eax9)) - 1;
    __asm__("pushad ");
    if (!(reinterpret_cast<uint1_t>(edx10 < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(edx10 == 0))) {
        eax9 = reinterpret_cast<void*>(4);
        __asm__("int 0x80");
    }
    __asm__("popad ");
    return eax9;
}

int32_t fun_80492d9(unsigned char* ecx) {
    unsigned char* edx2;

    __asm__("pushad ");
    edx2 = ecx + 0xffffffff;
    do {
        ++edx2;
    } while (*edx2 & 0xff);
    if (reinterpret_cast<int32_t>(edx2) > reinterpret_cast<int32_t>(ecx)) {
        __asm__("int 0x80");
    }
    __asm__("popad ");
    return 4;
}

struct s2 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s3 {
    signed char[4487] pad4487;
    unsigned char f1187;
};

struct s4 {
    signed char[4458] pad4458;
    unsigned char f116a;
};

struct s5 {
    signed char[3648] pad3648;
    unsigned char* fe40;
};

struct s6 {
    signed char[1] pad1;
    unsigned char f1;
};

void fun_8049319() {
    uint32_t eax1;
    uint32_t* esi2;
    unsigned char* esi3;
    struct s2* esi4;
    int16_t cx5;
    int1_t cf6;
    int1_t cf7;
    int32_t eax8;
    int1_t cf9;
    unsigned char* ecx10;
    struct s3* ebp11;
    unsigned char* v12;
    unsigned char* eax13;
    struct s4* ebp14;
    int32_t ecx15;
    int32_t ebp16;
    unsigned char* edx17;
    struct s5* ebp18;
    int32_t edx19;
    int32_t ebp20;
    int32_t ebp21;
    int32_t ebp22;

    eax1 = *esi2;
    if (*reinterpret_cast<unsigned char*>(&eax1) == 45) {
        esi3 = &esi4->f1;
        eax1 = eax1 >> 8;
    }
    if (*reinterpret_cast<unsigned char*>(&eax1) == 48) {
        cx5 = 0x803;
        if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) == 0x78) {
            cx5 = 0x1004;
        }
        while (cf6 = *reinterpret_cast<unsigned char*>(&eax1) < 48, *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1) - 48), !cf6) {
            if (*reinterpret_cast<unsigned char*>(&eax1) < 10) {
                addr_8049370_8:
                if (*reinterpret_cast<unsigned char*>(&eax1) >= *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&cx5) + 1)) 
                    break;
            } else {
                cf7 = *reinterpret_cast<unsigned char*>(&eax1) < 7;
                *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1) - 7);
                if (cf7) 
                    break;
                if (*reinterpret_cast<unsigned char*>(&eax1) >= *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&cx5) + 1)) 
                    goto addr_804936e_11;
            }
            continue;
            addr_804936e_11:
            *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1) - 32);
            goto addr_8049370_8;
        }
        return;
    }
    if (*reinterpret_cast<signed char*>(&eax1) >= reinterpret_cast<signed char>(48) && *reinterpret_cast<unsigned char*>(&eax1) <= 57) {
        eax8 = 0;
        while ((cf9 = *reinterpret_cast<unsigned char*>(&eax8) < 48, *reinterpret_cast<unsigned char*>(&eax8) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax8) - 48), !cf9) && *reinterpret_cast<unsigned char*>(&eax8) < 10) {
        }
        return;
    }
    do {
        fun_80492a1();
        ecx10 = &ebp11->f1187;
        while (1) {
            fun_80492d9(ecx10);
            __asm__("int 0x80");
            v12 = *reinterpret_cast<unsigned char**>(esi3 + 0xfffffff8);
            fun_8049319();
            esi3 = v12;
            eax13 = ecx10;
            if (!__intrinsic()) 
                break;
            ecx10 = &ebp14->f116a;
        }
    } while (__intrinsic());
    if (__intrinsic()) 
        goto addr_8049292_30;
    ecx15 = ebp16 + 0xd46;
    edx17 = ebp18->fe40;
    addr_80492ad_32:
    if (reinterpret_cast<int32_t>(eax13) < reinterpret_cast<int32_t>(0)) {
        eax13 = reinterpret_cast<unsigned char*>(-reinterpret_cast<uint32_t>(eax13));
    }
    if (reinterpret_cast<uint32_t>(eax13) >= reinterpret_cast<uint32_t>(edx17)) {
        fun_80492d9(esi3);
        ecx15 = ecx15;
        eax13 = edx17;
    }
    edx19 = *reinterpret_cast<int16_t*>(ecx15 + *reinterpret_cast<int16_t*>(ecx15 + reinterpret_cast<uint32_t>(eax13) * 2 - 2)) - 1;
    __asm__("pushad ");
    if (!(reinterpret_cast<uint1_t>(edx19 < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(edx19 == 0))) {
        __asm__("int 0x80");
    }
    __asm__("popad ");
    goto ebp20 + 0x121e;
    addr_8049292_30:
    ecx15 = ebp21 + 0x1106;
    edx17 = &(*reinterpret_cast<struct s6**>(ebp22 + 0x1148))->f1;
    goto addr_80492ad_32;
}

struct s7 {
    unsigned char f0;
    signed char[31] pad32;
    unsigned char f20;
    signed char[14] pad47;
    unsigned char f2f;
    signed char[50] pad98;
    unsigned char f62;
    signed char[1] pad100;
    unsigned char f64;
    signed char[1] pad102;
    unsigned char f66;
    unsigned char f67;
    signed char[4] pad108;
    unsigned char f6c;
    signed char[1] pad110;
    unsigned char f6e;
    signed char[3] pad114;
    unsigned char f72;
    unsigned char f73;
    unsigned char f74;
    unsigned char f75;
    unsigned char f76;
};

struct s8 {
    struct s8* f0;
    signed char[9] pad10;
    int32_t fa;
    signed char[18] pad32;
    int32_t f20;
    signed char[8] pad44;
    int32_t f2c;
    signed char[21] pad69;
    unsigned char f45;
    unsigned char f46;
    signed char[12] pad83;
    unsigned char f53;
    signed char[13] pad97;
    unsigned char f61;
    signed char[3] pad101;
    unsigned char f65;
    signed char[1] pad103;
    int32_t f67;
    unsigned char f68;
    unsigned char f69;
    int32_t f6b;
    unsigned char f6c;
    unsigned char f6f;
    unsigned char f70;
    unsigned char f72;
    int32_t f73;
    unsigned char f74;
    unsigned char f75;
    unsigned char f79;
    signed char[973733781] pad973733905;
    unsigned char f3a0a0011;
    signed char[1191182335] pad1091174417;
    unsigned char f410a0011;
    signed char[1073741825] pad1091174419;
    unsigned char f410a0013;
    signed char[1073741846] pad1091174442;
    unsigned char f410a002a;
    signed char[1090519019] pad1107951638;
    unsigned char f420a0016;
    signed char[1073741824] pad1107951639;
    unsigned char f420a0017;
    signed char[1090519063] pad1124728879;
    unsigned char f430a002f;
    signed char[1124073444] pad1175060500;
    unsigned char f460a0014;
    signed char[1124073462] pad1225392139;
    unsigned char f490a000b;
    signed char[1073741835] pad1225392151;
    unsigned char f490a0017;
    signed char[1140850701] pad1292501029;
    unsigned char f4d0a0025;
    signed char[1090519012] pad1309278218;
    unsigned char f4e0a000a;
    signed char[1073741830] pad1309278225;
    unsigned char f4e0a0011;
    signed char[1073741825] pad1309278227;
    unsigned char f4e0a0013;
    signed char[1073741824] pad1309278228;
    unsigned char f4e0a0014;
    signed char[1073741827] pad1309278232;
    unsigned char f4e0a0018;
    signed char[1073741827] pad1309278236;
    unsigned char f4e0a001c;
    signed char[1073741826] pad1309278239;
    unsigned char f4e0a001f;
    signed char[1090519026] pad1326055442;
    unsigned char f4f0a0012;
    signed char[1073741828] pad1326055447;
    unsigned char f4f0a0017;
    signed char[1073741826] pad1326055450;
    unsigned char f4f0a001a;
    signed char[1073741824] pad1326055451;
    unsigned char f4f0a001b;
    signed char[1073741843] pad1326055471;
    unsigned char f4f0a002f;
    signed char[1090519008] pad1342832656;
    unsigned char f500a0010;
    signed char[1610612738] pad1342832659;
    unsigned char f500a0013;
    signed char[1610612739] pad1342832663;
    unsigned char f500a0017;
    signed char[1660944380] pad1393164308;
    unsigned char f530a0014;
    signed char[1610612738] pad1393164311;
    unsigned char f530a0017;
    signed char[1610612738] pad1393164314;
    unsigned char f530a001a;
    signed char[1627389941] pad1409941520;
    unsigned char f540a0010;
    signed char[1610612755] pad1409941540;
    unsigned char f540a0024;
    signed char[1610612736] pad1409941541;
    unsigned char f540a0025;
    signed char[1660944365] pad1460273171;
    unsigned char f570a0013;
};

struct s9 {
    signed char[1] pad1;
    struct s8* f1;
};

unsigned char g6a2d3830;

struct s10 {
    signed char[1] pad1;
    struct s8* f1;
};

struct s11 {
    signed char[80] pad80;
    unsigned char f50;
};

struct s12 {
    signed char[80] pad80;
    unsigned char f50;
};

struct s13 {
    unsigned char f0;
    signed char[98] pad99;
    unsigned char f63;
    signed char[2] pad102;
    unsigned char f66;
    signed char[7] pad110;
    unsigned char f6e;
    unsigned char f6f;
    signed char[2] pad114;
    unsigned char f72;
    signed char[2] pad117;
    unsigned char f75;
    unsigned char f76;
};

struct s14 {
    unsigned char f0;
    signed char[100] pad101;
    unsigned char f65;
};

unsigned char g69440a00;

struct s15 {
    signed char[102] pad102;
    unsigned char f66;
};

struct s16 {
    unsigned char f0;
    signed char[110] pad111;
    unsigned char f6f;
    signed char[9] pad121;
    unsigned char f79;
};

unsigned char g68430a00;

unsigned char ga00;

void fun_8048000(struct s7* ecx) {
    struct s8* esp2;
    int1_t less_or_equal3;
    struct s8* eax4;
    uint1_t cf5;
    signed char dh6;
    struct s8* edx7;
    unsigned char dh8;
    uint1_t cf9;
    uint1_t zf10;
    int1_t of11;
    struct s8* esi12;
    struct s9* esi13;
    int32_t eax14;
    int32_t* ebx15;
    int32_t* ebx16;
    int32_t eax17;
    signed char* eax18;
    signed char* eax19;
    signed char al20;
    signed char* eax21;
    signed char* eax22;
    signed char al23;
    signed char* eax24;
    signed char* eax25;
    signed char al26;
    signed char* eax27;
    signed char* eax28;
    signed char al29;
    void** eax30;
    signed char al31;
    signed char* eax32;
    signed char dl33;
    int32_t edx34;
    struct s8* tmp8_35;
    struct s8* ebx36;
    struct s10* ebx37;
    uint32_t ebp38;
    struct s11* edi39;
    struct s12* edi40;
    struct s8* tmp8_41;
    struct s13* edi42;
    void* edi43;
    uint1_t zf44;
    int1_t sf45;
    uint1_t below_or_equal46;
    int1_t sf47;
    int32_t v48;
    int1_t zf49;
    uint1_t below_or_equal50;
    uint1_t cf51;
    uint1_t zf52;
    int1_t sf53;
    int1_t of54;
    uint1_t below_or_equal55;
    struct s8* ds56;
    struct s8* tmp8_57;
    uint1_t below_or_equal58;
    int1_t sf59;
    int1_t zf60;
    int1_t zf61;
    struct s8* tmp8_62;
    struct s8* tmp8_63;
    uint1_t cf64;
    int1_t of65;
    uint1_t below_or_equal66;
    int1_t zf67;
    void* esi68;
    struct s8* tmp32_69;
    struct s8* tmp8_70;
    uint1_t cf71;
    struct s8* tmp8_72;
    uint1_t cf73;
    struct s8* tmp8_74;
    uint1_t cf75;
    struct s8* tmp8_76;
    uint1_t cf77;
    struct s8** esp78;
    struct s8* tmp8_79;
    uint1_t cf80;
    uint1_t zf81;
    uint1_t below_or_equal82;
    struct s8* tmp8_83;
    int1_t zf84;
    uint1_t zf85;
    uint1_t cf86;
    uint1_t zf87;
    int1_t sf88;
    int1_t of89;
    uint1_t cf90;
    int1_t zf91;
    int1_t sf92;
    int1_t of93;
    int1_t zf94;
    int1_t sf95;
    uint1_t zf96;
    uint1_t below_or_equal97;
    struct s8* tmp8_98;
    struct s8* tmp8_99;
    int1_t cf100;
    uint1_t below_or_equal101;
    struct s8* ss102;
    struct s8* tmp8_103;
    uint1_t cf104;
    uint1_t zf105;
    int1_t zf106;
    uint1_t zf107;
    struct s8* tmp8_108;
    int1_t cf109;
    int1_t zf110;
    struct s8* tmp8_111;
    int32_t esi112;
    int32_t ebp113;
    struct s8* tmp8_114;
    uint1_t zf115;
    int1_t zf116;
    int1_t cf117;
    int1_t zf118;
    struct s8* tmp8_119;
    struct s8* tmp8_120;
    int1_t cf121;
    struct s8* tmp8_122;
    uint1_t cf123;
    uint1_t zf124;
    struct s8* tmp32_125;
    uint1_t cf126;
    struct s8* tmp8_127;
    struct s8* tmp8_128;
    struct s8* tmp8_129;
    unsigned char dl130;
    struct s8* tmp8_131;
    uint1_t cf132;

    esp2 = reinterpret_cast<struct s8*>(__zero_stack_offset());
    if (!less_or_equal3) {
        addr_8048047_2:
        *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<unsigned char>(eax4)) + cf5);
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax4) + reinterpret_cast<unsigned char>(eax4)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax4) + reinterpret_cast<unsigned char>(eax4)) + dh6);
        *reinterpret_cast<unsigned char*>(&edx7 + 1) = reinterpret_cast<unsigned char>(dh8 | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65));
        cf9 = 0;
        zf10 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx7 + 1) == 0);
        of11 = 0;
        goto addr_8048051_3;
    } else {
        esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 1);
        esi12 = reinterpret_cast<struct s8*>(&esi13->f1);
        ecx->f0 = reinterpret_cast<unsigned char>(ecx->f0 + eax14);
        *ebx15 = *ebx16 + eax17;
        *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
        *eax21 = reinterpret_cast<signed char>(*eax22 + al23);
        *eax24 = reinterpret_cast<signed char>(*eax25 + al26);
        *eax27 = reinterpret_cast<signed char>(*eax28 + al29);
        *reinterpret_cast<signed char*>(&eax30) = reinterpret_cast<signed char>(al31 + *eax32);
        eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<int32_t>(eax30) + reinterpret_cast<uint32_t>(*eax30));
        *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<unsigned char>(eax4));
        *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<unsigned char>(eax4));
        *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(dl33 - *reinterpret_cast<signed char*>(edx34 + 0x2c0804));
        *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<unsigned char>(eax4));
        *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<unsigned char>(eax4));
        *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<unsigned char>(eax4));
        *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<unsigned char>(eax4));
        *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<unsigned char>(eax4));
        eax4 = reinterpret_cast<struct s8*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(eax4)));
        *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) & reinterpret_cast<unsigned char>(eax4));
        *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<unsigned char>(eax4));
        *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<unsigned char>(eax4));
        *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<unsigned char>(eax4));
        *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<unsigned char>(eax4));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x80000804) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x80000804) + reinterpret_cast<unsigned char>(eax4));
        tmp8_35 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) + 8);
        cf9 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_35) < reinterpret_cast<unsigned char>(eax4));
        eax4 = tmp8_35;
        zf10 = reinterpret_cast<uint1_t>(eax4 == 0);
        of11 = __intrinsic();
        if (__intrinsic()) {
            addr_8048051_3:
            if (of11) {
                addr_80480c2_5:
                __asm__("arpl [eax+0x20], bp");
                goto addr_80480c5_6;
            } else {
                if (cf9) 
                    goto addr_80480c9_8; else 
                    goto addr_8048055_9;
            }
        } else {
            *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<unsigned char>(eax4));
            if (__intrinsic()) {
                addr_8048055_9:
                eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) - 0x302e3030);
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1) ^ g6a2d3830);
                cf9 = 0;
                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1)) {
                    addr_80480d0_11:
                    *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) - (reinterpret_cast<unsigned char>(eax4) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax4) + cf9))));
                    *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | ecx->f6e);
                    cf9 = 0;
                    zf10 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&ecx) == 0);
                    if (zf10) {
                        goto addr_804813d_13;
                    }
                } else {
                    eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) - 0x28203030);
                    ebx36 = reinterpret_cast<struct s8*>(&ebx37->f1);
                    *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) - reinterpret_cast<unsigned char>(esp2));
                    *reinterpret_cast<unsigned char*>(&edx7 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7 + 1) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)));
                    *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) ^ *reinterpret_cast<unsigned char*>(&edx7 + 1));
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x70) = 0;
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) & reinterpret_cast<unsigned char>(eax4));
                    if (0) {
                        goto addr_80480e3_16;
                    } else {
                        ebp38 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi12) + 44) * 0x554e4720;
                        edi39->f50 = reinterpret_cast<unsigned char>(edi40->f50 & reinterpret_cast<unsigned char>(eax4));
                        esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 1);
                        *reinterpret_cast<unsigned char*>(&ebx36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx36) | ecx->f0);
                        tmp8_41 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                        cf9 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_41) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)));
                        *reinterpret_cast<struct s8**>(edx7) = tmp8_41;
                        edi42 = reinterpret_cast<struct s13*>(reinterpret_cast<int32_t>(edi43) - 1);
                        zf44 = reinterpret_cast<uint1_t>(edi42 == 0);
                        sf45 = reinterpret_cast<int32_t>(edi42) < reinterpret_cast<int32_t>(0);
                        below_or_equal46 = reinterpret_cast<uint1_t>(cf9 | zf44);
                        if (__intrinsic()) {
                            addr_80480ed_18:
                            __asm__("das ");
                            edi42 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(edi42) - 1);
                            *reinterpret_cast<unsigned char*>(ebp38 + 0x72) = 0;
                            cf9 = 0;
                            zf44 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(ebp38 + 0x72) == 0);
                            sf45 = __intrinsic();
                            below_or_equal46 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf44));
                            goto addr_80480f5_19;
                        } else {
                            if (cf9) {
                                addr_80480eb_21:
                                goto addr_80480ed_18;
                            } else {
                                if (zf44) {
                                    addr_80480f5_19:
                                    if (cf9) {
                                        addr_8048166_23:
                                        if (!cf9) {
                                            goto addr_80481df_25;
                                        }
                                    } else {
                                        if (cf9) {
                                            addr_8048103_27:
                                            goto addr_8048104_28;
                                        } else {
                                            goto addr_80480fa_30;
                                        }
                                    }
                                } else {
                                    __asm__("outsd ");
                                    __asm__("outsb ");
                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) = 0;
                                    cf9 = 0;
                                    zf10 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) == 0);
                                    sf47 = __intrinsic();
                                    of11 = 0;
                                    below_or_equal46 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf10));
                                    if (zf10) {
                                        addr_80480b3_32:
                                        __asm__("arpl [gs:edi+ebp*2+0x72], si");
                                        if (!sf47) {
                                            addr_80480c5_6:
                                            if (of11) {
                                                addr_804813b_33:
                                                if (zf10) {
                                                    addr_804815d_34:
                                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x68) = 0;
                                                    ebp38 = v48 * 0x636f7270;
                                                    cf9 = __intrinsic();
                                                    sf45 = __undefined();
                                                    zf44 = __undefined();
                                                    goto addr_8048166_23;
                                                } else {
                                                    addr_804813d_13:
                                                    if (cf9) 
                                                        goto addr_80481b2_35; else 
                                                        goto addr_8048140_36;
                                                }
                                            } else {
                                                addr_80480c9_8:
                                                __asm__("outsd ");
                                                __asm__("arpl [ebp+0x73], sp");
                                                if (!cf9) {
                                                    addr_80480d9_37:
                                                    if (!zf10) {
                                                        addr_804814b_38:
                                                        goto addr_804814d_39;
                                                    } else {
                                                        if (zf10) {
                                                            goto addr_8048143_42;
                                                        }
                                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x79) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x79) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                                        if (1) 
                                                            goto addr_8048157_44; else 
                                                            goto addr_80480e3_16;
                                                    }
                                                } else {
                                                    goto addr_80480d0_11;
                                                }
                                            }
                                        } else {
                                            *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<unsigned char>(eax4))));
                                            *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f));
                                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x75) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x75) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                            cf9 = 0;
                                            zf10 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x75) == 0);
                                            of11 = 0;
                                            goto addr_80480c2_5;
                                        }
                                    } else {
                                        if (0) {
                                            addr_80480fa_30:
                                            eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) - (reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax4) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + cf9))));
                                            *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f));
                                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x75) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x75) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                            cf9 = 0;
                                            below_or_equal46 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x75) == 0)));
                                            __asm__("arpl [eax+0x20], bp");
                                            goto addr_8048103_27;
                                        } else {
                                            if (0) {
                                                addr_8048104_28:
                                                if (below_or_equal46) {
                                                    addr_8048172_49:
                                                    ecx->f67 = 0;
                                                    __asm__("popad ");
                                                    goto addr_8048178_50;
                                                } else {
                                                    __asm__("arpl [ebp+0x20], sp");
                                                    __asm__("outsd ");
                                                    if (cf9) {
                                                        addr_804812f_52:
                                                        eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) | *reinterpret_cast<unsigned char*>(ebp38 + 0x78));
                                                        cf9 = 0;
                                                        zf10 = reinterpret_cast<uint1_t>(eax4 == 0);
                                                        __asm__("arpl [gs:eax], sp");
                                                        __asm__("outsw ");
                                                        if (0) {
                                                            addr_80481a7_53:
                                                            ecx->f64 = 0;
                                                            zf49 = ecx->f64 == 0;
                                                            if (0) {
                                                                addr_8048215_54:
                                                                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x75) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x75) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                                                below_or_equal50 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x75) == 0)));
                                                                __asm__("arpl [eax+0x20], bp");
                                                                if (below_or_equal50) {
                                                                    addr_8048288_55:
                                                                    if (1) {
                                                                        addr_8048295_56:
                                                                        if (!below_or_equal50) {
                                                                            addr_804830d_57:
                                                                            __asm__("outsd ");
                                                                            __asm__("outsd ");
                                                                            *reinterpret_cast<unsigned char*>(ebp38 + 97) = 0;
                                                                            cf51 = 0;
                                                                            zf52 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(ebp38 + 97) == 0);
                                                                            sf53 = __intrinsic();
                                                                            of54 = 0;
                                                                            below_or_equal55 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf52));
                                                                            __asm__("outsb ");
                                                                            if (!sf53) {
                                                                                addr_8048336_58:
                                                                                if (!zf52) {
                                                                                    addr_80483a6_59:
                                                                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi42) + ebp38 * 2 + 0x6e) = 0;
                                                                                    *reinterpret_cast<unsigned char*>(&ebx36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx36) | *reinterpret_cast<unsigned char*>(*reinterpret_cast<uint16_t*>(&ebp38) + reinterpret_cast<int16_t>(*reinterpret_cast<struct s14**>(&edi42))));
                                                                                    *reinterpret_cast<struct s8**>(edx7) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                                                                    __asm__("outsd ");
                                                                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                                                                    goto addr_80483b4_60;
                                                                                } else {
                                                                                    __asm__("outsb ");
                                                                                    if (zf52) {
                                                                                        addr_804835d_62:
                                                                                        if (1) {
                                                                                            addr_80483d5_63:
                                                                                            __asm__("outsb ");
                                                                                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) = 0;
                                                                                            cf51 = 0;
                                                                                            zf52 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) == 0);
                                                                                            sf53 = __intrinsic();
                                                                                            of54 = 0;
                                                                                            if (zf52) {
                                                                                                addr_80483fc_64:
                                                                                                goto addr_80483fd_65;
                                                                                            } else {
                                                                                                ebp38 = *reinterpret_cast<int32_t*>(ebp38 + 0x70) * 0x656d656c;
                                                                                                zf52 = __undefined();
                                                                                                goto addr_80483dd_67;
                                                                                            }
                                                                                        } else {
                                                                                            __asm__("insb ");
                                                                                            if (zf52) {
                                                                                                addr_8048383_69:
                                                                                                __asm__("insb ");
                                                                                                goto addr_8048387_70;
                                                                                            } else {
                                                                                                __asm__("outsb ");
                                                                                                __asm__("outsd ");
                                                                                                if (zf52) {
                                                                                                    addr_8048387_70:
                                                                                                    __asm__("outsd ");
                                                                                                    __asm__("arpl [ebx+0x20], bp");
                                                                                                    if (!below_or_equal55) 
                                                                                                        goto addr_80483fc_64; else 
                                                                                                        goto addr_804838d_72;
                                                                                                } else {
                                                                                                    if (0) {
                                                                                                        addr_80483ce_74:
                                                                                                        eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x75));
                                                                                                        __asm__("outsb ");
                                                                                                        goto addr_80483d2_75;
                                                                                                    } else {
                                                                                                        if (0) {
                                                                                                            addr_80483dd_67:
                                                                                                            __asm__("outsb ");
                                                                                                            if (zf52) {
                                                                                                                goto addr_804844c_78;
                                                                                                            } else {
                                                                                                                *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | g69440a00);
                                                                                                                cf51 = 0;
                                                                                                                zf52 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx7) == 0);
                                                                                                                sf53 = __intrinsic();
                                                                                                                of54 = 0;
                                                                                                                below_or_equal55 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf52));
                                                                                                                goto addr_80483ec_80;
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (1) {
                                                                                                                addr_80483d3_82:
                                                                                                                goto addr_80483d5_63;
                                                                                                            } else {
                                                                                                                __asm__("outsb ");
                                                                                                                if (zf52) {
                                                                                                                    addr_80483d2_75:
                                                                                                                    __asm__("arpl [ecx+ebp*2+0x6f], si");
                                                                                                                    goto addr_80483d3_82;
                                                                                                                } else {
                                                                                                                    ds56 = *reinterpret_cast<struct s8**>(esp2);
                                                                                                                    tmp8_57 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                                                                                                    cf51 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_57) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)));
                                                                                                                    *reinterpret_cast<struct s8**>(edx7) = tmp8_57;
                                                                                                                    zf52 = reinterpret_cast<uint1_t>(*reinterpret_cast<struct s8**>(edx7) == 0);
                                                                                                                    sf53 = reinterpret_cast<signed char>(*reinterpret_cast<struct s8**>(edx7)) < reinterpret_cast<signed char>(0);
                                                                                                                    of54 = __intrinsic();
                                                                                                                    below_or_equal55 = reinterpret_cast<uint1_t>(cf51 | zf52);
                                                                                                                    esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) + 2 - 4);
                                                                                                                    *reinterpret_cast<struct s8**>(esp2) = edx7;
                                                                                                                    goto addr_804837a_85;
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        __asm__("outsd ");
                                                                                        if (!zf52) {
                                                                                            addr_80483b4_60:
                                                                                            __asm__("arpl [edi+0x72], bp");
                                                                                            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi42) + ebp38 * 2 + 99) = 0;
                                                                                            esi12 = reinterpret_cast<struct s8*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebx36) + 32) * 97);
                                                                                            below_or_equal58 = reinterpret_cast<uint1_t>(__intrinsic() | __undefined());
                                                                                            goto addr_80483bf_87;
                                                                                        } else {
                                                                                            edi42->f66 = 0;
                                                                                            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi42) + ebp38 * 2 + 0x6d) = 0;
                                                                                            __asm__("popad ");
                                                                                            ebp38 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi12) + 32) * 0x6620666f;
                                                                                            below_or_equal58 = reinterpret_cast<uint1_t>(__intrinsic() | __undefined());
                                                                                            if (!__undefined()) {
                                                                                                addr_80483bf_87:
                                                                                                if (below_or_equal58) 
                                                                                                    goto addr_8048425_89; else 
                                                                                                    goto addr_80483c4_90;
                                                                                            } else {
                                                                                                __asm__("arpl [edx], cx");
                                                                                                ds56 = *reinterpret_cast<struct s8**>(esp2);
                                                                                                esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) + 2);
                                                                                                *reinterpret_cast<struct s8**>(edx7) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                                                                                --ebp38;
                                                                                                __asm__("popad ");
                                                                                                if (!ebp38) {
                                                                                                    goto addr_80483c4_90;
                                                                                                } else {
                                                                                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                                                                                    cf51 = 0;
                                                                                                    zf52 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) == 0);
                                                                                                    sf53 = __intrinsic();
                                                                                                    of54 = 0;
                                                                                                    below_or_equal55 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf52));
                                                                                                    goto addr_804835d_62;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                __asm__("insb ");
                                                                                ebp38 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi12) + 0x6b) * 0xd0a73;
                                                                                goto addr_804831b_95;
                                                                            }
                                                                        } else {
                                                                            esi12 = reinterpret_cast<struct s8*>(*reinterpret_cast<unsigned char*>(ebp38 + 0x72) * 0xa00100a);
                                                                            sf59 = __undefined();
                                                                            goto addr_80482a0_97;
                                                                        }
                                                                    } else {
                                                                        eax4 = reinterpret_cast<struct s8*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax4) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)))));
                                                                        *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f));
                                                                        if (!*reinterpret_cast<void**>(&ecx)) {
                                                                            addr_80482b3_99:
                                                                            *reinterpret_cast<struct s8**>(edx7) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                                                            esi12 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esi12) + 1);
                                                                            ebp38 = *reinterpret_cast<int16_t*>(ebp38 + 32) * 0x206f6f74;
                                                                            __asm__("insb ");
                                                                            __asm__("popad ");
                                                                            if (__intrinsic()) {
                                                                                goto addr_804832a_101;
                                                                            } else {
                                                                                *reinterpret_cast<unsigned char*>(&ebx36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx36) | ecx->f0);
                                                                                *reinterpret_cast<struct s8**>(edx7) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                                                                esi12 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esi12) - 1);
                                                                                __asm__("outsd ");
                                                                                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x70) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x70) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                                                                __asm__("popad ");
                                                                                __asm__("arpl [ebp+0x20], sp");
                                                                                __asm__("insb ");
                                                                                if (!*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x70)) {
                                                                                    addr_80482f5_103:
                                                                                    eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) - 0x796c6e6f);
                                                                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x69) = 0;
                                                                                    __asm__("insb ");
                                                                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x79) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x79) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                                                                    cf51 = 0;
                                                                                    zf52 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x79) == 0);
                                                                                    sf53 = __intrinsic();
                                                                                    of54 = 0;
                                                                                    below_or_equal55 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf52));
                                                                                    if (1) {
                                                                                        addr_804837a_85:
                                                                                        if (!cf51) {
                                                                                            addr_80483ec_80:
                                                                                            if (cf51) {
                                                                                                addr_8048454_104:
                                                                                                esi12 = reinterpret_cast<struct s8*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) * 0x79742064);
                                                                                                if (__intrinsic()) {
                                                                                                    addr_80484c4_105:
                                                                                                    goto addr_80484c5_106;
                                                                                                } else {
                                                                                                    *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + reinterpret_cast<unsigned char>(eax4)));
                                                                                                    *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | ecx->f64);
                                                                                                    zf60 = *reinterpret_cast<void**>(&ecx) == 0;
                                                                                                    __asm__("outsb ");
                                                                                                    if (zf60) {
                                                                                                        goto addr_80484d3_109;
                                                                                                    } else {
                                                                                                        *reinterpret_cast<uint16_t*>(&esp2) = reinterpret_cast<uint16_t>(*reinterpret_cast<unsigned char*>(ebp38 + 0x72) * 0x7220);
                                                                                                        below_or_equal55 = reinterpret_cast<uint1_t>(__intrinsic() | __undefined());
                                                                                                        __asm__("insd ");
                                                                                                        goto addr_8048471_111;
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                __asm__("arpl [edi+ebp*2+0x72], si");
                                                                                                goto addr_80483f1_113;
                                                                                            }
                                                                                        } else {
                                                                                            if (!zf52) {
                                                                                                addr_80483f1_113:
                                                                                                if (!sf53) {
                                                                                                    addr_8048415_115:
                                                                                                    goto addr_8048419_116;
                                                                                                } else {
                                                                                                    __asm__("outsb ");
                                                                                                    __asm__("outsd ");
                                                                                                    if (zf52) {
                                                                                                        addr_8048419_116:
                                                                                                        if (!cf51) {
                                                                                                            addr_804843b_118:
                                                                                                            __asm__("outsd ");
                                                                                                            __asm__("arpl [ebx+0xa], bp");
                                                                                                            eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) - reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax4) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(cf51))))));
                                                                                                            *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f));
                                                                                                            *reinterpret_cast<unsigned char*>(ebp38 + 0x65) = 0;
                                                                                                            zf61 = *reinterpret_cast<unsigned char*>(ebp38 + 0x65) == 0;
                                                                                                            if (1) {
                                                                                                                addr_80484bf_119:
                                                                                                                __asm__("insb ");
                                                                                                                if (zf61) {
                                                                                                                    addr_8048527_120:
                                                                                                                    __asm__("popad ");
                                                                                                                    goto addr_8048529_121;
                                                                                                                } else {
                                                                                                                    *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | edi42->f0);
                                                                                                                    goto addr_80484c4_105;
                                                                                                                }
                                                                                                            } else {
                                                                                                                addr_804844c_78:
                                                                                                                __asm__("popad ");
                                                                                                                *reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s15**>(&ebx36))->f66) = 0;
                                                                                                                *reinterpret_cast<unsigned char*>(ebp38 + 0x73) = 0;
                                                                                                                goto addr_8048454_104;
                                                                                                            }
                                                                                                        } else {
                                                                                                            __asm__("outsb ");
                                                                                                            __asm__("arpl [edi+0x75], bp");
                                                                                                            __asm__("outsb ");
                                                                                                            if (zf52) {
                                                                                                                addr_8048488_124:
                                                                                                                goto addr_804848a_125;
                                                                                                            } else {
                                                                                                                if (cf51) {
                                                                                                                    addr_804848a_125:
                                                                                                                    if (zf52) {
                                                                                                                        addr_80484ac_127:
                                                                                                                        __asm__("outsb ");
                                                                                                                        edi42 = reinterpret_cast<struct s13*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) * 0x100a64);
                                                                                                                        *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | *reinterpret_cast<unsigned char*>(ebp38 + 0x76));
                                                                                                                        __asm__("insb ");
                                                                                                                        *reinterpret_cast<struct s8**>(ebx36) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(ebx36)) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                                                                                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 97) = 0;
                                                                                                                        zf61 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 97) == 0;
                                                                                                                        goto addr_80484bf_119;
                                                                                                                    } else {
                                                                                                                        __asm__("outsd ");
                                                                                                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 97) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                                                                                                        goto addr_8048491_129;
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    addr_8048425_89:
                                                                                                                    *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x4f0a0017));
                                                                                                                    cf51 = 0;
                                                                                                                    zf52 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx7) == 0);
                                                                                                                    of54 = 0;
                                                                                                                    goto addr_804842c_130;
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        __asm__("insd ");
                                                                                                        goto addr_80483fb_132;
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                __asm__("arpl [ebp+0x20], sp");
                                                                                                __asm__("popad ");
                                                                                                goto addr_8048383_69;
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        __asm__("insd ");
                                                                                        *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x540a0010));
                                                                                        goto addr_804830d_57;
                                                                                    }
                                                                                } else {
                                                                                    addr_80482d5_135:
                                                                                    __asm__("outsd ");
                                                                                    __asm__("outsb ");
                                                                                    *reinterpret_cast<unsigned char*>(ebp38 + 0x76) = 0;
                                                                                    esp2 = reinterpret_cast<struct s8*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x65) * 0xe900a);
                                                                                    __asm__("insb ");
                                                                                    __asm__("a16 popad ");
                                                                                    goto addr_80482e8_136;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            __asm__("popad ");
                                                                            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<uint32_t>(edi42) * 2 + 0x70) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<uint32_t>(edi42) * 2 + 0x70) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                                                            below_or_equal50 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<uint32_t>(edi42) * 2 + 0x70) == 0)));
                                                                            goto addr_8048295_56;
                                                                        }
                                                                    }
                                                                } else {
                                                                    __asm__("arpl [ebp+0xa], sp");
                                                                    *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<unsigned char>(eax4))));
                                                                    *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f));
                                                                    zf49 = *reinterpret_cast<void**>(&ecx) == 0;
                                                                    goto addr_8048225_139;
                                                                }
                                                            } else {
                                                                if (1) {
                                                                    addr_8048225_139:
                                                                    if (zf49) {
                                                                        addr_8048249_141:
                                                                        *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | ecx->f6e);
                                                                        if (!*reinterpret_cast<void**>(&ecx)) {
                                                                            goto addr_80482b1_143;
                                                                        }
                                                                    } else {
                                                                        __asm__("popad ");
                                                                        goto addr_804822a_145;
                                                                    }
                                                                } else {
                                                                    addr_80481b2_35:
                                                                    *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x420a0017));
                                                                    cf9 = 0;
                                                                    zf44 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx7) == 0);
                                                                    sf45 = __intrinsic();
                                                                    __asm__("insb ");
                                                                    __asm__("outsd ");
                                                                    __asm__("arpl [ebx+0x20], bp");
                                                                    if (zf44) {
                                                                        addr_804822a_145:
                                                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + ebp38 * 2 + 0x72) = 0;
                                                                        cf9 = 0;
                                                                        zf44 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx) + ebp38 * 2 + 0x72) == 0);
                                                                        sf45 = __intrinsic();
                                                                        goto addr_804822b_146;
                                                                    } else {
                                                                        __asm__("arpl [ebp+0x20], sp");
                                                                        if (0) {
                                                                            addr_804822b_146:
                                                                            __asm__("arpl [gs:edi+ebp*2+0x72], si");
                                                                            if (!sf45) {
                                                                                addr_804823f_148:
                                                                                goto addr_8048242_149;
                                                                            } else {
                                                                                *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<unsigned char>(eax4))));
                                                                                *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | ecx->f73);
                                                                                ecx->f20 = 0;
                                                                                goto addr_804823d_151;
                                                                            }
                                                                        } else {
                                                                            if (1) {
                                                                                addr_804823d_151:
                                                                                goto addr_804823e_153;
                                                                            } else {
                                                                                esi12 = reinterpret_cast<struct s8*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) * 0x19900a64);
                                                                                tmp8_62 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                                                                cf9 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_62) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)));
                                                                                *reinterpret_cast<struct s8**>(edx7) = tmp8_62;
                                                                                esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) + 1);
                                                                                zf44 = reinterpret_cast<uint1_t>(esp2 == 0);
                                                                                sf45 = reinterpret_cast<signed char>(esp2) < reinterpret_cast<signed char>(0);
                                                                                if (cf9 | zf44) {
                                                                                    addr_804823e_153:
                                                                                    esi12 = reinterpret_cast<struct s8*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) * 0x726f7463);
                                                                                    cf9 = __intrinsic();
                                                                                    sf45 = __undefined();
                                                                                    zf44 = __undefined();
                                                                                    goto addr_804823f_148;
                                                                                } else {
                                                                                    __asm__("arpl [ebp+0x20], sp");
                                                                                    __asm__("outsd ");
                                                                                    if (cf9) {
                                                                                        addr_80481fb_156:
                                                                                        tmp8_63 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                                                                        cf64 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_63) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)));
                                                                                        *reinterpret_cast<struct s8**>(edx7) = tmp8_63;
                                                                                        ebx36 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(ebx36) + 1);
                                                                                        sf59 = reinterpret_cast<signed char>(ebx36) < reinterpret_cast<signed char>(0);
                                                                                        of65 = __intrinsic();
                                                                                        below_or_equal66 = reinterpret_cast<uint1_t>(cf64 | reinterpret_cast<uint1_t>(ebx36 == 0));
                                                                                        if (cf64) {
                                                                                            addr_804826f_157:
                                                                                            __asm__("insb ");
                                                                                            __asm__("outsd ");
                                                                                            if (!below_or_equal66) {
                                                                                                addr_804827d_158:
                                                                                                __asm__("outsb ");
                                                                                                if (!sf59) {
                                                                                                    addr_80482a0_97:
                                                                                                    esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 4);
                                                                                                    *reinterpret_cast<struct s8**>(esp2) = esp2;
                                                                                                    if (sf59) {
                                                                                                        addr_804831b_95:
                                                                                                        eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x72));
                                                                                                        __asm__("outsd ");
                                                                                                        esp2 = reinterpret_cast<struct s8*>(*reinterpret_cast<unsigned char*>(ebp38 + 0x6e) * 32);
                                                                                                        if (__intrinsic()) {
                                                                                                            addr_8048391_159:
                                                                                                            __asm__("arpl [ebp+0x72], si");
                                                                                                            *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x460a0014));
                                                                                                            goto addr_804839b_160;
                                                                                                        } else {
                                                                                                            if (__intrinsic()) 
                                                                                                                goto addr_804838f_162; else 
                                                                                                                goto addr_804832a_101;
                                                                                                        }
                                                                                                    } else {
                                                                                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x69) = 0;
                                                                                                        __asm__("insb ");
                                                                                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x75) = 0;
                                                                                                        if (1) {
                                                                                                            addr_804832a_101:
                                                                                                            *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x4d0a0025));
                                                                                                            __asm__("popad ");
                                                                                                            if (!*reinterpret_cast<unsigned char*>(&edx7)) {
                                                                                                                addr_804839b_160:
                                                                                                                ebp38 = *reinterpret_cast<int16_t*>(ebp38 + 32) * 0x656d616e;
                                                                                                                *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi42) + ebp38 * 2 + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi42) + ebp38 * 2 + 0x6f) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                                                                                                goto addr_80483a6_59;
                                                                                                            } else {
                                                                                                                ecx->f72 = 0;
                                                                                                                cf51 = 0;
                                                                                                                zf52 = reinterpret_cast<uint1_t>(ecx->f72 == 0);
                                                                                                                sf53 = __intrinsic();
                                                                                                                of54 = 0;
                                                                                                                below_or_equal55 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf52));
                                                                                                                goto addr_8048336_58;
                                                                                                            }
                                                                                                        } else {
                                                                                                            addr_80482b1_143:
                                                                                                            *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)));
                                                                                                            goto addr_80482b3_99;
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    __asm__("outsd ");
                                                                                                    if (of65) {
                                                                                                        addr_80482e8_136:
                                                                                                        __asm__("insb ");
                                                                                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x65) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                                                                                        ecx = reinterpret_cast<struct s7*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) * 23);
                                                                                                        *reinterpret_cast<struct s8**>(edx7) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                                                                                        esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 4);
                                                                                                        *reinterpret_cast<struct s8**>(esp2) = edx7;
                                                                                                        __asm__("popad ");
                                                                                                        goto addr_80482f5_103;
                                                                                                    } else {
                                                                                                        __asm__("outsb ");
                                                                                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x69) = 0;
                                                                                                        below_or_equal50 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x69) == 0)));
                                                                                                        __asm__("insb ");
                                                                                                        goto addr_8048288_55;
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) + 0x6f540a00 + cf64);
                                                                                                goto addr_8048275_168;
                                                                                            }
                                                                                        } else {
                                                                                            if (!cf64) {
                                                                                                addr_8048275_168:
                                                                                                __asm__("outsd ");
                                                                                                *reinterpret_cast<unsigned char*>(ebp38 + 97) = 0;
                                                                                                sf59 = __intrinsic();
                                                                                                of65 = 0;
                                                                                                goto addr_804827d_158;
                                                                                            } else {
                                                                                                addr_8048202_170:
                                                                                                eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) - 0x69766564);
                                                                                                goto addr_8048205_171;
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (cf9) {
                                                                                            addr_8048242_149:
                                                                                            if (!sf45) {
                                                                                                addr_8048252_173:
                                                                                                goto addr_8048253_174;
                                                                                            } else {
                                                                                                eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax4) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4))) + cf9);
                                                                                                goto addr_8048249_141;
                                                                                            }
                                                                                        } else {
                                                                                            if (!cf9) {
                                                                                                goto addr_804824f_178;
                                                                                            } else {
                                                                                                addr_80481df_25:
                                                                                                if (!zf44) {
                                                                                                    addr_8048253_174:
                                                                                                    __asm__("outsb ");
                                                                                                    if (!zf44) {
                                                                                                        eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) + 0x69460a00 + cf9);
                                                                                                        __asm__("insb ");
                                                                                                        ecx->f62 = reinterpret_cast<unsigned char>(ecx->f62 & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                                                                                        goto addr_8048266_180;
                                                                                                    }
                                                                                                } else {
                                                                                                    __asm__("arpl [ebp+0x20], sp");
                                                                                                    if (sf45) {
                                                                                                        eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) | 0x69460a00);
                                                                                                        __asm__("insb ");
                                                                                                        *reinterpret_cast<unsigned char*>(ebp38 + 0x78) = 0;
                                                                                                    }
                                                                                                    esi12 = reinterpret_cast<struct s8*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x74) * 0x13900a73);
                                                                                                    goto addr_80481f6_184;
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
                                                        } else {
                                                            __asm__("popad ");
                                                            goto addr_804813b_33;
                                                        }
                                                    } else {
                                                        __asm__("popad ");
                                                        if (cf9) {
                                                            addr_8048179_187:
                                                            edi42 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(edi42) - 1);
                                                            if (edi42) {
                                                                addr_80481f6_184:
                                                                goto addr_80481fb_156;
                                                            } else {
                                                                edi42->f66 = 0;
                                                                goto addr_8048185_189;
                                                            }
                                                        } else {
                                                            if (!cf9) {
                                                                addr_8048189_191:
                                                                __asm__("outsd ");
                                                                if (cf9) {
                                                                    addr_8048205_171:
                                                                    __asm__("arpl [ebp+0x20], sp");
                                                                    __asm__("insb ");
                                                                    ebp38 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi12) + 0x6b) * 0x10900a;
                                                                    *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f));
                                                                    goto addr_8048215_54;
                                                                } else {
                                                                    *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x500a0013));
                                                                    if (0) 
                                                                        goto addr_8048202_170; else 
                                                                        goto addr_8048195_193;
                                                                }
                                                            } else {
                                                                *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x410a0013));
                                                                if (0) {
                                                                    addr_8048185_189:
                                                                    *reinterpret_cast<unsigned char*>(ebp38 + 0x65) = 0;
                                                                    cf9 = 0;
                                                                    __asm__("insd ");
                                                                    goto addr_8048189_191;
                                                                } else {
                                                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + ebp38 * 2 + 0x73) = 0;
                                                                    cf9 = 0;
                                                                    zf67 = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx) + ebp38 * 2 + 0x73) == 0;
                                                                    if (zf67) {
                                                                        addr_8048144_196:
                                                                        *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<unsigned char>(eax4) + cf9);
                                                                        eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 97));
                                                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x69) = 0;
                                                                        goto addr_804814b_38;
                                                                    } else {
                                                                        if (zf67) {
                                                                            addr_8048195_193:
                                                                            esi12 = reinterpret_cast<struct s8*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebx36) + 0x73) * 0x206e6f69);
                                                                            __asm__("outsb ");
                                                                            esp2 = reinterpret_cast<struct s8*>(*reinterpret_cast<int32_t*>(ebp38 + 100) * 0xd900a);
                                                                            eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 97));
                                                                            goto addr_80481a7_53;
                                                                        } else {
                                                                            __asm__("outsd ");
                                                                            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi42) + ebp38 * 2 + 0x6e) = 0;
                                                                            *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<struct s15**>(&ebx36)) + reinterpret_cast<int16_t>(*reinterpret_cast<struct s16**>(&esi12))) + 19));
                                                                            goto addr_804812f_52;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                esi68 = reinterpret_cast<void*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esp2) + reinterpret_cast<unsigned char>(esi12) * 2 + 0x65) * 0x1b900a64);
                                                *reinterpret_cast<struct s8**>(edx7) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                                esi12 = reinterpret_cast<struct s8*>(reinterpret_cast<int32_t>(esi68) - 1);
                                                __asm__("outsd ");
                                                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x75) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x75) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                                __asm__("arpl [eax+0x20], bp");
                                                *reinterpret_cast<uint16_t*>(&ebp38) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(ebp38 + 32) * 0x726f);
                                                *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + ebp38 * 2 + 0x72) = 0;
                                                cf9 = 0;
                                                zf10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx) + ebp38 * 2 + 0x72) == 0);
                                                sf47 = __intrinsic();
                                                of11 = 0;
                                                goto addr_80480b3_32;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<unsigned char>(eax4));
                tmp32_69 = eax4;
                cf5 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_69) < reinterpret_cast<unsigned char>(eax4));
                eax4 = tmp32_69;
                goto addr_8048047_2;
            }
        }
    }
    if (0) 
        goto addr_804814b_38; else 
        goto addr_80480d9_37;
    addr_80480e3_16:
    __asm__("insd ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 97) = 0;
    __asm__("insb ");
    __asm__("insb ");
    *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x490a000b));
    goto addr_80480eb_21;
    if (!cf9) {
        addr_8048178_50:
        ebp38 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi12) + 10) * 0xa000f90;
        goto addr_8048179_187;
    } else {
        eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)));
        *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + reinterpret_cast<unsigned char>(esi12) * 2 + 0x79));
        goto addr_8048172_49;
    }
    addr_8048140_36:
    __asm__("outsd ");
    if (cf9) {
        addr_804814d_39:
        __asm__("insb ");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x75) = 0;
        __asm__("insd ");
        *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x4e0a0014));
    } else {
        addr_8048143_42:
        goto addr_8048144_196;
    }
    addr_8048157_44:
    __asm__("outsd ");
    goto addr_804815d_34;
    addr_804838d_72:
    if (!zf52) {
        addr_80483fb_132:
        if (of54) {
            addr_8048471_111:
            __asm__("outsd ");
            if (below_or_equal55) {
                addr_80484d9_204:
                esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) * 0x6e);
                zf60 = __undefined();
                goto addr_80484df_205;
            } else {
                *reinterpret_cast<unsigned char*>(&ebx36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx36) | g68430a00);
                __asm__("popad ");
                __asm__("outsb ");
                __asm__("outsb ");
                __asm__("insb ");
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x75) = 0;
                __asm__("insd ");
                goto addr_8048487_207;
            }
        } else {
            addr_80483fd_65:
            if (sf53) {
                eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) & 0x6f540a00);
                __asm__("outsd ");
                *reinterpret_cast<unsigned char*>(ebp38 + 97) = 0;
                cf51 = 0;
                zf52 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(ebp38 + 97) == 0);
                sf53 = __intrinsic();
                of54 = 0;
            }
        }
    } else {
        addr_804838f_162:
        edi42->f63 = 0;
        goto addr_8048391_159;
    }
    __asm__("outsb ");
    if (!sf53) {
        addr_804842c_130:
        if (of54) {
            addr_8048493_210:
            *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | *reinterpret_cast<unsigned char*>(ebp38 + 0x76));
            goto addr_804849b_211;
        } else {
            if (cf51) {
                addr_8048491_129:
                __asm__("outsb ");
                *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<struct s15**>(&ebx36)) + reinterpret_cast<int16_t>(*reinterpret_cast<struct s16**>(&esi12))) + 26));
                goto addr_8048493_210;
            } else {
                if (zf52) {
                    addr_804849b_211:
                    __asm__("insb ");
                    *reinterpret_cast<struct s8**>(edx7) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) = 0;
                    if (!*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f)) {
                        addr_80484c5_106:
                        tmp8_70 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                        cf71 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_70) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)));
                        *reinterpret_cast<struct s8**>(edx7) = tmp8_70;
                        esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 1);
                        if (cf71 | reinterpret_cast<uint1_t>(esp2 == 0)) {
                            addr_8048530_214:
                            tmp8_72 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                            cf73 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_72) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)));
                            *reinterpret_cast<struct s8**>(edx7) = tmp8_72;
                            esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 1);
                            if (cf73 | reinterpret_cast<uint1_t>(esp2 == 0)) {
                                addr_804859c_215:
                                if (!cf73) {
                                    addr_8048618_216:
                                    __asm__("popad ");
                                    ebp38 = ecx->f62 * 0x900a656c;
                                    goto addr_8048622_217;
                                } else {
                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x6f) = 0;
                                    goto addr_80485a5_219;
                                }
                            } else {
                                __asm__("insb ");
                                goto addr_8048538_221;
                            }
                        } else {
                            __asm__("insb ");
                            *reinterpret_cast<struct s8**>(ebx36) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(ebx36)) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                            zf60 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) == 0;
                            if (1) {
                                addr_8048538_221:
                                *reinterpret_cast<struct s8**>(edx7) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 97) = 0;
                                __asm__("insb ");
                                if (!*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 97)) {
                                    addr_80485a5_219:
                                    *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(esi12)));
                                    goto addr_80485aa_223;
                                } else {
                                    *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)));
                                    tmp8_74 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                    cf75 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_74) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)));
                                    *reinterpret_cast<struct s8**>(edx7) = tmp8_74;
                                    ecx = reinterpret_cast<struct s7*>(reinterpret_cast<uint32_t>(ecx) - 1);
                                    __asm__("outsb ");
                                    if (cf75 | reinterpret_cast<uint1_t>(ecx == 0)) {
                                        addr_80485aa_223:
                                        tmp8_76 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                        cf77 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_76) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)));
                                        *reinterpret_cast<struct s8**>(edx7) = tmp8_76;
                                        ecx = reinterpret_cast<struct s7*>(reinterpret_cast<uint32_t>(ecx) - 1);
                                        __asm__("outsb ");
                                        if (cf77 | reinterpret_cast<uint1_t>(ecx == 0)) {
                                            addr_8048612_225:
                                            __asm__("popad ");
                                            ecx->f76 = 0;
                                            goto addr_8048618_216;
                                        } else {
                                            __asm__("insb ");
                                            esp78 = reinterpret_cast<struct s8**>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(eax4) + 0x73) * 0xa746f6c);
                                            ds56 = *esp78;
                                            tmp8_79 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                            cf80 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_79) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)));
                                            *reinterpret_cast<struct s8**>(edx7) = tmp8_79;
                                            zf81 = reinterpret_cast<uint1_t>(*reinterpret_cast<struct s8**>(edx7) == 0);
                                            below_or_equal82 = reinterpret_cast<uint1_t>(cf80 | zf81);
                                            esp2 = reinterpret_cast<struct s8*>(esp78 + 2 - 4);
                                            *reinterpret_cast<struct s8**>(esp2) = edx7;
                                            goto addr_80485be_227;
                                        }
                                    } else {
                                        __asm__("insb ");
                                        esp2 = reinterpret_cast<struct s8*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x65) * 0x61686378);
                                        goto addr_804854e_229;
                                    }
                                }
                            } else {
                                addr_80484d3_109:
                                if (zf60) {
                                    addr_80484df_205:
                                    if (!zf60) {
                                        addr_804854e_229:
                                        __asm__("outsb ");
                                        *reinterpret_cast<unsigned char*>(&ebx36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx36) | *reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s16**>(&esi12))->f0));
                                        tmp8_83 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                        cf80 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_83) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)));
                                        *reinterpret_cast<struct s8**>(edx7) = tmp8_83;
                                        ecx = reinterpret_cast<struct s7*>(reinterpret_cast<uint32_t>(ecx) - 1);
                                        zf81 = reinterpret_cast<uint1_t>(ecx == 0);
                                        below_or_equal82 = reinterpret_cast<uint1_t>(cf80 | zf81);
                                        __asm__("outsb ");
                                        if (below_or_equal82) {
                                            addr_80485be_227:
                                            if (!cf80) {
                                                goto addr_8048631_231;
                                            }
                                        } else {
                                            __asm__("insb ");
                                            esp2 = reinterpret_cast<struct s8*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x72) * 0x65757165);
                                            if (!__intrinsic()) {
                                                addr_80485dc_233:
                                                goto addr_80485dd_234;
                                            } else {
                                                addr_8048568_235:
                                                *reinterpret_cast<unsigned char*>(ebp38 + 0x73) = 0;
                                                zf84 = *reinterpret_cast<unsigned char*>(ebp38 + 0x73) == 0;
                                                goto addr_8048569_236;
                                            }
                                        }
                                    } else {
                                        edi42->f75 = 0;
                                        zf85 = reinterpret_cast<uint1_t>(edi42->f75 == 0);
                                        if (zf85) 
                                            goto addr_8048509_238;
                                        __asm__("outsd ");
                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 97) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                        __asm__("outsb ");
                                        *reinterpret_cast<unsigned char*>(&ebx36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx36) | ga00);
                                        zf84 = *reinterpret_cast<unsigned char*>(&ebx36) == 0;
                                        esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 4);
                                        *reinterpret_cast<struct s8**>(esp2) = eax4;
                                        if (0) {
                                            goto addr_8048568_235;
                                        }
                                        if (zf84) 
                                            goto addr_8048569_236; else 
                                            goto addr_80484fa_242;
                                    }
                                } else {
                                    eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax4) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)))));
                                    *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + ebp38 * 2 + 0x6e));
                                    goto addr_80484d9_204;
                                }
                            }
                        }
                    } else {
                        addr_80484a5_244:
                        if (1) 
                            goto addr_8048520_245; else 
                            goto addr_80484a7_246;
                    }
                } else {
                    __asm__("outsd ");
                    __asm__("outsb ");
                    edi42->f6f = reinterpret_cast<unsigned char>(edi42->f6f & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                    if (edi42->f6f) 
                        goto addr_80484a5_244;
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x6c) = 0;
                    cf51 = 0;
                    goto addr_804843b_118;
                }
            }
        }
    } else {
        if (!cf51) {
            addr_8048487_207:
            edi42->f75 = 0;
            zf52 = reinterpret_cast<uint1_t>(edi42->f75 == 0);
            goto addr_8048488_124;
        } else {
            __asm__("insd ");
            esp2 = reinterpret_cast<struct s8*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebx36) + 32) * 0x6b6e696c);
            cf51 = __intrinsic();
            zf52 = __undefined();
            goto addr_8048415_115;
        }
    }
    if (!zf81) {
        addr_8048635_252:
        if (!zf81) {
            addr_80486ae_253:
            __asm__("outsb ");
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x65) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
            cf86 = 0;
            zf87 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x65) == 0);
            sf88 = __intrinsic();
            of89 = 0;
            if (zf87) 
                goto addr_804871a_254;
        } else {
            edi42->f66 = 0;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x74) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x74) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
            cf80 = 0;
            zf81 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x74) == 0);
            below_or_equal82 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf81));
            goto addr_804863f_256;
        }
    } else {
        __asm__("arpl [ebp+0x20], sp");
        __asm__("popad ");
        __asm__("insb ");
        __asm__("outsd ");
        __asm__("arpl [ebx+0x20], bp");
        if (!below_or_equal82) {
            addr_8048640_258:
            if (cf80) {
                addr_80486a7_259:
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) = 0;
                goto addr_80486ad_260;
            } else {
                __asm__("popad ");
                __asm__("insd ");
                if (!cf80) {
                    addr_8048666_262:
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x65) = 0;
                    cf90 = 0;
                    zf91 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x65) == 0;
                    if (zf91) {
                        addr_80486e4_263:
                        __asm__("insd ");
                        __asm__("insd ");
                        if (!zf91) {
                            addr_8048757_264:
                            esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 4);
                            *reinterpret_cast<struct s8**>(esp2) = esi12;
                            __asm__("popad ");
                            __asm__("insb ");
                            if (!zf91) {
                                addr_80487c1_265:
                                __asm__("outsd ");
                                goto addr_80487c3_266;
                            } else {
                                *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi42) + ebp38 * 2 + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi42) + ebp38 * 2 + 0x6f) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                ecx->f72 = 0;
                                goto addr_8048764_268;
                            }
                        } else {
                            addr_80486e9_269:
                            esp2 = reinterpret_cast<struct s8*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 97) * 0x6e6f6974);
                            *reinterpret_cast<unsigned char*>(ebp38 + 0x72) = 0;
                            cf86 = 0;
                            zf87 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(ebp38 + 0x72) == 0);
                            sf88 = __intrinsic();
                            of89 = 0;
                            if (0) {
                                addr_8048764_268:
                                *reinterpret_cast<unsigned char*>(*reinterpret_cast<uint16_t*>(&ebp38) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(*reinterpret_cast<uint16_t*>(&ebp38) + 0x6f) & 0xff);
                                cf90 = 0;
                                goto addr_8048765_270;
                            } else {
                                if (0) {
                                    addr_8048717_272:
                                    __asm__("insb ");
                                    if (zf87) {
                                        addr_8048783_273:
                                        __asm__("insd ");
                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) = 0;
                                        cf86 = 0;
                                        zf87 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) == 0);
                                        sf88 = __intrinsic();
                                        of89 = 0;
                                        if (zf87) 
                                            goto addr_80487aa_274; else 
                                            goto addr_804878a_275;
                                    } else {
                                        addr_804871a_254:
                                        esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 4);
                                        *reinterpret_cast<struct s8**>(esp2) = reinterpret_cast<struct s8*>(0x6120706f);
                                        goto addr_804871c_276;
                                    }
                                } else {
                                    __asm__("outsd ");
                                    __asm__("outsb ");
                                    goto addr_80486f9_278;
                                }
                            }
                        }
                    } else {
                        addr_804866d_279:
                        __asm__("outsd ");
                        if (0) {
                            goto addr_80486dc_281;
                        }
                    }
                } else {
                    if (cf80) {
                        addr_80486ad_260:
                        goto addr_80486ae_253;
                    } else {
                        if (!cf80) 
                            goto addr_80486b9_284;
                        if (!zf81) 
                            goto addr_80486be_286; else 
                            goto addr_804864c_287;
                    }
                }
            }
        } else {
            if (!zf81) {
                addr_804863f_256:
                goto addr_8048640_258;
            } else {
                edi42->f63 = 0;
                __asm__("arpl [ebp+0x72], si");
                *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x420a0016));
                goto addr_80485dc_233;
            }
        }
    }
    if (0) 
        goto addr_804871c_276;
    *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x410a0011));
    cf80 = 0;
    below_or_equal82 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx7) == 0)));
    goto addr_80486b9_284;
    addr_804878a_275:
    if (!zf87) {
        addr_80487fa_292:
        if (0) {
            addr_804885e_293:
            if (zf87) {
                goto addr_80488d5_295;
            }
        } else {
            if (0) 
                goto addr_8048878_297;
            (&eax4)[1] = reinterpret_cast<struct s8*>(0xff);
            goto addr_8048801_299;
        }
    } else {
        addr_804878c_300:
        esi12 = reinterpret_cast<struct s8*>(ecx->f75 * 0x6e6f2065);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x65) = 0;
        cf86 = 0;
        zf87 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x65) == 0);
        sf88 = __intrinsic();
        of89 = 0;
        goto addr_8048795_301;
    }
    __asm__("outsd ");
    *reinterpret_cast<unsigned char*>(ebp38 + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp38 + 97) & 0xff);
    __asm__("outsb ");
    if (!__intrinsic()) {
        addr_804888c_303:
        __asm__("popad ");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x68) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x68) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
        cf86 = 0;
        zf87 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x68) == 0);
        of89 = 0;
        __asm__("popad ");
        if (0) {
            addr_80488f9_304:
            __asm__("insd ");
            if (!cf86) {
                addr_804891d_305:
                esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 4);
                *reinterpret_cast<struct s8**>(esp2) = ebx36;
                __asm__("outsd ");
                __asm__("arpl [ebx+0x65], bp");
                if (zf87) {
                    addr_8048944_306:
                    goto addr_8048946_307;
                } else {
                    __asm__("outsd ");
                    if (of89) {
                        addr_804898c_309:
                    } else {
                        if (cf86) {
                            goto addr_804898b_312;
                        }
                        if (zf87) 
                            goto addr_8048994_314; else 
                            goto addr_804892b_315;
                    }
                }
            } else {
                addr_80488fd_316:
                if (of89) {
                    addr_8048968_317:
                    __asm__("outsd ");
                    goto addr_804896a_318;
                } else {
                    if (of89) {
                        addr_8048966_320:
                        goto addr_8048968_317;
                    } else {
                        *reinterpret_cast<unsigned char*>(ebp38 + 0x72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp38 + 0x72) & 0xff);
                        cf86 = 0;
                        zf87 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(ebp38 + 0x72) == 0);
                        sf92 = __intrinsic();
                        of93 = 0;
                        if (0) {
                            goto addr_8048976_323;
                        }
                        if (!0) {
                            *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<unsigned char>(eax4))));
                            *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi42) + ebp38 * 2 + 0x6f));
                            *reinterpret_cast<unsigned char*>(ebp38 + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp38 + 97) & 0xff);
                            cf86 = 0;
                            zf87 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(ebp38 + 97) == 0);
                            sf92 = __intrinsic();
                            __asm__("outsb ");
                        }
                        if (!sf92) 
                            goto addr_8048934_327; else 
                            goto addr_8048914_328;
                    }
                }
            }
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + ebp38 * 2 + 98) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + ebp38 * 2 + 98) & 0xff);
            cf86 = 0;
            zf87 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx) + ebp38 * 2 + 98) == 0);
            of89 = 0;
            if (0) {
                goto addr_80488fd_316;
            } else {
                if (0) 
                    goto addr_8048916_332;
                *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + ebp38 * 2 + 0x72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + ebp38 * 2 + 0x72) & 0xff);
                goto addr_80488a0_334;
            }
        }
    } else {
        if (1) {
            addr_80488d6_336:
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 97) & 0xff);
            goto addr_80488d9_337;
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + ebp38 * 2 + 98) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + ebp38 * 2 + 98) & 0xff);
            cf86 = 0;
            zf87 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx) + ebp38 * 2 + 98) == 0);
            sf88 = __intrinsic();
            of89 = 0;
            if (0) {
                addr_80488d9_337:
                __asm__("insb ");
                __asm__("insb ");
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x68) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x68) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                __asm__("outsd ");
                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x68)) {
                    goto addr_8048950_340;
                } else {
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) & 0xff);
                    goto addr_80488e3_342;
                }
            } else {
                addr_8048878_297:
                if (0) {
                    addr_80488e3_342:
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                    cf86 = 0;
                    zf94 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) == 0;
                    sf95 = __intrinsic();
                    of93 = 0;
                    if (1) {
                        addr_804895f_343:
                        if (1) {
                            addr_80489d6_344:
                            if (zf94) {
                                addr_80489f9_345:
                                __asm__("outsd ");
                                if (0) {
                                    addr_8048a70_346:
                                    if (0) {
                                        addr_8048ad8_347:
                                        if (cf86) {
                                            addr_8048b45_348:
                                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x75) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x75) & 0xff);
                                            cf86 = 0;
                                            zf96 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x75) == 0);
                                            below_or_equal97 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf96));
                                            if (0) {
                                                addr_8048b6d_349:
                                                if (0) 
                                                    goto addr_8048bdf_350; else 
                                                    goto addr_8048b70_351;
                                            } else {
                                                addr_8048b4d_352:
                                                if (!cf86) {
                                                    addr_8048bbf_353:
                                                    ecx->f66 = reinterpret_cast<unsigned char>(ecx->f66 & 0xff);
                                                    cf86 = 0;
                                                    zf96 = reinterpret_cast<uint1_t>(ecx->f66 == 0);
                                                    if (zf96) {
                                                        addr_8048c2a_354:
                                                        goto addr_8048c2c_355;
                                                    } else {
                                                        if (0) {
                                                            addr_8048be7_357:
                                                            __asm__("outsd ");
                                                            __asm__("outsd ");
                                                            *reinterpret_cast<unsigned char*>(ebp38 + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp38 + 97) & 0xff);
                                                            __asm__("outsb ");
                                                            if (!__intrinsic()) {
                                                                addr_8048c10_358:
                                                                __asm__("outsb ");
                                                                __asm__("arpl [gs:ecx+ebp*2+0x6f], si");
                                                                __asm__("outsb ");
                                                                *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + ebp38 * 2 + 0x6d) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + ebp38 * 2 + 0x6d) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                                                edi42->f75 = reinterpret_cast<unsigned char>(edi42->f75 & 0xff);
                                                                if (!edi42->f75) {
                                                                    addr_8048c2c_355:
                                                                    __asm__("outsb ");
                                                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                                                    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65)) {
                                                                        addr_8048ca8_359:
                                                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x69) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x69) & 0xff);
                                                                        __asm__("insb ");
                                                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 97) & 0xff);
                                                                        goto addr_8048caf_360;
                                                                    } else {
                                                                        *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(esi12)));
                                                                        tmp8_98 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                                                        cf86 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_98) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)));
                                                                        *reinterpret_cast<struct s8**>(edx7) = tmp8_98;
                                                                        goto addr_8048c3b_362;
                                                                    }
                                                                } else {
                                                                    eax4 = eax4;
                                                                    goto addr_8048c23_364;
                                                                }
                                                            } else {
                                                                if (0) {
                                                                    addr_8048c57_366:
                                                                    esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 4);
                                                                    *reinterpret_cast<struct s8**>(esp2) = reinterpret_cast<struct s8*>(0xa74736f);
                                                                    goto addr_8048c5b_367;
                                                                } else {
                                                                    addr_8048bf2_368:
                                                                    if (0) {
                                                                        addr_8048c5b_367:
                                                                        esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) + 2);
                                                                        tmp8_99 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                                                        cf100 = reinterpret_cast<unsigned char>(tmp8_99) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7));
                                                                        *reinterpret_cast<struct s8**>(edx7) = tmp8_99;
                                                                        edi42 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(edi42) - 1);
                                                                        if (__intrinsic()) {
                                                                            addr_8048cc7_369:
                                                                            goto addr_8048cc9_370;
                                                                        } else {
                                                                            if (cf100) {
                                                                                addr_8048cc5_372:
                                                                                if (!cf100) {
                                                                                    addr_8048ce9_373:
                                                                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x69) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x69) & 0xff);
                                                                                    __asm__("insb ");
                                                                                    goto addr_8048cef_374;
                                                                                } else {
                                                                                    addr_8048cc9_370:
                                                                                    __asm__("arpl [ebp+0x61], bp");
                                                                                    __asm__("outsb ");
                                                                                    ebp38 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi12) + 0x67) * 0xa001d0a;
                                                                                    goto addr_8048ccf_375;
                                                                                }
                                                                            } else {
                                                                                if (!edi42) {
                                                                                    addr_8048ccf_375:
                                                                                    goto addr_8048cd2_377;
                                                                                } else {
                                                                                    __asm__("outsd ");
                                                                                    __asm__("outsb ");
                                                                                    ecx->f6c = reinterpret_cast<unsigned char>(ecx->f6c & 0xff);
                                                                                    cf100 = 0;
                                                                                    if (0) {
                                                                                        addr_8048cd2_377:
                                                                                        esi12 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esi12) - 1);
                                                                                        __asm__("outsd ");
                                                                                        if (!esi12) {
                                                                                            addr_8048cf9_379:
                                                                                            esi12 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esi12) - 1);
                                                                                            ecx = reinterpret_cast<struct s7*>(reinterpret_cast<uint32_t>(ecx) - 1);
                                                                                            eax4 = *reinterpret_cast<struct s8**>(esp2);
                                                                                            esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) + 4);
                                                                                            goto addr_8048cfd_380;
                                                                                        } else {
                                                                                            __asm__("popad ");
                                                                                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 69) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 69) & *reinterpret_cast<unsigned char*>(&ebx36));
                                                                                            esi12 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esi12) - 1);
                                                                                            ecx = reinterpret_cast<struct s7*>(reinterpret_cast<uint32_t>(ecx) - 1);
                                                                                            goto addr_8048cdf_382;
                                                                                        }
                                                                                    } else {
                                                                                        __asm__("popad ");
                                                                                        if (!__intrinsic()) {
                                                                                            addr_8048c91_384:
                                                                                            if (cf100) {
                                                                                                addr_8048cfd_380:
                                                                                                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x65) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                                                                                below_or_equal101 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x65) == 0)));
                                                                                                __asm__("insd ");
                                                                                                __asm__("popad ");
                                                                                                if (0) 
                                                                                                    goto addr_8048d6c_385; else 
                                                                                                    goto addr_8048d04_386;
                                                                                            } else {
                                                                                                if (!cf100) {
                                                                                                    addr_8048d0d_388:
                                                                                                    esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 2);
                                                                                                    *reinterpret_cast<struct s8**>(esp2) = ss102;
                                                                                                    tmp8_103 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                                                                                    cf104 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_103) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)));
                                                                                                    *reinterpret_cast<struct s8**>(edx7) = tmp8_103;
                                                                                                    ecx = reinterpret_cast<struct s7*>(reinterpret_cast<uint32_t>(ecx) - 1);
                                                                                                    if (!cf104) {
                                                                                                        addr_8048d3a_389:
                                                                                                        if (cf104) {
                                                                                                            addr_8048dad_390:
                                                                                                            goto addr_8048daf_391;
                                                                                                        } else {
                                                                                                            if (cf104) {
                                                                                                                addr_8048d4a_393:
                                                                                                                __asm__("arpl [ebp+0x65], sp");
                                                                                                                *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | ecx->f0);
                                                                                                                *reinterpret_cast<struct s8**>(edx7) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                                                                                                __asm__("outsd ");
                                                                                                                *reinterpret_cast<unsigned char*>(ebp38 + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp38 + 0x65) & 0xff);
                                                                                                                __asm__("outsb ");
                                                                                                                *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x570a0013));
                                                                                                                if (0) {
                                                                                                                    esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 4);
                                                                                                                    *reinterpret_cast<struct s8**>(esp2) = reinterpret_cast<struct s8*>(*reinterpret_cast<int32_t*>(ebp38 + 0x6d) * 0x756f6620);
                                                                                                                    goto addr_8048dfc_395;
                                                                                                                }
                                                                                                            } else {
                                                                                                                *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<unsigned char>(eax4)) + cf104);
                                                                                                                *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | ecx->f75);
                                                                                                                __asm__("outsd ");
                                                                                                                if (!*reinterpret_cast<unsigned char*>(&edx7)) {
                                                                                                                    goto addr_8048dad_390;
                                                                                                                } else {
                                                                                                                    *reinterpret_cast<unsigned char*>(ebp38 + 0x78) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp38 + 0x78) & 0xff);
                                                                                                                    goto addr_8048d4a_393;
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        __asm__("popad ");
                                                                                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 97) = 0;
                                                                                                        __asm__("insd ");
                                                                                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<uint32_t>(edi42) * 2 + 0x70) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<uint32_t>(edi42) * 2 + 0x70) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                                                                                        goto addr_8048d21_400;
                                                                                                    }
                                                                                                } else {
                                                                                                    *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x530a0017));
                                                                                                    zf105 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx7) == 0);
                                                                                                    below_or_equal101 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf105));
                                                                                                    if (zf105) {
                                                                                                        goto addr_8048d04_386;
                                                                                                    } else {
                                                                                                        __asm__("insb ");
                                                                                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 70) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 70) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                                                                                        esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 4);
                                                                                                        *reinterpret_cast<struct s8**>(esp2) = ebx36;
                                                                                                        goto addr_8048ca8_359;
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            ebp38 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi12) + 32) * 0x676f7270;
                                                                                            cf86 = __intrinsic();
                                                                                            goto addr_8048c75_405;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        __asm__("outsb ");
                                                                        __asm__("arpl [ebp+0x73], sp");
                                                                        cf86 = reinterpret_cast<uint1_t>(0xff < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)));
                                                                        __asm__("arpl [ecx+0x6e], sp");
                                                                        __asm__("outsb ");
                                                                        __asm__("outsd ");
                                                                        if (0xff == *reinterpret_cast<struct s8**>(eax4)) {
                                                                            addr_8048c23_364:
                                                                            eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x6f));
                                                                            __asm__("outsb ");
                                                                            __asm__("outsb ");
                                                                            __asm__("arpl [gs:ecx+ebp*2+0x6f], si");
                                                                            goto addr_8048c2a_354;
                                                                        } else {
                                                                            addr_8048c03_407:
                                                                            if (!cf86) {
                                                                                addr_8048c75_405:
                                                                                if (cf86) {
                                                                                    addr_8048cdf_382:
                                                                                    eax4 = *reinterpret_cast<struct s8**>(esp2);
                                                                                    esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) + 4);
                                                                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 97) & 0xff);
                                                                                    __asm__("insd ");
                                                                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<uint32_t>(edi42) * 2 + 0x70) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<uint32_t>(edi42) * 2 + 0x70) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                                                                    goto addr_8048ce7_408;
                                                                                } else {
                                                                                    if (!cf86) {
                                                                                        addr_8048cef_374:
                                                                                        *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x4e0a001f));
                                                                                        goto addr_8048cf1_410;
                                                                                    } else {
                                                                                        *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x4f0a001b));
                                                                                        if (0) 
                                                                                            goto addr_8048ce9_373;
                                                                                        if (0) 
                                                                                            goto addr_8048ce7_408; else 
                                                                                            goto addr_8048c86_413;
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                __asm__("insb ");
                                                                                esp2 = reinterpret_cast<struct s8*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x65) * 0xa00160a);
                                                                                goto addr_8048c0a_415;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            addr_8048bc7_416:
                                                            if (zf96) {
                                                                addr_8048c3b_362:
                                                                eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) - 1);
                                                                __asm__("outsd ");
                                                                goto addr_8048c3d_417;
                                                            } else {
                                                                __asm__("popad ");
                                                                __asm__("outsb ");
                                                                if (!cf86) {
                                                                    addr_8048c3d_417:
                                                                    if (!cf86) {
                                                                        addr_8048cb3_419:
                                                                        *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x530a001a));
                                                                        zf106 = *reinterpret_cast<unsigned char*>(&edx7) == 0;
                                                                        if (zf106) {
                                                                            addr_8048d2e_420:
                                                                            esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 4);
                                                                            *reinterpret_cast<struct s8**>(esp2) = edx7;
                                                                            __asm__("insd ");
                                                                            __asm__("outsd ");
                                                                            if (zf106) {
                                                                                addr_8048d9a_421:
                                                                                *reinterpret_cast<struct s8**>(reinterpret_cast<unsigned char>(esp2) - 4) = reinterpret_cast<struct s8*>(0x9cf386f3);
                                                                            } else {
                                                                                addr_8048d35_422:
                                                                                ecx->f2f = reinterpret_cast<unsigned char>(ecx->f2f & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                                                                edi42 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(edi42) - 1);
                                                                                *reinterpret_cast<unsigned char*>(ebp38 + 0x72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp38 + 0x72) & 0xff);
                                                                                cf104 = 0;
                                                                                goto addr_8048d3a_389;
                                                                            }
                                                                        } else {
                                                                            if (!zf106) {
                                                                                addr_8048d21_400:
                                                                                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x69) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x69) & 0xff);
                                                                                goto addr_8048d27_424;
                                                                            } else {
                                                                                if (zf106) 
                                                                                    goto addr_8048d35_422;
                                                                                if (0) 
                                                                                    goto addr_8048d27_424; else 
                                                                                    goto addr_8048cc2_427;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        ecx->f73 = reinterpret_cast<unsigned char>(ecx->f73 & 0xff);
                                                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi42) + ebp38 * 2 + 0x77) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi42) + ebp38 * 2 + 0x77) & 0xff);
                                                                        goto addr_8048c43_429;
                                                                    }
                                                                } else {
                                                                    __asm__("outsd ");
                                                                    if (cf86) {
                                                                        addr_8048c44_431:
                                                                        goto addr_8048c45_432;
                                                                    } else {
                                                                        *reinterpret_cast<unsigned char*>(ebp38 + 0x6e) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp38 + 0x6e) & 0xff);
                                                                        if (0) {
                                                                            addr_8048c45_432:
                                                                            __asm__("outsb ");
                                                                            *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)));
                                                                            *reinterpret_cast<struct s8**>(edx7) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                                                            esi12 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esi12) - 1);
                                                                            __asm__("outsd ");
                                                                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x6f) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                                                            zf96 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x6f) == 0);
                                                                            goto addr_8048c50_434;
                                                                        } else {
                                                                            ebp38 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x74) * 0x75687320;
                                                                            zf96 = __undefined();
                                                                            below_or_equal97 = reinterpret_cast<uint1_t>(__intrinsic() | zf96);
                                                                            goto addr_8048bd7_436;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    addr_8048b4f_437:
                                                    __asm__("popad ");
                                                    goto addr_8048b50_438;
                                                }
                                            }
                                        } else {
                                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + reinterpret_cast<unsigned char>(esi12) * 2 + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + reinterpret_cast<unsigned char>(esi12) * 2 + 0x6f) & 0xff);
                                            cf86 = 0;
                                            zf96 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edx7) + reinterpret_cast<unsigned char>(esi12) * 2 + 0x6f) == 0);
                                            below_or_equal97 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf96));
                                            if (0) {
                                                addr_8048b50_438:
                                                __asm__("arpl [ebp+0x20], sp");
                                                __asm__("popad ");
                                                if (below_or_equal97) {
                                                    addr_8048bb7_440:
                                                    __asm__("outsb ");
                                                    __asm__("outsb ");
                                                    __asm__("outsd ");
                                                    if (zf96) {
                                                        addr_8048bdc_441:
                                                        if (zf96) {
                                                            addr_8048c43_429:
                                                            goto addr_8048c44_431;
                                                        } else {
                                                            addr_8048bdf_350:
                                                            __asm__("outsd ");
                                                            goto addr_8048be0_442;
                                                        }
                                                    } else {
                                                        if (!cf86) 
                                                            goto addr_8048c23_364;
                                                        __asm__("outsb ");
                                                        goto addr_8048bbf_353;
                                                    }
                                                } else {
                                                    ebp38 = ecx->f62 * 0x900a656c;
                                                    goto addr_8048b58_446;
                                                }
                                            } else {
                                                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x6f) & 0xff);
                                                goto addr_8048ae1_448;
                                            }
                                        }
                                    } else {
                                        __asm__("popad ");
                                        if (!sf95) {
                                            addr_8048a97_450:
                                            if (0) {
                                                addr_8048b03_451:
                                                if (zf94) 
                                                    goto addr_8048b7f_452; else 
                                                    goto addr_8048b08_453;
                                            } else {
                                                if (1) {
                                                    addr_8048b13_455:
                                                    __asm__("outsb ");
                                                    __asm__("outsb ");
                                                    goto addr_8048b17_456;
                                                } else {
                                                    *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x4e0a0011));
                                                    cf86 = 0;
                                                    zf96 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx7) == 0);
                                                    of93 = 0;
                                                    goto addr_8048aa1_458;
                                                }
                                            }
                                        } else {
                                            ebp38 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi12) + 32) * 0xa657375;
                                            goto addr_8048a78_460;
                                        }
                                    }
                                } else {
                                    addr_80489fc_461:
                                    edi42->f6e = reinterpret_cast<unsigned char>(edi42->f6e & 0xff);
                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + reinterpret_cast<unsigned char>(esi12) * 2 + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + reinterpret_cast<unsigned char>(esi12) * 2 + 97) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                    __asm__("outsb ");
                                    goto addr_8048a06_462;
                                }
                            } else {
                                if (1) 
                                    goto addr_8048a50_464;
                                if (0) 
                                    goto addr_8048a4d_466; else 
                                    goto addr_80489dd_467;
                            }
                        } else {
                            addr_8048963_468:
                            __asm__("popad ");
                            *reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s16**>(&esi12))->f6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s16**>(&esi12))->f6f) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                            goto addr_8048966_320;
                        }
                    } else {
                        __asm__("popad ");
                        if (0) {
                            goto addr_8048963_468;
                        } else {
                            *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x530a0014));
                            cf86 = 0;
                            zf87 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx7) == 0);
                            of89 = 0;
                            goto addr_80488f0_472;
                        }
                    }
                } else {
                    if (1) {
                        goto addr_8048888_475;
                    }
                }
            }
        }
    }
    addr_804898d_476:
    __asm__("arpl [ebx+0x65], bp");
    if (zf87) {
        addr_804899c_477:
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) & 0xff);
        zf107 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) == 0);
        if (!zf107) {
            __asm__("popad ");
            if (zf107) {
                addr_8048a06_462:
                if (1) {
                    addr_8048a78_460:
                    *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) & reinterpret_cast<unsigned char>(eax4));
                    goto addr_8048a7f_480;
                } else {
                    __asm__("outsd ");
                    goto addr_8048a09_482;
                }
            } else {
                ebp38 = ecx->f62 * 0x180a656c;
                goto addr_80489ab_484;
            }
        }
    } else {
        *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax4) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax4) + cf86))));
        goto addr_8048994_314;
    }
    addr_80489c3_486:
    *reinterpret_cast<unsigned char*>(&ebx36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx36) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(ebx36)));
    goto addr_80489c5_487;
    addr_8048994_314:
    *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x72));
    __asm__("outsd ");
    if (!*reinterpret_cast<unsigned char*>(&edx7)) {
        addr_8048a09_482:
        if (0) {
            addr_8048a7f_480:
            goto addr_8048a80_488;
        } else {
            *reinterpret_cast<unsigned char*>(ebp38 + 0x6e) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp38 + 0x6e) & 0xff);
            if (0) {
                addr_8048a80_488:
                eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 97));
                cf86 = 0;
                __asm__("outsb ");
                __asm__("outsb ");
                __asm__("outsd ");
                if (!eax4) {
                    addr_8048aa8_490:
                    goto addr_8048aa9_491;
                } else {
                    __asm__("popad ");
                    if (1) {
                        goto addr_8048aff_494;
                    } else {
                        esp2 = reinterpret_cast<struct s8*>(edi42->f6e * 0x71657220);
                        cf86 = __intrinsic();
                        zf96 = __undefined();
                        below_or_equal97 = reinterpret_cast<uint1_t>(cf86 | zf96);
                        goto addr_8048a8d_496;
                    }
                }
            } else {
                ebp38 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x74) * 0x1f900a;
                goto addr_8048a15_498;
            }
        }
    } else {
        __asm__("arpl [edi+0x6c], bp");
        goto addr_804899c_477;
    }
    addr_804892b_315:
    __asm__("outsd ");
    __asm__("outsb ");
    edi42->f6e = reinterpret_cast<unsigned char>(edi42->f6e & 0xff);
    goto addr_804892e_500;
    addr_8048914_328:
    if (!zf87) {
        addr_8048989_501:
        if (0) {
            addr_80489ab_484:
            tmp8_108 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
            cf109 = reinterpret_cast<unsigned char>(tmp8_108) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7));
            *reinterpret_cast<struct s8**>(edx7) = tmp8_108;
            zf110 = *reinterpret_cast<struct s8**>(edx7) == 0;
            esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 4);
            *reinterpret_cast<struct s8**>(esp2) = eax4;
            if (cf109) {
                addr_8048a21_502:
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 97) & 0xff);
                goto addr_8048a23_503;
            } else {
                if (zf110) {
                    addr_8048a23_503:
                    __asm__("insd ");
                    ebp38 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<uint32_t>(edi42) * 2 + 32) * 0x20746f6e;
                    cf86 = __intrinsic();
                    of93 = __intrinsic();
                    zf96 = __undefined();
                    if (!cf86) {
                        addr_8048aa4_505:
                        goto addr_8048aa5_506;
                    } else {
                        if (of93) {
                            addr_8048aa1_458:
                            goto addr_8048aa4_505;
                        } else {
                            addr_8048a31_508:
                            __asm__("outsd ");
                            if (cf86) 
                                goto addr_8048aa8_490;
                        }
                    }
                } else {
                    __asm__("arpl [edi+0x6c], bp");
                    goto addr_80489b5_510;
                }
            }
        } else {
            addr_804898b_312:
            if (!cf86) 
                goto addr_80489fc_461; else 
                goto addr_804898d_476;
        }
    } else {
        addr_8048916_332:
        if (0) 
            goto addr_804898c_309; else 
            goto addr_8048919_511;
    }
    addr_8048a34_512:
    *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x410a002a));
    cf86 = 0;
    zf96 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx7) == 0);
    of93 = 0;
    below_or_equal97 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf96));
    addr_8048a37_513:
    goto addr_8048a39_514;
    addr_8048919_511:
    (&eax4)[1] = reinterpret_cast<struct s8*>(0xff);
    tmp8_111 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    cf86 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_111) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)));
    *reinterpret_cast<struct s8**>(edx7) = tmp8_111;
    zf87 = reinterpret_cast<uint1_t>(*reinterpret_cast<struct s8**>(edx7) == 0);
    of89 = __intrinsic();
    goto addr_804891c_515;
    addr_8048d04_386:
    __asm__("outsd ");
    if (0) {
        addr_8048d6c_385:
        __asm__("outsb ");
        goto addr_8048d6d_516;
    } else {
        if (1) {
            addr_8048d29_518:
            __asm__("insb ");
            *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)));
            *reinterpret_cast<struct s8**>(edx7) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
            zf106 = *reinterpret_cast<struct s8**>(edx7) == 0;
            goto addr_8048d2e_420;
        } else {
            __asm__("popad ");
            if (below_or_equal101) {
                addr_8048d6d_516:
                *reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s14**>(&edi42))->f65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s14**>(&edi42))->f65) & 0xff);
                esi112 = *reinterpret_cast<int32_t*>(ebp38 + 0x6d) * 0x70797420;
                *reinterpret_cast<unsigned char*>(ebp38 + 0x6e) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp38 + 0x6e) & reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x3a0a0011)));
                ebp113 = *reinterpret_cast<int32_t*>(esi112 + 0x6f) * 0x77;
                __asm__("outsb ");
                *reinterpret_cast<unsigned char*>(ebp113 + 0x72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp113 + 0x72) & reinterpret_cast<unsigned char>(eax4));
                if (0) {
                    addr_8048dfc_395:
                } else {
                    if (!0) {
                        esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) + 4);
                    }
                    goto addr_8048d9a_421;
                }
            } else {
                ebp38 = ecx->f62 * 0x900a656c;
                goto addr_8048d0d_388;
            }
        }
    }
    addr_8048daf_391:
    __asm__("hlt ");
    addr_8048ce7_408:
    goto addr_8048ce9_373;
    addr_8048c86_413:
    if (!*reinterpret_cast<unsigned char*>(&edx7)) {
        addr_8048cf1_410:
        __asm__("outsd ");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 69) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 69) & *reinterpret_cast<unsigned char*>(&ebx36));
        goto addr_8048cf9_379;
    } else {
        __asm__("outsd ");
        __asm__("outsb ");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) & 0xff);
        if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) == 0)))) {
            addr_8048caf_360:
            __asm__("outsb ");
            __asm__("insb ");
            goto addr_8048cb3_419;
        } else {
            ebp38 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi12) + 32) * 0x676f7270;
            cf100 = __intrinsic();
            goto addr_8048c91_384;
        }
    }
    addr_8048c0a_415:
    goto addr_8048c0b_527;
    addr_8048d27_424:
    goto addr_8048d29_518;
    addr_8048cc2_427:
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x65) & 0xff);
    cf100 = 0;
    goto addr_8048cc5_372;
    addr_8048b08_453:
    __asm__("popad ");
    goto addr_8048b09_528;
    addr_80489dd_467:
    __asm__("outsd ");
    if (0) {
        goto addr_8048a55_530;
    } else {
        *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x4f0a002f));
        cf86 = 0;
        zf87 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx7) == 0);
        of93 = 0;
        goto addr_80489e5_532;
    }
    addr_804887d_533:
    __asm__("daa ");
    tmp8_114 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    cf86 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_114) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)));
    *reinterpret_cast<struct s8**>(edx7) = tmp8_114;
    ebx36 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(ebx36) + 1);
    zf87 = reinterpret_cast<uint1_t>(ebx36 == 0);
    sf88 = reinterpret_cast<signed char>(ebx36) < reinterpret_cast<signed char>(0);
    of89 = __intrinsic();
    __asm__("popad ");
    goto addr_8048883_534;
    *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x500a0017));
    __asm__("popad ");
    __asm__("arpl [ebx+0x61], bp");
    *reinterpret_cast<unsigned char*>(*reinterpret_cast<uint16_t*>(&ebp38) + 0x6f) = 0;
    if (!*reinterpret_cast<unsigned char*>(*reinterpret_cast<uint16_t*>(&ebp38) + 0x6f)) {
        addr_80486a1_536:
        *reinterpret_cast<struct s8**>(edx7) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
        esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 1);
        ebp38 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi12) + 0x6b) * 0x73616820;
        goto addr_80486a7_259;
    } else {
        ebp38 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi12) + 0x73) * 0x6c6c6174;
        goto addr_8048682_538;
    }
    addr_80486be_286:
    if (below_or_equal82) {
        addr_8048726_539:
        *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 70));
        *reinterpret_cast<struct s8**>(reinterpret_cast<unsigned char>(esp2) - 4) = ebx36;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x70) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x70) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
        __asm__("arpl [gs:ecx+0x66], bp");
        esp2 = reinterpret_cast<struct s8*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebx36) + 32) * 0x6f727265);
        cf80 = __intrinsic();
        goto addr_8048737_540;
    } else {
        if (cf80) {
            addr_8048737_540:
            if (cf80) {
                addr_8048748_542:
                __asm__("popad ");
                *reinterpret_cast<unsigned char*>(ebp38 + 0x65) = 0;
                cf90 = 0;
                zf91 = *reinterpret_cast<unsigned char*>(ebp38 + 0x65) == 0;
                goto addr_804874e_543;
            } else {
                eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) + cf80);
                *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f));
                cf90 = 0;
                zf91 = *reinterpret_cast<void**>(&ecx) == 0;
                goto addr_8048741_545;
            }
        } else {
            esi12 = reinterpret_cast<struct s8*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x65) * 0x72726520);
            cf90 = __intrinsic();
            zf91 = __undefined();
            __asm__("outsd ");
            if (!cf90) {
                __asm__("str dword [edx]");
                esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 4);
                *reinterpret_cast<struct s8**>(esp2) = ebx36;
                if (cf90) {
                    addr_8048741_545:
                    if (zf91) {
                        addr_8048765_270:
                        if (cf90) {
                            goto addr_804878c_300;
                        } else {
                            *reinterpret_cast<uint16_t*>(&ebp38) = reinterpret_cast<uint16_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x65) * 0x2064);
                            zf115 = __undefined();
                            __asm__("popad ");
                            goto addr_8048775_550;
                        }
                    } else {
                        addr_8048745_551:
                        __asm__("popad ");
                        ecx->f74 = 0;
                        goto addr_8048748_542;
                    }
                } else {
                    __asm__("outsd ");
                    if (!zf91) 
                        goto addr_8048745_551;
                }
            }
            if (zf91) {
                addr_80486f9_278:
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x65) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                __asm__("outsb ");
                *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x500a0010));
                cf80 = 0;
                zf115 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx7) == 0);
                goto addr_8048700_554;
            } else {
                if (cf90) {
                    addr_804874e_543:
                    if (!cf90) {
                        addr_80487c3_266:
                        if (zf91) {
                            addr_804882a_556:
                            __asm__("insb ");
                            goto addr_804882c_557;
                        } else {
                            ecx->f64 = reinterpret_cast<unsigned char>(ecx->f64 & 0xff);
                            zf116 = ecx->f64 == 0;
                            if (0) {
                                addr_8048830_559:
                                ebp38 = edi42->f6e * 0x206e6920;
                                cf86 = __intrinsic();
                                of89 = __intrinsic();
                                zf87 = __undefined();
                                __asm__("popad ");
                                __asm__("outsd ");
                                if (!zf87) {
                                    addr_80488b3_560:
                                    if (zf87) {
                                        addr_804891c_515:
                                        goto addr_804891d_305;
                                    } else {
                                        addr_80488b7_561:
                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x65) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                        if (1) {
                                            addr_8048931_562:
                                            __asm__("outsb ");
                                            goto addr_8048934_327;
                                        } else {
                                            __asm__("outsb ");
                                            __asm__("arpl [ebp+0xa], sp");
                                            cf117 = reinterpret_cast<unsigned char>(eax4) < reinterpret_cast<unsigned char>(0x6e490a00);
                                            eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) - 0x6e490a00);
                                            zf118 = eax4 == 0;
                                            goto addr_80488c4_564;
                                        }
                                    }
                                } else {
                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x6f) & 0xff);
                                    zf116 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x6f) == 0;
                                    goto addr_8048840_566;
                                }
                            } else {
                                if (1) {
                                    addr_8048840_566:
                                    if (static_cast<int1_t>(!zf116)) {
                                        goto addr_80488b7_561;
                                    }
                                } else {
                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x68) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x68) & 0xff);
                                    goto addr_80487cf_570;
                                }
                            }
                        }
                    } else {
                        __asm__("popad ");
                        (&eax4)[1] = reinterpret_cast<struct s8*>(0xff);
                        *reinterpret_cast<struct s8**>(edx7) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                        zf91 = *reinterpret_cast<struct s8**>(edx7) == 0;
                        goto addr_8048757_264;
                    }
                } else {
                    addr_80486dc_281:
                    __asm__("outsd ");
                    if (cf90) 
                        goto addr_80486e9_269; else 
                        goto addr_80486df_572;
                }
            }
        }
    }
    if (zf116) {
        addr_80488ad_574:
        __asm__("insb ");
        __asm__("a16 popad ");
        __asm__("insb ");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x79) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x79) & 0xff);
        cf86 = 0;
        zf87 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x79) == 0);
        of89 = 0;
        goto addr_80488b3_560;
    } else {
        *reinterpret_cast<unsigned char*>(&edx7 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7 + 1) | ecx->f0);
        tmp8_119 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
        cf117 = reinterpret_cast<unsigned char>(tmp8_119) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7));
        *reinterpret_cast<struct s8**>(edx7) = tmp8_119;
        ecx = reinterpret_cast<struct s7*>(&ecx->pad32);
        zf118 = ecx == 0;
        if (zf118) {
            addr_80488c4_564:
            if (zf118) {
                addr_804892e_500:
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) & 0xff);
                goto addr_8048931_562;
            } else {
                addr_80488c9_576:
                if (cf117 || !zf118) {
                    addr_804893d_577:
                    tmp8_120 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                    cf121 = reinterpret_cast<unsigned char>(tmp8_120) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7));
                    *reinterpret_cast<struct s8**>(edx7) = tmp8_120;
                    esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) + 1);
                    if (!cf121) {
                        addr_80489b7_578:
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) & 0xff);
                        cf86 = 0;
                        zf96 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) == 0);
                        of93 = 0;
                        below_or_equal97 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf96));
                        if (zf96) {
                            goto addr_80489dd_467;
                        } else {
                            if (1) {
                                goto addr_8048a34_512;
                            } else {
                                if (0) {
                                    goto addr_8048a31_508;
                                }
                                __asm__("outsd ");
                                if (0) 
                                    goto addr_8048a37_513; else 
                                    goto addr_80489c3_486;
                            }
                        }
                    } else {
                        ebp38 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 97) * 0x6e6f6974;
                        goto addr_8048944_306;
                    }
                } else {
                    if (zf118) {
                        addr_8048934_327:
                        eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) - 0x6b636f73);
                        if (!eax4) {
                            addr_8048946_307:
                            goto addr_8048949_587;
                        } else {
                            esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 2);
                            *reinterpret_cast<struct s8**>(esp2) = ds56;
                            goto addr_804893d_577;
                        }
                    } else {
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x79) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x79) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                        if (1) {
                            addr_8048949_587:
                            ecx->f64 = reinterpret_cast<unsigned char>(ecx->f64 & 0xff);
                            if (0) {
                                addr_80489b5_510:
                                goto addr_80489b7_578;
                            } else {
                                addr_8048950_340:
                                if (1) {
                                    addr_80489c5_487:
                                    tmp8_122 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                    cf86 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_122) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)));
                                    *reinterpret_cast<struct s8**>(edx7) = tmp8_122;
                                    zf96 = reinterpret_cast<uint1_t>(*reinterpret_cast<struct s8**>(edx7) == 0);
                                    of93 = __intrinsic();
                                    below_or_equal97 = reinterpret_cast<uint1_t>(cf86 | zf96);
                                    esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 4);
                                    *reinterpret_cast<struct s8**>(esp2) = ebx36;
                                    __asm__("outsd ");
                                    __asm__("arpl [ebx+0x65], bp");
                                    goto addr_80489cc_590;
                                } else {
                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                    cf86 = 0;
                                    zf96 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) == 0);
                                    of93 = 0;
                                    below_or_equal97 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf96));
                                    if (1) {
                                        addr_80489cc_590:
                                        if (zf96) {
                                            addr_80489f0_592:
                                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) & 0xff);
                                            cf86 = 0;
                                            zf94 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) == 0;
                                            sf95 = __intrinsic();
                                            if (zf94) {
                                                addr_8048a15_498:
                                                *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x72));
                                                cf86 = 0;
                                                zf96 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx7) == 0);
                                                below_or_equal97 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf96));
                                                __asm__("outsd ");
                                                if (zf96) {
                                                    addr_8048a8d_496:
                                                    if (!zf96) {
                                                        addr_8048af9_593:
                                                        if (!cf86) {
                                                            addr_8048b62_594:
                                                            __asm__("outsb ");
                                                            if (!cf86) {
                                                                addr_8048bd7_436:
                                                                goto addr_8048bdc_441;
                                                            } else {
                                                                __asm__("outsd ");
                                                                if (cf86) {
                                                                    goto addr_8048bdf_350;
                                                                } else {
                                                                    *reinterpret_cast<unsigned char*>(ebp38 + 0x6e) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp38 + 0x6e) & 0xff);
                                                                    zf96 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(ebp38 + 0x6e) == 0);
                                                                    below_or_equal97 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf96));
                                                                    goto addr_8048b6d_349;
                                                                }
                                                            }
                                                        } else {
                                                            if (zf96) {
                                                                addr_8048b09_528:
                                                                if (cf86) {
                                                                    addr_8048b70_351:
                                                                    ebp38 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x74) * 0x20736920;
                                                                    cf86 = __intrinsic();
                                                                    zf96 = __undefined();
                                                                    below_or_equal97 = reinterpret_cast<uint1_t>(cf86 | zf96);
                                                                    __asm__("popad ");
                                                                    __asm__("insb ");
                                                                    if (cf86) {
                                                                        addr_8048be0_442:
                                                                        if (!below_or_equal97) {
                                                                            addr_8048c50_434:
                                                                            if (!zf96) {
                                                                                goto addr_8048cc7_369;
                                                                            } else {
                                                                                *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi42) + ebp38 * 2 + 32) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi42) + ebp38 * 2 + 32) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                                                                goto addr_8048c57_366;
                                                                            }
                                                                        } else {
                                                                            *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x540a0024));
                                                                            goto addr_8048be7_357;
                                                                        }
                                                                    } else {
                                                                        __asm__("popad ");
                                                                        if (!__undefined()) {
                                                                            addr_8048b9f_603:
                                                                            goto addr_8048ba2_604;
                                                                        } else {
                                                                            addr_8048b7f_452:
                                                                            __asm__("arpl [edi+0x6e], bp");
                                                                            __asm__("outsb ");
                                                                            goto addr_8048b83_605;
                                                                        }
                                                                    }
                                                                } else {
                                                                    addr_8048b0b_606:
                                                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 97) & 0xff);
                                                                    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 97)) {
                                                                        addr_8048b83_605:
                                                                        __asm__("arpl [gs:ebp+0x64], si");
                                                                        *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x540a0025));
                                                                        cf86 = 0;
                                                                        if (0) {
                                                                            goto addr_8048bf2_368;
                                                                        }
                                                                    } else {
                                                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x6f) & 0xff);
                                                                        goto addr_8048b13_455;
                                                                    }
                                                                }
                                                            } else {
                                                                addr_8048aff_494:
                                                                eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) & reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)));
                                                                *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x6f));
                                                                cf86 = 0;
                                                                zf94 = *reinterpret_cast<unsigned char*>(&edx7) == 0;
                                                                goto addr_8048b03_451;
                                                            }
                                                        }
                                                    } else {
                                                        if (!cf86) {
                                                            goto addr_8048b0b_606;
                                                        } else {
                                                            ecx->f64 = reinterpret_cast<unsigned char>(ecx->f64 & 0xff);
                                                            cf86 = 0;
                                                            zf94 = ecx->f64 == 0;
                                                            goto addr_8048a97_450;
                                                        }
                                                    }
                                                } else {
                                                    __asm__("arpl [edi+0x6c], bp");
                                                    goto addr_8048a21_502;
                                                }
                                            } else {
                                                if (1) 
                                                    goto addr_8048a6c_614;
                                                if (0) 
                                                    goto addr_8048a69_616; else 
                                                    goto addr_80489f9_345;
                                            }
                                        } else {
                                            if (zf96) {
                                                addr_8048a4b_618:
                                                goto addr_8048a4d_466;
                                            } else {
                                                if (of93) {
                                                    addr_8048a39_514:
                                                    if (cf86) {
                                                        addr_8048aa5_506:
                                                        if (zf96) {
                                                            addr_8048b20_620:
                                                            __asm__("outsd ");
                                                            if (cf86) {
                                                                addr_8048b97_621:
                                                                if (of93) {
                                                                    addr_8048c0b_527:
                                                                    ebx36 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(ebx36) + 1);
                                                                    __asm__("outsd ");
                                                                    __asm__("outsb ");
                                                                    goto addr_8048c10_358;
                                                                } else {
                                                                    addr_8048b9c_622:
                                                                    ebp38 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x74) * 0x20736920;
                                                                    cf86 = __intrinsic();
                                                                    zf96 = __undefined();
                                                                    goto addr_8048b9f_603;
                                                                }
                                                            } else {
                                                                *reinterpret_cast<unsigned char*>(&ebx36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx36) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)));
                                                                *reinterpret_cast<struct s8**>(edx7) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                                                ebx36 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(ebx36) + 1);
                                                                __asm__("outsd ");
                                                                __asm__("outsb ");
                                                                __asm__("outsb ");
                                                                goto addr_8048b2b_624;
                                                            }
                                                        } else {
                                                            addr_8048aa9_491:
                                                            __asm__("outsd ");
                                                            if (cf86) {
                                                                addr_8048b17_456:
                                                                __asm__("arpl [gs:ecx+ebp*2+0x6f], si");
                                                                __asm__("outsb ");
                                                                ecx->f62 = reinterpret_cast<unsigned char>(ecx->f62 & 0xff);
                                                                cf86 = 0;
                                                                of93 = 0;
                                                                goto addr_8048b20_620;
                                                            } else {
                                                                ecx->f73 = reinterpret_cast<unsigned char>(ecx->f73 & 0xff);
                                                                *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi42) + ebp38 * 2 + 0x77) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi42) + ebp38 * 2 + 0x77) & 0xff);
                                                                __asm__("outsb ");
                                                                *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x4e0a0018));
                                                                cf86 = 0;
                                                                zf96 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx7) == 0);
                                                                of93 = 0;
                                                                below_or_equal97 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf96));
                                                                goto addr_8048ab5_626;
                                                            }
                                                        }
                                                    } else {
                                                        if (!cf86) {
                                                            addr_8048ab5_626:
                                                            if (zf96) {
                                                                addr_8048b34_628:
                                                                if (!cf86) {
                                                                    goto addr_8048b9c_622;
                                                                }
                                                            } else {
                                                                __asm__("outsd ");
                                                                if (cf86) {
                                                                    addr_8048b2b_624:
                                                                    __asm__("arpl [gs:ecx+ebp*2+0x6f], si");
                                                                    goto addr_8048b2d_631;
                                                                } else {
                                                                    ecx->f73 = reinterpret_cast<unsigned char>(ecx->f73 & 0xff);
                                                                    goto addr_8048ac2_633;
                                                                }
                                                            }
                                                        } else {
                                                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 97) & 0xff);
                                                            __asm__("insd ");
                                                            ebp38 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<uint32_t>(edi42) * 2 + 32) * 0x20746f6e;
                                                            cf86 = __intrinsic();
                                                            of93 = __intrinsic();
                                                            goto addr_8048a4b_618;
                                                        }
                                                    }
                                                } else {
                                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) & 0xff);
                                                    cf86 = 0;
                                                    zf94 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) == 0;
                                                    sf95 = __intrinsic();
                                                    of93 = 0;
                                                    goto addr_80489d6_344;
                                                }
                                            }
                                        }
                                    } else {
                                        esi12 = reinterpret_cast<struct s8*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) * 0x120a64);
                                        *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | *reinterpret_cast<unsigned char*>(ebp38 + 0x65));
                                        cf86 = 0;
                                        zf94 = *reinterpret_cast<void**>(&ecx) == 0;
                                        sf95 = __intrinsic();
                                        of93 = 0;
                                        goto addr_804895f_343;
                                    }
                                }
                            }
                        } else {
                            addr_80488d5_295:
                            __asm__("insd ");
                            goto addr_80488d6_336;
                        }
                    }
                }
            }
        } else {
            __asm__("insd ");
            if (__intrinsic()) {
                goto addr_80488c9_576;
            } else {
                goto addr_804885a_640;
            }
        }
    }
    __asm__("outsb ");
    if (1) 
        goto addr_8048c03_407;
    __asm__("outsd ");
    if (0) 
        goto addr_8048c0a_415;
    *reinterpret_cast<unsigned char*>(ebp38 + 0x6e) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp38 + 0x6e) & 0xff);
    of93 = 0;
    goto addr_8048b97_621;
    addr_8048a69_616:
    goto addr_8048a6c_614;
    if (zf96) {
        addr_8048b58_446:
        goto addr_8048b5a_645;
    } else {
        if (of93) {
            addr_8048ba2_604:
            __asm__("outsb ");
            __asm__("outsd ");
            if (zf96) 
                goto addr_8048bc7_416;
        } else {
            if (cf86) {
                goto addr_8048b4d_352;
            } else {
                eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) - (reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax4) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + cf86))));
                *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f));
                goto addr_8048b45_348;
            }
        }
    }
    __asm__("arpl [edi+0x6e], bp");
    __asm__("outsb ");
    __asm__("arpl [gs:ebp+0x64], si");
    *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x430a002f));
    cf86 = 0;
    zf96 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx7) == 0);
    below_or_equal97 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf96));
    __asm__("popad ");
    goto addr_8048bb7_440;
    addr_80486df_572:
    cf123 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax4) < reinterpret_cast<unsigned char>(0x6f430a00 + cf90));
    eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) - (0x6f430a00 + cf123));
    zf91 = reinterpret_cast<int1_t>(eax4 == static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(cf123))));
    goto addr_80486e4_263;
    addr_804864c_287:
    __asm__("arpl [ebp+0x73], sp");
    *reinterpret_cast<unsigned char*>(&ebx36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx36) | edi42->f0);
    *reinterpret_cast<struct s8**>(edx7) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    --ebp38;
    __asm__("popad ");
    __asm__("arpl [eax+0x69], bp");
    __asm__("outsb ");
    ecx->f73 = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) = 0;
    zf124 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) == 0);
    goto addr_804865e_651;
    addr_8048569_236:
    __asm__("arpl [edx+0x69], si");
    if (0) {
        addr_80485e5_652:
        __asm__("outsb ");
        if (zf84) {
            addr_8048608_653:
            __asm__("popad ");
            __asm__("insd ");
            *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x4e0a0013));
            __asm__("outsd ");
            ecx->f74 = 0;
            goto addr_8048612_225;
        } else {
            *reinterpret_cast<uint16_t*>(&ebp38) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(ebp38 + 32) * 0x6f66);
            zf124 = __undefined();
            if (__intrinsic()) {
                addr_804865e_651:
                if (zf124) {
                    addr_8048682_538:
                    *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x4f0a0012));
                    cf80 = 0;
                    zf115 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx7) == 0);
                    below_or_equal82 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf115));
                    __asm__("arpl [eax+0x69], si");
                    goto addr_8048696_655;
                } else {
                    __asm__("outsd ");
                    __asm__("outsb ");
                    goto addr_8048664_657;
                }
            } else {
                __asm__("popad ");
                if (!zf124) {
                    tmp32_125 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) + 0x65440a00 + __intrinsic());
                    cf126 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_125) < reinterpret_cast<unsigned char>(eax4));
                    eax4 = tmp32_125;
                    zf124 = reinterpret_cast<uint1_t>(eax4 == 0);
                    if (cf126 | zf124) {
                        addr_8048664_657:
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + ebp38 * 2 + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + ebp38 * 2 + 0x65) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                        goto addr_8048666_262;
                    } else {
                        addr_80485fb_660:
                        __asm__("arpl [ebp+0x20], sp");
                    }
                }
                __asm__("outsb ");
                __asm__("outsd ");
                if (zf124) {
                    addr_8048622_217:
                    __asm__("str dword [edx]");
                    esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 4);
                    *reinterpret_cast<struct s8**>(esp2) = esp2;
                    ebp38 = *reinterpret_cast<unsigned char*>(ebp38 + 0x65) * 0x78652072;
                    cf80 = __intrinsic();
                    zf115 = __undefined();
                    below_or_equal82 = reinterpret_cast<uint1_t>(cf80 | zf115);
                    if (__intrinsic()) {
                        goto addr_8048699_663;
                    }
                } else {
                    __asm__("popad ");
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x74) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x74) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                    cf90 = 0;
                    if (0) 
                        goto addr_804866d_279; else 
                        goto addr_8048608_653;
                }
            }
        }
    } else {
        __asm__("outsd ");
        if (0) {
            addr_804857e_666:
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x75) = 0;
            goto addr_8048580_667;
        } else {
            __asm__("str dword [edx]");
            ++ebp38;
            if (reinterpret_cast<int32_t>(ebp38) < reinterpret_cast<int32_t>(0)) {
                addr_80485dd_234:
                __asm__("popad ");
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) = 0;
                zf84 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) == 0;
                goto addr_80485e5_652;
            } else {
                esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 4);
                *reinterpret_cast<struct s8**>(esp2) = reinterpret_cast<struct s8*>(0x65676e61);
                goto addr_804857e_666;
            }
        }
    }
    if (cf80) {
        addr_8048696_655:
        if (!cf80) {
            addr_80486b9_284:
            goto addr_80486be_286;
        } else {
            addr_8048699_663:
            if (cf80) {
                addr_8048700_554:
                goto addr_8048704_671;
            } else {
                __asm__("insd ");
                __asm__("outsd ");
                if (zf115) {
                    addr_8048704_671:
                    if (cf80) {
                        addr_8048775_550:
                        if (zf115) {
                            addr_80487d8_673:
                            ebx36 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(ebx36) + 1);
                            __asm__("popad ");
                            __asm__("outsb ");
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) & 0xff);
                            if (!*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f)) {
                                addr_8048801_299:
                                tmp8_127 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                cf86 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_127) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)));
                                *reinterpret_cast<struct s8**>(edx7) = tmp8_127;
                                ecx = reinterpret_cast<struct s7*>(&ecx->pad32);
                                __asm__("arpl [ebx+0x65], sp");
                                goto addr_8048806_674;
                            } else {
                                __asm__("popad ");
                                __asm__("arpl [ebx+0x65], sp");
                                if (1) {
                                    addr_804885a_640:
                                    goto addr_804885b_676;
                                } else {
                                    ecx->f20 = reinterpret_cast<unsigned char>(ecx->f20 & 0xff);
                                    __asm__("outsb ");
                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x68) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x68) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                    __asm__("popad ");
                                    if (0) {
                                        addr_804885b_676:
                                        __asm__("insb ");
                                        ebp38 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi12) + 0x6b) * 0x206e6920;
                                        zf87 = __undefined();
                                        goto addr_804885e_293;
                                    } else {
                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + ebp38 * 2 + 98) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + ebp38 * 2 + 98) & 0xff);
                                        cf86 = 0;
                                        zf87 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx) + ebp38 * 2 + 98) == 0);
                                        sf88 = __intrinsic();
                                        of89 = 0;
                                        goto addr_80487fa_292;
                                    }
                                }
                            }
                        } else {
                            addr_8048777_679:
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<uint32_t>(edi42) * 2 + 0x70) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<uint32_t>(edi42) * 2 + 0x70) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                            *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x4e0a001c));
                        }
                    } else {
                        if (zf115) 
                            goto addr_8048777_679;
                        __asm__("arpl [edi+0x6c], bp");
                        *reinterpret_cast<unsigned char*>(ebp38 + 0x72) = 0;
                        cf86 = 0;
                        zf87 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(ebp38 + 0x72) == 0);
                        sf88 = __intrinsic();
                        of89 = 0;
                        if (!0) 
                            goto addr_8048710_682;
                    }
                } else {
                    *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | edi42->f0);
                    goto addr_80486a1_536;
                }
            }
        }
    } else {
        addr_8048631_231:
        *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x4f0a001a));
        zf81 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx7) == 0);
        goto addr_8048635_252;
    }
    __asm__("popad ");
    goto addr_8048783_273;
    addr_8048710_682:
    if (0) {
        addr_804871c_276:
        if (zf87) {
            addr_8048795_301:
            if (zf87) {
                addr_804880f_685:
                __asm__("outsd ");
                if (cf86) 
                    goto addr_8048885_686; else 
                    goto addr_8048813_687;
            } else {
                __asm__("outsd ");
                goto addr_8048799_689;
            }
        } else {
            __asm__("insd ");
            if (0) {
                addr_8048799_689:
                if (0) {
                    addr_8048806_674:
                    if (!cf86) 
                        goto addr_804887c_691;
                } else {
                    *reinterpret_cast<unsigned char*>(&ebx36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx36) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(esi12)));
                    *reinterpret_cast<struct s8**>(edx7) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                    esi12 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esi12) + 1);
                    ebp38 = *reinterpret_cast<int16_t*>(ebp38 + 32) * 0x63736564;
                    cf86 = __intrinsic();
                    of89 = __intrinsic();
                    sf88 = __undefined();
                    zf87 = __undefined();
                    if (cf86) {
                        addr_8048813_687:
                        if (!zf87) {
                            addr_8048885_686:
                            __asm__("outsd ");
                            goto addr_8048886_693;
                        } else {
                            if (zf87) {
                                addr_804887c_691:
                                goto addr_804887d_533;
                            } else {
                                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x68) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x68) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                cf86 = 0;
                                zf87 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x68) == 0);
                                sf88 = __intrinsic();
                                of89 = 0;
                                __asm__("popad ");
                                if (0) {
                                    addr_8048883_534:
                                    __asm__("outsb ");
                                    __asm__("outsb ");
                                    goto addr_8048885_686;
                                } else {
                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + ebp38 * 2 + 98) = 0;
                                    cf86 = 0;
                                    zf87 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx) + ebp38 * 2 + 98) == 0);
                                    sf88 = __intrinsic();
                                    of89 = 0;
                                    goto addr_8048820_697;
                                }
                            }
                        }
                    } else {
                        addr_80487aa_274:
                        if (of89) 
                            goto addr_8048820_697; else 
                            goto addr_80487ac_698;
                    }
                }
            } else {
                *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + reinterpret_cast<unsigned char>(eax4)));
                goto addr_8048726_539;
            }
        }
    } else {
        eax4 = eax4;
        *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | *reinterpret_cast<unsigned char*>(ebp38 + 0x75));
        cf86 = 0;
        zf87 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&ecx) == 0);
        sf88 = __intrinsic();
        of89 = 0;
        goto addr_8048717_272;
    }
    ebp38 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi12) + 0x67) * 0x63206120;
    cf86 = __intrinsic();
    of89 = __intrinsic();
    sf88 = __undefined();
    zf87 = __undefined();
    goto addr_804880f_685;
    addr_80487ac_698:
    __asm__("outsd ");
    if (cf86) {
        addr_80487cf_570:
        __asm__("popad ");
        __asm__("outsb ");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1) = 0xff;
        *reinterpret_cast<struct s8**>(edx7) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
        goto addr_80487d8_673;
    } else {
        ebp38 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi12) + 32) * 0x20646162;
        cf86 = __intrinsic();
        of89 = __intrinsic();
        sf88 = __undefined();
        zf87 = __undefined();
        if (!cf86) {
            addr_804882c_557:
            esp2 = reinterpret_cast<struct s8*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx7) + 32) * 0x74636573);
            goto addr_8048830_559;
        } else {
            __asm__("popad ");
            if (zf87) {
                addr_8048820_697:
                if (cf86) {
                    addr_8048886_693:
                    if (zf87) {
                        addr_80488a8_704:
                        __asm__("insb ");
                        goto addr_80488ad_574;
                    } else {
                        addr_8048888_475:
                        if (sf88) {
                            addr_80488f0_472:
                            if (zf87) {
                                addr_804896a_318:
                                *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi42) + ebp38 * 2 + 0x6e) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi42) + ebp38 * 2 + 0x6e) & 0xff);
                                (&eax4)[1] = reinterpret_cast<struct s8*>(0xff);
                                tmp8_128 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                cf86 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_128) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)));
                                *reinterpret_cast<struct s8**>(edx7) = tmp8_128;
                                zf87 = reinterpret_cast<uint1_t>(*reinterpret_cast<struct s8**>(edx7) == 0);
                                of93 = __intrinsic();
                                esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 4);
                                *reinterpret_cast<struct s8**>(esp2) = eax4;
                                if (cf86) {
                                    addr_80489e5_532:
                                    goto addr_80489e7_705;
                                } else {
                                    addr_8048976_323:
                                    if (zf87) {
                                        addr_80489e7_705:
                                        if (of93) {
                                            goto addr_8048a50_464;
                                        }
                                    } else {
                                        __asm__("arpl [edi+0x6c], bp");
                                        edi42->f72 = reinterpret_cast<unsigned char>(edi42->f72 & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                        __asm__("outsd ");
                                        __asm__("outsb ");
                                        *reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s16**>(&esi12))->f79) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s16**>(&esi12))->f79) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                                        zf87 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s16**>(&esi12))->f79) == 0);
                                        if (0) {
                                            goto addr_80489ec_709;
                                        } else {
                                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) & 0xff);
                                            cf86 = 0;
                                            zf87 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f) == 0);
                                            goto addr_8048989_501;
                                        }
                                    }
                                }
                            } else {
                                __asm__("popad ");
                                goto addr_80488f9_304;
                            }
                        } else {
                            __asm__("arpl [eax], sp");
                            goto addr_804888c_303;
                        }
                    }
                } else {
                    if (cf86) {
                        addr_80488a0_334:
                        __asm__("arpl [gs:esp+ebp*2+0x79], si");
                        *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x490a0017));
                        goto addr_80488a8_704;
                    } else {
                        (&eax4)[1] = reinterpret_cast<struct s8*>(0xff);
                        *reinterpret_cast<struct s8**>(edx7) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                        goto addr_804882a_556;
                    }
                }
            } else {
                *reinterpret_cast<unsigned char*>(&ebx36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx36) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)));
                *reinterpret_cast<struct s8**>(edx7) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                zf91 = *reinterpret_cast<struct s8**>(edx7) == 0;
                esp2 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esp2) - 4);
                *reinterpret_cast<struct s8**>(esp2) = edx7;
                __asm__("insd ");
                goto addr_80487c1_265;
            }
        }
    }
    if (cf86) {
        addr_8048a4d_466:
        if (!cf86) {
            addr_8048ac5_717:
            if (cf86) {
                addr_8048b2d_631:
                __asm__("outsb ");
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                cf86 = 0;
                zf96 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) == 0);
                of93 = 0;
                below_or_equal97 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf96));
                goto addr_8048b34_628;
            } else {
                __asm__("popad ");
                goto addr_8048ac9_719;
            }
        } else {
            addr_8048a50_464:
            if (of93) {
                addr_8048ac2_633:
                *reinterpret_cast<unsigned char*>(ebp38 + 0x6e) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp38 + 0x6e) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                cf86 = 0;
                goto addr_8048ac5_717;
            } else {
                __asm__("outsd ");
                if (cf86) {
                    addr_8048ac9_719:
                    __asm__("arpl [eax+0x61], bp");
                    goto addr_8048acf_721;
                } else {
                    addr_8048a55_530:
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x79) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x79) & 0xff);
                    goto addr_8048a57_722;
                }
            }
        }
    } else {
        addr_80489ec_709:
        if (zf87) {
            addr_8048a57_722:
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x72) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
            __asm__("outsd ");
            if (!*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x72)) {
                addr_8048acf_721:
                cf86 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax4) < reinterpret_cast<unsigned char>(0x654e0a00));
                below_or_equal97 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax4) <= reinterpret_cast<unsigned char>(0x654e0a00));
                eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) - 0x654e0a00);
                zf96 = reinterpret_cast<uint1_t>(eax4 == 0);
                goto addr_8048ad1_723;
            } else {
                __asm__("arpl [edi+0x6c], bp");
                *reinterpret_cast<unsigned char*>(&ebx36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx36) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)));
                tmp8_129 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                cf86 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_129) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)));
                *reinterpret_cast<struct s8**>(edx7) = tmp8_129;
                ecx = reinterpret_cast<struct s7*>(&ecx->pad32);
                zf96 = reinterpret_cast<uint1_t>(ecx == 0);
                below_or_equal97 = reinterpret_cast<uint1_t>(cf86 | zf96);
                if (cf86) {
                    addr_8048ad1_723:
                    if (zf96) {
                        goto addr_8048b4f_437;
                    } else {
                        __asm__("outsd ");
                        goto addr_8048ad8_347;
                    }
                } else {
                    addr_8048a6c_614:
                    if (!cf86) {
                        addr_8048ae1_448:
                        __asm__("outsb ");
                        __asm__("outsb ");
                        __asm__("arpl [gs:ecx+ebp*2+0x6f], si");
                        __asm__("outsb ");
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) & 0xff);
                        __asm__("arpl [ecx+0x75], sp");
                        if (1) {
                            addr_8048b5a_645:
                            *reinterpret_cast<struct s8**>(eax4) = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) - reinterpret_cast<unsigned char>(eax4));
                            *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + reinterpret_cast<unsigned char>(esi12) * 2 + 97));
                            cf86 = 0;
                            zf96 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx7) == 0);
                            below_or_equal97 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf96));
                            goto addr_8048b62_594;
                        } else {
                            edi42->f66 = reinterpret_cast<unsigned char>(edi42->f66 & 0xff);
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
                            cf86 = 0;
                            zf96 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + 0x65) == 0);
                            below_or_equal97 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf96));
                            goto addr_8048af9_593;
                        }
                    } else {
                        ecx->f6c = reinterpret_cast<unsigned char>(ecx->f6c & 0xff);
                        cf86 = 0;
                        zf94 = ecx->f6c == 0;
                        sf95 = __intrinsic();
                        goto addr_8048a70_346;
                    }
                }
            }
        } else {
            __asm__("outsd ");
            __asm__("outsb ");
            goto addr_80489f0_592;
        }
    }
    addr_80484fa_242:
    __asm__("arpl [edi+0x6c], bp");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) + reinterpret_cast<unsigned char>(esi12) * 2 + 0x69) = 0;
    zf85 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edx7) + reinterpret_cast<unsigned char>(esi12) * 2 + 0x69) == 0);
    if (zf85) 
        goto addr_8048568_235;
    if (!0) 
        goto addr_8048505_731;
    addr_8048525_732:
    goto addr_8048527_120;
    addr_8048505_731:
    __asm__("outsb ");
    __asm__("outsd ");
    if (zf85) {
        addr_8048529_121:
        ebp38 = ecx->f62 * 0x100a656c;
        goto addr_8048530_214;
    } else {
        addr_8048509_238:
        __asm__("popad ");
        if (zf85) {
            addr_8048580_667:
            __asm__("insb ");
            __asm__("insb ");
            dl130 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x4e0a000a));
            __asm__("outsd ");
            ecx->f6e = 0;
            __asm__("outsd ");
            *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(dl130 | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(esi12)));
            tmp8_131 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
            cf132 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_131) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(edx7)));
            *reinterpret_cast<struct s8**>(edx7) = tmp8_131;
            goto addr_8048595_733;
        } else {
            __asm__("popad ");
            __asm__("arpl [eax+0x65], bp");
            *reinterpret_cast<unsigned char*>(&ebx36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx36) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + reinterpret_cast<unsigned char>(eax4)));
            *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi12) + 0x6f));
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 83) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 83) & reinterpret_cast<unsigned char>(eax4));
            ecx = reinterpret_cast<struct s7*>(reinterpret_cast<uint32_t>(ecx) - 1);
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x74) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx36) + 0x74) & *reinterpret_cast<unsigned char*>(&edx7 + 1));
            cf132 = 0;
            if (0) {
                addr_8048595_733:
                ecx = reinterpret_cast<struct s7*>(reinterpret_cast<uint32_t>(ecx) - 1);
                zf124 = reinterpret_cast<uint1_t>(ecx == 0);
                __asm__("outsb ");
                if (cf132 | zf124) {
                    goto addr_80485fb_660;
                } else {
                    __asm__("insb ");
                    esp2 = reinterpret_cast<struct s8*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 0x72) * 0x65757165);
                    cf73 = __intrinsic();
                    goto addr_804859c_215;
                }
            } else {
                addr_8048520_245:
                __asm__("arpl [ebp+esi*2+0x72], si");
                ecx->f76 = 0;
                goto addr_8048525_732;
            }
        }
    }
    addr_80484a7_246:
    __asm__("outsb ");
    __asm__("arpl [eax+0x72], bp");
    __asm__("outsd ");
    goto addr_80484ac_127;
    addr_80483c4_90:
    ebp38 = ecx->f62 * 0x900a656c;
    eax4 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(eax4) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax4) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s8**>(eax4)) + __intrinsic()))));
    goto addr_80483ce_74;
    addr_804824f_178:
    __asm__("insb ");
    esp2 = reinterpret_cast<struct s8*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax4) + 97) * 0x6d756772);
    cf9 = __intrinsic();
    zf44 = __undefined();
    goto addr_8048252_173;
    addr_8048266_180:
    __asm__("insb ");
    edi42->f76 = 0;
    cf64 = 0;
    sf59 = __intrinsic();
    of65 = 0;
    below_or_equal66 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(edi42->f76 == 0)));
    if (0) 
        goto addr_80482d5_135; else 
        goto addr_804826f_157;
}

void fun_8048da5() {
    __asm__("rep fdivr st3, st0");
}

signed char ge0f8bef8;

void fun_8048e09(signed char cl) {
    uint48_t v2;
    int1_t pf3;
    signed char al4;
    int16_t cs5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 2) = reinterpret_cast<int32_t>(__return_address());
    if (pf3) 
        goto 0x8048e04;
    ge0f8bef8 = al4;
    __asm__("cli ");
    *reinterpret_cast<int16_t*>(&v2) = cs5;
    __asm__("outsb ");
    __asm__("lodsb ");
    goto *reinterpret_cast<int16_t*>(&v2);
}

void fun_8048e70() {
}

void fun_8048e72() {
    signed char* edx1;
    int32_t* edi2;
    int32_t edi3;

    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx1) + 1) = -2;
    __asm__("retf 0xecfe");
    *edx1 = reinterpret_cast<signed char>(*edx1 - 1);
    goto edi2[edi3 * 2];
}

struct s17 {
    unsigned char f0;
    signed char[31] pad32;
    unsigned char f20;
    signed char[65] pad98;
    unsigned char f62;
    signed char[9] pad108;
    unsigned char f6c;
    signed char[1] pad110;
    unsigned char f6e;
    signed char[3] pad114;
    unsigned char f72;
    signed char[1] pad116;
    unsigned char f74;
};

struct s18 {
    unsigned char f0;
    signed char[109] pad110;
    int32_t f6e;
    unsigned char f70;
    unsigned char f72;
};

struct s19 {
    signed char[1] pad1;
    struct s0* f1;
};

struct s20 {
    signed char[44] pad44;
    int32_t f2c;
};

struct s21 {
    signed char[80] pad80;
    unsigned char f50;
};

struct s22 {
    signed char[80] pad80;
    unsigned char f50;
};

struct s23 {
    signed char[97] pad97;
    int32_t f61;
};

struct s24 {
    signed char[110] pad110;
    int32_t f6e;
};

struct s25 {
    signed char[110] pad110;
    int32_t f6e;
};

unsigned char g6e2d2d6e;

struct s26 {
    int32_t f0;
    struct s0* f4;
};

unsigned char ge8000a68;

uint32_t g7265762d;

struct s27 {
    signed char[110] pad110;
    int32_t f6e;
};

void fun_8048e8c(struct s17* ecx) {
    struct s0* esp2;
    int1_t less3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    unsigned char tmp8_7;
    signed char* edx8;
    uint1_t cf9;
    unsigned char* edx10;
    unsigned char* edx11;
    uint1_t zf12;
    signed char* edx13;
    int1_t sf14;
    signed char* edx15;
    uint1_t below_or_equal16;
    struct s0* edx17;
    int1_t sf18;
    struct s0* ebp19;
    struct s0* esi20;
    int1_t of21;
    struct s0* eax22;
    struct s0* tmp8_23;
    int1_t cf24;
    struct s0* ebx25;
    int1_t zf26;
    int1_t zf27;
    int1_t pf28;
    int1_t of29;
    struct s0* esp30;
    struct s0* esp31;
    struct s18* edi32;
    void* edi33;
    struct s0* tmp8_34;
    int1_t cf35;
    int1_t zf36;
    unsigned char* eax37;
    unsigned char* eax38;
    unsigned char dh39;
    unsigned char* edx40;
    unsigned char* edx41;
    unsigned char dh42;
    void* eax43;
    int1_t zf44;
    struct s19* ebx45;
    unsigned char dh46;
    struct s20* esi47;
    struct s21* edi48;
    struct s22* edi49;
    unsigned char dl50;
    struct s23* esi51;
    int1_t zf52;
    struct s0* tmp8_53;
    int16_t* esp54;
    int16_t cs55;
    struct s0* tmp8_56;
    struct s24* edi57;
    struct s0* tmp8_58;
    uint1_t cf59;
    int1_t zf60;
    unsigned char* edi61;
    struct s25* edi62;
    struct s0* esp63;
    struct s0** esp64;
    int16_t* esp65;
    int16_t ss66;
    struct s0* tmp8_67;
    int1_t cf68;
    unsigned char tmp8_69;
    int1_t cf70;
    int1_t zf71;
    unsigned char tmp8_72;
    int1_t cf73;
    struct s26* esp74;
    int1_t of75;
    int1_t below_or_equal76;
    struct s0* tmp8_77;
    int1_t cf78;
    uint32_t ebp79;
    unsigned char* eax80;
    unsigned char* eax81;
    struct s0* tmp8_82;
    struct s27* edi83;
    struct s0* esp84;

    esp2 = reinterpret_cast<struct s0*>(__zero_stack_offset());
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    __asm__("das ");
    tmp8_7 = reinterpret_cast<unsigned char>(*edx8 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    cf9 = reinterpret_cast<uint1_t>(tmp8_7 < *edx10);
    *edx11 = tmp8_7;
    zf12 = reinterpret_cast<uint1_t>(*edx13 == 0);
    sf14 = *edx15 < 0;
    below_or_equal16 = reinterpret_cast<uint1_t>(cf9 | zf12);
    if (!cf9) {
        addr_8048f02_3:
        if (cf9) {
            addr_8048f69_4:
            __asm__("outsb ");
            if (below_or_equal16) {
                goto addr_8048fcf_6;
            }
        } else {
            __asm__("arpl [ebp+0x2f], sp");
            edx17 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(edx17) + 1);
            sf18 = reinterpret_cast<signed char>(edx17) < reinterpret_cast<signed char>(0);
            if (cf9) {
                addr_8048f73_8:
                if (!sf18) {
                    addr_8048f98_9:
                    if (cf9) {
                        addr_8049009_10:
                        ebp19 = reinterpret_cast<struct s0*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi20) + 97) * 0x7453206c);
                        of21 = __intrinsic();
                        __asm__("outsd ");
                        if (of21) 
                            goto addr_8049033_11;
                    } else {
                        esp2 = reinterpret_cast<struct s0*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp19) + 0x6e) * 32 - 4);
                        *reinterpret_cast<struct s0**>(esp2) = eax22;
                        esi20 = reinterpret_cast<struct s0*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x65) * 0xd900a);
                        goto addr_8048fa1_13;
                    }
                } else {
                    esp2 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(esp2) - 4);
                    *reinterpret_cast<struct s0**>(esp2) = edx17;
                    if (cf9) {
                        addr_8048fe3_15:
                        tmp8_23 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(edx17)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                        cf24 = reinterpret_cast<unsigned char>(tmp8_23) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(edx17));
                        *reinterpret_cast<struct s0**>(edx17) = tmp8_23;
                        ebx25 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(ebx25) + 1);
                        zf26 = ebx25 == 0;
                        of21 = __intrinsic();
                        __asm__("outsd ");
                        __asm__("outsb ");
                        if (zf26) {
                            addr_8049053_16:
                            if (!cf24) {
                                addr_8049076_17:
                                ecx->f20 = reinterpret_cast<unsigned char>(ecx->f20 & 0xff);
                                zf27 = ecx->f20 == 0;
                                esp2 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(esp2) - 4);
                                *reinterpret_cast<struct s0**>(esp2) = ebx25;
                                __asm__("outsd ");
                                __asm__("arpl [ebx+0x65], bp");
                                if (!zf27) {
                                    *reinterpret_cast<struct s0**>(eax22) = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(eax22)) - (reinterpret_cast<unsigned char>(eax22) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(eax22)) < reinterpret_cast<unsigned char>(eax22))));
                                    *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx25) + 80));
                                    esp2 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(esp2) - 4);
                                    *reinterpret_cast<struct s0**>(esp2) = ebp19;
                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<unsigned char>(ebp19) * 2 + 0x6d) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<unsigned char>(ebp19) * 2 + 0x6d) & *reinterpret_cast<unsigned char*>(&edx17));
                                    goto addr_804908c_19;
                                }
                            } else {
                                __asm__("popad ");
                                if (zf26) {
                                    addr_80490cd_21:
                                    if (of21) {
                                        addr_8049138_22:
                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx17) + 0x74) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx17) + 0x74) & *reinterpret_cast<unsigned char*>(&edx17 + 1));
                                        goto addr_804913b_23;
                                    } else {
                                        if (cf24) {
                                            addr_8049136_25:
                                            goto addr_8049138_22;
                                        } else {
                                            addr_80490d1_26:
                                            *reinterpret_cast<unsigned char*>(&edx17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx17) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x500a0019));
                                            goto addr_80490d5_27;
                                        }
                                    }
                                } else {
                                    __asm__("insd ");
                                    if (of21) 
                                        goto addr_80490d1_26; else 
                                        goto addr_804905d_29;
                                }
                            }
                        } else {
                            __asm__("outsb ");
                            if (!zf26) {
                                addr_8049052_31:
                                goto addr_8049053_16;
                            } else {
                                addr_8048fed_32:
                                *reinterpret_cast<unsigned char*>(&edx17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx17) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x480a0008));
                                __asm__("popad ");
                                __asm__("insb ");
                                if (!*reinterpret_cast<unsigned char*>(&edx17)) {
                                    addr_804905d_29:
                                    ebp19 = reinterpret_cast<struct s0*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi20) + 0x67) * 0x69725720);
                                    cf24 = __intrinsic();
                                    of21 = __intrinsic();
                                    if (__undefined()) {
                                        addr_80490cb_33:
                                        goto addr_80490cd_21;
                                    } else {
                                        *reinterpret_cast<unsigned char*>(&edx17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx17) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x550a0018));
                                        if (0) {
                                            addr_80490d5_27:
                                            if (0) {
                                                addr_8049149_35:
                                                __asm__("outsb ");
                                                pf28 = __intrinsic();
                                                of29 = 0;
                                                goto addr_8049151_36;
                                            } else {
                                                esp30 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(esp2) - 4);
                                                *reinterpret_cast<struct s0**>(esp30) = esp30;
                                                of29 = __intrinsic();
                                                pf28 = __undefined();
                                                if (of29) {
                                                    addr_8049154_38:
                                                    while (pf28) {
                                                    }
                                                    goto addr_8049156_40;
                                                } else {
                                                    if (__intrinsic()) 
                                                        goto addr_8049152_42;
                                                    *reinterpret_cast<unsigned char*>(&edx17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx17) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x570a0010));
                                                    ebp19 = reinterpret_cast<struct s0*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi20) + 100) * 0x6320776f);
                                                    esp31 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(esp30) - 4);
                                                    *reinterpret_cast<struct s0**>(esp31) = reinterpret_cast<struct s0*>(0x65676e61);
                                                    *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(esi20)));
                                                    *reinterpret_cast<struct s0**>(edx17) = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(edx17)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                                    ecx = reinterpret_cast<struct s17*>(reinterpret_cast<uint32_t>(ecx) - 1);
                                                    __asm__("das ");
                                                    edi32 = reinterpret_cast<struct s18*>(reinterpret_cast<int32_t>(edi32) - 1);
                                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x6f) & *reinterpret_cast<unsigned char*>(&edx17 + 1));
                                                    if (1) 
                                                        goto addr_8049180_44; else 
                                                        goto addr_804910d_45;
                                                }
                                            }
                                        } else {
                                            __asm__("outsb ");
                                            if (!*reinterpret_cast<unsigned char*>(&edx17)) {
                                                addr_8049092_47:
                                                goto addr_8049093_48;
                                            } else {
                                                ecx = reinterpret_cast<struct s17*>(reinterpret_cast<uint32_t>(ecx) - 1);
                                                __asm__("das ");
                                                edi32 = reinterpret_cast<struct s18*>(reinterpret_cast<int32_t>(edi33) - 1);
                                                ecx->f74 = reinterpret_cast<unsigned char>(ecx->f74 & 0xff);
                                                goto addr_8049076_17;
                                            }
                                        }
                                    }
                                } else {
                                    *reinterpret_cast<unsigned char*>(&ebx25) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx25) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(esi20)));
                                    tmp8_34 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(edx17)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                    cf35 = reinterpret_cast<unsigned char>(tmp8_34) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(edx17));
                                    *reinterpret_cast<struct s0**>(edx17) = tmp8_34;
                                    eax22 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(eax22) - 1);
                                    zf36 = eax22 == 0;
                                    __asm__("popad ");
                                    __asm__("insb ");
                                    if (zf36) {
                                        addr_8049022_51:
                                        if (cf35) {
                                            addr_8049093_48:
                                            goto addr_8049094_52;
                                        } else {
                                            if (!zf36) {
                                                addr_8049094_52:
                                                *reinterpret_cast<unsigned char*>(&edx17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx17) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x460a001a));
                                                ebp19 = reinterpret_cast<struct s0*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebp19) + 32) * 0x657a6953);
                                                goto addr_80490a7_54;
                                            } else {
                                                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x72) & *reinterpret_cast<unsigned char*>(&edx17));
                                                cf24 = 0;
                                                zf26 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x72) == 0;
                                                of21 = 0;
                                                __asm__("outsd ");
                                                __asm__("arpl [ebp+0x73], sp");
                                                if (1) {
                                                    addr_8049050_56:
                                                    __asm__("outsd ");
                                                    __asm__("arpl [ebp+0x73], sp");
                                                    goto addr_8049052_31;
                                                } else {
                                                    __asm__("popad ");
                                                    if (zf26) {
                                                        addr_80490a7_54:
                                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<unsigned char>(ebp19) * 2 + 0x6d) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<unsigned char>(ebp19) * 2 + 0x6d) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                                        goto addr_80490ab_58;
                                                    } else {
                                                        addr_8049033_11:
                                                        __asm__("insd ");
                                                        if (of21) {
                                                            addr_80490ab_58:
                                                            esi20 = reinterpret_cast<struct s0*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x65) * 0x65656378);
                                                            *reinterpret_cast<unsigned char*>(&edx17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx17) | edi32->f0);
                                                            goto addr_80490b9_59;
                                                        } else {
                                                            ebp19 = reinterpret_cast<struct s0*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi20) + 0x67) * 0x61655220);
                                                            goto addr_804903b_61;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        esp2 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(esp2) - 4);
                                        *reinterpret_cast<struct s0**>(esp2) = esp2;
                                        if (cf35) 
                                            goto addr_8049076_17; else 
                                            goto addr_8049009_10;
                                    }
                                }
                            }
                        }
                    } else {
                        addr_8048f7e_63:
                        __asm__("outsb ");
                        __asm__("arpl [ebp+0xa], sp");
                        __asm__("str dword [edx]");
                        esp2 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(esp2) - 4);
                        *reinterpret_cast<struct s0**>(esp2) = ebp19;
                        if (!cf9) 
                            goto addr_8048fed_32; else 
                            goto addr_8048f88_64;
                    }
                }
            } else {
                __asm__("popad ");
                goto addr_8048f0f_66;
            }
        }
    } else {
        *eax37 = reinterpret_cast<unsigned char>(*eax38 ^ dh39);
        *edx40 = reinterpret_cast<unsigned char>(*edx41 ^ dh42);
        eax22 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(eax43) - 0x6a2d3830);
        if (eax22) {
            addr_8048f0f_66:
            esi20 = reinterpret_cast<struct s0*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x6f) * 0x69);
            cf9 = __intrinsic();
            zf44 = __undefined();
            __asm__("outsb ");
            if (zf44) {
                addr_8048f36_68:
                *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(eax22))) + cf9) | ecx->f72);
                goto addr_8048f3b_69;
            } else {
                esp2 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(esp2) - 4);
                if (cf9) {
                    goto addr_8048f7c_72;
                }
                if (__intrinsic()) 
                    goto addr_8048f25_74; else 
                    goto addr_8048f1b_75;
            }
        } else {
            eax22 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(eax22) - 0x28203030);
            ebx25 = reinterpret_cast<struct s0*>(&ebx45->f1);
            *reinterpret_cast<struct s0**>(eax22) = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(eax22)) - reinterpret_cast<unsigned char>(esp2));
            *reinterpret_cast<unsigned char*>(&edx17 + 1) = reinterpret_cast<unsigned char>(dh46 ^ reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(eax22)));
            *reinterpret_cast<struct s0**>(eax22) = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(eax22)) ^ *reinterpret_cast<unsigned char*>(&edx17 + 1));
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x70) = 0;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx17) + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx17) + 0x65) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            cf9 = 0;
            if (0) {
                addr_8048f21_77:
                __asm__("outsd ");
                if (0) 
                    goto addr_8048f98_9; else 
                    goto addr_8048f24_78;
            } else {
                ebp19 = reinterpret_cast<struct s0*>(esi47->f2c * 0x554e4720);
                edi48->f50 = reinterpret_cast<unsigned char>(edi49->f50 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
                esp2 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(esp2) - 1);
                *reinterpret_cast<unsigned char*>(&edx17) = reinterpret_cast<unsigned char>(dl50 | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x480a0008));
                __asm__("popad ");
                __asm__("outsb ");
                if (*reinterpret_cast<unsigned char*>(&edx17)) {
                    addr_8048f3b_69:
                    esi20 = reinterpret_cast<struct s0*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(eax22) + reinterpret_cast<unsigned char>(ebp19) * 2 + 0x6d) * 0x63697465);
                    goto addr_8048f3f_80;
                } else {
                    *reinterpret_cast<unsigned char*>(&edx17) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx17) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + reinterpret_cast<unsigned char>(eax22))) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp19) + 0x72));
                    __asm__("insd ");
                    ebp19 = reinterpret_cast<struct s0*>(esi51->f61 * 0x6e49206c);
                    if (__undefined()) {
                        addr_8048f41_82:
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi20) + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi20) + 97) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
                        zf52 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi20) + 97) == 0;
                        if (!zf52) {
                            addr_8048fb4_83:
                            *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))));
                            *reinterpret_cast<unsigned char*>(&edx17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx17) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp19) + 0x72));
                            __asm__("insd ");
                            ebp19 = reinterpret_cast<struct s0*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi20) + 97) * 0xa646574);
                            goto addr_8048fbf_84;
                        } else {
                            if (zf52) {
                                addr_8048f54_86:
                                tmp8_53 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(edx17)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                cf9 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_53) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(edx17)));
                                *reinterpret_cast<struct s0**>(edx17) = tmp8_53;
                                esp2 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(esp2) - 4);
                                if (!cf9) {
                                    addr_8048fbf_84:
                                    eax22 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(eax22) | 0x74530a00);
                                    cf9 = 0;
                                    __asm__("popad ");
                                    __asm__("arpl [ebx+0x20], bp");
                                    esi20 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(esi20) + 1);
                                    zf12 = reinterpret_cast<uint1_t>(esi20 == 0);
                                    sf14 = reinterpret_cast<signed char>(esi20) < reinterpret_cast<signed char>(0);
                                    __asm__("popad ");
                                    if (!zf12) {
                                        addr_804903b_61:
                                        *reinterpret_cast<unsigned char*>(&eax22 + 1) = 0xff;
                                        cf9 = 0;
                                        zf12 = 0;
                                        goto addr_8049045_87;
                                    } else {
                                        addr_8048fcf_6:
                                        if (!zf12) {
                                            esp54 = reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(esp2) - 2);
                                            *esp54 = cs55;
                                            tmp8_56 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(edx17)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                            cf9 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_56) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(edx17)));
                                            *reinterpret_cast<struct s0**>(edx17) = tmp8_56;
                                            ebx25 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(ebx25) + 1);
                                            zf12 = reinterpret_cast<uint1_t>(ebx25 == 0);
                                            sf14 = reinterpret_cast<signed char>(ebx25) < reinterpret_cast<signed char>(0);
                                            esp2 = reinterpret_cast<struct s0*>(esp54 - 2);
                                            *reinterpret_cast<struct s0**>(esp2) = reinterpret_cast<struct s0*>(0x20646c69);
                                            goto addr_8048fdb_89;
                                        }
                                    }
                                } else {
                                    if (cf9) {
                                        addr_8048f7c_72:
                                        goto addr_8048f7e_63;
                                    } else {
                                        esp2 = reinterpret_cast<struct s0*>(edi57->f6e * 0x31206c61);
                                        *reinterpret_cast<unsigned char*>(&edx17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx17) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x490a001a));
                                        cf9 = 0;
                                        zf12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx17) == 0);
                                        sf14 = __intrinsic();
                                        below_or_equal16 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf12));
                                        goto addr_8048f69_4;
                                    }
                                }
                            } else {
                                *reinterpret_cast<struct s0**>(eax22) = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(eax22)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
                                *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx25) + 0x69));
                                __asm__("insb ");
                                goto addr_8048f50_93;
                            }
                        }
                    } else {
                        if (__intrinsic() || !__undefined()) {
                            addr_8048f50_93:
                            __asm__("insb ");
                            goto addr_8048f51_95;
                        } else {
                            if (__undefined()) {
                                addr_8048eec_97:
                                __asm__("insb ");
                                __asm__("a16 popad ");
                                __asm__("insb ");
                                goto addr_8048ef4_98;
                            } else {
                                tmp8_58 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(edx17)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                cf59 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_58) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(edx17)));
                                *reinterpret_cast<struct s0**>(edx17) = tmp8_58;
                                zf60 = *reinterpret_cast<struct s0**>(edx17) == 0;
                                esp2 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(esp2) - 2 - 4);
                                if (!zf60) {
                                    addr_8048f51_95:
                                    *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | *edi61);
                                    goto addr_8048f54_86;
                                } else {
                                    if (zf60) {
                                        addr_8048ef4_98:
                                        ecx->f6e = reinterpret_cast<unsigned char>(ecx->f6e & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                                        cf9 = 0;
                                        sf18 = __intrinsic();
                                        if (1) {
                                            __asm__("insb ");
                                            esp2 = reinterpret_cast<struct s0*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(eax22) + 77) * 0x726f6d65);
                                            cf9 = __intrinsic();
                                            sf18 = __undefined();
                                            goto addr_8048f70_102;
                                        } else {
                                            if (0) {
                                                addr_8048f70_102:
                                                goto addr_8048f73_8;
                                            } else {
                                                __asm__("arpl [ecx+ebp*2+0x6f], si");
                                                __asm__("outsb ");
                                                *reinterpret_cast<unsigned char*>(&edx17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx17) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x540a0017));
                                                cf9 = 0;
                                                zf12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx17) == 0);
                                                sf14 = __intrinsic();
                                                below_or_equal16 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf12));
                                                goto addr_8048f02_3;
                                            }
                                        }
                                    } else {
                                        eax22 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(eax22) + 0x6c490a00 + cf59);
                                        goto addr_8048eec_97;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(esp2) - 4) = ebx25;
    esp2 = reinterpret_cast<struct s0*>(edi62->f6e * 0x240a6c61);
    goto addr_8049019_107;
    addr_804908c_19:
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<unsigned char>(ebp19) * 2 + 0x6d) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<unsigned char>(ebp19) * 2 + 0x6d) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    goto addr_8049092_47;
    do {
        addr_8049151_36:
        addr_8049152_42:
    } while (of29);
    goto addr_8049154_38;
    addr_8049156_40:
    __asm__("retf 0xd6fd");
    __asm__("in al, 0xfd");
    addr_8049180_44:
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi32) + reinterpret_cast<int32_t>(edi32) * 8 + 0x68) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi32) + reinterpret_cast<int32_t>(edi32) * 8 + 0x68) - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx17) + 0xb0ff9eff) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx17) + 0xb0ff9eff) + 1;
    esp63 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(esp31) - 4);
    *reinterpret_cast<struct s0**>(esp63) = reinterpret_cast<struct s0*>(0x804918f);
    edx17();
    goto reinterpret_cast<unsigned char>(esp63) + 4;
    addr_804910d_45:
    esp64 = reinterpret_cast<struct s0**>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx17) + 0x6c) * 0xf0a65);
    *reinterpret_cast<unsigned char*>(&edx17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx17) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x6f));
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx17) == 0)))) {
        esp65 = reinterpret_cast<int16_t*>(esp64 - 2);
        *esp65 = ss66;
        esp31 = reinterpret_cast<struct s0*>(esp65 - 2);
        *reinterpret_cast<struct s0**>(esp31) = *reinterpret_cast<struct s0**>(eax22);
        goto addr_8049180_44;
    } else {
        if (0) {
            addr_804913b_23:
            __asm__("popad ");
            __asm__("insb ");
            edi32->f70 = 0;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp19) + 0x6e) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp19) + 0x6e) & *reinterpret_cast<unsigned char*>(&edx17 + 1));
            goto addr_8049149_35;
        } else {
            esi20 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(esi20) + 1);
            __asm__("popad ");
            ebp19 = reinterpret_cast<struct s0*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebp19) + reinterpret_cast<unsigned char>(esi20) * 2 + 0x72) * 0xf900a65);
            tmp8_67 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(edx17)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
            cf68 = reinterpret_cast<unsigned char>(tmp8_67) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(edx17));
            *reinterpret_cast<struct s0**>(edx17) = tmp8_67;
            if (!cf68) {
                tmp8_69 = reinterpret_cast<unsigned char>(g6e2d2d6e + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
                cf70 = tmp8_69 < g6e2d2d6e;
                g6e2d2d6e = tmp8_69;
                zf71 = g6e2d2d6e == 0;
                if (!zf71) {
                    addr_80491cc_112:
                    esp64 = esp64 - 4;
                    *esp64 = reinterpret_cast<struct s0*>(0xa313070);
                    goto addr_80491ce_113;
                } else {
                    if (!cf70) {
                        addr_80491ce_113:
                        tmp8_72 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx17) + 0x65) + *reinterpret_cast<unsigned char*>(&edx17 + 1));
                        cf73 = tmp8_72 < *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx17) + 0x65);
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx17) + 0x65) = tmp8_72;
                        if (__intrinsic()) {
                            while (1) {
                                *esp64 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*esp64) | *reinterpret_cast<unsigned char*>(&edx17 + 1));
                                addr_804924d_116:
                                ebx25 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(ebx25) - 1);
                                if (reinterpret_cast<signed char>(ebx25) < reinterpret_cast<signed char>(0)) 
                                    goto "???";
                                addr_8049240_117:
                                __asm__("lodsd ");
                                if (!eax22) 
                                    goto 0x8049271;
                                esp74 = reinterpret_cast<struct s26*>(esp64 - 4);
                                esp74->f0 = 0x804924a;
                                eax22 = fun_80492f1();
                                esp64 = &esp74->f4;
                            }
                        } else {
                            if (cf73) 
                                goto addr_804924d_116;
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx25) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx25) + 0x6f) & *reinterpret_cast<unsigned char*>(&ebx25));
                            of75 = 0;
                            goto addr_80491da_121;
                        }
                    } else {
                        eax22 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(eax22) - 0x682d6973);
                        goto addr_80491a5_123;
                    }
                }
            }
            __asm__("a16 outsb ");
            __asm__("popad ");
            __asm__("insb ");
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp19) + 0x6e) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp19) + 0x6e) & *reinterpret_cast<unsigned char*>(&edx17 + 1));
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp19) + 0x6e)) {
                addr_80491a5_123:
                below_or_equal76 = reinterpret_cast<unsigned char>(eax22) <= reinterpret_cast<unsigned char>(0x2d65682d);
                eax22 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(eax22) - 0x2d65682d);
                of75 = __intrinsic();
                if (below_or_equal76) {
                    addr_80491da_121:
                    if (of75) 
                        goto 0x8049252;
                } else {
                    eax22 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(eax22) - 0x6576);
                    *reinterpret_cast<struct s0**>(eax22) = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(eax22)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
                    tmp8_77 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(eax22)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
                    cf78 = reinterpret_cast<unsigned char>(tmp8_77) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(eax22));
                    *reinterpret_cast<struct s0**>(eax22) = tmp8_77;
                    if (cf78) {
                        addr_804921d_126:
                        esp64 = esp64 - 4;
                        *esp64 = reinterpret_cast<struct s0*>(0x2c706c65);
                        ge8000a68 = 0;
                        goto addr_8049229_127;
                    } else {
                        if (__intrinsic()) {
                            addr_8049229_127:
                            *reinterpret_cast<struct s0**>(eax22) = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(eax22)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
                            *reinterpret_cast<struct s0**>(eax22) = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(eax22)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
                            goto addr_804922e_129;
                        } else {
                            if (cf78) {
                                addr_8049230_131:
                                ebx25 = *esp64;
                                esp64 = esp64 + 4;
                                goto addr_8049237_132;
                            } else {
                                *reinterpret_cast<struct s0**>(eax22) = reinterpret_cast<struct s0*>(0);
                                __asm__("popad ");
                                if (1) {
                                    addr_804922e_129:
                                    esp64 = esp64 + 4;
                                    goto addr_8049230_131;
                                } else {
                                    if (*reinterpret_cast<struct s0**>(eax22)) {
                                        addr_8049237_132:
                                        ebx25 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(ebx25) - 1);
                                        if (!ebx25) 
                                            goto 0x8049250; else 
                                            goto addr_804923a_135;
                                    } else {
                                        *reinterpret_cast<struct s0**>(eax22) = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(eax22)) - reinterpret_cast<uint32_t>(esp64));
                                        goto addr_80491cc_112;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                *reinterpret_cast<unsigned char*>(&edx17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx17) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x3a0a0018));
                goto addr_8049136_25;
            }
        }
    }
    ebp79 = reinterpret_cast<uint32_t>(edi32->f6e * 0x5d297328);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi20) + 0x75) = 0;
    __asm__("insd ");
    *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | ecx->f0);
    eax80 = reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) - 0x6769732d);
    __asm__("outsb ");
    __asm__("popad ");
    __asm__("insb ");
    *eax80 = 0;
    eax81 = eax80 - 0x6e092973;
    __asm__("outsd ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi32) + 0x70) = 0;
    if (!*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi32) + 0x70)) 
        goto 0x804926c;
    __asm__("outsd ");
    __asm__("outsb ");
    *eax81 = 0;
    if (0) 
        goto 0x804927c;
    __asm__("outsd ");
    if (0) 
        goto 0x8049280;
    *reinterpret_cast<struct s0**>(edx17) = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(edx17)) - reinterpret_cast<uint32_t>(ecx));
    g7265762d = g7265762d | ebp79;
    if (1) 
        goto 0x8049280;
    __asm__("outsd ");
    __asm__("outsb ");
    *reinterpret_cast<signed char*>(&eax81) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax81) - 32);
    eax22 = reinterpret_cast<struct s0*>(eax81 - 0x2d2d0976);
    goto addr_804921d_126;
    addr_804923a_135:
    esp64 = esp64 - 4;
    *esp64 = reinterpret_cast<struct s0*>(0);
    goto addr_8049240_117;
    addr_8048f88_64:
    if (cf9) {
        addr_8048faa_143:
        if (cf9) {
            addr_8049019_107:
            tmp8_82 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(edx17)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
            cf35 = reinterpret_cast<unsigned char>(tmp8_82) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(edx17));
            *reinterpret_cast<struct s0**>(edx17) = tmp8_82;
            edx17 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(edx17) + 1);
            zf36 = edx17 == 0;
            __asm__("popad ");
            __asm__("arpl [ebx+0x67], bp");
            goto addr_8049022_51;
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx25) + 0x6c) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebx25) + 0x6c) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            __asm__("outsd ");
            __asm__("arpl [ebx+0xa], bp");
            goto addr_8048fb4_83;
        }
    } else {
        *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(esp2) - 4) = ebx25;
        esp2 = reinterpret_cast<struct s0*>(edi83->f6e * 0x32206c61);
        *reinterpret_cast<unsigned char*>(&edx17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx17) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x420a000d));
        cf9 = 0;
        goto addr_8048f98_9;
    }
    addr_8048f25_74:
    if (!zf44) {
        addr_8048fa1_13:
        goto addr_8048fa2_146;
    } else {
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp19) + 0x72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp19) + 0x72) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        cf9 = 0;
        if (0) {
            addr_8048fa2_146:
            *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) | ecx->f6c);
            cf9 = 0;
            __asm__("popad ");
            goto addr_8048faa_143;
        } else {
            if (0) {
                addr_8048f3f_80:
                goto addr_8048f41_82;
            } else {
                goto addr_8048f36_68;
            }
        }
    }
    addr_8048f1b_75:
    *reinterpret_cast<struct s0**>(eax22) = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(eax22)) | reinterpret_cast<unsigned char>(eax22));
    *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) | ecx->f62);
    cf9 = 0;
    goto addr_8048f21_77;
    addr_8048f24_78:
    *reinterpret_cast<unsigned char*>(&edx17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx17) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x420a000b));
    zf44 = *reinterpret_cast<unsigned char*>(&edx17) == 0;
    goto addr_8048f25_74;
    addr_8048fdb_89:
    if (sf14) {
        addr_8049047_150:
        if (cf9) {
            addr_80490b9_59:
            goto addr_80490ba_151;
        } else {
            if (!zf12) {
                addr_80490ba_151:
                *reinterpret_cast<struct s0**>(edx17) = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(edx17)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
                esp84 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(esp2) - 4);
                *reinterpret_cast<struct s0**>(esp84) = esi20;
                esi20 = reinterpret_cast<struct s0*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx17) + 0x74) * 0x206c6175);
                esp2 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(esp84) - 4);
                *reinterpret_cast<struct s0**>(esp2) = esp2;
                ebp19 = reinterpret_cast<struct s0*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ebp19) + 0x65) * 0x78652072);
                cf24 = __intrinsic();
                of21 = __intrinsic();
                goto addr_80490cb_33;
            } else {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x72) & *reinterpret_cast<unsigned char*>(&edx17));
                cf24 = 0;
                zf26 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax22) + 0x72) == 0;
                of21 = 0;
                goto addr_8049050_56;
            }
        }
    } else {
        if (zf12) {
            addr_8049045_87:
            __asm__("arpl [ebx+0x67], bp");
            goto addr_8049047_150;
        } else {
            *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(ebx25)));
            goto addr_8048fe3_15;
        }
    }
}

void fun_804916c() {
}

void fun_8049176() {
}

void fun_8049178() {
    __asm__("enter 0xeefe, 0xfe");
}

void fun_8048dbc() {
    __asm__("retf 0xe2f4");
    __asm__("hlt ");
}

void fun_8048e29(int16_t cx) {
    uint1_t below_or_equal2;
    unsigned char bl3;
    unsigned char bh4;
    unsigned char dl5;
    signed char dl6;
    signed char* edi7;

    __asm__("cli ");
    __asm__("outsb ");
    __asm__("cli ");
    __asm__("cli ");
    __asm__("sti ");
    below_or_equal2 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>((bl3 ^ reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(bh4 | dl5) - dl6)) == 0)));
    do {
        __asm__("pushad ");
        __asm__("sti ");
    } while (below_or_equal2);
    *edi7 = -6;
    __asm__("sti ");
    __asm__("retf 0xdefb");
    __asm__("sti ");
    __asm__("in al, dx");
    __asm__("outsb ");
}

void fun_8048e7c() {
    int32_t eax1;

    goto *reinterpret_cast<int32_t*>(eax1 + 1 - 1);
}

void fun_8048db0() {
    __asm__("hlt ");
}

void fun_8048dc2() {
    __asm__("cli ");
    __asm__("hlt ");
}

void fun_8048e80() {
    int32_t esi1;

    goto *reinterpret_cast<int32_t*>(esi1 - 0x2b003f01);
}

void fun_8049191() {
    int32_t eax1;

    *reinterpret_cast<int32_t*>(eax1 + 0x1f90)(__return_address());
}

void fun_80492d3() {
}

void fun_8048db4() {
    __asm__("hlt ");
}

void fun_e4f63245();

void fun_8048dc4() {
    int1_t sf1;
    signed char* esi2;
    signed char* v3;

    do {
        sf1 = reinterpret_cast<int32_t>(esi2 - 1) < 0;
        esi2 = v3;
    } while (sf1);
    fun_e4f63245();
    esi2[reinterpret_cast<int32_t>(esi2) * 8] = -esi2[reinterpret_cast<int32_t>(esi2) * 8];
}

void fun_8048e89() {
    int32_t edx1;

    goto edx1;
}

void fun_8048dba() {
    signed char* edi1;
    signed char* esi2;

    *edi1 = *esi2;
    __asm__("hlt ");
}

void fun_8048e6c() {
    int1_t sf1;

    do {
    } while (sf1);
}

void fun_8049170() {
    int1_t of1;

    do {
    } while (of1);
}
