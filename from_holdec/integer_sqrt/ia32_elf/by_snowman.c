
void fun_80482f8(int32_t a1, int32_t a2);

void fun_804832c();

void frame_dummy();

void __do_global_ctors_aux();

int32_t _init() {
    int32_t v1;
    int32_t ebx2;
    int32_t v3;

    fun_80482f8(v1, ebx2);
    if (*reinterpret_cast<int32_t*>(v3 + 0x1afc - 4)) {
        fun_804832c();
    }
    frame_dummy();
    __do_global_ctors_aux();
    return ebx2;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80482f8(int32_t a1, int32_t a2) {
    struct s0* ebp3;

    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x1afc - 4)) {
        fun_804832c();
    }
    frame_dummy();
    __do_global_ctors_aux();
    goto ebp3->f4;
}

int32_t __gmon_start__ = 0x8048332;

void fun_804832c() {
    goto __gmon_start__;
}

int32_t __JCR_END__ = 0;

void printf(int32_t a1);

void frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && !1) {
        printf(0x8049d1c);
    }
    return;
}

int32_t __init_array_start = -1;

void __do_global_ctors_aux() {
    int32_t eax1;
    int32_t* ebx2;

    eax1 = __init_array_start;
    if (eax1 != -1) {
        ebx2 = reinterpret_cast<int32_t*>(0x8049d0c);
        do {
            --ebx2;
            eax1();
            eax1 = *ebx2;
        } while (eax1 != -1);
    }
    return;
}

int32_t __libc_start_main = 0x8048342;

void fun_804833c(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t printf = 0x8048362;

void fun_804835c(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6) {
    goto printf;
}

/* __i686.get_pc_thunk.bx */
void __i686_get_pc_thunk_bx() {
    return;
}

int32_t __assert_fail = 0x8048352;

void fun_804834c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, uint32_t a5, uint32_t a6) {
    goto __assert_fail;
}

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

