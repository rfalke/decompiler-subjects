
int64_t deregister_tm_clones() {
    int64_t rax1;

    *reinterpret_cast<int32_t*>(&rax1) = 0x40d028;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    if (1 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

uint64_t log_size_10_var_000(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbx7;
    uint64_t r9_8;
    int64_t r15_9;
    uint64_t rax10;
    int64_t rdx11;
    uint32_t r12d12;
    int16_t cx13;
    uint64_t rbp14;
    int64_t rsi15;
    unsigned char tmp8_16;
    uint1_t cf17;
    uint32_t r15d18;
    int64_t r11_19;
    uint64_t rax20;
    uint32_t eax21;
    uint64_t rax22;
    uint64_t rsi23;
    uint64_t r14_24;
    uint64_t r11_25;
    uint1_t zf26;
    uint64_t rdx27;
    int64_t rbp28;
    uint64_t rbx29;
    uint16_t dx30;
    int64_t rcx31;
    int64_t r12_32;
    int64_t r10_33;
    uint32_t eax34;
    uint64_t rbp35;
    int32_t edx36;
    uint64_t rsi37;
    uint32_t ebp38;
    uint32_t edx39;
    int64_t rsi40;
    int64_t rdi41;
    unsigned char cl42;
    uint64_t r9_43;
    int64_t r13_44;
    uint64_t r8_45;
    int64_t r12_46;
    uint64_t r15_47;
    int64_t rbp48;
    uint64_t r9_49;
    uint1_t zf50;
    unsigned char tmp8_51;
    uint32_t edx52;
    uint1_t cf53;
    uint64_t rdi54;
    uint64_t rax55;
    uint64_t rcx56;
    int64_t r10_57;
    uint64_t r15_58;
    uint32_t esi59;
    int16_t dx60;
    uint64_t rbx61;
    uint64_t r9_62;
    uint64_t r12_63;
    int64_t rax64;
    uint64_t rcx65;
    uint16_t tmp16_66;
    uint64_t rax67;
    uint64_t r11_68;
    int64_t r11_69;
    uint64_t r11_70;
    uint32_t eax71;
    uint64_t rbp72;
    int64_t rax73;
    int32_t r15d74;
    uint1_t cf75;
    uint64_t rbp76;
    uint64_t rax77;
    int32_t ecx78;
    uint16_t r15w79;
    int64_t rdi80;
    int64_t rbx81;
    uint64_t rax82;
    int64_t rdx83;
    uint64_t r11_84;
    uint64_t r12_85;
    uint64_t r9_86;
    uint64_t rdx87;
    uint64_t rax88;
    uint64_t rcx89;
    uint16_t bp90;
    uint64_t r10_91;
    uint64_t rbx92;
    int64_t rdi93;
    uint64_t rsi94;
    uint1_t cf95;
    uint64_t rbx96;
    uint64_t r13_97;
    uint64_t rdi98;
    int64_t r14_99;
    int32_t ebx100;
    int64_t r10_101;
    uint64_t tmp64_102;
    unsigned char tmp8_103;
    unsigned char sil104;
    unsigned char tmp8_105;
    uint64_t rax106;
    uint64_t r12_107;
    uint64_t rcx108;
    int64_t rax109;
    uint64_t r14_110;
    int64_t r15_111;
    uint64_t r13_112;
    uint64_t rdi113;
    int32_t r8d114;
    uint64_t r11_115;
    unsigned char cl116;
    uint64_t rax117;
    int64_t r10_118;
    uint64_t rdi119;
    uint64_t r14_120;
    uint16_t ax121;
    int64_t rdx122;
    uint16_t ax123;
    int64_t rdi124;
    uint64_t rbx125;
    int64_t r14_126;
    int64_t r12_127;
    uint64_t rbp128;
    uint64_t tmp64_129;
    int32_t tmp32_130;
    uint1_t cf131;
    int64_t r10_132;
    uint64_t rbp133;
    uint64_t rax134;
    int64_t rdx135;
    uint64_t rax136;
    int64_t rdi137;
    uint32_t r10d138;
    int64_t r8_139;
    uint64_t r11_140;
    int64_t rdx141;
    int64_t r14_142;
    uint32_t edx143;
    int64_t r10_144;
    int64_t r8_145;
    uint16_t cx146;
    uint16_t dx147;
    uint16_t ax148;
    int64_t rsi149;
    unsigned char tmp8_150;
    uint64_t rbx151;
    uint64_t tmp64_152;
    uint64_t tmp64_153;
    uint1_t cf154;
    uint16_t ax155;
    uint16_t dx156;
    uint16_t ax157;
    uint16_t cx158;
    uint16_t cx159;
    uint16_t ax160;
    uint64_t rbp161;
    uint64_t r14_162;
    int16_t r9w163;
    uint64_t rbx164;
    int64_t r11_165;
    uint64_t r15_166;
    uint64_t rbp167;
    uint64_t r13_168;
    int32_t r12d169;
    uint64_t rbx170;
    uint32_t ecx171;
    uint64_t r14_172;
    int64_t rdx173;
    int64_t r11_174;
    int64_t rsi175;
    uint32_t ecx176;
    unsigned char tmp8_177;
    uint1_t cf178;
    uint32_t edi179;
    uint16_t ax180;
    unsigned char cl181;
    int32_t r13d182;
    int16_t r8w183;
    int32_t ecx184;
    uint64_t rbp185;
    int64_t rbx186;
    unsigned char tmp8_187;
    uint64_t r14_188;
    uint64_t r10_189;
    int64_t r12_190;
    uint64_t rcx191;
    uint64_t rdi192;
    uint64_t rbx193;
    int64_t rax194;
    uint64_t r10_195;
    uint64_t r15_196;
    uint64_t rdx197;
    uint64_t rax198;
    uint64_t r9_199;
    uint1_t zf200;
    uint32_t tmp32_201;
    uint64_t r9_202;
    uint64_t rax203;
    int64_t rdx204;
    uint64_t rcx205;
    uint32_t tmp32_206;
    int64_t r12_207;
    uint64_t r11_208;
    int64_t r9_209;
    uint64_t rcx210;
    int64_t rbx211;
    uint64_t rax212;
    int64_t r13_213;
    int64_t r8_214;
    signed char tmp8_215;
    int64_t r13_216;
    uint32_t r8d217;
    uint64_t r10_218;
    uint64_t rcx219;
    uint16_t r12w220;
    uint32_t ebx221;
    int64_t r10_222;
    uint16_t tmp16_223;
    uint16_t tmp16_224;
    uint1_t cf225;
    int64_t r9_226;
    uint64_t rbx227;
    uint64_t rax228;
    uint64_t rdx229;
    uint64_t rcx230;
    unsigned char tmp8_231;
    uint1_t cf232;
    uint64_t r10_233;
    uint64_t r15_234;
    uint64_t r14_235;
    uint64_t tmp64_236;
    uint64_t tmp64_237;
    int64_t rbp238;
    uint64_t r14_239;
    uint64_t tmp64_240;
    uint64_t r11_241;
    int64_t r8_242;
    uint64_t r11_243;
    int64_t r12_244;
    uint64_t tmp64_245;
    uint64_t rax246;
    uint64_t r15_247;
    int64_t r13_248;
    uint64_t rdx249;
    uint64_t rsi250;
    uint32_t r14d251;
    int64_t r14_252;
    int64_t rcx253;
    uint1_t cf254;
    uint64_t r9_255;
    uint32_t edi256;
    unsigned char dl257;
    uint64_t r10_258;
    int64_t r15_259;
    uint32_t tmp32_260;
    uint1_t cf261;
    int64_t rdi262;
    uint64_t r11_263;

    rbx7 = 0xeb2f407abafb429c;
    r9_8 = 0x3bc02f90f15d5c98;
    r15_9 = 0x781b2b47a7afa0c8;
    __asm__("rol dh, cl");
    __asm__("rol r13, cl");
    __asm__("rcr r11w, 1");
    __asm__("rol dl, 0xa4");
    *reinterpret_cast<int32_t*>(&rax10) = 0xa20b0000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx11) = __intrinsic();
    __asm__("btc rsi, 0x86");
    __asm__("btr r8d, 0x12");
    __asm__("cwd ");
    __asm__("shrd r15, rdx, 0x1");
    __asm__("ror r15w, 1");
    __asm__("bsr r11d, r12d");
    if (1) {
    }
    r12d12 = 8;
    __asm__("rcl esi, 1");
    __asm__("rol r13, cl");
    cx13 = 0xf738;
    *reinterpret_cast<int16_t*>(&r12d12) = -9;
    __asm__("btr r12, r12");
    *reinterpret_cast<int16_t*>(&r15_9) = 0xcec5;
    rbp14 = 0xeb2f407abafb429c >> 0xffffffffffffff8f;
    __asm__("rcr r8b, 0x11");
    __asm__("ror r8b, cl");
    __asm__("ror r10, 1");
    *reinterpret_cast<unsigned char*>(&rbx7) = reinterpret_cast<unsigned char>(0x87 + __intrinsic());
    *reinterpret_cast<uint16_t*>(&rbx7) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx7) >> 4);
    rsi15 = 0xc43fd06fe3a2a3d1;
    if (__intrinsic()) {
        r15_9 = 0x380b210286ab4005;
    }
    *reinterpret_cast<int16_t*>(&rax10) = 0;
    *reinterpret_cast<int16_t*>(&rsi15) = 0;
    tmp8_16 = *reinterpret_cast<unsigned char*>(&rdx11);
    __asm__("btr cx, r9w");
    __asm__("btr rbx, 0x5b");
    cf17 = reinterpret_cast<uint1_t>(tmp8_16 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx7) + 1))));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax10) + 1) = reinterpret_cast<unsigned char>(tmp8_16 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx7) + 1) + cf17));
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax10) + 1) >= reinterpret_cast<signed char>(static_cast<uint32_t>(cf17))) {
    }
    r15d18 = *reinterpret_cast<uint32_t*>(&r15_9) | 0x282bc785;
    if (0) {
        *reinterpret_cast<uint32_t*>(&rbx7) = 0x282bc785;
    }
    *reinterpret_cast<unsigned char*>(&rbx7) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&cx13) + 1);
    __asm__("rcr rbp, 0xed");
    *reinterpret_cast<uint32_t*>(&r11_19) = *reinterpret_cast<uint32_t*>(&rbx7);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_19) + 4) = 0;
    __asm__("ror esi, 1");
    if (0) {
        rsi15 = r11_19;
    }
    __asm__("rcl r11w, 1");
    rax20 = rax10;
    __asm__("xadd rbp, rbx");
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(__undefined())))) {
    }
    __asm__("bsr rdx, r15");
    __asm__("shld rdi, r12, cl");
    __asm__("ror r11w, 0x6d");
    eax21 = *reinterpret_cast<uint32_t*>(&rax20) | 0xc0000000;
    *reinterpret_cast<uint32_t*>(&rax22) = eax21 / eax21;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = 0;
    rsi23 = reinterpret_cast<uint64_t>(rsi15) & 0x4b64f6e;
    r14_24 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int16_t*>(&rbp14)));
    __asm__("rol r8, cl");
    __asm__("shld dx, dx, cl");
    __asm__("xadd ch, al");
    *reinterpret_cast<int16_t*>(&r15d18) = -0;
    *reinterpret_cast<uint32_t*>(&r11_25) = *reinterpret_cast<uint32_t*>(&r11_19) - 0xfffffffa;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_25) + 4) = 0;
    __asm__("rcr r14, 1");
    *reinterpret_cast<uint16_t*>(&r9_8) = 0xfa;
    *reinterpret_cast<uint16_t*>(&rax22) = reinterpret_cast<uint16_t>(static_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rax22) >> -79)));
    zf26 = reinterpret_cast<uint1_t>((*reinterpret_cast<uint32_t*>(&rbp14) & 0x282bc785) == 0);
    rdx27 = 0xfffffffa + r14_24 * 8 - 0x60be5383;
    __asm__("btc r10w, 0xd5");
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf26))) {
        *reinterpret_cast<uint16_t*>(&rdx27) = 0xfbaa;
    }
    __asm__("xadd r10w, bp");
    if (zf26) {
        r11_25 = rax22;
    }
    __asm__("cdq ");
    __asm__("ror si, 1");
    *reinterpret_cast<uint32_t*>(&rbp28) = *reinterpret_cast<uint32_t*>(&rbp14) - (0x282bc785 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbp14) < 0x282bc785 + reinterpret_cast<uint1_t>(rbp14 < 0xfffffffff328dffa)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp28) + 4) = 0;
    *reinterpret_cast<signed char*>(&r12d12) = -0;
    *reinterpret_cast<signed char*>(&rsi23) = -9;
    rbx29 = 7 + r11_25;
    __asm__("rol bpl, 1");
    dx30 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx27) >> 1);
    *reinterpret_cast<unsigned char*>(&rcx31) = reinterpret_cast<uint1_t>(!static_cast<int1_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax22) >> -6)));
    __asm__("rcr dx, 0x10");
    *reinterpret_cast<uint16_t*>(&rax22) = reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&rax22) * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&dx30))));
    *reinterpret_cast<uint32_t*>(&r12_32) = r12d12 | 0x458222f3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_32) + 4) = 0;
    __asm__("bsf r15d, ecx");
    *reinterpret_cast<int32_t*>(&r10_33) = 0x1415e3c2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_33) + 4) = 0;
    eax34 = *reinterpret_cast<uint32_t*>(&rax22) * r15d18;
    rbp35 = rbp28 + 0x74434160 + static_cast<uint64_t>(__intrinsic());
    if (0) {
        r9_8 = 0xf63d0ff5c1f3fbaa;
    }
    __asm__("rol r14b, 0xa");
    __asm__("bsf r8d, r12d");
    *reinterpret_cast<uint16_t*>(&r9_8) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r9_8) >> 1);
    *reinterpret_cast<int16_t*>(&edx36) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax34) + 1);
    rsi37 = rsi23 - 1;
    if (*reinterpret_cast<signed char*>(&r15d18) == *reinterpret_cast<signed char*>(&edx36)) {
        *reinterpret_cast<signed char*>(&r15d18) = *reinterpret_cast<signed char*>(&edx36);
    }
    ebp38 = *reinterpret_cast<uint32_t*>(&rbp35) | 0xc0000000;
    edx39 = eax34 % ebp38;
    if (reinterpret_cast<int32_t>(r15d18) < reinterpret_cast<int32_t>(0x53093d81)) {
    }
    __asm__("bts edx, 0x74");
    __asm__("ror r11b, cl");
    __asm__("bsr rbp, rbx");
    *reinterpret_cast<uint32_t*>(&rsi40) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rsi37) >> 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi40) + 4) = 0;
    __asm__("rcr rdx, 1");
    *reinterpret_cast<uint32_t*>(&rdi41) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&rcx31))) >> 51;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi41) + 4) = 0;
    cl42 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx31) - *reinterpret_cast<unsigned char*>(&rbx29));
    __asm__("btr rbp, rbp");
    __asm__("shld bx, di, 0xd");
    __asm__("ror r13, 0xe2");
    *reinterpret_cast<signed char*>(&rdi41) = 8;
    __asm__("btc r11w, 0x18");
    __asm__("rcl r12b, 0x17");
    *reinterpret_cast<signed char*>(&ebp38) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ebp38) - 0x67);
    r9_43 = r9_8 - (0xf5b2a0f + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r9_8 < 0xf5b2a0f)));
    *reinterpret_cast<uint32_t*>(&r13_44) = 0 >> cl42;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_44) + 4) = 0;
    __asm__("ror r15w, 1");
    __asm__("shrd ax, r10w, 0x6");
    *reinterpret_cast<int16_t*>(&edx39) = __intrinsic();
    if (0) {
        *reinterpret_cast<uint32_t*>(&rdi41) = ebp38;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi41) + 4) = 0;
    }
    __asm__("shld r14d, r8d, 0xbf");
    __asm__("rcl r12w, 1");
    r8_45 = 0;
    __asm__("shld r12, r14, 0x3d");
    __asm__("ror r10, cl");
    r12_46 = -r12_32;
    __asm__("rcl al, 1");
    __asm__("btr r15d, 0x96");
    *reinterpret_cast<uint16_t*>(&r12_46) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_46) >> 1);
    *reinterpret_cast<uint32_t*>(&r15_47) = *reinterpret_cast<uint16_t*>(&r9_43);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_47) + 4) = 0;
    rbp48 = 0x4c9f817856fc7610;
    r9_49 = r9_43 | r15_47;
    zf50 = reinterpret_cast<uint1_t>(cl42 == 0);
    if (zf50) {
        tmp8_51 = cl42;
        cl42 = 0;
        *reinterpret_cast<unsigned char*>(&r8_45) = tmp8_51;
    }
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&r9_49) = 0x56fc7610;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_49) + 4) = 0;
    }
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic()) | zf50)) {
        *reinterpret_cast<int16_t*>(&r10_33) = 0;
    }
    edx52 = edx39 - 1;
    if (reinterpret_cast<int32_t>(edx52) >= reinterpret_cast<int32_t>(0)) {
        r10_33 = r12_46;
    }
    __asm__("shrd r8w, di, 0x1");
    __asm__("rcl edx, 1");
    __asm__("btr r14d, 0x4c");
    cf53 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx52) < *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx52) + 1));
    *reinterpret_cast<unsigned char*>(&edx52) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx52) - *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx52) + 1));
    __asm__("bts ebp, edi");
    *reinterpret_cast<uint16_t*>(&r9_49) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_49) >> reinterpret_cast<unsigned char>(cl42 - reinterpret_cast<unsigned char>(53 + reinterpret_cast<uint1_t>(cl42 < reinterpret_cast<unsigned char>(53 + cf53)))));
    rdi54 = reinterpret_cast<uint64_t>(rdi41 + rsi40) ^ 0x73643730;
    *reinterpret_cast<int16_t*>(&r10_33) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r10_33) >> 1);
    rax55 = r14_24 >> 1;
    __asm__("rcr r13d, cl");
    __asm__("btr r8d, r14d");
    __asm__("ror r15w, 0xd1");
    *reinterpret_cast<int32_t*>(&rcx56) = *reinterpret_cast<signed char*>(&rbx29);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx56) + 4) = 0;
    __asm__("rol r13W, 1");
    __asm__("bts ebx, ebx");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx52) + 1) = reinterpret_cast<unsigned char>(~*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx52) + 1));
    __asm__("rcl ax, 1");
    r10_57 = r10_33 << 1;
    *reinterpret_cast<uint16_t*>(&r12_46) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r12_46) >> *reinterpret_cast<signed char*>(&rcx56));
    r15_58 = r15_47 >> 1;
    __asm__("rcl r10b, cl");
    __asm__("bts r9w, cx");
    __asm__("rcl r10b, 1");
    esi59 = *reinterpret_cast<uint32_t*>(&rsi40) | edx52;
    *reinterpret_cast<uint16_t*>(&r15_58) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_58) - 0x3e2c)));
    __asm__("xadd bh, cl");
    *reinterpret_cast<uint16_t*>(&rax55) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax55) * *reinterpret_cast<uint16_t*>(&r13_44));
    dx60 = __intrinsic();
    *reinterpret_cast<unsigned char*>(&rbx29) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx29) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&dx60) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rbx29) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&dx60) + 1))))));
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&rbp48) = *reinterpret_cast<int16_t*>(&esi59);
    }
    __asm__("ror r15b, 1");
    __asm__("shrd rax, rcx, cl");
    __asm__("btr r11, 0xdf");
    rbx61 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx29) >> -66);
    *reinterpret_cast<unsigned char*>(&r12_46) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_46) ^ 95);
    r9_62 = r9_49 + rbp48;
    *reinterpret_cast<int16_t*>(&edx52) = reinterpret_cast<int16_t>(dx60 >> 1);
    __asm__("ror dil, 0xfa");
    *reinterpret_cast<int32_t*>(&r12_63) = *reinterpret_cast<int32_t*>(&r12_46) - 0x33a13d6d;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_63) + 4) = 0;
    __asm__("shld ax, r15w, 0x1");
    *reinterpret_cast<uint32_t*>(&rax64) = *reinterpret_cast<int32_t*>(&rax55) * edx52;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax64) + 4) = 0;
    __asm__("ror r12, 0xb1");
    __asm__("rol ax, 0x48");
    __asm__("rol r14w, 1");
    __asm__("shrd r8, r12, 0xda");
    __asm__("ror r8w, 0x74");
    rcx65 = rcx56 ^ 0x1aaf098;
    if (*reinterpret_cast<uint16_t*>(&rdi54) == *reinterpret_cast<uint16_t*>(&rax64)) {
        tmp16_66 = *reinterpret_cast<uint16_t*>(&rdi54);
        *reinterpret_cast<uint16_t*>(&rdi54) = *reinterpret_cast<uint16_t*>(&rax64);
        *reinterpret_cast<uint16_t*>(&rax64) = tmp16_66;
    }
    if (__intrinsic() != __intrinsic()) {
        r9_62 = r12_63;
    }
    __asm__("rcl rdi, 1");
    *reinterpret_cast<unsigned char*>(&rax64) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax64) + *reinterpret_cast<unsigned char*>(&rbx61));
    rax67 = rax64 + rbx61;
    __asm__("shld rbx, rsi, 0x5d");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax67) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax67) + 1) ^ *reinterpret_cast<unsigned char*>(&rax67));
    __asm__("xadd rbp, r15");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx65) + 1) = -0;
    __asm__("bsr r11, rdx");
    r11_68 = (r15_58 >> -78) + r8_45 * 8 - 0x1fd0936b;
    *reinterpret_cast<int32_t*>(&r11_69) = *reinterpret_cast<int32_t*>(&r11_68) - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_69) + 4) = 0;
    __asm__("ror r11d, 0x85");
    __asm__("cwd ");
    r11_70 = r11_69 + rcx65;
    __asm__("cdq ");
    __asm__("rcl di, 1");
    *reinterpret_cast<unsigned char*>(&r9_62) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_62) + *reinterpret_cast<signed char*>(&rdi54))));
    eax71 = *reinterpret_cast<uint32_t*>(&rax67) & *reinterpret_cast<uint32_t*>(&rdi54);
    if (!__intrinsic()) {
        r10_57 = r13_44;
    }
    rbp72 = 0 >> *reinterpret_cast<unsigned char*>(&rcx65);
    *reinterpret_cast<int16_t*>(&eax71) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax71) + *reinterpret_cast<int16_t*>(&rbp72));
    rax73 = reinterpret_cast<int32_t>(eax71);
    *reinterpret_cast<uint16_t*>(&r11_70) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_70) - 0x17b) + 1);
    r15d74 = *reinterpret_cast<int32_t*>(&rax73);
    *reinterpret_cast<unsigned char*>(&rbx61) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx61) + *reinterpret_cast<unsigned char*>(&rbx61));
    __asm__("bts ebx, 0xe3");
    cf75 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx65) < *reinterpret_cast<unsigned char*>(&rbx61));
    *reinterpret_cast<unsigned char*>(&rcx65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx65) - *reinterpret_cast<unsigned char*>(&rbx61));
    __asm__("btr dx, bp");
    *reinterpret_cast<unsigned char*>(&r10_57) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_57) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r12_63) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r10_57) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r12_63) + cf75))));
    rbp76 = rbp72 | 0xc000000000000000;
    rax77 = rax73 / rbp76;
    ecx78 = *reinterpret_cast<int32_t*>(&rcx65) * 0x7f23554d;
    r15w79 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15d74) - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r12_63) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r15d74) < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r12_63) + __intrinsic()))));
    __asm__("ror bh, 1");
    __asm__("rcr rdx, 1");
    __asm__("rcl cl, 1");
    *reinterpret_cast<uint16_t*>(&rdi54) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi54) + *reinterpret_cast<int16_t*>(&r9_62)) + 1);
    if (__intrinsic()) {
    }
    *reinterpret_cast<int32_t*>(&rdi80) = reinterpret_cast<int32_t>(-*reinterpret_cast<uint32_t*>(&rdi54));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi80) + 4) = 0;
    __asm__("shrd r11d, eax, 0x1");
    *reinterpret_cast<int16_t*>(&rax77) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax77) * -1);
    *reinterpret_cast<uint32_t*>(&rbx81) = *reinterpret_cast<uint32_t*>(&rbx61) - (0x5469c314 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbx61) < 0x5469c315));
    rax82 = rax77 * r11_70;
    rdx83 = __intrinsic();
    __asm__("rol rbx, cl");
    *reinterpret_cast<unsigned char*>(&r11_70) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_70) & *reinterpret_cast<unsigned char*>(&r15w79));
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rdi80) = *reinterpret_cast<int32_t*>(&rdx83);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi80) + 4) = 0;
    }
    __asm__("xadd bl, ah");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx78) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx78) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx81) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx78) + 1) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx81) + 1))))));
    r11_84 = r11_70 & 0xffffffffe7b67484;
    __asm__("rol r9d, 1");
    *reinterpret_cast<int32_t*>(&r12_85) = ~*reinterpret_cast<int32_t*>(&r12_63);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_85) + 4) = 0;
    __asm__("rcl r12b, cl");
    __asm__("rol r13b, cl");
    __asm__("xadd r15b, dl");
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r13_44) = r15w79;
    }
    r9_86 = r9_62 | 0xc000000000000000;
    rdx87 = rax82 % r9_86;
    rax88 = rax82 / r9_86;
    __asm__("bsf esi, r15d");
    if (0x3fffffffffffffff == r10_57) {
        r10_57 = 0x3fffffffffffffff;
    }
    *reinterpret_cast<int32_t*>(&rcx89) = ecx78 * 0x452fbb0e;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx89) + 4) = 0;
    __asm__("btr r12w, r14w");
    __asm__("rcl r8w, cl");
    *reinterpret_cast<int16_t*>(&rax88) = reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax88) >> 87) * *reinterpret_cast<int16_t*>(&rcx89));
    *reinterpret_cast<int16_t*>(&rdx87) = __intrinsic();
    bp90 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp76) + *reinterpret_cast<uint16_t*>(&r10_57)) + __intrinsic());
    __asm__("rcl r9, 1");
    *reinterpret_cast<int32_t*>(&r10_91) = *reinterpret_cast<int32_t*>(&r10_57) * 0xe4b3f0f;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_91) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rbx92) = *reinterpret_cast<uint32_t*>(&rbx81) + 0x477ee181 + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx92) + 4) = 0;
    rdi93 = -rdi80;
    __asm__("ror rbx, cl");
    *reinterpret_cast<signed char*>(&r11_84) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r11_84) - 1);
    rsi94 = *reinterpret_cast<unsigned char*>(&rbx92);
    __asm__("ror r12, 1");
    if (!__intrinsic()) {
        r9_86 = r10_91;
    }
    __asm__("rcl ebp, 1");
    cf95 = reinterpret_cast<uint1_t>(r12_85 < 0xee10c6f);
    rbx96 = rbx92 - (0x74e64a09 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rbx92 < 0x74e64a09 + static_cast<uint64_t>(cf95))));
    __asm__("bsr r11, r14");
    r13_97 = r13_44 + 1;
    *reinterpret_cast<uint32_t*>(&rdi98) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rdi93) >> -20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi98) + 4) = 0;
    __asm__("ror edx, 1");
    *reinterpret_cast<uint32_t*>(&r14_99) = reinterpret_cast<uint32_t>(0xff + *reinterpret_cast<int32_t*>(&rdx87));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_99) + 4) = 0;
    __asm__("btr r11, r10");
    ebx100 = *reinterpret_cast<int32_t*>(&rbx96) << *reinterpret_cast<unsigned char*>(&rcx89);
    if (reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&ebx100) & 0xd01c) >= reinterpret_cast<int16_t>(0)) {
        rsi94 = r11_84;
    }
    r10_101 = reinterpret_cast<int64_t>(-r10_91);
    if (rcx89 == rax88) {
        tmp64_102 = rcx89;
        rcx89 = rax88;
        rax88 = tmp64_102;
    }
    __asm__("bts r8d, 0xb3");
    *reinterpret_cast<uint16_t*>(&r10_101) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_101) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_99) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r10_101) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r14_99))))));
    tmp8_103 = *reinterpret_cast<unsigned char*>(&bp90);
    *reinterpret_cast<unsigned char*>(&r13_97) = tmp8_103;
    __asm__("rcl ax, cl");
    __asm__("rcr ch, 1");
    __asm__("rcl rax, 1");
    *reinterpret_cast<unsigned char*>(&r9_86) = -*reinterpret_cast<unsigned char*>(&r9_86);
    sil104 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi94) >> *reinterpret_cast<unsigned char*>(&rcx89));
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx89) + 1) = -*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx89) + 1);
    *reinterpret_cast<uint16_t*>(&rbp76) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ebx100) + 1)));
    *reinterpret_cast<uint16_t*>(&r15d74) = reinterpret_cast<uint16_t>(r15w79 >> -49);
    tmp8_105 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(sil104 + 94)));
    if (reinterpret_cast<uint1_t>(tmp8_105 < sil104) | reinterpret_cast<uint1_t>(tmp8_105 == 0)) {
        r13_97 = rbp76;
    }
    if (reinterpret_cast<signed char>(tmp8_105) < reinterpret_cast<signed char>(0)) {
        *reinterpret_cast<uint32_t*>(&r14_99) = *reinterpret_cast<uint32_t*>(&r13_97);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_99) + 4) = 0;
    }
    __asm__("rol r10d, 1");
    *reinterpret_cast<int16_t*>(&rax88) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax88) * *reinterpret_cast<signed char*>(&ebx100));
    *reinterpret_cast<unsigned char*>(&r13_97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_97) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_86) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r13_97) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r9_86))))));
    __asm__("rcr r15d, 0xac");
    __asm__("rol r13W, cl");
    __asm__("xadd edi, ecx");
    rax106 = rax88 ^ r9_86;
    r12_107 = r12_85 - (0xee10c6f + static_cast<uint64_t>(cf95)) << 1;
    if (!__intrinsic()) {
    }
    *reinterpret_cast<unsigned char*>(&r13_97) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r13_97) >> 1);
    *reinterpret_cast<uint32_t*>(&rcx108) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx89) - 0x6a5b0ce6);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx108) + 4) = 0;
    __asm__("btr r11, r11");
    __asm__("shld r8, r13, cl");
    *reinterpret_cast<uint32_t*>(&rax109) = *reinterpret_cast<uint32_t*>(&rax106) ^ 0x625d4fa8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax109) + 4) = 0;
    __asm__("btc r9, 0x92");
    __asm__("rcl rbp, 1");
    __asm__("btr ax, 0x7f");
    __asm__("rol r13W, 0x91");
    __asm__("shrd cx, cx, 0x1");
    r14_110 = reinterpret_cast<uint64_t>(r14_99 + 0x20edb4d2);
    if (!r14_110) {
    }
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&r9_86) = *reinterpret_cast<int32_t*>(&r9_86);
    }
    __asm__("rcl sil, 1");
    *reinterpret_cast<uint32_t*>(&r15_111) = (r15d74 >> *reinterpret_cast<unsigned char*>(&rcx89)) + 0xe9fde2a0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_111) + 4) = 0;
    r13_112 = r13_97 ^ r12_107;
    *reinterpret_cast<int16_t*>(&rdi98) = static_cast<int16_t>(*reinterpret_cast<int32_t*>(&r9_86) + *reinterpret_cast<uint32_t*>(&rcx108) * 2);
    if (0) {
    }
    __asm__("rcr edi, 1");
    __asm__("btr r8, 0x50");
    *reinterpret_cast<uint32_t*>(&rdi113) = *reinterpret_cast<uint32_t*>(&rdi98) | 0x3fa931af;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi113) + 4) = 0;
    __asm__("btr r10d, 0x3a");
    *reinterpret_cast<uint16_t*>(&rbp76) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp76) ^ 0x8898);
    __asm__("btr rbx, 0xb4");
    *reinterpret_cast<unsigned char*>(&r9_86) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_86) + 0xd5) + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax109) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax109) + 1) >> 1) ^ *reinterpret_cast<unsigned char*>(&rcx108));
    __asm__("shrd r8, rbx, 0x7d");
    *reinterpret_cast<uint16_t*>(&r8d114) = static_cast<uint16_t>(r14_110 + 0xa3);
    *reinterpret_cast<unsigned char*>(&r12_107) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_107) | 0xa9);
    r11_115 = rdi98 | 0xff018c9;
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(__intrinsic())))) {
        r8d114 = *reinterpret_cast<int32_t*>(&r11_115);
    }
    __asm__("rol r8, 0xe0");
    cl116 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx108) | 0xf3);
    if (reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&r9_86) & 0x810a) >= reinterpret_cast<int16_t>(0)) {
    }
    rax117 = rax109 * r14_110 * rbp76;
    *reinterpret_cast<uint16_t*>(&rbp76) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rbp76) >> 21);
    *reinterpret_cast<int32_t*>(&r10_118) = *reinterpret_cast<int32_t*>(&r10_101) - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_118) + 4) = 0;
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rdi113) = *reinterpret_cast<uint32_t*>(&rax117);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi113) + 4) = 0;
    }
    __asm__("cwd ");
    rdi119 = rdi113 >> cl116;
    r14_120 = r14_110 & 0xa54156e;
    *reinterpret_cast<uint16_t*>(&r9_86) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_86) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8d114) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r9_86) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r8d114))))));
    __asm__("rol r11b, 1");
    *reinterpret_cast<unsigned char*>(&rcx108) = reinterpret_cast<unsigned char>(cl116 | 0xc0);
    ax121 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax117) & 0x3fff);
    *reinterpret_cast<uint16_t*>(&rdx122) = reinterpret_cast<uint16_t>(ax121 % static_cast<int16_t>(*reinterpret_cast<signed char*>(&rcx108)));
    ax123 = reinterpret_cast<uint16_t>(ax121 / static_cast<int16_t>(*reinterpret_cast<signed char*>(&rcx108)));
    *reinterpret_cast<uint32_t*>(&rdi124) = *reinterpret_cast<uint32_t*>(&rdi119) | 0x29986000;
    __asm__("cdq ");
    __asm__("rcl rax, 1");
    __asm__("rol r8w, 1");
    __asm__("rcr rcx, 1");
    *reinterpret_cast<unsigned char*>(&rcx108) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx108) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx122) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx108) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx122) + 1))))));
    *reinterpret_cast<uint32_t*>(&rbx125) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx108) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx125) + 4) = 0;
    *reinterpret_cast<signed char*>(&rbp76) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbp76) + *reinterpret_cast<signed char*>(&r8d114));
    *reinterpret_cast<uint32_t*>(&r14_126) = (*reinterpret_cast<uint32_t*>(&r14_120) >> 24 | *reinterpret_cast<uint32_t*>(&r14_120) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&r14_120) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&r14_120) << 24) - 0x5758be8 + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_126) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r12_127) = (*reinterpret_cast<uint32_t*>(&r12_107) - (*reinterpret_cast<int32_t*>(&r10_101) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r12_107) < *reinterpret_cast<int32_t*>(&r10_101) + __intrinsic()))) * 0xd390eb6d;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_127) + 4) = 0;
    rbp128 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbp76) >> 0xffffffffffffff90);
    *reinterpret_cast<uint16_t*>(&rax117) = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(ax123) >> *reinterpret_cast<unsigned char*>(&rcx108));
    __asm__("rol r14, 1");
    __asm__("ror bx, cl");
    __asm__("rcr r13, 1");
    if (rcx108 == rbp128) {
        tmp64_129 = rcx108;
        rcx108 = rbp128;
        rbp128 = tmp64_129;
    }
    *reinterpret_cast<uint16_t*>(&r15_111) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r14_110) * 0x52c1) ^ *reinterpret_cast<uint16_t*>(&rbp128));
    *reinterpret_cast<unsigned char*>(&r15_111) = *reinterpret_cast<unsigned char*>(&r15_111);
    __asm__("shrd esi, r15d, 0x1");
    *reinterpret_cast<int16_t*>(&rdi124) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rdi124) >> *reinterpret_cast<unsigned char*>(&rcx108));
    if (*reinterpret_cast<int32_t*>(&rbp128) == *reinterpret_cast<int32_t*>(&r9_86)) {
        tmp32_130 = *reinterpret_cast<int32_t*>(&rbp128);
        *reinterpret_cast<int32_t*>(&rbp128) = *reinterpret_cast<int32_t*>(&r9_86);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp128) + 4) = 0;
        *reinterpret_cast<int32_t*>(&r9_86) = tmp32_130;
    }
    cf131 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rax117) < *reinterpret_cast<unsigned char*>(&rcx108));
    *reinterpret_cast<unsigned char*>(&rax117) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax117) - *reinterpret_cast<unsigned char*>(&rcx108));
    __asm__("rcl esi, 1");
    *reinterpret_cast<unsigned char*>(&rdi124) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi124) - 41) + cf131);
    __asm__("rcr r14w, 1");
    r10_132 = r10_118 << 1;
    __asm__("rcl r14d, 1");
    rbp133 = rbp128 + 1;
    rax134 = rax117 * r15_111;
    rdx135 = __intrinsic();
    __asm__("cwd ");
    *reinterpret_cast<unsigned char*>(&rbx125) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx125) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax134) + 1));
    if (!__intrinsic()) {
        rbx125 = rax134;
    }
    if (!__intrinsic()) {
    }
    *reinterpret_cast<int32_t*>(&rax136) = *reinterpret_cast<signed char*>(&rdx135);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax136) + 4) = 0;
    if (1) {
        r15_111 = r14_126;
    }
    __asm__("xadd bh, dh");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax136) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax136) + 1) << 1) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx108) + 1)) + __intrinsic());
    *reinterpret_cast<int32_t*>(&rdi137) = *reinterpret_cast<int32_t*>(&r10_132);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi137) + 4) = 0;
    r10d138 = *reinterpret_cast<uint32_t*>(&rdi124);
    __asm__("rcr esi, 1");
    r8_139 = 0x75eaed96618ccebb;
    __asm__("rol sil, 1");
    __asm__("ror r10w, 1");
    *reinterpret_cast<uint16_t*>(&r8_139) = reinterpret_cast<uint16_t>(0xcebb & *reinterpret_cast<uint16_t*>(&r10d138));
    __asm__("rcl rbp, cl");
    *reinterpret_cast<uint32_t*>(&r11_140) = ax123 * 0xd7e7d010 >> -11;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_140) + 4) = 0;
    rdx141 = rdx135 << *reinterpret_cast<unsigned char*>(&rcx108);
    r14_142 = r14_126 - 0x266af564;
    *reinterpret_cast<int16_t*>(&r14_142) = 0;
    __asm__("btc rdx, r14");
    __asm__("rol r12, 0xc8");
    edx143 = *reinterpret_cast<uint32_t*>(&rdx141) & 0xcdbcd966;
    *reinterpret_cast<uint32_t*>(&r10_144) = r10d138 | 0x385d8c17;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_144) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r8_145) = *reinterpret_cast<uint32_t*>(&r8_139) | 0x3cc10970;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx108) + 1) = *reinterpret_cast<unsigned char*>(&rax136);
    if (0) {
        r13_112 = rcx108;
    }
    *reinterpret_cast<uint16_t*>(&r10_144) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_144) >> 1);
    cx146 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx108) - 0x7478) + __intrinsic());
    __asm__("btc rdx, 0x9b");
    dx147 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax136) & 0x3fff) % static_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx143) + 1) | 0xc0)));
    __asm__("ror rcx, cl");
    ax148 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&cx146) + 1);
    rsi149 = reinterpret_cast<int16_t>(dx147);
    *reinterpret_cast<unsigned char*>(&rbx125) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx125) ^ *reinterpret_cast<unsigned char*>(&r15_111));
    tmp8_150 = *reinterpret_cast<unsigned char*>(&r15_111);
    *reinterpret_cast<unsigned char*>(&rdi137) = tmp8_150;
    __asm__("bsf r9w, r12w");
    *reinterpret_cast<int16_t*>(&rdi137) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rdi137) - *reinterpret_cast<int16_t*>(&rsi149));
    __asm__("rcl rax, 1");
    rbx151 = rbx125 * 0xffffffffc3bbc3da;
    __asm__("rol rdx, 0x7d");
    *reinterpret_cast<signed char*>(&cx146) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&cx146) - *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&dx147) + 1));
    tmp64_152 = (r11_140 & 0xffffffff) << 32;
    tmp64_153 = (tmp64_152 & 0xffff0000ffff) << 16 | (tmp64_152 & 0xffff0000ffff0000) >> 16;
    cf154 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&ax148) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rbp133))));
    *reinterpret_cast<unsigned char*>(&ax148) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ax148) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp133) + cf154));
    if (*reinterpret_cast<signed char*>(&ax148) < reinterpret_cast<signed char>(static_cast<uint32_t>(cf154))) {
        r13_112 = r13_112;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx151) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx151) + 1) | 0xc0);
    ax155 = reinterpret_cast<uint16_t>(ax148 & 0x3fff);
    dx156 = reinterpret_cast<uint16_t>(ax155 % static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx151) + 1)));
    ax157 = reinterpret_cast<uint16_t>(ax155 / static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx151) + 1)));
    *reinterpret_cast<unsigned char*>(&rbp133) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp133) - 44);
    cx158 = reinterpret_cast<uint16_t>(cx146 | *reinterpret_cast<uint16_t*>(&rbx151));
    __asm__("xadd dh, ch");
    if (!__intrinsic()) {
        r12_127 = r10_144;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax157) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&dx156) + 1);
    *reinterpret_cast<uint16_t*>(&r10_144) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_144) - reinterpret_cast<uint16_t>(0x750a - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r10_144) < 0x8af6)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&cx159) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&cx158) + 1) | 0xc0);
    ax160 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(ax157 & 0x3fff) / static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&cx159) + 1)));
    __asm__("shrd r11, r9, cl");
    *reinterpret_cast<unsigned char*>(&cx159) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&cx158) | 0xc0);
    *reinterpret_cast<uint32_t*>(&rbp161) = *reinterpret_cast<uint32_t*>(&rbp133) ^ 0x6136f528;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp161) + 4) = 0;
    __asm__("rcr ch, 1");
    *reinterpret_cast<int32_t*>(&r14_162) = *reinterpret_cast<int32_t*>(&r14_142) - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_162) + 4) = 0;
    __asm__("shrd rsi, rcx, 0x1");
    *reinterpret_cast<uint16_t*>(&rax136) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(ax160 & 0x3fff) / static_cast<int16_t>(*reinterpret_cast<signed char*>(&cx159))) * *reinterpret_cast<uint16_t*>(&rbp161));
    *reinterpret_cast<int16_t*>(&edx143) = __intrinsic();
    r9w163 = reinterpret_cast<int16_t>(-*reinterpret_cast<uint16_t*>(&r9_86));
    __asm__("rol ah, 0x38");
    __asm__("shrd r15w, r11w, 0x1");
    __asm__("bsf rax, r11");
    __asm__("ror r15d, 0x7e");
    rbx164 = reinterpret_cast<uint64_t>(rdi137 + r12_127 * 2);
    r11_165 = r12_127;
    r15_166 = (((tmp64_153 & 0xff00ff00ff00ff) << 8 | (tmp64_153 & 0xff00ff00ff00ff00) >> 8) ^ r14_162) + rbx164 * 2 + 12;
    __asm__("shrd edi, edi, 0x5f");
    *reinterpret_cast<uint16_t*>(&rcx108) = reinterpret_cast<uint16_t>(cx159 >> *reinterpret_cast<unsigned char*>(&cx159));
    __asm__("rol r14, cl");
    rbp167 = rbp161 ^ rax136;
    *reinterpret_cast<unsigned char*>(&rbp167) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rbp167) >> 1);
    *reinterpret_cast<int32_t*>(&r13_168) = *reinterpret_cast<int32_t*>(&r13_112) + 1;
    __asm__("rcl rsi, 1");
    __asm__("rcr rsi, 0xe7");
    r12d169 = reinterpret_cast<int32_t>(-static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r11_165)));
    rbx170 = rbx164 - (0xfae813a + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rbx164 < 0xfae813b)));
    *reinterpret_cast<unsigned char*>(&r9w163) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9w163) | 0x85) - *reinterpret_cast<unsigned char*>(&r14_162));
    ecx171 = *reinterpret_cast<uint32_t*>(&rcx108) & 0x694b9f4b;
    if (0) {
        r13_168 = rbp167;
    }
    r14_172 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<signed char*>(&r14_162)));
    *reinterpret_cast<int32_t*>(&rdx173) = reinterpret_cast<int32_t>(edx143 >> 24 | edx143 >> 8 & 0xff00 | edx143 << 8 & 0xff0000 | edx143 << 24) >> 45;
    __asm__("rcl r15d, 1");
    *reinterpret_cast<int32_t*>(&r11_174) = *reinterpret_cast<int32_t*>(&r11_165) * 0x3057a02c;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_174) + 4) = 0;
    __asm__("ror r9d, 1");
    *reinterpret_cast<unsigned char*>(&rbx170) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx170) - *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ecx171) + 1));
    __asm__("rcr rbx, 0x7f");
    __asm__("bsr r13, rcx");
    __asm__("shrd rbp, rax, 0x7d");
    rsi175 = 0x839bf96cdd7f8336;
    ecx176 = ecx171 + 0x33edab5c + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r9w163) < *reinterpret_cast<unsigned char*>(&rbx170));
    __asm__("rcl r12d, 1");
    __asm__("rcl r10d, 1");
    tmp8_177 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_168) + 21)));
    cf178 = reinterpret_cast<uint1_t>(tmp8_177 < *reinterpret_cast<unsigned char*>(&r13_168));
    *reinterpret_cast<unsigned char*>(&r13_168) = tmp8_177;
    edi179 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ecx176) + 1)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax136) + 1) = reinterpret_cast<unsigned char>(~*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax136) + 1));
    ax180 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax136) - reinterpret_cast<uint16_t>(r9w163 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rax136) < reinterpret_cast<uint16_t>(r9w163 + cf178))));
    __asm__("shld edi, r12d, 0xbc");
    __asm__("shld r10d, r11d, 0x4b");
    *reinterpret_cast<unsigned char*>(&r14_172) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_144) | *reinterpret_cast<unsigned char*>(&rbp167));
    *reinterpret_cast<uint16_t*>(&rax136) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&ax180)));
    __asm__("rcr dl, 0x52");
    __asm__("btc r13W, 0xbb");
    __asm__("rcr rcx, 0xc6");
    cl181 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx176) & 15);
    __asm__("shrd bx, ax, cl");
    __asm__("rol rcx, 0x7d");
    r13d182 = *reinterpret_cast<int32_t*>(&r13_168) >> cl181;
    __asm__("ror si, 0x49");
    r8w183 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r8_145) >> 99);
    ecx184 = reinterpret_cast<signed char>(cl181);
    __asm__("rol r8d, cl");
    if (*reinterpret_cast<int16_t*>(&r11_174) < 0x7041) {
        *reinterpret_cast<int16_t*>(&rbp167) = *reinterpret_cast<int16_t*>(&rbx170);
    }
    __asm__("rcr ax, 1");
    *reinterpret_cast<signed char*>(&r15_166) = *reinterpret_cast<signed char*>(&r8w183);
    *reinterpret_cast<uint32_t*>(&rbp185) = *reinterpret_cast<uint32_t*>(&rbp167) - (*reinterpret_cast<uint32_t*>(&rbp167) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbp167) < *reinterpret_cast<uint32_t*>(&rbp167) + 1));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp185) + 4) = 0;
    __asm__("bts r13d, esi");
    *reinterpret_cast<int16_t*>(&r11_174) = reinterpret_cast<int16_t>(static_cast<int16_t>(edi179 + 17) + 0x5e12);
    __asm__("bsr r10, r14");
    *reinterpret_cast<uint16_t*>(&r12d169) = reinterpret_cast<uint16_t>(static_cast<uint16_t>(*reinterpret_cast<unsigned char*>(&rbx170)) | 0xc5b1);
    *reinterpret_cast<int32_t*>(&rbx186) = *reinterpret_cast<int32_t*>(&rbx170);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx186) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&edi179) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx186) + 1)));
    *reinterpret_cast<unsigned char*>(&r10_144) = 0x68;
    __asm__("rcl r8w, cl");
    tmp8_187 = *reinterpret_cast<unsigned char*>(&rdx173);
    *reinterpret_cast<int16_t*>(&r8_145) = reinterpret_cast<int16_t>(r8w183 * 0xb7ee);
    r14_188 = r14_172 - (rax136 + reinterpret_cast<uint1_t>(r14_172 < rax136 + reinterpret_cast<uint1_t>(tmp8_187 < 33)));
    *reinterpret_cast<unsigned char*>(&r13d182) = __intrinsic();
    *reinterpret_cast<int32_t*>(&r10_189) = r12d169;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_189) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r12_190) = *reinterpret_cast<uint32_t*>(&r10_144) >> *reinterpret_cast<signed char*>(&ecx184);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_190) + 4) = 0;
    __asm__("rol r12d, 1");
    *reinterpret_cast<uint16_t*>(&rsi175) = reinterpret_cast<uint16_t>(0x8336 & *reinterpret_cast<uint16_t*>(&edi179));
    __asm__("shld r14d, r15d, 0x1");
    __asm__("shrd r8d, r8d, 0x64");
    *reinterpret_cast<unsigned char*>(&r12_190) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_190) & 35);
    __asm__("ror r9b, 0x6c");
    __asm__("xadd r10w, bp");
    __asm__("bts r11w, dx");
    *reinterpret_cast<uint32_t*>(&rcx191) = *reinterpret_cast<uint32_t*>(&r8_145) * 0x8d7d7820;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx191) + 4) = 0;
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&rbx186) = *reinterpret_cast<uint16_t*>(&edi179);
    }
    *reinterpret_cast<uint32_t*>(&rdi192) = edi179 >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi192) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rbp185) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rbp185) >> *reinterpret_cast<signed char*>(&ecx184)) >> 1);
    *reinterpret_cast<int16_t*>(&rcx191) = -*reinterpret_cast<int16_t*>(&rcx191);
    *reinterpret_cast<unsigned char*>(&r11_174) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&r11_174) >> *reinterpret_cast<signed char*>(&ecx184)) >> 52) << *reinterpret_cast<unsigned char*>(&rcx191));
    *reinterpret_cast<uint16_t*>(&rax136) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax136) * *reinterpret_cast<uint16_t*>(&r15_166));
    __asm__("rcl ebp, 0xa0");
    __asm__("rcr ecx, 1");
    rbx193 = rbx186 - rbp185;
    if (!__intrinsic()) {
    }
    *reinterpret_cast<unsigned char*>(&rcx191) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx191) & 15);
    __asm__("shld r11w, bx, cl");
    __asm__("btc r15w, si");
    __asm__("rcr r12w, cl");
    __asm__("xadd r14d, r13d");
    rax194 = reinterpret_cast<int64_t>(rax136) >> -26;
    r10_195 = r10_189 >> 0xffffffffffffff86;
    r15_196 = r15_166 | 0xc000000000000000;
    rdx197 = rax194 % r15_196;
    rax198 = rax194 / r15_196;
    r9_199 = r13d182 + *reinterpret_cast<uint32_t*>(&rdx197);
    __asm__("xadd esi, r15d");
    zf200 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbp185) == *reinterpret_cast<uint32_t*>(&r9_199));
    if (zf200) {
        tmp32_201 = *reinterpret_cast<uint32_t*>(&rbp185);
        *reinterpret_cast<uint32_t*>(&rbp185) = *reinterpret_cast<uint32_t*>(&r9_199);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp185) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&r9_199) = tmp32_201;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_199) + 4) = 0;
    }
    if (reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic()) | zf200) {
    }
    *reinterpret_cast<int16_t*>(&rax198) = *reinterpret_cast<signed char*>(&rax198);
    if (!reinterpret_cast<uint1_t>(__intrinsic() | zf200)) {
        *reinterpret_cast<uint32_t*>(&r15_196) = *reinterpret_cast<uint32_t*>(&r9_199);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_196) + 4) = 0;
    }
    r9_202 = r9_199 & rbp185;
    *reinterpret_cast<signed char*>(&r14_188) = 37;
    rax203 = rax198 * 0x3fffffffffffffff;
    rdx204 = __intrinsic();
    *reinterpret_cast<uint16_t*>(&r15_196) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_196) + 1);
    rcx205 = rcx191 | r15_196;
    tmp32_206 = *reinterpret_cast<uint32_t*>(&rbx193) - 1;
    *reinterpret_cast<unsigned char*>(&r10_195) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&r10_195) > reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbp185) + reinterpret_cast<uint1_t>(tmp32_206 < *reinterpret_cast<uint32_t*>(&rbx193))));
    *reinterpret_cast<uint16_t*>(&r15_196) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_196) << *reinterpret_cast<unsigned char*>(&rcx205));
    __asm__("rol r13b, 1");
    r12_207 = r12_190 - 1;
    __asm__("ror ax, 1");
    r11_208 = r11_174 - r9_202;
    __asm__("ror r13d, 0xd6");
    __asm__("btc rdx, 0x6b");
    *reinterpret_cast<int32_t*>(&r9_209) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_209) + 4) = 0;
    __asm__("xadd dx, si");
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rdx204) = *reinterpret_cast<uint32_t*>(&r15_196);
    }
    *reinterpret_cast<uint16_t*>(&rax203) = *reinterpret_cast<uint16_t*>(&rbp185);
    rcx210 = rcx205 ^ rdi192;
    *reinterpret_cast<uint16_t*>(&r15_196) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_196) - reinterpret_cast<uint16_t>(0xa29 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r15_196) < 0xa2a)));
    *reinterpret_cast<signed char*>(&r9_209) = reinterpret_cast<signed char>(0 >> -92);
    __asm__("shld r9, r10, 0xa8");
    *reinterpret_cast<int16_t*>(&r10_195) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r10_195) * 0x7e90);
    __asm__("bsf r14w, si");
    __asm__("rol ah, cl");
    __asm__("btr r8d, 0x1b");
    *reinterpret_cast<uint32_t*>(&rbx211) = (tmp32_206 | *reinterpret_cast<uint32_t*>(&r9_202)) ^ *reinterpret_cast<uint32_t*>(&r15_196);
    *reinterpret_cast<int32_t*>(&rax212) = *reinterpret_cast<int32_t*>(&rax203) - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax212) + 4) = 0;
    __asm__("rcl rbx, 1");
    *reinterpret_cast<uint16_t*>(&rcx210) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx210) >> *reinterpret_cast<signed char*>(&rcx210));
    *reinterpret_cast<int32_t*>(&r13_213) = static_cast<int32_t>(rbp185 + rax212 * 4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_213) + 4) = 0;
    __asm__("ror r15b, 0x19");
    __asm__("xadd r11b, r9b");
    if (0) {
        rcx210 = r15_196;
    }
    __asm__("bts dx, cx");
    __asm__("rcl r8, 1");
    *reinterpret_cast<uint16_t*>(&r13_213) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_213) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax212) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r13_213) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rax212))))));
    r8_214 = -0xc00000007e47136d;
    if (*reinterpret_cast<signed char*>(&rbx211) == *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx211) + 1)) {
        tmp8_215 = *reinterpret_cast<signed char*>(&rbx211);
        *reinterpret_cast<signed char*>(&rbx211) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx211) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx211) + 1) = tmp8_215;
    }
    __asm__("btc r9d, 0x0");
    *reinterpret_cast<signed char*>(&rbp185) = -*reinterpret_cast<signed char*>(&rbp185);
    r13_216 = r13_213 >> 0xffffffffffffff96;
    r8d217 = *reinterpret_cast<uint32_t*>(&r8_214) | *reinterpret_cast<uint32_t*>(&rbp185);
    *reinterpret_cast<unsigned char*>(&r8d217) = reinterpret_cast<uint1_t>(!__intrinsic());
    r10_218 = r10_195 + 0x1c233bd5;
    *reinterpret_cast<uint16_t*>(&rcx210) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx210) - reinterpret_cast<uint16_t>(0x2b52 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rcx210) < 0xd4ae)));
    __asm__("rol r14, cl");
    *reinterpret_cast<int32_t*>(&rcx219) = *reinterpret_cast<int32_t*>(&rcx210) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx219) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rax212) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax212) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx219) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rax212) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx219) + 1))));
    __asm__("bsf si, ax");
    r12w220 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_207) | 0xc000);
    *reinterpret_cast<uint16_t*>(&rdx204) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax212) % r12w220);
    *reinterpret_cast<uint16_t*>(&rax212) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax212) / r12w220);
    __asm__("rcr eax, 1");
    __asm__("rcl r15w, 1");
    *reinterpret_cast<signed char*>(&rbx211) = -*reinterpret_cast<signed char*>(&rbx211);
    if (__intrinsic()) {
        rax212 = r10_218;
    }
    *reinterpret_cast<uint16_t*>(&rbp185) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp185) + 0x1ad1);
    ebx221 = *reinterpret_cast<uint32_t*>(&rbx211) - *reinterpret_cast<uint32_t*>(&rdx204);
    *reinterpret_cast<uint32_t*>(&r10_222) = *reinterpret_cast<uint32_t*>(&r10_218) >> *reinterpret_cast<unsigned char*>(&rcx219);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_222) + 4) = 0;
    __asm__("btc r10, 0xfb");
    if (*reinterpret_cast<uint16_t*>(&r11_208) == *reinterpret_cast<uint16_t*>(&r15_196)) {
        tmp16_223 = *reinterpret_cast<uint16_t*>(&r11_208);
        *reinterpret_cast<uint16_t*>(&r11_208) = *reinterpret_cast<uint16_t*>(&r15_196);
        *reinterpret_cast<uint16_t*>(&r15_196) = tmp16_223;
    }
    *reinterpret_cast<uint16_t*>(&rax212) = reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&rax212) * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&r13_216))));
    tmp16_224 = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_216) - 0x4a74)));
    cf225 = reinterpret_cast<uint1_t>(tmp16_224 < *reinterpret_cast<uint16_t*>(&r13_216));
    *reinterpret_cast<uint16_t*>(&r13_216) = tmp16_224;
    if (cf225 | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r13_216) == 0)) {
        ebx221 = *reinterpret_cast<uint32_t*>(&rsi175) & 0xad7b4595;
    }
    __asm__("shrd di, ax, 0x6");
    __asm__("bsf r14d, r15d");
    *reinterpret_cast<uint16_t*>(&r15_196) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_196) & *reinterpret_cast<uint16_t*>(&ebx221));
    r9_226 = r9_209 * 0xffffffffc86ca573;
    *reinterpret_cast<uint32_t*>(&rbx227) = ebx221 + 0xaaf9060e;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx227) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rbx227) < reinterpret_cast<int32_t>(0) != __intrinsic()) {
        *reinterpret_cast<uint16_t*>(&rbp185) = *reinterpret_cast<uint16_t*>(&rdx204);
    }
    __asm__("rcr r15d, 1");
    rax228 = rax212 * rcx219;
    rdx229 = __intrinsic();
    *reinterpret_cast<unsigned char*>(&rcx219) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx219) - *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx227) + 1));
    *reinterpret_cast<unsigned char*>(&r15_196) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_196) ^ 0xe2);
    __asm__("shld r10, r11, cl");
    __asm__("bts edx, ecx");
    rcx230 = rcx219 - 1;
    __asm__("rcr r11, 0x4d");
    __asm__("bsr rdi, rcx");
    __asm__("ror eax, 0x84");
    __asm__("btc r8d, 0xd8");
    *reinterpret_cast<uint16_t*>(&rbx227) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax228) + 1) >= *reinterpret_cast<unsigned char*>(&rax228));
    tmp8_231 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx230) - 90)));
    cf232 = reinterpret_cast<uint1_t>(tmp8_231 < *reinterpret_cast<unsigned char*>(&rcx230));
    *reinterpret_cast<unsigned char*>(&rcx230) = tmp8_231;
    r10_233 = r10_222 + r15_196 + cf232;
    __asm__("shrd r9w, r9w, 0x1");
    r15_234 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<signed char*>(&r11_208)));
    r14_235 = r14_188 - (0x43d0510c - static_cast<uint64_t>(reinterpret_cast<uint1_t>(r14_188 < 0xffffffffbc2faef4))) << 1 & 0x3357506a;
    *reinterpret_cast<uint16_t*>(&rdx229) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx229) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_226) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rdx229) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r9_226))))));
    *reinterpret_cast<unsigned char*>(&rdx229) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx229) & *reinterpret_cast<unsigned char*>(&rbx227));
    tmp64_236 = (rax228 & 0xffffffff) << 32 | (rax228 & 0xffffffff00000000) >> 32;
    tmp64_237 = (tmp64_236 & 0xffff0000ffff) << 16 | (tmp64_236 & 0xffff0000ffff0000) >> 16;
    __asm__("rcl eax, 1");
    __asm__("rcl dx, 0x9a");
    rbp238 = reinterpret_cast<int64_t>(-rbp185);
    *reinterpret_cast<uint32_t*>(&r14_239) = *reinterpret_cast<uint32_t*>(&r14_235) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_239) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx230) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx230) + 1) + *reinterpret_cast<unsigned char*>(&rcx230)) + __intrinsic());
    if (r14_239 == rbx227) {
        tmp64_240 = r14_239;
        r14_239 = rbx227;
        rbx227 = tmp64_240;
    }
    r11_241 = r11_208 & rdx229;
    *reinterpret_cast<uint32_t*>(&r8_242) = r8d217 >> *reinterpret_cast<unsigned char*>(&rcx230);
    *reinterpret_cast<uint16_t*>(&r15_234) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_234) | *reinterpret_cast<uint16_t*>(&r11_241));
    __asm__("rcr ebp, cl");
    *reinterpret_cast<signed char*>(&r8_242) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&r8_242));
    __asm__("rol dil, 1");
    __asm__("rol r9, 0x7b");
    __asm__("bts r10d, r13d");
    *reinterpret_cast<uint32_t*>(&r11_243) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r11_241) + *reinterpret_cast<int32_t*>(&rbp238));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_243) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r12_244) = *reinterpret_cast<unsigned char*>(&rbp238);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_244) + 4) = 0;
    __asm__("rcr rsi, cl");
    *reinterpret_cast<uint16_t*>(&rbx227) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx227) * 0xa766);
    *reinterpret_cast<int16_t*>(&r8_242) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r8_242) >> -71);
    *reinterpret_cast<uint16_t*>(&r10_233) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_233) & 0x1769);
    if (r11_243 == rcx230) {
        tmp64_245 = r11_243;
        r11_243 = rcx230;
        rcx230 = tmp64_245;
    }
    rax246 = ((tmp64_237 & 0xff00ff00ff00ff) << 8 | (tmp64_237 & 0xff00ff00ff00ff00) >> 8) * r10_233;
    __asm__("ror bl, cl");
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&rax246) = *reinterpret_cast<int16_t*>(&r14_239);
    }
    __asm__("shld rdx, r13, cl");
    r15_247 = r15_234 | 0x7d32597c;
    *reinterpret_cast<uint32_t*>(&r13_248) = *reinterpret_cast<uint32_t*>(&r13_216) - (0x63fb37db - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r13_216) < 0x9c04c825)) + *reinterpret_cast<int32_t*>(&r10_233) + __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_248) + 4) = 0;
    *reinterpret_cast<int16_t*>(&rax246) = *reinterpret_cast<signed char*>(&rax246);
    __asm__("shrd r14, r12, 0x1");
    rdx249 = __intrinsic() - (rax246 + reinterpret_cast<uint1_t>(__intrinsic() < rax246));
    __asm__("ror r15w, 1");
    __asm__("shld r15w, r13W, 0x1");
    rsi250 = *reinterpret_cast<uint16_t*>(&rcx230);
    *reinterpret_cast<unsigned char*>(&r14_239) = reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(__intrinsic()) < reinterpret_cast<int64_t>(rax246));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax246) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax246) + 1) + *reinterpret_cast<unsigned char*>(&rcx230))));
    if (reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(&r14_239) & *reinterpret_cast<uint32_t*>(&r8_242)) >= reinterpret_cast<int32_t>(0)) {
        rdx249 = rax246;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx249) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx249) + 1) + *reinterpret_cast<unsigned char*>(&rax246)) + 1);
    __asm__("shld r14d, r8d, 0x1");
    r14d251 = *reinterpret_cast<uint32_t*>(&r14_239) & 0xfe72c4db;
    *reinterpret_cast<int16_t*>(&r14d251) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r14d251) << 1);
    *reinterpret_cast<signed char*>(&r11_243) = -26;
    *reinterpret_cast<uint32_t*>(&r14_252) = r14d251 >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_252) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rcx253) = *reinterpret_cast<unsigned char*>(&r12_244);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx253) + 4) = 0;
    cf254 = reinterpret_cast<uint1_t>(0xdba2116f < *reinterpret_cast<uint32_t*>(&rcx253));
    *reinterpret_cast<uint32_t*>(&r9_255) = 0xdba2116f - (*reinterpret_cast<uint32_t*>(&rcx253) + cf254);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_255) + 4) = 0;
    edi256 = *reinterpret_cast<uint32_t*>(&rcx253) + *reinterpret_cast<int32_t*>(&rsi250) * 2;
    if (cf254) {
    }
    if (!__intrinsic()) {
    }
    *reinterpret_cast<unsigned char*>(&r10_233) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_233) - *reinterpret_cast<unsigned char*>(&rax246));
    dl257 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx249) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx253) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdx249) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rcx253))))));
    r10_258 = r10_233 + 0xffffffffc51d5cfe + 1;
    *reinterpret_cast<int32_t*>(&r15_259) = *reinterpret_cast<int32_t*>(&r15_247) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_259) + 4) = 0;
    __asm__("ror cl, cl");
    *reinterpret_cast<int16_t*>(&r14_252) = static_cast<int16_t>(*reinterpret_cast<int32_t*>(&r15_259) + *reinterpret_cast<uint32_t*>(&r14_252) * 2 - 0x18a42f21);
    *reinterpret_cast<uint16_t*>(&r13_248) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_248) | 1);
    if (0) {
        r13_248 = r12_244;
    }
    __asm__("shrd r12w, cx, 0xe");
    *reinterpret_cast<unsigned char*>(&rcx253) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx253) & 15);
    __asm__("shrd ax, r13W, cl");
    __asm__("ror r8d, 1");
    __asm__("rcl di, 1");
    *reinterpret_cast<unsigned char*>(&rdx249) = reinterpret_cast<unsigned char>(dl257 - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rsi250) + reinterpret_cast<uint1_t>(dl257 < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rsi250) + 1))));
    __asm__("rcl r14, cl");
    *reinterpret_cast<int16_t*>(&edi256) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&edi256) + 0x5b83);
    *reinterpret_cast<unsigned char*>(&r13_248) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_248) ^ *reinterpret_cast<unsigned char*>(&r10_258));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx227) + 1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r13_248) == 0);
    __asm__("rol r11b, 1");
    tmp32_260 = edi256 + 0x75f432a1;
    cf261 = reinterpret_cast<uint1_t>(tmp32_260 < edi256);
    *reinterpret_cast<uint32_t*>(&rdi262) = tmp32_260;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi262) + 4) = 0;
    if (!cf261) {
    }
    r11_263 = r11_243 + r9_255 + cf261;
    __asm__("shld rdi, r13, 0x1");
    if (reinterpret_cast<int64_t>(r11_263) < reinterpret_cast<int64_t>(0) != __intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rdi262) = *reinterpret_cast<uint32_t*>(&r10_258);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi262) + 4) = 0;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax246) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax246) + 1) >> 1);
    __asm__("rcr r12, cl");
    __asm__("bsr dx, r12w");
    __asm__("bts r15d, 0x2a");
    return rax246 + rbx227 + rcx253 + rdx249 + rsi250 + rdi262 + *reinterpret_cast<unsigned char*>(&rcx253) + r9_255 + r10_258 + r11_263 + r12_244 + r13_248 + r14_252 + r15_259 - 0x656c3e01e84e5ae4;
}

uint64_t log_size_10_var_001(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;
    int64_t r11_8;
    uint64_t r13_9;
    int64_t r15_10;
    int64_t rax11;
    int64_t rdx12;
    int64_t r12_13;
    uint32_t edi14;
    int64_t rbp15;
    int64_t r9_16;
    uint16_t di17;
    int64_t rsi18;
    uint32_t edx19;
    int64_t rax20;
    int32_t ebx21;
    uint16_t dx22;
    int1_t cf23;
    int64_t r14_24;
    int64_t r9_25;
    int32_t ecx26;
    uint64_t r8_27;
    int64_t r9_28;
    int64_t r14_29;
    uint64_t r10_30;
    int64_t r9_31;
    uint64_t r14_32;
    int32_t ebx33;
    int64_t r9_34;
    uint16_t bx35;
    int64_t rax36;
    uint64_t rdx37;
    uint16_t ax38;
    uint64_t r14_39;
    uint64_t rcx40;
    uint32_t r8d41;
    uint64_t rdx42;
    uint64_t r13_43;
    int64_t rax44;
    int64_t r13_45;
    uint32_t r11d46;
    int32_t eax47;
    uint64_t r15_48;
    uint32_t tmp32_49;
    int1_t sf50;
    uint1_t cf51;
    int64_t rbx52;
    int64_t rdx53;
    int64_t rbp54;
    int64_t r8_55;
    int64_t rax56;
    uint32_t r11d57;
    int64_t rcx58;
    uint64_t rdx59;
    int64_t rcx60;
    uint64_t r8_61;
    uint64_t rbp62;
    int64_t rdx63;
    uint64_t r10_64;
    int64_t r10_65;
    uint64_t rdi66;
    uint64_t rcx67;
    int64_t rdx68;
    uint64_t rcx69;
    uint64_t rax70;
    int64_t r12_71;
    unsigned char cl72;
    uint64_t r8_73;
    uint1_t cf74;
    uint1_t cf75;
    uint64_t r9_76;
    uint64_t r14_77;
    uint64_t rsi78;
    uint32_t edx79;
    uint64_t r14_80;
    uint16_t dx81;
    uint64_t r12_82;
    uint64_t r8_83;
    uint64_t r12_84;
    uint64_t r10_85;
    uint64_t tmp64_86;
    uint64_t tmp64_87;
    uint64_t r15_88;
    uint64_t r13_89;
    int64_t rbx90;
    uint64_t rbx91;
    uint64_t rax92;
    uint64_t rbp93;
    uint1_t cf94;
    signed char tmp8_95;
    uint64_t r8_96;
    uint64_t r11_97;
    uint64_t rsi98;
    uint32_t r14d99;
    uint64_t r13_100;
    int16_t tmp16_101;
    uint32_t eax102;
    uint64_t r10_103;
    int64_t r9_104;
    int16_t cx105;
    int64_t rdi106;
    uint64_t r14_107;
    uint32_t r9d108;
    int16_t dx109;
    uint64_t r11_110;
    int1_t less111;
    uint64_t rdi112;
    int32_t edx113;
    uint1_t cf114;
    uint32_t tmp32_115;
    int1_t zf116;
    uint32_t ecx117;
    uint32_t eax118;
    int64_t rbp119;
    int64_t rax120;
    uint32_t r9d121;
    uint64_t rax122;
    uint64_t r8_123;
    uint64_t tmp64_124;
    uint64_t r11_125;
    int32_t eax126;
    int64_t r10_127;
    uint64_t r10_128;
    uint16_t tmp16_129;
    uint64_t r11_130;
    uint64_t rax131;
    int64_t rdx132;
    uint64_t tmp64_133;
    uint64_t rcx134;
    uint64_t rdi135;
    uint64_t tmp64_136;
    uint64_t tmp64_137;
    uint64_t r13_138;
    uint1_t cf139;
    int64_t r14_140;
    int64_t rbp141;
    uint64_t rsi142;
    uint64_t rdi143;
    uint64_t r15_144;
    uint1_t cf145;
    uint64_t r15_146;
    uint64_t r11_147;
    uint64_t r10_148;
    uint64_t r9_149;
    uint64_t r15_150;
    uint64_t rbx151;
    uint64_t rcx152;
    int64_t rax153;
    uint64_t r14_154;
    unsigned char tmp8_155;
    uint1_t cf156;
    uint32_t ebp157;
    int16_t bx158;
    uint16_t r12w159;
    uint16_t bx160;
    uint64_t r10_161;
    uint64_t r13_162;
    unsigned char tmp8_163;
    uint64_t tmp64_164;
    uint64_t r14_165;
    uint64_t rbx166;
    uint64_t rax167;
    uint64_t r13_168;
    uint64_t r9_169;
    int64_t r14_170;
    uint32_t eax171;
    int64_t r14_172;
    uint64_t r10_173;
    int1_t below_or_equal174;
    uint32_t r12d175;
    uint32_t eax176;
    int64_t rdx177;
    uint1_t cf178;
    int32_t r8d179;
    uint64_t r10_180;
    int64_t rdx181;
    int64_t rax182;
    uint32_t r13d183;
    uint16_t ax184;
    uint64_t rbx185;
    uint16_t tmp16_186;
    uint32_t r12d187;
    int64_t rcx188;
    int16_t r9w189;
    uint64_t rdx190;
    uint64_t r14_191;
    uint64_t r11_192;
    int64_t r8_193;
    uint64_t rdx194;
    uint64_t rax195;
    int64_t r13_196;
    uint64_t r9_197;
    int64_t rdx198;
    int64_t r11_199;
    uint64_t rbx200;
    int1_t less_or_equal201;
    uint64_t r9_202;
    uint64_t rax203;
    uint64_t rbx204;
    uint64_t rdx205;
    uint64_t rax206;
    int32_t r9d207;
    int32_t r10d208;
    uint64_t r14_209;
    int64_t r15_210;
    uint64_t r13_211;
    uint32_t edi212;
    uint64_t r12_213;
    uint32_t eax214;
    int32_t edx215;
    uint32_t ebp216;
    uint1_t cf217;
    uint1_t below_or_equal218;
    uint32_t eax219;
    uint64_t r9_220;
    uint16_t tmp16_221;
    uint16_t cx222;
    int16_t r12w223;
    uint64_t r13_224;
    uint64_t r9_225;
    int64_t rcx226;
    uint64_t rdi227;
    uint64_t rdx228;
    uint64_t rax229;
    uint16_t tmp16_230;
    uint1_t less_or_equal231;
    uint32_t r11d232;
    uint64_t r13_233;
    int64_t r10_234;
    uint64_t rax235;
    int64_t rbp236;
    uint64_t rax237;
    uint1_t cf238;
    uint64_t rdx239;
    int64_t rdx240;
    int64_t rdx241;
    uint1_t less_or_equal242;
    int64_t r11_243;

    rbp7 = 0x2b9356a5d4296cf8;
    r11_8 = 0xe5ee9ffe3fa09ccb;
    r13_9 = 0xed109de7060a50a9;
    r15_10 = 0x7918db36c8f73c57;
    __asm__("rol r14w, cl");
    __asm__("shrd eax, edi, 0x1");
    rax11 = 0xbd367a37d5503924;
    rdx12 = __intrinsic();
    __asm__("rcr r15b, 1");
    __asm__("rcr rax, 1");
    *reinterpret_cast<signed char*>(&rdx12) = 0;
    __asm__("ror bh, cl");
    __asm__("rcl si, 1");
    *reinterpret_cast<uint16_t*>(&r11_8) = reinterpret_cast<uint16_t>(0x9ccb >> 89);
    if (reinterpret_cast<signed char>(75) <= reinterpret_cast<signed char>(75 + static_cast<uint1_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx12) >> 0xee59)))) {
        *reinterpret_cast<int32_t*>(&r13_9) = 0x596990db;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_9) + 4) = 0;
    }
    __asm__("shrd ecx, r11d, cl");
    __asm__("bts di, 0x88");
    if (__intrinsic()) {
        r15_10 = r11_8;
    }
    __asm__("btc edx, 0x76");
    *reinterpret_cast<int32_t*>(&r12_13) = 0x326e08ce;
    __asm__("bts edi, ebx");
    __asm__("rcl rdi, 1");
    edi14 = static_cast<uint32_t>(0x76054018 + r11_8 * 2 - 0x3fca6ef8);
    __asm__("cdq ");
    if (0) {
        *reinterpret_cast<int32_t*>(&r12_13) = 0xd4296cf8;
        *reinterpret_cast<int32_t*>(&rbp7) = 0x326e08ce;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = 0;
    }
    __asm__("ror r12d, cl");
    rbp15 = rbp7 >> -9;
    r9_16 = r15_10 * 0xffffffffdd010d81;
    di17 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi14) | 0xc000);
    __asm__("shrd r9, r15, cl");
    *reinterpret_cast<int16_t*>(&r13_9) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r13_9) + 0x3714);
    *reinterpret_cast<uint16_t*>(&edi14) = reinterpret_cast<uint16_t>(di17 | 0xc000);
    *reinterpret_cast<uint16_t*>(&rax11) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(0xc84 / di17) / *reinterpret_cast<uint16_t*>(&edi14));
    __asm__("btc di, r9w");
    __asm__("rcr si, 1");
    *reinterpret_cast<uint32_t*>(&rsi18) = 0xf754aeb3;
    edx19 = *reinterpret_cast<uint32_t*>(&rax11) % 0xf754aeb3;
    *reinterpret_cast<uint32_t*>(&rax20) = *reinterpret_cast<uint32_t*>(&rax11) / 0xf754aeb3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = 0;
    __asm__("xadd bh, dh");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax20) + 1) = 0;
    __asm__("btc r12, r11");
    ebx21 = *reinterpret_cast<int32_t*>(&rbp15) + 0xb2;
    dx22 = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&edx19) + *reinterpret_cast<int16_t*>(&r9_16)) + 1);
    __asm__("shld r9d, r15d, 0xc0");
    __asm__("bts r11, rsi");
    cf23 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_8) - 33) + 1) < *reinterpret_cast<unsigned char*>(&r11_8);
    if (cf23) {
    }
    *reinterpret_cast<int32_t*>(&r14_24) = *reinterpret_cast<int32_t*>(&r13_9) + *reinterpret_cast<int32_t*>(&r13_9) * 2 + 0xf4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_24) + 4) = 0;
    r9_25 = r9_16 - 0x5e6badf7;
    __asm__("rcr r9b, 0x6a");
    __asm__("shrd r11w, r12w, 0x1");
    *reinterpret_cast<unsigned char*>(&edi14) = 1;
    __asm__("shld r10w, si, cl");
    __asm__("btr ax, bx");
    __asm__("rcr r9d, 1");
    ecx26 = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&dx22) + 1);
    __asm__("rol r15, 1");
    __asm__("bsr rbx, rax");
    __asm__("bsf rcx, r15");
    __asm__("btc bp, cx");
    *reinterpret_cast<uint32_t*>(&r8_27) = reinterpret_cast<uint32_t>(28 >> reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx26) >> 1));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_27) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r9_28) = *reinterpret_cast<uint32_t*>(&r9_25) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_28) + 4) = 0;
    __asm__("shrd di, di, cl");
    *reinterpret_cast<uint16_t*>(&rsi18) = 0xaeb2;
    r14_29 = ~r14_24;
    *reinterpret_cast<uint32_t*>(&r10_30) = *reinterpret_cast<unsigned char*>(&r12_13) + *reinterpret_cast<uint32_t*>(&r8_27) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_30) + 4) = 0;
    *reinterpret_cast<int16_t*>(&r9_28) = 0x8bd;
    __asm__("rcl bpl, 1");
    __asm__("rcl r15w, cl");
    r9_31 = -r9_28;
    if (!__intrinsic()) {
    }
    *reinterpret_cast<int16_t*>(&r9_31) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r9_31) - 0x3c14);
    __asm__("btr edi, 0xd3");
    __asm__("btc cx, 0x1b");
    __asm__("ror r13b, 0x69");
    __asm__("btr esi, 0xa0");
    __asm__("shrd dx, dx, 0x4");
    *reinterpret_cast<signed char*>(&r10_30) = -78;
    __asm__("rol rdx, cl");
    __asm__("bsr rdx, r11");
    *reinterpret_cast<uint32_t*>(&r14_32) = *reinterpret_cast<int32_t*>(&r14_29) + 0xf754aeb2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_32) + 4) = 0;
    __asm__("btr rbx, 0x51");
    __asm__("rcl r14d, 0xcb");
    __asm__("ror edx, 0x40");
    __asm__("rol dl, cl");
    ebx33 = ebx21 * 0x9f6f94ae;
    *reinterpret_cast<unsigned char*>(&r14_32) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_32) - reinterpret_cast<unsigned char>(96 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r14_32) < 0xa0)));
    *reinterpret_cast<signed char*>(&rax20) = reinterpret_cast<signed char>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rax20) >> 87)));
    *reinterpret_cast<uint32_t*>(&r9_34) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r9_31) - 0x126bc6be);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_34) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r14_32) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_32) << 1);
    bx35 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx33) & 0xa41);
    if (*reinterpret_cast<uint16_t*>(&r14_32) == bx35) {
        *reinterpret_cast<uint16_t*>(&r14_32) = bx35;
    }
    __asm__("lahf ");
    rax36 = rax20 * r9_34;
    rdx37 = __intrinsic();
    __asm__("ror ah, cl");
    ax38 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax36) * 0xaeb2);
    *reinterpret_cast<int16_t*>(&rdx37) = __intrinsic();
    if (rdx37 == r8_27) {
        rdx37 = r8_27;
    }
    __asm__("rcr r13, 1");
    r14_39 = r14_32 << 1;
    __asm__("rol r13d, 0x64");
    __asm__("rol rbx, 1");
    *reinterpret_cast<uint16_t*>(&r10_30) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_30) & *reinterpret_cast<uint16_t*>(&edi14));
    *reinterpret_cast<uint32_t*>(&rcx40) = 0x58c6 - (0x1eafc6fa + reinterpret_cast<uint1_t>(0x58c6 < 0x1eafc6fa + reinterpret_cast<uint1_t>(rdx37 < r10_30)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx40) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rcx40) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rcx40) >> 1);
    r8d41 = 0;
    *reinterpret_cast<signed char*>(&ax38) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ax38) - *reinterpret_cast<signed char*>(&ax38));
    *reinterpret_cast<unsigned char*>(&rdx37) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx37) + *reinterpret_cast<signed char*>(&r13_9))));
    *reinterpret_cast<unsigned char*>(&r9_34) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_34) >> 1);
    __asm__("xadd cl, r9b");
    __asm__("rcl si, 0x28");
    rdx42 = rdx37 - 1;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx40) + 1) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!__intrinsic())) | 0xc0);
    *reinterpret_cast<uint16_t*>(&rax36) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(ax38 & 0x3fff) / static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx40) + 1)));
    r13_43 = r13_9 >> 89;
    rax44 = *reinterpret_cast<int32_t*>(&rax36);
    __asm__("shrd r9w, dx, 0x2");
    *reinterpret_cast<int16_t*>(&r13_43) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r13_43) - 0x2918);
    *reinterpret_cast<uint32_t*>(&r13_45) = *reinterpret_cast<uint32_t*>(&r13_43) >> 24 | *reinterpret_cast<uint32_t*>(&r13_43) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&r13_43) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&r13_43) << 24;
    __asm__("rcr r15d, 1");
    r11d46 = *reinterpret_cast<uint32_t*>(&r10_30) * 0x78e4185a;
    *reinterpret_cast<signed char*>(&rsi18) = -78;
    *reinterpret_cast<uint16_t*>(&eax47) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rax44) * *reinterpret_cast<uint16_t*>(&edi14));
    __asm__("rcr eax, 1");
    *reinterpret_cast<int16_t*>(&r15_10) = 0xc800;
    r15_48 = reinterpret_cast<uint64_t>(r15_10 + r9_34);
    __asm__("rol r8d, cl");
    __asm__("ror r12, 1");
    __asm__("btr r12d, r8d");
    tmp32_49 = edi14 + 0xab83293e + 1;
    sf50 = reinterpret_cast<int32_t>(tmp32_49) < reinterpret_cast<int32_t>(0);
    if (sf50) {
        eax47 = *reinterpret_cast<int32_t*>(&r14_39);
    }
    __asm__("rcl r11w, 1");
    __asm__("xadd dl, ch");
    if (reinterpret_cast<uint1_t>(sf50 != __intrinsic()) | reinterpret_cast<uint1_t>(tmp32_49 == 0)) {
    }
    *reinterpret_cast<uint16_t*>(&rdx42) = reinterpret_cast<uint16_t>(~__intrinsic());
    cf51 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r13_45) < reinterpret_cast<uint16_t>(0x3ae2 - reinterpret_cast<uint1_t>(tmp32_49 < edi14)));
    *reinterpret_cast<uint16_t*>(&r13_45) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_45) - reinterpret_cast<uint16_t>(0x3ae2 - cf51));
    __asm__("rcr r12w, 1");
    __asm__("bts r15, r8");
    __asm__("rcl r12w, 0x5d");
    *reinterpret_cast<unsigned char*>(&r8d41) = reinterpret_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r13_45) == static_cast<uint32_t>(cf51)) - 1);
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&r8d41) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r8d41) == 0)) {
        rdx42 = rcx40;
    }
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r15_48) = r11d46;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_48) + 4) = 0;
    }
    if (!__intrinsic()) {
    }
    if (0xaeb2 == *reinterpret_cast<uint16_t*>(&eax47)) {
        *reinterpret_cast<uint16_t*>(&rsi18) = *reinterpret_cast<uint16_t*>(&eax47);
    }
    rbx52 = *reinterpret_cast<int32_t*>(&r14_39);
    __asm__("bsr edi, ebp");
    *reinterpret_cast<uint16_t*>(&rdx42) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx42) >> 0x77);
    *reinterpret_cast<uint32_t*>(&rdx53) = *reinterpret_cast<int32_t*>(&rdx42) + r11d46;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx53) + 4) = 0;
    __asm__("ror rbx, 0x3a");
    __asm__("shld r11d, ecx, 0x44");
    *reinterpret_cast<unsigned char*>(&rcx40) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx40) >> 23);
    *reinterpret_cast<int16_t*>(&rdx53) = __intrinsic();
    __asm__("bts r12d, 0xdc");
    rbp54 = *reinterpret_cast<signed char*>(&rsi18);
    *reinterpret_cast<uint32_t*>(&r8_55) = r8d41 + 0xcc71d388 + __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_55) + 4) = 0;
    rax56 = *reinterpret_cast<int32_t*>(&rbp54);
    r11d57 = r11d46 + 0x7bb61bf8 + 1;
    __asm__("rcl r9, 1");
    __asm__("rcl r13d, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx53) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx53) + 1) | 0xc5);
    if (1) {
        *reinterpret_cast<int16_t*>(&rax56) = *reinterpret_cast<int16_t*>(&rbx52);
    }
    *reinterpret_cast<int16_t*>(&r8_55) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r8_55) - 1);
    __asm__("ror r8b, 0xb1");
    __asm__("xadd r10d, eax");
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rcx40) = *reinterpret_cast<uint32_t*>(&r13_45);
    }
    *reinterpret_cast<uint32_t*>(&rcx58) = *reinterpret_cast<uint32_t*>(&rcx40) >> *reinterpret_cast<unsigned char*>(&rcx40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx58) + 4) = 0;
    __asm__("rol rbx, 0x8a");
    __asm__("xadd r8, r13");
    __asm__("rcr rdi, 1");
    __asm__("shrd r14, rbp, cl");
    rdx59 = rdx53 + r8_55 + 1 + 0x63c6f5f3;
    __asm__("rcr r13W, cl");
    rcx60 = rcx58 + 0x518e6e21;
    __asm__("bsf r10w, r9w");
    r8_61 = r8_55 + r14_39;
    *reinterpret_cast<uint32_t*>(&rbp62) = *reinterpret_cast<int32_t*>(&rbp54) + *reinterpret_cast<uint32_t*>(&rax56) & 0x362bca75 & 0xa5296697;
    __asm__("ror r15, cl");
    *reinterpret_cast<int32_t*>(&rdx63) = *reinterpret_cast<int32_t*>(&rdx59) >> 33;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx63) + 4) = 0;
    r10_64 = r10_30 - (0x6cfa7ee4 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r10_30 < 0x6cfa7ee4 + static_cast<uint64_t>(__intrinsic())))) - 0xdef23d1;
    *reinterpret_cast<uint32_t*>(&r10_65) = *reinterpret_cast<uint32_t*>(&r10_64) & 0xe869c547;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_65) + 4) = 0;
    __asm__("rcr bx, 0xf2");
    *reinterpret_cast<int16_t*>(&rdx63) = __intrinsic();
    __asm__("rcr ax, 1");
    __asm__("rol r11w, 1");
    *reinterpret_cast<signed char*>(&rdx63) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rdx63) << *reinterpret_cast<unsigned char*>(&rcx60));
    __asm__("cwd ");
    *reinterpret_cast<unsigned char*>(&r10_65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_65) >> 1);
    __asm__("rcl cl, 1");
    __asm__("shld edx, eax, cl");
    rdi66 = static_cast<uint64_t>((*reinterpret_cast<uint32_t*>(&rsi18) | 0x249d9e04) + *reinterpret_cast<uint32_t*>(&rbp62) * 8) << 1;
    __asm__("btc ecx, esi");
    *reinterpret_cast<signed char*>(&r11d57) = *reinterpret_cast<signed char*>(&rdi66);
    *reinterpret_cast<int16_t*>(&r15_48) = 0;
    *reinterpret_cast<uint32_t*>(&rcx67) = *reinterpret_cast<int32_t*>(&r8_61) * 0xd8e97d71 + 0x630974fc + __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx67) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r14_39) = *reinterpret_cast<unsigned char*>(&rcx67);
    __asm__("rol r11b, cl");
    rdx68 = ~(rdx63 + 0x32a67508);
    __asm__("bts r12, 0x22");
    *reinterpret_cast<unsigned char*>(&rdx68) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx68) & *reinterpret_cast<unsigned char*>(&rcx67));
    __asm__("shld r10d, r15d, 0x1c");
    __asm__("ror bp, 1");
    rcx69 = rcx67 - reinterpret_cast<uint1_t>(rcx67 < static_cast<uint64_t>(__intrinsic()));
    __asm__("bsf r8, rdi");
    rax70 = 0;
    r12_71 = r10_65;
    __asm__("rcr bl, 1");
    if (reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&r12_71) & 0x6fb5) < reinterpret_cast<int16_t>(0)) {
        r11d57 = *reinterpret_cast<uint32_t*>(&rdx68);
    }
    *reinterpret_cast<unsigned char*>(&r8_61) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_61) + 68)));
    __asm__("rcl r12, 1");
    *reinterpret_cast<unsigned char*>(&r15_48) = 0xc8;
    __asm__("xadd r13W, r14w");
    __asm__("xadd rdx, rcx");
    __asm__("shld edx, esi, cl");
    cl72 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx69) | 0xad);
    if (0) {
        *reinterpret_cast<uint32_t*>(&rax70) = *reinterpret_cast<uint32_t*>(&rbp62);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax70) + 4) = 0;
    }
    __asm__("shld di, si, 0x5");
    __asm__("btr r12w, 0x60");
    r8_73 = r8_61 >> 1;
    cf74 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx58) < reinterpret_cast<unsigned char>(cl72 + __intrinsic()));
    *reinterpret_cast<unsigned char*>(&rbx52) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx58) - reinterpret_cast<unsigned char>(cl72 + cf74));
    cf75 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r14_39) < reinterpret_cast<unsigned char>(6 + cf74));
    *reinterpret_cast<unsigned char*>(&r14_39) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_39) - reinterpret_cast<unsigned char>(6 + cf75));
    __asm__("btc r8w, di");
    if (*reinterpret_cast<unsigned char*>(&r14_39) == static_cast<uint32_t>(cf75)) {
        *reinterpret_cast<int16_t*>(&rbp62) = *reinterpret_cast<int16_t*>(&r8_73);
    }
    __asm__("rcl r11b, 1");
    r9_76 = *reinterpret_cast<uint16_t*>(&r11d57);
    *reinterpret_cast<unsigned char*>(&r9_76) = 0;
    if (!__intrinsic()) {
        rbp62 = r14_39;
    }
    if (__intrinsic()) {
    }
    __asm__("rol r14d, 1");
    *reinterpret_cast<unsigned char*>(&r14_39) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_39) & 31);
    r14_77 = r14_39 & 0xffffffff80dc9df0;
    __asm__("shrd r15d, edi, cl");
    *reinterpret_cast<uint32_t*>(&rsi78) = *reinterpret_cast<unsigned char*>(&rbp62);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi78) + 4) = 0;
    __asm__("rcl r14d, 1");
    *reinterpret_cast<unsigned char*>(&r14_77) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_77) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_71) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r14_77) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r12_71))))));
    edx79 = *reinterpret_cast<uint32_t*>(&rdx68) & 0xcfc20e60;
    __asm__("btc r9d, 0xd6");
    r14_80 = r14_77 & 0xd960707;
    dx81 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&edx79) + *reinterpret_cast<uint16_t*>(&r9_76)) + 1);
    __asm__("xadd r12d, r12d");
    __asm__("rcl r8w, cl");
    *reinterpret_cast<int16_t*>(&rax70) = 0;
    *reinterpret_cast<int32_t*>(&r12_82) = *reinterpret_cast<int32_t*>(&r8_73);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_82) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_83) = *reinterpret_cast<int32_t*>(&r12_71);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_83) + 4) = 0;
    r12_84 = r12_82 | 0xffffffff9a52c689;
    r10_85 = r8_83 * 0xffffffffcac9c936;
    tmp64_86 = (r15_48 & 0xffffffff) << 32 | (r15_48 & 0xffffffff00000000) >> 32;
    tmp64_87 = (tmp64_86 & 0xffff0000ffff) << 16 | (tmp64_86 & 0xffff0000ffff0000) >> 16;
    r15_88 = (tmp64_87 & 0xff00ff00ff00ff) << 8 | (tmp64_87 & 0xff00ff00ff00ff00) >> 8;
    __asm__("rol dx, 0xb6");
    r13_89 = *reinterpret_cast<uint16_t*>(&r8_83);
    *reinterpret_cast<uint32_t*>(&rbx90) = *reinterpret_cast<uint32_t*>(&rbx52) & 0x9785c1a9;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx90) + 4) = 0;
    *reinterpret_cast<int16_t*>(&rcx69) = 0xe3e9;
    *reinterpret_cast<uint16_t*>(&rsi78) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi78) >> 1);
    __asm__("rcr r13, 0x32");
    rbx91 = rbx90 - 0x4233220d;
    __asm__("btr r11, 0xd8");
    *reinterpret_cast<uint16_t*>(&rbx91) = *reinterpret_cast<unsigned char*>(&r12_84);
    __asm__("bsr r14w, cx");
    __asm__("shrd r14d, r15d, 0x1");
    __asm__("ror r12, 1");
    *reinterpret_cast<uint16_t*>(&r14_80) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_80) >> 0xe9);
    __asm__("btr rbp, 0x63");
    rax92 = rax70 - (rsi78 + reinterpret_cast<uint1_t>(rax70 < rsi78));
    __asm__("ror r8w, 0x5f");
    *reinterpret_cast<uint32_t*>(&rbp93) = *reinterpret_cast<uint32_t*>(&rbp62) ^ *reinterpret_cast<uint32_t*>(&r13_89);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp93) + 4) = 0;
    __asm__("ror r15d, 0xb6");
    cf94 = reinterpret_cast<uint1_t>(!!*reinterpret_cast<signed char*>(&dx81));
    *reinterpret_cast<signed char*>(&dx81) = -*reinterpret_cast<signed char*>(&dx81);
    if (!reinterpret_cast<uint1_t>(cf94 | reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&dx81) == 0))) {
    }
    tmp8_95 = *reinterpret_cast<signed char*>(&r13_89);
    *reinterpret_cast<signed char*>(&r13_89) = *reinterpret_cast<signed char*>(&r14_80);
    *reinterpret_cast<signed char*>(&r14_80) = tmp8_95;
    *reinterpret_cast<uint16_t*>(&r9_76) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(~*reinterpret_cast<uint16_t*>(&r9_76)) + 0x720c)));
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&r9_76) < reinterpret_cast<int16_t>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r9_76) == 0)) {
        *reinterpret_cast<uint32_t*>(&rax92) = *reinterpret_cast<uint32_t*>(&r12_84);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax92) + 4) = 0;
    }
    __asm__("rcl r10b, cl");
    r8_96 = r8_83 >> 1;
    __asm__("btr bp, r10w");
    __asm__("btr dx, r10w");
    *reinterpret_cast<uint16_t*>(&r13_89) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_89) | 0xc000);
    *reinterpret_cast<uint16_t*>(&rax92) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax92) / *reinterpret_cast<uint16_t*>(&r13_89));
    r11_97 = rax92 + rbx91 + 0x7fa46d68;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx91) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx91) + 1) >> 1);
    *reinterpret_cast<unsigned char*>(&r10_85) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_85) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_84) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r10_85) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r12_84))))));
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(&r11_97) & 0x2837f602) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>((*reinterpret_cast<uint32_t*>(&r11_97) & 0x2837f602) == 0))) {
        rsi78 = 0xffffffffffffe3e9;
    }
    __asm__("rcr edx, cl");
    rsi98 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rsi78)));
    r14d99 = *reinterpret_cast<int32_t*>(&r14_80) * 0xd476501e;
    r13_100 = -r13_89;
    __asm__("shrd r15w, si, 0x1");
    __asm__("shrd r9w, r14w, 0x1");
    __asm__("rcr r10, 1");
    if (*reinterpret_cast<int16_t*>(&r14d99) == *reinterpret_cast<int16_t*>(&rsi98)) {
        tmp16_101 = *reinterpret_cast<int16_t*>(&r14d99);
        *reinterpret_cast<int16_t*>(&r14d99) = *reinterpret_cast<int16_t*>(&rsi98);
        *reinterpret_cast<int16_t*>(&rsi98) = tmp16_101;
    }
    if (__intrinsic() == __intrinsic()) {
        r15_88 = 0xffffffffffffe3e9;
    }
    __asm__("rcl rcx, 1");
    __asm__("rcr dx, 1");
    *reinterpret_cast<uint16_t*>(&r11_97) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_97) + *reinterpret_cast<uint16_t*>(&rbx91));
    *reinterpret_cast<unsigned char*>(&r15_88) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_88) & 0xe9);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx91) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx91) + 1) | 0xc0);
    __asm__("rol r13b, cl");
    eax102 = reinterpret_cast<int16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax92) & 0x3fff) / static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx91) + 1))) * *reinterpret_cast<uint32_t*>(&rcx69);
    __asm__("shld r13d, r15d, 0x1");
    __asm__("bsr r9w, r15w");
    r10_103 = r10_85 - (0x62d9acd0 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r10_85 < 0x62d9acd1))) | rbp93;
    __asm__("ror edx, 0x39");
    __asm__("bsf rbx, r10");
    r9_104 = 0x2609f6f44368cd15;
    __asm__("cwd ");
    cx105 = reinterpret_cast<int16_t>(0xe3e9 >> 0xe9);
    rdi106 = *reinterpret_cast<signed char*>(&cx105);
    *reinterpret_cast<unsigned char*>(&r9_104) = reinterpret_cast<unsigned char>(21 | *reinterpret_cast<unsigned char*>(&cx105));
    __asm__("ror ebx, 1");
    *reinterpret_cast<signed char*>(&r13_100) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r13_100) >> -61);
    __asm__("btc r9, 0x9");
    *reinterpret_cast<uint32_t*>(&r14_107) = r14d99 - (0x61fb5cf6 - reinterpret_cast<uint1_t>(r14d99 < 0x9e04a30b));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_107) + 4) = 0;
    r9d108 = reinterpret_cast<uint32_t>(~*reinterpret_cast<int32_t*>(&r9_104));
    *reinterpret_cast<int16_t*>(&eax102) = reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&eax102) * *reinterpret_cast<int16_t*>(&r14d99)) * *reinterpret_cast<int16_t*>(&r9d108));
    dx109 = __intrinsic();
    __asm__("ror r9w, 1");
    *reinterpret_cast<unsigned char*>(&r14_107) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_107) << *reinterpret_cast<unsigned char*>(&cx105));
    __asm__("bsr esi, r11d");
    r11_110 = r11_97 + 0xffffffffdc07ffc6 + 1 + 1;
    less111 = reinterpret_cast<int64_t>(r11_110) < reinterpret_cast<int64_t>(0) != __intrinsic();
    *reinterpret_cast<unsigned char*>(&r10_103) = reinterpret_cast<uint1_t>(!!r11_110);
    *reinterpret_cast<int16_t*>(&rcx69) = *reinterpret_cast<int16_t*>(&r11_110);
    *reinterpret_cast<int16_t*>(&r11_110) = cx105;
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rbp93) = *reinterpret_cast<uint32_t*>(&r13_100);
    }
    *reinterpret_cast<unsigned char*>(&rbx91) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&dx109) + 1);
    if (!__intrinsic()) {
        rbp93 = rbx91;
    }
    *reinterpret_cast<uint32_t*>(&rdi112) = *reinterpret_cast<int32_t*>(&rdi106) - 0x7fdb5e70 + *reinterpret_cast<uint32_t*>(&rbx91) * 8 + 0x397c065f;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi112) + 4) = 0;
    if (less111) {
    }
    __asm__("rol eax, cl");
    edx113 = __intrinsic();
    __asm__("rol r13W, cl");
    *reinterpret_cast<unsigned char*>(&rsi98) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi98) - *reinterpret_cast<unsigned char*>(&r11_110));
    __asm__("shrd esi, r9d, cl");
    *reinterpret_cast<unsigned char*>(&r12_84) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_84) ^ *reinterpret_cast<unsigned char*>(&edx113));
    cf114 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rbp93) < 0x29b);
    *reinterpret_cast<uint16_t*>(&rbp93) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp93) - reinterpret_cast<uint16_t>(0x29b + cf114));
    *reinterpret_cast<unsigned char*>(&r11_110) = __intrinsic();
    *reinterpret_cast<unsigned char*>(&rbx91) = reinterpret_cast<uint1_t>(!cf114);
    if (*reinterpret_cast<uint32_t*>(&rbp93) == *reinterpret_cast<uint32_t*>(&r10_103)) {
        tmp32_115 = *reinterpret_cast<uint32_t*>(&rbp93);
        *reinterpret_cast<uint32_t*>(&rbp93) = *reinterpret_cast<uint32_t*>(&r10_103);
        *reinterpret_cast<uint32_t*>(&r10_103) = tmp32_115;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_103) + 4) = 0;
    }
    *reinterpret_cast<int16_t*>(&r10_103) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r10_103) - 1);
    *reinterpret_cast<unsigned char*>(&rdi112) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi112) ^ 0x83);
    zf116 = *reinterpret_cast<unsigned char*>(&rdi112) == 0;
    if (!zf116) {
        r13_100 = rdi112;
    }
    __asm__("btc ebx, r15d");
    __asm__("xadd rsi, r13");
    if (!zf116) {
        rcx69 = r14_107;
    }
    __asm__("btr r15w, 0xd0");
    if (1) {
        rbx91 = r13_100;
    }
    *reinterpret_cast<signed char*>(&r9d108) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r9d108) >> -72);
    __asm__("rol rcx, 1");
    if (!*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx91) + 1)) {
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx69) + 1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx91) + 1);
    }
    __asm__("rcr r15b, cl");
    ecx117 = *reinterpret_cast<uint32_t*>(&rcx69) | 0xc0000000;
    eax118 = eax102 * *reinterpret_cast<uint32_t*>(&r14_107) / ecx117 * *reinterpret_cast<uint32_t*>(&r11_110);
    __asm__("xadd al, bpl");
    *reinterpret_cast<unsigned char*>(&ecx117) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx117) ^ *reinterpret_cast<unsigned char*>(&rdi112));
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rbx91) = r9d108;
    }
    *reinterpret_cast<uint32_t*>(&rbp119) = *reinterpret_cast<uint32_t*>(&rbp93) | 0xc0000000;
    *reinterpret_cast<uint32_t*>(&rax120) = eax118 / *reinterpret_cast<uint32_t*>(&rbp119);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax120) + 4) = 0;
    __asm__("rcl r8, 1");
    __asm__("ror r9d, 1");
    *reinterpret_cast<int16_t*>(&ecx117) = reinterpret_cast<int16_t>(~*reinterpret_cast<int16_t*>(&ecx117));
    r9d121 = r9d108 >> 1;
    __asm__("btc r14d, 0xce");
    __asm__("rcl r8, 1");
    *reinterpret_cast<unsigned char*>(&rax120) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax120) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi98) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rax120) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi98) + __intrinsic()))));
    *reinterpret_cast<uint16_t*>(&rax120) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax120) + 0x52d) + 1);
    __asm__("rol rsi, cl");
    __asm__("btr rbp, 0xf6");
    *reinterpret_cast<int16_t*>(&r11_110) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r11_110) << *reinterpret_cast<unsigned char*>(&ecx117));
    rax122 = rax120 - r13_100;
    __asm__("btc r8w, r15w");
    __asm__("rol edx, 0xf3");
    *reinterpret_cast<int16_t*>(&r15_88) = reinterpret_cast<int16_t>(~*reinterpret_cast<int16_t*>(&r15_88));
    __asm__("shld r15, r11, cl");
    __asm__("ror cx, 1");
    *reinterpret_cast<uint32_t*>(&r8_123) = *reinterpret_cast<uint32_t*>(&r8_96) & 0xf85b2889;
    tmp64_124 = r11_110 + r10_103;
    r11_125 = tmp64_124;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(tmp64_124 < r11_110) | reinterpret_cast<uint1_t>(r11_125 == 0))) {
        *reinterpret_cast<uint32_t*>(&rdi112) = *reinterpret_cast<uint32_t*>(&r12_84);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi112) + 4) = 0;
    }
    __asm__("shrd ecx, edi, 0x1");
    *reinterpret_cast<unsigned char*>(&rdi112) = reinterpret_cast<uint1_t>(!__intrinsic());
    if (reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(&r11_125) & 0x7dd548ee) < reinterpret_cast<int32_t>(0)) {
        *reinterpret_cast<uint32_t*>(&rsi98) = *reinterpret_cast<uint32_t*>(&rbp119);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi98) + 4) = 0;
    }
    *reinterpret_cast<unsigned char*>(&r14_107) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_107) + 0x79)));
    *reinterpret_cast<uint16_t*>(&r12_84) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_84) | 0xc314);
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(__intrinsic())))) {
        *reinterpret_cast<int16_t*>(&rbp119) = *reinterpret_cast<int16_t*>(&r9d121);
    }
    __asm__("lahf ");
    if (*reinterpret_cast<unsigned char*>(&rbx91) == *reinterpret_cast<unsigned char*>(&r8_123)) {
        *reinterpret_cast<unsigned char*>(&r8_123) = *reinterpret_cast<unsigned char*>(&rbx91);
    }
    eax126 = -static_cast<int32_t>(*reinterpret_cast<int16_t*>(&rax122));
    *reinterpret_cast<unsigned char*>(&rbx91) = __intrinsic();
    *reinterpret_cast<uint32_t*>(&r10_127) = *reinterpret_cast<uint32_t*>(&r10_103) - (0x3ae4f4c1 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r10_103) < 0x3ae4f4c2));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_127) + 4) = 0;
    r10_128 = reinterpret_cast<uint64_t>(r10_127 >> *reinterpret_cast<unsigned char*>(&ecx117));
    __asm__("shrd r13d, r11d, 0xa1");
    if (ecx117 == *reinterpret_cast<uint32_t*>(&rbp119) + *reinterpret_cast<uint32_t*>(&r10_103) * 2 + 0xaa << 1) {
    }
    if (__intrinsic() == __intrinsic()) {
    }
    __asm__("btc rdi, 0xea");
    tmp16_129 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi112) + 0x566b);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(tmp16_129 < *reinterpret_cast<uint16_t*>(&rdi112)) | reinterpret_cast<uint1_t>(tmp16_129 == 0))) {
    }
    *reinterpret_cast<int16_t*>(&eax126) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbp119) * 0x1c06);
    __asm__("ror r11d, 0x29");
    r11_130 = r11_125 ^ 0xffffffffd59eb27a;
    *reinterpret_cast<uint16_t*>(&r8_123) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_123) & *reinterpret_cast<uint16_t*>(&r10_128));
    __asm__("rcl al, 1");
    *reinterpret_cast<uint32_t*>(&rax131) = eax126 * *reinterpret_cast<uint32_t*>(&rbp119);
    *reinterpret_cast<int32_t*>(&rdx132) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx132) + 4) = 0;
    tmp64_133 = r11_130 + 0x43104566 + __intrinsic();
    if (reinterpret_cast<uint1_t>(tmp64_133 < r11_130) | reinterpret_cast<uint1_t>(tmp64_133 == 0)) {
        rax131 = tmp64_133;
    }
    rcx134 = *reinterpret_cast<unsigned char*>(&rax131);
    __asm__("bsr r14w, si");
    __asm__("rcl cl, 0xce");
    *reinterpret_cast<uint16_t*>(&rdi112) = reinterpret_cast<uint16_t>(tmp16_129 << 1);
    __asm__("bsr r14d, eax");
    rdi135 = rdi112 >> 1;
    __asm__("shrd edi, r11d, cl");
    tmp64_136 = (r13_100 & 0xffffffff) << 32 | (r13_100 & 0xffffffff00000000) >> 32;
    tmp64_137 = (tmp64_136 & 0xffff0000ffff) << 16 | (tmp64_136 & 0xffff0000ffff0000) >> 16;
    r13_138 = (tmp64_137 & 0xff00ff00ff00ff) << 8 | (tmp64_137 & 0xff00ff00ff00ff00) >> 8;
    cf139 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r13_138) < 0xffd2);
    *reinterpret_cast<uint16_t*>(&r13_138) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_138) + 46);
    *reinterpret_cast<unsigned char*>(&rbx91) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx91) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_107) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rbx91) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_107) + cf139))));
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r10_128) = *reinterpret_cast<uint32_t*>(&r8_123);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_128) + 4) = 0;
    }
    *reinterpret_cast<int32_t*>(&r14_140) = *reinterpret_cast<int32_t*>(&r14_107) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_140) + 4) = 0;
    if (0) {
        r8_123 = rsi98;
    }
    __asm__("rcl dl, 0x45");
    *reinterpret_cast<int16_t*>(&rdx132) = 0xdfed;
    __asm__("rcl bp, 1");
    rbp141 = rdx132;
    __asm__("rcr r11, 1");
    if (*reinterpret_cast<signed char*>(&rbx91) > *reinterpret_cast<signed char*>(&r12_84)) {
        *reinterpret_cast<uint16_t*>(&r12_84) = *reinterpret_cast<uint16_t*>(&r8_123);
    }
    rsi142 = rsi98 - (0x7798113b + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rsi98 < 0x7798113c)));
    rdi143 = rdi135 - (tmp64_133 + reinterpret_cast<uint1_t>(rdi135 < tmp64_133));
    __asm__("ror r9, 1");
    *reinterpret_cast<unsigned char*>(&r13_138) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_138) | 0x95);
    __asm__("shld di, r8w, 0xf");
    *reinterpret_cast<unsigned char*>(&rcx134) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx134) & 15);
    __asm__("shrd si, r11w, cl");
    __asm__("rol r8d, 0x8e");
    r15_144 = r15_88 << 1 & 0x6144c504;
    __asm__("btc r11d, r13d");
    cf145 = reinterpret_cast<uint1_t>(r15_144 < 0xffffffffe5163200);
    r15_146 = r15_144 - (0x1ae9ce00 - static_cast<uint64_t>(cf145));
    *reinterpret_cast<uint32_t*>(&r11_147) = *reinterpret_cast<uint32_t*>(&r12_84) * 0x2fe083da - 0x199c451e + cf145;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_147) + 4) = 0;
    __asm__("btc r10d, r9d");
    *reinterpret_cast<signed char*>(&rbp141) = *reinterpret_cast<signed char*>(&r15_146);
    *reinterpret_cast<uint16_t*>(&r11_147) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_147) + 0x1190)));
    __asm__("bts rdi, 0x98");
    r10_148 = (r10_128 & rdi135) << *reinterpret_cast<unsigned char*>(&rcx134);
    r9_149 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rcx134)));
    *reinterpret_cast<uint32_t*>(&r15_150) = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rdi143)) << 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_150) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rbx151) = *reinterpret_cast<uint32_t*>(&rdi143) + *reinterpret_cast<uint32_t*>(&r10_148) + 0xfbb7d02;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx151) + 4) = 0;
    __asm__("shld rax, r11, 0x9d");
    *reinterpret_cast<unsigned char*>(&rax131) = reinterpret_cast<uint1_t>(rdi143 < 0xffffffffc9b10c34);
    __asm__("rcl r10b, 0xf1");
    __asm__("xadd bl, r13b");
    __asm__("rcr r11, 1");
    *reinterpret_cast<uint32_t*>(&rcx152) = 0xf5562b2d;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx152) + 4) = 0;
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r15_150) = *reinterpret_cast<uint32_t*>(&r11_147);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_150) + 4) = 0;
    }
    __asm__("btc esi, ecx");
    *reinterpret_cast<uint32_t*>(&rax153) = *reinterpret_cast<uint32_t*>(&rax131) * *reinterpret_cast<int32_t*>(&r9_149);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax153) + 4) = 0;
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r15_150) = 0xf5562b2d;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_150) + 4) = 0;
    }
    __asm__("rol ecx, 1");
    r14_154 = r14_140 + 0x8f6029a + 1;
    __asm__("bsf r11w, bp");
    __asm__("shld bp, r9w, 0x1");
    *reinterpret_cast<uint16_t*>(&rax153) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax153) * 0x2b2d);
    tmp8_155 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_84) + *reinterpret_cast<unsigned char*>(&r9_149));
    cf156 = reinterpret_cast<uint1_t>(tmp8_155 < *reinterpret_cast<unsigned char*>(&r12_84));
    *reinterpret_cast<unsigned char*>(&r12_84) = tmp8_155;
    ebp157 = *reinterpret_cast<uint32_t*>(&rbp141) - (0x5e509749 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbp141) < 0x5e509749 + cf156));
    *reinterpret_cast<unsigned char*>(&bx158) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx151) + *reinterpret_cast<unsigned char*>(&rsi142))));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&bx158) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx151) + 1) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax153) + 1));
    __asm__("rcl ebp, 1");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&bx158) + 1) == 45) {
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&bx158) + 1) = 45;
    }
    r12w159 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_84) >> 1);
    bx160 = reinterpret_cast<uint16_t>(bx158 + *reinterpret_cast<int16_t*>(&r14_154));
    *reinterpret_cast<signed char*>(&r14_154) = 0;
    __asm__("shld r9, rcx, 0xcd");
    __asm__("rol r9d, 0x96");
    __asm__("btc rsi, 0x72");
    *reinterpret_cast<uint16_t*>(&r15_150) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_150) & 0x52cb);
    *reinterpret_cast<int32_t*>(&r10_161) = *reinterpret_cast<int32_t*>(&r10_148) >> 65;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_161) + 4) = 0;
    *reinterpret_cast<signed char*>(&rax153) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx152) + 1);
    *reinterpret_cast<uint16_t*>(&rbx151) = reinterpret_cast<uint16_t>(bx160 - reinterpret_cast<uint16_t>(0x2ea0 + reinterpret_cast<uint1_t>(bx160 < 0x2ea1)));
    *reinterpret_cast<int32_t*>(&r13_162) = *reinterpret_cast<int32_t*>(&r13_138) * 0x1956d0a9 >> 45;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_162) + 4) = 0;
    if (*reinterpret_cast<unsigned char*>(&rbx151) == *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx151) + 1)) {
        tmp8_163 = *reinterpret_cast<unsigned char*>(&rbx151);
        *reinterpret_cast<unsigned char*>(&rbx151) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx151) + 1);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx151) + 1) = tmp8_163;
    }
    __asm__("shld bx, dx, cl");
    __asm__("rol dh, cl");
    if (r11_147 == r15_150) {
        tmp64_164 = r11_147;
        r11_147 = r15_150;
        r15_150 = tmp64_164;
    }
    __asm__("shrd r9d, edx, cl");
    r14_165 = r14_154 & 0x3aae88b0;
    __asm__("btc r8w, 0x2e");
    rbx166 = rbx151 | 0xc000000000000000;
    rax167 = rax153 / rbx166;
    r13_168 = r13_162 - (0xf5562b0d + reinterpret_cast<uint1_t>(r13_162 < 0xf5562b0e)) - 0xc274ea0;
    __asm__("rcl r11b, 0xa1");
    r9_169 = r9_149 << 13;
    *reinterpret_cast<int16_t*>(&r10_161) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r10_161) + 1);
    *reinterpret_cast<uint16_t*>(&rbx166) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx166) >> 13);
    __asm__("ror r15w, 0xd7");
    __asm__("shld rax, rbp, 0x1");
    __asm__("rcr di, 1");
    *reinterpret_cast<uint16_t*>(&rcx152) = *reinterpret_cast<unsigned char*>(&rax167);
    if (0) {
        *reinterpret_cast<uint32_t*>(&r13_168) = *reinterpret_cast<uint32_t*>(&r9_169);
    }
    *reinterpret_cast<int32_t*>(&r14_170) = *reinterpret_cast<int32_t*>(&r14_165) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_170) + 4) = 0;
    eax171 = *reinterpret_cast<uint32_t*>(&rax167) - (0x6fd773eb + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax167) < 0x6fd773eb));
    __asm__("rol ebx, 1");
    r14_172 = ~r14_170;
    __asm__("shrd r8, r10, 0x7f");
    r10_173 = r10_161 >> 1;
    __asm__("rcr al, 1");
    below_or_equal174 = *reinterpret_cast<uint16_t*>(&r13_168) <= *reinterpret_cast<uint16_t*>(&r10_173);
    *reinterpret_cast<uint16_t*>(&r13_168) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_168) - *reinterpret_cast<uint16_t*>(&r10_173));
    __asm__("xadd sil, dl");
    if (below_or_equal174) {
        *reinterpret_cast<uint32_t*>(&r10_173) = *reinterpret_cast<uint32_t*>(&rcx152);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_173) + 4) = 0;
    }
    r12d175 = *reinterpret_cast<unsigned char*>(&r12w159);
    __asm__("bts r12, 0x66");
    if (0) {
        *reinterpret_cast<uint16_t*>(&r10_173) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_150) + 1);
    }
    *reinterpret_cast<unsigned char*>(&r12d175) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12d175) + *reinterpret_cast<unsigned char*>(&rbx166));
    __asm__("ror r11b, 1");
    __asm__("shld r10, r11, cl");
    __asm__("bsr r12d, eax");
    *reinterpret_cast<uint16_t*>(&eax171) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax171) ^ *reinterpret_cast<uint16_t*>(&rcx152));
    __asm__("rcr r15w, 1");
    eax176 = eax171 * *reinterpret_cast<int32_t*>(&r14_172);
    *reinterpret_cast<int32_t*>(&rdx177) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx177) + 4) = 0;
    __asm__("rcr r13, 1");
    __asm__("rcr r13W, 1");
    *reinterpret_cast<unsigned char*>(&r13_168) = 1;
    cf178 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rcx152) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax176))));
    *reinterpret_cast<uint16_t*>(&rcx152) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx152) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax176) + cf178));
    if (*reinterpret_cast<int16_t*>(&rcx152) < reinterpret_cast<int16_t>(static_cast<uint32_t>(cf178))) {
        rdi143 = rcx152;
    }
    *reinterpret_cast<unsigned char*>(&rdi143) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi143) - 0x65) + cf178);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx166) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx166) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx166) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx166) + 1) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx166) + 1) + 1))));
    r8d179 = 0x1aff515b;
    r10_180 = r10_173 | r9_169;
    __asm__("rcr dil, 1");
    __asm__("rcr r14b, 1");
    if (0) {
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx177) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx177) + 1) ^ *reinterpret_cast<unsigned char*>(&rbx166));
    rdx181 = rdx177 >> 1;
    *reinterpret_cast<int32_t*>(&rax182) = *reinterpret_cast<int16_t*>(&eax176);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax182) + 4) = 0;
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r11_147) = 0x515b;
    }
    __asm__("btc r13W, ax");
    *reinterpret_cast<unsigned char*>(&r8d179) = reinterpret_cast<unsigned char>(91 ^ *reinterpret_cast<unsigned char*>(&ebp157));
    __asm__("ror r8w, 0xc7");
    *reinterpret_cast<uint16_t*>(&r13_168) = -*reinterpret_cast<uint16_t*>(&r13_168);
    r13d183 = *reinterpret_cast<uint32_t*>(&r13_168) - (0x3392360a - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r13_168) < 0xcc6dc9f7));
    ax184 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax182) - reinterpret_cast<uint16_t>(0x7701 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rax182) < 0x88ff)));
    rbx185 = rbx166 << 1;
    tmp16_186 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8d179) + 0x704) + __intrinsic());
    r12d187 = r12d175 - 0x3eb33905 + reinterpret_cast<uint1_t>(tmp16_186 < *reinterpret_cast<uint16_t*>(&r8d179));
    __asm__("bts r14, r14");
    __asm__("rcr bh, 1");
    if (*reinterpret_cast<unsigned char*>(&r11_147) == *reinterpret_cast<unsigned char*>(&r11_147)) {
        *reinterpret_cast<unsigned char*>(&r11_147) = *reinterpret_cast<unsigned char*>(&r11_147);
    }
    __asm__("xadd dh, cl");
    __asm__("lahf ");
    *reinterpret_cast<int32_t*>(&rcx188) = *reinterpret_cast<signed char*>(&rdx181);
    __asm__("ror rbp, 0x62");
    __asm__("shrd rdx, r9, 0x2b");
    __asm__("bts cx, 0xd5");
    r9w189 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r9_169) << *reinterpret_cast<unsigned char*>(&rcx188));
    if (0) {
        ebp157 = r13d183;
    }
    __asm__("btc rcx, 0x77");
    __asm__("rcl r11, 1");
    __asm__("rol r14w, 1");
    __asm__("shrd r14d, edx, 0x8e");
    __asm__("shld rsi, rax, 0xf4");
    rdx190 = *reinterpret_cast<unsigned char*>(&r11_147);
    if (*reinterpret_cast<signed char*>(&r9w189) << *reinterpret_cast<unsigned char*>(&rcx188) == *reinterpret_cast<signed char*>(&rdx190)) {
    }
    *reinterpret_cast<uint16_t*>(&rax182) = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax184) * *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax184) + 1)) * *reinterpret_cast<uint16_t*>(&r13d183));
    *reinterpret_cast<uint32_t*>(&r14_191) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_191) + 4) = 0;
    __asm__("shrd ecx, r13d, 0xa");
    __asm__("btc rsi, rax");
    *reinterpret_cast<uint16_t*>(&r11_147) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_147) - tmp16_186);
    __asm__("rcr r11d, 1");
    __asm__("rol si, cl");
    if (*reinterpret_cast<unsigned char*>(&rsi142) == *reinterpret_cast<unsigned char*>(&ebp157)) {
        *reinterpret_cast<unsigned char*>(&rsi142) = *reinterpret_cast<unsigned char*>(&ebp157);
    }
    r11_192 = r11_147 | 0xc000000000000000;
    r8_193 = 0x3fffffffffffffff;
    rdx194 = rax182 % r11_192;
    rax195 = rax182 / r11_192;
    __asm__("shrd r13d, r10d, 0x1");
    __asm__("ror di, 0x96");
    *reinterpret_cast<uint16_t*>(&r10_180) = reinterpret_cast<uint16_t>(-*reinterpret_cast<uint16_t*>(&r10_180) | *reinterpret_cast<uint16_t*>(&rsi142));
    __asm__("btr r11w, 0xde");
    __asm__("btr r11d, esi");
    if (1) {
        *reinterpret_cast<int16_t*>(&rbx185) = *reinterpret_cast<int16_t*>(&rbx185);
    }
    if (0) {
        *reinterpret_cast<uint32_t*>(&r14_191) = *reinterpret_cast<uint32_t*>(&r10_180);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_191) + 4) = 0;
    }
    *reinterpret_cast<uint32_t*>(&r13_196) = r13d183 & 0xffff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_196) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r14_191) = reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&r12d187) != 0xa088);
    r9_197 = *reinterpret_cast<uint32_t*>(&rax195);
    __asm__("cwd ");
    __asm__("shrd r11, r8, 0x87");
    *reinterpret_cast<int32_t*>(&rdx198) = *reinterpret_cast<int32_t*>(&rdx194) << 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx198) + 4) = 0;
    __asm__("rcl r13W, 1");
    *reinterpret_cast<uint32_t*>(&r11_199) = reinterpret_cast<uint32_t>(~*reinterpret_cast<int32_t*>(&r11_192));
    rbx200 = rbx185 - 0x3669410a + __intrinsic();
    less_or_equal201 = *reinterpret_cast<signed char*>(&rbx200) <= reinterpret_cast<signed char>(0);
    *reinterpret_cast<unsigned char*>(&rbx200) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx200) - reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rbx200) < 0))));
    if (less_or_equal201) {
        r14_191 = r9_197;
    }
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r8_193) = *reinterpret_cast<int16_t*>(&r9_197);
    }
    r9_202 = r9_197 & 0xffffffffd00be798;
    *reinterpret_cast<unsigned char*>(&rdx198) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx198) + 95)));
    __asm__("shld r11d, r12d, cl");
    __asm__("bsf ebp, ebp");
    __asm__("shld r12, r14, 0x71");
    *reinterpret_cast<uint16_t*>(&ebp157) = 0xe3d7;
    __asm__("shrd r9, rdi, 0xc3");
    if (0) {
        r8_193 = rdx198;
    }
    *reinterpret_cast<uint32_t*>(&rax203) = *reinterpret_cast<uint16_t*>(&r14_191);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax203) + 4) = 0;
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&ebp157) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_202) >> -1);
    }
    __asm__("rcr r8d, cl");
    __asm__("shrd r15w, cx, 0xb");
    *reinterpret_cast<uint16_t*>(&rbx200) = reinterpret_cast<uint16_t>(-*reinterpret_cast<uint16_t*>(&rbx200) >> 59);
    __asm__("xadd rax, r9");
    if (!__intrinsic()) {
        rax203 = r14_191;
    }
    *reinterpret_cast<int16_t*>(&rax203) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax203) * *reinterpret_cast<int16_t*>(&r8_193));
    __asm__("ror rbp, cl");
    rbx204 = rbx200 | 0xc000000000000000;
    rdx205 = rax203 % rbx204;
    rax206 = rax203 / rbx204;
    *reinterpret_cast<int16_t*>(&rax206) = *reinterpret_cast<signed char*>(&rax206);
    __asm__("bts rbp, 0xb3");
    __asm__("rol r13, 1");
    *reinterpret_cast<uint16_t*>(&rbx204) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx204) ^ *reinterpret_cast<uint16_t*>(&r13_196)) + 0x3e35)));
    __asm__("shrd rax, r8, 0x23");
    r9d207 = -41;
    *reinterpret_cast<uint16_t*>(&rdi143) = reinterpret_cast<uint16_t>(-reinterpret_cast<int16_t>(~*reinterpret_cast<uint16_t*>(&rdi143)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx204) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx204) + 1) >> -1);
    *reinterpret_cast<unsigned char*>(&rdi143) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi143) ^ *reinterpret_cast<unsigned char*>(&rdx205));
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdi143) == 0)))) {
        *reinterpret_cast<uint32_t*>(&r11_199) = 0xffffe3d7;
    }
    __asm__("rcr dh, 0x89");
    __asm__("shld r11w, r8w, cl");
    __asm__("btc r8w, r9w");
    __asm__("ror r11w, 0xdf");
    r10d208 = *reinterpret_cast<int32_t*>(&r10_180) >> -6;
    __asm__("bts r13d, r15d");
    __asm__("bts r8, rcx");
    *reinterpret_cast<uint32_t*>(&r14_209) = *reinterpret_cast<uint32_t*>(&r14_191) ^ 0xffff1c28;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_209) + 4) = 0;
    __asm__("cwd ");
    *reinterpret_cast<int32_t*>(&r15_210) = static_cast<int32_t>(rbx204 + r13_196 * 4) - 0x1d5e1e25;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_210) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r13_211) = *reinterpret_cast<uint32_t*>(&r13_196) ^ *reinterpret_cast<uint32_t*>(&rdi143);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_211) + 4) = 0;
    if (__intrinsic()) {
    }
    __asm__("ror r12d, 0xfa");
    edi212 = *reinterpret_cast<uint32_t*>(&rdi143) * 0xdf113cd;
    r12_213 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(0xffffffff - (r14_209 + reinterpret_cast<uint1_t>(0xffffffff < r14_209 + 1))) >> 15);
    __asm__("shld bx, r10w, 0x2");
    __asm__("btc r11d, ebx");
    eax214 = *reinterpret_cast<int32_t*>(&rax206) * *reinterpret_cast<uint32_t*>(&rdx205);
    edx215 = __intrinsic();
    *reinterpret_cast<unsigned char*>(&eax214) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax214) ^ 9);
    ebp216 = reinterpret_cast<int32_t>(~ebp157) + edx215 + 1;
    *reinterpret_cast<unsigned char*>(&r9d207) = reinterpret_cast<unsigned char>(0xd7 - reinterpret_cast<unsigned char>(0x76 - reinterpret_cast<uint1_t>(0xd7 < reinterpret_cast<unsigned char>(0x76 - static_cast<uint1_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx215) >> reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r10d208) >> -26)))))));
    cf217 = reinterpret_cast<uint1_t>(eax214 < *reinterpret_cast<uint32_t*>(&r13_211));
    below_or_equal218 = reinterpret_cast<uint1_t>(eax214 <= *reinterpret_cast<uint32_t*>(&r13_211) + cf217);
    eax219 = eax214 - (*reinterpret_cast<uint32_t*>(&r13_211) + cf217);
    *reinterpret_cast<int16_t*>(&r13_211) = *reinterpret_cast<int16_t*>(&eax219);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx204) + 1) = below_or_equal218;
    *reinterpret_cast<int32_t*>(&r9_220) = ~r9d207;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_220) + 4) = 0;
    tmp16_221 = *reinterpret_cast<uint16_t*>(&r11_199);
    *reinterpret_cast<uint16_t*>(&r11_199) = 0xf795;
    cx222 = tmp16_221;
    __asm__("bts bx, r11w");
    r12w223 = *reinterpret_cast<int16_t*>(&eax219);
    *reinterpret_cast<int16_t*>(&eax219) = *reinterpret_cast<int16_t*>(&r12_213);
    *reinterpret_cast<signed char*>(&r13_211) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r13_211) + 51);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax219) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax219) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&cx222) + 1)) + 1);
    __asm__("rcr bl, 0x71");
    __asm__("shld bp, di, 0x0");
    __asm__("rol edx, 1");
    __asm__("rcr dh, cl");
    r13_224 = r13_211 | 0x2c035e0ddffa0e74;
    __asm__("rcr r12d, 0x94");
    __asm__("btc r8w, 0xaa");
    if (1) {
        *reinterpret_cast<int16_t*>(&r9_220) = *reinterpret_cast<int16_t*>(&r9_220);
    }
    *reinterpret_cast<unsigned char*>(&cx222) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&cx222) - *reinterpret_cast<signed char*>(&rbx204)) & 15);
    __asm__("shrd bp, r14w, cl");
    r9_225 = r9_220 - (0x64794450 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(r9_220 < 0xffffffff9b86bbb1)));
    *reinterpret_cast<uint16_t*>(&rcx226) = reinterpret_cast<uint16_t>(cx222 >> *reinterpret_cast<unsigned char*>(&cx222));
    *reinterpret_cast<uint32_t*>(&rdi227) = edi212 - (ebp216 + reinterpret_cast<uint1_t>(edi212 < ebp216)) | 0xc0000000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi227) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rdx228) = eax219 % *reinterpret_cast<uint32_t*>(&rdi227);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx228) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rax229) = eax219 / *reinterpret_cast<uint32_t*>(&rdi227);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax229) + 4) = 0;
    if (*reinterpret_cast<uint16_t*>(&rcx226) == *reinterpret_cast<uint16_t*>(&r14_209)) {
        tmp16_230 = *reinterpret_cast<uint16_t*>(&rcx226);
        *reinterpret_cast<uint16_t*>(&r14_209) = tmp16_230;
    }
    less_or_equal231 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&rdi227) <= reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&r12w223) + __intrinsic()));
    *reinterpret_cast<unsigned char*>(&rdi227) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi227) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12w223) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdi227) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12w223) + __intrinsic()))));
    *reinterpret_cast<unsigned char*>(&r12w223) = less_or_equal231;
    *reinterpret_cast<unsigned char*>(&rax229) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax229) + *reinterpret_cast<unsigned char*>(&r13_224)) + 1);
    *reinterpret_cast<unsigned char*>(&r13_224) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_224) + *reinterpret_cast<signed char*>(&rbx204)) + 1);
    r11d232 = *reinterpret_cast<uint32_t*>(&r11_199) | *reinterpret_cast<uint32_t*>(&r9_225);
    __asm__("rcl edx, 0x7");
    r13_233 = r13_224 - (rax229 + reinterpret_cast<uint1_t>(r13_224 < rax229));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax229) + 1) = __intrinsic();
    *reinterpret_cast<uint32_t*>(&r10_234) = 0x801717fc;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_234) + 4) = 0;
    *reinterpret_cast<int16_t*>(&r12_213) = *reinterpret_cast<int16_t*>(&rdi227);
    *reinterpret_cast<int16_t*>(&rdi227) = r12w223;
    rax235 = rax229 ^ (rdx228 - (0x35b160d9 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(rdx228 < 0xffffffffca4e9f27))) | 0xffffffff9ab22a86);
    if (__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rax235) = *reinterpret_cast<int32_t*>(&r12_213);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax235) + 4) = 0;
    }
    __asm__("rol ax, 1");
    *reinterpret_cast<uint32_t*>(&rbp236) = ebp216 >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp236) + 4) = 0;
    __asm__("rcl r14w, 0x4e");
    __asm__("rol r15w, 1");
    rax237 = rax235 * r15_210 * 0x3fffffffffff5bfb;
    cf238 = reinterpret_cast<uint1_t>(__intrinsic() < 0xa31e58 + static_cast<uint64_t>(__intrinsic()));
    rdx239 = __intrinsic() - (0xa31e58 + static_cast<uint64_t>(cf238));
    if (reinterpret_cast<int64_t>(rdx239) >= reinterpret_cast<int64_t>(static_cast<uint64_t>(cf238))) {
        *reinterpret_cast<uint32_t*>(&r10_234) = *reinterpret_cast<uint32_t*>(&rbp236);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_234) + 4) = 0;
    }
    *reinterpret_cast<uint16_t*>(&r10_234) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_234) + *reinterpret_cast<int16_t*>(&r12_213)) + cf238);
    *reinterpret_cast<int32_t*>(&rdx240) = *reinterpret_cast<int32_t*>(&rdx239) - 0x39ce552a;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx240) + 4) = 0;
    __asm__("rcl rax, 1");
    rdx241 = rdx240 + 1;
    less_or_equal242 = reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&rax237) <= reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r15_210) + 1));
    *reinterpret_cast<uint16_t*>(&rax237) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax237) - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r15_210) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rax237) < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r15_210) + 1))));
    *reinterpret_cast<unsigned char*>(&r11d232) = less_or_equal242;
    *reinterpret_cast<int32_t*>(&r11_243) = reinterpret_cast<int32_t>(-r11d232);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_243) + 4) = 0;
    if (0) {
        *reinterpret_cast<uint16_t*>(&rax237) = *reinterpret_cast<uint16_t*>(&rbp236);
    }
    __asm__("ror r12d, 0xa4");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx241) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx241) + 1) - 1);
    *reinterpret_cast<signed char*>(&r13_233) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&r13_233));
    __asm__("bsr si, dx");
    *reinterpret_cast<uint16_t*>(&rbp236) = -*reinterpret_cast<uint16_t*>(&rbp236);
    if (reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rbp236) == 0)) {
        *reinterpret_cast<int32_t*>(&rdx241) = *reinterpret_cast<int32_t*>(&r11_243);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx241) + 4) = 0;
    }
    return rax237 + rbx204 + rdx241 + rbp236 + (rdi227 | 0x4a9ed2b7) + 0x3fffffffffff5bfb + r9_225 + r10_234 + r11_243 + r12_213 + r13_233 + r14_209 + r15_210 + 0x3df168a56bd48c65;
}

uint64_t log_size_10_var_002(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbp7;
    int64_t r13_8;
    uint64_t r14_9;
    uint64_t r15_10;
    uint64_t rcx11;
    int64_t rdi12;
    int64_t rbx13;
    uint64_t r14_14;
    int64_t r8_15;
    int64_t rdx16;
    int64_t r8_17;
    int64_t r11_18;
    uint32_t tmp32_19;
    int64_t rbx20;
    int64_t r11_21;
    int64_t rax22;
    uint64_t r15_23;
    uint64_t r8_24;
    uint64_t rax25;
    uint16_t r11w26;
    unsigned char tmp8_27;
    uint1_t cf28;
    uint64_t r14_29;
    uint16_t ax30;
    uint16_t ax31;
    uint64_t r12_32;
    uint16_t ax33;
    uint16_t dx34;
    int64_t rax35;
    uint64_t r13_36;
    uint64_t r8_37;
    uint64_t r15_38;
    int64_t r8_39;
    uint64_t rdi40;
    uint32_t ecx41;
    int32_t r12d42;
    uint32_t ecx43;
    int64_t r13_44;
    uint64_t rbp45;
    uint64_t r13_46;
    uint16_t tmp16_47;
    uint32_t tmp32_48;
    int64_t r12_49;
    int64_t r10_50;
    int64_t rsi51;
    int64_t r11_52;
    int64_t rcx53;
    uint64_t rbx54;
    int64_t r15_55;
    int64_t rbp56;
    uint32_t r11d57;
    uint64_t r10_58;
    int64_t r11_59;
    int64_t rcx60;
    uint64_t rbx61;
    uint64_t rdi62;
    uint64_t rbp63;
    uint1_t zf64;
    int32_t tmp32_65;
    uint64_t r12_66;
    uint64_t r9_67;
    uint64_t rcx68;
    uint64_t r9_69;
    uint64_t r13_70;
    uint64_t rdx71;
    uint64_t rax72;
    int64_t r12_73;
    unsigned char al74;
    int64_t r8_75;
    uint64_t r15_76;
    int64_t r11_77;
    uint64_t tmp64_78;
    uint64_t tmp64_79;
    uint64_t rcx80;
    int64_t r12_81;
    uint64_t rsi82;
    uint64_t r11_83;
    uint16_t ax84;
    uint16_t dx85;
    uint64_t r8_86;
    int64_t r10_87;
    uint32_t eax88;
    int64_t rax89;
    int64_t r13_90;
    uint64_t rcx91;
    uint64_t r13_92;
    int64_t rax93;
    uint64_t r11_94;
    uint32_t edx95;
    int64_t rax96;
    uint16_t ax97;
    uint64_t r11_98;
    uint64_t tmp64_99;
    uint64_t r15_100;
    uint64_t rdi101;
    uint64_t rbp102;
    int16_t dx103;
    int64_t rbx104;
    unsigned char tmp8_105;
    uint1_t cf106;
    uint16_t tmp16_107;
    uint1_t cf108;
    int16_t bx109;
    int64_t rax110;
    int64_t r13_111;
    uint16_t ax112;
    uint64_t r10_113;
    uint32_t r14d114;
    int64_t rcx115;
    uint64_t rdx116;
    int32_t eax117;
    uint64_t r13_118;
    int64_t r12_119;
    uint16_t ax120;
    uint16_t tmp16_121;
    uint1_t cf122;
    uint64_t rbx123;
    uint64_t rax124;
    uint64_t rdx125;
    uint16_t ax126;
    uint64_t rcx127;
    uint64_t r12_128;
    uint64_t rax129;
    uint64_t r14_130;
    uint64_t r9_131;
    uint64_t r15_132;
    uint64_t rdi133;
    uint16_t r11w134;
    uint64_t rsi135;
    int64_t rax136;
    uint64_t r11_137;
    uint64_t rax138;
    uint64_t r15_139;
    int32_t eax140;
    uint64_t tmp64_141;
    uint64_t r8_142;
    uint1_t less_or_equal143;
    uint16_t ax144;
    uint64_t rcx145;
    uint32_t ebp146;
    int64_t rax147;
    int64_t rdx148;
    uint64_t r13_149;
    int64_t rax150;
    uint64_t r14_151;
    int64_t r9_152;
    int64_t r15_153;
    uint32_t ebp154;
    uint64_t r10_155;
    uint64_t r13_156;
    int64_t rbp157;
    uint64_t r11_158;
    int64_t rax159;
    uint32_t esi160;
    uint16_t bx161;
    uint64_t rcx162;
    uint64_t r14_163;
    int64_t rsi164;
    uint16_t si165;
    int16_t tmp16_166;
    uint16_t ax167;
    uint16_t tmp16_168;
    uint64_t rbx169;
    uint64_t r12_170;
    unsigned char bh171;
    int64_t r13_172;
    uint64_t r13_173;
    uint64_t r9_174;
    int64_t r11_175;
    int64_t rdx176;
    int64_t r11_177;
    int16_t tmp16_178;
    uint64_t r14_179;
    uint64_t rcx180;
    uint64_t r14_181;
    uint32_t ebx182;
    uint64_t r12_183;
    uint64_t r10_184;
    int64_t rsi185;
    int64_t rdx186;
    uint64_t r15_187;
    uint64_t r10_188;
    uint64_t r10_189;
    int64_t rcx190;
    uint1_t cf191;
    uint64_t tmp64_192;
    uint64_t r9_193;
    uint64_t rcx194;
    int16_t bx195;
    uint64_t r11_196;
    int64_t rbx197;
    uint64_t rdi198;
    int64_t rbx199;
    uint16_t si200;
    uint1_t cf201;
    uint64_t r9_202;
    uint64_t rdx203;
    uint64_t r12_204;
    int64_t rsi205;
    int64_t rbp206;
    uint16_t r10w207;
    uint64_t rdx208;
    unsigned char cl209;
    uint1_t cf210;
    int64_t rax211;
    uint64_t r8_212;
    uint32_t r15d213;
    int64_t rbx214;
    uint64_t rcx215;
    uint16_t ax216;
    int32_t ebp217;
    int64_t rdx218;
    int64_t r13_219;
    uint64_t r14_220;
    uint32_t ecx221;
    int64_t r9_222;
    uint16_t bx223;
    uint64_t r12_224;
    uint16_t cx225;
    int16_t ax226;
    int16_t ax227;
    uint64_t r15_228;
    uint32_t ecx229;
    uint1_t cf230;
    int64_t rbp231;
    int64_t rax232;
    int64_t rcx233;
    uint64_t r14_234;
    uint64_t rax235;
    uint64_t r9_236;
    uint64_t tmp64_237;
    uint64_t tmp64_238;

    rbp7 = 0xb918bb32bdbd7898;
    r13_8 = 0x6fb4c6bd70692a0b;
    r14_9 = 0x1d4bd489092bb937;
    r15_10 = 0xc64f73dbd07fe5d8;
    __asm__("bsr cx, dx");
    if (__intrinsic()) {
    }
    __asm__("xadd rcx, rdx");
    __asm__("shrd edi, eax, cl");
    __asm__("btc r9w, r8w");
    __asm__("rcr di, 1");
    __asm__("rcr r8, 0xc4");
    __asm__("shld bx, r13W, cl");
    rcx11 = 0xe4a75a9129fcd23f;
    rdi12 = 0x7c7bb007bb764f7e;
    __asm__("cdq ");
    __asm__("rcl r14d, 1");
    __asm__("bsf bp, r12w");
    __asm__("shld r15, r14, 0x1");
    __asm__("shld rsi, rbp, cl");
    __asm__("bsf edx, edi");
    __asm__("btc r14d, 0x60");
    __asm__("rcl r11w, 1");
    *reinterpret_cast<int32_t*>(&rbx13) = 0x5f1825ff;
    if (0) {
        r14_9 = 0x3da8d7d5ad50dd86;
    }
    __asm__("rcr r11, 0xb8");
    __asm__("rol r13, 0x6e");
    *reinterpret_cast<unsigned char*>(&rbx13) = reinterpret_cast<unsigned char>(0xff >> 0x7a);
    r14_14 = r14_9 | 0xc000000000000000;
    r8_15 = 0x3fffffffffffffff;
    if (0) {
        *reinterpret_cast<uint32_t*>(&rbp7) = 0xffffffff;
        *reinterpret_cast<uint32_t*>(&r8_15) = 0xbdbd7898;
    }
    if (__intrinsic() != __intrinsic()) {
        *reinterpret_cast<int16_t*>(&r8_15) = *reinterpret_cast<int16_t*>(&r14_14);
    }
    __asm__("xadd r12b, dil");
    if (0) {
    }
    __asm__("btc si, 0xcb");
    __asm__("rcr sil, 0x48");
    *reinterpret_cast<int16_t*>(&r15_10) = -0xe5d8;
    __asm__("rcl si, 1");
    __asm__("bts r14, rbp");
    __asm__("rol r14, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx13) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx13) + 1) >> 63);
    __asm__("shrd bp, bx, cl");
    __asm__("ror edi, cl");
    *reinterpret_cast<int16_t*>(&rcx11) = *reinterpret_cast<int16_t*>(&rbx13);
    __asm__("rcl r11w, 1");
    __asm__("rol r8w, cl");
    *reinterpret_cast<uint32_t*>(&rdx16) = __intrinsic() | 0x56305fe1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = 0;
    __asm__("ror rdi, 1");
    *reinterpret_cast<unsigned char*>(&rcx11) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx11) & 15);
    __asm__("shrd r14w, dx, cl");
    *reinterpret_cast<int16_t*>(&rdi12) = static_cast<int16_t>(*reinterpret_cast<uint32_t*>(&rbp7) + *reinterpret_cast<uint32_t*>(&r8_15) * 4 + 23);
    *reinterpret_cast<uint32_t*>(&r8_17) = *reinterpret_cast<uint32_t*>(&r8_15) | 0xa4077144;
    __asm__("rol r9w, 0x47");
    r11_18 = 0xfe987a6bd5559360;
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r11_18) = *reinterpret_cast<int16_t*>(&r15_10);
    }
    __asm__("btc rbp, 0x2a");
    *reinterpret_cast<signed char*>(&r15_10) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r15_10) + 1);
    __asm__("shld r15, rdi, cl");
    if (0) {
        tmp32_19 = *reinterpret_cast<uint32_t*>(&r11_18);
        *reinterpret_cast<uint32_t*>(&r11_18) = *reinterpret_cast<uint32_t*>(&rbp7);
        *reinterpret_cast<uint32_t*>(&rbp7) = tmp32_19;
    }
    if (0) {
    }
    *reinterpret_cast<uint32_t*>(&rbx20) = *reinterpret_cast<uint32_t*>(&r8_17) * 0x78f54c3c;
    *reinterpret_cast<uint32_t*>(&r11_21) = *reinterpret_cast<uint32_t*>(&r11_18) * 0x3cfdaef8;
    rax22 = 0;
    r15_23 = r15_10 << *reinterpret_cast<unsigned char*>(&rcx11);
    __asm__("xadd dl, ch");
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&rax22) = 0xd0e5;
    }
    *reinterpret_cast<uint32_t*>(&r8_24) = *reinterpret_cast<uint32_t*>(&r8_17) + *reinterpret_cast<int32_t*>(&rcx11);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_24) + 4) = 0;
    rax25 = reinterpret_cast<uint64_t>(rax22 + 0x5c85e3be);
    __asm__("ror ebp, cl");
    r11w26 = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r11_21) + *reinterpret_cast<uint16_t*>(&rax25));
    *reinterpret_cast<unsigned char*>(&rcx11) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx11) | *reinterpret_cast<unsigned char*>(&rax25));
    __asm__("rcl r15d, 1");
    __asm__("shrd r11, r12, cl");
    __asm__("bts ebx, r8d");
    tmp8_27 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx11) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax25) + 1)) + 1);
    cf28 = reinterpret_cast<uint1_t>(tmp8_27 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx11) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx11) + 1) = tmp8_27;
    *reinterpret_cast<unsigned char*>(&r13_8) = reinterpret_cast<unsigned char>(5 - reinterpret_cast<unsigned char>(27 - reinterpret_cast<uint1_t>(5 < reinterpret_cast<unsigned char>(27 - cf28))));
    __asm__("rcl r14d, 1");
    __asm__("ror r14b, 1");
    __asm__("rcl r14d, 1");
    r14_29 = 0;
    __asm__("bts r12, 0x15");
    *reinterpret_cast<uint16_t*>(&r13_8) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_8) - reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r13_8) < 1))));
    __asm__("rcr di, 1");
    __asm__("bsf eax, r8d");
    *reinterpret_cast<unsigned char*>(&rax25) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax25) | 0xc0);
    ax30 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax25) & 0x3fff);
    ax31 = reinterpret_cast<uint16_t>(ax30 / static_cast<int16_t>(*reinterpret_cast<signed char*>(&ax30)));
    *reinterpret_cast<uint16_t*>(&rbp7) = static_cast<uint16_t>(r13_8 + 0x342ad41e);
    *reinterpret_cast<signed char*>(&rbp7) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&rbp7));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax31) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax31) + 1) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx20) + 1));
    __asm__("rcl r12, 1");
    __asm__("rcr dh, 1");
    r12_32 = rcx11 + rdi12 * 4 - 0x7ba442ec;
    *reinterpret_cast<signed char*>(&rdi12) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&rdi12));
    __asm__("bts r9, r12");
    *reinterpret_cast<unsigned char*>(&rcx11) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx11) | 0xc0);
    ax33 = reinterpret_cast<uint16_t>(ax31 & 0x3fff);
    *reinterpret_cast<uint16_t*>(&rax25) = reinterpret_cast<uint16_t>(ax33 / static_cast<int16_t>(*reinterpret_cast<signed char*>(&rcx11)));
    __asm__("btr r8d, 0xd8");
    *reinterpret_cast<int16_t*>(&r12_32) = 2;
    dx34 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(ax33 % static_cast<int16_t>(*reinterpret_cast<signed char*>(&rcx11))) + 0x1119);
    *reinterpret_cast<uint16_t*>(&rbx20) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx20) + *reinterpret_cast<int16_t*>(&rdi12)) + 1);
    *reinterpret_cast<unsigned char*>(&rax25) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax25) + *reinterpret_cast<unsigned char*>(&rcx11));
    rax35 = *reinterpret_cast<int32_t*>(&rax25);
    __asm__("btr r10, 0x63");
    *reinterpret_cast<uint32_t*>(&r13_36) = *reinterpret_cast<uint32_t*>(&r13_8) >> *reinterpret_cast<unsigned char*>(&rcx11);
    __asm__("rol rbp, 0x68");
    r8_37 = r8_24 | 0xffffffffbec55c26;
    if (r11w26 < *reinterpret_cast<uint16_t*>(&rbp7)) {
        r13_36 = r12_32;
    }
    r15_38 = r15_23 >> -29;
    *reinterpret_cast<uint32_t*>(&r8_39) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r8_37) * 0x1d8a30a8);
    __asm__("rcr r10d, 1");
    __asm__("rcr r10d, 1");
    *reinterpret_cast<int32_t*>(&rdi40) = 0x39c9ce;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40) + 4) = 0;
    __asm__("shld edi, r15d, 0x4a");
    __asm__("btc si, r12w");
    ecx41 = *reinterpret_cast<unsigned char*>(&dx34);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx41) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx41) + 1) << 1);
    __asm__("ror bx, 0x8a");
    __asm__("rol bh, cl");
    r12d42 = 0xdd5fcc7b;
    __asm__("ror edi, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx41) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx41) + 1) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx20) + 1))));
    __asm__("shrd rbx, rax, cl");
    __asm__("lahf ");
    __asm__("rcl r12b, 0x2f");
    *reinterpret_cast<int16_t*>(&ecx41) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ecx41) << *reinterpret_cast<unsigned char*>(&ecx41));
    ecx43 = ecx41 - (*reinterpret_cast<uint32_t*>(&rax35) + reinterpret_cast<uint1_t>(ecx41 < *reinterpret_cast<uint32_t*>(&rax35)));
    *reinterpret_cast<uint32_t*>(&r13_44) = *reinterpret_cast<uint32_t*>(&r13_36) << *reinterpret_cast<unsigned char*>(&ecx43);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_44) + 4) = 0;
    __asm__("btr r12, 0x86");
    *reinterpret_cast<uint32_t*>(&rbp45) = *reinterpret_cast<uint32_t*>(&rbp7) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp45) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r14_29) = 0xb0;
    r13_46 = reinterpret_cast<uint64_t>(r13_44 * 0x18ca7fe1);
    __asm__("ror r10d, 0xc5");
    __asm__("btc r8, 0x40");
    __asm__("btr r10, r12");
    __asm__("shrd r13W, r9w, cl");
    tmp16_47 = *reinterpret_cast<uint16_t*>(&r13_46);
    *reinterpret_cast<uint16_t*>(&r13_46) = 0xcc7b;
    *reinterpret_cast<uint16_t*>(&r12d42) = tmp16_47;
    *reinterpret_cast<uint16_t*>(&r8_39) = 0xcc7b;
    __asm__("ror r11w, cl");
    *reinterpret_cast<int16_t*>(&rdx16) = 0;
    __asm__("rcl r8d, 1");
    *reinterpret_cast<uint16_t*>(&rdi40) = reinterpret_cast<uint16_t>(0xc9e7 - reinterpret_cast<uint16_t>(0x1f7a + reinterpret_cast<uint1_t>(0xc9e7 < reinterpret_cast<uint16_t>(0x1f7a + reinterpret_cast<uint1_t>(0xb0 < rbp45)))));
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r8_39) = *reinterpret_cast<uint32_t*>(&rdx16);
    }
    __asm__("rcr rax, 1");
    if (*reinterpret_cast<uint32_t*>(&r8_39) == *reinterpret_cast<uint32_t*>(&r13_46)) {
        tmp32_48 = *reinterpret_cast<uint32_t*>(&r8_39);
        *reinterpret_cast<uint32_t*>(&r13_46) = tmp32_48;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_46) + 4) = 0;
    }
    *reinterpret_cast<int32_t*>(&r12_49) = ~r12d42;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_49) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r10_50) = 0x88ed9c69;
    rsi51 = 0;
    __asm__("xadd cl, ah");
    *reinterpret_cast<unsigned char*>(&ecx43) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx43) & 15) & 15);
    __asm__("shrd r15w, r8w, cl");
    __asm__("bts eax, r14d");
    if (1) {
        *reinterpret_cast<uint32_t*>(&rdx16) = 0xff50;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = 0;
    }
    *reinterpret_cast<uint16_t*>(&ecx43) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx43) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_46) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&ecx43) < reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_46) + 1))));
    r11_52 = rdx16 * 0xffffffff9e01597b;
    __asm__("rol r13b, 1");
    *reinterpret_cast<uint32_t*>(&rcx53) = ecx43 + *reinterpret_cast<int32_t*>(&rdi40) * 8 - 0x74e6966f;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx53) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rbp45) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp45) >> -38);
    *reinterpret_cast<int32_t*>(&rbx54) = 0x25b45dc0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx54) + 4) = 0;
    __asm__("btr ecx, ecx");
    *reinterpret_cast<int32_t*>(&r15_55) = *reinterpret_cast<int32_t*>(&r15_38) << 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_55) + 4) = 0;
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&r10_50) = -1;
    }
    *reinterpret_cast<int32_t*>(&rbp56) = reinterpret_cast<int32_t>(~*reinterpret_cast<uint32_t*>(&rbp45));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp56) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rcx53) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx53) & 15);
    __asm__("shrd r8w, ax, cl");
    if (1) {
        r10_50 = r15_55;
    }
    __asm__("rcl rdx, cl");
    r11d57 = *reinterpret_cast<uint32_t*>(&r11_52) >> *reinterpret_cast<unsigned char*>(&rcx53);
    __asm__("bts r15w, r13W");
    __asm__("ror ax, cl");
    __asm__("bsf r15d, ebp");
    *reinterpret_cast<signed char*>(&r11d57) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r11d57) << 1);
    *reinterpret_cast<uint32_t*>(&r10_58) = *reinterpret_cast<int32_t*>(&r10_50) - *reinterpret_cast<uint32_t*>(&rcx53);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_58) + 4) = 0;
    __asm__("rcl r14d, cl");
    __asm__("shld rcx, r12, cl");
    *reinterpret_cast<uint32_t*>(&r11_59) = r11d57 | 0x67252a3;
    if (1) {
        *reinterpret_cast<uint16_t*>(&rcx53) = 0xffff;
    }
    *reinterpret_cast<uint16_t*>(&rcx53) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx53) + 0x580d) + 1);
    if (__intrinsic()) {
        r15_55 = 0;
    }
    __asm__("btr r13d, 0x5b");
    *reinterpret_cast<unsigned char*>(&rcx53) = -*reinterpret_cast<unsigned char*>(&rcx53);
    *reinterpret_cast<signed char*>(&rdi40) = 0x71;
    __asm__("btr edx, 0xac");
    rcx60 = rcx53 * 0xffffffffe1a940dc;
    *reinterpret_cast<int16_t*>(&rbx54) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rcx60) * 0x1656);
    *reinterpret_cast<unsigned char*>(&rcx60) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rcx60)));
    rbx61 = rbx54 | r10_58;
    if (0) {
        *reinterpret_cast<uint16_t*>(&r14_29) = *reinterpret_cast<uint16_t*>(&r13_46);
    }
    __asm__("rcl r11, 1");
    if (1) {
    }
    *reinterpret_cast<unsigned char*>(&r14_29) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_29) - reinterpret_cast<unsigned char>(0x67 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r14_29) < 0x99)));
    __asm__("rcr dh, 1");
    __asm__("rcl r12, 1");
    __asm__("btr rbx, 0xed");
    rdi62 = rdi40 & reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<signed char*>(&rbx61)));
    rbp63 = rbp56 + 0x6c2abb5b + 1;
    zf64 = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rcx60) == 0);
    if (zf64) {
        tmp32_65 = *reinterpret_cast<int32_t*>(&rcx60);
        *reinterpret_cast<int32_t*>(&rcx60) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx60) + 4) = 0;
        *reinterpret_cast<int32_t*>(&r15_55) = tmp32_65;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_55) + 4) = 0;
    }
    if (reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic()) | zf64) {
        *reinterpret_cast<uint32_t*>(&r11_59) = 0;
    }
    __asm__("shld r11d, ebx, cl");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx60) + 1) = reinterpret_cast<signed char>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx60) + 1)));
    __asm__("rcl edi, 1");
    r12_66 = r12_49 - r13_46 | rbx61;
    *reinterpret_cast<uint16_t*>(&r15_55) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_55) - 0x6a22)));
    r9_67 = 0xff - *reinterpret_cast<uint32_t*>(&r11_59) * 4;
    rcx68 = reinterpret_cast<uint64_t>(rcx60 + 0xff);
    *reinterpret_cast<int32_t*>(&r9_69) = *reinterpret_cast<int32_t*>(&r9_67) << *reinterpret_cast<unsigned char*>(&rcx68);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_69) + 4) = 0;
    *reinterpret_cast<int16_t*>(&r12_66) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r12_66) + 1);
    __asm__("rcl r14, 1");
    __asm__("bsf rbx, r9");
    __asm__("btr ecx, r11d");
    *reinterpret_cast<unsigned char*>(&rsi51) = reinterpret_cast<unsigned char>(-static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rdi62)));
    __asm__("rcr r14, cl");
    __asm__("rol dil, cl");
    *reinterpret_cast<int16_t*>(&rbp63) = static_cast<int16_t>(rcx68 + r9_69 * 2);
    *reinterpret_cast<uint16_t*>(&r14_29) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_29) & *reinterpret_cast<uint16_t*>(&rcx68));
    r13_70 = r13_46 | 0xc000000000000000;
    rdx71 = 0xfffffffe0000ff01 % r13_70;
    rax72 = 0xfffffffe0000ff01 / r13_70;
    __asm__("xadd al, r8b");
    *reinterpret_cast<uint32_t*>(&r12_73) = *reinterpret_cast<int32_t*>(&r12_66) + 0xa9816f5 + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_73) + 4) = 0;
    al74 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax72) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx71) + 1));
    __asm__("rcl rdx, 0xec");
    __asm__("btc r15, r13");
    __asm__("rcr si, 1");
    __asm__("rol dl, 0x43");
    __asm__("shrd bp, r11w, 0xb");
    __asm__("shld r10, rdi, 0x4d");
    *reinterpret_cast<uint16_t*>(&r9_69) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_69) | 0xab39);
    r8_75 = 0x3fffffffffffffff;
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&rdx71) = *reinterpret_cast<uint16_t*>(&r9_69);
    }
    r15_76 = reinterpret_cast<uint64_t>(r15_55 * 0x37eb4574);
    *reinterpret_cast<unsigned char*>(&rax72) = reinterpret_cast<unsigned char>(al74 >> 27);
    __asm__("btr r14d, 0x93");
    r11_77 = r12_73;
    tmp64_78 = (rcx68 & 0xffffffff) << 32 | (rcx68 & 0xffffffff00000000) >> 32;
    tmp64_79 = (tmp64_78 & 0xffff0000ffff) << 16 | (tmp64_78 & 0xffff0000ffff0000) >> 16;
    rcx80 = (tmp64_79 & 0xff00ff00ff00ff) << 8 | (tmp64_79 & 0xff00ff00ff00ff00) >> 8;
    __asm__("ror r9b, cl");
    *reinterpret_cast<int32_t*>(&r12_81) = 0xd877837d;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_81) + 4) = 0;
    rsi82 = reinterpret_cast<uint64_t>(rsi51 + 1);
    *reinterpret_cast<unsigned char*>(&rbp63) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp63) >> 0x80);
    *reinterpret_cast<uint16_t*>(&r8_75) = reinterpret_cast<uint16_t>(0xffff >> -18);
    *reinterpret_cast<uint32_t*>(&r11_83) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r11_77) >> *reinterpret_cast<unsigned char*>(&rcx80));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_83) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rdi62) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi62) >> *reinterpret_cast<unsigned char*>(&rcx80));
    __asm__("btr dx, 0xcf");
    ax84 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax72) & 0x3fff);
    dx85 = reinterpret_cast<uint16_t>(ax84 % static_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx71) + 1) | 0xc0)));
    *reinterpret_cast<uint16_t*>(&rax72) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(ax84 / static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&dx85) + 1))) * *reinterpret_cast<int16_t*>(&r15_76));
    *reinterpret_cast<uint16_t*>(&rdx71) = __intrinsic();
    *reinterpret_cast<uint16_t*>(&r11_83) = reinterpret_cast<uint16_t>(~reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_83) >> *reinterpret_cast<unsigned char*>(&rcx80)));
    __asm__("ror di, 1");
    *reinterpret_cast<unsigned char*>(&rcx80) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx80) & 15);
    __asm__("shld dx, r11w, cl");
    *reinterpret_cast<int32_t*>(&r8_86) = *reinterpret_cast<int32_t*>(&r8_75) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_86) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&r8_86) < 0) {
        *reinterpret_cast<int32_t*>(&rbp63) = *reinterpret_cast<int32_t*>(&r14_29);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp63) + 4) = 0;
    }
    *reinterpret_cast<unsigned char*>(&r14_29) = reinterpret_cast<uint1_t>(!__intrinsic());
    *reinterpret_cast<int16_t*>(&r15_76) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r15_76) - *reinterpret_cast<int16_t*>(&rdi62));
    __asm__("ror rsi, 0x9a");
    *reinterpret_cast<unsigned char*>(&r15_76) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_76) - 29);
    *reinterpret_cast<int16_t*>(&rsi82) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rsi82) * 0x5935);
    *reinterpret_cast<uint32_t*>(&r10_87) = reinterpret_cast<uint32_t>(0x10000 - *reinterpret_cast<int32_t*>(&rdx71));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_87) + 4) = 0;
    *reinterpret_cast<int16_t*>(&rdi62) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r15_76) * 0x3702);
    eax88 = *reinterpret_cast<uint32_t*>(&rax72) >> 24 | *reinterpret_cast<uint32_t*>(&rax72) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&rax72) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&rax72) << 24;
    if (__intrinsic()) {
        eax88 = *reinterpret_cast<uint32_t*>(&r11_83);
    }
    *reinterpret_cast<unsigned char*>(&rsi82) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi82) - reinterpret_cast<unsigned char>(71 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rsi82) < reinterpret_cast<unsigned char>(71 + __intrinsic()))));
    *reinterpret_cast<int32_t*>(&rax89) = *reinterpret_cast<int16_t*>(&eax88);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax89) + 4) = 0;
    __asm__("shrd di, r11w, 0x1");
    r13_90 = *reinterpret_cast<signed char*>(&rdx71);
    __asm__("rcr r9w, 0xeb");
    rcx91 = rcx80 - (0x2c83b7ff + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rcx80 < 0x2c83b7ff + static_cast<uint64_t>(static_cast<uint1_t>(rbp63 >> -100)))));
    __asm__("rcr r8w, 1");
    __asm__("rcl ah, 0xa3");
    __asm__("rol rbp, cl");
    *reinterpret_cast<signed char*>(&r9_69) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r9_69) >> *reinterpret_cast<signed char*>(&rcx91));
    *reinterpret_cast<unsigned char*>(&r15_76) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_76) >> 1);
    __asm__("rcr r8d, cl");
    __asm__("shld rcx, rcx, 0xf7");
    __asm__("btr r10, 0xe5");
    __asm__("rol cl, 0x61");
    __asm__("shrd esi, r15d, 0x1");
    __asm__("ror rcx, cl");
    *reinterpret_cast<unsigned char*>(&r11_83) = *reinterpret_cast<unsigned char*>(&r15_76);
    __asm__("rol cx, 0xaf");
    __asm__("rol dl, 0x5b");
    *reinterpret_cast<unsigned char*>(&r10_87) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_87) >> 1);
    r13_92 = r13_90 + rax89 + 1;
    __asm__("xadd dh, ah");
    rax93 = *reinterpret_cast<int32_t*>(&rax89);
    __asm__("xadd dl, sil");
    if (1) {
        *reinterpret_cast<int32_t*>(&r12_81) = *reinterpret_cast<int32_t*>(&rax93);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_81) + 4) = 0;
    }
    __asm__("shld r12d, r9d, 0x1");
    if (reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r13_92 & 0xffffffffef0cb4f5) < reinterpret_cast<int64_t>(0)) | reinterpret_cast<uint1_t>((r13_92 & 0xffffffffef0cb4f5) == 0)) {
        *reinterpret_cast<uint16_t*>(&r10_87) = *reinterpret_cast<uint16_t*>(&rcx91);
    }
    __asm__("rcl rsi, 1");
    if (0) {
        r13_92 = r14_29;
    }
    __asm__("shld ebx, esi, 0x1");
    *reinterpret_cast<signed char*>(&rax93) = *reinterpret_cast<signed char*>(&r12_81);
    __asm__("rcl bp, 0xcc");
    __asm__("btr rsi, rbx");
    r11_94 = r11_83 | 0x26e74a57;
    __asm__("shld esi, r9d, 0x37");
    edx95 = *reinterpret_cast<uint32_t*>(&rax93) % 0xebe31562;
    *reinterpret_cast<uint32_t*>(&rax96) = *reinterpret_cast<uint32_t*>(&rax93) / 0xebe31562;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax96) + 4) = 0;
    *reinterpret_cast<signed char*>(&r13_92) = 0;
    *reinterpret_cast<int16_t*>(&r12_81) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r12_81) + *reinterpret_cast<int16_t*>(&r11_94));
    ax97 = *reinterpret_cast<uint16_t*>(&r10_87);
    __asm__("rol bpl, 0x21");
    __asm__("ror r9d, 0xe5");
    __asm__("btc r11, r9");
    __asm__("ror di, cl");
    *reinterpret_cast<uint32_t*>(&r11_98) = *reinterpret_cast<uint32_t*>(&r11_94) | *reinterpret_cast<uint32_t*>(&r13_92);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_98) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r8_86) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_86) + 99))) & 99);
    if (rcx91 == r8_86) {
        tmp64_99 = rcx91;
        r8_86 = tmp64_99;
    }
    r15_100 = rdi62;
    rdi101 = r15_76;
    *reinterpret_cast<uint32_t*>(&rbp102) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&rax89))) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp102) + 4) = 0;
    dx103 = *reinterpret_cast<signed char*>(&edx95);
    rbx104 = *reinterpret_cast<signed char*>(&dx103);
    tmp8_105 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&dx103) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax97) + 1))));
    cf106 = reinterpret_cast<uint1_t>(tmp8_105 < *reinterpret_cast<unsigned char*>(&dx103));
    if (cf106 | reinterpret_cast<uint1_t>(tmp8_105 == 0)) {
        r9_69 = rdi101;
    }
    tmp16_107 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(ax97 + *reinterpret_cast<uint16_t*>(&r14_29)) + cf106);
    cf108 = reinterpret_cast<uint1_t>(tmp16_107 < ax97);
    *reinterpret_cast<uint16_t*>(&rax96) = tmp16_107;
    if (!reinterpret_cast<uint1_t>(cf108 | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rax96) == 0))) {
        *reinterpret_cast<int32_t*>(&rbx104) = *reinterpret_cast<int32_t*>(&r14_29);
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx104) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx104) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rax96) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx104) + 1) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rax96) + cf108))));
    bx109 = -*reinterpret_cast<int16_t*>(&rbx104);
    rax110 = rax96 >> -28;
    *reinterpret_cast<uint32_t*>(&r13_111) = *reinterpret_cast<uint32_t*>(&r13_92) >> 0xffffff8e;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_111) + 4) = 0;
    *reinterpret_cast<signed char*>(&rbp102) = 0;
    *reinterpret_cast<signed char*>(&r12_81) = *reinterpret_cast<signed char*>(&bx109);
    ax112 = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&rax110)));
    r10_113 = reinterpret_cast<uint64_t>(r10_87 + 0x52fe4e91);
    r14d114 = ax112;
    __asm__("lahf ");
    __asm__("bts cx, 0x61");
    *reinterpret_cast<int16_t*>(&rbp102) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbp102) * 0xf085);
    __asm__("rcl r14w, cl");
    rcx115 = *reinterpret_cast<int16_t*>(&r14d114);
    __asm__("rcr rbp, 1");
    rdx116 = rdi101;
    eax117 = reinterpret_cast<int16_t>(ax112);
    r13_118 = r13_111 + 0x51f04a8d + 0xfffffffff880d8df;
    __asm__("rcr r11, 0x45");
    __asm__("rcl r10, 1");
    *reinterpret_cast<uint16_t*>(&r13_118) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_118) + *reinterpret_cast<uint16_t*>(&r15_100))));
    r12_119 = r12_81 * 0xffffffff99ca6d06;
    __asm__("rcr r9, 1");
    *reinterpret_cast<int16_t*>(&rsi82) = reinterpret_cast<int16_t>(-*reinterpret_cast<int16_t*>(&rsi82) >> *reinterpret_cast<signed char*>(&rcx115));
    __asm__("ror bx, 0xd5");
    __asm__("rol bh, 1");
    ax120 = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&eax117) + 0x1b0b)));
    __asm__("rcl ch, 1");
    tmp16_121 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14d114) + 0xc77e) + 1);
    cf122 = reinterpret_cast<uint1_t>(tmp16_121 < *reinterpret_cast<uint16_t*>(&r14d114));
    *reinterpret_cast<uint16_t*>(&r14d114) = tmp16_121;
    *reinterpret_cast<int16_t*>(&rdx116) = *reinterpret_cast<signed char*>(&ax120);
    *reinterpret_cast<uint16_t*>(&r11_98) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_113) - reinterpret_cast<uint16_t>(0x1376 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r10_113) < reinterpret_cast<uint16_t>(0x1376 + cf122))));
    __asm__("rol rsi, 0xc1");
    __asm__("rcr dl, 1");
    *reinterpret_cast<unsigned char*>(&r12_119) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_119) - reinterpret_cast<unsigned char>(53 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r12_119) < 0xcb)));
    rbx123 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int16_t*>(&r12_119)));
    *reinterpret_cast<int32_t*>(&rax124) = *reinterpret_cast<int16_t*>(&rsi82);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax124) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r12_119) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_119) ^ *reinterpret_cast<unsigned char*>(&r15_100));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx116) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx116) + 1) >> 1);
    __asm__("ror si, 0xa5");
    __asm__("xadd dl, dh");
    rdx125 = rdx116 - (rdx116 + (rdx116 < rdx116 + 1));
    *reinterpret_cast<int16_t*>(&rbp102) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbp102) >> 1);
    *reinterpret_cast<uint16_t*>(&r10_113) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r10_113) >> 1);
    ax126 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rdi101) * 0x9dac) & 0x3fff);
    *reinterpret_cast<uint16_t*>(&rdx125) = reinterpret_cast<uint16_t>(ax126 % static_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&rdx125) | 0xc0)));
    *reinterpret_cast<uint16_t*>(&rax124) = reinterpret_cast<uint16_t>(ax126 / static_cast<int16_t>(*reinterpret_cast<signed char*>(&rdx125)));
    rcx127 = r15_100 * 0xffffffffb6a40784;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx123) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx123) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax124) + 1))));
    *reinterpret_cast<uint32_t*>(&r12_128) = *reinterpret_cast<uint32_t*>(&r12_119) - (0x4f2eda5b - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r12_119) < 0xb0d125a5));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_128) + 4) = 0;
    __asm__("ror r15w, 0x7");
    *reinterpret_cast<uint16_t*>(&rbx123) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx123) + 1);
    rax129 = rax124 & r13_118;
    *reinterpret_cast<int32_t*>(&r14_130) = reinterpret_cast<int32_t>(~r14d114);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_130) + 4) = 0;
    __asm__("rcl r15w, 1");
    r9_131 = r9_69 * 0xffffffff866e7b21 - 1;
    r15_132 = r15_100 - (0x7713e229 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r15_100 < 0x7713e229)));
    rdi133 = rdi101 ^ rbp102;
    r11w134 = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&r11_98))) - *reinterpret_cast<uint16_t*>(&r14_130));
    __asm__("bts r12d, 0x4e");
    __asm__("rcl dil, 1");
    __asm__("rcr al, 1");
    __asm__("rcl r9b, 1");
    rsi135 = r14_130;
    __asm__("rcl rsi, 1");
    *reinterpret_cast<uint16_t*>(&r11_98) = reinterpret_cast<uint16_t>(r11w134 - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_86) + reinterpret_cast<uint1_t>(r11w134 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r8_86))))));
    *reinterpret_cast<uint16_t*>(&r13_118) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r13_118) >> 1);
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rdi133) = *reinterpret_cast<uint32_t*>(&rbx123);
    }
    *reinterpret_cast<signed char*>(&rbp102) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbp102) >> 1);
    *reinterpret_cast<uint32_t*>(&rax136) = *reinterpret_cast<uint32_t*>(&rax129) ^ *reinterpret_cast<uint32_t*>(&r15_132);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax136) + 4) = 0;
    __asm__("rcl r11w, 0x86");
    *reinterpret_cast<uint16_t*>(&r12_128) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_128) >> -59);
    __asm__("xadd r14b, al");
    __asm__("xadd r9b, r10b");
    if (*reinterpret_cast<uint16_t*>(&r12_128)) {
        *reinterpret_cast<int16_t*>(&rbp102) = *reinterpret_cast<int16_t*>(&rbp102);
    }
    __asm__("ror r14d, cl");
    r11_137 = r11_98 | 0xc000000000000000;
    rax138 = rax136 / r11_137;
    r15_139 = r15_132 * 0x2da9b937;
    __asm__("shrd r8d, r12d, 0x1");
    eax140 = *reinterpret_cast<int16_t*>(&rax138);
    tmp64_141 = 0x4000000001aec4d1 + __intrinsic();
    r8_142 = tmp64_141;
    less_or_equal143 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r8_142) < reinterpret_cast<int64_t>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(r8_142 == 0));
    if (!less_or_equal143) {
    }
    if (!less_or_equal143) {
        rsi135 = r12_128;
    }
    *reinterpret_cast<unsigned char*>(&r13_118) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_118) - reinterpret_cast<unsigned char>(45 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r13_118) < reinterpret_cast<unsigned char>(45 - reinterpret_cast<uint1_t>(tmp64_141 < 0x3fffffffffffffff)))));
    *reinterpret_cast<signed char*>(&rcx127) = 0;
    ax144 = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&eax140) - *reinterpret_cast<uint16_t*>(&r8_142));
    *reinterpret_cast<uint16_t*>(&r8_142) = *reinterpret_cast<unsigned char*>(&r13_118);
    *reinterpret_cast<int16_t*>(&eax140) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax144) * *reinterpret_cast<signed char*>(&r8_142));
    *reinterpret_cast<int32_t*>(&rcx145) = *reinterpret_cast<int32_t*>(&rcx127) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx145) + 4) = 0;
    __asm__("shld rbp, r10, 0x1");
    ebp146 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp102) >> -50);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx123) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx123) + 1) << 1);
    *reinterpret_cast<int32_t*>(&rax147) = eax140 * *reinterpret_cast<int32_t*>(&r8_142);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax147) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx148) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx148) + 4) = 0;
    __asm__("rcl r9w, 1");
    __asm__("ror r12, 1");
    __asm__("rcr r13d, 1");
    r13_149 = r13_118 - 0x46f61354;
    if (reinterpret_cast<int64_t>(r13_149) >= reinterpret_cast<int64_t>(0)) {
        *reinterpret_cast<uint32_t*>(&rdi133) = *reinterpret_cast<uint32_t*>(&r12_128);
    }
    __asm__("rcl si, 1");
    rax150 = rax147 << *reinterpret_cast<unsigned char*>(&rcx145);
    __asm__("bsf r15, rbx");
    r14_151 = rsi82 | rcx145;
    *reinterpret_cast<unsigned char*>(&r11_137) = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(r14_151 == 0)));
    *reinterpret_cast<uint16_t*>(&rcx145) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx145) * 0x927b);
    __asm__("bsr rcx, r10");
    *reinterpret_cast<uint32_t*>(&r9_152) = *reinterpret_cast<int32_t*>(&r9_131) + *reinterpret_cast<uint32_t*>(&rdi133) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r11_137) < *reinterpret_cast<uint32_t*>(&r15_139));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_152) + 4) = 0;
    __asm__("rol r15w, cl");
    if (*reinterpret_cast<signed char*>(&rbx123) == *reinterpret_cast<signed char*>(&rbx123)) {
        *reinterpret_cast<signed char*>(&rbx123) = *reinterpret_cast<signed char*>(&rbx123);
    }
    __asm__("rcl rbp, 1");
    r15_153 = *reinterpret_cast<int16_t*>(&r8_142);
    __asm__("rcl bp, 1");
    __asm__("rcl ax, 1");
    ebp154 = ebp146 - (0x591baf8f + reinterpret_cast<uint1_t>(ebp146 < 0x591baf8f));
    __asm__("btc r11w, 0x7c");
    r10_155 = (r10_113 >> 16) - 1;
    r13_156 = r13_149 - 0x7af72792;
    if (*reinterpret_cast<int16_t*>(&r15_153) == *reinterpret_cast<int16_t*>(&r15_153)) {
        *reinterpret_cast<int16_t*>(&r15_153) = *reinterpret_cast<int16_t*>(&r15_153);
    }
    if (reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi135) - 0x6552) + __intrinsic()) < *reinterpret_cast<uint16_t*>(&rsi135)) {
        *reinterpret_cast<int32_t*>(&rcx145) = *reinterpret_cast<int32_t*>(&rcx145);
    }
    __asm__("rcl r8d, cl");
    __asm__("rol edx, 1");
    *reinterpret_cast<uint32_t*>(&rbp157) = ebp154 - (ebp154 + reinterpret_cast<uint1_t>(ebp154 < ebp154));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp157) + 4) = 0;
    __asm__("ror r9w, 1");
    __asm__("ror r15b, cl");
    *reinterpret_cast<int32_t*>(&r11_158) = *reinterpret_cast<int32_t*>(&rax150);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_158) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rax159) = *reinterpret_cast<uint32_t*>(&r11_137) - (0x75f67921 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r11_137) < 0x8a0986e0));
    *reinterpret_cast<uint16_t*>(&rbp157) = 0x8d3c;
    *reinterpret_cast<unsigned char*>(&rcx145) = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdi133) - *reinterpret_cast<int32_t*>(&r14_151) == 0);
    __asm__("rcr r8, 1");
    esi160 = *reinterpret_cast<signed char*>(&r13_156) + 0xd28570be;
    if (!esi160) {
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax159) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax159) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx145) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax159) + 1) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rcx145))))));
    *reinterpret_cast<uint16_t*>(&rcx145) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx145) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx123) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rcx145) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rbx123))))));
    bx161 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx123) - *reinterpret_cast<uint16_t*>(&rcx145));
    __asm__("rcl r15, 1");
    rcx162 = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx123) + 1) = 0xff;
    __asm__("ror bx, cl");
    r14_163 = 0;
    *reinterpret_cast<uint32_t*>(&rsi164) = esi160 >> 24 | esi160 >> 8 & 0xff00 | esi160 << 8 & 0xff0000 | esi160 << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi164) + 4) = 0;
    *reinterpret_cast<signed char*>(&rbx123) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&bx161) + *reinterpret_cast<signed char*>(&r9_152)) - 89);
    *reinterpret_cast<signed char*>(&r11_158) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r11_158) - 1);
    if (__intrinsic()) {
        rcx162 = r10_155;
    }
    si165 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi164) - reinterpret_cast<uint16_t>(0x2a6d - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rsi164) < 0xd593)));
    __asm__("rcl r12b, 1");
    __asm__("xadd r14b, r14b");
    if (1) {
        rax159 = rbp157;
    }
    tmp16_166 = *reinterpret_cast<int16_t*>(&r11_158);
    *reinterpret_cast<int16_t*>(&r11_158) = 0x82bd;
    *reinterpret_cast<int16_t*>(&r14_163) = tmp16_166;
    __asm__("shrd r11, r11, cl");
    ax167 = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rax159) * 0x8d3c);
    if (ax167 == *reinterpret_cast<uint16_t*>(&r12_128)) {
        tmp16_168 = ax167;
        ax167 = *reinterpret_cast<uint16_t*>(&r12_128);
        *reinterpret_cast<uint16_t*>(&r12_128) = tmp16_168;
    }
    rbx169 = rbx123 - (0x5c26109c - static_cast<uint64_t>(reinterpret_cast<uint1_t>(rbx123 < 0xffffffffa3d9ef65)));
    __asm__("xadd bl, bh");
    r12_170 = r12_128 - (r9_152 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r12_128 < r9_152 + 1)));
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r11_158) = *reinterpret_cast<int16_t*>(&r9_152);
    }
    *reinterpret_cast<uint16_t*>(&rcx162) = *reinterpret_cast<unsigned char*>(&ax167);
    bh171 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx169) + 1) | 0xc0);
    r13_172 = *reinterpret_cast<int32_t*>(&r10_155);
    *reinterpret_cast<uint16_t*>(&r12_170) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_170) * 0x63b6);
    __asm__("rcr bh, 1");
    __asm__("bsr rax, r12");
    *reinterpret_cast<unsigned char*>(&r14_163) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_163) & *reinterpret_cast<unsigned char*>(&si165));
    __asm__("bsr r10w, r14w");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx169) + 1) = reinterpret_cast<unsigned char>(bh171 << *reinterpret_cast<unsigned char*>(&rcx162));
    __asm__("shrd r13, rcx, 0x1");
    __asm__("lahf ");
    if (*reinterpret_cast<uint32_t*>(&rbx169) < *reinterpret_cast<int32_t*>(&r12_170) + 1) {
    }
    __asm__("ror bh, 0xe1");
    *reinterpret_cast<uint16_t*>(&r13_172) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_172) | 0xc000);
    *reinterpret_cast<uint16_t*>(&rdx148) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(ax167 & 0x3fff) / static_cast<int16_t>(reinterpret_cast<signed char>(bh171))) * 0xcb8f) % *reinterpret_cast<uint16_t*>(&r13_172));
    __asm__("shrd eax, eax, cl");
    __asm__("shrd si, r13W, 0x1");
    *reinterpret_cast<uint32_t*>(&r13_173) = *reinterpret_cast<int32_t*>(&r13_172) + *reinterpret_cast<int32_t*>(&r14_163) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_173) + 4) = 0;
    __asm__("btr eax, 0x77");
    *reinterpret_cast<uint32_t*>(&r9_174) = (*reinterpret_cast<uint32_t*>(&r9_152) >> 24 | *reinterpret_cast<uint32_t*>(&r9_152) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&r9_152) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&r9_152) << 24) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_174) + 4) = 0;
    __asm__("ror eax, 1");
    __asm__("rcl r13W, 1");
    __asm__("rcl rdx, 1");
    __asm__("shrd bp, r9w, 0x1");
    r11_175 = reinterpret_cast<int64_t>(r11_158 & 0xfffffffff42c9991) >> 1;
    __asm__("rcr dh, cl");
    rdx176 = rdx148 << 1;
    *reinterpret_cast<uint16_t*>(&r12_170) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_170) + *reinterpret_cast<int16_t*>(&r15_153)))) ^ 0xe77d);
    *reinterpret_cast<uint16_t*>(&rsi164) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r11_175) * 0xf9e8);
    r11_177 = 0;
    if (!*reinterpret_cast<int16_t*>(&r13_173)) {
        tmp16_178 = *reinterpret_cast<int16_t*>(&r13_173);
        *reinterpret_cast<int16_t*>(&r13_173) = 0;
        *reinterpret_cast<int16_t*>(&r11_177) = tmp16_178;
    }
    *reinterpret_cast<unsigned char*>(&r14_163) = reinterpret_cast<unsigned char>(~*reinterpret_cast<unsigned char*>(&r14_163));
    __asm__("rcl dil, 1");
    __asm__("rcl rbp, 1");
    __asm__("ror r11b, 1");
    __asm__("bts rcx, 0xc1");
    __asm__("ror r11d, 1");
    __asm__("btr r13d, ebx");
    r14_179 = r14_163 >> 1;
    rcx180 = (rcx162 ^ 0x264e9b8) + rbp157 + __intrinsic();
    *reinterpret_cast<uint16_t*>(&r12_170) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_170) + 0x3548);
    __asm__("shrd r13d, r14d, cl");
    *reinterpret_cast<signed char*>(&r13_173) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r13_173) << 1);
    *reinterpret_cast<uint32_t*>(&r14_181) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_179) >> 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_181) + 4) = 0;
    __asm__("ror ebx, 0x55");
    ebx182 = *reinterpret_cast<int32_t*>(&rdx176) + *reinterpret_cast<uint32_t*>(&r14_181) - 0x677b48ac;
    r12_183 = r12_170 | rcx180;
    __asm__("rol r8b, 0x9a");
    *reinterpret_cast<uint32_t*>(&r10_184) = *reinterpret_cast<uint32_t*>(&r10_155) >> *reinterpret_cast<signed char*>(&rcx180);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_184) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r11_177) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r11_177)));
    rsi185 = -rsi164;
    rdx186 = __intrinsic();
    *reinterpret_cast<uint16_t*>(&r9_174) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_174) | 0x5ee);
    if (0) {
        *reinterpret_cast<uint16_t*>(&r9_174) = *reinterpret_cast<uint16_t*>(&r9_174);
    }
    r15_187 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<signed char*>(&r9_174)));
    __asm__("rcr r8d, 1");
    r10_188 = r10_184 - (0x48c0180e + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r10_184 < 0x48c0180e)));
    __asm__("ror rbx, cl");
    __asm__("shrd r10d, ebp, 0x1");
    r10_189 = r10_188 - reinterpret_cast<uint1_t>(r10_188 < 1);
    *reinterpret_cast<int16_t*>(&rdx186) = __intrinsic();
    *reinterpret_cast<uint16_t*>(&r12_183) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_183) + 0x5cc1))) + 0x8d3c) + 1);
    __asm__("btc rdx, r15");
    *reinterpret_cast<uint32_t*>(&rcx190) = *reinterpret_cast<int32_t*>(&rcx180) - ebx182;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx190) + 4) = 0;
    __asm__("btr r9, rbx");
    __asm__("shld r14w, bp, 0x3");
    __asm__("shrd bx, dx, 0x1");
    cf191 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r15_187) < 0xc2);
    *reinterpret_cast<unsigned char*>(&r15_187) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_187) - reinterpret_cast<unsigned char>(62 - cf191));
    *reinterpret_cast<unsigned char*>(&rdx186) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx186) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx190) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdx186) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx190) + 1) + cf191))));
    tmp64_192 = r9_174 - 0x21455e4f;
    r9_193 = tmp64_192;
    if (tmp64_192 >= r9_174) {
        *reinterpret_cast<uint16_t*>(&r14_181) = *reinterpret_cast<uint16_t*>(&r12_183);
    }
    *reinterpret_cast<int16_t*>(&rcx190) = static_cast<int16_t>(r9_193 + rcx190 * 4 + 0x7e);
    __asm__("rol r15d, 1");
    *reinterpret_cast<uint32_t*>(&rcx194) = *reinterpret_cast<uint32_t*>(&rcx190) | *reinterpret_cast<uint32_t*>(&rdx186);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx194) + 4) = 0;
    __asm__("shld r14w, r13W, 0x1");
    bx195 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx182) << 1);
    *reinterpret_cast<uint32_t*>(&r11_196) = *reinterpret_cast<uint32_t*>(&r11_177) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_196) + 4) = 0;
    if (1) {
    }
    *reinterpret_cast<unsigned char*>(&r10_189) = 1;
    __asm__("rcr esi, cl");
    *reinterpret_cast<uint16_t*>(&rbp157) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&bx195) + 1);
    *reinterpret_cast<unsigned char*>(&rcx194) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rcx194) >> 1);
    *reinterpret_cast<int32_t*>(&rbx197) = static_cast<int32_t>(r13_173 + r15_187 * 8 - 0x7cb71900);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx197) + 4) = 0;
    rdi198 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int16_t*>(&r11_196)));
    *reinterpret_cast<signed char*>(&r13_173) = 0x7a;
    *reinterpret_cast<uint16_t*>(&r10_189) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_189) + *reinterpret_cast<uint16_t*>(&rbp157))));
    __asm__("xadd r13d, r13d");
    rbx199 = rbx197 >> 1;
    si200 = static_cast<uint16_t>(*reinterpret_cast<uint32_t*>(&r14_181) + *reinterpret_cast<uint32_t*>(&r14_181) * 2 + 0x4af27f56);
    if (!__intrinsic()) {
        rdi198 = r15_187;
    }
    cf201 = reinterpret_cast<uint1_t>(0 < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx186) + 1) + __intrinsic()));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx199) + 1) = reinterpret_cast<unsigned char>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx186) + 1) + cf201)));
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx199) + 1) < reinterpret_cast<signed char>(static_cast<uint32_t>(cf201))) {
        r13_173 = r14_181;
    }
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx199) + 1) == static_cast<uint32_t>(cf201)) {
        rcx194 = rcx194;
    }
    *reinterpret_cast<int16_t*>(&r9_193) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r9_193) + 0x759c);
    r9_202 = r9_193 | 0xc000000000000000;
    rdx203 = 0;
    __asm__("rol r13W, cl");
    *reinterpret_cast<unsigned char*>(&rcx194) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx194) | 0xc0);
    *reinterpret_cast<uint16_t*>(&rsi185) = reinterpret_cast<uint16_t>(si200 - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rcx194) + reinterpret_cast<uint1_t>(si200 < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rcx194) + static_cast<uint1_t>(0 >> 0x7d)))));
    if (__intrinsic()) {
        r11_196 = r13_173;
    }
    *reinterpret_cast<uint32_t*>(&r12_204) = *reinterpret_cast<uint32_t*>(&r12_183) & 0xb30ddc19;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_204) + 4) = 0;
    __asm__("cdq ");
    __asm__("ror dx, 1");
    __asm__("ror rcx, 0xe5");
    __asm__("bsf cx, r14w");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx194) + 1) = reinterpret_cast<unsigned char>(0 << *reinterpret_cast<unsigned char*>(&rcx194));
    __asm__("rcr bpl, 0xeb");
    *reinterpret_cast<signed char*>(&r14_181) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r14_181) >> *reinterpret_cast<unsigned char*>(&rcx194));
    *reinterpret_cast<uint32_t*>(&rsi205) = *reinterpret_cast<uint32_t*>(&rsi185) & *reinterpret_cast<uint32_t*>(&rcx194);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi205) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rbp206) = *reinterpret_cast<uint32_t*>(&rbp157) >> 1;
    __asm__("rol r12w, 1");
    __asm__("bts edx, ecx");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx194) + 1) = reinterpret_cast<uint1_t>(0 < *reinterpret_cast<uint16_t*>(&r14_181));
    *reinterpret_cast<uint16_t*>(&rdx203) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(-static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r14_181)))));
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rdx203) == 0)))) {
        rcx194 = rdx203;
    }
    r10w207 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_189) - 0x34fd);
    rdx208 = rdx203 | r11_196;
    cl209 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx194) | *reinterpret_cast<unsigned char*>(&rdx208));
    cf210 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rdi198) < 0x62f);
    *reinterpret_cast<uint16_t*>(&rdi198) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi198) - reinterpret_cast<uint16_t>(0x62f + cf210));
    *reinterpret_cast<uint32_t*>(&rax211) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&rbx199)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax211) + 4) = 0;
    if (*reinterpret_cast<int16_t*>(&rdi198) < reinterpret_cast<int16_t>(static_cast<uint32_t>(cf210))) {
        *reinterpret_cast<int16_t*>(&rdx208) = *reinterpret_cast<int16_t*>(&rbp206);
    }
    r8_212 = rdx208;
    __asm__("btc edx, ecx");
    *reinterpret_cast<unsigned char*>(&r10w207) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10w207) | *reinterpret_cast<unsigned char*>(&r11_196));
    if (!*reinterpret_cast<unsigned char*>(&r10w207)) {
    }
    __asm__("rol r11d, 0x70");
    r15d213 = *reinterpret_cast<uint16_t*>(&rax211);
    *reinterpret_cast<unsigned char*>(&rcx194) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(cl209) >> 94);
    if (0) {
        *reinterpret_cast<uint32_t*>(&r11_196) = *reinterpret_cast<uint32_t*>(&rcx194);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_196) + 4) = 0;
    }
    __asm__("shld rdi, r15, 0x1a");
    *reinterpret_cast<uint32_t*>(&rbx214) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbx199) - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx214) + 4) = 0;
    rcx215 = ~rcx194;
    *reinterpret_cast<int16_t*>(&rsi205) = reinterpret_cast<int16_t>(~*reinterpret_cast<int16_t*>(&rsi205));
    ax216 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax211) + 0xbe3b);
    __asm__("bsf r15d, r13d");
    __asm__("btr r10d, r10d");
    __asm__("btr r9, 0xcc");
    __asm__("rol r15d, 0x76");
    ebp217 = *reinterpret_cast<int32_t*>(&r9_202) * 0xbb860d03;
    *reinterpret_cast<signed char*>(&r9_202) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r9_202) - 82);
    *reinterpret_cast<uint16_t*>(&rdx218) = 0x2894;
    *reinterpret_cast<int16_t*>(&r13_173) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r13_173) << 1);
    if (__intrinsic()) {
        r9_202 = rcx215;
    }
    *reinterpret_cast<int32_t*>(&r13_219) = static_cast<int32_t>(r13_173 + r12_204 + 46);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_219) + 4) = 0;
    __asm__("rcl r8, 1");
    *reinterpret_cast<unsigned char*>(&rcx215) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx215) & 15);
    __asm__("shld bx, r15w, cl");
    __asm__("ror r9, 1");
    if (1) {
        r15d213 = *reinterpret_cast<uint32_t*>(&r11_196);
    }
    *reinterpret_cast<int32_t*>(&r14_220) = *reinterpret_cast<int32_t*>(&rcx215);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_220) + 4) = 0;
    ecx221 = *reinterpret_cast<uint32_t*>(&r14_181);
    *reinterpret_cast<int32_t*>(&r9_222) = *reinterpret_cast<int32_t*>(&r9_202) + 0x44605950;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_222) + 4) = 0;
    __asm__("rcl edi, 1");
    *reinterpret_cast<unsigned char*>(&rdi198) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi198) | 0x95) >> 0x7f);
    bx223 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx214) & 0x2894) & *reinterpret_cast<uint16_t*>(&r8_212));
    r12_224 = r12_204 - (0x6dc8c860 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(r12_204 < 0xffffffff923737a0)));
    __asm__("shrd ax, si, 0x1");
    __asm__("rcr si, 1");
    cx225 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx221) | 0x2627);
    __asm__("shrd ebp, r15d, cl");
    *reinterpret_cast<uint16_t*>(&r10_189) = reinterpret_cast<uint16_t>(r10w207 + 1);
    *reinterpret_cast<uint16_t*>(&rdi198) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi198) >> -40);
    ax226 = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax216) * *reinterpret_cast<signed char*>(&ax216));
    *reinterpret_cast<signed char*>(&rbx214) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax226) + 1) - 41);
    *reinterpret_cast<uint16_t*>(&ecx221) = reinterpret_cast<uint16_t>(cx225 - *reinterpret_cast<uint16_t*>(&ebp217));
    if (reinterpret_cast<int16_t>(cx225) <= *reinterpret_cast<int16_t*>(&ebp217)) {
        *reinterpret_cast<uint16_t*>(&r10_189) = *reinterpret_cast<uint16_t*>(&r8_212);
    }
    __asm__("bts r14, r12");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax227) + 1) = -74;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx214) + 1) = *reinterpret_cast<signed char*>(&ax226);
    *reinterpret_cast<signed char*>(&ax227) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&bx223) + 1);
    *reinterpret_cast<uint32_t*>(&r15_228) = r15d213 & *reinterpret_cast<uint32_t*>(&r11_196);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_228) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rax211) = reinterpret_cast<uint16_t>(ax227 >> 1);
    __asm__("rcr r9b, 1");
    ecx229 = ecx221 - (0x72778391 - reinterpret_cast<uint1_t>(ecx221 < 0x8d887c6f));
    cf230 = static_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbx214) >> *reinterpret_cast<int32_t*>(&r10_189));
    *reinterpret_cast<uint32_t*>(&rbp231) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx218) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp231) + 4) = 0;
    if (reinterpret_cast<int64_t>(r11_196) < reinterpret_cast<int64_t>(0x338897fe - static_cast<uint64_t>(cf230))) {
        *reinterpret_cast<uint32_t*>(&rax211) = *reinterpret_cast<uint32_t*>(&rsi205);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax211) + 4) = 0;
    }
    __asm__("btc r14w, 0x52");
    *reinterpret_cast<unsigned char*>(&rdi198) = 0;
    rax232 = rax211 << *reinterpret_cast<unsigned char*>(&ecx229);
    *reinterpret_cast<signed char*>(&r14_220) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r14_220) - 53);
    *reinterpret_cast<uint16_t*>(&r10_189) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_189) - 1);
    if (*reinterpret_cast<int16_t*>(&r10_189) < reinterpret_cast<int16_t>(0) != __intrinsic()) {
        rax232 = r9_222;
    }
    *reinterpret_cast<uint32_t*>(&rcx233) = ecx229 << 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx233) + 4) = 0;
    r14_234 = r14_220 | 0xc000000000000000;
    rax235 = rax232 / r14_234;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx233) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx233) + 1) - reinterpret_cast<unsigned char>(0x77 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx233) + 1) < reinterpret_cast<unsigned char>(0x77 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx233) < *reinterpret_cast<unsigned char*>(&r10_189))))));
    r9_236 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int16_t*>(&r9_222)));
    *reinterpret_cast<int16_t*>(&rax235) = *reinterpret_cast<int16_t*>(&r12_224);
    tmp64_237 = (r15_228 & 0xffffffff) << 32;
    tmp64_238 = (tmp64_237 & 0xffff0000ffff) << 16 | (tmp64_237 & 0xffff0000ffff0000) >> 16;
    *reinterpret_cast<unsigned char*>(&r9_236) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_236) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rsi205) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r9_236) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rsi205) + 1))));
    return rax235 + rbx214 + rcx233 + rax232 % r14_234 + rbp231 + rsi205 + rdi198 + 0x3fffffffffffffff + r9_236 + r10_189 + (r11_196 - (0x338897fe - static_cast<uint64_t>(reinterpret_cast<uint1_t>(r11_196 < 0x338897fe - static_cast<uint64_t>(cf230))))) + r12_224 + r13_219 + r14_234 + ((tmp64_238 & 0xff00ff00ff00ff) << 8 | (tmp64_238 & 0xff00ff00ff00ff00) >> 8) + 0x4ffe297cddec17d2;
}

uint64_t log_size_10_var_003(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rbx7;
    int64_t rdi8;
    int32_t ebx9;
    uint64_t r15_10;
    int64_t rbp11;
    int64_t rdi12;
    uint64_t rdi13;
    int64_t rax14;
    uint16_t ax15;
    uint64_t r14_16;
    uint64_t r13_17;
    uint32_t r12d18;
    uint64_t rbp19;
    int64_t r13_20;
    int16_t ax21;
    uint64_t r11_22;
    uint32_t ecx23;
    int64_t rcx24;
    uint64_t r9_25;
    int64_t rax26;
    uint16_t ax27;
    uint16_t tmp16_28;
    uint64_t r11_29;
    uint64_t rbp30;
    int64_t r13_31;
    uint16_t ax32;
    uint16_t ax33;
    uint64_t rcx34;
    uint64_t r10_35;
    uint64_t r14_36;
    uint64_t r15_37;
    uint64_t rdx38;
    uint64_t rax39;
    int64_t rbp40;
    uint64_t r12_41;
    uint64_t r15_42;
    int64_t r13_43;
    uint64_t rsi44;
    uint32_t esi45;
    uint64_t r15_46;
    uint32_t r9d47;
    int64_t rax48;
    uint64_t r9_49;
    uint64_t r14_50;
    uint64_t rax51;
    uint64_t rdx52;
    uint32_t r12d53;
    int64_t rax54;
    unsigned char tmp8_55;
    signed char tmp8_56;
    uint64_t rdx57;
    uint16_t dx58;
    uint64_t rsi59;
    uint32_t r13d60;
    uint64_t rsi61;
    uint64_t r14_62;
    uint64_t rcx63;
    uint32_t ecx64;
    uint64_t r12_65;
    uint32_t r10d66;
    uint32_t r10d67;
    int64_t r14_68;
    int64_t r9_69;
    int64_t rbp70;
    int32_t ebx71;
    uint32_t r12d72;
    uint64_t r13_73;
    uint32_t tmp32_74;
    int64_t rdx75;
    uint64_t rcx76;
    int64_t rdi77;
    int64_t r9_78;
    uint64_t r11_79;
    int64_t rbp80;
    int64_t rdi81;
    uint32_t eax82;
    uint32_t edx83;
    uint64_t rbp84;
    int64_t r12_85;
    int32_t r14d86;
    uint64_t rsi87;
    uint64_t rbx88;
    uint64_t rbx89;
    uint32_t r9d90;
    uint64_t r13_91;
    uint32_t r8d92;
    uint64_t rcx93;
    int16_t dx94;
    uint64_t tmp64_95;
    uint64_t tmp64_96;
    uint64_t rbx97;
    uint64_t r12_98;
    uint1_t cf99;
    uint64_t rcx100;
    int64_t rax101;
    uint64_t rsi102;
    unsigned char tmp8_103;
    uint32_t r13d104;
    int64_t rbp105;
    int64_t rdi106;
    int64_t rax107;
    int64_t r9_108;
    uint64_t rax109;
    uint64_t rdx110;
    uint64_t rax111;
    uint16_t bx112;
    uint32_t edi113;
    unsigned char tmp8_114;
    uint1_t cf115;
    uint64_t r8_116;
    uint32_t r15d117;
    uint64_t rax118;
    uint16_t bx119;
    uint1_t cf120;
    uint16_t r11w121;
    unsigned char tmp8_122;
    uint64_t r13_123;
    uint16_t bx124;
    unsigned char bl125;
    uint32_t esi126;
    uint64_t rdx127;
    uint32_t eax128;
    uint16_t r11w129;
    uint32_t eax130;
    uint64_t rdx131;
    uint1_t cf132;
    uint32_t edx133;
    int64_t rbp134;
    int64_t r9_135;
    uint1_t cf136;
    uint32_t r10d137;
    int64_t r9_138;
    int64_t r12_139;
    uint64_t rdi140;
    uint1_t less_or_equal141;
    int32_t eax142;
    int64_t rsi143;
    int64_t r15_144;
    uint1_t cf145;
    uint32_t ebp146;
    uint64_t rax147;
    uint16_t tmp16_148;
    uint64_t r9_149;
    unsigned char tmp8_150;
    int64_t r14_151;
    uint64_t rdi152;
    uint64_t rsi153;
    uint64_t rbx154;
    uint64_t r14_155;
    uint64_t rax156;
    int64_t rax157;
    uint64_t rcx158;
    uint32_t edi159;
    uint32_t ebx160;
    uint1_t cf161;
    uint32_t ebx162;
    uint64_t r8_163;
    uint64_t r9_164;
    uint32_t ebx165;
    uint64_t r13_166;
    int64_t r11_167;
    uint64_t r10_168;
    unsigned char tmp8_169;
    uint32_t eax170;
    uint64_t rbx171;
    uint32_t r14d172;
    uint64_t r8_173;
    int32_t edi174;
    uint32_t ecx175;
    uint32_t esi176;
    int64_t r15_177;
    uint1_t cf178;
    int64_t r10_179;
    uint64_t r9_180;
    uint32_t ecx181;
    uint16_t ax182;
    uint64_t r15_183;
    uint64_t rdi184;
    int64_t rcx185;
    int64_t r9_186;
    int64_t r9_187;
    uint32_t r14d188;
    uint64_t r11_189;
    uint64_t rcx190;
    uint64_t rax191;
    uint64_t rdx192;
    uint64_t rax193;
    uint64_t rdx194;
    uint16_t ax195;
    uint64_t r8_196;
    unsigned char dl197;
    uint64_t r12_198;
    uint64_t rdi199;
    uint64_t rbx200;
    unsigned char tmp8_201;
    signed char ah202;
    uint1_t zf203;
    uint16_t dx204;
    signed char tmp8_205;
    uint64_t rsi206;
    uint16_t ax207;
    uint16_t dx208;
    int32_t eax209;
    int64_t r11_210;
    uint64_t rbx211;
    uint32_t eax212;
    uint32_t edx213;
    uint32_t r14d214;
    uint16_t cx215;
    uint32_t r14d216;
    int64_t r11_217;
    uint64_t r8_218;
    uint16_t cx219;
    int64_t rbp220;
    int16_t tmp16_221;
    int64_t r9_222;
    int64_t rdx223;
    uint32_t eax224;
    uint16_t di225;
    int64_t rbp226;
    int64_t r9_227;
    uint32_t tmp32_228;
    int64_t rax229;
    uint64_t r12_230;
    int64_t rbp231;
    uint64_t rbx232;
    int64_t r9_233;
    uint64_t rcx234;
    int64_t r11_235;
    int64_t rsi236;
    int64_t r13_237;
    int64_t rdi238;
    uint32_t tmp32_239;
    int64_t r10_240;

    rbx7 = 0xa38751a7447de4c4;
    rdi8 = 0xd233e51417da54bb;
    *reinterpret_cast<unsigned char*>(&rdi8) = 93;
    __asm__("rcr r15d, 1");
    __asm__("rcr si, cl");
    if (0) {
        rbx7 = 0x9b7ccfa13675b5c;
    }
    if (1) {
        *reinterpret_cast<uint32_t*>(&rdi8) = *reinterpret_cast<uint32_t*>(&rbx7);
    }
    __asm__("bts r14w, 0xeb");
    __asm__("ror r15d, 0x52");
    __asm__("rol r14w, cl");
    *reinterpret_cast<uint16_t*>(&ebx9) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rbx7) + 0x5090)));
    *reinterpret_cast<int32_t*>(&r15_10) = 0x5eb84a8b;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_10) + 4) = 0;
    __asm__("btc si, 0xb4");
    if (0) {
    }
    __asm__("rcl cx, cl");
    __asm__("rol ecx, 1");
    __asm__("btr r10d, eax");
    __asm__("rcl r9b, cl");
    __asm__("ror r10w, cl");
    rbp11 = 46;
    __asm__("btc bx, 0x6d");
    __asm__("btr r11, r9");
    __asm__("rcl r12, cl");
    *reinterpret_cast<unsigned char*>(&rdi8) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi8) & 65);
    *reinterpret_cast<uint32_t*>(&rdi12) = *reinterpret_cast<uint32_t*>(&rdi8) - (0x2c10d1f9 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdi8) < 0xd3ef2e07));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rbp11) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ebx9) + 1) - 0x69);
    __asm__("shld edi, esi, 0x1");
    __asm__("rcl rdi, 0x71");
    rdi13 = reinterpret_cast<uint64_t>(rdi12 >> -69);
    rax14 = 0;
    __asm__("rcr r11, cl");
    __asm__("rol dil, 1");
    ax15 = 0xf8f9;
    r14_16 = 0xec;
    if (*reinterpret_cast<uint16_t*>(&rbp11) <= 0x374c) {
        ebx9 = *reinterpret_cast<int32_t*>(&rbp11);
    }
    __asm__("rcl bp, 1");
    __asm__("rcr r10w, 0x5c");
    r13_17 = reinterpret_cast<uint64_t>(-0xb082c389a2805090) ^ 0x5ee4f090;
    r12d18 = 0x757380bd | *reinterpret_cast<uint32_t*>(&r13_17);
    rbp19 = rbp11 + 0x1fe00166;
    __asm__("bsr eax, r8d");
    __asm__("bts r12, r10");
    __asm__("rcr r9, 0x4e");
    r13_20 = 0xffffffffb7c95bec;
    *reinterpret_cast<signed char*>(&ax21) = 23;
    r11_22 = 0x5b81a03;
    *reinterpret_cast<signed char*>(&r12d18) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r12d18) - 1);
    ecx23 = 0xbb;
    __asm__("rcl r11b, 1");
    __asm__("shrd ebp, r11d, 0x8e");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax21) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax15) + 1) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx23) + 1));
    __asm__("bsr r12w, r15w");
    if (0) {
    }
    *reinterpret_cast<uint16_t*>(&r11_22) = 0xda03;
    *reinterpret_cast<uint16_t*>(&rax14) = reinterpret_cast<uint16_t>(ax21 / 0xda03);
    __asm__("ror r9d, cl");
    *reinterpret_cast<uint32_t*>(&rcx24) = 0x97f7750e;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = 0;
    r9_25 = 0x97f7750e + r12d18 * 4;
    rax26 = *reinterpret_cast<int32_t*>(&rax14);
    __asm__("xadd r15, r13");
    ax27 = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rbp19) - 0x9e7b);
    *reinterpret_cast<int16_t*>(&r13_20) = 0;
    *reinterpret_cast<unsigned char*>(&r13_20) = reinterpret_cast<unsigned char>(0 >> 14);
    *reinterpret_cast<int16_t*>(&rbp19) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx24) + 1);
    if (*reinterpret_cast<uint16_t*>(&r9_25) == 0xda03) {
        tmp16_28 = *reinterpret_cast<uint16_t*>(&r9_25);
        *reinterpret_cast<uint16_t*>(&r9_25) = 0xda03;
        *reinterpret_cast<uint16_t*>(&r11_22) = tmp16_28;
    }
    __asm__("xadd r13, r10");
    __asm__("ror r10, 1");
    __asm__("btc r10d, r10d");
    *reinterpret_cast<uint32_t*>(&r11_29) = *reinterpret_cast<uint32_t*>(&r11_22) ^ 0x970ac1f3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_29) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rcx24) = reinterpret_cast<unsigned char>(14 >> 13);
    __asm__("rol rcx, 1");
    __asm__("cwd ");
    __asm__("rcl r12w, cl");
    __asm__("rol r15w, 0x0");
    rbp30 = rbp19 | 0x414bdeb2;
    *reinterpret_cast<unsigned char*>(&r11_29) = 0;
    __asm__("rol r13W, 0x49");
    __asm__("bts r9d, r12d");
    __asm__("rol r14b, 0xf6");
    *reinterpret_cast<uint32_t*>(&r13_31) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_20) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_31) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx24) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx24) + 1) | 0xc0);
    ax32 = reinterpret_cast<uint16_t>(ax27 & 0x3fff);
    ax33 = reinterpret_cast<uint16_t>(ax32 / static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx24) + 1)));
    *reinterpret_cast<unsigned char*>(&r14_16) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(0xec - reinterpret_cast<unsigned char>(0xec + *reinterpret_cast<signed char*>(&ebx9))) << 1);
    __asm__("bts r13, 0xf3");
    __asm__("rcr r9w, cl");
    *reinterpret_cast<int16_t*>(&r11_29) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r11_29) << 1);
    __asm__("rcr r10w, 1");
    __asm__("rol r13b, 1");
    __asm__("shrd rdx, rdx, 0x8d");
    rcx34 = reinterpret_cast<uint64_t>(rcx24 >> *reinterpret_cast<unsigned char*>(&rcx24));
    r10_35 = reinterpret_cast<uint64_t>(r13_31 * 0x6c3dac30);
    __asm__("xadd rcx, r11");
    if (!__intrinsic()) {
        r15_10 = r10_35;
    }
    *reinterpret_cast<signed char*>(&ax33) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ax33) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax33) + 1));
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r10_35) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(ax32 % static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx24) + 1))) ^ 0xbd8f);
    }
    __asm__("rol cx, 0xd4");
    __asm__("btc r8w, 0x3d");
    *reinterpret_cast<uint16_t*>(&r12d18) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12d18) - reinterpret_cast<uint16_t>(0x6ce9 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r12d18) < 0x6ce9)));
    r14_36 = r14_16 * 0x3c720029;
    __asm__("xadd r12d, ebp");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx34) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx34) + 1) | 0xc0);
    *reinterpret_cast<uint16_t*>(&rax26) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(ax33 & 0x3fff) / static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx34) + 1)));
    *reinterpret_cast<uint16_t*>(&rdi13) = -0xbb;
    if (1) {
    }
    r15_37 = r15_10 | 0xc000000000000000;
    rdx38 = rax26 % r15_37;
    rax39 = rax26 / r15_37;
    if (0) {
        *reinterpret_cast<uint32_t*>(&rbp30) = *reinterpret_cast<uint32_t*>(&r9_25);
    }
    *reinterpret_cast<uint32_t*>(&rbp40) = *reinterpret_cast<uint32_t*>(&rbp30) ^ 0xc5882108;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp40) + 4) = 0;
    __asm__("rcl rcx, 1");
    *reinterpret_cast<unsigned char*>(&rcx34) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx34) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx38) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx34) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx38) + 1))));
    *reinterpret_cast<uint32_t*>(&r12_41) = r12d18 - (*reinterpret_cast<uint32_t*>(&r11_29) + reinterpret_cast<uint1_t>(r12d18 < *reinterpret_cast<uint32_t*>(&r11_29)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_41) + 4) = 0;
    if (reinterpret_cast<int32_t>(r12d18) > *reinterpret_cast<int32_t*>(&r11_29)) {
        *reinterpret_cast<uint32_t*>(&rcx34) = *reinterpret_cast<uint32_t*>(&r9_25);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx34) + 4) = 0;
    }
    __asm__("bts esi, 0x17");
    r15_42 = r15_37 + r12_41 + 1;
    *reinterpret_cast<uint32_t*>(&r13_43) = *reinterpret_cast<uint32_t*>(&r13_31) & 0x3db5423f;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_43) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rdx38) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx38) >> 1);
    rsi44 = r12_41 + 0x7ffffffffffffffe - 0x84a926b;
    esi45 = *reinterpret_cast<uint32_t*>(&rsi44) | *reinterpret_cast<uint32_t*>(&r15_42);
    if (__intrinsic()) {
    }
    r15_46 = r15_42 + rdi13;
    __asm__("rol r9b, 0xaf");
    __asm__("shld r10, r15, 0x1");
    r9d47 = *reinterpret_cast<uint32_t*>(&r9_25) - 0x5f139736;
    *reinterpret_cast<int16_t*>(&rax39) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax39) * *reinterpret_cast<signed char*>(&rdi13));
    *reinterpret_cast<uint16_t*>(&esi45) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi45) + *reinterpret_cast<uint16_t*>(&r10_35))));
    __asm__("rcl ch, 1");
    __asm__("btr r9, r9");
    if (!static_cast<int1_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi13) >> -1))) {
        r9d47 = *reinterpret_cast<uint32_t*>(&rbp40);
    }
    *reinterpret_cast<uint16_t*>(&r10_35) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_35) + 0x2a4d)));
    *reinterpret_cast<int32_t*>(&rax48) = *reinterpret_cast<int32_t*>(&rax39) * *reinterpret_cast<int32_t*>(&rdx38);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax48) + 4) = 0;
    __asm__("rcl rdi, 1");
    __asm__("rcl r13, 1");
    *reinterpret_cast<unsigned char*>(&rcx34) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx34) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx38) + 1)) - 18) + 1);
    *reinterpret_cast<int16_t*>(&r15_46) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r15_46) + 1);
    __asm__("rcr edx, 1");
    *reinterpret_cast<uint32_t*>(&r9_49) = r9d47 - *reinterpret_cast<uint32_t*>(&rbp40);
    *reinterpret_cast<uint16_t*>(&rdi13) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi13) + *reinterpret_cast<uint16_t*>(&rcx34)) + 1);
    *reinterpret_cast<int16_t*>(&r13_43) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r13_43) - 1);
    *reinterpret_cast<uint32_t*>(&r14_50) = *reinterpret_cast<uint32_t*>(&r14_36) - (0x6e40bf78 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r14_36) < 0x6e40bf79));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_50) + 4) = 0;
    __asm__("ror r15d, cl");
    __asm__("cwd ");
    rax51 = rax48 * rdi13;
    rdx52 = __intrinsic();
    __asm__("btr rdi, 0xf6");
    *reinterpret_cast<uint16_t*>(&rbp40) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp40) >> *reinterpret_cast<unsigned char*>(&rcx34));
    r12d53 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&r13_43)));
    *reinterpret_cast<int32_t*>(&rax54) = *reinterpret_cast<int16_t*>(&rax51);
    __asm__("bts r11d, r8d");
    __asm__("rol r10d, cl");
    __asm__("xadd r15, r11");
    __asm__("ror r8, 1");
    *reinterpret_cast<int16_t*>(&rdx52) = static_cast<int16_t>(rbp40 + r13_43 * 8);
    __asm__("rcl bx, 1");
    __asm__("shld r15, rbp, cl");
    __asm__("rol r15w, cl");
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(&rax54) & 0xff) == 0)))) {
        esi45 = *reinterpret_cast<uint32_t*>(&r10_35);
    }
    tmp8_55 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_46) + 0xc1) + 1);
    *reinterpret_cast<unsigned char*>(&r15_46) = *reinterpret_cast<unsigned char*>(&r9_49);
    *reinterpret_cast<unsigned char*>(&r9_49) = tmp8_55;
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx52) + 1) == *reinterpret_cast<signed char*>(&rdx52)) {
        tmp8_56 = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx52) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx52) + 1) = *reinterpret_cast<signed char*>(&rdx52);
        *reinterpret_cast<signed char*>(&rdx52) = tmp8_56;
    }
    rdx57 = rdx52 & r10_35;
    dx58 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx57) >> 65);
    *reinterpret_cast<uint16_t*>(&rcx34) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx34) | 0x3df7);
    *reinterpret_cast<int32_t*>(&rsi59) = reinterpret_cast<int32_t>(esi45) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi59) + 4) = 0;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx34) + 1) > *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx34) + 1)) {
        r9_49 = r11_29;
    }
    __asm__("ror r15w, 0x5f");
    __asm__("ror r12, 1");
    r13d60 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&r13_43)));
    rsi61 = rsi59 - (rcx34 + reinterpret_cast<uint1_t>(rsi59 < rcx34));
    *reinterpret_cast<unsigned char*>(&rcx34) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx34) & 15);
    __asm__("shrd bx, r9w, cl");
    r14_62 = r14_50 ^ 0xffffffff8c918772;
    __asm__("rcl r15, 0xc5");
    rcx63 = rcx34 * 0x4c00f804;
    *reinterpret_cast<uint16_t*>(&r9_49) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_49) + 0x273c)));
    ecx64 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx63) + 0x3ca88f6e);
    __asm__("shld r14w, dx, 0x1");
    __asm__("rcr r12, cl");
    *reinterpret_cast<int16_t*>(&rax54) = *reinterpret_cast<signed char*>(&dx58);
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx64) + 1) == *reinterpret_cast<unsigned char*>(&rax54)) {
    }
    __asm__("rol bpl, cl");
    r12_65 = *reinterpret_cast<unsigned char*>(&r12d53);
    __asm__("ror r14b, 1");
    *reinterpret_cast<signed char*>(&r12_65) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&r12_65)) >> 1);
    __asm__("btr r15d, ebx");
    __asm__("btc r10w, 0xfe");
    __asm__("rcl dh, cl");
    *reinterpret_cast<uint16_t*>(&r10_35) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&rsi61)));
    *reinterpret_cast<uint16_t*>(&rbp40) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(-*reinterpret_cast<uint16_t*>(&rbp40) * 0x176d) << 1);
    r10d66 = *reinterpret_cast<uint32_t*>(&r10_35) >> -82;
    *reinterpret_cast<unsigned char*>(&r11_29) = -0;
    r10d67 = r10d66 - (0x1a4a324d - reinterpret_cast<uint1_t>(r10d66 < 0xe5b5cdb3));
    *reinterpret_cast<uint32_t*>(&r14_68) = *reinterpret_cast<int32_t*>(&r14_62) + r12d53 + *reinterpret_cast<uint32_t*>(&r9_49);
    __asm__("ror r14d, cl");
    *reinterpret_cast<unsigned char*>(&rdi13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi13) + *reinterpret_cast<unsigned char*>(&r9_49));
    __asm__("rcr ebx, 1");
    __asm__("shld r14w, r11w, 0x1");
    *reinterpret_cast<uint32_t*>(&r9_69) = *reinterpret_cast<uint32_t*>(&r9_49) >> 24 | *reinterpret_cast<uint32_t*>(&r9_49) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&r9_49) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&r9_49) << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_69) + 4) = 0;
    __asm__("btc r14d, r11d");
    rbp70 = rbp40 * 0xffffffffa631147f;
    __asm__("rcl r9b, 0x56");
    ebx71 = 0x12afcedd;
    r12d72 = *reinterpret_cast<int32_t*>(&r12_65) + r13d60 + __intrinsic();
    __asm__("btr ebx, 0x32");
    *reinterpret_cast<uint32_t*>(&r13_73) = r13d60 - (*reinterpret_cast<uint32_t*>(&r11_29) + reinterpret_cast<uint1_t>(r13d60 < *reinterpret_cast<uint32_t*>(&r11_29) + 1));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_73) + 4) = 0;
    __asm__("rcr ch, 1");
    __asm__("rcl rbx, 0xbe");
    tmp32_74 = __intrinsic() + 0x73d74427;
    *reinterpret_cast<uint32_t*>(&rdx75) = tmp32_74;
    if (tmp32_74 < __intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r9_69) = *reinterpret_cast<uint32_t*>(&r14_68);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_69) + 4) = 0;
    }
    *reinterpret_cast<uint16_t*>(&rdi13) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi13) << 1);
    __asm__("shld r15, rcx, 0x87");
    rcx76 = r15_46;
    __asm__("btr bx, 0xd4");
    *reinterpret_cast<uint32_t*>(&rdi77) = *reinterpret_cast<uint32_t*>(&rdi13) & 0x663e7a69;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi77) + 4) = 0;
    __asm__("rcl r11, 1");
    *reinterpret_cast<signed char*>(&ebx71) = reinterpret_cast<signed char>(35 - *reinterpret_cast<signed char*>(&rbp70));
    r9_78 = r9_69 + 1;
    r11_79 = r11_29 >> 88 | 0x1aadbbc3;
    __asm__("rcl rdx, cl");
    __asm__("xadd bl, ah");
    *reinterpret_cast<int32_t*>(&rbp80) = ~*reinterpret_cast<int32_t*>(&rbp70);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp80) + 4) = 0;
    __asm__("btr rbx, r13");
    __asm__("xadd rbp, r9");
    *reinterpret_cast<int16_t*>(&rdx75) = __intrinsic();
    *reinterpret_cast<unsigned char*>(&r9_78) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_78) + *reinterpret_cast<unsigned char*>(&rbp80)) + 1);
    if (__intrinsic()) {
    }
    *reinterpret_cast<unsigned char*>(&r10d67) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10d67) | *reinterpret_cast<unsigned char*>(&r13_73));
    *reinterpret_cast<unsigned char*>(&rbp80) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp80) + *reinterpret_cast<signed char*>(&r14_68)) - 75) + 1);
    __asm__("rcl rdi, 0xca");
    *reinterpret_cast<signed char*>(&rsi61) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rsi61) >> 95);
    *reinterpret_cast<uint16_t*>(&rbp80) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp80) ^ 0x6962);
    __asm__("rol cl, 0xc0");
    __asm__("bts cx, 0x5c");
    *reinterpret_cast<signed char*>(&r14_68) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r14_68) + 0x75);
    rdi81 = -rdi77;
    if (__intrinsic() != __intrinsic()) {
    }
    __asm__("shrd r10, r9, 0xcf");
    eax82 = ebx71 * *reinterpret_cast<uint32_t*>(&rdx75);
    edx83 = __intrinsic();
    __asm__("xadd edx, r10d");
    rbp84 = reinterpret_cast<uint64_t>(rbp80 >> 1);
    __asm__("rcl r10d, cl");
    *reinterpret_cast<uint32_t*>(&r12_85) = r12d72 - (0x16c64bdf + reinterpret_cast<uint1_t>(r12d72 < 0x16c64be0)) - *reinterpret_cast<uint32_t*>(&r14_68);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_85) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rcx76) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx76) & 15);
    __asm__("shld si, r13W, cl");
    r14d86 = *reinterpret_cast<int16_t*>(&edx83);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx83) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&edx83) + 1) >> *reinterpret_cast<unsigned char*>(&rcx76));
    __asm__("xadd r10d, ebx");
    __asm__("rol bpl, cl");
    *reinterpret_cast<uint32_t*>(&rsi87) = *reinterpret_cast<uint32_t*>(&rsi61) >> -55;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi87) + 4) = 0;
    __asm__("shld r12, rdx, 0xf0");
    *reinterpret_cast<uint16_t*>(&r10d67) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10d67) * 0x98f2);
    __asm__("rcr r8d, 0x82");
    if (*reinterpret_cast<uint16_t*>(&eax82) == 0xa6b6) {
        *reinterpret_cast<uint32_t*>(&rsi87) = *reinterpret_cast<uint32_t*>(&rdi81) >> *reinterpret_cast<unsigned char*>(&rcx76);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi87) + 4) = 0;
    }
    if (!__intrinsic()) {
    }
    *reinterpret_cast<uint32_t*>(&rbx88) = edx83 * 0x3e255ae9;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx88) + 4) = 0;
    __asm__("shrd r9, r12, 0x82");
    *reinterpret_cast<uint16_t*>(&rcx76) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx76) ^ 0x1990);
    rbx89 = rbx88 << 1;
    r9d90 = *reinterpret_cast<int32_t*>(&r9_78) + eax82 + 1;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx89) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx83) + 1)));
    if (reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx89) + 1) == 0)) {
        *reinterpret_cast<uint16_t*>(&eax82) = *reinterpret_cast<uint16_t*>(&r9d90);
    }
    r13_91 = r13_73 | 0xffffffffb56ca1f3;
    if (0) {
        rcx76 = rbp84;
    }
    r8d92 = *reinterpret_cast<int32_t*>(&rbx89) + r10d67 * 4 + 0xd93e71fc;
    __asm__("btr ax, r11w");
    *reinterpret_cast<uint32_t*>(&rcx93) = *reinterpret_cast<uint32_t*>(&rcx76) ^ *reinterpret_cast<uint32_t*>(&r13_91);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx93) + 4) = 0;
    *reinterpret_cast<signed char*>(&r11_79) = *reinterpret_cast<signed char*>(&r8d92);
    *reinterpret_cast<uint16_t*>(&eax82) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax82) >> *reinterpret_cast<unsigned char*>(&rcx76)) * *reinterpret_cast<int16_t*>(&rsi87));
    dx94 = __intrinsic();
    __asm__("ror bl, cl");
    *reinterpret_cast<uint16_t*>(&rbp84) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx89) + 1)));
    tmp64_95 = (rbx89 & 0xffffffff) << 32 | (rbx89 & 0xffffffff00000000) >> 32;
    tmp64_96 = (tmp64_95 & 0xffff0000ffff) << 16 | (tmp64_95 & 0xffff0000ffff0000) >> 16;
    rbx97 = (tmp64_96 & 0xff00ff00ff00ff) << 8 | (tmp64_96 & 0xff00ff00ff00ff00) >> 8;
    r12_98 = reinterpret_cast<uint64_t>(r12_85 >> 1);
    __asm__("ror r12, cl");
    __asm__("lahf ");
    *reinterpret_cast<int16_t*>(&rsi87) = reinterpret_cast<int16_t>(~*reinterpret_cast<int16_t*>(&rsi87));
    __asm__("xadd al, r8b");
    __asm__("btc r10, 0xdc");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx97) + 1) = __intrinsic();
    cf99 = reinterpret_cast<uint1_t>(rcx93 < 0xffffffffbe5171c0);
    rcx100 = rcx93 - (0x41ae8e41 - static_cast<uint64_t>(cf99));
    *reinterpret_cast<uint16_t*>(&r12_98) = static_cast<uint16_t>(r9d90 + (r14d86 + edx83) * 4 + 51);
    if (!cf99) {
        *reinterpret_cast<uint16_t*>(&rcx100) = *reinterpret_cast<uint16_t*>(&rbp84);
    }
    *reinterpret_cast<uint32_t*>(&rax101) = eax82 - (r9d90 + reinterpret_cast<uint1_t>(eax82 < r9d90 + cf99));
    rsi102 = rsi87 & r12_98;
    tmp8_103 = *reinterpret_cast<unsigned char*>(&rax101);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx100) + 1) = tmp8_103;
    __asm__("rol dil, 1");
    r13d104 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_91) >> 1);
    __asm__("rcl r12b, cl");
    __asm__("bts r12d, 0x1e");
    rbp105 = reinterpret_cast<int64_t>(~rbp84);
    rdi106 = 0xda4b203a07758e3e;
    *reinterpret_cast<unsigned char*>(&rdi106) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(62 + *reinterpret_cast<signed char*>(&r13d104)) + __intrinsic());
    __asm__("shrd r9, r10, 0x1");
    *reinterpret_cast<int32_t*>(&rax107) = reinterpret_cast<signed char>(-reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&dx94) + 1) + *reinterpret_cast<signed char*>(&rcx93)) + __intrinsic()) ^ *reinterpret_cast<unsigned char*>(&dx94)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax107) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rcx100) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx100) & 0x6bc3);
    __asm__("rcr r10w, 1");
    *reinterpret_cast<uint32_t*>(&r9_108) = r9d90 - (r9d90 + reinterpret_cast<uint1_t>(r9d90 < r9d90 + 1));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_108) + 4) = 0;
    __asm__("shld r9w, di, cl");
    rax109 = rax107 * rbx97;
    rdx110 = __intrinsic();
    *reinterpret_cast<int32_t*>(&rax111) = *reinterpret_cast<int32_t*>(&rax109) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax111) + 4) = 0;
    bx112 = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbx97) + 0x7335) + 1);
    if (!bx112) {
        *reinterpret_cast<uint16_t*>(&r11_79) = bx112;
    }
    __asm__("xadd r14w, r9w");
    *reinterpret_cast<unsigned char*>(&r9_108) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_108) >> 0x87);
    edi113 = *reinterpret_cast<uint32_t*>(&rdi106) ^ 0x466817fa;
    __asm__("rcr r14, 0x90");
    *reinterpret_cast<unsigned char*>(&rcx100) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx100) & 15) & 15);
    __asm__("shrd r12w, si, cl");
    __asm__("xadd r10d, edi");
    *reinterpret_cast<uint16_t*>(&rbp105) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp105) + 0x2d2e)));
    tmp8_114 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax111) + 1) + *reinterpret_cast<signed char*>(&rdx110))));
    cf115 = reinterpret_cast<uint1_t>(tmp8_114 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax111) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax111) + 1) = tmp8_114;
    *reinterpret_cast<uint32_t*>(&r8_116) = *reinterpret_cast<uint32_t*>(&rsi87) + eax82 * 8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_116) + 4) = 0;
    r15d117 = r8d92;
    rax118 = rax111 - (0x2943df6a + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rax111 < 0x2943df6a + static_cast<uint64_t>(cf115))));
    bx119 = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(bx112) >> 0xff8a);
    __asm__("btr r9w, r9w");
    __asm__("xadd ah, bl");
    cf120 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r11_79) < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rsi102) + __intrinsic()));
    r11w121 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_79) - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rsi102) + cf120));
    if (reinterpret_cast<int16_t>(r11w121) < reinterpret_cast<int16_t>(static_cast<uint32_t>(cf120))) {
    }
    if (r11w121 == static_cast<uint32_t>(cf120)) {
        rbp105 = r9_108;
    }
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx100) + 1) == *reinterpret_cast<unsigned char*>(&bx119)) {
        tmp8_122 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx100) + 1);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx100) + 1) = *reinterpret_cast<unsigned char*>(&bx119);
        *reinterpret_cast<unsigned char*>(&bx119) = tmp8_122;
    }
    *reinterpret_cast<signed char*>(&edi113) = -*reinterpret_cast<signed char*>(&edi113);
    *reinterpret_cast<uint32_t*>(&r13_123) = r13d104 >> 24 | r13d104 >> 8 & 0xff00 | r13d104 << 8 & 0xff0000 | r13d104 << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_123) + 4) = 0;
    __asm__("btr rbx, rbp");
    *reinterpret_cast<uint16_t*>(&rbp105) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp105) | 0xc000);
    *reinterpret_cast<uint16_t*>(&rdx110) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax118) % *reinterpret_cast<uint16_t*>(&rbp105));
    *reinterpret_cast<uint16_t*>(&rax118) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax118) / *reinterpret_cast<uint16_t*>(&rbp105));
    if (*reinterpret_cast<unsigned char*>(&rax118) <= 0x65) {
        bx119 = *reinterpret_cast<uint16_t*>(&r10d67);
    }
    __asm__("rcr r8d, 1");
    *reinterpret_cast<signed char*>(&r8_116) = -*reinterpret_cast<signed char*>(&r8_116);
    *reinterpret_cast<unsigned char*>(&bx119) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&bx119) - reinterpret_cast<unsigned char>(0x69 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&bx119) < 0x97)));
    bx124 = reinterpret_cast<uint16_t>(bx119 - reinterpret_cast<uint16_t>(0x4ba9 - reinterpret_cast<uint1_t>(bx119 < 0xb457)));
    __asm__("xadd ebp, r8d");
    if (__intrinsic()) {
        rcx100 = rdx110;
    }
    __asm__("shrd r9, rcx, 0x1c");
    __asm__("bts bp, 0xed");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax118) + 1) = 0xff;
    if (1) {
    }
    bl125 = *reinterpret_cast<unsigned char*>(&r9_108);
    __asm__("rol r13b, cl");
    esi126 = *reinterpret_cast<uint32_t*>(&rsi102) | 0xc0000000;
    *reinterpret_cast<uint32_t*>(&rdx127) = *reinterpret_cast<uint32_t*>(&rax118) % esi126;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx127) + 4) = 0;
    eax128 = *reinterpret_cast<uint32_t*>(&rax118) / esi126;
    __asm__("shrd r10d, r10d, 0x1");
    r11w129 = reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rcx100)));
    eax130 = eax128 >> 24 | eax128 >> 8 & 0xff00 | eax128 << 8 & 0xff0000 | eax128 << 24;
    __asm__("bsr r8, rsi");
    rdx131 = rdx127 ^ 0xffffffff8e3f7786;
    __asm__("ror r9w, 1");
    *reinterpret_cast<unsigned char*>(&r10d67) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10d67) << *reinterpret_cast<unsigned char*>(&rcx100));
    cf132 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdx131) < esi126 + 1);
    edx133 = *reinterpret_cast<uint32_t*>(&rdx131) - (esi126 + cf132);
    *reinterpret_cast<unsigned char*>(&r15d117) = reinterpret_cast<uint1_t>(edx133 == static_cast<uint32_t>(cf132));
    __asm__("btr ax, 0xe5");
    *reinterpret_cast<unsigned char*>(&r13_123) = 0;
    __asm__("bts r10w, bp");
    *reinterpret_cast<uint32_t*>(&rbp134) = bl125;
    *reinterpret_cast<unsigned char*>(&r11w129) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11w129) - reinterpret_cast<unsigned char>(99 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r11w129) < 0x9e)));
    __asm__("ror r8, cl");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax130) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax130) + 1) - 1);
    __asm__("ror r13b, 1");
    if (*reinterpret_cast<uint16_t*>(&r10d67) == *reinterpret_cast<uint16_t*>(&r12_98)) {
        *reinterpret_cast<uint16_t*>(&r10d67) = *reinterpret_cast<uint16_t*>(&r12_98);
    }
    *reinterpret_cast<int32_t*>(&r9_135) = *reinterpret_cast<int16_t*>(&r15d117);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_135) + 4) = 0;
    cf136 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx133) + 1) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx100) + 1))));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx133) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx133) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx100) + 1) + cf136));
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&edx133) + 1) >= reinterpret_cast<signed char>(static_cast<uint32_t>(cf136))) {
        *reinterpret_cast<uint32_t*>(&rcx100) = r15d117;
    }
    __asm__("ror r8w, 0x1c");
    r10d137 = r10d67 & *reinterpret_cast<uint32_t*>(&r13_123);
    if (__intrinsic()) {
        edx133 = -(edi113 | 0x8c11394d);
    }
    if (__intrinsic()) {
        eax130 = *reinterpret_cast<uint32_t*>(&rcx100);
    }
    __asm__("rcr sil, cl");
    r9_138 = r9_135 >> 1;
    *reinterpret_cast<uint32_t*>(&r12_139) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_139) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rdi140) = *reinterpret_cast<uint32_t*>(&r8_116) * 0x107254c7;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi140) + 4) = 0;
    less_or_equal141 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax130) <= reinterpret_cast<signed char>(1));
    *reinterpret_cast<unsigned char*>(&eax130) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax130) - reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax130) < 1))));
    *reinterpret_cast<unsigned char*>(&edx133) = less_or_equal141;
    eax142 = reinterpret_cast<int32_t>(eax130) >> -67;
    *reinterpret_cast<unsigned char*>(&rbx97) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&bx124) + 1);
    *reinterpret_cast<int16_t*>(&rdi140) = *reinterpret_cast<int16_t*>(&r13_123);
    *reinterpret_cast<unsigned char*>(&r12_139) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax142)));
    __asm__("rol r14w, cl");
    if (0) {
        *reinterpret_cast<int16_t*>(&rdi140) = *reinterpret_cast<int16_t*>(&r9_138);
    }
    if (0) {
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx133) + 1) = 0;
    __asm__("btr r12w, r14w");
    __asm__("bsf r10w, r11w");
    __asm__("xadd r8w, r9w");
    *reinterpret_cast<uint16_t*>(&rcx100) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx100) + 0x52b8) + 1);
    __asm__("shrd r12w, r10w, 0xc");
    __asm__("shld esi, eax, cl");
    *reinterpret_cast<int32_t*>(&rsi143) = reinterpret_cast<int32_t>(esi126) >> 5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi143) + 4) = 0;
    __asm__("rol r15d, 1");
    *reinterpret_cast<uint32_t*>(&r15_144) = r10d137 + edx133 + 0xcb;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_144) + 4) = 0;
    cf145 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbp134) < 0xcaf14ef9);
    ebp146 = *reinterpret_cast<uint32_t*>(&rbp134) - (0x350eb107 - cf145);
    if (*reinterpret_cast<int32_t*>(&rbp134) < reinterpret_cast<int32_t>(0xcaf14ef9)) {
        rcx100 = r13_123;
    }
    if (ebp146 != static_cast<uint32_t>(cf145)) {
        *reinterpret_cast<int16_t*>(&rbx97) = *reinterpret_cast<int16_t*>(&r13_123);
    }
    __asm__("shrd ebx, r8d, cl");
    __asm__("shrd r8d, r10d, cl");
    *reinterpret_cast<int16_t*>(&eax142) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&eax142) * *reinterpret_cast<signed char*>(&r15_144));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx97) + 1) = __intrinsic();
    __asm__("bts r15, 0xfd");
    __asm__("btr rbp, r14");
    __asm__("rcr ecx, 0x8");
    *reinterpret_cast<int32_t*>(&rax147) = eax142 >> 54;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax147) + 4) = 0;
    __asm__("bts rbx, r9");
    *reinterpret_cast<unsigned char*>(&rcx100) = 0;
    __asm__("shld bx, bp, cl");
    *reinterpret_cast<int16_t*>(&rax147) = *reinterpret_cast<signed char*>(&rax147);
    __asm__("rol rcx, 0x95");
    tmp16_148 = *reinterpret_cast<uint16_t*>(&rcx100);
    *reinterpret_cast<uint16_t*>(&r8_116) = tmp16_148;
    *reinterpret_cast<int32_t*>(&r9_149) = ~*reinterpret_cast<int32_t*>(&r9_138);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_149) + 4) = 0;
    tmp8_150 = reinterpret_cast<unsigned char>(61 + *reinterpret_cast<unsigned char*>(&rax147));
    if (tmp8_150) {
    }
    *reinterpret_cast<int32_t*>(&r14_151) = *reinterpret_cast<int16_t*>(&rsi143);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_151) + 4) = 0;
    __asm__("rol r12w, 0xa9");
    __asm__("xadd edx, r9d");
    if (tmp8_150 < 61) {
        *reinterpret_cast<uint32_t*>(&r12_139) = *reinterpret_cast<uint32_t*>(&rbx97);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_139) + 4) = 0;
    }
    __asm__("rol ebx, 0x13");
    rdi152 = rdi140 ^ rax147;
    rsi153 = rsi143 - 0x51aed3a4 + 1;
    rbx154 = rbx97 & r9_149;
    *reinterpret_cast<unsigned char*>(&rbx154) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(__intrinsic())));
    __asm__("shld rsi, r8, 0xf9");
    __asm__("xadd dl, r9b");
    if (*reinterpret_cast<signed char*>(&rbx154) >= reinterpret_cast<signed char>(0)) {
        *reinterpret_cast<uint16_t*>(&r8_116) = r11w129;
    }
    r14_155 = r14_151 + 0xffffffffc9c7fcd2;
    if (reinterpret_cast<int64_t>(r14_155) < reinterpret_cast<int64_t>(0)) {
    }
    rax156 = rax147 + r12_139;
    __asm__("bsf ebp, edi");
    __asm__("btr r8d, ebx");
    *reinterpret_cast<uint32_t*>(&rax157) = *reinterpret_cast<uint32_t*>(&rax156) >> 0x7d;
    __asm__("rol r15w, cl");
    *reinterpret_cast<unsigned char*>(&r15_144) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(~*reinterpret_cast<unsigned char*>(&r15_144)) ^ *reinterpret_cast<unsigned char*>(&rdi152));
    rcx158 = *reinterpret_cast<int16_t*>(&rsi143) + r8_116;
    __asm__("bsr r10, rcx");
    edi159 = *reinterpret_cast<uint32_t*>(&rdi152) >> 24 | *reinterpret_cast<uint32_t*>(&rdi152) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&rdi152) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&rdi152) << 24;
    ebx160 = (*reinterpret_cast<uint32_t*>(&rbx154) >> 24 | *reinterpret_cast<uint32_t*>(&rbx154) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&rbx154) << 24) & 0xc12ae1e0;
    *reinterpret_cast<unsigned char*>(&rsi153) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(ebx160 == 0)));
    cf161 = reinterpret_cast<uint1_t>(ebx160 < 0xacd7c779);
    ebx162 = ebx160 - (0x53283887 - cf161);
    __asm__("ror r14b, 1");
    if (!cf161) {
    }
    __asm__("shrd r8, r10, 0x1");
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r8_116) = *reinterpret_cast<uint16_t*>(&r14_155);
    }
    __asm__("shrd esi, r9d, 0x1");
    *reinterpret_cast<unsigned char*>(&rcx158) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&rcx158) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rax157) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx158) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rax157) + cf161)))) >> 1) & 15);
    __asm__("shrd di, dx, cl");
    r8_163 = r8_116 - 1;
    *reinterpret_cast<int32_t*>(&r9_164) = reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&rsi153) & 0xa969);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_164) + 4) = 0;
    if (1) {
        *reinterpret_cast<uint16_t*>(&r14_155) = *reinterpret_cast<uint16_t*>(&r15_144);
    }
    *reinterpret_cast<int16_t*>(&ebx162) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx162) >> *reinterpret_cast<unsigned char*>(&rcx158));
    __asm__("rol r14w, cl");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx158) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx158) + 1) - 1);
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx158) + 1) < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx158) + 1) == 0)) {
    }
    ebx165 = ebx162 - 0x11bc937;
    __asm__("shld r9d, ebp, 0x39");
    *reinterpret_cast<int16_t*>(&r12_139) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r12_139) - 0x55d5);
    r13_166 = rcx158 * 0x2e363f04;
    *reinterpret_cast<unsigned char*>(&ebx165) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx165) ^ *reinterpret_cast<unsigned char*>(&r8_163));
    *reinterpret_cast<int32_t*>(&r11_167) = *reinterpret_cast<int32_t*>(&r8_163);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_167) + 4) = 0;
    r10_168 = static_cast<uint64_t>(*reinterpret_cast<unsigned char*>(&edi159)) + 1;
    __asm__("xadd ah, al");
    *reinterpret_cast<uint16_t*>(&ebx165) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx165) & *reinterpret_cast<uint16_t*>(&r9_164));
    tmp8_169 = *reinterpret_cast<unsigned char*>(&r10_168);
    *reinterpret_cast<unsigned char*>(&r10_168) = reinterpret_cast<uint1_t>(r10_168 == 0);
    eax170 = *reinterpret_cast<uint32_t*>(&r12_139);
    __asm__("rol r15, 1");
    __asm__("rcl r14d, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ebx165) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ebx165) + 1) | *reinterpret_cast<unsigned char*>(&ebx165));
    *reinterpret_cast<uint32_t*>(&rbx171) = ebx165 << 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx171) + 4) = 0;
    __asm__("btc rbp, r8");
    __asm__("rcr r11b, 1");
    r14d172 = reinterpret_cast<uint32_t>(-*reinterpret_cast<int32_t*>(&r14_155));
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx171) + 1) <= *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax170) + 1)) {
        *reinterpret_cast<uint32_t*>(&r12_139) = *reinterpret_cast<uint32_t*>(&r10_168);
    }
    *reinterpret_cast<int32_t*>(&r8_173) = *reinterpret_cast<int16_t*>(&rbx171);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_173) + 4) = 0;
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&edi159) = *reinterpret_cast<uint16_t*>(&eax170);
    }
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&rcx158) = *reinterpret_cast<int16_t*>(&rbx171);
    }
    __asm__("shrd r14, r14, cl");
    *reinterpret_cast<unsigned char*>(&rcx158) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx158) & 15);
    __asm__("shld ax, cx, cl");
    edi174 = reinterpret_cast<int32_t>(~edi159);
    __asm__("ror r12, 1");
    *reinterpret_cast<int16_t*>(&r11_167) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r11_167) - 0x71ae);
    ecx175 = *reinterpret_cast<int32_t*>(&rcx158) + 0x3871aa46 + 1;
    esi176 = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(tmp8_169)));
    __asm__("bsf ecx, r12d");
    *reinterpret_cast<signed char*>(&rbx171) = -75;
    __asm__("bts rsi, r8");
    __asm__("xadd r15b, bpl");
    r15_177 = ~r15_144;
    __asm__("rcl bp, cl");
    __asm__("bsr ebp, ebx");
    cf178 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r9_164) < *reinterpret_cast<uint16_t*>(&ecx175));
    *reinterpret_cast<uint16_t*>(&r9_164) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_164) - *reinterpret_cast<uint16_t*>(&ecx175));
    *reinterpret_cast<uint16_t*>(&r14d172) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14d172) - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r15_177) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r14d172) < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r15_177) + cf178))));
    *reinterpret_cast<unsigned char*>(&r11_167) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_167) - reinterpret_cast<unsigned char>(41 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r11_167) < 42)));
    *reinterpret_cast<uint32_t*>(&r10_179) = *reinterpret_cast<uint32_t*>(&r10_168) >> *reinterpret_cast<signed char*>(&ecx175);
    r9_180 = r9_164 & rbx171;
    *reinterpret_cast<int16_t*>(&r10_179) = *reinterpret_cast<int16_t*>(&r12_139);
    *reinterpret_cast<unsigned char*>(&edi174) = reinterpret_cast<uint1_t>(__intrinsic());
    __asm__("rcl r11b, 1");
    ecx181 = ecx175 - 1;
    ax182 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax170) - 0x46e3);
    *reinterpret_cast<uint32_t*>(&r15_183) = *reinterpret_cast<uint32_t*>(&r15_177) >> 24 | *reinterpret_cast<uint32_t*>(&r15_177) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&r15_177) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&r15_177) << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_183) + 4) = 0;
    __asm__("shld bp, r11w, cl");
    __asm__("bsf rax, r12");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx171) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx171) + 1) - 0x7f);
    if (!__intrinsic()) {
    }
    *reinterpret_cast<signed char*>(&r9_180) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r9_180) >> reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx181) & 15));
    *reinterpret_cast<uint16_t*>(&ebp146) = reinterpret_cast<uint16_t>(~reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebp146) + 0x2e3e))));
    __asm__("rol bh, 0x58");
    *reinterpret_cast<unsigned char*>(&r13_166) = *reinterpret_cast<unsigned char*>(&r15_183);
    *reinterpret_cast<uint32_t*>(&rdi184) = *reinterpret_cast<uint32_t*>(&rbx171);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi184) + 4) = 0;
    rcx185 = r11_167 * 0xffffffffd9f4fc64;
    __asm__("rol di, cl");
    __asm__("btc r10, 0xcf");
    __asm__("shld edx, ebp, 0x1");
    if (0) {
    }
    *reinterpret_cast<uint16_t*>(&esi176) = 0xc000;
    *reinterpret_cast<uint16_t*>(&eax170) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&ax182) * *reinterpret_cast<signed char*>(&ax182)) / 0xc000);
    *reinterpret_cast<int16_t*>(&rdi184) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rdi184) >> 1);
    *reinterpret_cast<uint32_t*>(&r9_186) = *reinterpret_cast<uint32_t*>(&r9_180) - (0x37ced4f7 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r9_180) < 0xc8312b0a));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_186) + 4) = 0;
    r9_187 = -r9_186;
    __asm__("shld ebx, r15d, 0x1");
    *reinterpret_cast<uint16_t*>(&r15_183) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_183) | *reinterpret_cast<uint16_t*>(&ebp146));
    if (1) {
        eax170 = esi176;
    }
    __asm__("shrd bp, ax, cl");
    *reinterpret_cast<unsigned char*>(&rcx185) = 0;
    r14d188 = (r14d172 | 0x17990773) + eax170;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(r14d188) < reinterpret_cast<int32_t>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(r14d188 == 0)) {
        *reinterpret_cast<int32_t*>(&rcx185) = *reinterpret_cast<int32_t*>(&r11_167);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx185) + 4) = 0;
    }
    __asm__("bts r8w, 0x11");
    r11_189 = r11_167 + 0xffffffffdb392e04;
    __asm__("rcr r13b, 1");
    __asm__("shld esi, r14d, cl");
    *reinterpret_cast<uint16_t*>(&eax170) = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&eax170) * *reinterpret_cast<signed char*>(&rdi184)) * *reinterpret_cast<uint16_t*>(&r15_183));
    __asm__("xadd si, r10w");
    __asm__("btr r9, 0xf4");
    rcx190 = rdi184;
    *reinterpret_cast<uint32_t*>(&rax191) = eax170 * *reinterpret_cast<uint32_t*>(&r10_179);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax191) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx192) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx192) + 4) = 0;
    __asm__("rcr r10b, 1");
    __asm__("shrd r14w, r12w, 0x1");
    *reinterpret_cast<unsigned char*>(&r14d188) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14d188) - reinterpret_cast<unsigned char>(50 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r14d188) < 0xcf)));
    __asm__("rcl r9w, 1");
    rax193 = rax191 - (0x2b4d9e71 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(rax191 < 0xffffffffd4b26190)));
    __asm__("rol r12w, cl");
    __asm__("rol dh, cl");
    __asm__("ror rdx, cl");
    rdx194 = rdx192 & r15_183;
    __asm__("rcl ebp, 1");
    ax195 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax193) + *reinterpret_cast<uint16_t*>(&r13_166)) + 1);
    r8_196 = r8_173 >> 0x6e;
    dl197 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx194) ^ *reinterpret_cast<unsigned char*>(&r8_196));
    if (1) {
    }
    __asm__("rcr ebx, 1");
    __asm__("btc ebx, edi");
    r12_198 = 0xa07f717b0ea5a10e;
    rdi199 = rcx185 - rcx190;
    *reinterpret_cast<uint32_t*>(&rbx200) = edi174 + *reinterpret_cast<int32_t*>(&r9_187) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx200) + 4) = 0;
    tmp8_201 = reinterpret_cast<unsigned char>(dl197 + 93);
    *reinterpret_cast<unsigned char*>(&rdx194) = tmp8_201;
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&rdi199) = *reinterpret_cast<uint16_t*>(&r8_196);
    }
    ah202 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax195) + 1) - 1);
    zf203 = reinterpret_cast<uint1_t>(ah202 == 0);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(ah202 < 0 != __intrinsic()) | zf203)) {
        rbx200 = rdi199;
    }
    __asm__("rcr edi, cl");
    __asm__("shld r10d, r15d, 0x81");
    __asm__("bsf r15w, r8w");
    dx204 = *reinterpret_cast<uint16_t*>(&r13_166);
    tmp8_205 = *reinterpret_cast<signed char*>(&r10_179);
    *reinterpret_cast<signed char*>(&r10_179) = *reinterpret_cast<signed char*>(&rbx200);
    *reinterpret_cast<signed char*>(&rbx200) = tmp8_205;
    __asm__("btr r10d, r13d");
    rsi206 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int16_t*>(&r11_189)));
    __asm__("btr r15d, 0x6d");
    if (reinterpret_cast<uint1_t>(tmp8_201 < dl197) | zf203) {
    }
    __asm__("rcr r14w, cl");
    __asm__("btc ebp, 0x4");
    __asm__("xadd dx, r11w");
    __asm__("rcl rbp, 1");
    *reinterpret_cast<uint16_t*>(&rdi199) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi199) + 0x3978) + 1);
    *reinterpret_cast<signed char*>(&rdi199) = *reinterpret_cast<signed char*>(&dx204);
    ax207 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<int16_t>(reinterpret_cast<signed char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&ax195) + reinterpret_cast<unsigned char>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(0x67 + reinterpret_cast<uint1_t>(0 < reinterpret_cast<unsigned char>(0x67 + __intrinsic())))))))))) & 0x3fff);
    dx208 = reinterpret_cast<uint16_t>(ax207 % static_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&dx204) + 1) | 0xc0)));
    *reinterpret_cast<uint16_t*>(&rax193) = reinterpret_cast<uint16_t>(ax207 / static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&dx208) + 1)));
    eax209 = *reinterpret_cast<int32_t*>(&rax193) * *reinterpret_cast<int32_t*>(&r9_187);
    __asm__("rcr r12w, 1");
    __asm__("cdq ");
    *reinterpret_cast<int16_t*>(&r9_187) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r9_187) + *reinterpret_cast<int16_t*>(&rbx200));
    if (!__intrinsic()) {
    }
    *reinterpret_cast<uint16_t*>(&r13_166) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx194) - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r9_187) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rdx194) < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r9_187) + 1))));
    __asm__("rcl r14, cl");
    __asm__("ror r15, 0x52");
    __asm__("shrd di, cx, cl");
    *reinterpret_cast<int32_t*>(&r11_210) = 0x8044419f;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_210) + 4) = 0;
    rbx211 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx200) >> 1);
    *reinterpret_cast<unsigned char*>(&r13_166) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_166) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi206) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r13_166) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi206) + 1))));
    __asm__("rcr r11w, 1");
    __asm__("rcl cx, cl");
    eax212 = reinterpret_cast<uint32_t>(eax209 * 0x62ee0400);
    edx213 = __intrinsic();
    if (__intrinsic()) {
        edx213 = *reinterpret_cast<uint32_t*>(&r10_179);
    }
    __asm__("rcr r11d, 1");
    *reinterpret_cast<uint16_t*>(&r12_198) = 0x7773;
    __asm__("shld rdi, r10, 0x89");
    r14d214 = r14d188 ^ *reinterpret_cast<uint32_t*>(&r13_166);
    __asm__("xadd r11b, r8b");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax212) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax212) + 1) - *reinterpret_cast<signed char*>(&edx213));
    __asm__("ror rbp, 1");
    __asm__("rcr r10d, 1");
    __asm__("rol r11w, 1");
    *reinterpret_cast<uint16_t*>(&r11_210) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(0x7755 + *reinterpret_cast<int16_t*>(&rsi206))));
    cx215 = 0;
    *reinterpret_cast<unsigned char*>(&rsi206) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi206) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi206) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rsi206) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi206) + 1))));
    __asm__("ror r15, cl");
    r14d216 = (r14d214 & edx213) + 1;
    r11_217 = r11_210 - 1;
    __asm__("ror bl, cl");
    __asm__("shrd r10w, di, 0x7");
    *reinterpret_cast<uint32_t*>(&r8_218) = edx213 ^ *reinterpret_cast<uint32_t*>(&r11_217);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_218) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&cx215) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax212) + 1);
    __asm__("ror r15w, 0xe");
    __asm__("ror r13, cl");
    __asm__("rol r11b, cl");
    *reinterpret_cast<signed char*>(&r10_179) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r10_179) + 10);
    __asm__("shld r13W, si, 0x1");
    cx219 = reinterpret_cast<uint16_t>(cx215 | *reinterpret_cast<uint16_t*>(&r14d216));
    if (!cx219) {
        r12_198 = rdi199;
    }
    if (0) {
        *reinterpret_cast<int16_t*>(&r8_218) = *reinterpret_cast<int16_t*>(&r8_218);
    }
    *reinterpret_cast<uint32_t*>(&rbp220) = cx219;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp220) + 4) = 0;
    __asm__("btc r8d, r11d");
    *reinterpret_cast<uint16_t*>(&edx213) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx213) - cx219);
    if (*reinterpret_cast<int16_t*>(&rbx211) == *reinterpret_cast<int16_t*>(&rsi206)) {
        tmp16_221 = *reinterpret_cast<int16_t*>(&rbx211);
        *reinterpret_cast<int16_t*>(&rbx211) = *reinterpret_cast<int16_t*>(&rsi206);
        *reinterpret_cast<int16_t*>(&rsi206) = tmp16_221;
    }
    *reinterpret_cast<unsigned char*>(&cx219) = reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic());
    *reinterpret_cast<uint16_t*>(&rcx190) = reinterpret_cast<uint16_t>(cx219 | *reinterpret_cast<uint16_t*>(&r11_217));
    *reinterpret_cast<unsigned char*>(&r8_218) = reinterpret_cast<uint1_t>(!!*reinterpret_cast<uint16_t*>(&rcx190));
    if (rsi206 > 0) {
        *reinterpret_cast<int32_t*>(&rcx190) = *reinterpret_cast<int32_t*>(&r12_198);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx190) + 4) = 0;
    }
    __asm__("rol r12, cl");
    __asm__("shrd r15w, r13W, 0x1");
    *reinterpret_cast<int16_t*>(&eax212) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&eax212) * *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx190) + 1));
    __asm__("shrd bp, bx, 0x1");
    *reinterpret_cast<signed char*>(&edx213) = 0;
    *reinterpret_cast<uint32_t*>(&r9_222) = edx213;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_222) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx223) = *reinterpret_cast<int32_t*>(&r9_187);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx223) + 4) = 0;
    eax224 = eax212 - (*reinterpret_cast<uint32_t*>(&r9_222) + reinterpret_cast<uint1_t>(eax212 < *reinterpret_cast<uint32_t*>(&r9_222)));
    __asm__("rcr cl, 1");
    __asm__("shrd r10w, bx, 0x1");
    __asm__("bsr r11d, esi");
    *reinterpret_cast<unsigned char*>(&rdx223) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx223) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx223) + 1));
    __asm__("shrd dx, r12w, 0x8");
    __asm__("rol edi, 1");
    __asm__("rcr r13, 1");
    __asm__("rcr bp, 1");
    *reinterpret_cast<signed char*>(&r12_198) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r12_198) + 45);
    __asm__("shrd r12d, r12d, 0x1");
    di225 = *reinterpret_cast<unsigned char*>(&rdx223);
    __asm__("ror ebx, 0x8e");
    rbp226 = rbp220 + 1;
    __asm__("cwd ");
    if (reinterpret_cast<uint1_t>(rbp226 < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(rbp226 == 0)) {
        *reinterpret_cast<uint32_t*>(&r9_222) = *reinterpret_cast<uint32_t*>(&rbx211);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_222) + 4) = 0;
    }
    r9_227 = r9_222 - 1;
    __asm__("shld r15, rcx, 0x5d");
    tmp32_228 = eax224 + 0x57b5d438 + __intrinsic();
    *reinterpret_cast<uint32_t*>(&rax229) = tmp32_228;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax229) + 4) = 0;
    r12_230 = r12_198 - (rcx190 + reinterpret_cast<uint1_t>(r12_198 < rcx190 + reinterpret_cast<uint1_t>(tmp32_228 < eax224)));
    *reinterpret_cast<uint32_t*>(&rbp231) = *reinterpret_cast<uint32_t*>(&rbp226) ^ 0x5492b26e;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp231) + 4) = 0;
    __asm__("ror r10w, 0xe5");
    __asm__("ror eax, 0xd0");
    __asm__("rol r11d, 1");
    __asm__("rcl r15, 0x4");
    *reinterpret_cast<uint16_t*>(&rcx190) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx190) - 1);
    rbx232 = rbx211 | 0x311fe20b;
    __asm__("ror r13, 0xc");
    *reinterpret_cast<int16_t*>(&rax229) = *reinterpret_cast<signed char*>(&rax229);
    *reinterpret_cast<int16_t*>(&rdx223) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx190) + 1);
    __asm__("rol r11, 1");
    *reinterpret_cast<uint16_t*>(&rdi199) = reinterpret_cast<uint16_t>(di225 - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp231) + reinterpret_cast<uint1_t>(di225 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rbp231))))));
    __asm__("rcr rbp, 1");
    __asm__("bts ebx, esi");
    __asm__("ror ecx, 0xb8");
    *reinterpret_cast<int32_t*>(&r9_233) = *reinterpret_cast<int32_t*>(&r9_227) >> 1 >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_233) + 4) = 0;
    __asm__("rcl dl, 1");
    rcx234 = rcx190 - rcx190;
    __asm__("ror r10b, cl");
    *reinterpret_cast<int32_t*>(&r11_235) = *reinterpret_cast<signed char*>(&r12_230);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_235) + 4) = 0;
    __asm__("shrd r10, r12, 0xb9");
    *reinterpret_cast<uint32_t*>(&rsi236) = *reinterpret_cast<uint32_t*>(&rsi206) | 0xf91d251f;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi236) + 4) = 0;
    __asm__("rcr r8d, cl");
    __asm__("ror r8w, 0x18");
    *reinterpret_cast<uint32_t*>(&r13_237) = *reinterpret_cast<uint32_t*>(&r11_217) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_237) + 4) = 0;
    __asm__("rcr r8b, cl");
    *reinterpret_cast<uint32_t*>(&rdi238) = *reinterpret_cast<uint32_t*>(&rdi199) ^ 0x9dbbe448;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi238) + 4) = 0;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdi238) == 0))) {
        r8_218 = rbx232;
    }
    __asm__("rol r12w, 1");
    if (*reinterpret_cast<uint32_t*>(&rbp231) == *reinterpret_cast<uint32_t*>(&rdi238)) {
        tmp32_239 = *reinterpret_cast<uint32_t*>(&rbp231);
        *reinterpret_cast<uint32_t*>(&rbp231) = *reinterpret_cast<uint32_t*>(&rdi238);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp231) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rdi238) = tmp32_239;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi238) + 4) = 0;
    }
    *reinterpret_cast<uint16_t*>(&rcx234) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx234) - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r12_230) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rcx234) < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r12_230) + __intrinsic()))));
    __asm__("bts ebp, r10d");
    *reinterpret_cast<uint32_t*>(&r10_240) = *reinterpret_cast<uint32_t*>(&r10_179) - 0x286e12b9 + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_240) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r9_233) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_233) ^ *reinterpret_cast<unsigned char*>(&rax229));
    __asm__("bts rcx, r14");
    return rax229 + rbx232 + rcx234 + rdx223 + rbp231 + rsi236 + rdi238 + r8_218 + r9_233 + r10_240 + r11_235 + r12_230 + r13_237 - 0x57c0caa92;
}

uint64_t log_size_10_var_004(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    uint64_t rcx7;
    int64_t r8_8;
    uint64_t r13_9;
    uint64_t r9_10;
    uint64_t r14_11;
    uint64_t r11_12;
    uint64_t r10_13;
    int32_t eax14;
    uint64_t r13_15;
    uint1_t less16;
    int64_t rbp17;
    int16_t dx18;
    uint64_t rbx19;
    int64_t rax20;
    uint64_t rbp21;
    uint64_t rdx22;
    uint64_t rax23;
    int32_t ebx24;
    uint64_t rax25;
    uint64_t r13_26;
    int16_t ax27;
    int64_t rdi28;
    int16_t ax29;
    int64_t r9_30;
    int64_t r8_31;
    uint32_t r12d32;
    uint64_t rdx33;
    unsigned char tmp8_34;
    uint16_t tmp16_35;
    int64_t rax36;
    uint32_t esi37;
    uint64_t rax38;
    unsigned char tmp8_39;
    uint16_t bx40;
    uint64_t r12_41;
    unsigned char cl42;
    uint64_t r15_43;
    int16_t ax44;
    uint64_t r8_45;
    uint64_t r11_46;
    int16_t dx47;
    uint16_t bp48;
    uint64_t rcx49;
    uint64_t r13_50;
    uint64_t rax51;
    uint16_t r12w52;
    uint16_t ax53;
    int64_t rdx54;
    uint64_t r10_55;
    uint64_t r15_56;
    int32_t eax57;
    uint64_t r8_58;
    uint1_t cf59;
    uint16_t r11w60;
    uint64_t tmp64_61;
    uint64_t rax62;
    uint16_t ax63;
    uint64_t rcx64;
    uint32_t ebx65;
    int64_t rbx66;
    int64_t r9_67;
    uint1_t cf68;
    uint64_t rax69;
    uint64_t r15_70;
    uint32_t edx71;
    uint32_t eax72;
    int64_t r11_73;
    uint64_t r8_74;
    unsigned char tmp8_75;
    int64_t rax76;
    int64_t r9_77;
    uint16_t bx78;
    uint16_t r10w79;
    uint32_t esi80;
    int64_t rdi81;
    uint32_t ebx82;
    unsigned char cl83;
    int64_t rdi84;
    uint16_t ax85;
    uint16_t ax86;
    uint16_t ax87;
    uint1_t cf88;
    uint32_t ecx89;
    uint32_t ebp90;
    int64_t rsi91;
    uint16_t ax92;
    int16_t dx93;
    int64_t r13_94;
    uint32_t ecx95;
    int16_t ax96;
    uint64_t r9_97;
    uint32_t ebp98;
    signed char tmp8_99;
    uint32_t edx100;
    uint64_t rax101;
    int32_t ecx102;
    uint64_t rcx103;
    uint64_t rsi104;
    int64_t r8_105;
    uint1_t cf106;
    uint64_t rbp107;
    uint64_t r12_108;
    uint64_t r9_109;
    uint64_t r12_110;
    uint64_t rdi111;
    int64_t rbx112;
    uint64_t r9_113;
    uint64_t r11_114;
    uint64_t r14_115;
    int64_t r15_116;
    unsigned char tmp8_117;
    unsigned char tmp8_118;
    uint1_t cf119;
    int64_t r15_120;
    uint32_t r11d121;
    uint16_t r14w122;
    int64_t r13_123;
    uint64_t rsi124;
    uint64_t r10_125;
    uint64_t r9_126;
    uint64_t rbp127;
    int64_t r15_128;
    int64_t r15_129;
    int64_t r10_130;
    uint32_t eax131;
    int64_t rbx132;
    uint32_t eax133;
    uint16_t tmp16_134;
    uint64_t rsi135;
    uint64_t rdx136;
    uint64_t rax137;
    uint64_t tmp64_138;
    uint64_t tmp64_139;
    uint64_t r12_140;
    int32_t tmp32_141;
    int64_t rdx142;
    uint64_t rcx143;
    uint16_t bx144;
    int64_t r13_145;
    int64_t rdx146;
    uint64_t r15_147;
    uint64_t rsi148;
    uint1_t cf149;
    int64_t r15_150;
    int64_t rdi151;
    uint1_t cf152;
    uint64_t rcx153;
    uint16_t r9w154;
    uint64_t tmp64_155;
    uint64_t rbp156;
    uint64_t r8_157;
    int64_t rdi158;
    uint64_t r10_159;
    int64_t rdx160;
    int64_t rax161;
    uint32_t ebx162;
    uint64_t tmp64_163;
    uint64_t tmp64_164;
    uint64_t rcx165;
    uint16_t ax166;
    uint32_t ebx167;
    uint64_t r15_168;
    uint64_t r12_169;
    int64_t rdi170;
    uint32_t ebp171;
    uint64_t r12_172;
    int64_t r14_173;
    int64_t r14_174;
    uint64_t r11_175;
    uint64_t rdx176;
    uint64_t r14_177;
    int64_t r13_178;
    uint32_t r14d179;
    uint64_t r9_180;
    int64_t rbx181;
    int32_t edx182;
    uint16_t tmp16_183;
    signed char tmp8_184;
    uint64_t rdi185;
    uint32_t edx186;
    uint64_t rsi187;
    int64_t rax188;
    uint32_t r9d189;
    int64_t rdx190;
    uint64_t r8_191;
    int64_t rdx192;
    int64_t r12_193;
    uint64_t r11_194;
    uint64_t rdi195;
    int16_t di196;
    int64_t r10_197;
    uint32_t r9d198;
    uint16_t ax199;
    uint64_t rsi200;
    uint32_t tmp32_201;
    int16_t ax202;
    uint32_t r10d203;
    signed char tmp8_204;
    int64_t rax205;
    int16_t ax206;
    uint64_t r12_207;
    uint64_t r11_208;
    uint64_t r14_209;
    uint16_t r12w210;
    int64_t rdi211;
    uint64_t rsi212;
    uint64_t r11_213;
    uint16_t r11w214;
    uint64_t rcx215;
    int64_t rsi216;
    uint64_t rbx217;
    int32_t eax218;
    unsigned char r15b219;
    uint64_t r10_220;
    uint64_t r11_221;
    uint32_t r9d222;
    int64_t rcx223;
    uint64_t r14_224;
    uint64_t r11_225;
    uint64_t r9_226;
    int64_t rdx227;
    int64_t rbp228;
    int64_t r8_229;
    int64_t rsi230;
    uint16_t si231;
    int64_t rcx232;
    uint64_t rbx233;
    uint16_t r8w234;
    uint64_t r14_235;
    int64_t rax236;
    int64_t rdx237;
    int16_t tmp16_238;
    int32_t edi239;
    int64_t rbp240;
    uint32_t r8d241;
    uint32_t tmp32_242;
    int64_t rcx243;
    uint64_t r9_244;
    uint64_t r10_245;
    int1_t sf246;
    int64_t r8_247;
    int64_t rdi248;
    uint64_t r11_249;
    int64_t r14_250;

    rcx7 = 0xa5319441282e5669;
    r8_8 = 0xed27b3339efa6701;
    r13_9 = 0x172173df4810d654;
    __asm__("shld r11w, di, 0x1");
    __asm__("rcl r11, 1");
    __asm__("rcr r11d, 1");
    if (1) {
    }
    __asm__("btr r10, r9");
    __asm__("rcl r12w, 1");
    __asm__("ror ecx, 1");
    r9_10 = 0xe10b4dbaa1820a59;
    *reinterpret_cast<uint16_t*>(&r8_8) = reinterpret_cast<uint16_t>(0x6701 >> 0x69);
    __asm__("shrd r8, rdx, 0x58");
    r14_11 = *reinterpret_cast<unsigned char*>(&r8_8);
    *reinterpret_cast<uint32_t*>(&r11_12) = 0x6f;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_12) + 4) = 0;
    *reinterpret_cast<int16_t*>(&rcx7) = 0x2b34;
    *reinterpret_cast<uint16_t*>(&r13_9) = reinterpret_cast<uint16_t>(0x8b0 + __intrinsic());
    __asm__("shld r8, r9, 0x1");
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rcx7) = 0x6f;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    }
    r10_13 = 0x7302db9372052184;
    eax14 = 0x7a;
    r13_15 = r13_9 << 1;
    less16 = reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&r13_15) < 0x39ee);
    *reinterpret_cast<int16_t*>(&r13_15) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r13_15) - 0x39ee);
    *reinterpret_cast<int16_t*>(&eax14) = reinterpret_cast<int16_t>(reinterpret_cast<signed char>(static_cast<unsigned char>(less16)) * 0xff84);
    __asm__("ror dl, 0x63");
    *reinterpret_cast<uint32_t*>(&rbp17) = 0x85a7f388 ^ *reinterpret_cast<uint32_t*>(&r8_8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp17) + 4) = 0;
    __asm__("rcl r15b, 0xf7");
    dx18 = -23;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&dx18) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&dx18) + 1) & *reinterpret_cast<unsigned char*>(&rcx7));
    __asm__("rol ch, cl");
    rbx19 = 0xe9c46d9a2171c97a - (r8_8 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(0xe9c46d9a2171c97a < r8_8 + static_cast<uint64_t>(static_cast<uint1_t>(0xf96780bd1f5462f5 >> 0x7302db9372052184)))));
    __asm__("btr di, 0xc7");
    if (*reinterpret_cast<int16_t*>(&r14_11) == dx18) {
    }
    __asm__("xadd r9, r12");
    __asm__("bsr si, dx");
    *reinterpret_cast<unsigned char*>(&rbx19) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx19) | 15);
    *reinterpret_cast<int16_t*>(&r9_10) = -0xa59;
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r8_8) = *reinterpret_cast<uint32_t*>(&rbp17);
    }
    *reinterpret_cast<uint32_t*>(&rax20) = eax14 * *reinterpret_cast<uint32_t*>(&r8_8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = 0;
    __asm__("rcr r10w, 0x73");
    rbp21 = reinterpret_cast<uint64_t>(-rbp17);
    __asm__("rcr r9w, cl");
    *reinterpret_cast<uint16_t*>(&rax20) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax20) * *reinterpret_cast<uint16_t*>(&r8_8));
    __asm__("btr r15w, cx");
    __asm__("rcl rdi, 1");
    __asm__("shld edx, r11d, cl");
    __asm__("shrd r13W, r15w, cl");
    __asm__("shrd r10d, r15d, 0xe5");
    *reinterpret_cast<signed char*>(&rax20) = 4;
    rdx22 = rax20 % reinterpret_cast<uint64_t>(0xc00000006ed5cddc);
    rax23 = rax20 / reinterpret_cast<uint64_t>(0xc00000006ed5cddc);
    __asm__("bts si, r11w");
    *reinterpret_cast<uint16_t*>(&rdx22) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx19) + 1);
    __asm__("ror bl, cl");
    ebx24 = *reinterpret_cast<int32_t*>(&rbx19) >> reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx7) & 15);
    *reinterpret_cast<uint16_t*>(&rax23) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax23) >> 1);
    *reinterpret_cast<int32_t*>(&rax25) = ~*reinterpret_cast<int32_t*>(&rax23);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = 0;
    if (__intrinsic()) {
        r13_15 = r9_10;
    }
    r13_26 = r13_15 ^ rax25;
    __asm__("btc r15d, 0x82");
    ax27 = *reinterpret_cast<signed char*>(&rax25);
    rdi28 = 0x9d3a4985;
    ax29 = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax27) * *reinterpret_cast<signed char*>(&rbp21));
    __asm__("bsf r10w, di");
    r9_30 = *reinterpret_cast<int32_t*>(&rbp21);
    r8_31 = 0xf097a1f5 >> -78;
    __asm__("btc r9, 0xf1");
    if (1) {
        rdx22 = 0x6f;
    }
    __asm__("shrd r9d, eax, cl");
    __asm__("rol r13, 0x4f");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax29) + 1) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax29) + 1));
    __asm__("bsr bp, dx");
    __asm__("btc esi, eax");
    __asm__("rcl dx, 1");
    *reinterpret_cast<uint16_t*>(&r11_12) = reinterpret_cast<uint16_t>(0x6f - reinterpret_cast<uint16_t>(ax29 + reinterpret_cast<uint1_t>(0x6f < reinterpret_cast<uint16_t>(ax29 + __intrinsic()))));
    __asm__("rcl ecx, 0x6d");
    __asm__("rcl ch, 1");
    r12d32 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rdx22) * 0xccc5d81e);
    __asm__("rcl r8w, cl");
    if (0x9d3a4985 == r12d32) {
        *reinterpret_cast<uint32_t*>(&rdi28) = r12d32;
        r12d32 = 0x9d3a4985;
    }
    *reinterpret_cast<signed char*>(&r8_31) = 0;
    *reinterpret_cast<int32_t*>(&rdx33) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx33) + 4) = 0;
    __asm__("shrd r14, r9, 0x1");
    if (__undefined()) {
        *reinterpret_cast<uint32_t*>(&r10_13) = *reinterpret_cast<uint32_t*>(&rdi28);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_13) + 4) = 0;
    }
    __asm__("shld r10, rdx, 0x1");
    __asm__("shrd bp, r15w, 0x1");
    tmp8_34 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx33) + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx33) + 1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ebx24) + 1);
    if (*reinterpret_cast<uint16_t*>(&rbp21) == *reinterpret_cast<uint16_t*>(&r11_12)) {
        tmp16_35 = *reinterpret_cast<uint16_t*>(&rbp21);
        *reinterpret_cast<uint16_t*>(&rbp21) = *reinterpret_cast<uint16_t*>(&r11_12);
        *reinterpret_cast<uint16_t*>(&r11_12) = tmp16_35;
    }
    if (__intrinsic()) {
    }
    __asm__("rcr si, 1");
    __asm__("rcr r10, 0xa8");
    __asm__("btc r12w, r9w");
    __asm__("rcr r10b, 1");
    __asm__("rcl bp, 1");
    *reinterpret_cast<unsigned char*>(&rcx7) = 0xff;
    __asm__("ror r12w, 1");
    *reinterpret_cast<int32_t*>(&rax36) = *reinterpret_cast<signed char*>(&rdx33);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax36) + 4) = 0;
    __asm__("cwd ");
    if (*reinterpret_cast<unsigned char*>(&r9_30) >= reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r9_30)))) {
        *reinterpret_cast<uint32_t*>(&r11_12) = r12d32;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_12) + 4) = 0;
    }
    esi37 = *reinterpret_cast<uint32_t*>(&rcx7) * 0x2eb03545;
    *reinterpret_cast<int16_t*>(&rdx33) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rdx33) >> -52);
    rax38 = reinterpret_cast<uint64_t>(rax36 >> 9);
    __asm__("ror r13d, 0x6d");
    tmp8_39 = *reinterpret_cast<unsigned char*>(&rax38);
    *reinterpret_cast<unsigned char*>(&rax38) = 0xff;
    *reinterpret_cast<unsigned char*>(&rcx7) = tmp8_39;
    *reinterpret_cast<unsigned char*>(&bx40) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&ebx24) - *reinterpret_cast<unsigned char*>(&rcx7));
    *reinterpret_cast<int16_t*>(&rcx7) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rcx7) + *reinterpret_cast<int16_t*>(&r8_31));
    *reinterpret_cast<signed char*>(&r8_31) = 0x8b;
    *reinterpret_cast<uint32_t*>(&r12_41) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&rcx7)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_41) + 4) = 0;
    cl42 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx7) & 15);
    __asm__("shld cx, r8w, cl");
    r15_43 = 0xffffffffbd10ff2f & rax38;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax38) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    if (1) {
        rax38 = rdx33;
    }
    __asm__("rcr ecx, 1");
    __asm__("bts r15d, r15d");
    ax44 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax38) - 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax38) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax44) + 1) >> 1);
    __asm__("rcl edx, 0xaf");
    *reinterpret_cast<unsigned char*>(&rbp21) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp21) | 0xb8);
    __asm__("rcr rbx, cl");
    r8_45 = reinterpret_cast<uint64_t>(r8_31 >> -17);
    __asm__("shld ecx, r14d, cl");
    *reinterpret_cast<unsigned char*>(&r8_45) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_45) >> cl42);
    *reinterpret_cast<unsigned char*>(&rcx7) = reinterpret_cast<unsigned char>(cl42 & 15);
    __asm__("shrd r13W, r12w, cl");
    r11_46 = r11_12 - 0x31389239;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&dx47) + 1) = tmp8_34;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&bx40) + 1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx33) + 1);
    *reinterpret_cast<unsigned char*>(&rax38) = 0;
    __asm__("ror ebx, 0x91");
    __asm__("bsf r9w, si");
    __asm__("rol bh, cl");
    if (0) {
        *reinterpret_cast<int32_t*>(&rax38) = *reinterpret_cast<int32_t*>(&r13_26);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax38) + 4) = 0;
    }
    *reinterpret_cast<unsigned char*>(&dx47) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rdx33) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx7) + 1))));
    if (*reinterpret_cast<unsigned char*>(&dx47)) {
        *reinterpret_cast<int16_t*>(&r13_26) = dx47;
    }
    if (*reinterpret_cast<uint16_t*>(&r12_41) > reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r12_41) < 0)))) {
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax38) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax38) + 1) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&dx47) + 1));
    __asm__("ror edx, 0xe6");
    __asm__("ror rax, 1");
    bp48 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp21) - reinterpret_cast<uint16_t>(bx40 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rbp21) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(bx40)))));
    *reinterpret_cast<unsigned char*>(&esi37) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&esi37) >> *reinterpret_cast<unsigned char*>(&rcx7)) ^ *reinterpret_cast<unsigned char*>(&r10_13));
    rcx49 = rcx7 - (rbp21 + reinterpret_cast<uint1_t>(rcx7 < rbp21)) | r15_43;
    *reinterpret_cast<int32_t*>(&r13_50) = *reinterpret_cast<int32_t*>(&r13_26) >> -74;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_50) + 4) = 0;
    __asm__("bts rcx, 0xd1");
    __asm__("rcl rsi, 1");
    __asm__("btc rbp, 0x41");
    rax51 = rax38 * r13_50;
    __asm__("rcr r10w, cl");
    __asm__("rcl r9d, 0xc");
    r12w52 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax51) * 0xc549);
    *reinterpret_cast<unsigned char*>(&rcx49) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx49) | 0xc0);
    ax53 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax51) & 0x3fff);
    *reinterpret_cast<uint16_t*>(&rdx54) = reinterpret_cast<uint16_t>(ax53 % static_cast<int16_t>(*reinterpret_cast<signed char*>(&rcx49)));
    r10_55 = r10_13 | 0x4cdaaa3d;
    __asm__("rcr rbx, 1");
    *reinterpret_cast<unsigned char*>(&r12w52) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12w52) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_55) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r12w52) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_55) + 1))));
    __asm__("ror r10b, 0xe7");
    *reinterpret_cast<signed char*>(&bp48) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&bp48) + 1);
    *reinterpret_cast<uint16_t*>(&r12_41) = reinterpret_cast<uint16_t>(r12w52 << 1);
    r15_56 = *reinterpret_cast<unsigned char*>(&r12_41);
    eax57 = reinterpret_cast<int16_t>(ax53 / *reinterpret_cast<signed char*>(&rcx49));
    r8_58 = r8_45 << 1;
    cf59 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r11_46) < 0xfec6);
    r11w60 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_46) - reinterpret_cast<uint16_t>(0x13b - cf59));
    if (r11w60 == static_cast<uint32_t>(cf59)) {
        *reinterpret_cast<uint32_t*>(&r12_41) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_41) + 4) = 0;
    }
    __asm__("shld r15, rax, 0x2e");
    __asm__("rol cx, 0xa7");
    *reinterpret_cast<uint16_t*>(&r8_58) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_58) | 0x54fd);
    if (0) {
        r13_50 = rcx49;
    }
    __asm__("btr rbp, 0x9f");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax57) + 1) = 47;
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx54) + 1) == *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx54) + 1)) {
    }
    if (0) {
        tmp64_61 = r13_50;
        r13_50 = r12_41;
        r12_41 = tmp64_61;
    }
    __asm__("rol al, 0x4a");
    __asm__("rcl di, 0xca");
    *reinterpret_cast<int32_t*>(&rax62) = *reinterpret_cast<int16_t*>(&eax57);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax62) + 4) = 0;
    __asm__("rol rcx, 0x85");
    *reinterpret_cast<uint16_t*>(&r11_46) = reinterpret_cast<uint16_t>(r11w60 | 0xc000);
    ax63 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax62) / *reinterpret_cast<uint16_t*>(&r11_46));
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax63) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx49) + 1);
    *reinterpret_cast<uint16_t*>(&r10_55) = static_cast<uint16_t>(*reinterpret_cast<int32_t*>(&r8_58) + esi37 * 2 + 0x8b);
    __asm__("shrd ebp, r9d, cl");
    *reinterpret_cast<uint32_t*>(&rcx64) = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(bp48)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx64) + 4) = 0;
    __asm__("ror r8d, 0xe4");
    ebx65 = *reinterpret_cast<unsigned char*>(&rcx64);
    *reinterpret_cast<uint16_t*>(&rbp21) = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(bp48) >> *reinterpret_cast<unsigned char*>(&rcx64));
    *reinterpret_cast<uint16_t*>(&rcx64) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx64) | 0xc000);
    *reinterpret_cast<uint16_t*>(&rax62) = reinterpret_cast<uint16_t>(ax63 / *reinterpret_cast<uint16_t*>(&rcx64));
    rbx66 = *reinterpret_cast<int16_t*>(&ebx65);
    __asm__("cdq ");
    r9_67 = 0;
    __asm__("rcl ax, 1");
    cf68 = reinterpret_cast<uint1_t>(rax62 < 0xffffffff97512d84);
    rax69 = rax62 - (0x68aed27c - static_cast<uint64_t>(cf68));
    *reinterpret_cast<unsigned char*>(&r8_58) = reinterpret_cast<uint1_t>(rax62 <= 0x68aed27c - static_cast<uint64_t>(cf68));
    *reinterpret_cast<unsigned char*>(&rcx64) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx64) & 15);
    __asm__("shld bp, ax, cl");
    *reinterpret_cast<uint32_t*>(&r15_70) = *reinterpret_cast<uint32_t*>(&r15_56) | 0xc0000000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_70) + 4) = 0;
    edx71 = *reinterpret_cast<uint32_t*>(&rax69) % *reinterpret_cast<uint32_t*>(&r15_70);
    eax72 = *reinterpret_cast<uint32_t*>(&rax69) / *reinterpret_cast<uint32_t*>(&r15_70);
    *reinterpret_cast<uint32_t*>(&r11_73) = *reinterpret_cast<uint32_t*>(&r11_46) & 0x8dd017ca;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_73) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r10_55) = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r11_73) == 0);
    r8_74 = r8_58 ^ r15_70;
    *reinterpret_cast<int16_t*>(&eax72) = *reinterpret_cast<signed char*>(&eax72);
    tmp8_75 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx71) + *reinterpret_cast<unsigned char*>(&rbx66)) + 1);
    *reinterpret_cast<uint16_t*>(&r9_67) = *reinterpret_cast<uint16_t*>(&rbp21);
    if (!__intrinsic()) {
        r13_50 = rcx64;
    }
    if (reinterpret_cast<uint1_t>(tmp8_75 < *reinterpret_cast<unsigned char*>(&edx71)) | reinterpret_cast<uint1_t>(tmp8_75 == 0)) {
        *reinterpret_cast<uint32_t*>(&r11_73) = eax72;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_73) + 4) = 0;
    }
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&rbx66) = *reinterpret_cast<uint16_t*>(&rbx66);
    }
    *reinterpret_cast<uint32_t*>(&rax76) = eax72 * *reinterpret_cast<uint32_t*>(&r15_70);
    *reinterpret_cast<unsigned char*>(&rbx66) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx66) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax76) + 1)) + 1);
    *reinterpret_cast<int32_t*>(&r9_77) = *reinterpret_cast<int32_t*>(&r9_67) - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_77) + 4) = 0;
    bx78 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx66) - reinterpret_cast<uint16_t>(0x4726 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rbx66) < reinterpret_cast<uint16_t>(0x4726 + __intrinsic()))));
    *reinterpret_cast<unsigned char*>(&bx78) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&bx78) - *reinterpret_cast<signed char*>(&r11_73));
    r10w79 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_55) - reinterpret_cast<uint16_t>(bx78 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r10_55) < reinterpret_cast<uint16_t>(bx78 + 1))));
    __asm__("rcr r9w, 1");
    *reinterpret_cast<unsigned char*>(&r10w79) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10w79) << *reinterpret_cast<unsigned char*>(&rcx64));
    __asm__("rol rdx, 0x31");
    esi80 = esi37 - 0x78d4f4ef;
    *reinterpret_cast<uint32_t*>(&rdi81) = *reinterpret_cast<unsigned char*>(&bx78);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi81) + 4) = 0;
    __asm__("rcr ax, 1");
    __asm__("ror r15d, 0x96");
    *reinterpret_cast<int16_t*>(&r13_50) = *reinterpret_cast<signed char*>(&rax76);
    __asm__("shrd rdi, rcx, cl");
    ebx82 = static_cast<uint32_t>(r9_77 + rdi81 * 4);
    __asm__("shld di, ax, 0x1");
    cl83 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx64) & 15);
    __asm__("shrd r9w, r11w, cl");
    *reinterpret_cast<uint32_t*>(&rdi84) = *reinterpret_cast<uint32_t*>(&rdi81) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi84) + 4) = 0;
    __asm__("rol r9b, 1");
    *reinterpret_cast<unsigned char*>(&rcx64) = reinterpret_cast<unsigned char>(cl83 - cl83);
    ax85 = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&rax76)));
    __asm__("shld r12d, eax, 0x1");
    __asm__("shrd bp, di, 0x1");
    *reinterpret_cast<unsigned char*>(&ax85) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ax85) | 0xc0);
    ax86 = reinterpret_cast<uint16_t>(ax85 & 0x3fff);
    ax87 = reinterpret_cast<uint16_t>(ax86 / static_cast<int16_t>(*reinterpret_cast<signed char*>(&ax86)));
    cf88 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rcx64) < *reinterpret_cast<uint32_t*>(&rdi84) + 1);
    ecx89 = *reinterpret_cast<uint32_t*>(&rcx64) - (*reinterpret_cast<uint32_t*>(&rdi84) + cf88);
    ebp90 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax87) + 1);
    *reinterpret_cast<unsigned char*>(&ecx89) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("shrd ebp, edx, 0x1");
    __asm__("shrd r10d, esi, 0x1");
    *reinterpret_cast<uint32_t*>(&rsi91) = esi80 - (*reinterpret_cast<uint32_t*>(&rdi84) + reinterpret_cast<uint1_t>(esi80 < *reinterpret_cast<uint32_t*>(&rdi84) + cf88));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi91) + 4) = 0;
    __asm__("bsr r13, rsi");
    ax92 = reinterpret_cast<uint16_t>(ax87 * *reinterpret_cast<int16_t*>(&ebp90));
    dx93 = __intrinsic();
    *reinterpret_cast<unsigned char*>(&r10w79) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10w79) & 0xd7);
    __asm__("btc rdx, 0xd1");
    *reinterpret_cast<uint32_t*>(&r13_94) = *reinterpret_cast<int32_t*>(&r13_50) + 0x1a72523b;
    ecx95 = ecx89 >> 24 | ecx89 >> 8 & 0xff00 | ecx89 << 8 & 0xff0000 | ecx89 << 24;
    ax96 = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax92) * *reinterpret_cast<signed char*>(&dx93));
    __asm__("btc rsi, rax");
    __asm__("rol ah, cl");
    *reinterpret_cast<int32_t*>(&r9_97) = *reinterpret_cast<int32_t*>(&r9_77) << *reinterpret_cast<unsigned char*>(&ecx95);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_97) + 4) = 0;
    ebp98 = ebp90 - ecx95;
    if (*reinterpret_cast<signed char*>(&r13_94) == *reinterpret_cast<signed char*>(&ax96)) {
        tmp8_99 = *reinterpret_cast<signed char*>(&r13_94);
        *reinterpret_cast<signed char*>(&r13_94) = *reinterpret_cast<signed char*>(&ax96);
        *reinterpret_cast<signed char*>(&ax96) = tmp8_99;
    }
    __asm__("rcr r10d, cl");
    __asm__("ror r13d, 1");
    *reinterpret_cast<uint16_t*>(&ecx95) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx95) | 0xc000);
    *reinterpret_cast<uint16_t*>(&edx100) = reinterpret_cast<uint16_t>(ax96 % *reinterpret_cast<uint16_t*>(&ecx95));
    *reinterpret_cast<int32_t*>(&rax101) = 0x404dd3bd;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax101) + 4) = 0;
    ecx102 = reinterpret_cast<int32_t>(-ecx95);
    __asm__("rcr r14b, 1");
    __asm__("rol r9b, 1");
    *reinterpret_cast<uint32_t*>(&rcx103) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx102) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx103) + 4) = 0;
    rsi104 = reinterpret_cast<uint64_t>(rsi91 >> 1);
    *reinterpret_cast<uint32_t*>(&r8_105) = *reinterpret_cast<uint32_t*>(&r8_74) ^ ebx82;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_105) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&ebx82) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx82) | 0xd6d3);
    __asm__("bts r9, 0x2b");
    __asm__("rcl bl, cl");
    __asm__("ror r12w, 1");
    cf106 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx103) < reinterpret_cast<unsigned char>(36 - __intrinsic()));
    *reinterpret_cast<int16_t*>(&rdi84) = static_cast<int16_t>(*reinterpret_cast<int32_t*>(&r9_97) + ebx82 * 2);
    __asm__("rol r10d, cl");
    __asm__("ror ch, 1");
    *reinterpret_cast<uint16_t*>(&r12_41) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_41) - 0x6c53) + cf106);
    __asm__("rcl r13b, 0x4");
    __asm__("shrd ebx, r11d, 0x1");
    __asm__("rol r13W, 1");
    __asm__("ror eax, cl");
    *reinterpret_cast<uint32_t*>(&rbp107) = ebp98 ^ *reinterpret_cast<uint32_t*>(&r8_105);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp107) + 4) = 0;
    __asm__("shld ebx, ebx, 0xa2");
    __asm__("bsr r10d, r8d");
    *reinterpret_cast<uint32_t*>(&r12_108) = *reinterpret_cast<uint32_t*>(&r12_41) | *reinterpret_cast<uint32_t*>(&r13_94);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_108) + 4) = 0;
    if (!__intrinsic()) {
        edx100 = *reinterpret_cast<uint32_t*>(&r8_105);
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&edx100) + 1) = -6;
    r9_109 = r9_97 - (r9_97 + reinterpret_cast<uint1_t>(r9_97 < r9_97));
    r12_110 = r12_108 >> -35;
    __asm__("btr r12w, 0x85");
    __asm__("btc ebx, r14d");
    *reinterpret_cast<uint16_t*>(&rax101) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<signed char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!cf106))) * 0xfffa) >> 1);
    __asm__("rcr r8d, 1");
    *reinterpret_cast<unsigned char*>(&rcx103) = 0;
    __asm__("bts ecx, eax");
    rdi111 = reinterpret_cast<uint64_t>(rdi84 + 0x8c3245);
    *reinterpret_cast<uint16_t*>(&rdi111) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi111) + 0x2922);
    __asm__("rcr rcx, 0xb5");
    *reinterpret_cast<uint16_t*>(&r15_70) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r15_70)));
    *reinterpret_cast<uint16_t*>(&rbp107) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp107) | 0x83a);
    *reinterpret_cast<signed char*>(&r8_105) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r8_105) + 18);
    __asm__("xadd r9, r9");
    __asm__("ror r15, 0x74");
    rbx112 = *reinterpret_cast<int16_t*>(&rbp107);
    __asm__("shld r9w, di, 0x0");
    *reinterpret_cast<uint16_t*>(&r10_55) = reinterpret_cast<uint16_t>(r10w79 ^ *reinterpret_cast<uint16_t*>(&rbp107));
    *reinterpret_cast<unsigned char*>(&rdi111) = 0;
    *reinterpret_cast<unsigned char*>(&r10_55) = reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&edx100) >= reinterpret_cast<int16_t>(0xabda));
    *reinterpret_cast<uint32_t*>(&r9_113) = *reinterpret_cast<uint32_t*>(&r9_109) - (0x3938d499 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r9_109) < 0xc6c72b68));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_113) + 4) = 0;
    __asm__("rcr r11w, 1");
    if (0) {
        rdi111 = rax101;
    }
    __asm__("shrd r11w, cx, 0x9");
    r11_114 = r11_73 - 0x5f0c7600 + 1;
    *reinterpret_cast<uint16_t*>(&rsi104) = reinterpret_cast<uint16_t>(*reinterpret_cast<unsigned char*>(&rsi104) + 1);
    *reinterpret_cast<int32_t*>(&r14_115) = *reinterpret_cast<int32_t*>(&r11_114) * 0x56e8c7db;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_115) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r15_116) = *reinterpret_cast<uint32_t*>(&r15_70) + *reinterpret_cast<uint32_t*>(&r13_94) + __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_116) + 4) = 0;
    if (!*reinterpret_cast<unsigned char*>(&rdi111)) {
        tmp8_117 = *reinterpret_cast<unsigned char*>(&rdi111);
        *reinterpret_cast<unsigned char*>(&rdi111) = 0;
        *reinterpret_cast<unsigned char*>(&rcx103) = tmp8_117;
    }
    tmp8_118 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp107) + *reinterpret_cast<unsigned char*>(&rsi104))));
    cf119 = reinterpret_cast<uint1_t>(tmp8_118 < *reinterpret_cast<unsigned char*>(&rbp107));
    *reinterpret_cast<unsigned char*>(&rbp107) = tmp8_118;
    *reinterpret_cast<signed char*>(&r11_114) = 57;
    __asm__("btc r14, 0x74");
    *reinterpret_cast<unsigned char*>(&r15_116) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_116) - 84) + cf119);
    __asm__("shrd r14, rdx, 0x1");
    *reinterpret_cast<uint16_t*>(&r12_110) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_110) + *reinterpret_cast<uint16_t*>(&r10_55))));
    r15_120 = r15_116 + 1;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(r15_120 < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(r15_120 == 0))) {
        rbp107 = rsi104;
    }
    r11d121 = *reinterpret_cast<int32_t*>(&r11_114) + *reinterpret_cast<int32_t*>(&r11_114) + 1 << *reinterpret_cast<unsigned char*>(&rcx103);
    r14w122 = -*reinterpret_cast<uint16_t*>(&r14_115);
    *reinterpret_cast<uint16_t*>(&rbp107) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp107) + *reinterpret_cast<uint16_t*>(&r8_105)) + 1);
    __asm__("rcr r8, 1");
    __asm__("rol r8d, 1");
    __asm__("shrd r13, r8, 0x79");
    __asm__("rcr rbx, 1");
    if (__intrinsic()) {
        r11d121 = *reinterpret_cast<uint32_t*>(&rsi104);
    }
    __asm__("rcr dil, 0xe5");
    __asm__("bts r13W, bx");
    __asm__("rcl rbp, cl");
    *reinterpret_cast<uint16_t*>(&rbx112) = reinterpret_cast<uint16_t>(r14w122 * 0xa303);
    *reinterpret_cast<uint32_t*>(&r13_123) = r11d121 - (r11d121 + reinterpret_cast<uint1_t>(r11d121 < r11d121 + 1));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_123) + 4) = 0;
    __asm__("rol rdi, 0x3");
    *reinterpret_cast<signed char*>(&r14w122) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r14w122) - 25);
    rsi124 = rsi104 - (0x14a7f58e - static_cast<uint64_t>(reinterpret_cast<uint1_t>(rsi104 < 0xffffffffeb580a73)));
    r10_125 = r10_55 - 0x5f9c81a2;
    __asm__("lahf ");
    r9_126 = rbp107;
    rbp127 = r9_113;
    *reinterpret_cast<int32_t*>(&r15_128) = *reinterpret_cast<int32_t*>(&rsi124);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_128) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rbp127) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp127) + *reinterpret_cast<uint16_t*>(&rbx112))));
    r15_129 = r15_128 >> -2;
    *reinterpret_cast<uint32_t*>(&r10_130) = *reinterpret_cast<uint32_t*>(&r10_125) >> 24 | *reinterpret_cast<uint32_t*>(&r10_125) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&r10_125) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&r10_125) << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_130) + 4) = 0;
    __asm__("bsr rbx, r10");
    __asm__("bts esi, 0x50");
    __asm__("shld r8d, r15d, 0x1");
    __asm__("rcl r13, 1");
    *reinterpret_cast<uint16_t*>(&rdi111) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi111) - reinterpret_cast<uint16_t>(0x79d + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rdi111) < 0x79d)));
    eax131 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r10_130 + r13_123) * *reinterpret_cast<int32_t*>(&r9_126));
    __asm__("rcr r15d, 0x5b");
    __asm__("shld bx, r11w, 0x2");
    *reinterpret_cast<int32_t*>(&rbx132) = *reinterpret_cast<int32_t*>(&rbx112) << *reinterpret_cast<unsigned char*>(&rcx103);
    __asm__("ror r11, cl");
    *reinterpret_cast<int16_t*>(&eax131) = *reinterpret_cast<signed char*>(&eax131);
    __asm__("xadd r12b, r15b");
    *reinterpret_cast<int16_t*>(&r15_129) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r15_129) + 0x797f);
    __asm__("shld rcx, r8, 0x51");
    eax133 = eax131 >> -36;
    __asm__("ror r9w, 1");
    if (*reinterpret_cast<uint16_t*>(&rdi111) == *reinterpret_cast<uint16_t*>(&r12_110)) {
        tmp16_134 = *reinterpret_cast<uint16_t*>(&rdi111);
        *reinterpret_cast<uint16_t*>(&rdi111) = *reinterpret_cast<uint16_t*>(&r12_110);
        *reinterpret_cast<uint16_t*>(&r12_110) = tmp16_134;
    }
    __asm__("rol r10w, cl");
    rsi135 = rsi124 | 0x11c79299;
    __asm__("rol r14, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx103) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx103) + 1) ^ 71) - 95)));
    __asm__("shld r10w, bx, 0x1");
    __asm__("rol r9, 0xef");
    __asm__("shld ax, bp, 0x0");
    if (rcx103 == rcx103) {
        rcx103 = rcx103;
    }
    rdx136 = rcx103 + rsi135 * 2 + 0xe1;
    *reinterpret_cast<unsigned char*>(&r11d121) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11d121) ^ *reinterpret_cast<unsigned char*>(&r15_129));
    *reinterpret_cast<unsigned char*>(&rbx132) = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r11d121) == 0));
    *reinterpret_cast<int16_t*>(&eax133) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax133) * *reinterpret_cast<int16_t*>(&r11d121));
    *reinterpret_cast<int16_t*>(&rdx136) = __intrinsic();
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rsi135) = *reinterpret_cast<int32_t*>(&rbx132);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi135) + 4) = 0;
    }
    __asm__("rol bh, 0x59");
    *reinterpret_cast<int32_t*>(&rax137) = reinterpret_cast<int32_t>(eax133) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax137) + 4) = 0;
    tmp64_138 = (r12_110 & 0xffffffff) << 32 | (r12_110 & 0xffffffff00000000) >> 32;
    tmp64_139 = (tmp64_138 & 0xffff0000ffff) << 16 | (tmp64_138 & 0xffff0000ffff0000) >> 16;
    r12_140 = (tmp64_139 & 0xff00ff00ff00ff) << 8 | (tmp64_139 & 0xff00ff00ff00ff00) >> 8;
    __asm__("rcl rsi, 1");
    *reinterpret_cast<int16_t*>(&r13_123) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r13_123) * 0x8a09);
    if (*reinterpret_cast<int32_t*>(&rsi135) == *reinterpret_cast<int32_t*>(&rdi111)) {
        tmp32_141 = *reinterpret_cast<int32_t*>(&rsi135);
        *reinterpret_cast<int32_t*>(&rsi135) = *reinterpret_cast<int32_t*>(&rdi111);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi135) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdi111) = tmp32_141;
    }
    *reinterpret_cast<int32_t*>(&rdx142) = *reinterpret_cast<int32_t*>(&rdx136) + 0x47a966ee;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx142) + 4) = 0;
    __asm__("bsr r13d, esi");
    rcx143 = rcx103 | 0xffffffff870ed8ff;
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(__intrinsic())))) {
        r11d121 = *reinterpret_cast<uint32_t*>(&r12_140);
    }
    __asm__("rol ax, cl");
    bx144 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx132) >> 1);
    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&bx144) + 1) & *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx142) + 1))) {
        *reinterpret_cast<int16_t*>(&rax137) = *reinterpret_cast<int16_t*>(&r11d121);
    }
    __asm__("rcl r9w, 1");
    r13_145 = r13_123 * 0xffffffffc4a807df;
    rdx146 = ~rdx142;
    __asm__("rcr bpl, 0x40");
    __asm__("ror r9b, 1");
    __asm__("rcl bh, 1");
    __asm__("rcr bh, 1");
    *reinterpret_cast<unsigned char*>(&rsi135) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi135) & 0xff);
    __asm__("rcr rdi, 1");
    r15_147 = *reinterpret_cast<uint16_t*>(&rsi135);
    __asm__("btc r8d, ecx");
    __asm__("shrd cx, ax, 0x1");
    rsi148 = rsi135 & rax137;
    *reinterpret_cast<unsigned char*>(&r13_145) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_145) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx146) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r13_145) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rdx146))))));
    __asm__("bsf r15, rsi");
    __asm__("bts ax, 0xd4");
    __asm__("rcr bh, 1");
    cf149 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r15_147) < *reinterpret_cast<uint32_t*>(&r12_140));
    *reinterpret_cast<uint32_t*>(&r15_150) = *reinterpret_cast<uint32_t*>(&r15_147) - (*reinterpret_cast<uint32_t*>(&r12_140) + cf149);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_150) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rdi111) = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r15_150) >= reinterpret_cast<int32_t>(static_cast<uint32_t>(cf149)));
    if (cf149) {
    }
    *reinterpret_cast<uint32_t*>(&rdi151) = *reinterpret_cast<int32_t*>(&rdi111) + *reinterpret_cast<uint32_t*>(&r8_105) + cf149;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi151) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rbx132) = static_cast<uint16_t>(rsi148 + rdi151 * 2);
    __asm__("shrd dx, bx, 0x1");
    __asm__("xadd r12b, r14b");
    cf152 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx132) + 1) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx132) + 1)) < *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx132) + 1));
    *reinterpret_cast<int32_t*>(&rcx153) = *reinterpret_cast<int32_t*>(&rcx143) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx153) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r12_140) = cf152;
    __asm__("rcl r11w, 1");
    *reinterpret_cast<int16_t*>(&rdx146) = __intrinsic();
    *reinterpret_cast<uint16_t*>(&r14_115) = *reinterpret_cast<uint16_t*>(&r9_126);
    r9w154 = r14w122;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx153) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx153) + 1) << *reinterpret_cast<unsigned char*>(&rcx153));
    tmp64_155 = rbp127 + 0x4255056c;
    rbp156 = tmp64_155;
    r8_157 = r8_105 + 0x3e3b9a4c + static_cast<uint64_t>(reinterpret_cast<uint1_t>(tmp64_155 < rbp127));
    *reinterpret_cast<uint32_t*>(&rdi158) = *reinterpret_cast<uint32_t*>(&rdi151) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi158) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rsi148) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rsi148) >> *reinterpret_cast<unsigned char*>(&rcx153));
    r10_159 = 0x6242ef27d4fda091;
    rdx160 = -rdx146;
    if (!__intrinsic()) {
        rdi158 = r15_150;
    }
    if (1) {
        rcx153 = r14_115;
    }
    rax161 = 0;
    __asm__("btc r8d, ebp");
    ebx162 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx160) + 1);
    __asm__("rcr ecx, 1");
    tmp64_163 = (rcx153 & 0xffffffff) << 32;
    tmp64_164 = (tmp64_163 & 0xffff0000ffff) << 16 | (tmp64_163 & 0xffff0000ffff0000) >> 16;
    rcx165 = (tmp64_164 & 0xff00ff00ff00ff) << 8 | (tmp64_164 & 0xff00ff00ff00ff00) >> 8;
    ax166 = 0;
    __asm__("bts ebx, 0xce");
    __asm__("bts bx, r12w");
    ebx167 = ebx162 - ebx162;
    __asm__("rcr r14, 1");
    __asm__("btr rbx, rax");
    *reinterpret_cast<uint32_t*>(&r15_168) = *reinterpret_cast<uint32_t*>(&r15_150) - 0x19df60f4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_168) + 4) = 0;
    r12_169 = r12_140 ^ 0x6242ef27d4fda091;
    __asm__("rcl r11d, 1");
    __asm__("bts r10, r12");
    if (*reinterpret_cast<signed char*>(&ebx167) != *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ebx167) + 1)) {
        *reinterpret_cast<int16_t*>(&r8_157) = *reinterpret_cast<int16_t*>(&r12_169);
    }
    rdi170 = -rdi158;
    *reinterpret_cast<uint16_t*>(&rdi170) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax166) + 1);
    *reinterpret_cast<uint16_t*>(&rbp156) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp156) | 0xc000) | *reinterpret_cast<uint16_t*>(&ebx167));
    __asm__("shld r13W, bx, cl");
    *reinterpret_cast<unsigned char*>(&r11d121) = 0x6b;
    ebp171 = *reinterpret_cast<uint32_t*>(&rbp156) >> 1;
    *reinterpret_cast<int32_t*>(&r12_172) = *reinterpret_cast<int32_t*>(&rsi148) * 0x857641ae;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_172) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r13_145) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r13_145)));
    if (__intrinsic()) {
    }
    __asm__("rcr r8w, 1");
    __asm__("btr rbp, 0x7f");
    *reinterpret_cast<unsigned char*>(&r9w154) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9w154) - 66)));
    r14_173 = reinterpret_cast<int64_t>(~r14_115);
    *reinterpret_cast<uint32_t*>(&r14_174) = *reinterpret_cast<uint32_t*>(&r14_173) >> 24 | *reinterpret_cast<uint32_t*>(&r14_173) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&r14_173) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&r14_173) << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_174) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r11_175) = r11d121;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_175) + 4) = 0;
    rdx176 = 0x6cda3cd5;
    __asm__("bts ebx, r13d");
    __asm__("rol r10, 0xd1");
    r14_177 = reinterpret_cast<uint64_t>(r14_174 + 1);
    *reinterpret_cast<int16_t*>(&r12_172) = 0;
    __asm__("rcl r11w, 1");
    __asm__("rol dx, 0x8d");
    *reinterpret_cast<int32_t*>(&r13_178) = *reinterpret_cast<int32_t*>(&r13_145) - 0x197e895a;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_178) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rsi148) = reinterpret_cast<uint1_t>(!__intrinsic());
    if (*reinterpret_cast<int32_t*>(&r13_178) < 0 == __intrinsic()) {
        r14_177 = r12_172;
    }
    r14d179 = *reinterpret_cast<uint32_t*>(&r14_177);
    __asm__("shrd rsi, r12, cl");
    *reinterpret_cast<uint16_t*>(&r9_126) = reinterpret_cast<uint16_t>(r9w154 & 0x3a93);
    r9_180 = r9_126 & 0x1abd6aac;
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(r9_180 == 0)))) {
        *reinterpret_cast<int16_t*>(&rdx176) = *reinterpret_cast<int16_t*>(&r9_180);
    }
    *reinterpret_cast<uint32_t*>(&rbx181) = r14d179 - (0x76040f0d - reinterpret_cast<uint1_t>(r14d179 < 0x89fbf0f3));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx181) + 4) = 0;
    edx182 = *reinterpret_cast<int32_t*>(&rdx176) - 1;
    __asm__("rol r10w, cl");
    __asm__("shld r12, r12, 0xae");
    *reinterpret_cast<unsigned char*>(&rbx181) = 1;
    if (1) {
        r13_178 = rbx181;
    }
    *reinterpret_cast<unsigned char*>(&r8_157) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r8_157)));
    tmp16_183 = *reinterpret_cast<uint16_t*>(&rbx181);
    *reinterpret_cast<uint16_t*>(&rbx181) = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(0xa091) >> 0x6e);
    *reinterpret_cast<uint16_t*>(&r10_159) = tmp16_183;
    __asm__("shrd rdi, r8, 0x1");
    if (__undefined()) {
        r8_157 = r10_159;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax161) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax166) + 1) & 0x83);
    *reinterpret_cast<uint16_t*>(&rsi148) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi148) >> 1);
    tmp8_184 = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&edx182) + 1);
    *reinterpret_cast<signed char*>(&rax161) = tmp8_184;
    *reinterpret_cast<uint32_t*>(&rdi185) = *reinterpret_cast<uint32_t*>(&rdi170) | 0xc0000000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi185) + 4) = 0;
    edx186 = *reinterpret_cast<uint32_t*>(&rax161) % *reinterpret_cast<uint32_t*>(&rdi185);
    __asm__("ror rbp, 0xe5");
    rsi187 = rsi148 - 0x2b7cf200;
    *reinterpret_cast<uint32_t*>(&rax188) = (*reinterpret_cast<uint32_t*>(&rax161) / *reinterpret_cast<uint32_t*>(&rdi185) + 0x47b77495) * 0xec6caa8d;
    *reinterpret_cast<uint16_t*>(&r11_175) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_175) | 0xc000);
    if (!reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax188) / *reinterpret_cast<uint16_t*>(&r11_175))) {
    }
    __asm__("rcl r13, cl");
    *reinterpret_cast<signed char*>(&r9_180) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r9_180) - 81);
    __asm__("rcr r8w, 0xfc");
    __asm__("ror r9, 0xf");
    if (__intrinsic()) {
    }
    __asm__("rcl r10b, 1");
    __asm__("shrd r11, rsi, 0x1");
    __asm__("btr r9d, 0xc4");
    __asm__("rcl r15w, 1");
    *reinterpret_cast<int16_t*>(&edx186) = __intrinsic();
    *reinterpret_cast<unsigned char*>(&rcx165) = *reinterpret_cast<unsigned char*>(&edx186);
    __asm__("bts ebx, 0x68");
    r9d189 = *reinterpret_cast<uint32_t*>(&r9_180) - (edx186 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r9_180) < edx186 + 1));
    __asm__("btr r14, 0xef");
    rdx190 = __intrinsic();
    if (r11_175 == r11_175) {
        r11_175 = r11_175;
    }
    if (__intrinsic() == __intrinsic()) {
        *reinterpret_cast<uint16_t*>(&rbx181) = *reinterpret_cast<uint16_t*>(&r13_178);
    }
    *reinterpret_cast<unsigned char*>(&rsi187) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi187) >> *reinterpret_cast<unsigned char*>(&rcx165));
    __asm__("shld ax, si, 0x9");
    __asm__("bts r13d, 0x5f");
    *reinterpret_cast<uint32_t*>(&r8_191) = *reinterpret_cast<uint32_t*>(&r8_157) - (0x69eda61e - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r8_157) < 0x961259e3));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_191) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rdx190) = *reinterpret_cast<unsigned char*>(&rbx181);
    rdx192 = rdx190 - 1;
    __asm__("bts rax, 0x29");
    __asm__("shrd bp, di, 0x1");
    __asm__("shld bp, di, 0x1");
    __asm__("shld r9w, r10w, 0x9");
    r12_193 = reinterpret_cast<int64_t>(~(r12_172 >> 0xffffffffffffff8d));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx165) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx165) + 1) >> -42);
    __asm__("ror r13, cl");
    __asm__("shld r13W, r13W, 0x3");
    r11_194 = r11_175 << *reinterpret_cast<unsigned char*>(&rcx165);
    *reinterpret_cast<int16_t*>(&rsi187) = -*reinterpret_cast<int16_t*>(&rsi187);
    rdi195 = rdi185 - (r15_168 + reinterpret_cast<uint1_t>(rdi185 < r15_168));
    di196 = *reinterpret_cast<int16_t*>(&r8_191);
    *reinterpret_cast<int16_t*>(&r8_191) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rdi195) * 0xa0d7);
    *reinterpret_cast<int16_t*>(&r9d189) = static_cast<int16_t>(*reinterpret_cast<int32_t*>(&r12_193) + *reinterpret_cast<uint32_t*>(&r8_191) * 2);
    r10_197 = *reinterpret_cast<signed char*>(&rbx181);
    r9d198 = r9d189 & 0x939199e4;
    __asm__("ror r15d, 0xb3");
    ax199 = reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&rdx192) * *reinterpret_cast<uint16_t*>(&rcx165));
    *reinterpret_cast<int16_t*>(&rdx192) = __intrinsic();
    *reinterpret_cast<unsigned char*>(&r12_193) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_193) ^ *reinterpret_cast<unsigned char*>(&r10_197));
    rsi200 = rsi187 * 0xffffffffc634ee2d;
    *reinterpret_cast<int16_t*>(&r9d198) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r9d198) >> 1);
    if (ebp171 == *reinterpret_cast<uint32_t*>(&rsi200)) {
        tmp32_201 = ebp171;
        ebp171 = *reinterpret_cast<uint32_t*>(&rsi200);
        *reinterpret_cast<uint32_t*>(&rsi200) = tmp32_201;
    }
    ax202 = reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(ax199) >> 74);
    __asm__("bsf r10w, r8w");
    *reinterpret_cast<unsigned char*>(&rcx165) = 0;
    __asm__("bsf di, bx");
    *reinterpret_cast<unsigned char*>(&r10_197) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_197) + *reinterpret_cast<signed char*>(&di196));
    r10d203 = *reinterpret_cast<uint32_t*>(&r10_197) & 0xfe6186f0;
    if (*reinterpret_cast<unsigned char*>(&rsi200) == *reinterpret_cast<unsigned char*>(&rbx181)) {
        *reinterpret_cast<unsigned char*>(&rbx181) = *reinterpret_cast<unsigned char*>(&rsi200);
    }
    __asm__("rcl r9w, 1");
    tmp8_204 = *reinterpret_cast<signed char*>(&ebp171);
    *reinterpret_cast<signed char*>(&ebp171) = *reinterpret_cast<signed char*>(&ax202);
    *reinterpret_cast<signed char*>(&ax202) = tmp8_204;
    *reinterpret_cast<int16_t*>(&rdi195) = 0;
    *reinterpret_cast<int32_t*>(&rax205) = ax202;
    ax206 = -*reinterpret_cast<int16_t*>(&rax205);
    __asm__("bsr r11, r11");
    r12_207 = reinterpret_cast<uint64_t>(r12_193 + 1);
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r15_168) = ebp171;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_168) + 4) = 0;
    }
    r11_208 = r11_194 ^ r8_191;
    if (!__intrinsic()) {
        r9d198 = *reinterpret_cast<uint32_t*>(&rdi195);
    }
    r14_209 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int16_t*>(&r15_168)));
    r12w210 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_207) + 1);
    *reinterpret_cast<uint32_t*>(&rdi211) = *reinterpret_cast<uint32_t*>(&rdi195) >> -52;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi211) + 4) = 0;
    __asm__("btc rbp, r12");
    rsi212 = rcx165 + rdi211 * 4;
    if (*reinterpret_cast<unsigned char*>(&rbx181) == *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax206) + 1)) {
        *reinterpret_cast<unsigned char*>(&rbx181) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax206) + 1);
    }
    __asm__("bsr r15, rbp");
    __asm__("bts si, 0xaf");
    if (!__intrinsic()) {
    }
    __asm__("rcr si, 0xba");
    __asm__("bts r13W, r11w");
    __asm__("rcr ah, 0xe");
    __asm__("rol r14, 1");
    __asm__("btr cx, 0x34");
    __asm__("rcr r13, 1");
    *reinterpret_cast<uint16_t*>(&r12_207) = reinterpret_cast<uint16_t>(r12w210 - reinterpret_cast<uint16_t>(0x4d32 + reinterpret_cast<uint1_t>(r12w210 < 0x4d32)));
    __asm__("btc r15d, ebp");
    __asm__("bts rdi, r10");
    __asm__("btr r9, rax");
    *reinterpret_cast<int16_t*>(&r10d203) = *reinterpret_cast<int16_t*>(&rsi212);
    __asm__("shld ebx, r9d, 0x1");
    __asm__("rcr r11, 1");
    __asm__("rol r15w, cl");
    __asm__("bsf r14d, r12d");
    *reinterpret_cast<uint32_t*>(&r11_213) = *reinterpret_cast<uint32_t*>(&r11_208) | 0xe8e9d059;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_213) + 4) = 0;
    __asm__("shld cx, r11w, 0x1");
    __asm__("ror r13d, 0x6");
    r11w214 = reinterpret_cast<uint16_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&r11_213)));
    __asm__("rol r8, 0xb4");
    __asm__("ror r9, 1");
    __asm__("rcr dh, 1");
    *reinterpret_cast<unsigned char*>(&r15_168) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(1 + *reinterpret_cast<signed char*>(&r11w214))));
    __asm__("ror r11d, cl");
    rcx215 = rcx165 << 1;
    __asm__("cdq ");
    __asm__("shrd r12d, r15d, cl");
    *reinterpret_cast<unsigned char*>(&r13_178) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_178) - 1);
    *reinterpret_cast<uint32_t*>(&rsi216) = *reinterpret_cast<signed char*>(&rdx192) + *reinterpret_cast<unsigned char*>(&r14_209);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi216) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rbx217) = *reinterpret_cast<uint32_t*>(&rbx181) + *reinterpret_cast<uint32_t*>(&r15_168);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx217) + 4) = 0;
    if (!*reinterpret_cast<uint32_t*>(&rbx217)) {
        *reinterpret_cast<int16_t*>(&r14_209) = *reinterpret_cast<int16_t*>(&ebp171);
    }
    *reinterpret_cast<int16_t*>(&rsi216) = *reinterpret_cast<int16_t*>(&rsi216);
    *reinterpret_cast<int16_t*>(&eax218) = 0;
    *reinterpret_cast<unsigned char*>(&r14_209) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_209) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_207) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r14_209) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r12_207))))));
    __asm__("rcr r13W, 1");
    *reinterpret_cast<unsigned char*>(&rcx215) = reinterpret_cast<unsigned char>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax218) + 1) + (0 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax218) + 1)))))));
    __asm__("rcl rbp, 1");
    r15b219 = *reinterpret_cast<unsigned char*>(&rbx217);
    *reinterpret_cast<uint16_t*>(&rcx215) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx215) & 0xae15);
    *reinterpret_cast<uint16_t*>(&r11_213) = reinterpret_cast<uint16_t>(r11w214 - reinterpret_cast<uint16_t>(0x5c5 + reinterpret_cast<uint1_t>(r11w214 < 0x5c6)));
    if (!__intrinsic()) {
        rcx215 = r12_207;
    }
    *reinterpret_cast<uint32_t*>(&r10_220) = r10d203 + *reinterpret_cast<uint32_t*>(&rsi216) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_220) + 4) = 0;
    r11_221 = r11_213 & r10_220;
    __asm__("rcl r10w, 0x1d");
    r9d222 = r9d198 + 0x5d08d15a;
    *reinterpret_cast<unsigned char*>(&rcx215) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx215) & 15);
    __asm__("shld bx, r11w, cl");
    *reinterpret_cast<unsigned char*>(&r11_221) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_221) >> 1);
    *reinterpret_cast<uint32_t*>(&rcx223) = *reinterpret_cast<int32_t*>(&rcx215) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx223) + 4) = 0;
    __asm__("rcl r10d, cl");
    *reinterpret_cast<unsigned char*>(&rbx217) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx217) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx217) + 1));
    *reinterpret_cast<uint16_t*>(&r9d222) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9d222) >> 1);
    *reinterpret_cast<uint16_t*>(&rcx223) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx223) - reinterpret_cast<uint16_t>(0x4879 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rcx223) < 0x4879)));
    *reinterpret_cast<uint16_t*>(&r13_178) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_178) + 0x7811)));
    *reinterpret_cast<unsigned char*>(&r13_178) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_178) + *reinterpret_cast<unsigned char*>(&r13_178))));
    __asm__("lahf ");
    __asm__("bts rax, rax");
    __asm__("rcl r9w, 1");
    r14_224 = r14_209 >> 91;
    *reinterpret_cast<uint32_t*>(&r11_225) = *reinterpret_cast<uint32_t*>(&r11_221) ^ 0x605efe7e;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_225) + 4) = 0;
    __asm__("xadd edi, edx");
    *reinterpret_cast<uint32_t*>(&r9_226) = r9d222 - (0x138f5231 - reinterpret_cast<uint1_t>(r9d222 < 0x138f5231 - __intrinsic()));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_226) + 4) = 0;
    __asm__("rcl r12w, 1");
    *reinterpret_cast<int32_t*>(&rdx227) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx227) + 4) = 0;
    __asm__("shld dx, di, 0x6");
    *reinterpret_cast<uint32_t*>(&rbp228) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&r14_224)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp228) + 4) = 0;
    __asm__("ror rax, 0x24");
    *reinterpret_cast<uint16_t*>(&r8_229) = static_cast<uint16_t>(rsi216 + rbp228 * 8);
    __asm__("shrd ebx, edx, cl");
    *reinterpret_cast<unsigned char*>(&r15_168) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r15b219 & 0x9a) - 39);
    *reinterpret_cast<unsigned char*>(&rsi216) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi216) & *reinterpret_cast<unsigned char*>(&r13_178));
    __asm__("rcr ebp, 1");
    __asm__("rol r9b, cl");
    if (*reinterpret_cast<int32_t*>(&r12_207) >= reinterpret_cast<int32_t>(0x7955f6d2)) {
        r13_178 = rdx227;
    }
    rsi230 = rsi216 << *reinterpret_cast<unsigned char*>(&rcx223);
    __asm__("xadd r15b, cl");
    if (!__undefined()) {
        rbx217 = r9_226;
    }
    if (!__intrinsic()) {
        r11_225 = 0;
    }
    si231 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi230) - 0x3581);
    rcx232 = rcx223 >> 1;
    rbx233 = rbx217 >> 1;
    __asm__("bts r10d, r8d");
    __asm__("btr r9d, r8d");
    __asm__("ror edx, cl");
    r8w234 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_229) >> *reinterpret_cast<unsigned char*>(&rcx232));
    __asm__("rol bp, cl");
    __asm__("btc r12w, 0x2e");
    *reinterpret_cast<unsigned char*>(&rbx233) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx233) >> *reinterpret_cast<unsigned char*>(&rcx232));
    r14_235 = r14_224 ^ r12_207;
    __asm__("rol r13d, cl");
    __asm__("btc edx, 0x46");
    __asm__("shrd rcx, r11, 0xfd");
    __asm__("ror r13W, 0xcc");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx232) + 1) = 0;
    *reinterpret_cast<unsigned char*>(&r9_226) = 0;
    __asm__("rol r14d, cl");
    *reinterpret_cast<unsigned char*>(&rcx232) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx232) & 15);
    __asm__("shld dx, di, cl");
    *reinterpret_cast<uint32_t*>(&rax236) = 0xc2173c22 * *reinterpret_cast<uint32_t*>(&r11_225);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax236) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx237) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx237) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r10_220) = reinterpret_cast<unsigned char>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax236) + (0 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rax236)))))));
    tmp16_238 = *reinterpret_cast<int16_t*>(&rbp228);
    *reinterpret_cast<int16_t*>(&rbp228) = *reinterpret_cast<int16_t*>(&r10_220);
    *reinterpret_cast<int16_t*>(&r10_220) = tmp16_238;
    edi239 = 0x7efe5e60 << *reinterpret_cast<unsigned char*>(&rcx232);
    *reinterpret_cast<signed char*>(&si231) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&si231) >> 1);
    __asm__("shrd si, cx, 0x9");
    *reinterpret_cast<uint32_t*>(&rbp240) = *reinterpret_cast<uint32_t*>(&rbp228) >> *reinterpret_cast<unsigned char*>(&rcx232);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp240) + 4) = 0;
    r8d241 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r8w234)) << 24 << 1;
    __asm__("rcr bp, cl");
    __asm__("ror r9w, 0x27");
    __asm__("bsf eax, r10d");
    tmp32_242 = r8d241 + edi239;
    *reinterpret_cast<int32_t*>(&rcx243) = *reinterpret_cast<int32_t*>(&rcx232) - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx243) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r9_244) = *reinterpret_cast<uint32_t*>(&r9_226) + 0x2a98ebe1 + reinterpret_cast<uint1_t>(tmp32_242 < r8d241);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_244) + 4) = 0;
    __asm__("rol r13, 0x36");
    r10_245 = (r10_220 << 18) + 1;
    sf246 = reinterpret_cast<int64_t>(r10_245) < reinterpret_cast<int64_t>(0);
    if (!sf246) {
        *reinterpret_cast<int16_t*>(&edi239) = *reinterpret_cast<int16_t*>(&rdx237);
    }
    if (sf246 == __intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r13_178) = *reinterpret_cast<uint16_t*>(&r11_225);
    }
    *reinterpret_cast<unsigned char*>(&r12_207) = reinterpret_cast<uint1_t>(!sf246);
    *reinterpret_cast<uint32_t*>(&r8_247) = tmp32_242 - tmp32_242;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_247) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdi248) = edi239 << 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi248) + 4) = 0;
    __asm__("btr rbx, 0x3b");
    *reinterpret_cast<unsigned char*>(&r10_245) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_245) >> 56);
    r11_249 = r11_225 & r15_168;
    if (0) {
        *reinterpret_cast<uint32_t*>(&r15_168) = *reinterpret_cast<uint32_t*>(&r12_207);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_168) + 4) = 0;
    }
    *reinterpret_cast<int32_t*>(&r14_250) = *reinterpret_cast<int32_t*>(&r14_235) - *reinterpret_cast<int32_t*>(&rcx243);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_250) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rsi230) = reinterpret_cast<uint16_t>(si231 ^ 0x993d);
    __asm__("lahf ");
    __asm__("rcr r14, 1");
    __asm__("rcl r15d, cl");
    *reinterpret_cast<unsigned char*>(&rcx243) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx243) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rdi248) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx243) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rdi248) + 1))));
    *reinterpret_cast<unsigned char*>(&rsi230) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi230) - reinterpret_cast<unsigned char>(59 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rsi230) < 0xc6)));
    return rax236 + rbx233 + rcx243 + rdx237 + rbp240 + rsi230 + rdi248 + r8_247 + (r9_244 - (0x6b4b7743 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r9_244 < 0x6b4b7744)))) + r10_245 + r11_249 + r12_207 + r13_178 + r14_250 + r15_168 + 0x733ffff96c4df62d;
}

uint64_t log_size_10_var_005(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rax7;
    int64_t r12_8;
    int64_t r14_9;
    uint64_t r12_10;
    uint32_t r10d11;
    int64_t rax12;
    uint64_t r12_13;
    uint64_t rsi14;
    uint64_t rax15;
    int64_t rax16;
    int64_t r8_17;
    uint16_t cx18;
    uint64_t rbx19;
    uint16_t tmp16_20;
    int64_t rcx21;
    int64_t r10_22;
    int64_t r14_23;
    int64_t r15_24;
    uint64_t rsi25;
    int64_t rax26;
    uint64_t r9_27;
    int64_t rax28;
    int64_t rdx29;
    int64_t rbp30;
    int64_t r8_31;
    unsigned char tmp8_32;
    int16_t ax33;
    int64_t r10_34;
    uint16_t ax35;
    uint32_t ecx36;
    int32_t r10d37;
    uint64_t r15_38;
    uint64_t rdx39;
    uint32_t edi40;
    int1_t cf41;
    uint64_t r10_42;
    uint32_t ecx43;
    uint16_t ax44;
    int64_t r14_45;
    uint64_t rbx46;
    uint64_t rbx47;
    int64_t rsi48;
    uint32_t ebp49;
    uint64_t rcx50;
    uint64_t tmp64_51;
    uint64_t tmp64_52;
    uint64_t r12_53;
    uint64_t rbp54;
    int64_t rdx55;
    uint64_t r9_56;
    int32_t ebx57;
    int64_t rdi58;
    uint64_t r8_59;
    uint1_t cf60;
    int64_t r14_61;
    uint64_t rcx62;
    uint64_t r12_63;
    int64_t r9_64;
    int64_t rcx65;
    int16_t ax66;
    uint64_t r14_67;
    int64_t r9_68;
    uint64_t rbp69;
    uint64_t rsi70;
    int32_t edx71;
    uint64_t rbp72;
    int64_t rdx73;
    int64_t rax74;
    int64_t rdi75;
    uint1_t cf76;
    uint64_t r14_77;
    int64_t rdx78;
    uint64_t r11_79;
    int32_t ebp80;
    uint64_t rdi81;
    uint32_t ebx82;
    int64_t r8_83;
    uint64_t r9_84;
    uint64_t tmp64_85;
    uint64_t tmp64_86;
    uint64_t rsi87;
    int64_t r14_88;
    uint64_t r8_89;
    uint32_t tmp32_90;
    int64_t r8_91;
    int1_t less_or_equal92;
    uint64_t rbx93;
    int64_t r13_94;
    int64_t rcx95;
    uint64_t r12_96;
    uint16_t ax97;
    int64_t r8_98;
    uint64_t r9_99;
    int64_t rbp100;
    uint16_t ax101;
    uint16_t r13w102;
    int64_t r10_103;
    unsigned char al104;
    uint64_t r14_105;
    int32_t r9d106;
    uint1_t cf107;
    uint16_t ax108;
    int64_t rdx109;
    int32_t r8d110;
    int64_t rsi111;
    int64_t r15_112;
    uint64_t rbx113;
    uint64_t rax114;
    uint64_t rbp115;
    int32_t tmp32_116;
    uint16_t ax117;
    uint32_t r10d118;
    uint32_t r11d119;
    int32_t ecx120;
    uint64_t r8_121;
    signed char al122;
    uint64_t r9_123;
    uint32_t edi124;
    uint32_t ebp125;
    uint64_t r13_126;
    uint16_t r10w127;
    uint64_t r15_128;
    uint64_t r8_129;
    uint16_t tmp16_130;
    uint64_t rdi131;
    unsigned char tmp8_132;
    uint64_t r13_133;
    uint64_t rdx134;
    uint32_t r12d135;
    int64_t r11_136;
    uint64_t rcx137;
    uint32_t eax138;
    uint32_t ebp139;
    unsigned char cl140;
    uint64_t rsi141;
    uint64_t r9_142;
    int64_t rax143;
    uint64_t r8_144;
    uint64_t r14_145;
    int64_t rbp146;
    uint1_t cf147;
    unsigned char r15b148;
    uint64_t rdi149;
    int16_t ax150;
    unsigned char cl151;
    uint64_t rdx152;
    uint32_t r12d153;
    int64_t r8_154;
    uint32_t r13d155;
    uint64_t rsi156;
    uint1_t zf157;
    uint64_t r11_158;
    uint64_t rsi159;
    uint64_t rdi160;
    uint64_t r11_161;
    uint64_t rbp162;
    int64_t r13_163;
    uint64_t rdx164;
    uint64_t r15_165;
    int64_t r12_166;
    uint64_t rdi167;
    int64_t r11_168;
    uint64_t rax169;
    int64_t rax170;
    int64_t r14_171;
    uint64_t rax172;
    uint64_t r15_173;
    int64_t r11_174;
    int32_t esi175;
    uint64_t r15_176;
    uint64_t rdx177;
    int64_t rax178;
    uint64_t r13_179;
    unsigned char tmp8_180;
    uint64_t r13_181;
    uint64_t rdi182;
    uint64_t r9_183;
    uint64_t rax184;
    signed char r9b185;
    uint16_t cx186;
    uint64_t r13_187;
    int64_t rbp188;
    uint64_t r8_189;
    uint64_t rdi190;
    int32_t eax191;
    uint64_t rcx192;
    unsigned char tmp8_193;
    int64_t rbx194;
    uint64_t rcx195;
    uint64_t r9_196;
    int64_t rax197;
    int64_t rax198;
    int64_t rsi199;
    uint64_t r13_200;
    int64_t rax201;
    int64_t r10_202;
    int64_t rdx203;
    int32_t tmp32_204;
    unsigned char tmp8_205;

    rax7 = 0x9cdff25eb98613e1;
    r12_8 = 0xf1df27961a1f50a8;
    r14_9 = 0xd4676858978c6b71;
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r12_8) = 0x333b89da;
    }
    *reinterpret_cast<signed char*>(&rax7) = reinterpret_cast<signed char>(-31 >> -16);
    *reinterpret_cast<uint32_t*>(&r12_10) = *reinterpret_cast<uint32_t*>(&r12_8) ^ 0x5bbcdae1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_10) + 4) = 0;
    __asm__("rol rax, 0x65");
    *reinterpret_cast<uint16_t*>(&rax7) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax7) - reinterpret_cast<uint16_t>(0x196e + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rax7) < 0x196e)));
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax7) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax7) + 1) >> 0x9a);
    __asm__("rol r9w, 1");
    r10d11 = 0x92f2b185;
    __asm__("shrd r8w, r10w, 0x1");
    if (reinterpret_cast<uint1_t>(__undefined() != __undefined()) | __undefined()) {
    }
    rax12 = rax7 >> -82;
    __asm__("bsf rbp, r8");
    __asm__("shld edi, r15d, 0x1");
    __asm__("bts bp, ax");
    __asm__("rcr r12w, 1");
    __asm__("rol sil, 0x4a");
    __asm__("rol bh, 0x5");
    if (reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(0x6e + *reinterpret_cast<unsigned char*>(&rax12)) + 1) < reinterpret_cast<signed char>(0) == __intrinsic()) {
    }
    __asm__("shrd ax, r9w, 0xa");
    *reinterpret_cast<int16_t*>(&r14_9) = -0x6bc3;
    r12_13 = r12_10 - (0x1a95a76f - static_cast<uint64_t>(reinterpret_cast<uint1_t>(r12_10 < 0xffffffffe56a5892))) | 0xc000000000000000;
    rsi14 = 0x74a068b2;
    rax15 = rax12 / r12_13 - 0x458f6f9;
    *reinterpret_cast<int32_t*>(&rax16) = *reinterpret_cast<int32_t*>(&rax15) << 1;
    *reinterpret_cast<uint32_t*>(&r8_17) = 0xc681;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_17) + 4) = 0;
    cx18 = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax16) + 1)));
    *reinterpret_cast<int16_t*>(&rsi14) = 0x974d;
    __asm__("rcl r8w, 0xd3");
    *reinterpret_cast<unsigned char*>(&r10d11) = reinterpret_cast<unsigned char>(0x85 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&cx18) + reinterpret_cast<uint1_t>(0x85 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&cx18))))));
    __asm__("btr rdx, 0xe9");
    *reinterpret_cast<uint32_t*>(&rbx19) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&cx18) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx19) + 4) = 0;
    if (0) {
        *reinterpret_cast<uint32_t*>(&r8_17) = 0x5daac681;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_17) + 4) = 0;
    }
    __asm__("shrd r11d, r13d, 0x1");
    *reinterpret_cast<unsigned char*>(&r14_9) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_9) - 0x7f)));
    *reinterpret_cast<signed char*>(&rsi14) = -77;
    __asm__("rol r10b, 1");
    tmp16_20 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(cx18 + 0x7d8a) + 1);
    *reinterpret_cast<uint16_t*>(&rcx21) = tmp16_20;
    if (tmp16_20 >= cx18) {
    }
    __asm__("xadd dx, ax");
    __asm__("rcr bh, 1");
    __asm__("bsr r10d, eax");
    __asm__("rol r11w, 1");
    *reinterpret_cast<uint32_t*>(&r10_22) = r10d11 - (*reinterpret_cast<uint32_t*>(&rbx19) + reinterpret_cast<uint1_t>(r10d11 < *reinterpret_cast<uint32_t*>(&rbx19))) - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_22) + 4) = 0;
    __asm__("ror r9w, 0x85");
    *reinterpret_cast<int32_t*>(&r14_23) = *reinterpret_cast<int32_t*>(&r14_9) + *reinterpret_cast<int32_t*>(&r12_13);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_23) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r14_23) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_23) - reinterpret_cast<uint16_t>(0x70ab + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r14_23) < 0x70ab)));
    *reinterpret_cast<signed char*>(&rbx19) = 20;
    __asm__("xadd r13W, r8w");
    __asm__("rol bp, cl");
    *reinterpret_cast<int16_t*>(&r10_22) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r10_22) + 0x57fc);
    *reinterpret_cast<int32_t*>(&r15_24) = *reinterpret_cast<int32_t*>(&rsi14);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_24) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx19) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx19) + 1) & 12);
    __asm__("rcl r10d, 1");
    rsi25 = 0x3400 & rbx19;
    __asm__("shld r9d, r15d, cl");
    __asm__("rcr dh, 1");
    if (__intrinsic()) {
    }
    *reinterpret_cast<signed char*>(&r8_17) = 0;
    __asm__("xadd r11, rdi");
    *reinterpret_cast<int32_t*>(&rax26) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rax26) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax26) + 1)));
    *reinterpret_cast<signed char*>(&rsi25) = reinterpret_cast<signed char>(0 >> -88);
    *reinterpret_cast<int32_t*>(&r9_27) = static_cast<int32_t>(r14_23 + rsi25 * 2 + 0xea);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_27) + 4) = 0;
    __asm__("ror r10b, 1");
    if (1) {
    }
    *reinterpret_cast<uint16_t*>(&r9_27) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_27) >> -48);
    rax28 = rax26 * r15_24;
    rdx29 = __intrinsic();
    rbp30 = r8_17;
    if (!__intrinsic()) {
    }
    __asm__("shrd r10, rsi, cl");
    *reinterpret_cast<unsigned char*>(&rbp30) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rcx21)));
    __asm__("rcr r11b, cl");
    r8_31 = r8_17 >> *reinterpret_cast<unsigned char*>(&rcx21);
    __asm__("bsr si, r8w");
    __asm__("shld r11d, ebp, 0x89");
    tmp8_32 = *reinterpret_cast<unsigned char*>(&rcx21);
    *reinterpret_cast<unsigned char*>(&ax33) = tmp8_32;
    __asm__("bsr r15d, esi");
    __asm__("ror r13W, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax33) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax28) + 1) - 0xc8);
    __asm__("shld ax, cx, 0x1");
    r10_34 = r10_22 >> *reinterpret_cast<unsigned char*>(&rax28);
    __asm__("shrd r14, r11, cl");
    ax35 = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(~ax33) * *reinterpret_cast<uint16_t*>(&r9_27));
    *reinterpret_cast<int16_t*>(&rdx29) = __intrinsic();
    __asm__("rol rbp, 0x4a");
    __asm__("rol r9b, 1");
    ecx36 = *reinterpret_cast<unsigned char*>(&rdx29);
    __asm__("bts r10d, 0x5d");
    r10d37 = -*reinterpret_cast<int32_t*>(&r10_34);
    *reinterpret_cast<uint16_t*>(&ecx36) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx36) >> 84);
    __asm__("shrd r12w, r15w, 0xd");
    __asm__("btc r10, 0x28");
    r15_38 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int16_t*>(&r10d37)));
    __asm__("rcr r15w, 1");
    *reinterpret_cast<int32_t*>(&rdx39) = *reinterpret_cast<int32_t*>(&rdx29) + 0x63016889;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx39) + 4) = 0;
    *reinterpret_cast<int16_t*>(&rbx19) = -0x8866;
    *reinterpret_cast<unsigned char*>(&r15_38) = reinterpret_cast<uint1_t>(!!*reinterpret_cast<int16_t*>(&rbx19));
    __asm__("rol r8d, 1");
    *reinterpret_cast<uint16_t*>(&rbp30) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp30) | *reinterpret_cast<uint16_t*>(&r12_13)) + ax35) + 1);
    __asm__("rcr r13d, 0xeb");
    edi40 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ecx36)) << 24;
    cf41 = rdx39 < r15_38;
    if (cf41) {
    }
    __asm__("rcr r9b, 1");
    __asm__("cwd ");
    r10_42 = r12_13;
    if (cf41) {
    }
    ecx43 = ecx36 + 0x22d3ed34;
    __asm__("rcr r11w, 1");
    ax44 = reinterpret_cast<uint16_t>(ax35 / 0xff00);
    r14_45 = 0;
    *reinterpret_cast<uint32_t*>(&rbx46) = *reinterpret_cast<uint32_t*>(&rbx19) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&rbx19) << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx46) + 4) = 0;
    __asm__("shrd r9d, r13d, cl");
    *reinterpret_cast<signed char*>(&r8_31) = -*reinterpret_cast<signed char*>(&r8_31);
    __asm__("ror bx, cl");
    __asm__("shld ax, bx, 0xb");
    rbx47 = rbx46 - (0x4ab140ea - static_cast<uint64_t>(reinterpret_cast<uint1_t>(rbx46 < 0xffffffffb54ebf17)));
    __asm__("rcl al, 1");
    __asm__("shrd r8w, r8w, 0x1");
    __asm__("btc r14, rax");
    __asm__("rol ch, 0xb2");
    __asm__("shrd rcx, rcx, 0x1");
    *reinterpret_cast<unsigned char*>(&rax28) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ax44) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx43) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&ax44) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx43) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rbx47) < *reinterpret_cast<unsigned char*>(&ecx43))))));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax28) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax44) + 1) + 3)));
    *reinterpret_cast<int32_t*>(&rsi48) = *reinterpret_cast<signed char*>(&r8_31);
    ebp49 = *reinterpret_cast<int32_t*>(&rbp30) + *reinterpret_cast<int32_t*>(&r8_31) + 1;
    __asm__("shrd r14w, di, 0x1");
    if (__intrinsic()) {
        r9_27 = r12_13;
    }
    __asm__("rcr esi, 1");
    *reinterpret_cast<uint16_t*>(&r9_27) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_27) - *reinterpret_cast<int16_t*>(&r15_38));
    *reinterpret_cast<uint32_t*>(&rcx50) = ecx43 - (0x7715f001 - reinterpret_cast<uint1_t>(ecx43 < 0x7715f001 - reinterpret_cast<uint1_t>(r15_38 + 0xfffffffff71c919e + static_cast<uint1_t>(reinterpret_cast<uint16_t>(0 >> *reinterpret_cast<int16_t*>(&rsi48))) < r15_38)));
    tmp64_51 = (r12_13 & 0xffffffff) << 32 | (r12_13 & 0xffffffff00000000) >> 32;
    tmp64_52 = (tmp64_51 & 0xffff0000ffff) << 16 | (tmp64_51 & 0xffff0000ffff0000) >> 16;
    r12_53 = (tmp64_52 & 0xff00ff00ff00ff) << 8 | (tmp64_52 & 0xff00ff00ff00ff00) >> 8;
    __asm__("shrd r9, rdi, 0x43");
    __asm__("ror rcx, 0x84");
    if (*reinterpret_cast<signed char*>(&rax28) < *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax28) + 1)) {
        *reinterpret_cast<uint32_t*>(&rcx50) = 0;
    }
    if (*reinterpret_cast<signed char*>(&rax28) > *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax28) + 1)) {
        rcx50 = rbx47;
    }
    *reinterpret_cast<uint32_t*>(&rbp54) = ebp49 >> 24 | ebp49 >> 8 & 0xff00 | ebp49 << 8 & 0xff0000 | ebp49 << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp54) + 4) = 0;
    *reinterpret_cast<int16_t*>(&r10_42) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r10_42) >> 95);
    *reinterpret_cast<int32_t*>(&rdx55) = __intrinsic();
    r9_56 = r9_27 - (0xa72a9f8 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r9_27 < 0xa72a9f9)));
    *reinterpret_cast<unsigned char*>(&rcx50) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx50) & 15);
    __asm__("shld r10w, r12w, cl");
    __asm__("shld r8, rcx, 0x2d");
    ebx57 = *reinterpret_cast<int32_t*>(&r8_31);
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx55) + 1) == *reinterpret_cast<signed char*>(&ebx57)) {
    }
    __asm__("ror ah, cl");
    __asm__("ror bpl, 1");
    *reinterpret_cast<uint16_t*>(&rbp54) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp54) - 0x4ae3);
    if (static_cast<int1_t>(*reinterpret_cast<uint32_t*>(&r10_42) >> 18)) {
        *reinterpret_cast<uint16_t*>(&rcx50) = *reinterpret_cast<uint16_t*>(&rbp54);
    }
    __asm__("rcr r9b, cl");
    __asm__("rol dl, 0x86");
    if (__intrinsic()) {
    }
    *reinterpret_cast<signed char*>(&ebx57) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ebx57) + 1);
    *reinterpret_cast<int16_t*>(&r14_45) = reinterpret_cast<int16_t>(-reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rcx50))));
    *reinterpret_cast<uint16_t*>(&edi40) = 0x56bf;
    if (1) {
    }
    *reinterpret_cast<uint32_t*>(&rdi58) = edi40 - (*reinterpret_cast<uint32_t*>(&rcx50) + reinterpret_cast<uint1_t>(edi40 < *reinterpret_cast<uint32_t*>(&rcx50)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi58) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r8_59) = *reinterpret_cast<uint32_t*>(&rdi58) + *reinterpret_cast<uint32_t*>(&rdi58);
    __asm__("cwd ");
    *reinterpret_cast<uint16_t*>(&rbp54) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp54) >> -4);
    __asm__("shld rsi, r10, 0x35");
    __asm__("shld r8w, r8w, 0x1");
    __asm__("rcl cx, 1");
    *reinterpret_cast<uint16_t*>(&rdi58) = *reinterpret_cast<uint16_t*>(&rbp54);
    cf60 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r14_45) < 0x2008db81);
    *reinterpret_cast<uint32_t*>(&r14_61) = *reinterpret_cast<uint32_t*>(&r14_45) - (0x2008db80 + cf60);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_61) + 4) = 0;
    __asm__("btr rbp, 0x74");
    __asm__("btc r13d, 0xea");
    if (*reinterpret_cast<uint32_t*>(&r14_61) == static_cast<uint32_t>(cf60)) {
        *reinterpret_cast<int16_t*>(&r12_53) = *reinterpret_cast<int16_t*>(&rsi48);
    }
    *reinterpret_cast<uint16_t*>(&rcx50) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx50) + 1))) ^ 0xc1ea);
    *reinterpret_cast<unsigned char*>(&r14_61) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_61) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_53) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r14_61) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r12_53))))));
    *reinterpret_cast<unsigned char*>(&r10_42) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&rbp54) > 82);
    if (*reinterpret_cast<signed char*>(&rbp54) >= 82) {
        *reinterpret_cast<uint32_t*>(&rcx50) = *reinterpret_cast<uint32_t*>(&rdi58);
    }
    __asm__("rcr al, 0x1c");
    __asm__("bsf dx, r9w");
    rcx62 = *reinterpret_cast<uint32_t*>(&r14_61) + *reinterpret_cast<uint32_t*>(&rcx50) * 4;
    r12_63 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<signed char*>(&r9_56)));
    __asm__("btr r12w, ax");
    __asm__("rcr edx, cl");
    __asm__("bsr edx, r9d");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ebx57) + 1) = 0;
    *reinterpret_cast<int32_t*>(&r9_64) = ebx57;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_64) + 4) = 0;
    if (1) {
        r8_59 = r10_42;
    }
    __asm__("rcr bh, cl");
    __asm__("rcl r10b, cl");
    *reinterpret_cast<uint32_t*>(&rcx65) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx62) - 0x41665d81);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx65) + 4) = 0;
    ax66 = 0;
    r14_67 = reinterpret_cast<uint64_t>(r14_61 + 1);
    __asm__("rcr bl, 1");
    *reinterpret_cast<signed char*>(&rdi58) = -*reinterpret_cast<signed char*>(&rdi58);
    __asm__("rcl r8d, cl");
    r9_68 = r9_64 << *reinterpret_cast<unsigned char*>(&rcx65);
    __asm__("xadd eax, ebp");
    *reinterpret_cast<signed char*>(&r9_68) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r9_68) + 30);
    rbp69 = rbp54 & 0xffffffffc87696bf;
    __asm__("shld r13d, r9d, 0xdd");
    *reinterpret_cast<int16_t*>(&r14_67) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r14_67) >> 86);
    *reinterpret_cast<int16_t*>(&r8_59) = 0x2d5b;
    __asm__("shrd di, r8w, 0x5");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx65) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx65) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax66) + 1)) + 1);
    *reinterpret_cast<int32_t*>(&rsi70) = *reinterpret_cast<int16_t*>(&rcx65);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi70) + 4) = 0;
    __asm__("rcl r13, 1");
    __asm__("rcr r13, 0x5a");
    *reinterpret_cast<uint16_t*>(&rcx65) = *reinterpret_cast<unsigned char*>(&r12_63);
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&rcx65) = 0;
    }
    if (1) {
    }
    __asm__("rcr rbp, 1");
    edx71 = __intrinsic();
    *reinterpret_cast<int16_t*>(&rbp69) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbp69) >> *reinterpret_cast<unsigned char*>(&rcx65));
    rbp72 = rbp69 >> 1;
    __asm__("bts r10, r8");
    *reinterpret_cast<unsigned char*>(&rcx65) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx65) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&edx71) + 1))));
    __asm__("bsf r15, rcx");
    *reinterpret_cast<unsigned char*>(&rsi70) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi70) ^ 57);
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&rdi58) = *reinterpret_cast<uint16_t*>(&rcx65);
    }
    rdx73 = __intrinsic();
    __asm__("rcl rbx, 1");
    rax74 = 0;
    rdi75 = rdi58 << 1;
    __asm__("btc r12w, bp");
    __asm__("ror al, 1");
    cf76 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rdx73) < 0xd2ff);
    r14_77 = r14_67 - (0x69b0ead7 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(r14_67 < 0x69b0ead7 - static_cast<uint64_t>(cf76))));
    rdx78 = *reinterpret_cast<signed char*>(&rdi75);
    __asm__("rol dil, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx65) + 1) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&rdx73) - reinterpret_cast<uint16_t>(0x2d01 - cf76)) >= reinterpret_cast<int16_t>(static_cast<uint32_t>(cf76)))) & 0xfb);
    r11_79 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(-(r12_63 + (0 < r12_63))) >> 1);
    *reinterpret_cast<uint16_t*>(&rdi75) = 0;
    ebp80 = *reinterpret_cast<int32_t*>(&rbp72) + *reinterpret_cast<int32_t*>(&rbp72) * 8 - 0x38b8ff33;
    *reinterpret_cast<uint32_t*>(&rdi81) = *reinterpret_cast<uint32_t*>(&rdi75) - (*reinterpret_cast<uint32_t*>(&r8_59) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdi75) < *reinterpret_cast<uint32_t*>(&r8_59) + __intrinsic()));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi81) + 4) = 0;
    ebx82 = 0xffffffff;
    __asm__("rcl dx, 0x9f");
    *reinterpret_cast<unsigned char*>(&rcx65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx65) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx78) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx65) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx78) + 1))))));
    *reinterpret_cast<uint32_t*>(&r8_83) = *reinterpret_cast<uint32_t*>(&r8_59) - *reinterpret_cast<uint32_t*>(&rcx65);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_83) + 4) = 0;
    __asm__("bts r9w, 0x6f");
    *reinterpret_cast<int16_t*>(&r14_77) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r14_77) - 0x2c5c);
    if (!__intrinsic()) {
        rdi81 = rsi70;
    }
    __asm__("rol cl, 0x1c");
    *reinterpret_cast<uint32_t*>(&r9_84) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r9_68) >> 0xffffff82) >> *reinterpret_cast<unsigned char*>(&rcx65);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_84) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rsi70) = *reinterpret_cast<unsigned char*>(&ebp80);
    tmp64_85 = (rsi70 & 0xffffffff) << 32;
    tmp64_86 = (tmp64_85 & 0xffff0000ffff) << 16 | (tmp64_85 & 0xffff0000ffff0000) >> 16;
    rsi87 = (tmp64_86 & 0xff00ff00ff00ff) << 8 | (tmp64_86 & 0xff00ff00ff00ff00) >> 8;
    __asm__("ror r15d, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ebx82) + 1) = 0xff;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx65) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx65) + 1) - reinterpret_cast<unsigned char>(66 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx65) + 1) < 66)));
    __asm__("bsf di, cx");
    __asm__("xadd rdi, r8");
    *reinterpret_cast<uint32_t*>(&r14_88) = *reinterpret_cast<uint32_t*>(&r14_77) - (0x10610a8a + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r14_77) < 0x10610a8a + static_cast<uint1_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx65) >> 0x7c))));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_88) + 4) = 0;
    __asm__("shld dx, r11w, 0x1");
    r8_89 = reinterpret_cast<uint64_t>(r8_83 + r14_88) - 0x65721bdc;
    tmp32_90 = *reinterpret_cast<uint32_t*>(&r8_89) + 0x253c840 + 1;
    *reinterpret_cast<uint32_t*>(&r8_91) = tmp32_90;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_91) + 4) = 0;
    less_or_equal92 = *reinterpret_cast<signed char*>(&r12_63) <= reinterpret_cast<signed char>(16 - reinterpret_cast<uint1_t>(tmp32_90 < *reinterpret_cast<uint32_t*>(&r8_89)));
    if (!less_or_equal92) {
        ebx82 = *reinterpret_cast<uint32_t*>(&rcx65);
    }
    *reinterpret_cast<uint32_t*>(&rbx93) = ebx82 >> *reinterpret_cast<unsigned char*>(&rcx65);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx93) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rbx93) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rbx93) >> 49);
    __asm__("shld r14, r8, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx65) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx65) + 1) - *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx93) + 1));
    *reinterpret_cast<unsigned char*>(&rcx65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx65) << 1);
    __asm__("rol ebp, 1");
    __asm__("rol r12d, cl");
    __asm__("rol r14, cl");
    __asm__("rcr rsi, 1");
    __asm__("rcr r9d, 0xe8");
    r13_94 = rcx65 * 0x237112f1;
    *reinterpret_cast<uint16_t*>(&rsi87) = reinterpret_cast<uint16_t>(~reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r11_79))));
    *reinterpret_cast<unsigned char*>(&rax74) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("shrd r10d, eax, 0xb8");
    *reinterpret_cast<uint32_t*>(&rcx95) = *reinterpret_cast<uint32_t*>(&rcx65) - (*reinterpret_cast<int32_t*>(&r13_94) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rcx65) < *reinterpret_cast<int32_t*>(&r13_94) + 1));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx95) + 4) = 0;
    __asm__("rcl bx, 1");
    __asm__("rcr dh, 1");
    *reinterpret_cast<signed char*>(&r8_91) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r8_91) << 1);
    *reinterpret_cast<unsigned char*>(&rdi81) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi81) + *reinterpret_cast<unsigned char*>(&rax74));
    r12_96 = *reinterpret_cast<uint32_t*>(&rdi81) + 0x68;
    *reinterpret_cast<unsigned char*>(&ax97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax74) >> -58);
    r8_98 = -r8_91;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax97) + 1) = reinterpret_cast<uint1_t>(!!r8_91);
    *reinterpret_cast<unsigned char*>(&rdi81) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi81) - 1);
    __asm__("bsf r12w, si");
    r9_99 = r9_84 - r12_96;
    if (reinterpret_cast<int64_t>(r9_84) > reinterpret_cast<int64_t>(r12_96)) {
    }
    *reinterpret_cast<uint32_t*>(&rbp100) = *reinterpret_cast<uint32_t*>(&rbx93);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp100) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rcx95) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx95) | 0xc0);
    ax101 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(ax97 & 0x3fff) / static_cast<int16_t>(*reinterpret_cast<signed char*>(&rcx95)));
    __asm__("rol di, cl");
    __asm__("bts si, 0x28");
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rdi81) = *reinterpret_cast<uint32_t*>(&rbx93);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi81) + 4) = 0;
    }
    r13w102 = reinterpret_cast<uint16_t>(~*reinterpret_cast<int16_t*>(&r13_94));
    __asm__("bsf r13W, r15w");
    __asm__("shld edx, r12d, 0x1");
    *reinterpret_cast<uint32_t*>(&r10_103) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rsi87) * 0xb606e45a);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_103) + 4) = 0;
    al104 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ax101) - 23)));
    *reinterpret_cast<int32_t*>(&r14_105) = 0x531e33b0 - *reinterpret_cast<int32_t*>(&r9_99);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_105) + 4) = 0;
    r9d106 = 0x1d3;
    cf107 = reinterpret_cast<uint1_t>(al104 < 0xd0);
    *reinterpret_cast<unsigned char*>(&ax101) = reinterpret_cast<unsigned char>(al104 - reinterpret_cast<unsigned char>(49 - cf107));
    ax108 = reinterpret_cast<uint16_t>(ax101 - reinterpret_cast<uint16_t>(0xf9 + reinterpret_cast<uint1_t>(ax101 < reinterpret_cast<uint16_t>(0xf9 + cf107))));
    __asm__("rcl r11w, 0x53");
    *reinterpret_cast<unsigned char*>(&r11_79) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_79) >> *reinterpret_cast<unsigned char*>(&rcx95));
    *reinterpret_cast<int32_t*>(&rdx109) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx109) + 4) = 0;
    __asm__("rol ax, 0xf0");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx109) + 1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx93) + 1);
    *reinterpret_cast<int16_t*>(&rax74) = *reinterpret_cast<signed char*>(&ax108);
    __asm__("bts rdi, 0xcf");
    __asm__("rol r9, 1");
    *reinterpret_cast<unsigned char*>(&r13w102) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13w102) >> 66);
    *reinterpret_cast<uint16_t*>(&r14_105) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&r11_79)));
    r8d110 = *reinterpret_cast<int32_t*>(&r8_98);
    *reinterpret_cast<uint16_t*>(&rbx93) = 0xffff;
    __asm__("bts r14d, 0x99");
    *reinterpret_cast<uint32_t*>(&rsi111) = 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi111) + 4) = 0;
    r15_112 = 0 >> *reinterpret_cast<unsigned char*>(&rcx95);
    *reinterpret_cast<uint16_t*>(&rdx109) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx109) | r13w102);
    *reinterpret_cast<int16_t*>(&r9d106) = -0x1d3;
    rbx113 = rbx93 - (r10_103 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rbx93 < r10_103 + 1)));
    __asm__("xadd ah, dh");
    *reinterpret_cast<uint32_t*>(&rax114) = *reinterpret_cast<int32_t*>(&rax74) + 0x84b07d1e;
    __asm__("rol rax, 1");
    __asm__("shld rbx, r14, 0x1");
    *reinterpret_cast<uint16_t*>(&r12_96) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_96) >> 23);
    __asm__("cdq ");
    __asm__("bsf cx, r12w");
    *reinterpret_cast<unsigned char*>(&rbx113) = reinterpret_cast<uint1_t>(r11_79 <= r12_96);
    if (__intrinsic()) {
        rax114 = rdi81;
    }
    rbp115 = reinterpret_cast<uint64_t>(rbp100 + rcx95);
    if (r9d106 == *reinterpret_cast<int32_t*>(&r14_105)) {
        tmp32_116 = r9d106;
        r9d106 = *reinterpret_cast<int32_t*>(&r14_105);
        *reinterpret_cast<int32_t*>(&r14_105) = tmp32_116;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_105) + 4) = 0;
    }
    __asm__("rol ebx, 0x64");
    __asm__("xadd r10d, esi");
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rsi111) = *reinterpret_cast<uint32_t*>(&rbp115);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi111) + 4) = 0;
    }
    __asm__("bsf r15d, r13d");
    *reinterpret_cast<unsigned char*>(&r15_112) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_112) ^ 0xb8);
    *reinterpret_cast<uint16_t*>(&r11_79) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_79) + *reinterpret_cast<int16_t*>(&r10_103));
    *reinterpret_cast<int16_t*>(&rbp115) = *reinterpret_cast<int16_t*>(&r9d106);
    __asm__("btc r13d, edi");
    ax117 = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax114) + *reinterpret_cast<uint16_t*>(&r14_105))));
    __asm__("rcr edi, 1");
    *reinterpret_cast<signed char*>(&rbp115) = reinterpret_cast<signed char>(~reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbp115) << 1));
    r10d118 = *reinterpret_cast<uint32_t*>(&r10_103) | *reinterpret_cast<uint32_t*>(&rdi81);
    __asm__("rcl r8w, 0xae");
    *reinterpret_cast<unsigned char*>(&r8d110) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8d110) >> 32);
    __asm__("btr r15d, r12d");
    r11d119 = *reinterpret_cast<uint32_t*>(&r11_79) >> 1;
    __asm__("bsr edx, eax");
    ecx120 = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx109) + 1);
    __asm__("shrd r9d, r15d, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx113) + 1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx113) + 1);
    *reinterpret_cast<uint32_t*>(&r8_121) = reinterpret_cast<uint32_t>(~r8d110);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_121) + 4) = 0;
    __asm__("shld ax, r15w, 0x3");
    al122 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ax117) >> 0x91);
    *reinterpret_cast<uint32_t*>(&r9_123) = *reinterpret_cast<int32_t*>(&rbx113) + *reinterpret_cast<uint32_t*>(&rsi111) * 2 - 0x4c6203e2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_123) + 4) = 0;
    __asm__("ror rax, cl");
    __asm__("ror dh, cl");
    edi124 = *reinterpret_cast<uint32_t*>(&rdi81) | 0x7e02d864;
    __asm__("rcr r9b, 1");
    ebp125 = *reinterpret_cast<uint32_t*>(&rbp115) - (*reinterpret_cast<uint32_t*>(&r8_121) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbp115) < *reinterpret_cast<uint32_t*>(&r8_121)));
    if (__intrinsic()) {
        edi124 = *reinterpret_cast<uint32_t*>(&rsi111);
    }
    r13_126 = r14_105 * 0xffffffffd94dcde3;
    r10w127 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10d118) - reinterpret_cast<uint16_t>(0x6ab5 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r10d118) < reinterpret_cast<uint16_t>(0x6ab5 - __intrinsic()))));
    *reinterpret_cast<unsigned char*>(&rsi111) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi111) + *reinterpret_cast<unsigned char*>(&r11d119))));
    if (*reinterpret_cast<signed char*>(&rsi111) < reinterpret_cast<signed char>(0) != __intrinsic()) {
        *reinterpret_cast<int16_t*>(&r11d119) = *reinterpret_cast<int16_t*>(&r13_126);
    }
    *reinterpret_cast<uint32_t*>(&r15_128) = *reinterpret_cast<int32_t*>(&r15_112) - edi124;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_128) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rax114) = reinterpret_cast<uint16_t>(al122 * reinterpret_cast<uint16_t>(static_cast<int16_t>(al122)));
    __asm__("rcr r10, cl");
    r8_129 = r8_121 & 0xffffffffb08a6e82;
    __asm__("btc r8d, r13d");
    __asm__("bts r14, 0xbb");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx113) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx113) + 1) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx120) + 1))));
    if (__intrinsic()) {
    }
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx113) + 1) >= reinterpret_cast<signed char>(0)) {
        r10w127 = *reinterpret_cast<uint16_t*>(&rsi111);
    }
    *reinterpret_cast<uint16_t*>(&r10d118) = reinterpret_cast<uint16_t>(r10w127 - 1);
    if (*reinterpret_cast<uint16_t*>(&rax114) == *reinterpret_cast<uint16_t*>(&r12_96)) {
        tmp16_130 = *reinterpret_cast<uint16_t*>(&rax114);
        *reinterpret_cast<uint16_t*>(&rax114) = *reinterpret_cast<uint16_t*>(&r12_96);
        *reinterpret_cast<uint16_t*>(&r12_96) = tmp16_130;
    }
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r8_129) = *reinterpret_cast<int16_t*>(&r15_128);
    }
    __asm__("rcr r15, 1");
    *reinterpret_cast<uint16_t*>(&r9_123) = static_cast<uint16_t>(*reinterpret_cast<int32_t*>(&rbx113) + edi124 * 2);
    __asm__("ror r13b, 0x7f");
    __asm__("ror al, 0x6f");
    *reinterpret_cast<int16_t*>(&ebp125) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp125) << *reinterpret_cast<unsigned char*>(&ecx120));
    __asm__("rol r11d, 1");
    *reinterpret_cast<uint32_t*>(&rdi131) = edi124 | 0xe7893353;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi131) + 4) = 0;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx109) + 1) == *reinterpret_cast<unsigned char*>(&rax114)) {
        tmp8_132 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx109) + 1);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx109) + 1) = *reinterpret_cast<unsigned char*>(&rax114);
        *reinterpret_cast<unsigned char*>(&rax114) = tmp8_132;
    }
    __asm__("btr r13d, r9d");
    *reinterpret_cast<int32_t*>(&r13_133) = *reinterpret_cast<int32_t*>(&r8_129) + *reinterpret_cast<int32_t*>(&r14_105) * 2 + 0x9c;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_133) + 4) = 0;
    __asm__("rcr r11, 1");
    if (1) {
        *reinterpret_cast<int16_t*>(&r13_133) = *reinterpret_cast<int16_t*>(&ebp125);
    }
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>((r8_129 | r9_123) == 0))) {
        *reinterpret_cast<uint32_t*>(&rsi111) = *reinterpret_cast<uint32_t*>(&rax114);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi111) + 4) = 0;
    }
    rdx134 = rdx109 + 0x6963e24 + 1;
    __asm__("shrd bp, r8w, 0x2");
    *reinterpret_cast<uint16_t*>(&rax114) = reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&rax114) * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ecx120) + 1))));
    r12d135 = *reinterpret_cast<int32_t*>(&r12_96) + *reinterpret_cast<int32_t*>(&r13_133) + __intrinsic();
    *reinterpret_cast<uint32_t*>(&r11_136) = r11d119 + r11d119;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_136) + 4) = 0;
    __asm__("rcr r11b, 0x6d");
    *reinterpret_cast<uint32_t*>(&rcx137) = *reinterpret_cast<uint32_t*>(&r11_136) * 0x8832908b;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx137) + 4) = 0;
    __asm__("bts ecx, edx");
    __asm__("rcr r10w, 1");
    __asm__("xadd cx, bx");
    if (reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx134) + 1) - 86) >= 0) {
        rdi131 = r15_128;
    }
    eax138 = *reinterpret_cast<uint32_t*>(&rax114) * r10d118;
    __asm__("rol r14d, 0xb2");
    ebp139 = -ebp125;
    *reinterpret_cast<int16_t*>(&r11_136) = -*reinterpret_cast<int16_t*>(&r11_136);
    *reinterpret_cast<int16_t*>(&r15_128) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r15_128) * 0x9a30);
    cl140 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx137) & 15);
    __asm__("shrd r12w, cx, cl");
    *reinterpret_cast<uint16_t*>(&r9_123) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_123) | *reinterpret_cast<uint16_t*>(&rdi131));
    __asm__("ror esi, 0x48");
    rsi141 = reinterpret_cast<uint64_t>(rsi111 >> -27);
    *reinterpret_cast<uint16_t*>(&r14_105) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_105) - *reinterpret_cast<uint16_t*>(&r14_105));
    __asm__("cdq ");
    __asm__("shrd edi, ecx, 0x19");
    __asm__("bsr r10, r12");
    r9_142 = r9_123 << 3;
    *reinterpret_cast<int16_t*>(&eax138) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&eax138) * *reinterpret_cast<signed char*>(&ebp139));
    *reinterpret_cast<uint32_t*>(&rax143) = eax138 >> 24 | eax138 >> 8 & 0xff00 | eax138 << 8 & 0xff0000 | eax138 << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax143) + 4) = 0;
    __asm__("rcl ebx, 0xd7");
    r8_144 = static_cast<uint64_t>(cl140) & 0xffffffffdc64658e;
    __asm__("shld r12d, r9d, 0xc6");
    __asm__("shrd ax, r15w, 0x7");
    r14_145 = r14_105 - r13_133;
    *reinterpret_cast<uint32_t*>(&rbp146) = ebp139 - (*reinterpret_cast<uint32_t*>(&r11_136) + reinterpret_cast<uint1_t>(ebp139 < *reinterpret_cast<uint32_t*>(&r11_136) + reinterpret_cast<uint1_t>(r14_105 < r13_133)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp146) + 4) = 0;
    __asm__("ror rbx, 1");
    __asm__("btc r9d, r14d");
    __asm__("shrd r14d, r9d, 0x1");
    __asm__("cwd ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax143) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax143) + 1) - cl140);
    __asm__("rcr r12, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx137) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("rcr eax, 1");
    cf147 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r11_136) < *reinterpret_cast<unsigned char*>(&r11_136));
    r15b148 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_136) - *reinterpret_cast<unsigned char*>(&r11_136));
    rdi149 = rdi131 - (0x69d6e473 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(rdi131 < 0x69d6e473 - static_cast<uint64_t>(cf147))));
    if (reinterpret_cast<int64_t>(rdi131) < reinterpret_cast<int64_t>(0x69d6e473 - static_cast<uint64_t>(cf147))) {
        r11_136 = rbp146;
    }
    __asm__("shld rax, r11, cl");
    *reinterpret_cast<unsigned char*>(&r15_128) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(r15b148) >> cl140);
    *reinterpret_cast<signed char*>(&ax150) = -47;
    __asm__("rcl di, cl");
    cl151 = reinterpret_cast<unsigned char>(cl140 & 15);
    __asm__("shrd cx, r11w, cl");
    __asm__("btr r12w, 0xbf");
    __asm__("rcl r14, 0xe5");
    *reinterpret_cast<int16_t*>(&rsi141) = -47;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax150) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax143) + 1) - reinterpret_cast<unsigned char>(47 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax143) + 1) < 0xd2)));
    rdx152 = *reinterpret_cast<uint16_t*>(&r9_142);
    __asm__("rcl ebx, cl");
    __asm__("shld r12d, esi, 0xad");
    *reinterpret_cast<int16_t*>(&rax143) = reinterpret_cast<int16_t>(ax150 * *reinterpret_cast<int16_t*>(&rbx113));
    *reinterpret_cast<int16_t*>(&rdx152) = __intrinsic();
    r12d153 = r12d135 - (*reinterpret_cast<uint32_t*>(&r15_128) + reinterpret_cast<uint1_t>(r12d135 < *reinterpret_cast<uint32_t*>(&r15_128)));
    __asm__("xadd bx, si");
    if (reinterpret_cast<int32_t>(r12d135) <= *reinterpret_cast<int32_t*>(&r15_128)) {
        rbx113 = r8_144;
    }
    __asm__("shrd rdx, rdx, 0x1");
    *reinterpret_cast<uint32_t*>(&r8_154) = *reinterpret_cast<uint32_t*>(&r8_144) ^ 0x2f6a65b5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_154) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r13d155) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("ror r13, 1");
    *reinterpret_cast<int16_t*>(&r14_145) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r14_145) + *reinterpret_cast<int16_t*>(&r12d153));
    __asm__("rcr r9d, 1");
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rax143) = *reinterpret_cast<uint32_t*>(&r15_128);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax143) + 4) = 0;
    }
    if (0) {
        r13d155 = *reinterpret_cast<uint32_t*>(&r15_128);
    }
    *reinterpret_cast<int16_t*>(&rax143) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax143) * *reinterpret_cast<signed char*>(&rbp146));
    *reinterpret_cast<unsigned char*>(&r11_136) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_136) + 0xe6);
    rsi156 = rsi141 ^ 0x52760f0e;
    zf157 = reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&rax143) == *reinterpret_cast<int16_t*>(&r12d153));
    if (zf157) {
        *reinterpret_cast<int16_t*>(&rax143) = *reinterpret_cast<int16_t*>(&r12d153);
    }
    if (reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic()) | zf157) {
        *reinterpret_cast<int32_t*>(&rdx152) = *reinterpret_cast<int32_t*>(&rsi156);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx152) + 4) = 0;
    }
    if (__intrinsic()) {
        rax143 = r11_136;
    }
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r13d155) = *reinterpret_cast<int16_t*>(&r8_154);
    }
    r11_158 = reinterpret_cast<uint64_t>(r11_136 >> -55);
    __asm__("rol ebx, cl");
    __asm__("shld r13, rax, 0x8a");
    *reinterpret_cast<signed char*>(&rsi156) = -32;
    __asm__("btr ecx, edi");
    *reinterpret_cast<unsigned char*>(&rdi149) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi149) + *reinterpret_cast<unsigned char*>(&r15_128))));
    __asm__("rcl r10d, 1");
    __asm__("rcl rcx, 0xcf");
    __asm__("shrd r11d, r14d, cl");
    rsi159 = rsi156 & r11_158;
    *reinterpret_cast<int32_t*>(&rdi160) = *reinterpret_cast<int32_t*>(&rdi149) << 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi160) + 4) = 0;
    __asm__("shld r13, rcx, 0x2c");
    __asm__("xadd al, ah");
    __asm__("ror r14d, 1");
    __asm__("rcl dh, cl");
    r11_161 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r11_158) >> 1);
    __asm__("btr r14w, r9w");
    __asm__("rol r8, cl");
    rbp162 = rbp146 - rdi160;
    __asm__("rcl al, 1");
    __asm__("cwd ");
    __asm__("ror r9d, cl");
    if (0) {
        *reinterpret_cast<int16_t*>(&rbx113) = *reinterpret_cast<int16_t*>(&rsi159);
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx152) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx152) + 1) - reinterpret_cast<unsigned char>(20 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx152) + 1) < 21)));
    __asm__("rcl dl, 1");
    *reinterpret_cast<int16_t*>(&r11_161) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r11_161) + 1);
    *reinterpret_cast<unsigned char*>(&rcx137) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(cl151 << cl151) - *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx137) + 1));
    r13_163 = *reinterpret_cast<signed char*>(&r13d155);
    __asm__("ror bl, cl");
    __asm__("xadd dh, bh");
    *reinterpret_cast<unsigned char*>(&r8_154) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_154) + *reinterpret_cast<signed char*>(&r11_161))));
    __asm__("rcl r10, 1");
    rdx164 = (rdx152 >> 0xffffffffffffff8f) + rbp162 + 1;
    __asm__("shld r10d, esi, 0x1");
    __asm__("rcl r15, 1");
    *reinterpret_cast<unsigned char*>(&rbp162) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp162) + *reinterpret_cast<unsigned char*>(&rbx113)) + 1);
    r15_165 = rcx137 * 0x4767b409;
    __asm__("shrd r15, rbp, cl");
    *reinterpret_cast<signed char*>(&r13_163) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r13_163) - *reinterpret_cast<signed char*>(&r11_161));
    __asm__("ror r13d, 1");
    __asm__("rcr r12b, cl");
    r12_166 = 0;
    __asm__("ror esi, 0xdb");
    rdi167 = 0;
    *reinterpret_cast<signed char*>(&rax143) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx164) + 1);
    __asm__("xadd esi, r12d");
    __asm__("rcl r15, cl");
    *reinterpret_cast<signed char*>(&rdx164) = reinterpret_cast<signed char>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&rdx164)));
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&rdx164) < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&rdx164) == 0))) {
        rdx164 = r11_161;
    }
    __asm__("rcl sil, 0x19");
    *reinterpret_cast<int16_t*>(&r12_166) = reinterpret_cast<int16_t>(0 >> 91);
    *reinterpret_cast<int32_t*>(&r11_168) = ~*reinterpret_cast<int32_t*>(&r11_161);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_168) + 4) = 0;
    rax169 = rax143 * rdx164;
    __asm__("bts r11w, r13W");
    __asm__("rcl r13, 1");
    __asm__("bts edx, 0x6a");
    if (!*reinterpret_cast<unsigned char*>(&rcx137)) {
        *reinterpret_cast<unsigned char*>(&rdi167) = *reinterpret_cast<unsigned char*>(&rcx137);
        *reinterpret_cast<unsigned char*>(&rcx137) = 0;
    }
    __asm__("rol ecx, 0x61");
    __asm__("bts r15w, r10w");
    __asm__("btr r11w, 0xc4");
    __asm__("rcr ebp, 1");
    *reinterpret_cast<int32_t*>(&rax170) = *reinterpret_cast<int32_t*>(&rax169) * *reinterpret_cast<int32_t*>(&r9_142);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax170) + 4) = 0;
    if (__intrinsic()) {
        rax170 = r8_154;
    }
    __asm__("ror r8d, 0xa9");
    *reinterpret_cast<int32_t*>(&r14_171) = -*reinterpret_cast<int32_t*>(&r14_145) >> *reinterpret_cast<unsigned char*>(&rcx137);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_171) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rcx137) = 0;
    rax172 = rax170 * rcx137;
    *reinterpret_cast<int16_t*>(&rsi159) = static_cast<int16_t>(r11_168 + r12_166 * 2 + 0xef);
    r15_173 = r15_165 + r14_171 + 1;
    __asm__("rcl r9d, 1");
    __asm__("ror r13W, 1");
    __asm__("rcr rdx, 1");
    __asm__("xadd al, ah");
    __asm__("bts edi, r15d");
    *reinterpret_cast<uint16_t*>(&rbp162) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp162) | 0xc000);
    *reinterpret_cast<uint16_t*>(&rax172) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax172) / *reinterpret_cast<uint16_t*>(&rbp162));
    *reinterpret_cast<int32_t*>(&r11_174) = static_cast<int32_t>(rax172 + r9_142 * 8 + 59);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_174) + 4) = 0;
    esi175 = *reinterpret_cast<int32_t*>(&rsi159) >> 92;
    *reinterpret_cast<unsigned char*>(&r14_171) = 61;
    __asm__("rcr rax, cl");
    __asm__("btc cx, 0x0");
    __asm__("rcl sil, 0x49");
    *reinterpret_cast<int16_t*>(&r12_166) = static_cast<int16_t>(*reinterpret_cast<uint32_t*>(&rcx137) - 0x24fbde48);
    *reinterpret_cast<uint32_t*>(&r15_176) = *reinterpret_cast<uint32_t*>(&r15_173) | 0xc0000000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_176) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rdx177) = *reinterpret_cast<uint32_t*>(&rax172) % *reinterpret_cast<uint32_t*>(&r15_176);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx177) + 4) = 0;
    rax178 = reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(&rax172) / *reinterpret_cast<uint32_t*>(&r15_176));
    *reinterpret_cast<int32_t*>(&r13_179) = *reinterpret_cast<int32_t*>(&r13_163);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_179) + 4) = 0;
    __asm__("bsr edi, edi");
    __asm__("ror r13W, cl");
    tmp8_180 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx177) + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx177) + 1) = 0;
    *reinterpret_cast<unsigned char*>(&rcx137) = tmp8_180;
    __asm__("rol r14d, 0x26");
    __asm__("rol bh, cl");
    *reinterpret_cast<unsigned char*>(&rax178) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax178) & *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx137) + 1));
    if (!__intrinsic()) {
        rcx137 = rdi167;
    }
    if (!*reinterpret_cast<unsigned char*>(&rax178)) {
    }
    *reinterpret_cast<uint16_t*>(&r11_174) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_174) - 0x6efd)));
    __asm__("ror edx, cl");
    __asm__("shld r15d, eax, cl");
    __asm__("shrd r14, rbx, cl");
    __asm__("shld r13d, ecx, 0xc");
    r13_181 = r13_179 + 0x606f7fdc;
    __asm__("ror rdi, 1");
    *reinterpret_cast<unsigned char*>(&r13_181) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_181) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_174) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r13_181) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_174) + reinterpret_cast<uint1_t>(r13_179 < 0xffffffff9f908024)))));
    if (__intrinsic()) {
        r9_142 = rdx177;
    }
    *reinterpret_cast<uint16_t*>(&r15_176) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_176) + *reinterpret_cast<uint16_t*>(&r14_171));
    if (r11_174 == r11_174) {
        r11_174 = r11_174;
    }
    __asm__("btc r13, rdi");
    __asm__("rol r14d, 0xc2");
    *reinterpret_cast<unsigned char*>(&rax178) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax178) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx137) + 1))));
    __asm__("rcl r10b, 1");
    __asm__("btr r14w, r14w");
    *reinterpret_cast<unsigned char*>(&r11_174) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_174) + *reinterpret_cast<unsigned char*>(&rax178)) + 1);
    rdi182 = (((rdi167 & 0xffffffff) << 32 & 0xffff0000ffff) << 16 & 0xff00ff00ff00ff) << 8;
    r9_183 = r9_142 | r15_176 | 0xc000000000000000;
    rax184 = rax178 / r9_183;
    r9b185 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r9_183) >> 69);
    __asm__("shld rsi, r11, 0x1");
    *reinterpret_cast<unsigned char*>(&esi175) = reinterpret_cast<uint1_t>(r9b185 == 0);
    *reinterpret_cast<unsigned char*>(&rdi182) = reinterpret_cast<unsigned char>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r12_166) + reinterpret_cast<uint1_t>(0 < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r12_166) + __intrinsic())))));
    __asm__("xadd bh, al");
    __asm__("ror r15, 0x79");
    cx186 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx137) >> -70);
    if (0) {
    }
    __asm__("rcl r15w, 1");
    *reinterpret_cast<int16_t*>(&rax184) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax184) * *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax184) + 1));
    __asm__("ror rcx, 1");
    *reinterpret_cast<uint16_t*>(&r11_174) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_174) >> 15);
    r13_187 = r13_181 - 1;
    __asm__("btc r9w, 0x83");
    __asm__("rcr r14, 1");
    *reinterpret_cast<int32_t*>(&rbp188) = *reinterpret_cast<int32_t*>(&rax184) * 0x1d8aeb85;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp188) + 4) = 0;
    r8_189 = (0x3fffffffffffffff & rax178 % r9_183) + 0x71ce8593;
    __asm__("rcl r11w, 1");
    rdi190 = rdi182 | r15_176;
    __asm__("ror r14w, 0x13");
    __asm__("btr r10w, 0xb6");
    __asm__("ror r13W, 0x54");
    __asm__("shld r13, rdx, 0xff");
    __asm__("rol cl, 0x5");
    *reinterpret_cast<signed char*>(&r9_183) = reinterpret_cast<signed char>(r9b185 >> *reinterpret_cast<unsigned char*>(&cx186));
    __asm__("ror r9d, 1");
    eax191 = *reinterpret_cast<int32_t*>(&r13_187) * 0x1a2d36f0;
    *reinterpret_cast<uint32_t*>(&rcx192) = *reinterpret_cast<unsigned char*>(&cx186);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx192) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r14_171) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_171) >> *reinterpret_cast<signed char*>(&rcx192));
    if (*reinterpret_cast<unsigned char*>(&r13_187) == *reinterpret_cast<unsigned char*>(&r11_174)) {
        tmp8_193 = *reinterpret_cast<unsigned char*>(&r13_187);
        *reinterpret_cast<unsigned char*>(&r13_187) = *reinterpret_cast<unsigned char*>(&r11_174);
        *reinterpret_cast<unsigned char*>(&r11_174) = tmp8_193;
    }
    *reinterpret_cast<uint16_t*>(&rdi190) = reinterpret_cast<uint16_t>(~*reinterpret_cast<uint16_t*>(&rdi190));
    *reinterpret_cast<int32_t*>(&rbx194) = *reinterpret_cast<signed char*>(&r11_174);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx194) + 4) = 0;
    __asm__("bsr r13d, r8d");
    rcx195 = rcx192 & 0x100bff3;
    *reinterpret_cast<uint16_t*>(&eax191) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax191) >> 1);
    *reinterpret_cast<uint16_t*>(&rbp188) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp188) - reinterpret_cast<uint16_t>(0x8ad - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rbp188) < 0xf754)));
    r9_196 = r9_183 >> -29 ^ rdi190;
    __asm__("shld eax, ecx, cl");
    rax197 = eax191;
    *reinterpret_cast<int32_t*>(&rax198) = *reinterpret_cast<int16_t*>(&rax197);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax198) + 4) = 0;
    __asm__("btc r11, 0x29");
    *reinterpret_cast<int32_t*>(&rsi199) = -esi175;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi199) + 4) = 0;
    r13_200 = r13_187 - 1;
    rax201 = rax198 * rsi199;
    __asm__("bsr r8, r14");
    __asm__("btc si, ax");
    __asm__("rcr bh, cl");
    *reinterpret_cast<int32_t*>(&r10_202) = *reinterpret_cast<int32_t*>(&rbx194);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_202) + 4) = 0;
    rdx203 = __intrinsic() - 0x5193c2f3;
    *reinterpret_cast<uint16_t*>(&rdi190) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi190) - *reinterpret_cast<uint16_t*>(&r15_176));
    *reinterpret_cast<unsigned char*>(&rsi199) = __intrinsic();
    __asm__("rcl bp, 1");
    __asm__("bsf r15w, r12w");
    *reinterpret_cast<uint16_t*>(&r11_174) = 0x9980;
    if (*reinterpret_cast<int32_t*>(&rbp188) == *reinterpret_cast<int32_t*>(&r13_200)) {
        tmp32_204 = *reinterpret_cast<int32_t*>(&rbp188);
        *reinterpret_cast<int32_t*>(&rbp188) = *reinterpret_cast<int32_t*>(&r13_200);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp188) + 4) = 0;
        *reinterpret_cast<int32_t*>(&r13_200) = tmp32_204;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_200) + 4) = 0;
    }
    *reinterpret_cast<unsigned char*>(&r13_200) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_200) + *reinterpret_cast<unsigned char*>(&rsi199)) + 1);
    __asm__("rcr r11w, 1");
    *reinterpret_cast<uint16_t*>(&r9_196) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_196) >> *reinterpret_cast<signed char*>(&rcx195));
    __asm__("bts edx, 0x7c");
    *reinterpret_cast<uint16_t*>(&r8_189) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_189) - *reinterpret_cast<uint16_t*>(&rbp188));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax201) + 1) = 0xff;
    *reinterpret_cast<unsigned char*>(&r14_171) = 0;
    __asm__("bsr r14w, bp");
    *reinterpret_cast<signed char*>(&rcx195) = *reinterpret_cast<signed char*>(&rcx195);
    *reinterpret_cast<int16_t*>(&rdx203) = 0x1439;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx203) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx203) + 1) >> *reinterpret_cast<signed char*>(&rcx195));
    if (*reinterpret_cast<unsigned char*>(&r15_176) == 0x80) {
        tmp8_205 = *reinterpret_cast<unsigned char*>(&r15_176);
        *reinterpret_cast<unsigned char*>(&r15_176) = 0x80;
        *reinterpret_cast<unsigned char*>(&r11_174) = tmp8_205;
    }
    return rax201 + rbx194 + rcx195 + rdx203 + rbp188 + rsi199 + rdi190 + r8_189 + r9_196 + r10_202 + r11_174 + r12_166 + r13_200 + r14_171 + r15_176 - 0x1e0002157d315862;
}

uint64_t log_size_10_var_006(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    uint64_t rcx7;
    int64_t rbp8;
    uint64_t rdi9;
    uint64_t r9_10;
    uint64_t r11_11;
    uint64_t r13_12;
    uint1_t less13;
    int64_t rax14;
    uint32_t ebx15;
    int32_t ebx16;
    int64_t r8_17;
    int32_t r10d18;
    int32_t edi19;
    unsigned char tmp8_20;
    uint64_t tmp64_21;
    uint64_t r13_22;
    uint64_t rdx23;
    uint64_t rax24;
    uint64_t r12_25;
    uint32_t ebp26;
    uint64_t rax27;
    int16_t ax28;
    uint64_t r8_29;
    uint16_t di30;
    uint64_t r11_31;
    uint64_t r12_32;
    int64_t rbx33;
    unsigned char tmp8_34;
    uint1_t cf35;
    int64_t r10_36;
    uint64_t rbx37;
    uint64_t rbp38;
    int64_t r11_39;
    uint16_t r8w40;
    int16_t ax41;
    uint64_t rcx42;
    uint64_t r14_43;
    uint64_t rdi44;
    uint64_t r12_45;
    uint64_t r9_46;
    int64_t rdi47;
    int64_t rsi48;
    int32_t ebp49;
    int64_t r10_50;
    uint1_t cf51;
    uint64_t r15_52;
    uint1_t cf53;
    uint64_t r10_54;
    uint1_t zf55;
    int64_t rax56;
    unsigned char tmp8_57;
    uint64_t r12_58;
    uint64_t rax59;
    int64_t rdx60;
    uint64_t r11_61;
    uint1_t less62;
    uint1_t cf63;
    uint64_t r12_64;
    uint64_t rbp65;
    int64_t r12_66;
    uint64_t r9_67;
    uint32_t r10d68;
    int64_t rax69;
    uint64_t rbp70;
    uint64_t rcx71;
    uint1_t cf72;
    uint64_t rbx73;
    int64_t rax74;
    int16_t ax75;
    uint64_t rbx76;
    uint64_t rdi77;
    int64_t r8_78;
    uint32_t r11d79;
    uint64_t r12_80;
    uint32_t eax81;
    int64_t rdx82;
    int64_t r8_83;
    uint32_t eax84;
    uint64_t r12_85;
    unsigned char cl86;
    int64_t r13_87;
    uint64_t rax88;
    uint64_t r9_89;
    int32_t ebp90;
    int64_t r11_91;
    uint32_t r14d92;
    int64_t rdi93;
    uint64_t r12_94;
    int64_t rsi95;
    uint32_t ebp96;
    uint64_t r9_97;
    unsigned char tmp8_98;
    uint1_t cf99;
    uint1_t cf100;
    int64_t r14_101;
    int64_t r15_102;
    uint64_t rcx103;
    int64_t r11_104;
    uint32_t r14d105;
    int64_t rdi106;
    int64_t r10_107;
    int64_t rax108;
    int64_t rbp109;
    uint64_t r12_110;
    unsigned char al111;
    int64_t rdx112;
    int64_t r14_113;
    int32_t r15d114;
    int32_t r9d115;
    int64_t r10_116;
    int32_t r15d117;
    uint64_t rsi118;
    int64_t r12_119;
    uint32_t ebx120;
    int64_t r11_121;
    uint16_t ax122;
    uint64_t r15_123;
    int64_t r8_124;
    int64_t rdx125;
    uint64_t rbp126;
    uint64_t r14_127;
    unsigned char ch128;
    uint1_t cf129;
    uint64_t r9_130;
    int64_t r13_131;
    uint16_t ax132;
    int64_t rdx133;
    uint16_t ax134;
    uint1_t cf135;
    int1_t below_or_equal136;
    uint64_t r10_137;
    int64_t r8_138;
    uint32_t ecx139;
    int16_t ax140;
    uint64_t r10_141;
    uint64_t tmp64_142;
    uint64_t rsi143;
    uint1_t cf144;
    uint64_t r15_145;
    uint64_t rax146;
    int64_t rdx147;
    uint64_t r14_148;
    int64_t r9_149;
    int64_t rbx150;
    uint64_t r14_151;
    uint16_t tmp16_152;
    uint1_t cf153;
    uint64_t rax154;
    int64_t r11_155;
    int64_t rcx156;
    uint64_t r15_157;
    uint16_t bx158;
    uint64_t r12_159;
    int32_t r9d160;
    uint1_t cf161;
    uint64_t rax162;
    uint32_t r12d163;
    int64_t rbp164;
    unsigned char r10b165;
    uint64_t r15_166;
    int64_t rbp167;
    int64_t r11_168;
    int16_t tmp16_169;
    uint64_t rax170;
    uint64_t rdx171;
    int16_t ax172;
    uint64_t rbp173;
    int32_t ecx174;
    int64_t rdi175;
    int64_t r8_176;
    unsigned char cl177;
    int32_t esi178;
    int64_t r9_179;
    uint1_t cf180;
    uint1_t cf181;
    int64_t r11_182;
    uint64_t rcx183;
    uint64_t r11_184;
    uint64_t r13_185;
    unsigned char cl186;
    int64_t r9_187;
    uint64_t r12_188;
    int64_t r8_189;
    uint64_t rbx190;
    uint64_t tmp64_191;
    uint64_t tmp64_192;
    uint64_t r13_193;
    int32_t eax194;
    uint64_t rsi195;
    int64_t r8_196;
    int64_t rdx197;
    uint32_t eax198;
    uint64_t r11_199;
    uint16_t ax200;
    uint16_t r11w201;
    uint16_t tmp16_202;
    int64_t rbx203;
    int1_t less_or_equal204;
    uint64_t r13_205;
    int64_t r8_206;
    uint64_t r14_207;
    unsigned char r15b208;
    uint64_t r12_209;
    uint1_t cf210;
    int64_t r8_211;
    uint64_t rsi212;
    int64_t rcx213;
    uint64_t r8_214;
    uint1_t cf215;
    uint64_t rsi216;
    uint1_t cf217;
    uint32_t eax218;
    int32_t edx219;
    uint64_t rbx220;
    uint64_t rdi221;
    uint32_t esi222;
    uint64_t rbp223;
    uint64_t r9_224;
    uint64_t rcx225;
    uint64_t r10_226;
    uint64_t rdx227;
    signed char tmp8_228;
    unsigned char r9b229;
    uint64_t tmp64_230;
    uint64_t tmp64_231;
    uint64_t r11_232;
    uint1_t cf233;
    uint64_t r14_234;
    uint64_t r11_235;
    int1_t less_or_equal236;
    int32_t r9d237;
    uint64_t rbx238;
    uint64_t rbx239;
    uint32_t r9d240;
    uint32_t eax241;
    uint64_t rdx242;
    int64_t rax243;
    uint32_t r10d244;
    unsigned char r11b245;
    int64_t r10_246;
    uint16_t tmp16_247;
    uint1_t cf248;
    uint64_t rax249;
    int64_t r9_250;
    uint64_t rcx251;
    uint64_t r8_252;
    int32_t ebp253;
    uint64_t r11_254;
    uint64_t rcx255;
    uint64_t tmp64_256;
    uint64_t r11_257;
    uint64_t rax258;
    int64_t r13_259;
    int16_t ax260;
    uint32_t ecx261;
    int64_t rcx262;
    int64_t r12_263;
    uint64_t rcx264;
    int64_t rax265;
    uint64_t rdi266;
    int64_t rbp267;
    uint1_t zf268;
    unsigned char tmp8_269;
    int64_t r13_270;
    uint64_t rax271;
    int64_t rdx272;
    uint64_t rbx273;
    uint64_t rsi274;
    uint16_t r15w275;
    uint64_t r14_276;
    int64_t r8_277;
    uint64_t tmp64_278;
    uint64_t tmp64_279;
    uint64_t rsi280;
    int64_t r10_281;
    int64_t rax282;

    rcx7 = 0x766a0f7bdb6030e8;
    rbp8 = 0x595376df594be7a5;
    rdi9 = 0x8028e80ad9eb852;
    r9_10 = 0xcdf2e0ecfabc9288;
    r11_11 = 0x14a2245347fb6d33;
    r13_12 = 0x15188754c88d8f4e;
    less13 = reinterpret_cast<uint1_t>(1 != __intrinsic());
    *reinterpret_cast<unsigned char*>(&rdi9) = reinterpret_cast<uint1_t>(static_cast<uint32_t>(less13));
    *reinterpret_cast<uint16_t*>(&rcx7) = 0x52e3;
    if (!less13) {
    }
    *reinterpret_cast<uint16_t*>(&rax14) = 0;
    ebx15 = 0x24140a0 >> -99;
    *reinterpret_cast<int16_t*>(&r13_12) = 0x9e9e;
    __asm__("xadd r8, rbx");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ebx16) + 1) = reinterpret_cast<signed char>(0 >> 67);
    __asm__("btc bx, 0x3d");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx7) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx7) + 1) + *reinterpret_cast<unsigned char*>(&ebx15)) + 1);
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx7) + 1) < reinterpret_cast<signed char>(0)) {
        r11_11 = rdi9;
    }
    *reinterpret_cast<unsigned char*>(&ebx16) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx15) & 29);
    __asm__("rol r10d, cl");
    *reinterpret_cast<uint32_t*>(&r8_17) = 0x60e0020b + *reinterpret_cast<int32_t*>(&rcx7) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_17) + 4) = 0;
    if (0) {
    }
    if (0) {
        ebx16 = *reinterpret_cast<int32_t*>(&rcx7);
    }
    __asm__("rol r13W, cl");
    __asm__("bts r15, 0xe6");
    r10d18 = static_cast<int32_t>(r8_17 + 0xc4);
    *reinterpret_cast<unsigned char*>(&r9_10) = 0xe9;
    *reinterpret_cast<unsigned char*>(&ebx16) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx16) & 0xa5);
    edi19 = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax14) + 1);
    *reinterpret_cast<unsigned char*>(&r13_12) = reinterpret_cast<unsigned char>(0x9e >> -11);
    if (*reinterpret_cast<unsigned char*>(&edi19) == *reinterpret_cast<unsigned char*>(&r10d18)) {
        tmp8_20 = *reinterpret_cast<unsigned char*>(&edi19);
        *reinterpret_cast<unsigned char*>(&r10d18) = tmp8_20;
    }
    if (0) {
        tmp64_21 = r11_11;
        r11_11 = 0xcdf2e0ecfabc92e9;
        r9_10 = tmp64_21;
    }
    if (__intrinsic()) {
    }
    __asm__("shld r9w, r15w, 0x1");
    if (1) {
    }
    if (1) {
    }
    if (0) {
        *reinterpret_cast<uint16_t*>(&ebx16) = *reinterpret_cast<uint16_t*>(&r9_10);
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx7) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx7) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx16) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx7) + 1) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ebx16))))));
    r13_22 = r13_12 | 0xc000000000000000;
    rdx23 = 29 % r13_22;
    rax24 = 29 / r13_22;
    *reinterpret_cast<signed char*>(&rax24) = -*reinterpret_cast<signed char*>(&rax24);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax24) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax24) + 1) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax24) + 1)) + 1);
    *reinterpret_cast<unsigned char*>(&rbp8) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax24) + 1) == 0);
    __asm__("rcl bh, 1");
    __asm__("bsr edi, r15d");
    r12_25 = r11_11;
    __asm__("rcl r11, 1");
    ebp26 = *reinterpret_cast<int32_t*>(&rbp8) - 0xbe956ef9;
    if (ebp26) {
    }
    rax27 = rax24 - (0xc1d6c1c - static_cast<uint64_t>(reinterpret_cast<uint1_t>(rax24 < 0xfffffffff3e293e4)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax28) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax27) + 1) + 1);
    __asm__("shld cx, r14w, cl");
    *reinterpret_cast<unsigned char*>(&rcx7) = 3;
    __asm__("shld cx, r9w, cl");
    r8_29 = *reinterpret_cast<unsigned char*>(&r11_11);
    *reinterpret_cast<unsigned char*>(&rdx23) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx23) >> 1) | *reinterpret_cast<unsigned char*>(&rax27));
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdx23) == 0))) {
        *reinterpret_cast<uint16_t*>(&rcx7) = 0x6ef9;
    }
    di30 = *reinterpret_cast<unsigned char*>(&ebx16);
    *reinterpret_cast<int16_t*>(&r12_25) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r12_25) >> *reinterpret_cast<unsigned char*>(&rcx7));
    __asm__("btc r12, rcx");
    __asm__("rcr r10b, 1");
    __asm__("btc rdx, 0xe5");
    *reinterpret_cast<unsigned char*>(&ax28) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax27) + *reinterpret_cast<signed char*>(&r8_29)) + 1);
    *reinterpret_cast<uint16_t*>(&r9_10) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_10) | 0xc000);
    *reinterpret_cast<uint16_t*>(&rax27) = reinterpret_cast<uint16_t>(ax28 / *reinterpret_cast<uint16_t*>(&r9_10));
    __asm__("ror bl, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx7) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx7) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ebx16) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx7) + 1) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ebx16) + 1) + 1))));
    __asm__("shld ebx, ebp, 0x1");
    __asm__("rcl r8w, 1");
    r11_31 = r11_11 << 1;
    __asm__("rcr r13b, 1");
    *reinterpret_cast<uint32_t*>(&r12_32) = *reinterpret_cast<uint32_t*>(&r12_25) - (*reinterpret_cast<int32_t*>(&r11_31) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r12_25) < *reinterpret_cast<int32_t*>(&r11_31) + 1));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_32) + 4) = 0;
    rbx33 = 0x4fb4759dc4f8b5fc;
    __asm__("rol r10d, 0x8d");
    *reinterpret_cast<unsigned char*>(&rbx33) = reinterpret_cast<unsigned char>(0xfc - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax27) + 1) + reinterpret_cast<uint1_t>(0xfc < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax27) + 1))))));
    __asm__("rcl rbp, 0xa0");
    tmp8_34 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10d18) + *reinterpret_cast<signed char*>(&di30)) + reinterpret_cast<uint1_t>(0x6ef9 < *reinterpret_cast<uint16_t*>(&rbx33)));
    cf35 = reinterpret_cast<uint1_t>(tmp8_34 < *reinterpret_cast<unsigned char*>(&r10d18));
    *reinterpret_cast<unsigned char*>(&r10d18) = tmp8_34;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx33) + 1) = reinterpret_cast<unsigned char>(79 - reinterpret_cast<unsigned char>(79 + reinterpret_cast<uint1_t>(79 < reinterpret_cast<unsigned char>(79 + cf35))));
    *reinterpret_cast<int32_t*>(&r10_36) = -r10d18;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_36) + 4) = 0;
    __asm__("rcl rax, 1");
    rbx37 = reinterpret_cast<uint64_t>(rbx33 + 1);
    __asm__("rcl ebx, 1");
    __asm__("rcr r10w, 1");
    __asm__("rcl dh, 1");
    __asm__("rcr r13d, 1");
    *reinterpret_cast<unsigned char*>(&r13_22) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_22) >> -5);
    *reinterpret_cast<uint32_t*>(&rbp38) = ebp26 << *reinterpret_cast<unsigned char*>(&rcx7);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp38) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r9_10) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_10) >> *reinterpret_cast<unsigned char*>(&rcx7));
    r11_39 = reinterpret_cast<int64_t>(-r11_31);
    if (!r11_39) {
        rax27 = rbp38;
    }
    __asm__("btc r10w, si");
    __asm__("rol ebx, 1");
    __asm__("rcl r9, 1");
    __asm__("shld bx, r12w, 0x2");
    r8w40 = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&r13_22)));
    ax41 = 0;
    rcx42 = rcx7 - (0x3ad3ac0c + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rcx7 < 0x3ad3ac0d)));
    __asm__("rcl eax, 1");
    *reinterpret_cast<uint32_t*>(&r14_43) = 0xbe956ef9 >> -33;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_43) + 4) = 0;
    __asm__("bts r10d, r9d");
    *reinterpret_cast<int32_t*>(&rdi44) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx42) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi44) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r13_22) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_22) << *reinterpret_cast<unsigned char*>(&rcx42));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx42) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx42) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx37) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx42) + 1) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx37) + 1)))))) ^ 67);
    if (__intrinsic()) {
        ax41 = *reinterpret_cast<int16_t*>(&r10_36);
    }
    *reinterpret_cast<unsigned char*>(&r11_39) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_39) << 1) | *reinterpret_cast<unsigned char*>(&r12_32));
    __asm__("bsf r14, rdi");
    r12_45 = r12_32 >> *reinterpret_cast<unsigned char*>(&rcx42);
    __asm__("rol r8b, cl");
    __asm__("shld r11, r9, cl");
    r9_46 = r9_10 ^ 0x47333aae;
    rdi47 = 0xc000000000000000;
    if (0) {
        *reinterpret_cast<int16_t*>(&r9_46) = 0;
    }
    __asm__("rcl ch, 1");
    __asm__("bsf edx, r9d");
    __asm__("btc dx, 0xb9");
    *reinterpret_cast<int32_t*>(&rsi48) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx37) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi48) + 4) = 0;
    __asm__("rcl r12w, cl");
    ebp49 = *reinterpret_cast<signed char*>(&r10_36);
    r10_50 = r10_36 >> -79;
    __asm__("xadd r14w, r13W");
    *reinterpret_cast<uint16_t*>(&rax27) = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(ax41 + *reinterpret_cast<int16_t*>(&rcx42)) + __intrinsic());
    __asm__("rcr dl, 1");
    *reinterpret_cast<unsigned char*>(&rdi47) = reinterpret_cast<unsigned char>(0 >> 36);
    *reinterpret_cast<unsigned char*>(&rbx37) = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r12_45) > 0x5c63);
    *reinterpret_cast<uint16_t*>(&r12_45) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_45) ^ *reinterpret_cast<uint16_t*>(&r13_22));
    __asm__("rcl r15w, 1");
    __asm__("btr r8, 0x76");
    cf51 = reinterpret_cast<uint1_t>(rdi44 < r13_22 + static_cast<uint1_t>(r14_43 >> r12_45));
    r15_52 = rdi44 - (r13_22 + cf51);
    if (cf51) {
        *reinterpret_cast<int16_t*>(&r10_50) = *reinterpret_cast<int16_t*>(&rdi47);
    }
    __asm__("bsf r8w, r11w");
    __asm__("rcl r15d, 1");
    cf53 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r11_39) < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rdi47) + 1));
    *reinterpret_cast<uint16_t*>(&r11_39) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_39) - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rdi47) + cf53));
    r10_54 = r10_50 + r13_22 + cf53;
    zf55 = reinterpret_cast<uint1_t>(r10_54 == 0);
    if (reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r10_54) < reinterpret_cast<int64_t>(0) != __intrinsic()) | zf55) {
        rax27 = r14_43;
    }
    if (zf55) {
        *reinterpret_cast<int16_t*>(&ebp49) = *reinterpret_cast<int16_t*>(&rbx37);
    }
    __asm__("xadd eax, edx");
    __asm__("bsf di, r8w");
    __asm__("btr r15d, 0x55");
    __asm__("rol dl, 1");
    *reinterpret_cast<uint16_t*>(&rsi48) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi48) + *reinterpret_cast<int16_t*>(&r15_52))));
    __asm__("btc r10d, 0xf2");
    *reinterpret_cast<uint32_t*>(&rax56) = *reinterpret_cast<uint32_t*>(&rax27) ^ *reinterpret_cast<uint32_t*>(&r12_45);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax56) + 4) = 0;
    if (*reinterpret_cast<unsigned char*>(&rsi48) == *reinterpret_cast<unsigned char*>(&r11_39)) {
        tmp8_57 = *reinterpret_cast<unsigned char*>(&rsi48);
        *reinterpret_cast<unsigned char*>(&rsi48) = *reinterpret_cast<unsigned char*>(&r11_39);
        *reinterpret_cast<unsigned char*>(&r11_39) = tmp8_57;
    }
    __asm__("btr r10, 0xc7");
    r12_58 = r12_45 << 1;
    rax59 = rax56 * r9_46;
    rdx60 = __intrinsic();
    __asm__("rcr bx, 1");
    __asm__("rol ebx, 1");
    *reinterpret_cast<uint32_t*>(&r11_61) = *reinterpret_cast<uint32_t*>(&r11_39) - (*reinterpret_cast<uint32_t*>(&rdx60) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r11_39) < *reinterpret_cast<uint32_t*>(&rdx60)));
    __asm__("rcl r15, 1");
    *reinterpret_cast<unsigned char*>(&rax59) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax59) + *reinterpret_cast<signed char*>(&rdx60)) + 1);
    __asm__("rcr r8, 0xf3");
    __asm__("shld dx, dx, cl");
    *reinterpret_cast<int16_t*>(&r14_43) = -*reinterpret_cast<int16_t*>(&r14_43);
    *reinterpret_cast<unsigned char*>(&rcx42) = __intrinsic();
    __asm__("rcr r13d, 1");
    less62 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&r12_58) < reinterpret_cast<signed char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r9_46))));
    cf63 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r12_58) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r9_46))));
    *reinterpret_cast<unsigned char*>(&r12_58) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_58) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_46) + cf63));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx42) + 1) = less62;
    if (*reinterpret_cast<signed char*>(&r12_58) >= reinterpret_cast<signed char>(static_cast<uint32_t>(cf63))) {
        *reinterpret_cast<uint32_t*>(&rcx42) = *reinterpret_cast<uint32_t*>(&r11_61);
    }
    r12_64 = r12_58 >> *reinterpret_cast<unsigned char*>(&rcx42);
    __asm__("bsf eax, eax");
    *reinterpret_cast<int32_t*>(&rbp65) = *reinterpret_cast<int32_t*>(&r12_64);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp65) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r12_66) = ebp49;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_66) + 4) = 0;
    r9_67 = r9_46 & 0x68431de6;
    __asm__("btr ecx, r10d");
    __asm__("rcr dl, 1");
    __asm__("btc r8d, edi");
    __asm__("rcl rcx, 1");
    r10d68 = *reinterpret_cast<uint32_t*>(&r10_54) | 0xc0000000;
    *reinterpret_cast<uint32_t*>(&rax69) = *reinterpret_cast<int32_t*>(&rax59) * *reinterpret_cast<uint32_t*>(&rcx42) / r10d68;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax69) + 4) = 0;
    *reinterpret_cast<signed char*>(&rax69) = *reinterpret_cast<signed char*>(&rax69);
    rbp70 = rbp65 >> -31;
    *reinterpret_cast<int32_t*>(&rcx71) = *reinterpret_cast<int32_t*>(&rcx42) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx71) + 4) = 0;
    __asm__("btr rdi, r11");
    cf72 = reinterpret_cast<uint1_t>(rbx37 < 0x14aacbb7 + static_cast<uint64_t>(__intrinsic()));
    rbx73 = rbx37 - (0x14aacbb7 + static_cast<uint64_t>(cf72));
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&rbx73) = *reinterpret_cast<int16_t*>(&r12_66);
    }
    if (reinterpret_cast<int64_t>(rsi48 + 0x625a9bc3 + static_cast<uint64_t>(cf72)) < reinterpret_cast<int64_t>(0) != __intrinsic()) {
        r14_43 = r15_52;
    }
    __asm__("btc rbx, 0x5e");
    __asm__("rcr rbx, 1");
    __asm__("rcl esi, 1");
    *reinterpret_cast<uint16_t*>(&r9_67) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_67) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10d68) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r9_67) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r10d68))))));
    rax74 = rax69 * rdi47;
    __asm__("rol dl, cl");
    __asm__("bsf eax, r12d");
    ax75 = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax74) + 1);
    rbx76 = rbx73 - 0x19355367 + 1;
    rdi77 = *reinterpret_cast<unsigned char*>(&r11_61);
    *reinterpret_cast<unsigned char*>(&rax74) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ax75) - 65) + reinterpret_cast<uint1_t>(r8w40 < 0xf9e0));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax74) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax75) + 1) - 0x80);
    __asm__("shld r15, r8, cl");
    __asm__("ror rax, cl");
    __asm__("cdq ");
    if (*reinterpret_cast<int32_t*>(&r11_61) <= reinterpret_cast<int32_t>(r10d68)) {
        r11_61 = r14_43;
    }
    __asm__("shrd r10, rbx, 0x1");
    *reinterpret_cast<int32_t*>(&r8_78) = *reinterpret_cast<int32_t*>(&rbp70) + *reinterpret_cast<int32_t*>(&rax74) * 8 + 73;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_78) + 4) = 0;
    __asm__("rol rsi, 0x67");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax74) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax74) + 1) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx76) + 1));
    __asm__("rcr r12d, 1");
    *reinterpret_cast<uint16_t*>(&rdi77) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi77) - reinterpret_cast<uint16_t>(0xc9e + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rdi77) < 0xc9e)));
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r11_61) = *reinterpret_cast<uint16_t*>(&rdi77);
    }
    r11d79 = *reinterpret_cast<uint32_t*>(&r11_61) >> *reinterpret_cast<unsigned char*>(&rcx71);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx71) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx71) + 1) << *reinterpret_cast<unsigned char*>(&rcx71));
    __asm__("bsf di, bx");
    *reinterpret_cast<int16_t*>(&r8_78) = 0xae8b;
    __asm__("bsf r10, r10");
    r12_80 = r12_66 + r9_67;
    __asm__("shrd r14, rax, 0x37");
    *reinterpret_cast<int16_t*>(&r11d79) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r11d79) + 1);
    *reinterpret_cast<unsigned char*>(&r14_43) = reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&r11d79) < 0 == __intrinsic());
    eax81 = *reinterpret_cast<int32_t*>(&rax74) * *reinterpret_cast<uint32_t*>(&r14_43);
    *reinterpret_cast<int32_t*>(&rdx82) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx82) + 4) = 0;
    __asm__("rcl rcx, 1");
    __asm__("btc r9, 0x7a");
    __asm__("shld r8d, r10d, 0xc0");
    *reinterpret_cast<int16_t*>(&eax81) = *reinterpret_cast<signed char*>(&eax81);
    r8_83 = r8_78 - 1;
    __asm__("shld rax, r11, cl");
    __asm__("btr rcx, r14");
    eax84 = eax81 + 1;
    __asm__("rcl cx, cl");
    __asm__("rol r12b, 1");
    *reinterpret_cast<uint32_t*>(&r12_85) = *reinterpret_cast<uint32_t*>(&r12_80) - (0x78a94276 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r12_80) < 0x78a94277));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_85) + 4) = 0;
    __asm__("btc rbp, 0x3e");
    cl86 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx71) & 15);
    __asm__("shrd bp, cx, cl");
    if (99 == *reinterpret_cast<signed char*>(&rbp70)) {
        *reinterpret_cast<signed char*>(&rbp70) = 99;
    }
    *reinterpret_cast<int16_t*>(&r14_43) = *reinterpret_cast<int16_t*>(&eax84);
    *reinterpret_cast<int32_t*>(&r13_87) = *reinterpret_cast<int16_t*>(&rbp70);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_87) + 4) = 0;
    __asm__("rol r8b, cl");
    __asm__("btc r8, rcx");
    *reinterpret_cast<int32_t*>(&rax88) = static_cast<int32_t>(rdx82 + r13_87 * 4 - 0xb473a2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax88) + 4) = 0;
    if (!__intrinsic()) {
        r14_43 = rbx76;
    }
    __asm__("ror r9b, 0xa9");
    __asm__("bts cx, 0xba");
    __asm__("rcl r12, 1");
    *reinterpret_cast<uint32_t*>(&r9_89) = *reinterpret_cast<uint16_t*>(&r8_83);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_89) + 4) = 0;
    ebp90 = *reinterpret_cast<int32_t*>(&rbp70) >> cl86;
    __asm__("ror r11, cl");
    *reinterpret_cast<uint32_t*>(&r11_91) = static_cast<uint32_t>(rdx82 + rax88 * 8 + 0x83);
    __asm__("bts r8, r12");
    __asm__("shrd rdx, rdx, 0xbb");
    __asm__("rol rax, cl");
    *reinterpret_cast<int16_t*>(&ebp90) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp90) + 1);
    r14d92 = *reinterpret_cast<uint32_t*>(&r14_43) + 0x50d84b05;
    if (__intrinsic()) {
        rax88 = r12_85;
    }
    __asm__("shld dx, r10w, cl");
    __asm__("btr rcx, 0x4");
    if (0) {
    }
    *reinterpret_cast<uint32_t*>(&rdi93) = *reinterpret_cast<unsigned char*>(&rax88);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi93) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rax88) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax88) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx82) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rax88) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rdx82))))));
    *reinterpret_cast<unsigned char*>(&rcx71) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(cl86 & 15) & 15);
    __asm__("shrd si, ax, cl");
    r12_94 = r12_85 >> 1;
    *reinterpret_cast<uint32_t*>(&rsi95) = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rax88)) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi95) + 4) = 0;
    ebp96 = reinterpret_cast<uint32_t>(ebp90 >> -96);
    r9_97 = r9_89 ^ 0xffffffffb39776b8;
    tmp8_98 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi95) + *reinterpret_cast<unsigned char*>(&ebp96)) + 1);
    cf99 = reinterpret_cast<uint1_t>(tmp8_98 < *reinterpret_cast<unsigned char*>(&rsi95));
    *reinterpret_cast<unsigned char*>(&rsi95) = tmp8_98;
    if (*reinterpret_cast<signed char*>(&rsi95) < reinterpret_cast<signed char>(0) != __intrinsic()) {
    }
    __asm__("rcr rbp, 1");
    __asm__("shrd esi, edi, 0x1");
    cf100 = reinterpret_cast<uint1_t>(r14d92 < 0x2c40d54d - cf99);
    *reinterpret_cast<uint32_t*>(&r14_101) = r14d92 - (0x2c40d54d - cf100);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_101) + 4) = 0;
    if (reinterpret_cast<int32_t>(r14d92) >= reinterpret_cast<int32_t>(0x2c40d54d - cf99)) {
        *reinterpret_cast<uint32_t*>(&rsi95) = ebp96;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi95) + 4) = 0;
    }
    r15_102 = r14_101 + r14_101 * 2;
    if (*reinterpret_cast<int32_t*>(&r14_101) >= reinterpret_cast<int32_t>(static_cast<uint32_t>(cf100))) {
        *reinterpret_cast<int16_t*>(&rax88) = *reinterpret_cast<int16_t*>(&r15_102);
    }
    *reinterpret_cast<int16_t*>(&r12_94) = 0x9cbe;
    __asm__("rcr r13W, 0xce");
    __asm__("ror r10, 1");
    __asm__("xadd cl, ch");
    if (!cf100) {
    }
    __asm__("bts r13d, r9d");
    __asm__("rcr edi, 0x98");
    __asm__("ror r9d, 1");
    __asm__("ror r9, 0x53");
    __asm__("bsf rdx, r13");
    rcx103 = rcx71 >> *reinterpret_cast<unsigned char*>(&rcx71);
    *reinterpret_cast<int16_t*>(&rsi95) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rsi95) - 0x314f);
    *reinterpret_cast<uint32_t*>(&r11_104) = *reinterpret_cast<uint32_t*>(&r11_91) | 0xc0000000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_104) + 4) = 0;
    __asm__("shrd r12d, esi, 0xaf");
    *reinterpret_cast<int16_t*>(&r15_102) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r15_102) + 0x6aff);
    r14d105 = *reinterpret_cast<uint32_t*>(&r14_101) | 0xc0000000;
    rdi106 = rdi93 * 0x5060e2e4;
    *reinterpret_cast<int32_t*>(&r10_107) = *reinterpret_cast<int32_t*>(&r9_97) * 0x741cbff4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_107) + 4) = 0;
    __asm__("ror r14, cl");
    *reinterpret_cast<int32_t*>(&rax108) = reinterpret_cast<int32_t>(-(*reinterpret_cast<uint32_t*>(&rax88) / *reinterpret_cast<uint32_t*>(&r11_104) / r14d105));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax108) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r9_97) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_97) >> *reinterpret_cast<unsigned char*>(&rcx103));
    *reinterpret_cast<uint32_t*>(&rbp109) = ebp96 ^ 0x64a9eea1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp109) + 4) = 0;
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbp109) == 0)))) {
        *reinterpret_cast<int16_t*>(&r11_104) = *reinterpret_cast<int16_t*>(&r14d105);
    }
    *reinterpret_cast<unsigned char*>(&rcx103) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx103) + *reinterpret_cast<unsigned char*>(&rcx103));
    __asm__("btr r15w, si");
    if (*reinterpret_cast<unsigned char*>(&rcx103)) {
        *reinterpret_cast<int16_t*>(&r15_102) = *reinterpret_cast<int16_t*>(&r10_107);
    }
    r12_110 = r12_94 - rcx103;
    if (!__intrinsic()) {
        rdi106 = r11_104;
    }
    *reinterpret_cast<unsigned char*>(&rcx103) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx103) | 0xc0);
    *reinterpret_cast<unsigned char*>(&r8_83) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_83) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(!__intrinsic())));
    if (*reinterpret_cast<signed char*>(&rbp109) < reinterpret_cast<signed char>(0xbc)) {
        *reinterpret_cast<uint32_t*>(&rcx103) = *reinterpret_cast<uint32_t*>(&rcx103);
    }
    al111 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&rbp109) > reinterpret_cast<signed char>(0xbc));
    rdx112 = 0xb4197b4dbd7e0b4a;
    if (*reinterpret_cast<unsigned char*>(&rbp109) <= reinterpret_cast<unsigned char>(68 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rbp109) < 0xbc))) {
        r11_104 = r8_83;
    }
    *reinterpret_cast<unsigned char*>(&r10_107) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_107) & *reinterpret_cast<unsigned char*>(&r11_104));
    __asm__("ror r9w, 0x5b");
    __asm__("xadd r12d, r11d");
    *reinterpret_cast<uint32_t*>(&r14_113) = r14d105 - (0xbd7e0b4a + reinterpret_cast<uint1_t>(r14d105 < 0xbd7e0b4a));
    r15d114 = *reinterpret_cast<int32_t*>(&r15_102) * 0x6119b78d;
    *reinterpret_cast<signed char*>(&r12_110) = *reinterpret_cast<signed char*>(&r12_110);
    *reinterpret_cast<unsigned char*>(&rsi95) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi95) & *reinterpret_cast<unsigned char*>(&r10_107)) >> *reinterpret_cast<unsigned char*>(&rcx103));
    r9d115 = *reinterpret_cast<int32_t*>(&r9_97) >> 11;
    r10_116 = r10_107 - r10_107;
    *reinterpret_cast<int16_t*>(&rbp109) = static_cast<int16_t>(r15d114 + r15d114 * 4 - 0x4ef34e1);
    __asm__("bsr r15w, bp");
    *reinterpret_cast<unsigned char*>(&r11_104) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_104) ^ *reinterpret_cast<unsigned char*>(&rbp109));
    r15d117 = r15d114 + 1;
    if (r11_104 == r11_104) {
        r11_104 = r11_104;
    }
    rsi118 = reinterpret_cast<uint64_t>(rsi95 - 1);
    __asm__("rcl ax, cl");
    *reinterpret_cast<int32_t*>(&r12_119) = *reinterpret_cast<int32_t*>(&r12_110) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_119) + 4) = 0;
    ebx120 = *reinterpret_cast<uint16_t*>(&r9d115);
    *reinterpret_cast<int16_t*>(&rsi118) = 0;
    r11_121 = r11_104 - r12_119;
    __asm__("ror r12d, cl");
    __asm__("bts r15, 0x33");
    __asm__("btc bp, 0x36");
    __asm__("btc r13d, ebx");
    __asm__("cwd ");
    __asm__("cwd ");
    ax122 = reinterpret_cast<uint16_t>(reinterpret_cast<signed char>(al111) * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&r10_116))));
    *reinterpret_cast<unsigned char*>(&rdx112) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(74 + *reinterpret_cast<signed char*>(&r15d117))));
    __asm__("btr r12w, 0x1a");
    r15_123 = rsi118 * 0xfffffffffcd1a272;
    __asm__("xadd r15w, cx");
    r8_124 = rbp109 + rdx112 * 8 - 0x31b45cd8;
    __asm__("bts bx, 0xf6");
    __asm__("btr r9, rbp");
    rdx125 = *reinterpret_cast<int16_t*>(&r12_119);
    *reinterpret_cast<int16_t*>(&rsi118) = 0;
    __asm__("xadd r13b, bpl");
    *reinterpret_cast<uint32_t*>(&rbp126) = *reinterpret_cast<uint32_t*>(&rbp109) - (*reinterpret_cast<uint32_t*>(&r8_124) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbp109) < *reinterpret_cast<uint32_t*>(&r8_124) + 1));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp126) + 4) = 0;
    __asm__("xadd rdi, r12");
    __asm__("rcr r13W, cl");
    *reinterpret_cast<int16_t*>(&rdx125) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rdx125) >> 1);
    *reinterpret_cast<uint32_t*>(&r14_127) = *reinterpret_cast<uint32_t*>(&r14_113) - *reinterpret_cast<uint32_t*>(&rdx125);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_127) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&r14_113) < *reinterpret_cast<uint32_t*>(&rdx125)) {
    }
    ch128 = __intrinsic();
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax122) + 1) = 0;
    __asm__("rcr r14, 1");
    __asm__("shld r8d, edi, 0x1");
    cf129 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r8_124) < 0xb7);
    *reinterpret_cast<unsigned char*>(&r8_124) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_124) + 73);
    __asm__("rcr bl, 1");
    __asm__("btr r11w, 0x51");
    __asm__("shrd r11d, r15d, 0x5d");
    *reinterpret_cast<unsigned char*>(&rbp126) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp126) - 1);
    *reinterpret_cast<unsigned char*>(&ebx120) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx120) & ch128);
    if (!__intrinsic()) {
        r10_116 = r10_116;
    }
    __asm__("rcl r10w, 1");
    *reinterpret_cast<int32_t*>(&r9_130) = *reinterpret_cast<signed char*>(&r10_116);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_130) + 4) = 0;
    if (!*reinterpret_cast<unsigned char*>(&r8_124)) {
        *reinterpret_cast<unsigned char*>(&rsi118) = *reinterpret_cast<unsigned char*>(&r8_124);
        *reinterpret_cast<unsigned char*>(&r8_124) = 0;
    }
    r13_131 = r8_124 + rdi106 * 2 + 0x58d996b;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx103) + 1) = reinterpret_cast<unsigned char>(ch128 | 0xc0);
    ax132 = reinterpret_cast<uint16_t>(ax122 & 0x3fff);
    *reinterpret_cast<uint16_t*>(&rdx133) = reinterpret_cast<uint16_t>(ax132 % static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx103) + 1)));
    ax134 = reinterpret_cast<uint16_t>(ax132 / static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx103) + 1)));
    *reinterpret_cast<unsigned char*>(&rcx103) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx103) & 15);
    __asm__("shrd r10w, ax, cl");
    __asm__("xadd r11d, ebp");
    __asm__("shrd r12d, r13d, 0x1");
    cf135 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&ebx120) < 0x481c);
    below_or_equal136 = *reinterpret_cast<uint16_t*>(&ebx120) <= reinterpret_cast<uint16_t>(0x481c + cf135);
    *reinterpret_cast<uint16_t*>(&ebx120) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx120) - reinterpret_cast<uint16_t>(0x481c + cf135));
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r15_123) = *reinterpret_cast<uint16_t*>(&rdx133);
    }
    if (below_or_equal136) {
        *reinterpret_cast<int16_t*>(&rsi118) = *reinterpret_cast<int16_t*>(&r9_130);
    }
    *reinterpret_cast<int32_t*>(&r10_137) = *reinterpret_cast<int32_t*>(&r10_116) + 0x58ca668;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_137) + 4) = 0;
    __asm__("bsf rdx, rbp");
    *reinterpret_cast<uint32_t*>(&r8_138) = *reinterpret_cast<uint32_t*>(&r8_124) & *reinterpret_cast<uint32_t*>(&r15_123);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_138) + 4) = 0;
    ecx139 = *reinterpret_cast<uint32_t*>(&rcx103) & 0x8adb2f90;
    ax140 = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax134) * *reinterpret_cast<signed char*>(&rdx133));
    r10_141 = r10_137 >> -98;
    __asm__("ror r10b, cl");
    *reinterpret_cast<uint16_t*>(&r13_131) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_131) - reinterpret_cast<uint16_t>(0x1bd6 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r13_131) < reinterpret_cast<uint16_t>(0x1bd6 + __intrinsic()))));
    *reinterpret_cast<int16_t*>(&rax108) = reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax140) * *reinterpret_cast<signed char*>(&r10_141)))) * *reinterpret_cast<int16_t*>(&rbp126));
    *reinterpret_cast<unsigned char*>(&r11_121) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_121) + 8) + cf129) >> 1);
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rsi118) = ebx120;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi118) + 4) = 0;
    }
    tmp64_142 = rsi118 + 0x3bec74f6;
    rsi143 = tmp64_142;
    __asm__("rcr r10d, 1");
    cf144 = reinterpret_cast<uint1_t>(ebx120 < ebx120 + reinterpret_cast<uint1_t>(tmp64_142 < rsi118));
    __asm__("rcr cl, 1");
    __asm__("rcr ax, 1");
    *reinterpret_cast<int32_t*>(&r15_145) = *reinterpret_cast<int32_t*>(&r13_131);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_145) + 4) = 0;
    __asm__("rol ebp, 1");
    rax146 = rax108 * (r14_127 >> 1);
    rdx147 = __intrinsic();
    *reinterpret_cast<unsigned char*>(&rax146) = reinterpret_cast<unsigned char>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&rax146)));
    r14_148 = *reinterpret_cast<uint32_t*>(&rsi143) + *reinterpret_cast<int32_t*>(&rax146);
    r9_149 = reinterpret_cast<int64_t>(r9_130 - (rbp126 + reinterpret_cast<uint1_t>(r9_130 < rbp126 + cf144))) >> 1;
    __asm__("rcr di, 1");
    *reinterpret_cast<unsigned char*>(&rax146) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax146) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx139) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rax146) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx139) + 1))))));
    *reinterpret_cast<uint32_t*>(&rbx150) = ebx120 - (ebx120 + cf144) + *reinterpret_cast<int32_t*>(&r13_131);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx150) + 4) = 0;
    __asm__("shld r13d, r14d, cl");
    *reinterpret_cast<int32_t*>(&r14_151) = *reinterpret_cast<int32_t*>(&r14_148);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_151) + 4) = 0;
    __asm__("btr dx, dx");
    *reinterpret_cast<signed char*>(&r9_149) = reinterpret_cast<signed char>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&r9_149)));
    tmp16_152 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi106) + 0x6f23);
    cf153 = reinterpret_cast<uint1_t>(tmp16_152 < *reinterpret_cast<uint16_t*>(&rdi106));
    *reinterpret_cast<uint16_t*>(&rdi106) = tmp16_152;
    *reinterpret_cast<unsigned char*>(&ecx139) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx147) + 1))) + cf153);
    *reinterpret_cast<uint32_t*>(&rax154) = static_cast<uint32_t>(r15_145 + rax146 * 2 + 0x7b);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax154) + 4) = 0;
    __asm__("rcr r9, 1");
    __asm__("cwd ");
    __asm__("xadd cl, r10b");
    *reinterpret_cast<int32_t*>(&r11_155) = *reinterpret_cast<int32_t*>(&r11_121) - *reinterpret_cast<int32_t*>(&r14_151);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_155) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rcx156) = ecx139 + 1;
    *reinterpret_cast<unsigned char*>(&rbx150) = reinterpret_cast<uint1_t>(rbp126 >= r15_145);
    r15_157 = r15_145 + 0xffffffffa53b74fa + 1;
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rbx150) = *reinterpret_cast<uint32_t*>(&r9_149);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx150) + 4) = 0;
    }
    bx158 = *reinterpret_cast<unsigned char*>(&rbx150);
    __asm__("rol r12, 0x9");
    __asm__("btc r9d, 0xa8");
    __asm__("bsr r14w, bx");
    r12_159 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<signed char*>(&r9_149))) & r15_157;
    *reinterpret_cast<signed char*>(&rcx156) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&bx158) + 1);
    *reinterpret_cast<int16_t*>(&rbx150) = static_cast<int16_t>(*reinterpret_cast<int32_t*>(&rdx147) + *reinterpret_cast<int32_t*>(&r11_155) * 4);
    __asm__("rcl edx, 1");
    __asm__("btr rsi, r11");
    *reinterpret_cast<int16_t*>(&rbp126) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbp126) << 1);
    __asm__("ror r11w, 0x52");
    *reinterpret_cast<uint16_t*>(&r15_157) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_157) + *reinterpret_cast<uint16_t*>(&r10_141))));
    __asm__("bts r10d, r11d");
    __asm__("rol edi, 0x35");
    __asm__("shld r15d, r15d, 0xdf");
    r9d160 = 0x5d009c6d;
    __asm__("xadd rsi, rdx");
    cf161 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rbp126) < 0x6f);
    *reinterpret_cast<unsigned char*>(&rbp126) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp126) - reinterpret_cast<unsigned char>(0x6e + cf161));
    if (*reinterpret_cast<unsigned char*>(&rbp126) == static_cast<uint32_t>(cf161)) {
        *reinterpret_cast<uint32_t*>(&rax154) = *reinterpret_cast<uint32_t*>(&rcx156);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax154) + 4) = 0;
    }
    __asm__("rcl r12, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx150) + 1) = 0xff;
    if (0) {
        *reinterpret_cast<uint32_t*>(&rcx156) = *reinterpret_cast<uint32_t*>(&r8_138);
    }
    rax162 = rax154 | r12_159;
    __asm__("shld r12, r9, 0xbd");
    r12d163 = *reinterpret_cast<uint32_t*>(&r12_159) & *reinterpret_cast<uint32_t*>(&rdi106);
    __asm__("rcr r10w, 1");
    *reinterpret_cast<uint32_t*>(&rbp164) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax162) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp164) + 4) = 0;
    r10b165 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_141) & 61);
    *reinterpret_cast<unsigned char*>(&r15_157) = reinterpret_cast<uint1_t>(r10b165 == 0);
    r15_166 = r15_157 | 0x1cc895fe;
    __asm__("bsf r14w, di");
    __asm__("btr eax, r13d");
    __asm__("ror rdi, 1");
    rbp167 = ~rbp164 >> 1;
    __asm__("rcr rbp, 0xdc");
    __asm__("bsf dx, ax");
    *reinterpret_cast<signed char*>(&rsi143) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rsi143) << 1);
    r11_168 = r11_155 >> 0xffffffffffffff83;
    *reinterpret_cast<uint16_t*>(&rdi106) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi106) >> 0xff9a);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(&rbx150) & *reinterpret_cast<uint32_t*>(&rsi143)) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>((*reinterpret_cast<uint32_t*>(&rbx150) & *reinterpret_cast<uint32_t*>(&rsi143)) == 0))) {
        r9d160 = *reinterpret_cast<int32_t*>(&rbp167);
    }
    if (*reinterpret_cast<int16_t*>(&rbx150) == *reinterpret_cast<int16_t*>(&rbp167)) {
        tmp16_169 = *reinterpret_cast<int16_t*>(&rbx150);
        *reinterpret_cast<int16_t*>(&rbx150) = *reinterpret_cast<int16_t*>(&rbp167);
        *reinterpret_cast<int16_t*>(&rbp167) = tmp16_169;
    }
    __asm__("bts r8d, r10d");
    __asm__("rcr r9w, 0x54");
    rax170 = rax162 * rbx150;
    rdx171 = __intrinsic();
    ax172 = *reinterpret_cast<signed char*>(&rax170);
    *reinterpret_cast<unsigned char*>(&r10_141) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r10b165 - reinterpret_cast<unsigned char>(10 + reinterpret_cast<uint1_t>(r10b165 < 10))) | 0x72);
    *reinterpret_cast<int32_t*>(&rbp173) = *reinterpret_cast<int32_t*>(&rbp167) >> *reinterpret_cast<signed char*>(&rcx156);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp173) + 4) = 0;
    ecx174 = reinterpret_cast<int32_t>(~*reinterpret_cast<uint32_t*>(&rcx156));
    __asm__("shld rax, rcx, 0x53");
    rdi175 = rdi106 << *reinterpret_cast<unsigned char*>(&ecx174);
    r8_176 = r8_138 >> 0x7b;
    cl177 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx174) - *reinterpret_cast<unsigned char*>(&ecx174));
    __asm__("xadd r8, r14");
    __asm__("rcl r12w, 1");
    *reinterpret_cast<uint16_t*>(&r14_151) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&rdx171)));
    *reinterpret_cast<int16_t*>(&rax170) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax172) * *reinterpret_cast<signed char*>(&rdx171));
    __asm__("shld bp, r15w, 0x1");
    __asm__("shrd edi, ecx, 0x64");
    *reinterpret_cast<uint16_t*>(&rbp173) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&rbx150)));
    esi178 = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ecx174) + 1);
    *reinterpret_cast<int32_t*>(&r9_179) = r9d160 - *reinterpret_cast<int32_t*>(&r8_176);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_179) + 4) = 0;
    if (r9d160 > *reinterpret_cast<int32_t*>(&r8_176)) {
        rdx171 = rbp173;
    }
    *reinterpret_cast<unsigned char*>(&r8_176) = reinterpret_cast<uint1_t>(!__intrinsic());
    if (__intrinsic()) {
        r14_151 = rbp173;
    }
    cf180 = static_cast<uint1_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_176) >> *reinterpret_cast<uint16_t*>(&r8_176)));
    if (__undefined()) {
        *reinterpret_cast<uint16_t*>(&r8_176) = *reinterpret_cast<uint16_t*>(&r14_151);
    }
    *reinterpret_cast<uint16_t*>(&rbp173) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp173) + 0x3381) + cf180);
    __asm__("rcr r11w, 1");
    __asm__("ror rdi, 1");
    cf181 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r11_168) < 0xb18e2ec4);
    *reinterpret_cast<uint32_t*>(&r11_182) = *reinterpret_cast<uint32_t*>(&r11_168) + 0x4e71d13c;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_182) + 4) = 0;
    __asm__("shld dx, di, 0x1");
    __asm__("rol cx, cl");
    __asm__("xadd r8w, di");
    __asm__("bts rdi, rcx");
    rcx183 = rdx171;
    r11_184 = r11_182 + r14_151 + cf181;
    *reinterpret_cast<unsigned char*>(&rbp173) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp173) + *reinterpret_cast<unsigned char*>(&r13_131)) + 1);
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r8_176) = *reinterpret_cast<uint16_t*>(&r13_131);
    }
    *reinterpret_cast<unsigned char*>(&esi178) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&rbp173) < reinterpret_cast<signed char>(0) == __intrinsic());
    *reinterpret_cast<int32_t*>(&r13_185) = *reinterpret_cast<int32_t*>(&rdx171);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_185) + 4) = 0;
    __asm__("rcl ch, 0x79");
    cl186 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx183) & 15);
    __asm__("shrd bx, ax, cl");
    __asm__("ror rdx, cl");
    *reinterpret_cast<uint16_t*>(&r14_151) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_151) >> cl186);
    r9_187 = ~r9_179;
    *reinterpret_cast<int32_t*>(&r12_188) = reinterpret_cast<int32_t>(-r12d163);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_188) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rdi175) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&rdi175) << cl177) >> cl177) >> cl186);
    r8_189 = r8_176 + 0x135fc1f;
    rbx190 = reinterpret_cast<uint64_t>(rbx150 + r9_187);
    __asm__("rcl rdi, 1");
    __asm__("rcr r10b, 1");
    tmp64_191 = (r13_185 & 0xffffffff) << 32;
    tmp64_192 = (tmp64_191 & 0xffff0000ffff) << 16 | (tmp64_191 & 0xffff0000ffff0000) >> 16;
    r13_193 = (tmp64_192 & 0xff00ff00ff00ff) << 8 | (tmp64_192 & 0xff00ff00ff00ff00) >> 8;
    eax194 = *reinterpret_cast<int32_t*>(&rax170) * esi178 * *reinterpret_cast<int32_t*>(&rbp173);
    *reinterpret_cast<uint32_t*>(&rsi195) = *reinterpret_cast<unsigned char*>(&rbx190);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi195) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r8_196) = *reinterpret_cast<uint32_t*>(&r8_189) | 0xc0000000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_196) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rdx197) = eax194 % *reinterpret_cast<uint32_t*>(&r8_196);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx197) + 4) = 0;
    eax198 = eax194 / *reinterpret_cast<uint32_t*>(&r8_196);
    if (1) {
        r10_141 = r12_188;
    }
    __asm__("ror ecx, 1");
    *reinterpret_cast<int32_t*>(&r11_199) = *reinterpret_cast<int32_t*>(&r11_184) + *reinterpret_cast<int32_t*>(&r12_188);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_199) + 4) = 0;
    __asm__("shld r15d, esi, cl");
    ax200 = reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&eax198) * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax198) + 1))));
    __asm__("rcr r12d, 1");
    r11w201 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_199) - 1);
    __asm__("rol ebp, 0x4f");
    tmp16_202 = *reinterpret_cast<uint16_t*>(&r10_141);
    *reinterpret_cast<uint16_t*>(&r10_141) = 0;
    __asm__("rcl r9b, 1");
    rbx203 = r8_196;
    *reinterpret_cast<unsigned char*>(&r10_141) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(0) >> 0x72);
    *reinterpret_cast<uint16_t*>(&eax198) = reinterpret_cast<uint16_t>(ax200 ^ r11w201);
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r12_188) = *reinterpret_cast<uint16_t*>(&eax198);
    }
    less_or_equal204 = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx197) + 1) <= 0x7b;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx197) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx197) + 1) - 0x7b);
    *reinterpret_cast<unsigned char*>(&eax198) = reinterpret_cast<uint1_t>(!less_or_equal204);
    *reinterpret_cast<uint16_t*>(&r13_193) = reinterpret_cast<uint16_t>(tmp16_202 - *reinterpret_cast<uint16_t*>(&r12_188));
    __asm__("lahf ");
    __asm__("shld r15w, r8w, 0x2");
    __asm__("ror eax, 0x89");
    *reinterpret_cast<uint16_t*>(&r9_187) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&ax200))) ^ *reinterpret_cast<uint16_t*>(&rdi175));
    *reinterpret_cast<unsigned char*>(&rcx183) = reinterpret_cast<unsigned char>(cl186 & 15);
    __asm__("shld r11w, r8w, cl");
    __asm__("rol ax, cl");
    __asm__("btc rdi, 0x7d");
    r13_205 = r13_193 >> -16;
    *reinterpret_cast<unsigned char*>(&r11w201) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11w201) - *reinterpret_cast<signed char*>(&r14_151)) + *reinterpret_cast<signed char*>(&rbx203)) + 1);
    __asm__("rcr si, cl");
    __asm__("shld r9d, ebx, cl");
    __asm__("btr esi, r13d");
    __asm__("shrd ebp, ebx, cl");
    __asm__("shrd r12w, r12w, 0xd");
    __asm__("shrd r10d, edx, cl");
    __asm__("ror cx, 1");
    __asm__("rcl r13d, cl");
    __asm__("ror r15b, 0xfb");
    *reinterpret_cast<uint32_t*>(&r8_206) = *reinterpret_cast<uint32_t*>(&r8_196) ^ 0x9c78741a;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_206) + 4) = 0;
    r14_207 = r14_151 - (r10_141 + reinterpret_cast<uint1_t>(r14_151 < r10_141));
    r15b208 = reinterpret_cast<unsigned char>(cf181 - 36);
    r12_209 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int16_t*>(&rdx197)));
    __asm__("rcr si, 1");
    *reinterpret_cast<uint16_t*>(&r11_199) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi195) + *reinterpret_cast<uint16_t*>(&r13_205)) + static_cast<uint1_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_205) >> 0xff95)));
    *reinterpret_cast<uint16_t*>(&rsi195) = r11w201;
    cf210 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r8_206) < 0x21cf);
    *reinterpret_cast<uint16_t*>(&r8_206) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_206) - 0x21cf);
    *reinterpret_cast<unsigned char*>(&eax198) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax198) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax198) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax198) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax198) + cf210))));
    __asm__("rcl bpl, 0xcf");
    r8_211 = r8_206 - 1;
    *reinterpret_cast<unsigned char*>(&r8_211) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_211) >> 1);
    rsi212 = rsi195 >> *reinterpret_cast<unsigned char*>(&rcx183);
    __asm__("shld eax, r11d, 0x1");
    *reinterpret_cast<int32_t*>(&rcx213) = *reinterpret_cast<int32_t*>(&rcx183) << *reinterpret_cast<unsigned char*>(&rcx183);
    *reinterpret_cast<signed char*>(&r13_205) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&r13_205));
    r8_214 = reinterpret_cast<uint64_t>(~r8_211);
    __asm__("rcl r15w, 1");
    cf215 = reinterpret_cast<uint1_t>(rsi212 < 0xffffffffedd036b5);
    rsi216 = rsi212 - (0x122fc94b - static_cast<uint64_t>(cf215));
    *reinterpret_cast<unsigned char*>(&r12_209) = reinterpret_cast<uint1_t>(rsi216 == static_cast<uint64_t>(cf215));
    if (reinterpret_cast<int64_t>(rsi212) <= reinterpret_cast<int64_t>(0xffffffffedd036b5)) {
        *reinterpret_cast<int16_t*>(&r8_214) = *reinterpret_cast<int16_t*>(&rdx197);
    }
    __asm__("rcr ebx, 1");
    cf217 = reinterpret_cast<uint1_t>(r15b208 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rcx213))));
    *reinterpret_cast<unsigned char*>(&r15_166) = reinterpret_cast<unsigned char>(r15b208 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx213) + cf217));
    if (r15b208 > reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx213) + cf217)) {
        rcx213 = rdx197;
    }
    __asm__("rcr r8w, 0x82");
    __asm__("ror dl, cl");
    *reinterpret_cast<int16_t*>(&rbx203) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbx203) >> *reinterpret_cast<unsigned char*>(&rcx213));
    eax218 = eax198 * *reinterpret_cast<uint32_t*>(&rdx197);
    edx219 = __intrinsic();
    __asm__("xadd r13W, r15w");
    *reinterpret_cast<uint32_t*>(&rbx220) = *reinterpret_cast<uint32_t*>(&rbx203) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx220) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rcx213) = *reinterpret_cast<unsigned char*>(&edx219);
    __asm__("xadd cl, bl");
    *reinterpret_cast<int32_t*>(&rdi221) = *reinterpret_cast<int32_t*>(&rsi216);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi221) + 4) = 0;
    esi222 = *reinterpret_cast<uint32_t*>(&rdi175) - (0x7cf3a301 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdi175) < 0x7cf3a301));
    __asm__("rol r9w, 0x8b");
    __asm__("ror rdx, cl");
    __asm__("btr rdx, rbp");
    *reinterpret_cast<uint16_t*>(&r15_166) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_166) + *reinterpret_cast<uint16_t*>(&esi222)) + 1);
    __asm__("rcl r15, 1");
    *reinterpret_cast<signed char*>(&rbx220) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbx220) - 31);
    *reinterpret_cast<int32_t*>(&rbp223) = *reinterpret_cast<int32_t*>(&rcx213) * 0x7c504b97;
    __asm__("xadd r9d, r15d");
    __asm__("bsr r14w, r8w");
    __asm__("btc bp, 0x3");
    __asm__("rcr r9, 1");
    r9_224 = reinterpret_cast<uint64_t>(r9_187 + 0x343d673a);
    *reinterpret_cast<uint16_t*>(&rbx220) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx220) - reinterpret_cast<uint16_t>(0x5ee2 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rbx220) < 0x5ee2)));
    *reinterpret_cast<int32_t*>(&rcx225) = reinterpret_cast<signed char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!__undefined()))) + 0x136e6ce9;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx225) + 4) = 0;
    r10_226 = *reinterpret_cast<unsigned char*>(&eax218);
    rdx227 = r14_207 * 0xffffffffad44c104;
    *reinterpret_cast<signed char*>(&rbp223) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&rbp223));
    __asm__("rcr r14d, 0xb7");
    tmp8_228 = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx227) + 1);
    *reinterpret_cast<signed char*>(&rbx220) = tmp8_228;
    if (!__intrinsic()) {
        rbx220 = r12_209;
    }
    r9b229 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r9_224) + 0xee)));
    tmp64_230 = (r11_199 & 0xffffffff) << 32;
    tmp64_231 = (tmp64_230 & 0xffff0000ffff) << 16 | (tmp64_230 & 0xffff0000ffff0000) >> 16;
    r11_232 = (tmp64_231 & 0xff00ff00ff00ff) << 8 | (tmp64_231 & 0xff00ff00ff00ff00) >> 8;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r9b229) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(r9b229 == 0)) {
    }
    __asm__("shrd r8d, eax, 0x1");
    __asm__("btc r11d, r12d");
    __asm__("rcl r11, 1");
    __asm__("shrd r12, rcx, 0x1");
    cf233 = reinterpret_cast<uint1_t>(r11_232 < 0x6dad5024);
    if (!cf233) {
        *reinterpret_cast<int16_t*>(&r12_209) = *reinterpret_cast<int16_t*>(&r10_226);
    }
    r14_234 = r14_207 << 1;
    if (__intrinsic()) {
        r8_214 = r14_234;
    }
    r11_235 = r11_232 - (0x6dad5024 + static_cast<uint64_t>(cf233)) ^ 0xffffffffe869cd0a;
    less_or_equal236 = *reinterpret_cast<int16_t*>(&r13_205) <= *reinterpret_cast<int16_t*>(&rbp223);
    __asm__("xadd si, bp");
    if (less_or_equal236) {
    }
    __asm__("xadd r12b, bpl");
    __asm__("rcl r11, 1");
    r9d237 = *reinterpret_cast<int32_t*>(&r15_166) + *reinterpret_cast<int32_t*>(&rbp223) * 2 + 0x353b0b2a;
    rbx238 = rbx220 & 0x8a50d13;
    *reinterpret_cast<uint32_t*>(&rbx239) = *reinterpret_cast<uint32_t*>(&rbx238) >> 24 | *reinterpret_cast<uint32_t*>(&rbx238) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&rbx238) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&rbx238) << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx239) + 4) = 0;
    if (!rbx238) {
        *reinterpret_cast<int16_t*>(&rcx225) = *reinterpret_cast<int16_t*>(&r14_234);
    }
    r9d240 = r9d237 - 0x2c0b57e2;
    *reinterpret_cast<int16_t*>(&r14_234) = 0x4343;
    if (r9d237 <= 0x2c0b57e2) {
        rdi221 = rbx239;
    }
    __asm__("ror dil, cl");
    eax241 = eax218 * r9d240;
    *reinterpret_cast<int32_t*>(&rdx242) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx242) + 4) = 0;
    __asm__("rcr r9b, cl");
    __asm__("btc r14, 0x79");
    __asm__("btc r8d, 0x16");
    *reinterpret_cast<uint16_t*>(&rbp223) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp223) | 0xc000);
    *reinterpret_cast<uint16_t*>(&rdx242) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax241) % *reinterpret_cast<uint16_t*>(&rbp223));
    *reinterpret_cast<uint16_t*>(&eax241) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax241) / *reinterpret_cast<uint16_t*>(&rbp223));
    rax243 = reinterpret_cast<int32_t>(eax241);
    *reinterpret_cast<unsigned char*>(&rcx225) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx225) & 0x90);
    r10d244 = static_cast<uint32_t>(r12_209 + rcx225);
    if (!__intrinsic()) {
        rbp223 = r12_209;
    }
    r11b245 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_235) + *reinterpret_cast<unsigned char*>(&r9d240))));
    *reinterpret_cast<int16_t*>(&rax243) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax243) << 1);
    *reinterpret_cast<uint32_t*>(&r10_246) = r10d244 - (*reinterpret_cast<uint32_t*>(&rax243) + reinterpret_cast<uint1_t>(r10d244 < *reinterpret_cast<uint32_t*>(&rax243) + __intrinsic()));
    *reinterpret_cast<int16_t*>(&rax243) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax243) * reinterpret_cast<signed char>(r11b245));
    tmp16_247 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9d240) + *reinterpret_cast<uint16_t*>(&r15_166));
    cf248 = reinterpret_cast<uint1_t>(tmp16_247 < *reinterpret_cast<uint16_t*>(&r9d240));
    *reinterpret_cast<uint16_t*>(&r9d240) = tmp16_247;
    *reinterpret_cast<uint32_t*>(&rax249) = *reinterpret_cast<uint32_t*>(&rax243) - (*reinterpret_cast<uint32_t*>(&r10_246) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax243) < *reinterpret_cast<uint32_t*>(&r10_246) + cf248));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax249) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r10_246) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_246) & *reinterpret_cast<unsigned char*>(&rbx239));
    if (!*reinterpret_cast<unsigned char*>(&r10_246)) {
        r15_166 = rbx239;
    }
    __asm__("ror al, 0x76");
    __asm__("ror r11b, 1");
    *reinterpret_cast<uint32_t*>(&r9_250) = r9d240 >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_250) + 4) = 0;
    __asm__("bsf rdx, r12");
    rcx251 = rcx225 & rax249;
    *reinterpret_cast<unsigned char*>(&rdx242) = reinterpret_cast<uint1_t>(rcx251 == 0);
    *reinterpret_cast<uint16_t*>(&rdi221) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi221) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx242) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rdi221) < reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx242) + 1))));
    __asm__("rcl sil, 1");
    __asm__("btr r12w, 0xed");
    r8_252 = r8_214 - (rdx242 + reinterpret_cast<uint1_t>(r8_214 < rdx242));
    *reinterpret_cast<unsigned char*>(&r11_235) = reinterpret_cast<unsigned char>(r11b245 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_250) + reinterpret_cast<uint1_t>(r11b245 < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_250) + 1))));
    ebp253 = *reinterpret_cast<int32_t*>(&r11_235);
    *reinterpret_cast<int32_t*>(&r11_254) = *reinterpret_cast<int32_t*>(&rbp223);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_254) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&ebp253) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebp253) + *reinterpret_cast<unsigned char*>(&r9_250))));
    rcx255 = rcx251 + 0x23dbb934;
    __asm__("xadd r8b, r15b");
    if (!(*reinterpret_cast<unsigned char*>(&rdx242) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx239) + 1))) {
    }
    tmp64_256 = r11_254 + 0x63de181f;
    r11_257 = tmp64_256;
    __asm__("btr r12d, r10d");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx239) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx239) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx255) + 1)) + reinterpret_cast<uint1_t>(tmp64_256 < r11_254));
    rax258 = rax249 * r14_234;
    *reinterpret_cast<unsigned char*>(&rbx239) = 0;
    __asm__("bts r12, 0x9");
    __asm__("bts r14w, 0x25");
    *reinterpret_cast<uint32_t*>(&r13_259) = *reinterpret_cast<uint16_t*>(&r15_166) + 0x6b543d24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_259) + 4) = 0;
    __asm__("xadd bh, dh");
    __asm__("rcl bpl, 1");
    *reinterpret_cast<unsigned char*>(&ax260) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax258) >> 1);
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&ebp253) = *reinterpret_cast<int16_t*>(&r13_259);
    }
    ecx261 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(*reinterpret_cast<int32_t*>(&rcx255) + 0x78a44fff) >> 9);
    __asm__("xadd r13b, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax260) + 1) = reinterpret_cast<uint1_t>(__intrinsic() | reinterpret_cast<uint1_t>(ecx261 == 0));
    *reinterpret_cast<uint32_t*>(&rcx262) = ecx261 & *reinterpret_cast<uint32_t*>(&r14_234);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx262) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r12_263) = static_cast<int32_t>(r13_259 + rcx262 + 0x7eabd9a9);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_263) + 4) = 0;
    __asm__("shrd eax, r11d, 0xe5");
    __asm__("rol r11d, 1");
    __asm__("bsr r14, r9");
    rcx264 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<signed char*>(&rdi221)));
    __asm__("bts rdx, 0xb9");
    __asm__("rcr edi, 1");
    *reinterpret_cast<int32_t*>(&rax265) = reinterpret_cast<int16_t>(reinterpret_cast<uint16_t>(~ax260) >> 95);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax265) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r9_250) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_250) << 1);
    *reinterpret_cast<unsigned char*>(&rdi221) = 1;
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rdi221) = ebp253;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi221) + 4) = 0;
    }
    rdi266 = rdi221 << 10;
    *reinterpret_cast<int32_t*>(&rbp267) = ebp253 >> *reinterpret_cast<signed char*>(&rcx264);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp267) + 4) = 0;
    __asm__("btr rcx, r11");
    zf268 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r9_250) == 0);
    if (zf268) {
        tmp8_269 = *reinterpret_cast<unsigned char*>(&r9_250);
        *reinterpret_cast<unsigned char*>(&r9_250) = 0;
        *reinterpret_cast<unsigned char*>(&rbx239) = tmp8_269;
    }
    if (reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic()) | zf268) {
        *reinterpret_cast<uint16_t*>(&rcx264) = *reinterpret_cast<uint16_t*>(&r15_166);
    }
    if (!__intrinsic()) {
    }
    *reinterpret_cast<signed char*>(&r8_252) = 2;
    __asm__("rol r13W, cl");
    r13_270 = r13_259 + 1;
    __asm__("shld rdx, r10, cl");
    rax271 = rax265 * 0xffffffffbd3de01c * r11_257;
    rdx272 = __intrinsic();
    rbx273 = rbx239 - (r12_263 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rbx239 < r12_263 + static_cast<uint64_t>(__intrinsic()))));
    *reinterpret_cast<int32_t*>(&rsi274) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx272) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi274) + 4) = 0;
    r15w275 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_166) + 0x3b92);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int16_t>(r15w275) < reinterpret_cast<int16_t>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(r15w275 == 0))) {
        *reinterpret_cast<int32_t*>(&r12_263) = *reinterpret_cast<int32_t*>(&rcx264);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_263) + 4) = 0;
    }
    r14_276 = *reinterpret_cast<unsigned char*>(&rbx273);
    *reinterpret_cast<int32_t*>(&r8_277) = *reinterpret_cast<int32_t*>(&r8_252) * 0x4fe1dd2b;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_277) + 4) = 0;
    tmp64_278 = (rsi274 & 0xffffffff) << 32;
    tmp64_279 = (tmp64_278 & 0xffff0000ffff) << 16 | (tmp64_278 & 0xffff0000ffff0000) >> 16;
    rsi280 = (tmp64_279 & 0xff00ff00ff00ff) << 8 | (tmp64_279 & 0xff00ff00ff00ff00) >> 8;
    __asm__("btr edi, 0x82");
    *reinterpret_cast<unsigned char*>(&rbp267) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp267) - 1) - 10)));
    __asm__("shrd r15, r15, cl");
    *reinterpret_cast<int16_t*>(&r13_270) = *reinterpret_cast<int16_t*>(&r12_263);
    if (!*reinterpret_cast<signed char*>(&r8_277)) {
        *reinterpret_cast<signed char*>(&r8_277) = 0;
    }
    if (__intrinsic() == __intrinsic()) {
        rdi266 = r11_257;
    }
    if (0) {
        *reinterpret_cast<int32_t*>(&r8_277) = *reinterpret_cast<int32_t*>(&r11_257);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_277) + 4) = 0;
    }
    *reinterpret_cast<int16_t*>(&rsi280) = 1;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax271) + 1) = -27;
    __asm__("rcr bp, cl");
    *reinterpret_cast<unsigned char*>(&r14_276) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_276) + *reinterpret_cast<unsigned char*>(&rbp267))));
    *reinterpret_cast<int16_t*>(&r14_276) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r14_276) >> 44);
    __asm__("shld r11, r10, 0x1");
    *reinterpret_cast<int16_t*>(&r10_246) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r10_246) + 1);
    *reinterpret_cast<uint32_t*>(&r10_281) = *reinterpret_cast<uint32_t*>(&r10_246) + 0x1e77eb47;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_281) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&r10_281) >= reinterpret_cast<int32_t>(0)) {
        *reinterpret_cast<int16_t*>(&rbp267) = *reinterpret_cast<int16_t*>(&r9_250);
    }
    *reinterpret_cast<uint32_t*>(&rax282) = *reinterpret_cast<uint32_t*>(&rax271) >> 46;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax282) + 4) = 0;
    return rax282 + rbx273 + rcx264 + rbp267 + rsi280 + rdi266 + r8_277 + r9_250 + r10_281 + r11_257 + r12_263 + r13_270 + r14_276 + 0x4fffffaaca4f8b5;
}

uint64_t log_size_10_var_007(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    uint64_t rbx7;
    uint64_t rcx8;
    int64_t r10_9;
    int64_t r11_10;
    uint64_t r12_11;
    uint64_t rax12;
    uint64_t r8_13;
    uint64_t r9_14;
    int32_t r13d15;
    int64_t rbp16;
    uint1_t cf17;
    uint64_t rsi18;
    unsigned char tmp8_19;
    signed char tmp8_20;
    uint32_t r15d21;
    uint64_t r14_22;
    uint1_t cf23;
    uint16_t bp24;
    int64_t r14_25;
    uint64_t rsi26;
    uint32_t ebx27;
    uint64_t r13_28;
    uint16_t r15w29;
    uint64_t r8_30;
    int64_t rdx31;
    uint32_t ecx32;
    uint64_t rsi33;
    unsigned char cl34;
    int16_t ax35;
    uint64_t rsi36;
    uint64_t r13_37;
    uint32_t ebx38;
    uint64_t r9_39;
    uint64_t r14_40;
    int64_t rcx41;
    uint32_t ebx42;
    uint64_t r9_43;
    uint64_t r13_44;
    uint64_t rsi45;
    uint64_t r13_46;
    int1_t zf47;
    uint32_t tmp32_48;
    uint32_t r13d49;
    int64_t rbx50;
    uint64_t r12_51;
    uint64_t r13_52;
    int64_t rdx53;
    int64_t r13_54;
    uint64_t rbx55;
    uint64_t rdi56;
    uint64_t rdx57;
    int64_t r13_58;
    unsigned char tmp8_59;
    uint64_t r11_60;
    uint64_t rbp61;
    uint64_t rsi62;
    uint64_t rdx63;
    int64_t rcx64;
    uint64_t r11_65;
    signed char r12b66;
    uint1_t cf67;
    uint32_t edi68;
    int64_t r10_69;
    int64_t r13_70;
    uint64_t r8_71;
    int64_t rcx72;
    uint64_t r8_73;
    int32_t eax74;
    unsigned char tmp8_75;
    int64_t rax76;
    int64_t rdx77;
    uint64_t rcx78;
    int64_t r13_79;
    unsigned char r8b80;
    int32_t r13d81;
    uint64_t tmp64_82;
    uint64_t tmp64_83;
    uint64_t rcx84;
    uint64_t rbx85;
    uint32_t r9d86;
    uint64_t rax87;
    int64_t rdx88;
    uint64_t rbx89;
    int64_t r10_90;
    uint64_t r13_91;
    int64_t rax92;
    uint32_t eax93;
    int32_t edx94;
    uint16_t cx95;
    int64_t rdi96;
    uint32_t r10d97;
    uint64_t r15_98;
    uint16_t tmp16_99;
    uint64_t rsi100;
    uint32_t r15d101;
    uint32_t eax102;
    int32_t edx103;
    int64_t r9_104;
    uint64_t rbx105;
    uint64_t r14_106;
    uint64_t r12_107;
    int32_t eax108;
    uint32_t r15d109;
    uint32_t edx110;
    uint64_t rax111;
    uint64_t r8_112;
    uint64_t r14_113;
    int64_t r15_114;
    uint64_t r12_115;
    unsigned char tmp8_116;
    uint1_t cf117;
    int64_t r11_118;
    uint64_t tmp64_119;
    int64_t rbp120;
    uint32_t r12d121;
    int64_t rbp122;
    int64_t r8_123;
    uint64_t tmp64_124;
    uint64_t r10_125;
    uint1_t less126;
    uint32_t edi127;
    uint64_t rdx128;
    uint32_t r15d129;
    uint32_t esi130;
    unsigned char tmp8_131;
    int64_t r12_132;
    int64_t r13_133;
    uint64_t r8_134;
    uint64_t r14_135;
    unsigned char tmp8_136;
    uint1_t cf137;
    uint64_t rbx138;
    int64_t r11_139;
    int64_t r12_140;
    uint16_t tmp16_141;
    uint1_t cf142;
    uint64_t r10_143;
    int64_t rax144;
    uint32_t esi145;
    uint64_t r8_146;
    uint32_t r9d147;
    uint64_t rdx148;
    uint64_t rbx149;
    uint32_t tmp32_150;
    int64_t r12_151;
    uint64_t r9_152;
    int64_t rax153;
    int64_t rax154;
    uint64_t rbp155;
    int64_t r10_156;
    uint64_t rdi157;
    uint64_t r9_158;
    uint64_t rax159;
    uint64_t rcx160;
    uint64_t r8_161;
    uint1_t cf162;
    uint32_t esi163;
    uint64_t rbp164;
    uint64_t r15_165;
    int64_t rdx166;
    uint64_t rbp167;
    uint64_t rbx168;
    int64_t rcx169;
    uint32_t eax170;
    int64_t r12_171;
    uint64_t r9_172;
    uint64_t tmp64_173;
    int64_t r10_174;
    uint64_t r13_175;
    uint32_t esi176;
    uint64_t rdi177;
    int64_t rbp178;
    uint1_t cf179;
    int1_t below_or_equal180;
    uint32_t eax181;
    uint64_t rdx182;
    unsigned char tmp8_183;
    int1_t cf184;
    int64_t r9_185;
    uint16_t tmp16_186;
    uint64_t r15_187;
    int64_t rax188;
    int64_t r11_189;
    int64_t r13_190;
    int64_t rdi191;
    int64_t rdi192;
    uint64_t r11_193;
    uint64_t rcx194;
    int64_t r12_195;
    uint16_t tmp16_196;
    int1_t cf197;
    uint64_t rdx198;
    uint64_t r15_199;
    uint64_t r13_200;
    uint64_t r14_201;
    signed char al202;
    int64_t r12_203;
    uint64_t r10_204;
    int64_t rcx205;
    signed char tmp8_206;
    uint64_t r13_207;
    uint64_t tmp64_208;
    uint64_t rbx209;
    int64_t rax210;
    int64_t rsi211;
    int64_t r12_212;
    uint16_t tmp16_213;
    int64_t rax214;
    uint64_t r8_215;
    uint32_t r8d216;
    uint32_t edx217;
    int64_t rax218;
    int64_t rsi219;
    uint32_t r14d220;
    int64_t r12_221;
    uint64_t rbx222;
    uint1_t cf223;
    uint16_t r11w224;
    int64_t rbp225;
    uint64_t rbx226;
    int64_t r10_227;
    int64_t r15_228;
    int64_t rax229;
    int64_t rdx230;
    int64_t r8_231;
    unsigned char bl232;
    uint64_t rax233;
    uint64_t r10_234;
    uint64_t r12_235;
    uint64_t rcx236;
    uint16_t ax237;
    signed char r10b238;
    unsigned char tmp8_239;
    int32_t eax240;
    uint64_t r11_241;
    int64_t r15_242;
    int64_t rdx243;
    uint64_t r9_244;
    int64_t r14_245;
    int16_t tmp16_246;
    int64_t r11_247;
    int64_t r13_248;
    uint1_t cf249;
    int64_t rax250;

    rbx7 = 0x83da885d3620c6ad;
    rcx8 = 0xce3b19219ef8973b;
    r10_9 = 0x780eaf3fb9a88b72;
    r11_10 = 0x42ee9041eb945b7f;
    r12_11 = 0x4b160ce714aa530e;
    if (0) {
    }
    __asm__("rcl cl, 1");
    __asm__("bsf rbp, r11");
    rax12 = 0xecb017463f22c9dc;
    __asm__("rcl r10, 1");
    *reinterpret_cast<uint16_t*>(&r10_9) = 0x322;
    __asm__("xadd bx, si");
    __asm__("rcr bx, cl");
    __asm__("rcr rax, cl");
    __asm__("shld r12w, cx, 0xe");
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&rax12) = 0x530e;
    }
    *reinterpret_cast<uint16_t*>(&rcx8) = 0xffae;
    __asm__("shld r15d, r8d, cl");
    __asm__("bsr r14w, bx");
    if (1) {
    }
    __asm__("ror r13d, 0x55");
    if (!__intrinsic()) {
        rcx8 = 0x36a67b57e8094b94;
    }
    __asm__("ror r9, 1");
    *reinterpret_cast<uint32_t*>(&r8_13) = 0x53ee6b5c;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_13) + 4) = 0;
    r9_14 = 0x67c1;
    r13d15 = (0x4f2a << *reinterpret_cast<unsigned char*>(&rcx8)) * 0xf3c87e7e;
    __asm__("shrd bp, r12w, 0x0");
    if (0xb9a80322 == r13d15) {
        *reinterpret_cast<int32_t*>(&r10_9) = r13d15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_9) + 4) = 0;
        r13d15 = 0xb9a80322;
    }
    *reinterpret_cast<uint32_t*>(&rbp16) = 0x368fc39;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp16) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r12_11) = 0;
    cf17 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rax12) < 0xc815);
    *reinterpret_cast<uint16_t*>(&rax12) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax12) - reinterpret_cast<uint16_t>(0x37eb - cf17));
    if (*reinterpret_cast<int16_t*>(&rax12) >= reinterpret_cast<int16_t>(static_cast<uint32_t>(cf17))) {
        *reinterpret_cast<uint32_t*>(&r8_13) = 0xb8355647;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_13) + 4) = 0;
    }
    __asm__("bts dx, 0xeb");
    *reinterpret_cast<int32_t*>(&rsi18) = 0xeeef63b8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = 0;
    tmp8_19 = reinterpret_cast<unsigned char>(98 + __intrinsic());
    *reinterpret_cast<unsigned char*>(&rsi18) = tmp8_19;
    if (*reinterpret_cast<signed char*>(&rsi18) < reinterpret_cast<signed char>(0) == __intrinsic()) {
        r12_11 = 0xd5f37526b8355647;
    }
    if (tmp8_19 >= 0xb8) {
        r9_14 = rsi18;
    }
    *reinterpret_cast<unsigned char*>(&rbp16) = reinterpret_cast<unsigned char>(57 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx8) + reinterpret_cast<uint1_t>(57 < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx8) + 1))));
    if (!__intrinsic()) {
        r12_11 = r8_13;
    }
    *reinterpret_cast<int16_t*>(&rbx7) = static_cast<int16_t>(r10_9 + r9_14 * 2 + 0x93);
    tmp8_20 = *reinterpret_cast<signed char*>(&rbx7);
    *reinterpret_cast<signed char*>(&rbx7) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax12) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax12) + 1) = tmp8_20;
    __asm__("rol rbx, cl");
    *reinterpret_cast<int16_t*>(&r11_10) = 0x59d4;
    r15d21 = static_cast<uint32_t>(0xd5f37526b8355647 + rax12 * 8);
    r14_22 = 0xd5f37526b8355647 << *reinterpret_cast<unsigned char*>(&rcx8);
    cf23 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r13d15) < 0xe8);
    if (*reinterpret_cast<unsigned char*>(&r13d15) - reinterpret_cast<unsigned char>(24 - cf23) != static_cast<uint32_t>(cf23)) {
        *reinterpret_cast<uint16_t*>(&r9_14) = *reinterpret_cast<uint16_t*>(&rcx8);
    }
    bp24 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp16) >> *reinterpret_cast<unsigned char*>(&rcx8)) & 0xbda9);
    *reinterpret_cast<unsigned char*>(&r11_10) = reinterpret_cast<uint1_t>(!__intrinsic());
    *reinterpret_cast<signed char*>(&r9_14) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r9_14) >> *reinterpret_cast<unsigned char*>(&rcx8));
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(__intrinsic())))) {
    }
    __asm__("bsr r9, rdx");
    *reinterpret_cast<uint32_t*>(&r14_25) = *reinterpret_cast<uint32_t*>(&r14_22) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_25) + 4) = 0;
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r12_11) = *reinterpret_cast<uint16_t*>(&r9_14);
    }
    __asm__("ror bh, cl");
    rsi26 = rsi18 ^ rbx7;
    __asm__("rcl r15, 1");
    ebx27 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbx7) >> *reinterpret_cast<unsigned char*>(&rcx8));
    __asm__("ror ebp, 0x3b");
    __asm__("shrd r12d, r14d, 0x92");
    r13_28 = rsi26 * 0xffffffffef529e5b;
    *reinterpret_cast<signed char*>(&bp24) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&bp24) + 39);
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&bp24) < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&bp24) == 0)) {
        *reinterpret_cast<uint32_t*>(&r13_28) = *reinterpret_cast<uint32_t*>(&r14_25);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_28) + 4) = 0;
    }
    r15w29 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15d21) - 0x254c);
    __asm__("ror r8d, cl");
    __asm__("cwd ");
    *reinterpret_cast<int32_t*>(&r8_30) = 0xff886cd8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_30) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rdx31) = *reinterpret_cast<uint32_t*>(&r8_13);
    __asm__("ror r9b, 1");
    __asm__("btc dx, r14w");
    *reinterpret_cast<uint16_t*>(&r15d21) = reinterpret_cast<uint16_t>(r15w29 - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx27) + reinterpret_cast<uint1_t>(r15w29 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&ebx27))))));
    *reinterpret_cast<signed char*>(&rdx31) = 0;
    ecx32 = *reinterpret_cast<uint32_t*>(&rcx8) >> 62;
    *reinterpret_cast<int32_t*>(&rsi33) = ~*reinterpret_cast<int32_t*>(&rsi26);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rax12) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax12) & 39);
    *reinterpret_cast<unsigned char*>(&ebx27) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx31) + 1);
    __asm__("rcl r11d, 1");
    if (0) {
        r9_14 = r12_11;
    }
    cl34 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx32) & 15);
    __asm__("shrd di, bx, cl");
    __asm__("ror ebp, 0xb1");
    ax35 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax12) >> 1);
    *reinterpret_cast<uint16_t*>(&rbp16) = reinterpret_cast<uint16_t>(bp24 + 0x49ae);
    __asm__("ror r9b, 0x5f");
    rsi36 = r13_28;
    r13_37 = rsi33;
    *reinterpret_cast<unsigned char*>(&rbp16) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp16) << 1);
    __asm__("xadd r12, r15");
    if (!__intrinsic()) {
        r11_10 = r11_10;
    }
    __asm__("bts bp, dx");
    *reinterpret_cast<unsigned char*>(&rsi36) = reinterpret_cast<uint1_t>(r15d21 < 0x176550a6 + __intrinsic());
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx31) + 1) = 0;
    if (1) {
        rbp16 = rbp16;
    }
    *reinterpret_cast<uint16_t*>(&r14_25) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_25) + *reinterpret_cast<uint16_t*>(&rbp16));
    __asm__("rcr rax, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx32) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx32) + 1) + *reinterpret_cast<unsigned char*>(&ebx27))));
    ebx38 = ebx27 - (0x951fa69 - reinterpret_cast<uint1_t>(ebx27 < 0xf6ae0598));
    __asm__("rol ch, 1");
    *reinterpret_cast<uint32_t*>(&r9_39) = -*reinterpret_cast<int32_t*>(&r9_14) + *reinterpret_cast<uint32_t*>(&r13_37);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_39) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&r9_39) < reinterpret_cast<int32_t>(0) == __intrinsic()) {
        r11_10 = 0x18031a0a;
    }
    *reinterpret_cast<uint16_t*>(&rax12) = reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&ax35) * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax35) + 1))));
    *reinterpret_cast<uint16_t*>(&rbp16) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp16) - *reinterpret_cast<uint16_t*>(&rax12));
    __asm__("ror di, 1");
    __asm__("rcl eax, cl");
    *reinterpret_cast<unsigned char*>(&ecx32) = reinterpret_cast<unsigned char>(cl34 & 15);
    __asm__("shld r15w, si, cl");
    *reinterpret_cast<unsigned char*>(&rbp16) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp16) >> 51);
    *reinterpret_cast<unsigned char*>(&rax12) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax12) + *reinterpret_cast<unsigned char*>(&ebx38));
    *reinterpret_cast<unsigned char*>(&r13_37) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&rax12) >= reinterpret_cast<signed char>(0));
    r14_40 = reinterpret_cast<uint64_t>(r14_25 - 0x13bad109);
    *reinterpret_cast<uint32_t*>(&rcx41) = ecx32 + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx41) + 4) = 0;
    __asm__("shrd ebx, edx, 0x1");
    *reinterpret_cast<uint16_t*>(&r9_39) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_39) - 0x43de)));
    __asm__("rcl al, 0x59");
    __asm__("shld edx, r11d, cl");
    *reinterpret_cast<uint16_t*>(&r14_40) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_40) ^ 0x4ac1);
    ebx42 = ebx38 + *reinterpret_cast<uint32_t*>(&rdx31);
    r9_43 = r9_39 | 0x8e84955;
    if (*reinterpret_cast<int32_t*>(&r14_40) == *reinterpret_cast<int32_t*>(&r9_43)) {
        *reinterpret_cast<int32_t*>(&r14_40) = *reinterpret_cast<int32_t*>(&r9_43);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_40) + 4) = 0;
    }
    if (__intrinsic()) {
    }
    if (!(r11_10 + 0x45f2aead + 1)) {
        *reinterpret_cast<int16_t*>(&r13_37) = *reinterpret_cast<int16_t*>(&ebx42);
    }
    r13_44 = r13_37;
    *reinterpret_cast<uint32_t*>(&rsi45) = *reinterpret_cast<uint32_t*>(&rsi36) >> -17;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi45) + 4) = 0;
    __asm__("xadd dil, r10b");
    __asm__("rcl r9b, 0x50");
    if (static_cast<int1_t>(*reinterpret_cast<uint32_t*>(&rbp16) >> 93)) {
        *reinterpret_cast<uint32_t*>(&r13_44) = *reinterpret_cast<uint32_t*>(&rsi45);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_44) + 4) = 0;
    }
    __asm__("ror r8w, cl");
    __asm__("ror eax, 0x4");
    __asm__("rcr r15d, 1");
    __asm__("rcl ch, cl");
    __asm__("ror r15d, cl");
    __asm__("ror eax, 1");
    *reinterpret_cast<unsigned char*>(&rcx41) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx41) & 15);
    __asm__("shrd dx, r13W, cl");
    __asm__("shld r9w, r12w, 0x8");
    r13_46 = r13_44 ^ 0xffffffffb945fddd;
    __asm__("rcr r12w, 1");
    *reinterpret_cast<uint16_t*>(&rcx41) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx41) >> 1);
    *reinterpret_cast<uint16_t*>(&r8_30) = reinterpret_cast<uint16_t>(0x6c7b - *reinterpret_cast<uint16_t*>(&rbp16));
    zf47 = *reinterpret_cast<uint16_t*>(&r8_30) == 0;
    if (!zf47) {
    }
    if (!zf47) {
    }
    if (!__intrinsic()) {
        rcx41 = rcx41;
    }
    tmp32_48 = *reinterpret_cast<uint32_t*>(&r13_46) + *reinterpret_cast<uint32_t*>(&r13_46);
    r13d49 = tmp32_48;
    __asm__("rcr r14, 0x4f");
    *reinterpret_cast<int32_t*>(&rbx50) = reinterpret_cast<int32_t>(ebx42) >> -100;
    *reinterpret_cast<uint16_t*>(&rsi45) = *reinterpret_cast<unsigned char*>(&rbx50);
    r12_51 = *reinterpret_cast<unsigned char*>(&r13d49);
    if (1) {
    }
    __asm__("rol bh, cl");
    *reinterpret_cast<int32_t*>(&r13_52) = reinterpret_cast<int32_t>(r13d49) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_52) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rdx53) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(__intrinsic() - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_30) + reinterpret_cast<uint1_t>(__intrinsic() < reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_30) + reinterpret_cast<uint1_t>(tmp32_48 < *reinterpret_cast<uint32_t*>(&r13_46)))))) * 0x17e2);
    if (*reinterpret_cast<unsigned char*>(&rdx53) == *reinterpret_cast<unsigned char*>(&rbx50)) {
    }
    if (0) {
    }
    r13_54 = reinterpret_cast<int64_t>(-(r13_52 ^ 0x76a7f1dc));
    __asm__("rol r11, 1");
    __asm__("rcl bh, 1");
    __asm__("bsr r11d, esi");
    *reinterpret_cast<int16_t*>(&r13_54) = reinterpret_cast<int16_t>(~*reinterpret_cast<int16_t*>(&r13_54));
    __asm__("rcr r15b, 1");
    rbx55 = *reinterpret_cast<int32_t*>(&r12_51) + *reinterpret_cast<uint32_t*>(&rsi45) * 4 + 0x2de64328;
    __asm__("btr r8, 0x38");
    __asm__("rol r14d, 0xb6");
    __asm__("rol r9w, cl");
    *reinterpret_cast<uint32_t*>(&rdi56) = 0x24fdf06;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi56) + 4) = 0;
    *reinterpret_cast<signed char*>(&rdi56) = reinterpret_cast<signed char>(6 >> *reinterpret_cast<unsigned char*>(&rcx41));
    *reinterpret_cast<int16_t*>(&r12_51) = -*reinterpret_cast<int16_t*>(&r12_51);
    __asm__("rcr eax, 1");
    __asm__("bts r9, 0xa5");
    __asm__("shrd di, dx, 0xd");
    __asm__("btr r10, 0x87");
    rdx57 = __intrinsic();
    if (__intrinsic()) {
    }
    *reinterpret_cast<unsigned char*>(&r14_40) = 0xff;
    *reinterpret_cast<int32_t*>(&r13_58) = *reinterpret_cast<int32_t*>(&r13_54) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_58) + 4) = 0;
    if (*reinterpret_cast<unsigned char*>(&rcx41) == *reinterpret_cast<unsigned char*>(&rdx57)) {
        tmp8_59 = *reinterpret_cast<unsigned char*>(&rcx41);
        *reinterpret_cast<unsigned char*>(&rdx57) = tmp8_59;
    }
    *reinterpret_cast<int32_t*>(&r11_60) = static_cast<int32_t>(rsi45 + rdx57 * 4 - 0x3da38f00);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_60) + 4) = 0;
    rbp61 = rdi56 * 0x5ac95dc1;
    __asm__("rcl rax, cl");
    rsi62 = rsi45 | 0xffffffffad90dd32;
    __asm__("shld rbx, rsi, 0xb4");
    __asm__("shld r15, rbx, cl");
    __asm__("rol dl, 0xd7");
    rdx63 = rdx57 ^ rdi56;
    *reinterpret_cast<int32_t*>(&rcx64) = *reinterpret_cast<signed char*>(&r13_58);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx64) + 4) = 0;
    *reinterpret_cast<int16_t*>(&r13_58) = static_cast<int16_t>(*reinterpret_cast<int32_t*>(&r12_51) + *reinterpret_cast<int32_t*>(&r14_40) * 4);
    *reinterpret_cast<unsigned char*>(&r11_60) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_60) >> *reinterpret_cast<unsigned char*>(&rcx64));
    r11_65 = r11_60 & 0xffffffffcbad863b;
    r12b66 = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&r12_51));
    *reinterpret_cast<uint16_t*>(&r11_65) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_65) | 0xd990);
    __asm__("rcl r9d, 0xb");
    __asm__("xadd eax, r10d");
    cf67 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdi56) < *reinterpret_cast<int32_t*>(&rcx64) + 1);
    edi68 = *reinterpret_cast<uint32_t*>(&rdi56) - (*reinterpret_cast<int32_t*>(&rcx64) + cf67);
    if (*reinterpret_cast<int32_t*>(&rdi56) <= reinterpret_cast<int32_t>(*reinterpret_cast<int32_t*>(&rcx64) + 1)) {
        *reinterpret_cast<uint16_t*>(&r11_65) = *reinterpret_cast<uint16_t*>(&rsi62);
    }
    *reinterpret_cast<unsigned char*>(&r11_65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_65) - reinterpret_cast<unsigned char>(r12b66 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r11_65) < reinterpret_cast<unsigned char>(r12b66 + cf67))));
    *reinterpret_cast<uint32_t*>(&r10_69) = reinterpret_cast<uint32_t>(-*reinterpret_cast<int32_t*>(&r8_30));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_69) + 4) = 0;
    __asm__("ror r15w, cl");
    __asm__("btc r15d, 0x55");
    __asm__("shrd esi, r14d, cl");
    *reinterpret_cast<uint16_t*>(&rbx55) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx55) >> 0xff82) << *reinterpret_cast<unsigned char*>(&rcx64));
    r13_70 = r13_58 + 0x2a7f678c;
    if (reinterpret_cast<uint1_t>(r13_70 < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(r13_70 == 0)) {
        *reinterpret_cast<int32_t*>(&rbx55) = *reinterpret_cast<int32_t*>(&r11_65);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx55) + 4) = 0;
    }
    __asm__("rcl r11b, 1");
    __asm__("btc r10, 0x6b");
    *reinterpret_cast<int16_t*>(&rbp61) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx64) + 1);
    r8_71 = r8_30 - (0x65a99712 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(r8_30 < 0x65a99712 - static_cast<uint64_t>(__intrinsic()))));
    __asm__("btc rsi, r13");
    *reinterpret_cast<signed char*>(&r8_71) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r8_71) << 1);
    rcx72 = rcx64 >> -33;
    __asm__("cwd ");
    *reinterpret_cast<int32_t*>(&r8_73) = ~*reinterpret_cast<int32_t*>(&r8_71);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_73) + 4) = 0;
    eax74 = 0;
    *reinterpret_cast<uint16_t*>(&r13_70) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_70) | 0x6d3e);
    tmp8_75 = *reinterpret_cast<unsigned char*>(&r11_65);
    *reinterpret_cast<unsigned char*>(&r10_69) = tmp8_75;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx72) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx55) + 1)))));
    if (0) {
        *reinterpret_cast<uint32_t*>(&rbp61) = *reinterpret_cast<uint32_t*>(&rdx63);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp61) + 4) = 0;
    }
    *reinterpret_cast<unsigned char*>(&eax74) = reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic());
    __asm__("rcl dh, 1");
    *reinterpret_cast<uint32_t*>(&rax76) = eax74 * *reinterpret_cast<uint32_t*>(&rbp61);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax76) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx77) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx77) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rcx78) = *reinterpret_cast<uint32_t*>(&rcx72) | 0xb725be74;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx78) + 4) = 0;
    if (0) {
        *reinterpret_cast<int32_t*>(&rdx77) = *reinterpret_cast<int32_t*>(&rsi62);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx77) + 4) = 0;
    }
    if (1) {
    }
    r13_79 = -r13_70;
    r8b80 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r8_73) + *reinterpret_cast<signed char*>(&rbx55))));
    __asm__("ror rbp, 0xaf");
    __asm__("rol rsi, 1");
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rcx78) = *reinterpret_cast<uint32_t*>(&r10_69);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx78) + 4) = 0;
    }
    __asm__("rcl bh, 1");
    *reinterpret_cast<unsigned char*>(&rcx78) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx78) & 15);
    __asm__("shrd r12w, r9w, cl");
    r13d81 = *reinterpret_cast<int32_t*>(&r13_79) >> 1;
    __asm__("rcr edx, 1");
    tmp64_82 = (rcx78 & 0xffffffff) << 32;
    tmp64_83 = (tmp64_82 & 0xffff0000ffff) << 16 | (tmp64_82 & 0xffff0000ffff0000) >> 16;
    rcx84 = (tmp64_83 & 0xff00ff00ff00ff) << 8 | (tmp64_83 & 0xff00ff00ff00ff00) >> 8;
    __asm__("shld r13, r10, 0x7d");
    __asm__("rcr ebp, 0x9e");
    __asm__("rol ax, cl");
    rbx85 = rbx55;
    if (r8b80 == *reinterpret_cast<unsigned char*>(&r10_69)) {
        r8b80 = *reinterpret_cast<unsigned char*>(&r10_69);
    }
    *reinterpret_cast<unsigned char*>(&r14_40) = 0;
    *reinterpret_cast<unsigned char*>(&r10_69) = __intrinsic();
    r9d86 = static_cast<int32_t>(r8_73 + rdx77 * 8 - 0x77bea8f6) + 0x55a001b7 + 1;
    __asm__("btc dx, 0x5b");
    __asm__("ror r12d, cl");
    if (reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&edi68) & *reinterpret_cast<uint16_t*>(&r13d81)) < reinterpret_cast<int16_t>(0)) {
    }
    __asm__("rcr dil, 1");
    __asm__("rcl r14w, 0x91");
    __asm__("xadd edi, r15d");
    __asm__("rol bp, cl");
    *reinterpret_cast<signed char*>(&r8_73) = reinterpret_cast<signed char>(~r8b80);
    *reinterpret_cast<int16_t*>(&rbp61) = 0;
    rax87 = rax76 * rbx85;
    rdx88 = __intrinsic();
    __asm__("shld rdx, rdx, 0x1");
    rbx89 = rbx85 >> 1;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax87) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax87) + 1) + *reinterpret_cast<signed char*>(&rbx89));
    __asm__("rol rsi, 1");
    r10_90 = r10_69 - 0x7204cb2e;
    *reinterpret_cast<signed char*>(&rbx89) = 0;
    *reinterpret_cast<uint16_t*>(&rax87) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax87) + 1) >> 10);
    __asm__("btr r14w, r13W");
    __asm__("shrd r13d, r12d, 0x1");
    __asm__("bsr r14w, bx");
    if (r8_73 == rbx89) {
    }
    __asm__("rcl r14w, 1");
    __asm__("shrd rbx, rbp, 0xd1");
    __asm__("shrd r12d, ebp, cl");
    *reinterpret_cast<unsigned char*>(&r10_90) = 0;
    *reinterpret_cast<int32_t*>(&r13_91) = *reinterpret_cast<int32_t*>(&rax87) + 0xce;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_91) + 4) = 0;
    __asm__("rcl r11, 1");
    *reinterpret_cast<unsigned char*>(&r9d86) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r8_73) > reinterpret_cast<int64_t>(rbx89)) + *reinterpret_cast<signed char*>(&rdx88))));
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r8_73) = *reinterpret_cast<int16_t*>(&rdx88);
    }
    rax92 = *reinterpret_cast<int32_t*>(&rax87);
    __asm__("shrd r13, rbx, 0x1");
    eax93 = *reinterpret_cast<int32_t*>(&rax92) * r9d86;
    edx94 = __intrinsic();
    cx95 = *reinterpret_cast<uint16_t*>(&eax93);
    __asm__("rcr rbx, 0x2f");
    __asm__("rcr r13W, 0x28");
    *reinterpret_cast<int32_t*>(&rdi96) = *reinterpret_cast<int32_t*>(&r10_90);
    r10d97 = edi68;
    __asm__("ror dl, 0xe4");
    __asm__("cwd ");
    r15_98 = r8_73;
    __asm__("btc r13, r14");
    *reinterpret_cast<uint16_t*>(&r13_91) = 0;
    if (rbp61 == r14_40) {
        rbp61 = r14_40;
    }
    __asm__("shld r9, r15, cl");
    __asm__("ror edi, cl");
    __asm__("bsf ebx, r15d");
    *reinterpret_cast<unsigned char*>(&r10d97) = 0;
    __asm__("rcl cl, 1");
    __asm__("shld r9, rdi, 0x3a");
    __asm__("btc rdx, r11");
    *reinterpret_cast<signed char*>(&rbp61) = 26;
    __asm__("rcr r15, 1");
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r13_91) = *reinterpret_cast<uint16_t*>(&rdi96);
    }
    if (cx95 == *reinterpret_cast<uint16_t*>(&r13_91)) {
        tmp16_99 = cx95;
        cx95 = *reinterpret_cast<uint16_t*>(&r13_91);
        *reinterpret_cast<uint16_t*>(&r13_91) = tmp16_99;
    }
    if (*reinterpret_cast<signed char*>(&edx94) == *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&edx94) + 1)) {
    }
    rsi100 = reinterpret_cast<uint64_t>(0x367a3c1a >> *reinterpret_cast<unsigned char*>(&cx95)) | 0x20844f41;
    *reinterpret_cast<uint16_t*>(&eax93) = 0x6ffd;
    __asm__("btc rdx, rdx");
    if (__intrinsic()) {
    }
    r15d101 = *reinterpret_cast<uint32_t*>(&r15_98) | 0xc0000000;
    eax102 = eax93 / r15d101;
    *reinterpret_cast<int16_t*>(&edx103) = __intrinsic();
    *reinterpret_cast<uint32_t*>(&r9_104) = r9d86 + 0xa0da76a3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_104) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rbx105) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&edx103) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx105) + 4) = 0;
    r14_106 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<signed char*>(&r9_104)));
    *reinterpret_cast<int32_t*>(&r12_107) = *reinterpret_cast<int32_t*>(&r14_106) * 0x2636e7af;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_107) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r12_107) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_107) - cx95);
    __asm__("rcr r8, 1");
    eax108 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax102) * reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10d97) >> 99));
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int64_t>(&eax108) + 1) != __intrinsic()) {
        r13_91 = r12_107;
    }
    r15d109 = r15d101 | 0xc0000000;
    edx110 = eax108 % r15d109;
    __asm__("btr esi, r13d");
    __asm__("rcl rax, 1");
    rax111 = *reinterpret_cast<unsigned char*>(&r15d109);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&cx95) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&cx95) + 1) - 22)));
    r8_112 = r8_73 ^ rax111;
    __asm__("lahf ");
    r14_113 = r14_106 - (0x226eb0bb - static_cast<uint64_t>(reinterpret_cast<uint1_t>(r14_106 < 0xffffffffdd914f45)));
    __asm__("xadd r10w, r15w");
    r15_114 = 0x2cde28cef43007d7;
    *reinterpret_cast<int16_t*>(&r15_114) = static_cast<int16_t>(*reinterpret_cast<uint32_t*>(&rbp61) + *reinterpret_cast<int32_t*>(&r14_113) * 4);
    *reinterpret_cast<unsigned char*>(&r15_114) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_114) + *reinterpret_cast<signed char*>(&r12_107))));
    __asm__("rol dh, 1");
    *reinterpret_cast<int16_t*>(&rax111) = *reinterpret_cast<signed char*>(&rax111);
    __asm__("ror r12, cl");
    __asm__("btr r8, r10");
    r12_115 = r12_107 + 0x2f997146 + 1;
    tmp8_116 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_104) + *reinterpret_cast<unsigned char*>(&r14_113));
    cf117 = reinterpret_cast<uint1_t>(tmp8_116 < *reinterpret_cast<unsigned char*>(&r9_104));
    *reinterpret_cast<unsigned char*>(&r9_104) = tmp8_116;
    r11_118 = r15_114 - 0x2cea6c33;
    tmp64_119 = r13_91 + 0x6349c484 + cf117;
    *reinterpret_cast<uint32_t*>(&rbp120) = *reinterpret_cast<uint32_t*>(&rbp61) - (0x3444935a - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbp61) < 0x3444935a - reinterpret_cast<uint1_t>(tmp64_119 < r13_91)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp120) + 4) = 0;
    __asm__("rcl rdx, 0x7c");
    __asm__("rol r9, cl");
    __asm__("shld cx, r13W, 0x1");
    if (!__intrinsic()) {
    }
    *reinterpret_cast<uint16_t*>(&rcx84) = reinterpret_cast<uint16_t>(cx95 << *reinterpret_cast<unsigned char*>(&cx95));
    r12d121 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r12_115) - 0x21003ab9);
    *reinterpret_cast<int16_t*>(&rbx105) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbx105) * 0x282e);
    __asm__("rcl r11w, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx110) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx110) + 1) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx84) + 1));
    *reinterpret_cast<unsigned char*>(&rax111) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax111) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx110) + 1));
    rbp122 = rbp120 >> 1;
    *reinterpret_cast<unsigned char*>(&r13_91) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_91) ^ 0x95);
    r8_123 = reinterpret_cast<int64_t>(~r8_112);
    tmp64_124 = tmp64_119 + rsi100 + 1;
    r10_125 = tmp64_124;
    *reinterpret_cast<uint16_t*>(&rbp122) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp122) + 0xfec7) + reinterpret_cast<uint1_t>(tmp64_124 < tmp64_119));
    less126 = reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&rbp122) < reinterpret_cast<int16_t>(0) != __intrinsic());
    if (!less126) {
    }
    if (less126) {
    }
    *reinterpret_cast<unsigned char*>(&edx110) = less126;
    if (*reinterpret_cast<uint16_t*>(&rbp122)) {
        *reinterpret_cast<uint16_t*>(&r13_91) = *reinterpret_cast<uint16_t*>(&r10_125);
    }
    edi127 = static_cast<uint32_t>(r15_114 + rax111 - 0x757cc266);
    *reinterpret_cast<int32_t*>(&rdx128) = reinterpret_cast<int32_t>(~edx110);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx128) + 4) = 0;
    if (0) {
        r8_123 = r9_104;
    }
    __asm__("btc r9d, 0x4c");
    __asm__("rcl r15b, cl");
    r15d129 = *reinterpret_cast<uint32_t*>(&r15_114) >> 0x7d;
    esi130 = *reinterpret_cast<int32_t*>(&rsi100) - 0x474ad9fb + __intrinsic();
    if (*reinterpret_cast<unsigned char*>(&rcx84) == *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx105) + 1)) {
        tmp8_131 = *reinterpret_cast<unsigned char*>(&rcx84);
        *reinterpret_cast<unsigned char*>(&rcx84) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx105) + 1);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx105) + 1) = tmp8_131;
    }
    *reinterpret_cast<uint32_t*>(&r12_132) = r12d121 - (*reinterpret_cast<uint32_t*>(&r10_125) + reinterpret_cast<uint1_t>(r12d121 < *reinterpret_cast<uint32_t*>(&r10_125)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_132) + 4) = 0;
    __asm__("shrd r15d, esi, 0x1");
    r13_133 = reinterpret_cast<int64_t>(-r13_91);
    *reinterpret_cast<uint16_t*>(&r10_125) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_125) - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r11_118) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r10_125) < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r11_118) + reinterpret_cast<uint1_t>(!!r13_91)))));
    __asm__("rcr r8b, 1");
    __asm__("ror cl, 0xf4");
    *reinterpret_cast<uint16_t*>(&r9_104) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_104) * 0xdb87) + *reinterpret_cast<int16_t*>(&r8_123)) + 1);
    if (!*reinterpret_cast<uint16_t*>(&r9_104)) {
        *reinterpret_cast<uint32_t*>(&r12_132) = *reinterpret_cast<uint32_t*>(&r10_125);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_132) + 4) = 0;
    }
    *reinterpret_cast<uint32_t*>(&r8_134) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r8_123) + 0x1067b174);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_134) + 4) = 0;
    __asm__("btc edi, esi");
    __asm__("btc r11w, 0xbd");
    *reinterpret_cast<int32_t*>(&r14_135) = static_cast<int32_t>(r13_133 + r9_104 + 0x7e);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_135) + 4) = 0;
    __asm__("shld r14, r8, cl");
    tmp8_136 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp122) + 60);
    cf137 = reinterpret_cast<uint1_t>(tmp8_136 < *reinterpret_cast<unsigned char*>(&rbp122));
    *reinterpret_cast<unsigned char*>(&rbp122) = tmp8_136;
    rbx138 = (rbx105 ^ 0xffffffff8f4a1d26) - 0x98e2e0e + cf137;
    *reinterpret_cast<uint32_t*>(&r11_139) = static_cast<uint32_t>(r14_135 + 57);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_139) + 4) = 0;
    __asm__("btr r9w, 0x6c");
    __asm__("ror r13W, cl");
    *reinterpret_cast<signed char*>(&edi127) = 0x93;
    __asm__("rol bp, 0x59");
    __asm__("btc edx, 0x18");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx138) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx138) + 1) + *reinterpret_cast<unsigned char*>(&rcx84)) + __intrinsic());
    *reinterpret_cast<int16_t*>(&r12_132) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r12_132) << 1);
    *reinterpret_cast<uint16_t*>(&r15d129) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15d129) ^ *reinterpret_cast<uint16_t*>(&rbx138));
    *reinterpret_cast<int16_t*>(&edi127) = -*reinterpret_cast<int16_t*>(&edi127);
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rbp122) = edi127;
    }
    *reinterpret_cast<unsigned char*>(&r15d129) = reinterpret_cast<unsigned char>(~*reinterpret_cast<unsigned char*>(&r15d129));
    *reinterpret_cast<unsigned char*>(&r13_133) = 1;
    r12_140 = r12_132 << *reinterpret_cast<unsigned char*>(&rcx84);
    tmp16_141 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi130) + 0x7ec5) + 1);
    cf142 = reinterpret_cast<uint1_t>(tmp16_141 < *reinterpret_cast<uint16_t*>(&esi130));
    *reinterpret_cast<uint16_t*>(&esi130) = tmp16_141;
    *reinterpret_cast<unsigned char*>(&rbx138) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx138) + 20) + cf142);
    *reinterpret_cast<uint16_t*>(&r11_139) = *reinterpret_cast<unsigned char*>(&r12_140);
    r10_143 = r10_125 - r8_134;
    __asm__("btc ax, 0xa2");
    rax144 = *reinterpret_cast<signed char*>(&rdx128);
    esi145 = esi130 - 0x1417628b;
    __asm__("shld ebp, r14d, 0xff");
    __asm__("shld r14w, r14w, 0x1");
    r8_146 = r8_134 >> 1;
    r9d147 = *reinterpret_cast<uint16_t*>(&r11_139);
    *reinterpret_cast<unsigned char*>(&rcx84) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx84) + 23) + 1);
    *reinterpret_cast<unsigned char*>(&r8_146) = 0;
    rdx148 = rdx128 >> *reinterpret_cast<unsigned char*>(&rcx84);
    __asm__("rol dx, 1");
    *reinterpret_cast<int32_t*>(&rbx149) = *reinterpret_cast<int32_t*>(&rbx138) - *reinterpret_cast<int32_t*>(&r14_135);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx149) + 4) = 0;
    __asm__("rcr eax, cl");
    *reinterpret_cast<signed char*>(&r10_143) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r10_143) >> 1);
    *reinterpret_cast<uint16_t*>(&r8_146) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_146) | 0x740f);
    if (r9d147 == *reinterpret_cast<uint32_t*>(&rdx148)) {
        tmp32_150 = r9d147;
        r9d147 = *reinterpret_cast<uint32_t*>(&rdx148);
        *reinterpret_cast<uint32_t*>(&rdx148) = tmp32_150;
    }
    *reinterpret_cast<uint16_t*>(&rax144) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax144) & *reinterpret_cast<uint16_t*>(&r8_146));
    __asm__("rcr dx, 1");
    if (0) {
        *reinterpret_cast<uint16_t*>(&rbp122) = *reinterpret_cast<uint16_t*>(&r15d129);
    }
    r12_151 = r12_140 - 0x448d7232;
    *reinterpret_cast<unsigned char*>(&r15d129) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15d129) + *reinterpret_cast<signed char*>(&rax144)) + 1);
    *reinterpret_cast<uint32_t*>(&r9_152) = r9d147 - *reinterpret_cast<uint32_t*>(&rcx84);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_152) + 4) = 0;
    if (reinterpret_cast<int32_t>(r9d147) >= *reinterpret_cast<int32_t*>(&rcx84)) {
    }
    rax153 = rax144 >> *reinterpret_cast<unsigned char*>(&rcx84);
    __asm__("rol bx, 1");
    __asm__("rol r15b, 0xc6");
    *reinterpret_cast<int32_t*>(&rax154) = *reinterpret_cast<int16_t*>(&rax153);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax154) + 4) = 0;
    __asm__("shrd r15w, r10w, 0xa");
    __asm__("rcr r11w, 0xbe");
    *reinterpret_cast<uint16_t*>(&rdx148) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx148) + 1);
    *reinterpret_cast<uint32_t*>(&rbp155) = *reinterpret_cast<uint32_t*>(&rbp122) ^ r15d129;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp155) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r8_146) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(7 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx84) + reinterpret_cast<uint1_t>(7 < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx84) + 1)))) << 1);
    __asm__("rcl ax, 1");
    *reinterpret_cast<int16_t*>(&esi145) = *reinterpret_cast<int16_t*>(&rbx149);
    __asm__("ror r12, 1");
    __asm__("rcr r13W, 1");
    __asm__("shld r12, r8, cl");
    *reinterpret_cast<uint32_t*>(&r10_156) = *reinterpret_cast<uint32_t*>(&r10_143) ^ *reinterpret_cast<uint32_t*>(&r8_146);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_156) + 4) = 0;
    __asm__("btc ebp, r8d");
    *reinterpret_cast<uint16_t*>(&rax154) = *reinterpret_cast<uint16_t*>(&r15d129);
    __asm__("shrd r15d, r8d, 0xaa");
    *reinterpret_cast<int16_t*>(&r10_156) = *reinterpret_cast<int16_t*>(&r13_133);
    __asm__("cwd ");
    rdi157 = 0;
    if (*reinterpret_cast<signed char*>(&rbx149) == *reinterpret_cast<signed char*>(&rdx148)) {
        *reinterpret_cast<signed char*>(&rbx149) = *reinterpret_cast<signed char*>(&rdx148);
    }
    *reinterpret_cast<uint16_t*>(&rcx84) = 0xe37c;
    *reinterpret_cast<int16_t*>(&rdi157) = reinterpret_cast<int16_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&r12_151)));
    r9_158 = r9_152 | 0xc000000000000000;
    rax159 = rax154 / r9_158;
    *reinterpret_cast<unsigned char*>(&r10_156) = __intrinsic();
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx84) + 1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax159) + 1) < reinterpret_cast<signed char>(99));
    rcx160 = rcx84 - (r11_139 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rcx84 < r11_139 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax159) + 1) < 99)))));
    __asm__("bsr dx, r15w");
    __asm__("btc ebp, 0x60");
    r8_161 = rax154 % r9_158 + r10_156 * 8 + 0xb3;
    __asm__("shrd r15d, r14d, cl");
    cf162 = reinterpret_cast<uint1_t>(esi145 < *reinterpret_cast<uint32_t*>(&r12_151));
    esi163 = esi145 - (*reinterpret_cast<uint32_t*>(&r12_151) + cf162);
    __asm__("rol r8w, cl");
    __asm__("rol r9b, cl");
    __asm__("shld r11w, di, 0x1");
    if (cf162) {
    }
    __asm__("shrd bp, ax, 0x1");
    *reinterpret_cast<unsigned char*>(&rcx160) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx160) & 15);
    __asm__("shld r15w, r11w, cl");
    __asm__("bsr r14w, r14w");
    rbp164 = rbp155 >> 4;
    __asm__("rcl r15w, 1");
    __asm__("xadd r15w, bx");
    *reinterpret_cast<unsigned char*>(&esi163) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&esi163) >> *reinterpret_cast<unsigned char*>(&rcx160));
    r15_165 = rcx160;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx149) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    *reinterpret_cast<uint32_t*>(&rdx166) = __intrinsic() >> 1;
    *reinterpret_cast<signed char*>(&r14_135) = reinterpret_cast<signed char>(-*reinterpret_cast<signed char*>(&r14_135) << *reinterpret_cast<unsigned char*>(&rcx160));
    __asm__("shrd r9w, bp, 0xa");
    *reinterpret_cast<int32_t*>(&rbp167) = *reinterpret_cast<int32_t*>(&rbp164) * 0xf86c59e9;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp167) + 4) = 0;
    __asm__("cwd ");
    __asm__("rcl r8b, 0xfe");
    __asm__("rol r13, 0xc7");
    __asm__("ror edx, cl");
    rbx168 = rbx149 & 0xffffffffc198f6f9;
    __asm__("ror r12w, 1");
    __asm__("ror r10, 1");
    __asm__("bsr rdx, r9");
    *reinterpret_cast<uint16_t*>(&r15_165) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_165) & 0x43ce);
    rcx169 = 0;
    eax170 = esi163 + *reinterpret_cast<uint32_t*>(&r10_156);
    r12_171 = r12_151 + 0x4fce3932;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax170) + 1) = reinterpret_cast<signed char>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax170) + 1)));
    r9_172 = r9_158 + rbp167 + 1 >> 1;
    tmp64_173 = rbp167 + 0x28e0aad9;
    __asm__("ror r9, 1");
    __asm__("ror r12, 0x98");
    *reinterpret_cast<int32_t*>(&r10_174) = static_cast<int32_t>(tmp64_173 + r14_135 * 2 - 0x6bc6ee8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_174) + 4) = 0;
    __asm__("bts r12w, 0x88");
    __asm__("bts rbx, 0x77");
    *reinterpret_cast<unsigned char*>(&r9_172) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_172) - reinterpret_cast<unsigned char>(93 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r9_172) < reinterpret_cast<unsigned char>(93 + reinterpret_cast<uint1_t>(tmp64_173 < rbp167)))));
    r13_175 = 0x7440a44e8514ed25;
    esi176 = esi163 | 0x37240aac;
    rdi177 = rdi157 - 1;
    __asm__("cwd ");
    *reinterpret_cast<uint16_t*>(&r10_174) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_174) - reinterpret_cast<uint16_t>(0x772 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r10_174) < 0x772)));
    __asm__("rcl r10d, 1");
    __asm__("xadd r14, rbx");
    if (0) {
        r13_175 = r14_135;
    }
    *reinterpret_cast<int32_t*>(&rbp178) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp178) + 4) = 0;
    if (*reinterpret_cast<uint16_t*>(&rdi177) > reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi177) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rdi177) < reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi177) + 1)))) {
        *reinterpret_cast<uint16_t*>(&r15_165) = *reinterpret_cast<uint16_t*>(&r9_172);
    }
    *reinterpret_cast<unsigned char*>(&r8_161) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_161) & *reinterpret_cast<unsigned char*>(&r12_151)) - *reinterpret_cast<unsigned char*>(&r12_151))));
    cf179 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax170) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx166) + 1))));
    below_or_equal180 = *reinterpret_cast<unsigned char*>(&eax170) <= reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx166) + 1) + cf179);
    *reinterpret_cast<unsigned char*>(&eax170) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax170) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx166) + 1) + cf179));
    __asm__("xadd r11, rsi");
    if (below_or_equal180) {
        *reinterpret_cast<int32_t*>(&rbx168) = *reinterpret_cast<int32_t*>(&r10_174);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx168) + 4) = 0;
    }
    eax181 = eax170 * *reinterpret_cast<int32_t*>(&rbx168);
    *reinterpret_cast<int32_t*>(&rdx182) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx182) + 4) = 0;
    tmp8_183 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&esi176) + 0xda)));
    cf184 = tmp8_183 < *reinterpret_cast<unsigned char*>(&esi176);
    *reinterpret_cast<unsigned char*>(&esi176) = tmp8_183;
    if (*reinterpret_cast<signed char*>(&esi176) >= reinterpret_cast<signed char>(0)) {
    }
    if (!cf184) {
        *reinterpret_cast<uint16_t*>(&r11_139) = 0;
    }
    __asm__("rcl r15d, 1");
    *reinterpret_cast<uint32_t*>(&r9_185) = *reinterpret_cast<int32_t*>(&r9_172) - 0x24f12a1b + 1;
    __asm__("rcr rsi, cl");
    *reinterpret_cast<unsigned char*>(&rbp178) = reinterpret_cast<unsigned char>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r15_165) + reinterpret_cast<uint1_t>(0 < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r15_165) + 1)))));
    __asm__("rcl rax, 1");
    __asm__("ror rdx, 1");
    __asm__("btr edx, 0x5e");
    __asm__("btr bx, 0x41");
    tmp16_186 = *reinterpret_cast<uint16_t*>(&r9_185);
    *reinterpret_cast<uint16_t*>(&r9_185) = *reinterpret_cast<uint16_t*>(&r13_175);
    *reinterpret_cast<uint16_t*>(&r13_175) = tmp16_186;
    *reinterpret_cast<int16_t*>(&eax181) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax181) * *reinterpret_cast<int16_t*>(&eax181));
    __asm__("rol r8, cl");
    __asm__("rcl r14, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx169) + 1) = reinterpret_cast<unsigned char>(-static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax181) + 1)));
    if (0 >= *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax181) + 1)) {
        r9_185 = r12_171;
    }
    if (__intrinsic()) {
        rcx169 = r11_139;
    }
    r15_187 = r15_165 - 0x3287d61e + 1;
    __asm__("rol edx, 1");
    *reinterpret_cast<uint32_t*>(&rax188) = eax181 - (*reinterpret_cast<int32_t*>(&r12_171) + reinterpret_cast<uint1_t>(eax181 < *reinterpret_cast<int32_t*>(&r12_171) + 1));
    *reinterpret_cast<uint16_t*>(&r11_139) = static_cast<uint16_t>(*reinterpret_cast<int32_t*>(&rcx169) + *reinterpret_cast<uint32_t*>(&r9_185) * 2 + 0x7b);
    *reinterpret_cast<uint32_t*>(&r11_189) = *reinterpret_cast<uint32_t*>(&r11_139) - (*reinterpret_cast<uint32_t*>(&rax188) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r11_139) < *reinterpret_cast<uint32_t*>(&rax188) + 1));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_189) + 4) = 0;
    r13_190 = reinterpret_cast<int64_t>(r13_175) >> -49;
    *reinterpret_cast<uint32_t*>(&rdi191) = *reinterpret_cast<unsigned char*>(&r10_174);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi191) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rbp178) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp178) ^ *reinterpret_cast<uint16_t*>(&r14_135));
    __asm__("bsf r11, r14");
    *reinterpret_cast<int16_t*>(&rax188) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax188) * *reinterpret_cast<int16_t*>(&rcx169));
    *reinterpret_cast<int16_t*>(&rdx182) = __intrinsic();
    __asm__("rcr al, 0xdd");
    __asm__("ror r8w, 1");
    rdi192 = rdi191 >> 1;
    __asm__("xadd r10w, r14w");
    r11_193 = reinterpret_cast<uint64_t>(~r11_189);
    *reinterpret_cast<unsigned char*>(&rcx169) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx169) - *reinterpret_cast<signed char*>(&r12_171));
    __asm__("bsf r13d, r14d");
    rcx194 = rcx169 * 0xffffffffa674744a;
    *reinterpret_cast<unsigned char*>(&rcx194) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx194) >> *reinterpret_cast<unsigned char*>(&rcx194));
    *reinterpret_cast<int32_t*>(&r12_195) = *reinterpret_cast<int32_t*>(&r12_171) + 0x5e091144;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_195) + 4) = 0;
    tmp16_196 = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi176) + *reinterpret_cast<uint16_t*>(&rbp178))));
    cf197 = tmp16_196 < *reinterpret_cast<uint16_t*>(&esi176);
    *reinterpret_cast<uint16_t*>(&esi176) = tmp16_196;
    if (cf197) {
        rdx182 = r15_187;
    }
    __asm__("rol dh, 1");
    __asm__("rcl esi, 1");
    if (rbp178 == r12_195) {
    }
    rdx198 = rdx182 * 0xffffffffc9ec37db;
    __asm__("rcr ch, cl");
    __asm__("shld r15w, bx, 0x9");
    r15_199 = r15_187 - rbx168;
    *reinterpret_cast<int32_t*>(&r13_200) = *reinterpret_cast<int32_t*>(&r13_190) * 0x1df3f92f;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_200) + 4) = 0;
    __asm__("rcr ecx, cl");
    *reinterpret_cast<int16_t*>(&rdi192) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rdi192) << *reinterpret_cast<unsigned char*>(&rcx194));
    r14_201 = r14_135 | rcx194;
    al202 = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx198) + 1);
    __asm__("ror r14w, cl");
    __asm__("shrd esi, ecx, 0x1");
    *reinterpret_cast<uint16_t*>(&r9_185) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_185) & 0xa936) & 0x6c17);
    __asm__("shrd r15, rbp, 0x1");
    r12_203 = *reinterpret_cast<int32_t*>(&rdi192);
    __asm__("xadd dh, al");
    r10_204 = reinterpret_cast<uint64_t>(~r10_174 - 0x17309c9f);
    rcx205 = reinterpret_cast<int64_t>(rcx194) >> -71;
    tmp8_206 = *reinterpret_cast<signed char*>(&r15_199);
    *reinterpret_cast<signed char*>(&r15_199) = al202;
    *reinterpret_cast<signed char*>(&rax188) = tmp8_206;
    *reinterpret_cast<signed char*>(&r12_203) = 0;
    r13_207 = r13_200 >> 1;
    __asm__("rcl r14, 0x5c");
    __asm__("shrd r8d, r14d, 0x6");
    tmp64_208 = rbx168 - 0x27404902;
    rbx209 = tmp64_208;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(tmp64_208 < rbx168) | reinterpret_cast<uint1_t>(rbx209 == 0))) {
        rbx209 = r14_201;
    }
    *reinterpret_cast<unsigned char*>(&rdi192) = __intrinsic();
    *reinterpret_cast<uint32_t*>(&rax210) = *reinterpret_cast<uint32_t*>(&rax188) - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax210) + 4) = 0;
    __asm__("rol r9d, 1");
    __asm__("ror dh, 1");
    *reinterpret_cast<uint32_t*>(&rsi211) = esi176 + *reinterpret_cast<int32_t*>(&r12_203);
    *reinterpret_cast<uint32_t*>(&r12_212) = *reinterpret_cast<unsigned char*>(&rsi211);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_212) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r13_207) = __intrinsic();
    if (*reinterpret_cast<uint16_t*>(&r9_185) == *reinterpret_cast<uint16_t*>(&r10_204)) {
        tmp16_213 = *reinterpret_cast<uint16_t*>(&r9_185);
        *reinterpret_cast<uint16_t*>(&r10_204) = tmp16_213;
    }
    __asm__("shrd rdx, rdx, 0x1");
    *reinterpret_cast<unsigned char*>(&r10_204) = reinterpret_cast<uint1_t>(!__intrinsic());
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r15_199) = *reinterpret_cast<uint32_t*>(&r13_207);
    }
    rax214 = rax210 * r12_212;
    r8_215 = r8_161 + 0x1ac7015e >> 1 | 0x245000;
    __asm__("rcr r8b, 1");
    *reinterpret_cast<signed char*>(&r15_199) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r15_199) - *reinterpret_cast<signed char*>(&r15_199));
    *reinterpret_cast<int16_t*>(&rsi211) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rsi211) >> *reinterpret_cast<unsigned char*>(&rcx205));
    r8d216 = *reinterpret_cast<uint32_t*>(&r8_215) | 0xc0000000;
    edx217 = *reinterpret_cast<uint32_t*>(&rax214) % r8d216;
    *reinterpret_cast<uint32_t*>(&rax218) = *reinterpret_cast<uint32_t*>(&rax214) / r8d216;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax218) + 4) = 0;
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&edx217) + 1) == *reinterpret_cast<signed char*>(&edx217)) {
    }
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r14_201) = *reinterpret_cast<uint16_t*>(&rcx205);
    }
    *reinterpret_cast<uint32_t*>(&rsi219) = *reinterpret_cast<uint32_t*>(&rsi211) | 0x7a89138d;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi219) + 4) = 0;
    r14d220 = *reinterpret_cast<uint32_t*>(&r12_212);
    *reinterpret_cast<int32_t*>(&r12_221) = *reinterpret_cast<int32_t*>(&r14_201);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_221) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rbx222) = *reinterpret_cast<uint32_t*>(&rbx209) ^ 0xb621bcf4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx222) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rbx222) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx222) >> 1);
    __asm__("rcr si, 1");
    cf223 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r11_193) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rcx205))));
    r11w224 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_193) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx205) + cf223));
    if (r11w224 == static_cast<uint32_t>(cf223)) {
        r10_204 = rbx222;
    }
    if (*reinterpret_cast<int16_t*>(&r11_193) >= reinterpret_cast<int16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rcx205)))) {
        r14d220 = *reinterpret_cast<uint32_t*>(&r13_207);
    }
    __asm__("shld si, r15w, 0x1");
    rbp225 = 0xffffffffd248893c;
    __asm__("rcr cl, 1");
    __asm__("shrd rdi, r12, 0xd4");
    *reinterpret_cast<uint16_t*>(&rbp225) = 0x802c;
    *reinterpret_cast<unsigned char*>(&rbp225) = reinterpret_cast<unsigned char>(44 >> *reinterpret_cast<unsigned char*>(&rcx205));
    *reinterpret_cast<uint16_t*>(&rsi219) = reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&r12_221) - 1);
    *reinterpret_cast<unsigned char*>(&r8d216) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8d216) ^ 59);
    if (!*reinterpret_cast<unsigned char*>(&r8d216)) {
        *reinterpret_cast<uint16_t*>(&rbp225) = r11w224;
    }
    __asm__("rcr r8w, 0x6e");
    rbx226 = rbx222 - (0x28305a23 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(rbx222 < 0x28305a23 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbx222) < *reinterpret_cast<uint32_t*>(&rbx222))))));
    __asm__("xadd bl, ch");
    __asm__("bts ecx, 0xbc");
    *reinterpret_cast<uint32_t*>(&r10_227) = *reinterpret_cast<uint32_t*>(&r10_204) & 0x24ae2f51;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_227) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r14d220) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14d220) & *reinterpret_cast<uint16_t*>(&r10_227)) - r11w224);
    *reinterpret_cast<uint32_t*>(&r15_228) = (*reinterpret_cast<uint32_t*>(&r15_199) >> -25) + 0x5e92946c;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_228) + 4) = 0;
    rax229 = rax218 * r10_227;
    rdx230 = __intrinsic();
    __asm__("rcr si, 1");
    *reinterpret_cast<unsigned char*>(&r15_228) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_228) - 1);
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&r15_228) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r15_228) == 0)) {
        *reinterpret_cast<uint16_t*>(&r10_227) = *reinterpret_cast<uint16_t*>(&rbp225);
    }
    __asm__("rcl r13d, 1");
    r8_231 = 0x8a52ba0b4c71e09e;
    *reinterpret_cast<unsigned char*>(&r13_207) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_207) + 0x9e);
    __asm__("rol r14w, 1");
    __asm__("shld ax, r11w, cl");
    bl232 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx226) - *reinterpret_cast<unsigned char*>(&r15_228));
    *reinterpret_cast<uint16_t*>(&rax233) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax229) - reinterpret_cast<uint16_t>(0x6c13 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rax229) < 0x6c14)));
    *reinterpret_cast<signed char*>(&rsi219) = 25;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx205) + 1) == (*reinterpret_cast<unsigned char*>(&rcx205) & 15)) {
    }
    *reinterpret_cast<uint16_t*>(&r15_228) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_228) - reinterpret_cast<uint16_t>(0x1517 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r15_228) < reinterpret_cast<uint16_t>(0x1517 + __intrinsic()))));
    r10_234 = reinterpret_cast<uint64_t>(-r10_227);
    __asm__("shld r14, rsi, cl");
    *reinterpret_cast<unsigned char*>(&r11w224) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11w224) | 55);
    *reinterpret_cast<uint16_t*>(&r11_193) = reinterpret_cast<uint16_t>(r11w224 ^ 25);
    __asm__("rol r12w, 1");
    __asm__("rcl r12, 1");
    *reinterpret_cast<unsigned char*>(&rbx226) = bl232;
    r12_235 = r12_221 + rsi219 + 1;
    if (!__intrinsic()) {
        rax233 = r13_207;
    }
    *reinterpret_cast<unsigned char*>(&r12_235) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_235) | 43);
    __asm__("ror esi, cl");
    *reinterpret_cast<uint16_t*>(&rcx236) = 0x9169;
    __asm__("shrd r14w, dx, cl");
    ax237 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rax233) >> -9) | 0xc000);
    *reinterpret_cast<uint16_t*>(&rdx230) = reinterpret_cast<uint16_t>(ax237 % ax237);
    r10b238 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r10_234) >> -71);
    __asm__("rol rbx, cl");
    __asm__("xadd dh, cl");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx236) + 1) <= 100) {
        rbp225 = r15_228;
    }
    if (*reinterpret_cast<unsigned char*>(&r13_207) == 0x9e) {
        tmp8_239 = *reinterpret_cast<unsigned char*>(&r13_207);
        *reinterpret_cast<unsigned char*>(&r13_207) = 0x9e;
        *reinterpret_cast<unsigned char*>(&r8_231) = tmp8_239;
    }
    __asm__("rcl r14d, 1");
    __asm__("rcr rsi, 1");
    eax240 = static_cast<int32_t>(rbp225 + 77);
    *reinterpret_cast<unsigned char*>(&eax240) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax240) ^ 0xda);
    if (!*reinterpret_cast<unsigned char*>(&eax240)) {
        *reinterpret_cast<uint32_t*>(&r11_193) = *reinterpret_cast<uint32_t*>(&rbp225);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_193) + 4) = 0;
    }
    r11_241 = r11_193 ^ 0x9109;
    if (0) {
        *reinterpret_cast<uint16_t*>(&rbx226) = *reinterpret_cast<uint16_t*>(&rdx230);
    }
    __asm__("rcl si, 1");
    *reinterpret_cast<signed char*>(&rsi219) = 34;
    *reinterpret_cast<int32_t*>(&r15_242) = reinterpret_cast<int32_t>(~(*reinterpret_cast<uint32_t*>(&r15_228) >> 0xffffff81));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_242) + 4) = 0;
    if (0) {
        *reinterpret_cast<uint16_t*>(&rsi219) = *reinterpret_cast<uint16_t*>(&rbx226);
    }
    __asm__("shld ax, di, 0x1");
    __asm__("shrd r9d, esi, 0x1");
    __asm__("bsf bp, r10w");
    __asm__("rol r10b, 0xd3");
    *reinterpret_cast<unsigned char*>(&rbx226) = 0;
    *reinterpret_cast<uint32_t*>(&rdx243) = *reinterpret_cast<int32_t*>(&rdx230) + *reinterpret_cast<uint32_t*>(&r13_207);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx243) + 4) = 0;
    __asm__("btc r10, 0x5a");
    r9_244 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rdx243)));
    *reinterpret_cast<signed char*>(&r10_234) = -r10b238;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx226) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx226) + 1) - reinterpret_cast<unsigned char>(0x76 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx226) + 1) < reinterpret_cast<unsigned char>(0x76 - reinterpret_cast<uint1_t>(!!r10b238)))));
    __asm__("xadd r15, rdi");
    *reinterpret_cast<uint32_t*>(&r14_245) = r14d220 + 0x54952d6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_245) + 4) = 0;
    if (!__undefined()) {
        *reinterpret_cast<int32_t*>(&r9_244) = eax240;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_244) + 4) = 0;
    }
    if (*reinterpret_cast<int16_t*>(&r11_241) == *reinterpret_cast<int16_t*>(&r12_235)) {
        tmp16_246 = *reinterpret_cast<int16_t*>(&r11_241);
        *reinterpret_cast<int16_t*>(&r11_241) = *reinterpret_cast<int16_t*>(&r12_235);
        *reinterpret_cast<int16_t*>(&r12_235) = tmp16_246;
    }
    *reinterpret_cast<unsigned char*>(&r8_231) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_231) - reinterpret_cast<unsigned char>(0x7b - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r8_231) < 0x85)));
    *reinterpret_cast<uint32_t*>(&r11_247) = *reinterpret_cast<uint32_t*>(&r11_241) | *reinterpret_cast<uint32_t*>(&rbp225);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_247) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r13_248) = *reinterpret_cast<uint32_t*>(&r13_207) + *reinterpret_cast<uint32_t*>(&rbp225) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_248) + 4) = 0;
    cf249 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r9_244) < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r14_245) + 1));
    *reinterpret_cast<uint16_t*>(&r9_244) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_244) - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r14_245) + cf249));
    if (*reinterpret_cast<uint16_t*>(&r9_244) != static_cast<uint32_t>(cf249)) {
        rbp225 = r11_247;
    }
    *reinterpret_cast<int32_t*>(&rax250) = *reinterpret_cast<int16_t*>(&eax240);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax250) + 4) = 0;
    return rax250 + rbx226 + rdx243 + rbp225 + rsi219 + (rdi192 - 1) + r8_231 + r9_244 + r10_234 + r11_247 + r12_235 + r13_248 + r14_245 + r15_242 - 0xa52bc1f5251ef5b;
}

uint64_t log_size_10_var_008(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rcx7;
    int64_t rdx8;
    int64_t rsi9;
    int64_t rdi10;
    int64_t r10_11;
    uint64_t r11_12;
    uint64_t rbp13;
    int16_t cx14;
    int64_t rax15;
    int64_t rcx16;
    int64_t rdx17;
    uint64_t r10_18;
    uint64_t r8_19;
    int64_t r13_20;
    int64_t rcx21;
    uint64_t tmp64_22;
    uint1_t cf23;
    uint1_t cf24;
    uint64_t r15_25;
    uint64_t rax26;
    uint64_t r10_27;
    uint64_t r8_28;
    uint1_t cf29;
    int1_t below_or_equal30;
    uint32_t r9d31;
    uint64_t rax32;
    int64_t r13_33;
    uint32_t r14d34;
    uint32_t ebx35;
    int64_t rdx36;
    uint32_t ecx37;
    int64_t r9_38;
    uint64_t r14_39;
    uint64_t r14_40;
    uint64_t rdx41;
    uint64_t rax42;
    uint64_t rax43;
    uint64_t rdx44;
    int16_t cx45;
    uint64_t rsi46;
    uint32_t r8d47;
    int64_t rdi48;
    int64_t rdx49;
    uint64_t r9_50;
    uint64_t r12_51;
    uint32_t tmp32_52;
    uint64_t rbx53;
    int32_t r11d54;
    uint64_t r10_55;
    uint64_t rbp56;
    uint64_t r9_57;
    uint64_t rsi58;
    uint64_t rax59;
    int64_t rbx60;
    int64_t rdi61;
    uint16_t ax62;
    uint64_t r9_63;
    uint64_t r8_64;
    uint64_t r8_65;
    uint64_t r9_66;
    uint64_t r14_67;
    int64_t rcx68;
    uint64_t r10_69;
    int32_t r12d70;
    int64_t rdi71;
    uint16_t ax72;
    uint64_t rbx73;
    uint64_t r14_74;
    int64_t r8_75;
    uint64_t rdx76;
    uint64_t rax77;
    int32_t eax78;
    int64_t rbp79;
    int64_t rcx80;
    uint1_t cf81;
    uint16_t r12w82;
    uint16_t cx83;
    int1_t cf84;
    int64_t rax85;
    int32_t r12d86;
    uint32_t r13d87;
    uint64_t rax88;
    int64_t rdx89;
    uint64_t r10_90;
    uint32_t edi91;
    int32_t r13d92;
    uint16_t tmp16_93;
    uint1_t cf94;
    uint64_t r8_95;
    uint32_t r10d96;
    uint64_t rax97;
    uint64_t r11_98;
    uint64_t r8_99;
    uint64_t r14_100;
    int64_t rbp101;
    uint16_t r14w102;
    uint64_t r11_103;
    uint32_t tmp32_104;
    int64_t rcx105;
    int64_t rbp106;
    uint64_t rcx107;
    int16_t ax108;
    uint64_t r13_109;
    unsigned char tmp8_110;
    signed char tmp8_111;
    uint64_t r8_112;
    uint64_t r11_113;
    uint64_t r14_114;
    int64_t r9_115;
    uint64_t r11_116;
    unsigned char tmp8_117;
    uint32_t r12d118;
    uint64_t rax119;
    int64_t rcx120;
    int64_t rdi121;
    uint64_t r14_122;
    uint64_t r9_123;
    uint64_t r14_124;
    int64_t r12_125;
    int64_t r9_126;
    uint32_t eax127;
    uint32_t edx128;
    uint16_t tmp16_129;
    uint16_t r14w130;
    int64_t r9_131;
    int64_t rax132;
    unsigned char tmp8_133;
    uint1_t cf134;
    uint64_t r15_135;
    uint64_t r10_136;
    int64_t rcx137;
    uint64_t r13_138;
    int64_t rax139;
    unsigned char cl140;
    uint64_t r11_141;
    int64_t rdx142;
    int64_t rax143;
    int64_t rbx144;
    int64_t r11_145;
    int64_t rax146;
    int64_t rdx147;
    unsigned char dh148;
    uint32_t ebx149;
    int64_t rdx150;
    uint64_t r11_151;
    uint32_t edx152;
    int64_t rax153;
    uint64_t r8_154;
    int64_t rcx155;
    int64_t r15_156;
    uint1_t zf157;
    uint1_t less_or_equal158;
    int64_t rdx159;
    int64_t rbx160;
    uint64_t rsi161;
    int64_t r13_162;
    uint64_t r9_163;
    uint32_t ebp164;
    uint16_t r15w165;
    uint16_t r10w166;
    int32_t edx167;
    uint64_t rcx168;
    int64_t r15_169;
    uint32_t eax170;
    uint64_t rbp171;
    uint64_t r13_172;
    int64_t rdi173;
    int64_t rdx174;
    uint32_t r9d175;
    int32_t eax176;
    uint64_t r15_177;
    int64_t rax178;
    int64_t rax179;
    uint64_t r11_180;
    uint32_t edi181;
    int1_t zf182;
    uint32_t r14d183;
    uint64_t rbp184;
    uint32_t r12d185;
    int32_t edx186;
    uint1_t zf187;
    uint64_t rbx188;
    int64_t r11_189;
    int64_t rax190;
    uint64_t rax191;
    uint64_t rsi192;
    int64_t r9_193;
    uint64_t r13_194;
    int64_t r8_195;
    int64_t rbp196;
    int64_t r12_197;
    int1_t less_or_equal198;
    uint64_t r10_199;
    int64_t r10_200;
    uint32_t eax201;
    int32_t edx202;
    unsigned char dl203;
    unsigned char bl204;
    uint16_t ax205;
    int64_t rdi206;
    int64_t r11_207;
    int64_t rcx208;
    unsigned char dl209;
    uint64_t r8_210;
    int64_t rax211;
    int64_t rax212;
    uint64_t r10_213;
    uint64_t rcx214;
    uint64_t r9_215;
    uint64_t r13_216;
    int64_t rbx217;
    uint64_t rcx218;
    int64_t r14_219;
    uint64_t r13_220;
    unsigned char tmp8_221;
    uint32_t eax222;
    int32_t r9d223;
    unsigned char cl224;
    int32_t edx225;
    int64_t rdi226;
    uint16_t r10w227;
    int64_t rbx228;
    uint16_t tmp16_229;
    int64_t rcx230;
    uint64_t r9_231;
    uint64_t r8_232;
    int64_t rax233;
    uint64_t r13_234;
    int64_t rdx235;
    uint64_t r8_236;
    uint64_t rcx237;
    unsigned char bl238;
    uint64_t rsi239;
    int64_t rax240;
    int64_t rsi241;
    int64_t rdi242;
    uint64_t r8_243;
    int64_t r13_244;

    rcx7 = 0xc3b4b60f53bf696a;
    rdx8 = 0x80ecf23f5541b847;
    rsi9 = 0xc5b03db7d9da75d2;
    rdi10 = 0x4c45a7252be96da6;
    r10_11 = 0x9c52677565c1604a;
    r11_12 = 0x3b9fbdfffbfeffeb;
    __asm__("ror r10, cl");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx8) + 1) = reinterpret_cast<signed char>(0x80 >> 0x6a);
    __asm__("rol rbp, 0xcf");
    *reinterpret_cast<uint32_t*>(&rbp13) = 0x85682f5e;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp13) + 4) = 0;
    __asm__("rcr r10, cl");
    cx14 = 0x6969;
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r10_11) = 0x1a68;
    }
    *reinterpret_cast<int16_t*>(&rax15) = 0x4ec;
    __asm__("bsf r13, r11");
    __asm__("rol rdi, 0xad");
    __asm__("bts rsi, r10");
    __asm__("shrd rax, r12, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx7) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&cx14) + 1) ^ 37) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax15) + 1));
    __asm__("rcl r14b, 1");
    *reinterpret_cast<unsigned char*>(&rcx7) = reinterpret_cast<unsigned char>(0x69 & *reinterpret_cast<unsigned char*>(&r10_11));
    __asm__("shrd ecx, r9d, 0x1");
    *reinterpret_cast<uint32_t*>(&rcx16) = *reinterpret_cast<uint32_t*>(&rcx7) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = 0;
    __asm__("rcr r13b, 1");
    rdx17 = rdx8 - 0xdde2d34d517f55a;
    __asm__("ror rax, cl");
    r10_18 = reinterpret_cast<uint64_t>(r10_11 - 0x2280aba3) >> -98;
    *reinterpret_cast<uint32_t*>(&r8_19) = 0x71e6bb32 >> *reinterpret_cast<unsigned char*>(&rcx16);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_19) + 4) = 0;
    __asm__("shld r15, rdi, 0xc2");
    *reinterpret_cast<uint16_t*>(&rbp13) = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(0x2f5e) >> 49);
    *reinterpret_cast<uint32_t*>(&r13_20) = 0x682b7bee;
    *reinterpret_cast<unsigned char*>(&rcx16) = 4;
    __asm__("shld r13W, si, cl");
    *reinterpret_cast<int16_t*>(&r8_19) = reinterpret_cast<int16_t>(~*reinterpret_cast<int16_t*>(&r8_19));
    __asm__("rol dl, 1");
    rcx21 = rcx16 + 0xe3c79ec;
    __asm__("ror r13, cl");
    __asm__("rol sil, cl");
    tmp64_22 = r8_19 - 0x52c37f46;
    cf23 = reinterpret_cast<uint1_t>(tmp64_22 < r8_19);
    __asm__("btc r11w, r15w");
    __asm__("bts r10, 0x49");
    cf24 = reinterpret_cast<uint1_t>(0x61a720bd < 0x4c9673a6 + cf23);
    *reinterpret_cast<uint32_t*>(&r15_25) = 0x61a720bd - (0x4c9673a6 + cf24);
    if (*reinterpret_cast<int32_t*>(&r15_25) >= reinterpret_cast<int32_t>(static_cast<uint32_t>(cf24))) {
        r15_25 = r10_18;
    }
    if (reinterpret_cast<int32_t>(0x61a720bd) > reinterpret_cast<int32_t>(0x4c9673a6 + cf23)) {
    }
    *reinterpret_cast<int32_t*>(&rax26) = 0xc4251f8e;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = 0;
    __asm__("ror r9d, 0x45");
    r10_27 = r10_18 * 0xffffffff8679007b;
    *reinterpret_cast<unsigned char*>(&rdx17) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx17) - 55) + __intrinsic());
    r8_28 = tmp64_22 - 0x2bd4b36c + 1;
    *reinterpret_cast<unsigned char*>(&r13_20) = reinterpret_cast<uint1_t>(!__intrinsic());
    cf29 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax26) + 1) < 0xbc);
    below_or_equal30 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax26) + 1) <= reinterpret_cast<unsigned char>(69 - cf29);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax26) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax26) + 1) - reinterpret_cast<unsigned char>(69 - cf29));
    *reinterpret_cast<uint16_t*>(&rsi9) = *reinterpret_cast<uint16_t*>(&r15_25);
    if (!below_or_equal30) {
        *reinterpret_cast<uint16_t*>(&rcx21) = *reinterpret_cast<uint16_t*>(&rsi9);
    }
    r9d31 = 0xa178bb62 - (*reinterpret_cast<uint32_t*>(&r13_20) + reinterpret_cast<uint1_t>(0xa178bb62 < *reinterpret_cast<uint32_t*>(&r13_20)));
    __asm__("rcl dh, 1");
    *reinterpret_cast<signed char*>(&r10_27) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r10_27) << *reinterpret_cast<unsigned char*>(&rcx21));
    __asm__("shld esi, ebp, 0x1");
    __asm__("rcl eax, cl");
    rax32 = rax26 >> -36;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx21) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx21) + 1) + 0x69);
    __asm__("xadd cl, cl");
    *reinterpret_cast<uint32_t*>(&r13_33) = *reinterpret_cast<uint32_t*>(&r13_20) & -(*reinterpret_cast<int32_t*>(&r8_28) + *reinterpret_cast<int32_t*>(&rdx17) + cf29);
    r14d34 = *reinterpret_cast<unsigned char*>(&rbp13);
    *reinterpret_cast<unsigned char*>(&rax32) = __intrinsic();
    ebx35 = 0x846b4868;
    __asm__("xadd r14d, ebp");
    __asm__("shld r10, r9, cl");
    __asm__("shld rbx, r9, cl");
    rdx36 = rsi9 - 1 >> *reinterpret_cast<unsigned char*>(&rcx21);
    __asm__("xadd esi, r10d");
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>((*reinterpret_cast<uint16_t*>(&r9d31) ^ 0xc36c) == 0))) {
        r14d34 = *reinterpret_cast<uint32_t*>(&r13_33);
    }
    __asm__("ror r14, 1");
    *reinterpret_cast<unsigned char*>(&r13_33) = 0;
    ecx37 = *reinterpret_cast<int32_t*>(&rcx21) - 0xe6dd963 + 1;
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&rbp13) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax32) >> -24);
    }
    __asm__("bsr r15, r9");
    __asm__("bsf esi, edi");
    __asm__("rol r10b, 1");
    *reinterpret_cast<uint16_t*>(&r10_27) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_27) * 0x5a7c);
    __asm__("lahf ");
    __asm__("btr r10w, bx");
    __asm__("bsr r8d, edi");
    __asm__("ror ax, 1");
    __asm__("rcr dil, 1");
    *reinterpret_cast<int32_t*>(&r9_38) = static_cast<int32_t>((rdx17 >> 1) + r10_27 * 8 + 0xd5);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_38) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r14d34) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14d34) << 1) + *reinterpret_cast<uint16_t*>(&r13_33)) + 1);
    *reinterpret_cast<uint32_t*>(&r14_39) = r14d34 ^ 0x2ae89687;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_39) + 4) = 0;
    __asm__("ror r10w, 0x4a");
    *reinterpret_cast<unsigned char*>(&ebx35) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx36) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ebx35) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdx36) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ebx35) + 1))))));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ebx35) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ebx35) + 1) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx37) + 1));
    *reinterpret_cast<uint16_t*>(&rdi10) = *reinterpret_cast<unsigned char*>(&ecx37);
    __asm__("rcr ebp, 0x25");
    r14_40 = r14_39 | 0xc000000000000000;
    rdx41 = 0x20b21ef0 % r14_40;
    rax42 = 0x20b21ef0 / r14_40;
    *reinterpret_cast<int32_t*>(&rax43) = *reinterpret_cast<int32_t*>(&rax42) * *reinterpret_cast<int32_t*>(&rdx41);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax43) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx44) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx44) + 4) = 0;
    cx45 = static_cast<int16_t>(rdi10 + rdi10 * 2 + 0x4cf1c4ad);
    __asm__("btr rdi, r11");
    __asm__("bsr r13d, r15d");
    *reinterpret_cast<unsigned char*>(&ecx37) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&cx45) - 0x79) + 1);
    __asm__("btc r10, r11");
    __asm__("ror ebp, cl");
    *reinterpret_cast<signed char*>(&rax43) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rax43) << 1);
    __asm__("ror r14w, 0x25");
    *reinterpret_cast<unsigned char*>(&rbp13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp13) >> *reinterpret_cast<unsigned char*>(&ecx37));
    __asm__("bsr rdi, r15");
    __asm__("shld ax, r13W, 0x1");
    *reinterpret_cast<uint16_t*>(&r15_25) = 0x9437;
    rsi46 = 0x9437;
    if (1 == __intrinsic()) {
        r10_27 = rdx44;
    }
    __asm__("shld rcx, r15, 0x55");
    r8d47 = *reinterpret_cast<uint16_t*>(&ebx35);
    __asm__("ror r13W, 0x31");
    __asm__("shrd eax, edi, cl");
    __asm__("bsr r13W, di");
    *reinterpret_cast<int32_t*>(&rdi48) = *reinterpret_cast<int32_t*>(&rdx44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi48) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx49) = *reinterpret_cast<int32_t*>(&rdi10);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx49) + 4) = 0;
    __asm__("ror r13d, 0xd0");
    *reinterpret_cast<signed char*>(&rdx49) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rdx49) - 24);
    __asm__("bsf ecx, edx");
    *reinterpret_cast<uint16_t*>(&r11_12) = 0x747f;
    r9_50 = r9_38 - 0x3b9fbdfffbfe747f;
    __asm__("rol rsi, 0xf3");
    __asm__("cdq ");
    *reinterpret_cast<uint16_t*>(&r13_33) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_33) + *reinterpret_cast<uint16_t*>(&ebx35));
    if (*reinterpret_cast<int16_t*>(&r13_33) < reinterpret_cast<int16_t>(0) == __intrinsic()) {
        r9_50 = rbp13;
    }
    *reinterpret_cast<unsigned char*>(&rsi46) = reinterpret_cast<unsigned char>(55 >> *reinterpret_cast<unsigned char*>(&ecx37));
    __asm__("shld r8d, r9d, 0x1");
    *reinterpret_cast<unsigned char*>(&r11_12) = reinterpret_cast<uint1_t>(!__intrinsic());
    if (__undefined()) {
        *reinterpret_cast<uint16_t*>(&rbp13) = *reinterpret_cast<uint16_t*>(&r10_27);
    }
    if (!__undefined()) {
        *reinterpret_cast<int32_t*>(&r9_50) = *reinterpret_cast<int32_t*>(&rdi48);
    }
    r12_51 = reinterpret_cast<uint64_t>(0xf221d2cb2ae89687 >> *reinterpret_cast<unsigned char*>(&ecx37));
    *reinterpret_cast<uint16_t*>(&r8d47) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8d47) * 0x886f) >> 1);
    __asm__("xadd al, bh");
    if (0) {
        tmp32_52 = *reinterpret_cast<uint32_t*>(&r14_40);
        *reinterpret_cast<uint32_t*>(&r14_40) = r8d47;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_40) + 4) = 0;
        r8d47 = tmp32_52;
    }
    *reinterpret_cast<uint32_t*>(&rbx53) = ebx35 - (0x2bbee776 + reinterpret_cast<uint1_t>(ebx35 < 0x2bbee776 + __intrinsic()));
    __asm__("bsr r13, rsi");
    r11d54 = *reinterpret_cast<int32_t*>(&r11_12) * 0xcd01dc5a;
    *reinterpret_cast<uint16_t*>(&r12_51) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_51) - reinterpret_cast<uint16_t>(0x789e - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r12_51) < 0x8763)));
    __asm__("rcr bpl, 1");
    __asm__("rol r9d, 1");
    r10_55 = rdx49 + rax43;
    *reinterpret_cast<signed char*>(&r14_40) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r14_40) + *reinterpret_cast<signed char*>(&r11d54));
    *reinterpret_cast<unsigned char*>(&rbp13) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&r14_40) >= 0);
    __asm__("btc r13d, 0x90");
    *reinterpret_cast<uint16_t*>(&r14_40) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_40) | *reinterpret_cast<uint16_t*>(&rbp13));
    __asm__("rcr ecx, cl");
    if (0) {
    }
    if (0) {
        rbx53 = r12_51;
    }
    *reinterpret_cast<uint16_t*>(&rax43) = reinterpret_cast<uint16_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&cx45) + 1) * 0xc183);
    *reinterpret_cast<uint16_t*>(&rbp13) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&rax43)));
    __asm__("shrd r8, rbp, 0x1");
    *reinterpret_cast<unsigned char*>(&rbx53) = 0xff;
    if (*reinterpret_cast<uint16_t*>(&r9_50) == *reinterpret_cast<uint16_t*>(&r14_40)) {
        *reinterpret_cast<uint16_t*>(&r9_50) = *reinterpret_cast<uint16_t*>(&r14_40);
    }
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r14_40) = *reinterpret_cast<uint32_t*>(&rbp13);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_40) + 4) = 0;
    }
    *reinterpret_cast<uint32_t*>(&rbp56) = *reinterpret_cast<uint32_t*>(&rbp13) << 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp56) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r9_57) = *reinterpret_cast<int32_t*>(&r9_50);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_57) + 4) = 0;
    __asm__("rol r13b, cl");
    __asm__("shld r15w, ax, 0x1");
    __asm__("rcr di, 0xf0");
    __asm__("bts r14, r15");
    rsi58 = rsi46 + r10_55 + __intrinsic();
    rax59 = rax43 * r12_51;
    *reinterpret_cast<uint32_t*>(&rbx60) = *reinterpret_cast<uint32_t*>(&rbx53) - (0x14961841 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbx53) < 0xeb69e7c0));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx60) + 4) = 0;
    __asm__("bsr bp, r10w");
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int64_t>(&rax59) + 1)) {
    }
    rdi61 = rdi48 << *reinterpret_cast<unsigned char*>(&ecx37);
    ax62 = reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&rax59) * reinterpret_cast<uint16_t>(static_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rdi61) - *reinterpret_cast<unsigned char*>(&rbx60)))));
    r9_63 = r9_57 | rbp56;
    __asm__("rcr ebp, 1");
    *reinterpret_cast<unsigned char*>(&r15_25) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(0x68 << *reinterpret_cast<unsigned char*>(&ecx37)) + *reinterpret_cast<unsigned char*>(&rbx60));
    __asm__("btr ecx, esi");
    *reinterpret_cast<uint32_t*>(&r8_64) = r8d47 >> *reinterpret_cast<unsigned char*>(&ecx37);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_64) + 4) = 0;
    if (!__intrinsic()) {
    }
    r8_65 = r8_64 | 0xffffffffcf9286fc;
    __asm__("ror bl, 1");
    r9_66 = *reinterpret_cast<int32_t*>(&r9_63) + *reinterpret_cast<uint32_t*>(&r15_25) - 0x18caa4dc;
    __asm__("rcr dh, 0xe5");
    *reinterpret_cast<uint16_t*>(&r14_40) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx37) + 1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&cx45) + 1);
    r14_67 = r14_40 << 1;
    *reinterpret_cast<uint16_t*>(&r12_51) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_51) >> 1);
    *reinterpret_cast<uint32_t*>(&rcx68) = ecx37 + ecx37 + __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx68) + 4) = 0;
    __asm__("rcr r11, 1");
    *reinterpret_cast<unsigned char*>(&r14_67) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r12_51)));
    __asm__("rol al, 1");
    r10_69 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&r9_57))) << 1;
    *reinterpret_cast<unsigned char*>(&ax62) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ax62) - *reinterpret_cast<signed char*>(&r9_66));
    r12d70 = 0;
    __asm__("xadd r10, r11");
    __asm__("shld r9, r12, 0x1");
    *reinterpret_cast<int16_t*>(&rcx68) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r8_65) * 0xeb82);
    __asm__("bts r9w, si");
    __asm__("rol r9, 0x50");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx60) + 1) = 0xff;
    *reinterpret_cast<uint16_t*>(&r10_69) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_69) >> *reinterpret_cast<signed char*>(&rcx68));
    *reinterpret_cast<uint32_t*>(&rdi71) = ax62;
    *reinterpret_cast<unsigned char*>(&ax62) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ax62) | 0xc0);
    ax72 = reinterpret_cast<uint16_t>(ax62 & 0x3fff);
    *reinterpret_cast<uint16_t*>(&rax59) = reinterpret_cast<uint16_t>(ax72 / static_cast<int16_t>(*reinterpret_cast<signed char*>(&ax72)));
    rbx73 = rbx60 + rsi58;
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r12d70) = *reinterpret_cast<uint16_t*>(&r11d54);
    }
    r14_74 = r14_67 | 0xc000000000000000;
    r8_75 = 0x3fffffffffffffff;
    rdx76 = rax59 % r14_74;
    rax77 = rax59 / r14_74;
    eax78 = *reinterpret_cast<int16_t*>(&rax77);
    *reinterpret_cast<uint32_t*>(&rbp79) = 10 | *reinterpret_cast<uint32_t*>(&rbp56) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&rbp56) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&rbp56) << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp79) + 4) = 0;
    rcx80 = rcx68 - 0x647b34a0;
    __asm__("rcl al, 1");
    __asm__("rol di, 0x4d");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx80) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx80) + 1) >> *reinterpret_cast<unsigned char*>(&rcx80));
    __asm__("btr r15, 0x8a");
    cf81 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r12d70) < 0x4492);
    r12w82 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12d70) - reinterpret_cast<uint16_t>(0x4492 + cf81));
    if (reinterpret_cast<int16_t>(r12w82) >= reinterpret_cast<int16_t>(static_cast<uint32_t>(cf81))) {
        *reinterpret_cast<uint32_t*>(&r10_69) = *reinterpret_cast<uint32_t*>(&rcx80);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_69) + 4) = 0;
    }
    if (r12w82 != static_cast<uint32_t>(cf81)) {
        *reinterpret_cast<uint16_t*>(&r8_75) = *reinterpret_cast<uint16_t*>(&rbp79);
    }
    __asm__("rcl ebp, 1");
    __asm__("rcr r8d, 0x0");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&cx83) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx80) + 1) >> 0x99);
    cf84 = *reinterpret_cast<unsigned char*>(&rdx76) < *reinterpret_cast<unsigned char*>(&eax78);
    __asm__("rcr r13, 1");
    if (cf84) {
        *reinterpret_cast<uint16_t*>(&r10_69) = *reinterpret_cast<uint16_t*>(&r10_69);
    }
    __asm__("rcr ebp, 1");
    __asm__("ror r15w, 1");
    *reinterpret_cast<int32_t*>(&rax85) = eax78 - r11d54;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax85) + 4) = 0;
    __asm__("btr r10d, 0x79");
    __asm__("shld r13, rax, 0x1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx73) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx73) + 1) >> 9);
    r12d86 = static_cast<int32_t>(rbp79 + 0xc7e695d);
    __asm__("bsf rbp, r12");
    *reinterpret_cast<uint16_t*>(&rax85) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax85) - 0x5ed3)));
    *reinterpret_cast<unsigned char*>(&r8_75) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_75) >> *reinterpret_cast<unsigned char*>(&rcx80));
    *reinterpret_cast<uint16_t*>(&rsi58) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax85) + 1)));
    __asm__("shld r8w, bp, cl");
    r13d87 = *reinterpret_cast<unsigned char*>(&r12d86);
    __asm__("ror r13W, cl");
    *reinterpret_cast<unsigned char*>(&cx83) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx80) & 15) & 15);
    __asm__("shrd r13W, si, cl");
    __asm__("rcl cx, 1");
    if (1) {
    }
    if (1) {
        *reinterpret_cast<uint16_t*>(&rsi58) = *reinterpret_cast<uint16_t*>(&r8_75);
    }
    __asm__("rcr r12b, 1");
    __asm__("rcl r15w, 1");
    *reinterpret_cast<uint16_t*>(&rcx80) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(cx83));
    *reinterpret_cast<uint16_t*>(&rdi71) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi71) - reinterpret_cast<uint16_t>(0x3193 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rdi71) < 0xce6d)));
    *reinterpret_cast<signed char*>(&rsi58) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rsi58) << 1);
    __asm__("rol r13b, 0x9b");
    rax88 = rax85 * rbx73;
    rdx89 = __intrinsic();
    r10_90 = r10_69 >> 1;
    __asm__("bsf r11d, r12d");
    __asm__("btr rbx, 0x76");
    __asm__("rcl eax, cl");
    __asm__("cwd ");
    *reinterpret_cast<unsigned char*>(&r12d86) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12d86) & 0xd7);
    __asm__("rcr edx, cl");
    __asm__("shrd rbp, rax, cl");
    edi91 = *reinterpret_cast<uint32_t*>(&rdi71) - 0xc3b17149;
    __asm__("xadd cl, dl");
    __asm__("rol r8b, 0xda");
    *reinterpret_cast<signed char*>(&rbx73) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbx73) - *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax88) + 1));
    *reinterpret_cast<unsigned char*>(&rcx80) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx80) - *reinterpret_cast<signed char*>(&rbx73));
    *reinterpret_cast<unsigned char*>(&edi91) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edi91) ^ 0xd3);
    if (!__intrinsic()) {
        r13d87 = *reinterpret_cast<uint32_t*>(&rdx89);
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx89) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx89) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx73) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx89) + 1) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx73) + 1))))));
    r13d92 = *reinterpret_cast<int32_t*>(&r8_75);
    tmp16_93 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12d86) + *reinterpret_cast<uint16_t*>(&rcx80)) + 1);
    cf94 = reinterpret_cast<uint1_t>(tmp16_93 < *reinterpret_cast<uint16_t*>(&r12d86));
    *reinterpret_cast<uint16_t*>(&r12d86) = tmp16_93;
    __asm__("btr di, 0xfa");
    *reinterpret_cast<uint16_t*>(&edi91) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi91) - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rdx89) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&edi91) < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rdx89) + cf94))));
    *reinterpret_cast<uint32_t*>(&r8_95) = r13d87 + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_95) + 4) = 0;
    if (!*reinterpret_cast<uint32_t*>(&r8_95)) {
        *reinterpret_cast<int32_t*>(&rbx73) = r11d54;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx73) + 4) = 0;
    }
    __asm__("shld r15d, r11d, 0x6b");
    *reinterpret_cast<uint16_t*>(&r8_95) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx80) * 0xfac);
    r10d96 = *reinterpret_cast<uint32_t*>(&r10_90) >> *reinterpret_cast<unsigned char*>(&rcx80);
    rax97 = rax88 | rbx73;
    *reinterpret_cast<unsigned char*>(&r12d86) = -*reinterpret_cast<unsigned char*>(&r12d86);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx80) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx80) + 1) + *reinterpret_cast<signed char*>(&rbx73));
    __asm__("btr r11, 0xc3");
    *reinterpret_cast<uint16_t*>(&r8_95) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_95) + *reinterpret_cast<int16_t*>(&r13d92));
    __asm__("ror r11w, 0x1f");
    r11_98 = *reinterpret_cast<unsigned char*>(&r13d92);
    r8_99 = r8_95 ^ 0xffffffffd58822a3;
    *reinterpret_cast<unsigned char*>(&rax97) = 0;
    r14_100 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rsi58) + 0x49ecb4d1);
    if (__intrinsic()) {
    }
    __asm__("ror r15d, 0x52");
    __asm__("xadd eax, r15d");
    rbp101 = rbp79 * 0x4299600c;
    r14w102 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_100) - 1);
    __asm__("rol r13d, 1");
    *reinterpret_cast<uint32_t*>(&r11_103) = *reinterpret_cast<int32_t*>(&r11_98) + *reinterpret_cast<uint32_t*>(&rcx80) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_103) + 4) = 0;
    tmp32_104 = *reinterpret_cast<uint32_t*>(&rcx80) + r10d96 + 1;
    *reinterpret_cast<uint32_t*>(&rcx105) = tmp32_104;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx105) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rbp106) = *reinterpret_cast<int32_t*>(&rbp101) + 0x3be2dae8 + reinterpret_cast<uint1_t>(tmp32_104 < *reinterpret_cast<uint32_t*>(&rcx80));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp106) + 4) = 0;
    *reinterpret_cast<int16_t*>(&rcx105) = reinterpret_cast<int16_t>(~*reinterpret_cast<int16_t*>(&rcx105));
    rcx107 = (rcx105 << *reinterpret_cast<unsigned char*>(&rcx105)) - rsi58;
    ax108 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax97) << *reinterpret_cast<unsigned char*>(&rcx107));
    __asm__("rol bpl, 0x50");
    *reinterpret_cast<int32_t*>(&r13_109) = r13d92 - *reinterpret_cast<int32_t*>(&rcx107);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_109) + 4) = 0;
    __asm__("rcl ebp, 0x20");
    __asm__("ror r12w, 1");
    tmp8_110 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ax108) + *reinterpret_cast<unsigned char*>(&rcx107))));
    *reinterpret_cast<unsigned char*>(&rax97) = tmp8_110;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(tmp8_110 < *reinterpret_cast<unsigned char*>(&ax108)) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rax97) == 0))) {
    }
    __asm__("rcr r8w, 0x3b");
    __asm__("shrd rbp, r9, 0x1");
    __asm__("rcl r12d, 0x28");
    __asm__("shld ebx, r9d, cl");
    __asm__("rol rbp, 1");
    if (*reinterpret_cast<signed char*>(&r14w102) == *reinterpret_cast<signed char*>(&rbx73)) {
        tmp8_111 = *reinterpret_cast<signed char*>(&r14w102);
        *reinterpret_cast<signed char*>(&r14w102) = *reinterpret_cast<signed char*>(&rbx73);
        *reinterpret_cast<signed char*>(&rbx73) = tmp8_111;
    }
    __asm__("btr rax, 0x2b");
    *reinterpret_cast<unsigned char*>(&r13_109) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_109) | 9);
    __asm__("rcr r9w, 1");
    __asm__("bsr r8d, esi");
    *reinterpret_cast<int16_t*>(&r8_99) = reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r8_99) << *reinterpret_cast<unsigned char*>(&rcx80)) - 1);
    r8_112 = r8_99 * 0xffffffff9de2c12f;
    r11_113 = r11_103 | r13_109;
    __asm__("shrd rbx, rdx, 0xe6");
    *reinterpret_cast<uint16_t*>(&r14_100) = reinterpret_cast<uint16_t>(r14w102 - reinterpret_cast<uint16_t>(0x4ea9 + reinterpret_cast<uint1_t>(r14w102 < 0x4ea9)));
    r14_114 = r14_100 - rbp106;
    __asm__("bts r8d, r10d");
    *reinterpret_cast<uint32_t*>(&r9_115) = *reinterpret_cast<uint32_t*>(&rdx89) * 0x876222fb;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_115) + 4) = 0;
    __asm__("rcr eax, 1");
    r11_116 = *reinterpret_cast<unsigned char*>(&r11_113);
    if (*reinterpret_cast<unsigned char*>(&rax97) == *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax108) + 1)) {
        tmp8_117 = *reinterpret_cast<unsigned char*>(&rax97);
        *reinterpret_cast<unsigned char*>(&rax97) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax108) + 1);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax108) + 1) = tmp8_117;
    }
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx73) + 1) == *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax108) + 1)) {
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax108) + 1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx73) + 1);
    }
    *reinterpret_cast<uint16_t*>(&r12d86) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r12d86) >> -50);
    __asm__("rcr r9b, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax97) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax108) + 1) & 0xd6);
    r12d118 = r12d86 - 0x3c7bf1d1;
    rax119 = rax97 << static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rbx73) <= reinterpret_cast<int64_t>(0xffffffffabbb94eb)));
    *reinterpret_cast<int32_t*>(&rcx120) = *reinterpret_cast<signed char*>(&edi91);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx120) + 4) = 0;
    __asm__("btc r15w, r11w");
    *reinterpret_cast<unsigned char*>(&r10d96) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10d96) | 60) & *reinterpret_cast<unsigned char*>(&r13_109)) + *reinterpret_cast<signed char*>(&r11_116));
    *reinterpret_cast<uint16_t*>(&r10d96) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10d96) | *reinterpret_cast<uint16_t*>(&rbp106));
    __asm__("ror cx, cl");
    *reinterpret_cast<uint32_t*>(&rdi121) = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(edi91 - r12d118) >> 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi121) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r11_116) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_116) << 1);
    *reinterpret_cast<int32_t*>(&r14_122) = *reinterpret_cast<int32_t*>(&r14_114) - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_122) + 4) = 0;
    *reinterpret_cast<signed char*>(&r8_112) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r8_112) << *reinterpret_cast<unsigned char*>(&rcx120));
    r9_123 = r9_115 - r8_112;
    *reinterpret_cast<signed char*>(&r8_112) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&r8_112));
    r14_124 = r14_122 ^ r13_109;
    __asm__("rcl r11b, cl");
    __asm__("shrd r9d, edi, 0xe3");
    __asm__("ror r8b, cl");
    __asm__("bts rsi, 0x82");
    *reinterpret_cast<uint32_t*>(&r12_125) = *reinterpret_cast<uint32_t*>(&r9_123);
    *reinterpret_cast<int32_t*>(&r9_126) = reinterpret_cast<int32_t>(-r12d118);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_126) + 4) = 0;
    __asm__("ror r11d, cl");
    *reinterpret_cast<unsigned char*>(&r12_125) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_125) ^ 0xfc);
    eax127 = *reinterpret_cast<uint32_t*>(&rax119) | 0xc0000000;
    edx128 = eax127 % eax127;
    if (*reinterpret_cast<uint16_t*>(&r12_125) == *reinterpret_cast<uint16_t*>(&r11_116)) {
        tmp16_129 = *reinterpret_cast<uint16_t*>(&r12_125);
        *reinterpret_cast<uint16_t*>(&r12_125) = *reinterpret_cast<uint16_t*>(&r11_116);
        *reinterpret_cast<uint16_t*>(&r11_116) = tmp16_129;
    }
    *reinterpret_cast<uint16_t*>(&rsi58) = *reinterpret_cast<uint16_t*>(&r12_125);
    r14w130 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_124) & 0xdae8) + *reinterpret_cast<uint16_t*>(&edx128)) + 1);
    r9_131 = r9_126;
    if (r14w130) {
        *reinterpret_cast<uint32_t*>(&r12_125) = *reinterpret_cast<uint32_t*>(&r11_116);
    }
    *reinterpret_cast<uint16_t*>(&r9_131) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_131) + 0x22e9) + 1);
    if (!*reinterpret_cast<uint16_t*>(&r9_131)) {
        rcx120 = r9_131;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx120) + 1) = 0;
    rax132 = reinterpret_cast<int32_t>(eax127 / eax127);
    *reinterpret_cast<uint16_t*>(&rbp106) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&rdi121)));
    __asm__("rcl dx, 1");
    *reinterpret_cast<unsigned char*>(&rcx120) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx120) & 15);
    __asm__("shld r12w, r14w, cl");
    __asm__("cwd ");
    __asm__("rol r15, cl");
    __asm__("btc bx, r10w");
    tmp8_133 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax132) + 1) + *reinterpret_cast<signed char*>(&edx128)) + 1);
    cf134 = reinterpret_cast<uint1_t>(tmp8_133 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax132) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax132) + 1) = tmp8_133;
    r15_135 = 0x3be2dae8 - (0x3be2dae8 + reinterpret_cast<uint1_t>(0x3be2dae8 < 0x3be2dae8 + cf134));
    __asm__("rcr rbp, 0x3d");
    __asm__("ror r8, 1");
    *reinterpret_cast<uint32_t*>(&r10_136) = r10d96 + *reinterpret_cast<uint32_t*>(&rdi121) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_136) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rdi121) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi121) | 0x316a);
    rcx137 = rcx120 >> *reinterpret_cast<unsigned char*>(&rcx120);
    __asm__("ror r8, 1");
    *reinterpret_cast<uint16_t*>(&r12_125) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r12_125) >> *reinterpret_cast<unsigned char*>(&rcx137));
    __asm__("shld r10, rax, cl");
    r13_138 = *reinterpret_cast<uint32_t*>(&r10_136);
    rax139 = rax132 - 1;
    cl140 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx137) & 15);
    __asm__("shrd cx, r12w, cl");
    __asm__("ror r14, 0x40");
    __asm__("shrd rax, rdx, 0x1");
    *reinterpret_cast<uint16_t*>(&edx128) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&r14w130)));
    __asm__("xadd r14d, r11d");
    __asm__("rcr di, 1");
    r11_141 = r11_116 + 0x1088102b;
    *reinterpret_cast<int32_t*>(&rdx142) = reinterpret_cast<int32_t>(edx128) >> 0xffffff87;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx142) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rdi121) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi121) + 1);
    rax143 = *reinterpret_cast<int32_t*>(&rax139);
    rbx144 = *reinterpret_cast<int32_t*>(&r11_141);
    *reinterpret_cast<uint32_t*>(&r11_145) = *reinterpret_cast<int32_t*>(&r11_141) - *reinterpret_cast<uint32_t*>(&rdi121);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_145) + 4) = 0;
    __asm__("shrd rcx, r8, 0x57");
    if (cl140 == *reinterpret_cast<unsigned char*>(&rdi121)) {
        *reinterpret_cast<unsigned char*>(&rdi121) = cl140;
    }
    __asm__("shld r10d, r9d, 0x59");
    rax146 = *reinterpret_cast<int32_t*>(&rax143);
    __asm__("btc ebx, 0x81");
    __asm__("rol r8, cl");
    rdx147 = rdx142 + 1;
    __asm__("rol rbx, cl");
    __asm__("rol r13W, cl");
    dh148 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx147) + 1) << 1);
    *reinterpret_cast<uint16_t*>(&rcx137) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi121) * 0xaad9);
    ebx149 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbx144) - 0x1e3befba);
    __asm__("rcr ecx, 1");
    __asm__("btc ebx, 0x2c");
    __asm__("rcr di, 1");
    *reinterpret_cast<uint16_t*>(&r9_131) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_131) & *reinterpret_cast<uint16_t*>(&r8_112));
    __asm__("rcr esi, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx147) + 1) = reinterpret_cast<unsigned char>(dh148 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx147) + reinterpret_cast<uint1_t>(dh148 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rdx147))))));
    __asm__("shld rcx, r12, 0x97");
    *reinterpret_cast<uint32_t*>(&rdx150) = *reinterpret_cast<uint32_t*>(&rdx147) | *reinterpret_cast<uint32_t*>(&rcx137);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx150) + 4) = 0;
    r11_151 = reinterpret_cast<uint64_t>(r11_145 + rdx150);
    edx152 = *reinterpret_cast<uint32_t*>(&rdx150) - 0x29097783;
    rax153 = *reinterpret_cast<int32_t*>(&rax146);
    __asm__("shld ax, di, 0x1");
    *reinterpret_cast<uint32_t*>(&r8_154) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&r13_138)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_154) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rcx155) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ebx149) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx155) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r15_156) = *reinterpret_cast<uint32_t*>(&r15_135) >> 24 | *reinterpret_cast<uint32_t*>(&r15_135) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&r15_135) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&r15_135) << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_156) + 4) = 0;
    zf157 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&r15_156) == *reinterpret_cast<signed char*>(&edx152));
    less_or_equal158 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic()) | zf157);
    if (zf157) {
        *reinterpret_cast<signed char*>(&r15_156) = *reinterpret_cast<signed char*>(&edx152);
    }
    if (less_or_equal158) {
    }
    if (less_or_equal158) {
        r13_138 = r8_154;
    }
    rdx159 = *reinterpret_cast<signed char*>(&r13_138);
    if (less_or_equal158) {
        *reinterpret_cast<int16_t*>(&r8_154) = *reinterpret_cast<int16_t*>(&rcx155);
    }
    rbx160 = rdi121;
    rsi161 = rsi58 + 0xffffffffedacc1b3;
    __asm__("cwd ");
    r13_162 = *reinterpret_cast<signed char*>(&rsi161);
    *reinterpret_cast<uint16_t*>(&rsi161) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi161) >> -65);
    *reinterpret_cast<uint32_t*>(&r9_163) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r9_131) + 0x4268981d);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_163) + 4) = 0;
    __asm__("shrd r8w, r12w, 0xd");
    ebp164 = *reinterpret_cast<uint32_t*>(&rbp106) >> *reinterpret_cast<signed char*>(&rcx155);
    r15w165 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_156) | 0xd94b);
    __asm__("btc r15, 0x14");
    __asm__("shld bx, r11w, 0x1");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx155) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx155) + 1) - *reinterpret_cast<signed char*>(&rbx160));
    r10w166 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi121) * 0xe6ec);
    __asm__("rol r15w, 1");
    edx167 = *reinterpret_cast<int32_t*>(&rdx159) + 0x460cd8af;
    *reinterpret_cast<unsigned char*>(&r15w165) = reinterpret_cast<uint1_t>(edx167 == 0);
    __asm__("rcl ch, 1");
    *reinterpret_cast<uint16_t*>(&r10_136) = reinterpret_cast<uint16_t>(r10w166 - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r8_154) + reinterpret_cast<uint1_t>(r10w166 < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r8_154) + __intrinsic()))));
    *reinterpret_cast<unsigned char*>(&rax153) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax153) | 97);
    *reinterpret_cast<uint16_t*>(&rdi121) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi121) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi121) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rdi121) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rdi121))))));
    rcx168 = reinterpret_cast<uint64_t>(rcx155 - 0x552542e3);
    __asm__("lahf ");
    if (__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rax153) = edx167;
    }
    *reinterpret_cast<uint16_t*>(&r15_156) = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(r15w165) >> 1);
    if (__intrinsic()) {
        r10_136 = r9_163;
    }
    if (!(*reinterpret_cast<uint32_t*>(&r9_163) & 0x93070c8e)) {
        *reinterpret_cast<uint32_t*>(&rcx168) = *reinterpret_cast<uint32_t*>(&rsi161);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx168) + 4) = 0;
    }
    r15_169 = -r15_156;
    __asm__("rcr bx, 1");
    __asm__("shld r15, rcx, 0x8a");
    *reinterpret_cast<int16_t*>(&rax153) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax153) * *reinterpret_cast<signed char*>(&ebp164));
    __asm__("rcl r9d, 1");
    eax170 = *reinterpret_cast<int32_t*>(&rax153) * *reinterpret_cast<uint32_t*>(&r8_154);
    __asm__("rol ebp, 1");
    __asm__("rcr r14, 1");
    __asm__("rcr r11b, cl");
    *reinterpret_cast<uint32_t*>(&rbp171) = ebp164 ^ 0xf4702235;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp171) + 4) = 0;
    __asm__("rcl edi, 0xba");
    *reinterpret_cast<int32_t*>(&r13_172) = ~*reinterpret_cast<int32_t*>(&r13_162);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_172) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdi173) = *reinterpret_cast<int32_t*>(&rdi121) >> 97;
    __asm__("bsf ax, r10w");
    __asm__("bsr bp, r15w");
    *reinterpret_cast<uint16_t*>(&rdi173) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi173) | 0xc000);
    __asm__("btc di, bx");
    __asm__("rcr r8w, 1");
    __asm__("shrd rbx, r10, 0xa");
    *reinterpret_cast<unsigned char*>(&rcx168) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx168) & 15);
    __asm__("shrd r11w, bx, cl");
    rdx174 = 0x2a49afab720e9a9e;
    __asm__("rcr bp, 1");
    __asm__("btr edi, r15d");
    r9d175 = *reinterpret_cast<unsigned char*>(&rbp171);
    __asm__("btr rbp, rax");
    *reinterpret_cast<unsigned char*>(&rcx168) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx168) - *reinterpret_cast<unsigned char*>(&r10_136));
    __asm__("rcr r9b, 1");
    eax176 = reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&eax170) / *reinterpret_cast<uint16_t*>(&rdi173));
    __asm__("btc r12d, eax");
    *reinterpret_cast<uint16_t*>(&eax176) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax176) + *reinterpret_cast<uint16_t*>(&r12_125))));
    *reinterpret_cast<int16_t*>(&r11_151) = static_cast<int16_t>(eax176 + r9d175 * 4 + 6);
    *reinterpret_cast<int32_t*>(&r15_177) = *reinterpret_cast<int32_t*>(&r15_169) * 0xb8102cc4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_177) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx174) + 1) = reinterpret_cast<unsigned char>(42 - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&eax176) + reinterpret_cast<uint1_t>(42 < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&eax176) + 1))));
    rax178 = eax176;
    __asm__("btr edx, r12d");
    __asm__("rol ch, 0xe0");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax178) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax178) + 1) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx174) + 1));
    if (static_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rsi161) >> *reinterpret_cast<int32_t*>(&rdx174)) | __undefined()) {
    }
    __asm__("ror sil, cl");
    *reinterpret_cast<uint32_t*>(&rax179) = *reinterpret_cast<int32_t*>(&rax178) * *reinterpret_cast<uint32_t*>(&r8_154);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax179) + 4) = 0;
    __asm__("btr r9, 0xd2");
    r11_180 = r11_151 + 0x3bcb551d + 1 - rax179 * r8_154;
    __asm__("rcr r13, 1");
    __asm__("xadd r9w, r8w");
    *reinterpret_cast<signed char*>(&r13_172) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r13_172) - 0x76);
    *reinterpret_cast<uint16_t*>(&r9d175) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9d175) - 0x61d3)));
    __asm__("rcr r13, 1");
    edi181 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&rcx168)));
    *reinterpret_cast<unsigned char*>(&rcx168) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx168) + *reinterpret_cast<unsigned char*>(&edi181)) + 1);
    __asm__("lahf ");
    __asm__("btr r8, r9");
    *reinterpret_cast<uint16_t*>(&rcx168) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx168) | 0xc000);
    *reinterpret_cast<int16_t*>(&r11_180) = 0x750f;
    __asm__("rcl bpl, 0x25");
    zf182 = 0xf4702235 + *reinterpret_cast<uint32_t*>(&rsi161) == 0;
    if (!zf182) {
    }
    if (!zf182) {
        *reinterpret_cast<uint32_t*>(&r11_180) = edi181;
    }
    __asm__("rcl bp, 1");
    r14d183 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&rsi161)));
    __asm__("rcl si, 1");
    *reinterpret_cast<uint16_t*>(&edi181) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi181) + *reinterpret_cast<uint16_t*>(&r15_177)) + 1);
    __asm__("bsr si, r8w");
    __asm__("cwd ");
    rbp184 = rbp171 ^ rcx168;
    r12d185 = 0;
    __asm__("ror bl, 1");
    edx186 = __intrinsic();
    __asm__("rol r11w, 1");
    zf187 = reinterpret_cast<uint1_t>(0 == r9d175);
    if (zf187) {
        r12d185 = r9d175;
    }
    if (__intrinsic() | zf187) {
        *reinterpret_cast<int16_t*>(&r8_154) = *reinterpret_cast<int16_t*>(&edx186);
    }
    __asm__("btc dx, r13W");
    __asm__("xadd r15, rbx");
    *reinterpret_cast<unsigned char*>(&rcx168) = -*reinterpret_cast<unsigned char*>(&rcx168);
    rbx188 = rbp184 - 0x107d08b8;
    *reinterpret_cast<uint32_t*>(&r11_189) = *reinterpret_cast<uint32_t*>(&r11_180) ^ *reinterpret_cast<uint32_t*>(&r8_154);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_189) + 4) = 0;
    __asm__("btr r14w, 0x9e");
    *reinterpret_cast<unsigned char*>(&r12d185) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12d185) + *reinterpret_cast<unsigned char*>(&r15_177)) + 1);
    __asm__("ror r12d, 0x8e");
    *reinterpret_cast<int32_t*>(&rax190) = *reinterpret_cast<signed char*>(&rbx188);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax190) + 4) = 0;
    rax191 = rax190 * r10_136;
    __asm__("shrd rbx, r14, cl");
    __asm__("shrd ebp, eax, 0x1");
    *reinterpret_cast<uint16_t*>(&rbx188) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx168) + 1)));
    *reinterpret_cast<uint16_t*>(&rcx168) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx168) ^ *reinterpret_cast<uint16_t*>(&r14d183));
    *reinterpret_cast<int32_t*>(&rsi192) = reinterpret_cast<int32_t>(~*reinterpret_cast<uint32_t*>(&rsi161));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi192) + 4) = 0;
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&rcx168) = *reinterpret_cast<uint16_t*>(&r12d185);
    }
    if (0) {
        *reinterpret_cast<uint32_t*>(&rbx188) = *reinterpret_cast<uint32_t*>(&r8_154);
    }
    *reinterpret_cast<uint32_t*>(&r9_193) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&r13_172)));
    if (0) {
        r10_136 = __intrinsic();
    }
    if (__intrinsic() != __intrinsic()) {
    }
    __asm__("rol r9b, 1");
    __asm__("shld ebp, r15d, 0x1");
    *reinterpret_cast<signed char*>(&rax191) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rax191) - 1);
    *reinterpret_cast<unsigned char*>(&rbx188) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx188) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx168) + 1))));
    __asm__("bts bp, 0x53");
    *reinterpret_cast<int16_t*>(&r11_189) = static_cast<int16_t>(rax191 + r11_189 + 90);
    if (0) {
        *reinterpret_cast<uint16_t*>(&r14d183) = *reinterpret_cast<uint16_t*>(&rbx188);
    }
    r13_194 = r13_172 | 0xc000000000000000;
    r8_195 = 0x3fffffffffffffff;
    *reinterpret_cast<int32_t*>(&rbp196) = *reinterpret_cast<int32_t*>(&rbp184) << *reinterpret_cast<unsigned char*>(&rcx168);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp196) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r13_194) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_194) & *reinterpret_cast<unsigned char*>(&r15_177));
    if (!__intrinsic()) {
    }
    __asm__("btr r9w, 0x6c");
    *reinterpret_cast<uint16_t*>(&r14d183) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14d183) + *reinterpret_cast<uint16_t*>(&edi181)) + 1) - 1);
    __asm__("shrd r14d, ebx, 0x1");
    *reinterpret_cast<uint16_t*>(&r15_177) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_177) + 0xb479);
    *reinterpret_cast<unsigned char*>(&r14d183) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14d183) - reinterpret_cast<unsigned char>(87 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r14d183) < 0xa9)));
    __asm__("bsf r8w, cx");
    __asm__("bsf r8w, r15w");
    *reinterpret_cast<unsigned char*>(&r10_136) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("ror cl, cl");
    __asm__("shrd r12w, dx, 0x1");
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r10_136) = *reinterpret_cast<uint32_t*>(&r11_189) >> 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_136) + 4) = 0;
    }
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(__intrinsic())))) {
    }
    *reinterpret_cast<uint32_t*>(&r12_197) = edi181 * 0x2ea76d51;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_197) + 4) = 0;
    less_or_equal198 = *reinterpret_cast<signed char*>(&r12_197) <= reinterpret_cast<signed char>(0xb2);
    *reinterpret_cast<unsigned char*>(&r12_197) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_197) - reinterpret_cast<unsigned char>(78 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r12_197) < 0xb2)));
    if (!less_or_equal198) {
    }
    r10_199 = r10_136 ^ 0xd02d411;
    __asm__("xadd al, dl");
    *reinterpret_cast<int32_t*>(&r10_200) = *reinterpret_cast<int32_t*>(&r10_199) + 0x10de0e6d;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_200) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r8_195) = reinterpret_cast<uint16_t>(0xffff ^ *reinterpret_cast<uint16_t*>(&r13_194));
    if (!*reinterpret_cast<uint16_t*>(&r8_195)) {
        *reinterpret_cast<uint16_t*>(&r15_177) = *reinterpret_cast<uint16_t*>(&r8_195);
    }
    eax201 = -(edi181 + (0 < edi181)) * *reinterpret_cast<int32_t*>(&r13_194);
    edx202 = __intrinsic();
    __asm__("rcr eax, 0x10");
    dl203 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&edx202) >> *reinterpret_cast<unsigned char*>(&rcx168));
    __asm__("bts eax, r8d");
    __asm__("rol r10d, 1");
    __asm__("cwd ");
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r9_193) = r14d183;
    }
    bl204 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!__intrinsic())) ^ dl203);
    *reinterpret_cast<unsigned char*>(&r8_195) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(bl204 == 0)));
    __asm__("bts r10d, 0xa1");
    ax205 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax201) | 0xbb54);
    __asm__("shld r14d, eax, cl");
    *reinterpret_cast<unsigned char*>(&rbp196) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp196) ^ 0xe0);
    __asm__("ror edi, cl");
    __asm__("rol r13W, 1");
    *reinterpret_cast<uint16_t*>(&eax201) = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax205) * *reinterpret_cast<signed char*>(&ax205)) - *reinterpret_cast<uint16_t*>(&rbp196));
    rdi206 = *reinterpret_cast<int32_t*>(&r10_200);
    if (*reinterpret_cast<int16_t*>(&r9_193) == *reinterpret_cast<int16_t*>(&rdi206)) {
        *reinterpret_cast<int16_t*>(&r9_193) = *reinterpret_cast<int16_t*>(&rdi206);
    }
    r11_207 = r10_200 * 0xffffffff89c186b5;
    *reinterpret_cast<unsigned char*>(&rcx208) = bl204;
    dl209 = *reinterpret_cast<unsigned char*>(&r11_207);
    *reinterpret_cast<unsigned char*>(&r11_207) = dl203;
    r8_210 = r8_195 + r11_207 + static_cast<uint64_t>(__intrinsic());
    __asm__("rcr bx, 1");
    *reinterpret_cast<uint32_t*>(&rax211) = eax201 * *reinterpret_cast<int32_t*>(&rbp196);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax211) + 4) = 0;
    rax212 = rax211 * r12_197;
    if (__intrinsic()) {
        rcx208 = r11_207;
    }
    __asm__("rol r13d, cl");
    r10_213 = reinterpret_cast<uint64_t>(r10_200 >> *reinterpret_cast<unsigned char*>(&rcx208));
    __asm__("btc r13W, 0x6");
    *reinterpret_cast<uint32_t*>(&rcx214) = dl209;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx214) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rsi192) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi192) | 0xc000) & 0xee7a);
    __asm__("bts r15, 0x19");
    __asm__("rcl ah, 1");
    __asm__("bsr cx, si");
    if (r15_177 > 0xffffffffecdff223) {
    }
    *reinterpret_cast<unsigned char*>(&r8_210) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_210) + 4) + 1);
    if (*reinterpret_cast<unsigned char*>(&r8_210)) {
        *reinterpret_cast<uint16_t*>(&rsi192) = *reinterpret_cast<uint16_t*>(&rbp196);
    }
    __asm__("rcr r12d, 1");
    *reinterpret_cast<uint32_t*>(&r9_215) = *reinterpret_cast<uint32_t*>(&r9_193) >> 24 | *reinterpret_cast<uint32_t*>(&r9_193) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&r9_193) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&r9_193) << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_215) + 4) = 0;
    __asm__("bts cx, 0xdf");
    __asm__("rcr r15w, 1");
    __asm__("rcr r10, 1");
    r13_216 = r13_194 - 0x4c058668 + reinterpret_cast<uint1_t>(rsi192 < r9_215);
    __asm__("xadd rcx, rcx");
    *reinterpret_cast<int32_t*>(&rbx217) = 0x762944b1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx217) + 4) = 0;
    rcx218 = rcx214 | 0xffffffffad897ca6;
    *reinterpret_cast<unsigned char*>(&r12_197) = 1;
    __asm__("rcl r10w, cl");
    __asm__("cwd ");
    __asm__("shrd r12d, r9d, 0x79");
    __asm__("rol sil, 0xdb");
    __asm__("shld r11w, di, 0x7");
    *reinterpret_cast<uint32_t*>(&r14_219) = *reinterpret_cast<uint16_t*>(&r8_210);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_219) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r13_220) = *reinterpret_cast<uint32_t*>(&r13_216) ^ *reinterpret_cast<uint32_t*>(&rcx218);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_220) + 4) = 0;
    __asm__("rol dh, 1");
    __asm__("bsf cx, r12w");
    *reinterpret_cast<unsigned char*>(&rbx217) = 0xf1;
    *reinterpret_cast<uint16_t*>(&rax212) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax212) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_197) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rax212) < reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_197) + 1)))) & 0x3fff) / -15);
    *reinterpret_cast<uint16_t*>(&r12_197) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r12_197) >> 54);
    __asm__("rol r11, 0x76");
    if (*reinterpret_cast<unsigned char*>(&rax212) == 0xf1) {
        tmp8_221 = *reinterpret_cast<unsigned char*>(&rax212);
        *reinterpret_cast<unsigned char*>(&rax212) = 0xf1;
        *reinterpret_cast<unsigned char*>(&rbx217) = tmp8_221;
    }
    eax222 = *reinterpret_cast<int32_t*>(&rax212) * *reinterpret_cast<uint32_t*>(&r12_197);
    r9d223 = reinterpret_cast<signed char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!(r15_177 & r13_194))));
    __asm__("rcr ebx, 0x82");
    cl224 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx218) & 15);
    __asm__("shld ax, r12w, cl");
    edx225 = __intrinsic() * 0xa0e947a;
    *reinterpret_cast<uint32_t*>(&rdi226) = *reinterpret_cast<unsigned char*>(&edx225);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi226) + 4) = 0;
    __asm__("ror rdx, cl");
    r10w227 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_213) >> 80) ^ *reinterpret_cast<uint16_t*>(&r12_197));
    __asm__("rcr esi, 0x60");
    __asm__("shld r15, r12, 0xf4");
    rbx228 = rbx217 + 1;
    if (r10w227 == *reinterpret_cast<uint16_t*>(&r12_197)) {
        tmp16_229 = r10w227;
        r10w227 = *reinterpret_cast<uint16_t*>(&r12_197);
        *reinterpret_cast<uint16_t*>(&r12_197) = tmp16_229;
    }
    __asm__("rcr r8w, 1");
    *reinterpret_cast<int16_t*>(&rdi226) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rdi226) >> 0xff96);
    *reinterpret_cast<unsigned char*>(&rcx218) = reinterpret_cast<unsigned char>(cl224 & 15);
    __asm__("shrd r15w, r10w, cl");
    *reinterpret_cast<uint32_t*>(&rcx230) = *reinterpret_cast<uint32_t*>(&rcx218) - (0x51bb2212 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rcx218) < 0xae44ddee));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx230) + 4) = 0;
    __asm__("rcl rax, cl");
    *reinterpret_cast<uint16_t*>(&r11_207) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&r11_207) & 0xeaa9) >> cl224) | 0xc000);
    *reinterpret_cast<uint16_t*>(&eax222) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax222) / *reinterpret_cast<uint16_t*>(&r11_207));
    __asm__("ror r8w, cl");
    r9_231 = r15_177 + r15_177 * 4 + 0x66649f51;
    *reinterpret_cast<uint32_t*>(&r8_232) = *reinterpret_cast<uint32_t*>(&r8_210) | 0xc0000000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_232) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rax233) = eax222 / *reinterpret_cast<uint32_t*>(&r8_232);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax233) + 4) = 0;
    r13_234 = r13_220 >> 1;
    *reinterpret_cast<int32_t*>(&rdx235) = static_cast<int32_t>(r8_232 + r11_207 * 4 + 0x75);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx235) + 4) = 0;
    r8_236 = r8_232 - (0x687b0e50 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r8_232 < 0x687b0e50)));
    __asm__("rol r11b, 0x76");
    __asm__("bsf r15, rdi");
    rcx237 = rcx230 + rdx235 + static_cast<uint64_t>(__intrinsic());
    bl238 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx228) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax233) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rbx228) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax233) + 1))))));
    if (rdi226 == rdi226) {
        rdi226 = rdi226;
    }
    rsi239 = *reinterpret_cast<uint16_t*>(&r8_236);
    *reinterpret_cast<int16_t*>(&rdi226) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rdi226) - 0x5fa4);
    *reinterpret_cast<uint16_t*>(&r9_231) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r9_231) >> 1);
    *reinterpret_cast<int16_t*>(&rax233) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax233) * *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx235) + 1));
    __asm__("rcl r9d, 0x6c");
    *reinterpret_cast<unsigned char*>(&rbx228) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(bl238 - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rsi239) + reinterpret_cast<uint1_t>(bl238 < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rsi239) + 1)))) | 0x66);
    __asm__("ror r8b, 0x84");
    __asm__("rol r8, 0x68");
    *reinterpret_cast<uint16_t*>(&r8_236) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_236) >> 51);
    rax240 = ~rax233;
    __asm__("ror r8, cl");
    *reinterpret_cast<int16_t*>(&r14_219) = reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r14_219) + 0x72bb) >> 1);
    *reinterpret_cast<uint16_t*>(&r10_213) = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(r10w227) >> 1);
    *reinterpret_cast<uint32_t*>(&rsi241) = *reinterpret_cast<unsigned char*>(&r11_207);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi241) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rbx228) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx228) ^ 0x3e0b);
    if (0) {
        *reinterpret_cast<int32_t*>(&r8_236) = *reinterpret_cast<int32_t*>(&rax240);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_236) + 4) = 0;
    }
    __asm__("shld r10w, bp, 0x1");
    *reinterpret_cast<int32_t*>(&rdi242) = *reinterpret_cast<int32_t*>(&r13_234);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi242) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r12_197) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_197) | *reinterpret_cast<unsigned char*>(&r9d223)) >> 1) + 0x99);
    __asm__("rcl rdx, 1");
    __asm__("bts r13, rdx");
    __asm__("btc ebp, 0xec");
    *reinterpret_cast<unsigned char*>(&rcx237) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx237) + 0x68) & 15);
    __asm__("shld cx, bx, cl");
    *reinterpret_cast<signed char*>(&r14_219) = 0;
    *reinterpret_cast<uint16_t*>(&rdi242) = *reinterpret_cast<unsigned char*>(&rax240);
    r8_243 = r8_236 << *reinterpret_cast<unsigned char*>(&rcx237);
    __asm__("xadd dl, bh");
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__undefined()) | reinterpret_cast<uint1_t>(r8_243 == 0))) {
        *reinterpret_cast<uint16_t*>(&rbp196) = *reinterpret_cast<uint16_t*>(&r9_231);
    }
    *reinterpret_cast<uint16_t*>(&rbp196) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp196) + 0xdb82) + __intrinsic());
    __asm__("rcl bl, 0xc7");
    *reinterpret_cast<uint32_t*>(&r13_244) = *reinterpret_cast<uint32_t*>(&rdi226) - 0x32d4825e;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_244) + 4) = 0;
    __asm__("rcr cl, 1");
    return rax240 + rbx228 + rcx237 + rdx235 + rbp196 + rsi241 + rdi242 + r8_243 + r9_231 + r10_213 + r11_207 + r12_197 + r13_244 + r14_219 + (r15_177 + 0x34f3cd58) - 0x52590ff8f34c347b;
}

int64_t log_size_10_var_009(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rsi7;
    int64_t r9_8;
    int64_t r11_9;
    int64_t r14_10;
    int64_t rax11;
    unsigned char r11b12;
    int64_t rbx13;
    int64_t rdx14;
    uint32_t r11d15;
    int64_t r15_16;
    uint1_t cf17;
    unsigned char bl18;
    uint1_t cf19;
    uint32_t tmp32_20;
    uint32_t esi21;
    uint64_t rax22;
    unsigned char tmp8_23;
    int64_t r13_24;
    int64_t r9_25;
    int64_t r8_26;
    int64_t r11_27;
    int64_t rax28;
    int64_t rax29;
    int64_t r10_30;
    uint64_t rdi31;
    int16_t ax32;
    int16_t dx33;
    uint64_t r8_34;
    int64_t r14_35;
    int64_t rbp36;
    uint32_t r10d37;
    uint1_t zf38;
    int16_t tmp16_39;
    uint32_t r8d40;
    uint32_t r15d41;
    uint64_t r12_42;
    uint32_t r9d43;
    int16_t tmp16_44;
    uint64_t r10_45;
    int32_t esi46;
    int64_t r9_47;
    int64_t rcx48;
    int16_t bx49;
    uint16_t r11w50;
    int64_t rsi51;
    int64_t rdx52;
    int64_t rbp53;
    uint16_t tmp16_54;
    uint64_t r12_55;
    uint64_t r13_56;
    uint64_t r14_57;
    int64_t rax58;
    int64_t rcx59;
    uint64_t rbx60;
    int16_t ax61;
    int16_t ax62;
    uint64_t rsi63;
    uint64_t rbp64;
    uint64_t r9_65;
    uint64_t rdi66;
    uint64_t rax67;
    uint32_t r13d68;
    uint64_t rsi69;
    uint64_t r13_70;
    uint64_t r14_71;
    uint64_t r15_72;
    uint64_t r15_73;
    uint32_t r15d74;
    uint1_t cf75;
    int1_t below_or_equal76;
    signed char tmp8_77;
    uint64_t rbp78;
    uint64_t r15_79;
    uint64_t r15_80;
    int64_t r15_81;
    uint64_t r11_82;
    uint64_t r8_83;
    uint64_t r12_84;
    uint64_t r9_85;
    uint64_t rax86;
    uint64_t rbp87;
    uint32_t r10d88;
    uint64_t rbp89;
    int64_t rbp90;
    uint64_t rsi91;
    int1_t cf92;
    uint64_t rbp93;
    uint64_t r13_94;
    uint64_t r9_95;
    uint64_t rbp96;
    uint64_t rax97;
    uint64_t rdx98;
    uint1_t zf99;
    uint64_t tmp64_100;
    uint64_t r11_101;
    uint64_t r14_102;
    unsigned char tmp8_103;
    uint64_t rax104;
    uint1_t cf105;
    uint32_t tmp32_106;
    int64_t r10_107;
    uint1_t zf108;
    uint64_t rbp109;
    uint64_t rax110;
    uint64_t rdi111;
    uint1_t cf112;
    unsigned char r14b113;
    int64_t rax114;
    uint64_t rax115;
    uint64_t rdx116;
    uint32_t r12d117;
    uint16_t cx118;
    uint64_t rbx119;
    uint64_t r9_120;
    uint64_t r11_121;
    uint32_t ebp122;
    uint32_t r10d123;
    uint64_t rsi124;
    uint64_t rdi125;
    uint64_t rsi126;
    uint1_t cf127;
    int64_t rbp128;
    int64_t rax129;
    int64_t rbp130;
    uint64_t r12_131;
    int32_t r10d132;
    uint64_t rsi133;
    uint64_t r15_134;
    int64_t r8_135;
    uint64_t r12_136;
    int64_t r9_137;
    int64_t rcx138;
    uint16_t cx139;
    uint64_t rsi140;
    uint16_t r8w141;
    uint64_t r11_142;
    uint32_t r14d143;
    int64_t rax144;
    uint32_t r10d145;
    uint64_t rbp146;
    uint64_t r15_147;
    uint64_t r11_148;
    uint1_t cf149;
    uint32_t r13d150;
    uint1_t cf151;
    uint64_t r14_152;
    uint16_t ax153;
    int64_t rdx154;
    int64_t rsi155;
    int16_t bx156;
    uint32_t esi157;
    int16_t ax158;
    int16_t ax159;
    uint16_t r8w160;
    uint64_t r12_161;
    uint32_t eax162;
    int64_t rcx163;
    uint64_t r15_164;
    unsigned char cl165;
    uint64_t rdi166;
    uint1_t cf167;
    int64_t r13_168;
    int16_t bx169;
    int64_t rcx170;
    uint16_t bp171;
    int64_t rcx172;
    int64_t r10_173;
    int64_t rdx174;
    int64_t rax175;
    int64_t rax176;
    int64_t r8_177;
    uint16_t ax178;
    uint32_t ebx179;
    uint64_t r13_180;
    uint64_t rdi181;
    uint64_t r10_182;
    uint32_t ebx183;
    int64_t rbp184;
    unsigned char tmp8_185;
    uint1_t cf186;
    uint64_t rbx187;
    int64_t rcx188;
    uint64_t r12_189;
    int64_t rsi190;
    unsigned char bh191;
    uint64_t r11_192;
    int64_t rax193;
    int64_t rsi194;
    uint64_t rax195;
    uint64_t r15_196;
    uint1_t cf197;
    uint64_t rax198;
    uint1_t cf199;
    uint32_t tmp32_200;
    uint32_t r10d201;
    int64_t r12_202;
    int64_t r13_203;
    int32_t r13d204;
    uint32_t ecx205;
    int64_t rcx206;
    uint32_t r11d207;
    int64_t r10_208;
    uint64_t r14_209;
    uint32_t edi210;
    uint32_t r9d211;
    uint32_t edi212;
    int64_t r10_213;
    int16_t r11w214;
    int64_t rcx215;
    uint32_t eax216;
    int64_t rcx217;
    int64_t rax218;
    int64_t rax219;
    int64_t rbp220;
    uint64_t rax221;
    int32_t edx222;
    uint64_t r14_223;
    uint1_t cf224;
    uint64_t r14_225;
    int64_t rdx226;
    uint32_t ebx227;
    int64_t r15_228;
    int64_t rdi229;
    uint64_t rdi230;
    int64_t r13_231;
    uint1_t cf232;
    int64_t r9_233;
    signed char tmp8_234;
    int64_t rbx235;
    unsigned char cl236;
    uint64_t r14_237;
    int64_t r8_238;
    uint64_t rdx239;
    int64_t rax240;
    int64_t r12_241;
    int64_t r10_242;
    int64_t r13_243;
    int64_t rbp244;
    int64_t r14_245;
    int64_t rdi246;
    uint16_t r10w247;
    int64_t rax248;
    int64_t rax249;
    int64_t rdx250;

    rsi7 = 0x1b60f9f3c7ab2569;
    r9_8 = 0x4d46b7c057898ab3;
    r11_9 = 0xb7a33b8e8d3dad32;
    r14_10 = 0x62419c671d1350e5;
    *reinterpret_cast<uint32_t*>(&rax11) = 0;
    __asm__("rcl ah, 1");
    r11b12 = reinterpret_cast<uint1_t>(11 <= reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax11) + 1) + reinterpret_cast<uint1_t>(11 < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax11) + 1) + 1))));
    rbx13 = 0x2c157bb1a9b55772;
    *reinterpret_cast<unsigned char*>(&r11_9) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(r11b12 + r11b12)));
    __asm__("bsf r8d, edi");
    rdx14 = __intrinsic();
    __asm__("shrd r11, rdi, cl");
    r11d15 = *reinterpret_cast<uint32_t*>(&r11_9) >> -54;
    __asm__("cwd ");
    __asm__("ror al, 0x7e");
    *reinterpret_cast<int32_t*>(&r15_16) = 0xa19cae2;
    cf17 = reinterpret_cast<uint1_t>(0x72 < reinterpret_cast<unsigned char>(0x72 + __intrinsic()));
    bl18 = reinterpret_cast<unsigned char>(0x72 - reinterpret_cast<unsigned char>(0x72 + cf17));
    cf19 = reinterpret_cast<uint1_t>(0x25e4 < reinterpret_cast<uint16_t>(0x1962 + cf17));
    *reinterpret_cast<uint16_t*>(&rsi7) = reinterpret_cast<uint16_t>(0x25e4 - reinterpret_cast<uint16_t>(0x1962 + cf19));
    *reinterpret_cast<unsigned char*>(&r9_8) = reinterpret_cast<uint1_t>(0x25e4 > reinterpret_cast<uint16_t>(0x1962 + cf19));
    __asm__("rcr r9, cl");
    __asm__("rcr bp, 0x8a");
    __asm__("ror r9d, cl");
    __asm__("rcl r10, 1");
    tmp32_20 = *reinterpret_cast<uint32_t*>(&rsi7) + *reinterpret_cast<uint32_t*>(&r9_8);
    esi21 = tmp32_20;
    __asm__("rcl ebp, 1");
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r15_16) = 0xca15;
    }
    __asm__("rcr bx, cl");
    *reinterpret_cast<unsigned char*>(&esi21) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&esi21) | *reinterpret_cast<unsigned char*>(&r15_16));
    __asm__("bts r8, 0xa1");
    __asm__("rcr dl, 1");
    *reinterpret_cast<uint32_t*>(&rax22) = 0x88f9e55d * esi21;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = 0;
    tmp8_23 = *reinterpret_cast<unsigned char*>(&r15_16);
    *reinterpret_cast<unsigned char*>(&r14_10) = tmp8_23;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx13) + 1) = *reinterpret_cast<unsigned char*>(&rax22);
    *reinterpret_cast<unsigned char*>(&esi21) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&esi21) << 1);
    *reinterpret_cast<unsigned char*>(&rax22) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(44 + *reinterpret_cast<signed char*>(&rdx14)) + reinterpret_cast<uint1_t>(tmp32_20 < *reinterpret_cast<uint32_t*>(&rsi7))) ^ bl18) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r11d15) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(44 + *reinterpret_cast<signed char*>(&rdx14)) + reinterpret_cast<uint1_t>(tmp32_20 < *reinterpret_cast<uint32_t*>(&rsi7))) ^ bl18) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r11d15) + 1))));
    if (1) {
        *reinterpret_cast<uint32_t*>(&rax22) = 0xe40cadd7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = 0;
    }
    *reinterpret_cast<unsigned char*>(&rbx13) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(bl18 + *reinterpret_cast<unsigned char*>(&esi21))));
    *reinterpret_cast<int32_t*>(&r13_24) = 0x720e89c0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_24) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r9_25) = *reinterpret_cast<uint32_t*>(&r9_8) - 0x555659fa;
    *reinterpret_cast<uint32_t*>(&r8_26) = *reinterpret_cast<uint32_t*>(&rbx13);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_26) + 4) = 0;
    __asm__("shrd ebp, r14d, 0x1");
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax22) + 1) <= 26) {
        rbx13 = r14_10;
    }
    __asm__("rcr r13W, 1");
    *reinterpret_cast<uint16_t*>(&r13_24) = reinterpret_cast<uint16_t>(0x89c0 - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r9_25) + reinterpret_cast<uint1_t>(0x89c0 < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r9_25) + static_cast<uint1_t>(rax22 >> r8_26)))));
    r11_27 = *reinterpret_cast<int16_t*>(&esi21);
    __asm__("rcr esi, 1");
    *reinterpret_cast<int32_t*>(&rax28) = *reinterpret_cast<int16_t*>(&rax22);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = 0;
    rax29 = rax28 - r14_10;
    r10_30 = 0x7d43c4c5fd28e7c8;
    if (rax28 < r14_10) {
    }
    *reinterpret_cast<unsigned char*>(&rbx13) = reinterpret_cast<uint1_t>(rax28 > r14_10);
    __asm__("rcr r13d, cl");
    *reinterpret_cast<unsigned char*>(&r14_10) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_10) + 92);
    __asm__("rcr r12, 1");
    rdi31 = *reinterpret_cast<unsigned char*>(&r13_24);
    __asm__("rcr dl, 1");
    __asm__("rol dl, 1");
    *reinterpret_cast<signed char*>(&r11_27) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r11_27) >> -63);
    ax32 = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax29) * 0x14a5);
    dx33 = __intrinsic();
    r8_34 = 0xe40cad00;
    r14_35 = *reinterpret_cast<int32_t*>(&r14_10);
    __asm__("rcr dil, 1");
    *reinterpret_cast<int16_t*>(&r10_30) = static_cast<int16_t>(0xe40cad00 + r13_24 * 8 + 0xe3);
    __asm__("rol rdi, 0xb3");
    __asm__("shld r14, r10, cl");
    *reinterpret_cast<int16_t*>(&rbx13) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbx13) - 1);
    __asm__("ror rdx, cl");
    __asm__("shrd r10d, r15d, 0x1");
    if (!__intrinsic()) {
        r8_34 = rdi31;
    }
    *reinterpret_cast<int16_t*>(&rbp36) = 0xf51e;
    r10d37 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r10_30) + 0x26963e15);
    zf38 = reinterpret_cast<uint1_t>(dx33 == *reinterpret_cast<int16_t*>(&r8_34));
    if (zf38) {
        tmp16_39 = dx33;
        dx33 = *reinterpret_cast<int16_t*>(&r8_34);
        *reinterpret_cast<int16_t*>(&r8_34) = tmp16_39;
    }
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic()) | zf38)) {
    }
    *reinterpret_cast<signed char*>(&r10d37) = *reinterpret_cast<signed char*>(&ax32);
    *reinterpret_cast<unsigned char*>(&esi21) = __intrinsic();
    __asm__("btc rax, rsi");
    if (!reinterpret_cast<uint1_t>(__intrinsic() | zf38)) {
        *reinterpret_cast<uint32_t*>(&rbx13) = 0xe40cad00;
    }
    r8d40 = *reinterpret_cast<int32_t*>(&r8_34) - 0x20e338a + __intrinsic();
    r15d41 = *reinterpret_cast<unsigned char*>(&dx33);
    r12_42 = 0x72065680;
    if (__intrinsic()) {
    }
    __asm__("shrd r13d, r12d, cl");
    __asm__("btr eax, 0x3d");
    r9d43 = r10d37 * 0x3316248a;
    tmp16_44 = *reinterpret_cast<int16_t*>(&r15d41);
    *reinterpret_cast<int16_t*>(&r12_42) = tmp16_44;
    __asm__("rcr r14b, cl");
    __asm__("ror ebx, cl");
    __asm__("btc r15, rbx");
    if (30 == *reinterpret_cast<signed char*>(&r10d37)) {
        *reinterpret_cast<signed char*>(&rbp36) = *reinterpret_cast<signed char*>(&r10d37);
    }
    *reinterpret_cast<unsigned char*>(&r9d43) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9d43) ^ 99);
    if (1) {
        ax32 = 0x5680;
    }
    r10_45 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<signed char*>(&rbp36)));
    *reinterpret_cast<uint16_t*>(&rax29) = reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&ax32) * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&r14_35))));
    *reinterpret_cast<int16_t*>(&rbx13) = reinterpret_cast<int16_t>(-*reinterpret_cast<int16_t*>(&rbx13) << 1);
    esi46 = reinterpret_cast<int32_t>(-esi21);
    *reinterpret_cast<uint32_t*>(&r9_47) = r9d43 - (*reinterpret_cast<int32_t*>(&r14_35) + reinterpret_cast<uint1_t>(r9d43 < *reinterpret_cast<int32_t*>(&r14_35) + 1));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_47) + 4) = 0;
    rcx48 = esi46;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx13) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx13) + 1) | 100);
    __asm__("rcl r12, cl");
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r11_27) = *reinterpret_cast<int16_t*>(&r8d40);
    }
    *reinterpret_cast<unsigned char*>(&rax29) = 99;
    __asm__("bts rbx, rdx");
    bx49 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbx13) << 1);
    __asm__("rcr di, 0x7f");
    __asm__("rcl dil, 0x4b");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx48) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx48) + 1) >> -83);
    __asm__("xadd bp, dx");
    __asm__("shrd rcx, rsi, 0x1");
    r11w50 = *reinterpret_cast<uint16_t*>(&rax29);
    __asm__("rcr edi, 0x31");
    *reinterpret_cast<uint32_t*>(&rsi51) = esi46 - 1;
    __asm__("rol r11w, 1");
    __asm__("rcl r10w, 1");
    __asm__("rcr r14, 1");
    rdx52 = 0xa5580db0ecf965cf;
    *reinterpret_cast<int16_t*>(&rcx48) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rcx48) >> 1);
    __asm__("shrd rbx, rdi, 0x1");
    *reinterpret_cast<uint16_t*>(&rax29) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r11_27) + *reinterpret_cast<uint16_t*>(&r9_47));
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&rax29) < reinterpret_cast<int16_t>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rax29) == 0))) {
        *reinterpret_cast<int32_t*>(&r10_45) = *reinterpret_cast<int32_t*>(&rax29);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_45) + 4) = 0;
    }
    *reinterpret_cast<int32_t*>(&rbp53) = 0x5f8f;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp53) + 4) = 0;
    __asm__("rcr r9, 1");
    *reinterpret_cast<unsigned char*>(&r13_24) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_24) & *reinterpret_cast<unsigned char*>(&bx49));
    __asm__("cwd ");
    *reinterpret_cast<uint16_t*>(&rbp53) = reinterpret_cast<uint16_t>(0x5f8f >> 40);
    *reinterpret_cast<uint16_t*>(&rdi31) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi31) - reinterpret_cast<uint16_t>(0x427d - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rdi31) < 0xbd83))) >> *reinterpret_cast<signed char*>(&rcx48));
    __asm__("rol r8w, cl");
    tmp16_54 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_47) + 0x11a1);
    *reinterpret_cast<unsigned char*>(&rbp53) = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(tmp16_54 < *reinterpret_cast<uint16_t*>(&r9_47)) | reinterpret_cast<uint1_t>(tmp16_54 == 0));
    *reinterpret_cast<uint32_t*>(&r12_55) = *reinterpret_cast<uint32_t*>(&r12_42) - (*reinterpret_cast<uint32_t*>(&rcx48) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r12_42) < *reinterpret_cast<uint32_t*>(&rcx48)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_55) + 4) = 0;
    __asm__("ror edx, cl");
    __asm__("rcl sil, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax29) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax29) + 1) + *reinterpret_cast<unsigned char*>(&rax29)) + 1);
    r13_56 = r13_24 - 0x74a8c5c5 + 1;
    *reinterpret_cast<int32_t*>(&r14_57) = *reinterpret_cast<int32_t*>(&rax29);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_57) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rax58) = *reinterpret_cast<int32_t*>(&r14_35);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax58) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rdi31) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi31) & *reinterpret_cast<unsigned char*>(&bx49));
    *reinterpret_cast<int32_t*>(&rcx59) = 0xb685c8f;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx59) + 4) = 0;
    rbx60 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rax58) + *reinterpret_cast<int32_t*>(&r14_57) * 2 + 22);
    *reinterpret_cast<uint16_t*>(&rdx52) = r11w50;
    *reinterpret_cast<int16_t*>(&r11_27) = reinterpret_cast<int16_t>(-0x65cf);
    *reinterpret_cast<uint16_t*>(&r9_47) = static_cast<uint16_t>(*reinterpret_cast<int32_t*>(&rbx60) + *reinterpret_cast<int32_t*>(&rdx52) * 4 + 0x5d1cd096);
    ax61 = *reinterpret_cast<signed char*>(&r8d40);
    __asm__("shld rsi, r11, 0x1");
    ax62 = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax61) * *reinterpret_cast<signed char*>(&r11_27));
    if (r9_47 > 0xffffffff83293cda) {
    }
    *reinterpret_cast<uint32_t*>(&rsi63) = *reinterpret_cast<uint32_t*>(&rsi51) - (0x77222f0f - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rsi51) < 0x88ddd0f1));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi63) + 4) = 0;
    __asm__("rcr r9d, 1");
    rbp64 = rbp53 + r14_57 + 1;
    r9_65 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<signed char*>(&r10_45)));
    __asm__("bts rdx, 0x83");
    rdi66 = rdi31 + 1;
    *reinterpret_cast<int16_t*>(&r13_56) = static_cast<int16_t>(r11_27 + rbp64 * 2 + 0x2cb9346f);
    __asm__("bsf r13W, bp");
    __asm__("xadd r11d, ebx");
    *reinterpret_cast<int16_t*>(&rax58) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax62) * *reinterpret_cast<signed char*>(&r10_45));
    __asm__("rcr edi, 0x97");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax58) + 1) = reinterpret_cast<signed char>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax58) + 1)));
    __asm__("rol bp, cl");
    rax67 = rax58 * r14_57;
    *reinterpret_cast<signed char*>(&r11_27) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r11_27) + *reinterpret_cast<signed char*>(&rsi63));
    *reinterpret_cast<uint16_t*>(&rcx59) = reinterpret_cast<uint16_t>(-static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax67) + (0 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rax67)))))));
    __asm__("ror r8w, 1");
    r13d68 = *reinterpret_cast<uint32_t*>(&r13_56) | *reinterpret_cast<uint32_t*>(&r12_55);
    rsi69 = rsi63 | 0xc000000000000000;
    *reinterpret_cast<uint16_t*>(&r12_55) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_55) | 0xc000);
    *reinterpret_cast<uint32_t*>(&r13_70) = r13d68 ^ 0x4fc568e2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_70) + 4) = 0;
    r14_71 = r14_57 & 0x45f176f2;
    r15_72 = 0x32245f44 ^ r9_65;
    r15_73 = r15_72 + r15_72;
    r15d74 = *reinterpret_cast<uint32_t*>(&r15_73) & 0x68e47f2;
    cf75 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx59) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r15d74) + __intrinsic()));
    below_or_equal76 = *reinterpret_cast<unsigned char*>(&rcx59) <= reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r15d74) + cf75);
    *reinterpret_cast<unsigned char*>(&rcx59) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx59) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r15d74) + cf75));
    if (!below_or_equal76) {
        r12_55 = r10_45;
    }
    __asm__("shld r13d, ecx, 0x1");
    tmp8_77 = *reinterpret_cast<signed char*>(&r13_70);
    *reinterpret_cast<signed char*>(&r13_70) = *reinterpret_cast<signed char*>(&r10_45);
    *reinterpret_cast<signed char*>(&r10_45) = tmp8_77;
    __asm__("shld rdi, r14, cl");
    __asm__("ror bpl, 0x5c");
    __asm__("shrd r10d, ecx, cl");
    __asm__("shrd r15, r13, 0x1");
    __asm__("rol bh, 0x5d");
    rbp78 = rbp64 | 0xc000000000000000;
    *reinterpret_cast<int32_t*>(&r15_79) = *reinterpret_cast<int32_t*>(&rcx59) * 0xa286c31c;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_79) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx59) + 1) = 0xff;
    r15_80 = r15_79 & rsi69;
    __asm__("rcr si, 1");
    *reinterpret_cast<uint32_t*>(&r15_81) = *reinterpret_cast<int32_t*>(&r15_80) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_81) + 4) = 0;
    if (!(*reinterpret_cast<uint32_t*>(&r11_27) & *reinterpret_cast<uint32_t*>(&rbp78))) {
        *reinterpret_cast<uint32_t*>(&r13_70) = 0xffffffff;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_70) + 4) = 0;
    }
    __asm__("btc r15d, ecx");
    *reinterpret_cast<uint32_t*>(&r11_82) = *reinterpret_cast<uint32_t*>(&r11_27) + *reinterpret_cast<uint32_t*>(&rbp78) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_82) + 4) = 0;
    *reinterpret_cast<int16_t*>(&r9_65) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r9_65) + 1);
    __asm__("rcl r9d, 1");
    r8_83 = reinterpret_cast<uint64_t>(0x3fffffffffffffff - r15_81);
    *reinterpret_cast<int16_t*>(&r14_71) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r14_71) >> *reinterpret_cast<unsigned char*>(&rcx59));
    r12_84 = r12_55 & 0xffffffff93faeaa4;
    __asm__("rcl dh, cl");
    *reinterpret_cast<uint16_t*>(&rsi69) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi69) | 0xc000);
    __asm__("shld esi, eax, cl");
    __asm__("btc r10, 0xf");
    *reinterpret_cast<uint16_t*>(&r15_81) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_81) + *reinterpret_cast<int16_t*>(&rbp78));
    *reinterpret_cast<uint32_t*>(&r9_85) = *reinterpret_cast<uint32_t*>(&r9_65) - (0x26b1cf5c - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r9_65) < 0xd94e30a5));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_85) + 4) = 0;
    rax86 = r14_71;
    __asm__("rcl r11d, cl");
    __asm__("rcl rcx, 0x7");
    __asm__("ror r13, cl");
    *reinterpret_cast<uint16_t*>(&r10_45) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_45) ^ 0xd8fe) * 0x84f9);
    *reinterpret_cast<unsigned char*>(&r9_85) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_85) + *reinterpret_cast<unsigned char*>(&r12_84)) + 1);
    if (__intrinsic()) {
        r13_70 = rsi69;
    }
    *reinterpret_cast<int32_t*>(&rbp87) = *reinterpret_cast<int32_t*>(&r14_71) * 0x6019f801;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp87) + 4) = 0;
    r10d88 = *reinterpret_cast<int32_t*>(&r10_45) + 0x1ba87062;
    __asm__("ror edi, cl");
    *reinterpret_cast<int16_t*>(&rax86) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax86) * *reinterpret_cast<signed char*>(&rax86));
    rbp89 = rbp87 - (0x471cf356 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rbp87 < 0x471cf357)));
    *reinterpret_cast<int32_t*>(&rbp90) = *reinterpret_cast<int32_t*>(&rbp89) + *reinterpret_cast<int32_t*>(&rcx59);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp90) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rsi91) = *reinterpret_cast<uint32_t*>(&rsi69) - (*reinterpret_cast<int32_t*>(&rcx59) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rsi69) < *reinterpret_cast<int32_t*>(&rcx59) + 1));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi91) + 4) = 0;
    cf92 = reinterpret_cast<int1_t>(!!*reinterpret_cast<int16_t*>(&rdi66));
    *reinterpret_cast<int16_t*>(&rdi66) = -*reinterpret_cast<int16_t*>(&rdi66);
    rbp93 = rbp90 + rdi66 + 0xf2;
    *reinterpret_cast<unsigned char*>(&rax86) = reinterpret_cast<uint1_t>(!__intrinsic());
    if (!cf92) {
        *reinterpret_cast<int16_t*>(&r12_84) = 0;
    }
    if (__intrinsic()) {
    }
    *reinterpret_cast<unsigned char*>(&rdi66) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rdi66)));
    __asm__("rcl r11d, 1");
    r13_94 = r13_70 ^ 0xffffffffc4cf55c3;
    r9_95 = r9_85 << *reinterpret_cast<unsigned char*>(&rcx59);
    __asm__("bts r10d, r13d");
    *reinterpret_cast<unsigned char*>(&r8_83) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_83) >> 1);
    *reinterpret_cast<uint32_t*>(&rbp96) = *reinterpret_cast<uint32_t*>(&rbp93);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp96) + 4) = 0;
    __asm__("xadd al, r14b");
    *reinterpret_cast<uint16_t*>(&rcx59) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rcx59) >> *reinterpret_cast<unsigned char*>(&rcx59));
    *reinterpret_cast<int16_t*>(&rdi66) = reinterpret_cast<int16_t>(~*reinterpret_cast<int16_t*>(&rdi66));
    *reinterpret_cast<unsigned char*>(&r12_84) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_84) & 0xe4);
    __asm__("rcl r8d, 1");
    __asm__("rcr r11w, 1");
    *reinterpret_cast<int32_t*>(&rax97) = *reinterpret_cast<int32_t*>(&rax86) * 0xd176e95c * *reinterpret_cast<int32_t*>(&r9_95);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax97) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx98) = __intrinsic();
    __asm__("rcr r9b, 1");
    __asm__("shrd ebx, eax, 0x1");
    __asm__("rol r13W, 1");
    zf99 = reinterpret_cast<uint1_t>(rax97 == r12_84);
    if (zf99) {
        tmp64_100 = rax97;
        rax97 = r12_84;
        r12_84 = tmp64_100;
    }
    if (__intrinsic()) {
        r10d88 = *reinterpret_cast<uint32_t*>(&rdi66);
    }
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic()) | zf99)) {
        rdx98 = rdi66;
    }
    __asm__("btc r9, 0x5a");
    *reinterpret_cast<uint32_t*>(&r11_101) = *reinterpret_cast<uint32_t*>(&rbp96) * 0x220fc515;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_101) + 4) = 0;
    if (0) {
    }
    __asm__("shld r8d, r13d, 0x1");
    __asm__("rcr r8d, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx98) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx98) + 1) ^ 68);
    r14_102 = r12_84 + r9_95 * 4 + 0x70485fa0;
    if (0) {
        r9_95 = rsi91 | r11_82;
    }
    __asm__("rcl r13W, 1");
    tmp8_103 = *reinterpret_cast<unsigned char*>(&rax97);
    *reinterpret_cast<unsigned char*>(&rax97) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx59) + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx59) + 1) = tmp8_103;
    *reinterpret_cast<uint32_t*>(&rax104) = *reinterpret_cast<int32_t*>(&rax97) + *reinterpret_cast<uint32_t*>(&r12_84);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax104) + 4) = 0;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax104) < reinterpret_cast<int32_t>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax104) == 0))) {
    }
    cf105 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r10d88) < *reinterpret_cast<uint16_t*>(&r10d88));
    *reinterpret_cast<uint16_t*>(&r10d88) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10d88) - *reinterpret_cast<uint16_t*>(&r10d88));
    __asm__("rcr r8b, cl");
    *reinterpret_cast<uint16_t*>(&r9_95) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_95) >> -63);
    __asm__("bts r14, 0x67");
    __asm__("cdq ");
    tmp32_106 = r10d88 + *reinterpret_cast<uint32_t*>(&r11_101);
    *reinterpret_cast<uint32_t*>(&r10_107) = tmp32_106;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_107) + 4) = 0;
    zf108 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r10_107) == 0);
    if (zf108) {
        *reinterpret_cast<uint16_t*>(&r14_102) = *reinterpret_cast<uint16_t*>(&r15_81);
    }
    if (tmp32_106 >= r10d88) {
        *reinterpret_cast<uint32_t*>(&rax104) = *reinterpret_cast<uint32_t*>(&r12_84) + *reinterpret_cast<uint32_t*>(&r11_101) + cf105;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax104) + 4) = 0;
    }
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r10_107) < reinterpret_cast<int32_t>(0) != __intrinsic()) | zf108) {
        rax104 = r14_102;
    }
    rbp109 = (rbp96 | r13_94) + r10_107;
    __asm__("rol rdx, 1");
    *reinterpret_cast<uint16_t*>(&r15_81) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_81) + *reinterpret_cast<int16_t*>(&rdx98))));
    rax110 = rax104 * r9_95;
    __asm__("ror r8, cl");
    __asm__("bsf r13, r9");
    rdi111 = -rdi66;
    __asm__("shrd r15, rax, cl");
    *reinterpret_cast<unsigned char*>(&rax110) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax110) & *reinterpret_cast<unsigned char*>(&rcx59));
    *reinterpret_cast<uint16_t*>(&r14_102) = 0x71da;
    if (__intrinsic()) {
        rcx59 = rcx59;
    }
    __asm__("rcl r11w, 1");
    cf112 = reinterpret_cast<uint1_t>(rbp109 < rax110);
    r14b113 = *reinterpret_cast<unsigned char*>(&r15_81);
    *reinterpret_cast<unsigned char*>(&r15_81) = 0xda;
    *reinterpret_cast<unsigned char*>(&r14_102) = reinterpret_cast<unsigned char>(r14b113 - reinterpret_cast<unsigned char>(r14b113 + reinterpret_cast<uint1_t>(r14b113 < reinterpret_cast<unsigned char>(r14b113 + cf112))));
    if (reinterpret_cast<signed char>(r14b113) > reinterpret_cast<signed char>(r14b113 + cf112)) {
        *reinterpret_cast<int32_t*>(&rax110) = *reinterpret_cast<int32_t*>(&r13_94);
    }
    __asm__("rol r11b, 1");
    *reinterpret_cast<int32_t*>(&rax114) = *reinterpret_cast<int32_t*>(&rax110) * *reinterpret_cast<int32_t*>(&rax110);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax114) + 4) = 0;
    __asm__("shld cx, bx, 0x1");
    if (!__intrinsic()) {
        r9_95 = 0x85b53ec6;
    }
    if (reinterpret_cast<uint1_t>(__undefined() != __intrinsic()) | __undefined()) {
        r8_83 = r14_102;
    }
    *reinterpret_cast<unsigned char*>(&rcx59) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx59) | 0xc0);
    *reinterpret_cast<uint16_t*>(&rax114) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax114) & 0x3fff) / static_cast<int16_t>(*reinterpret_cast<signed char*>(&rcx59)));
    rax115 = rax114 * r8_83;
    rdx116 = __intrinsic();
    r12d117 = *reinterpret_cast<uint32_t*>(&r14_102);
    *reinterpret_cast<int16_t*>(&r12d117) = reinterpret_cast<int16_t>(~*reinterpret_cast<int16_t*>(&r12d117));
    cx118 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx59) + *reinterpret_cast<uint16_t*>(&r13_94));
    __asm__("ror dl, 1");
    *reinterpret_cast<uint32_t*>(&rbx119) = *reinterpret_cast<unsigned char*>(&rax115);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx119) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r9_120) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r9_95) >> *reinterpret_cast<unsigned char*>(&cx118));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_120) + 4) = 0;
    __asm__("btr r11d, r10d");
    __asm__("shld r14w, r15w, 0x0");
    r11_121 = r11_101 & r9_120;
    __asm__("ror dil, 1");
    __asm__("rcl dil, 0x77");
    ebp122 = *reinterpret_cast<uint32_t*>(&rbp109) & *reinterpret_cast<uint32_t*>(&rbx119);
    __asm__("rol r14b, 0xfd");
    r10d123 = *reinterpret_cast<uint32_t*>(&r15_81) * 0xe7475013;
    __asm__("bsr r8, r13");
    __asm__("btr si, 0xa9");
    *reinterpret_cast<uint16_t*>(&rdi111) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx119) + 1);
    __asm__("rol bp, 0x22");
    rsi124 = 0x171ac002728e237 - r13_94;
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&ebp122) = *reinterpret_cast<uint16_t*>(&r13_94);
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx59) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&cx118) + 1) - 53);
    rdi125 = rdi111 | 0x203e7e24;
    if (__intrinsic()) {
        r10d123 = *reinterpret_cast<uint32_t*>(&rdx116);
    }
    __asm__("rcl r10b, 0x55");
    *reinterpret_cast<unsigned char*>(&r14_102) = 1;
    if (*reinterpret_cast<unsigned char*>(&rax115) == *reinterpret_cast<unsigned char*>(&rax115)) {
        *reinterpret_cast<unsigned char*>(&rax115) = *reinterpret_cast<unsigned char*>(&rax115);
    }
    __asm__("rol r12w, 1");
    __asm__("rcr r15d, 1");
    __asm__("shrd r9, r11, 0x1");
    __asm__("lahf ");
    *reinterpret_cast<unsigned char*>(&r10d123) = __intrinsic();
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r9_120) = r12d117;
    }
    *reinterpret_cast<int16_t*>(&rsi124) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx119) + 1) + *reinterpret_cast<int16_t*>(&r10d123));
    __asm__("rol r10d, 1");
    rsi126 = rsi124 - (r8_83 + reinterpret_cast<uint1_t>(rsi124 < r8_83));
    cf127 = reinterpret_cast<uint1_t>(ebp122 < 0x942759d7);
    *reinterpret_cast<uint32_t*>(&rbp128) = ebp122 - (0x6bd8a629 - cf127);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp128) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rbp128) >= reinterpret_cast<int32_t>(static_cast<uint32_t>(cf127))) {
    }
    if (*reinterpret_cast<int16_t*>(&rbp128) < 0x275) {
        *reinterpret_cast<uint32_t*>(&r8_83) = *reinterpret_cast<uint32_t*>(&rsi126);
    }
    __asm__("rcl r13b, 1");
    rax129 = *reinterpret_cast<int32_t*>(&rax115);
    __asm__("rol r10w, cl");
    rbp130 = rbp128 - 0xa48a15f;
    *reinterpret_cast<uint32_t*>(&r12_131) = r12d117 >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_131) + 4) = 0;
    __asm__("rcr bl, cl");
    *reinterpret_cast<unsigned char*>(&rcx59) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&cx118) & 15);
    __asm__("shrd r11w, si, cl");
    __asm__("xadd r13, r10");
    r10d132 = reinterpret_cast<int32_t>(-r10d123);
    rsi133 = rsi126 << *reinterpret_cast<unsigned char*>(&rcx59);
    __asm__("shrd ecx, r9d, cl");
    __asm__("ror r12w, 0x8a");
    *reinterpret_cast<uint16_t*>(&rdx116) = *reinterpret_cast<unsigned char*>(&r11_121);
    *reinterpret_cast<uint32_t*>(&r15_134) = *reinterpret_cast<uint32_t*>(&r15_81) | 0xa59fe12f;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_134) + 4) = 0;
    if (__intrinsic()) {
        r11_121 = rdx116;
    }
    __asm__("ror r10b, cl");
    __asm__("shld rsi, r12, 0x1");
    __asm__("rcr r14b, cl");
    __asm__("rol r12d, 0xc9");
    *reinterpret_cast<uint32_t*>(&r8_135) = (*reinterpret_cast<uint32_t*>(&r8_83) & 0x82c82f6d) >> 0x74;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_135) + 4) = 0;
    __asm__("rol r13W, 0xee");
    if (__intrinsic()) {
        rdi125 = rbx119;
    }
    __asm__("ror rbp, 1");
    __asm__("btr r11, r11");
    *reinterpret_cast<signed char*>(&r15_134) = -2;
    __asm__("bts r13d, ecx");
    __asm__("shrd r10w, r10w, 0xa");
    __asm__("rcr rdi, 1");
    *reinterpret_cast<unsigned char*>(&r10d132) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10d132) + *reinterpret_cast<unsigned char*>(&r11_121))));
    __asm__("shld r11, r14, 0x7");
    if (r15_134 == rsi133) {
        r15_134 = rsi133;
    }
    r12_136 = r12_131 ^ rbx119;
    __asm__("btr r10w, 0x2f");
    *reinterpret_cast<unsigned char*>(&r9_120) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_120) & 0x6b) + 45) + __intrinsic());
    __asm__("rol cl, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx119) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx119) + 1) >> 1);
    *reinterpret_cast<uint16_t*>(&rdi125) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rdi125) >> 1) & 0x1e4f);
    *reinterpret_cast<int16_t*>(&rax129) = static_cast<int16_t>(*reinterpret_cast<int32_t*>(&rbp130));
    *reinterpret_cast<uint32_t*>(&r9_137) = *reinterpret_cast<uint32_t*>(&r9_120) + *reinterpret_cast<uint32_t*>(&rdi125) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_137) + 4) = 0;
    __asm__("rcr r9d, 0x34");
    __asm__("rol ax, 1");
    rcx138 = rcx59 << 1;
    cx139 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx138) + 0x48e3) + 1);
    *reinterpret_cast<unsigned char*>(&cx139) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&cx139) - reinterpret_cast<unsigned char>(55 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&cx139) < 56)));
    __asm__("shld r11d, ebx, 0xf0");
    *reinterpret_cast<uint16_t*>(&rcx138) = reinterpret_cast<uint16_t>(cx139 | *reinterpret_cast<uint16_t*>(&r11_121));
    *reinterpret_cast<uint32_t*>(&rsi140) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&rcx138)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi140) + 4) = 0;
    __asm__("rcr bh, 1");
    __asm__("rol r9, 0x43");
    r8w141 = *reinterpret_cast<uint16_t*>(&r10d132);
    *reinterpret_cast<uint32_t*>(&r11_142) = *reinterpret_cast<uint32_t*>(&rbx119) + *reinterpret_cast<int32_t*>(&rcx138) * 8 - 0x7ba19c64;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_142) + 4) = 0;
    r14d143 = *reinterpret_cast<uint32_t*>(&r14_102) >> 24 | *reinterpret_cast<uint32_t*>(&r14_102) >> 8 & 0xff00 | 0x710000 | 0x1000000;
    *reinterpret_cast<uint16_t*>(&r11_142) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_142) & *reinterpret_cast<uint16_t*>(&r14d143));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx138) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx138) + 1) + 59) + 1);
    __asm__("ror dh, 0xf0");
    *reinterpret_cast<int32_t*>(&rax144) = *reinterpret_cast<int32_t*>(&rax129) >> 0x70;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax144) + 4) = 0;
    r10d145 = *reinterpret_cast<uint32_t*>(&rsi140);
    *reinterpret_cast<uint16_t*>(&rsi140) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi140) | *reinterpret_cast<uint16_t*>(&r12_136));
    __asm__("ror r13b, 1");
    rbp146 = rdi125 + 0x5064ccc;
    r15_147 = r15_134 - (0x21e9dd49 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(r15_134 < 0xffffffffde1622b7)));
    __asm__("rcl r8d, 1");
    __asm__("rcl r11w, cl");
    r11_148 = r11_142 & rsi140;
    __asm__("rcr r8, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax144) + 1) = reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rbp146) >= reinterpret_cast<int64_t>(r12_136 + 1));
    __asm__("rcl dh, 1");
    __asm__("rol r15w, 0x72");
    __asm__("ror bx, 1");
    cf149 = reinterpret_cast<uint1_t>(0 < *reinterpret_cast<uint32_t*>(&rdi125) + reinterpret_cast<uint1_t>(rbp146 < r12_136 + 1));
    r13d150 = -(*reinterpret_cast<uint32_t*>(&rdi125) + cf149);
    *reinterpret_cast<unsigned char*>(&r15_147) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_147) + *reinterpret_cast<unsigned char*>(&rax144)) + cf149);
    cf151 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx119) + 1) < 60);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx119) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx119) + 1) - 60);
    *reinterpret_cast<unsigned char*>(&r9_137) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_137) + 45) + cf151);
    __asm__("bsr rcx, r12");
    __asm__("ror r8w, cl");
    *reinterpret_cast<signed char*>(&r10d145) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r10d145) >> *reinterpret_cast<unsigned char*>(&rcx138));
    __asm__("bts ebx, 0x62");
    r14_152 = r9_137 + r15_147 + 0xac;
    *reinterpret_cast<unsigned char*>(&rcx138) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx138) | 0xc0);
    ax153 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax144) & 0x3fff);
    *reinterpret_cast<uint16_t*>(&rdx154) = reinterpret_cast<uint16_t>(ax153 % static_cast<int16_t>(*reinterpret_cast<signed char*>(&rcx138)));
    *reinterpret_cast<uint16_t*>(&rax144) = reinterpret_cast<uint16_t>(ax153 / static_cast<int16_t>(*reinterpret_cast<signed char*>(&rcx138)));
    __asm__("ror r12b, 1");
    rsi155 = rax144;
    bx156 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbx119) >> *reinterpret_cast<unsigned char*>(&rcx138));
    __asm__("btr rcx, rbp");
    esi157 = *reinterpret_cast<int32_t*>(&rsi155) + *reinterpret_cast<uint32_t*>(&r9_137) * 8 + 0xe5;
    *reinterpret_cast<signed char*>(&r8w141) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r8w141) << 1) + 0x76);
    ax158 = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax144) * *reinterpret_cast<signed char*>(&r10d145));
    ax159 = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax158) * *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx154) + 1));
    *reinterpret_cast<uint16_t*>(&rax144) = reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&ax159) * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&rdx154))));
    if (__intrinsic()) {
    }
    __asm__("shld r14, rcx, 0xcd");
    __asm__("btc edx, 0x71");
    r8w160 = reinterpret_cast<uint16_t>(r8w141 & *reinterpret_cast<uint16_t*>(&r11_148));
    r12_161 = 0;
    __asm__("shrd ax, r14w, 0x1");
    __asm__("rcr r10d, cl");
    __asm__("btr r13, 0xfc");
    eax162 = *reinterpret_cast<int32_t*>(&rax144) + 1;
    rcx163 = rcx138 << 1;
    *reinterpret_cast<signed char*>(&r12_161) = -0;
    r15_164 = r14_152 * 0xffffffff8bc28aab;
    cl165 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx163) & 15);
    __asm__("shrd di, r14w, cl");
    *reinterpret_cast<unsigned char*>(&rcx163) = reinterpret_cast<unsigned char>(cl165 >> cl165);
    __asm__("ror r13W, cl");
    rdi166 = *reinterpret_cast<uint16_t*>(&r14_152);
    __asm__("xadd rdx, r11");
    cf167 = reinterpret_cast<uint1_t>(r13d150 < esi157);
    *reinterpret_cast<uint32_t*>(&r13_168) = r13d150 - (esi157 + cf167);
    if (*reinterpret_cast<int32_t*>(&r13_168) < reinterpret_cast<int32_t>(static_cast<uint32_t>(cf167))) {
        *reinterpret_cast<uint16_t*>(&r14_152) = *reinterpret_cast<uint16_t*>(&r13_168);
    }
    *reinterpret_cast<unsigned char*>(&r14_152) = reinterpret_cast<uint1_t>(r13d150 <= esi157 + cf167);
    *reinterpret_cast<unsigned char*>(&bx156) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&bx156) ^ *reinterpret_cast<unsigned char*>(&eax162));
    bx169 = reinterpret_cast<int16_t>(bx156 >> 1);
    __asm__("ror eax, 1");
    *reinterpret_cast<uint32_t*>(&rcx170) = *reinterpret_cast<uint32_t*>(&rcx163) & 0xe72ee80;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx170) + 4) = 0;
    __asm__("rcl di, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax162) + 1) = __intrinsic();
    __asm__("ror r15d, cl");
    __asm__("shld r11w, r12w, 0xc");
    bp171 = -0;
    *reinterpret_cast<uint16_t*>(&r8_135) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(r8w160 - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&esi157) + reinterpret_cast<uint1_t>(r8w160 < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&esi157) + 1)))) >> *reinterpret_cast<signed char*>(&rcx170));
    __asm__("rol r14, cl");
    rcx172 = rcx170 + 1;
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&rcx172) = bp171;
    }
    if (__intrinsic()) {
        eax162 = esi157;
    }
    __asm__("bts r11d, 0x51");
    *reinterpret_cast<uint32_t*>(&r10_173) = r10d145 | 0xc0000000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_173) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rdx174) = eax162 % *reinterpret_cast<uint32_t*>(&r10_173);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx174) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rax175) = eax162 / *reinterpret_cast<uint32_t*>(&r10_173);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax175) + 4) = 0;
    __asm__("shrd r14, r13, cl");
    if (*reinterpret_cast<unsigned char*>(&bx169) > *reinterpret_cast<unsigned char*>(&rdx174)) {
        *reinterpret_cast<uint32_t*>(&r8_135) = *reinterpret_cast<uint32_t*>(&r15_164);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_135) + 4) = 0;
    }
    if (*reinterpret_cast<signed char*>(&bx169) >= *reinterpret_cast<signed char*>(&rdx174)) {
        *reinterpret_cast<uint32_t*>(&r15_164) = *reinterpret_cast<uint32_t*>(&r13_168);
    }
    __asm__("shrd eax, r13d, cl");
    rax176 = rax175 >> 1;
    r8_177 = r8_135 >> *reinterpret_cast<signed char*>(&rcx172);
    __asm__("ror sil, cl");
    *reinterpret_cast<uint16_t*>(&r14_152) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_152) - *reinterpret_cast<uint16_t*>(&r15_164));
    __asm__("btr rdx, 0xf7");
    ax178 = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rax176) * *reinterpret_cast<uint16_t*>(&rcx172));
    *reinterpret_cast<int16_t*>(&rdx174) = __intrinsic();
    *reinterpret_cast<signed char*>(&r15_164) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r15_164) + *reinterpret_cast<signed char*>(&r15_164));
    ebx179 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&r15_164)));
    __asm__("rcl r13, 1");
    __asm__("rcl ch, cl");
    __asm__("shrd r15, r12, 0x1");
    __asm__("bts rcx, rax");
    *reinterpret_cast<int16_t*>(&rax176) = *reinterpret_cast<signed char*>(&ax178);
    *reinterpret_cast<int32_t*>(&r13_180) = *reinterpret_cast<signed char*>(&rdx174);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_180) + 4) = 0;
    __asm__("rcr eax, cl");
    if (*reinterpret_cast<signed char*>(&r13_180) == 0x82) {
        *reinterpret_cast<signed char*>(&r13_180) = 0x82;
    }
    *reinterpret_cast<uint32_t*>(&rdi181) = *reinterpret_cast<uint32_t*>(&rdi166) - 0x2f03104a;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi181) + 4) = 0;
    r10_182 = r10_173 + r8_177 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdi166) < 0x2f03104a));
    __asm__("shld r12, rdi, 0x1");
    __asm__("bts edx, 0x15");
    *reinterpret_cast<signed char*>(&esi157) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&esi157) << 1);
    ebx183 = ebx179 >> 24 | ebx179 >> 8 & 0xff00 | ebx179 << 8 & 0xff0000 | ebx179 << 24;
    *reinterpret_cast<uint16_t*>(&rbp184) = reinterpret_cast<uint16_t>(bp171 | 0xaf65);
    if (1) {
        rbp184 = rdx174;
    }
    tmp8_185 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx183) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx172) + 1)) + 1);
    cf186 = reinterpret_cast<uint1_t>(tmp8_185 < *reinterpret_cast<unsigned char*>(&ebx183));
    *reinterpret_cast<unsigned char*>(&ebx183) = tmp8_185;
    if (!reinterpret_cast<uint1_t>(cf186 | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&ebx183) == 0))) {
    }
    __asm__("ror r15b, 1");
    __asm__("rcl r11, 1");
    __asm__("rol rbx, 1");
    *reinterpret_cast<uint16_t*>(&r11_148) = static_cast<uint16_t>(*reinterpret_cast<int32_t*>(&r13_180) + *reinterpret_cast<uint32_t*>(&r8_177) * 8);
    if (1) {
        *reinterpret_cast<int16_t*>(&r8_177) = *reinterpret_cast<int16_t*>(&r13_180);
    }
    if (0) {
    }
    *reinterpret_cast<uint32_t*>(&rbx187) = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(ebx183) >> 1);
    __asm__("rol r14, 0x31");
    rcx188 = rcx172 + 1;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(rcx188 < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(rcx188 == 0))) {
        rbx187 = r12_161;
    }
    r12_189 = r12_161 - rdi181;
    if (reinterpret_cast<int64_t>(r12_161) >= reinterpret_cast<int64_t>(rdi181)) {
        rdi181 = r13_180;
    }
    __asm__("rcl r13d, cl");
    __asm__("rol edi, cl");
    *reinterpret_cast<int32_t*>(&rsi190) = reinterpret_cast<int32_t>(esi157 - (*reinterpret_cast<uint32_t*>(&r8_177) + reinterpret_cast<uint1_t>(esi157 < *reinterpret_cast<uint32_t*>(&r8_177)))) >> *reinterpret_cast<unsigned char*>(&rcx188);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi190) + 4) = 0;
    __asm__("shld r11w, dx, 0x1");
    __asm__("shrd si, r8w, 0x1");
    bh191 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rcx188)));
    *reinterpret_cast<signed char*>(&rsi190) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rsi190) - 1);
    __asm__("ror r13W, cl");
    __asm__("shld di, bp, 0x1");
    __asm__("xadd bh, cl");
    __asm__("xadd r12d, r13d");
    *reinterpret_cast<unsigned char*>(&r10_182) = reinterpret_cast<uint1_t>(!__intrinsic());
    if (__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rsi190) = *reinterpret_cast<int32_t*>(&rsi190);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi190) + 4) = 0;
    }
    r11_192 = r11_148 - r14_152;
    __asm__("bts r8w, bx");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax176) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax176) + 1) + 68);
    *reinterpret_cast<int32_t*>(&rax193) = *reinterpret_cast<int32_t*>(&rax176) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax193) + 4) = 0;
    rsi194 = rax193 + rsi190 * 8 + 0xd3;
    *reinterpret_cast<uint32_t*>(&rax195) = bh191;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax195) + 4) = 0;
    __asm__("bsr r12, r9");
    r15_196 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r11_192) + 0xfb);
    if (!__intrinsic()) {
    }
    *reinterpret_cast<uint16_t*>(&r10_182) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_182) | 0xc000);
    *reinterpret_cast<uint16_t*>(&rax195) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax195) / *reinterpret_cast<uint16_t*>(&r10_182));
    __asm__("bsf ax, r8w");
    __asm__("rol rbx, 1");
    __asm__("xadd r14d, ebp");
    cf197 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax195) + 1) < reinterpret_cast<unsigned char>(bh191 + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax195) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax195) + 1) - reinterpret_cast<unsigned char>(bh191 + cf197));
    if (!cf197) {
    }
    rax198 = rax195 >> *reinterpret_cast<unsigned char*>(&rcx188);
    cf199 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rbp184) < 0x12b1);
    tmp32_200 = *reinterpret_cast<uint32_t*>(&r10_182) - 0x5ac48a49 + cf199;
    r10d201 = tmp32_200;
    *reinterpret_cast<uint32_t*>(&r12_202) = *reinterpret_cast<int32_t*>(&r12_189) + 0x4acc546c + reinterpret_cast<uint1_t>(tmp32_200 < *reinterpret_cast<uint32_t*>(&r10_182));
    __asm__("rcr r14d, 0xc8");
    __asm__("bsr r11w, ax");
    __asm__("bts bp, 0xb");
    __asm__("shld r12w, dx, 0x7");
    __asm__("ror r13d, 1");
    __asm__("rcr di, 1");
    if (0) {
        *reinterpret_cast<uint32_t*>(&rsi194) = *reinterpret_cast<uint32_t*>(&rsi194);
    }
    __asm__("ror bp, 0x32");
    r13_203 = reinterpret_cast<int64_t>(-rdi181);
    r13d204 = *reinterpret_cast<int32_t*>(&r13_203) - 0x39fb5b84;
    __asm__("rcl cx, 0x7");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx187) + 1) = reinterpret_cast<unsigned char>(1 - *reinterpret_cast<signed char*>(&rbx187));
    ecx205 = r10d201 + 58;
    if (1) {
    }
    rcx206 = reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&r12_202) | 0x41c0);
    if (!__intrinsic()) {
    }
    __asm__("btc r12w, si");
    __asm__("bts ax, bp");
    __asm__("rcr rcx, 1");
    __asm__("shld r12d, r14d, 0x2b");
    *reinterpret_cast<int16_t*>(&r10d201) = 0x1cd5;
    __asm__("rcl r13b, 1");
    *reinterpret_cast<unsigned char*>(&rsi194) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi194) - reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rsi194) < 0))));
    r11d207 = 0x78aa - (r13d204 + reinterpret_cast<uint1_t>(0x78aa < r13d204 + 1));
    *reinterpret_cast<uint32_t*>(&r10_208) = r10d201 >> 24 | r10d201 >> 8 & 0xff00 | 0x1c0000 | 0xd5000000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_208) + 4) = 0;
    __asm__("rcl rcx, 1");
    __asm__("rcr r8d, 1");
    *reinterpret_cast<int16_t*>(&rbx187) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbx187) >> *reinterpret_cast<unsigned char*>(&rcx206));
    __asm__("ror r10d, cl");
    r14_209 = *reinterpret_cast<unsigned char*>(&r15_196);
    edi210 = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ecx205) + 1) + 0x5ceb4af9 + __intrinsic();
    r9d211 = 0 >> 40;
    *reinterpret_cast<signed char*>(&edi210) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&edi210));
    edi212 = edi210 - 0x46f635ee;
    r10_213 = r10_208 * 0xffffffffc47145d9;
    r11w214 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r11d207) << *reinterpret_cast<unsigned char*>(&rcx206));
    *reinterpret_cast<int16_t*>(&rax198) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax198) * *reinterpret_cast<int16_t*>(&rsi194));
    rcx215 = *reinterpret_cast<int16_t*>(&rsi194);
    __asm__("btc r12, rcx");
    *reinterpret_cast<unsigned char*>(&rax198) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax198) | static_cast<unsigned char>(__intrinsic()));
    eax216 = *reinterpret_cast<int32_t*>(&rax198) + *reinterpret_cast<uint32_t*>(&rsi194);
    __asm__("rcr dil, 0xd0");
    __asm__("shrd r9d, eax, cl");
    __asm__("ror r15, 0xfd");
    *reinterpret_cast<unsigned char*>(&rcx215) = 0;
    __asm__("btc eax, 0xcb");
    *reinterpret_cast<signed char*>(&r10_213) = reinterpret_cast<signed char>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&r10_213)));
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax216) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax216) + 1) + 67);
    *reinterpret_cast<uint16_t*>(&r14_209) = reinterpret_cast<uint16_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&r14_209) >> 1)));
    *reinterpret_cast<uint32_t*>(&rcx217) = *reinterpret_cast<uint32_t*>(&rcx215) | 0x37adb392;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx217) + 4) = 0;
    __asm__("bsf rdi, rbp");
    *reinterpret_cast<uint16_t*>(&edi212) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi212) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp184) - 0x12b1));
    rax218 = reinterpret_cast<int32_t>(eax216 * *reinterpret_cast<uint32_t*>(&rbx187));
    __asm__("shld di, cx, 0x5");
    __asm__("shrd rsi, r13, 0x46");
    *reinterpret_cast<uint16_t*>(&rax218) = *reinterpret_cast<unsigned char*>(&r11w214);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax218) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax218) + 1) ^ *reinterpret_cast<unsigned char*>(&rax218));
    *reinterpret_cast<uint32_t*>(&rax219) = *reinterpret_cast<int32_t*>(&rax218) * *reinterpret_cast<uint32_t*>(&rbx187);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax219) + 4) = 0;
    *reinterpret_cast<int16_t*>(&rcx217) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rcx217) >> 1);
    *reinterpret_cast<unsigned char*>(&r9d211) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9d211) - 0x6e) + 1);
    rbp220 = rcx217 * 0xffffffffd673d44b;
    rax221 = rax219 / reinterpret_cast<uint64_t>(0xd247c5e137adb392);
    __asm__("shld bx, bp, 0x4");
    edx222 = 0;
    __asm__("shld r12d, edi, 0xf4");
    *reinterpret_cast<uint16_t*>(&rbp220) = 0;
    *reinterpret_cast<uint16_t*>(&rax221) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax221) >> -55);
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx187) + 1) < *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx222) + 1)) {
        *reinterpret_cast<uint32_t*>(&rbp220) = edi212;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp220) + 4) = 0;
    }
    r14_223 = r14_209 * 0xffffffffa41446ed;
    __asm__("rol sil, 1");
    cf224 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r13d204) < reinterpret_cast<unsigned char>(0x6e - __intrinsic()));
    *reinterpret_cast<unsigned char*>(&r13d204) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13d204) - reinterpret_cast<unsigned char>(0x6e - cf224));
    if (*reinterpret_cast<signed char*>(&r13d204) < reinterpret_cast<signed char>(static_cast<uint32_t>(cf224))) {
    }
    __asm__("lahf ");
    *reinterpret_cast<uint32_t*>(&r14_225) = *reinterpret_cast<uint32_t*>(&r14_223) & 0x452a7eb4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_225) + 4) = 0;
    if (!__intrinsic()) {
    }
    __asm__("rcr r15b, 1");
    if (0) {
    }
    __asm__("rcr si, 1");
    *reinterpret_cast<int32_t*>(&rdx226) = 0x5fcaac5d;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx187) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx187) + 1) & *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx226) + 1));
    __asm__("shld edx, r10d, 0x11");
    ebx227 = *reinterpret_cast<uint32_t*>(&rbx187) >> 13;
    __asm__("rol r15, 1");
    __asm__("xadd ah, dl");
    *reinterpret_cast<unsigned char*>(&rdx226) = reinterpret_cast<unsigned char>(0xd1 + __intrinsic());
    *reinterpret_cast<uint32_t*>(&r15_228) = *reinterpret_cast<uint16_t*>(&r9d211);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_228) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r10_213) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_213) + 0x3835) + 1);
    if (!__intrinsic()) {
    }
    rdi229 = *reinterpret_cast<int16_t*>(&rdx226);
    *reinterpret_cast<uint32_t*>(&rdi230) = *reinterpret_cast<int32_t*>(&rdi229) + *reinterpret_cast<uint32_t*>(&r15_228);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi230) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r13_231) = ~r13d204;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_231) + 4) = 0;
    cf232 = reinterpret_cast<uint1_t>(!!*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax221) + 1));
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax221) + 1) = -*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax221) + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx217) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx217) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax221) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx217) + 1) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax221) + 1) + cf232))));
    if (r14_225 > 0x194ae0e9) {
    }
    __asm__("ror r14d, 0x35");
    __asm__("rcl r13W, cl");
    r9_233 = *reinterpret_cast<int32_t*>(&r14_225);
    if (*reinterpret_cast<signed char*>(&ebx227) == *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ebx227) + 1)) {
        tmp8_234 = *reinterpret_cast<signed char*>(&ebx227);
        *reinterpret_cast<signed char*>(&ebx227) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ebx227) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ebx227) + 1) = tmp8_234;
    }
    *reinterpret_cast<signed char*>(&r9_233) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r9_233) << 1);
    *reinterpret_cast<uint16_t*>(&rbp220) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp220) >> -56);
    *reinterpret_cast<uint16_t*>(&r14_225) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_225) >> 13);
    *reinterpret_cast<uint32_t*>(&rbx235) = ebx227 >> -57;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx235) + 4) = 0;
    cl236 = reinterpret_cast<unsigned char>(13 & *reinterpret_cast<unsigned char*>(&rax221));
    r14_237 = r14_225 | 0xc000000000000000;
    r8_238 = 0x3fffffffffffffff;
    rdx239 = rax221 % r14_237;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx235) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx239) + 1);
    __asm__("rol edi, cl");
    *reinterpret_cast<int32_t*>(&rax240) = *reinterpret_cast<signed char*>(&rbx235);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax240) + 4) = 0;
    r12_241 = *reinterpret_cast<int16_t*>(&rbp220);
    r10_242 = -~r10_213;
    r13_243 = ~r13_231;
    if (__intrinsic()) {
    }
    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax240) + 1) ^ *reinterpret_cast<unsigned char*>(&rdx239))) {
        rbp220 = r13_243;
    }
    __asm__("rcr r11w, 1");
    *reinterpret_cast<unsigned char*>(&r14_237) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_237) | *reinterpret_cast<unsigned char*>(&rbx235));
    rbp244 = rbp220 << 1;
    if (!__intrinsic()) {
        r14_237 = rdi230;
    }
    *reinterpret_cast<int16_t*>(&r15_228) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r15_228) >> cl236);
    *reinterpret_cast<signed char*>(&rcx217) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(cl236) >> 1);
    *reinterpret_cast<uint32_t*>(&r14_245) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_237) + *reinterpret_cast<int32_t*>(&r12_241));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_245) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rdi246) = *reinterpret_cast<uint32_t*>(&rdi230) + 0x39444cdc;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi246) + 4) = 0;
    *reinterpret_cast<int16_t*>(&rax240) = 0;
    __asm__("rcr r15b, 0x8d");
    __asm__("shrd rbp, rcx, 0xbc");
    r10w247 = static_cast<uint16_t>(*reinterpret_cast<int32_t*>(&rbp244) + *reinterpret_cast<uint32_t*>(&rbx235) + 0x6e3c031f);
    rax248 = rax240 * r13_243;
    *reinterpret_cast<int32_t*>(&rax249) = *reinterpret_cast<int32_t*>(&rax248) * *reinterpret_cast<int32_t*>(&rax248);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax249) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx250) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx250) + 4) = 0;
    __asm__("shld r9d, ebx, cl");
    __asm__("btr r12w, r8w");
    __asm__("xadd r13b, r9b");
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>((*reinterpret_cast<uint16_t*>(&r9_233) & 0x3b02) == 0)))) {
        *reinterpret_cast<int16_t*>(&r8_238) = *reinterpret_cast<int16_t*>(&rcx217);
    }
    *reinterpret_cast<int16_t*>(&rbx235) = -*reinterpret_cast<int16_t*>(&rbx235);
    __asm__("shrd rax, r15, cl");
    __asm__("ror r15b, cl");
    *reinterpret_cast<uint16_t*>(&r10_242) = reinterpret_cast<uint16_t>(r10w247 | 0xc000);
    *reinterpret_cast<uint16_t*>(&rdx250) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax249) % *reinterpret_cast<uint16_t*>(&r10_242));
    *reinterpret_cast<uint16_t*>(&rax249) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax249) / *reinterpret_cast<uint16_t*>(&r10_242));
    return rax249 + rbx235 + rcx217 + rdx250 + rbp244 + 0xf83e8252 + rdi246 + r8_238 + *reinterpret_cast<signed char*>(&r14_245) + r10_242 + r12_241 + r13_243 + r14_245 + r15_228 + 0x6cd2998bbc8e714d;
}

int64_t __assert_fail = 0x401036;

void fun_401030(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    goto __assert_fail;
}

int64_t __gmon_start__ = 0;

void fun_401003() {
    int64_t rax1;

    __asm__("cli ");
    rax1 = __gmon_start__;
    if (rax1) {
        rax1();
    }
    return;
}

int64_t __libc_start_main = 0;

int64_t main(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9);

void fun_4010b3() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    __asm__("cli ");
    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, 0x40ace0, 0x40ad50, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void fun_4010e3() {
    __asm__("cli ");
    return;
}

signed char __bss_start = 0;

int64_t fun_401163() {
    int1_t zf1;
    int64_t rax2;
    int64_t rax3;

    __asm__("cli ");
    zf1 = __bss_start == 0;
    if (!zf1) {
        return rax2;
    } else {
        rax3 = deregister_tm_clones();
        __bss_start = 1;
        return rax3;
    }
}

int64_t fun_401193() {
    __asm__("cli ");
    if (1 || 1) {
        return 0;
    } else {
        goto 0;
    }
}

void _init();

void fun_40ace3(int32_t edi, int64_t rsi, int64_t rdx) {
    int64_t r15_4;
    int64_t r14_5;
    int32_t r13d6;
    int64_t rbx7;
    int64_t rdi8;

    __asm__("cli ");
    r15_4 = rdx;
    r14_5 = rsi;
    r13d6 = edi;
    _init();
    if (!0) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r13d6;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x40ce10 + rbx7 * 8)(rdi8, r14_5, r15_4);
            ++rbx7;
        } while (1 != rbx7);
    }
    return;
}

void fun_40ad53() {
    __asm__("cli ");
    return;
}

void fun_40ad5b() {
    __asm__("cli ");
    return;
}

int64_t g40d010 = 0;

void fun_401036() {
    goto g40d010;
}

int64_t main(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    uint64_t rax7;
    uint64_t rax8;
    uint64_t rax9;
    uint64_t rax10;
    uint64_t rax11;
    uint64_t rax12;
    uint64_t rax13;
    uint64_t rax14;
    uint64_t rax15;
    int64_t rax16;

    rax7 = log_size_10_var_000(rdi, rsi, rdx, rcx, r8, r9);
    rax8 = log_size_10_var_001(rdi, rsi, rdx, rcx, r8, r9);
    rax9 = log_size_10_var_002(rdi, rsi, rdx, rcx, r8, r9);
    rax10 = log_size_10_var_003(rdi, rsi, rdx, rcx, r8, r9);
    rax11 = log_size_10_var_004(rdi, rsi, rdx, rcx, r8, r9);
    rax12 = log_size_10_var_005(rdi, rsi, rdx, rcx, r8, r9);
    rax13 = log_size_10_var_006(rdi, rsi, rdx, rcx, r8, r9);
    rax14 = log_size_10_var_007(rdi, rsi, rdx, rcx, r8, r9);
    rax15 = log_size_10_var_008(rdi, rsi, rdx, rcx, r8, r9);
    rax16 = log_size_10_var_009(rdi, rsi, rdx, rcx, r8, r9);
    if (rax7 + rax8 + rax9 + rax10 + rax11 + rax12 + rax13 + rax14 + rax15 + rax16) {
        fun_401030("sum==0", "source_complex_with_base_10_funcs_of_size_1024.c", 31, "main");
    } else {
        return 0;
    }
}
