
struct s0 {
    signed char[7] pad7;
    unsigned char f7;
};

int32_t fun_8048b47(uint32_t ecx) {
    void* v2;
    void* edi3;
    unsigned char* edi4;
    struct s0* edi5;
    int32_t edx6;
    unsigned char al7;
    unsigned char* esi8;
    unsigned char* edi9;
    int32_t eax10;
    int1_t zf11;
    int32_t ecx12;

    v2 = edi3;
    edi4 = &edi5->f7;
    edx6 = 8;
    do {
        al7 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx) & 15) + 48);
        if (reinterpret_cast<signed char>(al7) > reinterpret_cast<signed char>(57)) {
            al7 = reinterpret_cast<unsigned char>(al7 + 39);
        }
        *edi4 = al7;
        --edi4;
        ecx = ecx >> 4;
    } while (ecx && (--edx6, !!edx6));
    esi8 = edi4;
    edi9 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(v2) - 1);
    eax10 = -(edx6 - 9);
    zf11 = eax10 == 0;
    ecx12 = eax10 + 1;
    do {
        if (!ecx12) 
            break;
        --ecx12;
        *edi9 = *esi8;
        ++edi9;
        ++esi8;
    } while (!zf11);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi9) + eax10) = 0;
    return eax10;
}

struct s1 {
    int32_t f0;
    signed char[96] pad100;
    unsigned char f64;
    signed char[7] pad108;
    int32_t f6c;
    unsigned char f6e;
    unsigned char f6f;
    unsigned char f70;
};

struct s3 {
    int32_t f0;
    signed char[93] pad97;
    unsigned char f61;
    signed char[1] pad99;
    unsigned char f63;
    unsigned char f64;
    unsigned char f65;
    unsigned char f66;
    int32_t f67;
    signed char f68;
    unsigned char f69;
    int32_t f6b;
    unsigned char f6c;
    signed char f6d;
    unsigned char f6e;
    int32_t f70;
    signed char f72;
    unsigned char f74;
    int32_t f79;
};

struct s2 {
    struct s3* f0;
    int32_t f4;
};

struct s4 {
    signed char[1] pad1;
    int32_t f1;
};

struct s5 {
    unsigned char f0;
    signed char[104] pad105;
    unsigned char f69;
    signed char[5] pad111;
    signed char f6f;
    signed char[2] pad114;
    signed char f72;
    signed char[2] pad117;
    unsigned char f75;
    signed char[1] pad119;
    unsigned char f77;
};

struct s6 {
    signed char[120] pad120;
    signed char f78;
};

struct s7 {
    signed char[120] pad120;
    signed char f78;
};

struct s8 {
    int16_t f0;
    signed char[95] pad97;
    unsigned char f61;
    signed char[3] pad101;
    int32_t f65;
    signed char f67;
    int32_t f69;
    unsigned char f6b;
    unsigned char f6c;
    unsigned char f6d;
    unsigned char f6f;
    unsigned char f70;
    int32_t f72;
    signed char f74;
    unsigned char f75;
    int32_t f76;
};

struct s9 {
    signed char[108] pad108;
    signed char f6c;
};

struct s10 {
    signed char[108] pad108;
    unsigned char f6c;
};

struct s11 {
    signed char[108] pad108;
    unsigned char f6c;
};

struct s12 {
    signed char[108] pad108;
    signed char f6c;
};

struct s13 {
    signed char[108] pad108;
    signed char f6c;
};

struct s14 {
    signed char[104] pad104;
    signed char f68;
};

struct s15 {
    signed char[104] pad104;
    signed char f68;
};

struct s16 {
    signed char[104] pad104;
    signed char f68;
};

struct s17 {
    signed char[104] pad104;
    signed char f68;
};

struct s18 {
    signed char[104] pad104;
    signed char f68;
};

struct s19 {
    signed char[104] pad104;
    unsigned char f68;
};

struct s20 {
    signed char[104] pad104;
    unsigned char f68;
};

struct s21 {
    signed char[104] pad104;
    signed char f68;
};

struct s22 {
    signed char[114] pad114;
    signed char f72;
};

struct s23 {
    signed char[114] pad114;
    signed char f72;
};

struct s24 {
    signed char[114] pad114;
    signed char f72;
};

struct s25 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s26 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s27 {
    signed char[114] pad114;
    signed char f72;
};

struct s28 {
    signed char[101] pad101;
    signed char f65;
};

struct s29 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s30 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s31 {
    signed char[101] pad101;
    signed char f65;
};

struct s32 {
    signed char[99] pad99;
    signed char f63;
};

struct s33 {
    signed char[99] pad99;
    unsigned char f63;
};

struct s34 {
    signed char[99] pad99;
    unsigned char f63;
};

struct s35 {
    signed char[99] pad99;
    signed char f63;
};

struct s36 {
    int32_t f0;
    signed char[47] pad51;
    int32_t f33;
};

struct s37 {
    signed char[116] pad116;
    signed char f74;
};

struct s38 {
    signed char[116] pad116;
    signed char f74;
};

struct s39 {
    signed char[114] pad114;
    signed char f72;
};

struct s40 {
    signed char[114] pad114;
    signed char f72;
};

struct s41 {
    signed char[101] pad101;
    signed char f65;
};

struct s42 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s43 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s44 {
    signed char[101] pad101;
    signed char f65;
};

struct s45 {
    signed char[121] pad121;
    signed char f79;
};

struct s46 {
    signed char[121] pad121;
    unsigned char f79;
};

struct s47 {
    signed char[121] pad121;
    unsigned char f79;
};

struct s48 {
    signed char[121] pad121;
    signed char f79;
};

struct s49 {
    signed char[99] pad99;
    signed char f63;
};

struct s50 {
    signed char[99] pad99;
    unsigned char f63;
};

struct s51 {
    signed char[99] pad99;
    unsigned char f63;
};

struct s52 {
    signed char[99] pad99;
    signed char f63;
};

struct s53 {
    signed char[101] pad101;
    signed char f65;
};

struct s54 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s55 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s56 {
    signed char[101] pad101;
    signed char f65;
};

struct s57 {
    signed char[116] pad116;
    signed char f74;
};

struct s58 {
    signed char[116] pad116;
    unsigned char f74;
};

struct s59 {
    signed char[116] pad116;
    unsigned char f74;
};

struct s60 {
    signed char[116] pad116;
    signed char f74;
};

struct s61 {
    struct s3* f0;
    struct s3* f4;
};

struct s62 {
    signed char[116] pad116;
    signed char f74;
};

struct s63 {
    signed char[116] pad116;
    unsigned char f74;
};

struct s64 {
    signed char[116] pad116;
    unsigned char f74;
};

struct s65 {
    signed char[116] pad116;
    signed char f74;
};

struct s66 {
    signed char[99] pad99;
    signed char f63;
};

struct s67 {
    signed char[99] pad99;
    unsigned char f63;
};

struct s68 {
    signed char[99] pad99;
    unsigned char f63;
};

struct s69 {
    signed char[99] pad99;
    signed char f63;
};

struct s70 {
    signed char[108] pad108;
    signed char f6c;
};

struct s71 {
    signed char[108] pad108;
    signed char f6c;
};

struct s72 {
    signed char[101] pad101;
    signed char f65;
};

struct s73 {
    signed char[101] pad101;
    signed char f65;
};

struct s74 {
    signed char[101] pad101;
    signed char f65;
};

struct s75 {
    signed char[116] pad116;
    signed char f74;
};

struct s76 {
    signed char[116] pad116;
    unsigned char f74;
};

struct s77 {
    signed char[116] pad116;
    unsigned char f74;
};

struct s78 {
    signed char[116] pad116;
    signed char f74;
};

struct s79 {
    signed char[116] pad116;
    signed char f74;
};

struct s80 {
    signed char[116] pad116;
    unsigned char f74;
};

struct s81 {
    signed char[116] pad116;
    unsigned char f74;
};

struct s82 {
    signed char[116] pad116;
    signed char f74;
};

struct s83 {
    signed char[101] pad101;
    signed char f65;
};

struct s84 {
    signed char[101] pad101;
    signed char f65;
};

struct s85 {
    signed char[101] pad101;
    signed char f65;
};

struct s86 {
    signed char[104] pad104;
    signed char f68;
};

struct s87 {
    signed char[104] pad104;
    unsigned char f68;
};

struct s88 {
    signed char[104] pad104;
    unsigned char f68;
};

struct s89 {
    signed char[104] pad104;
    signed char f68;
};

struct s90 {
    signed char[97] pad97;
    signed char f61;
};

struct s91 {
    signed char[97] pad97;
    unsigned char f61;
};

struct s92 {
    signed char[97] pad97;
    unsigned char f61;
};

struct s93 {
    signed char[97] pad97;
    signed char f61;
};

struct s94 {
    signed char[101] pad101;
    signed char f65;
};

struct s95 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s96 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s97 {
    signed char[101] pad101;
    signed char f65;
};

struct s98 {
    signed char[103] pad103;
    signed char f67;
};

struct s99 {
    signed char[103] pad103;
    unsigned char f67;
};

struct s100 {
    signed char[103] pad103;
    unsigned char f67;
};

struct s101 {
    signed char[103] pad103;
    signed char f67;
};

struct s102 {
    signed char[104] pad104;
    signed char f68;
};

struct s103 {
    signed char[104] pad104;
    unsigned char f68;
};

struct s104 {
    signed char[104] pad104;
    unsigned char f68;
};

struct s105 {
    signed char[104] pad104;
    signed char f68;
};

struct s106 {
    signed char[101] pad101;
    signed char f65;
};

struct s107 {
    signed char[101] pad101;
    signed char f65;
};

struct s108 {
    signed char[101] pad101;
    signed char f65;
};

struct s109 {
    signed char[101] pad101;
    signed char f65;
};

struct s110 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s111 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s112 {
    signed char[101] pad101;
    signed char f65;
};

struct s113 {
    signed char[115] pad115;
    signed char f73;
};

struct s114 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s115 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s116 {
    signed char[115] pad115;
    signed char f73;
};

struct s117 {
    signed char[115] pad115;
    signed char f73;
};

struct s118 {
    signed char[101] pad101;
    signed char f65;
};

struct s119 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s120 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s121 {
    signed char[101] pad101;
    signed char f65;
};

struct s122 {
    signed char[101] pad101;
    signed char f65;
};

struct s123 {
    signed char[105] pad105;
    signed char f69;
};

struct s124 {
    signed char[105] pad105;
    signed char f69;
};

struct s125 {
    signed char[101] pad101;
    signed char f65;
};

struct s126 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s127 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s128 {
    signed char[101] pad101;
    signed char f65;
};

struct s129 {
    signed char[101] pad101;
    signed char f65;
};

struct s130 {
    signed char[121] pad121;
    signed char f79;
};

struct s131 {
    signed char[121] pad121;
    unsigned char f79;
};

struct s132 {
    signed char[121] pad121;
    unsigned char f79;
};

struct s133 {
    signed char[105] pad105;
    signed char f69;
};

struct s134 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s135 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s136 {
    signed char[105] pad105;
    signed char f69;
};

struct s137 {
    signed char[105] pad105;
    signed char f69;
};

struct s138 {
    signed char[101] pad101;
    signed char f65;
};

struct s139 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s140 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s141 {
    signed char[101] pad101;
    signed char f65;
};

struct s142 {
    signed char[101] pad101;
    signed char f65;
};

struct s143 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s144 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s145 {
    signed char[101] pad101;
    signed char f65;
};

struct s146 {
    signed char[121] pad121;
    signed char f79;
};

struct s147 {
    signed char[121] pad121;
    signed char f79;
};

struct s148 {
    signed char[101] pad101;
    signed char f65;
};

struct s149 {
    signed char[101] pad101;
    signed char f65;
};