uint32_t integer_sqrt_in_asm(uint16_t cx, int32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7) {
    uint32_t edx8;
    uint32_t eax9;
    uint16_t bx10;
    int16_t bx11;
    int16_t bx12;
    int16_t si13;
    int16_t si14;
    int16_t si15;
    uint16_t cx16;
    uint16_t dx17;
    uint1_t cf18;
    uint16_t bx19;
    uint1_t cf20;
    uint16_t cx21;
    uint16_t tmp16_22;
    uint1_t cf23;
    uint16_t tmp16_24;
    uint1_t cf25;
    uint16_t tmp16_26;
    uint16_t si27;
    uint16_t tmp16_28;
    int16_t ax29;
    int16_t ax30;
    uint16_t tmp16_31;
    uint16_t ax32;
    uint16_t tmp16_33;
    uint16_t cx34;
    uint16_t tmp16_35;
    uint16_t tmp16_36;
    uint16_t tmp16_37;
    uint16_t cx38;
    uint16_t dx39;
    uint1_t cf40;
    uint16_t bx41;
    uint1_t cf42;
    uint16_t cx43;
    uint16_t tmp16_44;
    uint1_t cf45;
    uint16_t tmp16_46;
    uint1_t cf47;
    uint16_t tmp16_48;
    uint16_t si49;
    uint16_t tmp16_50;
    uint16_t tmp16_51;
    uint16_t tmp16_52;
    uint16_t cx53;
    uint16_t tmp16_54;
    uint16_t tmp16_55;
    uint16_t tmp16_56;
    uint16_t cx57;
    uint16_t dx58;
    uint1_t cf59;
    uint16_t bx60;
    uint1_t cf61;
    uint16_t cx62;
    uint16_t tmp16_63;
    uint1_t cf64;
    uint16_t tmp16_65;
    uint1_t cf66;
    uint16_t tmp16_67;
    uint16_t si68;
    uint16_t tmp16_69;
    uint16_t tmp16_70;
    uint16_t tmp16_71;
    uint16_t cx72;
    uint16_t tmp16_73;
    uint16_t tmp16_74;
    uint16_t tmp16_75;
    uint16_t cx76;
    uint16_t dx77;
    uint1_t cf78;
    uint16_t bx79;
    uint1_t cf80;
    uint16_t cx81;
    uint16_t tmp16_82;
    uint1_t cf83;
    uint16_t tmp16_84;
    uint1_t cf85;
    uint16_t tmp16_86;
    uint16_t si87;
    uint16_t tmp16_88;
    uint16_t tmp16_89;
    uint16_t tmp16_90;
    uint16_t cx91;
    uint16_t tmp16_92;
    uint16_t tmp16_93;
    uint16_t tmp16_94;
    uint16_t cx95;
    uint16_t dx96;
    uint1_t cf97;
    uint16_t bx98;
    uint1_t cf99;
    uint16_t cx100;
    uint16_t tmp16_101;
    uint1_t cf102;
    uint16_t tmp16_103;
    uint1_t cf104;
    uint16_t tmp16_105;
    uint16_t si106;
    uint16_t tmp16_107;
    uint16_t tmp16_108;
    uint16_t tmp16_109;
    uint16_t cx110;
    uint16_t tmp16_111;
    uint16_t tmp16_112;
    uint16_t tmp16_113;
    uint16_t cx114;
    uint16_t dx115;
    uint1_t cf116;
    uint16_t bx117;
    uint1_t cf118;
    uint16_t cx119;
    uint16_t tmp16_120;
    uint1_t cf121;
    uint16_t tmp16_122;
    uint1_t cf123;
    uint16_t tmp16_124;
    uint16_t si125;
    uint16_t tmp16_126;
    uint16_t tmp16_127;
    uint16_t tmp16_128;
    uint16_t cx129;
    uint16_t tmp16_130;
    uint16_t tmp16_131;
    uint16_t tmp16_132;
    uint16_t cx133;
    uint16_t dx134;
    uint1_t cf135;
    uint16_t bx136;
    uint1_t cf137;
    uint16_t cx138;
    uint16_t tmp16_139;
    uint1_t cf140;
    uint16_t tmp16_141;
    uint1_t cf142;
    uint16_t tmp16_143;
    uint16_t si144;
    uint16_t tmp16_145;
    uint16_t tmp16_146;
    uint16_t tmp16_147;
    uint16_t cx148;
    uint16_t tmp16_149;
    uint16_t tmp16_150;
    uint16_t tmp16_151;
    uint16_t cx152;
    uint16_t dx153;
    uint1_t cf154;
    uint16_t bx155;
    uint1_t cf156;
    uint16_t cx157;
    uint16_t tmp16_158;
    uint1_t cf159;
    uint16_t tmp16_160;
    uint1_t cf161;
    uint16_t tmp16_162;
    uint16_t si163;
    uint16_t tmp16_164;
    uint16_t tmp16_165;
    uint16_t tmp16_166;
    uint16_t cx167;
    uint16_t tmp16_168;
    uint16_t tmp16_169;
    uint16_t tmp16_170;
    uint16_t cx171;
    uint16_t dx172;
    uint1_t cf173;
    uint16_t bx174;
    uint1_t cf175;
    uint16_t cx176;
    uint16_t tmp16_177;
    uint1_t cf178;
    uint16_t tmp16_179;
    uint1_t cf180;
    uint16_t tmp16_181;
    uint16_t si182;
    uint16_t tmp16_183;
    uint16_t tmp16_184;
    uint16_t tmp16_185;
    uint16_t cx186;
    uint16_t tmp16_187;
    uint16_t tmp16_188;
    uint16_t tmp16_189;
    uint16_t cx190;
    uint16_t dx191;
    uint1_t cf192;
    uint16_t bx193;
    uint1_t cf194;
    uint16_t cx195;
    uint16_t tmp16_196;
    uint1_t cf197;
    uint16_t tmp16_198;
    uint1_t cf199;
    uint16_t tmp16_200;
    uint16_t si201;
    uint16_t tmp16_202;
    uint16_t tmp16_203;
    uint16_t tmp16_204;
    uint16_t cx205;
    uint16_t tmp16_206;
    uint16_t tmp16_207;
    uint16_t tmp16_208;
    uint16_t cx209;
    uint16_t dx210;
    uint1_t cf211;
    uint16_t bx212;
    uint1_t cf213;
    uint16_t cx214;
    uint16_t tmp16_215;
    uint1_t cf216;
    uint16_t tmp16_217;
    uint1_t cf218;
    uint16_t tmp16_219;
    uint16_t si220;
    uint16_t tmp16_221;
    uint16_t tmp16_222;
    uint16_t tmp16_223;
    uint16_t cx224;
    uint16_t tmp16_225;
    uint16_t tmp16_226;
    uint16_t tmp16_227;
    uint16_t cx228;
    uint16_t dx229;
    uint1_t cf230;
    uint16_t bx231;
    uint1_t cf232;
    uint16_t cx233;
    uint16_t tmp16_234;
    uint1_t cf235;
    uint16_t tmp16_236;
    uint1_t cf237;
    uint16_t tmp16_238;
    uint16_t si239;
    uint16_t tmp16_240;
    uint16_t tmp16_241;
    uint16_t tmp16_242;
    uint16_t cx243;
    uint16_t tmp16_244;
    uint16_t tmp16_245;
    uint16_t tmp16_246;
    uint16_t cx247;
    uint16_t dx248;
    uint1_t cf249;
    uint16_t bx250;
    uint1_t cf251;
    uint16_t cx252;
    uint16_t tmp16_253;
    uint1_t cf254;
    uint16_t tmp16_255;
    uint1_t cf256;
    uint16_t tmp16_257;
    uint16_t si258;
    uint16_t tmp16_259;
    uint16_t tmp16_260;
    uint16_t tmp16_261;
    uint16_t cx262;
    uint16_t tmp16_263;
    uint16_t tmp16_264;
    uint16_t tmp16_265;
    uint16_t cx266;
    uint16_t dx267;
    uint1_t cf268;
    uint16_t bx269;
    uint1_t cf270;
    uint16_t cx271;
    uint16_t tmp16_272;
    uint1_t cf273;
    uint16_t tmp16_274;
    uint1_t cf275;
    uint16_t tmp16_276;
    uint16_t si277;
    uint16_t tmp16_278;
    uint16_t tmp16_279;
    uint16_t tmp16_280;
    uint16_t cx281;
    uint16_t tmp16_282;
    uint16_t tmp16_283;
    uint16_t tmp16_284;
    uint16_t cx285;
    uint16_t dx286;
    uint1_t cf287;
    uint16_t bx288;
    uint1_t cf289;
    uint16_t cx290;
    uint16_t tmp16_291;
    uint1_t cf292;
    uint16_t tmp16_293;
    uint1_t cf294;
    uint16_t tmp16_295;
    uint16_t tmp16_296;
    uint16_t tmp16_297;
    uint16_t tmp16_298;
    uint16_t cx299;
    uint16_t tmp16_300;
    uint16_t tmp16_301;
    struct s1* ebp302;

    __asm__("enter 0x0, 0x0");
    __asm__("pushad ");
    edx8 = eax9 >> 16;
    bx10 = reinterpret_cast<uint16_t>(bx11 - bx12);
    si13 = reinterpret_cast<int16_t>(si14 - si15);
    cx16 = reinterpret_cast<uint16_t>(cx - cx);
    dx17 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx8) - 0x4000);
    cf18 = reinterpret_cast<uint1_t>(bx10 < reinterpret_cast<uint16_t>(si13 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&edx8) < 0x4000)));
    bx19 = reinterpret_cast<uint16_t>(bx10 - reinterpret_cast<uint16_t>(si13 + cf18));
    cf20 = reinterpret_cast<uint1_t>(cx16 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf18)));
    cx21 = reinterpret_cast<uint16_t>(cx16 - reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf20)));
    if (cf20) {
        tmp16_22 = reinterpret_cast<uint16_t>(dx17 + 0x4000);
        cf23 = reinterpret_cast<uint1_t>(tmp16_22 < dx17);
        dx17 = tmp16_22;
        tmp16_24 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx19 + si13) + cf23);
        cf25 = reinterpret_cast<uint1_t>(tmp16_24 < bx19);
        bx19 = tmp16_24;
        tmp16_26 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(cx21)) + cf25);
        cf20 = reinterpret_cast<uint1_t>(tmp16_26 < cx21);
        cx21 = tmp16_26;
    }
    si27 = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(si13 + si13) + reinterpret_cast<uint1_t>(!cf20));
    tmp16_28 = reinterpret_cast<uint16_t>(ax29 + ax30);
    tmp16_31 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(dx17 + dx17) + reinterpret_cast<uint1_t>(tmp16_28 < ax32));
    tmp16_33 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx19 + bx19) + reinterpret_cast<uint1_t>(tmp16_31 < dx17));
    cx34 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx21 + cx21) + reinterpret_cast<uint1_t>(tmp16_33 < bx19));
    tmp16_35 = reinterpret_cast<uint16_t>(tmp16_28 + tmp16_28);
    tmp16_36 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_31 + tmp16_31) + reinterpret_cast<uint1_t>(tmp16_35 < tmp16_28));
    tmp16_37 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_33 + tmp16_33) + reinterpret_cast<uint1_t>(tmp16_36 < tmp16_31));
    cx38 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx34 + cx34) + reinterpret_cast<uint1_t>(tmp16_37 < tmp16_33));
    dx39 = reinterpret_cast<uint16_t>(tmp16_36 - 0x4000);
    cf40 = reinterpret_cast<uint1_t>(tmp16_37 < reinterpret_cast<uint16_t>(si27 + reinterpret_cast<uint1_t>(tmp16_36 < 0x4000)));
    bx41 = reinterpret_cast<uint16_t>(tmp16_37 - reinterpret_cast<uint16_t>(si27 + cf40));
    cf42 = reinterpret_cast<uint1_t>(cx38 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf40)));
    cx43 = reinterpret_cast<uint16_t>(cx38 - reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf42)));
    if (cf42) {
        tmp16_44 = reinterpret_cast<uint16_t>(dx39 + 0x4000);
        cf45 = reinterpret_cast<uint1_t>(tmp16_44 < dx39);
        dx39 = tmp16_44;
        tmp16_46 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx41 + si27) + cf45);
        cf47 = reinterpret_cast<uint1_t>(tmp16_46 < bx41);
        bx41 = tmp16_46;
        tmp16_48 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(cx43)) + cf47);
        cf42 = reinterpret_cast<uint1_t>(tmp16_48 < cx43);
        cx43 = tmp16_48;
    }
    si49 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(si27 + si27) + reinterpret_cast<uint1_t>(!cf42));
    tmp16_50 = reinterpret_cast<uint16_t>(tmp16_35 + tmp16_35);
    tmp16_51 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(dx39 + dx39) + reinterpret_cast<uint1_t>(tmp16_50 < tmp16_35));
    tmp16_52 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx41 + bx41) + reinterpret_cast<uint1_t>(tmp16_51 < dx39));
    cx53 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx43 + cx43) + reinterpret_cast<uint1_t>(tmp16_52 < bx41));
    tmp16_54 = reinterpret_cast<uint16_t>(tmp16_50 + tmp16_50);
    tmp16_55 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_51 + tmp16_51) + reinterpret_cast<uint1_t>(tmp16_54 < tmp16_50));
    tmp16_56 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_52 + tmp16_52) + reinterpret_cast<uint1_t>(tmp16_55 < tmp16_51));
    cx57 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx53 + cx53) + reinterpret_cast<uint1_t>(tmp16_56 < tmp16_52));
    dx58 = reinterpret_cast<uint16_t>(tmp16_55 - 0x4000);
    cf59 = reinterpret_cast<uint1_t>(tmp16_56 < reinterpret_cast<uint16_t>(si49 + reinterpret_cast<uint1_t>(tmp16_55 < 0x4000)));
    bx60 = reinterpret_cast<uint16_t>(tmp16_56 - reinterpret_cast<uint16_t>(si49 + cf59));
    cf61 = reinterpret_cast<uint1_t>(cx57 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf59)));
    cx62 = reinterpret_cast<uint16_t>(cx57 - reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf61)));
    if (cf61) {
        tmp16_63 = reinterpret_cast<uint16_t>(dx58 + 0x4000);
        cf64 = reinterpret_cast<uint1_t>(tmp16_63 < dx58);
        dx58 = tmp16_63;
        tmp16_65 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx60 + si49) + cf64);
        cf66 = reinterpret_cast<uint1_t>(tmp16_65 < bx60);
        bx60 = tmp16_65;
        tmp16_67 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(cx62)) + cf66);
        cf61 = reinterpret_cast<uint1_t>(tmp16_67 < cx62);
        cx62 = tmp16_67;
    }
    si68 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(si49 + si49) + reinterpret_cast<uint1_t>(!cf61));
    tmp16_69 = reinterpret_cast<uint16_t>(tmp16_54 + tmp16_54);
    tmp16_70 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(dx58 + dx58) + reinterpret_cast<uint1_t>(tmp16_69 < tmp16_54));
    tmp16_71 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx60 + bx60) + reinterpret_cast<uint1_t>(tmp16_70 < dx58));
    cx72 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx62 + cx62) + reinterpret_cast<uint1_t>(tmp16_71 < bx60));
    tmp16_73 = reinterpret_cast<uint16_t>(tmp16_69 + tmp16_69);
    tmp16_74 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_70 + tmp16_70) + reinterpret_cast<uint1_t>(tmp16_73 < tmp16_69));
    tmp16_75 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_71 + tmp16_71) + reinterpret_cast<uint1_t>(tmp16_74 < tmp16_70));
    cx76 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx72 + cx72) + reinterpret_cast<uint1_t>(tmp16_75 < tmp16_71));
    dx77 = reinterpret_cast<uint16_t>(tmp16_74 - 0x4000);
    cf78 = reinterpret_cast<uint1_t>(tmp16_75 < reinterpret_cast<uint16_t>(si68 + reinterpret_cast<uint1_t>(tmp16_74 < 0x4000)));
    bx79 = reinterpret_cast<uint16_t>(tmp16_75 - reinterpret_cast<uint16_t>(si68 + cf78));
    cf80 = reinterpret_cast<uint1_t>(cx76 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf78)));
    cx81 = reinterpret_cast<uint16_t>(cx76 - reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf80)));
    if (cf80) {
        tmp16_82 = reinterpret_cast<uint16_t>(dx77 + 0x4000);
        cf83 = reinterpret_cast<uint1_t>(tmp16_82 < dx77);
        dx77 = tmp16_82;
        tmp16_84 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx79 + si68) + cf83);
        cf85 = reinterpret_cast<uint1_t>(tmp16_84 < bx79);
        bx79 = tmp16_84;
        tmp16_86 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(cx81)) + cf85);
        cf80 = reinterpret_cast<uint1_t>(tmp16_86 < cx81);
        cx81 = tmp16_86;
    }
    si87 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(si68 + si68) + reinterpret_cast<uint1_t>(!cf80));
    tmp16_88 = reinterpret_cast<uint16_t>(tmp16_73 + tmp16_73);
    tmp16_89 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(dx77 + dx77) + reinterpret_cast<uint1_t>(tmp16_88 < tmp16_73));
    tmp16_90 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx79 + bx79) + reinterpret_cast<uint1_t>(tmp16_89 < dx77));
    cx91 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx81 + cx81) + reinterpret_cast<uint1_t>(tmp16_90 < bx79));
    tmp16_92 = reinterpret_cast<uint16_t>(tmp16_88 + tmp16_88);
    tmp16_93 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_89 + tmp16_89) + reinterpret_cast<uint1_t>(tmp16_92 < tmp16_88));
    tmp16_94 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_90 + tmp16_90) + reinterpret_cast<uint1_t>(tmp16_93 < tmp16_89));
    cx95 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx91 + cx91) + reinterpret_cast<uint1_t>(tmp16_94 < tmp16_90));
    dx96 = reinterpret_cast<uint16_t>(tmp16_93 - 0x4000);
    cf97 = reinterpret_cast<uint1_t>(tmp16_94 < reinterpret_cast<uint16_t>(si87 + reinterpret_cast<uint1_t>(tmp16_93 < 0x4000)));
    bx98 = reinterpret_cast<uint16_t>(tmp16_94 - reinterpret_cast<uint16_t>(si87 + cf97));
    cf99 = reinterpret_cast<uint1_t>(cx95 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf97)));
    cx100 = reinterpret_cast<uint16_t>(cx95 - reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf99)));
    if (cf99) {
        tmp16_101 = reinterpret_cast<uint16_t>(dx96 + 0x4000);
        cf102 = reinterpret_cast<uint1_t>(tmp16_101 < dx96);
        dx96 = tmp16_101;
        tmp16_103 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx98 + si87) + cf102);
        cf104 = reinterpret_cast<uint1_t>(tmp16_103 < bx98);
        bx98 = tmp16_103;
        tmp16_105 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(cx100)) + cf104);
        cf99 = reinterpret_cast<uint1_t>(tmp16_105 < cx100);
        cx100 = tmp16_105;
    }
    si106 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(si87 + si87) + reinterpret_cast<uint1_t>(!cf99));
    tmp16_107 = reinterpret_cast<uint16_t>(tmp16_92 + tmp16_92);
    tmp16_108 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(dx96 + dx96) + reinterpret_cast<uint1_t>(tmp16_107 < tmp16_92));
    tmp16_109 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx98 + bx98) + reinterpret_cast<uint1_t>(tmp16_108 < dx96));
    cx110 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx100 + cx100) + reinterpret_cast<uint1_t>(tmp16_109 < bx98));
    tmp16_111 = reinterpret_cast<uint16_t>(tmp16_107 + tmp16_107);
    tmp16_112 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_108 + tmp16_108) + reinterpret_cast<uint1_t>(tmp16_111 < tmp16_107));
    tmp16_113 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_109 + tmp16_109) + reinterpret_cast<uint1_t>(tmp16_112 < tmp16_108));
    cx114 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx110 + cx110) + reinterpret_cast<uint1_t>(tmp16_113 < tmp16_109));
    dx115 = reinterpret_cast<uint16_t>(tmp16_112 - 0x4000);
    cf116 = reinterpret_cast<uint1_t>(tmp16_113 < reinterpret_cast<uint16_t>(si106 + reinterpret_cast<uint1_t>(tmp16_112 < 0x4000)));
    bx117 = reinterpret_cast<uint16_t>(tmp16_113 - reinterpret_cast<uint16_t>(si106 + cf116));
    cf118 = reinterpret_cast<uint1_t>(cx114 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf116)));
    cx119 = reinterpret_cast<uint16_t>(cx114 - reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf118)));
    if (cf118) {
        tmp16_120 = reinterpret_cast<uint16_t>(dx115 + 0x4000);
        cf121 = reinterpret_cast<uint1_t>(tmp16_120 < dx115);
        dx115 = tmp16_120;
        tmp16_122 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx117 + si106) + cf121);
        cf123 = reinterpret_cast<uint1_t>(tmp16_122 < bx117);
        bx117 = tmp16_122;
        tmp16_124 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(cx119)) + cf123);
        cf118 = reinterpret_cast<uint1_t>(tmp16_124 < cx119);
        cx119 = tmp16_124;
    }
    si125 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(si106 + si106) + reinterpret_cast<uint1_t>(!cf118));
    tmp16_126 = reinterpret_cast<uint16_t>(tmp16_111 + tmp16_111);
    tmp16_127 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(dx115 + dx115) + reinterpret_cast<uint1_t>(tmp16_126 < tmp16_111));
    tmp16_128 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx117 + bx117) + reinterpret_cast<uint1_t>(tmp16_127 < dx115));
    cx129 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx119 + cx119) + reinterpret_cast<uint1_t>(tmp16_128 < bx117));
    tmp16_130 = reinterpret_cast<uint16_t>(tmp16_126 + tmp16_126);
    tmp16_131 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_127 + tmp16_127) + reinterpret_cast<uint1_t>(tmp16_130 < tmp16_126));
    tmp16_132 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_128 + tmp16_128) + reinterpret_cast<uint1_t>(tmp16_131 < tmp16_127));
    cx133 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx129 + cx129) + reinterpret_cast<uint1_t>(tmp16_132 < tmp16_128));
    dx134 = reinterpret_cast<uint16_t>(tmp16_131 - 0x4000);
    cf135 = reinterpret_cast<uint1_t>(tmp16_132 < reinterpret_cast<uint16_t>(si125 + reinterpret_cast<uint1_t>(tmp16_131 < 0x4000)));
    bx136 = reinterpret_cast<uint16_t>(tmp16_132 - reinterpret_cast<uint16_t>(si125 + cf135));
    cf137 = reinterpret_cast<uint1_t>(cx133 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf135)));
    cx138 = reinterpret_cast<uint16_t>(cx133 - reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf137)));
    if (cf137) {
        tmp16_139 = reinterpret_cast<uint16_t>(dx134 + 0x4000);
        cf140 = reinterpret_cast<uint1_t>(tmp16_139 < dx134);
        dx134 = tmp16_139;
        tmp16_141 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx136 + si125) + cf140);
        cf142 = reinterpret_cast<uint1_t>(tmp16_141 < bx136);
        bx136 = tmp16_141;
        tmp16_143 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(cx138)) + cf142);
        cf137 = reinterpret_cast<uint1_t>(tmp16_143 < cx138);
        cx138 = tmp16_143;
    }
    si144 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(si125 + si125) + reinterpret_cast<uint1_t>(!cf137));
    tmp16_145 = reinterpret_cast<uint16_t>(tmp16_130 + tmp16_130);
    tmp16_146 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(dx134 + dx134) + reinterpret_cast<uint1_t>(tmp16_145 < tmp16_130));
    tmp16_147 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx136 + bx136) + reinterpret_cast<uint1_t>(tmp16_146 < dx134));
    cx148 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx138 + cx138) + reinterpret_cast<uint1_t>(tmp16_147 < bx136));
    tmp16_149 = reinterpret_cast<uint16_t>(tmp16_145 + tmp16_145);
    tmp16_150 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_146 + tmp16_146) + reinterpret_cast<uint1_t>(tmp16_149 < tmp16_145));
    tmp16_151 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_147 + tmp16_147) + reinterpret_cast<uint1_t>(tmp16_150 < tmp16_146));
    cx152 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx148 + cx148) + reinterpret_cast<uint1_t>(tmp16_151 < tmp16_147));
    dx153 = reinterpret_cast<uint16_t>(tmp16_150 - 0x4000);
    cf154 = reinterpret_cast<uint1_t>(tmp16_151 < reinterpret_cast<uint16_t>(si144 + reinterpret_cast<uint1_t>(tmp16_150 < 0x4000)));
    bx155 = reinterpret_cast<uint16_t>(tmp16_151 - reinterpret_cast<uint16_t>(si144 + cf154));
    cf156 = reinterpret_cast<uint1_t>(cx152 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf154)));
    cx157 = reinterpret_cast<uint16_t>(cx152 - reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf156)));
    if (cf156) {
        tmp16_158 = reinterpret_cast<uint16_t>(dx153 + 0x4000);
        cf159 = reinterpret_cast<uint1_t>(tmp16_158 < dx153);
        dx153 = tmp16_158;
        tmp16_160 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx155 + si144) + cf159);
        cf161 = reinterpret_cast<uint1_t>(tmp16_160 < bx155);
        bx155 = tmp16_160;
        tmp16_162 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(cx157)) + cf161);
        cf156 = reinterpret_cast<uint1_t>(tmp16_162 < cx157);
        cx157 = tmp16_162;
    }
    si163 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(si144 + si144) + reinterpret_cast<uint1_t>(!cf156));
    tmp16_164 = reinterpret_cast<uint16_t>(tmp16_149 + tmp16_149);
    tmp16_165 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(dx153 + dx153) + reinterpret_cast<uint1_t>(tmp16_164 < tmp16_149));
    tmp16_166 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx155 + bx155) + reinterpret_cast<uint1_t>(tmp16_165 < dx153));
    cx167 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx157 + cx157) + reinterpret_cast<uint1_t>(tmp16_166 < bx155));
    tmp16_168 = reinterpret_cast<uint16_t>(tmp16_164 + tmp16_164);
    tmp16_169 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_165 + tmp16_165) + reinterpret_cast<uint1_t>(tmp16_168 < tmp16_164));
    tmp16_170 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_166 + tmp16_166) + reinterpret_cast<uint1_t>(tmp16_169 < tmp16_165));
    cx171 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx167 + cx167) + reinterpret_cast<uint1_t>(tmp16_170 < tmp16_166));
    dx172 = reinterpret_cast<uint16_t>(tmp16_169 - 0x4000);
    cf173 = reinterpret_cast<uint1_t>(tmp16_170 < reinterpret_cast<uint16_t>(si163 + reinterpret_cast<uint1_t>(tmp16_169 < 0x4000)));
    bx174 = reinterpret_cast<uint16_t>(tmp16_170 - reinterpret_cast<uint16_t>(si163 + cf173));
    cf175 = reinterpret_cast<uint1_t>(cx171 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf173)));
    cx176 = reinterpret_cast<uint16_t>(cx171 - reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf175)));
    if (cf175) {
        tmp16_177 = reinterpret_cast<uint16_t>(dx172 + 0x4000);
        cf178 = reinterpret_cast<uint1_t>(tmp16_177 < dx172);
        dx172 = tmp16_177;
        tmp16_179 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx174 + si163) + cf178);
        cf180 = reinterpret_cast<uint1_t>(tmp16_179 < bx174);
        bx174 = tmp16_179;
        tmp16_181 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(cx176)) + cf180);
        cf175 = reinterpret_cast<uint1_t>(tmp16_181 < cx176);
        cx176 = tmp16_181;
    }
    si182 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(si163 + si163) + reinterpret_cast<uint1_t>(!cf175));
    tmp16_183 = reinterpret_cast<uint16_t>(tmp16_168 + tmp16_168);
    tmp16_184 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(dx172 + dx172) + reinterpret_cast<uint1_t>(tmp16_183 < tmp16_168));
    tmp16_185 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx174 + bx174) + reinterpret_cast<uint1_t>(tmp16_184 < dx172));
    cx186 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx176 + cx176) + reinterpret_cast<uint1_t>(tmp16_185 < bx174));
    tmp16_187 = reinterpret_cast<uint16_t>(tmp16_183 + tmp16_183);
    tmp16_188 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_184 + tmp16_184) + reinterpret_cast<uint1_t>(tmp16_187 < tmp16_183));
    tmp16_189 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_185 + tmp16_185) + reinterpret_cast<uint1_t>(tmp16_188 < tmp16_184));
    cx190 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx186 + cx186) + reinterpret_cast<uint1_t>(tmp16_189 < tmp16_185));
    dx191 = reinterpret_cast<uint16_t>(tmp16_188 - 0x4000);
    cf192 = reinterpret_cast<uint1_t>(tmp16_189 < reinterpret_cast<uint16_t>(si182 + reinterpret_cast<uint1_t>(tmp16_188 < 0x4000)));
    bx193 = reinterpret_cast<uint16_t>(tmp16_189 - reinterpret_cast<uint16_t>(si182 + cf192));
    cf194 = reinterpret_cast<uint1_t>(cx190 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf192)));
    cx195 = reinterpret_cast<uint16_t>(cx190 - reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf194)));
    if (cf194) {
        tmp16_196 = reinterpret_cast<uint16_t>(dx191 + 0x4000);
        cf197 = reinterpret_cast<uint1_t>(tmp16_196 < dx191);
        dx191 = tmp16_196;
        tmp16_198 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx193 + si182) + cf197);
        cf199 = reinterpret_cast<uint1_t>(tmp16_198 < bx193);
        bx193 = tmp16_198;
        tmp16_200 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(cx195)) + cf199);
        cf194 = reinterpret_cast<uint1_t>(tmp16_200 < cx195);
        cx195 = tmp16_200;
    }
    si201 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(si182 + si182) + reinterpret_cast<uint1_t>(!cf194));
    tmp16_202 = reinterpret_cast<uint16_t>(tmp16_187 + tmp16_187);
    tmp16_203 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(dx191 + dx191) + reinterpret_cast<uint1_t>(tmp16_202 < tmp16_187));
    tmp16_204 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx193 + bx193) + reinterpret_cast<uint1_t>(tmp16_203 < dx191));
    cx205 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx195 + cx195) + reinterpret_cast<uint1_t>(tmp16_204 < bx193));
    tmp16_206 = reinterpret_cast<uint16_t>(tmp16_202 + tmp16_202);
    tmp16_207 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_203 + tmp16_203) + reinterpret_cast<uint1_t>(tmp16_206 < tmp16_202));
    tmp16_208 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_204 + tmp16_204) + reinterpret_cast<uint1_t>(tmp16_207 < tmp16_203));
    cx209 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx205 + cx205) + reinterpret_cast<uint1_t>(tmp16_208 < tmp16_204));
    dx210 = reinterpret_cast<uint16_t>(tmp16_207 - 0x4000);
    cf211 = reinterpret_cast<uint1_t>(tmp16_208 < reinterpret_cast<uint16_t>(si201 + reinterpret_cast<uint1_t>(tmp16_207 < 0x4000)));
    bx212 = reinterpret_cast<uint16_t>(tmp16_208 - reinterpret_cast<uint16_t>(si201 + cf211));
    cf213 = reinterpret_cast<uint1_t>(cx209 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf211)));
    cx214 = reinterpret_cast<uint16_t>(cx209 - reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf213)));
    if (cf213) {
        tmp16_215 = reinterpret_cast<uint16_t>(dx210 + 0x4000);
        cf216 = reinterpret_cast<uint1_t>(tmp16_215 < dx210);
        dx210 = tmp16_215;
        tmp16_217 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx212 + si201) + cf216);
        cf218 = reinterpret_cast<uint1_t>(tmp16_217 < bx212);
        bx212 = tmp16_217;
        tmp16_219 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(cx214)) + cf218);
        cf213 = reinterpret_cast<uint1_t>(tmp16_219 < cx214);
        cx214 = tmp16_219;
    }
    si220 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(si201 + si201) + reinterpret_cast<uint1_t>(!cf213));
    tmp16_221 = reinterpret_cast<uint16_t>(tmp16_206 + tmp16_206);
    tmp16_222 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(dx210 + dx210) + reinterpret_cast<uint1_t>(tmp16_221 < tmp16_206));
    tmp16_223 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx212 + bx212) + reinterpret_cast<uint1_t>(tmp16_222 < dx210));
    cx224 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx214 + cx214) + reinterpret_cast<uint1_t>(tmp16_223 < bx212));
    tmp16_225 = reinterpret_cast<uint16_t>(tmp16_221 + tmp16_221);
    tmp16_226 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_222 + tmp16_222) + reinterpret_cast<uint1_t>(tmp16_225 < tmp16_221));
    tmp16_227 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_223 + tmp16_223) + reinterpret_cast<uint1_t>(tmp16_226 < tmp16_222));
    cx228 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx224 + cx224) + reinterpret_cast<uint1_t>(tmp16_227 < tmp16_223));
    dx229 = reinterpret_cast<uint16_t>(tmp16_226 - 0x4000);
    cf230 = reinterpret_cast<uint1_t>(tmp16_227 < reinterpret_cast<uint16_t>(si220 + reinterpret_cast<uint1_t>(tmp16_226 < 0x4000)));
    bx231 = reinterpret_cast<uint16_t>(tmp16_227 - reinterpret_cast<uint16_t>(si220 + cf230));
    cf232 = reinterpret_cast<uint1_t>(cx228 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf230)));
    cx233 = reinterpret_cast<uint16_t>(cx228 - reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf232)));
    if (cf232) {
        tmp16_234 = reinterpret_cast<uint16_t>(dx229 + 0x4000);
        cf235 = reinterpret_cast<uint1_t>(tmp16_234 < dx229);
        dx229 = tmp16_234;
        tmp16_236 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx231 + si220) + cf235);
        cf237 = reinterpret_cast<uint1_t>(tmp16_236 < bx231);
        bx231 = tmp16_236;
        tmp16_238 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(cx233)) + cf237);
        cf232 = reinterpret_cast<uint1_t>(tmp16_238 < cx233);
        cx233 = tmp16_238;
    }
    si239 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(si220 + si220) + reinterpret_cast<uint1_t>(!cf232));
    tmp16_240 = reinterpret_cast<uint16_t>(tmp16_225 + tmp16_225);
    tmp16_241 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(dx229 + dx229) + reinterpret_cast<uint1_t>(tmp16_240 < tmp16_225));
    tmp16_242 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx231 + bx231) + reinterpret_cast<uint1_t>(tmp16_241 < dx229));
    cx243 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx233 + cx233) + reinterpret_cast<uint1_t>(tmp16_242 < bx231));
    tmp16_244 = reinterpret_cast<uint16_t>(tmp16_240 + tmp16_240);
    tmp16_245 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_241 + tmp16_241) + reinterpret_cast<uint1_t>(tmp16_244 < tmp16_240));
    tmp16_246 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_242 + tmp16_242) + reinterpret_cast<uint1_t>(tmp16_245 < tmp16_241));
    cx247 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx243 + cx243) + reinterpret_cast<uint1_t>(tmp16_246 < tmp16_242));
    dx248 = reinterpret_cast<uint16_t>(tmp16_245 - 0x4000);
    cf249 = reinterpret_cast<uint1_t>(tmp16_246 < reinterpret_cast<uint16_t>(si239 + reinterpret_cast<uint1_t>(tmp16_245 < 0x4000)));
    bx250 = reinterpret_cast<uint16_t>(tmp16_246 - reinterpret_cast<uint16_t>(si239 + cf249));
    cf251 = reinterpret_cast<uint1_t>(cx247 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf249)));
    cx252 = reinterpret_cast<uint16_t>(cx247 - reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf251)));
    if (cf251) {
        tmp16_253 = reinterpret_cast<uint16_t>(dx248 + 0x4000);
        cf254 = reinterpret_cast<uint1_t>(tmp16_253 < dx248);
        dx248 = tmp16_253;
        tmp16_255 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx250 + si239) + cf254);
        cf256 = reinterpret_cast<uint1_t>(tmp16_255 < bx250);
        bx250 = tmp16_255;
        tmp16_257 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(cx252)) + cf256);
        cf251 = reinterpret_cast<uint1_t>(tmp16_257 < cx252);
        cx252 = tmp16_257;
    }
    si258 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(si239 + si239) + reinterpret_cast<uint1_t>(!cf251));
    tmp16_259 = reinterpret_cast<uint16_t>(tmp16_244 + tmp16_244);
    tmp16_260 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(dx248 + dx248) + reinterpret_cast<uint1_t>(tmp16_259 < tmp16_244));
    tmp16_261 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx250 + bx250) + reinterpret_cast<uint1_t>(tmp16_260 < dx248));
    cx262 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx252 + cx252) + reinterpret_cast<uint1_t>(tmp16_261 < bx250));
    tmp16_263 = reinterpret_cast<uint16_t>(tmp16_259 + tmp16_259);
    tmp16_264 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_260 + tmp16_260) + reinterpret_cast<uint1_t>(tmp16_263 < tmp16_259));
    tmp16_265 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_261 + tmp16_261) + reinterpret_cast<uint1_t>(tmp16_264 < tmp16_260));
    cx266 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx262 + cx262) + reinterpret_cast<uint1_t>(tmp16_265 < tmp16_261));
    dx267 = reinterpret_cast<uint16_t>(tmp16_264 - 0x4000);
    cf268 = reinterpret_cast<uint1_t>(tmp16_265 < reinterpret_cast<uint16_t>(si258 + reinterpret_cast<uint1_t>(tmp16_264 < 0x4000)));
    bx269 = reinterpret_cast<uint16_t>(tmp16_265 - reinterpret_cast<uint16_t>(si258 + cf268));
    cf270 = reinterpret_cast<uint1_t>(cx266 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf268)));
    cx271 = reinterpret_cast<uint16_t>(cx266 - reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf270)));
    if (cf270) {
        tmp16_272 = reinterpret_cast<uint16_t>(dx267 + 0x4000);
        cf273 = reinterpret_cast<uint1_t>(tmp16_272 < dx267);
        dx267 = tmp16_272;
        tmp16_274 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx269 + si258) + cf273);
        cf275 = reinterpret_cast<uint1_t>(tmp16_274 < bx269);
        bx269 = tmp16_274;
        tmp16_276 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(cx271)) + cf275);
        cf270 = reinterpret_cast<uint1_t>(tmp16_276 < cx271);
        cx271 = tmp16_276;
    }
    si277 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(si258 + si258) + reinterpret_cast<uint1_t>(!cf270));
    tmp16_278 = reinterpret_cast<uint16_t>(tmp16_263 + tmp16_263);
    tmp16_279 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(dx267 + dx267) + reinterpret_cast<uint1_t>(tmp16_278 < tmp16_263));
    tmp16_280 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx269 + bx269) + reinterpret_cast<uint1_t>(tmp16_279 < dx267));
    cx281 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx271 + cx271) + reinterpret_cast<uint1_t>(tmp16_280 < bx269));
    tmp16_282 = reinterpret_cast<uint16_t>(tmp16_278 + tmp16_278);
    tmp16_283 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_279 + tmp16_279) + reinterpret_cast<uint1_t>(tmp16_282 < tmp16_278));
    tmp16_284 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_280 + tmp16_280) + reinterpret_cast<uint1_t>(tmp16_283 < tmp16_279));
    cx285 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx281 + cx281) + reinterpret_cast<uint1_t>(tmp16_284 < tmp16_280));
    dx286 = reinterpret_cast<uint16_t>(tmp16_283 - 0x4000);
    cf287 = reinterpret_cast<uint1_t>(tmp16_284 < reinterpret_cast<uint16_t>(si277 + reinterpret_cast<uint1_t>(tmp16_283 < 0x4000)));
    bx288 = reinterpret_cast<uint16_t>(tmp16_284 - reinterpret_cast<uint16_t>(si277 + cf287));
    cf289 = reinterpret_cast<uint1_t>(cx285 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf287)));
    cx290 = reinterpret_cast<uint16_t>(cx285 - reinterpret_cast<uint16_t>(static_cast<uint32_t>(cf289)));
    if (cf289) {
        tmp16_291 = reinterpret_cast<uint16_t>(dx286 + 0x4000);
        cf292 = reinterpret_cast<uint1_t>(tmp16_291 < dx286);
        dx286 = tmp16_291;
        tmp16_293 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx288 + si277) + cf292);
        cf294 = reinterpret_cast<uint1_t>(tmp16_293 < bx288);
        bx288 = tmp16_293;
        tmp16_295 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(cx290)) + cf294);
        cf289 = reinterpret_cast<uint1_t>(tmp16_295 < cx290);
        cx290 = tmp16_295;
    }
    tmp16_296 = reinterpret_cast<uint16_t>(tmp16_282 + tmp16_282);
    tmp16_297 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(dx286 + dx286) + reinterpret_cast<uint1_t>(tmp16_296 < tmp16_282));
    tmp16_298 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bx288 + bx288) + reinterpret_cast<uint1_t>(tmp16_297 < dx286));
    cx299 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx290 + cx290) + reinterpret_cast<uint1_t>(tmp16_298 < bx288));
    tmp16_300 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_297 + tmp16_297) + reinterpret_cast<uint1_t>(reinterpret_cast<uint16_t>(tmp16_296 + tmp16_296) < tmp16_296));
    tmp16_301 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(tmp16_298 + tmp16_298) + reinterpret_cast<uint1_t>(tmp16_300 < tmp16_297));
    if (reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx299 + cx299) + reinterpret_cast<uint1_t>(tmp16_301 < tmp16_298)) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(tmp16_301 < reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(si277 + si277) + reinterpret_cast<uint1_t>(!cf289)) + (tmp16_300 < 0x4000)))))) {
    }
    __asm__("popad ");
    goto ebp302->f4;
}

uint32_t integer_sqrt_in_c(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6) {
    uint32_t ecx7;
    int32_t eax8;
    int32_t v9;
    uint16_t v10;
    uint16_t v11;
    uint32_t ebx12;
    uint32_t edx13;
    uint32_t esi14;
    uint32_t esi15;
    uint32_t edi16;
    uint32_t ecx17;
    uint32_t edi18;
    uint16_t v19;
    uint32_t edi20;
    uint16_t v21;
    int32_t esi22;
    uint16_t tmp16_23;
    uint1_t cf24;
    uint32_t esi25;
    uint16_t tmp16_26;
    uint1_t cf27;
    uint32_t esi28;
    uint32_t esi29;
    uint32_t edi30;
    uint32_t edi31;
    uint16_t tmp16_32;
    uint1_t cf33;
    uint16_t v34;
    uint32_t edi35;
    uint32_t ecx36;
    uint32_t esi37;
    uint16_t v38;
    uint16_t tmp16_39;
    uint1_t cf40;
    uint32_t esi41;
    uint32_t esi42;
    uint16_t tmp16_43;
    uint1_t cf44;
    uint32_t edi45;
    uint32_t edi46;

    ecx7 = 0;
    eax8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    ebx12 = a1;
    edx13 = a1 >> 16;
    while (1) {
        *reinterpret_cast<unsigned char*>(&ecx7) = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&edx13) <= 0x3fff);
        esi14 = ecx7;
        *reinterpret_cast<uint16_t*>(&esi14) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi14) & 0xff);
        esi15 = esi14 + eax8;
        edi16 = reinterpret_cast<uint1_t>(v11 < *reinterpret_cast<uint16_t*>(&esi15));
        ecx17 = v10;
        edi18 = v11;
        *reinterpret_cast<uint16_t*>(&ecx17) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx17) - *reinterpret_cast<uint16_t*>(&edi16));
        v19 = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&edi18) - *reinterpret_cast<uint16_t*>(&esi15));
        edi20 = v10;
        v21 = *reinterpret_cast<uint16_t*>(&ecx17);
        if (*reinterpret_cast<uint16_t*>(&edi16) <= *reinterpret_cast<uint16_t*>(&edi20)) {
            *reinterpret_cast<uint16_t*>(&edx13) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx13) - 0x4000);
            esi22 = 0;
        } else {
            tmp16_23 = reinterpret_cast<uint16_t>(v19 + *reinterpret_cast<uint16_t*>(&esi15));
            cf24 = reinterpret_cast<uint1_t>(tmp16_23 < v19);
            v19 = tmp16_23;
            *reinterpret_cast<unsigned char*>(&ecx17) = cf24;
            esi25 = ecx17;
            tmp16_26 = reinterpret_cast<uint16_t>(v21 + reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi25) & 0xff));
            cf27 = reinterpret_cast<uint1_t>(tmp16_26 < v21);
            v21 = tmp16_26;
            *reinterpret_cast<unsigned char*>(&ecx17) = cf27;
            esi28 = ecx17;
            *reinterpret_cast<uint16_t*>(&esi22) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi28) & 0xff);
        }
        eax8 = eax8 + eax8 + 1;
        ++v9;
        *reinterpret_cast<uint16_t*>(&eax8) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax8) - *reinterpret_cast<uint16_t*>(&esi22));
        if (v9 == 16) 
            break;
        esi29 = ebx12 + ebx12;
        *reinterpret_cast<unsigned char*>(&ecx17) = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&ebx12) > *reinterpret_cast<uint16_t*>(&esi29));
        edi30 = ecx17;
        *reinterpret_cast<uint16_t*>(&edi30) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi30) & 0xff);
        edi31 = edx13 + edi30;
        tmp16_32 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx13) + *reinterpret_cast<int16_t*>(&edi31));
        cf33 = reinterpret_cast<uint1_t>(tmp16_32 < *reinterpret_cast<uint16_t*>(&edx13));
        *reinterpret_cast<uint16_t*>(&edx13) = tmp16_32;
        v34 = *reinterpret_cast<uint16_t*>(&edx13);
        *reinterpret_cast<unsigned char*>(&edx13) = cf33;
        edi35 = edx13;
        *reinterpret_cast<uint16_t*>(&edi35) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi35) & 0xff) + v19);
        ebx12 = ebx12 << 2;
        ecx36 = v19 + edi35;
        *reinterpret_cast<unsigned char*>(&edx13) = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&esi29) > *reinterpret_cast<uint16_t*>(&ebx12));
        esi37 = edx13;
        edx13 = v34;
        v38 = *reinterpret_cast<uint16_t*>(&ecx36);
        tmp16_39 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx13) + reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi37) & 0xff) + v34));
        cf40 = reinterpret_cast<uint1_t>(tmp16_39 < *reinterpret_cast<uint16_t*>(&edx13));
        *reinterpret_cast<uint16_t*>(&edx13) = tmp16_39;
        *reinterpret_cast<unsigned char*>(&ecx36) = cf40;
        esi41 = ecx36;
        *reinterpret_cast<unsigned char*>(&ecx36) = reinterpret_cast<uint1_t>(v38 < *reinterpret_cast<uint16_t*>(&edi35));
        esi42 = ecx36;
        ecx7 = v38;
        *reinterpret_cast<uint16_t*>(&esi42) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi42) & 0xff);
        tmp16_43 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx7) + reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi41) & 0xff) + v38));
        cf44 = reinterpret_cast<uint1_t>(tmp16_43 < *reinterpret_cast<uint16_t*>(&ecx7));
        *reinterpret_cast<uint16_t*>(&ecx7) = tmp16_43;
        v11 = *reinterpret_cast<uint16_t*>(&ecx7);
        *reinterpret_cast<unsigned char*>(&ecx7) = cf44;
        edi45 = ecx7;
        *reinterpret_cast<uint16_t*>(&edi45) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi45) & 0xff);
        edi46 = edi45 + (esi42 + v21 * 2) * 2;
        v10 = *reinterpret_cast<uint16_t*>(&edi46);
    }
    return static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax8));
}