void fun_8048000(struct s1* ecx) {
    struct s2* esp2;
    int1_t less_or_equal3;
    int32_t eax4;
    int32_t* ebx5;
    int32_t* ebx6;
    int32_t eax7;
    signed char* eax8;
    signed char* eax9;
    signed char al10;
    signed char* eax11;
    signed char* eax12;
    signed char al13;
    signed char* eax14;
    signed char* eax15;
    signed char al16;
    signed char* eax17;
    signed char* eax18;
    signed char al19;
    void** eax20;
    signed char al21;
    signed char* eax22;
    void** eax23;
    int32_t ebx24;
    int32_t ebx25;
    signed char dh26;
    struct s3* edi27;
    struct s4* edi28;
    struct s5* eax29;
    unsigned char tmp8_30;
    uint1_t cf31;
    struct s6* ebp32;
    struct s7* ebp33;
    struct s3* esi34;
    int1_t zf35;
    struct s8* ebp36;
    int32_t* edx37;
    uint1_t cf38;
    int1_t of39;
    int1_t sf40;
    uint1_t zf41;
    unsigned char tmp8_42;
    unsigned char dh43;
    uint1_t below_or_equal44;
    signed char dh45;
    int32_t* ebp46;
    unsigned char tmp8_47;
    struct s9* ebx48;
    struct s10* ebx49;
    struct s11* ebx50;
    struct s12* ebx51;
    struct s13* ebx52;
    signed char dh53;
    struct s14* ebx54;
    struct s15* ebx55;
    int32_t* edx56;
    struct s16* ebx57;
    struct s17* ebx58;
    unsigned char tmp8_59;
    struct s18* ebx60;
    uint1_t cf61;
    struct s19* ebx62;
    struct s20* ebx63;
    struct s21* ebx64;
    struct s22* edx65;
    struct s23* edx66;
    unsigned char tmp8_67;
    unsigned char dh68;
    int1_t cf69;
    unsigned char tmp8_70;
    unsigned char dh71;
    unsigned char tmp8_72;
    signed char dh73;
    int1_t cf74;
    unsigned char tmp8_75;
    struct s24* ebx76;
    struct s25* ebx77;
    struct s26* ebx78;
    int1_t zf79;
    struct s27* ebx80;
    unsigned char tmp8_81;
    struct s28* ebx82;
    signed char dh83;
    struct s29* ebx84;
    struct s30* ebx85;
    struct s31* ebx86;
    unsigned char tmp8_87;
    struct s32* ebx88;
    signed char dh89;
    struct s33* ebx90;
    struct s34* ebx91;
    struct s35* ebx92;
    signed char dh93;
    struct s37* ebx94;
    struct s38* ebx95;
    signed char dh96;
    unsigned char tmp8_97;
    int1_t cf98;
    int1_t zf99;
    struct s39* edx100;
    struct s40* edx101;
    unsigned char tmp8_102;
    unsigned char tmp8_103;
    unsigned char tmp8_104;
    int1_t of105;
    unsigned char tmp8_106;
    struct s41* bx107;
    struct s42* bx108;
    struct s43* bx109;
    struct s44* bx110;
    unsigned char tmp8_111;
    int32_t ebx112;
    unsigned char tmp8_113;
    unsigned char tmp8_114;
    unsigned char tmp8_115;
    struct s45* ebx116;
    signed char dh117;
    struct s46* ebx118;
    struct s47* ebx119;
    struct s48* ebx120;
    unsigned char tmp8_121;
    signed char dh122;
    int32_t* edx123;
    unsigned char tmp8_124;
    struct s49* ebx125;
    signed char dh126;
    struct s50* ebx127;
    struct s51* ebx128;
    struct s52* ebx129;
    unsigned char tmp8_130;
    signed char bl131;
    unsigned char tmp8_132;
    uint1_t below_or_equal133;
    uint32_t* edx134;
    unsigned char tmp8_135;
    struct s53* ebx136;
    signed char dh137;
    struct s54* ebx138;
    struct s55* ebx139;
    struct s56* ebx140;
    unsigned char tmp8_141;
    int1_t zf142;
    uint32_t* edx143;
    unsigned char tmp8_144;
    struct s57* edx145;
    signed char dh146;
    uint1_t cf147;
    struct s58* edx148;
    struct s59* edx149;
    struct s60* edx150;
    struct s61* esp151;
    unsigned char tmp8_152;
    struct s62* edx153;
    signed char dh154;
    struct s63* edx155;
    struct s64* edx156;
    struct s65* edx157;
    unsigned char tmp8_158;
    unsigned char tmp8_159;
    struct s66* ebx160;
    signed char dh161;
    struct s67* ebx162;
    struct s68* ebx163;
    struct s69* ebx164;
    struct s70* ebx165;
    struct s71* ebx166;
    struct s72* ebx167;
    struct s73* ebx168;
    signed char dh169;
    struct s74* ebx170;
    unsigned char tmp8_171;
    struct s75* edx172;
    signed char dh173;
    struct s76* edx174;
    struct s77* edx175;
    struct s78* edx176;
    unsigned char tmp8_177;
    struct s79* edx178;
    signed char dh179;
    struct s80* edx180;
    struct s81* edx181;
    struct s82* edx182;
    void* ebx183;
    uint32_t* edx184;
    struct s83* ebx185;
    struct s84* ebx186;
    signed char dh187;
    struct s85* ebx188;
    uint32_t* edx189;
    unsigned char tmp8_190;
    signed char dh191;
    unsigned char tmp8_192;
    signed char dh193;
    int1_t cf194;
    unsigned char tmp8_195;
    void* ebx196;
    void* ebx197;
    uint32_t* edx198;
    unsigned char tmp8_199;
    void* edx200;
    void* edx201;
    signed char dh202;
    signed char dh203;
    unsigned char tmp8_204;
    signed char dh205;
    unsigned char tmp8_206;
    struct s86* ebx207;
    uint1_t cf208;
    struct s87* ebx209;
    struct s88* ebx210;
    struct s89* ebx211;
    unsigned char tmp8_212;
    int16_t* esp213;
    int16_t cs214;
    uint32_t tmp32_215;
    uint1_t cf216;
    void* ebx217;
    unsigned char tmp8_218;
    struct s90* ebx219;
    struct s91* ebx220;
    struct s92* ebx221;
    struct s93* ebx222;
    unsigned char tmp8_223;
    struct s94* ebx224;
    signed char dh225;
    struct s95* ebx226;
    struct s96* ebx227;
    struct s97* ebx228;
    unsigned char tmp8_229;
    struct s98* ebx230;
    signed char dh231;
    struct s99* ebx232;
    struct s100* ebx233;
    struct s101* ebx234;
    unsigned char tmp8_235;
    unsigned char tmp8_236;
    uint1_t cf237;
    int32_t* edx238;
    unsigned char tmp8_239;
    unsigned char dh240;
    unsigned char tmp8_241;
    struct s102* ebx242;
    struct s103* ebx243;
    struct s104* ebx244;
    struct s105* ebx245;
    struct s106* ebx246;
    struct s107* ebx247;
    signed char dh248;
    struct s108* ebx249;
    unsigned char tmp8_250;
    struct s109* edx251;
    signed char dh252;
    struct s110* edx253;
    struct s111* edx254;
    struct s112* edx255;
    unsigned char tmp8_256;
    struct s113* ebx257;
    signed char dh258;
    struct s114* ebx259;
    struct s115* ebx260;
    struct s116* ebx261;
    struct s117* ebx262;
    unsigned char tmp8_263;
    struct s118* ebx264;
    signed char dh265;
    struct s119* ebx266;
    struct s120* ebx267;
    struct s121* ebx268;
    struct s122* ebx269;
    struct s123* ebx270;
    struct s124* ebx271;
    signed char dh272;
    signed char dh273;
    unsigned char tmp8_274;
    unsigned char tmp8_275;
    unsigned char tmp8_276;
    signed char dh277;
    unsigned char tmp8_278;
    struct s125* ebx279;
    signed char dh280;
    struct s126* ebx281;
    struct s127* ebx282;
    struct s128* ebx283;
    struct s129* ebx284;
    signed char dh285;
    unsigned char tmp8_286;
    struct s130* ebx287;
    signed char dh288;
    struct s131* ebx289;
    struct s132* ebx290;
    int32_t* edx291;
    unsigned char tmp8_292;
    struct s133* ebx293;
    signed char dh294;
    struct s134* ebx295;
    struct s135* ebx296;
    struct s136* ebx297;
    struct s137* ebx298;
    signed char dh299;
    unsigned char tmp8_300;
    struct s138* ebx301;
    signed char dh302;
    struct s139* ebx303;
    struct s140* ebx304;
    struct s141* ebx305;
    void* ebx306;
    void* ebx307;
    signed char dh308;
    unsigned char tmp8_309;
    signed char dh310;
    unsigned char tmp8_311;
    struct s142* ebx312;
    signed char dh313;
    struct s143* ebx314;
    struct s144* ebx315;
    struct s145* ebx316;
    unsigned char tmp8_317;
    struct s146* ebx318;
    struct s147* ebx319;
    signed char dh320;
    struct s148* edx321;
    struct s149* edx322;
    signed char dh323;

    esp2 = reinterpret_cast<struct s2*>(__zero_stack_offset());
    if (less_or_equal3) {
        ecx->f0 = ecx->f0 + eax4;
        *ebx5 = *ebx6 + eax7;
        *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
        *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
        *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
        *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
        *reinterpret_cast<signed char*>(&eax20) = reinterpret_cast<signed char>(al21 + *eax22);
        eax23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax20) + reinterpret_cast<int32_t>(*eax20));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<uint32_t>(eax23));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<unsigned char*>(ebx24 + 0x2c0804) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebx25 + 0x2c0804)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax23) + reinterpret_cast<uint32_t>(eax23)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax23) + reinterpret_cast<uint32_t>(eax23)) + dh26);
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<uint32_t>(eax23));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<unsigned char*>(eax23 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax23 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<void**>(&eax23) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)) + 8);
        edi27 = reinterpret_cast<struct s3*>(&edi28->f1);
        eax29 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(eax23) | 0x10af0000);
        eax29->f0 = reinterpret_cast<unsigned char>(eax29->f0 + *reinterpret_cast<unsigned char*>(&eax29));
        esp2 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(esp2) - 1 + 2);
        eax29->f0 = reinterpret_cast<unsigned char>(eax29->f0 + *reinterpret_cast<unsigned char*>(&eax29));
    }
    tmp8_30 = reinterpret_cast<unsigned char>(eax29->f0 + *reinterpret_cast<unsigned char*>(&eax29));
    cf31 = reinterpret_cast<uint1_t>(tmp8_30 < eax29->f0);
    eax29->f0 = tmp8_30;
    eax29->f0 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax29->f0 + *reinterpret_cast<unsigned char*>(&eax29)) + cf31);
    ebp32->f78 = reinterpret_cast<signed char>(ebp33->f78 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
    esi34 = reinterpret_cast<struct s3*>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<uint32_t>(eax29) + 0x66) * 0x6b726f);
    zf35 = __undefined();
    if (__intrinsic()) {
        addr_80480bd_4:
        if (zf35) {
            addr_8048133_5:
            __asm__("insd ");
            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6b) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6b) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
            esi34 = reinterpret_cast<struct s3*>(*edx37 * 0x69646d72);
            cf38 = __intrinsic();
            of39 = __intrinsic();
            sf40 = __undefined();
            zf41 = __undefined();
            goto addr_804813a_6;
        } else {
            esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<uint32_t>(eax29) + 0x6d) * 0x746e756f);
            tmp8_42 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6d) + dh43);
            cf38 = reinterpret_cast<uint1_t>(tmp8_42 < *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6d));
            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6d) = tmp8_42;
            zf41 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6d) == 0);
            sf40 = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6d) < reinterpret_cast<signed char>(0);
            of39 = __intrinsic();
            below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
            __asm__("outsd ");
            if (!zf41) {
                addr_804813f_8:
            } else {
                addr_80480d1_9:
                if (zf41) 
                    goto addr_80480d3_10; else 
                    goto addr_80480d3_10;
            }
        }
    } else {
        __asm__("popad ");
        edi27->f6d = reinterpret_cast<signed char>(edi27->f6d + dh45);
        esi34 = reinterpret_cast<struct s3*>(*ebp46 * 0x6e65706f);
        tmp8_47 = reinterpret_cast<unsigned char>(ebx48->f6c + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
        cf38 = reinterpret_cast<uint1_t>(tmp8_47 < ebx49->f6c);
        ebx50->f6c = tmp8_47;
        zf41 = reinterpret_cast<uint1_t>(ebx51->f6c == 0);
        sf40 = ebx52->f6c < 0;
        of39 = __intrinsic();
        below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
        __asm__("outsd ");
        if (!cf38) {
            goto addr_80480d1_9;
        }
        edi27->f61 = reinterpret_cast<unsigned char>(edi27->f61 + dh53);
        __asm__("popad ");
        __asm__("insb ");
        ebp36 = reinterpret_cast<struct s8*>(*reinterpret_cast<int32_t*>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<uint32_t>(esi34) * 2 + 0x69) * 0x72630064 + 0x6b) * 0x65786500);
        __asm__("arpl [esi+0x65], si");
        ebx54->f68 = reinterpret_cast<signed char>(ebx55->f68 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
        esi34 = reinterpret_cast<struct s3*>(*edx56 * 0x656d6974);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6b) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6b) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
        __asm__("outsb ");
        __asm__("outsd ");
        ebx57->f68 = reinterpret_cast<signed char>(ebx58->f68 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
        __asm__("insd ");
        __asm__("outsd ");
        tmp8_59 = reinterpret_cast<unsigned char>(ebx60->f68 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
        cf61 = reinterpret_cast<uint1_t>(tmp8_59 < ebx62->f68);
        ebx63->f68 = tmp8_59;
        __asm__("outsd ");
        if (!reinterpret_cast<uint1_t>(cf61 | reinterpret_cast<uint1_t>(ebx64->f68 == 0))) {
            goto addr_8048119_16;
        }
        edx65->f72 = reinterpret_cast<signed char>(edx66->f72 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
        __asm__("popad ");
        eax29 = reinterpret_cast<struct s5*>(eax29->f0 * 0x6f);
        __asm__("insb ");
        if (!__intrinsic()) 
            goto addr_804812a_18; else 
            goto addr_80480b6_19;
    }
    if (!zf41) {
        addr_80481b5_21:
        if (!zf41) {
            addr_8048226_22:
            if (of39) {
                addr_804828e_23:
                if (!sf40) {
                    addr_80482fe_24:
                    if (zf41) {
                        goto addr_8048373_26;
                    }
                } else {
                    __asm__("insb ");
                    goto addr_8048292_28;
                }
            } else {
                __asm__("outsb ");
                ebp36 = reinterpret_cast<struct s8*>(esi34->f67 * 0x74657300);
                goto addr_804822c_30;
            }
        } else {
            __asm__("popad ");
            __asm__("insd ");
            tmp8_67 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6d) + dh68);
            cf69 = tmp8_67 < *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6d);
            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6d) = tmp8_67;
            goto addr_80481bd_32;
        }
    } else {
        tmp8_70 = reinterpret_cast<unsigned char>(eax29->f69 + dh71);
        cf38 = reinterpret_cast<uint1_t>(tmp8_70 < eax29->f69);
        eax29->f69 = tmp8_70;
        zf41 = reinterpret_cast<uint1_t>(eax29->f69 == 0);
        sf40 = reinterpret_cast<signed char>(eax29->f69) < reinterpret_cast<signed char>(0);
        of39 = __intrinsic();
        if (of39) {
            addr_80481af_34:
            goto addr_80481b5_21;
        } else {
            tmp8_72 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<uint32_t>(ebp36) * 2 + 0x6d) + dh73);
            cf38 = reinterpret_cast<uint1_t>(tmp8_72 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<uint32_t>(ebp36) * 2 + 0x6d));
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<uint32_t>(ebp36) * 2 + 0x6d) = tmp8_72;
            zf41 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<uint32_t>(ebp36) * 2 + 0x6d) == 0);
            of39 = __intrinsic();
            below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
            goto addr_804814c_36;
        }
    }
    if (cf38) {
        addr_804836d_38:
        __asm__("popad ");
        __asm__("outsb ");
        goto addr_8048370_39;
    } else {
        __asm__("outsd ");
        if (cf38) {
            addr_8048370_39:
            if (!zf41) {
                addr_80483e3_41:
                esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi27) + 0x70) * 0x6d636f72);
                cf74 = __intrinsic();
                __asm__("popad ");
                if (!cf74) {
                    addr_8048458_42:
                    goto addr_8048459_43;
                } else {
                    tmp8_75 = reinterpret_cast<unsigned char>(ebx76->f72 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
                    cf74 = tmp8_75 < ebx77->f72;
                    ebx78->f72 = tmp8_75;
                    zf79 = ebx80->f72 == 0;
                    __asm__("popad ");
                    if (zf79) {
                        addr_8048459_43:
                        if (!cf74) {
                            addr_80484d7_45:
                            __asm__("insb ");
                            __asm__("insb ");
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x75) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x75) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
                            __asm__("outsb ");
                            __asm__("insb ");
                            goto addr_80484df_46;
                        } else {
                            if (!cf74) 
                                goto addr_80484c3_48;
                            __asm__("popad ");
                            __asm__("insb ");
                            __asm__("insb ");
                            tmp8_81 = reinterpret_cast<unsigned char>(ebx82->f65 + dh83);
                            cf74 = tmp8_81 < ebx84->f65;
                            ebx85->f65 = tmp8_81;
                            zf79 = ebx86->f65 == 0;
                            goto addr_8048466_50;
                        }
                    } else {
                        edi27 = esp2->f0;
                        esp2 = reinterpret_cast<struct s2*>(&esp2->f4);
                        __asm__("insd ");
                        __asm__("outsd ");
                        if (!zf79) {
                            addr_8048466_50:
                            if (zf79) {
                                addr_80484ce_52:
                                __asm__("outsd ");
                                __asm__("arpl [ebx+0x0], bp");
                                __asm__("insd ");
                                __asm__("insb ");
                                __asm__("outsd ");
                                __asm__("arpl [ebx+0x61], bp");
                                goto addr_80484d7_45;
                            } else {
                                if (!cf74) {
                                    addr_80484df_46:
                                    __asm__("outsd ");
                                    __asm__("arpl [ebx+0x61], bp");
                                    __asm__("insb ");
                                    __asm__("insb ");
                                    tmp8_87 = reinterpret_cast<unsigned char>(ebx88->f63 + dh89);
                                    cf38 = reinterpret_cast<uint1_t>(tmp8_87 < ebx90->f63);
                                    ebx91->f63 = tmp8_87;
                                    zf41 = reinterpret_cast<uint1_t>(ebx92->f63 == 0);
                                    of39 = __intrinsic();
                                    below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                                    goto addr_80484e6_54;
                                } else {
                                    esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(&(*reinterpret_cast<struct s36**>(&esi34))->f0) * 0x736c6c5f);
                                    goto addr_8048473_56;
                                }
                            }
                        } else {
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) + 0x6e) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) + 0x6e) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
                            goto addr_80483fc_58;
                        }
                    }
                }
            } else {
                addr_8048373_26:
                ecx->f64 = reinterpret_cast<unsigned char>(ecx->f64 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
                goto addr_8048376_59;
            }
        } else {
            addr_8048307_60:
            if (zf41) {
                addr_8048382_61:
                esi34 = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(*reinterpret_cast<struct s3**>(reinterpret_cast<uint32_t>(esp2) + reinterpret_cast<uint32_t>(esi34))) * 0x70617773);
                goto addr_8048384_62;
            } else {
                eax29->f72 = reinterpret_cast<signed char>(eax29->f72 + dh93);
                __asm__("outsd ");
                *reinterpret_cast<int16_t*>(&ebp36) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<uint32_t>(eax29) + 0x73) * 0x6174);
                cf38 = __intrinsic();
                zf41 = __undefined();
                goto addr_8048310_64;
            }
        }
    }
    addr_80480d3_10:
    if (!cf38) {
        addr_804813a_6:
        goto addr_804813f_8;
    } else {
        if (zf41) {
            addr_804814c_36:
        } else {
            esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<uint32_t>(eax29) + 0x67) * 0x69757465);
            ebx94->f74 = reinterpret_cast<signed char>(ebx95->f74 + dh96);
            ebp36 = reinterpret_cast<struct s8*>(ebp36->f65 * 0x72747000);
            __asm__("popad ");
            __asm__("arpl [ebp+0x0], sp");
            __asm__("popad ");
            __asm__("insb ");
            __asm__("popad ");
            if (__intrinsic()) 
                goto addr_8048160_67;
            tmp8_97 = reinterpret_cast<unsigned char>(edi27->f69 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
            cf98 = tmp8_97 < edi27->f69;
            edi27->f69 = tmp8_97;
            zf99 = edi27->f69 == 0;
            if (!cf98) 
                goto addr_804816e_69; else 
                goto addr_80480fa_70;
        }
    }
    if (of39 || (edx100->f72 = reinterpret_cast<signed char>(edx101->f72 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1)), eax29 = reinterpret_cast<struct s5*>(eax29->f0 * 0x73), cf38 = __intrinsic(), of39 = __intrinsic(), zf41 = __undefined(), below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41), zf41)) {
        goto addr_80481c6_73;
    } else {
        esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<uint32_t>(eax29) + 0x67) * 0x69677465);
        goto addr_8048160_67;
    }
    addr_804816e_69:
    tmp8_102 = reinterpret_cast<unsigned char>(edi27->f65 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
    cf38 = reinterpret_cast<uint1_t>(tmp8_102 < edi27->f65);
    edi27->f65 = tmp8_102;
    zf41 = reinterpret_cast<uint1_t>(edi27->f65 == 0);
    of39 = __intrinsic();
    below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
    if (zf41) {
        if (of39) {
            addr_8048243_76:
            if (zf41) {
                addr_80482bb_77:
            } else {
                addr_8048249_78:
                __asm__("insb ");
                ebp36 = reinterpret_cast<struct s8*>(*reinterpret_cast<int32_t*>(&ebp36->f67) * 0x65670074);
                zf41 = __undefined();
                goto addr_8048250_79;
            }
        } else {
            tmp8_103 = reinterpret_cast<unsigned char>(edi27->f65 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
            cf38 = reinterpret_cast<uint1_t>(tmp8_103 < edi27->f65);
            edi27->f65 = tmp8_103;
            zf41 = reinterpret_cast<uint1_t>(edi27->f65 == 0);
            goto addr_80481de_81;
        }
    } else {
        if (!zf41) {
            addr_80481de_81:
            if (zf41) {
                addr_8048250_79:
                if (zf41) {
                    addr_80482c5_83:
                    goto addr_80482c8_84;
                } else {
                    addr_8048253_85:
                    if (!zf41) {
                        addr_80482c8_84:
                        tmp8_104 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x75) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
                        cf38 = reinterpret_cast<uint1_t>(tmp8_104 < *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x75));
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x75) = tmp8_104;
                        zf41 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x75) == 0);
                        of105 = __intrinsic();
                        __asm__("outsb ");
                        goto addr_80482cd_86;
                    } else {
                        __asm__("popad ");
                        tmp8_106 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&bx107->f65) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
                        cf38 = reinterpret_cast<uint1_t>(tmp8_106 < *reinterpret_cast<unsigned char*>(&bx108->f65));
                        *reinterpret_cast<unsigned char*>(&bx109->f65) = tmp8_106;
                        zf41 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&bx110->f65) == 0);
                        goto addr_804825b_88;
                    }
                }
            } else {
                addr_80481e0_89:
                if (cf38) 
                    goto addr_8048253_85; else 
                    goto addr_80481e3_90;
            }
        } else {
            addr_8048175_91:
            tmp8_111 = reinterpret_cast<unsigned char>(edi27->f65 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
            cf38 = reinterpret_cast<uint1_t>(tmp8_111 < edi27->f65);
            edi27->f65 = tmp8_111;
            zf41 = reinterpret_cast<uint1_t>(edi27->f65 == 0);
            if (zf41) 
                goto addr_80481e0_89; else 
                goto addr_804817b_92;
        }
    }
    if (cf38) {
        addr_8048324_94:
        if (!cf38) {
            addr_8048398_95:
            __asm__("arpl [eax], ax");
            if (!cf38) {
                addr_8048417_96:
                goto addr_8048418_97;
            } else {
                __asm__("outsb ");
                __asm__("arpl [eax], ax");
                if (!cf38) {
                    goto addr_804840e_100;
                }
            }
        } else {
            __asm__("arpl [ebx+0x65], bp");
            if (zf41) {
                addr_8048391_102:
                if (!cf38) {
                    addr_80483fc_58:
                    esi34 = reinterpret_cast<struct s3*>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi27) + ebx112 * 2 + 0x6d) * 0x6c75646f);
                    tmp8_113 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6c) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
                    cf38 = reinterpret_cast<uint1_t>(tmp8_113 < *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6c));
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6c) = tmp8_113;
                    zf41 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6c) == 0);
                    of39 = __intrinsic();
                    below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                    goto addr_804840b_103;
                } else {
                    __asm__("outsb ");
                    __asm__("outsw ");
                    tmp8_114 = reinterpret_cast<unsigned char>(ecx->f6e + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
                    cf38 = reinterpret_cast<uint1_t>(tmp8_114 < ecx->f6e);
                    ecx->f6e = tmp8_114;
                    zf41 = reinterpret_cast<uint1_t>(ecx->f6e == 0);
                    of39 = __intrinsic();
                    below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                    goto addr_8048398_95;
                }
            } else {
                __asm__("popad ");
                __asm__("insb ");
                __asm__("insb ");
                tmp8_115 = reinterpret_cast<unsigned char>(ebx116->f79 + dh117);
                cf38 = reinterpret_cast<uint1_t>(tmp8_115 < ebx118->f79);
                ebx119->f79 = tmp8_115;
                zf41 = reinterpret_cast<uint1_t>(ebx120->f79 == 0);
                of39 = __intrinsic();
                below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                if (cf38) {
                    __asm__("outsd ");
                    tmp8_121 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp36) + reinterpret_cast<int16_t>(*reinterpret_cast<void**>(&edi27))) + 0x65) + dh122);
                    cf38 = reinterpret_cast<uint1_t>(tmp8_121 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp36) + reinterpret_cast<int16_t>(*reinterpret_cast<void**>(&edi27))) + 0x65));
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp36) + reinterpret_cast<int16_t>(*reinterpret_cast<void**>(&edi27))) + 0x65) = tmp8_121;
                    zf41 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp36) + reinterpret_cast<int16_t>(*reinterpret_cast<void**>(&edi27))) + 0x65) == 0);
                    of39 = __intrinsic();
                    below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                    if (zf41) 
                        goto addr_80483a6_108;
                    if (zf41) 
                        goto addr_80483a8_110;
                    __asm__("insd ");
                    if (cf38) 
                        goto addr_8048343_112; else 
                        goto addr_8048343_112;
                }
            }
        }
    } else {
        __asm__("popad ");
        esi34 = reinterpret_cast<struct s3*>(*edx123 * 0x70616d6d);
        goto addr_80482c5_83;
    }
    if (cf38) {
        addr_804840b_103:
        if (zf41) {
            addr_8048473_56:
            goto addr_8048479_115;
        } else {
            addr_804840e_100:
            edi27 = esp2->f0;
            esp2 = reinterpret_cast<struct s2*>(&esp2->f4);
            __asm__("insd ");
            __asm__("outsd ");
            if (!zf41) {
                goto addr_8048482_117;
            } else {
                edi27->f65 = reinterpret_cast<unsigned char>(edi27->f65 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
                zf41 = reinterpret_cast<uint1_t>(edi27->f65 == 0);
                goto addr_8048417_96;
            }
        }
    } else {
        addr_80483a6_108:
        if (zf41) {
            addr_804841d_119:
            __asm__("insb ");
            edi27 = esp2->f0;
            esp2 = reinterpret_cast<struct s2*>(&esp2->f4);
            if (!cf38) {
                addr_804849c_120:
                __asm__("arpl [eax], ax");
                goto addr_804849d_121;
            } else {
                __asm__("insd ");
                if (!of39) {
                    addr_804849d_121:
                    if (cf38) {
                        addr_8048505_124:
                        esp2 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(esp2) - 4);
                        esp2->f0 = reinterpret_cast<struct s3*>(0x735f6465);
                        if (!zf41) {
                            __asm__("arpl [eax+0x65], bp");
                            if (!zf41) {
                                addr_8048580_127:
                            } else {
                                addr_8048514_128:
                                if (cf38) 
                                    goto addr_8048517_129; else 
                                    goto addr_8048517_129;
                            }
                        }
                    } else {
                        __asm__("popad ");
                        if (below_or_equal44) 
                            goto addr_80484a4_131; else 
                            goto addr_80484a4_131;
                    }
                } else {
                    __asm__("outsd ");
                    if (zf41) 
                        goto addr_804848c_133;
                    __asm__("arpl [esp+ebp*2+0x0], si");
                    goto addr_804842f_135;
                }
            }
        } else {
            addr_80483a8_110:
            if (cf38) {
                addr_8048418_97:
                if (zf41) {
                    addr_8048479_115:
                    eax29 = reinterpret_cast<struct s5*>(eax29->f0 * 0x67);
                    cf38 = __intrinsic();
                    of39 = __intrinsic();
                    zf41 = __undefined();
                    below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                    if (zf41) {
                        addr_80484e6_54:
                        esp2 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(esp2) - 4);
                        esp2->f0 = reinterpret_cast<struct s3*>(0x735f6465);
                        if (zf41) {
                            addr_8048560_136:
                            __asm__("insd ");
                            ebp36 = reinterpret_cast<struct s8*>(esi34->f0 * 0x65686373);
                            cf38 = __intrinsic();
                            of39 = __intrinsic();
                            zf41 = __undefined();
                            below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                            goto addr_8048563_137;
                        } else {
                            __asm__("popad ");
                            if (cf38) {
                                addr_8048554_139:
                                if (zf41) {
                                    addr_80485b6_140:
                                    if (!cf38) 
                                        goto addr_804862d_141; else 
                                        goto addr_80485ba_142;
                                } else {
                                    if (of39) {
                                        addr_80485cb_144:
                                        goto addr_80485d0_145;
                                    } else {
                                        goto addr_8048560_136;
                                    }
                                }
                            } else {
                                __asm__("insd ");
                                tmp8_124 = reinterpret_cast<unsigned char>(ebx125->f63 + dh126);
                                cf38 = reinterpret_cast<uint1_t>(tmp8_124 < ebx127->f63);
                                ebx128->f63 = tmp8_124;
                                zf41 = reinterpret_cast<uint1_t>(ebx129->f63 == 0);
                                of39 = __intrinsic();
                                below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                                esp2 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(esp2) - 4);
                                esp2->f0 = reinterpret_cast<struct s3*>(0x675f6465);
                                goto addr_80484f9_148;
                            }
                        }
                    } else {
                        addr_8048482_117:
                        __asm__("outsb ");
                        if (zf41) {
                            addr_80484f9_148:
                            if (zf41) {
                                goto addr_8048571_150;
                            }
                        } else {
                            tmp8_130 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi27) + 0x6e) + bl131);
                            cf38 = reinterpret_cast<uint1_t>(tmp8_130 < *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi27) + 0x6e));
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi27) + 0x6e) = tmp8_130;
                            zf41 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi27) + 0x6e) == 0);
                            of39 = __intrinsic();
                            below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                            if (!below_or_equal44) {
                                __asm__("popad ");
                                if (cf38) {
                                    addr_8048563_137:
                                    edi27 = reinterpret_cast<struct s3*>(0x735f6465);
                                    esp2 = reinterpret_cast<struct s2*>(&esp2->f4);
                                    if (cf38) {
                                        addr_80485de_153:
                                        if (!cf38) {
                                            goto addr_804864a_155;
                                        } else {
                                            if (cf38) {
                                                addr_8048648_157:
                                                if (cf38) {
                                                    goto addr_80486b4_159;
                                                }
                                            } else {
                                                if (zf41) {
                                                    addr_804865a_161:
                                                    if (of39) 
                                                        goto addr_80486c5_162; else 
                                                        goto addr_804865e_163;
                                                } else {
                                                    if (cf38) {
                                                        addr_8048655_165:
                                                        if (zf41) {
                                                            addr_80486ba_166:
                                                            if (!cf38) {
                                                                addr_8048731_167:
                                                                if (!below_or_equal44) {
                                                                    addr_80487a3_168:
                                                                    __asm__("insd ");
                                                                    ebp36 = reinterpret_cast<struct s8*>(esi34->f63 * 0x65726f);
                                                                    cf38 = __intrinsic();
                                                                    __asm__("insd ");
                                                                    __asm__("popad ");
                                                                    if (cf38 | __undefined()) {
                                                                        addr_8048819_169:
                                                                        goto addr_804881a_170;
                                                                    } else {
                                                                        addr_80487b0_171:
                                                                        if (!cf38) {
                                                                            addr_8048817_172:
                                                                            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) - 65);
                                                                            goto addr_8048819_169;
                                                                        } else {
                                                                            tmp8_132 = reinterpret_cast<unsigned char>(ebp36->f61 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
                                                                            cf38 = reinterpret_cast<uint1_t>(tmp8_132 < ebp36->f61);
                                                                            ebp36->f61 = tmp8_132;
                                                                            below_or_equal133 = reinterpret_cast<uint1_t>(cf38 | reinterpret_cast<uint1_t>(ebp36->f61 == 0));
                                                                            goto addr_80487b4_174;
                                                                        }
                                                                    }
                                                                } else {
                                                                    esi34 = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(esi34) ^ *edx134);
                                                                    tmp8_135 = reinterpret_cast<unsigned char>(ebx136->f65 + dh137);
                                                                    cf38 = reinterpret_cast<uint1_t>(tmp8_135 < ebx138->f65);
                                                                    ebx139->f65 = tmp8_135;
                                                                    zf41 = reinterpret_cast<uint1_t>(ebx140->f65 == 0);
                                                                    below_or_equal133 = reinterpret_cast<uint1_t>(cf38 | zf41);
                                                                    goto addr_8048739_176;
                                                                }
                                                            } else {
                                                                addr_80486bd_177:
                                                                __asm__("popad ");
                                                                if (zf41) {
                                                                    addr_80486f6_178:
                                                                    tmp8_141 = reinterpret_cast<unsigned char>(edi27->f65 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
                                                                    cf38 = reinterpret_cast<uint1_t>(tmp8_141 < edi27->f65);
                                                                    edi27->f65 = tmp8_141;
                                                                    zf142 = edi27->f65 == 0;
                                                                    goto addr_80486f9_179;
                                                                } else {
                                                                    addr_80486c0_180:
                                                                    *reinterpret_cast<unsigned char*>(&eax29) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax29)));
                                                                    cf38 = 0;
                                                                    zf41 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax29) == 0);
                                                                    below_or_equal133 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf41));
                                                                    __asm__("insb ");
                                                                    if (1) {
                                                                        addr_8048739_176:
                                                                        if (zf41) 
                                                                            goto addr_80487ae_181; else 
                                                                            goto addr_804873c_182;
                                                                    } else {
                                                                        addr_80486c5_162:
                                                                        __asm__("popad ");
                                                                        if (zf41) {
                                                                            addr_80486fe_183:
                                                                            if (zf41) {
                                                                                addr_8048777_184:
                                                                                esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(&(*reinterpret_cast<struct s36**>(&esi34))->f33) * 0x65730032);
                                                                                cf38 = __intrinsic();
                                                                                zf41 = __undefined();
                                                                                goto addr_8048782_185;
                                                                            } else {
                                                                                if (!zf41) {
                                                                                    addr_8048771_187:
                                                                                    if (zf41) {
                                                                                        addr_80487e9_188:
                                                                                        goto addr_80487ec_189;
                                                                                    } else {
                                                                                        goto addr_8048777_184;
                                                                                    }
                                                                                } else {
                                                                                    addr_8048708_191:
                                                                                    esi34 = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(esi34) ^ *edx143);
                                                                                    goto addr_804870a_192;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            *reinterpret_cast<unsigned char*>(&eax29) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax29)));
                                                                            cf38 = 0;
                                                                            zf41 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax29) == 0);
                                                                            if (1) {
                                                                                addr_8048741_194:
                                                                                goto addr_8048746_195;
                                                                            } else {
                                                                                addr_80486cd_196:
                                                                                __asm__("popad ");
                                                                                if (zf41) {
                                                                                    goto addr_8048708_191;
                                                                                } else {
                                                                                    *reinterpret_cast<unsigned char*>(&eax29) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax29)));
                                                                                    cf38 = 0;
                                                                                    zf41 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax29) == 0);
                                                                                    below_or_equal44 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf41));
                                                                                    goto addr_80486d2_199;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            addr_8048657_200:
                                                            if (!below_or_equal44) 
                                                                goto addr_80486bd_177; else 
                                                                goto addr_8048659_201;
                                                        }
                                                    } else {
                                                        tmp8_144 = reinterpret_cast<unsigned char>(edx145->f74 + dh146);
                                                        cf147 = reinterpret_cast<uint1_t>(tmp8_144 < edx148->f74);
                                                        edx149->f74 = tmp8_144;
                                                        zf41 = reinterpret_cast<uint1_t>(edx150->f74 == 0);
                                                        below_or_equal44 = reinterpret_cast<uint1_t>(cf147 | zf41);
                                                        edi27 = esp2->f0;
                                                        esp2 = reinterpret_cast<struct s2*>(&esp2->f4);
                                                        if (!cf147) {
                                                            goto addr_8048657_200;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        edi27 = esp2->f0;
                                        esp2 = reinterpret_cast<struct s2*>(&esp2->f4);
                                        if (zf41) {
                                            addr_80485d0_145:
                                            if (!cf38) {
                                                goto addr_804863a_206;
                                            } else {
                                                esp151 = reinterpret_cast<struct s61*>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<uint32_t>(eax29) + 0x70) * 0x6c746372);
                                                tmp8_152 = reinterpret_cast<unsigned char>(edx153->f74 + dh154);
                                                cf38 = reinterpret_cast<uint1_t>(tmp8_152 < edx155->f74);
                                                edx156->f74 = tmp8_152;
                                                zf41 = reinterpret_cast<uint1_t>(edx157->f74 == 0);
                                                of39 = __intrinsic();
                                                below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                                                edi27 = esp151->f0;
                                                esp2 = reinterpret_cast<struct s2*>(&esp151->f4);
                                                goto addr_80485de_153;
                                            }
                                        } else {
                                            addr_8048571_150:
                                            ebp36 = reinterpret_cast<struct s8*>(*reinterpret_cast<unsigned char*>(&esi34->f70) * 0x61767265);
                                            __asm__("insb ");
                                            tmp8_158 = reinterpret_cast<unsigned char>(esi34->f61 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
                                            cf38 = reinterpret_cast<uint1_t>(tmp8_158 < esi34->f61);
                                            esi34->f61 = tmp8_158;
                                            zf41 = reinterpret_cast<uint1_t>(esi34->f61 == 0);
                                            of39 = __intrinsic();
                                            below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                                            goto addr_804857c_208;
                                        }
                                    }
                                } else {
                                    __asm__("insd ");
                                    tmp8_159 = reinterpret_cast<unsigned char>(ebx160->f63 + dh161);
                                    cf38 = reinterpret_cast<uint1_t>(tmp8_159 < ebx162->f63);
                                    ebx163->f63 = tmp8_159;
                                    zf41 = reinterpret_cast<uint1_t>(ebx164->f63 == 0);
                                    of39 = __intrinsic();
                                    below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                                    goto addr_8048505_124;
                                }
                            } else {
                                addr_804848c_133:
                                __asm__("insb ");
                                __asm__("arpl [gs:eax+eax+0x66], si");
                                __asm__("insb ");
                                __asm__("outsd ");
                                __asm__("arpl [ebx+0x0], bp");
                                __asm__("insd ");
                                if (!cf38) 
                                    goto addr_8048514_128; else 
                                    goto addr_804849b_210;
                            }
                        }
                    }
                } else {
                    addr_804841a_211:
                    esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(&ebp36->f70) * 0x6e);
                    cf38 = __intrinsic();
                    of39 = __intrinsic();
                    zf41 = __undefined();
                    below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                    goto addr_804841d_119;
                }
            } else {
                ebx165->f6c = reinterpret_cast<signed char>(ebx166->f6c + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
                __asm__("outsd ");
                __asm__("outsb ");
                ebx167->f65 = reinterpret_cast<signed char>(ebx168->f65 + dh169);
                zf41 = reinterpret_cast<uint1_t>(ebx170->f65 == 0);
                goto addr_80483b0_213;
            }
        }
    }
    __asm__("insd ");
    if (cf38) {
        addr_80485ec_215:
    } else {
        __asm__("insd ");
        __asm__("popad ");
        if (!cf38) {
            addr_80485f2_218:
            __asm__("outsb ");
            tmp8_171 = reinterpret_cast<unsigned char>(edx172->f74 + dh173);
            cf38 = reinterpret_cast<uint1_t>(tmp8_171 < edx174->f74);
            edx175->f74 = tmp8_171;
            zf41 = reinterpret_cast<uint1_t>(edx176->f74 == 0);
            below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
            edi27 = esp2->f0;
            esp2 = reinterpret_cast<struct s2*>(&esp2->f4);
            if (!cf38) {
                addr_8048663_219:
                if (!cf38) {
                    goto addr_80486cd_196;
                }
            } else {
                if (__intrinsic()) 
                    goto addr_804866f_222;
                __asm__("outsd ");
                __asm__("arpl [ebp+0x61], bp");
                goto addr_8048601_224;
            }
        } else {
            if (zf41) {
                addr_8048601_224:
                if (!cf38) {
                    goto addr_804866f_222;
                } else {
                    tmp8_177 = reinterpret_cast<unsigned char>(edx178->f74 + dh179);
                    cf38 = reinterpret_cast<uint1_t>(tmp8_177 < edx180->f74);
                    edx181->f74 = tmp8_177;
                    zf41 = reinterpret_cast<uint1_t>(edx182->f74 == 0);
                    of39 = __intrinsic();
                    edi27 = esp2->f0;
                    esp2 = reinterpret_cast<struct s2*>(&esp2->f4);
                    goto addr_8048607_228;
                }
            } else {
                addr_804858f_229:
                if (!cf38) {
                    addr_8048607_228:
                    if (!cf38) {
                        addr_8048672_230:
                        if (!cf38) {
                            addr_80486db_231:
                            if (zf41) 
                                goto addr_8048754_232; else 
                                goto addr_80486df_233;
                        } else {
                            __asm__("outsb ");
                            *reinterpret_cast<int16_t*>(&ebp36) = reinterpret_cast<int16_t>(ebp36->f0 * 0x6567);
                            cf38 = __intrinsic();
                            zf41 = __undefined();
                            if (zf41) {
                                if (!zf41) {
                                    addr_804875c_236:
                                    if (cf38) {
                                        addr_80487c6_237:
                                        __asm__("o16 arpl [esi+0x74], bp");
                                        goto addr_80487ca_238;
                                    } else {
                                        addr_8048761_239:
                                        if (!cf38) {
                                            addr_80487ca_238:
                                            __asm__("insb ");
                                            *reinterpret_cast<unsigned char*>(&eax29) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax29)));
                                            esp2 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(esp2) - 1);
                                            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) + 81);
                                            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) + 86);
                                            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) + 91);
                                            goto addr_80487db_240;
                                        } else {
                                            esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebx183) + reinterpret_cast<uint32_t>(esi34) + 50) * 0x6f686300);
                                            if (!reinterpret_cast<uint1_t>(__intrinsic() | __undefined())) {
                                                addr_80487db_240:
                                                *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) + 97);
                                                *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) + 0x66);
                                                *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) + 0x6c);
                                                *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) + 0x74);
                                                goto addr_80487e9_188;
                                            } else {
                                                esi34 = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(esi34) ^ *edx184);
                                                ebx185->f65 = reinterpret_cast<signed char>(ebx186->f65 + dh187);
                                                zf41 = reinterpret_cast<uint1_t>(ebx188->f65 == 0);
                                                goto addr_8048771_187;
                                            }
                                        }
                                    }
                                } else {
                                    addr_80486f3_243:
                                    esi34 = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(esi34) ^ *edx189);
                                    goto addr_80486f6_178;
                                }
                            } else {
                                addr_8048681_244:
                                __asm__("insd ");
                                if (!cf38) {
                                    addr_80486eb_245:
                                    if (zf41) {
                                        goto addr_8048757_247;
                                    }
                                } else {
                                    addr_8048684_248:
                                    tmp8_190 = reinterpret_cast<unsigned char>(eax29->f75 + dh191);
                                    cf38 = reinterpret_cast<uint1_t>(tmp8_190 < eax29->f75);
                                    eax29->f75 = tmp8_190;
                                    zf142 = eax29->f75 == 0;
                                    if (zf142) {
                                        addr_80486f9_179:
                                        if (zf142) 
                                            goto addr_8048760_249; else 
                                            goto addr_80486fb_250;
                                    } else {
                                        __asm__("insd ");
                                        if (!cf38) 
                                            goto addr_80486f3_243;
                                        tmp8_192 = reinterpret_cast<unsigned char>(esi34->f66 + dh193);
                                        cf194 = tmp8_192 < esi34->f66;
                                        esi34->f66 = tmp8_192;
                                        zf41 = reinterpret_cast<uint1_t>(esi34->f66 == 0);
                                        __asm__("outsd ");
                                        if (cf194) 
                                            goto addr_80486fd_253; else 
                                            goto addr_8048692_254;
                                    }
                                }
                            }
                        }
                    } else {
                        if (of39) 
                            goto addr_8048671_256;
                        __asm__("outsb ");
                        ebp36 = reinterpret_cast<struct s8*>(esi34->f67 * 0x5f747200);
                        cf38 = __intrinsic();
                        zf41 = __undefined();
                        below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                        goto addr_8048611_258;
                    }
                } else {
                    esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<uint32_t>(eax29) + 0x67) * 0x65727465);
                    cf38 = __intrinsic();
                    zf41 = __undefined();
                    below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                    goto addr_8048593_260;
                }
            }
        }
    }
    __asm__("a16 popad ");
    __asm__("arpl [ecx+ebp*2+0x6f], si");
    goto addr_80485f2_218;
    if (!cf38) {
        addr_80486d3_264:
        __asm__("arpl [eax+0x6f], bp");
        goto addr_80486d5_265;
    } else {
        __asm__("a16 popad ");
        __asm__("insb ");
        if (zf41) {
            addr_80486e2_267:
            esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(&(*reinterpret_cast<struct s36**>(&esi34))->f33) * 0x65670032);
            cf38 = __intrinsic();
            zf41 = __undefined();
            goto addr_80486eb_245;
        } else {
            addr_804866f_222:
            if (zf41) {
                addr_80486d2_199:
                __asm__("insb ");
                goto addr_80486d3_264;
            } else {
                addr_8048671_256:
                __asm__("arpl [ebx+0x0], bp");
                goto addr_8048672_230;
            }
        }
    }
    addr_80486df_233:
    goto addr_80486e2_267;
    addr_80486fb_250:
    esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(&(*reinterpret_cast<struct s36**>(&esi34))->f33) * 0x65730032);
    zf41 = __undefined();
    addr_80486fd_253:
    goto addr_80486fe_183;
    addr_8048517_129:
    if (!cf38) {
        addr_804857c_208:
        __asm__("outsb ");
        __asm__("outsd ");
        if (!cf38) 
            goto addr_80485ec_215; else 
            goto addr_8048580_127;
    } else {
        addr_8048519_268:
        esp2 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(esp2) - 4);
        esp2->f0 = reinterpret_cast<struct s3*>(0x675f6465);
        if (zf41) {
            addr_8048594_269:
            if (!cf38) {
                addr_8048611_258:
                if (!cf38) 
                    goto addr_8048680_270;
            } else {
                esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<uint32_t>(eax29) + 0x76) * 0x36386d);
                cf38 = __intrinsic();
                of39 = __intrinsic();
                zf41 = __undefined();
                below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                goto addr_804859f_272;
            }
        } else {
            __asm__("arpl [eax+0x65], bp");
            goto addr_8048524_274;
        }
    }
    if (zf41) {
        goto addr_8048684_248;
    } else {
        __asm__("insd ");
        goto addr_804861b_278;
    }
    addr_80484a4_131:
    if (!below_or_equal44) 
        goto addr_8048518_279;
    esi34 = reinterpret_cast<struct s3*>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp36) + 0x76) * 0x74656700);
    cf38 = __intrinsic();
    of39 = __intrinsic();
    zf41 = __undefined();
    below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
    if (!cf38) 
        goto addr_8048519_268;
    tmp8_195 = reinterpret_cast<unsigned char>(esi34->f64 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
    cf38 = reinterpret_cast<uint1_t>(tmp8_195 < esi34->f64);
    esi34->f64 = tmp8_195;
    zf41 = reinterpret_cast<uint1_t>(esi34->f64 == 0);
    of39 = __intrinsic();
    below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
    goto addr_80484b3_282;
    addr_80485ba_142:
    if (cf38) {
        addr_8048633_283:
        edi27 = esp2->f0;
        esp2 = reinterpret_cast<struct s2*>(&esp2->f4);
        if (!cf38) {
            addr_80486a0_284:
            __asm__("popad ");
            if (of39) {
                addr_80486d5_265:
                if (!below_or_equal44) {
                    addr_8048746_195:
                    if (cf38) {
                        addr_80487ae_181:
                        goto addr_80487b0_171;
                    } else {
                        if (!cf38) {
                            addr_80487c0_286:
                            __asm__("outsb ");
                            if (zf41) 
                                goto addr_8048837_287;
                        } else {
                            esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebx196) + reinterpret_cast<uint32_t>(esi34) + 50) * 0x74657300);
                            cf38 = __intrinsic();
                            zf41 = __undefined();
                            if (cf38) {
                                addr_80487ba_289:
                                eax29->f0 = reinterpret_cast<unsigned char>(eax29->f0 ^ reinterpret_cast<uint32_t>(eax29));
                                zf41 = reinterpret_cast<uint1_t>(eax29->f0 == 0);
                                if (zf41) 
                                    goto addr_8048824_290; else 
                                    goto addr_80487c0_286;
                            } else {
                                addr_8048755_291:
                                if (!cf38) {
                                    goto addr_80487c0_286;
                                } else {
                                    addr_8048757_247:
                                    esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebx197) + reinterpret_cast<uint32_t>(esi34) + 50) * 0x74656700);
                                    cf38 = __intrinsic();
                                    goto addr_804875c_236;
                                }
                            }
                        }
                    }
                } else {
                    esi34 = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(esi34) ^ *edx198);
                    tmp8_199 = reinterpret_cast<unsigned char>(edi27->f65 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
                    cf38 = reinterpret_cast<uint1_t>(tmp8_199 < edi27->f65);
                    edi27->f65 = tmp8_199;
                    zf41 = reinterpret_cast<uint1_t>(edi27->f65 == 0);
                    goto addr_80486db_231;
                }
            } else {
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edx200) + reinterpret_cast<uint32_t>(esi34) * 2 + 0x75) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edx201) + reinterpret_cast<uint32_t>(esi34) * 2 + 0x75) + dh202);
                __asm__("outsb ");
                __asm__("arpl [ecx+0x74], sp");
                *reinterpret_cast<unsigned char*>(&eax29) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax29)));
                cf38 = 0;
                zf41 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax29) == 0);
                goto addr_80486ac_295;
            }
        } else {
            addr_8048637_296:
            if (!cf38) {
                addr_80486af_297:
                if (zf41) {
                    goto addr_8048725_299;
                }
            } else {
                addr_804863a_206:
                if (!cf38) {
                    addr_80486ac_295:
                    goto addr_80486af_297;
                } else {
                    __asm__("outsb ");
                    eax29->f72 = reinterpret_cast<signed char>(eax29->f72 + dh203);
                    __asm__("popad ");
                    tmp8_204 = reinterpret_cast<unsigned char>(eax29->f77 + dh205);
                    cf38 = reinterpret_cast<uint1_t>(tmp8_204 < eax29->f77);
                    eax29->f77 = tmp8_204;
                    zf41 = reinterpret_cast<uint1_t>(eax29->f77 == 0);
                    goto addr_8048648_157;
                }
            }
        }
    } else {
        __asm__("arpl [esp+ebp*2+0x0], si");
        if (!cf38) {
            goto addr_804862a_303;
        }
        if (zf41) 
            goto addr_8048637_296;
        if (!cf38) 
            goto addr_804862f_306; else 
            goto addr_80485c8_307;
    }
    *reinterpret_cast<unsigned char*>(&eax29) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax29)));
    goto addr_80487c6_237;
    addr_80486b2_309:
    if (!zf41) {
        addr_8048722_310:
        if (!cf38) {
            addr_804878a_311:
            goto addr_804878c_312;
        } else {
            addr_8048725_299:
            if (zf41) {
                addr_804878e_313:
                goto addr_804878f_314;
            } else {
                if (cf38) {
                    addr_8048798_316:
                    goto addr_804879b_317;
                } else {
                    if (!zf41) {
                        addr_804879b_317:
                        __asm__("outsd ");
                        if (zf41) {
                            addr_80487fd_319:
                            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) - 0x68);
                            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) - 98);
                            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) - 92);
                            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) - 85);
                            goto addr_804880f_320;
                        } else {
                            if (cf38) {
                                addr_804880f_320:
                                *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) - 79);
                                *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) - 71);
                                goto addr_8048817_172;
                            } else {
                                __asm__("outsd ");
                                if (zf41) 
                                    goto addr_80487a3_168; else 
                                    goto addr_80487a3_168;
                            }
                        }
                    } else {
                        if (!cf38) {
                            addr_8048760_249:
                            goto addr_8048761_239;
                        } else {
                            *reinterpret_cast<unsigned char*>(&eax29) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax29) ^ eax29->f0);
                            below_or_equal44 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax29) == 0)));
                            __asm__("o16 arpl [eax+0x6f], bp");
                            goto addr_8048731_167;
                        }
                    }
                }
            }
        }
    } else {
        addr_80486b4_159:
        __asm__("arpl [ecx+0x74], sp");
        *reinterpret_cast<unsigned char*>(&eax29) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax29)));
        cf38 = 0;
        zf41 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax29) == 0);
        below_or_equal44 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf41));
        goto addr_80486ba_166;
    }
    addr_804862f_306:
    goto addr_8048633_283;
    addr_80485c8_307:
    esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<uint32_t>(eax29) + 0x67) * 0x65727465);
    cf38 = __intrinsic();
    zf41 = __undefined();
    goto addr_80485cb_144;
    addr_804864a_155:
    if (zf41) {
        goto addr_80486b2_309;
    } else {
        tmp8_206 = reinterpret_cast<unsigned char>(ebx207->f68 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
        cf208 = reinterpret_cast<uint1_t>(tmp8_206 < ebx209->f68);
        ebx210->f68 = tmp8_206;
        __asm__("outsd ");
        if (!reinterpret_cast<uint1_t>(cf208 | reinterpret_cast<uint1_t>(ebx211->f68 == 0))) 
            goto addr_80486c0_180;
        tmp8_212 = reinterpret_cast<unsigned char>(edi27->f65 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
        cf38 = reinterpret_cast<uint1_t>(tmp8_212 < edi27->f65);
        edi27->f65 = tmp8_212;
        zf41 = reinterpret_cast<uint1_t>(edi27->f65 == 0);
        below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
        goto addr_8048655_165;
    }
    addr_804865e_163:
    __asm__("arpl [ecx+0x70], sp");
    goto addr_8048663_219;
    do {
        addr_804881a_170:
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) - 58);
        addr_804881f_329:
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) - 52);
        addr_8048821_330:
        addr_8048824_290:
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) - 45);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) - 38);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) - 31);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) - 25);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) - 18);
        addr_8048837_287:
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) - 12);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) - 3);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) + 3);
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) + reinterpret_cast<int32_t>("stty");
        esp213 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(esp2) - 2);
        *esp213 = cs214;
        tmp32_215 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) + reinterpret_cast<int32_t>("access"));
        cf216 = reinterpret_cast<uint1_t>(tmp32_215 < *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)));
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = tmp32_215;
        *reinterpret_cast<unsigned char*>(&eax29) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax29) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) - 0x7ee0f7fc) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax29) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) - 0x7ee0f7fc) + cf216)))) + 8);
        eax29 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(eax29) & 0x2a080481);
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) + reinterpret_cast<int32_t>("rename");
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) + reinterpret_cast<int32_t>("rmdir");
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) + reinterpret_cast<int32_t>("pipe");
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) + reinterpret_cast<int32_t>("prof");
        esp2 = reinterpret_cast<struct s2*>(esp213 - 2);
        esp2->f0 = esi34;
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) + reinterpret_cast<int32_t>("setgid");
        __asm__("popad ");
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) + reinterpret_cast<int32_t>("signal");
        __asm__("outsd ");
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) + reinterpret_cast<int32_t>("getegid");
    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) == 0)));
    *reinterpret_cast<unsigned char*>(&eax29) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax29) + 8) + 8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<uint32_t>(eax29)) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<uint32_t>(eax29)) + reinterpret_cast<int32_t>("fcntl");
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<uint32_t>(eax29)) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<uint32_t>(eax29)) + reinterpret_cast<int32_t>("setpgid");
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<uint32_t>(eax29)) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<uint32_t>(eax29)) + reinterpret_cast<int32_t>("umask");
    goto esp2->f4;
    addr_804873c_182:
    if (!cf38) {
        addr_80487b4_174:
        if (below_or_equal133) 
            goto addr_8048821_330;
    } else {
        esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebx217) + reinterpret_cast<uint32_t>(esi34) + 50) * 0x74656700);
        cf38 = __intrinsic();
        zf41 = __undefined();
        goto addr_8048741_194;
    }
    if (!cf38) 
        goto addr_804881f_329; else 
        goto addr_80487ba_289;
    addr_8048659_201:
    tmp8_218 = reinterpret_cast<unsigned char>(ebx219->f61 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
    cf38 = reinterpret_cast<uint1_t>(tmp8_218 < ebx220->f61);
    ebx221->f61 = tmp8_218;
    zf41 = reinterpret_cast<uint1_t>(ebx222->f61 == 0);
    of39 = __intrinsic();
    below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
    goto addr_804865a_161;
    addr_804849b_210:
    __asm__("outsb ");
    goto addr_804849c_120;
    addr_80481e3_90:
    tmp8_223 = reinterpret_cast<unsigned char>(ebx224->f65 + dh225);
    cf38 = reinterpret_cast<uint1_t>(tmp8_223 < ebx226->f65);
    ebx227->f65 = tmp8_223;
    zf41 = reinterpret_cast<uint1_t>(ebx228->f65 == 0);
    if (zf41 || (esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<uint32_t>(eax29) + 0x73) * 0x63616769), cf38 = __intrinsic(), zf41 = __undefined(), zf41)) {
        addr_804825b_88:
        if (zf41) {
            addr_80482d1_335:
            if (zf41) {
                goto addr_8048347_337;
            }
        } else {
            ebp36 = reinterpret_cast<struct s8*>(ebp36->f65 * 0x6164666f);
            cf38 = __intrinsic();
            of105 = __intrinsic();
            zf41 = __undefined();
            if (!cf38) {
                addr_80482cd_86:
                __asm__("insd ");
                __asm__("popad ");
                if (of105) 
                    goto addr_80482d1_335; else 
                    goto addr_80482d1_335;
            } else {
                addr_8048268_340:
                if (zf41) 
                    goto addr_80482de_341; else 
                    goto addr_804826a_342;
            }
        }
    } else {
        __asm__("outsd ");
        __asm__("outsb ");
        tmp8_229 = reinterpret_cast<unsigned char>(ebx230->f67 + dh231);
        cf69 = tmp8_229 < ebx232->f67;
        ebx233->f67 = tmp8_229;
        zf41 = reinterpret_cast<uint1_t>(ebx234->f67 == 0);
        goto addr_80481f7_344;
    }
    if (!zf41) {
        addr_8048343_112:
        if (zf41) {
            addr_80483b0_213:
            goto addr_80483b2_346;
        } else {
            addr_8048347_337:
            if (zf41) {
                addr_80483b2_346:
                if (zf41) {
                    goto addr_804841a_211;
                }
            } else {
                __asm__("insd ");
                if (!cf38) {
                    addr_80483c3_350:
                    ebp36->f6c = reinterpret_cast<unsigned char>(ebp36->f6c + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
                    esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(&esi34->f74) * 0x74646c5f);
                    goto addr_80483c9_351;
                } else {
                    __asm__("popad ");
                }
                __asm__("insb ");
                goto addr_8048353_354;
            }
        }
    } else {
        __asm__("arpl [ecx+0x74], sp");
        tmp8_235 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&esi34->f70) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
        cf38 = reinterpret_cast<uint1_t>(tmp8_235 < *reinterpret_cast<unsigned char*>(&esi34->f70));
        *reinterpret_cast<unsigned char*>(&esi34->f70) = tmp8_235;
        zf41 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&esi34->f70) == 0);
        if (cf38) {
            addr_8048353_354:
            if (!cf38) {
                addr_80483c9_351:
                goto addr_80483cf_356;
            } else {
                __asm__("popad ");
                if (!cf38) {
                    addr_80483cf_356:
                    ecx->f64 = reinterpret_cast<unsigned char>(ecx->f64 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
                    goto addr_80483d1_359;
                } else {
                    __asm__("popad ");
                }
                __asm__("outsd ");
                goto addr_804835f_362;
            }
        } else {
            addr_80482de_341:
            __asm__("outsb ");
            __asm__("arpl [ecx+0x74], sp");
            tmp8_236 = reinterpret_cast<unsigned char>(esi34->f63 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
            cf237 = reinterpret_cast<uint1_t>(tmp8_236 < esi34->f63);
            esi34->f63 = tmp8_236;
            zf41 = reinterpret_cast<uint1_t>(esi34->f63 == 0);
            below_or_equal44 = reinterpret_cast<uint1_t>(cf237 | zf41);
            goto addr_80482e4_363;
        }
    }
    __asm__("outsd ");
    __asm__("insd ");
    __asm__("popad ");
    ebp36 = reinterpret_cast<struct s8*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi34) + 0x6e) * 0x656d61);
    cf38 = __intrinsic();
    of39 = __intrinsic();
    zf41 = __undefined();
    below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
    if (!zf41) {
        addr_804842f_135:
        if (zf41) {
            goto addr_80484a4_131;
        } else {
            esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(&(*reinterpret_cast<struct s36**>(&esi34))->f0) * 0x64686366);
            esi34 = reinterpret_cast<struct s3*>(*edx238 * 0x6c666462);
            cf38 = __intrinsic();
            of39 = __intrinsic();
            zf41 = __undefined();
            below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
            if (!zf41) 
                goto addr_80484b7_367; else 
                goto addr_8048444_368;
        }
    } else {
        __asm__("popad ");
        __asm__("insd ");
        goto addr_80483c3_350;
    }
    addr_804826a_342:
    ebp36 = reinterpret_cast<struct s8*>(ebp36->f65 * 0x6164666f);
    cf38 = __intrinsic();
    of39 = __intrinsic();
    sf40 = __undefined();
    zf41 = __undefined();
    below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
    addr_8048270_370:
    goto addr_8048271_371;
    addr_804817b_92:
    esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(&(*reinterpret_cast<struct s36**>(&esi34))->f0) * 0x74636361);
    tmp8_239 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6d) + dh240);
    cf69 = tmp8_239 < *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6d);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6d) = tmp8_239;
    zf41 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6d) == 0);
    addr_8048185_372:
    __asm__("outsd ");
    if (!zf41) {
        addr_80481f7_344:
        if (zf41) {
            goto addr_8048268_340;
        }
    } else {
        if (zf41) {
            addr_80481bd_32:
            __asm__("popad ");
            if (!cf69) {
                addr_804822c_30:
                goto addr_804822e_375;
            } else {
                tmp8_241 = reinterpret_cast<unsigned char>(ebx242->f68 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
                cf38 = reinterpret_cast<uint1_t>(tmp8_241 < ebx243->f68);
                ebx244->f68 = tmp8_241;
                zf41 = reinterpret_cast<uint1_t>(ebx245->f68 == 0);
                of39 = __intrinsic();
                below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                if (cf38) {
                    addr_8048235_377:
                    __asm__("popad ");
                    __asm__("insd ");
                    ebx246->f65 = reinterpret_cast<signed char>(ebx247->f65 + dh248);
                    if (!ebx249->f65) {
                        addr_80482b1_378:
                        __asm__("outsd ");
                        __asm__("outsb ");
                        tmp8_250 = reinterpret_cast<unsigned char>(edx251->f65 + dh252);
                        cf38 = reinterpret_cast<uint1_t>(tmp8_250 < edx253->f65);
                        edx254->f65 = tmp8_250;
                        zf41 = reinterpret_cast<uint1_t>(edx255->f65 == 0);
                        of39 = __intrinsic();
                        below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                        goto addr_80482bb_77;
                    } else {
                        addr_804823f_379:
                        __asm__("insb ");
                        ebp36 = reinterpret_cast<struct s8*>(*reinterpret_cast<int32_t*>(&ebp36->f67) * 0x65670074);
                        cf38 = __intrinsic();
                        of39 = __intrinsic();
                        zf41 = __undefined();
                        below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                        goto addr_8048242_380;
                    }
                } else {
                    addr_80481c6_73:
                    __asm__("outsd ");
                }
                if (!zf41) {
                    goto addr_804823f_379;
                }
                if (zf41) {
                    addr_804822e_375:
                    esp2 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(esp2) - 4);
                    esp2->f0 = reinterpret_cast<struct s3*>(0x6e74736f);
                    goto addr_8048235_377;
                } else {
                    if (!zf41) {
                        addr_8048242_380:
                        goto addr_8048243_76;
                    } else {
                        *reinterpret_cast<unsigned char*>(&eax29) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax29) ^ eax29->f0);
                        cf38 = 0;
                        zf41 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax29) == 0);
                        of39 = 0;
                        below_or_equal44 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf41));
                        if (zf41) {
                            goto addr_8048249_78;
                        }
                    }
                }
            }
        } else {
            addr_804818b_388:
            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi27) + reinterpret_cast<uint32_t>(ebp36) * 2 + 99) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi27) + reinterpret_cast<uint32_t>(ebp36) * 2 + 99) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
            goto addr_804818c_389;
        }
    }
    __asm__("popad ");
    if (!cf69) 
        goto addr_8048268_340;
    tmp8_256 = reinterpret_cast<unsigned char>(ebx257->f73 + dh258);
    cf38 = reinterpret_cast<uint1_t>(tmp8_256 < ebx259->f73);
    ebx260->f73 = tmp8_256;
    zf41 = reinterpret_cast<uint1_t>(ebx261->f73 == 0);
    sf40 = ebx262->f73 < 0;
    of39 = __intrinsic();
    below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
    if (zf41) 
        goto addr_8048270_370;
    __asm__("popad ");
    if (!cf38) {
        addr_8048271_371:
    } else {
        tmp8_263 = reinterpret_cast<unsigned char>(ebx264->f65 + dh265);
        cf38 = reinterpret_cast<uint1_t>(tmp8_263 < ebx266->f65);
        ebx267->f65 = tmp8_263;
        zf41 = reinterpret_cast<uint1_t>(ebx268->f65 == 0);
        sf40 = ebx269->f65 < 0;
        of39 = __intrinsic();
        below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
        goto addr_8048208_394;
    }
    if (zf41) 
        goto addr_80482de_341; else 
        goto addr_8048277_396;
    addr_80480fa_70:
    __asm__("popad ");
    if (__intrinsic()) {
        addr_8048160_67:
        ebx270->f69 = reinterpret_cast<signed char>(ebx271->f69 + dh272);
        __asm__("a16 outsb ");
        __asm__("popad ");
        __asm__("insb ");
        goto addr_804816e_69;
    } else {
        if (!zf99) {
            goto addr_8048175_91;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp36) + 0x74) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp36) + 0x74) + dh273);
        ebp36 = reinterpret_cast<struct s8*>(ebp36->f65 * 0x74747300);
        cf69 = __intrinsic();
        zf41 = __undefined();
        if (zf41) 
            goto addr_8048185_372;
    }
    __asm__("popad ");
    __asm__("arpl [ebx+0x65], sp");
    if (!cf69) {
        addr_804818c_389:
        eax29 = reinterpret_cast<struct s5*>(eax29->f0 * 0x69);
        __asm__("outsd ");
        __asm__("arpl [esp+ebp*2+0x0], si");
        __asm__("o16 arpl [esi+0x74], bp");
        __asm__("insb ");
        tmp8_274 = reinterpret_cast<unsigned char>(ebp36->f6d + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
        cf38 = reinterpret_cast<uint1_t>(tmp8_274 < ebp36->f6d);
        ebp36->f6d = tmp8_274;
        zf41 = reinterpret_cast<uint1_t>(ebp36->f6d == 0);
        sf40 = reinterpret_cast<signed char>(ebp36->f6d) < reinterpret_cast<signed char>(0);
        of39 = __intrinsic();
        below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
    } else {
        addr_8048119_16:
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi34) + 0x69) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi34) + 0x69) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
        __asm__("arpl [ebp+0x0], sp");
        if (!*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi34) + 0x69)) 
            goto addr_804818b_388; else 
            goto addr_8048122_404;
    }
    if (!cf38) {
        addr_8048208_394:
        if (zf41) {
            addr_804827d_406:
            if (!cf38) {
                addr_80482e4_363:
                esp2 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(esp2) - 4);
                esp2->f0 = reinterpret_cast<struct s3*>(0x646f6d);
                goto addr_80482e8_407;
            } else {
                if (zf41) {
                    addr_80482e8_407:
                    goto addr_80482eb_409;
                } else {
                    if (cf38) {
                        addr_80482f2_411:
                        if (zf41) {
                            addr_8048366_412:
                            if (of39) {
                                addr_80483d7_413:
                                if (cf38) {
                                    addr_804844c_414:
                                    if (of39) {
                                        addr_80484b3_282:
                                        __asm__("popad ");
                                        if (zf41) {
                                            addr_8048518_279:
                                            goto addr_8048519_268;
                                        } else {
                                            addr_80484b7_367:
                                            if (!cf38) {
                                                addr_8048532_415:
                                                goto addr_8048538_416;
                                            } else {
                                                __asm__("outsb ");
                                                __asm__("arpl [eax], ax");
                                                edi27 = esp2->f0;
                                                esp2 = reinterpret_cast<struct s2*>(&esp2->f4);
                                                if (!cf38) {
                                                    addr_8048538_416:
                                                    esp2 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(esp2) - 4);
                                                    esp2->f0 = reinterpret_cast<struct s3*>(0x675f6465);
                                                    goto addr_804853b_418;
                                                } else {
                                                    if (!cf38) {
                                                        addr_8048524_274:
                                                        if (!zf41) {
                                                            addr_8048593_260:
                                                            goto addr_8048594_269;
                                                        }
                                                    } else {
                                                        if (zf41) {
                                                            addr_804852f_422:
                                                            esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6c) * 0x63730064);
                                                            cf38 = __intrinsic();
                                                            of39 = __intrinsic();
                                                            zf41 = __undefined();
                                                            below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                                                            goto addr_8048532_415;
                                                        } else {
                                                            addr_80484c3_48:
                                                            tmp8_275 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6c) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
                                                            cf38 = reinterpret_cast<uint1_t>(tmp8_275 < *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6c));
                                                            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6c) = tmp8_275;
                                                            zf41 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp36) + 0x6c) == 0);
                                                            of39 = __intrinsic();
                                                            below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                                                            __asm__("outsd ");
                                                            __asm__("arpl [ebx+0x0], bp");
                                                            __asm__("insd ");
                                                            if (!zf41) {
                                                                addr_804853b_418:
                                                                if (zf41) {
                                                                    addr_804859f_272:
                                                                    if (!of39) 
                                                                        goto addr_804861b_278; else 
                                                                        goto addr_80485a6_423;
                                                                } else {
                                                                    if (of39) {
                                                                        addr_80485b4_425:
                                                                        __asm__("insb ");
                                                                        tmp8_276 = reinterpret_cast<unsigned char>(esi34->f66 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
                                                                        cf38 = reinterpret_cast<uint1_t>(tmp8_276 < esi34->f66);
                                                                        esi34->f66 = tmp8_276;
                                                                        zf41 = reinterpret_cast<uint1_t>(esi34->f66 == 0);
                                                                        of39 = __intrinsic();
                                                                        below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                                                                        goto addr_80485b6_140;
                                                                    } else {
                                                                        ebp36 = reinterpret_cast<struct s8*>(edi27->f6d * 0x5f797469);
                                                                        cf38 = __intrinsic();
                                                                        of39 = __intrinsic();
                                                                        zf41 = __undefined();
                                                                        below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                                                                        __asm__("insd ");
                                                                        __asm__("popad ");
                                                                        if (!cf38) {
                                                                            addr_80485b2_428:
                                                                            __asm__("insb ");
                                                                            goto addr_80485b4_425;
                                                                        } else {
                                                                            esp2 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(esp2) - 4);
                                                                            esp2->f0 = reinterpret_cast<struct s3*>(0x675f6465);
                                                                            goto addr_8048554_139;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                __asm__("insb ");
                                                                goto addr_80484ce_52;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (cf38) 
                                            goto addr_80484c3_48;
                                        __asm__("outsd ");
                                        __asm__("outsb ");
                                        __asm__("popad ");
                                        __asm__("insb ");
                                        esi34 = reinterpret_cast<struct s3*>(*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<uint32_t>(edi27) * 2) * 0x5f736661);
                                        cf74 = __intrinsic();
                                        goto addr_8048458_42;
                                    }
                                } else {
                                    if (zf41) {
                                        addr_8048444_368:
                                        esp2 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(esp2) - 4);
                                        esp2->f0 = reinterpret_cast<struct s3*>(0x73797300);
                                        if (!cf38) 
                                            goto addr_804844c_414; else 
                                            goto addr_804844c_414;
                                    } else {
                                        __asm__("arpl [eax+eax+0x73], si");
                                        goto addr_80483e3_41;
                                    }
                                }
                            } else {
                                *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi34) + 0x68) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi34) + 0x68) + dh277);
                                zf41 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi34) + 0x68) == 0);
                                goto addr_804836d_38;
                            }
                        } else {
                            addr_80482f6_436:
                            if (cf38) {
                                goto addr_8048363_438;
                            }
                        }
                    } else {
                        if (!zf41) {
                            goto addr_80482f6_436;
                        }
                        if (!cf38) 
                            goto addr_8048287_442; else 
                            goto addr_8048287_442;
                    }
                }
            }
        } else {
            if (!zf41) {
                addr_8048277_396:
                if (cf38) 
                    goto addr_80482e8_407; else 
                    goto addr_8048279_444;
            } else {
                tmp8_278 = reinterpret_cast<unsigned char>(ebx279->f65 + dh280);
                cf38 = reinterpret_cast<uint1_t>(tmp8_278 < ebx281->f65);
                ebx282->f65 = tmp8_278;
                zf41 = reinterpret_cast<uint1_t>(ebx283->f65 == 0);
                sf40 = ebx284->f65 < 0;
                below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                if (zf41) 
                    goto addr_8048286_446;
                esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(&(*reinterpret_cast<struct s36**>(&esi34))->f0) * 0x73676973);
                cf38 = __intrinsic();
                of39 = __intrinsic();
                sf40 = __undefined();
                zf41 = __undefined();
                below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                goto addr_8048215_448;
            }
        }
    } else {
        if (zf41) {
            addr_8048215_448:
            if (!zf41) {
                addr_8048292_28:
                ebp36 = reinterpret_cast<struct s8*>(*reinterpret_cast<int32_t*>(&esi34->f68) * 0x646c6f00);
                cf38 = __intrinsic();
                zf41 = __undefined();
                __asm__("insb ");
                if (!cf38) {
                    addr_8048310_64:
                    if (zf41) {
                        addr_804837c_450:
                        __asm__("outsd ");
                        __asm__("insb ");
                        edi27->f61 = reinterpret_cast<unsigned char>(edi27->f61 + dh285);
                        goto addr_8048382_61;
                    } else {
                        if (!cf38) {
                            addr_804838f_453:
                            goto addr_8048391_102;
                        } else {
                            __asm__("popad ");
                            if (zf41) {
                                addr_8048384_62:
                                __asm__("outsd ");
                                tmp8_286 = reinterpret_cast<unsigned char>(ebx287->f79 + dh288);
                                cf38 = reinterpret_cast<uint1_t>(tmp8_286 < ebx289->f79);
                                ebx290->f79 = tmp8_286;
                                goto addr_804838f_453;
                            }
                        }
                        ebp36 = reinterpret_cast<struct s8*>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi27) + 0x70) * 0x6d7265);
                        cf38 = __intrinsic();
                        of39 = __intrinsic();
                        zf41 = __undefined();
                        below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                        goto addr_8048324_94;
                    }
                } else {
                    __asm__("popad ");
                    if (cf38) {
                        goto addr_8048307_60;
                    } else {
                        __asm__("popad ");
                        __asm__("insb ");
                        ebp36 = reinterpret_cast<struct s8*>(*reinterpret_cast<int32_t*>(&esi34->f68) * 0x65737500);
                        __asm__("insb ");
                        esp2 = reinterpret_cast<struct s2*>(*edx291 * 0x70617773);
                        goto addr_80482b1_378;
                    }
                }
            } else {
                if (of39) {
                    addr_8048286_446:
                    goto addr_8048287_442;
                } else {
                    __asm__("outsb ");
                    tmp8_292 = reinterpret_cast<unsigned char>(ebx293->f69 + dh294);
                    cf38 = reinterpret_cast<uint1_t>(tmp8_292 < ebx295->f69);
                    ebx296->f69 = tmp8_292;
                    zf41 = reinterpret_cast<uint1_t>(ebx297->f69 == 0);
                    sf40 = ebx298->f69 < 0;
                    of39 = __intrinsic();
                    goto addr_8048226_22;
                }
            }
        } else {
            esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(&(*reinterpret_cast<struct s36**>(&esi34))->f0) * 0x6d696c75);
            esi34 = reinterpret_cast<struct s3*>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<uint32_t>(eax29) + 0x6f) * 0x6c6f646c);
            cf38 = __intrinsic();
            of39 = __intrinsic();
            sf40 = __undefined();
            zf41 = __undefined();
            goto addr_80481af_34;
        }
    }
    if (!cf38) 
        goto addr_804858f_229;
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esp2) - 4) = 0x795f6465;
    goto addr_804852f_422;
    addr_80485a6_423:
    if (cf38) {
        addr_8048622_466:
        if (!of39) {
            addr_804869f_467:
            goto addr_80486a0_284;
        } else {
            addr_804862a_303:
            if (!zf41) {
                addr_8048692_254:
                *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp36) + 0x67) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp36) + 0x67) + dh299);
                if (!*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp36) + 0x67)) {
                    addr_804870a_192:
                    tmp8_300 = reinterpret_cast<unsigned char>(ebx301->f65 + dh302);
                    cf38 = reinterpret_cast<uint1_t>(tmp8_300 < ebx303->f65);
                    ebx304->f65 = tmp8_300;
                    zf41 = reinterpret_cast<uint1_t>(ebx305->f65 == 0);
                    if (zf41 || (esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(&(*reinterpret_cast<struct s36**>(&esi34))->f33) * 0x65670032), cf38 = __intrinsic(), zf41 = __undefined(), zf41)) {
                        addr_8048782_185:
                        if (zf41) {
                            addr_80487ec_189:
                            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) + 0x7a);
                            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) + 0x7f);
                            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) - 0x7a);
                            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) - 0x73);
                            goto addr_80487fa_468;
                        } else {
                            if (!cf38) 
                                goto addr_80487fd_319;
                            esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebx306) + reinterpret_cast<uint32_t>(esi34) + 50) * 0x74657300);
                            cf38 = __intrinsic();
                            goto addr_804878a_311;
                        }
                    } else {
                        if (cf38) {
                            addr_804878c_312:
                            goto addr_804878e_313;
                        } else {
                            if (!zf41) {
                                addr_804878f_314:
                                if (!cf38) {
                                    addr_80487fa_468:
                                    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<int32_t>(ecx)) - 0x6d);
                                    goto addr_80487fd_319;
                                } else {
                                    esp2 = reinterpret_cast<struct s2*>(*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebx307) + reinterpret_cast<uint32_t>(esi34) + 50) * 0x76697000);
                                    cf38 = __intrinsic();
                                    zf41 = __undefined();
                                    goto addr_8048798_316;
                                }
                            } else {
                                if (!cf38) {
                                    addr_8048754_232:
                                    goto addr_8048755_291;
                                } else {
                                    *reinterpret_cast<unsigned char*>(&eax29) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax29) ^ eax29->f0);
                                    cf38 = 0;
                                    zf41 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax29) == 0);
                                    goto addr_8048722_310;
                                }
                            }
                        }
                    }
                } else {
                    __asm__("insb ");
                    ebp36 = reinterpret_cast<struct s8*>(*reinterpret_cast<int32_t*>(&ebp36->f67) * 0x6d6d0074);
                    cf38 = __intrinsic();
                    of39 = __intrinsic();
                    zf41 = __undefined();
                    below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                    goto addr_804869f_467;
                }
            } else {
                addr_804862d_141:
                ebp36 = reinterpret_cast<struct s8*>(esi34->f66 * 0x7472006f);
                cf38 = __intrinsic();
                of39 = __intrinsic();
                zf41 = __undefined();
                below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                goto addr_804862f_306;
            }
        }
    } else {
        edi27 = esp2->f0;
        esp2 = reinterpret_cast<struct s2*>(&esp2->f4);
        __asm__("insd ");
        __asm__("outsd ");
        if (!zf41) {
            addr_804861b_278:
            if (!below_or_equal44) {
                addr_8048680_270:
                goto addr_8048681_244;
            } else {
                esi34 = reinterpret_cast<struct s3*>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<uint32_t>(eax29) + 0x72) * 0x69735f74);
                cf38 = __intrinsic();
                of39 = __intrinsic();
                zf41 = __undefined();
                below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                goto addr_8048622_466;
            }
        } else {
            eax29->f6f = reinterpret_cast<signed char>(eax29->f6f + dh308);
            goto addr_80485b2_428;
        }
    }
    __asm__("outsd ");
    if (cf38) {
        addr_8048364_481:
        __asm__("insd ");
        tmp8_309 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) + 0x6f) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
        cf38 = reinterpret_cast<uint1_t>(tmp8_309 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) + 0x6f));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) + 0x6f) = tmp8_309;
        zf41 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) + 0x6f) == 0);
        of39 = __intrinsic();
        below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
        goto addr_8048366_412;
    } else {
        if (zf41) {
            addr_8048376_59:
            __asm__("insb ");
            *reinterpret_cast<signed char*>(&esi34->f6b) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&esi34->f6b) + dh310);
            goto addr_804837c_450;
        } else {
            tmp8_311 = reinterpret_cast<unsigned char>(ebx312->f65 + dh313);
            cf38 = reinterpret_cast<uint1_t>(tmp8_311 < ebx314->f65);
            ebx315->f65 = tmp8_311;
            zf41 = reinterpret_cast<uint1_t>(ebx316->f65 == 0);
            goto addr_80482fe_24;
        }
    }
    addr_8048287_442:
    if (!cf38) {
        addr_80482ee_484:
        if (!below_or_equal44) {
            addr_804835f_362:
            __asm__("insb ");
            if (!zf41) {
                addr_80483d1_359:
                esp2 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(esp2) - 4);
                esp2->f0 = reinterpret_cast<struct s3*>(0x74);
                ebp36 = reinterpret_cast<struct s8*>(ebp36->f65 * 0x706d0078);
                cf38 = __intrinsic();
                of39 = __intrinsic();
                zf41 = __undefined();
                below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
                goto addr_80483d7_413;
            } else {
                addr_8048363_438:
                __asm__("popad ");
                goto addr_8048364_481;
            }
        } else {
            tmp8_317 = reinterpret_cast<unsigned char>(edi27->f65 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1));
            cf38 = reinterpret_cast<uint1_t>(tmp8_317 < edi27->f65);
            edi27->f65 = tmp8_317;
            zf41 = reinterpret_cast<uint1_t>(edi27->f65 == 0);
            of39 = __intrinsic();
            below_or_equal44 = reinterpret_cast<uint1_t>(cf38 | zf41);
            goto addr_80482f2_411;
        }
    } else {
        __asm__("insb ");
        __asm__("arpl [gs:eax+eax+0x73], si");
        goto addr_804828e_23;
    }
    addr_8048279_444:
    if (!zf41) {
        addr_80482eb_409:
        __asm__("o16 arpl [eax+0x6f], bp");
        goto addr_80482ee_484;
    } else {
        if (!cf38) 
            goto addr_804827d_406; else 
            goto addr_804827d_406;
    }
    addr_8048122_404:
    __asm__("insd ");
    ebx318->f79 = reinterpret_cast<signed char>(ebx319->f79 + dh320);
    __asm__("outsb ");
    __asm__("arpl [eax], ax");
    addr_804812a_18:
    ebp36 = reinterpret_cast<struct s8*>(ecx->f6c * 0x6c);
    edx321->f65 = reinterpret_cast<signed char>(edx322->f65 + dh323);
    __asm__("outsb ");
    __asm__("popad ");
    goto addr_8048133_5;
    addr_80480b6_19:
    __asm__("popad ");
    __asm__("insb ");
    if (!__intrinsic()) {
        goto addr_8048122_404;
    } else {
        eax29 = reinterpret_cast<struct s5*>(eax29->f0 * 0x67);
        zf35 = __undefined();
        goto addr_80480bd_4;
    }
}

void fun_80488c2(int32_t ecx) {
    int32_t eax2;
    int32_t eax3;

    *reinterpret_cast<int32_t*>(eax2 + ecx) = *reinterpret_cast<int32_t*>(eax3 + ecx) + reinterpret_cast<int32_t>("dup2");
    __asm__("aam 0x81");
    __asm__("fadd qword [ecx+0x81e40804]");
    goto 0x804885a;
}

int32_t g8048d47;

int32_t g8049097;

uint32_t g8049083;

struct s150 {
    signed char f0;
    signed char f1;
};

void fun_8048b7c(uint32_t* ecx, signed char* a2) {
    int1_t zf3;
    unsigned char bl4;
    uint16_t es5;
    signed char** esp6;
    int32_t ecx7;
    signed char** ebp8;
    int32_t ecx9;
    signed char* edi10;
    int32_t ecx11;
    uint32_t ecx12;
    int32_t eax13;
    int32_t ecx14;
    signed char* edi15;
    int32_t edx16;
    int32_t ecx17;
    signed char* edi18;
    int32_t ecx19;
    struct s150* edi20;
    void* esp21;
    signed char* edi22;

    __asm__("insb ");
    __asm__("insb ");
    __asm__("outsd ");
    zf3 = (bl4 | *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) - 0x73)) == 0;
    __asm__("insb ");
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<int32_t>(ecx) * 2) = es5;
    if (zf3 || (g8048d47 = 2, __intrinsic())) {
        addr_8048d3a_2:
        __asm__("int 0x80");
    } else {
        if (0) {
            esp6 = reinterpret_cast<signed char**>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4 - 4 + 4 - 4 + 4);
            __asm__("int 0x80");
            ecx7 = 0;
            if (*a2 == 47 || *a2 == 46) {
                __asm__("int 0x80");
                goto addr_8048d3a_2;
            } else {
                do {
                    if (!ebp8[ecx7]) 
                        goto addr_8048d3a_2;
                    __asm__("lodsd ");
                    ++ecx7;
                } while (1 || 1);
            }
        } else {
            __asm__("int 0x80");
            if (!__intrinsic()) {
                __asm__("int 0x80");
                while (!__intrinsic()) {
                    __asm__("int 0x80");
                    ecx9 = g8049097;
                    edi10 = *reinterpret_cast<signed char**>("l64" + ecx9 * 4);
                    ecx11 = -1;
                    do {
                        if (!ecx11) 
                            break;
                        --ecx11;
                        ++edi10;
                    } while (*edi10);
                    __asm__("int 0x80");
                    __asm__("int 0x80");
                    __asm__("int 0x80");
                    __asm__("int 0x80");
                    __asm__("int 0x80");
                    ecx12 = g8049083;
                    fun_8048b47(ecx12);
                    __asm__("int 0x80");
                    __asm__("int 0x80");
                    __asm__("int 0x80");
                }
                goto addr_8048d3a_2;
            }
        }
    }
    eax13 = 0;
    ecx14 = -1;
    edi15 = ebp8[ecx7];
    do {
        if (!ecx14) 
            break;
        --ecx14;
        ++edi15;
    } while (*edi15);
    edx16 = ecx14;
    ecx17 = -1;
    edi18 = a2;
    do {
        if (!ecx17) 
            break;
        --ecx17;
        ++edi18;
    } while (*edi18);
    ecx19 = ecx17 + edx16;
    while (1) {
        edi20 = reinterpret_cast<struct s150*>(reinterpret_cast<int32_t>(esp6) + ecx19);
        do {
            __asm__("lodsb ");
            if (0) 
                break;
            edi20->f0 = *reinterpret_cast<signed char*>(&eax13);
            edi20 = reinterpret_cast<struct s150*>(&edi20->f1);
        } while (*reinterpret_cast<signed char*>(&eax13));
        esp21 = reinterpret_cast<void*>(esp6 - 1);
        edi20->f0 = 47;
        edi22 = &edi20->f1;
        do {
            __asm__("lodsb ");
            *edi22 = 47;
            ++edi22;
        } while (1);
        eax13 = 11;
        esp6 = reinterpret_cast<signed char**>(reinterpret_cast<int32_t>(esp21) + 4 - 4 + 4);
        __asm__("int 0x80");
        ecx19 = ecx19;
    }
}