void __do_global_dtors_aux();

struct s2 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048be8(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s2* ebp5;

    __do_global_dtors_aux();
    goto ebp5->f4;
}

signed char _edata = 0;

/* dtor_idx.5980 */
uint32_t dtor_idx_5980 = 0;

void __do_global_dtors_aux() {
    int1_t zf1;
    uint32_t eax2;
    uint32_t eax3;

    zf1 = _edata == 0;
    if (zf1) {
        eax2 = dtor_idx_5980;
        if (eax2 < 0) {
            do {
                eax3 = eax2 + 1;
                dtor_idx_5980 = eax3;
                *reinterpret_cast<int32_t*>(eax3 * 4 + 0x8049d14)();
                eax2 = dtor_idx_5980;
            } while (eax2 < 0);
        }
        _edata = 1;
    }
    return;
}

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_804833c(0x8048990, __return_address(), esp1, 0x8048b50, 0x8048b40, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_80483f5() {
}

void fun_80488f2() {
}

int32_t fun_8048985() {
    int32_t v1;
    uint32_t v2;
    int32_t ecx3;
    uint32_t v4;
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t eax9;
    uint32_t v10;
    uint32_t eax11;
    uint32_t edx12;
    uint32_t v13;
    uint32_t eax14;
    int32_t v15;
    uint32_t ebx16;
    uint32_t edi17;
    uint1_t cf18;
    uint32_t ebx19;
    uint32_t v20;

    v1 = 0x3e8;
    v2 = 0;
    do {
        eax9 = integer_sqrt_in_asm(*reinterpret_cast<uint16_t*>(&ecx3), "f(%3u) = %d | c1=%d | c2=%d | using-float=%d\n", v4, v5, v6, v7, v8);
        v10 = eax9;
        eax11 = integer_sqrt_in_c(v2, v4, v5, v6, v7, v8);
        edx12 = 0;
        ecx3 = 0;
        v13 = eax11;
        eax14 = v2;
        v15 = 0;
        while (1) {
            ebx16 = eax14;
            edi17 = *reinterpret_cast<uint16_t*>(&ecx3);
            *reinterpret_cast<int16_t*>(&ebx16) = 0;
            ecx3 = ecx3 + ecx3;
            if (edi17 <= edx12 && (edi17 < edx12 || 0x40000000 <= ebx16)) {
                ++ecx3;
                cf18 = reinterpret_cast<uint1_t>(eax14 < 0x40000000);
                eax14 = eax14 - 0x40000000;
                edx12 = edx12 - (edi17 + reinterpret_cast<uint1_t>(edx12 < edi17 + cf18));
            }
            ++v15;
            if (v15 == 16) 
                break;
            __asm__("shld edx, eax, 0x2");
            eax14 = eax14 << 2;
        }
        ebx19 = *reinterpret_cast<uint16_t*>(&ecx3);
        __asm__("fnstcw word [esp+0x56]");
        v7 = ebx19;
        __asm__("fild qword [esp+0x58]");
        __asm__("fsqrt ");
        v6 = v13;
        v5 = v10;
        v4 = v2;
        __asm__("fldcw word [esp+0x54]");
        __asm__("fistp dword [esp+0x50]");
        __asm__("fldcw word [esp+0x56]");
        v8 = v20;
        fun_804835c("f(%3u) = %d | c1=%d | c2=%d | using-float=%d\n", v4, v5, v6, v7, v8);
        if (v20 != v10) 
            break;
        if (v13 != v10) 
            goto addr_8048aea_9;
        if (v13 != ebx19) 
            goto addr_8048b0e_11;
        ++v2;
        --v1;
    } while (v1);
    goto addr_8048aba_13;
    fun_804834c("check == y", "source/main.c", 79, "main", v7, v8);
    addr_8048aea_9:
    fun_804834c("check == c1", "source/main.c", 80, "main", v7, v8);
    addr_8048b0e_11:
    fun_804834c("check == c2", "source/main.c", 81, "main", v7, v8);
    goto "check == c2";
    addr_8048aba_13:
    return 0;
}

void _fini() {
    int32_t v1;
    int32_t ebx2;
    int32_t ebp3;

    fun_8048be8(v1, ebx2, ebp3, __return_address());
}

int32_t g8049dfc = 0;

void fun_8048332() {
    goto g8049dfc;
}

void fun_8048328() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8048342() {
    goto 0x804831c;
}

void fun_8048362() {
    goto 0x804831c;
}

void fun_8048b45(int32_t a1, int32_t a2, int32_t a3) {
    int32_t ebx4;
    int32_t ebx5;
    uint32_t edi6;
    uint32_t esi7;

    __i686_get_pc_thunk_bx();
    ebx4 = ebx5 + 0x1299;
    _init();
    edi6 = reinterpret_cast<uint32_t>(ebx4 - 0xe8 - (ebx4 - 0xe8) >> 2);
    if (edi6) {
        esi7 = 0;
        do {
            *reinterpret_cast<int32_t*>(ebx4 + esi7 * 4 - 0xe8)(a1, a2, a3);
            ++esi7;
        } while (esi7 < edi6);
    }
    return;
}

void fun_80489dc() {
}

uint32_t fun_8048903(uint32_t a1) {
    uint32_t ecx2;
    int32_t eax3;
    int32_t edi4;
    uint32_t edx5;
    uint32_t esi6;
    uint32_t esi7;
    uint1_t cf8;

    ecx2 = 0;
    eax3 = 0;
    edi4 = 0;
    edx5 = a1;
    while (1) {
        esi6 = *reinterpret_cast<uint16_t*>(&eax3);
        eax3 = eax3 + eax3;
        esi7 = edx5;
        *reinterpret_cast<int16_t*>(&esi7) = 0;
        if (esi6 <= ecx2 && (esi6 < ecx2 || 0x40000000 <= esi7)) {
            ++eax3;
            cf8 = reinterpret_cast<uint1_t>(edx5 < 0x40000000);
            edx5 = edx5 - 0x40000000;
            ecx2 = ecx2 - (esi6 + reinterpret_cast<uint1_t>(ecx2 < esi6 + cf8));
        }
        ++edi4;
        if (edi4 == 16) 
            break;
        __asm__("shld ecx, edx, 0x2");
        edx5 = edx5 << 2;
    }
    return static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax3));
}

void fun_8048352() {
    goto 0x804831c;
}

void fun_80487dc() {
}

void fun_8048924() {
}