struct s151 {
    void* f0;
    void* f1;
};

struct s152 {
    void* f0;
    void* f4;
};

int16_t gc4080484;

struct s153 {
    signed char[1] pad1;
    void* f1;
    signed char[2] pad4;
    void* f4;
};

struct s154 {
    int32_t f0;
    int32_t f4;
};

void fun_80488d9(void* ecx) {
    void* eax2;
    signed char al3;
    void* esp4;
    int16_t* esp5;
    int16_t ss6;
    void** esi7;
    void** esp8;
    void* tmp32_9;
    struct s151* edi10;
    struct s152* edi11;
    void* ebp12;
    void* ebp13;
    struct s153* esi14;
    unsigned char al15;
    unsigned char tmp8_16;
    unsigned char tmp8_17;
    int1_t less18;
    unsigned char tmp8_19;
    struct s154* esp20;
    unsigned char tmp8_21;
    int32_t* esp22;
    unsigned char tmp8_23;
    unsigned char tmp8_24;
    unsigned char tmp8_25;
    void* eax26;
    signed char tmp8_27;
    signed char tmp8_28;
    signed char tmp8_29;
    signed char tmp8_30;
    signed char tmp8_31;
    signed char tmp8_32;
    signed char tmp8_33;
    uint32_t tmp32_34;
    void* eax35;
    int1_t sf36;
    void** esp37;
    void* tmp32_38;
    void* esp39;
    void* tmp32_40;
    void* tmp32_41;
    void* tmp32_42;
    void* tmp32_43;
    void* eax44;

    *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(al3 + 8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + reinterpret_cast<int32_t>("ssetmask");
    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 2);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 16);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 25);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 36);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 47);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 59);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 69);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 79);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 89);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 0x66);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 0x73);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 0x7d);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 0x79);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 0x72);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 0x6a);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 97);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 88);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 81);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 74);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 67);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 59);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 54);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 47);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 38);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 28);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 21);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 14);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 2);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 10);
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 17;
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 32;
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 39;
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 50;
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 57;
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 67;
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 77;
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 82;
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 88;
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 94;
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 0x67;
    while (1) {
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 0x6c;
        while (1) {
            addr_8048985_3:
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 0x74;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 0x79;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 0x7f;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 0x79;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 0x71;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 0x69;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 0x65;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 95;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 85;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 79;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 65;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 59;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 48;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 39;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 30;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 18;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) - 4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) + 8;
            esp5 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(esp4) - 2);
            *esp5 = ss6;
            while (++esi7, esp8 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp5) - 1), eax2 = *esp8, esp4 = reinterpret_cast<void*>(esp8 + 1), !1) {
                *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax2) + 8);
                if (reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax2) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax2) == 0)) 
                    goto addr_8048985_3;
                *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax2) + 8);
                tmp32_9 = *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp4) + reinterpret_cast<uint32_t>(eax2) + 0x4849208);
                *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp4) + reinterpret_cast<uint32_t>(eax2) + 0x4849208) = eax2;
                eax2 = tmp32_9;
                *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax2) + 0x9e080484) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax2) + 0x9e080484) | 0x86);
                edi10->f0 = *esi7;
                edi11 = reinterpret_cast<struct s152*>(&edi10->f1);
                edi11->f0 = eax2;
                edi10 = reinterpret_cast<struct s151*>(&edi11->f4);
                esi7 = esi7 + 1 + 4;
                *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax2) + 8);
                __asm__("retf 0x484");
                __asm__("fild dword [esp+eax+0x484e608]");
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1) = 0xff;
                *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax2) + 0x85) + 8);
                ss6 = gc4080484;
                esp5 = reinterpret_cast<int16_t*>(0xc4080486);
                while (*reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax2) - *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp12) + 0x85360804)) + 8), ebp12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp12) - 1), !__intrinsic()) {
                    *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax2) + 8) + 8);
                    ebp13 = eax2;
                    eax2 = ebp12;
                    __asm__("lahf ");
                    edi10->f0 = *esi7;
                    edi10 = reinterpret_cast<struct s151*>(&edi10->f1);
                    esi14 = reinterpret_cast<struct s153*>(esi7 + 1);
                    *reinterpret_cast<signed char*>(&ecx) = 0x85;
                    *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax2) + 8) + 8);
                    __asm__("rol dword [ebp+0x85cb0804], 0x4");
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1) = 0xff;
                    __asm__("fild dword [ebp+0x85e80804]");
                    *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax2) + 8);
                    al15 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax2) + 0x86);
                    tmp8_16 = reinterpret_cast<unsigned char>(al15 + 8);
                    *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(tmp8_16 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi14) - 0x79ddf7fc)) + reinterpret_cast<uint1_t>(tmp8_16 < al15)) + 8) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi14) - 0x79bff7fc)) + 8);
                    esi7 = &esi14->f1;
                    tmp8_17 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx));
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<unsigned char*>(&eax2);
                    *reinterpret_cast<unsigned char*>(&eax2) = tmp8_17;
                    ebp12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp13) - 1);
                    less18 = reinterpret_cast<int32_t>(ebp12) < reinterpret_cast<int32_t>(0) != __intrinsic();
                    tmp8_19 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx));
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<unsigned char*>(&eax2);
                    *reinterpret_cast<unsigned char*>(&eax2) = tmp8_19;
                    esp20 = reinterpret_cast<struct s154*>(esp5 - 2);
                    esp20->f0 = 0xc2080486;
                    tmp8_21 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx));
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<unsigned char*>(&eax2);
                    *reinterpret_cast<unsigned char*>(&eax2) = tmp8_21;
                    esp22 = &esp20->f4;
                    do {
                        tmp8_23 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx));
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<unsigned char*>(&eax2);
                        *reinterpret_cast<unsigned char*>(&eax2) = tmp8_23;
                        __asm__("popad ");
                        tmp8_24 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx));
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<unsigned char*>(&eax2);
                        *reinterpret_cast<unsigned char*>(&eax2) = tmp8_24;
                        esp5 = reinterpret_cast<int16_t*>(esp22 - 1);
                        *esp5 = reinterpret_cast<int16_t>(0x74080486);
                        tmp8_25 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx));
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<unsigned char*>(&eax2);
                        *reinterpret_cast<unsigned char*>(&eax2) = tmp8_25;
                        if (!less18) 
                            break;
                        eax26 = reinterpret_cast<void*>(0xc2080486);
                        tmp8_27 = *reinterpret_cast<signed char*>(0x3df7fb7a - reinterpret_cast<uint32_t>(ecx));
                        *reinterpret_cast<signed char*>(0x3df7fb7a - reinterpret_cast<uint32_t>(ecx)) = 0x86;
                        *reinterpret_cast<signed char*>(&eax26) = tmp8_27;
                        tmp8_28 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<uint32_t>(ecx));
                        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<signed char*>(&eax26);
                        *reinterpret_cast<signed char*>(&eax26) = tmp8_28;
                        edi10->f0 = *esi7;
                        tmp8_29 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<uint32_t>(ecx));
                        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<signed char*>(&eax26);
                        *reinterpret_cast<signed char*>(&eax26) = tmp8_29;
                        edi10 = reinterpret_cast<struct s151*>(&edi10->f1 + 1);
                        esi7 = esi7 + 1 + 4;
                        tmp8_30 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<uint32_t>(ecx));
                        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<signed char*>(&eax26);
                        *reinterpret_cast<signed char*>(&eax26) = tmp8_30;
                        tmp8_31 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<uint32_t>(ecx));
                        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<signed char*>(&eax26);
                        *reinterpret_cast<signed char*>(&eax26) = tmp8_31;
                        __asm__("retf 0x486");
                        tmp8_32 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<uint32_t>(ecx));
                        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<signed char*>(&eax26);
                        __asm__("fild dword [esi+0x86e40804]");
                        *reinterpret_cast<signed char*>(&eax26) = reinterpret_cast<signed char>(tmp8_32 + 8);
                        __asm__("in eax, dx");
                        tmp8_33 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<uint32_t>(ecx));
                        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<signed char*>(&eax26);
                        *reinterpret_cast<signed char*>(&eax26) = reinterpret_cast<signed char>(tmp8_33 + 8);
                        ss6 = *esp5;
                        tmp32_34 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<uint32_t>(ecx));
                        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<uint32_t>(ecx)) = eax26;
                        eax35 = reinterpret_cast<void*>(tmp32_34 & *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(edi10) - 0x78d0f7fc));
                        *reinterpret_cast<signed char*>(&eax35) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax35) + 8) + 8);
                        sf36 = *reinterpret_cast<signed char*>(&eax35) < 0;
                        less18 = sf36 != __intrinsic();
                        esp37 = reinterpret_cast<void**>(esp5 + 1 - 2);
                        *esp37 = eax35;
                        tmp32_38 = *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax35) + reinterpret_cast<uint32_t>(ecx));
                        *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax35) + reinterpret_cast<uint32_t>(ecx)) = eax35;
                        esp39 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(*esp37) + 4);
                        tmp32_40 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(tmp32_38) + reinterpret_cast<uint32_t>(ecx));
                        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(tmp32_38) + reinterpret_cast<uint32_t>(ecx)) = tmp32_38;
                        esp22 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esp39) - 4);
                        *esp22 = 0x70080487;
                        tmp32_41 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(tmp32_40) + reinterpret_cast<uint32_t>(ecx));
                        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(tmp32_40) + reinterpret_cast<uint32_t>(ecx)) = tmp32_40;
                        eax2 = tmp32_41;
                    } while (!sf36);
                    goto addr_8048b25_26;
                }
            }
            break;
        }
    }
    addr_8048b25_26:
    *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax2) + 8);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi10) - 0x7872f7fc) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi10) - 0x7872f7fc) + 4);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax2) + 0xa3080487) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax2) + 0xa3080487) | 0x86);
    tmp32_42 = *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx));
    *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(ecx)) = eax2;
    edi10->f0 = tmp32_42;
    tmp32_43 = *reinterpret_cast<void**>(reinterpret_cast<signed char>(tmp32_42) + reinterpret_cast<uint32_t>(ecx));
    *reinterpret_cast<void**>(reinterpret_cast<signed char>(tmp32_42) + reinterpret_cast<uint32_t>(ecx)) = tmp32_42;
    eax44 = tmp32_43;
    *reinterpret_cast<signed char*>(&eax44) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax44) + 8);
    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax44) + reinterpret_cast<uint32_t>(ecx)) = eax44;
}
