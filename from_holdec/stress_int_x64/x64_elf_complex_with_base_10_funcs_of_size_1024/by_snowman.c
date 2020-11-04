
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

uint64_t log_size_10_var_000(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    int64_t r8_4;
    uint64_t r12_5;
    int64_t r13_6;
    uint64_t rcx7;
    uint64_t rcx8;
    uint64_t rcx9;
    uint64_t rbx10;
    uint32_t r14d11;
    uint16_t tmp16_12;
    int64_t r15_13;
    uint32_t r13d14;
    uint32_t eax15;
    int64_t r14_16;
    int64_t r15_17;
    uint32_t eax18;
    int64_t rdx19;
    uint64_t r13_20;
    int64_t rax21;
    int32_t r8d22;
    uint1_t less23;
    int16_t ax24;
    int16_t ax25;
    uint64_t rcx26;
    uint16_t ax27;
    uint64_t r11_28;
    uint64_t rax29;
    int64_t r14_30;
    uint32_t r12d31;
    uint64_t rbp32;
    uint64_t r10_33;
    uint64_t r8_34;
    unsigned char r12b35;
    uint64_t r9_36;
    uint64_t rax37;
    int32_t eax38;
    uint64_t r12_39;
    int32_t eax40;
    uint64_t tmp64_41;
    uint64_t tmp64_42;
    uint64_t r10_43;
    int32_t eax44;
    int64_t r15_45;
    uint64_t tmp64_46;
    uint64_t tmp64_47;
    int32_t ecx48;
    int16_t r15w49;
    uint16_t r8w50;
    uint32_t r10d51;
    int64_t r12_52;
    uint64_t rbx53;
    int64_t rsi54;
    uint32_t eax55;
    int32_t edx56;
    uint64_t tmp64_57;
    uint32_t ecx58;
    uint64_t r11_59;
    int16_t tmp16_60;
    uint64_t rcx61;
    int64_t rsi62;
    int64_t tmp64_63;
    int64_t r12_64;
    int64_t rdx65;
    uint32_t eax66;
    uint64_t rdi67;
    uint64_t r13_68;
    unsigned char r8b69;
    uint64_t rcx70;
    uint1_t cf71;
    int64_t rbp72;
    int64_t rdx73;
    int64_t r12_74;
    uint32_t r10d75;
    int64_t rbx76;
    uint32_t r13d77;
    int32_t edi78;
    int64_t r11_79;
    uint64_t rcx80;
    uint64_t r9_81;
    uint16_t r10w82;
    uint64_t r8_83;
    int16_t tmp16_84;
    uint64_t rcx85;
    int64_t r11_86;
    int32_t r9d87;
    int64_t rbx88;
    uint32_t r8d89;
    uint32_t r13d90;
    int64_t rdx91;
    int32_t ebx92;
    uint32_t tmp32_93;
    uint64_t rcx94;
    int64_t r12_95;
    int64_t r12_96;
    int64_t r14_97;
    int64_t rax98;
    int64_t rdx99;
    uint32_t r8d100;
    int64_t r13_101;
    int64_t rax102;
    int64_t rdx103;
    int64_t r13_104;
    int16_t ax105;
    int16_t dx106;
    int64_t rbp107;
    uint32_t r9d108;
    uint64_t r11_109;
    uint32_t r13d110;
    int32_t eax111;
    int32_t edx112;
    int64_t rbx113;
    uint64_t rdi114;
    uint64_t rcx115;
    uint32_t r10d116;
    signed char tmp8_117;
    uint64_t rcx118;
    int64_t rbx119;
    unsigned char bl120;
    uint16_t r8w121;
    uint64_t rax122;
    int64_t r14_123;
    int64_t r9_124;
    uint32_t edx125;
    uint64_t r15_126;
    uint64_t rbp127;
    uint64_t rcx128;
    uint64_t r9_129;
    uint64_t r15_130;
    uint32_t r10d131;
    uint64_t r14_132;
    uint64_t rdx133;
    uint64_t rax134;
    int64_t r14_135;
    uint1_t less136;
    uint32_t esi137;
    uint64_t r9_138;
    uint64_t r13_139;
    uint32_t tmp32_140;
    uint64_t rsi141;
    int16_t cx142;
    int32_t r15d143;
    uint64_t rbp144;
    uint32_t edx145;
    int1_t zf146;
    uint16_t ax147;
    uint64_t rbx148;
    int64_t rdi149;
    int64_t r8_150;
    int64_t r8_151;
    uint64_t rcx152;
    uint64_t r10_153;
    unsigned char tmp8_154;
    int16_t cx155;
    uint64_t rsi156;
    uint32_t ebp157;
    uint32_t edi158;
    uint64_t r8_159;
    uint64_t r12_160;
    uint16_t r12w161;
    uint16_t ax162;
    unsigned char cl163;
    uint64_t rsi164;
    uint16_t ax165;
    unsigned char tmp8_166;
    uint1_t cf167;
    uint1_t cf168;
    uint16_t ax169;
    uint64_t tmp64_170;
    uint64_t rcx171;
    uint64_t r9_172;
    uint64_t r10_173;
    int64_t r13_174;
    uint64_t r15_175;
    uint64_t r12_176;
    int64_t rdi177;
    uint16_t tmp16_178;
    uint64_t r11_179;
    int1_t cf180;
    uint64_t rdi181;
    uint64_t rsi182;
    uint16_t r15w183;
    uint64_t rbp184;
    int1_t below_or_equal185;
    uint64_t rdi186;
    uint32_t ebx187;
    uint64_t rbx188;
    uint1_t cf189;
    uint64_t r9_190;
    uint64_t rdi191;
    int32_t r14d192;
    uint64_t rbx193;
    uint64_t r15_194;
    int64_t rsi195;
    int32_t ecx196;
    uint64_t r11_197;
    uint16_t r10w198;
    uint16_t ax199;
    int16_t dx200;
    uint16_t tmp16_201;
    int64_t r12_202;
    uint64_t r15_203;
    uint64_t r14_204;
    uint64_t r14_205;
    uint64_t rax206;
    uint64_t rbx207;
    int64_t rcx208;
    uint64_t rbp209;
    uint64_t rdx210;
    uint64_t rax211;
    int64_t r10_212;
    int64_t r13_213;
    uint64_t rdx214;
    unsigned char tmp8_215;
    int64_t rcx216;
    int64_t r12_217;
    int64_t r14_218;
    uint64_t r14_219;
    int64_t r10_220;
    uint64_t rbx221;
    uint64_t rax222;
    uint64_t r11_223;
    int64_t rax224;
    uint64_t r15_225;
    uint32_t r13d226;
    int32_t edi227;
    uint64_t r9_228;
    unsigned char tmp8_229;
    uint64_t r10_230;
    int64_t rax231;
    uint32_t ecx232;
    uint32_t eax233;
    uint64_t r10_234;
    uint64_t tmp64_235;
    uint32_t ebx236;
    int16_t tmp16_237;
    int64_t r9_238;
    uint32_t eax239;
    uint64_t rcx240;
    uint64_t r11_241;
    int64_t rdx242;
    int64_t rdx243;
    uint64_t r14_244;
    uint32_t edi245;
    uint32_t eax246;
    uint64_t rsi247;
    int64_t r11_248;
    uint64_t r10_249;
    uint32_t r13d250;
    uint64_t r10_251;
    int64_t rax252;
    signed char bl253;
    uint64_t r8_254;
    int64_t r14_255;
    uint64_t r8_256;
    uint32_t ecx257;
    uint32_t edi258;
    int32_t eax259;
    int32_t ebx260;
    uint32_t tmp32_261;
    int64_t rdi262;
    int64_t r8_263;
    int64_t r13_264;
    int32_t eax265;
    uint64_t rax266;
    uint64_t rsi267;
    uint1_t cf268;
    uint1_t cf269;
    int64_t rcx270;
    uint64_t rbx271;
    uint1_t cf272;
    uint64_t rsi273;

    rax3 = 0xa1d82730bd71fc92;
    r8_4 = 0xe22e408127ef4e0;
    r12_5 = 0x73e1adbdbe8aa366;
    r13_6 = 0x6ea2d1e902c78ec3;
    rcx7 = 0x6c667e71d4a5d8a4;
    __asm__("shrd r10, r13, 0x1");
    __asm__("rcr ebp, 0xa8");
    if (0) {
        *reinterpret_cast<int32_t*>(&r8_4) = 0xd4a5d8a4;
        *reinterpret_cast<int32_t*>(&rcx7) = 0x127ef4e0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    }
    *reinterpret_cast<uint16_t*>(&r12_5) = reinterpret_cast<uint16_t>(0xa366 >> 19);
    rcx8 = rcx7 ^ 0x9dde50b428af6404;
    __asm__("rcl r9, 1");
    __asm__("rol ah, 1");
    if (!static_cast<int1_t>(0x3e8f53c2 >> 0x6c)) {
    }
    __asm__("xadd r14w, r13W");
    *reinterpret_cast<uint32_t*>(&rcx9) = *reinterpret_cast<uint32_t*>(&rcx8) - (0xc20a + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rcx8) < 0xc20a));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
    __asm__("rol r15, cl");
    if (0) {
        r12_5 = 0x9dde50b428af6404;
    }
    rbx10 = 0x79a94e32e8ade2ce;
    __asm__("rcr r10w, 0x42");
    __asm__("ror si, 0xe4");
    __asm__("rol eax, 1");
    r14d11 = 0x3e8f53c2 << *reinterpret_cast<unsigned char*>(&rcx9) | 0x62374692;
    *reinterpret_cast<signed char*>(&r14d11) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r14d11) + 61);
    *reinterpret_cast<unsigned char*>(&r13_6) = *reinterpret_cast<unsigned char*>(&rcx9);
    __asm__("ror si, cl");
    __asm__("btc r9w, 0x3c");
    __asm__("shld rax, r9, cl");
    __asm__("rcl ax, 1");
    tmp16_12 = *reinterpret_cast<uint16_t*>(&r13_6);
    *reinterpret_cast<uint16_t*>(&r13_6) = reinterpret_cast<uint16_t>(0xfc92 - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_4) + reinterpret_cast<uint1_t>(0xfc92 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r8_4))))));
    *reinterpret_cast<uint16_t*>(&rax3) = tmp16_12;
    __asm__("ror ebx, cl");
    __asm__("bsf r12w, dx");
    r15_13 = -0xba4625f4c9b9c463;
    __asm__("ror ebp, 1");
    r13d14 = *reinterpret_cast<uint32_t*>(&r13_6) | 0xc0000000;
    eax15 = *reinterpret_cast<uint32_t*>(&rax3) / r13d14;
    *reinterpret_cast<uint32_t*>(&r14_16) = r14d11 + 1;
    __asm__("xadd ebx, ebx");
    *reinterpret_cast<uint32_t*>(&r15_17) = *reinterpret_cast<uint32_t*>(&r15_13) | 0xac2e9c4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_17) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rcx9) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx9) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax15) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx9) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax15) + 1))))));
    eax18 = eax15 * 0xe8ade2ce;
    *reinterpret_cast<int32_t*>(&rdx19) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r13_20) = r13d14 - (*reinterpret_cast<uint32_t*>(&r14_16) + reinterpret_cast<uint1_t>(r13d14 < *reinterpret_cast<uint32_t*>(&r14_16) + __intrinsic()));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_20) + 4) = 0;
    __asm__("shrd r9, r11, 0x97");
    __asm__("xadd dil, al");
    __asm__("rcr r14d, cl");
    __asm__("btr bx, r12w");
    __asm__("shld di, r10w, 0x1");
    __asm__("ror r10d, cl");
    *reinterpret_cast<uint32_t*>(&rax21) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax18)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax21) + 4) = 0;
    __asm__("shld r9d, ebp, 0x1");
    if (__intrinsic()) {
        rbx10 = 0x68afda86c9dbcad7;
    }
    __asm__("rcl cl, cl");
    r8d22 = static_cast<int32_t>(rdx19 + rcx9 * 4 + 40);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx9) + 1) = 0;
    less23 = reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic());
    if (less23) {
    }
    if (!reinterpret_cast<uint1_t>(less23 | reinterpret_cast<uint1_t>(-*reinterpret_cast<int16_t*>(&r8d22) == 0))) {
        *reinterpret_cast<uint32_t*>(&rcx9) = 0xb701;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
    }
    *reinterpret_cast<unsigned char*>(&rcx9) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx9) - 94)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax21) + 1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx9) == 0);
    ax24 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax21) * 0xb701);
    __asm__("ror r9d, cl");
    ax25 = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax24) * *reinterpret_cast<signed char*>(&rbx10));
    if (__intrinsic()) {
    }
    rcx26 = rcx9 - (0x301ddfd1 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(rcx9 < 0xffffffffcfe2202f)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax21) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax25) + 1) & *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx10) + 1));
    *reinterpret_cast<unsigned char*>(&rax21) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ax25) | *reinterpret_cast<unsigned char*>(&rbx10));
    if (0) {
        *reinterpret_cast<uint32_t*>(&r13_20) = *reinterpret_cast<uint32_t*>(&rax21);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_20) + 4) = 0;
    }
    __asm__("ror edx, 0x41");
    *reinterpret_cast<unsigned char*>(&rcx26) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx26) & 15);
    __asm__("shrd dx, r15w, cl");
    if (*reinterpret_cast<unsigned char*>(&rax21) < *reinterpret_cast<unsigned char*>(&rbx10)) {
    }
    ax27 = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rax21) * *reinterpret_cast<uint16_t*>(&r13_20));
    *reinterpret_cast<int16_t*>(&rax21) = *reinterpret_cast<signed char*>(&ax27);
    r11_28 = 0xe8afda86c9dbcad7;
    rax29 = rax21 / 0xe8afda86c9dbcad7;
    r14_30 = 0;
    __asm__("shld r11d, eax, 0x95");
    __asm__("rol si, 1");
    *reinterpret_cast<uint16_t*>(&rax29) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax29) & 0x9b0e);
    r12d31 = (*reinterpret_cast<int32_t*>(&r12_5) >> -2) + 0x586a8153 + 1;
    *reinterpret_cast<uint32_t*>(&rbp32) = 0xffffffff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp32) + 4) = 0;
    r10_33 = reinterpret_cast<uint64_t>(0xffffffffc9dbcad7 >> -30);
    r8_34 = 0x3ffffffff53d163b;
    r12b35 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r12d31) - 41) + 1);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r12b35) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(r12b35 == 0))) {
        *reinterpret_cast<uint32_t*>(&rbp32) = 0xc9dbcad7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp32) + 4) = 0;
    }
    __asm__("rcr edx, 1");
    __asm__("rcr r8w, cl");
    r9_36 = 0xb7d7 | rax21 % 0xe8afda86c9dbcad7;
    __asm__("rcl r15, 0xe4");
    __asm__("btc r12w, r9w");
    rax37 = rax29 * rax29;
    if (__intrinsic()) {
        r11_28 = rax37;
    }
    __asm__("rcl cx, cl");
    *reinterpret_cast<unsigned char*>(&r8_34) = reinterpret_cast<unsigned char>(59 >> *reinterpret_cast<unsigned char*>(&rcx26));
    *reinterpret_cast<unsigned char*>(&rbx10) = -*reinterpret_cast<unsigned char*>(&rbx10);
    eax38 = *reinterpret_cast<int16_t*>(&rax37);
    r12_39 = r9_36 + rcx26 * 2 + 0x5e0e92a2;
    __asm__("shrd rdi, rbx, cl");
    __asm__("btc rbp, rax");
    __asm__("cwd ");
    __asm__("ror bx, cl");
    eax40 = *reinterpret_cast<int16_t*>(&eax38);
    tmp64_41 = (r10_33 & 0xffffffff) << 32 | (r10_33 & 0xffffffff00000000) >> 32;
    tmp64_42 = (tmp64_41 & 0xffff0000ffff) << 16 | (tmp64_41 & 0xffff0000ffff0000) >> 16;
    r10_43 = (tmp64_42 & 0xff00ff00ff00ff) << 8 | (tmp64_42 & 0xff00ff00ff00ff00) >> 8;
    __asm__("rcr rax, 1");
    __asm__("shld r11d, edi, cl");
    *reinterpret_cast<uint16_t*>(&r13_20) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_20) >> reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx26) >> *reinterpret_cast<unsigned char*>(&rcx26)));
    __asm__("rol r15, 0x34");
    *reinterpret_cast<uint16_t*>(&r15_17) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_17) - 0x55fd) + static_cast<uint1_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_28) >> *reinterpret_cast<int16_t*>(&r12_39))));
    eax44 = reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&eax40) | 0xbc);
    __asm__("shld edi, ecx, 0x22");
    r15_45 = r15_17 + 0x497d81b2;
    __asm__("rcr r11d, 1");
    tmp64_46 = (rbx10 & 0xffffffff) << 32 | (rbx10 & 0xffffffff00000000) >> 32;
    tmp64_47 = (tmp64_46 & 0xffff0000ffff) << 16 | (tmp64_46 & 0xffff0000ffff0000) >> 16;
    __asm__("rcl r8, 0x55");
    ecx48 = eax44;
    __asm__("shrd r8, r11, cl");
    r15w49 = static_cast<int16_t>(ecx48 + ecx48 - 0x1d8d1e83);
    __asm__("ror ecx, 0x90");
    __asm__("btr r15d, r10d");
    r8w50 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_34) + 0x5a86) + 1) >> *reinterpret_cast<signed char*>(&ecx48));
    r10d51 = *reinterpret_cast<int32_t*>(&r10_43) - 0x32cb168f + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r15_45) < *reinterpret_cast<uint16_t*>(&eax44)) & 0xac5a4337;
    *reinterpret_cast<signed char*>(&r8w50) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r8w50) >> 0x69);
    *reinterpret_cast<unsigned char*>(&r11_28) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_28) + 1);
    __asm__("rol r12w, cl");
    *reinterpret_cast<unsigned char*>(&r14_30) = reinterpret_cast<unsigned char>(0 >> -45);
    r12_52 = reinterpret_cast<int64_t>(r12_39) >> 1;
    rbx53 = ((tmp64_47 & 0xff00ff00ff00ff) << 8 | (tmp64_47 & 0xff00ff00ff00ff00) >> 8) >> *reinterpret_cast<signed char*>(&ecx48);
    *reinterpret_cast<signed char*>(&rbp32) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbp32) >> *reinterpret_cast<signed char*>(&ecx48));
    *reinterpret_cast<uint16_t*>(&r8_34) = reinterpret_cast<uint16_t>(r8w50 << 1);
    rsi54 = r14_30;
    eax55 = eax44 * *reinterpret_cast<uint32_t*>(&r14_30);
    edx56 = __intrinsic();
    *reinterpret_cast<uint16_t*>(&r9_36) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_36) + 0x3a2c) + __intrinsic());
    *reinterpret_cast<unsigned char*>(&r9_36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_36) + 0x6f);
    *reinterpret_cast<unsigned char*>(&r8_34) = *reinterpret_cast<unsigned char*>(&r11_28);
    __asm__("lahf ");
    if (r9_36 == rbp32) {
        tmp64_57 = r9_36;
        r9_36 = rbp32;
        rbp32 = tmp64_57;
    }
    ecx58 = *reinterpret_cast<uint32_t*>(&rbx53) * 0xc167ed12;
    r11_59 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r11_28) >> *reinterpret_cast<signed char*>(&ecx58));
    *reinterpret_cast<uint16_t*>(&r14_30) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_30) >> -28);
    __asm__("ror r15w, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax55) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax55) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&edx56) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax55) + 1) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&edx56) + __intrinsic()))));
    if (r15w49 == *reinterpret_cast<int16_t*>(&r11_59)) {
        tmp16_60 = r15w49;
        r15w49 = *reinterpret_cast<int16_t*>(&r11_59);
        *reinterpret_cast<int16_t*>(&r11_59) = tmp16_60;
    }
    __asm__("ror r15d, cl");
    *reinterpret_cast<uint16_t*>(&r15_45) = reinterpret_cast<uint16_t>(r15w49 * 0x70f4);
    *reinterpret_cast<int16_t*>(&r12_52) = *reinterpret_cast<signed char*>(&r11_59);
    *reinterpret_cast<uint16_t*>(&rbp32) = *reinterpret_cast<uint16_t*>(&r14_30);
    if (1) {
        ecx58 = *reinterpret_cast<uint32_t*>(&r8_34);
    }
    *reinterpret_cast<uint16_t*>(&r9_36) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_36) | *reinterpret_cast<uint16_t*>(&r15_45));
    *reinterpret_cast<signed char*>(&ecx58) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ecx58) >> 1);
    __asm__("cwd ");
    *reinterpret_cast<uint32_t*>(&rcx61) = ecx58 - 0x61b30819;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx61) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r13_20) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_20) + 21) + *reinterpret_cast<unsigned char*>(&rcx61))));
    __asm__("ror r12w, 0x0");
    rsi62 = rsi54 >> *reinterpret_cast<unsigned char*>(&rcx61);
    if (0) {
        tmp64_63 = r15_45;
        r15_45 = r14_30;
        r14_30 = tmp64_63;
    }
    __asm__("shrd rbp, r10, cl");
    *reinterpret_cast<uint32_t*>(&r12_64) = *reinterpret_cast<uint32_t*>(&r12_52) | 0xc0000000;
    *reinterpret_cast<uint32_t*>(&rdx65) = eax55 % *reinterpret_cast<uint32_t*>(&r12_64);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx65) + 4) = 0;
    eax66 = eax55 / *reinterpret_cast<uint32_t*>(&r12_64);
    __asm__("rol esi, 1");
    rdi67 = 0xb8 & rbx53;
    __asm__("shrd r12d, r14d, cl");
    *reinterpret_cast<uint16_t*>(&rsi62) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax66) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx61) + 1) = 0;
    if (0) {
        *reinterpret_cast<uint16_t*>(&r10d51) = *reinterpret_cast<uint16_t*>(&rsi62);
    }
    __asm__("bsr r8d, edi");
    *reinterpret_cast<int16_t*>(&r11_59) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r11_59) << *reinterpret_cast<unsigned char*>(&rcx61));
    __asm__("bts ecx, r15d");
    if (0) {
        *reinterpret_cast<int32_t*>(&rsi62) = *reinterpret_cast<int32_t*>(&rdi67);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi62) + 4) = 0;
    }
    __asm__("btr r11d, 0xe");
    *reinterpret_cast<uint16_t*>(&rdx65) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx65) & 0x8bca);
    r13_68 = r13_20 << *reinterpret_cast<unsigned char*>(&rcx61);
    if (*reinterpret_cast<unsigned char*>(&r14_30) == *reinterpret_cast<unsigned char*>(&rcx61)) {
        *reinterpret_cast<unsigned char*>(&rcx61) = *reinterpret_cast<unsigned char*>(&r14_30);
    }
    r8b69 = reinterpret_cast<uint1_t>(rsi62 + r13_68 == 0);
    *reinterpret_cast<unsigned char*>(&rbx53) = __intrinsic();
    rcx70 = rcx61 | 0xffffffff8e196487;
    __asm__("rcr r8, 0xdf");
    __asm__("shld rdx, r13, cl");
    if (r8b69 == *reinterpret_cast<unsigned char*>(&r9_36)) {
        *reinterpret_cast<unsigned char*>(&r9_36) = r8b69;
    }
    __asm__("rol rbp, 0x10");
    __asm__("rol r12w, cl");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx65) + 1) = -*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx65) + 1);
    *reinterpret_cast<uint16_t*>(&r14_30) = *reinterpret_cast<uint16_t*>(&r10d51);
    cf71 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rdi67) < 0x5127);
    *reinterpret_cast<uint16_t*>(&rdi67) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi67) - reinterpret_cast<uint16_t>(0x5127 + cf71));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx70) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(0xff + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax66) + 1)) + cf71);
    *reinterpret_cast<uint32_t*>(&rbp72) = *reinterpret_cast<uint32_t*>(&rbp32) >> -15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp72) + 4) = 0;
    rdx73 = rdx65 - r15_45;
    *reinterpret_cast<int16_t*>(&rcx70) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rcx70) >> *reinterpret_cast<signed char*>(&rcx70));
    __asm__("shld rbx, rax, cl");
    __asm__("btc r15d, 0x98");
    r12_74 = rbp72 + r15_45 * 2 + 0x7f07364a;
    __asm__("ror r12d, cl");
    __asm__("btr ecx, 0xed");
    __asm__("ror r10, 1");
    __asm__("rcl r8b, 1");
    __asm__("btr r14, 0xca");
    __asm__("btr rcx, 0xef");
    __asm__("rol bh, 0x1d");
    __asm__("bts r11, 0xa4");
    if (static_cast<int1_t>(r11_59 >> 63)) {
        *reinterpret_cast<int32_t*>(&r12_74) = *reinterpret_cast<int32_t*>(&rcx70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_74) + 4) = 0;
    }
    __asm__("rcl rdi, 0xe");
    __asm__("rol rax, 0x35");
    r10d75 = *reinterpret_cast<int32_t*>(&rdi67) + *reinterpret_cast<uint32_t*>(&r14_30) >> 1;
    *reinterpret_cast<uint32_t*>(&rbx76) = *reinterpret_cast<uint32_t*>(&rbx53) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx76) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r8_34) = *reinterpret_cast<uint16_t*>(&rdx73);
    r13d77 = *reinterpret_cast<uint32_t*>(&r11_59);
    __asm__("rcr r8, cl");
    edi78 = *reinterpret_cast<int32_t*>(&rdi67) << 1;
    __asm__("ror r14b, 1");
    __asm__("ror r9, cl");
    *reinterpret_cast<uint32_t*>(&r11_79) = *reinterpret_cast<uint32_t*>(&r13_68) | r13d77;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_79) + 4) = 0;
    __asm__("rcl dx, 1");
    __asm__("shld ebx, edx, cl");
    __asm__("btr r9, 0x7e");
    *reinterpret_cast<int32_t*>(&rcx80) = reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r8_34))) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx80) + 4) = 0;
    r9_81 = r9_36 << 1;
    *reinterpret_cast<uint16_t*>(&rcx80) = *reinterpret_cast<unsigned char*>(&eax66);
    r10w82 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10d75) ^ 0x3b63);
    *reinterpret_cast<int16_t*>(&r13d77) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r13d77) << 1);
    __asm__("rcl bh, 1");
    __asm__("rcr r14b, 1");
    r8_83 = r8_34;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax66) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax66) + 1) << 1);
    if (0) {
        tmp16_84 = *reinterpret_cast<int16_t*>(&r11_79);
        *reinterpret_cast<int16_t*>(&r11_79) = *reinterpret_cast<int16_t*>(&eax66);
        *reinterpret_cast<int16_t*>(&eax66) = tmp16_84;
    }
    if (__intrinsic()) {
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx80) + 1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax66) + 1);
    rcx85 = rcx80 >> *reinterpret_cast<signed char*>(&rcx80);
    r11_86 = r11_79 >> 1;
    r9d87 = *reinterpret_cast<int32_t*>(&r9_81);
    __asm__("cwd ");
    *reinterpret_cast<unsigned char*>(&r10w82) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10w82) ^ 11);
    rbx88 = rbx76 >> -44;
    *reinterpret_cast<uint16_t*>(&rbx88) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx88) | *reinterpret_cast<uint16_t*>(&r9d87));
    __asm__("rcl r14, 1");
    r8d89 = *reinterpret_cast<int32_t*>(&r8_83) + r13d77;
    __asm__("btr r10, 0xda");
    r13d90 = r13d77 * 0x16bf5e28;
    __asm__("ror rsi, 0x1f");
    *reinterpret_cast<uint16_t*>(&r11_86) = 0;
    __asm__("bsr si, si");
    *reinterpret_cast<uint16_t*>(&rcx85) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx85) - *reinterpret_cast<uint16_t*>(&rbx88));
    *reinterpret_cast<signed char*>(&r12_74) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r12_74) >> *reinterpret_cast<signed char*>(&rcx85));
    __asm__("ror r11, 0x5a");
    __asm__("btc ebp, r9d");
    __asm__("rol ah, 0x13");
    rdx91 = __intrinsic();
    *reinterpret_cast<uint16_t*>(&r10d75) = reinterpret_cast<uint16_t>(r10w82 - reinterpret_cast<uint16_t>(0x66e4 + reinterpret_cast<uint1_t>(r10w82 < 0x66e5)));
    __asm__("rcl r9b, 0xc5");
    __asm__("btr r13, rsi");
    __asm__("shrd rbp, rax, 0x63");
    *reinterpret_cast<signed char*>(&r8d89) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r8d89) - 1);
    ebx92 = *reinterpret_cast<signed char*>(&r8d89);
    if (*reinterpret_cast<uint32_t*>(&r11_86) == *reinterpret_cast<uint32_t*>(&rdx91)) {
        tmp32_93 = *reinterpret_cast<uint32_t*>(&r11_86);
        *reinterpret_cast<uint32_t*>(&r11_86) = *reinterpret_cast<uint32_t*>(&rdx91);
        *reinterpret_cast<uint32_t*>(&rdx91) = tmp32_93;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx91) + 4) = 0;
    }
    rcx94 = rcx85 + 0x2fc2a16c;
    r12_95 = r12_74 * 0xffffffffe368624a - 1;
    *reinterpret_cast<uint32_t*>(&r12_96) = *reinterpret_cast<uint32_t*>(&r14_30);
    *reinterpret_cast<int32_t*>(&r14_97) = *reinterpret_cast<int32_t*>(&r12_95);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_97) + 4) = 0;
    rax98 = 0;
    rdx99 = rdx91 + 0xff;
    __asm__("ror r10d, 1");
    *reinterpret_cast<signed char*>(&rcx94) = 0;
    r8d100 = r8d89 >> 1;
    *reinterpret_cast<signed char*>(&rax98) = *reinterpret_cast<signed char*>(&r10d75);
    __asm__("rcl ah, cl");
    __asm__("rol dx, 0xbe");
    __asm__("rol esi, cl");
    __asm__("cwd ");
    *reinterpret_cast<uint32_t*>(&r13_101) = r13d90 >> 24 | r13d90 >> 8 & 0xff00 | r13d90 << 8 & 0xff0000 | r13d90 << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_101) + 4) = 0;
    __asm__("bts r11, rdi");
    *reinterpret_cast<uint16_t*>(&r11_86) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_86) | 0xc000);
    *reinterpret_cast<uint16_t*>(&rdx99) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax98) % *reinterpret_cast<uint16_t*>(&r11_86));
    rax102 = r14_97;
    __asm__("shld rdx, r14, 0x1");
    __asm__("ror r11w, 0xfb");
    __asm__("rol cx, cl");
    rdx103 = r13_101;
    r13_104 = rdx99;
    __asm__("rcl ch, 1");
    __asm__("rcr r14, cl");
    ax105 = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax102) * *reinterpret_cast<signed char*>(&r12_96));
    __asm__("btc si, 0xf7");
    __asm__("shld r15, rdi, 0x2c");
    __asm__("shrd r9w, r13W, 0x1");
    dx106 = reinterpret_cast<int16_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&rdx103)));
    *reinterpret_cast<signed char*>(&ax105) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&ax105));
    __asm__("xadd r12d, r13d");
    __asm__("rol r12, 1");
    *reinterpret_cast<int16_t*>(&ebx92) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx92) + 0x7b72);
    *reinterpret_cast<uint16_t*>(&r8d100) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8d100) ^ 0xab68);
    rbp107 = ebx92;
    __asm__("rol ecx, 1");
    r9d108 = r9d87 + 0x65641dd2 + 1;
    __asm__("rol di, cl");
    *reinterpret_cast<int16_t*>(&rax102) = reinterpret_cast<int16_t>(ax105 - 0xa7c);
    __asm__("btr r12d, 0xc2");
    __asm__("shld rsi, rsi, 0xb2");
    *reinterpret_cast<int16_t*>(&edi78) = *reinterpret_cast<signed char*>(&r8d100);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx94) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx92) & 0x6a);
    if (*reinterpret_cast<signed char*>(&dx106) < *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&dx106) + 1)) {
        *reinterpret_cast<uint16_t*>(&r10d75) = 0xff;
    }
    *reinterpret_cast<uint32_t*>(&r11_109) = *reinterpret_cast<uint32_t*>(&r11_86);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_109) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax102) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&dx106) + 1) - 23);
    r13d110 = *reinterpret_cast<uint32_t*>(&r13_104) - (0x66536d27 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r13_104) < 0x66536d27 - reinterpret_cast<uint1_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9d108) - 0x43fa) < *reinterpret_cast<uint16_t*>(&r9d108))));
    __asm__("rcl dh, 1");
    __asm__("rcr bh, 1");
    eax111 = *reinterpret_cast<int32_t*>(&rax102) * edi78;
    edx112 = __intrinsic();
    *reinterpret_cast<uint32_t*>(&rbx113) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx112) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx113) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rdi114) = reinterpret_cast<uint32_t>(~edi78);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi114) + 4) = 0;
    *reinterpret_cast<signed char*>(&r8d100) = 0;
    *reinterpret_cast<uint32_t*>(&rcx115) = *reinterpret_cast<int32_t*>(&rcx94) - *reinterpret_cast<uint32_t*>(&rbx113);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx115) + 4) = 0;
    __asm__("bts cx, bp");
    r10d116 = r10d75 - 0x7830ed99;
    if (*reinterpret_cast<signed char*>(&rbx113) == *reinterpret_cast<signed char*>(&rcx115)) {
        tmp8_117 = *reinterpret_cast<signed char*>(&rbx113);
        *reinterpret_cast<signed char*>(&rbx113) = *reinterpret_cast<signed char*>(&rcx115);
        *reinterpret_cast<signed char*>(&rcx115) = tmp8_117;
    }
    *reinterpret_cast<signed char*>(&r10d116) = *reinterpret_cast<signed char*>(&r13d110);
    __asm__("rcr rcx, cl");
    __asm__("rcl rbp, 1");
    *reinterpret_cast<uint16_t*>(&rbx113) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx113) >> *reinterpret_cast<signed char*>(&rcx115));
    __asm__("btr r12d, edi");
    rcx118 = rcx115 ^ 0x2912467d;
    rbx119 = -rbx113;
    bl120 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx119) | 0xf2);
    if (__intrinsic()) {
    }
    *reinterpret_cast<unsigned char*>(&rbx119) = reinterpret_cast<unsigned char>(bl120 - reinterpret_cast<unsigned char>(13 + reinterpret_cast<uint1_t>(bl120 < 13)));
    r8w121 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8d100) | *reinterpret_cast<uint16_t*>(&eax111));
    *reinterpret_cast<int32_t*>(&rax122) = eax111 * eax111;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax122) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rcx118) = reinterpret_cast<unsigned char>(1 ^ *reinterpret_cast<unsigned char*>(&rbp107));
    __asm__("ror ch, cl");
    *reinterpret_cast<int16_t*>(&rdi114) = *reinterpret_cast<signed char*>(&rbx119);
    *reinterpret_cast<int16_t*>(&rcx118) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rcx118) - 1);
    *reinterpret_cast<uint32_t*>(&r14_123) = *reinterpret_cast<unsigned char*>(&r8w121);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_123) + 4) = 0;
    __asm__("btr ebx, ebp");
    *reinterpret_cast<int16_t*>(&rbp107) = reinterpret_cast<int16_t>(~*reinterpret_cast<int16_t*>(&rbp107));
    __asm__("rcl r9, 1");
    __asm__("bsr cx, bx");
    *reinterpret_cast<uint32_t*>(&r9_124) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_124) + 4) = 0;
    __asm__("rol r12b, cl");
    __asm__("rol ah, 1");
    edx125 = __intrinsic() >> 1;
    r15_126 = *reinterpret_cast<unsigned char*>(&rdi114);
    rbp127 = rbp107 + rax122;
    __asm__("bts esi, 0x5c");
    rcx128 = rcx118 ^ 0xffffffffb3dad08f;
    r9_129 = r9_124 - rdi114;
    if (!(*reinterpret_cast<int32_t*>(&r15_126) + 0x66899331 + 1)) {
        r10d116 = *reinterpret_cast<uint32_t*>(&rdi114);
    }
    r15_130 = reinterpret_cast<int32_t>(r13d110) - 1;
    __asm__("rol r12, 1");
    if (*reinterpret_cast<signed char*>(&edx125) == *reinterpret_cast<signed char*>(&edx125)) {
    }
    *reinterpret_cast<uint16_t*>(&r11_109) = reinterpret_cast<uint16_t>(static_cast<uint16_t>(r8d100 + 0x3b7fbcb5) ^ r8w121);
    r10d131 = r10d116 ^ 0x40c0cffa;
    if (!r10d131) {
        *reinterpret_cast<uint16_t*>(&r15_130) = *reinterpret_cast<uint16_t*>(&rbx119);
    }
    if (!__intrinsic()) {
        r9_129 = rax122;
    }
    __asm__("ror r8d, 0xef");
    __asm__("btc r11d, r10d");
    __asm__("bsf rcx, r13");
    __asm__("shld r8w, bx, 0xd");
    r14_132 = reinterpret_cast<uint64_t>(r14_123 - r14_123) | 0xc000000000000000;
    rdx133 = rax122 % r14_132;
    rax134 = rax122 / r14_132;
    *reinterpret_cast<int32_t*>(&r14_135) = static_cast<int32_t>(rbp127 + rbx119 * 2 + 0x600d809c);
    *reinterpret_cast<uint16_t*>(&rbx119) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx119) - 1);
    less136 = reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&rbx119) < reinterpret_cast<int16_t>(0) != __intrinsic());
    if (!less136) {
    }
    *reinterpret_cast<unsigned char*>(&rdi114) = __intrinsic();
    if (!reinterpret_cast<uint1_t>(less136 | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rbx119) == 0))) {
        *reinterpret_cast<uint16_t*>(&r15_130) = *reinterpret_cast<uint16_t*>(&r14_135);
    }
    esi137 = *reinterpret_cast<int32_t*>(&rax134) + *reinterpret_cast<uint32_t*>(&rdx133) * 2;
    *reinterpret_cast<int16_t*>(&r9_129) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r9_129) >> 1);
    r9_138 = r9_129 | r11_109;
    __asm__("rol r9d, 1");
    __asm__("rcr bl, 0xe8");
    __asm__("shrd r14w, dx, 0x1");
    *reinterpret_cast<int16_t*>(&rbp127) = 0x6005;
    *reinterpret_cast<uint32_t*>(&r13_139) = r13d110 >> *reinterpret_cast<signed char*>(&rcx128);
    tmp32_140 = esi137 + *reinterpret_cast<int32_t*>(&rbp127);
    *reinterpret_cast<uint32_t*>(&rsi141) = tmp32_140;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi141) + 4) = 0;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(tmp32_140 < esi137) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rsi141) == 0))) {
        r15_130 = rax134;
    }
    if (__intrinsic()) {
        r13_139 = r15_130;
    }
    cx142 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rcx128) >> 32);
    *reinterpret_cast<uint16_t*>(&rdx133) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx133) + *reinterpret_cast<uint16_t*>(&rax134));
    *reinterpret_cast<uint16_t*>(&r15d143) = 0;
    __asm__("shld r11d, r12d, 0x1");
    __asm__("bts r11w, 0x2");
    __asm__("rcr r15b, 1");
    *reinterpret_cast<uint32_t*>(&rbp144) = *reinterpret_cast<int32_t*>(&rbp127) + 0x30c8a36 + __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp144) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rdx133) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx133) - reinterpret_cast<unsigned char>(10 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdx133) < 11)));
    __asm__("rcl r15w, 1");
    edx145 = *reinterpret_cast<uint32_t*>(&rdx133) | 0x79167e1a;
    __asm__("bts r15, 0x24");
    *reinterpret_cast<unsigned char*>(&r14_135) = -*reinterpret_cast<unsigned char*>(&r14_135);
    zf146 = *reinterpret_cast<unsigned char*>(&r14_135) == 0;
    if (!zf146) {
        *reinterpret_cast<uint16_t*>(&rsi141) = 0;
    }
    if (!zf146) {
    }
    __asm__("rcr r11b, 1");
    __asm__("bsr bx, r14w");
    __asm__("shrd edi, edi, 0x1");
    ax147 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax134) * *reinterpret_cast<uint16_t*>(&r9_138));
    *reinterpret_cast<uint16_t*>(&edx145) = __intrinsic();
    rbx148 = rdi114;
    rdi149 = rbx119;
    *reinterpret_cast<signed char*>(&rbp144) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&rbp144));
    __asm__("ror esi, 1");
    __asm__("btr cx, 0xbb");
    *reinterpret_cast<uint16_t*>(&r14_135) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_135) >> 1);
    __asm__("rcl bh, 1");
    __asm__("rol eax, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax134) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax147) + 1) + 1);
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax134) + 1) < reinterpret_cast<signed char>(0) != __intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rbp144) = r10d131 << *reinterpret_cast<unsigned char*>(&cx142);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp144) + 4) = 0;
    }
    *reinterpret_cast<uint32_t*>(&r8_150) = *reinterpret_cast<uint32_t*>(&r9_138) * 0xc85790df;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_150) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rax134) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&ax147) + *reinterpret_cast<unsigned char*>(&cx142))));
    if (__intrinsic()) {
        r15d143 = *reinterpret_cast<int32_t*>(&rax134);
    }
    r8_151 = r8_150 >> -67;
    __asm__("btc r11d, 0x39");
    *reinterpret_cast<int32_t*>(&rcx152) = 0x72ca18f6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx152) + 4) = 0;
    __asm__("bts edi, r8d");
    *reinterpret_cast<uint16_t*>(&rbp144) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp144) >> 64);
    __asm__("rol ax, 1");
    *reinterpret_cast<uint16_t*>(&rbx148) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax134) + 1);
    if (0) {
        edx145 = *reinterpret_cast<uint32_t*>(&rbp144);
    }
    r10_153 = rax134 + rbp144 - 0x49551c56 + rsi141 + __intrinsic();
    tmp8_154 = *reinterpret_cast<unsigned char*>(&r15d143);
    *reinterpret_cast<unsigned char*>(&r15d143) = *reinterpret_cast<unsigned char*>(&r11_109);
    *reinterpret_cast<unsigned char*>(&r11_109) = tmp8_154;
    *reinterpret_cast<unsigned char*>(&rdi149) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi149) - reinterpret_cast<unsigned char>(0x67 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdi149) < 0x99)));
    if (!__intrinsic()) {
        r9_138 = r11_109;
    }
    *reinterpret_cast<unsigned char*>(&r14_135) = *reinterpret_cast<unsigned char*>(&r11_109);
    *reinterpret_cast<unsigned char*>(&r10_153) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_153) >> 0x98);
    cx155 = static_cast<int16_t>(*reinterpret_cast<uint32_t*>(&rbp144) + *reinterpret_cast<int32_t*>(&r14_135) * 8);
    rsi156 = rsi141 & 0x79968f3b;
    __asm__("rcl r8d, cl");
    __asm__("btr r13W, di");
    __asm__("rcr rdx, 1");
    __asm__("bts rcx, 0x36");
    if (0) {
        *reinterpret_cast<uint32_t*>(&rbp144) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r8_151) + 0x13c3f5f0);
    }
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r9_138) = *reinterpret_cast<uint32_t*>(&rsi156);
    }
    __asm__("xadd cl, r8b");
    ebp157 = *reinterpret_cast<uint32_t*>(&rbp144) - 0x18edb9fd;
    __asm__("rcr si, 1");
    edi158 = *reinterpret_cast<uint32_t*>(&rdi149) - (*reinterpret_cast<uint32_t*>(&rdi149) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdi149) < *reinterpret_cast<uint32_t*>(&rdi149) + 1));
    r8_159 = rbx148;
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&edi158) = *reinterpret_cast<uint16_t*>(&r9_138);
    }
    r12_160 = *reinterpret_cast<uint16_t*>(&edi158);
    __asm__("shld bx, si, 0x5");
    r12w161 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_160) >> *reinterpret_cast<unsigned char*>(&cx155));
    ax162 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&rax134) * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&rax134)))) & 0x7b2f);
    __asm__("rcr r9, 1");
    cl163 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&cx155) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ax162) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&cx155) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ax162))))));
    if (*reinterpret_cast<signed char*>(&cx155) < reinterpret_cast<signed char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ax162)))) {
        ax162 = *reinterpret_cast<uint16_t*>(&r13_139);
    }
    __asm__("ror bpl, 1");
    rsi164 = rsi156 >> cl163;
    __asm__("btc r9d, r10d");
    __asm__("btc r14, rbx");
    *reinterpret_cast<unsigned char*>(&ax162) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("xadd ebx, eax");
    if (r11_109 > 0xffffffffe9ed4bff) {
        *reinterpret_cast<uint32_t*>(&r10_153) = edi158 + *reinterpret_cast<int32_t*>(&r14_135);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_153) + 4) = 0;
    }
    __asm__("rcl ebp, 0xfa");
    *reinterpret_cast<int16_t*>(&ebp157) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp157) << cl163);
    *reinterpret_cast<int16_t*>(&rcx152) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&edx145) + 1);
    ax165 = reinterpret_cast<uint16_t>(ax162 * r12w161);
    *reinterpret_cast<uint16_t*>(&edx145) = __intrinsic();
    tmp8_166 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax165) + 1) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx145) + 1));
    cf167 = reinterpret_cast<uint1_t>(tmp8_166 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax165) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax165) + 1) = tmp8_166;
    cf168 = reinterpret_cast<uint1_t>(ax165 < reinterpret_cast<uint16_t>(r12w161 + cf167));
    ax169 = reinterpret_cast<uint16_t>(ax165 - reinterpret_cast<uint16_t>(r12w161 + cf168));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx145) + 1) = reinterpret_cast<uint1_t>(!cf168);
    if (reinterpret_cast<int16_t>(ax165) >= reinterpret_cast<int16_t>(r12w161 + cf167)) {
        *reinterpret_cast<uint16_t*>(&r10_153) = *reinterpret_cast<uint16_t*>(&r8_159);
    }
    if (__intrinsic()) {
        ax169 = *reinterpret_cast<uint16_t*>(&r8_159);
    }
    __asm__("rol cx, 0x6b");
    tmp64_170 = ((rcx152 & 0xffffffff) << 32 & 0xffff0000ffff) << 16 | 0x72ca00000000;
    rcx171 = (tmp64_170 & 0xff00ff00ff00ff) << 8 | (tmp64_170 & 0xff00ff00ff00ff00) >> 8;
    *reinterpret_cast<uint32_t*>(&r9_172) = *reinterpret_cast<uint32_t*>(&r9_138) & *reinterpret_cast<uint32_t*>(&r8_159);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_172) + 4) = 0;
    r10_173 = r10_153 << 1;
    __asm__("ror ecx, 0x1c");
    __asm__("btc r12, r12");
    *reinterpret_cast<int32_t*>(&r13_174) = *reinterpret_cast<int16_t*>(&r15d143);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_174) + 4) = 0;
    __asm__("rcr r12, cl");
    if (1) {
        *reinterpret_cast<uint32_t*>(&rsi164) = edx145;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi164) + 4) = 0;
    }
    *reinterpret_cast<uint32_t*>(&r15_175) = *reinterpret_cast<uint16_t*>(&r11_109);
    *reinterpret_cast<uint16_t*>(&rax134) = reinterpret_cast<uint16_t>(ax169 - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx145) + reinterpret_cast<uint1_t>(ax169 < reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx145) + 1))));
    __asm__("rcl si, cl");
    __asm__("shrd r9, r13, 0x1");
    *reinterpret_cast<uint16_t*>(&r12_160) = reinterpret_cast<uint16_t>(r12w161 ^ *reinterpret_cast<uint16_t*>(&r14_135));
    __asm__("shrd bp, r14w, 0xc");
    *reinterpret_cast<unsigned char*>(&r11_109) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_109) - 63);
    *reinterpret_cast<uint32_t*>(&r12_176) = *reinterpret_cast<uint32_t*>(&r12_160) + 0x1424bd37;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_176) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rdi177) = *reinterpret_cast<unsigned char*>(&r14_135);
    tmp16_178 = *reinterpret_cast<uint16_t*>(&r14_135);
    *reinterpret_cast<uint16_t*>(&r14_135) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_172) | 0xafb9);
    if (*reinterpret_cast<uint32_t*>(&r12_160) >= 0xebdb42c9) {
        *reinterpret_cast<uint32_t*>(&r10_173) = ebp157;
    }
    if (0) {
        *reinterpret_cast<uint16_t*>(&rax134) = *reinterpret_cast<uint16_t*>(&r10_173);
    }
    r11_179 = r11_109 >> 1;
    __asm__("shrd r9d, r14d, cl");
    cf180 = *reinterpret_cast<uint16_t*>(&rdi177) < 0xf18d;
    rdi181 = r8_159;
    *reinterpret_cast<signed char*>(&ebp157) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ebp157) - 1);
    if (!cf180) {
        *reinterpret_cast<uint16_t*>(&r13_174) = 0;
    }
    __asm__("bsf rbp, rsi");
    __asm__("rol r10w, 1");
    *reinterpret_cast<uint16_t*>(&r9_172) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(tmp16_178));
    rsi182 = rsi164 ^ 0x1c892225;
    r15w183 = reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r15_175)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx171) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx171) + 1) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax134) + 1));
    *reinterpret_cast<uint32_t*>(&rbp184) = ebp157 - (*reinterpret_cast<uint32_t*>(&r10_173) + reinterpret_cast<uint1_t>(ebp157 < *reinterpret_cast<uint32_t*>(&r10_173)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp184) + 4) = 0;
    below_or_equal185 = *reinterpret_cast<unsigned char*>(&r13_174) <= 0x6c;
    *reinterpret_cast<unsigned char*>(&r13_174) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_174) - 0x6c);
    if (!below_or_equal185) {
        *reinterpret_cast<int16_t*>(&rdi181) = *reinterpret_cast<int16_t*>(&rdi181);
    }
    __asm__("xadd dx, r9w");
    *reinterpret_cast<uint16_t*>(&r15_175) = reinterpret_cast<uint16_t>(r15w183 - reinterpret_cast<uint16_t>(0x283b - reinterpret_cast<uint1_t>(r15w183 < 0xd7c5)));
    *reinterpret_cast<int32_t*>(&rdi186) = *reinterpret_cast<int32_t*>(&rdi181) << 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi186) + 4) = 0;
    *reinterpret_cast<int16_t*>(&r11_179) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r11_179) + *reinterpret_cast<int16_t*>(&rsi182));
    __asm__("btc rax, r15");
    *reinterpret_cast<uint16_t*>(&rbp184) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp184) - reinterpret_cast<uint16_t>(0x33be - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rbp184) < reinterpret_cast<uint16_t>(0x33be - __intrinsic()))));
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rbp184) = *reinterpret_cast<uint32_t*>(&r10_173);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp184) + 4) = 0;
    }
    __asm__("shld r9, r14, 0x1");
    __asm__("rcr si, 0xa4");
    ebx187 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&rax134)));
    *reinterpret_cast<uint16_t*>(&edx145) = *reinterpret_cast<unsigned char*>(&edx145);
    *reinterpret_cast<signed char*>(&rdi186) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rdi186) >> 1);
    *reinterpret_cast<signed char*>(&r10_173) = reinterpret_cast<signed char>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&r10_173)));
    *reinterpret_cast<unsigned char*>(&edx145) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx145) << 1);
    __asm__("rcl bx, cl");
    *reinterpret_cast<uint16_t*>(&r13_174) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r13_174)));
    __asm__("xadd dh, ch");
    *reinterpret_cast<int16_t*>(&ebx187) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx187) + 0xb58);
    __asm__("rcr r11d, 1");
    __asm__("rcr r9w, 1");
    *reinterpret_cast<uint32_t*>(&rbx188) = ebx187 & edx145;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx188) + 4) = 0;
    __asm__("ror bx, cl");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx188) + 1) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx188) + 1));
    cf189 = reinterpret_cast<uint1_t>(r9_172 < rbp184);
    r9_190 = r9_172 - (rbp184 + cf189);
    *reinterpret_cast<unsigned char*>(&r15_175) = reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r9_172) < reinterpret_cast<int64_t>(rbp184));
    if (!cf189) {
        r15_175 = rbp184;
    }
    *reinterpret_cast<uint16_t*>(&rbx188) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx188) ^ 0xe331);
    __asm__("ror bh, 0xed");
    __asm__("bts r11d, 0x6b");
    if (0) {
        r10_173 = rbx188;
    }
    __asm__("rcr ebx, 1");
    __asm__("rcl r10w, 1");
    __asm__("bts ecx, 0x92");
    *reinterpret_cast<unsigned char*>(&rcx171) = 0;
    *reinterpret_cast<signed char*>(&r11_179) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r11_179) - 1);
    __asm__("bts r14d, ecx");
    __asm__("bts rbp, 0xa2");
    __asm__("shld r10w, ax, 0xb");
    rdi191 = rdi186 ^ 0xfffffffff56111f9;
    __asm__("rol r11w, cl");
    r14d192 = *reinterpret_cast<int32_t*>(&r14_135) - 1;
    rbx193 = 0x6321dee4 & r12_176;
    *reinterpret_cast<int32_t*>(&r15_194) = *reinterpret_cast<int16_t*>(&rsi182);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_194) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rsi195) = *reinterpret_cast<uint32_t*>(&r15_175);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi195) + 4) = 0;
    *reinterpret_cast<signed char*>(&r15_194) = reinterpret_cast<signed char>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&r15_194)));
    __asm__("rol r9, 0xa0");
    ecx196 = -*reinterpret_cast<int32_t*>(&rcx171);
    __asm__("rol dil, cl");
    *reinterpret_cast<int32_t*>(&r11_197) = *reinterpret_cast<int32_t*>(&r11_179) << *reinterpret_cast<unsigned char*>(&ecx196);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_197) + 4) = 0;
    __asm__("btc eax, 0xeb");
    r10w198 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_173) & *reinterpret_cast<uint16_t*>(&rbx193));
    *reinterpret_cast<uint16_t*>(&rsi195) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_190) * 0x2bc0);
    __asm__("rcr r15b, 1");
    __asm__("bts r9w, r14w");
    *reinterpret_cast<signed char*>(&rbx193) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbx193) << *reinterpret_cast<unsigned char*>(&ecx196));
    *reinterpret_cast<unsigned char*>(&r13_174) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_174) ^ *reinterpret_cast<unsigned char*>(&ecx196));
    *reinterpret_cast<unsigned char*>(&rax134) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx145) + 94) + cf189) ^ 0xef);
    __asm__("btr r11, 0x49");
    __asm__("rcl r8b, 1");
    ax199 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax134) * *reinterpret_cast<uint16_t*>(&rax134));
    dx200 = __intrinsic();
    *reinterpret_cast<int16_t*>(&ecx196) = *reinterpret_cast<signed char*>(&ax199);
    __asm__("rcl cl, 0xe2");
    *reinterpret_cast<uint16_t*>(&r10_173) = reinterpret_cast<uint16_t>(r10w198 ^ 0xc21e);
    __asm__("btr cx, dx");
    __asm__("btr r15, rcx");
    __asm__("ror edi, 1");
    __asm__("rcr r8, 1");
    *reinterpret_cast<unsigned char*>(&r11_197) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_197) >> 99);
    *reinterpret_cast<signed char*>(&r14d192) = *reinterpret_cast<signed char*>(&dx200);
    tmp16_201 = *reinterpret_cast<uint16_t*>(&r9_190);
    *reinterpret_cast<uint16_t*>(&r9_190) = *reinterpret_cast<unsigned char*>(&ax199);
    *reinterpret_cast<uint16_t*>(&rdi191) = tmp16_201;
    *reinterpret_cast<uint32_t*>(&r12_202) = *reinterpret_cast<uint32_t*>(&r12_176) >> 24 | *reinterpret_cast<uint32_t*>(&r12_176) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&r12_176) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&r12_176) << 24;
    __asm__("rol rcx, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx196) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx196) + 1)));
    r15_203 = (r15_194 & 0x2ca423df) + r11_197;
    *reinterpret_cast<uint16_t*>(&rax134) = reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&ax199) * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&r12_202))));
    *reinterpret_cast<int32_t*>(&r14_204) = r14d192 << *reinterpret_cast<unsigned char*>(&ecx196);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_204) + 4) = 0;
    __asm__("xadd cl, dil");
    if (!*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx196) + 1)) {
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx193) + 1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx196) + 1);
    }
    __asm__("ror r14b, 0xab");
    __asm__("rcr r11w, 0xe5");
    __asm__("ror r13W, 1");
    r14_205 = r14_204 | 0xc000000000000000;
    rax206 = rax134 * r9_190 / r14_205;
    rbx207 = rbx193 & 0x533f8d65;
    __asm__("xadd r14b, bpl");
    *reinterpret_cast<uint16_t*>(&r11_197) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_197) & *reinterpret_cast<uint16_t*>(&r12_202));
    __asm__("rcr dx, 1");
    *reinterpret_cast<uint16_t*>(&r11_197) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_197) + 1);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&r11_197) < reinterpret_cast<int16_t>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r11_197) == 0))) {
        rbx207 = rax206;
    }
    *reinterpret_cast<int32_t*>(&rcx208) = *reinterpret_cast<int32_t*>(&r11_197) + *reinterpret_cast<int32_t*>(&r11_197) * 2 + 0x54835d6c;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx208) + 4) = 0;
    rbp209 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbp184) >> 1) | 0xc000000000000000;
    rdx210 = rax206 % rbp209;
    rax211 = rax206 / rbp209;
    __asm__("shrd cx, r14w, 0xa");
    *reinterpret_cast<uint32_t*>(&r10_212) = *reinterpret_cast<uint32_t*>(&r15_203) - (0x3707af0f - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r15_203) < 0xc8f850f1));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_212) + 4) = 0;
    *reinterpret_cast<int16_t*>(&rcx208) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx208) + 1);
    __asm__("rcl r12, 1");
    r13_213 = r13_174 + r10_212;
    *reinterpret_cast<int32_t*>(&rdx214) = *reinterpret_cast<int32_t*>(&rdx210) * 0xf2f09c66;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx214) + 4) = 0;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx214) + 1) == *reinterpret_cast<unsigned char*>(&rdx214)) {
        tmp8_215 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx214) + 1);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx214) + 1) = *reinterpret_cast<unsigned char*>(&rdx214);
        *reinterpret_cast<unsigned char*>(&rdx214) = tmp8_215;
    }
    __asm__("rol r9d, cl");
    __asm__("rol dh, 1");
    *reinterpret_cast<uint16_t*>(&r11_197) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_197) + *reinterpret_cast<uint16_t*>(&r14_205)) + 1) & 0xcc91);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r11_197) == 0))) {
        *reinterpret_cast<int32_t*>(&rax211) = *reinterpret_cast<int32_t*>(&rbx207);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax211) + 4) = 0;
    }
    rcx216 = rcx208 + 0x21f1fc4b;
    __asm__("btr bx, cx");
    *reinterpret_cast<uint32_t*>(&r12_217) = *reinterpret_cast<uint32_t*>(&r10_173);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_217) + 4) = 0;
    __asm__("shld r15d, ebx, 0x1");
    __asm__("btc rdx, 0xd4");
    *reinterpret_cast<uint32_t*>(&r14_218) = *reinterpret_cast<uint32_t*>(&r14_205) >> *reinterpret_cast<unsigned char*>(&rcx216);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_218) + 4) = 0;
    r14_219 = reinterpret_cast<uint64_t>(-r14_218);
    *reinterpret_cast<unsigned char*>(&rdx214) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx214) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx214) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdx214) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rdx214))))));
    r10_220 = r10_212 >> *reinterpret_cast<unsigned char*>(&rcx216);
    rbx221 = rax211;
    rax222 = rbx207;
    __asm__("shld rax, r10, 0x1");
    *reinterpret_cast<int16_t*>(&rbp209) = 0;
    *reinterpret_cast<unsigned char*>(&r10_220) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_220) ^ *reinterpret_cast<unsigned char*>(&rsi195));
    if (reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r10_220) == 0)) {
    }
    __asm__("rol rcx, cl");
    __asm__("rol r13W, 1");
    if (!*reinterpret_cast<int16_t*>(&r14_219)) {
        *reinterpret_cast<int16_t*>(&rbp209) = *reinterpret_cast<int16_t*>(&r14_219);
        *reinterpret_cast<int16_t*>(&r14_219) = 0;
    }
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&rsi195) = *reinterpret_cast<uint16_t*>(&rcx216);
    }
    if (__intrinsic()) {
        rax222 = rdx214;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx221) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx221) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx216) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx221) + 1) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx216) + __intrinsic()))));
    __asm__("rcr rbx, 1");
    __asm__("btc r12w, ax");
    r11_223 = r11_197 | rdx214;
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rax222) = *reinterpret_cast<int32_t*>(&rdi191);
    }
    rax224 = *reinterpret_cast<int32_t*>(&rax222);
    *reinterpret_cast<int32_t*>(&r15_225) = *reinterpret_cast<int32_t*>(&r12_202) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_225) + 4) = 0;
    r13d226 = *reinterpret_cast<uint32_t*>(&r13_213) << 14;
    edi227 = *reinterpret_cast<int16_t*>(&r10_220);
    __asm__("ror r8d, cl");
    r9_228 = *reinterpret_cast<unsigned char*>(&rcx216);
    __asm__("rcl rsi, 0x3e");
    *reinterpret_cast<int16_t*>(&rax224) = *reinterpret_cast<signed char*>(&rax224);
    __asm__("ror ebp, 0xfb");
    if (*reinterpret_cast<unsigned char*>(&rsi195) == *reinterpret_cast<unsigned char*>(&rcx216)) {
        tmp8_229 = *reinterpret_cast<unsigned char*>(&rsi195);
        *reinterpret_cast<unsigned char*>(&rsi195) = *reinterpret_cast<unsigned char*>(&rcx216);
        *reinterpret_cast<unsigned char*>(&rcx216) = tmp8_229;
    }
    __asm__("shrd r8, rdx, 0x1");
    *reinterpret_cast<int32_t*>(&r10_230) = *reinterpret_cast<int32_t*>(&r10_220) - 0x6f97f7e7;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_230) + 4) = 0;
    __asm__("shld r9, r11, cl");
    __asm__("bts r9d, 0xa");
    rax231 = *reinterpret_cast<int32_t*>(&rax224);
    ecx232 = *reinterpret_cast<uint32_t*>(&rcx216) & 0xd74cbe43;
    if (0) {
        r14_219 = r10_230;
    }
    __asm__("rcl r15w, 1");
    if (!((rdx214 & 0xffffffffef90610c) + r14_219 + 1)) {
        *reinterpret_cast<int16_t*>(&r9_228) = *reinterpret_cast<int16_t*>(&rbx221);
    }
    *reinterpret_cast<unsigned char*>(&edi227) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edi227) + *reinterpret_cast<unsigned char*>(&r15_225))));
    eax233 = *reinterpret_cast<uint32_t*>(&rax231) | 0x12959770;
    r10_234 = r10_230 - (0x6c8ff010 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r10_230 < 0x6c8ff010)));
    if (r14_219 == r10_234) {
        tmp64_235 = r14_219;
        r14_219 = r10_234;
        r10_234 = tmp64_235;
    }
    ebx236 = *reinterpret_cast<uint32_t*>(&rbx221) | 0xa020a6b;
    if (*reinterpret_cast<int16_t*>(&edi227) == *reinterpret_cast<int16_t*>(&r11_223)) {
        tmp16_237 = *reinterpret_cast<int16_t*>(&edi227);
        *reinterpret_cast<int16_t*>(&r11_223) = tmp16_237;
    }
    *reinterpret_cast<unsigned char*>(&r15_225) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_225) << *reinterpret_cast<unsigned char*>(&ecx232));
    __asm__("bsf r11, rbp");
    __asm__("btc ecx, r12d");
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r12_217) = *reinterpret_cast<int16_t*>(&rbp209);
    }
    *reinterpret_cast<uint32_t*>(&r9_238) = *reinterpret_cast<uint32_t*>(&r9_228) & r13d226;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_238) + 4) = 0;
    __asm__("rol r13d, cl");
    *reinterpret_cast<uint16_t*>(&r13d226) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13d226) & *reinterpret_cast<uint16_t*>(&rsi195));
    eax239 = eax233 - (0x6638cca8 - reinterpret_cast<uint1_t>(eax233 < 0x99c73358));
    rcx240 = r11_223;
    r11_241 = *reinterpret_cast<uint16_t*>(&ebx236);
    __asm__("btc rcx, 0xb1");
    __asm__("shrd r9, rdi, 0x58");
    *reinterpret_cast<uint32_t*>(&rdx242) = *reinterpret_cast<uint16_t*>(&rcx240);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx242) + 4) = 0;
    *reinterpret_cast<int16_t*>(&eax239) = 0;
    *reinterpret_cast<uint16_t*>(&rcx240) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx240) - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r15_225) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rcx240) < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r15_225) + __intrinsic()))));
    __asm__("shld r10d, eax, cl");
    rdx243 = rdx242 - 1;
    r14_244 = r14_219 + 0xc802fe;
    __asm__("rcl dl, 1");
    __asm__("shrd r11w, r10w, 0x6");
    edi245 = *reinterpret_cast<unsigned char*>(&rcx240);
    __asm__("btc ebp, 0x4d");
    __asm__("shld r9, rbx, 0xee");
    eax246 = eax239 ^ 0xfa8d9330;
    __asm__("bsr r10, rax");
    __asm__("rol r13d, cl");
    *reinterpret_cast<unsigned char*>(&r15_225) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_225) & *reinterpret_cast<unsigned char*>(&r11_241));
    rsi247 = reinterpret_cast<uint64_t>(rsi195 - 0x6df24853);
    *reinterpret_cast<uint32_t*>(&r11_248) = *reinterpret_cast<uint32_t*>(&r11_241) | *reinterpret_cast<uint32_t*>(&rsi247);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_248) + 4) = 0;
    __asm__("xadd dh, dh");
    r10_249 = r10_234 ^ 0xffffffffcaf2047e;
    *reinterpret_cast<unsigned char*>(&rbp209) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp209) + 0xc2)));
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&rbp209) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rbp209) == 0)) {
        *reinterpret_cast<int32_t*>(&rdx243) = *reinterpret_cast<int32_t*>(&rbp209);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx243) + 4) = 0;
    }
    if (!__intrinsic()) {
    }
    r13d250 = r13d226 - (*reinterpret_cast<int32_t*>(&r10_249) + reinterpret_cast<uint1_t>(r13d226 < *reinterpret_cast<int32_t*>(&r10_249) + 1));
    *reinterpret_cast<unsigned char*>(&eax246) = reinterpret_cast<unsigned char>(48 >> 0x7e);
    *reinterpret_cast<int16_t*>(&r12_217) = *reinterpret_cast<int16_t*>(&r12_217);
    r10_251 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r10_249) >> 1);
    __asm__("bsr rsi, rdx");
    rax252 = reinterpret_cast<int32_t>(eax246);
    __asm__("shrd ebx, r11d, 0x1");
    bl253 = reinterpret_cast<signed char>(reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&ebx236)) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax252) + 1));
    if (reinterpret_cast<uint1_t>(bl253 < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(bl253 == 0)) {
        *reinterpret_cast<int16_t*>(&r14_244) = -1;
    }
    r8_254 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int16_t*>(&rbp209)));
    *reinterpret_cast<int32_t*>(&r14_255) = *reinterpret_cast<int32_t*>(&r14_244) << 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_255) + 4) = 0;
    r8_256 = r8_254 - (r15_225 + reinterpret_cast<uint1_t>(r8_254 < r15_225 + 1));
    *reinterpret_cast<int16_t*>(&rax252) = *reinterpret_cast<signed char*>(&rax252);
    ecx257 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&rbp209)));
    *reinterpret_cast<int16_t*>(&r11_248) = static_cast<int16_t>(r13d250 + edi245 + 0xe4);
    *reinterpret_cast<signed char*>(&ebx236) = reinterpret_cast<signed char>(bl253 - 25);
    *reinterpret_cast<int16_t*>(&r13d250) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r13d250) >> 1);
    __asm__("rcr di, cl");
    __asm__("shrd r8w, r15w, 0x1");
    edi258 = *reinterpret_cast<unsigned char*>(&rax252);
    eax259 = *reinterpret_cast<int32_t*>(&rax252) >> 1;
    __asm__("shrd edx, ecx, 0x1");
    if (1) {
        *reinterpret_cast<int16_t*>(&rsi247) = *reinterpret_cast<int16_t*>(&r10_251);
    }
    ebx260 = reinterpret_cast<int32_t>(ebx236) >> *reinterpret_cast<signed char*>(&ecx257);
    __asm__("ror ch, 1");
    *reinterpret_cast<unsigned char*>(&r12_217) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_217) - 71) + __intrinsic());
    *reinterpret_cast<int16_t*>(&eax259) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax259) * *reinterpret_cast<int16_t*>(&r13d250));
    tmp32_261 = edi258 + *reinterpret_cast<int32_t*>(&rbp209) + 1;
    *reinterpret_cast<uint32_t*>(&rdi262) = tmp32_261;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi262) + 4) = 0;
    if (tmp32_261 < edi258) {
        r9_238 = r14_255;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx257) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx257) + 1) | 0x7d);
    *reinterpret_cast<uint16_t*>(&rdi262) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi262) >> 14);
    __asm__("bsf ecx, r15d");
    *reinterpret_cast<unsigned char*>(&r11_248) = reinterpret_cast<uint1_t>(static_cast<uint1_t>(ecx257 >> *reinterpret_cast<uint32_t*>(&r9_238)) | __undefined());
    __asm__("bsr r14d, r8d");
    __asm__("cwd ");
    *reinterpret_cast<signed char*>(&r13d250) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r13d250) - 0x70);
    *reinterpret_cast<uint32_t*>(&r8_263) = *reinterpret_cast<uint32_t*>(&r8_256) ^ *reinterpret_cast<uint32_t*>(&rdi262);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_263) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r13_264) = r13d250 & *reinterpret_cast<uint32_t*>(&rsi247);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_264) + 4) = 0;
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r13_264) = *reinterpret_cast<int16_t*>(&r10_251);
    }
    eax265 = eax259 >> 0xffffff93;
    __asm__("shrd r15, rdx, 0x85");
    rax266 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int16_t*>(&r10_251)));
    *reinterpret_cast<uint32_t*>(&rsi267) = *reinterpret_cast<uint32_t*>(&rsi247) << 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi267) + 4) = 0;
    cf268 = reinterpret_cast<uint1_t>(!!*reinterpret_cast<unsigned char*>(&r15_225));
    *reinterpret_cast<unsigned char*>(&r15_225) = -*reinterpret_cast<unsigned char*>(&r15_225);
    if (!reinterpret_cast<uint1_t>(cf268 | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r15_225) == 0))) {
        rax266 = rbp209;
    }
    *reinterpret_cast<unsigned char*>(&rbp209) = reinterpret_cast<unsigned char>(~*reinterpret_cast<unsigned char*>(&rbp209));
    __asm__("ror r9d, 0x5f");
    __asm__("shrd r10d, esi, cl");
    __asm__("ror r13d, 0x6d");
    *reinterpret_cast<signed char*>(&r14_255) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r14_255) - 1);
    cf269 = reinterpret_cast<uint1_t>(ecx257 < 0x57e92049);
    *reinterpret_cast<uint32_t*>(&rcx270) = ecx257 - (0x57e92049 + cf269);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx270) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&ebx260) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax265) - reinterpret_cast<unsigned char>(19 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax265) < reinterpret_cast<unsigned char>(19 - cf269))));
    __asm__("shld r10d, r14d, 0x49");
    *reinterpret_cast<int16_t*>(&rax266) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax266) * *reinterpret_cast<int16_t*>(&rsi267));
    *reinterpret_cast<int16_t*>(&rdx243) = __intrinsic();
    __asm__("rcr rax, cl");
    *reinterpret_cast<int32_t*>(&rbx271) = ebx260 * 0x4eb0fc3f;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx271) + 4) = 0;
    cf272 = reinterpret_cast<uint1_t>(rsi267 < 0x5ee7b109 - static_cast<uint64_t>(__intrinsic()));
    rsi273 = rsi267 - (0x5ee7b109 - static_cast<uint64_t>(cf272));
    if (reinterpret_cast<int64_t>(rsi273) < reinterpret_cast<int64_t>(static_cast<uint64_t>(cf272))) {
        *reinterpret_cast<int16_t*>(&rdx243) = *reinterpret_cast<int16_t*>(&rdx243);
    }
    __asm__("ror eax, 0xb4");
    return rax266 + rbx271 + rcx270 + rdx243 + rbp209 + rsi273 + rdi262 + r8_263 + r9_238 + r10_251 + r11_248 + r12_217 + r13_264 + r14_255 + (r15_225 - (0x6ce7a5f - static_cast<uint64_t>(reinterpret_cast<uint1_t>(r15_225 < 0xfffffffff93185a2)))) - 0x65d55e944;
}

uint64_t log_size_10_var_001(int64_t rdi, int64_t rsi) {
    int64_t rsi3;
    uint64_t rdi4;
    uint64_t r8_5;
    int64_t r13_6;
    uint64_t r14_7;
    uint64_t r15_8;
    int64_t rbp9;
    int64_t r12_10;
    int64_t r10_11;
    uint64_t r15_12;
    uint64_t rbx13;
    uint32_t r9d14;
    int32_t ebp15;
    uint32_t edi16;
    int64_t r9_17;
    int32_t eax18;
    uint32_t edx19;
    uint64_t r11_20;
    uint1_t cf21;
    int64_t rdi22;
    int1_t less_or_equal23;
    uint64_t rbp24;
    uint32_t edi25;
    uint32_t tmp32_26;
    int64_t r15_27;
    uint64_t r14_28;
    uint64_t rdx29;
    uint64_t tmp64_30;
    uint64_t rcx31;
    uint16_t bx32;
    uint64_t rax33;
    uint16_t dx34;
    uint16_t ax35;
    uint64_t r8_36;
    uint64_t tmp64_37;
    uint16_t tmp16_38;
    uint32_t edi39;
    uint64_t r12_40;
    int64_t rsi41;
    int64_t rbp42;
    int64_t r10_43;
    int64_t rdi44;
    uint32_t r15d45;
    uint32_t r14d46;
    uint64_t r13_47;
    uint64_t rdx48;
    uint64_t r12_49;
    uint32_t r10d50;
    uint64_t rsi51;
    uint64_t tmp64_52;
    uint64_t rcx53;
    uint32_t tmp32_54;
    uint64_t r15_55;
    uint1_t cf56;
    int32_t r14d57;
    uint1_t cf58;
    uint32_t r12d59;
    int64_t r14_60;
    uint64_t r12_61;
    uint64_t r14_62;
    uint64_t rbx63;
    int64_t rbp64;
    int64_t rax65;
    uint32_t r10d66;
    uint32_t eax67;
    int16_t ax68;
    int64_t rcx69;
    uint64_t rdx70;
    int64_t r9_71;
    uint64_t rdi72;
    int32_t r11d73;
    int64_t rbx74;
    int64_t rbp75;
    uint64_t r14_76;
    int64_t r8_77;
    uint64_t rdx78;
    uint64_t rdx79;
    uint32_t esi80;
    uint32_t r10d81;
    uint1_t cf82;
    int64_t r14_83;
    int64_t rbp84;
    int16_t ax85;
    uint64_t r15_86;
    uint32_t r10d87;
    uint32_t r8d88;
    uint32_t eax89;
    int64_t r10_90;
    int64_t rbp91;
    int64_t rax92;
    int64_t r9_93;
    int64_t rbp94;
    uint64_t r15_95;
    uint64_t r11_96;
    int64_t rax97;
    unsigned char r9b98;
    int16_t si99;
    uint64_t rax100;
    uint64_t rdi101;
    int64_t rbx102;
    int64_t r13_103;
    uint32_t r8d104;
    int64_t rcx105;
    uint64_t rax106;
    int64_t rbp107;
    int64_t r14_108;
    uint32_t ebp109;
    uint32_t edx110;
    uint32_t eax111;
    uint32_t eax112;
    uint32_t r15d113;
    uint1_t cf114;
    uint16_t r12w115;
    uint64_t rbp116;
    int64_t rdx117;
    int64_t rcx118;
    uint64_t r15_119;
    uint64_t r9_120;
    uint16_t ax121;
    int64_t rax122;
    uint64_t rbx123;
    uint32_t esi124;
    uint64_t rdi125;
    uint64_t r11_126;
    uint64_t rax127;
    uint64_t rax128;
    int64_t rcx129;
    int64_t r8_130;
    int64_t rdx131;
    uint32_t ebx132;
    uint16_t dx133;
    uint64_t r9_134;
    uint32_t edi135;
    uint64_t rbx136;
    uint64_t r14_137;
    uint32_t esi138;
    int64_t r10_139;
    int64_t r12_140;
    uint64_t rcx141;
    uint64_t rbp142;
    int64_t rcx143;
    uint64_t rcx144;
    int64_t rax145;
    uint32_t eax146;
    uint64_t rbx147;
    uint64_t r15_148;
    uint64_t r11_149;
    uint64_t rcx150;
    int64_t r8_151;
    int64_t rbp152;
    int64_t r13_153;
    uint64_t rcx154;
    uint16_t cx155;
    uint64_t r9_156;
    int64_t r15_157;
    uint64_t r8_158;
    uint16_t r9w159;
    uint16_t cx160;
    uint32_t tmp32_161;
    uint32_t r12d162;
    int64_t r13_163;
    uint64_t r8_164;
    int64_t r15_165;
    uint64_t rdi166;
    uint32_t eax167;
    int64_t r10_168;
    int64_t r12_169;
    uint64_t r10_170;
    int64_t rdx171;
    uint64_t rsi172;
    int64_t rax173;
    uint64_t r9_174;
    uint64_t rbx175;
    int64_t rcx176;
    unsigned char tmp8_177;
    int64_t r9_178;
    uint64_t tmp64_179;
    int64_t r8_180;
    uint32_t r11d181;
    int32_t edx182;
    uint64_t rbx183;
    int64_t rax184;
    uint64_t r12_185;
    int64_t r8_186;
    int64_t r14_187;
    uint64_t r11_188;
    int64_t rdi189;
    uint16_t dx190;
    uint64_t r9_191;
    uint16_t r13w192;
    uint64_t rbx193;
    uint64_t rcx194;
    int16_t tmp16_195;
    uint32_t ebp196;
    uint64_t r9_197;
    int1_t less198;
    uint1_t cf199;
    int64_t r14_200;
    uint32_t r14d201;
    uint16_t r13w202;
    uint64_t r9_203;
    int64_t rcx204;
    uint64_t r14_205;
    int64_t r10_206;
    uint16_t ax207;
    uint64_t rdx208;
    int16_t ax209;
    uint64_t rsi210;
    uint16_t r14w211;
    uint64_t rcx212;
    uint16_t dx213;
    uint64_t r14_214;
    uint64_t rsi215;
    uint64_t rbp216;
    int64_t rax217;
    uint64_t r15_218;
    uint1_t less219;
    uint1_t less_or_equal220;
    uint64_t rcx221;
    uint32_t tmp32_222;
    int64_t rcx223;
    uint64_t rsi224;
    uint64_t r11_225;
    uint64_t rsi226;
    uint64_t r11_227;
    uint32_t edx228;
    int64_t rax229;
    int64_t r13_230;
    int64_t rdi231;
    int64_t r10_232;
    uint16_t ax233;
    uint16_t ax234;
    uint64_t rsi235;
    uint64_t rdi236;
    uint64_t r12_237;
    uint64_t r11_238;
    uint64_t rdx239;
    uint1_t cf240;
    uint64_t rdx241;
    int64_t r10_242;
    unsigned char tmp8_243;
    uint1_t cf244;
    uint64_t rax245;
    int64_t r12_246;
    int64_t rbx247;

    rsi3 = 0x27f36a7a8594f33a;
    rdi4 = 0xf158dac69dc64cfe;
    r8_5 = 0x4cda08784420913e;
    r13_6 = 0xd4d5cf286bbec6c1;
    r14_7 = 0xb740bbc756ad20c0;
    r15_8 = 0x79bfe16f1d0a253c;
    if (1) {
        rdi4 = 0xf6a2a759dbae0272;
    }
    __asm__("lahf ");
    rbp9 = 0xffffffffdbae83ff;
    r12_10 = 0x8e48b69063fe0d60 >> 84;
    if (1) {
    }
    __asm__("rcr r14w, 1");
    __asm__("bts rdi, r13");
    *reinterpret_cast<unsigned char*>(&rbp9) = 0;
    if (0) {
        *reinterpret_cast<uint32_t*>(&r15_8) = 0x8594f33a;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_8) + 4) = 0;
    }
    __asm__("btr r15, rdx");
    if (0xd100 ^ *reinterpret_cast<uint32_t*>(&r12_10)) {
        *reinterpret_cast<int16_t*>(&rbp9) = *reinterpret_cast<int16_t*>(&r15_8);
    }
    if (__intrinsic()) {
        *reinterpret_cast<int32_t*>(&r14_7) = 0x6936f540;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_7) + 4) = 0;
    }
    *reinterpret_cast<unsigned char*>(&r13_6) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(0xc1) >> 64);
    *reinterpret_cast<unsigned char*>(&rsi3) = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(0xce & *reinterpret_cast<unsigned char*>(&r13_6)) < reinterpret_cast<signed char>(0));
    r10_11 = r13_6;
    r15_12 = r15_8 ^ 0xf6a2a759dbae83ff;
    *reinterpret_cast<uint16_t*>(&r14_7) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_7) - reinterpret_cast<uint16_t>(0x507d - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r14_7) < 0xaf84)));
    __asm__("shld r9d, eax, cl");
    *reinterpret_cast<int32_t*>(&rbx13) = static_cast<int32_t>(rbp9 - 0x2d8d8ef9);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx13) + 4) = 0;
    __asm__("btr dx, r9w");
    *reinterpret_cast<unsigned char*>(&rdi4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi4) & 0x83);
    *reinterpret_cast<unsigned char*>(&rbp9) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp9) - reinterpret_cast<unsigned char>(55 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rbp9) < 0xca)));
    __asm__("cwd ");
    __asm__("rcr r13, 1");
    r9d14 = 0xdbae83e5 >> 64;
    __asm__("btr r14w, 0x1a");
    ebp15 = *reinterpret_cast<int32_t*>(&rbp9) * 0xc90657d3;
    __asm__("xadd r9, rsi");
    edi16 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rdi4) + 0x7f7daf83);
    __asm__("btc bx, r13W");
    __asm__("rol edi, cl");
    __asm__("bts rsi, r15");
    r9_17 = *reinterpret_cast<int16_t*>(&r9d14);
    __asm__("rcl al, 1");
    __asm__("bts eax, edx");
    __asm__("ror rdi, cl");
    __asm__("ror cl, 1");
    __asm__("ror r9b, 1");
    eax18 = 0xf38bca5a;
    edx19 = __intrinsic();
    __asm__("rcl r14, 1");
    r11_20 = 0x2c3770101532d9b3;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&edx19) + 1) = -*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&edx19) + 1);
    cf21 = reinterpret_cast<uint1_t>(0xb3 < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&edi16) + 1));
    *reinterpret_cast<unsigned char*>(&r11_20) = reinterpret_cast<unsigned char>(0xb3 - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&edi16) + cf21));
    *reinterpret_cast<signed char*>(&rbx13) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax18) + 1);
    rdi22 = *reinterpret_cast<int16_t*>(&r11_20);
    __asm__("xadd rbp, r11");
    *reinterpret_cast<uint16_t*>(&r8_5) = reinterpret_cast<uint16_t>(0x66c9 - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx19) + reinterpret_cast<uint1_t>(0x66c9 < reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx19) + cf21))));
    less_or_equal23 = *reinterpret_cast<signed char*>(&rdi22) <= reinterpret_cast<signed char>(90);
    *reinterpret_cast<unsigned char*>(&rdi22) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi22) - reinterpret_cast<unsigned char>(90 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdi22) < 90)));
    if (!less_or_equal23) {
        *reinterpret_cast<int16_t*>(&rdi22) = *reinterpret_cast<int16_t*>(&r9_17);
    }
    __asm__("shrd rbp, r12, cl");
    __asm__("rcl dh, cl");
    *reinterpret_cast<uint16_t*>(&edx19) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx19) >> 6);
    *reinterpret_cast<uint32_t*>(&rbp24) = *reinterpret_cast<uint16_t*>(&ebp15);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp24) + 4) = 0;
    edi25 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rdi22) + 0x3eedd37);
    __asm__("rcr ah, 1");
    tmp32_26 = *reinterpret_cast<uint32_t*>(&r15_12) + 0x50fe81f2;
    *reinterpret_cast<uint32_t*>(&r15_27) = tmp32_26;
    *reinterpret_cast<uint16_t*>(&rbp24) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp24) - 1);
    *reinterpret_cast<uint16_t*>(&rsi3) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi3) + 1) - 0x24da) + reinterpret_cast<uint1_t>(tmp32_26 < *reinterpret_cast<uint32_t*>(&r15_12)));
    r14_28 = r14_7 >> 0x76;
    *reinterpret_cast<uint32_t*>(&rdx29) = edx19 ^ 0x3c2ee30c;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = 0;
    __asm__("rol r11d, cl");
    __asm__("shrd r13W, r9w, 0x1");
    __asm__("xadd r10w, r9w");
    if (0) {
        tmp64_30 = rdx29;
        rbx13 = tmp64_30;
    }
    rcx31 = 0x33a7cb8569363b73 >> -32;
    *reinterpret_cast<int16_t*>(&r12_10) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r12_10) >> 0x68);
    bx32 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx13) << 1);
    rax33 = 0 >> *reinterpret_cast<unsigned char*>(&rcx31);
    __asm__("ror rdi, 0x1d");
    __asm__("bsr rbp, r12");
    *reinterpret_cast<uint16_t*>(&r14_28) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_28) | 0xc000);
    dx34 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax33) % *reinterpret_cast<uint16_t*>(&r14_28));
    ax35 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax33) / *reinterpret_cast<uint16_t*>(&r14_28));
    __asm__("rol rax, 0xd7");
    __asm__("rol r14b, cl");
    r8_36 = r8_5 ^ 0x1a0ddc47;
    __asm__("btr r14w, r8w");
    if (0) {
        *reinterpret_cast<uint16_t*>(&rbp24) = *reinterpret_cast<uint16_t*>(&rsi3);
    }
    __asm__("rcl ebx, 0xe8");
    __asm__("bsf rbp, r13");
    if (rbp24 == rcx31) {
        tmp64_37 = rbp24;
        rcx31 = tmp64_37;
    }
    if (0) {
        edi25 = *reinterpret_cast<uint32_t*>(&r8_36);
    }
    __asm__("bts rdi, r8");
    __asm__("rol r10b, 0x44");
    if (*reinterpret_cast<uint16_t*>(&r15_27) == bx32) {
        tmp16_38 = *reinterpret_cast<uint16_t*>(&r15_27);
        *reinterpret_cast<uint16_t*>(&r15_27) = bx32;
        bx32 = tmp16_38;
    }
    *reinterpret_cast<signed char*>(&edi25) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&edi25) >> 99);
    *reinterpret_cast<uint16_t*>(&r15_27) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_27) ^ 0x6f81);
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r15_27) == 0)))) {
        *reinterpret_cast<uint16_t*>(&r14_28) = ax35;
    }
    *reinterpret_cast<uint16_t*>(&rax33) = reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&ax35) * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&r15_27))));
    __asm__("rcl r10d, 1");
    edi39 = edi25 ^ 0x7bac7f;
    __asm__("rol si, 0x61");
    *reinterpret_cast<uint32_t*>(&r12_40) = *reinterpret_cast<uint32_t*>(&r12_10) ^ *reinterpret_cast<uint32_t*>(&r15_27);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_40) + 4) = 0;
    __asm__("cdq ");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx31) + 1) = 2;
    __asm__("bsr si, dx");
    *reinterpret_cast<uint32_t*>(&rsi41) = *reinterpret_cast<uint32_t*>(&rsi3) << *reinterpret_cast<unsigned char*>(&rcx31);
    *reinterpret_cast<unsigned char*>(&edi39) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edi39) + 67))) | 28);
    __asm__("btc ebx, r9d");
    *reinterpret_cast<uint16_t*>(&r10_11) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_11) - 0x1bb1)));
    *reinterpret_cast<signed char*>(&rbx13) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&bx32) - 8);
    *reinterpret_cast<uint32_t*>(&rbp42) = *reinterpret_cast<uint32_t*>(&r12_40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp42) + 4) = 0;
    r10_43 = r10_11 - 0xba13e6f;
    *reinterpret_cast<unsigned char*>(&r10_43) = 0xff;
    if (*reinterpret_cast<uint16_t*>(&rax33) >= dx34) {
        r12_40 = rcx31;
    }
    *reinterpret_cast<uint32_t*>(&rdi44) = edi39 ^ 0x3f195e09;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi44) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r11_20) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_20) + 0x4402)));
    r15d45 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&r11_20)));
    r14d46 = (*reinterpret_cast<int32_t*>(&r14_28) - 0x3b4ad85 + 1) * 0xc73c1e83;
    r13_47 = 0xe378656f7f7daf83;
    rdx48 = rax33 * rcx31 / 0xe378656f7f7daf83 % 0xe378656f7f7daf83;
    r12_49 = r12_40 | r11_20;
    __asm__("rcl edi, cl");
    r10d50 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r10_43) + 1);
    __asm__("bts edx, 0x79");
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r12_49) = *reinterpret_cast<uint16_t*>(&r11_20);
    }
    *reinterpret_cast<uint32_t*>(&rsi51) = *reinterpret_cast<uint32_t*>(&rsi41) - (0x28dcf732 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rsi41) < 0x28dcf732)) & 0x928bd803;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi51) + 4) = 0;
    tmp64_52 = rcx31 + 0xffffffffd750b378 + 1;
    rcx53 = tmp64_52;
    if (tmp64_52 < rcx31) {
        rcx53 = rsi51;
    }
    __asm__("rcr r13, 1");
    if (r10d50 == *reinterpret_cast<uint32_t*>(&rdx48)) {
        r10d50 = *reinterpret_cast<uint32_t*>(&rdx48);
    }
    tmp32_54 = r15d45 + 0xffffffff + 1;
    *reinterpret_cast<uint32_t*>(&r15_55) = tmp32_54;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_55) + 4) = 0;
    *reinterpret_cast<int16_t*>(&rdi44) = *reinterpret_cast<int16_t*>(&r14d46);
    cf56 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx53) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rbx13) + reinterpret_cast<uint1_t>(tmp32_54 < r15d45)));
    *reinterpret_cast<unsigned char*>(&rcx53) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx53) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rbx13) + cf56));
    r14d57 = static_cast<int32_t>(rbp42 + rbp42 * 8 + 0x256be85b);
    cf58 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rbp42) < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rcx53) + cf56));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx13) + 1) = reinterpret_cast<uint1_t>(!cf58);
    if (*reinterpret_cast<int16_t*>(&rbp42) <= reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rcx53) + cf56)) {
    }
    __asm__("btc ax, 0x2f");
    *reinterpret_cast<uint16_t*>(&rbp42) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp42) - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rcx53) + cf58)) * 0xd0f0);
    r12d59 = *reinterpret_cast<uint32_t*>(&r12_49) >> *reinterpret_cast<unsigned char*>(&rcx53);
    __asm__("rcr r11d, 0x82");
    __asm__("rol rdx, cl");
    __asm__("rol r13W, cl");
    __asm__("xadd r8w, r12w");
    *reinterpret_cast<int32_t*>(&r14_60) = -r14d57;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_60) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r12_61) = r12d59 - (*reinterpret_cast<uint32_t*>(&rbp42) + reinterpret_cast<uint1_t>(r12d59 < *reinterpret_cast<uint32_t*>(&rbp42) + reinterpret_cast<uint1_t>(!!r14d57)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_61) + 4) = 0;
    __asm__("shld r9, rsi, 0x1");
    __asm__("rcl si, 1");
    r14_62 = r14_60 - 0x24c23774 + 1;
    __asm__("rol r12b, 1");
    rbx63 = rbx13 - (0x662095c - static_cast<uint64_t>(reinterpret_cast<uint1_t>(rbx13 < 0xfffffffff99df6a4)));
    *reinterpret_cast<int32_t*>(&rbp64) = *reinterpret_cast<int32_t*>(&rbp42) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp64) + 4) = 0;
    __asm__("xadd r8b, r14b");
    rax65 = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax65) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    r10d66 = r10d50 - (0x7344ea85 + reinterpret_cast<uint1_t>(r10d50 < 0x7344ea86)) | 0xc0000000;
    eax67 = *reinterpret_cast<uint32_t*>(&rax65) / r10d66;
    ax68 = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&eax67) * *reinterpret_cast<signed char*>(&eax67));
    *reinterpret_cast<int32_t*>(&rcx69) = *reinterpret_cast<int16_t*>(&rsi51);
    __asm__("ror r11d, 0x9b");
    *reinterpret_cast<uint32_t*>(&rdx70) = *reinterpret_cast<uint32_t*>(&rax65) % r10d66 >> 20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx70) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r9_71) = *reinterpret_cast<uint32_t*>(&rdi44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_71) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r13_47) = reinterpret_cast<uint16_t>(0xaf83 >> 31);
    *reinterpret_cast<int16_t*>(&r10d66) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r10d66) >> -2);
    rdi72 = rdi44 + 0x444c1514;
    if (reinterpret_cast<int64_t>(rdi72) < reinterpret_cast<int64_t>(0)) {
        r15_55 = r14_62;
    }
    __asm__("ror r13d, 1");
    r11d73 = *reinterpret_cast<int32_t*>(&rbx63);
    *reinterpret_cast<int32_t*>(&rbx74) = 0;
    rbp75 = rbp64 * 0xffffffff92fdc4ad;
    r14_76 = r14_62 + 0x575878c;
    *reinterpret_cast<int16_t*>(&rbp75) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbp75) << 1);
    r8_77 = *reinterpret_cast<int16_t*>(&r10d66);
    *reinterpret_cast<signed char*>(&rsi51) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rsi51) >> 1);
    rdx78 = rdx70 - (r13_47 + reinterpret_cast<uint1_t>(rdx70 < r13_47 + 1));
    __asm__("ror r9b, cl");
    __asm__("rol r10b, 1");
    __asm__("shld ax, si, cl");
    *reinterpret_cast<uint32_t*>(&rdx79) = *reinterpret_cast<int32_t*>(&rdx78) + 0x43d60a92 + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx79) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx79) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx79) + 1) >> 1);
    esi80 = *reinterpret_cast<uint32_t*>(&rsi51) + 0x606bc9d9 + 1;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi80) < reinterpret_cast<int32_t>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(esi80 == 0))) {
        r14_76 = rdx79;
    }
    *reinterpret_cast<int16_t*>(&eax67) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax68) + 1);
    __asm__("rcl rdx, 1");
    __asm__("btr r9w, r12w");
    __asm__("ror r10w, cl");
    __asm__("shrd esi, r14d, 0xd1");
    *reinterpret_cast<uint16_t*>(&r13_47) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_47) & *reinterpret_cast<uint16_t*>(&r8_77));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx74) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx74) + 1) - reinterpret_cast<unsigned char>(50 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx74) + 1) < 0xcf)));
    r10d81 = r10d66;
    __asm__("btc r8, 0x43");
    *reinterpret_cast<uint16_t*>(&r8_77) = 0;
    cf82 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdi72) < 0x74);
    *reinterpret_cast<uint32_t*>(&r14_83) = *reinterpret_cast<int32_t*>(&r14_76) - eax67 - 0x68c25a30 + cf82;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_83) + 4) = 0;
    rbp84 = rbp75 << reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx69) & 15);
    if (*reinterpret_cast<signed char*>(&r14_83) > -59) {
        r8_77 = r14_83;
    }
    ax85 = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&eax67) * *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax67) + 1));
    if (*reinterpret_cast<int16_t*>(&r15_55) == ax85) {
        *reinterpret_cast<int16_t*>(&r15_55) = ax85;
    }
    *reinterpret_cast<unsigned char*>(&r10d81) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10d81) ^ *reinterpret_cast<unsigned char*>(&r11d73));
    *reinterpret_cast<unsigned char*>(&rdi72) = -reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi72) - reinterpret_cast<unsigned char>(0x74 + cf82));
    *reinterpret_cast<uint16_t*>(&r9_71) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_71) ^ 0x7a32);
    __asm__("btr di, 0x0");
    r15_86 = r15_55 | 0xffffffffcc746d0c;
    __asm__("shrd r13, r10, 0x6c");
    r10d87 = r10d81 >> 1;
    __asm__("rcr ebp, 1");
    r8d88 = *reinterpret_cast<uint32_t*>(&r8_77) & 0xc52f7ca0;
    __asm__("rcr ah, 1");
    __asm__("btr rdx, r15");
    if (0) {
        *reinterpret_cast<uint16_t*>(&rbx74) = 0;
    }
    *reinterpret_cast<uint16_t*>(&rbx74) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx74) - reinterpret_cast<uint16_t>(0x3631 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rbx74) < 0x3632)));
    __asm__("shrd si, r14w, 0x1");
    *reinterpret_cast<int16_t*>(&eax67) = 0;
    eax89 = eax67 / (reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&rbx74))) | 0xc0000000);
    *reinterpret_cast<uint32_t*>(&r10_90) = r10d87 - (*reinterpret_cast<uint32_t*>(&r14_83) + reinterpret_cast<uint1_t>(r10d87 < *reinterpret_cast<uint32_t*>(&r14_83)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_90) + 4) = 0;
    __asm__("bsr r14, rdi");
    *reinterpret_cast<int16_t*>(&r15_86) = *reinterpret_cast<int16_t*>(&rbp84);
    *reinterpret_cast<int16_t*>(&eax89) = 0xf15e;
    __asm__("bsf r12d, r14d");
    __asm__("ror r13d, cl");
    if (*reinterpret_cast<unsigned char*>(&r12_61) == *reinterpret_cast<unsigned char*>(&r13_47)) {
        *reinterpret_cast<unsigned char*>(&r12_61) = *reinterpret_cast<unsigned char*>(&r13_47);
    }
    *reinterpret_cast<uint32_t*>(&rbp91) = *reinterpret_cast<uint32_t*>(&rbp84) | 0xc0000000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp91) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rax92) = eax89 / *reinterpret_cast<uint32_t*>(&rbp91);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax92) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rax92) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax92) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_90) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rax92) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r10_90))))));
    r9_93 = ~r9_71;
    rbp94 = rbp91 - 0x41979e87;
    __asm__("bts ebx, r8d");
    *reinterpret_cast<uint32_t*>(&r15_95) = *reinterpret_cast<int32_t*>(&r15_86) - 0xfd82a14 + 1 + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_95) + 4) = 0;
    *reinterpret_cast<int16_t*>(&r14_83) = reinterpret_cast<int16_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&r14_83)));
    __asm__("shld r9w, ax, cl");
    __asm__("btc r15d, 0x8");
    *reinterpret_cast<uint16_t*>(&rax92) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax92) * *reinterpret_cast<uint16_t*>(&r10_90));
    __asm__("ror r14w, cl");
    *reinterpret_cast<uint32_t*>(&r11_96) = reinterpret_cast<uint32_t>(r11d73 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_96) + 4) = 0;
    rax97 = (rax92 + 0x5e5e1412) * r14_83;
    r9b98 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r9_93) - 0x6b) + 1);
    *reinterpret_cast<uint16_t*>(&rbp94) = reinterpret_cast<uint16_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&rbp94)));
    *reinterpret_cast<uint16_t*>(&r10_90) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_90) - 0x6300);
    si99 = *reinterpret_cast<signed char*>(&r8d88);
    __asm__("shrd ebx, r15d, 0xac");
    rax100 = reinterpret_cast<uint64_t>(rax97 * rax97);
    *reinterpret_cast<unsigned char*>(&r11_96) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_96) + r9b98) + 1);
    __asm__("rcr rcx, 1");
    rdi101 = rdi72 ^ r12_61;
    *reinterpret_cast<signed char*>(&rbp94) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbp94) << 1);
    __asm__("btc r9, rdx");
    __asm__("rcl rdx, cl");
    *reinterpret_cast<int32_t*>(&rbx102) = *reinterpret_cast<int32_t*>(&rax100);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx102) + 4) = 0;
    r13_103 = 0;
    r8d104 = *reinterpret_cast<uint16_t*>(&rbp94);
    *reinterpret_cast<signed char*>(&r14_83) = 0x7b;
    *reinterpret_cast<int16_t*>(&rax100) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax100) * *reinterpret_cast<int16_t*>(&r14_83));
    *reinterpret_cast<uint32_t*>(&rcx105) = *reinterpret_cast<uint32_t*>(&r14_83);
    if (__intrinsic()) {
        rcx105 = r10_90;
    }
    rax106 = rax100 & r15_95;
    __asm__("btc ax, cx");
    rbp107 = ~rbp94;
    __asm__("shrd rsi, r8, 0x1");
    *reinterpret_cast<unsigned char*>(&rcx105) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx105) & 15);
    __asm__("shld r14w, r11w, cl");
    __asm__("bts dx, 0x28");
    *reinterpret_cast<uint32_t*>(&r14_108) = 0x100 - *reinterpret_cast<uint32_t*>(&r12_61);
    __asm__("bsr r10w, r15w");
    ebp109 = *reinterpret_cast<uint32_t*>(&rbp107) | 0xc0000000;
    edx110 = *reinterpret_cast<uint32_t*>(&rax106) % ebp109;
    eax111 = *reinterpret_cast<uint32_t*>(&rax106) / ebp109;
    __asm__("rcr r12b, cl");
    __asm__("bts r9, r13");
    __asm__("ror bp, 0x48");
    *reinterpret_cast<uint16_t*>(&rcx105) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx105) >> *reinterpret_cast<unsigned char*>(&rcx105));
    *reinterpret_cast<int16_t*>(&eax111) = *reinterpret_cast<signed char*>(&eax111);
    eax112 = eax111 + 0x2014d58e;
    __asm__("xadd r11d, r11d");
    r15d113 = *reinterpret_cast<uint32_t*>(&r15_95) ^ *reinterpret_cast<uint32_t*>(&r11_96);
    *reinterpret_cast<unsigned char*>(&r13_103) = reinterpret_cast<unsigned char>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(r9b98 + (0 < reinterpret_cast<unsigned char>(r9b98 + 1)))));
    cf114 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r12_61) < 0x89);
    *reinterpret_cast<unsigned char*>(&r12_61) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_61) - reinterpret_cast<unsigned char>(0x77 - cf114));
    if (*reinterpret_cast<signed char*>(&r12_61) >= reinterpret_cast<signed char>(static_cast<uint32_t>(cf114))) {
        r8d104 = ebp109;
    }
    __asm__("bts ax, r10w");
    r12w115 = *reinterpret_cast<uint16_t*>(&r13_103);
    *reinterpret_cast<uint16_t*>(&r13_103) = *reinterpret_cast<uint16_t*>(&r12_61);
    *reinterpret_cast<uint16_t*>(&r12_61) = reinterpret_cast<uint16_t>(r12w115 - reinterpret_cast<uint16_t>(si99 + reinterpret_cast<uint1_t>(r12w115 < reinterpret_cast<uint16_t>(si99 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax112) + 1) < *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx110) + 1))))));
    __asm__("bsf bp, r11w");
    *reinterpret_cast<uint32_t*>(&rbp116) = *reinterpret_cast<uint32_t*>(&r12_61) + 80;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp116) + 4) = 0;
    rdx117 = reinterpret_cast<int32_t>(r15d113);
    __asm__("btc r13W, 0x38");
    *reinterpret_cast<uint16_t*>(&r8d104) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8d104) + 0x74b4) + 1);
    *reinterpret_cast<uint32_t*>(&rcx118) = *reinterpret_cast<uint32_t*>(&rcx105) >> *reinterpret_cast<unsigned char*>(&rcx105);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx118) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rcx118) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx118) | 0x7210);
    __asm__("rcr r8d, 1");
    __asm__("rcl rsi, cl");
    *reinterpret_cast<uint16_t*>(&rdi101) = reinterpret_cast<uint16_t>(0xc9e6 | *reinterpret_cast<uint16_t*>(&r15d113));
    *reinterpret_cast<uint16_t*>(&r12_61) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_61) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_103) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r12_61) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r13_103))))));
    *reinterpret_cast<uint32_t*>(&r15_119) = *reinterpret_cast<uint32_t*>(&rbp116);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_119) + 4) = 0;
    __asm__("bsf edi, r14d");
    __asm__("btr rbx, 0xda");
    __asm__("rcl sil, 1");
    __asm__("cdq ");
    __asm__("bsr r13, rcx");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax112) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax112) + 1) - *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx110) + 1)) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx117) + 1));
    __asm__("rol r15, 1");
    r9_120 = *reinterpret_cast<uint32_t*>(&rbp116) + r8d104 * 8;
    *reinterpret_cast<uint16_t*>(&rbx102) = reinterpret_cast<uint16_t>(0x3bb6 + *reinterpret_cast<uint16_t*>(&r10_90));
    *reinterpret_cast<uint16_t*>(&r11_96) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_96) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax112) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r11_96) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax112))))));
    ax121 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax112) * *reinterpret_cast<uint16_t*>(&r10_90));
    __asm__("shrd ebx, r14d, 0x1");
    if (__undefined()) {
        r9_120 = r9_120;
    }
    *reinterpret_cast<int32_t*>(&rax122) = reinterpret_cast<int16_t>(ax121);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax122) + 4) = 0;
    __asm__("rcr dl, 1");
    __asm__("btc ax, r11w");
    rbx123 = rbx102 + r15_119 * 8 + 0xa0;
    __asm__("rol r9b, 1");
    if (*reinterpret_cast<unsigned char*>(&r12_61) == *reinterpret_cast<unsigned char*>(&r8d104)) {
        *reinterpret_cast<unsigned char*>(&r12_61) = *reinterpret_cast<unsigned char*>(&r8d104);
    }
    if (!__intrinsic()) {
    }
    esi124 = *reinterpret_cast<unsigned char*>(&rbx123);
    rdi125 = rdi101 + 0x579368be;
    __asm__("shrd rsi, r9, 0x9a");
    __asm__("bts r15, rsi");
    r11_126 = r11_96 | 0xc000000000000000;
    rax127 = rax122 / r11_126;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx123) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx123) + 1) >> *reinterpret_cast<signed char*>(&rcx118));
    rax128 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax127)));
    *reinterpret_cast<unsigned char*>(&r12_61) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_61) >> 28);
    rcx129 = rcx118 * 0x5f8f1e61;
    r8_130 = 0x7ffffffffffffffe;
    rdx131 = *reinterpret_cast<int16_t*>(&r15_119);
    *reinterpret_cast<uint16_t*>(&rdi125) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi125) >> 1);
    *reinterpret_cast<unsigned char*>(&rdi125) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi125) - reinterpret_cast<unsigned char>(49 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdi125) < 0xcf)));
    ebx132 = *reinterpret_cast<uint32_t*>(&rbx123) ^ *reinterpret_cast<uint32_t*>(&r11_126);
    *reinterpret_cast<unsigned char*>(&rbp116) = reinterpret_cast<uint1_t>(!__intrinsic());
    dx133 = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rdx131) - 0x25c3)));
    __asm__("rcr r15b, 1");
    __asm__("ror rax, 0xbd");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx129) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&dx133) + 1);
    __asm__("rcr r15d, 1");
    r9_134 = r9_120 ^ r15_119;
    edi135 = *reinterpret_cast<int32_t*>(&rdi125) + ebx132 + 1;
    __asm__("ror r8w, 1");
    *reinterpret_cast<uint32_t*>(&rbx136) = ebx132 & *reinterpret_cast<uint32_t*>(&r9_134);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx136) + 4) = 0;
    __asm__("btr r11w, r13W");
    *reinterpret_cast<int16_t*>(&r11_126) = reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r11_126) - 1) - 0x37b5);
    *reinterpret_cast<uint32_t*>(&r14_137) = *reinterpret_cast<uint32_t*>(&r14_108) >> 24 | *reinterpret_cast<uint32_t*>(&r14_108) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&r14_108) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&r14_108) << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_137) + 4) = 0;
    esi138 = esi124 - 0x8fefd88;
    __asm__("rcr r11w, cl");
    __asm__("ror r14d, cl");
    __asm__("bsr bp, ax");
    *reinterpret_cast<uint32_t*>(&r10_139) = *reinterpret_cast<uint16_t*>(&rcx129);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_139) + 4) = 0;
    __asm__("xadd al, r15b");
    r12_140 = rcx129;
    rcx141 = r12_61;
    *reinterpret_cast<int16_t*>(&rax128) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax128) * *reinterpret_cast<signed char*>(&r14_137));
    rbp142 = rbp116 - (0x51bbc674 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(rbp116 < 0xffffffffae44398c)));
    __asm__("rol rbp, 0x14");
    *reinterpret_cast<uint16_t*>(&rbx136) = *reinterpret_cast<unsigned char*>(&rcx141);
    *reinterpret_cast<int32_t*>(&rcx143) = -static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&edi135) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r11_126) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edi135) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r11_126) + 1)))));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx143) + 4) = 0;
    rcx144 = rax128;
    rax145 = rcx143;
    *reinterpret_cast<unsigned char*>(&rbp142) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp142) ^ 28);
    *reinterpret_cast<uint16_t*>(&r8_130) = 0xfffe;
    if (__intrinsic()) {
        esi138 = *reinterpret_cast<uint32_t*>(&r11_126);
    }
    *reinterpret_cast<int16_t*>(&esi138) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&esi138) << 1);
    eax146 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&rax145)));
    *reinterpret_cast<unsigned char*>(&rcx144) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx144) & 15);
    __asm__("shld di, r14w, cl");
    rbx147 = rbx136 ^ 0xfffffffff6af9e98;
    __asm__("bsr r11, r11");
    r15_148 = (r15_119 + 0x2d21bcf9 + 1) * 0x3247861c;
    *reinterpret_cast<unsigned char*>(&r8_130) = __intrinsic();
    r11_149 = 0xffffffffffffc000;
    __asm__("shrd r8, rdx, 0x1");
    rcx150 = rcx144 - (0x2564705a + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rcx144 < 0x2564705a)));
    r8_151 = r8_130 - 1;
    __asm__("shrd ecx, r14d, 0x1");
    __asm__("btr si, r11w");
    *reinterpret_cast<signed char*>(&r9_134) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r9_134) - 63);
    *reinterpret_cast<uint32_t*>(&rbp152) = *reinterpret_cast<int32_t*>(&rbp142) + *reinterpret_cast<uint32_t*>(&r14_137);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp152) + 4) = 0;
    __asm__("shrd r10d, r10d, 0x1");
    __asm__("rcl r13W, 0x84");
    *reinterpret_cast<unsigned char*>(&r12_140) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_140) & 0xc4);
    r13_153 = r10_139 * 0xffffffffecf98936;
    __asm__("rcl rbp, 1");
    __asm__("rol r10w, 1");
    *reinterpret_cast<uint16_t*>(&rbp152) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp152) ^ 0xbfed);
    rcx154 = rcx150 << *reinterpret_cast<unsigned char*>(&rcx150);
    cx155 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx154) - 0x715) + __intrinsic());
    *reinterpret_cast<int16_t*>(&rbx147) = reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbx147) >> 1) + *reinterpret_cast<int16_t*>(&r13_153));
    if (__intrinsic()) {
        r11_149 = 0xffffffffffffc000;
    }
    __asm__("shrd rcx, rsi, cl");
    __asm__("xadd r11w, r8w");
    if (*reinterpret_cast<int16_t*>(&r8_151) < 0xd07f) {
        *reinterpret_cast<uint32_t*>(&r9_134) = *reinterpret_cast<uint32_t*>(&rbx147);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_134) + 4) = 0;
    }
    *reinterpret_cast<unsigned char*>(&r8_151) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_151) >> 59);
    __asm__("rol r14, cl");
    __asm__("ror sil, 1");
    __asm__("rol r15d, 0xc0");
    __asm__("shrd r9, rax, 0x5d");
    r9_156 = r9_134 - 0x3c55ce9a;
    __asm__("cdq ");
    *reinterpret_cast<uint32_t*>(&r15_157) = *reinterpret_cast<uint32_t*>(&r15_148) & 0xd20f8e8d;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_157) + 4) = 0;
    r8_158 = r8_151 + r15_157 + 1;
    *reinterpret_cast<int16_t*>(&eax146) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&eax146) * *reinterpret_cast<signed char*>(&esi138));
    __asm__("rol r14, 1");
    __asm__("bts rax, r8");
    __asm__("rcl dx, 1");
    __asm__("rol r10, 1");
    __asm__("btc r15d, r10d");
    __asm__("rcr r11, 0x32");
    if (0) {
    }
    __asm__("rol esi, 1");
    *reinterpret_cast<unsigned char*>(&eax146) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax146) | *reinterpret_cast<unsigned char*>(&r14_137));
    __asm__("rol r12w, cl");
    r9w159 = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r9_156) >> 76);
    __asm__("rol r14b, 0xe8");
    __asm__("btc rdx, 0x1b");
    __asm__("ror dh, 0x86");
    __asm__("rol rbp, 1");
    *reinterpret_cast<int16_t*>(&r8_158) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r8_158) - 1);
    *reinterpret_cast<int16_t*>(&edi135) = reinterpret_cast<int16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&r12_140)) << *reinterpret_cast<unsigned char*>(&cx155));
    __asm__("rol bpl, 0x48");
    cx160 = reinterpret_cast<uint16_t>(cx155 | *reinterpret_cast<uint16_t*>(&r10_139));
    __asm__("shld edx, edi, 0x1");
    tmp32_161 = *reinterpret_cast<uint32_t*>(&r12_140) + eax146;
    r12d162 = tmp32_161;
    if (tmp32_161 >= *reinterpret_cast<uint32_t*>(&r12_140)) {
    }
    __asm__("btr rsi, r15");
    *reinterpret_cast<unsigned char*>(&r15_157) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_157) & *reinterpret_cast<unsigned char*>(&esi138));
    r13_163 = rbp152;
    *reinterpret_cast<uint16_t*>(&r14_137) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_137) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_157) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r14_137) < reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_157) + 1))));
    __asm__("bsf r8d, r11d");
    r8_164 = r8_158 ^ 0xffffffff8ec01210;
    *reinterpret_cast<uint16_t*>(&r15_157) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_157) >> *reinterpret_cast<signed char*>(&cx160));
    __asm__("shrd ax, r15w, 0x1");
    __asm__("rol r9b, 1");
    *reinterpret_cast<uint16_t*>(&r8_164) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_164) - reinterpret_cast<uint16_t>(0x3b59 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r8_164) < 0xc4a7)));
    *reinterpret_cast<int16_t*>(&eax146) = *reinterpret_cast<signed char*>(&r12d162);
    __asm__("rcr r8d, 1");
    __asm__("btc r10w, 0x27");
    __asm__("rcl bx, 1");
    *reinterpret_cast<uint16_t*>(&r11_149) = *reinterpret_cast<unsigned char*>(&r12d162);
    __asm__("btc rbp, 0x86");
    __asm__("rcr bpl, 0xfb");
    __asm__("btr r8d, r12d");
    *reinterpret_cast<uint16_t*>(&r9_156) = reinterpret_cast<uint16_t>(r9w159 - reinterpret_cast<uint16_t>(0x6a49 - reinterpret_cast<uint1_t>(r9w159 < 0x95b8)));
    __asm__("rcl r10d, 0x9c");
    *reinterpret_cast<uint16_t*>(&rcx154) = reinterpret_cast<uint16_t>(cx160 - 0x7f33);
    __asm__("bsr ebx, r12d");
    *reinterpret_cast<uint32_t*>(&r15_165) = *reinterpret_cast<uint32_t*>(&r15_157) - *reinterpret_cast<int32_t*>(&rcx154);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_165) + 4) = 0;
    __asm__("ror r15, 1");
    __asm__("rcl r15d, 1");
    *reinterpret_cast<unsigned char*>(&r14_137) = reinterpret_cast<uint1_t>(!__intrinsic());
    *reinterpret_cast<uint32_t*>(&rdi166) = edi135 | 0xc0000000;
    eax167 = eax146 / *reinterpret_cast<uint32_t*>(&rdi166);
    r10_168 = *reinterpret_cast<int16_t*>(&eax167);
    *reinterpret_cast<signed char*>(&r13_163) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r13_163) >> -23);
    *reinterpret_cast<uint32_t*>(&r12_169) = r12d162 >> 63;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_169) + 4) = 0;
    __asm__("bsr r14w, di");
    __asm__("shld edi, r8d, cl");
    __asm__("rol rax, 1");
    __asm__("rcr ebx, 0x23");
    __asm__("shld r10, rbp, 0x72");
    __asm__("shrd rbp, rax, cl");
    __asm__("ror rdx, cl");
    __asm__("rol r10d, 1");
    __asm__("rcr dx, 1");
    __asm__("ror r9, 0xcc");
    if (rcx154 == r11_149) {
        rcx154 = r11_149;
    }
    *reinterpret_cast<int32_t*>(&r10_170) = *reinterpret_cast<int32_t*>(&r10_168) << *reinterpret_cast<unsigned char*>(&rcx154);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_170) + 4) = 0;
    rdx171 = __intrinsic();
    *reinterpret_cast<uint32_t*>(&rsi172) = *reinterpret_cast<uint32_t*>(&r13_163) + *reinterpret_cast<int32_t*>(&rcx154) * 4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi172) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rax173) = 0x4584fed9;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax173) + 4) = 0;
    r9_174 = r9_156 >> *reinterpret_cast<unsigned char*>(&rcx154);
    *reinterpret_cast<signed char*>(&r9_174) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r9_174) + *reinterpret_cast<signed char*>(&r9_174));
    *reinterpret_cast<uint16_t*>(&rsi172) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi172) & 0xfed9);
    __asm__("shld si, bp, 0x1");
    __asm__("ror r10b, 0x2e");
    __asm__("rol rbx, 0x3");
    *reinterpret_cast<uint32_t*>(&rbx175) = *reinterpret_cast<uint32_t*>(&rsi172) * 0x39e432a8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx175) + 4) = 0;
    __asm__("shrd edx, r15d, 0x1");
    *reinterpret_cast<int32_t*>(&rcx176) = static_cast<int32_t>(r12_169 + 0x4584fed9 + 0xc5);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx176) + 4) = 0;
    __asm__("rcl r14b, 1");
    *reinterpret_cast<uint16_t*>(&rax173) = reinterpret_cast<uint16_t>(0xfed9 * *reinterpret_cast<uint16_t*>(&r14_137));
    *reinterpret_cast<int16_t*>(&rdx171) = __intrinsic();
    if (__intrinsic()) {
        rdi166 = r9_174;
    }
    if (!__intrinsic()) {
    }
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx176) + 1) == *reinterpret_cast<unsigned char*>(&rcx176)) {
        tmp8_177 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx176) + 1);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx176) + 1) = *reinterpret_cast<unsigned char*>(&rcx176);
        *reinterpret_cast<unsigned char*>(&rcx176) = tmp8_177;
    }
    if (0) {
    }
    if (1) {
        *reinterpret_cast<int32_t*>(&rcx176) = *reinterpret_cast<int32_t*>(&rdx171);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx176) + 4) = 0;
    }
    *reinterpret_cast<uint32_t*>(&r9_178) = *reinterpret_cast<uint32_t*>(&rsi172) * 0x23faeb45;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_178) + 4) = 0;
    if (rbx175 == r10_170) {
        tmp64_179 = rbx175;
        rbx175 = r10_170;
        r10_170 = tmp64_179;
    }
    *reinterpret_cast<uint32_t*>(&r8_180) = *reinterpret_cast<int32_t*>(&r8_164) + 0x1af1f3fd + static_cast<uint1_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi172) >> *reinterpret_cast<uint16_t*>(&rax173)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_180) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r15_165) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_165) >> *reinterpret_cast<unsigned char*>(&rcx176));
    __asm__("rol r13d, 0xe");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx171) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx171) + 1) >> 5);
    __asm__("bts rax, rdx");
    __asm__("rcr cx, 0xbc");
    __asm__("ror rbp, 0x72");
    __asm__("btc dx, r10w");
    r11d181 = 0xbaac5a95;
    *reinterpret_cast<unsigned char*>(&rax173) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax173) + *reinterpret_cast<signed char*>(&r10_170))));
    __asm__("ror r9, 1");
    __asm__("rcr r12w, 1");
    *reinterpret_cast<int16_t*>(&r8_180) = *reinterpret_cast<int16_t*>(&rcx176);
    edx182 = ~*reinterpret_cast<int32_t*>(&rdx171);
    __asm__("xadd bl, r11b");
    __asm__("shld r8, r13, cl");
    __asm__("ror dx, 1");
    __asm__("rol al, 1");
    __asm__("rcl r8w, 1");
    *reinterpret_cast<int16_t*>(&rbx175) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax173) + 1);
    *reinterpret_cast<uint16_t*>(&rsi172) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi172) ^ 0xedb0);
    rbx183 = rbx175 >> 0x7f;
    *reinterpret_cast<unsigned char*>(&rcx176) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx176) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx176) + 1));
    __asm__("rcr di, 1");
    __asm__("ror r13W, 1");
    rax184 = -rax173;
    *reinterpret_cast<uint16_t*>(&r11d181) = reinterpret_cast<uint16_t>(0x5a95 - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_165) + reinterpret_cast<uint1_t>(0x5a95 < reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_165) + 1))));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax184) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax184) + 1) ^ *reinterpret_cast<unsigned char*>(&rbx183));
    if (0) {
        r11d181 = *reinterpret_cast<uint32_t*>(&r14_137);
    }
    if (0) {
        rax184 = r9_178;
    }
    *reinterpret_cast<uint16_t*>(&rax184) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax184) * *reinterpret_cast<int16_t*>(&edx182));
    __asm__("xadd ah, dh");
    __asm__("rol r12d, cl");
    *reinterpret_cast<uint32_t*>(&r12_185) = *reinterpret_cast<uint32_t*>(&r12_169) | 0x242f9c53;
    __asm__("rol cl, 1");
    r8_186 = r8_180 + rax184;
    __asm__("btr r11d, edi");
    __asm__("shrd rbp, r9, cl");
    r14_187 = rcx176;
    __asm__("btr rbx, r9");
    __asm__("bts r11, rdx");
    __asm__("rcl rbp, cl");
    *reinterpret_cast<uint32_t*>(&r11_188) = r11d181 - 0x66ec3749;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_188) + 4) = 0;
    __asm__("rcl r9w, 1");
    rdi189 = *reinterpret_cast<int32_t*>(&rdi166);
    *reinterpret_cast<uint16_t*>(&rax184) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax184) * *reinterpret_cast<uint16_t*>(&r11_188));
    dx190 = __intrinsic();
    __asm__("rcl rcx, 1");
    r9_191 = reinterpret_cast<uint64_t>(r9_178 >> 1);
    __asm__("bsf r13d, ebx");
    r13w192 = *reinterpret_cast<unsigned char*>(&r8_186);
    *reinterpret_cast<uint32_t*>(&rbx193) = 0x6096726b;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx193) + 4) = 0;
    __asm__("btr r8w, 0x28");
    __asm__("rcr r15, 1");
    *reinterpret_cast<unsigned char*>(&r8_186) = 0;
    __asm__("ror r14w, 1");
    __asm__("btc rax, rcx");
    rcx194 = r14_137 - (0x2399b506 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r14_137 < 0x2399b507)));
    __asm__("ror bh, cl");
    if (*reinterpret_cast<int16_t*>(&rcx194) == *reinterpret_cast<int16_t*>(&rdi189)) {
        tmp16_195 = *reinterpret_cast<int16_t*>(&rcx194);
        *reinterpret_cast<int16_t*>(&rcx194) = *reinterpret_cast<int16_t*>(&rdi189);
        *reinterpret_cast<int16_t*>(&rdi189) = tmp16_195;
    }
    __asm__("rol r13W, 1");
    *reinterpret_cast<unsigned char*>(&r9_191) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_191) + *reinterpret_cast<signed char*>(&rcx194)) + __intrinsic());
    ebp196 = *reinterpret_cast<uint32_t*>(&r11_188);
    r9_197 = r9_191 | r11_188;
    less198 = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax184) + 1) < reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx194) + 1) + 1);
    cf199 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax184) + 1) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx194) + 1) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax184) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax184) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx194) + 1) + cf199));
    if (!less198) {
        *reinterpret_cast<uint16_t*>(&r12_185) = dx190;
    }
    *reinterpret_cast<uint16_t*>(&rbx193) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(0x726b + *reinterpret_cast<int16_t*>(&r14_187)) + cf199);
    __asm__("rcr rdx, 1");
    r14_200 = *reinterpret_cast<signed char*>(&rdi189);
    r14d201 = *reinterpret_cast<int32_t*>(&r14_200) - 0x576a684f + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&dx190) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx194) + 1)))) < *reinterpret_cast<unsigned char*>(&dx190));
    r13w202 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(r13w192 + *reinterpret_cast<uint16_t*>(&ebp196)) + 1);
    *reinterpret_cast<unsigned char*>(&r14d201) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14d201) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rax184) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r14d201) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rax184) + 1))));
    *reinterpret_cast<uint32_t*>(&r9_203) = *reinterpret_cast<uint32_t*>(&r9_197) - (*reinterpret_cast<uint32_t*>(&r11_188) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r9_197) < *reinterpret_cast<uint32_t*>(&r11_188)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_203) + 4) = 0;
    __asm__("rol r12, 0xe0");
    *reinterpret_cast<uint32_t*>(&rcx204) = *reinterpret_cast<uint32_t*>(&r9_203) + 4;
    *reinterpret_cast<unsigned char*>(&rbx193) = 0xff;
    __asm__("ror r12w, cl");
    __asm__("ror rax, 0xf0");
    __asm__("bts rax, 0x7b");
    *reinterpret_cast<uint16_t*>(&r9_203) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_203) ^ 0x62d7) - 0x78df) + 1);
    __asm__("rol r15, 0x65");
    if (!__intrinsic()) {
        rax184 = rax184;
    }
    __asm__("rcr dl, 1");
    __asm__("rcr r15w, 0x18");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax184) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax184) + 1) + 1);
    *reinterpret_cast<uint16_t*>(&r8_186) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_186) >> 1);
    *reinterpret_cast<uint32_t*>(&r14_205) = r14d201 << 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_205) + 4) = 0;
    __asm__("xadd di, ax");
    __asm__("rol r9d, 0xbd");
    *reinterpret_cast<uint16_t*>(&r12_185) = static_cast<uint16_t>(*reinterpret_cast<int32_t*>(&r8_186) + *reinterpret_cast<uint32_t*>(&r12_185) * 2 + 11);
    *reinterpret_cast<int32_t*>(&r10_206) = *reinterpret_cast<int16_t*>(&r12_185);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_206) + 4) = 0;
    *reinterpret_cast<int16_t*>(&r10_206) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r10_206) << *reinterpret_cast<unsigned char*>(&rcx204));
    __asm__("shld eax, ebp, 0x1");
    ax207 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax184) ^ *reinterpret_cast<uint16_t*>(&rbx193));
    rdx208 = static_cast<uint64_t>(*reinterpret_cast<uint32_t*>(&r14_205) + *reinterpret_cast<uint32_t*>(&r15_165) * 8 - 0x55447263) + 0x65ee2747;
    __asm__("rcl rdi, 1");
    ax209 = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax207) * *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx208) + 1));
    *reinterpret_cast<uint16_t*>(&ebp196) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax209) + 1)));
    __asm__("rcr sil, 0xf3");
    rsi210 = rsi172 & 0xffffffffae31f73d;
    __asm__("rcr dil, 1");
    r14w211 = *reinterpret_cast<uint16_t*>(&rcx204);
    *reinterpret_cast<uint16_t*>(&rcx204) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_205) << *reinterpret_cast<unsigned char*>(&rcx204));
    *reinterpret_cast<uint32_t*>(&rcx212) = *reinterpret_cast<uint32_t*>(&rcx204) - (0x4c080efe + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rcx204) < 0x4c080eff));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx212) + 4) = 0;
    __asm__("xadd cl, ch");
    if (!__intrinsic()) {
    }
    *reinterpret_cast<uint16_t*>(&rsi210) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi210) | 0xc000);
    dx213 = reinterpret_cast<uint16_t>(ax209 % *reinterpret_cast<uint16_t*>(&rsi210));
    *reinterpret_cast<uint16_t*>(&rax184) = reinterpret_cast<uint16_t>(ax209 / *reinterpret_cast<uint16_t*>(&rsi210));
    __asm__("bts rdi, r8");
    *reinterpret_cast<unsigned char*>(&rbx193) = reinterpret_cast<unsigned char>(0xff - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&dx213) + 1) + reinterpret_cast<uint1_t>(0xff < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&dx213) + 1) + 1))));
    *reinterpret_cast<uint16_t*>(&r14_205) = reinterpret_cast<uint16_t>(r14w211 | *reinterpret_cast<uint16_t*>(&rcx212));
    __asm__("bsf r15d, eax");
    *reinterpret_cast<signed char*>(&r13w202) = 0;
    *reinterpret_cast<uint16_t*>(&r13_163) = reinterpret_cast<uint16_t>(r13w202 & *reinterpret_cast<uint16_t*>(&r11_188));
    __asm__("ror dil, 1");
    __asm__("btr ecx, r9d");
    r14_214 = r14_205 - (0x411cc0e0 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(r14_205 < 0xffffffffbee33f21)));
    __asm__("rcr ebx, 0xf8");
    *reinterpret_cast<int32_t*>(&rsi215) = *reinterpret_cast<int32_t*>(&rsi210) << *reinterpret_cast<unsigned char*>(&rcx212);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi215) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rbp216) = ebp196 & *reinterpret_cast<uint32_t*>(&r13_163);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp216) + 4) = 0;
    if (!__intrinsic()) {
        r12_185 = rcx212;
    }
    *reinterpret_cast<uint16_t*>(&r13_163) = 0;
    if (!reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(reinterpret_cast<int64_t>(&rax184) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int64_t>(&rax184) + 1))) {
        *reinterpret_cast<uint16_t*>(&r14_214) = *reinterpret_cast<uint16_t*>(&r12_185);
    }
    if (*reinterpret_cast<int16_t*>(&r14_214) < reinterpret_cast<int16_t>(0x45f4)) {
    }
    *reinterpret_cast<uint16_t*>(&rsi215) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi215) - reinterpret_cast<uint16_t>(0x9a5 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rsi215) < reinterpret_cast<uint16_t>(0x9a5 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r14_214) < 0x45f4)))));
    rax217 = rax184 * rax184;
    r15_218 = r15_165 - rbx193;
    *reinterpret_cast<uint16_t*>(&r12_185) = static_cast<uint16_t>(r13_163 + r10_206 * 8);
    __asm__("rcl r15w, 1");
    *reinterpret_cast<unsigned char*>(&rcx212) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx212) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax217) + 1))));
    less219 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&rcx212) < reinterpret_cast<signed char>(0) != __intrinsic());
    less_or_equal220 = reinterpret_cast<uint1_t>(less219 | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx212) == 0));
    if (less219) {
        *reinterpret_cast<uint16_t*>(&rcx212) = *reinterpret_cast<uint16_t*>(&rbx193);
    }
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&rcx212) = 0;
    }
    if (!__intrinsic()) {
        r9_203 = rbx193;
    }
    if (less_or_equal220) {
        rbp216 = rsi215;
    }
    __asm__("rcr r15d, cl");
    *reinterpret_cast<signed char*>(&r9_203) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r9_203) >> *reinterpret_cast<unsigned char*>(&rcx212));
    rcx221 = rcx212 >> *reinterpret_cast<unsigned char*>(&rcx212);
    tmp32_222 = *reinterpret_cast<uint32_t*>(&rcx221) + 0x405ddd7b + 1;
    *reinterpret_cast<uint32_t*>(&rcx223) = tmp32_222;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx223) + 4) = 0;
    if (tmp32_222 >= *reinterpret_cast<uint32_t*>(&rcx221)) {
        rsi215 = r9_203;
    }
    *reinterpret_cast<int32_t*>(&rsi224) = ~*reinterpret_cast<int32_t*>(&rsi215);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi224) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r11_225) = *reinterpret_cast<uint16_t*>(&rbx193) + *reinterpret_cast<uint32_t*>(&r12_185);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_225) + 4) = 0;
    rsi226 = rsi224 - (__intrinsic() + reinterpret_cast<uint1_t>(rsi224 < __intrinsic()));
    r11_227 = r11_225 | rbp216;
    if (0) {
        *reinterpret_cast<uint32_t*>(&r11_227) = *reinterpret_cast<uint32_t*>(&rbx193);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_227) + 4) = 0;
    }
    edx228 = __intrinsic();
    *reinterpret_cast<uint32_t*>(&rax229) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r15_218) - 0x3bb154d6);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax229) + 4) = 0;
    __asm__("rcr r12, 1");
    *reinterpret_cast<int32_t*>(&r13_230) = *reinterpret_cast<int32_t*>(&r13_163) >> *reinterpret_cast<unsigned char*>(&rcx223);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_230) + 4) = 0;
    __asm__("shld ecx, r14d, cl");
    __asm__("rol r9w, 1");
    __asm__("btr bp, r12w");
    __asm__("rcl ah, 1");
    *reinterpret_cast<uint16_t*>(&rsi226) = *reinterpret_cast<uint16_t*>(&edx228);
    rdi231 = r10_206 - 1;
    r10_232 = rdi231;
    *reinterpret_cast<unsigned char*>(&rax229) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(rdi231 < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(rdi231 == 0)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx223) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx223) + 1) | 0xc0);
    ax233 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax229) & 0x3fff);
    *reinterpret_cast<uint16_t*>(&edx228) = reinterpret_cast<uint16_t>(ax233 % static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx223) + 1)));
    ax234 = reinterpret_cast<uint16_t>(ax233 / static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx223) + 1)));
    *reinterpret_cast<signed char*>(&r9_203) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r9_203) - *reinterpret_cast<signed char*>(&r11_227));
    __asm__("rol dx, cl");
    *reinterpret_cast<int16_t*>(&r13_230) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r13_230) << *reinterpret_cast<unsigned char*>(&rcx223));
    __asm__("cwd ");
    rsi235 = -rsi226;
    *reinterpret_cast<unsigned char*>(&rcx223) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx223) & 15);
    __asm__("shrd cx, r8w, cl");
    __asm__("xadd dil, dl");
    rdi236 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&r13_230)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax234) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax234) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx223) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax234) + 1) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx223) + 1) + 1))));
    __asm__("shld r11, r13, 0x1");
    *reinterpret_cast<uint16_t*>(&rax229) = -ax234;
    __asm__("rcl r10w, 1");
    r12_237 = *reinterpret_cast<uint16_t*>(&rsi235);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx193) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx193) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax229) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx193) + 1) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax229) + 1))));
    __asm__("rcr r10, 1");
    r11_238 = r11_227 + rax229;
    *reinterpret_cast<uint32_t*>(&rdx239) = edx228 | 0xd98762da;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx239) + 4) = 0;
    cf240 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax229) + 1) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rax229))));
    if (reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax229) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax229) + cf240)) >= reinterpret_cast<signed char>(static_cast<uint32_t>(cf240))) {
        rbp216 = rbx193;
    }
    rdx241 = rdx239 >> 0x6b;
    *reinterpret_cast<uint32_t*>(&r10_242) = *reinterpret_cast<uint32_t*>(&r10_232) >> 24 | *reinterpret_cast<uint32_t*>(&r10_232) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&r10_232) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&r10_232) << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_242) + 4) = 0;
    __asm__("shld r15d, ebp, 0x1");
    tmp8_243 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx193) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx223) + 1))));
    cf244 = reinterpret_cast<uint1_t>(tmp8_243 < *reinterpret_cast<unsigned char*>(&rbx193));
    *reinterpret_cast<unsigned char*>(&rbx193) = tmp8_243;
    rax245 = *reinterpret_cast<unsigned char*>(&r11_238);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx241) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx241) + 1) - reinterpret_cast<unsigned char>(95 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx241) + 1) < reinterpret_cast<unsigned char>(95 - cf244))));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax245) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx223) + 1)));
    __asm__("ror r11b, cl");
    *reinterpret_cast<unsigned char*>(&rax245) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax245) + *reinterpret_cast<signed char*>(&rdx241)) + 1);
    __asm__("xadd r12d, ebx");
    __asm__("rol r11w, cl");
    *reinterpret_cast<int32_t*>(&r12_246) = *reinterpret_cast<int32_t*>(&r12_237) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_246) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rbx247) = *reinterpret_cast<uint32_t*>(&rbx193) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx247) + 4) = 0;
    return rax245 + rbx247 + rcx223 + rdx241 + rbp216 + rsi235 + rdi236 + rdi236 * 0x7d7242ff + r9_203 + r10_242 + r11_238 + r12_246 + r13_230 + (*reinterpret_cast<int32_t*>(&rax245) + *reinterpret_cast<uint32_t*>(&rcx223) + 0x2e3dfe50) + static_cast<int64_t>(reinterpret_cast<int32_t>(edx228)) + 0x7d6dfd92aa39;
}

uint64_t log_size_10_var_002(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rsi4;
    int64_t r8_5;
    int64_t r10_6;
    int64_t r13_7;
    int32_t ecx8;
    uint64_t rdi9;
    uint32_t eax10;
    int64_t r15_11;
    uint64_t rsi12;
    int64_t rax13;
    int64_t rdx14;
    uint1_t zf15;
    uint64_t r10_16;
    uint64_t r10_17;
    uint1_t cf18;
    int64_t r8_19;
    uint64_t rax20;
    uint32_t edi21;
    uint32_t edi22;
    uint32_t edx23;
    int64_t rax24;
    int64_t r15_25;
    uint32_t ebx26;
    int32_t r12d27;
    signed char tmp8_28;
    uint32_t r9d29;
    int64_t r14_30;
    uint64_t r15_31;
    int64_t r13_32;
    uint64_t rbp33;
    int64_t r12_34;
    uint16_t cx35;
    uint64_t r15_36;
    uint64_t rbx37;
    int64_t rax38;
    uint64_t rdx39;
    uint16_t cx40;
    int64_t r12_41;
    uint64_t rdi42;
    int64_t r9_43;
    uint64_t rsi44;
    uint64_t r14_45;
    uint32_t edx46;
    uint32_t eax47;
    uint64_t r13_48;
    uint64_t r13_49;
    uint1_t cf50;
    uint64_t rsi51;
    uint1_t cf52;
    uint64_t r13_53;
    uint32_t eax54;
    uint64_t r10_55;
    uint64_t rcx56;
    int64_t r12_57;
    int64_t rdx58;
    uint16_t cx59;
    int64_t r10_60;
    unsigned char al61;
    int64_t rdi62;
    int64_t r9_63;
    int64_t r10_64;
    uint64_t r12_65;
    uint1_t cf66;
    uint64_t r12_67;
    uint64_t r13_68;
    uint64_t rbx69;
    int32_t ecx70;
    int64_t r12_71;
    unsigned char cl72;
    uint1_t cf73;
    uint64_t r11_74;
    int64_t r8_75;
    int64_t rdx76;
    uint1_t cf77;
    int64_t r9_78;
    int64_t r14_79;
    int64_t rdx80;
    int64_t r8_81;
    uint64_t r9_82;
    unsigned char tmp8_83;
    uint1_t cf84;
    uint64_t r15_85;
    unsigned char dl86;
    uint64_t r9_87;
    uint64_t rdi88;
    uint64_t rax89;
    uint64_t rsi90;
    uint64_t rcx91;
    uint64_t rbp92;
    uint64_t rdx93;
    uint64_t rcx94;
    int32_t eax95;
    int32_t r8d96;
    uint64_t rax97;
    uint64_t rax98;
    uint64_t rbp99;
    int64_t r11_100;
    uint64_t rax101;
    int64_t rcx102;
    unsigned char al103;
    int64_t r12_104;
    int64_t r13_105;
    uint64_t rsi106;
    int64_t r10_107;
    uint64_t r8_108;
    uint1_t cf109;
    unsigned char tmp8_110;
    int64_t rbx111;
    uint1_t cf112;
    int16_t tmp16_113;
    int64_t r11_114;
    uint64_t r9_115;
    uint1_t cf116;
    uint1_t cf117;
    uint64_t rdx118;
    int16_t tmp16_119;
    uint64_t rdi120;
    int64_t r13_121;
    int1_t less122;
    uint64_t r9_123;
    uint32_t eax124;
    int64_t rdx125;
    uint1_t cf126;
    int32_t eax127;
    uint64_t rax128;
    int16_t si129;
    uint32_t ecx130;
    uint32_t r13d131;
    uint32_t r9d132;
    uint16_t cx133;
    int64_t r13_134;
    uint16_t cx135;
    uint64_t rsi136;
    int64_t rsi137;
    uint64_t r12_138;
    uint64_t r9_139;
    uint64_t rsi140;
    uint64_t r9_141;
    uint16_t r11w142;
    uint64_t r15_143;
    uint32_t esi144;
    uint64_t r14_145;
    uint64_t rcx146;
    uint64_t rdi147;
    uint64_t r14_148;
    uint64_t r10_149;
    uint1_t cf150;
    int16_t cx151;
    uint64_t rbp152;
    int64_t r12_153;
    int64_t r14_154;
    int64_t rdi155;
    int64_t r8_156;
    int64_t r10_157;
    int64_t r12_158;
    uint16_t bx159;
    uint64_t rax160;
    uint64_t rcx161;
    uint64_t tmp64_162;
    uint64_t tmp64_163;
    uint64_t rax164;
    uint32_t eax165;
    int64_t rdx166;
    int64_t rax167;
    int64_t r13_168;
    uint1_t cf169;
    uint16_t dx170;
    int64_t r13_171;
    int64_t r12_172;
    uint64_t r15_173;
    uint64_t rbx174;
    unsigned char tmp8_175;
    int64_t rbp176;
    int64_t r11_177;
    uint64_t r14_178;
    uint64_t r11_179;
    uint32_t r10d180;
    uint64_t rdx181;
    int64_t rsi182;
    int64_t r12_183;
    uint32_t edi184;
    int64_t rax185;
    uint64_t r15_186;
    unsigned char tmp8_187;
    uint1_t cf188;
    uint64_t r12_189;
    uint64_t rcx190;
    uint32_t ebp191;
    uint64_t rdx192;
    int64_t rsi193;
    uint64_t rbx194;
    int32_t esi195;
    int16_t dx196;
    uint64_t rdi197;
    int64_t rax198;
    uint64_t rdx199;
    int16_t ax200;
    uint64_t rbx201;
    uint64_t rdx202;
    uint64_t rdx203;
    uint64_t rdx204;
    uint32_t r15d205;
    int16_t cx206;
    uint64_t r15_207;
    int64_t rsi208;
    uint64_t r10_209;
    int64_t r13_210;
    int64_t rsi211;
    int64_t r14_212;
    uint64_t r14_213;
    uint64_t r9_214;
    int64_t rax215;
    int64_t rax216;
    uint64_t r15_217;
    uint64_t r10_218;
    uint64_t rcx219;
    uint64_t rdx220;
    uint64_t rax221;
    uint64_t r14_222;
    int64_t rbp223;
    uint64_t r14_224;
    int64_t rax225;
    unsigned char tmp8_226;
    uint1_t cf227;
    uint16_t r13w228;
    uint16_t ax229;

    rbp3 = 0xa0c40f5c61e5caf2;
    rsi4 = 0xaa0fe0a1c53e29b;
    r8_5 = 0xd4c93b6421950046;
    r10_6 = 0xb958e1d5ba568cca;
    __asm__("shrd cx, r15w, 0xd");
    *reinterpret_cast<uint32_t*>(&r13_7) = 0x765c;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_7) + 4) = 0;
    ecx8 = 0x80552e67 >> 0x67;
    rdi9 = 0x6d2bcee330568401;
    if (0) {
        *reinterpret_cast<uint32_t*>(&rsi4) = 0x765c;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = 0;
    }
    if (!__intrinsic()) {
        r8_5 = rsi4;
    }
    __asm__("cwd ");
    if (1) {
    }
    __asm__("rcr ax, cl");
    eax10 = 0x9b98a23b >> *reinterpret_cast<unsigned char*>(&ecx8);
    __asm__("rol r11d, cl");
    *reinterpret_cast<int32_t*>(&r15_11) = 0xe6863b2e;
    *reinterpret_cast<int16_t*>(&ecx8) = 0xc7c;
    *reinterpret_cast<uint32_t*>(&rsi12) = 0x7c;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rdi9) = 0xcb;
    __asm__("bsf r13, r8");
    __asm__("shrd r10, rcx, 0x1");
    __asm__("rcr r11b, 1");
    *reinterpret_cast<unsigned char*>(&r15_11) = 45;
    if (__intrinsic()) {
        r15_11 = 0xff856d166e0d5deb;
    }
    *reinterpret_cast<unsigned char*>(&ecx8) = reinterpret_cast<unsigned char>(0x7c >> 0x7c);
    *reinterpret_cast<unsigned char*>(&r15_11) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r15_11) >> 1);
    *reinterpret_cast<uint32_t*>(&rax13) = eax10 - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rax13)) {
        r15_11 = rax13;
    }
    *reinterpret_cast<unsigned char*>(&r15_11) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r15_11)));
    *reinterpret_cast<int16_t*>(&rdx14) = 0x7550;
    if (0) {
        *reinterpret_cast<int16_t*>(&r10_6) = 0x84cb;
        *reinterpret_cast<int16_t*>(&rdi9) = 0x8cca;
    }
    *reinterpret_cast<int16_t*>(&r10_6) = -*reinterpret_cast<int16_t*>(&r10_6);
    __asm__("shrd rdx, r10, 0x1");
    __asm__("shrd rcx, r12, 0x1");
    __asm__("rcr r13, 0x61");
    zf15 = reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(&r10_6) & 0x87) == 0);
    *reinterpret_cast<unsigned char*>(&rbp3) = zf15;
    *reinterpret_cast<unsigned char*>(&r8_5) = zf15;
    __asm__("rcl r15b, 1");
    *reinterpret_cast<int32_t*>(&r10_16) = *reinterpret_cast<int32_t*>(&r10_6) + 0x1c9feeb0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_16) + 4) = 0;
    if (1) {
        rsi12 = rdi9;
    }
    __asm__("rcr cx, 1");
    __asm__("rol r14d, 1");
    *reinterpret_cast<unsigned char*>(&rsi12) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi12) ^ 0xeb);
    r10_17 = r10_16 ^ 0x7b4e0b3;
    cf18 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rax13) < 0xb6);
    *reinterpret_cast<unsigned char*>(&rax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax13) - reinterpret_cast<unsigned char>(74 - cf18));
    __asm__("btr ebx, 0xbc");
    __asm__("xadd bx, r15w");
    __asm__("ror bx, 1");
    *reinterpret_cast<unsigned char*>(&r13_7) = reinterpret_cast<uint1_t>(!cf18);
    *reinterpret_cast<int32_t*>(&r8_19) = *reinterpret_cast<int32_t*>(&r8_5) - *reinterpret_cast<int32_t*>(&rbp3);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_19) + 4) = 0;
    __asm__("ror rbx, 1");
    *reinterpret_cast<unsigned char*>(&rbp3) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp3) + 13) + 1);
    *reinterpret_cast<int16_t*>(&r10_17) = static_cast<int16_t>(ecx8 + *reinterpret_cast<uint32_t*>(&rax13) + 0xf4);
    if (reinterpret_cast<uint16_t>(0x5deb + *reinterpret_cast<int16_t*>(&rbp3)) < 0x5deb) {
    }
    __asm__("bsr r13W, bx");
    rax20 = rdi9 + r8_19 + 0x5f06b66e;
    __asm__("shrd r14w, r15w, 0x9");
    __asm__("shld r10w, r15w, 0x6");
    edi21 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx14) + 1)));
    if (__intrinsic()) {
    }
    __asm__("rcl r15b, 0xd9");
    __asm__("rcl r10d, 1");
    *reinterpret_cast<int16_t*>(&edi21) = *reinterpret_cast<int16_t*>(&r15_11);
    edi22 = edi21 | 0xc0000000;
    edx23 = *reinterpret_cast<uint32_t*>(&rax20) % edi22;
    *reinterpret_cast<uint32_t*>(&rax24) = *reinterpret_cast<uint32_t*>(&rax20) / edi22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rsi12) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi12) & *reinterpret_cast<uint16_t*>(&rax24));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx23) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx23) + 1) + *reinterpret_cast<unsigned char*>(&rax24))));
    __asm__("shrd r12w, r9w, 0x9");
    __asm__("rol r11d, 0x3b");
    *reinterpret_cast<int16_t*>(&r13_7) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r13_7) >> -80);
    r15_25 = r13_7 - 0x5ee75fcd;
    *reinterpret_cast<unsigned char*>(&rax24) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax24) << 1) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx23) + 1)) + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax24) + 1) = 0xff;
    ebx26 = *reinterpret_cast<uint32_t*>(&r13_7);
    r12d27 = *reinterpret_cast<int16_t*>(&ebx26);
    __asm__("bsf r10w, bx");
    if (*reinterpret_cast<signed char*>(&r15_25) == *reinterpret_cast<signed char*>(&ebx26)) {
        tmp8_28 = *reinterpret_cast<signed char*>(&r15_25);
        *reinterpret_cast<signed char*>(&ebx26) = tmp8_28;
    }
    __asm__("btc rdi, r10");
    __asm__("bts r13W, 0x6f");
    __asm__("rcl r12, cl");
    r9d29 = 0xa8;
    *reinterpret_cast<int16_t*>(&r9d29) = reinterpret_cast<int16_t>(0xa8 >> 78);
    *reinterpret_cast<uint32_t*>(&r14_30) = 0x3c91ee1f ^ edx23;
    __asm__("rcr rcx, 1");
    if (1) {
    }
    __asm__("ror r10, 0x1c");
    __asm__("ror r9w, cl");
    __asm__("rol si, 0x26");
    __asm__("rcr r11d, cl");
    __asm__("bsf r9, rax");
    *reinterpret_cast<uint32_t*>(&r15_31) = edx23;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_31) + 4) = 0;
    r13_32 = 0;
    rbp33 = reinterpret_cast<uint64_t>(rax24 * 0x60daad9d);
    __asm__("rcr ebp, 0x53");
    __asm__("bsr r10w, r10w");
    *reinterpret_cast<int32_t*>(&r12_34) = -r12d27;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_34) + 4) = 0;
    if (!reinterpret_cast<int1_t>(!!r12d27)) {
        r13_32 = r12_34;
    }
    cx35 = reinterpret_cast<uint16_t>(-1 - *reinterpret_cast<int16_t*>(&r14_30));
    __asm__("shld esi, ecx, 0xd9");
    __asm__("rcr ah, 0x7a");
    r15_36 = r15_31 >> -84;
    *reinterpret_cast<uint32_t*>(&rbx37) = ebx26 & *reinterpret_cast<uint32_t*>(&r14_30);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx37) + 4) = 0;
    __asm__("shld r12d, edx, 0x1");
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&rbp33) = *reinterpret_cast<int16_t*>(&r13_32);
    }
    __asm__("rol r11d, 0xbd");
    rax38 = *reinterpret_cast<int16_t*>(&r13_32);
    *reinterpret_cast<unsigned char*>(&cx35) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&cx35) | *reinterpret_cast<unsigned char*>(&rax38));
    __asm__("shld r13, r11, cl");
    __asm__("rol r12d, 0x3");
    *reinterpret_cast<unsigned char*>(&r14_30) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_30) | 83);
    __asm__("shrd r13d, r10d, 0x1");
    __asm__("bsf r12d, eax");
    *reinterpret_cast<int16_t*>(&rbp33) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbp33) >> *reinterpret_cast<unsigned char*>(&cx35));
    __asm__("bts r11, 0x7f");
    __asm__("rol bl, cl");
    __asm__("xadd bp, ax");
    rdx39 = __intrinsic();
    __asm__("rcr r14d, 1");
    *reinterpret_cast<int16_t*>(&rdx39) = __intrinsic();
    __asm__("rcl r8, 1");
    *reinterpret_cast<unsigned char*>(&rbp33) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp33) ^ *reinterpret_cast<unsigned char*>(&r15_36));
    __asm__("rcl sil, 1");
    cx40 = reinterpret_cast<uint16_t>(cx35 - reinterpret_cast<uint16_t>(0x3955 + reinterpret_cast<uint1_t>(cx35 < 0x3956)));
    __asm__("shrd bp, si, 0xc");
    r12_41 = 1;
    rdi42 = *reinterpret_cast<unsigned char*>(&rsi12);
    if (!(reinterpret_cast<int64_t>(-r10_17) + 1)) {
    }
    if (__intrinsic()) {
        rsi12 = r15_36;
    }
    *reinterpret_cast<uint32_t*>(&r9_43) = r9d29 - 0x5ed4b32f;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_43) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r15_36) = 0;
    rsi44 = rsi12 ^ rbp33;
    __asm__("rcr r9b, 1");
    *reinterpret_cast<unsigned char*>(&rbx37) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx37) + *reinterpret_cast<signed char*>(&cx40))));
    __asm__("rcr r15, 0x53");
    *reinterpret_cast<uint32_t*>(&r14_45) = *reinterpret_cast<uint32_t*>(&r14_30) | 0xc0000000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_45) + 4) = 0;
    edx46 = 0x3f4ac851 % *reinterpret_cast<uint32_t*>(&r14_45);
    eax47 = 0x3f4ac851 / *reinterpret_cast<uint32_t*>(&r14_45);
    *reinterpret_cast<int32_t*>(&r13_48) = static_cast<int32_t>(r9_43 + r14_45 * 2 + 0x1542c298);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_48) + 4) = 0;
    r13_49 = r13_48 << 1;
    cf50 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rsi44) < 0xa3ac98fb);
    if (!cf50) {
        r14_45 = r13_49;
    }
    __asm__("rcl ah, cl");
    __asm__("rol rbp, 0x51");
    *reinterpret_cast<uint32_t*>(&rsi51) = (*reinterpret_cast<uint32_t*>(&rsi44) - (0x5c536706 - cf50)) * 0x8b8d6ca6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi51) + 4) = 0;
    cf52 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r9_43) < 0xfa08);
    __asm__("bts r10w, r15w");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx37) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx37) + 1) + *reinterpret_cast<signed char*>(&edx46)) + cf52);
    r13_53 = r13_49 - 0x7cdc75b9 + 1 ^ r14_45;
    eax54 = eax47 ^ 0x1593918c;
    if (*reinterpret_cast<unsigned char*>(&eax54) == *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax54) + 1)) {
        *reinterpret_cast<unsigned char*>(&eax54) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax54) + 1);
    }
    __asm__("btr dx, 0x49");
    r10_55 = rdx39 >> -85;
    *reinterpret_cast<int16_t*>(&r12_41) = reinterpret_cast<int16_t>(1 >> 0x7a);
    __asm__("rol r9, cl");
    __asm__("btc r13W, 0xa5");
    rcx56 = 0;
    *reinterpret_cast<uint32_t*>(&r12_57) = *reinterpret_cast<int32_t*>(&r12_41) + *reinterpret_cast<uint32_t*>(&r14_45) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_57) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rdx58) = edx46 + *reinterpret_cast<uint32_t*>(&r14_45) * 4 - 0xf292c90;
    *reinterpret_cast<unsigned char*>(&cx59) = 0;
    __asm__("shrd dx, ax, cl");
    if (!*reinterpret_cast<unsigned char*>(&rdx58)) {
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx56) + 1) = *reinterpret_cast<unsigned char*>(&rdx58);
        *reinterpret_cast<unsigned char*>(&rdx58) = 0;
    }
    __asm__("rcl rax, 1");
    *reinterpret_cast<uint32_t*>(&r10_60) = *reinterpret_cast<int32_t*>(&r10_55) + *reinterpret_cast<uint32_t*>(&rdx58);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_60) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&cx59) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx56) + 1) - reinterpret_cast<unsigned char>(55 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx56) + 1) < 56)));
    al61 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax54) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r10_60) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax54) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r10_60) + 1))));
    __asm__("btr ebx, 0xf");
    __asm__("xadd r9b, al");
    *reinterpret_cast<uint16_t*>(&rcx56) = reinterpret_cast<uint16_t>(cx59 - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx37) + reinterpret_cast<uint1_t>(cx59 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rbx37))))));
    __asm__("bsr rbx, rsi");
    *reinterpret_cast<uint16_t*>(&r10_60) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_60) >> 1);
    __asm__("rcr bpl, 0x1d");
    __asm__("shrd r15d, ecx, 0x1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx56) + 1) = __undefined();
    *reinterpret_cast<uint32_t*>(&rdi62) = *reinterpret_cast<uint32_t*>(&rdi42) ^ 0x4727c5c;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi62) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r9_63) = *reinterpret_cast<uint16_t*>(&r13_53);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_63) + 4) = 0;
    __asm__("shrd r14, r9, 0xc");
    r10_64 = r10_60 + 1;
    r12_65 = reinterpret_cast<uint64_t>(r12_57 >> 1);
    cf66 = reinterpret_cast<uint1_t>(r12_65 < 0x1a7c9fe5 + static_cast<uint64_t>(__intrinsic()));
    r12_67 = r12_65 - (0x1a7c9fe5 + static_cast<uint64_t>(cf66));
    *reinterpret_cast<int16_t*>(&r12_67) = reinterpret_cast<signed char>(al61 - reinterpret_cast<unsigned char>(0x75 - reinterpret_cast<uint1_t>(al61 < reinterpret_cast<unsigned char>(0x75 - cf66))));
    __asm__("xadd r14b, r10b");
    __asm__("ror bx, 1");
    r13_68 = r13_53 >> -27;
    *reinterpret_cast<uint16_t*>(&r9_63) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_63) & *reinterpret_cast<uint16_t*>(&rsi51));
    if (*reinterpret_cast<signed char*>(&rsi51) == *reinterpret_cast<signed char*>(&rsi51)) {
        *reinterpret_cast<signed char*>(&rsi51) = *reinterpret_cast<signed char*>(&rsi51);
    }
    *reinterpret_cast<uint16_t*>(&rbx37) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx37) - 0x7937) + __intrinsic());
    __asm__("rcr eax, 0xdd");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx37) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx37) + 1) + 1);
    rbx69 = rbx37 | 0x72c75da3;
    if (1) {
        rcx56 = rbx69;
    }
    __asm__("btc r11d, 0x41");
    __asm__("rcl r11w, cl");
    __asm__("rcr r14d, 1");
    __asm__("btc r15d, 0xa");
    __asm__("shld r13d, ebx, 0xf0");
    ecx70 = *reinterpret_cast<int32_t*>(&rcx56) + 1;
    __asm__("shrd r10d, edi, 0x1");
    *reinterpret_cast<uint32_t*>(&r12_71) = *reinterpret_cast<uint32_t*>(&r12_67) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_71) + 4) = 0;
    __asm__("shld ebp, edx, cl");
    __asm__("xadd r11d, r13d");
    if (__intrinsic()) {
        *reinterpret_cast<int32_t*>(&r15_36) = 0xe59f7c1a;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_36) + 4) = 0;
    }
    cl72 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx70) & 15);
    __asm__("shrd r15w, r12w, cl");
    cf73 = reinterpret_cast<uint1_t>(0 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(__intrinsic())));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx69) + 1) = reinterpret_cast<unsigned char>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(cf73))));
    r11_74 = 0xe59f7c1a - (rsi51 + reinterpret_cast<uint1_t>(0xe59f7c1a < rsi51 + cf73));
    __asm__("rcr ecx, 1");
    __asm__("rcr r12b, 1");
    __asm__("btc ebp, r15d");
    *reinterpret_cast<unsigned char*>(&rbx69) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx69) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx69) + 1)) + 1);
    __asm__("rcl r14, 1");
    r8_75 = rdi62 * 0x1305809c;
    __asm__("shld r9, r15, 0x6");
    __asm__("bsr rax, r14");
    __asm__("bts r8, 0x95");
    __asm__("rol rbx, cl");
    *reinterpret_cast<int16_t*>(&r13_68) = 0x165b;
    *reinterpret_cast<int32_t*>(&rdx76) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx76) + 4) = 0;
    cf77 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx76) + 1) < 0xce);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx76) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx76) + 1) - reinterpret_cast<unsigned char>(50 - cf77));
    if (!cf77) {
    }
    *reinterpret_cast<unsigned char*>(&r9_63) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_63) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_36) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r9_63) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_36) + 1))));
    __asm__("ror dil, cl");
    r9_78 = r9_63 >> -42;
    __asm__("xadd r13W, r14w");
    *reinterpret_cast<unsigned char*>(&rbx69) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx69) << 1);
    r14_79 = reinterpret_cast<signed char>(cl72);
    __asm__("rcl ebp, 0x15");
    rdx80 = -rdx76;
    *reinterpret_cast<int32_t*>(&r8_81) = *reinterpret_cast<int32_t*>(&r8_75) << cl72;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_81) + 4) = 0;
    __asm__("bts bp, r9w");
    __asm__("rcr rbp, cl");
    *reinterpret_cast<int16_t*>(&rdx80) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r9_78) * 0x9611);
    __asm__("shld r15d, ebx, cl");
    __asm__("ror r8w, cl");
    *reinterpret_cast<int16_t*>(&r11_74) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r11_74) >> cl72);
    __asm__("rol rsi, 0xa9");
    __asm__("ror r11w, cl");
    __asm__("xadd rbp, r10");
    r9_82 = reinterpret_cast<uint64_t>(r12_71 + r9_78 * 2 + 0x329a3d7f);
    __asm__("rcr cx, 0x3b");
    __asm__("btc si, r10w");
    tmp8_83 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx69) + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx69) + 1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx70) + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx70) + 1) = tmp8_83;
    cf84 = reinterpret_cast<uint1_t>(r15_36 < 0xffffffffc87ffa36);
    r15_85 = r15_36 - (0x378005ca - static_cast<uint64_t>(cf84));
    dl86 = reinterpret_cast<uint1_t>(r15_85 == static_cast<uint64_t>(cf84));
    r9_87 = r9_82 - (0xc00c1cb - static_cast<uint64_t>(reinterpret_cast<uint1_t>(r9_82 < 0xfffffffff3ff3e35)));
    *reinterpret_cast<uint16_t*>(&rsi51) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi51) - reinterpret_cast<uint16_t>(0x57e2 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rsi51) < 0xa81e)));
    rdi88 = r15_85 + r9_87 * 2 + 30;
    *reinterpret_cast<unsigned char*>(&ecx70) = reinterpret_cast<unsigned char>(cl72 - reinterpret_cast<unsigned char>(dl86 + reinterpret_cast<uint1_t>(cl72 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(dl86)))));
    __asm__("rol rbp, 1");
    __asm__("shrd r8d, ecx, cl");
    __asm__("rol si, cl");
    rax89 = 0x2d18b3f508b4f49c;
    *reinterpret_cast<unsigned char*>(&rdx80) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(dl86 + *reinterpret_cast<unsigned char*>(&ecx70)) + 1);
    rsi90 = rsi51 | r11_74;
    *reinterpret_cast<int16_t*>(&r14_79) = static_cast<int16_t>(*reinterpret_cast<int32_t*>(&r9_87) + ecx70 * 8 + 96);
    *reinterpret_cast<uint32_t*>(&rcx91) = reinterpret_cast<uint32_t>(ecx70 + *reinterpret_cast<int32_t*>(&rsi90));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx91) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rcx91) = 0xff;
    if (0) {
        *reinterpret_cast<int32_t*>(&rdi88) = *reinterpret_cast<int32_t*>(&rbx69);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi88) + 4) = 0;
    }
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&rax89) = 0x7ffd;
    }
    rbp92 = reinterpret_cast<uint64_t>(-0x5e047ffd);
    *reinterpret_cast<unsigned char*>(&r8_81) = reinterpret_cast<uint1_t>(!__intrinsic());
    *reinterpret_cast<uint32_t*>(&rdx93) = *reinterpret_cast<uint32_t*>(&rdx80) >> 0xff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx93) + 4) = 0;
    __asm__("ror r9b, cl");
    rcx94 = rcx91 & rax89;
    if (1) {
        *reinterpret_cast<uint16_t*>(&r15_85) = *reinterpret_cast<uint16_t*>(&rdi88);
    }
    eax95 = *reinterpret_cast<int32_t*>(&rax89) << 1;
    __asm__("ror edi, 0x58");
    r8d96 = static_cast<int32_t>(r12_71 + r8_81 * 4 + 0x99);
    *reinterpret_cast<int32_t*>(&rax97) = *reinterpret_cast<int16_t*>(&eax95);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax97) + 4) = 0;
    rax98 = rax97 & rbp92;
    *reinterpret_cast<int32_t*>(&rbp99) = *reinterpret_cast<int32_t*>(&rbp92) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp99) + 4) = 0;
    __asm__("ror r13, 0xa5");
    *reinterpret_cast<uint32_t*>(&r11_100) = 0x63edee91;
    __asm__("shrd r15w, r9w, 0x3");
    *reinterpret_cast<uint16_t*>(&r8d96) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8d96) | 0xc000);
    *reinterpret_cast<uint16_t*>(&rdx93) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax98) % *reinterpret_cast<uint16_t*>(&r8d96));
    rax101 = rdi88;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx94) + 1) = reinterpret_cast<signed char>(0 << *reinterpret_cast<unsigned char*>(&rcx94));
    *reinterpret_cast<uint32_t*>(&rcx102) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx94) >> 19);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx102) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rcx102) = reinterpret_cast<uint1_t>(!__intrinsic());
    *reinterpret_cast<unsigned char*>(&r11_100) = 72;
    *reinterpret_cast<signed char*>(&rsi90) = 91;
    *reinterpret_cast<uint16_t*>(&rbp99) = 0xb7aa;
    __asm__("rcl rcx, 1");
    al103 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax101) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx102) + 1)) + 1);
    *reinterpret_cast<uint32_t*>(&r12_104) = *reinterpret_cast<uint32_t*>(&r12_71) | 0x69c5a947;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_104) + 4) = 0;
    __asm__("rcl r12b, 1");
    *reinterpret_cast<uint32_t*>(&r13_105) = *reinterpret_cast<int32_t*>(&r13_68) + *reinterpret_cast<uint32_t*>(&rcx102);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_105) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rsi106) = *reinterpret_cast<int32_t*>(&rsi90) - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi106) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r10_107) = *reinterpret_cast<int32_t*>(&r10_64) - 0x28f3dffe + __intrinsic() << *reinterpret_cast<unsigned char*>(&rcx102);
    *reinterpret_cast<int32_t*>(&r8_108) = 0xc4bd1008;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_108) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rcx102) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx93) + 1)));
    __asm__("rol r10w, 1");
    __asm__("rcl r13, 1");
    cf109 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r15_85) < 0xb13e);
    *reinterpret_cast<uint16_t*>(&r15_85) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_85) - reinterpret_cast<uint16_t>(0x4ec2 - cf109));
    if (*reinterpret_cast<uint16_t*>(&r15_85) == static_cast<uint32_t>(cf109)) {
        *reinterpret_cast<uint32_t*>(&rcx102) = *reinterpret_cast<uint32_t*>(&rdx93);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx102) + 4) = 0;
    }
    if (*reinterpret_cast<unsigned char*>(&r10_107) == 8) {
        tmp8_110 = *reinterpret_cast<unsigned char*>(&r10_107);
        *reinterpret_cast<unsigned char*>(&r10_107) = 8;
        *reinterpret_cast<unsigned char*>(&r8_108) = tmp8_110;
    }
    __asm__("xadd bx, r8w");
    *reinterpret_cast<uint32_t*>(&rbx111) = *reinterpret_cast<int32_t*>(&rbx69) + *reinterpret_cast<uint32_t*>(&rdx93) + __intrinsic();
    if (!*reinterpret_cast<uint32_t*>(&rbx111)) {
        r11_100 = r13_105;
    }
    cf112 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rcx102) < 0xb7aa);
    *reinterpret_cast<uint16_t*>(&rcx102) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx102) - 0xb7aa);
    tmp16_113 = *reinterpret_cast<int16_t*>(&r12_104);
    *reinterpret_cast<int16_t*>(&r12_104) = *reinterpret_cast<int16_t*>(&r9_87);
    *reinterpret_cast<int16_t*>(&r9_87) = tmp16_113;
    *reinterpret_cast<uint32_t*>(&r11_114) = *reinterpret_cast<uint32_t*>(&r11_100) - (*reinterpret_cast<uint32_t*>(&rdx93) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r11_100) < *reinterpret_cast<uint32_t*>(&rdx93) + cf112));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_114) + 4) = 0;
    r9_115 = r9_87 - (0x548467fb + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r9_87 < 0x548467fc)));
    cf116 = reinterpret_cast<uint1_t>(al103 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax101) + 1))));
    *reinterpret_cast<unsigned char*>(&rax101) = reinterpret_cast<unsigned char>(al103 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax101) + 1) + cf116));
    if (!__intrinsic()) {
        rsi106 = r9_115;
    }
    cf117 = reinterpret_cast<uint1_t>(rdx93 < r14_79 + static_cast<uint64_t>(cf116));
    rdx118 = rdx93 - (r14_79 + static_cast<uint64_t>(cf117));
    tmp16_119 = *reinterpret_cast<int16_t*>(&rbx111);
    *reinterpret_cast<int16_t*>(&rbx111) = *reinterpret_cast<int16_t*>(&r9_115);
    *reinterpret_cast<int16_t*>(&r9_115) = tmp16_119;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx111) + 1) = cf117;
    if (!__intrinsic()) {
    }
    __asm__("bsr r12d, ecx");
    __asm__("rol r10w, 0xfd");
    __asm__("xadd r13W, r13W");
    __asm__("bts r9w, r9w");
    __asm__("rcr r11d, cl");
    __asm__("bts rdx, rdi");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax101) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax101) + 1) ^ *reinterpret_cast<unsigned char*>(&rax101));
    __asm__("rol esi, 1");
    __asm__("xadd rbp, rbp");
    *reinterpret_cast<uint32_t*>(&rdi120) = *reinterpret_cast<int32_t*>(&r9_115) + *reinterpret_cast<uint32_t*>(&rbx111) * 2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi120) + 4) = 0;
    if (*reinterpret_cast<signed char*>(&r10_107) < reinterpret_cast<signed char>(94)) {
        r11_114 = r14_79;
    }
    __asm__("rol r15w, cl");
    __asm__("btc r8, r14");
    *reinterpret_cast<int32_t*>(&r13_121) = *reinterpret_cast<signed char*>(&rdx118);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_121) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r12_104) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_104) ^ 58);
    less122 = __intrinsic();
    if (less122) {
        r13_121 = rcx102;
    }
    if (!less122) {
        *reinterpret_cast<uint32_t*>(&rcx102) = *reinterpret_cast<uint32_t*>(&rdi120);
    }
    r9_123 = r9_115 | r8_108;
    __asm__("btc si, 0xe2");
    __asm__("rcl r10b, cl");
    __asm__("shld r12w, r13W, 0x4");
    eax124 = *reinterpret_cast<int32_t*>(&rax101) * *reinterpret_cast<uint32_t*>(&rbx111);
    *reinterpret_cast<int32_t*>(&rdx125) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx125) + 4) = 0;
    cf126 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx102) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx125) + 1))));
    if (*reinterpret_cast<unsigned char*>(&rcx102) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx125) + 1) + cf126) == static_cast<uint32_t>(cf126)) {
    }
    eax127 = *reinterpret_cast<int16_t*>(&eax124);
    __asm__("shld rdi, r9, 0xb6");
    *reinterpret_cast<int32_t*>(&rax128) = *reinterpret_cast<int16_t*>(&eax127);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax128) + 4) = 0;
    si129 = static_cast<int16_t>(reinterpret_cast<uint64_t>(rdx125 + (r13_121 - 0x53a6ac79)) + r12_104 + 88);
    __asm__("btr r11w, 0xb9");
    __asm__("rcl r10b, 1");
    ecx130 = *reinterpret_cast<unsigned char*>(&r12_104);
    r13d131 = 0xffffb7aa;
    __asm__("bsr r9w, bx");
    __asm__("shrd r10w, r13W, 0x1");
    r9d132 = *reinterpret_cast<uint32_t*>(&r9_123) | 0xffffb7aa;
    *reinterpret_cast<int16_t*>(&r13d131) = *reinterpret_cast<int16_t*>(&rdi120);
    *reinterpret_cast<int16_t*>(&rdi120) = 0xb7aa;
    __asm__("btc edx, esi");
    *reinterpret_cast<unsigned char*>(&cx133) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx130) | *reinterpret_cast<unsigned char*>(&si129)) & 15);
    __asm__("shld ax, si, cl");
    __asm__("shrd rbp, r13, cl");
    __asm__("shld r14, r11, 0x8e");
    __asm__("ror bh, 1");
    *reinterpret_cast<int16_t*>(&rsi106) = reinterpret_cast<int16_t>(si129 + 0x37c);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&cx133) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx130) + 1) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax128) + 1));
    __asm__("rcl edx, 0x50");
    *reinterpret_cast<int32_t*>(&r13_134) = reinterpret_cast<int32_t>(r13d131 >> 11) >> *reinterpret_cast<unsigned char*>(&cx133);
    cx135 = reinterpret_cast<uint16_t>(cx133 >> *reinterpret_cast<unsigned char*>(&cx133));
    *reinterpret_cast<int16_t*>(&rax128) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax128) - 0x1f32);
    *reinterpret_cast<uint16_t*>(&r8_108) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_108) & *reinterpret_cast<uint16_t*>(&r9d132));
    if (!__intrinsic()) {
    }
    __asm__("rol r10d, 1");
    rsi136 = rsi106 * 0xffffffffda9a7112;
    __asm__("xadd r15b, bpl");
    __asm__("cwd ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx130) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&cx135) + 1) + reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbx111) << 1)) + reinterpret_cast<uint1_t>(rax128 < 0x22922899));
    *reinterpret_cast<int16_t*>(&r13_134) = 0;
    __asm__("xadd cl, dl");
    *reinterpret_cast<int32_t*>(&rsi137) = *reinterpret_cast<int32_t*>(&rsi136) + *reinterpret_cast<int32_t*>(&rbp99);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi137) + 4) = 0;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi137) < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi137) == 0)) {
    }
    *reinterpret_cast<uint16_t*>(&r9d132) = static_cast<uint16_t>(r11_114 + rbp99 * 8);
    __asm__("rcr rdi, 1");
    __asm__("bts r15d, 0x83");
    __asm__("rcr di, 1");
    *reinterpret_cast<unsigned char*>(&ecx130) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&cx135) & 15);
    __asm__("shld r9w, r11w, cl");
    __asm__("xadd cl, dl");
    __asm__("shld edi, ecx, 0x1");
    __asm__("rcl edx, 1");
    *reinterpret_cast<unsigned char*>(&rdi120) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(87 - *reinterpret_cast<unsigned char*>(&r8_108)) + __intrinsic());
    r12_138 = rdi120;
    __asm__("shld dx, r8w, 0x1");
    *reinterpret_cast<int32_t*>(&r9_139) = reinterpret_cast<int32_t>(~(r9d132 - (0x67546c47 + reinterpret_cast<uint1_t>(r9d132 < 0x67546c47))));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_139) + 4) = 0;
    *reinterpret_cast<int16_t*>(&rsi137) = 0x11a7;
    __asm__("rcr rdi, 1");
    __asm__("rol r9, 1");
    rsi140 = reinterpret_cast<uint64_t>(-rsi137);
    __asm__("ror r13d, 0xdd");
    *reinterpret_cast<unsigned char*>(&r8_108) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_108) << *reinterpret_cast<unsigned char*>(&ecx130));
    r9_141 = r9_139 ^ rsi140;
    __asm__("bsf edx, edi");
    __asm__("ror r9, 1");
    __asm__("rcr edi, 1");
    r11w142 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r11_114) + *reinterpret_cast<int16_t*>(&r9_141)) + 1) >> -41);
    __asm__("btc r9w, si");
    __asm__("bsr r9w, dx");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx130) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx130) + 1) >> *reinterpret_cast<unsigned char*>(&ecx130)) << 1);
    __asm__("rcr bp, 1");
    __asm__("btr r9w, 0xd2");
    if (1) {
        rbp99 = r12_138;
    }
    __asm__("shrd r11, r13, 0x1");
    __asm__("rol r11w, cl");
    r15_143 = *reinterpret_cast<uint16_t*>(&rsi140);
    if (reinterpret_cast<uint16_t>(__intrinsic() + r11w142) < __intrinsic()) {
    }
    esi144 = *reinterpret_cast<uint32_t*>(&rsi140) >> 0xffffff8b;
    __asm__("cdq ");
    *reinterpret_cast<signed char*>(&r13_134) = 0;
    *reinterpret_cast<int32_t*>(&r14_145) = *reinterpret_cast<int16_t*>(&rdi120);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_145) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rcx146) = *reinterpret_cast<uint32_t*>(&rdi120);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx146) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rdi147) = ecx130;
    if (*reinterpret_cast<uint16_t*>(&r8_108) == r11w142) {
        *reinterpret_cast<uint16_t*>(&r8_108) = r11w142;
    }
    *reinterpret_cast<unsigned char*>(&r8_108) = reinterpret_cast<uint1_t>(!__intrinsic());
    if (!__intrinsic()) {
        rdi147 = r8_108;
    }
    __asm__("rcl si, 1");
    r14_148 = r14_145 - (0x53c1a834 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r14_145 < 0x53c1a834)));
    *reinterpret_cast<unsigned char*>(&rcx146) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx146) & 15);
    __asm__("shld r12w, ax, cl");
    __asm__("ror rcx, 1");
    *reinterpret_cast<uint16_t*>(&r12_138) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&rdi120))) ^ 0xd902);
    __asm__("btr r10, 0xb1");
    r10_149 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_134) + *reinterpret_cast<int32_t*>(&r14_148) * 4 + 0x94);
    *reinterpret_cast<signed char*>(&r10_149) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r10_149) + 1);
    cf150 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r15_143) < 51);
    *reinterpret_cast<unsigned char*>(&r15_143) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_143) - reinterpret_cast<unsigned char>(50 + cf150));
    *reinterpret_cast<unsigned char*>(&r14_148) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_148) + 13) + cf150);
    __asm__("rcl r13, 1");
    __asm__("bts r12, rdx");
    __asm__("cwd ");
    __asm__("rcr dl, 1");
    __asm__("shld r9w, r8w, 0x3");
    *reinterpret_cast<signed char*>(&rbp99) = 12;
    *reinterpret_cast<uint16_t*>(&r14_148) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_148) + *reinterpret_cast<uint16_t*>(&r8_108)) + 1);
    *reinterpret_cast<unsigned char*>(&r8_108) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_108) + *reinterpret_cast<unsigned char*>(&rdi147))));
    __asm__("rol esi, cl");
    __asm__("btc bp, 0x38");
    __asm__("shrd esi, r10d, 0x1");
    *reinterpret_cast<unsigned char*>(&cx151) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx146) - reinterpret_cast<unsigned char>(47 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx146) < 47)));
    if (!r10_149) {
    }
    rbp152 = rbp99 >> 1;
    *reinterpret_cast<uint32_t*>(&r12_153) = *reinterpret_cast<uint32_t*>(&r12_138) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_153) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&cx151) + 1) = 0;
    *reinterpret_cast<int32_t*>(&r14_154) = *reinterpret_cast<int32_t*>(&r14_148) - 0xe4f57d0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_154) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rdi155) = -*reinterpret_cast<uint32_t*>(&rdi147);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi155) + 4) = 0;
    *reinterpret_cast<int16_t*>(&rcx146) = reinterpret_cast<int16_t>(cx151 + 0x36b8);
    *reinterpret_cast<int32_t*>(&r8_156) = *reinterpret_cast<int32_t*>(&r8_108) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_156) + 4) = 0;
    r10_157 = 0x67853dcba6a62e47;
    r12_158 = -r12_153;
    __asm__("rcr bpl, 1");
    __asm__("rcr r13W, 0xf2");
    __asm__("shld rsi, r12, cl");
    __asm__("bsf r14d, r13d");
    bx159 = 0x2864;
    __asm__("rcr ebp, 1");
    *reinterpret_cast<int16_t*>(&r8_156) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r8_156) - 1);
    __asm__("rcr r14d, 0xde");
    __asm__("ror r8b, 0xa2");
    rax160 = reinterpret_cast<uint64_t>(r8_156 * 0xffffffff9439c70b);
    rcx161 = rcx146 - (0x6ecbd071 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rcx146 < 0x6ecbd071 + static_cast<uint64_t>(__intrinsic()))));
    __asm__("rcl ecx, 1");
    *reinterpret_cast<int16_t*>(&r12_158) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r12_158) << 1);
    __asm__("rol r11w, 1");
    __asm__("rol ax, 1");
    if (__intrinsic()) {
        bx159 = *reinterpret_cast<uint16_t*>(&r14_154);
    }
    __asm__("rcl cl, cl");
    __asm__("bsf r11d, ebx");
    *reinterpret_cast<int16_t*>(&rax160) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax160) * *reinterpret_cast<int16_t*>(&rbp152));
    tmp64_162 = (rax160 & 0xffffffff) << 32 | (rax160 & 0xffffffff00000000) >> 32;
    tmp64_163 = (tmp64_162 & 0xffff0000ffff) << 16 | (tmp64_162 & 0xffff0000ffff0000) >> 16;
    rax164 = (tmp64_163 & 0xff00ff00ff00ff) << 8 | (tmp64_163 & 0xff00ff00ff00ff00) >> 8;
    eax165 = *reinterpret_cast<uint32_t*>(&rax164) | 0xc0000000;
    *reinterpret_cast<uint32_t*>(&rdx166) = eax165 % eax165;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx166) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rax167) = eax165 / eax165;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax167) + 4) = 0;
    if (__intrinsic()) {
        r10_157 = rdx166;
    }
    *reinterpret_cast<uint16_t*>(&rax167) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax167) - reinterpret_cast<uint16_t>(0x7a - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rax167) < 0xff87)));
    r13_168 = rax167 * 0x7f62377b;
    cf169 = reinterpret_cast<uint1_t>(esi144 < 0x8128e53a);
    *reinterpret_cast<unsigned char*>(&rdi155) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi144 - (0x7ed71ac7 - cf169)) >= reinterpret_cast<int32_t>(static_cast<uint32_t>(cf169)));
    __asm__("shld rdi, r13, 0x17");
    __asm__("ror ebx, cl");
    __asm__("btc r10w, r15w");
    __asm__("shld esi, r15d, 0xcf");
    dx170 = *reinterpret_cast<unsigned char*>(&bx159);
    __asm__("btc r9d, esi");
    r13_171 = r13_168 << 1;
    __asm__("btr r8w, ax");
    __asm__("rcr r14d, 1");
    r12_172 = -r12_158;
    if (__intrinsic()) {
    }
    *reinterpret_cast<uint32_t*>(&r15_173) = *reinterpret_cast<uint32_t*>(&r15_143) - (0x46fcc4ad - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r15_143) < 0xb9033b53));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_173) + 4) = 0;
    rbx174 = *reinterpret_cast<uint32_t*>(&r10_157) + *reinterpret_cast<uint32_t*>(&rdi155) * 8 - 0x38fac4a2;
    tmp8_175 = *reinterpret_cast<unsigned char*>(&dx170);
    *reinterpret_cast<unsigned char*>(&rcx161) = tmp8_175;
    *reinterpret_cast<int16_t*>(&r10_157) = reinterpret_cast<int16_t>(~*reinterpret_cast<int16_t*>(&r10_157));
    __asm__("rcr r10b, 0xb7");
    *reinterpret_cast<unsigned char*>(&r10_157) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_157) << 1);
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&rcx161) = *reinterpret_cast<uint16_t*>(&rbx174);
    }
    *reinterpret_cast<uint32_t*>(&rbp176) = *reinterpret_cast<unsigned char*>(&r10_157);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp176) + 4) = 0;
    __asm__("shld r10w, bx, 0x1");
    __asm__("ror dil, 0xbb");
    __asm__("ror r9w, 1");
    r11_177 = *reinterpret_cast<signed char*>(&r10_157);
    __asm__("btc r12d, r11d");
    r14_178 = reinterpret_cast<uint64_t>(r14_154 + ~rbp176);
    __asm__("ror r13b, cl");
    *reinterpret_cast<uint32_t*>(&r11_179) = *reinterpret_cast<uint32_t*>(&r11_177) >> -35;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_179) + 4) = 0;
    __asm__("bts r12w, r8w");
    if (*reinterpret_cast<signed char*>(&rdi155) > *reinterpret_cast<signed char*>(&r15_173)) {
        *reinterpret_cast<int16_t*>(&r15_173) = *reinterpret_cast<int16_t*>(&rdi155);
    }
    r10d180 = *reinterpret_cast<uint32_t*>(&r10_157) | *reinterpret_cast<uint32_t*>(&rbx174);
    rdx181 = __intrinsic();
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&rdx181) = *reinterpret_cast<int16_t*>(&r13_171);
    }
    __asm__("rol r14d, cl");
    *reinterpret_cast<int32_t*>(&rsi182) = static_cast<int32_t>(rdi155 + rdx181 * 8 + 0x4dc7e9d2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi182) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r12_183) = *reinterpret_cast<int32_t*>(&r12_172) << *reinterpret_cast<unsigned char*>(&rcx161);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_183) + 4) = 0;
    edi184 = *reinterpret_cast<uint32_t*>(&rdi155) | 0x5596c267;
    __asm__("rcr r12d, cl");
    rax185 = r12_183;
    __asm__("bts r15w, 0x5c");
    *reinterpret_cast<unsigned char*>(&r15_173) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_173) + 0xee) + 1);
    r15_186 = r15_173 ^ 0x2e47498f;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax185) + 1) = reinterpret_cast<uint1_t>(r15_186 == 0);
    __asm__("shrd rbx, r9, cl");
    tmp8_187 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx181) + 1) - 63);
    cf188 = reinterpret_cast<uint1_t>(tmp8_187 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx181) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx181) + 1) = tmp8_187;
    if (reinterpret_cast<int32_t>(r10d180 + *reinterpret_cast<uint32_t*>(&r11_179) + cf188) < reinterpret_cast<int32_t>(0) != __intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r11_179) = *reinterpret_cast<uint16_t*>(&edi184);
    }
    __asm__("shld r13d, r10d, cl");
    r12_189 = static_cast<uint64_t>(r10d180 + *reinterpret_cast<int32_t*>(&r13_171) * 2 + 0x45b27b19) + 0x341fdf69 + 1 & 0xffffffff9553ee24;
    *reinterpret_cast<uint16_t*>(&edi184) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi184) - reinterpret_cast<uint16_t>(0x30cf - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&edi184) < 0xcf31)));
    rcx190 = rcx161 | rdx181;
    *reinterpret_cast<unsigned char*>(&rbx174) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx174) + *reinterpret_cast<unsigned char*>(&rdx181)) + 1);
    ebp191 = *reinterpret_cast<unsigned char*>(&edi184);
    __asm__("ror bx, 0xd0");
    __asm__("bsf r11w, ax");
    __asm__("xadd r11w, di");
    *reinterpret_cast<unsigned char*>(&rdx181) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx181) - reinterpret_cast<unsigned char>(70 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdx181) < 70)));
    *reinterpret_cast<uint16_t*>(&rbx174) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx174) - reinterpret_cast<uint16_t>(0x3630 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rbx174) < 0x3631)));
    __asm__("ror ecx, cl");
    *reinterpret_cast<unsigned char*>(&rcx190) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx190) & 15);
    __asm__("shld r10w, r8w, cl");
    __asm__("ror r15d, 1");
    __asm__("shrd r15d, r12d, 0x5e");
    rdx192 = rdx181 * 0xffffffffd4fd1bee;
    rsi193 = rsi182 * 0x6a24b602;
    *reinterpret_cast<uint32_t*>(&rbx194) = *reinterpret_cast<uint32_t*>(&rbx174) - (0x71463916 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbx174) < 0x71463917));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx194) + 4) = 0;
    *reinterpret_cast<signed char*>(&r12_189) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r12_189) - *reinterpret_cast<signed char*>(&rdx192));
    esi195 = *reinterpret_cast<int32_t*>(&rsi193) >> -17;
    __asm__("rol ebx, 0xb9");
    __asm__("shrd r10w, r9w, 0xa");
    dx196 = *reinterpret_cast<signed char*>(&rbx194);
    *reinterpret_cast<int32_t*>(&rdi197) = reinterpret_cast<int32_t>(-edi184);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi197) + 4) = 0;
    __asm__("shrd r9d, r8d, 0x5a");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx194) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx194) + 1) ^ *reinterpret_cast<unsigned char*>(&dx196));
    *reinterpret_cast<int32_t*>(&rax198) = (*reinterpret_cast<int32_t*>(&rax185) << *reinterpret_cast<unsigned char*>(&rcx190)) * *reinterpret_cast<int32_t*>(&rdi197);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax198) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx199) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx199) + 4) = 0;
    ax200 = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax198) * *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax198) + 1));
    rbx201 = rbx194 | r12_189;
    rdx202 = rdx199 >> *reinterpret_cast<unsigned char*>(&rcx190);
    __asm__("rol r9d, 1");
    *reinterpret_cast<int16_t*>(&rbx201) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbx201) + 0x9a6);
    if (!__intrinsic()) {
    }
    *reinterpret_cast<uint32_t*>(&rdx203) = *reinterpret_cast<uint32_t*>(&rdx202) | *reinterpret_cast<uint32_t*>(&rbx201);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx203) + 4) = 0;
    rdx204 = rdx203 ^ rdi197;
    __asm__("shld r15d, esi, cl");
    r15d205 = *reinterpret_cast<uint32_t*>(&r15_186) & 0xb91ad5d0;
    *reinterpret_cast<uint16_t*>(&r12_189) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r12_189) >> 73);
    *reinterpret_cast<unsigned char*>(&rdi197) = 0;
    if (*reinterpret_cast<uint32_t*>(&rdx204) == r15d205) {
        r15d205 = *reinterpret_cast<uint32_t*>(&rdx204);
    }
    __asm__("bts ecx, 0x8b");
    *reinterpret_cast<int16_t*>(&rax198) = reinterpret_cast<int16_t>(reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&ax200) + *reinterpret_cast<unsigned char*>(&esi195)))) + 1) * *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx201) + 1));
    __asm__("cwd ");
    __asm__("shld r8d, eax, cl");
    cx206 = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx190) + 1);
    *reinterpret_cast<uint32_t*>(&r15_207) = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(r15d205) >> 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_207) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&r15_207) <= *reinterpret_cast<int32_t*>(&r11_179)) {
        r11_179 = r14_178;
    }
    __asm__("rol bh, 1");
    __asm__("btr bx, cx");
    *reinterpret_cast<uint32_t*>(&rsi208) = *reinterpret_cast<uint32_t*>(&r14_178) + *reinterpret_cast<uint32_t*>(&rbx201) * 4 + 0xb3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi208) + 4) = 0;
    r10_209 = rdi197 * 0x5c500e8f * 0x22610aa9;
    *reinterpret_cast<unsigned char*>(&rcx190) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&cx206) & 15);
    __asm__("shld r15w, r9w, cl");
    __asm__("btc di, cx");
    *reinterpret_cast<int32_t*>(&r13_210) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_210) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rdi197) = 0;
    rsi211 = rsi208 >> *reinterpret_cast<unsigned char*>(&rcx190);
    *reinterpret_cast<uint32_t*>(&r14_212) = *reinterpret_cast<uint32_t*>(&r14_178) - (0x7c389484 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r14_178) < 0x7c389484 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&ebp191) < 0)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_212) + 4) = 0;
    r14_213 = r14_212 + 0x9194576f + 1;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx190) + 1) = reinterpret_cast<uint1_t>(!!r14_213);
    r9_214 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r12_189) + 0x2328aede + 0x2e55148);
    __asm__("rcl r13W, 0x52");
    __asm__("rcl r10b, cl");
    __asm__("bts rdi, 0x7b");
    __asm__("rcr eax, 1");
    rax215 = reinterpret_cast<int64_t>(~((rax198 << 1) * r9_214));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax215) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("btr di, bp");
    rax216 = *reinterpret_cast<int32_t*>(&rax215);
    r15_217 = r15_207 << *reinterpret_cast<unsigned char*>(&rcx190);
    __asm__("cdq ");
    __asm__("btc rdi, rdx");
    __asm__("btc di, 0x92");
    r10_218 = r10_209 + r9_214 + __intrinsic();
    if (!r10_218) {
    }
    *reinterpret_cast<uint16_t*>(&r9_214) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_214) | 0xc000);
    *reinterpret_cast<uint16_t*>(&rax216) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax216) / *reinterpret_cast<uint16_t*>(&r9_214));
    rcx219 = rcx190 | 0xc000000000000000;
    rdx220 = rax216 % rcx219;
    rax221 = rax216 / rcx219;
    __asm__("ror r9d, cl");
    *reinterpret_cast<unsigned char*>(&rbx201) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx201) & *reinterpret_cast<unsigned char*>(&r15_217));
    *reinterpret_cast<int32_t*>(&r14_222) = *reinterpret_cast<int32_t*>(&r14_213) << 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_222) + 4) = 0;
    if (__intrinsic()) {
        r15_217 = rdi197;
    }
    __asm__("rcl dx, 1");
    *reinterpret_cast<int16_t*>(&r14_222) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r14_222) >> *reinterpret_cast<signed char*>(&rcx219));
    *reinterpret_cast<uint32_t*>(&rbp223) = ebp191 - (*reinterpret_cast<int32_t*>(&r12_189) + reinterpret_cast<uint1_t>(ebp191 < *reinterpret_cast<int32_t*>(&r12_189) + 1)) & *reinterpret_cast<uint32_t*>(&r11_179);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp223) + 4) = 0;
    __asm__("rcl r9d, 0xf0");
    __asm__("bts rcx, 0x67");
    r14_224 = r14_222 - (r14_222 + reinterpret_cast<uint1_t>(r14_222 < r14_222 + 1));
    *reinterpret_cast<int32_t*>(&rax225) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax221) * *reinterpret_cast<uint16_t*>(&rdx220)) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax225) + 4) = 0;
    __asm__("btr edx, 0xd2");
    __asm__("rcr r14d, 1");
    tmp8_226 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp223) + 45)));
    cf227 = reinterpret_cast<uint1_t>(tmp8_226 < *reinterpret_cast<unsigned char*>(&rbp223));
    *reinterpret_cast<unsigned char*>(&rbp223) = tmp8_226;
    if (!reinterpret_cast<uint1_t>(cf227 | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rbp223) == 0))) {
        *reinterpret_cast<int32_t*>(&rax225) = *reinterpret_cast<int32_t*>(&rdi197);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax225) + 4) = 0;
    }
    if (cf227) {
        rcx219 = r14_224;
    }
    __asm__("rcl dx, 0xfa");
    r13w228 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_189) | 0xc000);
    ax229 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax225) / r13w228);
    *reinterpret_cast<uint16_t*>(&r13_210) = reinterpret_cast<uint16_t>(r13w228 | 0xc000);
    *reinterpret_cast<uint16_t*>(&rdx220) = reinterpret_cast<uint16_t>(ax229 % *reinterpret_cast<uint16_t*>(&r13_210));
    *reinterpret_cast<uint16_t*>(&rax225) = reinterpret_cast<uint16_t>(ax229 / *reinterpret_cast<uint16_t*>(&r13_210));
    return rax225 + rbx201 + rcx219 + rdx220 + rbp223 + (rsi211 * 0x443f2bfd - 0x18ed6d2e) + rdi197 + 0x3fffffffffffffff + r9_214 + r10_218 + r11_179 + r12_189 + r13_210 + r14_224 + r15_217 + 0x5991d9a503a965cf;
}

uint64_t log_size_10_var_003(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t rcx4;
    int64_t rdx5;
    int64_t rdi6;
    uint64_t r10_7;
    int64_t r15_8;
    uint64_t rsi9;
    int64_t rax10;
    uint32_t r8d11;
    uint64_t rcx12;
    int64_t r14_13;
    uint64_t r13_14;
    int64_t r9_15;
    uint64_t rbp16;
    uint1_t cf17;
    uint64_t r12_18;
    uint64_t rdx19;
    int64_t rdi20;
    uint64_t rdx21;
    uint64_t rsi22;
    uint64_t rbx23;
    uint64_t r13_24;
    int32_t tmp32_25;
    uint32_t ecx26;
    int64_t rax27;
    int64_t rdi28;
    uint64_t r11_29;
    uint32_t tmp32_30;
    int16_t ax31;
    uint32_t esi32;
    int64_t r15_33;
    uint32_t edi34;
    uint64_t r8_35;
    uint64_t rbx36;
    uint16_t r10w37;
    uint32_t r12d38;
    uint32_t ecx39;
    int64_t r13_40;
    uint16_t cx41;
    unsigned char tmp8_42;
    uint1_t cf43;
    int64_t rax44;
    uint64_t rdx45;
    uint32_t edi46;
    int64_t r9_47;
    uint64_t rsi48;
    uint64_t r8_49;
    uint64_t r14_50;
    uint16_t r9w51;
    int32_t r10d52;
    uint64_t r14_53;
    int64_t rax54;
    int64_t rdx55;
    int64_t r14_56;
    uint64_t rax57;
    uint1_t cf58;
    uint32_t edi59;
    uint32_t r12d60;
    uint1_t cf61;
    uint1_t zf62;
    int64_t r10_63;
    uint64_t r13_64;
    uint64_t rbp65;
    int64_t r12_66;
    uint64_t rbx67;
    uint64_t rax68;
    uint1_t cf69;
    uint64_t r11_70;
    int64_t tmp64_71;
    uint64_t rbp72;
    uint1_t cf73;
    uint64_t rcx74;
    int64_t r9_75;
    uint64_t rsi76;
    int64_t rdi77;
    int64_t r14_78;
    int16_t si79;
    uint64_t r14_80;
    uint16_t ax81;
    int64_t r15_82;
    uint64_t r11_83;
    signed char tmp8_84;
    uint64_t r8_85;
    uint16_t r13w86;
    uint64_t rdi87;
    int64_t r11_88;
    int64_t rax89;
    uint64_t r8_90;
    int64_t r8_91;
    int64_t r8_92;
    uint64_t rax93;
    int64_t rax94;
    int64_t rdx95;
    uint64_t tmp64_96;
    uint64_t r14_97;
    uint32_t r11d98;
    uint64_t r9_99;
    uint64_t r10_100;
    int1_t below_or_equal101;
    unsigned char tmp8_102;
    uint64_t rcx103;
    uint64_t r9_104;
    int64_t rdi105;
    int64_t rcx106;
    int64_t rax107;
    uint64_t rbp108;
    int16_t r12w109;
    uint64_t r11_110;
    uint64_t r13_111;
    uint64_t tmp64_112;
    uint64_t r9_113;
    uint64_t rdi114;
    int64_t r8_115;
    uint64_t rbx116;
    int16_t dx117;
    unsigned char sil118;
    uint64_t rsi119;
    int64_t rbx120;
    unsigned char dh121;
    uint64_t rax122;
    uint32_t ebx123;
    uint64_t rbp124;
    uint64_t r14_125;
    uint64_t r14_126;
    int64_t rbx127;
    uint64_t r13_128;
    uint64_t rcx129;
    unsigned char bpl130;
    uint64_t rcx131;
    int64_t rbx132;
    unsigned char tmp8_133;
    int64_t rbp134;
    uint64_t rcx135;
    uint64_t r10_136;
    int64_t r13_137;
    uint16_t ax138;
    uint64_t r9_139;
    uint32_t ebp140;
    uint64_t rdx141;
    int64_t rbp142;
    uint32_t ebx143;
    uint64_t r12_144;
    int64_t rdx145;
    uint64_t rbp146;
    uint64_t r13_147;
    uint32_t ecx148;
    int64_t r9_149;
    uint64_t rdi150;
    uint64_t rcx151;
    int64_t rdi152;
    uint64_t r9_153;
    uint64_t r11_154;
    int64_t r13_155;
    int64_t rbx156;
    uint64_t rsi157;
    int64_t r14_158;
    uint64_t rsi159;
    int64_t rdx160;
    uint64_t rcx161;
    int64_t r9_162;
    uint64_t r9_163;
    uint64_t tmp64_164;
    int64_t rdx165;
    uint32_t r9d166;
    uint16_t bx167;
    uint32_t ebx168;
    int64_t r15_169;
    uint16_t r13w170;
    int64_t rsi171;
    uint1_t cf172;
    uint64_t rsi173;
    uint64_t r14_174;
    uint64_t rdi175;
    uint64_t r11_176;
    int64_t r8_177;
    uint64_t r15_178;
    int32_t esi179;
    uint1_t cf180;
    uint64_t r12_181;
    uint64_t r15_182;
    int64_t rdx183;
    uint1_t cf184;
    uint16_t r15w185;
    uint64_t r11_186;
    uint64_t rcx187;
    int64_t r10_188;
    uint64_t r14_189;
    int64_t rbx190;
    uint64_t rbp191;
    int32_t ecx192;
    uint32_t eax193;
    uint64_t rax194;
    uint32_t r9d195;
    uint1_t cf196;
    uint64_t r9_197;
    unsigned char tmp8_198;
    uint1_t cf199;
    int64_t rbx200;
    int64_t rbx201;
    uint64_t r10_202;
    int16_t tmp16_203;
    int64_t rbx204;
    int32_t edx205;
    int64_t rdi206;
    int64_t r13_207;
    uint16_t r10w208;
    unsigned char tmp8_209;
    uint64_t rax210;
    int64_t r15_211;
    uint16_t tmp16_212;
    int64_t r14_213;
    uint64_t rsi214;
    int64_t rax215;
    uint64_t r14_216;
    uint64_t rbx217;
    int64_t rcx218;
    int64_t r8_219;

    rbx3 = 0xf75bd8a762e29f41;
    rcx4 = 0x22e41b7a07aeba22;
    rdx5 = 0xe34a07cf36af800e;
    rdi6 = 0xa7a86b96bd8350b;
    r10_7 = 0xc52c767b7f2e6171;
    r15_8 = 0x9335464a4039a847;
    rsi9 = 0xffffffffffffa3b7;
    *reinterpret_cast<int16_t*>(&rcx4) = 0x45dd;
    __asm__("lahf ");
    __asm__("btc cx, 0xcb");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx4) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx4) + 1) - 29);
    __asm__("rcr si, 0x93");
    *reinterpret_cast<uint16_t*>(&rax10) = 0x623;
    r8d11 = 0xb7918b5b;
    __asm__("rol r13W, cl");
    rcx12 = reinterpret_cast<uint64_t>(-rcx4);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax10) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax10) + 1) + 0x68) + 1);
    __asm__("ror dil, 1");
    __asm__("shrd r11w, cx, 0x1");
    *reinterpret_cast<uint32_t*>(&r14_13) = 72;
    *reinterpret_cast<int32_t*>(&r13_14) = 0xe963c52f;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_14) + 4) = 0;
    __asm__("ror r11, 0xf1");
    r9_15 = 0xf68ff115152cfbf0;
    *reinterpret_cast<int16_t*>(&r15_8) = reinterpret_cast<int16_t>(0xa847 << *reinterpret_cast<unsigned char*>(&rcx12));
    __asm__("rcr r12d, 0x46");
    __asm__("bts r11d, eax");
    *reinterpret_cast<int16_t*>(&rdx5) = __intrinsic();
    if (__intrinsic()) {
        r9_15 = r15_8;
    }
    rbp16 = 0x9b3831b9c004a3b7 - (0xffffffffffffa3b7 + reinterpret_cast<uint1_t>(0x9b3831b9c004a3b7 < 0xffffffffffffa3b7 + __intrinsic()));
    __asm__("shld r15d, ebx, 0xd1");
    if (0) {
        *reinterpret_cast<uint32_t*>(&rdi6) = 0xb7918b5b;
        r8d11 = 0x6bd8350b;
    }
    cf17 = reinterpret_cast<uint1_t>(0xc52f < reinterpret_cast<uint16_t>(0x6140 + __intrinsic()));
    *reinterpret_cast<uint16_t*>(&r13_14) = reinterpret_cast<uint16_t>(0xc52f - reinterpret_cast<uint16_t>(0x6140 + cf17));
    if (0xc52f > reinterpret_cast<uint16_t>(0x6140 + cf17)) {
        *reinterpret_cast<int16_t*>(&rbx3) = *reinterpret_cast<int16_t*>(&rdi6);
    }
    r12_18 = 0xae84524c7d7e6c35 >> 0xffffffffffffff8d;
    *reinterpret_cast<int16_t*>(&r15_8) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r15_8) >> 94);
    rdx19 = reinterpret_cast<uint64_t>(rdx5 + r15_8);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx19) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx19) + 1) & *reinterpret_cast<unsigned char*>(&rdx19));
    *reinterpret_cast<int32_t*>(&rdi20) = *reinterpret_cast<int16_t*>(&r8d11);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r10_7) = reinterpret_cast<uint16_t>(0x6140 - reinterpret_cast<uint16_t>(0x71 + reinterpret_cast<uint1_t>(0x6140 < reinterpret_cast<uint16_t>(0x71 + reinterpret_cast<uint1_t>(0xc52c767b7f2e6140 < rbp16)))));
    rdx21 = rdx19 & 0xffffffffffffa3b7;
    __asm__("ror r10, cl");
    *reinterpret_cast<unsigned char*>(&rsi9) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(&r10_7) & 0x52087adf) >= reinterpret_cast<int32_t>(0));
    rsi22 = rsi9 - (rcx12 + reinterpret_cast<uint1_t>(rsi9 < rcx12));
    __asm__("bsr r13, rdx");
    *reinterpret_cast<int32_t*>(&rbx23) = *reinterpret_cast<int32_t*>(&rbx3) * 0xff488cce;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx23) + 4) = 0;
    r13_24 = r13_14 - (0xffffa3b7 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r13_14 < 0xffffa3b7 + static_cast<uint64_t>(__intrinsic()))));
    __asm__("rcr r15w, 1");
    __asm__("bts r8d, esi");
    __asm__("rcl rdx, 1");
    __asm__("ror bx, cl");
    if (*reinterpret_cast<int32_t*>(&r12_18) == *reinterpret_cast<int32_t*>(&rdi20)) {
        tmp32_25 = *reinterpret_cast<int32_t*>(&r12_18);
        *reinterpret_cast<int32_t*>(&r12_18) = *reinterpret_cast<int32_t*>(&rdi20);
        *reinterpret_cast<int32_t*>(&rdi20) = tmp32_25;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = 0;
    }
    ecx26 = *reinterpret_cast<int32_t*>(&rcx12) + 0x71;
    *reinterpret_cast<unsigned char*>(&r12_18) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ecx26) >= reinterpret_cast<int32_t>(0));
    __asm__("ror r8b, 1");
    *reinterpret_cast<int32_t*>(&rax27) = reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&rax10) * *reinterpret_cast<uint16_t*>(&rcx12));
    *reinterpret_cast<uint16_t*>(&r14_13) = 0x8078;
    __asm__("btr r8w, dx");
    __asm__("rcr r9d, 1");
    rdi28 = rdi20 >> *reinterpret_cast<unsigned char*>(&ecx26);
    r11_29 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int16_t*>(&rsi22)));
    if (0) {
        tmp32_30 = *reinterpret_cast<uint32_t*>(&rdx21);
        *reinterpret_cast<uint32_t*>(&rdx21) = *reinterpret_cast<uint32_t*>(&r15_8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&r15_8) = tmp32_30;
    }
    *reinterpret_cast<signed char*>(&rdi28) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rdi28) << *reinterpret_cast<unsigned char*>(&ecx26));
    ax31 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax27) >> 1);
    __asm__("rcl r13, 1");
    esi32 = *reinterpret_cast<unsigned char*>(&ax31);
    __asm__("shld r14d, r9d, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx23) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx23) + 1) ^ *reinterpret_cast<unsigned char*>(&rbx23));
    __asm__("shrd r8d, esi, cl");
    __asm__("rol r8d, cl");
    __asm__("shrd dx, r9w, 0x1");
    *reinterpret_cast<uint32_t*>(&r15_33) = *reinterpret_cast<uint32_t*>(&r15_8) ^ 0x6a456c44;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_33) + 4) = 0;
    edi34 = *reinterpret_cast<int32_t*>(&rdi28) + 0xee3f61f1;
    *reinterpret_cast<int16_t*>(&rdx21) = 0xa3b7;
    if (__intrinsic()) {
        r13_24 = rdx21;
    }
    r8_35 = 0xe12e4137 + static_cast<uint64_t>(__intrinsic());
    if (reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_24) + *reinterpret_cast<int16_t*>(&r9_15)) + 1) >= *reinterpret_cast<uint16_t*>(&r13_24)) {
        *reinterpret_cast<uint32_t*>(&rbp16) = 0x8078;
    }
    rbx36 = rbx23 | r11_29;
    if (__intrinsic()) {
        r14_13 = r15_33;
    }
    __asm__("lahf ");
    __asm__("rcr r10, 1");
    r10w37 = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_7) - 0x5744)));
    __asm__("btc ebp, r13d");
    __asm__("ror bl, 0x47");
    __asm__("shld r8d, ebp, 0x1");
    r12d38 = *reinterpret_cast<int32_t*>(&r12_18) + 0xb702474e;
    *reinterpret_cast<unsigned char*>(&r8_35) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_35) + *reinterpret_cast<unsigned char*>(&ecx26)) + 1);
    ecx39 = ecx26 >> 24 | ecx26 >> 8 & 0xff00 | ecx26 << 8 & 0xff0000 | ecx26 << 24;
    __asm__("rcr r15, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx21) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx21) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ecx39) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx21) + 1) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ecx39) + 1) + reinterpret_cast<uint1_t>(r10w37 < 0x2320)))));
    *reinterpret_cast<uint16_t*>(&rbx36) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx36) + *reinterpret_cast<int16_t*>(&r12d38)) + static_cast<uint1_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi34) >> 79)));
    __asm__("rcl ecx, 1");
    *reinterpret_cast<int32_t*>(&r13_40) = *reinterpret_cast<int32_t*>(&r9_15);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_40) + 4) = 0;
    __asm__("btr r8d, ecx");
    *reinterpret_cast<signed char*>(&rbp16) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbp16) - *reinterpret_cast<signed char*>(&esi32));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx36) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx36) + 1) - reinterpret_cast<unsigned char>(83 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx36) + 1) < 0xae)));
    *reinterpret_cast<uint16_t*>(&r14_13) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_13) * 0x73d4);
    __asm__("rol r13, 1");
    cx41 = *reinterpret_cast<unsigned char*>(&r8_35);
    __asm__("rcr r13, 1");
    __asm__("bts ax, 0x36");
    tmp8_42 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edi34) - 45) + 1);
    cf43 = reinterpret_cast<uint1_t>(tmp8_42 < *reinterpret_cast<unsigned char*>(&edi34));
    *reinterpret_cast<unsigned char*>(&edi34) = tmp8_42;
    *reinterpret_cast<uint32_t*>(&rax44) = 0xf2e30396;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax44) + 4) = 0;
    __asm__("shrd eax, r15d, 0x1");
    *reinterpret_cast<unsigned char*>(&r13_40) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_40) + 0x84) + cf43);
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&r13_40) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r13_40) == 0)) {
        *reinterpret_cast<uint32_t*>(&r8_35) = 0xf2e30396;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_35) + 4) = 0;
    }
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rdx21) = 0x96;
    }
    *reinterpret_cast<uint32_t*>(&rdx45) = *reinterpret_cast<uint32_t*>(&rdx21) + *reinterpret_cast<uint32_t*>(&rbp16);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx45) + 4) = 0;
    __asm__("rcr dh, 1");
    *reinterpret_cast<int16_t*>(&r11_29) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r11_29) >> 1);
    __asm__("btr r13, 0xb2");
    edi46 = edi34 + 0xf5bbe830;
    __asm__("bts r12, rsi");
    __asm__("rcr cx, 0x35");
    __asm__("btc r13, 0xec");
    __asm__("ror edx, 0xf7");
    *reinterpret_cast<uint16_t*>(&r10_7) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(r10w37 + 0x6fd4) ^ 0xc288);
    if (!*reinterpret_cast<uint16_t*>(&r10_7)) {
        *reinterpret_cast<uint16_t*>(&r15_33) = *reinterpret_cast<uint16_t*>(&r15_33);
    }
    *reinterpret_cast<uint32_t*>(&r9_47) = 0x81c09c2e;
    __asm__("bts ebx, 0xac");
    __asm__("rol rdx, 1");
    __asm__("bsr r13, r15");
    rsi48 = r10_7;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx45) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("ror rdx, 0x55");
    r8_49 = r8_35 - (0x32f27d28 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(r8_35 < 0xffffffffcd0d82d8)));
    __asm__("rcr r8d, 0x59");
    *reinterpret_cast<signed char*>(&r8_49) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r8_49) << 1);
    __asm__("rcl r11d, 1");
    __asm__("xadd rbx, r11");
    *reinterpret_cast<unsigned char*>(&r11_29) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_29) >> 1);
    *reinterpret_cast<uint16_t*>(&rax44) = reinterpret_cast<uint16_t>(0x396 - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_33) + reinterpret_cast<uint1_t>(0x396 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r15_33))))));
    *reinterpret_cast<uint32_t*>(&r14_50) = *reinterpret_cast<uint32_t*>(&r14_13) - *reinterpret_cast<uint32_t*>(&rax44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_50) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&r14_13) > *reinterpret_cast<uint32_t*>(&rax44)) {
        rbx36 = rdx45;
    }
    __asm__("bts r9d, r12d");
    __asm__("rcl rax, 1");
    r9w51 = static_cast<uint16_t>(*reinterpret_cast<uint32_t*>(&r14_50) + 0xb3b01490 + 70);
    r10d52 = -reinterpret_cast<int32_t>(~*reinterpret_cast<uint32_t*>(&r10_7));
    r14_53 = r14_50 - (0x1098f4d6 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(r14_50 < 0xffffffffef670b2b)));
    __asm__("rol sil, 0x2b");
    __asm__("btc r11w, 0xfa");
    __asm__("rol bl, cl");
    __asm__("rol r8, 1");
    *reinterpret_cast<signed char*>(&r15_33) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r15_33) >> reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&cx41) | *reinterpret_cast<unsigned char*>(&rbx36)));
    __asm__("shld r11d, r10d, cl");
    rax54 = rax44 * r13_40 * 0x2a1d847616760292;
    rdx55 = __intrinsic();
    *reinterpret_cast<uint32_t*>(&r14_56) = *reinterpret_cast<uint32_t*>(&r14_53) >> 0x92;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_56) + 4) = 0;
    *reinterpret_cast<signed char*>(&rsi48) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rsi48) >> 57) >> -6);
    __asm__("bsf ecx, r9d");
    *reinterpret_cast<int16_t*>(&rax54) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax54) * *reinterpret_cast<signed char*>(&r15_33));
    *reinterpret_cast<int32_t*>(&rax57) = *reinterpret_cast<int32_t*>(&rax54) * 0x276e6623;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax57) + 4) = 0;
    __asm__("rol r9w, 1");
    cf58 = reinterpret_cast<uint1_t>(edi46 < *reinterpret_cast<uint32_t*>(&r14_56));
    edi59 = edi46 - (*reinterpret_cast<uint32_t*>(&r14_56) + cf58);
    __asm__("shrd di, r10w, 0x1");
    if (edi59 == static_cast<uint32_t>(cf58)) {
        *reinterpret_cast<uint16_t*>(&r14_56) = *reinterpret_cast<uint16_t*>(&r15_33);
    }
    __asm__("rcl rbx, 1");
    r12d60 = 0x16760292 - (edi59 + reinterpret_cast<uint1_t>(0x16760292 < edi59 + 1));
    __asm__("rcl r13b, 0x24");
    cf61 = reinterpret_cast<uint1_t>(!!*reinterpret_cast<int16_t*>(&r10d52));
    *reinterpret_cast<int16_t*>(&r10d52) = -*reinterpret_cast<int16_t*>(&r10d52);
    zf62 = reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&r10d52) == 0);
    if (!zf62) {
        rax57 = r11_29 - (0x75d462e0 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r11_29 < 0x75d462e1)));
    }
    if (cf61 | zf62) {
        edi59 = *reinterpret_cast<uint32_t*>(&r14_56);
    }
    __asm__("ror esi, 1");
    *reinterpret_cast<uint32_t*>(&r10_63) = r10d52 + 0x38f4b242;
    __asm__("bsf r10, r8");
    __asm__("xadd rsi, rdx");
    __asm__("rcl r15b, 1");
    *reinterpret_cast<uint16_t*>(&r9_47) = reinterpret_cast<uint16_t>(r9w51 - reinterpret_cast<uint16_t>(0x393e + reinterpret_cast<uint1_t>(r9w51 < 0x393f)));
    __asm__("rcr r10w, 1");
    r13_64 = *reinterpret_cast<uint32_t*>(&r9_47) + *reinterpret_cast<uint32_t*>(&r8_49) + 0x1157ddd9;
    __asm__("rol rax, cl");
    *reinterpret_cast<signed char*>(&r10_63) = 0;
    __asm__("ror rax, 1");
    rbp65 = ~*reinterpret_cast<uint16_t*>(&rsi48);
    __asm__("rcr r10b, cl");
    __asm__("cdq ");
    __asm__("btr bx, cx");
    __asm__("bsf rdx, rbx");
    __asm__("shrd r9d, r8d, 0x8c");
    *reinterpret_cast<unsigned char*>(&rbp65) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rbp65) >> -1);
    *reinterpret_cast<int32_t*>(&r12_66) = reinterpret_cast<int32_t>(-(r12d60 & 0xeabfc66));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_66) + 4) = 0;
    *reinterpret_cast<int16_t*>(&r8_49) = static_cast<int16_t>(*reinterpret_cast<uint32_t*>(&r14_56) + 0xc556d280);
    rbx67 = rax57;
    rax68 = rbx36 - 0x74fdece4 + __intrinsic();
    __asm__("ror r8b, 1");
    __asm__("shld rbx, rsi, 0x86");
    __asm__("bts r13, 0x12");
    cf69 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rbp65) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r14_56))));
    *reinterpret_cast<uint16_t*>(&rbp65) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp65) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_56) + cf69));
    *reinterpret_cast<unsigned char*>(&rax68) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax68) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax68) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rax68) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax68) + cf69))));
    *reinterpret_cast<uint16_t*>(&rsi48) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&r9_47)));
    __asm__("rcr r9d, cl");
    *reinterpret_cast<int16_t*>(&rdx55) = __intrinsic();
    r11_70 = *reinterpret_cast<uint32_t*>(&rdx55) + *reinterpret_cast<uint32_t*>(&r10_63) * 2;
    __asm__("rcr ch, 1");
    __asm__("ror sil, cl");
    *reinterpret_cast<int16_t*>(&rax68) = reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax68) * *reinterpret_cast<int16_t*>(&edi59)) * *reinterpret_cast<int16_t*>(&rdx55));
    *reinterpret_cast<int16_t*>(&rdx55) = __intrinsic();
    *reinterpret_cast<unsigned char*>(&rbp65) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("rcr r12b, cl");
    if (0) {
        tmp64_71 = r12_66;
        r12_66 = r14_56;
        r14_56 = tmp64_71;
    }
    *reinterpret_cast<int32_t*>(&rbp72) = *reinterpret_cast<int32_t*>(&rbp65) + *reinterpret_cast<int32_t*>(&rax68);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp72) + 4) = 0;
    __asm__("xadd ch, ah");
    cf73 = reinterpret_cast<uint1_t>(edi59 < *reinterpret_cast<uint32_t*>(&r11_70));
    *reinterpret_cast<unsigned char*>(&r9_47) = reinterpret_cast<uint1_t>(edi59 <= *reinterpret_cast<uint32_t*>(&r11_70) + cf73);
    *reinterpret_cast<signed char*>(&rbx67) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&rbx67));
    __asm__("cdq ");
    *reinterpret_cast<unsigned char*>(&rbp72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp72) + *reinterpret_cast<unsigned char*>(&r11_70));
    rcx74 = r13_64;
    __asm__("rcr rdi, 1");
    if (reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(&r10_63) & *reinterpret_cast<uint32_t*>(&rdx55)) >= reinterpret_cast<int32_t>(0)) {
        r9_47 = r12_66;
    }
    __asm__("btc rbx, r15");
    *reinterpret_cast<uint32_t*>(&r9_75) = *reinterpret_cast<uint32_t*>(&r9_47) & 0xe6e7dc28;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_75) + 4) = 0;
    if (1) {
        r13_64 = r13_64;
    }
    __asm__("rcl ebx, 1");
    __asm__("rcr ebx, 1");
    rsi76 = rsi48 + 0x60c3a992 + 1;
    *reinterpret_cast<int32_t*>(&rdi77) = reinterpret_cast<int32_t>(edi59 - (*reinterpret_cast<uint32_t*>(&r11_70) + cf73)) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi77) + 4) = 0;
    __asm__("xadd eax, r9d");
    if (!reinterpret_cast<uint1_t>(__intrinsic() | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdi77) == 0))) {
    }
    *reinterpret_cast<uint32_t*>(&r14_78) = *reinterpret_cast<uint32_t*>(&r14_56) - (0x1e965e04 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r14_56) < 0x1e965e04 + __intrinsic()));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_78) + 4) = 0;
    __asm__("shrd rdi, rdi, cl");
    si79 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rsi76) >> 61);
    __asm__("bsr r11, r15");
    __asm__("shld rdx, r8, cl");
    r14_80 = reinterpret_cast<uint64_t>(r14_78 + 0x245ec30);
    *reinterpret_cast<uint16_t*>(&rdi77) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi77) & *reinterpret_cast<uint16_t*>(&r9_75)) << 1);
    ax81 = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rax68) * *reinterpret_cast<int16_t*>(&rbp72));
    *reinterpret_cast<signed char*>(&si79) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&si79) + 49);
    *reinterpret_cast<uint32_t*>(&r15_82) = *reinterpret_cast<uint32_t*>(&r15_33) - *reinterpret_cast<uint32_t*>(&rbx67);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_82) + 4) = 0;
    r11_83 = r9_75 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r15_33) < *reinterpret_cast<uint32_t*>(&rbx67)));
    __asm__("ror rax, 0x93");
    if (*reinterpret_cast<signed char*>(&ax81) == *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax81) + 1)) {
        tmp8_84 = *reinterpret_cast<signed char*>(&ax81);
        *reinterpret_cast<signed char*>(&ax81) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax81) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax81) + 1) = tmp8_84;
    }
    __asm__("rcr r10, 0x93");
    __asm__("xadd bl, r12b");
    *reinterpret_cast<uint32_t*>(&r8_85) = *reinterpret_cast<uint32_t*>(&r8_49) >> -68;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_85) + 4) = 0;
    *reinterpret_cast<signed char*>(&rbx67) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbx67) << *reinterpret_cast<unsigned char*>(&rcx74));
    __asm__("shld r12, r9, 0x8b");
    __asm__("ror ah, 1");
    *reinterpret_cast<uint16_t*>(&r8_85) = 0xffff;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx74) + 1) = 0;
    __asm__("bts r12d, r9d");
    r13w86 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_64) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx74) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r13_64) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rcx74))))));
    __asm__("shrd r11d, esi, cl");
    __asm__("ror r8w, cl");
    *reinterpret_cast<int16_t*>(&rsi76) = si79;
    *reinterpret_cast<unsigned char*>(&r11_83) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_83) & 0xb8);
    rdi87 = rdi77 + r15_82 + static_cast<uint64_t>(__intrinsic());
    __asm__("shrd rbp, r14, 0xb7");
    *reinterpret_cast<signed char*>(&r10_63) = -1;
    *reinterpret_cast<int32_t*>(&r11_88) = *reinterpret_cast<int32_t*>(&r11_83) - *reinterpret_cast<int32_t*>(&rsi76);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_88) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx74) + 1) = reinterpret_cast<unsigned char>(-1 >> *reinterpret_cast<unsigned char*>(&rcx74));
    *reinterpret_cast<uint32_t*>(&rax89) = ax81;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax89) + 4) = 0;
    __asm__("ror r10, 1");
    if (!__intrinsic()) {
        r15_82 = r11_88;
    }
    r8_90 = r8_85 >> -24;
    *reinterpret_cast<uint32_t*>(&r8_91) = *reinterpret_cast<uint32_t*>(&r8_90) >> 24 | *reinterpret_cast<uint32_t*>(&r8_90) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&r8_90) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&r8_90) << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_91) + 4) = 0;
    r8_92 = r8_91 << *reinterpret_cast<unsigned char*>(&rcx74);
    *reinterpret_cast<unsigned char*>(&rbp72) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rbp72) >> *reinterpret_cast<unsigned char*>(&rcx74));
    rax93 = rax89 * rdi87;
    *reinterpret_cast<unsigned char*>(&rax93) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax93) + *reinterpret_cast<signed char*>(&rbx67)) + 1);
    *reinterpret_cast<uint16_t*>(&r14_80) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_80) & *reinterpret_cast<uint16_t*>(&r10_63));
    *reinterpret_cast<signed char*>(&r13w86) = 0x6d;
    *reinterpret_cast<int32_t*>(&rax94) = *reinterpret_cast<int32_t*>(&rax93) * *reinterpret_cast<int32_t*>(&r14_80);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax94) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx95) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx95) + 4) = 0;
    __asm__("shrd r11, rbx, cl");
    tmp64_96 = r14_80 + r15_82;
    r14_97 = tmp64_96;
    if (tmp64_96 < r14_80) {
        r10_63 = 0;
    }
    r11d98 = reinterpret_cast<uint32_t>(-*reinterpret_cast<int32_t*>(&rbp72));
    *reinterpret_cast<uint16_t*>(&r14_97) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_97) + *reinterpret_cast<uint16_t*>(&rax94)) + 1);
    *reinterpret_cast<int32_t*>(&r9_99) = static_cast<int32_t>(rax94 + rdx95 + 0x66);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_99) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rax94) = reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&rax94) * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&r11d98))));
    __asm__("rcr ebp, 1");
    *reinterpret_cast<uint32_t*>(&r10_100) = *reinterpret_cast<uint32_t*>(&r10_63) - 0x5bb971fe;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_100) + 4) = 0;
    __asm__("rol rbx, cl");
    *reinterpret_cast<uint16_t*>(&r11d98) = r13w86;
    below_or_equal101 = *reinterpret_cast<uint16_t*>(&rdi87) <= *reinterpret_cast<uint16_t*>(&rbx67);
    *reinterpret_cast<uint16_t*>(&rdi87) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi87) - *reinterpret_cast<uint16_t*>(&rbx67));
    *reinterpret_cast<uint16_t*>(&r10_100) = static_cast<uint16_t>(rbp72 + r10_100 * 8);
    *reinterpret_cast<unsigned char*>(&r15_82) = reinterpret_cast<uint1_t>(!below_or_equal101);
    if (*reinterpret_cast<unsigned char*>(&rcx74) == *reinterpret_cast<unsigned char*>(&r15_82)) {
        tmp8_102 = *reinterpret_cast<unsigned char*>(&rcx74);
        *reinterpret_cast<unsigned char*>(&rcx74) = *reinterpret_cast<unsigned char*>(&r15_82);
        *reinterpret_cast<unsigned char*>(&r15_82) = tmp8_102;
    }
    __asm__("ror rdx, 1");
    rcx103 = rcx74 * 0x4e014301;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx67) + 1) = __intrinsic();
    if (0) {
        rbp72 = r14_97;
    }
    __asm__("rcr r14w, cl");
    if (0) {
        rcx103 = r10_100;
    }
    *reinterpret_cast<unsigned char*>(&r8_92) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_92) ^ *reinterpret_cast<unsigned char*>(&rbp72));
    r9_104 = r9_99 - (0x3f231cc3 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r9_99 < 0x3f231cc3)));
    __asm__("btc bx, dx");
    __asm__("btr r13, r15");
    *reinterpret_cast<uint16_t*>(&r15_82) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_82) ^ *reinterpret_cast<uint16_t*>(&r11d98));
    *reinterpret_cast<uint32_t*>(&rdi105) = *reinterpret_cast<uint32_t*>(&rdi87) >> 24 | *reinterpret_cast<uint32_t*>(&rdi87) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&rdi87) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&rdi87) << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi105) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rcx106) = reinterpret_cast<uint32_t>(~*reinterpret_cast<int32_t*>(&rcx103));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx106) + 4) = 0;
    rax107 = rax94 * rdi105;
    rbp108 = rbp72 >> -35;
    r12w109 = static_cast<int16_t>(r14_97 + rcx106);
    *reinterpret_cast<uint32_t*>(&r11_110) = r11d98 >> *reinterpret_cast<unsigned char*>(&rcx106);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_110) + 4) = 0;
    r13_111 = reinterpret_cast<uint64_t>(static_cast<int64_t>(r12w109));
    tmp64_112 = r13_111 + 0x7316ef7 + 1;
    r9_113 = r9_104 - (0x1ce54a77 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(r9_104 < 0x1ce54a77 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(tmp64_112 < r13_111)))));
    *reinterpret_cast<uint16_t*>(&rbp108) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp108) - reinterpret_cast<uint16_t>(0x7682 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rbp108) < 0x7682)));
    __asm__("rcr r11d, 0xd5");
    *reinterpret_cast<uint16_t*>(&r9_113) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_113) >> 1);
    __asm__("rcl ebp, 1");
    __asm__("shrd r13, rbx, 0x1");
    *reinterpret_cast<uint32_t*>(&rdi114) = *reinterpret_cast<uint32_t*>(&rdi105) - 0x1a3784f3 << *reinterpret_cast<unsigned char*>(&rcx106);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi114) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r8_115) = *reinterpret_cast<int32_t*>(&r8_92) + *reinterpret_cast<uint32_t*>(&rdi114);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_115) + 4) = 0;
    __asm__("rcr r8, cl");
    __asm__("rol cx, 1");
    *reinterpret_cast<signed char*>(&r14_97) = 0;
    rbx116 = rbx67 << 1;
    if (__intrinsic()) {
        rdi114 = r10_100;
    }
    __asm__("shrd ebp, edx, 0x1");
    *reinterpret_cast<unsigned char*>(&r11_110) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_110) + *reinterpret_cast<signed char*>(&r12w109))));
    dx117 = reinterpret_cast<int16_t>(0 >> 19);
    *reinterpret_cast<unsigned char*>(&rbx116) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx116) ^ *reinterpret_cast<unsigned char*>(&rcx106));
    sil118 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rbx116) == 0);
    *reinterpret_cast<unsigned char*>(&rsi76) = reinterpret_cast<unsigned char>(sil118 - reinterpret_cast<unsigned char>(69 + reinterpret_cast<uint1_t>(sil118 < 69)));
    rsi119 = rsi76 << *reinterpret_cast<unsigned char*>(&rcx106);
    __asm__("shld r9d, r9d, cl");
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r8_115) = *reinterpret_cast<uint32_t*>(&rcx106) ^ *reinterpret_cast<uint32_t*>(&r9_113);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_115) + 4) = 0;
    }
    rbx120 = reinterpret_cast<int64_t>(rbx116) >> 1;
    __asm__("shld r9w, bx, cl");
    *reinterpret_cast<unsigned char*>(&rbx120) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx120) ^ *reinterpret_cast<unsigned char*>(&rax107));
    if (0) {
    }
    dh121 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&dx117) + 1) + *reinterpret_cast<unsigned char*>(&rax107)) + 1);
    __asm__("shrd r8, rbp, 0xaf");
    *reinterpret_cast<uint32_t*>(&rax122) = *reinterpret_cast<unsigned char*>(&r9_113);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax122) + 4) = 0;
    __asm__("shrd r10d, esi, 0xb0");
    *reinterpret_cast<unsigned char*>(&rdi114) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi114) >> 1);
    __asm__("shld r11w, cx, cl");
    __asm__("shrd r11, rsi, 0x1");
    *reinterpret_cast<unsigned char*>(&r10_100) = reinterpret_cast<uint1_t>(!*reinterpret_cast<int1_t*>(reinterpret_cast<int64_t>(&rax122) + 1));
    ebx123 = *reinterpret_cast<int32_t*>(&rbx120) + *reinterpret_cast<uint32_t*>(&r11_110) + 1;
    __asm__("rol edi, cl");
    __asm__("shrd r14, rsi, 0xdd");
    __asm__("btr esi, r9d");
    __asm__("ror r8d, cl");
    __asm__("ror esi, cl");
    rbp124 = rbp108 ^ 0xffffffff84e5ea14;
    r14_125 = r14_97 - (0x2060d13b - static_cast<uint64_t>(reinterpret_cast<uint1_t>(r14_97 < 0xffffffffdf9f2ec5)));
    __asm__("btc edx, 0x97");
    __asm__("rol r13, cl");
    *reinterpret_cast<int32_t*>(&r14_126) = ~*reinterpret_cast<int32_t*>(&r14_125);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_126) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rbx127) = reinterpret_cast<int32_t>(-static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ebx123)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx127) + 4) = 0;
    r13_128 = tmp64_112 >> 1;
    __asm__("rcl r11w, cl");
    *reinterpret_cast<uint16_t*>(&r15_82) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_82) - reinterpret_cast<uint16_t>(0x2647 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r15_82) < reinterpret_cast<uint16_t>(0x2647 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax122) + dh121) < *reinterpret_cast<unsigned char*>(&rax122)))))) >> 1);
    __asm__("btc r10w, r14w");
    __asm__("btr r11d, 0x77");
    if (__intrinsic()) {
    }
    *reinterpret_cast<uint16_t*>(&rax122) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_100) * 0x2beb);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax122) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax122) + 1) ^ dh121);
    *reinterpret_cast<unsigned char*>(&r11_110) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_110) + 1);
    __asm__("rcr ch, cl");
    __asm__("bts edx, r13d");
    rcx129 = *reinterpret_cast<uint16_t*>(&r9_113);
    if (rdi114 == r14_126) {
        rdi114 = r14_126;
    }
    bpl130 = *reinterpret_cast<unsigned char*>(&r15_82);
    *reinterpret_cast<unsigned char*>(&r15_82) = *reinterpret_cast<unsigned char*>(&rbp124);
    if (static_cast<int1_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_100) >> 89))) {
        r15_82 = r8_115;
    }
    __asm__("rol rcx, 1");
    *reinterpret_cast<uint16_t*>(&rcx129) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx127) + 1);
    *reinterpret_cast<unsigned char*>(&rsi119) = 24;
    *reinterpret_cast<uint32_t*>(&rcx131) = *reinterpret_cast<int32_t*>(&rcx129) + *reinterpret_cast<uint32_t*>(&r15_82);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx131) + 4) = 0;
    rbx132 = rbx127 + 0x2a6abdd5;
    __asm__("shld rbx, r11, cl");
    __asm__("shrd rbx, r11, 0x1");
    tmp8_133 = *reinterpret_cast<unsigned char*>(&rbx132);
    *reinterpret_cast<unsigned char*>(&rbx132) = bpl130;
    *reinterpret_cast<unsigned char*>(&rbp124) = tmp8_133;
    __asm__("shld r8, r15, cl");
    __asm__("shrd rcx, r13, 0x1");
    *reinterpret_cast<uint16_t*>(&r11_110) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_110) >> 0x74);
    if (reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&r13_128) & 0xda62) < reinterpret_cast<int16_t>(0)) {
    }
    if (0) {
    }
    __asm__("bts rsi, 0x58");
    rbp134 = reinterpret_cast<int64_t>(rbp124 - (0x35637e11 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(rbp124 < 0xffffffffca9c81ef)))) >> *reinterpret_cast<signed char*>(&rcx131);
    __asm__("bts dx, r8w");
    __asm__("shrd r13, rbp, 0x80");
    if (1) {
        *reinterpret_cast<uint16_t*>(&rbx132) = *reinterpret_cast<uint16_t*>(&r13_128);
    }
    __asm__("ror ch, 1");
    if (1) {
        rax122 = r11_110;
    }
    rcx135 = rcx131 | r11_110;
    __asm__("shld ecx, ebx, 0x1");
    __asm__("btr r10w, 0x7c");
    *reinterpret_cast<int32_t*>(&r10_136) = *reinterpret_cast<signed char*>(&rbp134);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_136) + 4) = 0;
    __asm__("shrd r11d, r9d, 0x1");
    *reinterpret_cast<int16_t*>(&rdi114) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rdi114) >> -25);
    __asm__("bsf r15w, dx");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx135) + 1) = 0;
    *reinterpret_cast<uint32_t*>(&r13_137) = *reinterpret_cast<uint32_t*>(&r13_128) | 0xfffe0000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_137) + 4) = 0;
    if (!__intrinsic()) {
    }
    if (0) {
        rdi114 = rax122;
    }
    __asm__("rcl ch, 0xcb");
    *reinterpret_cast<unsigned char*>(&rax122) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax122) | 0xc0);
    ax138 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax122) & 0x3fff);
    *reinterpret_cast<uint16_t*>(&rax122) = reinterpret_cast<uint16_t>(ax138 / static_cast<int16_t>(*reinterpret_cast<signed char*>(&ax138)));
    *reinterpret_cast<int32_t*>(&r9_139) = static_cast<int32_t>(rax122 + rdi114);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_139) + 4) = 0;
    *reinterpret_cast<int16_t*>(&rbp134) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbp134) - 1);
    __asm__("ror dil, 0x4b");
    ebp140 = *reinterpret_cast<uint32_t*>(&rbp134) | 0xc0000000;
    __asm__("ror bh, cl");
    *reinterpret_cast<uint16_t*>(&rsi119) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi119) | 0x946f);
    if (0) {
    }
    __asm__("rcl r8b, 1");
    if (1) {
        *reinterpret_cast<uint32_t*>(&rdi114) = *reinterpret_cast<uint32_t*>(&r15_82);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi114) + 4) = 0;
    }
    __asm__("btr ecx, edx");
    *reinterpret_cast<unsigned char*>(&ebp140) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebp140) ^ 0x6a);
    *reinterpret_cast<unsigned char*>(&r9_139) = reinterpret_cast<uint1_t>(!!*reinterpret_cast<unsigned char*>(&ebp140));
    __asm__("ror r8d, 0xac");
    rdx141 = 0;
    *reinterpret_cast<uint32_t*>(&rbp142) = ebp140 >> 24 | ebp140 >> 8 & 0xff00 | ebp140 << 8 & 0xff0000 | ebp140 << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp142) + 4) = 0;
    __asm__("btc r8, rcx");
    ebx143 = *reinterpret_cast<int32_t*>(&rbx132) + 0x4f8c61d0 + 1;
    r12_144 = r10_136;
    *reinterpret_cast<signed char*>(&rbp142) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbp142) + *reinterpret_cast<signed char*>(&rbp142));
    *reinterpret_cast<int16_t*>(&rdx141) = __intrinsic();
    __asm__("rol rbp, 0xf5");
    *reinterpret_cast<int16_t*>(&r13_137) = *reinterpret_cast<int16_t*>(&r10_136);
    __asm__("rcl eax, cl");
    rdx145 = reinterpret_cast<int64_t>(~rdx141);
    __asm__("btr r9d, esi");
    __asm__("rcl r8w, cl");
    __asm__("ror r12w, 0x3c");
    rbp146 = r9_139 | 0x1ff38473;
    __asm__("rcr rbp, 0x7e");
    *reinterpret_cast<unsigned char*>(&rsi119) = reinterpret_cast<unsigned char>(0xfe & *reinterpret_cast<unsigned char*>(&rdx145));
    r13_147 = r13_137 + r12_144 + 1;
    __asm__("rcl ebx, 1");
    *reinterpret_cast<uint16_t*>(&ebx143) = static_cast<uint16_t>(rdx145 + r13_147 * 4 + 0xe6);
    __asm__("lahf ");
    ecx148 = *reinterpret_cast<int32_t*>(&rcx135) - *reinterpret_cast<uint32_t*>(&rsi119);
    __asm__("shld rbx, r9, 0x1");
    r9_149 = rbp142 + 1;
    __asm__("ror r15d, cl");
    *reinterpret_cast<unsigned char*>(&ecx148) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx148) | *reinterpret_cast<unsigned char*>(&ebx143));
    __asm__("btr r14, r14");
    __asm__("rcl r9d, cl");
    __asm__("btc r15w, cx");
    __asm__("ror si, 1");
    if (*reinterpret_cast<uint16_t*>(&ebx143) & *reinterpret_cast<uint16_t*>(&r12_144)) {
        *reinterpret_cast<uint32_t*>(&r13_147) = *reinterpret_cast<uint32_t*>(&rbp146);
    }
    rdi150 = rdi114 << *reinterpret_cast<unsigned char*>(&ecx148);
    *reinterpret_cast<uint32_t*>(&rcx151) = ecx148 << *reinterpret_cast<unsigned char*>(&ecx148);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx151) + 4) = 0;
    __asm__("shld r15, rcx, 0xaf");
    __asm__("xadd dh, ah");
    if (!__intrinsic()) {
    }
    *reinterpret_cast<uint16_t*>(&rcx151) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx151) - reinterpret_cast<uint16_t>(0x2b9f - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rcx151) < 0xd462)));
    *reinterpret_cast<uint32_t*>(&rdi152) = *reinterpret_cast<uint32_t*>(&rdi150) ^ *reinterpret_cast<uint32_t*>(&r9_149);
    __asm__("bsr rbp, r14");
    __asm__("cdq ");
    __asm__("xadd r8, r8");
    if (!__intrinsic()) {
    }
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rdi152) = ebx143;
    }
    __asm__("ror dil, 1");
    __asm__("rcl rcx, 0xe6");
    __asm__("xadd esi, r14d");
    __asm__("rol rsi, 1");
    __asm__("ror r14, cl");
    r9_153 = r9_149 - rcx151 - 0x264f52ba;
    r11_154 = 0;
    *reinterpret_cast<uint32_t*>(&r13_155) = *reinterpret_cast<uint32_t*>(&r13_147) ^ 0x8fdb0149;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_155) + 4) = 0;
    __asm__("rcr r10d, 1");
    __asm__("shld rbx, rbx, cl");
    __asm__("shld r13, r11, 0xb8");
    __asm__("bsf ebx, ebx");
    rbx156 = __intrinsic() * 0x52c811a0;
    __asm__("rol r12b, cl");
    __asm__("xadd bh, bh");
    *reinterpret_cast<uint32_t*>(&rsi157) = *reinterpret_cast<uint32_t*>(&rsi119) ^ 0x3a01bc8d;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi157) + 4) = 0;
    __asm__("xadd r10w, r11w");
    r14_158 = *reinterpret_cast<int16_t*>(&r12_144);
    if (*reinterpret_cast<uint32_t*>(&r14_158) <= 0x52c4cc6b) {
        r12_144 = r9_153;
    }
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r13_155) = *reinterpret_cast<uint32_t*>(&rdi152);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_155) + 4) = 0;
    }
    __asm__("ror ecx, 0xc1");
    __asm__("shld r13W, r15w, 0xa");
    __asm__("shld r9d, r9d, 0x22");
    rsi159 = rsi157 & r9_153;
    __asm__("bsr edi, ebp");
    __asm__("shld ebp, r10d, 0x6d");
    __asm__("btr r11, 0x6d");
    *reinterpret_cast<unsigned char*>(&rcx151) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx151) & 15);
    __asm__("shld r14w, r11w, cl");
    __asm__("bsr r8w, r15w");
    *reinterpret_cast<int32_t*>(&rdx160) = *reinterpret_cast<int16_t*>(&rcx151);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx160) + 4) = 0;
    __asm__("btr rbx, 0x20");
    *reinterpret_cast<unsigned char*>(&rcx151) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx151) - reinterpret_cast<unsigned char>(11 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx151) < reinterpret_cast<unsigned char>(11 - __intrinsic()))));
    __asm__("shld r14, r12, cl");
    *reinterpret_cast<signed char*>(&rdx160) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&rdx160));
    __asm__("rcl r11d, 1");
    __asm__("rol eax, cl");
    __asm__("cwd ");
    __asm__("shrd esi, ecx, cl");
    rcx161 = rcx151 << *reinterpret_cast<unsigned char*>(&rcx151);
    __asm__("rcl r15b, 1");
    __asm__("xadd r10w, r15w");
    *reinterpret_cast<unsigned char*>(&rcx161) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx161) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx161) + 1))));
    __asm__("rol cx, cl");
    __asm__("ror r8w, 0xd4");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx160) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx160) + 1) ^ 1);
    __asm__("shld rbp, rcx, 0x1");
    __asm__("rcl r15w, 1");
    __asm__("rcr r10d, 1");
    *reinterpret_cast<uint16_t*>(&rcx161) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx161) + 0x318a)));
    *reinterpret_cast<uint32_t*>(&r9_162) = *reinterpret_cast<uint32_t*>(&rsi159) * 0x681c71dd;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_162) + 4) = 0;
    __asm__("shld r9d, esi, 0x1");
    r9_163 = reinterpret_cast<uint64_t>(r9_162 - r13_155);
    __asm__("bsr r14w, r11w");
    if (r9_163 == rcx161) {
        tmp64_164 = r9_163;
        r9_163 = rcx161;
        rcx161 = tmp64_164;
    }
    __asm__("ror r12w, cl");
    __asm__("btc r14w, 0x7c");
    __asm__("ror rax, cl");
    rdx165 = rdx160 >> 1;
    __asm__("bts bp, ax");
    *reinterpret_cast<unsigned char*>(&r13_155) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_155) ^ 0x81);
    *reinterpret_cast<uint16_t*>(&rdx165) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx165) ^ *reinterpret_cast<uint16_t*>(&rcx161));
    *reinterpret_cast<uint16_t*>(&r11_154) = reinterpret_cast<uint16_t>(0 >> 0xff86);
    r9d166 = *reinterpret_cast<int32_t*>(&r9_163) + *reinterpret_cast<uint32_t*>(&rsi159);
    __asm__("btc r13, r11");
    __asm__("rcr r10d, 0x85");
    __asm__("ror r8d, 1");
    bx167 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx156) - reinterpret_cast<uint16_t>(0x59db + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rbx156) < 0x59db)));
    ebx168 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&bx167) + *reinterpret_cast<signed char*>(&rdx165));
    __asm__("xadd r13W, r10w");
    __asm__("shrd r14, r12, 0x1");
    __asm__("shrd r8d, r10d, cl");
    r15_169 = *reinterpret_cast<int32_t*>(&rdx165);
    __asm__("shrd cx, di, 0x1");
    r13w170 = reinterpret_cast<uint16_t>(~reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r13_155) << *reinterpret_cast<unsigned char*>(&rcx161)));
    __asm__("rcl r13W, 0x66");
    *reinterpret_cast<uint16_t*>(&rsi159) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi159) << *reinterpret_cast<unsigned char*>(&rcx161)) >> 1);
    *reinterpret_cast<uint32_t*>(&rsi171) = *reinterpret_cast<uint32_t*>(&rsi159) - (*reinterpret_cast<uint32_t*>(&rcx161) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rsi159) < *reinterpret_cast<uint32_t*>(&rcx161)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi171) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r11_154) = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi159) >= *reinterpret_cast<int32_t*>(&rcx161));
    __asm__("btr r15d, 0x36");
    __asm__("ror eax, 1");
    cf172 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r9d166) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(r13w170)));
    rsi173 = rsi171 - 0x7187a152238ba625 + static_cast<uint64_t>(cf172);
    r14_174 = rcx161;
    __asm__("rcr rbp, 0x66");
    __asm__("ror r15d, 1");
    __asm__("rcr cl, 1");
    *reinterpret_cast<unsigned char*>(&rsi173) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi173) - reinterpret_cast<unsigned char>(63 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rsi173) < 0xc2)));
    __asm__("btr esi, edi");
    rdi175 = *reinterpret_cast<int32_t*>(&r15_169) + ebx168 * 8 + 0x87;
    r11_176 = r11_154 | 0xc000000000000000;
    r8_177 = 0x3fffffffffffffff;
    __asm__("rol bp, cl");
    *reinterpret_cast<int16_t*>(&r13_155) = reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(r13w170) >> 0xff97);
    __asm__("shld rcx, r13, 0x94");
    *reinterpret_cast<int32_t*>(&r15_178) = *reinterpret_cast<int32_t*>(&r15_169) << 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_178) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rdi175) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi175) | 0xfca2);
    esi179 = *reinterpret_cast<int32_t*>(&rsi173) * 0xa3a64513;
    cf180 = reinterpret_cast<uint1_t>(r12_144 < 0x45c02fef);
    r12_181 = r12_144 - (0x45c02fef + static_cast<uint64_t>(cf180));
    if (!cf180) {
        *reinterpret_cast<uint16_t*>(&rcx161) = *reinterpret_cast<uint16_t*>(&esi179);
    }
    __asm__("bsr r15w, bx");
    __asm__("ror r9b, 1");
    r15_182 = r15_178 << 1;
    __asm__("shld r13d, r14d, 0xa3");
    __asm__("btc r8, r11");
    __asm__("rcl eax, 1");
    rdx183 = __intrinsic();
    cf184 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r15_182) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rcx161))));
    r15w185 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_182) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx161) + cf184));
    if (!cf184) {
        r11_176 = r14_174;
    }
    __asm__("shrd ax, r15w, 0x6");
    __asm__("xadd al, cl");
    if (r15w185 != static_cast<uint32_t>(cf184)) {
    }
    r11_186 = r11_176 >> *reinterpret_cast<unsigned char*>(&rcx161);
    __asm__("btc r9d, r8d");
    __asm__("ror rcx, cl");
    __asm__("ror bl, 1");
    rcx187 = rcx161;
    *reinterpret_cast<int16_t*>(&rdx183) = __intrinsic();
    __asm__("rcl r15, 0x78");
    __asm__("ror r8w, 1");
    *reinterpret_cast<uint16_t*>(&r8_177) = reinterpret_cast<uint16_t>(0xff45 - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r12_181) + reinterpret_cast<uint1_t>(0xff45 < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r12_181) + 1))));
    __asm__("ror si, cl");
    r10_188 = 0;
    r14_189 = r14_174 & 0x6a96cca2;
    __asm__("btc r10w, 0x37");
    __asm__("bsr di, cx");
    *reinterpret_cast<uint16_t*>(&r15_182) = reinterpret_cast<uint16_t>(r15w185 + *reinterpret_cast<uint16_t*>(&rdi175));
    *reinterpret_cast<uint32_t*>(&rbx190) = *reinterpret_cast<unsigned char*>(&rdx183);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx190) + 4) = 0;
    __asm__("rcl dil, 1");
    *reinterpret_cast<int16_t*>(&rcx187) = 0x8ba1;
    rbp191 = -(r11_186 + (0 < r11_186));
    __asm__("rcr r15d, 1");
    ecx192 = *reinterpret_cast<int32_t*>(&rcx187) >> -95;
    __asm__("rol edx, cl");
    if (1) {
        *reinterpret_cast<int32_t*>(&rdi175) = *reinterpret_cast<int32_t*>(&rbp191);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi175) + 4) = 0;
    }
    __asm__("rcl si, 1");
    __asm__("rcl r12d, cl");
    *reinterpret_cast<uint16_t*>(&r9d166) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9d166) - reinterpret_cast<uint16_t>(r13w170 + cf172)) * 0xdd9b);
    __asm__("rcr r14b, 1");
    __asm__("rcr r15b, 1");
    __asm__("btc rsi, 0x42");
    eax193 = *reinterpret_cast<unsigned char*>(&rbx190);
    __asm__("rcr r8d, 1");
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r9d166) = *reinterpret_cast<uint16_t*>(&rdi175);
    }
    *reinterpret_cast<int32_t*>(&rax194) = *reinterpret_cast<int16_t*>(&eax193);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax194) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax194) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax194) + 1) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx192) + 1));
    r9d195 = r9d166 + 1;
    cf196 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r14_189) < 0xd8b4);
    *reinterpret_cast<uint16_t*>(&r14_189) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_189) - reinterpret_cast<uint16_t>(0x274d - cf196));
    if (*reinterpret_cast<uint16_t*>(&r14_189) == static_cast<uint32_t>(cf196)) {
        *reinterpret_cast<uint32_t*>(&r10_188) = r9d195;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_188) + 4) = 0;
    }
    __asm__("rol r10w, 1");
    *reinterpret_cast<uint32_t*>(&r9_197) = r9d195 - (ecx192 + reinterpret_cast<uint1_t>(r9d195 < ecx192 + 1));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_197) + 4) = 0;
    *reinterpret_cast<signed char*>(&r10_188) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r10_188) - 1);
    __asm__("shrd ebx, r15d, cl");
    __asm__("bsr edx, r12d");
    __asm__("shld dx, r11w, 0x1");
    if (r15_182 >= rdi175) {
        *reinterpret_cast<uint32_t*>(&rbx190) = *reinterpret_cast<uint32_t*>(&rdx183);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx190) + 4) = 0;
    }
    tmp8_198 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_182) + *reinterpret_cast<unsigned char*>(&r15_182))));
    cf199 = reinterpret_cast<uint1_t>(tmp8_198 < *reinterpret_cast<unsigned char*>(&r15_182));
    *reinterpret_cast<unsigned char*>(&r15_182) = tmp8_198;
    rbx200 = rbx190 + 1;
    __asm__("rcl edx, 1");
    *reinterpret_cast<uint32_t*>(&rbx201) = *reinterpret_cast<int32_t*>(&rbx200) + 0x4caf3beb + cf199;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx201) + 4) = 0;
    __asm__("ror ebx, cl");
    r10_202 = reinterpret_cast<uint64_t>(r10_188 >> 1) << 19;
    if (*reinterpret_cast<int16_t*>(&rbp191) == *reinterpret_cast<int16_t*>(&r9_197)) {
        tmp16_203 = *reinterpret_cast<int16_t*>(&rbp191);
        *reinterpret_cast<int16_t*>(&rbp191) = *reinterpret_cast<int16_t*>(&r9_197);
        *reinterpret_cast<int16_t*>(&r9_197) = tmp16_203;
    }
    __asm__("shld rdi, r11, 0x9b");
    __asm__("xadd cx, r14w");
    *reinterpret_cast<unsigned char*>(&rax194) = 0;
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r11_186) = *reinterpret_cast<int16_t*>(&rdx183);
    }
    rbx204 = rbx201 + 1;
    edx205 = *reinterpret_cast<int32_t*>(&rax194) + *reinterpret_cast<int32_t*>(&r14_189) * 4 - 0x4f7caf78;
    *reinterpret_cast<uint32_t*>(&rdi206) = *reinterpret_cast<signed char*>(&ecx192) + 0x900a1c66;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi206) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r13_207) = *reinterpret_cast<uint32_t*>(&r13_155) & 0xa886862b;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_207) + 4) = 0;
    __asm__("bts r13, rbx");
    __asm__("btr r15w, 0xce");
    __asm__("rcr r10, 1");
    r10w208 = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&rdi206)));
    if (*reinterpret_cast<unsigned char*>(&ecx192) == *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax194) + 1)) {
        tmp8_209 = *reinterpret_cast<unsigned char*>(&ecx192);
        *reinterpret_cast<unsigned char*>(&ecx192) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax194) + 1);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax194) + 1) = tmp8_209;
    }
    __asm__("rcl bpl, 1");
    __asm__("btr bp, di");
    *reinterpret_cast<int16_t*>(&r11_186) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r11_186) - 1);
    rax210 = rax194 | r9_197;
    *reinterpret_cast<uint32_t*>(&r15_211) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r15_182) + 0x20e916ad);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_211) + 4) = 0;
    tmp16_212 = reinterpret_cast<uint16_t>(r10w208 + *reinterpret_cast<uint16_t*>(&r14_189));
    *reinterpret_cast<int32_t*>(&r14_213) = *reinterpret_cast<int16_t*>(&r9_197);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_213) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rsi214) = *reinterpret_cast<unsigned char*>(&edx205);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi214) + 4) = 0;
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r9_197) = *reinterpret_cast<int16_t*>(&r12_181);
    }
    *reinterpret_cast<uint16_t*>(&r14_213) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_213) - reinterpret_cast<uint16_t>(0x2da6 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r14_213) < reinterpret_cast<uint16_t>(0x2da6 + reinterpret_cast<uint1_t>(tmp16_212 < r10w208)))));
    __asm__("btr r8d, r9d");
    __asm__("rcr bl, 1");
    *reinterpret_cast<unsigned char*>(&rbx204) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx192) + 1) + 93);
    *reinterpret_cast<signed char*>(&r9_197) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r9_197) + *reinterpret_cast<signed char*>(&r11_186));
    *reinterpret_cast<int16_t*>(&r10_202) = reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(tmp16_212) >> -8);
    __asm__("shrd r9d, r8d, 0x1");
    *reinterpret_cast<int16_t*>(&r13_207) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r13_207) << *reinterpret_cast<unsigned char*>(&ecx192));
    *reinterpret_cast<int32_t*>(&rax215) = *reinterpret_cast<int16_t*>(&rax210);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax215) + 4) = 0;
    r14_216 = reinterpret_cast<uint64_t>(-r14_213);
    if (!reinterpret_cast<int1_t>(!!r14_213)) {
        *reinterpret_cast<uint16_t*>(&rbx204) = *reinterpret_cast<uint16_t*>(&rsi214);
    }
    __asm__("rcr ebp, 1");
    *reinterpret_cast<int16_t*>(&r14_216) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rdi206) * 0x20b8);
    __asm__("shld rbx, r13, 0x1");
    *reinterpret_cast<uint16_t*>(&rbx204) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx204) >> -86);
    __asm__("xadd dil, sil");
    __asm__("btr edi, 0xf3");
    __asm__("ror r11w, 1");
    __asm__("bts si, 0xbd");
    rbx217 = reinterpret_cast<uint64_t>(rbx204 + 0x5e3212a8);
    *reinterpret_cast<int32_t*>(&rcx218) = *reinterpret_cast<int32_t*>(&r12_181) * 0x240c8c2a;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx218) + 4) = 0;
    if (r8_177 >= 0x14ad6eda) {
        rbx217 = rsi214;
    }
    *reinterpret_cast<int32_t*>(&r8_219) = *reinterpret_cast<int32_t*>(&r8_177) >> -11;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_219) + 4) = 0;
    return rax215 * r9_197 + rbx217 + rcx218 + __intrinsic() + ((reinterpret_cast<int64_t>(rbp191) >> 1) + 0x1687f373) + rsi214 + rdi206 + r8_219 + (r9_197 << 1) + r10_202 + r11_186 + r12_181 + r13_207 + r14_216 + r15_211 + 0x40156acb01da3258;
}

uint64_t log_size_10_var_004(int64_t rdi, int64_t rsi) {
    int64_t r11_3;
    int64_t r14_4;
    uint64_t r15_5;
    int64_t r9_6;
    int64_t rsi7;
    uint64_t r10_8;
    int64_t r13_9;
    uint1_t cf10;
    uint64_t rdi11;
    int64_t rcx12;
    uint64_t r14_13;
    uint64_t r9_14;
    uint64_t r15_15;
    int64_t rcx16;
    int32_t ebx17;
    uint64_t r11_18;
    uint64_t rax19;
    uint64_t r11_20;
    uint64_t r9_21;
    uint64_t r9_22;
    uint64_t rdx23;
    unsigned char tmp8_24;
    uint1_t cf25;
    uint64_t r10_26;
    uint32_t eax27;
    uint64_t r9_28;
    int64_t rcx29;
    signed char bl30;
    unsigned char cl31;
    int64_t rbp32;
    int16_t ax33;
    uint1_t cf34;
    int64_t rsi35;
    int64_t r10_36;
    int64_t r13_37;
    int32_t eax38;
    uint64_t rdi39;
    int32_t eax40;
    int64_t rdx41;
    int16_t tmp16_42;
    int64_t rdx43;
    int64_t r8_44;
    int64_t r10_45;
    uint64_t rax46;
    uint64_t r12_47;
    int64_t r10_48;
    uint32_t ebp49;
    uint64_t r14_50;
    int32_t ebx51;
    uint32_t edx52;
    uint32_t edx53;
    int64_t r15_54;
    uint64_t r13_55;
    uint32_t eax56;
    int64_t rax57;
    uint64_t rax58;
    uint64_t rbp59;
    uint64_t rbx60;
    uint64_t r12_61;
    uint16_t r14w62;
    uint16_t ax63;
    int64_t r10_64;
    int64_t rax65;
    uint64_t rdi66;
    int1_t cf67;
    uint32_t r13d68;
    int64_t rax69;
    uint64_t rdi70;
    uint64_t r14_71;
    uint64_t rax72;
    uint64_t r15_73;
    int64_t rdi74;
    uint64_t rbx75;
    uint64_t r12_76;
    uint32_t r8d77;
    uint64_t rsi78;
    int64_t r14_79;
    uint32_t edi80;
    int64_t rax81;
    int64_t r12_82;
    int64_t rax83;
    int64_t rdx84;
    uint64_t rbp85;
    uint64_t rbx86;
    uint64_t rax87;
    uint1_t cf88;
    uint64_t r9_89;
    uint1_t cf90;
    uint64_t r14_91;
    uint64_t r15_92;
    uint64_t rsi93;
    uint64_t r13_94;
    int64_t rdx95;
    int64_t rax96;
    uint64_t r13_97;
    uint64_t r12_98;
    uint64_t rbx99;
    uint64_t tmp64_100;
    int64_t r13_101;
    uint1_t cf102;
    int64_t r9_103;
    uint64_t rsi104;
    uint64_t r14_105;
    uint64_t rcx106;
    int64_t rax107;
    uint64_t r15_108;
    uint16_t tmp16_109;
    uint1_t cf110;
    uint64_t r13_111;
    uint64_t rbp112;
    uint64_t rdx113;
    uint64_t rax114;
    uint64_t r14_115;
    uint32_t ebx116;
    uint64_t rdx117;
    uint64_t rdi118;
    uint64_t tmp64_119;
    uint64_t rbx120;
    uint64_t rax121;
    int64_t rdx122;
    int64_t rbp123;
    uint32_t ecx124;
    uint32_t tmp32_125;
    uint32_t ecx126;
    uint64_t rsi127;
    uint64_t r8_128;
    int64_t rbx129;
    signed char tmp8_130;
    int32_t ecx131;
    uint64_t r15_132;
    int64_t r11_133;
    uint64_t r9_134;
    uint64_t rsi135;
    int64_t r10_136;
    int64_t rax137;
    uint64_t rbp138;
    uint64_t r10_139;
    uint1_t cf140;
    uint1_t below_or_equal141;
    uint64_t r10_142;
    int64_t rbx143;
    int64_t r12_144;
    uint32_t ecx145;
    int64_t r11_146;
    int64_t rcx147;
    int64_t rbp148;
    uint1_t cf149;
    int1_t below_or_equal150;
    uint64_t r10_151;
    int64_t rdi152;
    unsigned char cl153;
    uint1_t cf154;
    uint64_t r9_155;
    uint32_t r12d156;
    int64_t rdx157;
    int64_t rax158;
    signed char tmp8_159;
    int64_t r10_160;
    uint64_t rcx161;
    uint16_t cx162;
    uint1_t cf163;
    uint1_t cf164;
    int64_t rbp165;
    int64_t r12_166;
    uint64_t r12_167;
    int64_t rcx168;
    uint64_t r11_169;
    uint64_t r15_170;
    uint32_t tmp32_171;
    int64_t rcx172;
    uint64_t r13_173;
    int64_t r11_174;
    int64_t rbx175;
    int64_t r13_176;
    int16_t r9w177;
    uint16_t cx178;
    int64_t r14_179;
    int32_t edi180;
    int64_t rcx181;
    int64_t rsi182;
    int64_t r10_183;
    uint16_t bx184;
    int64_t rsi185;
    int64_t rsi186;
    uint64_t r8_187;
    int64_t r15_188;
    signed char tmp8_189;
    int64_t rdi190;
    uint64_t r11_191;
    int16_t dx192;
    int1_t less193;
    uint32_t r15d194;
    uint32_t eax195;
    int64_t rbp196;
    int64_t rdi197;
    uint16_t dx198;
    uint64_t rsi199;
    int64_t r12_200;
    signed char tmp8_201;
    signed char tmp8_202;
    int64_t rdi203;
    uint64_t rbp204;
    int16_t bx205;
    int32_t eax206;
    int64_t rbx207;
    int1_t less_or_equal208;
    uint16_t ax209;
    int32_t ecx210;
    uint64_t rbp211;
    int64_t r8_212;
    uint64_t rdi213;
    int64_t r15_214;
    uint32_t eax215;
    uint32_t tmp32_216;
    int64_t r12_217;
    uint32_t ecx218;
    int64_t rax219;
    uint64_t rdx220;
    uint64_t rdx221;
    uint64_t r13_222;
    uint32_t esi223;
    int64_t r10_224;
    uint16_t dx225;
    int16_t ax226;
    uint64_t r14_227;
    unsigned char tmp8_228;
    int64_t r11_229;
    uint1_t cf230;
    uint1_t cf231;
    int16_t ax232;
    int64_t r8_233;
    uint16_t cx234;
    int64_t rcx235;
    uint64_t r13_236;
    int16_t ax237;
    int64_t r14_238;
    int64_t r15_239;
    uint64_t r12_240;
    int64_t r8_241;
    uint64_t rsi242;
    uint16_t r13w243;
    int64_t r13_244;
    unsigned char tmp8_245;

    r11_3 = 0xd91e1b1a54432529;
    r14_4 = 0xe635d43e4959b643;
    r15_5 = 0x43e7aee4c5417807;
    *reinterpret_cast<int32_t*>(&r9_6) = 0x13a6493c;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_6) + 4) = 0;
    if (0) {
    }
    *reinterpret_cast<int16_t*>(&r9_6) = reinterpret_cast<int16_t>(0x493c >> 0x7d);
    __asm__("xadd r10b, r12b");
    if (1) {
        *reinterpret_cast<uint16_t*>(&r15_5) = 0x2529;
    }
    if (0) {
        *reinterpret_cast<uint32_t*>(&r14_4) = 0xdc57714f;
    }
    *reinterpret_cast<int32_t*>(&rsi7) = 0xe8183b45 >> 79;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = 0;
    r10_8 = 41 >> 79;
    r13_9 = r9_6 * 0xfffffffffcfb61d9;
    cf10 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r10_8) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r15_5))));
    *reinterpret_cast<unsigned char*>(&r10_8) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_8) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_5) + cf10));
    if (*reinterpret_cast<unsigned char*>(&r10_8) == static_cast<uint32_t>(cf10)) {
    }
    __asm__("rol r12, cl");
    *reinterpret_cast<uint16_t*>(&r11_3) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&r9_6)));
    *reinterpret_cast<int32_t*>(&rdi11) = 0x5bac954d >> 0xffffff96;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = 0;
    *reinterpret_cast<int16_t*>(&r14_4) = -*reinterpret_cast<int16_t*>(&r14_4);
    __asm__("btc r9d, 0x3c");
    rcx12 = rsi7 * 0xffffffffe5a637e8;
    __asm__("btr rax, rbp");
    __asm__("bsr r12, r12");
    __asm__("btr ax, 0x41");
    *reinterpret_cast<uint32_t*>(&r14_13) = *reinterpret_cast<uint32_t*>(&r14_4) >> *reinterpret_cast<signed char*>(&rcx12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_13) + 4) = 0;
    r9_14 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rsi7) + *reinterpret_cast<int32_t*>(&r11_3) + 0xc9);
    __asm__("rol r15, 1");
    __asm__("rcr r8w, 1");
    *reinterpret_cast<uint16_t*>(&r11_3) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_3) >> 1);
    __asm__("rcl rdx, 1");
    r15_15 = r15_5 - (0x74a52ee2 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r15_5 < 0x74a52ee3)));
    __asm__("cdq ");
    __asm__("rcl r15b, 1");
    *reinterpret_cast<int16_t*>(&rcx12) = static_cast<int16_t>(rdi11 - 0x2202d38fd3c0cf1b + 11);
    __asm__("rol rbx, 0x42");
    __asm__("shrd eax, edx, 0x1");
    __asm__("rcl r14, 1");
    *reinterpret_cast<unsigned char*>(&rsi7) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi7) - 0x68) + 1);
    __asm__("rcl r10d, 1");
    __asm__("rcl di, 1");
    __asm__("btc r11d, 0x3d");
    *reinterpret_cast<signed char*>(&r9_14) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r9_14) >> *reinterpret_cast<signed char*>(&rcx12));
    __asm__("ror r9d, cl");
    __asm__("rol r8w, 0xbd");
    *reinterpret_cast<uint32_t*>(&rcx16) = *reinterpret_cast<int32_t*>(&rcx12) - 0xa5ea7332;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rsi7) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi7) | 0xc000);
    ebx17 = *reinterpret_cast<int32_t*>(&r10_8) >> *reinterpret_cast<signed char*>(&rcx16);
    *reinterpret_cast<int16_t*>(&r13_9) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r13_9) >> *reinterpret_cast<signed char*>(&rcx16));
    __asm__("bts rax, 0x98");
    __asm__("rcr r9d, 0xb1");
    __asm__("shld r8d, r11d, cl");
    __asm__("rol r9, 0xaf");
    *reinterpret_cast<int32_t*>(&r11_18) = *reinterpret_cast<int32_t*>(&r11_3) * 0x916aaf24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_18) + 4) = 0;
    __asm__("btc dx, 0xd0");
    __asm__("bsr r10w, r9w");
    *reinterpret_cast<uint32_t*>(&rax19) = *reinterpret_cast<unsigned char*>(&rdi11) * *reinterpret_cast<uint32_t*>(&r15_15);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = 0;
    if (!__intrinsic()) {
    }
    __asm__("shrd bx, r13W, 0x1");
    __asm__("rcr r12d, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ebx17) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ebx17) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax19) + 1))));
    r11_20 = r11_18 ^ rax19;
    *reinterpret_cast<int32_t*>(&r9_21) = -*reinterpret_cast<int32_t*>(&r9_14);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_21) + 4) = 0;
    r9_22 = r9_21 | 0xc000000000000000;
    rdx23 = rax19 % r9_22;
    *reinterpret_cast<unsigned char*>(&rdx23) = reinterpret_cast<uint1_t>(!__intrinsic());
    if (1) {
        *reinterpret_cast<uint16_t*>(&r14_13) = *reinterpret_cast<uint16_t*>(&r11_20);
    }
    tmp8_24 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_22) + 91);
    cf25 = reinterpret_cast<uint1_t>(tmp8_24 < *reinterpret_cast<unsigned char*>(&r9_22));
    *reinterpret_cast<unsigned char*>(&r9_22) = tmp8_24;
    *reinterpret_cast<uint32_t*>(&r10_26) = *reinterpret_cast<uint32_t*>(&r15_15);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_26) + 4) = 0;
    if (*reinterpret_cast<unsigned char*>(&r9_22)) {
        r14_13 = r10_26;
    }
    __asm__("btc r10, rdx");
    __asm__("rol rdi, 1");
    __asm__("bts r13W, r10w");
    eax27 = *reinterpret_cast<uint32_t*>(&rcx16);
    __asm__("btc ecx, r13d");
    r9_28 = r9_22 - (rdx23 + reinterpret_cast<uint1_t>(r9_22 < rdx23 + cf25));
    __asm__("bts eax, 0x3a");
    rcx29 = rcx16 - 0x55add54a90f77da5;
    __asm__("bsf edx, esi");
    *reinterpret_cast<signed char*>(&r9_28) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r9_28) + 1);
    *reinterpret_cast<uint16_t*>(&r15_15) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_15) >> 1);
    bl30 = reinterpret_cast<signed char>(~*reinterpret_cast<unsigned char*>(&ebx17));
    if (static_cast<int1_t>(*reinterpret_cast<uint32_t*>(&r13_9) >> 66)) {
        eax27 = *reinterpret_cast<uint32_t*>(&r10_26);
    }
    __asm__("bsr rsi, r14");
    __asm__("ror r11d, 1");
    cl31 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx29) & 15);
    __asm__("shld di, bx, cl");
    rbp32 = *reinterpret_cast<signed char*>(&r11_20);
    __asm__("bsf r9w, cx");
    ax33 = *reinterpret_cast<signed char*>(&eax27);
    cf34 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rsi7) < 0xda);
    *reinterpret_cast<unsigned char*>(&rsi7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi7) + 38);
    *reinterpret_cast<uint32_t*>(&rsi35) = *reinterpret_cast<int32_t*>(&rsi7) - 0x374e0152 + cf34;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi35) + 4) = 0;
    *reinterpret_cast<int16_t*>(&rdi11) = *reinterpret_cast<signed char*>(&ax33);
    *reinterpret_cast<uint32_t*>(&r10_36) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r10_26) >> cl31);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_36) + 4) = 0;
    __asm__("shrd r8, rbx, 0x3c");
    __asm__("rol di, cl");
    __asm__("bsf r15w, si");
    if (0) {
    }
    *reinterpret_cast<unsigned char*>(&ebx17) = reinterpret_cast<unsigned char>(-bl30);
    __asm__("btr si, cx");
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(!!bl30) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&ebx17) == 0))) {
        *reinterpret_cast<uint32_t*>(&rbp32) = *reinterpret_cast<uint32_t*>(&r14_13);
    }
    __asm__("bts rsi, 0x65");
    __asm__("rcr rbp, 1");
    if (0) {
        *reinterpret_cast<uint16_t*>(&ebx17) = *reinterpret_cast<uint16_t*>(&r14_13);
    }
    *reinterpret_cast<int16_t*>(&rdx23) = *reinterpret_cast<signed char*>(&r15_15);
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r9_28) = *reinterpret_cast<uint16_t*>(&r11_20);
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx23) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx23) + 1) | 0xdb);
    r13_37 = *reinterpret_cast<int32_t*>(&rbp32);
    __asm__("ror r9, 0x84");
    eax38 = static_cast<int32_t>(rdx23 + rdx23 * 2);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax38) + 1) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax38) + 1));
    rdi39 = rdi11 >> reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(cl31 - reinterpret_cast<unsigned char>(0x75 + reinterpret_cast<uint1_t>(cl31 < 0x76))) ^ 0x7a);
    eax40 = eax38 * eax38;
    *reinterpret_cast<int32_t*>(&rdx41) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx41) + 4) = 0;
    __asm__("rcr ax, 0xb3");
    tmp16_42 = *reinterpret_cast<int16_t*>(&r10_36);
    *reinterpret_cast<int16_t*>(&r10_36) = *reinterpret_cast<int16_t*>(&rbp32);
    *reinterpret_cast<int16_t*>(&rbp32) = tmp16_42;
    __asm__("shld r15d, r13d, 0x47");
    rdx43 = rdx41 - 0x6e0cd358;
    __asm__("ror r8w, 0x16");
    __asm__("btc r14d, ecx");
    __asm__("rcl r11d, 1");
    __asm__("cdq ");
    __asm__("xadd rbx, r13");
    *reinterpret_cast<uint16_t*>(&rcx29) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebx17) * 0x485b);
    __asm__("xadd ch, bl");
    __asm__("btc r12d, 0x1f");
    __asm__("rcr rcx, 0xad");
    __asm__("bts si, 0x5f");
    __asm__("shld rdi, rbx, 0x1");
    *reinterpret_cast<unsigned char*>(&ebx17) = 0;
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r10_36) = *reinterpret_cast<uint32_t*>(&rcx29);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_36) + 4) = 0;
    }
    *reinterpret_cast<unsigned char*>(&rcx29) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx29) ^ *reinterpret_cast<unsigned char*>(&rdx43));
    r8_44 = 0x3fffffffcd675fcc - rdx43;
    *reinterpret_cast<uint16_t*>(&r14_13) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_13) | 0xc000);
    *reinterpret_cast<uint16_t*>(&rdx43) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax40) % *reinterpret_cast<uint16_t*>(&r14_13));
    r10_45 = r10_36 >> -20;
    __asm__("xadd dl, r9b");
    *reinterpret_cast<uint32_t*>(&rax46) = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&eax40) / *reinterpret_cast<uint16_t*>(&r14_13))));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax46) + 4) = 0;
    r12_47 = 0xfb481f7b + static_cast<uint64_t>(__intrinsic());
    *reinterpret_cast<int32_t*>(&r10_48) = *reinterpret_cast<int32_t*>(&r10_45) >> *reinterpret_cast<unsigned char*>(&rcx29);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_48) + 4) = 0;
    ebp49 = *reinterpret_cast<uint32_t*>(&rbp32) & 0xf9534d49;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ebx17) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ebx17) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx43) + 1))));
    r14_50 = r14_13 >> 1;
    __asm__("rol esi, 0x9e");
    ebx51 = ebx17 >> 10;
    edx52 = *reinterpret_cast<uint32_t*>(&rdx43) >> -99;
    __asm__("xadd bp, ax");
    *reinterpret_cast<unsigned char*>(&edx52) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(__intrinsic() + *reinterpret_cast<signed char*>(&r13_37)) + __intrinsic());
    __asm__("rcl r8b, 1");
    if (rax46 > 0x57efdd66) {
        *reinterpret_cast<uint16_t*>(&rcx29) = *reinterpret_cast<uint16_t*>(&r9_28);
    }
    __asm__("rol r9, 1");
    edx53 = edx52 ^ 0xf934497;
    *reinterpret_cast<uint32_t*>(&r15_54) = *reinterpret_cast<uint32_t*>(&r15_15) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_54) + 4) = 0;
    *reinterpret_cast<signed char*>(&r12_47) = *reinterpret_cast<signed char*>(&edx53);
    r13_55 = r13_37 + r14_50;
    *reinterpret_cast<int16_t*>(&rax46) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax46) * *reinterpret_cast<int16_t*>(&ebx51));
    eax56 = *reinterpret_cast<uint32_t*>(&rax46) | 0x750275bc;
    __asm__("rol r10b, 1");
    if (rsi35 == r10_48) {
    }
    *reinterpret_cast<unsigned char*>(&rcx29) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx29) - reinterpret_cast<unsigned char>(8 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx29) < 0xf8)));
    *reinterpret_cast<int16_t*>(&eax56) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax56) * __intrinsic());
    *reinterpret_cast<uint16_t*>(&r9_28) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_28) - 1);
    *reinterpret_cast<uint16_t*>(&rcx29) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rcx29) >> *reinterpret_cast<unsigned char*>(&rcx29));
    __asm__("bsr r14, r8");
    __asm__("rcr di, cl");
    __asm__("bsf r11d, r11d");
    *reinterpret_cast<unsigned char*>(&r8_44) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_44) >> 80);
    __asm__("bts r12w, r13W");
    *reinterpret_cast<uint32_t*>(&rax57) = eax56 * *reinterpret_cast<uint32_t*>(&r12_47);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax57) + 4) = 0;
    rax58 = rax57 * rdi39;
    __asm__("bsf r13W, r14w");
    *reinterpret_cast<uint32_t*>(&rbp59) = *reinterpret_cast<uint16_t*>(&r13_55);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp59) + 4) = 0;
    __asm__("rcl ax, 1");
    __asm__("btc r13W, r14w");
    *reinterpret_cast<unsigned char*>(&r15_54) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_54) + *reinterpret_cast<signed char*>(&r13_55)) + 1);
    __asm__("btc r8w, r11w");
    __asm__("rcr dx, 1");
    *reinterpret_cast<uint32_t*>(&rbx60) = *reinterpret_cast<uint32_t*>(&rbp59);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx60) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx60) + 1) = __intrinsic();
    *reinterpret_cast<uint32_t*>(&r12_61) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r12_47) >> *reinterpret_cast<unsigned char*>(&rcx29)) | *reinterpret_cast<uint32_t*>(&r9_28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_61) + 4) = 0;
    if (reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r12_61) == 0)) {
        *reinterpret_cast<uint32_t*>(&r15_54) = *reinterpret_cast<uint32_t*>(&rcx29);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_54) + 4) = 0;
    }
    r14w62 = *reinterpret_cast<uint16_t*>(&r9_28);
    *reinterpret_cast<uint16_t*>(&r9_28) = *reinterpret_cast<uint16_t*>(&r14_50);
    __asm__("btr r12w, cx");
    ax63 = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax58) / reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebp49) | 0xc000)) + 0xaa3b)));
    if (reinterpret_cast<int16_t>(ax63) >= reinterpret_cast<int16_t>(0)) {
    }
    __asm__("rcr r11, 1");
    *reinterpret_cast<uint32_t*>(&r10_64) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&r14_50)) >> -19);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_64) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rax58) = reinterpret_cast<uint16_t>(ax63 ^ 0x2634);
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rax58) = *reinterpret_cast<uint32_t*>(&rbx60);
    }
    __asm__("bts r9d, 0x16");
    __asm__("bsr r14, rdx");
    __asm__("bts rcx, rdx");
    __asm__("rcr r11w, 1");
    __asm__("ror r15b, 0xf0");
    *reinterpret_cast<uint32_t*>(&rax65) = *reinterpret_cast<uint32_t*>(&rax58) / 0xc0000000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax65) + 4) = 0;
    rdi66 = rdi39 + 0xfffffffff349e4f6;
    if (__intrinsic()) {
    }
    __asm__("shld r15w, bx, 0x1");
    *reinterpret_cast<uint16_t*>(&rax65) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax65) - reinterpret_cast<uint16_t>(r14w62 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rax65) < reinterpret_cast<uint16_t>(r14w62 + 1))));
    cf67 = static_cast<int1_t>(rbx60 >> rax65);
    __asm__("btc cx, di");
    if (__undefined()) {
        *reinterpret_cast<uint32_t*>(&rax65) = *reinterpret_cast<uint32_t*>(&r15_54);
    }
    if (cf67) {
        *reinterpret_cast<uint16_t*>(&r9_28) = *reinterpret_cast<uint16_t*>(&rdi66);
    }
    *reinterpret_cast<unsigned char*>(&rdi66) = *reinterpret_cast<unsigned char*>(&rcx29);
    __asm__("btc r12w, 0xd7");
    __asm__("bts eax, 0x87");
    r13d68 = (*reinterpret_cast<int32_t*>(&r13_55) + 1) * 0x4dd9e487;
    __asm__("rcr si, 1");
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rbp59) = *reinterpret_cast<uint32_t*>(&rcx29);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp59) + 4) = 0;
    }
    *reinterpret_cast<int32_t*>(&rax69) = reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&rax65) >> 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax69) + 4) = 0;
    __asm__("shrd r10, rsi, 0xb9");
    *reinterpret_cast<int16_t*>(&r8_44) = static_cast<int16_t>(*reinterpret_cast<uint32_t*>(&r8_44) + *reinterpret_cast<uint32_t*>(&r9_28) * 2 + 0xaf);
    *reinterpret_cast<unsigned char*>(&rcx29) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx29) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax69) + 1))));
    if (r9_28 == r12_61) {
        r9_28 = r12_61;
    }
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r9_28) = *reinterpret_cast<uint32_t*>(&rcx29);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_28) + 4) = 0;
    }
    rdi70 = rdi66 + 0x795e097d + __intrinsic();
    *reinterpret_cast<uint16_t*>(&rcx29) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx29) + 1);
    *reinterpret_cast<uint16_t*>(&r9_28) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_28) * 0xcccd);
    *reinterpret_cast<uint32_t*>(&r14_71) = *reinterpret_cast<uint32_t*>(&r8_44) + r13d68 * 4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_71) + 4) = 0;
    __asm__("rcl ch, cl");
    __asm__("shld r15, rcx, 0xe3");
    __asm__("bsr di, r9w");
    __asm__("bts r12, 0x8c");
    rax72 = rax69 * (r14_71 & rdi70);
    r15_73 = r15_54 - r9_28;
    __asm__("btc r11d, r10d");
    __asm__("rol r13, cl");
    __asm__("rcr r13, 1");
    rdi74 = reinterpret_cast<int64_t>(rdi70) >> -18;
    *reinterpret_cast<int16_t*>(&rax72) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax72) * *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx60) + 1));
    *reinterpret_cast<int32_t*>(&rbx75) = *reinterpret_cast<int32_t*>(&rbx60) >> *reinterpret_cast<unsigned char*>(&rcx29);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx75) + 4) = 0;
    __asm__("bsr r15w, r12w");
    *reinterpret_cast<unsigned char*>(&rdi74) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi74) - 0x7e) + 1);
    __asm__("rcl r15b, 1");
    __asm__("rcr rcx, 1");
    *reinterpret_cast<uint32_t*>(&r12_76) = r13d68;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_76) + 4) = 0;
    r8d77 = *reinterpret_cast<uint32_t*>(&r8_44) | r13d68;
    rsi78 = 0xc000004b ^ r12_76;
    r14_79 = rdi74 - 0x16587c82;
    __asm__("ror r12, cl");
    edi80 = *reinterpret_cast<uint32_t*>(&rdi74) | 0xc0000000;
    *reinterpret_cast<uint32_t*>(&rax81) = *reinterpret_cast<int32_t*>(&rax72) * r13d68 / edi80;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax81) + 4) = 0;
    __asm__("shld eax, r15d, cl");
    *reinterpret_cast<int16_t*>(&rax81) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax81) * *reinterpret_cast<int16_t*>(&rsi78));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx75) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx75) + 1) | 0x70);
    __asm__("btr di, si");
    __asm__("rcr r13d, 1");
    __asm__("rcr r11w, 1");
    r12_82 = reinterpret_cast<int64_t>(r12_76) >> 94;
    rax83 = rax81 * rcx29;
    rdx84 = __intrinsic();
    *reinterpret_cast<uint16_t*>(&r14_79) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_79) - 0xaca2);
    if (!*reinterpret_cast<uint16_t*>(&r14_79)) {
        *reinterpret_cast<uint16_t*>(&r10_64) = *reinterpret_cast<uint16_t*>(&edi80);
    }
    rbp85 = rbp59 & r9_28;
    __asm__("btr edx, eax");
    __asm__("ror r9b, 0xc");
    __asm__("rcl ch, cl");
    __asm__("shrd eax, r13d, 0x1");
    *reinterpret_cast<unsigned char*>(&r15_73) = 1;
    *reinterpret_cast<uint16_t*>(&rdx84) = *reinterpret_cast<uint16_t*>(&rcx29);
    *reinterpret_cast<signed char*>(&rax83) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rax83) << *reinterpret_cast<unsigned char*>(&rcx29));
    rbx86 = rbx75 >> 0x76 >> *reinterpret_cast<unsigned char*>(&rcx29);
    rax87 = rax83 + 1;
    __asm__("bsr r12w, r13W");
    __asm__("btr r11w, 0xa4");
    cf88 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx86) + 1) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax87) + 1) + __intrinsic()));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx86) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx86) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax87) + 1) + cf88));
    *reinterpret_cast<uint32_t*>(&r9_89) = *reinterpret_cast<uint32_t*>(&r9_28) + 0xce1b30e1 + cf88;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_89) + 4) = 0;
    *reinterpret_cast<signed char*>(&rax87) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rax87) << 1);
    __asm__("rcr edi, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx84) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx84) + 1) + 93)));
    cf90 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r14_79) < 0x61300609);
    *reinterpret_cast<uint32_t*>(&r14_91) = *reinterpret_cast<uint32_t*>(&r14_79) - (0x61300608 + cf90);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_91) + 4) = 0;
    if (!cf90) {
        *reinterpret_cast<uint32_t*>(&r10_64) = *reinterpret_cast<uint32_t*>(&r9_89);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_64) + 4) = 0;
    }
    *reinterpret_cast<int16_t*>(&r14_91) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r14_91) + *reinterpret_cast<int16_t*>(&rbx86));
    r15_92 = r15_73 >> 71;
    *reinterpret_cast<int16_t*>(&rbp85) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbp85) << 1);
    __asm__("shld rdx, r9, cl");
    __asm__("rol r9, 0x65");
    *reinterpret_cast<signed char*>(&r9_89) = -*reinterpret_cast<signed char*>(&r9_89);
    __asm__("rcl bx, cl");
    rsi93 = rsi78 & rax87;
    __asm__("bsr cx, r10w");
    if (reinterpret_cast<int64_t>(rsi93 & r14_91) < reinterpret_cast<int64_t>(0)) {
        *reinterpret_cast<int16_t*>(&rbx86) = *reinterpret_cast<int16_t*>(&r9_89);
    }
    __asm__("lahf ");
    *reinterpret_cast<signed char*>(&rbx86) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbx86) - *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax87) + 1));
    r13_94 = rcx29 + rbx86 * 8;
    *reinterpret_cast<uint32_t*>(&rdx95) = *reinterpret_cast<uint32_t*>(&rdx84) - (*reinterpret_cast<uint32_t*>(&r9_89) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdx84) < *reinterpret_cast<uint32_t*>(&r9_89)));
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r13_94) = *reinterpret_cast<uint32_t*>(&r12_82);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_94) + 4) = 0;
    }
    *reinterpret_cast<signed char*>(&r13_94) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r13_94) - *reinterpret_cast<signed char*>(&rsi93));
    __asm__("rcr dl, 1");
    __asm__("ror rax, cl");
    __asm__("rcl edx, 1");
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&rbp85) = *reinterpret_cast<int16_t*>(&rbx86);
    }
    rax96 = reinterpret_cast<int64_t>(rax87) >> 1;
    __asm__("rcr r14b, cl");
    r13_97 = r13_94 - r9_89;
    *reinterpret_cast<uint32_t*>(&r12_98) = *reinterpret_cast<uint32_t*>(&r12_82) - (*reinterpret_cast<uint32_t*>(&r12_82) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r12_82) < *reinterpret_cast<uint32_t*>(&r12_82) + 1));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_98) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rdx95) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx95) - reinterpret_cast<uint16_t>(0x1bbd + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rdx95) < 0x1bbe)));
    rbx99 = rbx86 + rbp85 + 1;
    __asm__("rcr r14b, 1");
    *reinterpret_cast<signed char*>(&r10_64) = -*reinterpret_cast<signed char*>(&r10_64);
    if (*reinterpret_cast<int16_t*>(&rbx99) > *reinterpret_cast<int16_t*>(&r8d77)) {
        *reinterpret_cast<uint32_t*>(&r10_64) = *reinterpret_cast<uint32_t*>(&r12_98);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_64) + 4) = 0;
    }
    *reinterpret_cast<int16_t*>(&rax96) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax96) * *reinterpret_cast<signed char*>(&r13_97));
    *reinterpret_cast<unsigned char*>(&rdx95) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx95) + 3) + 1);
    *reinterpret_cast<uint16_t*>(&r13_97) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_97) | 0x1b9);
    if (!__intrinsic()) {
        r9_89 = rbp85;
    }
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rdx95) = *reinterpret_cast<uint32_t*>(&r14_91);
    }
    if (__intrinsic()) {
        r15_92 = r12_98;
    }
    if (r15_92 == r13_97) {
        tmp64_100 = r15_92;
        r15_92 = r13_97;
        r13_97 = tmp64_100;
    }
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r10_64) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(0xaca2 ^ *reinterpret_cast<uint16_t*>(&r8d77)) + *reinterpret_cast<int16_t*>(&r13_94));
    }
    *reinterpret_cast<int32_t*>(&r13_101) = *reinterpret_cast<int32_t*>(&r13_97) + *reinterpret_cast<int32_t*>(&rbx99);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_101) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r12_98) = __intrinsic();
    if (*reinterpret_cast<int32_t*>(&r13_101) < 0 == __intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r9_89) = *reinterpret_cast<uint32_t*>(&rdx95);
    }
    __asm__("rol si, 1");
    __asm__("rcr r14, 0x7a");
    __asm__("rcl r14d, 1");
    cf102 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r9_89) < 0x7ecbeb5e);
    *reinterpret_cast<uint32_t*>(&r9_103) = *reinterpret_cast<uint32_t*>(&r9_89) - (0x7ecbeb5e + cf102);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_103) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rsi104) = 1 - *reinterpret_cast<uint32_t*>(&r14_91) + cf102;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi104) + 4) = 0;
    __asm__("bsf r8, r11");
    __asm__("shrd rsi, r15, 0x1");
    r14_105 = r14_91 - (0x4a5c13c9 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(r14_91 < 0xffffffffb5a3ec37)));
    __asm__("rcr r14w, 1");
    rcx106 = *reinterpret_cast<uint16_t*>(&r15_92);
    __asm__("btc r13d, 0xa4");
    rax107 = *reinterpret_cast<int32_t*>(&rax96);
    *reinterpret_cast<unsigned char*>(&r14_105) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_105) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_105) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r14_105) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_105) + 1))));
    *reinterpret_cast<unsigned char*>(&rbp85) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp85) ^ *reinterpret_cast<unsigned char*>(&rsi104));
    __asm__("ror rbx, cl");
    *reinterpret_cast<uint32_t*>(&r15_108) = *reinterpret_cast<uint32_t*>(&r15_92) >> 63;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_108) + 4) = 0;
    *reinterpret_cast<int16_t*>(&rax107) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax107) * *reinterpret_cast<signed char*>(&r14_105));
    *reinterpret_cast<unsigned char*>(&rcx106) = reinterpret_cast<unsigned char>(~*reinterpret_cast<unsigned char*>(&rcx106));
    __asm__("btr bp, bx");
    __asm__("shld r11d, esi, cl");
    tmp16_109 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_98) + 0x5aa);
    cf110 = reinterpret_cast<uint1_t>(tmp16_109 < *reinterpret_cast<uint16_t*>(&r12_98));
    *reinterpret_cast<uint16_t*>(&r12_98) = tmp16_109;
    __asm__("shld r12d, ebp, 0x1");
    if (!__intrinsic()) {
    }
    r13_111 = r13_101 + 0x36cd7731 + static_cast<uint64_t>(cf110);
    *reinterpret_cast<int16_t*>(&r13_111) = -*reinterpret_cast<int16_t*>(&r13_111);
    rbp112 = rbp85 | 0xc000000000000000;
    rdx113 = rax107 % rbp112;
    rax114 = rax107 / rbp112;
    *reinterpret_cast<int16_t*>(&rax114) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax114) * *reinterpret_cast<int16_t*>(&rax114));
    *reinterpret_cast<int16_t*>(&rdx113) = __intrinsic();
    r14_115 = r14_105 >> 1;
    ebx116 = 0x8d293d8f;
    rdx117 = rdx113 - 0x35800cde;
    __asm__("ror r10, 0xf0");
    *reinterpret_cast<unsigned char*>(&ebx116) = reinterpret_cast<unsigned char>(0x8f | *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax114) + 1));
    if (0) {
        *reinterpret_cast<uint16_t*>(&r12_98) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_103) << *reinterpret_cast<unsigned char*>(&rcx106));
    }
    rdi118 = *reinterpret_cast<uint16_t*>(&r14_115);
    __asm__("rcl bl, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx106) + 1) = *reinterpret_cast<unsigned char*>(&rcx106);
    *reinterpret_cast<unsigned char*>(&rcx106) = 0;
    if (0) {
        tmp64_119 = r14_115;
        r14_115 = r15_108;
        r15_108 = tmp64_119;
    }
    *reinterpret_cast<uint32_t*>(&rbx120) = ebx116 ^ 0x9f26d2d7;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx120) + 4) = 0;
    rax121 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax114)));
    *reinterpret_cast<uint32_t*>(&rdx122) = *reinterpret_cast<uint32_t*>(&rdx117) - (*reinterpret_cast<uint32_t*>(&rbx120) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdx117) < *reinterpret_cast<uint32_t*>(&rbx120)));
    *reinterpret_cast<int32_t*>(&rbp123) = *reinterpret_cast<int32_t*>(&rbp112) * 0xa54a37e8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp123) + 4) = 0;
    __asm__("rcr al, 0x77");
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rsi104) = *reinterpret_cast<uint32_t*>(&r14_115);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi104) + 4) = 0;
    }
    ecx124 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx106) >> 0xffffff81);
    tmp32_125 = ecx124 + ecx124;
    ecx126 = tmp32_125;
    if (tmp32_125 >= ecx124) {
        rax121 = r14_115;
    }
    __asm__("btc eax, r12d");
    rsi127 = rsi104 | rbx120;
    *reinterpret_cast<signed char*>(&ecx126) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ecx126) - *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ecx126) + 1));
    *reinterpret_cast<uint16_t*>(&r9_103) = static_cast<uint16_t>(r10_64 + rax121 * 4);
    __asm__("rcl sil, 1");
    r8_128 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rsi127)));
    __asm__("rcr ecx, 1");
    __asm__("rcl r13, 1");
    *reinterpret_cast<uint32_t*>(&rbx129) = *reinterpret_cast<uint32_t*>(&rbx120) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx129) + 4) = 0;
    __asm__("bts ax, 0xe3");
    __asm__("rcr rbx, 0x6e");
    tmp8_130 = *reinterpret_cast<signed char*>(&rdx122);
    *reinterpret_cast<signed char*>(&rax121) = tmp8_130;
    ecx131 = *reinterpret_cast<int16_t*>(&ecx126);
    __asm__("rol r12d, 1");
    *reinterpret_cast<uint16_t*>(&r14_115) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r14_115) >> 73);
    *reinterpret_cast<unsigned char*>(&r13_111) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_111) ^ 45);
    *reinterpret_cast<uint32_t*>(&r15_132) = *reinterpret_cast<uint32_t*>(&r15_108) * 0xace79c56;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_132) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rbx129) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx129) + 1);
    if (!__intrinsic()) {
        r13_111 = r12_98;
    }
    __asm__("btr dx, r11w");
    __asm__("rol bpl, 1");
    __asm__("shrd r14, r9, 0x1");
    __asm__("rol r13b, 0xbc");
    __asm__("shrd si, r13W, 0x1");
    r11_133 = *reinterpret_cast<int32_t*>(&r8_128);
    r9_134 = r9_103 + 1;
    *reinterpret_cast<uint32_t*>(&rsi135) = *reinterpret_cast<uint32_t*>(&rsi127) >> 24 | *reinterpret_cast<uint32_t*>(&rsi127) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&rsi127) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&rsi127) << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi135) + 4) = 0;
    *reinterpret_cast<signed char*>(&rbp123) = reinterpret_cast<signed char>(-*reinterpret_cast<signed char*>(&rbp123) - 1);
    if (*reinterpret_cast<signed char*>(&rbp123)) {
        r9_134 = r8_128;
    }
    *reinterpret_cast<unsigned char*>(&rdi118) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi118) | 91);
    __asm__("rcr edx, 1");
    r10_136 = r10_64 + 1;
    rax137 = *reinterpret_cast<int32_t*>(&rax121) * rbp123;
    __asm__("btr cx, bx");
    rbp138 = *reinterpret_cast<uint32_t*>(&rdi118) + *reinterpret_cast<int32_t*>(&rbp123) * 8 + 0xbd;
    *reinterpret_cast<int32_t*>(&r10_139) = *reinterpret_cast<int32_t*>(&r10_136) << 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_139) + 4) = 0;
    *reinterpret_cast<signed char*>(&rbp138) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbp138) >> 1);
    *reinterpret_cast<signed char*>(&r11_133) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&r11_133));
    __asm__("btr di, 0x6f");
    cf140 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx129) + 1) < 0xb8);
    below_or_equal141 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx129) + 1) <= reinterpret_cast<unsigned char>(73 - cf140));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx129) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx129) + 1) - reinterpret_cast<unsigned char>(73 - cf140));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax137) + 1) = below_or_equal141;
    r10_142 = r10_139 & r14_115;
    __asm__("rcr bh, 1");
    *reinterpret_cast<int16_t*>(&r13_111) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r13_111) >> -47);
    rbx143 = rbx129 - 1;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx143) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx143) + 1) >> *reinterpret_cast<signed char*>(&ecx131));
    __asm__("xadd dil, al");
    *reinterpret_cast<uint32_t*>(&r12_144) = *reinterpret_cast<uint32_t*>(&r12_98) & 0xe46de1d7;
    ecx145 = ecx131 + 0x550298e9;
    *reinterpret_cast<int32_t*>(&r11_146) = *reinterpret_cast<int32_t*>(&r11_133) >> 77;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_146) + 4) = 0;
    *reinterpret_cast<signed char*>(&r9_134) = 81;
    *reinterpret_cast<uint32_t*>(&rcx147) = ecx145 - 0x76924dcf;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx147) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rbp148) = *reinterpret_cast<int32_t*>(&rbp138) - 0x72a8bbc + reinterpret_cast<uint1_t>(ecx145 < 0x76924dcf);
    cf149 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx147) + 1) < 0xd9);
    below_or_equal150 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx147) + 1) <= reinterpret_cast<unsigned char>(0xd9 + cf149);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx147) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx147) + 1) - reinterpret_cast<unsigned char>(0xd9 + cf149));
    if (!below_or_equal150) {
        *reinterpret_cast<uint32_t*>(&rsi135) = *reinterpret_cast<uint32_t*>(&r8_128);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi135) + 4) = 0;
    }
    *reinterpret_cast<uint32_t*>(&r10_151) = *reinterpret_cast<uint32_t*>(&r10_142) - (*reinterpret_cast<uint32_t*>(&rcx147) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r10_142) < *reinterpret_cast<uint32_t*>(&rcx147) + cf149));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_151) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rdi152) = *reinterpret_cast<uint32_t*>(&rdi118) - (0x2433e3ce + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdi118) < 0x2433e3cf));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi152) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r10_151) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_151) + *reinterpret_cast<signed char*>(&r12_144))));
    cl153 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx147) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx147) + 1));
    if (reinterpret_cast<signed char>(cl153) < reinterpret_cast<signed char>(0) == __intrinsic()) {
        *reinterpret_cast<int16_t*>(&r8_128) = *reinterpret_cast<int16_t*>(&r8_128);
    }
    cf154 = reinterpret_cast<uint1_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx143) + 0x1dba) + 1) < *reinterpret_cast<uint16_t*>(&rbx143));
    r9_155 = -(r9_134 - (rdi152 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r9_134 < rdi152 + static_cast<uint64_t>(cf154)))));
    __asm__("shld r14w, ax, cl");
    *reinterpret_cast<int16_t*>(&rax137) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax137) * *reinterpret_cast<int16_t*>(&r13_111));
    __asm__("ror rax, 1");
    __asm__("ror rbx, cl");
    if (*reinterpret_cast<uint32_t*>(&r9_155) >= 0x7bd30faa) {
        r13_111 = r10_151;
    }
    if (*reinterpret_cast<int16_t*>(&rbp148) >= *reinterpret_cast<int16_t*>(&r15_132)) {
        *reinterpret_cast<uint32_t*>(&r12_144) = *reinterpret_cast<uint32_t*>(&r8_128);
    }
    r12d156 = *reinterpret_cast<uint32_t*>(&r12_144) | 0xc0000000;
    *reinterpret_cast<uint32_t*>(&rdx157) = *reinterpret_cast<uint32_t*>(&rax137) % r12d156;
    *reinterpret_cast<uint32_t*>(&rax158) = *reinterpret_cast<uint32_t*>(&rax137) / r12d156;
    __asm__("cdq ");
    if (*reinterpret_cast<signed char*>(&rsi135) == *reinterpret_cast<signed char*>(&r8_128)) {
        tmp8_159 = *reinterpret_cast<signed char*>(&rsi135);
        *reinterpret_cast<signed char*>(&rsi135) = *reinterpret_cast<signed char*>(&r8_128);
        *reinterpret_cast<signed char*>(&r8_128) = tmp8_159;
    }
    __asm__("rcl rbx, 1");
    *reinterpret_cast<unsigned char*>(&rcx147) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(cl153 & 15) & 15);
    __asm__("shld di, r9w, cl");
    *reinterpret_cast<uint32_t*>(&r10_160) = *reinterpret_cast<uint32_t*>(&r10_151) >> 24 | *reinterpret_cast<uint32_t*>(&r10_151) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&r10_151) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&r10_151) << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_160) + 4) = 0;
    rcx161 = rcx147 + rsi135 + 1;
    __asm__("cdq ");
    __asm__("bts di, r15w");
    cx162 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx161) + 0x2bea) + 1);
    __asm__("bts r8, 0x35");
    cf163 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx157) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx157) + 1)))) < *reinterpret_cast<unsigned char*>(&rdx157));
    cf164 = reinterpret_cast<uint1_t>(cx162 < reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax158) + cf163));
    *reinterpret_cast<uint16_t*>(&rcx161) = reinterpret_cast<uint16_t>(cx162 - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax158) + cf164));
    if (*reinterpret_cast<int16_t*>(&rcx161) < reinterpret_cast<int16_t>(static_cast<uint32_t>(cf164))) {
        *reinterpret_cast<uint16_t*>(&r9_155) = *reinterpret_cast<uint16_t*>(&r14_115);
    }
    __asm__("rol r8b, 0x8d");
    __asm__("rol r15w, cl");
    __asm__("shrd ebx, esi, cl");
    rbp165 = *reinterpret_cast<int32_t*>(&r8_128);
    __asm__("shrd r10, rbp, cl");
    *reinterpret_cast<uint16_t*>(&r10_160) = *reinterpret_cast<unsigned char*>(&r13_111);
    __asm__("bts r12d, 0x13");
    *reinterpret_cast<uint32_t*>(&r12_166) = r12d156 >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_166) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r15_132) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_132) + 0x715e)));
    *reinterpret_cast<signed char*>(&r9_155) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r9_155) >> -47);
    __asm__("btr ebx, r9d");
    r12_167 = rcx161;
    rcx168 = r12_166;
    __asm__("bsf r8, r13");
    *reinterpret_cast<signed char*>(&rcx168) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rcx168) + 1);
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&rcx168) < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&rcx168) == 0)) {
    }
    *reinterpret_cast<signed char*>(&rbp165) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbp165) - 1);
    __asm__("rcr r14b, 1");
    r11_169 = reinterpret_cast<uint64_t>(r11_146 + 0x17c90fe4) ^ 0xffffffffbdb12441;
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r11_169) = *reinterpret_cast<int16_t*>(&r12_167);
    }
    if (!__intrinsic()) {
    }
    __asm__("shld r9d, r10d, 0xe");
    r15_170 = r15_132 - (0x7338782e + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r15_132 < 0x7338782f)));
    *reinterpret_cast<unsigned char*>(&r13_111) = 0;
    *reinterpret_cast<unsigned char*>(&r10_160) = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rsi135 & 0xffffffffc0278201) < reinterpret_cast<int64_t>(0))));
    __asm__("btr r14w, 0x9e");
    *reinterpret_cast<uint16_t*>(&rcx168) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx168) - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rsi135) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rcx168) < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rsi135) + reinterpret_cast<uint1_t>(r13_111 < 0x4e669cc4)))));
    tmp32_171 = *reinterpret_cast<uint32_t*>(&rcx168) + *reinterpret_cast<uint32_t*>(&rax158);
    *reinterpret_cast<uint32_t*>(&rcx172) = tmp32_171;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx172) + 4) = 0;
    __asm__("shrd bx, di, 0x7");
    __asm__("bts rax, 0x34");
    __asm__("cdq ");
    if (tmp32_171 >= *reinterpret_cast<uint32_t*>(&rcx168)) {
        *reinterpret_cast<uint32_t*>(&rax158) = 0;
    }
    r13_173 = *reinterpret_cast<unsigned char*>(&r12_167);
    *reinterpret_cast<uint32_t*>(&r11_174) = *reinterpret_cast<uint32_t*>(&r11_169) | *reinterpret_cast<uint32_t*>(&r13_173);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_174) + 4) = 0;
    if (!__undefined()) {
        r15_170 = r9_155;
    }
    *reinterpret_cast<signed char*>(&r11_174) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&r11_174));
    __asm__("rcr r13W, cl");
    *reinterpret_cast<uint32_t*>(&rbx175) = *reinterpret_cast<uint32_t*>(&r11_174);
    r13_176 = *reinterpret_cast<int16_t*>(&r14_115);
    r9w177 = reinterpret_cast<int16_t>(~*reinterpret_cast<uint16_t*>(&r9_155));
    __asm__("rol bx, 1");
    cx178 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx172) - reinterpret_cast<uint16_t>(0x4550 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rcx172) < 0xbab0)));
    __asm__("rcr edx, 1");
    __asm__("xadd rsi, r11");
    *reinterpret_cast<uint16_t*>(&r13_176) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_176) ^ *reinterpret_cast<uint16_t*>(&rax158));
    *reinterpret_cast<uint32_t*>(&r14_179) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_115) >> 0x66) ^ 0xb83e0c28;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_179) + 4) = 0;
    edi180 = *reinterpret_cast<int32_t*>(&rbp165) * 0xcdf8a4e9;
    __asm__("rcr r8, 1");
    *reinterpret_cast<uint16_t*>(&rcx172) = reinterpret_cast<uint16_t>(cx178 - reinterpret_cast<uint16_t>(0x1f6a - reinterpret_cast<uint1_t>(cx178 < 0xe097)));
    rcx181 = rcx172 - 0x6e87bde2;
    __asm__("bsf dx, r14w");
    *reinterpret_cast<signed char*>(&edi180) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&edi180) << 1);
    *reinterpret_cast<uint32_t*>(&rsi182) = *reinterpret_cast<uint16_t*>(&r14_179);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi182) + 4) = 0;
    __asm__("bsr r11w, di");
    *reinterpret_cast<int16_t*>(&rbp165) = *reinterpret_cast<signed char*>(&r10_160);
    if (*reinterpret_cast<int32_t*>(&rbp165) == *reinterpret_cast<int32_t*>(&r15_170)) {
        *reinterpret_cast<int32_t*>(&rbp165) = *reinterpret_cast<int32_t*>(&r15_170);
    }
    *reinterpret_cast<unsigned char*>(&r14_179) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_179) >> 51);
    r10_183 = r10_160 - 1;
    bx184 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx175) >> *reinterpret_cast<signed char*>(&rcx181));
    *reinterpret_cast<int16_t*>(&rbp165) = *reinterpret_cast<signed char*>(&r9w177);
    rsi185 = rsi182 << 1;
    __asm__("bsf rsi, r8");
    if (1) {
        *reinterpret_cast<uint32_t*>(&r10_183) = *reinterpret_cast<uint32_t*>(&rsi185);
    }
    __asm__("bts r15d, ebx");
    __asm__("rcr r8d, 1");
    __asm__("rol ebp, 1");
    *reinterpret_cast<uint32_t*>(&rsi186) = *reinterpret_cast<uint32_t*>(&rsi185) & 0x5d4f3ffa;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi186) + 4) = 0;
    __asm__("btr rax, rcx");
    *reinterpret_cast<int32_t*>(&r8_187) = 0x81c02874;
    __asm__("shrd rbx, r14, 0x1");
    __asm__("btc ebp, 0x5e");
    __asm__("rcl sil, 1");
    *reinterpret_cast<uint16_t*>(&r9_155) = reinterpret_cast<uint16_t>(-r9w177);
    __asm__("rcl r8, 1");
    r15_188 = *reinterpret_cast<int32_t*>(&rbp165);
    tmp8_189 = *reinterpret_cast<signed char*>(&bx184);
    *reinterpret_cast<signed char*>(&bx184) = *reinterpret_cast<signed char*>(&r11_174);
    *reinterpret_cast<signed char*>(&r11_174) = tmp8_189;
    *reinterpret_cast<int32_t*>(&rdi190) = edi180 * 0x45613a4f;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi190) + 4) = 0;
    r11_191 = r11_174 + rdi190 + static_cast<uint64_t>(__intrinsic());
    __asm__("rcr r11, 0xd8");
    dx192 = __intrinsic();
    *reinterpret_cast<unsigned char*>(&r11_191) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_191) - reinterpret_cast<unsigned char>(75 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r11_191) < 0xb5)));
    __asm__("rcr r13W, 1");
    less193 = *reinterpret_cast<int16_t*>(&r14_179) < reinterpret_cast<int16_t>(0x6f7c);
    *reinterpret_cast<uint16_t*>(&r14_179) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_179) - reinterpret_cast<uint16_t>(0x6f7b + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r14_179) < 0x6f7c)));
    if (less193) {
        bx184 = *reinterpret_cast<uint16_t*>(&r10_183);
    }
    __asm__("ror r12d, cl");
    r15d194 = *reinterpret_cast<uint32_t*>(&r15_188) ^ 0xe67a52e9;
    *reinterpret_cast<uint16_t*>(&rbx175) = reinterpret_cast<uint16_t>(bx184 - reinterpret_cast<uint16_t>(0x10de + reinterpret_cast<uint1_t>(bx184 < 0x10de)));
    *reinterpret_cast<unsigned char*>(&r14_179) = 0;
    eax195 = *reinterpret_cast<uint32_t*>(&rbx175) * 0x192ee299;
    __asm__("rcr r13W, cl");
    rbp196 = *reinterpret_cast<int32_t*>(&rdi190);
    rdi197 = 0;
    *reinterpret_cast<unsigned char*>(&r13_176) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&dx192) + 1) > *reinterpret_cast<signed char*>(&rbx175));
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax195) + 1) = *reinterpret_cast<signed char*>(&dx192);
    __asm__("rcl r15d, 1");
    __asm__("bts edx, eax");
    __asm__("shrd rdi, r9, 0x46");
    *reinterpret_cast<uint16_t*>(&r15d194) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15d194) | 0xc000);
    dx198 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax195) % *reinterpret_cast<uint16_t*>(&r15d194));
    *reinterpret_cast<int16_t*>(&rsi186) = reinterpret_cast<int16_t>(-*reinterpret_cast<int16_t*>(&rsi186) >> 72);
    rsi199 = rsi186 + 0x5a4ddc75 + static_cast<uint64_t>(__intrinsic());
    if (*reinterpret_cast<int32_t*>(&r11_191) < reinterpret_cast<int32_t>(r15d194)) {
        r11_191 = 0x81c02874;
    }
    *reinterpret_cast<int16_t*>(&r8_187) = 0;
    *reinterpret_cast<uint16_t*>(&r11_191) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_191) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi199) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r11_191) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rsi199))))));
    *reinterpret_cast<unsigned char*>(&rdi197) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&dx198) < 1);
    *reinterpret_cast<int16_t*>(&r12_200) = *reinterpret_cast<int16_t*>(&rbp196);
    __asm__("rcl sil, cl");
    if (*reinterpret_cast<signed char*>(&rsi199) == *reinterpret_cast<signed char*>(&r15d194)) {
        tmp8_201 = *reinterpret_cast<signed char*>(&rsi199);
        *reinterpret_cast<signed char*>(&rsi199) = *reinterpret_cast<signed char*>(&r15d194);
        *reinterpret_cast<signed char*>(&r15d194) = tmp8_201;
    }
    tmp8_202 = *reinterpret_cast<signed char*>(&r12_200);
    *reinterpret_cast<signed char*>(&r8_187) = tmp8_202;
    __asm__("ror r11b, 1");
    __asm__("btc r9, 0xfe");
    rdi203 = rdi197 - 1;
    *reinterpret_cast<int32_t*>(&rbp204) = 0xe96ca8ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp204) + 4) = 0;
    __asm__("rcl r13d, 1");
    bx205 = 0;
    __asm__("btr r13, 0xef");
    __asm__("btc edx, edi");
    eax206 = *reinterpret_cast<int32_t*>(&r8_187);
    __asm__("btr r11d, r13d");
    if (reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&bx205) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&bx205) + 1)) + 1) {
    }
    __asm__("rcl rbx, 1");
    __asm__("rol rax, cl");
    rbx207 = eax206;
    __asm__("shrd rsi, rdi, 0x1");
    __asm__("shrd rdx, r8, 0x58");
    less_or_equal208 = *reinterpret_cast<int16_t*>(&rdi203) <= 0xe9d8;
    if (less_or_equal208) {
    }
    *reinterpret_cast<int16_t*>(&rbp204) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&dx198) + 1);
    ax209 = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&eax206) * *reinterpret_cast<uint16_t*>(&r11_191));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx207) + 1) = 0;
    ecx210 = *reinterpret_cast<int32_t*>(&rbp204) + 0x38b89b32;
    rbp211 = rbp204 ^ 0x3bca0678;
    *reinterpret_cast<int16_t*>(&eax206) = reinterpret_cast<int16_t>(-ax209);
    *reinterpret_cast<uint16_t*>(&rbx207) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx207) - 0x7714) + reinterpret_cast<uint1_t>(!!ax209));
    __asm__("rcr si, 1");
    __asm__("rcr rdi, cl");
    __asm__("btc r14w, bx");
    r8_212 = 0x9526125523b50b52;
    rdi213 = r11_191;
    __asm__("rcr r11w, 1");
    __asm__("shrd r14d, edi, 0x1");
    __asm__("bts dx, 0x92");
    __asm__("rcl r10d, 1");
    *reinterpret_cast<signed char*>(&r10_183) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r10_183) + *reinterpret_cast<signed char*>(&r9_155));
    __asm__("rcr eax, 1");
    __asm__("rcr r15, 1");
    __asm__("rcr rsi, 1");
    *reinterpret_cast<uint16_t*>(&r10_183) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_183) | 0xf6c4);
    *reinterpret_cast<uint32_t*>(&r15_214) = r15d194 >> 59;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_214) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rdi213) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rdi213) >> *reinterpret_cast<unsigned char*>(&ecx210));
    __asm__("bts rdi, rdi");
    __asm__("xadd dl, dh");
    *reinterpret_cast<unsigned char*>(&r11_191) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_191) + 1);
    __asm__("btc edx, 0x86");
    eax215 = eax206 * 0x23b50b52;
    __asm__("shld bx, r12w, cl");
    if (eax215 == *reinterpret_cast<uint32_t*>(&r10_183)) {
        tmp32_216 = eax215;
        eax215 = *reinterpret_cast<uint32_t*>(&r10_183);
        *reinterpret_cast<uint32_t*>(&r10_183) = tmp32_216;
    }
    __asm__("ror r8, 0x3f");
    *reinterpret_cast<uint16_t*>(&rbp211) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp211) + 0x924c);
    *reinterpret_cast<uint32_t*>(&r12_217) = *reinterpret_cast<uint32_t*>(&rdi213);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_217) + 4) = 0;
    __asm__("rcr r9w, 0xad");
    *reinterpret_cast<int16_t*>(&eax215) = reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax215) * *reinterpret_cast<uint16_t*>(&rbp211)) >> reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx210) & 15));
    *reinterpret_cast<signed char*>(&rbx207) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbx207) + *reinterpret_cast<signed char*>(&rbp211));
    ecx218 = *reinterpret_cast<unsigned char*>(&rdi213);
    *reinterpret_cast<uint32_t*>(&rax219) = eax215 * *reinterpret_cast<int32_t*>(&rbx207);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax219) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx220) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx220) + 4) = 0;
    rdx221 = rdx220 - (0x49c6bd03 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rdx220 < 0x49c6bd03 + static_cast<uint64_t>(static_cast<uint1_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_179) >> 38))))));
    __asm__("cwd ");
    __asm__("xadd bl, bh");
    __asm__("rcl bh, cl");
    __asm__("ror r15w, 1");
    *reinterpret_cast<uint32_t*>(&r13_222) = *reinterpret_cast<uint32_t*>(&r13_176) | *reinterpret_cast<uint32_t*>(&rax219);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_222) + 4) = 0;
    __asm__("rol dl, cl");
    esi223 = *reinterpret_cast<uint32_t*>(&r10_183) + *reinterpret_cast<uint32_t*>(&r14_179) + 1;
    *reinterpret_cast<int32_t*>(&r10_224) = *reinterpret_cast<int32_t*>(&rsi199) << 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_224) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx207) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx207) + 1) ^ *reinterpret_cast<unsigned char*>(&rdx221));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&dx225) + 1) = *reinterpret_cast<unsigned char*>(&rdx221);
    __asm__("shrd edi, r13d, cl");
    __asm__("btc eax, 0x7b");
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r11_191) = *reinterpret_cast<uint16_t*>(&r12_217);
    }
    __asm__("ror bpl, 1");
    ax226 = *reinterpret_cast<signed char*>(&rax219);
    r14_227 = reinterpret_cast<uint64_t>(r14_179 - 0x189009b2);
    *reinterpret_cast<uint16_t*>(&r15_214) = 0xb52;
    __asm__("shrd ax, bp, 0x1");
    __asm__("rol r12w, cl");
    if (*reinterpret_cast<unsigned char*>(&rdx221) == *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx218) + 1)) {
        tmp8_228 = *reinterpret_cast<unsigned char*>(&rdx221);
        *reinterpret_cast<unsigned char*>(&rdx221) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx218) + 1);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx218) + 1) = tmp8_228;
    }
    *reinterpret_cast<uint32_t*>(&r11_229) = *reinterpret_cast<uint32_t*>(&r11_191) >> 0x68;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_229) + 4) = 0;
    cf230 = reinterpret_cast<uint1_t>(0xb52 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r10_224))));
    *reinterpret_cast<uint16_t*>(&r8_212) = reinterpret_cast<uint16_t>(0xb52 - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_224) + cf230));
    if (reinterpret_cast<int16_t>(0xb52) < reinterpret_cast<int16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r10_224)))) {
        *reinterpret_cast<uint32_t*>(&r8_212) = *reinterpret_cast<uint32_t*>(&r12_217);
    }
    __asm__("btr r8d, ecx");
    *reinterpret_cast<signed char*>(&dx225) = *reinterpret_cast<signed char*>(&ax226);
    cf231 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax226) + 1) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&dx225) + cf230));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax232) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax226) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&dx225) + cf231));
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax232) + 1) == static_cast<uint32_t>(cf231)) {
        *reinterpret_cast<int32_t*>(&rbp211) = *reinterpret_cast<int32_t*>(&rbx207);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp211) + 4) = 0;
    }
    __asm__("rol edi, 0x86");
    __asm__("rol rdx, 0x5f");
    __asm__("ror r8d, 1");
    *reinterpret_cast<uint32_t*>(&r8_233) = *reinterpret_cast<uint32_t*>(&r8_212) - *reinterpret_cast<uint32_t*>(&r12_217);
    __asm__("ror rdi, 0x3c");
    cx234 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx218) ^ *reinterpret_cast<uint16_t*>(&rbx207));
    *reinterpret_cast<int32_t*>(&rcx235) = *reinterpret_cast<signed char*>(&r8_233);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx235) + 4) = 0;
    r13_236 = r13_222 << 1;
    *reinterpret_cast<unsigned char*>(&ax232) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx221) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx235) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdx221) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx235) + static_cast<uint1_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(dx225 << *reinterpret_cast<unsigned char*>(&cx234)) >> -99))))));
    ax237 = reinterpret_cast<int16_t>(ax232 * *reinterpret_cast<int16_t*>(&esi223));
    *reinterpret_cast<int16_t*>(&rdx221) = __intrinsic();
    __asm__("xadd r15, r9");
    if (__intrinsic()) {
        ax237 = *reinterpret_cast<int16_t*>(&r14_227);
    }
    __asm__("shrd cx, r9w, 0x1");
    *reinterpret_cast<int32_t*>(&r14_238) = *reinterpret_cast<int32_t*>(&r13_236);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_238) + 4) = 0;
    __asm__("ror r8b, 0xc9");
    r15_239 = (r15_214 << 1) + 0x55f877c;
    *reinterpret_cast<signed char*>(&rbp211) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbp211) - *reinterpret_cast<signed char*>(&r12_217));
    __asm__("btr rax, r15");
    __asm__("btr rax, 0xe2");
    r12_240 = r12_217 + r13_236;
    *reinterpret_cast<int16_t*>(&rcx235) = -*reinterpret_cast<int16_t*>(&rcx235);
    __asm__("rcr r10w, 0x94");
    __asm__("rol r14d, cl");
    __asm__("btc r9w, 0xf4");
    *reinterpret_cast<uint32_t*>(&r8_241) = *reinterpret_cast<unsigned char*>(&rcx235);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_241) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r11_229) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(~reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_229) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r15_239) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r11_229) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r15_239) + 1))))) + 1);
    __asm__("shld edi, r11d, 0x32");
    __asm__("btc r10d, 0xfc");
    __asm__("shrd rdi, r11, cl");
    *reinterpret_cast<uint32_t*>(&rsi242) = (esi223 - *reinterpret_cast<int32_t*>(&r14_238) ^ 0x31dfa813) >> 10;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi242) + 4) = 0;
    __asm__("bsf eax, esi");
    __asm__("rcl ax, cl");
    *reinterpret_cast<int16_t*>(&rax219) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax237) * *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx207) + 1));
    r13w243 = reinterpret_cast<uint16_t>(0xdc42 ^ *reinterpret_cast<uint16_t*>(&r11_229));
    __asm__("shld r13W, bp, 0x2");
    __asm__("bts r10d, 0x67");
    __asm__("ror rcx, 1");
    *reinterpret_cast<int16_t*>(&rsi242) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rsi242) >> -15);
    *reinterpret_cast<uint16_t*>(&r9_155) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rbp211)));
    if (*reinterpret_cast<uint16_t*>(&r9_155)) {
        r8_241 = r11_229;
    }
    __asm__("shrd ax, r9w, 0x1");
    __asm__("btr r15w, r13W");
    __asm__("btr r10d, 0xd8");
    *reinterpret_cast<uint16_t*>(&r12_240) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_240) & 0xdfc3);
    *reinterpret_cast<unsigned char*>(&rcx235) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx235) & 98);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx207) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx207) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx207) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx207) + 1) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx207) + 1))))));
    __asm__("bts si, r14w");
    *reinterpret_cast<uint32_t*>(&r13_244) = *reinterpret_cast<unsigned char*>(&r13w243);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_244) + 4) = 0;
    __asm__("rcl r9d, 1");
    __asm__("shrd rdi, r12, 0xd8");
    tmp8_245 = *reinterpret_cast<unsigned char*>(&rdx221);
    *reinterpret_cast<unsigned char*>(&rdx221) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax219) + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax219) + 1) = tmp8_245;
    return rax219 + rbx207 + rcx235 + rdx221 + rbp211 + (rsi242 - (0x173ccdff + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rsi242 < 0x173ccdff)))) + (r13_236 - (rbp211 + reinterpret_cast<uint1_t>(r13_236 < rbp211))) + r8_241 + r9_155 + r10_224 + r11_229 + r12_240 + r13_244 + r14_238 + r15_239 - 0x5b65c30507ec9130;
}

uint64_t log_size_10_var_005(int64_t rdi, int64_t rsi) {
    uint64_t rbx3;
    int64_t rsi4;
    uint64_t r10_5;
    uint64_t r12_6;
    uint64_t r15_7;
    int64_t r9_8;
    uint64_t rdi9;
    int64_t r8_10;
    int64_t rsi11;
    uint64_t rax12;
    uint32_t edi13;
    uint64_t rbp14;
    uint64_t r11_15;
    uint64_t r15_16;
    uint64_t rdx17;
    uint16_t r15w18;
    uint64_t r8_19;
    uint16_t ax20;
    int64_t rdi21;
    int64_t rcx22;
    uint32_t r11d23;
    uint64_t r14_24;
    unsigned char cl25;
    signed char tmp8_26;
    unsigned char r11b27;
    int64_t rax28;
    uint64_t r8_29;
    uint64_t tmp64_30;
    uint1_t cf31;
    uint64_t r12_32;
    uint1_t cf33;
    uint64_t r9_34;
    uint64_t rax35;
    int16_t bp36;
    int64_t rdi37;
    uint16_t r12w38;
    uint64_t rax39;
    uint64_t rdx40;
    uint64_t rcx41;
    uint64_t rbp42;
    uint1_t cf43;
    uint64_t rbp44;
    uint32_t ebp45;
    int64_t r15_46;
    uint32_t r13d47;
    uint64_t r9_48;
    uint64_t rdx49;
    int64_t r15_50;
    uint1_t zf51;
    int16_t tmp16_52;
    unsigned char tmp8_53;
    uint1_t cf54;
    uint64_t r14_55;
    uint64_t rax56;
    uint64_t rbx57;
    uint64_t rbp58;
    uint32_t r13d59;
    uint64_t rdx60;
    uint16_t r15w61;
    uint64_t r8_62;
    uint64_t r11_63;
    uint64_t rbp64;
    uint64_t rbx65;
    uint1_t cf66;
    uint64_t rax67;
    uint64_t r8_68;
    int64_t rsi69;
    uint64_t rdx70;
    uint64_t r10_71;
    int64_t rax72;
    unsigned char tmp8_73;
    int64_t r14_74;
    int64_t rdx75;
    uint64_t rdi76;
    int64_t r15_77;
    unsigned char dl78;
    int64_t r9_79;
    uint16_t ax80;
    uint32_t ecx81;
    uint16_t ax82;
    uint16_t ax83;
    uint64_t r11_84;
    uint32_t r9d85;
    uint32_t r14d86;
    uint32_t ebp87;
    uint32_t r15d88;
    uint32_t esi89;
    int64_t r14_90;
    uint32_t tmp32_91;
    uint32_t r15d92;
    unsigned char tmp8_93;
    int1_t cf94;
    uint32_t ecx95;
    uint16_t ax96;
    uint16_t si97;
    int1_t below_or_equal98;
    int64_t rax99;
    uint64_t rsi100;
    uint32_t r13d101;
    uint64_t r8_102;
    uint64_t rax103;
    uint64_t rsi104;
    uint32_t ecx105;
    int64_t r14_106;
    uint64_t rbp107;
    uint16_t tmp16_108;
    uint1_t cf109;
    unsigned char al110;
    unsigned char tmp8_111;
    uint64_t rax112;
    uint64_t r14_113;
    uint64_t rbp114;
    uint32_t tmp32_115;
    uint1_t less_or_equal116;
    uint64_t r10_117;
    uint64_t r9_118;
    int64_t rdi119;
    uint64_t rcx120;
    signed char tmp8_121;
    int64_t r13_122;
    uint64_t tmp64_123;
    uint64_t tmp64_124;
    uint64_t rax125;
    int64_t r15_126;
    uint32_t ebx127;
    int64_t rbx128;
    int64_t rbx129;
    uint64_t r12_130;
    int64_t rdx131;
    uint64_t rcx132;
    uint64_t r9_133;
    uint64_t rsi134;
    uint64_t rcx135;
    int64_t rdx136;
    int64_t r14_137;
    int64_t r14_138;
    int32_t r15d139;
    uint64_t rbp140;
    int64_t rdx141;
    int64_t r8_142;
    uint32_t edi143;
    uint32_t ecx144;
    uint16_t cx145;
    unsigned char bl146;
    uint64_t r12_147;
    int32_t eax148;
    uint64_t rdx149;
    uint64_t r14_150;
    uint64_t r15_151;
    uint32_t esi152;
    uint64_t r10_153;
    uint16_t tmp16_154;
    uint64_t rcx155;
    unsigned char tmp8_156;
    uint1_t cf157;
    int64_t rax158;
    uint1_t zf159;
    uint1_t less160;
    uint16_t tmp16_161;
    uint16_t ax162;
    uint64_t r9_163;
    int64_t r8_164;
    uint64_t rcx165;
    uint64_t r12_166;
    uint32_t edi167;
    uint64_t r13_168;
    uint32_t edx169;
    int64_t rsi170;
    unsigned char tmp8_171;
    uint1_t cf172;
    unsigned char tmp8_173;
    uint1_t cf174;
    int64_t rsi175;
    uint32_t ebx176;
    int1_t below_or_equal177;
    int64_t rdi178;
    int64_t r10_179;
    int64_t rax180;
    uint64_t r15_181;
    uint64_t rbp182;
    uint64_t r8_183;
    uint64_t rdx184;
    int64_t r11_185;
    int64_t r11_186;
    int1_t zf187;
    unsigned char tmp8_188;
    uint1_t cf189;
    uint64_t r13_190;
    uint64_t rbp191;
    int64_t rax192;
    int64_t r9_193;
    uint64_t r8_194;
    int64_t rdi195;
    int64_t r10_196;
    int64_t rdi197;
    int64_t r13_198;
    uint64_t r11_199;
    uint64_t rcx200;
    uint64_t r11_201;
    int64_t r11_202;
    int64_t r9_203;
    int64_t rbx204;
    uint64_t rax205;
    uint64_t rdx206;
    uint64_t rbp207;
    uint64_t tmp64_208;
    uint64_t tmp64_209;
    uint64_t rdx210;
    uint64_t r13_211;
    uint64_t rcx212;
    int64_t r12_213;
    int64_t rdx214;
    uint16_t tmp16_215;
    uint64_t r15_216;
    uint64_t rax217;
    uint64_t r12_218;
    uint64_t rax219;
    uint64_t rcx220;
    uint64_t r12_221;
    int64_t r15_222;
    uint64_t rbp223;
    uint32_t eax224;
    uint32_t tmp32_225;
    int64_t rcx226;
    uint64_t tmp64_227;
    uint64_t r12_228;
    uint64_t tmp64_229;
    uint64_t tmp64_230;
    uint64_t r8_231;
    uint64_t rdi232;
    int64_t r10_233;
    unsigned char cl234;
    int64_t rsi235;
    int16_t dx236;
    uint32_t r14d237;
    int64_t rbx238;
    int64_t r12_239;
    unsigned char tmp8_240;
    uint1_t cf241;
    uint64_t rbp242;
    uint64_t rdx243;
    int64_t r9_244;
    uint64_t r15_245;
    int64_t r8_246;
    int64_t rbx247;
    int64_t rbp248;
    int64_t rax249;
    int64_t r11_250;
    uint64_t rsi251;
    unsigned char tmp8_252;
    uint1_t cf253;
    uint32_t tmp32_254;
    int64_t rbp255;
    int64_t rdi256;
    unsigned char tmp8_257;
    int64_t rdx258;
    int64_t r11_259;
    int64_t r15_260;

    rbx3 = 0x3c95a24209b4ef92;
    rsi4 = 0x88fc71eaad09b28e;
    r10_5 = 0xf129c7c7e6a1cd25;
    r12_6 = 0x20795d36c9ea5a07;
    r15_7 = 0xcc0199130fe3410c;
    *reinterpret_cast<unsigned char*>(&r15_7) = reinterpret_cast<unsigned char>(12 >> -23);
    __asm__("shld ebx, r14d, 0x1");
    if (__undefined() == __intrinsic()) {
        *reinterpret_cast<int16_t*>(&rsi4) = 0xadd2;
    }
    __asm__("rol r12b, cl");
    __asm__("btc r12, rdi");
    __asm__("rol r9d, 0x3b");
    *reinterpret_cast<int32_t*>(&r9_8) = *reinterpret_cast<int32_t*>(&r15_7) * 0x4eb5d1ad >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_8) + 4) = 0;
    rdi9 = 0x1d331723d70f8f2b + static_cast<uint64_t>(__intrinsic());
    __asm__("rcr r12, 1");
    r8_10 = 0xce664806731038bc;
    if (0) {
    }
    __asm__("shld r14, r11, 0x1");
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(__intrinsic())))) {
        *reinterpret_cast<int32_t*>(&r9_8) = 0x9b4ce92;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_8) + 4) = 0;
    }
    __asm__("rol sil, 1");
    __asm__("rcr r13, 1");
    *reinterpret_cast<uint16_t*>(&r8_10) = reinterpret_cast<uint16_t>(0x38bc - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_8) + reinterpret_cast<uint1_t>(0x38bc < reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_8) + 1))));
    __asm__("cwd ");
    __asm__("shrd ecx, r12d, cl");
    rsi11 = rsi4 >> 1;
    rax12 = 0xffffffc4 - (0xf129c7c7e6a1cd4a + reinterpret_cast<uint1_t>(0xffffffc4 < 0xf129c7c7e6a1cd4a + __intrinsic()));
    edi13 = *reinterpret_cast<uint32_t*>(&rdi9) ^ 0xd6f37742;
    *reinterpret_cast<int32_t*>(&rbp14) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp14) + 4) = 0;
    __asm__("ror rdi, 1");
    r11_15 = 0xffffbfc4 >> 86;
    r15_16 = (((((r15_7 & 0xffffffff) << 32 | 0xcc019913) & 0xffff0000ffff) << 16 | 0xfe30000cc01) & 0xff00ff00ff00ff) << 8 | 0x41000f009900cc;
    __asm__("shld esi, r8d, 0x3b");
    rdx17 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rsi11) + *reinterpret_cast<int32_t*>(&rax12) * 4);
    r15w18 = reinterpret_cast<uint16_t>(0x1cc >> 63);
    __asm__("bts r10, 0x42");
    __asm__("ror r8w, 1");
    r8_19 = r8_10 - 0xf129c7c7e6a10000;
    ax20 = 0;
    if (!r8_19) {
        rbp14 = r8_19;
        r8_19 = 0;
    }
    __asm__("rcr r11b, cl");
    __asm__("bts r10, 0x1c");
    if (*reinterpret_cast<int16_t*>(&edi13) == *reinterpret_cast<int16_t*>(&rsi11)) {
        *reinterpret_cast<int16_t*>(&edi13) = *reinterpret_cast<int16_t*>(&rsi11);
    }
    __asm__("rcr edx, 1");
    __asm__("rcl ebx, 0xec");
    __asm__("shrd r8, r12, 0xe9");
    *reinterpret_cast<int32_t*>(&rdi21) = reinterpret_cast<int32_t>(edi13) >> 0x6c;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi21) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rcx22) = 0x192d83d4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = 0;
    __asm__("rol dx, cl");
    if (1) {
        *reinterpret_cast<int32_t*>(&rbp14) = 0x9b4ce92;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp14) + 4) = 0;
    }
    r11d23 = *reinterpret_cast<uint32_t*>(&r11_15) ^ 0x99d4bfc4;
    r14_24 = 0xfecbfb9b2a3053e4;
    *reinterpret_cast<signed char*>(&r12_6) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&rdx17));
    __asm__("rol r10b, 1");
    __asm__("ror ebx, 1");
    *reinterpret_cast<uint16_t*>(&r14_24) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(0x53e4 + *reinterpret_cast<uint16_t*>(&r9_8))));
    __asm__("bts r14w, 0xe3");
    *reinterpret_cast<int16_t*>(&r12_6) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r12_6) << static_cast<unsigned char>(reinterpret_cast<uint1_t>(0xd4 >= reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax20) + 1) & 0xce))));
    if (reinterpret_cast<int64_t>(rdx17 & 0x8b03304) < reinterpret_cast<int64_t>(0)) {
        rbp14 = rdx17;
    }
    cl25 = reinterpret_cast<uint1_t>((rdx17 & 0x8b03304) == 0);
    __asm__("shrd ax, r13W, 0x1");
    if (1) {
    }
    tmp8_26 = *reinterpret_cast<signed char*>(&rdx17);
    *reinterpret_cast<signed char*>(&rdx17) = *reinterpret_cast<signed char*>(&rbp14);
    *reinterpret_cast<signed char*>(&rbp14) = tmp8_26;
    __asm__("shld bx, r13W, 0xd");
    __asm__("ror r8, 0x2f");
    __asm__("rcr r8w, 1");
    if (1) {
        *reinterpret_cast<uint16_t*>(&r14_24) = *reinterpret_cast<uint16_t*>(&r11d23);
    }
    __asm__("ror r15b, 0x2a");
    *reinterpret_cast<uint16_t*>(&r15_16) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(r15w18 - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_8) + reinterpret_cast<uint1_t>(r15w18 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r9_8)))))) * 0x1bc3);
    __asm__("rcr bx, 1");
    *reinterpret_cast<int16_t*>(&rdi21) = -1;
    r11b27 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r11d23) >> -68);
    *reinterpret_cast<int32_t*>(&rax28) = static_cast<int32_t>(0x2acf + rbp14 * 8 + 0x6cf29f26);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = 0;
    *reinterpret_cast<signed char*>(&rax28) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx22) + 1) + 1);
    __asm__("rcl r13b, 1");
    *reinterpret_cast<uint32_t*>(&r8_29) = *reinterpret_cast<uint32_t*>(&r8_19) | 0xfba4750e;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_29) + 4) = 0;
    tmp64_30 = r12_6 + 0x29f23aee + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r15_16) < 0x3f0ee4fa);
    cf31 = reinterpret_cast<uint1_t>(tmp64_30 < r12_6);
    r12_32 = tmp64_30;
    cf33 = reinterpret_cast<uint1_t>(0 < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rdx17) + cf31));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx3) + 1) = reinterpret_cast<unsigned char>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rdx17) + cf33)));
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx3) + 1) >= reinterpret_cast<signed char>(static_cast<uint32_t>(cf33))) {
        *reinterpret_cast<uint16_t*>(&r9_8) = *reinterpret_cast<uint16_t*>(&rdx17);
    }
    if (reinterpret_cast<signed char>(0) < reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rdx17) + cf31)) {
        rax28 = 0x2acf;
    }
    *reinterpret_cast<int16_t*>(&rcx22) = *reinterpret_cast<signed char*>(&rdx17);
    *reinterpret_cast<unsigned char*>(&r11d23) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r11b27 - reinterpret_cast<unsigned char>(cl25 + reinterpret_cast<uint1_t>(r11b27 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(cl25))))) | *reinterpret_cast<unsigned char*>(&r14_24));
    __asm__("rcl r15d, 1");
    r9_34 = r9_8 - 0x118c027a + 1;
    if (!*reinterpret_cast<unsigned char*>(&rcx22)) {
        *reinterpret_cast<unsigned char*>(&rcx22) = 0;
    }
    rax35 = rax28 + 0x77ddffad + static_cast<uint64_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rbp14) < 0));
    __asm__("rol rdx, 0xb5");
    if (rcx22 == rcx22) {
        rcx22 = rcx22;
    }
    __asm__("rcl rbp, 1");
    bp36 = reinterpret_cast<int16_t>(~reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rbp14))));
    rdi37 = ~rdi21;
    __asm__("bsr rdx, rbp");
    __asm__("rol ecx, 0xa");
    *reinterpret_cast<unsigned char*>(&rbx3) = reinterpret_cast<unsigned char>(cl25 + 1);
    __asm__("rcr r13d, 1");
    r12w38 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_32) - *reinterpret_cast<uint16_t*>(&rdx17)) >> -82);
    __asm__("bts r10d, 0x8d");
    __asm__("rcr esi, 1");
    *reinterpret_cast<uint32_t*>(&rax39) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rax35) * *reinterpret_cast<int32_t*>(&r14_24));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax39) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx40) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx40) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rcx41) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx22) >> *reinterpret_cast<unsigned char*>(&rcx22));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx41) + 4) = 0;
    __asm__("bsf r13, r15");
    *reinterpret_cast<unsigned char*>(&rcx41) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx41) & 15);
    __asm__("shld ax, ax, cl");
    __asm__("rol bx, cl");
    __asm__("rol r8w, 0xde");
    __asm__("btr edx, r15d");
    *reinterpret_cast<int16_t*>(&r10_5) = *reinterpret_cast<signed char*>(&bp36);
    *reinterpret_cast<int32_t*>(&rbp42) = *reinterpret_cast<int32_t*>(&r9_34);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp42) + 4) = 0;
    cf43 = reinterpret_cast<uint1_t>(rbp42 < r10_5);
    rbp44 = rbp42 - (r10_5 + cf43);
    *reinterpret_cast<unsigned char*>(&r8_29) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_29) + *reinterpret_cast<unsigned char*>(&r14_24)) + cf43);
    __asm__("rol r12d, 1");
    __asm__("shrd r12, r13, 0x73");
    ebp45 = *reinterpret_cast<uint32_t*>(&rbp44) >> 24 | *reinterpret_cast<uint32_t*>(&rbp44) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&rbp44) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&rbp44) << 24;
    r15_46 = 0;
    r13d47 = *reinterpret_cast<uint32_t*>(&r10_5) * 0x5d805e20;
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rax39) = *reinterpret_cast<uint32_t*>(&r10_5);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax39) + 4) = 0;
    }
    __asm__("rcl rdx, 1");
    r9_48 = r9_34 ^ rbx3;
    rdx49 = rdx40 - (0x1b747bd0 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rdx40 < 0x1b747bd0)));
    __asm__("btc si, 0x6");
    *reinterpret_cast<signed char*>(&r12w38) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r12w38) + 1);
    __asm__("shld r14d, r11d, 0x1");
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&r12w38) < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&r12w38) == 0))) {
        *reinterpret_cast<uint32_t*>(&r10_5) = *reinterpret_cast<uint32_t*>(&r8_29);
    }
    __asm__("btc r9, 0xde");
    *reinterpret_cast<uint16_t*>(&r11d23) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11d23) - reinterpret_cast<uint16_t>(0x6d1 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r11d23) < 0xf930)));
    if (*reinterpret_cast<signed char*>(&rdx49) == *reinterpret_cast<signed char*>(&r10_5)) {
        *reinterpret_cast<signed char*>(&rdx49) = *reinterpret_cast<signed char*>(&r10_5);
    }
    if (*reinterpret_cast<signed char*>(&rdx49) == *reinterpret_cast<signed char*>(&rax39)) {
        *reinterpret_cast<signed char*>(&rax39) = *reinterpret_cast<signed char*>(&rdx49);
    }
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r15_46) = *reinterpret_cast<uint32_t*>(&r8_29);
    }
    __asm__("rcl r8w, 1");
    *reinterpret_cast<uint32_t*>(&r15_50) = *reinterpret_cast<uint32_t*>(&r15_46) - (ebp45 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r15_46) < ebp45 + __intrinsic()));
    zf51 = reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&ebp45) == *reinterpret_cast<int16_t*>(&r8_29));
    if (zf51) {
        tmp16_52 = *reinterpret_cast<int16_t*>(&ebp45);
        *reinterpret_cast<int16_t*>(&ebp45) = *reinterpret_cast<int16_t*>(&r8_29);
        *reinterpret_cast<int16_t*>(&r8_29) = tmp16_52;
    }
    if (!reinterpret_cast<uint1_t>(__intrinsic() | zf51)) {
        *reinterpret_cast<uint16_t*>(&r13d47) = r12w38;
    }
    tmp8_53 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13d47) - 0x7a) + 1);
    cf54 = reinterpret_cast<uint1_t>(tmp8_53 < *reinterpret_cast<unsigned char*>(&r13d47));
    *reinterpret_cast<unsigned char*>(&r13d47) = tmp8_53;
    *reinterpret_cast<uint16_t*>(&r12_32) = reinterpret_cast<uint16_t>(r12w38 - reinterpret_cast<uint16_t>(0x523 - reinterpret_cast<uint1_t>(r12w38 < reinterpret_cast<uint16_t>(0x523 - cf54))));
    if (reinterpret_cast<int16_t>(r12w38) <= reinterpret_cast<int16_t>(0x523 - cf54)) {
    }
    r14_55 = r14_24 ^ 0xffffffffdb2e5737;
    *reinterpret_cast<int16_t*>(&rax39) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax39) << 1);
    rax56 = rax39 ^ 0x131081c4;
    *reinterpret_cast<uint16_t*>(&r13d47) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13d47) & *reinterpret_cast<uint16_t*>(&r14_55));
    __asm__("bsf ax, si");
    *reinterpret_cast<uint32_t*>(&rbx57) = *reinterpret_cast<uint32_t*>(&r15_50) + *reinterpret_cast<uint32_t*>(&r12_32) * 2 + 0xc3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx57) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rdi37) = reinterpret_cast<unsigned char>(0 >> *reinterpret_cast<unsigned char*>(&rcx41));
    *reinterpret_cast<uint32_t*>(&rbp58) = ebp45 - (*reinterpret_cast<int32_t*>(&rax56) + reinterpret_cast<uint1_t>(ebp45 < *reinterpret_cast<int32_t*>(&rax56) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx41) < *reinterpret_cast<unsigned char*>(&rcx41))));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp58) + 4) = 0;
    r13d59 = r13d47 - (*reinterpret_cast<uint32_t*>(&r15_50) + reinterpret_cast<uint1_t>(r13d47 < *reinterpret_cast<uint32_t*>(&r15_50) + 1));
    rdx60 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<signed char*>(&r9_48)));
    *reinterpret_cast<unsigned char*>(&rax56) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax56) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx41) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rax56) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx41) + 1))));
    r15w61 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_50) | *reinterpret_cast<uint16_t*>(&r11d23));
    *reinterpret_cast<unsigned char*>(&r8_29) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_29) & *reinterpret_cast<unsigned char*>(&r13d59));
    __asm__("rcr rdi, 1");
    __asm__("shrd r9w, si, 0x1");
    __asm__("rcr eax, 1");
    r8_62 = r8_29 >> *reinterpret_cast<unsigned char*>(&rcx41);
    __asm__("shld r14, r11, cl");
    __asm__("ror r11b, 0xbb");
    __asm__("btc r10w, r14w");
    *reinterpret_cast<int16_t*>(&rcx41) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rcx41) >> *reinterpret_cast<unsigned char*>(&rcx41));
    __asm__("btr r12d, 0xb1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax56) + 1) = reinterpret_cast<unsigned char>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx57) + (0 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rbx57)))))));
    *reinterpret_cast<uint32_t*>(&r11_63) = r11d23 - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_63) + 4) = 0;
    rbp64 = rbp58 >> 6;
    rbx65 = rbx57 ^ 0x4ecec687;
    cf66 = reinterpret_cast<uint1_t>(rax56 < r11_63);
    rax67 = rax56 - (r11_63 + cf66);
    if (!cf66) {
        rax67 = rcx41;
    }
    r8_68 = r8_62 + 0xffffffffc82073f2;
    rsi69 = *reinterpret_cast<signed char*>(&r15w61);
    if (reinterpret_cast<int64_t>(r8_68) >= reinterpret_cast<int64_t>(0)) {
        *reinterpret_cast<uint16_t*>(&rdx60) = *reinterpret_cast<uint16_t*>(&r11_63);
    }
    *reinterpret_cast<unsigned char*>(&r11_63) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_63) + 0x71);
    rdx70 = rdx60 >> *reinterpret_cast<unsigned char*>(&rcx41);
    *reinterpret_cast<uint16_t*>(&rbp64) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_63) * 0x6826);
    *reinterpret_cast<uint16_t*>(&r12_32) = reinterpret_cast<uint16_t>(static_cast<uint16_t>(*reinterpret_cast<unsigned char*>(&rdi37)) | *reinterpret_cast<uint16_t*>(&r11_63));
    if (0) {
        r12_32 = r11_63;
    }
    __asm__("rol rdi, 1");
    *reinterpret_cast<uint32_t*>(&r10_71) = *reinterpret_cast<unsigned char*>(&r15w61);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_71) + 4) = 0;
    rax72 = *reinterpret_cast<int32_t*>(&rax67);
    *reinterpret_cast<uint16_t*>(&r8_68) = r15w61;
    if (*reinterpret_cast<unsigned char*>(&r15w61) == *reinterpret_cast<unsigned char*>(&r12_32)) {
        tmp8_73 = *reinterpret_cast<unsigned char*>(&r15w61);
        *reinterpret_cast<unsigned char*>(&r12_32) = tmp8_73;
    }
    __asm__("shrd r13, rbp, 0x1c");
    __asm__("bsr dx, r9w");
    *reinterpret_cast<uint16_t*>(&rax72) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&rax72)));
    __asm__("shld r8d, ebx, 0x44");
    *reinterpret_cast<unsigned char*>(&rbx65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx65) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rsi69) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rbx65) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rsi69) + 1))));
    *reinterpret_cast<uint32_t*>(&r14_74) = *reinterpret_cast<uint32_t*>(&rbp64);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_74) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rdx75) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rdx70) + 0x2821be09 >> 0x71);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx75) + 4) = 0;
    rdi76 = rdi37 + r11_63 & r9_48;
    __asm__("rcl r12b, 1");
    __asm__("bsr r13d, r11d");
    r15_77 = 0;
    *reinterpret_cast<uint16_t*>(&rdx75) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx75) - 1);
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rsi69) = *reinterpret_cast<uint32_t*>(&r12_32);
    }
    dl78 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx75) & *reinterpret_cast<unsigned char*>(&r11_63));
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax72) + 1) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax72) + 1) + 24) - 1);
    __asm__("btc esi, ecx");
    *reinterpret_cast<unsigned char*>(&rdx75) = reinterpret_cast<unsigned char>(dl78 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx41) + reinterpret_cast<uint1_t>(dl78 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rcx41))))));
    __asm__("shld esi, ebp, 0x1");
    if (__intrinsic()) {
    }
    __asm__("rcr r9d, 1");
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rcx41) = *reinterpret_cast<uint32_t*>(&rax72);
    }
    r9_79 = rdx75;
    __asm__("bts r14w, 0xdb");
    *reinterpret_cast<uint16_t*>(&r10_71) = 0;
    *reinterpret_cast<unsigned char*>(&r12_32) = 39;
    ax80 = reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&rax72) * 39);
    __asm__("xadd esi, edi");
    ecx81 = *reinterpret_cast<uint32_t*>(&rcx41) | *reinterpret_cast<uint32_t*>(&rdx75);
    *reinterpret_cast<int16_t*>(&rsi69) = static_cast<int16_t>(r14_74 - 0x63927e62);
    if (0) {
        *reinterpret_cast<uint32_t*>(&rbx65) = *reinterpret_cast<uint32_t*>(&r11_63);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx65) + 4) = 0;
    }
    __asm__("rcr ebp, 1");
    __asm__("bsr dx, r9w");
    *reinterpret_cast<uint16_t*>(&r15_77) = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(0) >> *reinterpret_cast<unsigned char*>(&ecx81));
    *reinterpret_cast<unsigned char*>(&ax80) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ax80) | 0xc0);
    ax82 = reinterpret_cast<uint16_t>(ax80 & 0x3fff);
    ax83 = reinterpret_cast<uint16_t>(ax82 / static_cast<int16_t>(*reinterpret_cast<signed char*>(&ax82)));
    *reinterpret_cast<uint16_t*>(&rdx75) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(ax82 % *reinterpret_cast<signed char*>(&ax82))));
    *reinterpret_cast<uint32_t*>(&r11_84) = *reinterpret_cast<uint32_t*>(&r11_63) << *reinterpret_cast<unsigned char*>(&ecx81);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_84) + 4) = 0;
    __asm__("bts r11d, 0xf1");
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r12_32) = 0;
    }
    __asm__("rcr r8, 1");
    r9d85 = *reinterpret_cast<uint32_t*>(&r9_79) - (*reinterpret_cast<int32_t*>(&r15_77) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r9_79) < *reinterpret_cast<int32_t*>(&r15_77) + 1));
    *reinterpret_cast<uint16_t*>(&rbx65) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx65) + 1);
    r14d86 = -*reinterpret_cast<uint32_t*>(&r14_74);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx75) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx75) + 1) - reinterpret_cast<unsigned char>(1 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx75) + 1) < reinterpret_cast<unsigned char>(1 + reinterpret_cast<uint1_t>(!!*reinterpret_cast<uint32_t*>(&r14_74))))));
    __asm__("rcr cl, cl");
    *reinterpret_cast<int16_t*>(&rdi76) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rdi76) * 0x4ff4);
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r8_68) = ecx81;
    }
    ebp87 = *reinterpret_cast<uint32_t*>(&rbp64) >> 1;
    *reinterpret_cast<unsigned char*>(&r10_71) = 0xff;
    __asm__("rcl r10w, 0x3a");
    __asm__("ror r12b, 0x22");
    r15d88 = *reinterpret_cast<int32_t*>(&r15_77) - 0x9a07510f;
    __asm__("rcr r11b, 1");
    __asm__("rcr r9, 1");
    __asm__("bsf r11, r12");
    *reinterpret_cast<signed char*>(&rdi76) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&rdi76));
    esi89 = *reinterpret_cast<uint32_t*>(&rsi69) ^ 0x2b2f67f4;
    if (1) {
        r14d86 = r15d88;
    }
    *reinterpret_cast<uint16_t*>(&rax72) = reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&ax83) * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&r9d85))));
    *reinterpret_cast<int16_t*>(&rdi76) = static_cast<int16_t>(0xff + *reinterpret_cast<int32_t*>(&rdi76) - 0x39fc4ad6);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx65) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx65) + 1) - reinterpret_cast<unsigned char>(0x7d + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx65) + 1) < 0x7e)));
    *reinterpret_cast<uint16_t*>(&r11_84) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_84) ^ 0x61b6);
    __asm__("shrd r12, rax, cl");
    *reinterpret_cast<uint32_t*>(&r14_90) = r14d86 + *reinterpret_cast<uint32_t*>(&rax72) + 1;
    tmp32_91 = r15d88 + *reinterpret_cast<uint32_t*>(&rdx75);
    r15d92 = tmp32_91;
    tmp8_93 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&esi89) + *reinterpret_cast<signed char*>(&r14_90)) + reinterpret_cast<uint1_t>(tmp32_91 < r15d88));
    cf94 = tmp8_93 < *reinterpret_cast<unsigned char*>(&esi89);
    *reinterpret_cast<unsigned char*>(&esi89) = tmp8_93;
    if (!cf94) {
        *reinterpret_cast<uint16_t*>(&r10_71) = *reinterpret_cast<uint16_t*>(&r15d92);
    }
    __asm__("bsf r14w, bp");
    *reinterpret_cast<int16_t*>(&ebp87) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp87) + *reinterpret_cast<int16_t*>(&rdi76));
    ecx95 = 0xffff | ecx81 << 8 & 0xff0000 | ecx81 << 24;
    __asm__("rcr edx, 1");
    __asm__("shld di, bx, 0x1");
    *reinterpret_cast<unsigned char*>(&rdx75) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx75) + 0x76)));
    ax96 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx95) + 1);
    __asm__("shrd r12w, ax, 0x1");
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&rdx75) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdx75) == 0)) {
    }
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r12_32) = *reinterpret_cast<uint32_t*>(&rbx65);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_32) + 4) = 0;
    }
    *reinterpret_cast<unsigned char*>(&r10_71) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_71) >> 1);
    si97 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi89) | 0xc000);
    *reinterpret_cast<uint16_t*>(&rdx75) = reinterpret_cast<uint16_t>(ax96 % si97);
    *reinterpret_cast<uint16_t*>(&rax72) = reinterpret_cast<uint16_t>(ax96 / si97);
    __asm__("ror ch, cl");
    below_or_equal98 = *reinterpret_cast<uint32_t*>(&r14_90) <= *reinterpret_cast<uint32_t*>(&rbx65);
    *reinterpret_cast<unsigned char*>(&r8_68) = reinterpret_cast<uint1_t>(!below_or_equal98);
    if (below_or_equal98) {
        r8_68 = rbx65;
    }
    if (*reinterpret_cast<int32_t*>(&r14_90) <= *reinterpret_cast<int32_t*>(&rbx65)) {
        *reinterpret_cast<uint32_t*>(&rdx75) = *reinterpret_cast<uint32_t*>(&rdx75);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx75) + 4) = 0;
    }
    __asm__("rcl dh, 0xf");
    rax99 = rax72;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(rax99 < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(rax99 == 0))) {
        *reinterpret_cast<uint32_t*>(&r11_84) = ebp87;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_84) + 4) = 0;
    }
    __asm__("rcr r8w, 0x70");
    __asm__("ror r11, 0xcd");
    __asm__("xadd ch, dh");
    __asm__("bsf r10d, r8d");
    __asm__("rol r15w, cl");
    __asm__("rol si, cl");
    rsi100 = reinterpret_cast<uint64_t>(rdx75 * 0x1812860d);
    __asm__("rcl r8d, 1");
    __asm__("shld rcx, r13, cl");
    *reinterpret_cast<uint16_t*>(&ecx95) = *reinterpret_cast<uint16_t*>(&rbx65);
    *reinterpret_cast<uint16_t*>(&rbx65) = 0xffff;
    r13d101 = 1;
    __asm__("btr ax, di");
    __asm__("rol dh, 1");
    *reinterpret_cast<uint32_t*>(&r8_102) = *reinterpret_cast<uint32_t*>(&r8_68) - (*reinterpret_cast<uint32_t*>(&r14_90) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r8_68) < *reinterpret_cast<uint32_t*>(&r14_90)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_102) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rdx75) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx75) | 0xc8a8);
    rax103 = *reinterpret_cast<uint16_t*>(&ecx95);
    *reinterpret_cast<uint16_t*>(&r14_90) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_90) ^ 0xc697);
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r14_90) == 0)))) {
        rsi100 = r12_32;
    }
    *reinterpret_cast<unsigned char*>(&rbx65) = reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(&r8_102) & *reinterpret_cast<unsigned char*>(&ebp87)) == 0);
    *reinterpret_cast<unsigned char*>(&r8_102) = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&r8_102) & *reinterpret_cast<unsigned char*>(&ebp87)) >= reinterpret_cast<signed char>(0));
    *reinterpret_cast<uint32_t*>(&rsi104) = *reinterpret_cast<uint32_t*>(&rsi100) ^ *reinterpret_cast<uint32_t*>(&r14_90);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi104) + 4) = 0;
    if (1) {
        *reinterpret_cast<uint16_t*>(&r8_102) = *reinterpret_cast<uint16_t*>(&r12_32);
    }
    __asm__("ror r13d, 1");
    __asm__("rol r13b, cl");
    __asm__("bsr ebp, r9d");
    __asm__("ror r12, 0x27");
    *reinterpret_cast<signed char*>(&ecx95) = *reinterpret_cast<signed char*>(&ecx95);
    ecx105 = ecx95;
    *reinterpret_cast<uint32_t*>(&r14_106) = *reinterpret_cast<uint32_t*>(&r14_90) - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_106) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rbp107) = ebp87 >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp107) + 4) = 0;
    tmp16_108 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_102) + 0xb999) + 1);
    cf109 = reinterpret_cast<uint1_t>(tmp16_108 < *reinterpret_cast<uint16_t*>(&r8_102));
    *reinterpret_cast<uint16_t*>(&r8_102) = tmp16_108;
    al110 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax103) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx65) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rax103) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx65) + 1) + cf109))));
    __asm__("shrd r14, rcx, 0x7b");
    if (0) {
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax103) + 1) = *reinterpret_cast<unsigned char*>(&rdx75);
        *reinterpret_cast<unsigned char*>(&rdx75) = 0;
    }
    if (__intrinsic()) {
        rdx75 = r14_106;
    }
    tmp8_111 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax103) + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax103) + 1) = al110;
    *reinterpret_cast<unsigned char*>(&rax103) = tmp8_111;
    __asm__("ror bx, 0xd0");
    *reinterpret_cast<int32_t*>(&rax112) = *reinterpret_cast<int32_t*>(&rax103) >> *reinterpret_cast<signed char*>(&ecx105);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax112) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r14_113) = *reinterpret_cast<uint32_t*>(&r14_106) >> 24 | *reinterpret_cast<uint32_t*>(&r14_106) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&r14_106) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&r14_106) << 24;
    rbp114 = rbp107 ^ 0x7e6c4760;
    if (*reinterpret_cast<uint32_t*>(&r12_32) == *reinterpret_cast<uint32_t*>(&rbx65)) {
        tmp32_115 = *reinterpret_cast<uint32_t*>(&r12_32);
        *reinterpret_cast<uint32_t*>(&r12_32) = *reinterpret_cast<uint32_t*>(&rbx65);
        *reinterpret_cast<uint32_t*>(&rbx65) = tmp32_115;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx65) + 4) = 0;
    }
    *reinterpret_cast<unsigned char*>(&r8_102) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_102) & *reinterpret_cast<unsigned char*>(&r10_71));
    less_or_equal116 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r8_102) == 0));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx65) + 1) = reinterpret_cast<uint1_t>(!less_or_equal116);
    *reinterpret_cast<unsigned char*>(&r13d101) = less_or_equal116;
    r10_117 = r10_71 - (rbx65 + reinterpret_cast<uint1_t>(r10_71 < rbx65 + 1));
    r9_118 = 0 >> 0xffffffffffffff80;
    __asm__("rcr bp, cl");
    __asm__("btr r14, 0x65");
    __asm__("rcr edx, 1");
    rdi119 = (reinterpret_cast<int64_t>(rdi76) >> -80) - 0x235dd07;
    __asm__("rol rbp, 1");
    *reinterpret_cast<uint16_t*>(&rbx65) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx65) + 0x5c9f);
    __asm__("shld ecx, r9d, 0x1");
    __asm__("shld ecx, edx, 0xb3");
    *reinterpret_cast<uint16_t*>(&r11_84) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_84) | 0xb148);
    *reinterpret_cast<signed char*>(&rbp114) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbp114) + *reinterpret_cast<signed char*>(&r11_84));
    *reinterpret_cast<unsigned char*>(&rsi104) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx75) - 1);
    rcx120 = r11_84 * 0xffffffffc3f49f8c;
    __asm__("rol ax, 0xd3");
    if (*reinterpret_cast<signed char*>(&rax112) == *reinterpret_cast<signed char*>(&rdi119)) {
        tmp8_121 = *reinterpret_cast<signed char*>(&rax112);
        *reinterpret_cast<signed char*>(&rax112) = *reinterpret_cast<signed char*>(&rdi119);
        *reinterpret_cast<signed char*>(&rdi119) = tmp8_121;
    }
    __asm__("shrd r10d, r8d, 0xed");
    __asm__("rol bpl, 0xb2");
    *reinterpret_cast<uint32_t*>(&r13_122) = r13d101 + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_122) + 4) = 0;
    tmp64_123 = (rax112 & 0xffffffff) << 32;
    tmp64_124 = (tmp64_123 & 0xffff0000ffff) << 16 | (tmp64_123 & 0xffff0000ffff0000) >> 16;
    rax125 = (tmp64_124 & 0xff00ff00ff00ff) << 8 | (tmp64_124 & 0xff00ff00ff00ff00) >> 8;
    r15_126 = *reinterpret_cast<int16_t*>(&rsi104);
    *reinterpret_cast<uint16_t*>(&rdx75) = __intrinsic();
    ebx127 = *reinterpret_cast<uint32_t*>(&rbx65) + 0x2f5ec3b7;
    *reinterpret_cast<uint32_t*>(&rbx128) = ebx127 - (*reinterpret_cast<uint32_t*>(&rbp114) + reinterpret_cast<uint1_t>(ebx127 < *reinterpret_cast<uint32_t*>(&rbp114)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx128) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r14_113) = *reinterpret_cast<unsigned char*>(&rdx75);
    __asm__("shrd r13d, r15d, 0x1");
    rbx129 = -rbx128;
    *reinterpret_cast<uint16_t*>(&r9_118) = 0;
    *reinterpret_cast<unsigned char*>(&r12_130) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_32) + *reinterpret_cast<unsigned char*>(&rcx120));
    rdx131 = rdx75 << 1;
    *reinterpret_cast<int16_t*>(&rbp114) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbp114) >> *reinterpret_cast<unsigned char*>(&rcx120));
    __asm__("rol r13W, cl");
    rcx132 = rcx120 ^ r8_102;
    r9_133 = r9_118 + r9_118;
    __asm__("xadd ebx, ebp");
    if (reinterpret_cast<int64_t>(r9_133) < reinterpret_cast<int64_t>(0) != __intrinsic()) {
        r14_113 = r10_117;
    }
    __asm__("rcr r12w, 0x12");
    *reinterpret_cast<int16_t*>(&rax125) = 0;
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&r9_133) = *reinterpret_cast<int32_t*>(&rdx131);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_133) + 4) = 0;
    }
    __asm__("rcr r14w, 1");
    __asm__("rol r11b, 1");
    *reinterpret_cast<unsigned char*>(&rcx132) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx132) & 15);
    __asm__("shrd r8w, di, cl");
    rsi134 = rsi104 - (0x77cdd4d3 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(rsi104 < 0xffffffff88322b2d)));
    __asm__("bsf r9w, ax");
    rcx135 = rcx132 - 0x5ecb5ba;
    *reinterpret_cast<uint32_t*>(&rdx136) = *reinterpret_cast<uint32_t*>(&r14_113) + 0x2bec946f;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx136) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r14_137) = *reinterpret_cast<int32_t*>(&rdx131) - 0x2574653c + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_137) + 4) = 0;
    r14_138 = -r14_137;
    __asm__("rol r13, cl");
    __asm__("rol dh, cl");
    *reinterpret_cast<int16_t*>(&rdx136) = 0;
    r15d139 = *reinterpret_cast<int32_t*>(&r15_126);
    *reinterpret_cast<uint16_t*>(&r9_133) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_133) | *reinterpret_cast<uint16_t*>(&rbx129));
    *reinterpret_cast<unsigned char*>(&rcx135) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx135) & *reinterpret_cast<unsigned char*>(&r8_102)) & 15);
    __asm__("shrd ax, si, cl");
    rbp140 = rbp114 - 1;
    __asm__("ror esi, 0x18");
    __asm__("ror ah, 1");
    __asm__("rol r13b, 0xf8");
    rdx141 = rdx136 * 0xfffffffff9b3170e;
    *reinterpret_cast<uint32_t*>(&r8_142) = *reinterpret_cast<uint32_t*>(&r8_102) | *reinterpret_cast<uint32_t*>(&rbp140);
    *reinterpret_cast<uint16_t*>(&rbx129) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx135) + 1)));
    __asm__("rcr rax, 1");
    __asm__("rcl r11w, cl");
    edi143 = *reinterpret_cast<uint32_t*>(&rdi119) >> 1;
    __asm__("rcl rdi, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax125) + 1) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("rcr bx, 1");
    ecx144 = *reinterpret_cast<uint32_t*>(&rcx135) ^ 0x9429f7bf;
    if (1) {
        r12_130 = r9_133;
    }
    __asm__("shld r12w, si, 0x8");
    __asm__("bts rdx, 0x7e");
    *reinterpret_cast<int16_t*>(&r15d139) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r15d139) + 1);
    __asm__("shld r15, r14, cl");
    cx145 = *reinterpret_cast<unsigned char*>(&rdx141);
    *reinterpret_cast<unsigned char*>(&r14_138) = *reinterpret_cast<unsigned char*>(&r12_130);
    __asm__("rol r12w, 1");
    __asm__("btc esi, r14d");
    __asm__("cdq ");
    bl146 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx129) + *reinterpret_cast<signed char*>(&r8_142))));
    if (!__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r14_138) = cx145;
    }
    r12_147 = reinterpret_cast<uint64_t>(static_cast<int64_t>(r15d139));
    eax148 = *reinterpret_cast<int32_t*>(&rax125) * *reinterpret_cast<int32_t*>(&rax125);
    *reinterpret_cast<int32_t*>(&rdx149) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx149) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&eax148) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax148) + *reinterpret_cast<signed char*>(&r13_122)) + __intrinsic());
    *reinterpret_cast<uint32_t*>(&r14_150) = *reinterpret_cast<uint32_t*>(&r14_138) - (0x2d5746cc + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r14_138) < 0x2d5746cd));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_150) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&r14_138) >= reinterpret_cast<int32_t>(0x2d5746cd)) {
        *reinterpret_cast<uint16_t*>(&r12_147) = *reinterpret_cast<uint16_t*>(&eax148);
    }
    *reinterpret_cast<unsigned char*>(&eax148) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax148) + 54);
    __asm__("xadd bp, r13W");
    __asm__("bsf esi, ecx");
    __asm__("cwd ");
    *reinterpret_cast<signed char*>(&cx145) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&cx145) - 1);
    __asm__("rcl eax, 1");
    *reinterpret_cast<unsigned char*>(&rbx129) = reinterpret_cast<unsigned char>(bl146 - reinterpret_cast<unsigned char>(36 - reinterpret_cast<uint1_t>(bl146 < 0xdc)));
    r15_151 = 0x865d5c7f88e24f10;
    esi152 = *reinterpret_cast<int32_t*>(&rsi134) + 1 + edi143;
    __asm__("ror r8w, 1");
    r10_153 = 0xa0e452e5aae8d98;
    *reinterpret_cast<int16_t*>(&esi152) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&esi152) - 1);
    if (0x8d98 == *reinterpret_cast<uint16_t*>(&r14_150)) {
        *reinterpret_cast<uint16_t*>(&r10_153) = *reinterpret_cast<uint16_t*>(&r14_150);
        *reinterpret_cast<uint16_t*>(&r14_150) = 0x8d98;
    }
    tmp16_154 = *reinterpret_cast<uint16_t*>(&r12_147);
    *reinterpret_cast<uint16_t*>(&r12_147) = cx145;
    *reinterpret_cast<uint16_t*>(&ecx144) = tmp16_154;
    if (*reinterpret_cast<int16_t*>(&esi152) > 0x8f74) {
        *reinterpret_cast<uint32_t*>(&rbx129) = *reinterpret_cast<uint32_t*>(&r14_150);
    }
    *reinterpret_cast<uint32_t*>(&rcx155) = ecx144 * 0x13e1ff78;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx155) + 4) = 0;
    tmp8_156 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx155) + 1) - 76) + __intrinsic());
    cf157 = reinterpret_cast<uint1_t>(tmp8_156 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx155) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx155) + 1) = tmp8_156;
    if (cf157 | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx155) + 1) == 0)) {
        r14_150 = r9_133;
    }
    rax158 = eax148;
    __asm__("rol bl, 0x30");
    __asm__("ror r12w, 1");
    zf159 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&edi143) == *reinterpret_cast<uint16_t*>(&r12_147));
    less160 = reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic());
    if (zf159) {
        tmp16_161 = *reinterpret_cast<uint16_t*>(&edi143);
        *reinterpret_cast<uint16_t*>(&edi143) = *reinterpret_cast<uint16_t*>(&r12_147);
        *reinterpret_cast<uint16_t*>(&r12_147) = tmp16_161;
    }
    if (!reinterpret_cast<uint1_t>(less160 | zf159)) {
        *reinterpret_cast<uint16_t*>(&r12_147) = *reinterpret_cast<uint16_t*>(&r9_133);
    }
    if (!less160) {
        r14_150 = r12_147;
    }
    *reinterpret_cast<uint16_t*>(&r9_133) = *reinterpret_cast<uint16_t*>(&r9_133);
    __asm__("rol r14d, 1");
    __asm__("btc r10d, r9d");
    ax162 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax158) * *reinterpret_cast<uint16_t*>(&rdx149));
    *reinterpret_cast<uint16_t*>(&rdx149) = __intrinsic();
    r9_163 = r9_133 + rdx149;
    *reinterpret_cast<uint32_t*>(&r8_164) = ax162;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r9_163) < reinterpret_cast<int64_t>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(r9_163 == 0)) {
        *reinterpret_cast<int16_t*>(&r8_164) = *reinterpret_cast<int16_t*>(&r9_163);
    }
    __asm__("rcr dil, 0xcd");
    __asm__("rol bl, 0x71");
    rcx165 = rcx155 << 1;
    *reinterpret_cast<uint16_t*>(&r11_84) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_84) | 0xc000);
    *reinterpret_cast<uint16_t*>(&rax158) = reinterpret_cast<uint16_t>(ax162 / *reinterpret_cast<uint16_t*>(&r11_84));
    if (!__intrinsic()) {
        r8_164 = rax158;
    }
    __asm__("bsf r13, r13");
    __asm__("rol rdi, cl");
    r12_166 = r12_147 >> 1;
    __asm__("bts bp, 0x8a");
    __asm__("rcr dl, 1");
    __asm__("rcr r10b, 1");
    __asm__("rcl dl, cl");
    __asm__("ror r15, cl");
    *reinterpret_cast<signed char*>(&edi143) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&edi143) - 1);
    __asm__("rcr r12b, 1");
    __asm__("rcl rdx, 1");
    *reinterpret_cast<uint16_t*>(&rax158) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax158) * *reinterpret_cast<uint16_t*>(&r14_150));
    *reinterpret_cast<uint16_t*>(&rdx149) = __intrinsic();
    *reinterpret_cast<uint16_t*>(&rbx129) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx129) << 1);
    __asm__("btr r13, rsi");
    if (r12_166 >= r11_84) {
        *reinterpret_cast<uint32_t*>(&rcx165) = esi152;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx165) + 4) = 0;
    }
    edi167 = edi143 + 1;
    *reinterpret_cast<uint16_t*>(&r10_153) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_153) + 0xc2e7) + reinterpret_cast<uint1_t>(r11_84 - 0x1402d1ec < r11_84));
    if (*reinterpret_cast<int16_t*>(&r10_153) >= reinterpret_cast<int16_t>(0)) {
        r14_150 = rbp140;
    }
    r13_168 = r13_122 - r10_153;
    __asm__("rcr r12b, 1");
    edx169 = reinterpret_cast<uint32_t>(-*reinterpret_cast<int32_t*>(&rdx149));
    *reinterpret_cast<uint32_t*>(&rsi170) = esi152 >> 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi170) + 4) = 0;
    __asm__("bts dx, dx");
    *reinterpret_cast<unsigned char*>(&r14_150) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r14_150) >> -4);
    __asm__("ror r12d, 0x77");
    *reinterpret_cast<signed char*>(&edx169) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&edx169) + 74);
    *reinterpret_cast<uint16_t*>(&r15_151) = reinterpret_cast<uint16_t>(0x4f10 & *reinterpret_cast<uint16_t*>(&rcx165));
    __asm__("rcl dil, 1");
    tmp8_171 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx169) + 1) + *reinterpret_cast<unsigned char*>(&rbx129))));
    cf172 = reinterpret_cast<uint1_t>(tmp8_171 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx169) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx169) + 1) = tmp8_171;
    __asm__("rol rcx, cl");
    __asm__("bts bx, 0x88");
    tmp8_173 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edi167) + *reinterpret_cast<signed char*>(&edx169)) + cf172);
    cf174 = reinterpret_cast<uint1_t>(tmp8_173 < *reinterpret_cast<unsigned char*>(&edi167));
    *reinterpret_cast<unsigned char*>(&edi167) = tmp8_173;
    __asm__("btc di, 0xa");
    if (cf174 | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edi167) == 0)) {
    }
    rsi175 = rsi170 - 0x464d2c4b;
    __asm__("rcr r11d, 1");
    __asm__("rcl dx, 1");
    __asm__("ror r10b, 1");
    __asm__("rcl r11w, 1");
    ebx176 = *reinterpret_cast<uint32_t*>(&rbx129) + 0x54512ac0 + 1;
    below_or_equal177 = (*reinterpret_cast<uint32_t*>(&r8_164) | *reinterpret_cast<uint32_t*>(&r13_168)) <= 0x9ab684bf;
    __asm__("btc r15, 0xcc");
    if (below_or_equal177) {
        edi167 = edx169;
    }
    if (below_or_equal177) {
        *reinterpret_cast<uint32_t*>(&rcx165) = *reinterpret_cast<uint32_t*>(&rsi175);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx165) + 4) = 0;
    }
    __asm__("rcl ebx, 1");
    __asm__("bts r14w, 0x60");
    *reinterpret_cast<uint32_t*>(&rdi178) = edi167 + *reinterpret_cast<uint32_t*>(&r12_166) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi178) + 4) = 0;
    __asm__("rcl r11d, 1");
    __asm__("btc r12, 0xc7");
    *reinterpret_cast<uint32_t*>(&r10_179) = *reinterpret_cast<uint32_t*>(&rdi178) + *reinterpret_cast<uint32_t*>(&r13_168) * 4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_179) + 4) = 0;
    rax180 = *reinterpret_cast<int32_t*>(&rax158) + 0x558996fe + 1;
    r15_181 = -r15_151;
    *reinterpret_cast<unsigned char*>(&r15_181) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_181) | *reinterpret_cast<unsigned char*>(&rbp140));
    if (reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r15_181) == 0)) {
        *reinterpret_cast<uint16_t*>(&r15_181) = *reinterpret_cast<uint16_t*>(&r14_150);
    }
    *reinterpret_cast<uint32_t*>(&rbp182) = *reinterpret_cast<uint16_t*>(&rdi178);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp182) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rdi178) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi178) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx165) + 1) = reinterpret_cast<signed char>(0 >> *reinterpret_cast<unsigned char*>(&rcx165));
    *reinterpret_cast<uint16_t*>(&r14_150) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_150) * 0x6ad);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax180) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax180) + 1) << 1);
    __asm__("rcl cx, 1");
    __asm__("rcr r12w, 1");
    *reinterpret_cast<unsigned char*>(&r13_168) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_168) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_168) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r13_168) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r13_168))))));
    __asm__("bsf r11d, r14d");
    r8_183 = 0x3fffffffffffffff;
    rdx184 = rax180 % (r15_181 | 0xc000000000000000);
    __asm__("ror r10d, cl");
    __asm__("btc r8d, 0x2f");
    *reinterpret_cast<int16_t*>(&rsi175) = *reinterpret_cast<signed char*>(&rdi178);
    __asm__("ror r15w, 1");
    *reinterpret_cast<int16_t*>(&ebx176) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx176) >> -75);
    __asm__("rol r10b, 1");
    *reinterpret_cast<uint16_t*>(&rcx165) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rcx165) >> -56);
    *reinterpret_cast<int32_t*>(&r11_185) = static_cast<int32_t>(r10_179 + rsi175 * 4 + 0x3d09442e);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_185) + 4) = 0;
    __asm__("rol r14d, cl");
    __asm__("btr r14d, 0x2e");
    __asm__("rcl esi, 1");
    r11_186 = r11_185;
    zf187 = r11_186 == 0;
    if (!zf187) {
        r14_150 = rcx165;
    }
    if (r11_186 < 0 != __intrinsic()) {
        r11_186 = 0;
    }
    if (!zf187) {
    }
    __asm__("rcl ebp, 1");
    __asm__("bsf edi, esi");
    __asm__("shld edx, r11d, 0x1");
    tmp8_188 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx176) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx184) + 1)) + 1);
    cf189 = reinterpret_cast<uint1_t>(tmp8_188 < *reinterpret_cast<unsigned char*>(&ebx176));
    *reinterpret_cast<unsigned char*>(&ebx176) = tmp8_188;
    if (*reinterpret_cast<signed char*>(&ebx176) < reinterpret_cast<signed char>(0)) {
    }
    __asm__("xadd r9w, dx");
    *reinterpret_cast<unsigned char*>(&rbp182) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&rbp182) <= reinterpret_cast<signed char>(27 - cf189));
    __asm__("rcr di, 1");
    __asm__("shld rbx, r12, cl");
    *reinterpret_cast<uint16_t*>(&r13_168) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_168) + 0x2882))) ^ 0xffff);
    __asm__("rcr rbx, 1");
    __asm__("bts r15w, r10w");
    *reinterpret_cast<signed char*>(&r8_183) = *reinterpret_cast<signed char*>(&rdi178);
    *reinterpret_cast<signed char*>(&rdi178) = -1;
    __asm__("rcr al, 0xeb");
    r13_190 = r13_168 ^ 0x2585a6f;
    __asm__("btr r15w, 0x5a");
    rbp191 = rbp182 >> *reinterpret_cast<unsigned char*>(&rcx165);
    __asm__("bsr r12w, si");
    __asm__("shld r15, r11, cl");
    rax192 = 0;
    __asm__("shrd r10w, di, 0x1");
    *reinterpret_cast<uint32_t*>(&r9_193) = *reinterpret_cast<uint32_t*>(&r12_166) >> 24 | *reinterpret_cast<uint32_t*>(&r12_166) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&r12_166) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&r12_166) << 24;
    if (!__undefined()) {
    }
    r8_194 = r8_183 << *reinterpret_cast<unsigned char*>(&rcx165);
    __asm__("xadd r9, rcx");
    rdi195 = rdi178 + 1;
    *reinterpret_cast<signed char*>(&r9_193) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r9_193) << 1);
    *reinterpret_cast<uint16_t*>(&r13_190) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_190) + *reinterpret_cast<uint16_t*>(&r14_150)) + __intrinsic());
    __asm__("rcr r11w, 1");
    *reinterpret_cast<uint16_t*>(&rbp191) = *reinterpret_cast<unsigned char*>(&r11_186);
    *reinterpret_cast<uint16_t*>(&rax192) = reinterpret_cast<uint16_t>(0 / reinterpret_cast<uint16_t>(0));
    *reinterpret_cast<signed char*>(&rax192) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rax192) + 38);
    *reinterpret_cast<uint32_t*>(&r10_196) = (ebx176 >> 1) * 0xa4ead54e;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_196) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rdi197) = *reinterpret_cast<int32_t*>(&rdi195) + *reinterpret_cast<uint32_t*>(&rcx165);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi197) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r13_198) = *reinterpret_cast<uint32_t*>(&r13_190) >> -18;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_198) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r11_186) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_186) >> -51);
    *reinterpret_cast<uint32_t*>(&r11_199) = *reinterpret_cast<uint32_t*>(&r11_186) ^ 0xfefe84be;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_199) + 4) = 0;
    __asm__("btc esi, 0x32");
    *reinterpret_cast<uint16_t*>(&r10_196) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_196) + *reinterpret_cast<uint16_t*>(&r11_199)) + 1);
    rcx200 = rcx165 - 1;
    __asm__("rcl bp, 1");
    r11_201 = r11_199 >> 1;
    __asm__("ror r10d, cl");
    *reinterpret_cast<unsigned char*>(&r11_201) = *reinterpret_cast<unsigned char*>(&r14_150);
    if (0) {
    }
    *reinterpret_cast<unsigned char*>(&r14_150) = 0;
    __asm__("rcl r14b, 1");
    __asm__("shrd rcx, r15, cl");
    *reinterpret_cast<uint32_t*>(&r11_202) = reinterpret_cast<uint32_t>(~*reinterpret_cast<int32_t*>(&r11_201));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_202) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r9_203) = -*reinterpret_cast<uint32_t*>(&r9_193);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_203) + 4) = 0;
    __asm__("rcl edi, cl");
    rbx204 = *reinterpret_cast<int32_t*>(&rcx200);
    *reinterpret_cast<uint32_t*>(&rax205) = (*reinterpret_cast<uint32_t*>(&rax192) | 0xe5861937) * *reinterpret_cast<uint32_t*>(&rdi197);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax205) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx206) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx206) + 4) = 0;
    __asm__("rol r13b, cl");
    *reinterpret_cast<int16_t*>(&rdx206) = __intrinsic();
    *reinterpret_cast<signed char*>(&rbp191) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&rbp191));
    __asm__("shrd r11w, bx, 0x1");
    rbp207 = rbp191 * 0x3b79edf2;
    __asm__("shld r14w, dx, 0x1");
    __asm__("shld esi, r8d, 0x1");
    tmp64_208 = (rdx206 & 0xffffffff) << 32;
    tmp64_209 = (tmp64_208 & 0xffff0000ffff) << 16 | (tmp64_208 & 0xffff0000ffff0000) >> 16;
    rdx210 = (tmp64_209 & 0xff00ff00ff00ff) << 8 | (tmp64_209 & 0xff00ff00ff00ff00) >> 8;
    *reinterpret_cast<uint16_t*>(&r9_203) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_166) - reinterpret_cast<uint16_t>(0x17f0 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r12_166) < 0x17f0)));
    __asm__("rcl rbp, 1");
    r13_211 = r13_198 + r8_194;
    __asm__("rol r9w, 1");
    rcx212 = rcx200 >> *reinterpret_cast<signed char*>(&rcx200);
    *reinterpret_cast<uint16_t*>(&rdi197) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi197) + 1);
    *reinterpret_cast<unsigned char*>(&rdx210) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&rdi197) < reinterpret_cast<int16_t>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rdi197) == 0)));
    __asm__("shld edx, eax, cl");
    __asm__("ror r14, 1");
    *reinterpret_cast<unsigned char*>(&rbx204) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx204) & *reinterpret_cast<unsigned char*>(&rdx210));
    __asm__("rcl al, 1");
    *reinterpret_cast<uint16_t*>(&r11_202) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_202) - *reinterpret_cast<uint16_t*>(&r9_203));
    *reinterpret_cast<uint16_t*>(&r8_194) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_194) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp207) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r8_194) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rbp207))))));
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&rcx212) = *reinterpret_cast<uint16_t*>(&r11_202);
    }
    __asm__("rcl r9, 1");
    r12_213 = *reinterpret_cast<signed char*>(&r10_196);
    *reinterpret_cast<int16_t*>(&rax205) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rdx210) * *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx204) + 1));
    *reinterpret_cast<int32_t*>(&rdx214) = *reinterpret_cast<int32_t*>(&rdx210) << *reinterpret_cast<unsigned char*>(&rcx212);
    if (*reinterpret_cast<uint16_t*>(&rdx214) == *reinterpret_cast<uint16_t*>(&rcx212)) {
        tmp16_215 = *reinterpret_cast<uint16_t*>(&rdx214);
        *reinterpret_cast<uint16_t*>(&rdx214) = *reinterpret_cast<uint16_t*>(&rcx212);
        *reinterpret_cast<uint16_t*>(&rcx212) = tmp16_215;
    }
    *reinterpret_cast<uint32_t*>(&r15_216) = *reinterpret_cast<unsigned char*>(&r9_203);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_216) + 4) = 0;
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r10_196) = *reinterpret_cast<uint32_t*>(&rbp207);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_196) + 4) = 0;
    }
    rax217 = rax205 - (0x5d46dd1d + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rax205 < 0x5d46dd1d + static_cast<uint64_t>(static_cast<uint1_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi197) >> *reinterpret_cast<uint16_t*>(&rdi197)))))));
    if (!__intrinsic()) {
        r9_203 = r9_203;
    }
    __asm__("rcl r8b, 0x6a");
    if (0) {
        *reinterpret_cast<int16_t*>(&rax217) = *reinterpret_cast<int16_t*>(&rbx204);
    }
    r12_218 = r12_213 + r14_150;
    __asm__("rol si, cl");
    rax219 = rax217 ^ r15_216;
    __asm__("btr ax, 0x67");
    rcx220 = rcx212 - 1 | 0x4ef9e65e;
    if (*reinterpret_cast<signed char*>(&rdx214) == *reinterpret_cast<signed char*>(&rdx214)) {
    }
    *reinterpret_cast<uint32_t*>(&r12_221) = *reinterpret_cast<int32_t*>(&r12_218) + 1 + *reinterpret_cast<int32_t*>(&r8_194) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_221) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rcx220) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx220) - 0x50e)));
    *reinterpret_cast<uint16_t*>(&r10_196) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_196) ^ 0x25e5);
    __asm__("rcl bl, 0xca");
    __asm__("ror sil, 0x2c");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx204) + 1) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx204) + 1) + 0x6d) >> 1);
    *reinterpret_cast<uint16_t*>(&rbp207) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp207) & 0xc3f3);
    __asm__("bts rdx, rdi");
    *reinterpret_cast<signed char*>(&rcx220) = 0;
    *reinterpret_cast<uint16_t*>(&r13_211) = -*reinterpret_cast<uint16_t*>(&r13_211);
    *reinterpret_cast<uint32_t*>(&r15_222) = *reinterpret_cast<uint32_t*>(&rbp207);
    *reinterpret_cast<uint32_t*>(&rbp223) = *reinterpret_cast<uint32_t*>(&r15_216);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp223) + 4) = 0;
    eax224 = (*reinterpret_cast<uint32_t*>(&rax219) - (0x459aa7d4 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax219) < 0x459aa7d5))) * *reinterpret_cast<uint32_t*>(&rbp223);
    tmp32_225 = *reinterpret_cast<uint32_t*>(&r9_203) + *reinterpret_cast<uint32_t*>(&rcx220);
    __asm__("xadd rcx, r15");
    if (reinterpret_cast<uint1_t>(tmp32_225 < *reinterpret_cast<uint32_t*>(&r9_203)) | reinterpret_cast<uint1_t>(tmp32_225 == 0)) {
        r15_222 = rdi197;
    }
    __asm__("rcr r15, 1");
    __asm__("ror bh, cl");
    *reinterpret_cast<uint32_t*>(&rcx226) = *reinterpret_cast<uint32_t*>(&rcx220) - *reinterpret_cast<uint32_t*>(&r11_202);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx226) + 4) = 0;
    tmp64_227 = r12_221 + rbp223;
    r12_228 = tmp64_227;
    tmp64_229 = (r8_194 & 0xffffffff) << 32 | (r8_194 & 0xffffffff00000000) >> 32;
    tmp64_230 = (tmp64_229 & 0xffff0000ffff) << 16 | (tmp64_229 & 0xffff0000ffff0000) >> 16;
    r8_231 = (tmp64_230 & 0xff00ff00ff00ff) << 8 | (tmp64_230 & 0xff00ff00ff00ff00) >> 8;
    if (__intrinsic() <= *reinterpret_cast<int32_t*>(&r12_228) + reinterpret_cast<uint1_t>(__intrinsic() < *reinterpret_cast<int32_t*>(&r12_228) + reinterpret_cast<uint1_t>(tmp64_227 >= r12_221))) {
        *reinterpret_cast<uint16_t*>(&r13_211) = *reinterpret_cast<uint16_t*>(&r10_196);
    }
    *reinterpret_cast<uint32_t*>(&rdi232) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax224) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi232) + 4) = 0;
    r10_233 = r10_196 << 1;
    cl234 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx226) & 15);
    __asm__("shrd r8w, r10w, cl");
    *reinterpret_cast<uint32_t*>(&rsi235) = *reinterpret_cast<unsigned char*>(&r15_222);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi235) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&eax224) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax224) * *reinterpret_cast<uint16_t*>(&r13_211));
    dx236 = __intrinsic();
    __asm__("shrd esi, r8d, cl");
    r14d237 = *reinterpret_cast<uint32_t*>(&r14_150) + 0xb5f87b03 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r15_222) - 0x60e0526f < *reinterpret_cast<uint32_t*>(&r15_222));
    rbx238 = rbx204 + 0x24d0a6d1;
    *reinterpret_cast<int16_t*>(&rbp223) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbp223) >> cl234);
    *reinterpret_cast<uint32_t*>(&r12_239) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&r13_211)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_239) + 4) = 0;
    __asm__("btr esi, 0xba");
    tmp8_240 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx238) + 1) + *reinterpret_cast<signed char*>(&dx236)) + 1);
    cf241 = reinterpret_cast<uint1_t>(tmp8_240 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx238) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx238) + 1) = tmp8_240;
    *reinterpret_cast<unsigned char*>(&r13_211) = reinterpret_cast<uint1_t>(cf241 | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx238) + 1) == 0));
    __asm__("bts ebx, ebp");
    *reinterpret_cast<uint16_t*>(&rdi232) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi232) >> 61);
    __asm__("rol rbp, 0xd9");
    __asm__("shrd di, r11w, 0x5");
    __asm__("rcr rax, 0xd3");
    __asm__("bts ecx, 0xb0");
    *reinterpret_cast<unsigned char*>(&r14d237) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14d237) + *reinterpret_cast<unsigned char*>(&r13_211))));
    *reinterpret_cast<int16_t*>(&r12_239) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r12_239) >> 1);
    rbp242 = rbp223 >> 93;
    rdx243 = reinterpret_cast<uint64_t>(rsi235 + r10_233 * 8 - 0x453f12c7);
    if (*reinterpret_cast<unsigned char*>(&r14d237) & 70) {
        *reinterpret_cast<uint32_t*>(&rbx238) = *reinterpret_cast<uint32_t*>(&r12_239);
    }
    if (reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&r14d237) & 70) < reinterpret_cast<signed char>(0)) {
        *reinterpret_cast<uint16_t*>(&r13_211) = *reinterpret_cast<uint16_t*>(&rbx238);
    }
    if (0) {
        rdx243 = rdi232;
    }
    *reinterpret_cast<unsigned char*>(&rbx238) = *reinterpret_cast<unsigned char*>(&rdx243);
    *reinterpret_cast<uint32_t*>(&r9_244) = tmp32_225 - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_244) + 4) = 0;
    r15_245 = r8_231 + r11_202 * 2;
    *reinterpret_cast<uint32_t*>(&r8_246) = *reinterpret_cast<uint32_t*>(&r8_231) >> 0xffffff8c;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_246) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rcx226) = reinterpret_cast<unsigned char>(cl234 | *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax224) + 1));
    *reinterpret_cast<int16_t*>(&r9_244) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r9_244) << 1);
    __asm__("bsf r13d, r12d");
    *reinterpret_cast<unsigned char*>(&rbp242) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp242) >> 1);
    *reinterpret_cast<uint32_t*>(&rbx247) = *reinterpret_cast<uint32_t*>(&rbx238) + 0x85d3bda5 + __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx247) + 4) = 0;
    rbp248 = reinterpret_cast<int64_t>(-rbp242);
    rax249 = reinterpret_cast<int32_t>(eax224);
    r11_250 = r12_239;
    *reinterpret_cast<signed char*>(&r8_246) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r8_246) << 2);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx226) + 1) = 0;
    __asm__("btc r10w, 0x6b");
    __asm__("rcl ebx, 1");
    __asm__("rcr r14, 1");
    *reinterpret_cast<unsigned char*>(&r12_239) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_239) - reinterpret_cast<unsigned char>(52 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r12_239) < 0xcc)));
    if (__intrinsic()) {
        rdx243 = r13_211;
    }
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r13_211) = *reinterpret_cast<uint16_t*>(&r11_250);
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax249) + 1) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(&rcx226) & 0xbb62ac1f) >= reinterpret_cast<int32_t>(0));
    *reinterpret_cast<uint16_t*>(&rax249) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax249) * *reinterpret_cast<int16_t*>(&r14d237));
    *reinterpret_cast<int16_t*>(&rdx243) = __intrinsic();
    rsi251 = *reinterpret_cast<uint16_t*>(&rax249);
    *reinterpret_cast<unsigned char*>(&rcx226) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rax249)))));
    tmp8_252 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax249) + 1) + 9);
    cf253 = reinterpret_cast<uint1_t>(tmp8_252 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax249) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax249) + 1) = tmp8_252;
    if (cf253 | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax249) + 1) == 0)) {
        *reinterpret_cast<int16_t*>(&rbp248) = *reinterpret_cast<int16_t*>(&rcx226);
    }
    if (1) {
    }
    if (r14d237 == *reinterpret_cast<uint32_t*>(&r12_239)) {
        tmp32_254 = r14d237;
        *reinterpret_cast<uint32_t*>(&r12_239) = tmp32_254;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_239) + 4) = 0;
    }
    __asm__("rcl r10w, 1");
    __asm__("ror r14, cl");
    __asm__("shld r14d, edx, cl");
    *reinterpret_cast<unsigned char*>(&rsi251) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi251) ^ 0x84);
    __asm__("shrd esi, r15d, 0x1");
    *reinterpret_cast<unsigned char*>(&r13_211) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_211) & 100);
    __asm__("rcl r13d, cl");
    *reinterpret_cast<unsigned char*>(&rbp248) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp248) << *reinterpret_cast<unsigned char*>(&rcx226)) >> 1);
    __asm__("rol dx, 0x30");
    *reinterpret_cast<uint16_t*>(&r10_233) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_233) | 0x20b8);
    *reinterpret_cast<unsigned char*>(&r12_239) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r12_239) >> *reinterpret_cast<unsigned char*>(&rcx226));
    *reinterpret_cast<int32_t*>(&rbp255) = *reinterpret_cast<int32_t*>(&rbp248) >> -26;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp255) + 4) = 0;
    __asm__("rol bh, cl");
    *reinterpret_cast<unsigned char*>(&rdx243) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx243) & 0xc8);
    *reinterpret_cast<int32_t*>(&rdi256) = *reinterpret_cast<signed char*>(&rcx226);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi256) + 4) = 0;
    *reinterpret_cast<signed char*>(&r11_250) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r11_250) << *reinterpret_cast<unsigned char*>(&rcx226));
    if (*reinterpret_cast<unsigned char*>(&rbx247) == *reinterpret_cast<unsigned char*>(&rdx243)) {
        tmp8_257 = *reinterpret_cast<unsigned char*>(&rbx247);
        *reinterpret_cast<unsigned char*>(&rbx247) = *reinterpret_cast<unsigned char*>(&rdx243);
        *reinterpret_cast<unsigned char*>(&rdx243) = tmp8_257;
    }
    *reinterpret_cast<int32_t*>(&rdx258) = -*reinterpret_cast<int32_t*>(&rdx243);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx258) + 4) = 0;
    __asm__("shld r11d, r10d, cl");
    *reinterpret_cast<int16_t*>(&rdi256) = reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rdi256) << *reinterpret_cast<unsigned char*>(&rcx226)) + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx226) + 1) = 46;
    __asm__("rcl r12, 1");
    *reinterpret_cast<int16_t*>(&rbp255) = 0xddb9;
    *reinterpret_cast<int16_t*>(&rdx258) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rdx258) >> 0xff90);
    *reinterpret_cast<uint32_t*>(&r11_259) = *reinterpret_cast<uint32_t*>(&r11_250) >> *reinterpret_cast<unsigned char*>(&rcx226);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_259) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r15_260) = (*reinterpret_cast<int32_t*>(&r15_245) >> 1) + 0x5c20cf71;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_260) + 4) = 0;
    return rax249 + rbx247 + rcx226 + rdx258 + rbp255 + rsi251 + rdi256 + r8_246 + r9_244 + r10_233 + r11_259 + r12_239 + r13_211 + rsi251 * 0xffffffffb6fbb7bb + r15_260 + 0x13c9982e76a;
}

uint64_t log_size_10_var_006(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    uint64_t rbx4;
    int64_t rsi5;
    int64_t r8_6;
    uint64_t r11_7;
    int64_t r15_8;
    uint64_t rbx9;
    int64_t rax10;
    int64_t rax11;
    int64_t rcx12;
    uint64_t rdi13;
    uint64_t r13_14;
    int64_t r10_15;
    int64_t rsi16;
    int16_t cx17;
    int64_t rdx18;
    uint64_t rbp19;
    uint32_t r12d20;
    int64_t rax21;
    int64_t rax22;
    uint64_t rbx23;
    int64_t r10_24;
    uint64_t rsi25;
    uint32_t edi26;
    uint64_t rbx27;
    int64_t r10_28;
    uint64_t rbx29;
    uint32_t r9d30;
    uint64_t r15_31;
    int32_t r11d32;
    uint64_t rcx33;
    int32_t tmp32_34;
    uint64_t rsi35;
    uint64_t rdx36;
    uint64_t rax37;
    uint64_t rbp38;
    uint64_t tmp64_39;
    int64_t r8_40;
    uint64_t tmp64_41;
    uint64_t tmp64_42;
    uint64_t rax43;
    int64_t rsi44;
    uint32_t eax45;
    uint1_t cf46;
    uint32_t tmp32_47;
    int64_t rax48;
    uint16_t cx49;
    uint64_t r12_50;
    int64_t rsi51;
    int16_t bx52;
    uint16_t cx53;
    int64_t rbx54;
    int64_t rax55;
    int64_t rdx56;
    uint64_t r8_57;
    int64_t r14_58;
    uint64_t r10_59;
    uint16_t r13w60;
    int64_t r9_61;
    uint32_t edx62;
    uint64_t rax63;
    int1_t less64;
    uint32_t edi65;
    uint64_t rbx66;
    uint64_t r10_67;
    uint64_t r14_68;
    uint32_t r11d69;
    uint16_t bx70;
    int64_t r12_71;
    int64_t rdx72;
    uint1_t zf73;
    uint64_t tmp64_74;
    uint64_t r13_75;
    uint64_t r15_76;
    uint64_t rax77;
    uint64_t rdi78;
    uint64_t rsi79;
    uint32_t r15d80;
    int64_t r10_81;
    uint64_t r8_82;
    uint64_t rsi83;
    int64_t r13_84;
    int32_t r11d85;
    uint16_t si86;
    uint64_t rax87;
    int64_t rax88;
    int64_t rcx89;
    uint64_t rbp90;
    uint64_t r14_91;
    uint64_t r15_92;
    uint64_t r11_93;
    uint32_t eax94;
    int32_t edx95;
    uint32_t eax96;
    uint16_t r14w97;
    unsigned char tmp8_98;
    int1_t cf99;
    uint16_t r8w100;
    uint64_t rcx101;
    int32_t esi102;
    uint32_t eax103;
    int64_t rdx104;
    uint64_t r14_105;
    uint1_t cf106;
    uint64_t rbp107;
    uint64_t r12_108;
    uint64_t r13_109;
    uint32_t ebp110;
    int64_t rsi111;
    uint1_t sf112;
    uint64_t r9_113;
    int32_t eax114;
    uint64_t tmp64_115;
    uint64_t rdx116;
    uint32_t eax117;
    int64_t rax118;
    uint64_t rax119;
    unsigned char al120;
    int64_t rdx121;
    uint64_t rsi122;
    int64_t r8_123;
    uint32_t ecx124;
    uint64_t r12_125;
    uint64_t r9_126;
    uint64_t r10_127;
    int64_t rcx128;
    int64_t r14_129;
    uint64_t rbx130;
    uint64_t rdx131;
    uint64_t r8_132;
    int64_t rbp133;
    uint64_t r11_134;
    uint64_t rdx135;
    uint64_t r13_136;
    uint64_t rdi137;
    uint64_t rbp138;
    uint64_t tmp64_139;
    uint16_t tmp16_140;
    uint16_t ax141;
    int16_t dx142;
    uint64_t r13_143;
    uint64_t r9_144;
    uint1_t cf145;
    uint64_t rsi146;
    uint16_t ax147;
    int64_t rbx148;
    uint64_t r12_149;
    uint16_t dx150;
    uint1_t cf151;
    unsigned char dl152;
    int64_t rcx153;
    int64_t rax154;
    unsigned char cl155;
    unsigned char tmp8_156;
    int64_t rbx157;
    uint64_t r13_158;
    int64_t r11_159;
    int32_t ebp160;
    uint16_t ax161;
    uint64_t r8_162;
    unsigned char cl163;
    int1_t zf164;
    uint64_t rdi165;
    uint32_t r12d166;
    int64_t r9_167;
    uint64_t r11_168;
    uint64_t rbp169;
    int32_t ecx170;
    int16_t cx171;
    uint64_t r8_172;
    int32_t edx173;
    int64_t rbx174;
    int64_t r13_175;
    int64_t r14_176;
    int64_t rdx177;
    int16_t cx178;
    int32_t r15d179;
    uint1_t cf180;
    uint64_t rbp181;
    int32_t ebp182;
    int16_t r13w183;
    int64_t rsi184;
    int64_t rax185;
    uint64_t rdi186;
    unsigned char cl187;
    int32_t edx188;
    int32_t ebp189;
    uint64_t r12_190;
    int32_t eax191;
    uint64_t rbx192;
    uint16_t ax193;
    uint64_t r15_194;
    int64_t r14_195;
    unsigned char cl196;
    uint16_t ax197;
    uint64_t tmp64_198;
    uint64_t rax199;
    uint64_t rax200;
    int64_t rcx201;
    int64_t rsi202;
    int64_t r9_203;
    int64_t r14_204;
    int64_t r13_205;
    int16_t cx206;
    int1_t less207;
    int64_t tmp64_208;
    uint32_t r13d209;
    int64_t r10_210;
    int64_t r8_211;
    int64_t r8_212;
    int16_t r9w213;
    int64_t r12_214;
    int64_t rax215;
    uint64_t rdx216;
    int64_t rsi217;
    uint32_t r13d218;
    int64_t rdi219;
    uint64_t r14_220;
    int64_t r10_221;
    int64_t r9_222;
    uint64_t r14_223;
    int16_t cx224;
    int64_t rbp225;
    int64_t r11_226;
    uint64_t rbx227;
    signed char tmp8_228;
    signed char tmp8_229;
    int64_t r8_230;
    int64_t rax231;
    int64_t r13_232;
    uint64_t r14_233;
    uint64_t r10_234;
    int64_t rsi235;

    rax3 = 0x91e5c4b02416a120;
    rbx4 = 0x90bf2dfb5c3ccef1;
    rsi5 = 0x56a497da9a5610e4;
    r8_6 = 0x447bee4c2634519f;
    *reinterpret_cast<int16_t*>(&rax3) = 24;
    __asm__("bts r9d, ebp");
    __asm__("rcr r8, 0x59");
    __asm__("bts r11w, 0xe9");
    __asm__("rcr r9, 1");
    if (0) {
        rsi5 = 0xf92d49ccf840258e;
    }
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rbx4) = 0x5bfdb9be;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx4) + 4) = 0;
    }
    __asm__("rol r14, 0xb8");
    r11_7 = 0xb9be;
    __asm__("ror bp, 0x85");
    if (0) {
        rax3 = rsi5;
        rsi5 = 0x91e5c4b024160018;
    }
    __asm__("rcl r10, 1");
    __asm__("rol di, 0x8d");
    __asm__("shld rcx, r15, 0x41");
    r15_8 = 0x43d8f688;
    __asm__("btc rdx, 0x4f");
    __asm__("shld rbx, rsi, 0xa5");
    __asm__("rol r15d, 0x17");
    __asm__("bsf rbx, rsi");
    *reinterpret_cast<uint16_t*>(&r8_6) = reinterpret_cast<uint16_t>(0x519f >> 76);
    __asm__("shld rsi, r9, cl");
    rbx9 = rbx4 >> 1 ^ 0x331680cba38bcfcb;
    *reinterpret_cast<uint16_t*>(&rbx9) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx9) | 0xdfef);
    __asm__("rcl ah, 1");
    __asm__("shrd rbp, rdx, 0x3");
    *reinterpret_cast<int16_t*>(&rsi5) = 0;
    __asm__("ror cl, 1");
    __asm__("rcr r11d, 1");
    __asm__("rcr rdi, cl");
    __asm__("rcr r8b, 1");
    *reinterpret_cast<unsigned char*>(&rbx9) = 0;
    rax10 = *reinterpret_cast<int32_t*>(&rax3);
    __asm__("ror r8d, 1");
    *reinterpret_cast<int16_t*>(&rax10) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax10) * 0xb9be);
    __asm__("rol r11d, 0x7e");
    __asm__("rcr cl, 1");
    *reinterpret_cast<uint32_t*>(&rax11) = *reinterpret_cast<uint32_t*>(&rax10) / 0xf4d3ff50;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rax11) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax11) * *reinterpret_cast<uint16_t*>(&rbx9));
    *reinterpret_cast<unsigned char*>(&r15_8) = reinterpret_cast<unsigned char>(0x88 >> 0x67);
    *reinterpret_cast<int32_t*>(&rcx12) = 0xe9a7fea0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = 0;
    *reinterpret_cast<signed char*>(&rax11) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rax11) - 1);
    rdi13 = 0x1064d7c2fec9cf9e - (rax11 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(0x1064d7c2fec9cf9e < rax11 + 1)));
    __asm__("ror r9b, cl");
    r13_14 = 0xd52620c9df4340da;
    *reinterpret_cast<unsigned char*>(&rbx9) = reinterpret_cast<unsigned char>(0 >> -96);
    r10_15 = *reinterpret_cast<int32_t*>(&rdi13);
    rsi16 = rsi5 >> -96;
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rax11) = *reinterpret_cast<uint32_t*>(&rbx9);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
    }
    if (!__intrinsic()) {
    }
    *reinterpret_cast<uint16_t*>(&rax11) = 0xea50;
    cx17 = 80;
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax11) + 1) == *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax11) + 1)) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax11) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax11) + 1);
    }
    *reinterpret_cast<uint16_t*>(&rdx18) = reinterpret_cast<uint16_t>(__intrinsic() ^ 0x40da);
    if (0) {
        *reinterpret_cast<uint16_t*>(&r13_14) = 0x40da;
    }
    if (0) {
    }
    __asm__("rcl r12, cl");
    *reinterpret_cast<uint16_t*>(&r15_8) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_8) ^ 0x47ed);
    __asm__("rcr esi, 1");
    __asm__("rcr eax, 1");
    __asm__("btc r10w, 0x9f");
    rbp19 = *reinterpret_cast<int32_t*>(&r15_8) + 0xa0;
    __asm__("rol r11b, 0x41");
    __asm__("ror r14d, 1");
    __asm__("btr r10, r15");
    __asm__("rcr r14, 1");
    r12d20 = 80 - (*reinterpret_cast<int32_t*>(&r8_6) + reinterpret_cast<uint1_t>(80 < *reinterpret_cast<int32_t*>(&r8_6) + 1));
    *reinterpret_cast<unsigned char*>(&rdi13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi13) ^ 0x67);
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdi13) == 0)))) {
    }
    rax21 = rax11 - 0x50d2ba37;
    __asm__("cwd ");
    __asm__("rcl di, 1");
    *reinterpret_cast<uint16_t*>(&rcx12) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&cx17) + 1);
    rax22 = *reinterpret_cast<int32_t*>(&rax21);
    __asm__("rcr r10d, 1");
    __asm__("bsr r9, rax");
    *reinterpret_cast<int16_t*>(&rsi16) = 0x681c;
    *reinterpret_cast<int32_t*>(&rbx23) = *reinterpret_cast<signed char*>(&rdx18);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx23) + 4) = 0;
    __asm__("rcr r15b, 1");
    *reinterpret_cast<int32_t*>(&r10_24) = 0xb950 + (*reinterpret_cast<int32_t*>(&r10_15) + 0x5caf4208) * 8 + 0x6b4cca4e;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_24) + 4) = 0;
    __asm__("xadd dl, cl");
    __asm__("ror r8w, 1");
    __asm__("bts dx, 0x64");
    __asm__("bsf ebx, ebx");
    if (*reinterpret_cast<unsigned char*>(&r10_24) > 0xda) {
        rbx23 = *reinterpret_cast<signed char*>(&rbp19) + 0x7086efd5 + 1;
    }
    *reinterpret_cast<uint16_t*>(&r12d20) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12d20) ^ 0x40da);
    __asm__("btr r14w, 0x21");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax22) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax22) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx12) + 1)) + 1);
    *reinterpret_cast<uint32_t*>(&rsi25) = *reinterpret_cast<uint32_t*>(&rsi16) ^ r12d20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = 0;
    edi26 = *reinterpret_cast<uint16_t*>(&rcx12);
    __asm__("shrd r12w, bx, 0x1");
    *reinterpret_cast<uint16_t*>(&r12d20) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12d20) ^ *reinterpret_cast<uint16_t*>(&rsi25));
    __asm__("rcl r12w, cl");
    *reinterpret_cast<int16_t*>(&rbx23) = 0xb9dd;
    __asm__("rol cl, 0xde");
    *reinterpret_cast<signed char*>(&rax22) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rax22) >> 44);
    rbx27 = rbx23 >> 1;
    r10_28 = -r10_24;
    if (__intrinsic()) {
        r13_14 = 0x64398402;
    }
    *reinterpret_cast<uint32_t*>(&rbx29) = *reinterpret_cast<uint32_t*>(&rbx27) - (0x64427c7e + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbx27) < 0x64427c7e + reinterpret_cast<uint1_t>(!!r10_24)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx29) + 4) = 0;
    __asm__("rcr r9b, 1");
    __asm__("rcr r12, cl");
    r9d30 = 0x29846016;
    if (*reinterpret_cast<int32_t*>(&r13_14) == *reinterpret_cast<int32_t*>(&rbp19)) {
        *reinterpret_cast<int32_t*>(&r13_14) = *reinterpret_cast<int32_t*>(&rbp19);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_14) + 4) = 0;
    }
    __asm__("rcr ebp, 0xcd");
    __asm__("shrd r8d, esi, 0x1");
    *reinterpret_cast<unsigned char*>(&r11_7) = reinterpret_cast<unsigned char>(80 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edi26) + reinterpret_cast<uint1_t>(80 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&edi26))))));
    r15_31 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r12d20)));
    r11d32 = *reinterpret_cast<int32_t*>(&r11_7) >> -50;
    rcx33 = reinterpret_cast<uint64_t>(rcx12 >> -97);
    if (r11d32 == *reinterpret_cast<int32_t*>(&rax22)) {
        tmp32_34 = r11d32;
        r11d32 = *reinterpret_cast<int32_t*>(&rax22);
        *reinterpret_cast<int32_t*>(&rax22) = tmp32_34;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = 0;
    }
    __asm__("rol esi, cl");
    *reinterpret_cast<unsigned char*>(&rbx29) = 0;
    *reinterpret_cast<int16_t*>(&rax22) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax22) * *reinterpret_cast<int16_t*>(&rbx29));
    rsi35 = rsi25 | 0xc000000000000000;
    rdx36 = rax22 % rsi35;
    rax37 = rax22 / rsi35;
    rbp38 = *reinterpret_cast<uint16_t*>(&rsi35);
    if (rdx36 == rcx33) {
        tmp64_39 = rdx36;
        rdx36 = rcx33;
        rcx33 = tmp64_39;
    }
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rax37) = *reinterpret_cast<uint32_t*>(&rcx33);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax37) + 4) = 0;
    }
    __asm__("rol r10b, 1");
    __asm__("rol dil, 0x9f");
    __asm__("ror r9b, cl");
    *reinterpret_cast<unsigned char*>(&rdx36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx36) | 84);
    *reinterpret_cast<int32_t*>(&r8_40) = *reinterpret_cast<int32_t*>(&rdx36) * 0xd968641;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_40) + 4) = 0;
    tmp64_41 = (rax37 & 0xffffffff) << 32 | (rax37 & 0xffffffff00000000) >> 32;
    tmp64_42 = (tmp64_41 & 0xffff0000ffff) << 16 | (tmp64_41 & 0xffff0000ffff0000) >> 16;
    rax43 = (tmp64_42 & 0xff00ff00ff00ff) << 8 | (tmp64_42 & 0xff00ff00ff00ff00) >> 8;
    *reinterpret_cast<uint32_t*>(&rsi44) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax43) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi44) + 4) = 0;
    eax45 = *reinterpret_cast<uint32_t*>(&rax43);
    __asm__("rcl r9d, cl");
    *reinterpret_cast<int16_t*>(&r10_28) = static_cast<int16_t>(*reinterpret_cast<int32_t*>(&r13_14) + 0x84);
    cf46 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx33) < *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax45) + 1));
    *reinterpret_cast<unsigned char*>(&rcx33) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx33) - *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax45) + 1));
    tmp32_47 = eax45 + *reinterpret_cast<uint32_t*>(&rbx29) + cf46;
    *reinterpret_cast<uint32_t*>(&rax48) = tmp32_47;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax48) + 4) = 0;
    cx49 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx33) + 0x57c7) + reinterpret_cast<uint1_t>(tmp32_47 < eax45));
    *reinterpret_cast<int16_t*>(&rax48) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax48) << *reinterpret_cast<unsigned char*>(&cx49));
    *reinterpret_cast<signed char*>(&rsi44) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rsi44) + 1);
    __asm__("rol r8d, 0x10");
    r12_50 = rdx36 + rbx29 + 0xb8;
    rsi51 = ~rsi44;
    __asm__("shrd r11d, r10d, cl");
    __asm__("rol r8b, cl");
    *reinterpret_cast<unsigned char*>(&rbx29) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rax48)));
    bx52 = reinterpret_cast<int16_t>(~*reinterpret_cast<int16_t*>(&rbx29));
    __asm__("cwd ");
    *reinterpret_cast<unsigned char*>(&cx53) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&cx49) & 15);
    __asm__("shld r14w, si, cl");
    *reinterpret_cast<uint32_t*>(&rbx54) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&bx52) + 1)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx54) + 4) = 0;
    __asm__("bsf bp, bx");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx54) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx54) + 1) ^ 0xfa);
    rax55 = rax48 * r8_40;
    rdx56 = __intrinsic();
    r8_57 = reinterpret_cast<uint64_t>(r8_40 + 0x7c56e8d6);
    __asm__("cdq ");
    r14_58 = -0 + rbx54;
    *reinterpret_cast<int16_t*>(&r9d30) = reinterpret_cast<int16_t>(0x6016 >> *reinterpret_cast<unsigned char*>(&cx53));
    *reinterpret_cast<uint32_t*>(&r10_59) = *reinterpret_cast<uint32_t*>(&r10_28) & 0xf3ce742f;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_59) + 4) = 0;
    __asm__("rol r13d, cl");
    *reinterpret_cast<int16_t*>(&rsi51) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rsi51) - 1);
    __asm__("rol dx, cl");
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&cx49) + 1) <= *reinterpret_cast<signed char*>(&rdx56)) {
        *reinterpret_cast<uint32_t*>(&rbx54) = *reinterpret_cast<uint32_t*>(&r8_57);
    }
    __asm__("ror rbp, 1");
    __asm__("rcl r8, 0x61");
    r13w60 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_14) >> 1);
    *reinterpret_cast<uint32_t*>(&r9_61) = r9d30 | 0xc0000000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_61) + 4) = 0;
    edx62 = *reinterpret_cast<uint32_t*>(&rax55) % *reinterpret_cast<uint32_t*>(&r9_61);
    *reinterpret_cast<uint32_t*>(&rax63) = *reinterpret_cast<uint32_t*>(&rax55) / *reinterpret_cast<uint32_t*>(&r9_61);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax63) + 4) = 0;
    less64 = *reinterpret_cast<int16_t*>(&rax63) < reinterpret_cast<int16_t>(0x6d21);
    *reinterpret_cast<uint16_t*>(&rax63) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax63) - reinterpret_cast<uint16_t>(0x6d21 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rax63) < 0x6d21)));
    if (less64) {
        *reinterpret_cast<int16_t*>(&rsi51) = *reinterpret_cast<int16_t*>(&rbx54);
    }
    __asm__("bts ecx, r11d");
    __asm__("ror r11, 0xc4");
    __asm__("bsr r11, r13");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&cx53) + 1) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&cx49) + 1) - *reinterpret_cast<signed char*>(&rdx56)) - 1);
    edi65 = edi26 >> *reinterpret_cast<unsigned char*>(&cx53);
    __asm__("btc edx, edi");
    *reinterpret_cast<uint32_t*>(&rbx66) = *reinterpret_cast<uint32_t*>(&rbx54) >> *reinterpret_cast<unsigned char*>(&cx53);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx66) + 4) = 0;
    __asm__("bts r12d, eax");
    __asm__("shrd rdi, rbp, 0xf4");
    *reinterpret_cast<unsigned char*>(&r9_61) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_61) << 1);
    r10_67 = r10_59 & 0xffffffffbe6ebbb4;
    __asm__("shld r13W, r11w, 0x1");
    *reinterpret_cast<int16_t*>(&edi65) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&edi65) + 1);
    *reinterpret_cast<unsigned char*>(&rax63) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&edi65) < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&edi65) == 0)));
    __asm__("rol r9, cl");
    r14_68 = r14_58 + 1;
    __asm__("shrd bp, r11w, 0x1");
    r11d69 = r11d32 + *reinterpret_cast<int32_t*>(&rsi51) + 1;
    __asm__("bsr r15w, dx");
    bx70 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx66) >> 1);
    __asm__("btr rbx, rbx");
    *reinterpret_cast<uint16_t*>(&r13_14) = reinterpret_cast<uint16_t>(r13w60 - reinterpret_cast<uint16_t>(r13w60 + reinterpret_cast<uint1_t>(r13w60 < reinterpret_cast<uint16_t>(r13w60 + 1))));
    *reinterpret_cast<int32_t*>(&r12_71) = *reinterpret_cast<int32_t*>(&r12_50) - 0x59c14bd;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_71) + 4) = 0;
    __asm__("rcl bl, 1");
    *reinterpret_cast<uint16_t*>(&rcx33) = reinterpret_cast<uint16_t>(cx53 - reinterpret_cast<uint16_t>(0x7d02 + reinterpret_cast<uint1_t>(cx53 < reinterpret_cast<uint16_t>(0x7d02 + reinterpret_cast<uint1_t>(!!edi65)))));
    __asm__("rcl eax, 0x8c");
    *reinterpret_cast<uint32_t*>(&rdx72) = edx62 * 0xef9573fb ^ *reinterpret_cast<uint32_t*>(&rbp38);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx72) + 4) = 0;
    zf73 = reinterpret_cast<uint1_t>(r9_61 == rdx72);
    if (zf73) {
        r9_61 = rdx72;
    }
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic()) | zf73)) {
        r11d69 = *reinterpret_cast<uint32_t*>(&r15_31);
    }
    __asm__("rol esi, 0x88");
    *reinterpret_cast<signed char*>(&r10_67) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r10_67) + *reinterpret_cast<signed char*>(&rsi51));
    __asm__("shld r10w, dx, 0x1");
    tmp64_74 = r13_14 + rax63;
    r13_75 = tmp64_74;
    __asm__("bts r11d, 0xe0");
    if (tmp64_74 < r13_14) {
        r14_68 = rax63;
    }
    __asm__("rcr di, cl");
    __asm__("btc rcx, 0x69");
    r15_76 = r15_31 | 0xc000000000000000;
    rax77 = rax63 / r15_76;
    __asm__("ror r12, 0x2e");
    __asm__("shld r14d, r9d, 0xb4");
    *reinterpret_cast<uint32_t*>(&rdi78) = reinterpret_cast<uint32_t>(~reinterpret_cast<int32_t>(-edi65));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi78) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rsi79) = *reinterpret_cast<int32_t*>(&r12_71) * 0x535e824c;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi79) + 4) = 0;
    r15d80 = *reinterpret_cast<int32_t*>(&r15_76) - 0x559ab7de + static_cast<uint1_t>(rsi79 >> r12_71);
    *reinterpret_cast<uint16_t*>(&rsi79) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi79) | *reinterpret_cast<uint16_t*>(&r15d80));
    __asm__("btr dx, bp");
    *reinterpret_cast<uint32_t*>(&r10_81) = *reinterpret_cast<uint32_t*>(&r10_67) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_81) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_82) = *reinterpret_cast<int16_t*>(&r13_75);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_82) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rsi83) = *reinterpret_cast<int32_t*>(&rsi79) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi83) + 4) = 0;
    __asm__("shrd si, bx, 0xd");
    *reinterpret_cast<unsigned char*>(&rax77) = 0xff;
    if (1) {
        rcx33 = rsi83;
    }
    r13_84 = reinterpret_cast<int64_t>(r13_75) >> *reinterpret_cast<unsigned char*>(&rcx33);
    r11d85 = reinterpret_cast<int32_t>(r11d69) >> -84;
    __asm__("rol r10, 0x2e");
    si86 = *reinterpret_cast<unsigned char*>(&rcx33);
    *reinterpret_cast<unsigned char*>(&r9_61) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_61) + *reinterpret_cast<unsigned char*>(&si86));
    rax87 = rax77 * r9_61;
    __asm__("rcl r11, 1");
    __asm__("rcl r8w, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&bx70) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&bx70) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rax87) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&bx70) + 1) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rax87) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax87) + 1) < 0xcd)))));
    __asm__("rcr al, 1");
    __asm__("bsr rsi, r11");
    __asm__("btr rsi, 0x38");
    *reinterpret_cast<uint16_t*>(&rbx66) = reinterpret_cast<uint16_t>(bx70 >> -20);
    __asm__("shld ebx, r14d, cl");
    __asm__("ror bx, 1");
    __asm__("rol r12d, cl");
    __asm__("shld rax, rdx, 0x1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx33) + 1) = 0;
    if (!__intrinsic()) {
        r14_68 = rdi78;
    }
    *reinterpret_cast<uint16_t*>(&rdi78) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi78) - reinterpret_cast<uint16_t>(0x16e4 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rdi78) < 0xe91d)));
    rax88 = *reinterpret_cast<int32_t*>(&rax87);
    *reinterpret_cast<unsigned char*>(&rcx33) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx33) & 15);
    __asm__("shrd si, bp, cl");
    *reinterpret_cast<uint32_t*>(&rcx89) = (*reinterpret_cast<uint32_t*>(&rcx33) | 0x2d52679) - r15d80;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx89) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rbx66) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx66) + 12) + 1);
    *reinterpret_cast<uint16_t*>(&r11d85) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11d85) | 0x9d7f);
    rbp90 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<signed char*>(&si86)));
    *reinterpret_cast<unsigned char*>(&r9_61) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r9_61) >> *reinterpret_cast<signed char*>(&rcx89));
    *reinterpret_cast<unsigned char*>(&r13_84) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_84) >> 1);
    *reinterpret_cast<int32_t*>(&r14_91) = *reinterpret_cast<int32_t*>(&r14_68) + 0x354b8e68;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_91) + 4) = 0;
    __asm__("shld r11d, r13d, 0x1");
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx66) + 1) == *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx66) + 1)) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx66) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx66) + 1);
    }
    r15_92 = rbx66;
    *reinterpret_cast<uint16_t*>(&rbx66) = 0x2655;
    if (1) {
        *reinterpret_cast<uint32_t*>(&rcx89) = *reinterpret_cast<uint32_t*>(&rdi78);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx89) + 4) = 0;
    }
    if (0) {
        *reinterpret_cast<uint32_t*>(&rbx66) = *reinterpret_cast<uint32_t*>(&r15_92);
    }
    __asm__("rcr bx, 0xe");
    if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int64_t>(&rax88) + 1)) {
        *reinterpret_cast<uint16_t*>(&r15_92) = *reinterpret_cast<uint16_t*>(&rbx66);
    }
    if (!reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(reinterpret_cast<int64_t>(&rax88) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int64_t>(&rax88) + 1))) {
    }
    *reinterpret_cast<uint32_t*>(&r11_93) = r11d85 - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_93) + 4) = 0;
    __asm__("rol r14w, 1");
    eax94 = *reinterpret_cast<int32_t*>(&rax88) * *reinterpret_cast<uint32_t*>(&r10_81);
    edx95 = __intrinsic();
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax94) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax94) + 1) - 1);
    if (reinterpret_cast<int64_t>(r8_82) >= reinterpret_cast<int64_t>(0x48da82a0)) {
        *reinterpret_cast<uint16_t*>(&r9_61) = *reinterpret_cast<uint16_t*>(&rdi78);
    }
    *reinterpret_cast<unsigned char*>(&rbp90) = reinterpret_cast<uint1_t>(!!(r8_82 - 0x48da82a0));
    eax96 = eax94 & *reinterpret_cast<uint32_t*>(&rbp90);
    __asm__("ror ecx, 0xb");
    __asm__("shrd ebp, ecx, 0x1b");
    if (-*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&edx95) + 1)) {
        rbp90 = (r13_84 >> 0xffffffffffffff91) + r15_92 + reinterpret_cast<uint1_t>(r8_82 < 0x48da82a0);
    }
    if (__intrinsic() == __intrinsic()) {
    }
    r14w97 = *reinterpret_cast<uint16_t*>(&rcx89);
    *reinterpret_cast<uint16_t*>(&rcx89) = static_cast<uint16_t>(r11d85 + 0xcb);
    tmp8_98 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_93) + *reinterpret_cast<unsigned char*>(&r9_61)) + reinterpret_cast<uint1_t>(!!*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&edx95) + 1)));
    cf99 = tmp8_98 < *reinterpret_cast<unsigned char*>(&r11_93);
    *reinterpret_cast<unsigned char*>(&r11_93) = tmp8_98;
    *reinterpret_cast<uint16_t*>(&rbp90) = *reinterpret_cast<uint16_t*>(&r9_61);
    if (cf99) {
    }
    *reinterpret_cast<uint16_t*>(&r14_91) = reinterpret_cast<uint16_t>(r14w97 - reinterpret_cast<uint16_t>(0x4077 + reinterpret_cast<uint1_t>(r14w97 < 0x4077)));
    r8w100 = *reinterpret_cast<unsigned char*>(&r14_91);
    __asm__("rcr rsi, 1");
    *reinterpret_cast<unsigned char*>(&rbp90) = 1;
    __asm__("btr r12, 0x49");
    rcx101 = rcx89 - r11_93;
    esi102 = 0xb165e8af;
    __asm__("rcr di, 1");
    __asm__("rcl esi, 0x3a");
    *reinterpret_cast<uint16_t*>(&r15_92) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_92) << *reinterpret_cast<unsigned char*>(&rcx101));
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax96) + 1) = -20;
    __asm__("shrd r15d, edi, 0x1");
    __asm__("shld esi, ecx, 0x1");
    __asm__("rol r13d, 0x6a");
    __asm__("rol r11w, 1");
    eax103 = eax96 * *reinterpret_cast<uint32_t*>(&r11_93);
    *reinterpret_cast<int32_t*>(&rdx104) = __intrinsic();
    r14_105 = r14_91 - (0x3a279ef7 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r14_91 < 0x3a279ef7)));
    *reinterpret_cast<uint16_t*>(&r14_105) = *reinterpret_cast<unsigned char*>(&rcx101);
    *reinterpret_cast<unsigned char*>(&r15_92) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_92) + 0x8d) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_81) - 99) + 1) < *reinterpret_cast<unsigned char*>(&r10_81)));
    cf106 = reinterpret_cast<uint1_t>(rbp90 < 0xffffffffaaf8c587);
    rbp107 = rbp90 - (0x55073a79 - static_cast<uint64_t>(cf106));
    if (rbp107 == static_cast<uint64_t>(cf106)) {
    }
    __asm__("shld rsi, r11, 0xe9");
    if (reinterpret_cast<uint16_t>(r8w100 + 0xe53) >= r8w100) {
    }
    *reinterpret_cast<int32_t*>(&r12_108) = *reinterpret_cast<int32_t*>(&rbp107) * 0x286d2712;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_108) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&esi102) = __intrinsic();
    *reinterpret_cast<uint32_t*>(&r13_109) = reinterpret_cast<uint32_t>(0 >> -35);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_109) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r11_93) = 0xffff;
    __asm__("shld rdx, rsi, 0x65");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx104) + 1) = *reinterpret_cast<unsigned char*>(&rcx101);
    ebp110 = 0x953f8402;
    *reinterpret_cast<int16_t*>(&rcx101) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rcx101) + 0x1fcc);
    *reinterpret_cast<uint32_t*>(&rsi111) = esi102 + 0x64ebf2cd + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi111) + 4) = 0;
    __asm__("bsr edi, ebp");
    *reinterpret_cast<unsigned char*>(&rcx101) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx101) & 15);
    __asm__("shld si, r12w, cl");
    __asm__("shrd r10, r12, 0xcf");
    sf112 = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax103) + 1) + 1) < 0);
    r9_113 = r12_108;
    eax114 = *reinterpret_cast<signed char*>(&eax103);
    *reinterpret_cast<unsigned char*>(&r10_81) = sf112;
    if (sf112 != __intrinsic()) {
        r9_113 = rcx101;
    }
    __asm__("rcr rcx, 1");
    *reinterpret_cast<int16_t*>(&rsi111) = reinterpret_cast<int16_t>(~*reinterpret_cast<int16_t*>(&rsi111));
    if (r9_113 == r15_92) {
        tmp64_115 = r9_113;
        r9_113 = r15_92;
        r15_92 = tmp64_115;
    }
    *reinterpret_cast<unsigned char*>(&ebp110) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(2 + *reinterpret_cast<unsigned char*>(&r9_113))));
    *reinterpret_cast<signed char*>(&eax114) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax114) - 73);
    *reinterpret_cast<unsigned char*>(&r9_113) = reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&r9_113) >= *reinterpret_cast<int16_t*>(&ebp110));
    __asm__("xadd r8w, r14w");
    __asm__("shrd r11, r15, cl");
    *reinterpret_cast<uint16_t*>(&rdi78) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&rdi78) >> -100) >> 1) << *reinterpret_cast<unsigned char*>(&rcx101)) & 0x68e5);
    *reinterpret_cast<int32_t*>(&rdx116) = *reinterpret_cast<int32_t*>(&rdx104) - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx116) + 4) = 0;
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r15_92) = *reinterpret_cast<uint16_t*>(&r14_105);
    }
    eax117 = *reinterpret_cast<int16_t*>(&eax114) + *reinterpret_cast<uint32_t*>(&r10_81);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax117) < reinterpret_cast<int32_t>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(eax117 == 0))) {
        r9_113 = rdx116;
    }
    __asm__("rcr ebx, 1");
    __asm__("rol r14w, 0xe9");
    *reinterpret_cast<uint32_t*>(&rax118) = eax117 * ebp110;
    __asm__("shrd edx, r13d, 0x1");
    __asm__("rcr r15w, 1");
    if (__intrinsic() - 1 < 0) {
        rax118 = rsi111;
    }
    __asm__("shrd edi, ebx, 0x84");
    __asm__("rol r10b, 1");
    *reinterpret_cast<uint32_t*>(&rax119) = *reinterpret_cast<uint32_t*>(&rax118) * *reinterpret_cast<int32_t*>(&r14_105);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax119) + 4) = 0;
    al120 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax119) + 0xd8) + 1);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(al120) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(al120 == 0))) {
        r11_93 = r15_92;
    }
    __asm__("bts r13W, 0xb0");
    __asm__("bsf esi, r11d");
    *reinterpret_cast<int32_t*>(&rdx121) = __intrinsic() + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx121) + 4) = 0;
    __asm__("cwd ");
    *reinterpret_cast<uint32_t*>(&rsi122) = *reinterpret_cast<uint32_t*>(&rsi111) << 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi122) + 4) = 0;
    __asm__("shld bp, r12w, cl");
    __asm__("rol r11, 0xc4");
    *reinterpret_cast<int32_t*>(&r8_123) = *reinterpret_cast<int16_t*>(&r11_93);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_123) + 4) = 0;
    ecx124 = *reinterpret_cast<uint32_t*>(&r11_93) * 0xee703aae;
    __asm__("rcl rdi, cl");
    __asm__("ror cx, 1");
    __asm__("rcr r13b, 1");
    __asm__("ror r12w, 0xd4");
    r12_125 = static_cast<uint64_t>(*reinterpret_cast<unsigned char*>(&rdx116)) * 0xffffffffce69846a;
    *reinterpret_cast<unsigned char*>(&rax119) = reinterpret_cast<unsigned char>(al120 << *reinterpret_cast<unsigned char*>(&ecx124));
    *reinterpret_cast<unsigned char*>(&rdx121) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx121) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(!__intrinsic())));
    if (reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdx121) == 0)) {
        r10_81 = r10_81;
    }
    __asm__("btc bx, 0xcc");
    r9_126 = r9_113 << 1;
    *reinterpret_cast<uint32_t*>(&r10_127) = *reinterpret_cast<uint32_t*>(&r10_81) - *reinterpret_cast<uint32_t*>(&r15_92);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_127) + 4) = 0;
    __asm__("rcr r8d, 0x76");
    __asm__("ror r10, cl");
    *reinterpret_cast<uint16_t*>(&r13_109) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_109) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx121) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx121) + 1) << 1);
    __asm__("rcr r10w, 1");
    __asm__("btr ebp, ecx");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax119) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax119) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax119) + 1));
    rcx128 = *reinterpret_cast<signed char*>(&r8_123);
    __asm__("rcr r10, 1");
    __asm__("rcr si, 1");
    if (1) {
        r13_109 = r10_127;
    }
    r14_129 = r8_123;
    *reinterpret_cast<unsigned char*>(&r12_125) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_125) & *reinterpret_cast<unsigned char*>(&r8_123));
    rbx130 = *reinterpret_cast<unsigned char*>(&r15_92);
    __asm__("shld r15d, r13d, cl");
    rdx131 = reinterpret_cast<uint64_t>(rdx121 * 0xffffffffa796f0d7);
    __asm__("rcl ch, 1");
    r8_132 = 0xbd1e75aeeeaf2bd3;
    if (1) {
        *reinterpret_cast<uint16_t*>(&r9_126) = *reinterpret_cast<uint16_t*>(&rdx131);
    }
    __asm__("rcl bpl, 1");
    *reinterpret_cast<uint32_t*>(&rbp133) = ebp110 - (0x39a87bcd + reinterpret_cast<uint1_t>(ebp110 < 0x39a87bcd));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp133) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r11_134) = *reinterpret_cast<uint32_t*>(&r11_93) | *reinterpret_cast<uint32_t*>(&r13_109);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_134) + 4) = 0;
    __asm__("btc rdi, 0xfb");
    rdx135 = rdx131 ^ r11_134;
    __asm__("rcr r15b, 0xd0");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx128) + 1) = 35;
    *reinterpret_cast<uint16_t*>(&r12_125) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_125) ^ 0x2a5);
    __asm__("rol r12, cl");
    __asm__("shrd r11w, r10w, 0x8");
    *reinterpret_cast<uint16_t*>(&rbx130) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx130) >> 1);
    *reinterpret_cast<unsigned char*>(&r11_134) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_134) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax119) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r11_134) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax119) + 1))));
    if (reinterpret_cast<uint1_t>(reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&r9_126) & 0xe73f) < reinterpret_cast<int16_t>(0)) | reinterpret_cast<uint1_t>((*reinterpret_cast<uint16_t*>(&r9_126) & 0xe73f) == 0)) {
        *reinterpret_cast<uint32_t*>(&rsi122) = *reinterpret_cast<uint32_t*>(&rcx128);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi122) + 4) = 0;
    }
    if (1) {
        r12_125 = rbx130;
    }
    r13_136 = r13_109 | rax119;
    *reinterpret_cast<unsigned char*>(&rax119) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax119) - reinterpret_cast<unsigned char>(35 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rax119) < 36)));
    __asm__("ror edx, 0xf2");
    __asm__("rol r10d, 0x8d");
    rdi137 = rdi78 >> 1;
    *reinterpret_cast<uint16_t*>(&r15_92) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_92) + 0x7f6b);
    __asm__("bsf r9, r11");
    rbp138 = -rbp133 + r15_92;
    __asm__("ror r13, 0xde");
    if (r9_126 == 0xbd1e75aeeeaf2bd3) {
        tmp64_139 = r9_126;
        r9_126 = 0xbd1e75aeeeaf2bd3;
        r8_132 = tmp64_139;
    }
    __asm__("rcr r12b, 1");
    tmp16_140 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi122) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_125) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rsi122) < reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_125) + 1))));
    *reinterpret_cast<uint16_t*>(&rsi122) = *reinterpret_cast<uint16_t*>(&rax119);
    ax141 = tmp16_140;
    __asm__("ror r13, 0xa4");
    *reinterpret_cast<uint16_t*>(&r11_134) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_134) - *reinterpret_cast<int16_t*>(&rcx128));
    *reinterpret_cast<uint16_t*>(&r9_126) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_126) << 1);
    __asm__("cdq ");
    dx142 = 0xc126;
    r13_143 = r13_136 - r11_134;
    __asm__("rcl r14, 1");
    *reinterpret_cast<uint32_t*>(&r9_144) = *reinterpret_cast<uint32_t*>(&r9_126) & *reinterpret_cast<uint32_t*>(&r13_143);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_144) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rcx128) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx128) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&dx142) + 1))));
    cf145 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rbx130) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax141) + 1))));
    *reinterpret_cast<unsigned char*>(&rbx130) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx130) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax141) + 1) + cf145));
    __asm__("xadd r10d, edx");
    *reinterpret_cast<uint16_t*>(&r15_92) = *reinterpret_cast<uint16_t*>(&r11_134);
    __asm__("rcl r12w, cl");
    __asm__("btc r8, 0x3d");
    rsi146 = rsi122 - (0x3735a876 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(rsi122 < 0x3735a876 - static_cast<uint64_t>(cf145))));
    *reinterpret_cast<uint16_t*>(&r9_144) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_144) & 0x8294);
    *reinterpret_cast<unsigned char*>(&r10_127) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_127) + *reinterpret_cast<unsigned char*>(&ax141))));
    __asm__("btc r9d, r9d");
    if (*reinterpret_cast<unsigned char*>(&r10_127)) {
        r12_125 = rdi137;
    }
    ax147 = reinterpret_cast<uint16_t>(ax141 - reinterpret_cast<uint16_t>(0x6946 + reinterpret_cast<uint1_t>(ax141 < reinterpret_cast<uint16_t>(0x6946 + static_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbp138) >> -25)))));
    *reinterpret_cast<uint32_t*>(&rbx148) = *reinterpret_cast<uint32_t*>(&rbx130) & 0x90ef490f;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx148) + 4) = 0;
    if (!__intrinsic()) {
        rbp138 = r9_144;
    }
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rcx128) = *reinterpret_cast<uint32_t*>(&r12_125);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx128) + 4) = 0;
    }
    *reinterpret_cast<uint16_t*>(&r14_129) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_129) << 1);
    __asm__("cdq ");
    r12_149 = r12_125 - (r14_129 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r12_125 < r14_129 + static_cast<uint64_t>(__intrinsic()))));
    *reinterpret_cast<uint16_t*>(&r14_129) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_129) | 0xc000);
    dx150 = reinterpret_cast<uint16_t>(ax147 % *reinterpret_cast<uint16_t*>(&r14_129));
    cf151 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r13_143) < 0xe6);
    *reinterpret_cast<unsigned char*>(&r13_143) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_143) + 26);
    *reinterpret_cast<uint16_t*>(&rax119) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(ax147 / *reinterpret_cast<uint16_t*>(&r14_129)) + *reinterpret_cast<uint16_t*>(&rbp138)) + cf151);
    dl152 = reinterpret_cast<uint1_t>(!__intrinsic());
    rcx153 = -rcx128;
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r10_127) = *reinterpret_cast<int16_t*>(&rcx153);
    }
    *reinterpret_cast<uint32_t*>(&rax154) = *reinterpret_cast<uint32_t*>(&rax119) + *reinterpret_cast<uint32_t*>(&r12_149);
    *reinterpret_cast<uint16_t*>(&rbx148) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx148) + *reinterpret_cast<int16_t*>(&rdi137)) + 1);
    *reinterpret_cast<unsigned char*>(&dx150) = reinterpret_cast<unsigned char>(dl152 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx153) + reinterpret_cast<uint1_t>(dl152 < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx153) + 1))));
    cl155 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx153) & 15);
    __asm__("shld r15w, cx, cl");
    if (cl155 == *reinterpret_cast<unsigned char*>(&r15_92)) {
        tmp8_156 = cl155;
        cl155 = *reinterpret_cast<unsigned char*>(&r15_92);
        *reinterpret_cast<unsigned char*>(&r15_92) = tmp8_156;
    }
    rbx157 = rbx148 >> 1;
    *reinterpret_cast<unsigned char*>(&rax154) = reinterpret_cast<uint1_t>(!__intrinsic());
    r13_158 = r13_143 << 1;
    *reinterpret_cast<uint16_t*>(&r15_92) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_92) - reinterpret_cast<uint16_t>(0x1087 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r15_92) < reinterpret_cast<uint16_t>(0x1087 - __intrinsic()))));
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx157) + 1) = -0;
    *reinterpret_cast<uint32_t*>(&r11_159) = *reinterpret_cast<uint32_t*>(&r12_149) + *reinterpret_cast<int32_t*>(&r8_132) * 4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_159) + 4) = 0;
    __asm__("bsr di, r12w");
    ebp160 = *reinterpret_cast<int32_t*>(&rbp138) >> cl155;
    ax161 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax154) - reinterpret_cast<uint16_t>(dx150 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rax154) < reinterpret_cast<uint16_t>(dx150 + 1))));
    r8_162 = r8_132 ^ 0xffffffffc72dcfcd;
    cl163 = reinterpret_cast<unsigned char>(cl155 - *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax161) + 1));
    zf164 = *reinterpret_cast<uint32_t*>(&r11_159) == *reinterpret_cast<uint32_t*>(&rbx157);
    *reinterpret_cast<signed char*>(&r11_159) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&r11_159));
    if (!zf164) {
        *reinterpret_cast<int16_t*>(&ebp160) = *reinterpret_cast<int16_t*>(&rsi146);
    }
    *reinterpret_cast<int16_t*>(&rdx135) = __intrinsic();
    *reinterpret_cast<uint16_t*>(&r13_158) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_158) >> cl163);
    rdi165 = rdi137 >> cl163;
    __asm__("shrd r9d, r8d, 0x4a");
    __asm__("shld r9d, r12d, 0xdb");
    __asm__("ror r14d, cl");
    r12d166 = *reinterpret_cast<uint32_t*>(&r12_149) ^ 0xa848bf4a;
    if (1) {
        r15_92 = rdx135;
    }
    __asm__("rcl r9d, 1");
    __asm__("rcr r15, 1");
    __asm__("shrd rax, rdx, 0x0");
    *reinterpret_cast<unsigned char*>(&rcx153) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(cl163) >> 1);
    __asm__("xadd dl, r9b");
    __asm__("ror bp, 0x1f");
    __asm__("btr rbx, 0xba");
    *reinterpret_cast<int32_t*>(&r9_167) = 0x711b0250;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_167) + 4) = 0;
    r11_168 = reinterpret_cast<uint64_t>(r11_159 - 0x6ecb58e3);
    *reinterpret_cast<int32_t*>(&rbp169) = ~ebp160;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp169) + 4) = 0;
    __asm__("btc r11, r15");
    if (rbp169 == r15_92) {
        rbp169 = r15_92;
    }
    *reinterpret_cast<unsigned char*>(&rbx157) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx157) >> -18);
    ecx170 = *reinterpret_cast<int32_t*>(&rcx153) >> *reinterpret_cast<unsigned char*>(&rcx153);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx135) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx135) + 1) & 0x75);
    __asm__("xadd al, dl");
    __asm__("bts r14w, r8w");
    __asm__("btc r14w, r11w");
    if (!(*reinterpret_cast<unsigned char*>(&rbx157) & *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx170) + 1))) {
        *reinterpret_cast<uint16_t*>(&r12d166) = *reinterpret_cast<uint16_t*>(&r12d166);
    }
    __asm__("btr r13, 0xcc");
    __asm__("shrd rsi, rdi, 0xa4");
    *reinterpret_cast<unsigned char*>(&cx171) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx170) & 15);
    __asm__("shld dx, r13W, cl");
    __asm__("rcr r12b, 1");
    *reinterpret_cast<int32_t*>(&r8_172) = *reinterpret_cast<int32_t*>(&r8_162) >> -31;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_172) + 4) = 0;
    __asm__("shrd ecx, ebx, 0x31");
    *reinterpret_cast<int16_t*>(&rbx157) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbx157) >> 0xff87);
    __asm__("btc r9d, 0xf4");
    edx173 = ~*reinterpret_cast<int32_t*>(&rdx135);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&cx171) + 1) = *reinterpret_cast<signed char*>(&edx173);
    rbx174 = rbx157 << *reinterpret_cast<unsigned char*>(&cx171);
    *reinterpret_cast<uint32_t*>(&r13_175) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_158) >> *reinterpret_cast<unsigned char*>(&cx171));
    r14_176 = *reinterpret_cast<signed char*>(&r10_127) + 0x397c41c8;
    __asm__("rol di, cl");
    *reinterpret_cast<int32_t*>(&rdx177) = edx173 + *reinterpret_cast<int32_t*>(&r11_168);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx177) + 4) = 0;
    cx178 = reinterpret_cast<int16_t>(cx171 - 1);
    *reinterpret_cast<unsigned char*>(&r8_172) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("rcr dl, 1");
    r15d179 = 0x6b83929b;
    __asm__("rcl r13W, 0x2f");
    __asm__("bts r11w, 0xf1");
    *reinterpret_cast<unsigned char*>(&r12d166) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r12d166) >> 1) >> *reinterpret_cast<unsigned char*>(&cx178));
    *reinterpret_cast<int16_t*>(&r10_127) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r10_127) * 0xc1f3);
    if (reinterpret_cast<int32_t>(*reinterpret_cast<int32_t*>(&rbx174) - 0x6db0dc6 + 1) >= reinterpret_cast<int32_t>(0)) {
        *reinterpret_cast<uint32_t*>(&r14_176) = *reinterpret_cast<uint32_t*>(&r10_127);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_176) + 4) = 0;
    }
    __asm__("xadd dh, bl");
    __asm__("btr r9, 0x3b");
    cf180 = reinterpret_cast<uint1_t>(0x929b < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r12d166))));
    *reinterpret_cast<uint16_t*>(&r15d179) = reinterpret_cast<uint16_t>(0x929b - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12d166) + cf180));
    if (*reinterpret_cast<int16_t*>(&r15d179) >= reinterpret_cast<int16_t>(static_cast<uint32_t>(cf180))) {
        *reinterpret_cast<int16_t*>(&rbp169) = *reinterpret_cast<int16_t*>(&rdi165);
    }
    rbp181 = rbp169 + 0x54fd539e;
    ebp182 = *reinterpret_cast<int32_t*>(&rbp181) + 0x496a3511;
    __asm__("rcl rax, 1");
    __asm__("ror cl, 0x7b");
    __asm__("rol ah, 0x4c");
    r13w183 = 0xd861;
    __asm__("rcl r10d, 0x25");
    __asm__("shld r13, r12, 0x9b");
    rsi184 = rdx177 * 0x4930ab6a;
    rax185 = 0xfffffffffc2076af;
    if (__intrinsic()) {
    }
    *reinterpret_cast<uint16_t*>(&ebp182) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebp182) ^ 0xdd4a) & 0x4a3a);
    rdi186 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int16_t*>(&rsi184)));
    cl187 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&cx178) | 0xc0);
    *reinterpret_cast<uint16_t*>(&rdx177) = reinterpret_cast<uint16_t>(0x36af % reinterpret_cast<uint16_t>(static_cast<int16_t>(reinterpret_cast<signed char>(cl187))));
    *reinterpret_cast<uint16_t*>(&rax185) = reinterpret_cast<uint16_t>(0x36af / reinterpret_cast<uint16_t>(static_cast<int16_t>(reinterpret_cast<signed char>(cl187))));
    edx188 = ebp182;
    ebp189 = *reinterpret_cast<int32_t*>(&rdx177);
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&ebp189) = *reinterpret_cast<uint16_t*>(&rsi184);
    }
    __asm__("ror esi, 1");
    __asm__("shrd rbp, rax, cl");
    r12_190 = *reinterpret_cast<uint16_t*>(&edx188);
    eax191 = *reinterpret_cast<int16_t*>(&rax185);
    __asm__("xadd bl, bl");
    __asm__("shrd r9d, r14d, 0x9e");
    rbx192 = 0x928b74de;
    __asm__("rcr r8w, 1");
    if (0) {
        *reinterpret_cast<int32_t*>(&rsi184) = *reinterpret_cast<int32_t*>(&r8_172);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi184) + 4) = 0;
    }
    *reinterpret_cast<int16_t*>(&ecx170) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax191) + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax193) + 1) = 1;
    __asm__("shld r8d, edx, 0x2f");
    __asm__("shld bx, r9w, 0x5");
    *reinterpret_cast<int32_t*>(&r15_194) = r15d179 >> 0xffffff95;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_194) + 4) = 0;
    __asm__("ror rdi, cl");
    *reinterpret_cast<uint16_t*>(&rsi184) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rsi184) >> 1);
    r14_195 = r14_176 >> *reinterpret_cast<unsigned char*>(&ecx170);
    __asm__("shld r12, rdx, cl");
    *reinterpret_cast<unsigned char*>(&ax193) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax191) >> static_cast<unsigned char>(reinterpret_cast<uint1_t>((*reinterpret_cast<uint32_t*>(&r14_176) & *reinterpret_cast<uint32_t*>(&rax185)) == 0))) | reinterpret_cast<unsigned char>(-*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&edx188) + 1)));
    *reinterpret_cast<unsigned char*>(&r14_195) = __intrinsic();
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&r14_195) = ecx170;
    }
    __asm__("shrd r14d, ebp, 0x1");
    __asm__("bts bx, dx");
    __asm__("rcr r14b, 0xdc");
    cl196 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx170) + 20);
    *reinterpret_cast<unsigned char*>(&rsi184) = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(cl196) >= reinterpret_cast<signed char>(0));
    __asm__("shld cx, r12w, 0x2");
    __asm__("shld r11w, r8w, cl");
    __asm__("btr ebx, r10d");
    *reinterpret_cast<signed char*>(&ebp189) = reinterpret_cast<signed char>(33 + *reinterpret_cast<signed char*>(&r12_190));
    *reinterpret_cast<uint16_t*>(&r12_190) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_190) >> 1);
    __asm__("shld ax, r15w, cl");
    __asm__("rol ax, 1");
    __asm__("rcr al, 0x10");
    __asm__("rol r10w, cl");
    __asm__("rol r9w, 1");
    *reinterpret_cast<signed char*>(&r9_167) = reinterpret_cast<signed char>(1 >> reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(cl196 & 15) & 15));
    __asm__("ror dh, 1");
    ax197 = reinterpret_cast<uint16_t>(ax193 | 0xc000);
    *reinterpret_cast<uint16_t*>(&eax191) = reinterpret_cast<uint16_t>(ax197 / ax197);
    if (0) {
        tmp64_198 = r8_172;
        rdi186 = tmp64_198;
    }
    __asm__("rcl r10w, cl");
    __asm__("xadd dil, r15b");
    __asm__("rcr ecx, 1");
    *reinterpret_cast<uint32_t*>(&rax199) = reinterpret_cast<uint32_t>(eax191 * 0x928b2014 + 0x1858ab2a);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax199) + 4) = 0;
    __asm__("xadd r10b, dl");
    __asm__("btr esi, r10d");
    *reinterpret_cast<signed char*>(&r13w183) = reinterpret_cast<signed char>(97 >> 0x96);
    __asm__("ror edx, 0xc2");
    *reinterpret_cast<int16_t*>(&rbx192) = 0x9436;
    rax200 = rax199 << 1;
    *reinterpret_cast<uint32_t*>(&rcx201) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&r13w183)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx201) + 4) = 0;
    rsi202 = r9_167;
    r9_203 = rsi184;
    *reinterpret_cast<int32_t*>(&r14_204) = *reinterpret_cast<int32_t*>(&r14_195) + 0x833ea67;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_204) + 4) = 0;
    __asm__("shld rbx, r13, 0x43");
    *reinterpret_cast<int16_t*>(&r13_175) = reinterpret_cast<int16_t>(r13w183 << *reinterpret_cast<unsigned char*>(&rcx201));
    if (__intrinsic()) {
        r9_203 = 0x31601f1b5f700066;
    }
    __asm__("shld r11d, edx, cl");
    *reinterpret_cast<uint32_t*>(&r13_205) = *reinterpret_cast<uint32_t*>(&r13_175) ^ 0xa5806464;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_205) + 4) = 0;
    __asm__("shrd dx, r14w, 0xb");
    if (!(r12_190 & 0x789c8475)) {
    }
    __asm__("rcl r13, 0x1e");
    __asm__("shrd ebp, ecx, 0x1");
    *reinterpret_cast<unsigned char*>(&rax200) = 0;
    __asm__("xadd r12, r15");
    *reinterpret_cast<unsigned char*>(&cx206) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx201) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi186) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx201) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rdi186))))));
    __asm__("bsr ecx, eax");
    *reinterpret_cast<uint16_t*>(&ebp189) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ebp189) | 0xe814);
    less207 = __intrinsic();
    *reinterpret_cast<unsigned char*>(&rsi202) = reinterpret_cast<uint1_t>(!less207);
    if (!less207) {
        r15_194 = rax200;
    }
    __asm__("rol rdi, 0x95");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&cx206) + 1) = 0;
    __asm__("ror r14w, 0xbd");
    __asm__("rcr bh, 1");
    *reinterpret_cast<unsigned char*>(&r13_205) = reinterpret_cast<uint1_t>(__intrinsic());
    __asm__("rol r9d, 0x68");
    *reinterpret_cast<int16_t*>(&r14_204) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r14_204) >> -80);
    *reinterpret_cast<unsigned char*>(&rbx192) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(54 >> *reinterpret_cast<unsigned char*>(&cx206)) ^ *reinterpret_cast<unsigned char*>(&cx206));
    *reinterpret_cast<uint16_t*>(&r13_205) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_205) >> *reinterpret_cast<unsigned char*>(&cx206));
    __asm__("rol r12b, 0x4c");
    __asm__("shrd r12, r9, 0x2e");
    *reinterpret_cast<int16_t*>(&rcx201) = reinterpret_cast<int16_t>(cx206 + 1);
    __asm__("ror rsi, 1");
    __asm__("bts ecx, 0xb6");
    if (r13_205 == rsi202) {
        tmp64_208 = r13_205;
        r13_205 = rsi202;
        rsi202 = tmp64_208;
    }
    __asm__("rol r13d, cl");
    __asm__("rol edx, 0x97");
    __asm__("btc r10d, edx");
    r13d209 = *reinterpret_cast<uint32_t*>(&r13_205) >> 24 | *reinterpret_cast<uint32_t*>(&r13_205) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&r13_205) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&r13_205) << 24;
    __asm__("bsf r10, rbp");
    if (__undefined()) {
        r15_194 = rdi186;
    }
    *reinterpret_cast<unsigned char*>(&rcx201) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx201) << 1);
    *reinterpret_cast<uint32_t*>(&r10_210) = 0x5f700066 + *reinterpret_cast<uint32_t*>(&rcx201);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_210) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_211) = *reinterpret_cast<int32_t*>(&r14_204) + *reinterpret_cast<int32_t*>(&r14_204) * 8 + 26;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_211) + 4) = 0;
    if (__intrinsic()) {
    }
    r8_212 = r8_211 >> 1;
    *reinterpret_cast<unsigned char*>(&r10_210) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_210) >> 1);
    *reinterpret_cast<uint16_t*>(&r13d209) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13d209) >> 63);
    *reinterpret_cast<int16_t*>(&r8_212) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r8_212) << *reinterpret_cast<unsigned char*>(&rcx201));
    __asm__("ror rdi, cl");
    __asm__("shld r11w, di, 0x2");
    __asm__("ror r8d, cl");
    __asm__("rol r15b, 0x26");
    r9w213 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r9_203) << 1);
    __asm__("ror r13d, cl");
    *reinterpret_cast<uint32_t*>(&r12_214) = *reinterpret_cast<signed char*>(&ebp189) - 1 + r13d209 * 8 - 0x67fcf5c2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_214) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r10_210) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_210) >> -81);
    *reinterpret_cast<uint32_t*>(&rax215) = *reinterpret_cast<int32_t*>(&rbx192) * 0xcba0dab3 * *reinterpret_cast<uint32_t*>(&rcx201);
    *reinterpret_cast<int32_t*>(&rdx216) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx216) + 4) = 0;
    rsi217 = rsi202 << 57;
    r13d218 = r13d209 & 0xa62c4f49;
    if (__intrinsic()) {
        rax215 = r10_210;
    }
    *reinterpret_cast<uint32_t*>(&rdi219) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx192) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi219) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx192) + 1) = 1;
    r14_220 = reinterpret_cast<uint64_t>(r14_204 + r10_210);
    *reinterpret_cast<uint16_t*>(&r12_214) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_214) + *reinterpret_cast<int16_t*>(&rdi219));
    __asm__("rcl dh, 1");
    __asm__("rcl ebp, 1");
    __asm__("bts r8d, esi");
    __asm__("rol dl, cl");
    __asm__("ror ax, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx216) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx216) + 1) >> 0x75);
    *reinterpret_cast<unsigned char*>(&rcx201) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx201) & 15);
    __asm__("shrd r10w, r14w, cl");
    *reinterpret_cast<int16_t*>(&r13d218) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r13d218) - 1);
    *reinterpret_cast<uint32_t*>(&r10_221) = *reinterpret_cast<uint32_t*>(&r10_210) | 0x2eb497c2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_221) + 4) = 0;
    if (0) {
        *reinterpret_cast<uint32_t*>(&rsi217) = 0;
    }
    *reinterpret_cast<uint32_t*>(&r9_222) = *reinterpret_cast<unsigned char*>(&r9w213);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_222) + 4) = 0;
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rcx201) = *reinterpret_cast<uint32_t*>(&r14_220);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx201) + 4) = 0;
    }
    if (reinterpret_cast<int64_t>(rdx216) >= reinterpret_cast<int64_t>(0x4fd5d62c)) {
        *reinterpret_cast<int16_t*>(&r13d218) = *reinterpret_cast<int16_t*>(&r8_212);
    }
    *reinterpret_cast<int16_t*>(&rsi217) = 0;
    r14_223 = *reinterpret_cast<int32_t*>(&rbx192) + *reinterpret_cast<uint32_t*>(&rax215) * 8;
    *reinterpret_cast<signed char*>(&cx224) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rcx201) >> *reinterpret_cast<unsigned char*>(&rcx201));
    *reinterpret_cast<uint32_t*>(&rbp225) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx201) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp225) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r11_226) = *reinterpret_cast<uint16_t*>(&r12_214);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_226) + 4) = 0;
    rbx227 = rbx192 - 0x7d39fdf7;
    __asm__("bts r13, r14");
    *reinterpret_cast<unsigned char*>(&r8_212) = reinterpret_cast<uint1_t>(rbx192 < 0x7d39fdf7);
    if (*reinterpret_cast<signed char*>(&rdx216) == *reinterpret_cast<signed char*>(&r11_226)) {
        tmp8_228 = *reinterpret_cast<signed char*>(&rdx216);
        *reinterpret_cast<signed char*>(&rdx216) = *reinterpret_cast<signed char*>(&r11_226);
        *reinterpret_cast<signed char*>(&r11_226) = tmp8_228;
    }
    __asm__("rcl r10d, 0x4f");
    if (*reinterpret_cast<signed char*>(&r14_223) == *reinterpret_cast<signed char*>(&rdi219)) {
        tmp8_229 = *reinterpret_cast<signed char*>(&r14_223);
        *reinterpret_cast<signed char*>(&r14_223) = *reinterpret_cast<signed char*>(&rdi219);
        *reinterpret_cast<signed char*>(&rdi219) = tmp8_229;
    }
    __asm__("ror rax, 0xcb");
    *reinterpret_cast<int16_t*>(&r11_226) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r11_226) >> *reinterpret_cast<signed char*>(&cx224));
    *reinterpret_cast<signed char*>(&rdx216) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rdx216) - *reinterpret_cast<signed char*>(&rax215));
    __asm__("rol cx, cl");
    *reinterpret_cast<uint32_t*>(&r8_230) = *reinterpret_cast<uint32_t*>(&rax215);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_230) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rax231) = *reinterpret_cast<int32_t*>(&r8_212);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax231) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r13_232) = r13d218 - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_232) + 4) = 0;
    r14_233 = r14_223 >> *reinterpret_cast<signed char*>(&cx224);
    __asm__("bsr r10w, r13W");
    r10_234 = reinterpret_cast<uint64_t>(~r10_221);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx227) + 1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx201) + 1);
    __asm__("xadd dh, bh");
    if (reinterpret_cast<int64_t>(r10_234 & rbx227) >= reinterpret_cast<int64_t>(0)) {
        *reinterpret_cast<uint32_t*>(&rsi217) = *reinterpret_cast<uint32_t*>(&rdi219);
    }
    *reinterpret_cast<uint16_t*>(&rdx216) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx216) >> *reinterpret_cast<signed char*>(&cx224));
    __asm__("rol si, cl");
    *reinterpret_cast<int16_t*>(&rcx201) = 0;
    __asm__("shrd cx, r8w, 0x1");
    *reinterpret_cast<unsigned char*>(&rcx201) = 0;
    __asm__("shld si, di, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx227) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx227) + 1) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx216) + 1));
    *reinterpret_cast<uint32_t*>(&rsi235) = *reinterpret_cast<uint32_t*>(&rsi217) >> 1 | *reinterpret_cast<uint32_t*>(&rcx201);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi235) + 4) = 0;
    __asm__("rcl r12w, 1");
    return rax231 + rbx227 + rcx201 + rdx216 + rbp225 + rsi235 + rdi219 + r8_230 + r9_222 + r10_234 + r11_226 + r12_214 + r13_232 + r14_233 + (r15_194 & __intrinsic()) - 0x6345b3981;
}

uint64_t log_size_10_var_007(int64_t rdi, int64_t rsi) {
    int64_t r11_3;
    int64_t rbx4;
    int16_t dx5;
    int64_t r8_6;
    int64_t r13_7;
    int64_t rcx8;
    int64_t rax9;
    uint64_t rax10;
    int64_t rdx11;
    uint64_t r15_12;
    int64_t rcx13;
    int64_t r10_14;
    int64_t rdx15;
    uint64_t rdi16;
    uint32_t tmp32_17;
    uint64_t r15_18;
    uint1_t cf19;
    uint64_t rdx20;
    uint64_t tmp64_21;
    uint64_t tmp64_22;
    uint64_t rax23;
    uint32_t esi24;
    uint64_t rdx25;
    uint64_t rsi26;
    uint64_t r10_27;
    uint64_t r11_28;
    uint16_t bx29;
    uint32_t r9d30;
    int64_t r12_31;
    int64_t r14_32;
    int16_t ax33;
    uint32_t eax34;
    uint32_t r14d35;
    uint64_t rcx36;
    uint64_t r13_37;
    int64_t r14_38;
    uint16_t cx39;
    int16_t ax40;
    uint64_t r11_41;
    int16_t ax42;
    uint64_t r14_43;
    uint64_t rbx44;
    uint16_t tmp16_45;
    uint16_t r12w46;
    uint32_t eax47;
    uint1_t cf48;
    signed char tmp8_49;
    int64_t rax50;
    uint64_t rbp51;
    uint64_t rax52;
    uint64_t r14_53;
    uint64_t tmp64_54;
    int64_t rbp55;
    int64_t r15_56;
    uint64_t r13_57;
    uint64_t rdi58;
    uint64_t rdx59;
    uint32_t tmp32_60;
    uint64_t r11_61;
    int64_t rax62;
    uint32_t esi63;
    uint64_t rbx64;
    uint64_t rdx65;
    uint64_t rax66;
    uint32_t edi67;
    uint64_t rdi68;
    uint64_t rdx69;
    int64_t rax70;
    int64_t rax71;
    uint64_t rdx72;
    uint32_t ebx73;
    int64_t r15_74;
    uint64_t rdi75;
    uint64_t rdx76;
    uint32_t r10d77;
    int64_t r15_78;
    int32_t r13d79;
    uint16_t dx80;
    uint64_t r10_81;
    int64_t rsi82;
    uint64_t rcx83;
    uint64_t rbp84;
    uint64_t r14_85;
    unsigned char tmp8_86;
    uint1_t cf87;
    uint32_t ecx88;
    int64_t rbx89;
    uint1_t cf90;
    uint32_t r15d91;
    uint32_t r15d92;
    int64_t r9_93;
    uint32_t r15d94;
    int64_t r14_95;
    uint64_t r12_96;
    int64_t rax97;
    uint32_t r15d98;
    uint64_t r14_99;
    uint16_t cx100;
    uint32_t r13d101;
    uint64_t r15_102;
    int64_t rdx103;
    uint64_t r14_104;
    int64_t rbx105;
    int64_t r10_106;
    int64_t r13_107;
    uint1_t cf108;
    int64_t rbx109;
    int64_t rsi110;
    int64_t r11_111;
    int64_t rax112;
    uint64_t r9_113;
    int64_t rax114;
    int16_t dx115;
    uint64_t r14_116;
    uint16_t ax117;
    int64_t rbx118;
    uint64_t rcx119;
    uint64_t rcx120;
    int64_t r8_121;
    uint64_t rdx122;
    uint64_t rax123;
    uint32_t eax124;
    uint64_t rdi125;
    signed char tmp8_126;
    uint64_t rcx127;
    uint64_t r12_128;
    uint32_t eax129;
    uint64_t r8_130;
    uint32_t eax131;
    uint64_t rax132;
    uint64_t rdi133;
    int64_t rbx134;
    uint64_t rbx135;
    uint64_t rbx136;
    uint64_t rsi137;
    int64_t r11_138;
    uint64_t rcx139;
    int32_t tmp32_140;
    uint64_t r12_141;
    uint64_t rdx142;
    uint64_t rbp143;
    int64_t r12_144;
    uint64_t r15_145;
    int64_t r8_146;
    uint64_t rax147;
    uint32_t ebp148;
    uint64_t rdi149;
    uint16_t tmp16_150;
    uint64_t r9_151;
    uint64_t r13_152;
    uint64_t rbp153;
    uint16_t tmp16_154;
    uint1_t cf155;
    uint64_t rbx156;
    uint32_t edi157;
    uint64_t r13_158;
    int64_t r8_159;
    uint1_t less_or_equal160;
    int64_t rax161;
    uint64_t r14_162;
    uint64_t rdx163;
    uint64_t rax164;
    int1_t less_or_equal165;
    uint64_t r10_166;
    uint64_t rsi167;
    uint32_t edi168;
    int64_t rax169;
    unsigned char tmp8_170;
    uint64_t rax171;
    uint32_t ecx172;
    uint64_t r11_173;
    uint64_t rbp174;
    int64_t r15_175;
    int16_t bp176;
    int64_t rcx177;
    int64_t rdx178;
    uint64_t rax179;
    unsigned char ah180;
    uint1_t cf181;
    int1_t below_or_equal182;
    int1_t sf183;
    uint64_t rdi184;
    uint64_t rcx185;
    uint64_t r14_186;
    uint64_t r8_187;
    uint64_t rdi188;
    unsigned char ch189;
    uint64_t r13_190;
    uint64_t r11_191;
    uint64_t r9_192;
    uint64_t rbx193;
    uint64_t rax194;
    int64_t rdx195;
    uint64_t r13_196;
    int64_t rsi197;
    uint64_t r15_198;
    int64_t r9_199;
    uint16_t ax200;
    uint16_t dx201;
    unsigned char tmp8_202;
    uint1_t cf203;
    uint32_t r14d204;
    uint64_t rax205;
    uint16_t r14w206;
    uint64_t r10_207;
    int32_t r11d208;
    uint64_t rsi209;
    uint64_t rcx210;
    uint64_t rbx211;
    int64_t r13_212;
    int64_t r9_213;
    uint32_t eax214;
    uint32_t r15d215;
    int16_t ax216;
    uint32_t r9d217;
    int64_t rdx218;
    int64_t rax219;
    uint32_t r9d220;
    int64_t r8_221;
    int64_t r14_222;
    int64_t r15_223;
    int64_t r11_224;
    uint64_t r15_225;
    uint64_t r9_226;
    int64_t rbp227;
    uint32_t tmp32_228;

    r11_3 = 0x3bd7b455ee8b4737;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx4) + 1) = 0xd5;
    __asm__("rcl r8b, 0xc2");
    *reinterpret_cast<unsigned char*>(&rbx4) = 0xd1;
    *reinterpret_cast<signed char*>(&r11_3) = 0x85;
    dx5 = __intrinsic();
    __asm__("shld r14w, r8w, cl");
    __asm__("shrd r8w, bp, cl");
    __asm__("btr ebp, eax");
    __asm__("ror r13W, 1");
    if (!(*reinterpret_cast<signed char*>(&dx5) + *reinterpret_cast<signed char*>(&dx5))) {
        *reinterpret_cast<uint32_t*>(&r11_3) = 0xb87b;
    }
    __asm__("rcl r11, cl");
    __asm__("xadd ecx, r8d");
    __asm__("rcl r15d, 0xce");
    __asm__("xadd r13, rdi");
    __asm__("ror r12b, cl");
    __asm__("shld r12w, bx, 0x2");
    r8_6 = 0x2eaaf01180b83fa4;
    __asm__("rcr r13b, 0xfc");
    __asm__("shrd r8d, r14d, 0x1");
    *reinterpret_cast<uint32_t*>(&r13_7) = 0x26849890;
    *reinterpret_cast<int32_t*>(&rcx8) = 0x49333f30;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = 0;
    __asm__("rcl r15, 1");
    __asm__("rcl ebx, 1");
    __asm__("xadd r15d, eax");
    *reinterpret_cast<unsigned char*>(&r8_6) = __intrinsic();
    *reinterpret_cast<uint32_t*>(&rax9) = *reinterpret_cast<uint32_t*>(&r11_3);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    __asm__("rcl bp, 1");
    *reinterpret_cast<signed char*>(&r11_3) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r11_3) >> 1);
    __asm__("rcl rcx, 1");
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(1 != __intrinsic())))) {
        rbx4 = 0xffffffffffffff90;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx8) + 1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx4) + 1);
    __asm__("ror r13b, cl");
    __asm__("ror di, 0xe");
    rax10 = reinterpret_cast<uint64_t>((rax9 - 1) * 0x2a6abb9cf10e4f9 * 0xb149c6bcb7c720f0);
    rdx11 = __intrinsic();
    *reinterpret_cast<int32_t*>(&r15_12) = -0xd5fed518;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_12) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&r15_12)) {
        *reinterpret_cast<uint32_t*>(&r13_7) = *reinterpret_cast<uint32_t*>(&r11_3);
    }
    rcx13 = rcx8 + 0x5267c2e6;
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rdx11) = *reinterpret_cast<uint32_t*>(&r8_6);
    }
    __asm__("shrd r14d, r8d, 0x1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx13) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx13) + 1) + *reinterpret_cast<signed char*>(&rdx11))));
    *reinterpret_cast<uint16_t*>(&r11_3) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r11_3) >> *reinterpret_cast<unsigned char*>(&rcx13));
    *reinterpret_cast<unsigned char*>(&rbx4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx4) << *reinterpret_cast<unsigned char*>(&rcx13));
    __asm__("xadd ah, ah");
    *reinterpret_cast<int32_t*>(&r10_14) = 0x7d4ab542;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_14) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r13_7) = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&r13_7) + 1) >> *reinterpret_cast<unsigned char*>(&rcx13));
    __asm__("shld bx, r9w, 0x9");
    __asm__("btc r12d, r11d");
    *reinterpret_cast<uint16_t*>(&rcx13) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx13) ^ *reinterpret_cast<uint16_t*>(&rbx4));
    *reinterpret_cast<uint32_t*>(&rdx15) = *reinterpret_cast<uint32_t*>(&rdx11) - 0xe45e8803;
    *reinterpret_cast<int32_t*>(&rdi16) = reinterpret_cast<int32_t>(0xb87b) >> *reinterpret_cast<unsigned char*>(&rcx13);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi16) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rdx15) == *reinterpret_cast<uint32_t*>(&r13_7)) {
        tmp32_17 = *reinterpret_cast<uint32_t*>(&rdx15);
        *reinterpret_cast<uint32_t*>(&rdx15) = *reinterpret_cast<uint32_t*>(&r13_7);
        *reinterpret_cast<uint32_t*>(&r13_7) = tmp32_17;
    }
    __asm__("rcl r15, cl");
    r15_18 = r15_12 - (0x1e6cae2d + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r15_12 < 0x1e6cae2d)));
    __asm__("rcl dx, 1");
    __asm__("rol eax, 0x76");
    __asm__("xadd r8w, di");
    *reinterpret_cast<unsigned char*>(&r10_14) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(66 + *reinterpret_cast<unsigned char*>(&rbx4))));
    __asm__("bts r10w, bx");
    cf19 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rax10) < 0x91d9);
    *reinterpret_cast<uint16_t*>(&rax10) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax10) - reinterpret_cast<uint16_t>(0x6e27 - cf19));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx15) + 1) = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rax10) != static_cast<uint32_t>(cf19));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx4) + 1) = 0xff;
    *reinterpret_cast<uint32_t*>(&rdx20) = *reinterpret_cast<uint32_t*>(&rdx15) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = 0;
    tmp64_21 = (rax10 & 0xffffffff) << 32 | (rax10 & 0xffffffff00000000) >> 32;
    tmp64_22 = (tmp64_21 & 0xffff0000ffff) << 16 | (tmp64_21 & 0xffff0000ffff0000) >> 16;
    rax23 = (tmp64_22 & 0xff00ff00ff00ff) << 8 | (tmp64_22 & 0xff00ff00ff00ff00) >> 8;
    esi24 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax23) + 1);
    if (!__intrinsic()) {
    }
    if (r10_14 > 0x3909dbb1) {
        *reinterpret_cast<uint16_t*>(&rbx4) = *reinterpret_cast<uint16_t*>(&r11_3);
    }
    __asm__("shrd r9, r10, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx20) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx20) + 1) >> *reinterpret_cast<unsigned char*>(&rcx13));
    __asm__("rcl r10, 1");
    __asm__("rcl r15, cl");
    __asm__("bts r10w, 0x8a");
    __asm__("bts r10d, r15d");
    rdx25 = rdx20 & 0x23b2acf1;
    __asm__("rcl r14b, 1");
    __asm__("rcr r9, 1");
    if (!*reinterpret_cast<unsigned char*>(&rdx25)) {
    }
    *reinterpret_cast<uint32_t*>(&rsi26) = esi24 - (*reinterpret_cast<int32_t*>(&rdi16) + reinterpret_cast<uint1_t>(esi24 < *reinterpret_cast<int32_t*>(&rdi16) + __intrinsic()));
    __asm__("btr r12d, r9d");
    __asm__("rcr edx, cl");
    r10_27 = *reinterpret_cast<uint16_t*>(&r13_7);
    *reinterpret_cast<uint16_t*>(&r10_27) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r10_27) >> 0xff86);
    *reinterpret_cast<uint32_t*>(&r11_28) = *reinterpret_cast<unsigned char*>(&rdi16);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_28) + 4) = 0;
    *reinterpret_cast<signed char*>(&r13_7) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r13_7) << *reinterpret_cast<unsigned char*>(&rcx13));
    *reinterpret_cast<int16_t*>(&r15_18) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r15_18) >> *reinterpret_cast<unsigned char*>(&rcx13));
    __asm__("cdq ");
    *reinterpret_cast<unsigned char*>(&rcx13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx13) & 15);
    __asm__("shld cx, dx, cl");
    __asm__("rcl si, cl");
    *reinterpret_cast<uint16_t*>(&r13_7) = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r13_7) >> 0x74);
    bx29 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx4) >> *reinterpret_cast<unsigned char*>(&rcx13));
    __asm__("shld ebp, r15d, cl");
    r9d30 = *reinterpret_cast<uint32_t*>(&r13_7);
    *reinterpret_cast<int32_t*>(&r12_31) = *reinterpret_cast<int32_t*>(&rdi16) + 0x20a3f640 + 0xbd;
    __asm__("rol r11w, cl");
    *reinterpret_cast<uint32_t*>(&r14_32) = 0x6788727c;
    __asm__("rcr r8, 1");
    ax33 = reinterpret_cast<int16_t>(-66 * *reinterpret_cast<signed char*>(&r9d30));
    __asm__("rol edx, cl");
    *reinterpret_cast<unsigned char*>(&rcx13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx13) & 15);
    __asm__("shrd si, r13W, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax33) + 1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&bx29) + 1) <= *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&bx29) + 1));
    eax34 = reinterpret_cast<uint32_t>(static_cast<int32_t>(ax33));
    __asm__("rcl ah, 1");
    __asm__("ror r8b, cl");
    __asm__("ror rdi, 1");
    *reinterpret_cast<int16_t*>(&r14_32) = reinterpret_cast<int16_t>(0x727c << *reinterpret_cast<unsigned char*>(&rcx13));
    r14d35 = *reinterpret_cast<uint32_t*>(&r14_32) << *reinterpret_cast<unsigned char*>(&rcx13);
    __asm__("shrd r10w, r10w, 0xc");
    __asm__("ror rbp, cl");
    __asm__("ror r11w, 1");
    __asm__("rcl rdx, 1");
    __asm__("btr r8w, r8w");
    __asm__("xadd bx, r9w");
    __asm__("rol edi, 1");
    __asm__("ror sil, cl");
    *reinterpret_cast<signed char*>(&r14d35) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(&r14d35)) + 0x76);
    rcx36 = reinterpret_cast<uint64_t>(-rcx13) | 0xffffffffa2b0bc5d;
    __asm__("rcr r12w, 1");
    __asm__("shrd r13W, r9w, cl");
    r13_37 = 0x7ffffffc42bef060;
    *reinterpret_cast<uint32_t*>(&r14_38) = r14d35 + 0x57f1d399;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_38) + 4) = 0;
    __asm__("rcr ecx, 1");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&cx39) + 1) = -1;
    *reinterpret_cast<int16_t*>(&rsi26) = reinterpret_cast<signed char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!__intrinsic())));
    __asm__("bsr esi, ecx");
    __asm__("shrd r11, r9, cl");
    __asm__("rol r11b, 0x4");
    __asm__("bsf r8w, bx");
    ax40 = *reinterpret_cast<signed char*>(&eax34);
    r11_41 = r11_28 ^ 0xfffffffff6d72aa9;
    ax42 = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax40) * *reinterpret_cast<signed char*>(&r15_18));
    r14_43 = r14_38 + 0x14509e64 + 1;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r14_43) < reinterpret_cast<int64_t>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(r14_43 == 0)) {
        *reinterpret_cast<int16_t*>(&r13_37) = *reinterpret_cast<int16_t*>(&r11_41);
    }
    *reinterpret_cast<unsigned char*>(&ax42) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ax42) + 13) + 1);
    *reinterpret_cast<unsigned char*>(&cx39) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx36) & 15) & 15);
    __asm__("shld cx, r14w, cl");
    rbx44 = 0xffffffffc31ffaf6 & r10_27;
    if (0) {
        r10_27 = r14_43;
    }
    tmp16_45 = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_31) + 0x4e5)));
    r12w46 = tmp16_45;
    __asm__("btc r8w, 0xc9");
    if (tmp16_45 >= *reinterpret_cast<uint16_t*>(&r12_31)) {
        *reinterpret_cast<uint32_t*>(&rsi26) = *reinterpret_cast<uint32_t*>(&r8_6);
    }
    *reinterpret_cast<uint16_t*>(&eax34) = reinterpret_cast<uint16_t>(ax42 / reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_6) | 0xc000));
    __asm__("xadd r10b, r14b");
    *reinterpret_cast<uint16_t*>(&rcx36) = reinterpret_cast<uint16_t>(cx39 ^ 0xfbfe);
    if (0) {
        r10_27 = rcx36;
    }
    *reinterpret_cast<uint16_t*>(&rdi16) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi16) - 0x7f56)));
    eax47 = eax34 >> *reinterpret_cast<unsigned char*>(&rcx36);
    __asm__("rcr bpl, 1");
    cf48 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&eax47) < 0x836c);
    *reinterpret_cast<uint16_t*>(&eax47) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax47) - reinterpret_cast<uint16_t>(0x7c94 - cf48));
    if (*reinterpret_cast<uint16_t*>(&eax47) != static_cast<uint32_t>(cf48)) {
        r12w46 = *reinterpret_cast<uint16_t*>(&r10_27);
    }
    if (*reinterpret_cast<int16_t*>(&eax47) < reinterpret_cast<int16_t>(static_cast<uint32_t>(cf48))) {
        rdi16 = r10_27;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx36) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx36) + 1) - 0x6f) + cf48);
    if (*reinterpret_cast<signed char*>(&r12w46) == *reinterpret_cast<signed char*>(&r13_37)) {
        tmp8_49 = *reinterpret_cast<signed char*>(&r12w46);
        *reinterpret_cast<signed char*>(&r13_37) = tmp8_49;
    }
    __asm__("bsf cx, r9w");
    *reinterpret_cast<uint32_t*>(&rax50) = eax47 >> *reinterpret_cast<unsigned char*>(&rcx36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax50) + 4) = 0;
    __asm__("btr edx, 0x7d");
    *reinterpret_cast<int16_t*>(&rax50) = *reinterpret_cast<signed char*>(&rax50);
    rbp51 = 0xffffffffffffe9dc;
    rax52 = rax50 / 0xffffffffffffe9dc;
    if (0) {
    }
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic())))) {
        *reinterpret_cast<uint32_t*>(&rbp51) = *reinterpret_cast<uint32_t*>(&rsi26);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp51) + 4) = 0;
    }
    r14_53 = r14_43 - (rbp51 + reinterpret_cast<uint1_t>(r14_43 < rbp51));
    if (r14_53 == rdi16) {
        tmp64_54 = r14_53;
        r14_53 = rdi16;
        rdi16 = tmp64_54;
    }
    *reinterpret_cast<unsigned char*>(&rbp51) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp51) >> 1);
    __asm__("ror r12, cl");
    *reinterpret_cast<unsigned char*>(&r10_27) = 60;
    *reinterpret_cast<int32_t*>(&rbp55) = reinterpret_cast<int32_t>(~*reinterpret_cast<uint32_t*>(&rbp51));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp55) + 4) = 0;
    __asm__("btc r10w, r11w");
    *reinterpret_cast<uint32_t*>(&r15_56) = *reinterpret_cast<uint32_t*>(&r15_18) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_56) + 4) = 0;
    __asm__("rol r12b, cl");
    __asm__("shld r14d, ebx, 0x46");
    __asm__("bts r12d, 0x35");
    r13_57 = r13_37 | rdi16;
    rdi58 = rdi16 + 1;
    __asm__("shrd r14d, r10d, 0xb");
    rdx59 = rcx36;
    *reinterpret_cast<unsigned char*>(&rcx36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx36) & 15);
    __asm__("shrd bx, di, cl");
    __asm__("bsr r13d, edi");
    __asm__("btr ecx, 0x9b");
    tmp32_60 = *reinterpret_cast<uint32_t*>(&r11_41) + 0x44b1aac4;
    *reinterpret_cast<uint32_t*>(&r11_61) = tmp32_60;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_61) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&r11_61)) {
        *reinterpret_cast<uint32_t*>(&r14_53) = *reinterpret_cast<uint32_t*>(&r15_56);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_53) + 4) = 0;
    }
    if (tmp32_60 >= *reinterpret_cast<uint32_t*>(&r11_41)) {
        rcx36 = r14_53;
    }
    if (*reinterpret_cast<unsigned char*>(&rdx59) & *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx36) + 1)) {
        rsi26 = r13_57;
    }
    __asm__("shrd r9w, bx, 0x5");
    __asm__("rol r8, 1");
    *reinterpret_cast<int32_t*>(&rax62) = *reinterpret_cast<int16_t*>(&rax52);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax62) + 4) = 0;
    esi63 = *reinterpret_cast<uint32_t*>(&rsi26) << 1;
    __asm__("rcl edi, 0x2");
    __asm__("bts r15d, r10d");
    __asm__("rcl r13W, 1");
    rbx64 = ~rbx44 | 0xc000000000000000;
    rdx65 = rax62 % rbx64;
    rax66 = rax62 / rbx64;
    __asm__("btr edi, 0x2a");
    *reinterpret_cast<uint16_t*>(&esi63) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi63) & 0x739e);
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r10_27) = 0xffff;
    }
    __asm__("rcl ecx, 1");
    __asm__("btr ax, r12w");
    __asm__("bsf r13W, di");
    edi67 = *reinterpret_cast<uint32_t*>(&rdi58) ^ 0x5e6a958e;
    __asm__("xadd ah, bl");
    if (*reinterpret_cast<int16_t*>(&edi67) < reinterpret_cast<int16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rdx65)))) {
        *reinterpret_cast<uint16_t*>(&r10_27) = *reinterpret_cast<uint16_t*>(&esi63);
    }
    __asm__("rcl r13, 1");
    __asm__("shld r15, r9, 0x9b");
    rdi68 = *reinterpret_cast<uint32_t*>(&r15_56) + *reinterpret_cast<uint32_t*>(&r15_56) * 4;
    rdx69 = rdx65 << *reinterpret_cast<unsigned char*>(&rcx36);
    *reinterpret_cast<signed char*>(&rbp55) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbp55) >> *reinterpret_cast<unsigned char*>(&rcx36));
    *reinterpret_cast<int32_t*>(&rax70) = *reinterpret_cast<int32_t*>(&rax66) * *reinterpret_cast<int32_t*>(&rdx69);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax70) + 4) = 0;
    *reinterpret_cast<int16_t*>(&r15_56) = reinterpret_cast<int16_t>(~*reinterpret_cast<int16_t*>(&r15_56));
    __asm__("rcr r14b, 1");
    rax71 = rax70 * rbp55;
    rdx72 = __intrinsic();
    ebx73 = static_cast<uint32_t>(rdi68 + r13_57);
    *reinterpret_cast<unsigned char*>(&r10_27) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_27) ^ *reinterpret_cast<unsigned char*>(&rdx72));
    if (!__intrinsic()) {
        ebx73 = *reinterpret_cast<uint32_t*>(&r14_53);
    }
    r15_74 = r15_56 >> *reinterpret_cast<unsigned char*>(&rcx36);
    rdi75 = rdi68 - r11_61;
    rdx76 = rdx72 - (0x5cf42782 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(rdx72 < 0x5cf42782 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(rdi68 < r11_61)))));
    __asm__("shld r13d, r11d, 0x2d");
    *reinterpret_cast<uint16_t*>(&rax71) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax71) & *reinterpret_cast<uint16_t*>(&rdx76));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx36) + 1) = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rax71) == 0);
    r10d77 = *reinterpret_cast<uint32_t*>(&r10_27) - (esi63 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r10_27) < esi63 + 1));
    __asm__("rcl r14, 1");
    r15_78 = r15_74 << 29;
    r13d79 = *reinterpret_cast<int32_t*>(&r13_57) - 0x6ef03939;
    __asm__("rcr r13, 1");
    __asm__("rol r12d, 1");
    dx80 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx76) - reinterpret_cast<uint16_t>(0x7321 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rdx76) < 0x8cdf)));
    __asm__("rcr r12d, cl");
    *reinterpret_cast<signed char*>(&esi63) = *reinterpret_cast<signed char*>(&r10d77);
    *reinterpret_cast<uint32_t*>(&r10_81) = r10d77 + *reinterpret_cast<int32_t*>(&rbp55);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_81) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rsi82) = esi63 << *reinterpret_cast<unsigned char*>(&rcx36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi82) + 4) = 0;
    *reinterpret_cast<int16_t*>(&rsi82) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rsi82) - 0x6cea);
    if (__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rcx36) = *reinterpret_cast<int32_t*>(&rax71);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx36) + 4) = 0;
    }
    *reinterpret_cast<unsigned char*>(&r10_81) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_81) + *reinterpret_cast<signed char*>(&ebx73)) + 1);
    __asm__("rol r9w, 0xcc");
    rcx83 = rcx36;
    rbp84 = *reinterpret_cast<unsigned char*>(&rax71);
    *reinterpret_cast<signed char*>(&rsi82) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rsi82) - 23);
    r14_85 = r14_53 >> -71;
    *reinterpret_cast<int16_t*>(&r14_85) = -*reinterpret_cast<int16_t*>(&r14_85);
    tmp8_86 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_85) + *reinterpret_cast<signed char*>(&rsi82));
    cf87 = reinterpret_cast<uint1_t>(tmp8_86 < *reinterpret_cast<unsigned char*>(&r14_85));
    *reinterpret_cast<unsigned char*>(&r14_85) = tmp8_86;
    if (!reinterpret_cast<uint1_t>(cf87 | reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r14_85) == 0))) {
        r13d79 = *reinterpret_cast<int32_t*>(&rax71);
    }
    __asm__("shld r9, r15, 0x23");
    if (reinterpret_cast<uint1_t>(reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&rax71) & *reinterpret_cast<uint16_t*>(&r10_81)) < reinterpret_cast<int16_t>(0)) | reinterpret_cast<uint1_t>((*reinterpret_cast<uint16_t*>(&rax71) & *reinterpret_cast<uint16_t*>(&r10_81)) == 0)) {
    }
    ecx88 = *reinterpret_cast<uint32_t*>(&rcx83) >> -47;
    __asm__("bts r11, r15");
    if (__intrinsic()) {
        rdi75 = r10_81;
    }
    *reinterpret_cast<uint32_t*>(&rbx89) = ebx73 << *reinterpret_cast<unsigned char*>(&ecx88);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx89) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx89) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx89) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ecx88) + 1));
    cf90 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r15_78) < *reinterpret_cast<int32_t*>(&rbp84) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&dx80) < 54));
    r15d91 = *reinterpret_cast<uint32_t*>(&r15_78) - (*reinterpret_cast<int32_t*>(&rbp84) + cf90);
    if (r15d91 == static_cast<uint32_t>(cf90)) {
    }
    *reinterpret_cast<uint16_t*>(&r13d79) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13d79) - reinterpret_cast<uint16_t>(0x2097 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r13d79) < 0xdf6a)));
    __asm__("rcl rax, 1");
    r15d92 = r15d91 - 0x10581732;
    __asm__("bts rax, 0x7f");
    __asm__("rol ax, 0x26");
    __asm__("rcl r9d, cl");
    __asm__("rol rcx, 0x36");
    *reinterpret_cast<int32_t*>(&r9_93) = static_cast<int32_t>(r13_57 + 37) << 16;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_93) + 4) = 0;
    *reinterpret_cast<signed char*>(&r13d79) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r13d79) - *reinterpret_cast<signed char*>(&r15d92)) - 32);
    __asm__("rcr rdx, cl");
    r15d94 = r15d92 >> *reinterpret_cast<unsigned char*>(&ecx88);
    *reinterpret_cast<unsigned char*>(&r15d94) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15d94) >> *reinterpret_cast<unsigned char*>(&ecx88));
    __asm__("shld r13d, r12d, 0xaf");
    *reinterpret_cast<int32_t*>(&r14_95) = r13d79;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_95) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r12_96) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_96) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rax71) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(__intrinsic() + *reinterpret_cast<unsigned char*>(&rbx89))));
    if (*reinterpret_cast<unsigned char*>(&rax71)) {
        *reinterpret_cast<uint32_t*>(&rsi82) = ecx88;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi82) + 4) = 0;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax71) + 1) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(__intrinsic()) << *reinterpret_cast<unsigned char*>(&ecx88));
    __asm__("shld rbx, r8, 0x1");
    rax97 = rax71 * r14_95;
    *reinterpret_cast<unsigned char*>(&ecx88) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&ecx88) >> *reinterpret_cast<unsigned char*>(&ecx88));
    __asm__("bsr r15w, dx");
    r15d98 = r15d94 & *reinterpret_cast<uint32_t*>(&rbx89);
    *reinterpret_cast<uint16_t*>(&rbx89) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx89) ^ 0x78dd);
    __asm__("ror si, 1");
    r14_99 = r14_95 + rdi75 << *reinterpret_cast<unsigned char*>(&ecx88);
    __asm__("bts eax, 0x10");
    cx100 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx88) | *reinterpret_cast<uint16_t*>(&r10_81));
    __asm__("shrd edx, r12d, 0x1");
    __asm__("rcl r12w, cl");
    __asm__("bts r14w, 0x92");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax97) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax97) + 1) ^ *reinterpret_cast<unsigned char*>(&rbx89));
    __asm__("btr rdi, r10");
    __asm__("rcr ch, 1");
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&rsi82) = *reinterpret_cast<int16_t*>(&rbp84);
    }
    __asm__("rcl r10d, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx89) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx89) + 1) ^ *reinterpret_cast<unsigned char*>(&rbx89));
    __asm__("bts r10d, esi");
    *reinterpret_cast<signed char*>(&r9_93) = -1;
    __asm__("rcr r8, cl");
    __asm__("rol bpl, 0x36");
    r13d101 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_85) >> 1) >> -5;
    *reinterpret_cast<uint32_t*>(&r15_102) = r15d98 * 0x90ab46d9 | 0xc0000000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_102) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx103) = *reinterpret_cast<int32_t*>(&r14_99);
    *reinterpret_cast<uint32_t*>(&r14_104) = *reinterpret_cast<uint32_t*>(&rax97) % *reinterpret_cast<uint32_t*>(&r15_102);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_104) + 4) = 0;
    rbx105 = rbx89 - 1;
    __asm__("ror rbx, 1");
    __asm__("rcl al, 1");
    *reinterpret_cast<uint32_t*>(&r10_106) = reinterpret_cast<uint32_t>(~reinterpret_cast<int32_t>(~*reinterpret_cast<uint32_t*>(&r10_81)));
    *reinterpret_cast<uint32_t*>(&r13_107) = r13d101 - (0x70ce149 + reinterpret_cast<uint1_t>(r13d101 < 0x70ce14a));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_107) + 4) = 0;
    if (reinterpret_cast<int32_t>(r13d101) > reinterpret_cast<int32_t>(0x70ce14a)) {
        *reinterpret_cast<int16_t*>(&r12_96) = *reinterpret_cast<int16_t*>(&r14_104);
    }
    __asm__("ror edi, 1");
    cf108 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbx105) < *reinterpret_cast<int32_t*>(&rbp84) + 1);
    *reinterpret_cast<uint32_t*>(&rbx109) = *reinterpret_cast<uint32_t*>(&rbx105) - (*reinterpret_cast<int32_t*>(&rbp84) + cf108);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx109) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rbx105) <= *reinterpret_cast<int32_t*>(&rbp84) + cf108) {
        *reinterpret_cast<uint32_t*>(&rbx109) = 0x3cf40d5d;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx109) + 4) = 0;
    }
    __asm__("ror bpl, cl");
    __asm__("rol r10w, 1");
    __asm__("shrd r14d, r10d, 0x1");
    __asm__("rcr ecx, 1");
    *reinterpret_cast<uint16_t*>(&r15_102) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_102) + *reinterpret_cast<int16_t*>(&r14_104))));
    rsi110 = rsi82 >> *reinterpret_cast<unsigned char*>(&cx100);
    r11_111 = 0x3cf40d5d;
    *reinterpret_cast<signed char*>(&r10_106) = -75;
    *reinterpret_cast<uint16_t*>(&rsi110) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi110) + *reinterpret_cast<uint16_t*>(&rsi110));
    __asm__("xadd r9w, ax");
    __asm__("rol r14d, 1");
    rax112 = *reinterpret_cast<int32_t*>(&rsi110);
    __asm__("rcl r14w, 0xf0");
    __asm__("ror ebx, 1");
    *reinterpret_cast<signed char*>(&rdx103) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rdx103) + 1);
    __asm__("xadd di, r8w");
    r9_113 = r9_93 + 0x181ff97c + 1;
    __asm__("rcr di, 1");
    *reinterpret_cast<uint16_t*>(&r10_106) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_106) | 0x7b);
    *reinterpret_cast<signed char*>(&r10_106) = --1;
    __asm__("shld rax, rcx, 0x1");
    *reinterpret_cast<unsigned char*>(&r15_102) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_102) - 1);
    *reinterpret_cast<int32_t*>(&rax114) = *reinterpret_cast<int32_t*>(&rax112) << *reinterpret_cast<unsigned char*>(&cx100);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax114) + 4) = 0;
    dx115 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rdx103) >> *reinterpret_cast<unsigned char*>(&cx100));
    if (0) {
        *reinterpret_cast<uint16_t*>(&r11_111) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi110) | *reinterpret_cast<uint16_t*>(&rax114));
    }
    __asm__("rcr cx, 1");
    __asm__("xadd r12w, r14w");
    __asm__("rcr r15w, 1");
    *reinterpret_cast<unsigned char*>(&rax114) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax114) ^ 0xfc);
    __asm__("shrd rsi, rax, 0x1");
    __asm__("btr rdi, 0xeb");
    *reinterpret_cast<unsigned char*>(&r9_113) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_113) >> 1);
    __asm__("ror eax, 1");
    r14_116 = r14_104 - (0x48038fb4 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r14_104 < 0x48038fb4)));
    ax117 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax114) & 0x3fff);
    *reinterpret_cast<uint16_t*>(&rdx103) = reinterpret_cast<uint16_t>(ax117 % static_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&dx115) | 0xc0)));
    *reinterpret_cast<uint16_t*>(&rax114) = reinterpret_cast<uint16_t>(ax117 / static_cast<int16_t>(*reinterpret_cast<signed char*>(&rdx103)));
    rbx118 = ~rbx109;
    *reinterpret_cast<int32_t*>(&rcx119) = static_cast<int32_t>(r13_107 + r11_111 * 4 + 23);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx119) + 4) = 0;
    rcx120 = rcx119 | 0xc000000000000000;
    r8_121 = 0x3fffffffffffffff;
    rdx122 = rax114 % rcx120;
    rax123 = rax114 / rcx120;
    __asm__("shld r12, rdi, cl");
    eax124 = *reinterpret_cast<uint32_t*>(&rax123) >> 24 | *reinterpret_cast<uint32_t*>(&rax123) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&rax123) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&rax123) << 24;
    __asm__("rol dl, 1");
    __asm__("xadd r12d, r11d");
    *reinterpret_cast<int16_t*>(&rbp84) = reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbp84) * 0x2bf1) >> *reinterpret_cast<signed char*>(&rcx120));
    *reinterpret_cast<uint32_t*>(&rdi125) = eax124;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi125) + 4) = 0;
    tmp8_126 = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax124) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax124) + 1) = *reinterpret_cast<signed char*>(&rbx118);
    *reinterpret_cast<signed char*>(&rbx118) = tmp8_126;
    *reinterpret_cast<uint16_t*>(&r8_121) = reinterpret_cast<uint16_t>(0xffff ^ *reinterpret_cast<uint16_t*>(&rbx118));
    __asm__("rol r15w, 1");
    __asm__("shld di, ax, 0xf");
    *reinterpret_cast<uint32_t*>(&rcx127) = *reinterpret_cast<uint32_t*>(&rcx120) & *reinterpret_cast<uint32_t*>(&rdx122);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx127) + 4) = 0;
    r12_128 = r12_96 | r15_102;
    __asm__("btc ebx, 0x30");
    __asm__("ror r14, 0x63");
    __asm__("shrd rbx, rdi, 0x1");
    __asm__("rcr rdx, cl");
    eax129 = eax124 >> 2;
    r8_130 = reinterpret_cast<uint64_t>(r8_121 - 0x287463be);
    *reinterpret_cast<signed char*>(&rdx122) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rdx122) + *reinterpret_cast<signed char*>(&eax129));
    if (__intrinsic()) {
        r15_102 = rcx127;
    }
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&rdx122) < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&rdx122) == 0)) {
        *reinterpret_cast<uint16_t*>(&r12_128) = *reinterpret_cast<uint16_t*>(&r15_102);
    }
    __asm__("shld bx, r14w, 0x4");
    eax131 = eax129 | 0xc0000000;
    *reinterpret_cast<uint32_t*>(&rax132) = eax131 / eax131;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax132) + 4) = 0;
    rdi133 = rdi125 >> *reinterpret_cast<signed char*>(&rcx127);
    __asm__("rcr r15w, 1");
    rbx134 = rbx118 * 0xf734392;
    *reinterpret_cast<uint16_t*>(&rax132) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax132) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi133) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rax132) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rdi133))))));
    *reinterpret_cast<uint16_t*>(&rbx134) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_102) * 0xbfd2);
    *reinterpret_cast<uint16_t*>(&r14_116) = *reinterpret_cast<unsigned char*>(&r15_102);
    __asm__("bsr rdi, r11");
    *reinterpret_cast<signed char*>(&rbx134) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbx134) >> *reinterpret_cast<signed char*>(&rcx127));
    __asm__("bsf r9w, si");
    *reinterpret_cast<unsigned char*>(&rdi133) = reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic());
    *reinterpret_cast<uint32_t*>(&rbx135) = *reinterpret_cast<uint32_t*>(&rbx134) >> 77;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx135) + 4) = 0;
    __asm__("rol dh, 1");
    __asm__("shld rdx, r8, 0x1");
    rbx136 = rbx135 ^ 0xffffffffb67ea307;
    __asm__("btr cx, 0xca");
    __asm__("shrd ebx, r8d, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx136) + 1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax132) + 1);
    rsi137 = 0x231f1609c0e74cc1;
    __asm__("rol edx, 0x63");
    if (0) {
    }
    *reinterpret_cast<uint32_t*>(&r11_138) = 0;
    __asm__("rcl eax, 0x4b");
    rcx139 = rcx127 + 1;
    __asm__("shld r9, rcx, 0x1");
    __asm__("btc r15w, 0xa");
    if (*reinterpret_cast<int32_t*>(&rdi133) == *reinterpret_cast<int32_t*>(&r12_128)) {
        tmp32_140 = *reinterpret_cast<int32_t*>(&rdi133);
        *reinterpret_cast<int32_t*>(&rdi133) = *reinterpret_cast<int32_t*>(&r12_128);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi133) + 4) = 0;
        *reinterpret_cast<int32_t*>(&r12_128) = tmp32_140;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_128) + 4) = 0;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax132) + 1) = reinterpret_cast<unsigned char>(0x7f - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rax132) + reinterpret_cast<uint1_t>(0x7f < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rax132) + __intrinsic()))));
    __asm__("rcl r8b, 0xd1");
    r12_141 = r12_128 - (0x5ad6acb5 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(r12_128 < 0xffffffffa529534b)));
    __asm__("ror r12w, 0xf2");
    *reinterpret_cast<int16_t*>(&r11_138) = reinterpret_cast<int16_t>(-static_cast<int32_t>(*reinterpret_cast<int16_t*>(&rbx136)));
    rdx142 = __intrinsic();
    __asm__("ror edx, cl");
    __asm__("btr ax, 0x9d");
    rbp143 = rbp84 | 0xffffffffc4040eba;
    *reinterpret_cast<uint32_t*>(&r12_144) = *reinterpret_cast<uint32_t*>(&r12_141) - (0x4b7df7c8 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r12_141) < 0x4b7df7c8));
    __asm__("btr bp, r10w");
    *reinterpret_cast<uint16_t*>(&rcx139) = *reinterpret_cast<unsigned char*>(&rdx142);
    *reinterpret_cast<uint16_t*>(&rdi133) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi133) - reinterpret_cast<uint16_t>(0x43ce + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rdi133) < 0x43ce)));
    r15_145 = -r15_102 | rdx142;
    *reinterpret_cast<uint32_t*>(&r8_146) = *reinterpret_cast<uint32_t*>(&r8_130) - (*reinterpret_cast<int32_t*>(&r15_145) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r8_130) < *reinterpret_cast<int32_t*>(&r15_145) + 1));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_146) + 4) = 0;
    __asm__("rol ax, cl");
    *reinterpret_cast<uint16_t*>(&r15_145) = 0x44c4;
    __asm__("rcr r11w, 1");
    rax147 = (rax132 >> 1) * r8_130 - 1;
    __asm__("rcl r13d, cl");
    __asm__("btr ebp, r14d");
    ebp148 = *reinterpret_cast<uint32_t*>(&rbp143) - (*reinterpret_cast<uint32_t*>(&r10_106) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbp143) < *reinterpret_cast<uint32_t*>(&r10_106)));
    *reinterpret_cast<unsigned char*>(&rcx139) = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbp143) <= *reinterpret_cast<int32_t*>(&r10_106));
    rdi149 = rdi133 << *reinterpret_cast<unsigned char*>(&rcx139);
    *reinterpret_cast<unsigned char*>(&r14_116) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_116) & 52);
    if (0) {
        tmp16_150 = *reinterpret_cast<uint16_t*>(&r10_106);
        *reinterpret_cast<uint16_t*>(&r9_113) = tmp16_150;
    }
    __asm__("shld r13d, ecx, cl");
    __asm__("shld r15d, esi, 0x1");
    __asm__("rcl r13, 1");
    __asm__("shrd rax, rcx, 0x1");
    *reinterpret_cast<unsigned char*>(&r15_145) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(0xc4 + *reinterpret_cast<signed char*>(&rdi149)) + 1);
    if (*reinterpret_cast<int16_t*>(&r12_144) == *reinterpret_cast<int16_t*>(&r12_144)) {
        *reinterpret_cast<int16_t*>(&r12_144) = *reinterpret_cast<int16_t*>(&r12_144);
    }
    __asm__("ror di, cl");
    __asm__("bts r13W, 0xeb");
    __asm__("rcl rcx, 1");
    r9_151 = r9_113 - 0x129b4e84;
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r12_144) = *reinterpret_cast<int16_t*>(&ebp148);
    }
    *reinterpret_cast<uint16_t*>(&rsi137) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(0x44c0 + *reinterpret_cast<uint16_t*>(&rax147)) + 1);
    r13_152 = static_cast<uint64_t>(*reinterpret_cast<uint16_t*>(&rcx127)) - 1;
    __asm__("bsr r11d, ebp");
    rbp153 = r14_116;
    __asm__("rol rbp, 0x8a");
    __asm__("cwd ");
    __asm__("shld r13W, bp, 0xc");
    *reinterpret_cast<uint16_t*>(&rax147) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax147) >> *reinterpret_cast<unsigned char*>(&rcx139));
    tmp16_154 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi149) - 0x6ed0);
    cf155 = reinterpret_cast<uint1_t>(tmp16_154 < *reinterpret_cast<uint16_t*>(&rdi149));
    *reinterpret_cast<uint16_t*>(&rdi149) = tmp16_154;
    __asm__("rcr bp, 1");
    rbx156 = rbx136 + 0x5742f957 + cf155;
    __asm__("btr bp, 0xa1");
    __asm__("shrd r15w, bp, 0x1");
    __asm__("ror r10, cl");
    edi157 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rdi149) >> 0x79);
    __asm__("btc r12, rbx");
    __asm__("rol rax, 1");
    __asm__("rol r8w, cl");
    *reinterpret_cast<unsigned char*>(&r13_152) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_152) >> 0x70) >> 0x79);
    *reinterpret_cast<int32_t*>(&r13_158) = ~*reinterpret_cast<int32_t*>(&r13_152);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_158) + 4) = 0;
    __asm__("shrd ecx, edi, 0x1");
    __asm__("shrd r12w, cx, 0x1");
    r8_159 = ~r8_146;
    *reinterpret_cast<int16_t*>(&r12_144) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r12_144) + *reinterpret_cast<int16_t*>(&r12_144));
    __asm__("rcl rsi, cl");
    *reinterpret_cast<signed char*>(&r8_159) = -*reinterpret_cast<signed char*>(&r8_159);
    less_or_equal160 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&r8_159) == 0));
    if (!less_or_equal160) {
        *reinterpret_cast<uint32_t*>(&rax147) = *reinterpret_cast<uint32_t*>(&r12_144);
    }
    if (less_or_equal160) {
    }
    __asm__("rcl r12, 1");
    __asm__("rcl r10d, 1");
    rax161 = *reinterpret_cast<int32_t*>(&rax147);
    *reinterpret_cast<unsigned char*>(&r14_116) = reinterpret_cast<unsigned char>(~*reinterpret_cast<unsigned char*>(&r14_116));
    r14_162 = r14_116 | 0xc000000000000000;
    rdx163 = rax161 % r14_162;
    rax164 = rax161 / r14_162;
    __asm__("rol r14d, cl");
    less_or_equal165 = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx163) + 1) <= reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx156) + 1) + 1);
    if (less_or_equal165) {
        *reinterpret_cast<uint32_t*>(&rcx139) = *reinterpret_cast<uint32_t*>(&rbp153);
    }
    __asm__("bts r15w, r9w");
    *reinterpret_cast<uint32_t*>(&r10_166) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&r14_162)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_166) + 4) = 0;
    __asm__("rcr dh, 0x55");
    __asm__("ror rbx, cl");
    __asm__("ror r10w, 1");
    __asm__("ror rbp, 0xc2");
    __asm__("shrd r10d, r13d, 0x15");
    if (static_cast<int1_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r9_151))))) {
        r13_158 = rax164;
    }
    __asm__("rcr rcx, 1");
    __asm__("rcr edx, 1");
    __asm__("rcr eax, cl");
    *reinterpret_cast<unsigned char*>(&edi157) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edi157) >> 1);
    rsi167 = rsi137;
    __asm__("shld di, si, 0xf");
    *reinterpret_cast<unsigned char*>(&rbp153) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp153) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rsi167) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rbp153) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rsi167) + 1))));
    edi168 = edi157 | 0xc0000000;
    *reinterpret_cast<uint32_t*>(&rax169) = *reinterpret_cast<uint32_t*>(&rax164) / edi168;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax169) + 4) = 0;
    tmp8_170 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx139) + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx139) + 1) = *reinterpret_cast<unsigned char*>(&rbx156);
    *reinterpret_cast<unsigned char*>(&rbx156) = tmp8_170;
    if (*reinterpret_cast<uint16_t*>(&r15_145) < *reinterpret_cast<uint16_t*>(&rbx156)) {
        *reinterpret_cast<int16_t*>(&r11_138) = *reinterpret_cast<int16_t*>(&rax169);
    }
    *reinterpret_cast<uint16_t*>(&r14_162) = 0x96b;
    if (__intrinsic()) {
        rcx139 = r14_162;
    }
    __asm__("rol r14, cl");
    *reinterpret_cast<uint16_t*>(&r14_162) = *reinterpret_cast<unsigned char*>(&edi168);
    rax171 = rax169 * r13_158;
    __asm__("rol ebp, 0xca");
    ecx172 = *reinterpret_cast<uint32_t*>(&rcx139) >> 1;
    *reinterpret_cast<int32_t*>(&r11_173) = *reinterpret_cast<int32_t*>(&r15_145);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_173) + 4) = 0;
    __asm__("ror r12b, 0x18");
    if (static_cast<int1_t>(*reinterpret_cast<uint32_t*>(&r9_151) >> -50)) {
        *reinterpret_cast<uint32_t*>(&r10_166) = *reinterpret_cast<uint32_t*>(&rax171);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_166) + 4) = 0;
    }
    *reinterpret_cast<unsigned char*>(&r13_158) = 0;
    __asm__("rcr rdx, 1");
    __asm__("ror r13, cl");
    __asm__("btr r11d, edi");
    *reinterpret_cast<uint32_t*>(&rbp174) = *reinterpret_cast<uint32_t*>(&rbp153) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp174) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r10_166) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&rbp174)));
    *reinterpret_cast<uint32_t*>(&r15_175) = *reinterpret_cast<uint32_t*>(&r11_138) | 0xb823d9da;
    __asm__("shrd r11d, esi, 0x1");
    bp176 = reinterpret_cast<int16_t>(~*reinterpret_cast<int16_t*>(&rbp174));
    __asm__("btr ecx, 0x36");
    *reinterpret_cast<int16_t*>(&rax171) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax171) * *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ecx172) + 1));
    *reinterpret_cast<uint32_t*>(&rcx177) = ecx172 | 0xc0000000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx177) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rdx178) = *reinterpret_cast<uint32_t*>(&rax171) % *reinterpret_cast<uint32_t*>(&rcx177);
    *reinterpret_cast<uint32_t*>(&rax179) = *reinterpret_cast<uint32_t*>(&rax171) / *reinterpret_cast<uint32_t*>(&rcx177);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax179) + 4) = 0;
    *reinterpret_cast<signed char*>(&r9_151) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r9_151) + 1);
    *reinterpret_cast<signed char*>(&r15_175) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r15_175) + *reinterpret_cast<signed char*>(&rdx178));
    if (__intrinsic()) {
        rsi167 = r10_166;
    }
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&r15_175) < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&r15_175) == 0)) {
        rax179 = r14_162;
    }
    __asm__("rcr r14w, 1");
    ah180 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax179) + 1) & *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx177) + 1));
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r9_151) = *reinterpret_cast<uint32_t*>(&r14_162);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_151) + 4) = 0;
    }
    __asm__("btc rsi, r10");
    *reinterpret_cast<uint16_t*>(&rsi167) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi167) + bp176);
    cf181 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r10_166) < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&edi168) + 1));
    below_or_equal182 = *reinterpret_cast<uint16_t*>(&r10_166) <= reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&edi168) + cf181);
    sf183 = reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&r10_166) - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&edi168) + cf181)) < reinterpret_cast<int16_t>(static_cast<uint32_t>(cf181));
    *reinterpret_cast<uint16_t*>(&r10_166) = *reinterpret_cast<unsigned char*>(&rax179);
    if (below_or_equal182) {
        *reinterpret_cast<int16_t*>(&rdx178) = *reinterpret_cast<int16_t*>(&rdx178);
    }
    if (sf183) {
        edi168 = *reinterpret_cast<uint32_t*>(&rbx156);
    }
    *reinterpret_cast<unsigned char*>(&rcx177) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx177) & 15);
    __asm__("shrd r13W, r13W, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax179) + 1) = reinterpret_cast<unsigned char>(ah180 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx177) + reinterpret_cast<uint1_t>(ah180 < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx177) + 1))));
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rbx156) + 1) = *reinterpret_cast<signed char*>(&rdx178);
    *reinterpret_cast<uint16_t*>(&rax179) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax179) | 0x97c7);
    *reinterpret_cast<uint32_t*>(&rdi184) = edi168 - (0x579ba178 + reinterpret_cast<uint1_t>(edi168 < 0x579ba179));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi184) + 4) = 0;
    if (__intrinsic()) {
        rbx156 = rdi184;
    }
    rcx185 = reinterpret_cast<uint64_t>(rcx177 - 1);
    *reinterpret_cast<unsigned char*>(&rbx156) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx185) + 1);
    r14_186 = 0;
    *reinterpret_cast<uint32_t*>(&r8_187) = 0xffffffff & *reinterpret_cast<uint32_t*>(&r10_166) >> 47;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_187) + 4) = 0;
    __asm__("rcr esi, 0xd2");
    rdi188 = rdi184 + 1;
    ch189 = reinterpret_cast<uint1_t>(!!rdi188);
    r13_190 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r13_158 | rsi167) >> *reinterpret_cast<unsigned char*>(&rcx185));
    r11_191 = r11_173 ^ 0x7daad124;
    __asm__("rol r14b, cl");
    r9_192 = r9_151 >> 1;
    __asm__("shld ebx, ebp, 0x6a");
    __asm__("bts di, 0x4d");
    if (!__intrinsic()) {
        rdi188 = r13_190;
    }
    *reinterpret_cast<unsigned char*>(&bp176) = __intrinsic();
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r9_192) = *reinterpret_cast<int16_t*>(&r9_192);
    }
    __asm__("lahf ");
    if (__intrinsic()) {
    }
    __asm__("rcl rsi, cl");
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rsi167) = *reinterpret_cast<int32_t*>(&r13_190);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi167) + 4) = 0;
    }
    if (1) {
    }
    __asm__("rcr r8, 1");
    __asm__("bts rbp, 0xdc");
    rbx193 = rbx156 << *reinterpret_cast<unsigned char*>(&rcx185);
    *reinterpret_cast<uint16_t*>(&rdi188) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi188) & 0x954c);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx193) + 1) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rdi188) == 0)));
    *reinterpret_cast<uint16_t*>(&rsi167) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi167) - reinterpret_cast<uint16_t>(0xf59 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rsi167) < 0xf59)));
    __asm__("rcl r13W, cl");
    rax194 = rax179 * r9_192;
    rdx195 = __intrinsic();
    r13_196 = 0;
    rsi197 = reinterpret_cast<int64_t>(rsi167) >> 1;
    r15_198 = rbx193;
    r9_199 = *reinterpret_cast<int32_t*>(&rdi188);
    if (reinterpret_cast<int64_t>(r8_187 & 0xffffffff8c2f1f63) >= reinterpret_cast<int64_t>(0)) {
    }
    if (1) {
        r11_191 = rbx193;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx185) + 1) = reinterpret_cast<unsigned char>(ch189 | *reinterpret_cast<unsigned char*>(&rax194));
    *reinterpret_cast<int16_t*>(&r14_186) = bp176;
    *reinterpret_cast<int16_t*>(&rbp174) = 0;
    __asm__("rcr r11, cl");
    ax200 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax194) & 0x3fff);
    dx201 = reinterpret_cast<uint16_t>(ax200 % static_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx195) + 1) | 0xc0)));
    *reinterpret_cast<uint16_t*>(&rax194) = reinterpret_cast<uint16_t>(ax200 / static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&dx201) + 1)));
    __asm__("btc r9d, edi");
    if (0) {
        *reinterpret_cast<int32_t*>(&rbx193) = *reinterpret_cast<int32_t*>(&rax194);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx193) + 4) = 0;
    }
    __asm__("xadd r10b, bpl");
    tmp8_202 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi197) + *reinterpret_cast<signed char*>(&r15_198));
    cf203 = reinterpret_cast<uint1_t>(tmp8_202 < *reinterpret_cast<unsigned char*>(&rsi197));
    *reinterpret_cast<unsigned char*>(&rsi197) = tmp8_202;
    if (!cf203) {
        r14_186 = r11_191;
    }
    if (!cf203) {
    }
    r14d204 = *reinterpret_cast<int32_t*>(&r14_186) + 0x7cb33b22 + cf203;
    rax205 = *reinterpret_cast<uint16_t*>(&rcx185);
    *reinterpret_cast<unsigned char*>(&rax205) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax205) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&dx201) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rax205) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&dx201) + 1))))));
    r14w206 = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14d204) + 0x634c)));
    r10_207 = static_cast<uint64_t>(*reinterpret_cast<uint32_t*>(&r8_187) + *reinterpret_cast<int32_t*>(&rdx195)) - 0x29178f11 + reinterpret_cast<uint1_t>(reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi197) - 0x508a))) < *reinterpret_cast<uint16_t*>(&rsi197));
    __asm__("btr r8w, bx");
    *reinterpret_cast<uint16_t*>(&r9_199) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_199) | 0xc000);
    *reinterpret_cast<uint16_t*>(&rax205) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax205) / *reinterpret_cast<uint16_t*>(&r9_199));
    __asm__("bts edx, 0xc3");
    r11d208 = *reinterpret_cast<int32_t*>(&r11_191) - 0x7d8596d2;
    if (__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rdi188) = *reinterpret_cast<int32_t*>(&r9_199);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi188) + 4) = 0;
    }
    *reinterpret_cast<uint32_t*>(&rsi209) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx193) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi209) + 4) = 0;
    __asm__("btc r13W, ax");
    *reinterpret_cast<unsigned char*>(&rbx193) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx193) + *reinterpret_cast<unsigned char*>(&rcx185))));
    *reinterpret_cast<unsigned char*>(&rcx185) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx185) & 15);
    __asm__("shld r11w, bx, cl");
    __asm__("btc eax, esi");
    rcx210 = rcx185 >> 18;
    __asm__("btc r14, rdx");
    rbx211 = rbx193;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rbx211) < reinterpret_cast<int64_t>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(rbx211 == 0))) {
        r13_196 = rbp174;
    }
    if (__intrinsic()) {
        rax205 = r13_196;
    }
    *reinterpret_cast<uint16_t*>(&rax205) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax205) * r14w206);
    *reinterpret_cast<uint32_t*>(&r13_212) = *reinterpret_cast<uint32_t*>(&r13_196) - (0x38e6bd58 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r13_196) < 0xc71942a8));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_212) + 4) = 0;
    __asm__("lahf ");
    __asm__("btr ebp, edi");
    *reinterpret_cast<unsigned char*>(&r10_207) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10_207) >> *reinterpret_cast<unsigned char*>(&rcx210));
    r9_213 = r9_199 + 1;
    __asm__("shrd r14w, ax, 0xe");
    eax214 = *reinterpret_cast<uint32_t*>(&rax205) >> 1;
    *reinterpret_cast<uint16_t*>(&r14d204) = reinterpret_cast<uint16_t>(r14w206 ^ *reinterpret_cast<uint16_t*>(&r15_198));
    r15d215 = *reinterpret_cast<uint32_t*>(&r15_198) << *reinterpret_cast<unsigned char*>(&rcx210);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx211) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rcx210)));
    if (!*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx211) + 1)) {
        *reinterpret_cast<int16_t*>(&eax214) = *reinterpret_cast<int16_t*>(&r9_213);
    }
    *reinterpret_cast<unsigned char*>(&rcx210) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx210) ^ 0xb7);
    if (1) {
        rsi209 = rcx210;
    }
    ax216 = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&eax214) * *reinterpret_cast<signed char*>(&rbx211));
    *reinterpret_cast<unsigned char*>(&rcx210) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx210) | 0x72);
    __asm__("bts si, di");
    __asm__("rcr rax, 1");
    __asm__("bts ax, bp");
    __asm__("rcl rax, 1");
    *reinterpret_cast<signed char*>(&eax214) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ax216) - 79);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax214) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax216) + 1) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx211) + 1));
    *reinterpret_cast<uint16_t*>(&r15d215) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15d215) | *reinterpret_cast<uint16_t*>(&r10_207));
    r9d217 = *reinterpret_cast<uint32_t*>(&r9_213) | 0xc0000000;
    *reinterpret_cast<uint32_t*>(&rdx218) = eax214 % r9d217;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx218) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rax219) = eax214 / r9d217;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax219) + 4) = 0;
    __asm__("btc r9w, r15w");
    r9d220 = r9d217 - 1;
    __asm__("rcl r10w, 1");
    if (*reinterpret_cast<signed char*>(&rdi188) == *reinterpret_cast<signed char*>(&r11d208)) {
        *reinterpret_cast<int16_t*>(&rbx211) = *reinterpret_cast<int16_t*>(&r9d220);
    }
    __asm__("bts r15d, r10d");
    __asm__("rcr r11d, 1");
    *reinterpret_cast<uint32_t*>(&r8_221) = *reinterpret_cast<uint32_t*>(&rbp174);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_221) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r14_222) = r14d204 >> 24 | r14d204 >> 8 & 0xff00 | r14d204 << 8 & 0xff0000 | r14d204 << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_222) + 4) = 0;
    __asm__("shld ebp, r9d, 0x1");
    __asm__("rcr r12b, 1");
    *reinterpret_cast<int16_t*>(&rax219) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax219) * *reinterpret_cast<signed char*>(&r15d215));
    *reinterpret_cast<unsigned char*>(&r14_222) = reinterpret_cast<unsigned char>(51 ^ *reinterpret_cast<unsigned char*>(&rax219));
    *reinterpret_cast<uint32_t*>(&r15_223) = r15d215 >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_223) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx211) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx211) + 1) + 67);
    *reinterpret_cast<int32_t*>(&r11_224) = r11d208 << *reinterpret_cast<unsigned char*>(&rcx210);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_224) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rsi209) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax219) + 1);
    __asm__("shld ecx, r15d, 0x1");
    *reinterpret_cast<unsigned char*>(&rsi209) = reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&rcx210) >= 0x1a19);
    *reinterpret_cast<int16_t*>(&r11_224) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r11_224) >> 1);
    r15_225 = reinterpret_cast<uint64_t>(r15_223 >> *reinterpret_cast<unsigned char*>(&rcx210));
    *reinterpret_cast<unsigned char*>(&rbx211) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx211) ^ *reinterpret_cast<unsigned char*>(&r11_224));
    __asm__("cdq ");
    *reinterpret_cast<uint16_t*>(&r10_207) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_207) + 0x2e61);
    __asm__("shrd r14d, ebp, 0xbc");
    r9_226 = *reinterpret_cast<int32_t*>(&rdi188) + *reinterpret_cast<uint32_t*>(&r13_212) * 8 + 68;
    __asm__("shld ecx, r13d, 0x1");
    *reinterpret_cast<int32_t*>(&rbp227) = *reinterpret_cast<signed char*>(&rdx218);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp227) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rcx210) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx210) + *reinterpret_cast<unsigned char*>(&rbx211))));
    if (*reinterpret_cast<uint32_t*>(&rcx210) == *reinterpret_cast<uint32_t*>(&r13_212)) {
        tmp32_228 = *reinterpret_cast<uint32_t*>(&rcx210);
        *reinterpret_cast<uint32_t*>(&rcx210) = *reinterpret_cast<uint32_t*>(&r13_212);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx210) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&r13_212) = tmp32_228;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_212) + 4) = 0;
    }
    __asm__("rcr r15d, 1");
    return rax219 + rbx211 + rcx210 + rdx218 + rbp227 + rsi209 + rdi188 + r8_221 + r9_226 + r10_207 + r11_224 + 0x7646751 + r13_212 + r14_222 + r15_225 + 0x11b7d8286bb54;
}

uint64_t log_size_10_var_008(int64_t rdi, int64_t rsi) {
    int64_t rax3;
    uint64_t rbx4;
    uint64_t rcx5;
    int64_t rdx6;
    int64_t rsi7;
    int64_t r8_8;
    int64_t r9_9;
    uint64_t r15_10;
    uint16_t cx11;
    uint1_t less12;
    int64_t r12_13;
    uint16_t bx14;
    uint64_t rbx15;
    uint64_t r11_16;
    int64_t r10_17;
    unsigned char ch18;
    uint16_t dx19;
    uint32_t eax20;
    uint32_t r13d21;
    uint64_t rax22;
    uint64_t r8_23;
    int64_t r11_24;
    uint64_t r15_25;
    uint32_t r15d26;
    uint64_t r12_27;
    int64_t rdx28;
    uint64_t r14_29;
    int64_t r11_30;
    int16_t dx31;
    int64_t rcx32;
    uint64_t rsi33;
    int64_t r8_34;
    uint64_t r15_35;
    int64_t rbp36;
    int64_t rdi37;
    int64_t r9_38;
    int64_t r11_39;
    int64_t rcx40;
    int64_t rdi41;
    uint64_t r10_42;
    unsigned char dil43;
    unsigned char cl44;
    uint64_t r9_45;
    uint64_t r15_46;
    uint64_t rax47;
    unsigned char tmp8_48;
    uint1_t cf49;
    unsigned char cl50;
    int64_t rdi51;
    uint64_t rsi52;
    uint64_t r14_53;
    int64_t r8_54;
    uint64_t rax55;
    uint64_t rbp56;
    signed char tmp8_57;
    int64_t r8_58;
    uint64_t rax59;
    uint64_t rcx60;
    int64_t r12_61;
    uint64_t rbx62;
    int16_t r8w63;
    int64_t rsi64;
    uint64_t rax65;
    int32_t eax66;
    uint64_t r10_67;
    int64_t r13_68;
    uint16_t bx69;
    uint64_t r12_70;
    uint64_t r14_71;
    uint64_t r15_72;
    int64_t r10_73;
    uint64_t r10_74;
    int32_t eax75;
    int64_t r9_76;
    uint16_t ax77;
    int64_t rdx78;
    uint16_t ax79;
    uint64_t r11_80;
    int64_t r13_81;
    uint64_t r14_82;
    int16_t ax83;
    uint64_t rcx84;
    unsigned char tmp8_85;
    uint1_t cf86;
    int64_t rax87;
    uint64_t rbp88;
    uint64_t rdx89;
    uint64_t rax90;
    uint32_t r12d91;
    int64_t rsi92;
    uint64_t rsi93;
    int64_t r8_94;
    uint16_t bp95;
    int1_t cf96;
    uint16_t bx97;
    uint64_t r15_98;
    uint16_t dx99;
    uint64_t rcx100;
    int64_t r9_101;
    int64_t r11_102;
    uint64_t rdi103;
    uint32_t r8d104;
    uint64_t r11_105;
    uint64_t r12_106;
    int64_t rax107;
    uint32_t r15d108;
    int64_t rax109;
    int64_t rbx110;
    uint64_t r15_111;
    uint64_t rcx112;
    int64_t r14_113;
    uint64_t r8_114;
    uint64_t rdx115;
    uint16_t r14w116;
    uint64_t r10_117;
    uint32_t ecx118;
    uint64_t rsi119;
    int16_t si120;
    unsigned char tmp8_121;
    int64_t rcx122;
    uint64_t rdi123;
    uint64_t rdx124;
    uint16_t dx125;
    int64_t rcx126;
    int64_t r12_127;
    uint64_t r13_128;
    uint64_t rbx129;
    uint64_t tmp64_130;
    uint64_t r10_131;
    uint64_t rcx132;
    uint64_t r8_133;
    int32_t eax134;
    int64_t r12_135;
    uint64_t rsi136;
    uint64_t rbp137;
    uint64_t rbx138;
    uint64_t r9_139;
    int64_t rax140;
    int64_t r12_141;
    int64_t r14_142;
    uint64_t r9_143;
    uint64_t rdi144;
    uint64_t rdx145;
    uint64_t rax146;
    uint32_t esi147;
    uint64_t rbp148;
    int1_t cf149;
    uint64_t rdi150;
    uint32_t r12d151;
    uint64_t r15_152;
    uint64_t r12_153;
    int64_t rdx154;
    uint64_t rbp155;
    uint64_t rbx156;
    int64_t rsi157;
    int1_t zf158;
    signed char tmp8_159;
    uint64_t tmp64_160;
    uint64_t rcx161;
    uint64_t r10_162;
    uint64_t rcx163;
    uint64_t rbx164;
    uint64_t r15_165;
    int32_t edx166;
    int16_t dx167;
    uint16_t tmp16_168;
    int64_t r14_169;
    int64_t rdx170;
    uint32_t r9d171;
    int32_t esi172;
    int64_t rax173;
    uint64_t r13_174;
    uint64_t rbx175;
    uint64_t r12_176;
    int64_t rax177;
    unsigned char tmp8_178;
    unsigned char r11b179;
    uint64_t rdx180;
    uint64_t r13_181;
    uint64_t rsi182;
    uint64_t rcx183;
    uint64_t rbp184;
    uint64_t rax185;
    uint64_t r14_186;
    uint1_t cf187;
    int16_t r9w188;
    uint64_t rcx189;
    uint1_t cf190;
    uint64_t r12_191;
    int64_t r11_192;
    uint64_t rbx193;
    int64_t r11_194;
    uint32_t eax195;
    uint64_t rax196;
    uint64_t rax197;
    unsigned char tmp8_198;
    uint16_t ax199;
    int64_t r9_200;
    uint64_t rdi201;
    unsigned char cl202;
    uint64_t rax203;
    int64_t rbp204;
    uint64_t r10_205;
    uint64_t rdx206;
    uint64_t rax207;
    int64_t rbp208;
    uint64_t r15_209;
    uint64_t r14_210;
    uint64_t rax211;
    int64_t r13_212;
    int64_t rbx213;
    uint1_t cf214;
    int1_t sf215;
    int64_t rbp216;
    int64_t r10_217;
    uint64_t rcx218;
    uint64_t rax219;
    uint64_t rcx220;
    uint64_t r8_221;
    int64_t r11_222;
    int64_t r13_223;
    uint64_t rbx224;

    rax3 = 0x88838c08d206dee1;
    rbx4 = 0xfeb29bd772acf500;
    rcx5 = 0x482c929f41a66a69;
    rdx6 = 0x73028b1e804acf35;
    rsi7 = 0x5dd22f922be139c8;
    r8_8 = 0x1fb830f2dbcc51c4;
    r9_9 = 0xfbf8bbf95fd53125;
    r15_10 = 0x77f4b792afdbe74d;
    cx11 = 0x21e7;
    less12 = reinterpret_cast<uint1_t>(__intrinsic());
    if (less12) {
        *reinterpret_cast<int32_t*>(&rbx4) = 0xdbcc51c4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx4) + 4) = 0;
    }
    if (less12) {
        *reinterpret_cast<int32_t*>(&r15_10) = 0xd206dee1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_10) + 4) = 0;
    }
    r12_13 = 0x9ee3868972516014 >> -25;
    __asm__("rol r9d, 1");
    *reinterpret_cast<int16_t*>(&r8_8) = 0x95e9;
    __asm__("rcr cx, 1");
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rax3) = 0x2be139c8;
    }
    __asm__("shrd r12w, di, 0x1");
    __asm__("shld r8w, dx, cl");
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rsi7) = 0xbe6030f7;
    }
    bx14 = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rsi7) * 0xff0b);
    __asm__("ror ah, 0x55");
    __asm__("btc r15, 0x50");
    __asm__("shrd rdi, r11, cl");
    __asm__("ror r13W, 1");
    if (0) {
        bx14 = 0x3125;
    }
    *reinterpret_cast<uint16_t*>(&rbx4) = reinterpret_cast<uint16_t>(bx14 | 0xc000);
    *reinterpret_cast<uint16_t*>(&rdx6) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax3) % *reinterpret_cast<uint16_t*>(&rbx4));
    *reinterpret_cast<signed char*>(&r15_10) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r15_10) >> 1) << 1);
    rbx15 = rbx4 ^ 0x3866a14d018ffba6;
    *reinterpret_cast<unsigned char*>(&rdx6) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx6) & *reinterpret_cast<unsigned char*>(&rbx15));
    r11_16 = 0xc2a956e3be6030f7 - (rdx6 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(0xc2a956e3be6030f7 < rdx6 + 1)));
    *reinterpret_cast<int32_t*>(&r10_17) = 0xffcf723b;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_17) + 4) = 0;
    ch18 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&cx11) + 1) | 0xc0);
    dx19 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax3) / *reinterpret_cast<uint16_t*>(&rbx4)) & 0x3fff) % static_cast<int16_t>(reinterpret_cast<signed char>(ch18)));
    eax20 = 59;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&dx19) + 1) = -58;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax20) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax20) + 1) >> 1);
    __asm__("rcl dh, 0xce");
    r13d21 = 0xafedece3;
    *reinterpret_cast<uint16_t*>(&r13d21) = 0x6704;
    __asm__("rcl rdx, cl");
    *reinterpret_cast<int32_t*>(&rax22) = *reinterpret_cast<int16_t*>(&eax20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = 0;
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r8_8) = *reinterpret_cast<int16_t*>(&rbx15);
    }
    __asm__("rcr rdi, 0xc7");
    __asm__("btr r11d, 0x3e");
    *reinterpret_cast<int16_t*>(&rax22) = reinterpret_cast<int16_t>(59 * reinterpret_cast<signed char>(ch18));
    r8_23 = r8_8 - 0x563cf618 + static_cast<uint64_t>(__intrinsic());
    *reinterpret_cast<int32_t*>(&r11_24) = *reinterpret_cast<int32_t*>(&r11_16) - 0x73cb37f8 - 0x308dc5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_24) + 4) = 0;
    __asm__("rcl r11, 1");
    __asm__("rcl r11d, 1");
    r15_25 = r15_10 & rax22;
    *reinterpret_cast<uint16_t*>(&rcx5) = *reinterpret_cast<unsigned char*>(&dx19);
    if (0) {
        *reinterpret_cast<uint16_t*>(&r9_9) = dx19;
    }
    r15d26 = *reinterpret_cast<uint32_t*>(&r15_25) & 0x8efd0339;
    __asm__("rcr r9b, 1");
    *reinterpret_cast<uint32_t*>(&r12_27) = *reinterpret_cast<int32_t*>(&r12_13) - r15d26;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_27) + 4) = 0;
    rdx28 = *reinterpret_cast<signed char*>(&r15d26);
    __asm__("bts r14d, 0x15");
    __asm__("rcr r11, 0x22");
    __asm__("rol r9b, cl");
    __asm__("bts r12, 0x95");
    *reinterpret_cast<int32_t*>(&r14_29) = 0x4fe20b37;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_29) + 4) = 0;
    __asm__("rcl ch, 1");
    __asm__("rcl r12, 1");
    *reinterpret_cast<unsigned char*>(&rcx5) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx5) & 15);
    __asm__("shld r11w, r8w, cl");
    __asm__("rcl r15w, 1");
    if (__intrinsic()) {
        r14_29 = r12_27;
    }
    __asm__("bsf r12d, edi");
    __asm__("rol rdi, 0xd4");
    r11_30 = -r11_24;
    __asm__("shld r15, r10, cl");
    *reinterpret_cast<int16_t*>(&r10_17) = 0;
    *reinterpret_cast<unsigned char*>(&dx31) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx28) - 62);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&dx31) + 1) = reinterpret_cast<unsigned char>(0xcd - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&dx31) + reinterpret_cast<uint1_t>(0xcd < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&dx31) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdx28) < 62)))));
    rcx32 = 0;
    rsi33 = rcx5;
    __asm__("rcr bpl, 1");
    *reinterpret_cast<unsigned char*>(&r12_27) = __intrinsic();
    __asm__("shrd esi, r13d, 0x1");
    if (!(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_23) >> 1) + *reinterpret_cast<unsigned char*>(&dx31)) + (*reinterpret_cast<uint16_t*>(&r11_30) < reinterpret_cast<uint16_t>(0x7e12 + static_cast<uint1_t>(rcx5 >> -28))))) {
        *reinterpret_cast<int16_t*>(&r10_17) = *reinterpret_cast<int16_t*>(&r12_27);
    }
    *reinterpret_cast<unsigned char*>(&rsi33) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi33) & 0xb3);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx15) + 1) = 0;
    *reinterpret_cast<uint16_t*>(&r14_29) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_29) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_9) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r14_29) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r9_9))))));
    __asm__("cwd ");
    __asm__("rol r15w, cl");
    *reinterpret_cast<uint16_t*>(&r11_30) = 0x50cd;
    *reinterpret_cast<int32_t*>(&r8_34) = 0x6704 - *reinterpret_cast<int32_t*>(&r11_30);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_34) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r15_35) = r15d26 - 0x18ffba6 + 0xd182a8c0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_35) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r13d21) = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r15_35) < reinterpret_cast<int32_t>(0) == __intrinsic());
    __asm__("ror r14d, 1");
    __asm__("shld r12, r12, 0x1");
    rbp36 = 0x884c77d182a8c0;
    __asm__("bsf ebp, r12d");
    __asm__("shrd r13d, r13d, 0x28");
    __asm__("rcr r12d, cl");
    *reinterpret_cast<uint32_t*>(&rdi37) = 0xd182a8c0 >> -14;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi37) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx32) + 1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&dx31) + 1);
    r9_38 = r8_34;
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&rbp36) = dx31;
    }
    __asm__("rcr r13, cl");
    __asm__("xadd r12d, edx");
    if (__intrinsic()) {
        r9_38 = r11_30;
    }
    if (*reinterpret_cast<signed char*>(&r8_34) >= -35) {
    }
    __asm__("shrd r9w, cx, 0x1");
    __asm__("rol r14d, 0xff");
    __asm__("ror r9w, cl");
    __asm__("btr dx, r8w");
    r11_39 = r11_30 - rdi37;
    __asm__("rcl r12, 0x6b");
    __asm__("cdq ");
    rcx40 = -rcx32;
    __asm__("bsf si, cx");
    rdi41 = rdi37 >> *reinterpret_cast<unsigned char*>(&rcx40);
    __asm__("ror bp, 0x83");
    r10_42 = reinterpret_cast<uint64_t>(r10_17 + 0x615fd003);
    dil43 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi41) - reinterpret_cast<unsigned char>(86 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdi41) < 86)));
    cl44 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx40) & 15);
    __asm__("shrd r13W, r15w, cl");
    __asm__("ror bpl, 1");
    *reinterpret_cast<uint32_t*>(&r9_45) = *reinterpret_cast<uint32_t*>(&r9_38) >> 0xffffff89;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_45) + 4) = 0;
    r15_46 = r15_35 | 0xc000000000000000;
    rax47 = 0;
    __asm__("ror r11d, cl");
    if (*reinterpret_cast<unsigned char*>(&r9_45) == *reinterpret_cast<unsigned char*>(&rbx15)) {
        tmp8_48 = *reinterpret_cast<unsigned char*>(&r9_45);
        *reinterpret_cast<unsigned char*>(&r9_45) = *reinterpret_cast<unsigned char*>(&rbx15);
        *reinterpret_cast<unsigned char*>(&rbx15) = tmp8_48;
    }
    __asm__("rcr r15w, 1");
    __asm__("rcr dx, 1");
    *reinterpret_cast<int16_t*>(&r10_42) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r10_42) >> 1);
    cf49 = reinterpret_cast<uint1_t>(cl44 < 0);
    cl50 = reinterpret_cast<unsigned char>(cl44 - reinterpret_cast<unsigned char>(static_cast<uint32_t>(cf49)));
    *reinterpret_cast<unsigned char*>(&rax47) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(cf49));
    *reinterpret_cast<unsigned char*>(&rdi41) = reinterpret_cast<unsigned char>(dil43 - reinterpret_cast<unsigned char>(89 + reinterpret_cast<uint1_t>(dil43 < 90)));
    __asm__("rol r14d, 1");
    *reinterpret_cast<signed char*>(&rbp36) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rbp36) >> cl50);
    *reinterpret_cast<int16_t*>(&rax47) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax47) * reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbx15) * 0x7ba2));
    if (0) {
        *reinterpret_cast<uint16_t*>(&r14_29) = *reinterpret_cast<uint16_t*>(&r13d21);
    }
    __asm__("rcr al, 1");
    __asm__("ror rdx, 1");
    rdi51 = rdi41 << 1;
    *reinterpret_cast<int16_t*>(&r15_46) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r15_46) >> cl50);
    __asm__("bsf edi, r11d");
    *reinterpret_cast<signed char*>(&r15_46) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r15_46) + *reinterpret_cast<signed char*>(&rbp36));
    rsi52 = rsi33 - (0x5ef65501 - static_cast<uint64_t>(reinterpret_cast<uint1_t>(rsi33 < 0xffffffffa109ab00)));
    r14_53 = r14_29 | 0xc000000000000000;
    r8_54 = 0x3fffffffffffffff;
    rax55 = rax47 / r14_53;
    __asm__("cwd ");
    *reinterpret_cast<uint32_t*>(&rbp56) = *reinterpret_cast<uint32_t*>(&rbp36) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp56) + 4) = 0;
    if (*reinterpret_cast<signed char*>(&r10_42) == -1) {
        tmp8_57 = *reinterpret_cast<signed char*>(&r10_42);
        *reinterpret_cast<signed char*>(&r10_42) = -1;
        *reinterpret_cast<signed char*>(&r8_54) = tmp8_57;
    }
    __asm__("rcl r14b, 1");
    r8_58 = r8_54 * 0x371dc504;
    rax59 = rax55 - (rsi52 + reinterpret_cast<uint1_t>(rax55 < rsi52));
    __asm__("shld rbp, rbp, 0x1");
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r9_45) = *reinterpret_cast<uint32_t*>(&rbp56);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_45) + 4) = 0;
    }
    __asm__("rol r8d, 1");
    __asm__("shld r15, rbp, 0x73");
    *reinterpret_cast<uint32_t*>(&rcx60) = cl50;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx60) + 4) = 0;
    if (!static_cast<int1_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_39) >> *reinterpret_cast<int16_t*>(&rdi51)))) {
    }
    __asm__("rcr dh, 0x4c");
    *reinterpret_cast<uint16_t*>(&r9_45) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_45) ^ 0x8c9);
    if (__intrinsic()) {
        rcx60 = r9_45;
    }
    __asm__("shrd r13, r9, cl");
    *reinterpret_cast<unsigned char*>(&rcx60) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(~*reinterpret_cast<unsigned char*>(&rcx60)) & 15);
    __asm__("shld r9w, cx, cl");
    *reinterpret_cast<uint32_t*>(&r12_61) = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r9_45)) << 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_61) + 4) = 0;
    rbx62 = -(rax59 + (0 < rax59 + __intrinsic()));
    r8w63 = -*reinterpret_cast<int16_t*>(&r8_58);
    *reinterpret_cast<signed char*>(&r8w63) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r8w63) >> 1);
    *reinterpret_cast<uint32_t*>(&rsi64) = *reinterpret_cast<uint32_t*>(&r15_46);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi64) + 4) = 0;
    __asm__("cwd ");
    rax65 = rax59 * r15_46;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx62) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx62) + 1) | *reinterpret_cast<unsigned char*>(&rax65));
    __asm__("shld r9d, esi, 0x1");
    __asm__("lahf ");
    eax66 = *reinterpret_cast<int16_t*>(&rax65);
    __asm__("bsr si, si");
    *reinterpret_cast<int16_t*>(&r8_58) = reinterpret_cast<int16_t>(r8w63 << *reinterpret_cast<unsigned char*>(&rcx60));
    __asm__("ror r8w, 1");
    __asm__("ror bp, 0x7");
    *reinterpret_cast<uint16_t*>(&rbp56) = *reinterpret_cast<unsigned char*>(&rbx62);
    r10_67 = r10_42 ^ 0x3c5da5a9;
    if (__intrinsic()) {
    }
    __asm__("bsr rbx, rax");
    __asm__("shrd esi, ebx, cl");
    *reinterpret_cast<int32_t*>(&r13_68) = reinterpret_cast<int32_t>(-r13d21);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_68) + 4) = 0;
    __asm__("xadd al, dl");
    __asm__("rol r13, 1");
    *reinterpret_cast<unsigned char*>(&r14_53) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_53) & *reinterpret_cast<unsigned char*>(&r8_58));
    __asm__("ror r9b, cl");
    *reinterpret_cast<unsigned char*>(&r8_58) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_58) & 0x8f);
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r8_58) == 0)))) {
        rcx60 = r14_53;
    }
    *reinterpret_cast<uint16_t*>(&r11_39) = -*reinterpret_cast<uint16_t*>(&r11_39);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax66) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax66) + 1) - reinterpret_cast<unsigned char>(33 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax66) + 1) < 0xdf)));
    bx69 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx62) ^ 0x7f88);
    if (1) {
        *reinterpret_cast<int16_t*>(&r10_67) = *reinterpret_cast<int16_t*>(&r10_67);
    }
    __asm__("rcr si, 1");
    __asm__("rol bpl, 1");
    r12_70 = reinterpret_cast<uint64_t>(-r12_61);
    __asm__("ror r15w, 1");
    *reinterpret_cast<unsigned char*>(&bx69) = __intrinsic();
    __asm__("ror r11, cl");
    __asm__("bts r10d, 0x16");
    r14_71 = r14_53 & 0x6e718241;
    *reinterpret_cast<signed char*>(&eax66) = *reinterpret_cast<signed char*>(&eax66);
    if (reinterpret_cast<int64_t>(r15_46) < reinterpret_cast<int64_t>(rcx60 + 1)) {
        *reinterpret_cast<int16_t*>(&rsi64) = *reinterpret_cast<int16_t*>(&r13_68);
    }
    r15_72 = r15_46 - (rcx60 + reinterpret_cast<uint1_t>(r15_46 < rcx60 + 1)) + r13_68 + 1;
    __asm__("btr bp, 0x67");
    if (!r15_72) {
    }
    __asm__("rcr rsi, 1");
    *reinterpret_cast<uint32_t*>(&r10_73) = *reinterpret_cast<uint32_t*>(&r10_67) >> *reinterpret_cast<unsigned char*>(&rcx60);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_73) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r10_73) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_73) >> *reinterpret_cast<unsigned char*>(&rcx60));
    *reinterpret_cast<uint16_t*>(&r12_70) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&r12_70) >> 1) & 0x3578) << 1);
    r10_74 = r10_73 + 0xffffffffdfe96b1c;
    eax75 = eax66 + 0x10089a73;
    __asm__("bsf r13, rdi");
    __asm__("shld r14d, r9d, 0x1");
    *reinterpret_cast<unsigned char*>(&rdi51) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi51) - *reinterpret_cast<signed char*>(&r15_72));
    *reinterpret_cast<uint32_t*>(&r9_76) = *reinterpret_cast<uint32_t*>(&rdi51) + *reinterpret_cast<int32_t*>(&r11_39) * 2 + 0x89;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_76) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r12_70) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_70) - reinterpret_cast<unsigned char>(51 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r12_70) < 52)));
    *reinterpret_cast<unsigned char*>(&rcx60) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r10_74) >= reinterpret_cast<int64_t>(0))) | 0xc0);
    ax77 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax75) & 0x3fff);
    *reinterpret_cast<uint16_t*>(&rdx78) = reinterpret_cast<uint16_t>(ax77 % static_cast<int16_t>(*reinterpret_cast<signed char*>(&rcx60)));
    ax79 = reinterpret_cast<uint16_t>(ax77 / static_cast<int16_t>(*reinterpret_cast<signed char*>(&rcx60)));
    r11_80 = reinterpret_cast<uint64_t>(r11_39 >> *reinterpret_cast<unsigned char*>(&rcx60));
    __asm__("ror r11d, 1");
    *reinterpret_cast<uint16_t*>(&r14_71) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_71) & 0x93cd);
    *reinterpret_cast<uint32_t*>(&r13_81) = 0x56783901;
    *reinterpret_cast<unsigned char*>(&ax79) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ax79) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx78) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&ax79) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx78) + 1))))));
    if (!reinterpret_cast<uint1_t>(static_cast<uint1_t>(r12_70 >> rsi64) | __undefined())) {
        *reinterpret_cast<uint16_t*>(&r13_81) = bx69;
    }
    __asm__("rcr ah, 1");
    __asm__("rcl bx, 1");
    *reinterpret_cast<uint16_t*>(&r15_72) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_72) >> 1);
    r14_82 = r14_71 >> -35;
    *reinterpret_cast<signed char*>(&r11_80) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r11_80) - 1);
    __asm__("shld r12, rsi, 0xb");
    *reinterpret_cast<uint16_t*>(&r13_81) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_81) >> 0x7b);
    __asm__("btr r15d, 0x14");
    ax83 = reinterpret_cast<int16_t>(-ax79);
    __asm__("shld r14d, r15d, 0xf9");
    *reinterpret_cast<uint32_t*>(&rcx84) = *reinterpret_cast<uint32_t*>(&rcx60) - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx84) + 4) = 0;
    *reinterpret_cast<signed char*>(&rcx84) = -*reinterpret_cast<signed char*>(&rcx84);
    *reinterpret_cast<uint16_t*>(&r12_70) = *reinterpret_cast<uint16_t*>(&r10_74);
    __asm__("rcl r14d, 1");
    tmp8_85 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi51) - 31) + 1);
    cf86 = reinterpret_cast<uint1_t>(tmp8_85 < *reinterpret_cast<unsigned char*>(&rdi51));
    *reinterpret_cast<unsigned char*>(&rdi51) = tmp8_85;
    *reinterpret_cast<unsigned char*>(&rsi64) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi64) + *reinterpret_cast<signed char*>(&rdx78)) + cf86);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax83) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax83) + 1) + 1);
    __asm__("bsf r13W, r9w");
    *reinterpret_cast<int32_t*>(&rax87) = ax83;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax87) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r10_74) = *reinterpret_cast<uint16_t*>(&rbp56);
    __asm__("btc r15, r8");
    rbp88 = rbp56 | 0xc000000000000000;
    rdx89 = rax87 % rbp88;
    rax90 = rax87 / rbp88;
    __asm__("rol r8d, 1");
    r12d91 = *reinterpret_cast<uint32_t*>(&r12_70) & 0x2b395946;
    *reinterpret_cast<signed char*>(&r10_74) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r10_74) + 64);
    __asm__("shrd edi, r9d, cl");
    *reinterpret_cast<unsigned char*>(&rax90) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax90) + *reinterpret_cast<signed char*>(&rdx89))));
    __asm__("xadd bh, al");
    __asm__("ror r12, 0xb5");
    __asm__("ror bpl, cl");
    __asm__("bsr esi, ebx");
    *reinterpret_cast<uint32_t*>(&rsi92) = *reinterpret_cast<uint32_t*>(&rsi64) >> 24 | *reinterpret_cast<uint32_t*>(&rsi64) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&rsi64) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&rsi64) << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi92) + 4) = 0;
    rsi93 = reinterpret_cast<uint64_t>(rsi92 >> *reinterpret_cast<signed char*>(&rcx84));
    r8_94 = *reinterpret_cast<int32_t*>(&r10_74);
    bp95 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp88) & *reinterpret_cast<uint16_t*>(&r15_72));
    __asm__("bts r14w, r9w");
    cf96 = *reinterpret_cast<uint32_t*>(&r13_81) < *reinterpret_cast<uint32_t*>(&r14_82);
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r14_82) = *reinterpret_cast<uint32_t*>(&rdi51);
    }
    __asm__("rcr rcx, 1");
    if (!__intrinsic()) {
        rcx84 = rax90;
    }
    if (!cf96) {
        r11_80 = rdx89;
    }
    __asm__("rcl r9d, 1");
    __asm__("rcr eax, 1");
    *reinterpret_cast<uint16_t*>(&r8_94) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_94) - reinterpret_cast<uint16_t>(0x446e - reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r8_94) < 0xbb93)));
    __asm__("rcl r10d, 1");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx89) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx89) + 1) >> 11);
    bx97 = reinterpret_cast<uint16_t>(bx69 >> *reinterpret_cast<signed char*>(&rcx84));
    r15_98 = r15_72 | 0xffffffffbc9a5e07;
    dx99 = reinterpret_cast<uint16_t>(-*reinterpret_cast<int16_t*>(&rdx89));
    __asm__("rcl r14b, 1");
    __asm__("ror r15d, 1");
    *reinterpret_cast<uint16_t*>(&rbp88) = reinterpret_cast<uint16_t>(bp95 - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_80) + reinterpret_cast<uint1_t>(bp95 < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r11_80))))));
    rcx100 = rcx84 - 0x7a15e9c2;
    *reinterpret_cast<unsigned char*>(&rax90) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax90) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&bx97) + 1));
    __asm__("rol r12, cl");
    r9_101 = r9_76 + 1;
    __asm__("rol rdx, 0xaa");
    __asm__("rol ax, 0xa0");
    __asm__("btc r11w, r12w");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx62) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&bx97) + 1) - 26);
    *reinterpret_cast<uint32_t*>(&r11_102) = *reinterpret_cast<uint32_t*>(&r11_80) ^ 0x23070903;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_102) + 4) = 0;
    if (__intrinsic()) {
        *reinterpret_cast<int16_t*>(&r12d91) = *reinterpret_cast<int16_t*>(&rax90);
    }
    __asm__("rol r14, cl");
    *reinterpret_cast<int32_t*>(&rdi103) = *reinterpret_cast<signed char*>(&r14_82);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi103) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r14_82) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("rcr al, 1");
    *reinterpret_cast<unsigned char*>(&r9_101) = reinterpret_cast<uint1_t>(dx99 > reinterpret_cast<uint16_t>(0x6e7e - reinterpret_cast<uint1_t>(dx99 < 0x9183)));
    __asm__("rcr r12w, 0x2b");
    if (*reinterpret_cast<signed char*>(&r11_102) >= 79) {
        *reinterpret_cast<int32_t*>(&rbx62) = *reinterpret_cast<int32_t*>(&rbp88);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx62) + 4) = 0;
    }
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r8_94) = r12d91;
    }
    __asm__("ror r12d, 1");
    r8d104 = *reinterpret_cast<uint32_t*>(&r8_94) - (0x30476b24 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r8_94) < 0xcfb894dd));
    r11_105 = reinterpret_cast<uint64_t>(r11_102 >> 1);
    r12_106 = *reinterpret_cast<uint16_t*>(&r8d104);
    *reinterpret_cast<unsigned char*>(&rbx62) = reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&r11_105) >= *reinterpret_cast<int16_t*>(&rsi93));
    __asm__("rcl di, 1");
    if (1) {
        *reinterpret_cast<uint16_t*>(&rbx62) = *reinterpret_cast<uint16_t*>(&r9_101);
    }
    *reinterpret_cast<unsigned char*>(&rsi93) = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic()) | reinterpret_cast<uint1_t>(-0x23070903 == 0));
    *reinterpret_cast<signed char*>(&rcx100) = -*reinterpret_cast<signed char*>(&rcx100);
    __asm__("shld r11, rdx, 0x1");
    rax107 = r9_101;
    r15d108 = *reinterpret_cast<uint32_t*>(&r15_98) | 0xc0000000;
    __asm__("btr rsi, 0xab");
    __asm__("shld r13, rdx, 0x1");
    *reinterpret_cast<uint32_t*>(&rax109) = *reinterpret_cast<uint32_t*>(&rax107) / r15d108 * r8d104;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax109) + 4) = 0;
    rbx110 = reinterpret_cast<int64_t>(rbx62) >> 1;
    __asm__("ror ch, 1");
    *reinterpret_cast<uint32_t*>(&r15_111) = r15d108 * 0xed365158;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_111) + 4) = 0;
    __asm__("ror r14w, 0xf6");
    __asm__("rcl dil, 0xe3");
    __asm__("ror r13W, cl");
    *reinterpret_cast<int32_t*>(&rcx112) = *reinterpret_cast<int32_t*>(&rcx100) + *reinterpret_cast<int32_t*>(&rbx110);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx112) + 4) = 0;
    __asm__("xadd dx, r9w");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx112) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx112) + 1) - 85);
    *reinterpret_cast<uint16_t*>(&r15_111) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_111) ^ 0x7b6);
    __asm__("shld ebp, esi, 0x1");
    *reinterpret_cast<uint32_t*>(&r14_113) = *reinterpret_cast<uint32_t*>(&r14_82) - (*reinterpret_cast<uint32_t*>(&rsi93) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r14_82) < *reinterpret_cast<uint32_t*>(&rsi93)));
    if (*reinterpret_cast<int32_t*>(&r14_82) < *reinterpret_cast<int32_t*>(&rsi93)) {
    }
    *reinterpret_cast<signed char*>(&r14_113) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r14_113) >> 2);
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>((*reinterpret_cast<uint16_t*>(&rax109) & 0x6799) == 0)))) {
    }
    r8_114 = 0x3fffffffffffffff;
    rdx115 = rax109 % (rcx112 | 0xc000000000000000);
    r14w116 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_113) | 0xc000);
    r10_117 = 0xd310102c3e01e1d1;
    *reinterpret_cast<int16_t*>(&rdx115) = __intrinsic();
    __asm__("rcl ebp, 1");
    ecx118 = *reinterpret_cast<uint16_t*>(&r12_106);
    __asm__("rcr dh, cl");
    __asm__("shld r15, r13, 0x33");
    __asm__("btc edx, r15d");
    __asm__("shld rbp, r12, 0x20");
    rsi119 = rsi93 >> 1;
    si120 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rsi119) << *reinterpret_cast<unsigned char*>(&ecx118));
    *reinterpret_cast<uint16_t*>(&r8_114) = reinterpret_cast<uint16_t>(0x7c88 + __intrinsic());
    if (*reinterpret_cast<int16_t*>(&r8_114) < reinterpret_cast<int16_t>(0)) {
    }
    __asm__("rol edi, 1");
    tmp8_121 = *reinterpret_cast<unsigned char*>(&ecx118);
    *reinterpret_cast<unsigned char*>(&ecx118) = *reinterpret_cast<unsigned char*>(&r14w116);
    *reinterpret_cast<unsigned char*>(&rdx115) = tmp8_121;
    __asm__("btr si, 0xf5");
    *reinterpret_cast<uint16_t*>(&r10_117) = reinterpret_cast<uint16_t>(0xe1d1 >> *reinterpret_cast<unsigned char*>(&ecx118));
    __asm__("ror bp, 0x6b");
    *reinterpret_cast<uint32_t*>(&rcx122) = ecx118 & 0xcf9b19f;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx122) + 4) = 0;
    rdi123 = rdi103 | 0xffffffff8bb51589;
    __asm__("rcr r11d, 0x50");
    if (__intrinsic()) {
    }
    rdx124 = (rdx115 >> -58) + r11_105 + 1;
    __asm__("bts rsi, 0x51");
    *reinterpret_cast<uint16_t*>(&r14_113) = 0x14ef;
    __asm__("shld r11d, edx, cl");
    __asm__("bts r12, r10");
    __asm__("rol ebx, 1");
    dx125 = __intrinsic();
    *reinterpret_cast<int16_t*>(&rcx122) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rcx122) >> *reinterpret_cast<signed char*>(&rcx122));
    rcx126 = rcx122 - rcx122;
    __asm__("rcr di, 1");
    *reinterpret_cast<int16_t*>(&rcx126) = 0;
    *reinterpret_cast<uint32_t*>(&r12_127) = *reinterpret_cast<uint32_t*>(&r15_111);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_127) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rcx126) = 0;
    __asm__("shld r12w, di, cl");
    *reinterpret_cast<int32_t*>(&r13_128) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_128) + 4) = 0;
    __asm__("ror r8, 0xaa");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx126) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx126) + 1) ^ *reinterpret_cast<unsigned char*>(&dx125));
    rbx129 = *reinterpret_cast<uint16_t*>(&r10_117);
    *reinterpret_cast<int16_t*>(&rdi123) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rdi123) + 0x31ce);
    __asm__("rcr bh, cl");
    *reinterpret_cast<int16_t*>(&rsi119) = reinterpret_cast<int16_t>(~si120);
    tmp64_130 = (((r10_117 & 0xffffffff) << 32 | 0xd310102c) & 0xffff0000ffff) << 16 | 0x3e010000d310;
    r10_131 = (tmp64_130 & 0xff00ff00ff00ff) << 8 | (tmp64_130 & 0xff00ff00ff00ff00) >> 8;
    __asm__("shld r15d, r15d, 0x1b");
    __asm__("bts rbp, r9");
    __asm__("rcl rdi, 1");
    *reinterpret_cast<uint32_t*>(&rcx132) = *reinterpret_cast<uint32_t*>(&rcx126) & 0x654d9e5d;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx132) + 4) = 0;
    __asm__("rol r8w, cl");
    r8_133 = r8_114 >> 1;
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r14_113) = *reinterpret_cast<uint32_t*>(&r11_105) | 0x988be262;
    }
    eax134 = *reinterpret_cast<int32_t*>(&rbx129) * 0x6f98833d;
    r12_135 = r12_127 << 1;
    *reinterpret_cast<uint32_t*>(&rsi136) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rsi119) + 0x52928837 - *reinterpret_cast<int32_t*>(&r8_133));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi136) + 4) = 0;
    rbp137 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int16_t*>(&r12_135)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax134) + 1) = 0;
    __asm__("rcr r12, cl");
    *reinterpret_cast<uint16_t*>(&rdx124) = reinterpret_cast<uint16_t>(dx125 - reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(dx125 < 0))));
    __asm__("rcr r10, 1");
    *reinterpret_cast<uint16_t*>(&r12_135) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_135) - reinterpret_cast<uint16_t>(0x10d3 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r12_135) < 0x10d3)));
    rbx138 = *reinterpret_cast<uint32_t*>(&r14_113) + eax134 * 4 + 0xc7;
    r9_139 = rdx124;
    rax140 = *reinterpret_cast<int16_t*>(&rbp137);
    if (reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax140) + 1) & 0xbc) < reinterpret_cast<signed char>(0)) {
        r15_111 = rsi136;
    }
    __asm__("shld r14w, ax, cl");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax140) + 1) = -*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax140) + 1);
    *reinterpret_cast<uint32_t*>(&r12_141) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r12_135) + *reinterpret_cast<int32_t*>(&r9_139));
    __asm__("ror r11b, 1");
    __asm__("btc r8d, r8d");
    __asm__("ror bp, 0xb9");
    __asm__("bsf r13W, r11w");
    r14_142 = 0;
    *reinterpret_cast<uint32_t*>(&r9_143) = *reinterpret_cast<uint32_t*>(&r12_141) + *reinterpret_cast<uint32_t*>(&rsi136) * 8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_143) + 4) = 0;
    __asm__("rol di, 0x8b");
    __asm__("shrd r10d, edi, 0x1");
    *reinterpret_cast<uint16_t*>(&r9_143) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_143) >> 1);
    rdi144 = rdi123 ^ rbp137 | 0xc000000000000000;
    rdx145 = rax140 % rdi144;
    rax146 = rax140 / rdi144;
    *reinterpret_cast<uint16_t*>(&r14_142) = *reinterpret_cast<uint16_t*>(&rdx145);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax146) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax146) + 1) >> 21) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx132) + 1));
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax146) + 1) < reinterpret_cast<signed char>(0)) {
        *reinterpret_cast<int16_t*>(&rsi136) = *reinterpret_cast<int16_t*>(&rax146);
    }
    __asm__("rcl edx, 1");
    *reinterpret_cast<unsigned char*>(&rcx132) = 43;
    esi147 = *reinterpret_cast<uint32_t*>(&rsi136) >> -32;
    *reinterpret_cast<int32_t*>(&rbp148) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp148) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rbx138) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx138) | 0xc0);
    *reinterpret_cast<uint16_t*>(&rdx145) = reinterpret_cast<uint16_t>(0x3fff % reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&rbx138))));
    cf149 = *reinterpret_cast<unsigned char*>(&rdx145) < 91;
    *reinterpret_cast<unsigned char*>(&rdx145) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx145) - 91);
    if (cf149) {
        *reinterpret_cast<int16_t*>(&rbp148) = *reinterpret_cast<int16_t*>(&rbx138);
    }
    if (!*reinterpret_cast<unsigned char*>(&rdx145)) {
        r9_143 = r10_131;
    }
    if (__intrinsic()) {
        rbx138 = rbp148;
    }
    *reinterpret_cast<unsigned char*>(&esi147) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&esi147) >> 1);
    rdi150 = ~rdi144;
    __asm__("rcr r11w, cl");
    r12d151 = *reinterpret_cast<uint32_t*>(&r12_141) ^ *reinterpret_cast<uint32_t*>(&r9_143);
    r15_152 = r15_111 - (0x8287 + reinterpret_cast<uint1_t>(r15_111 < 0x8287));
    *reinterpret_cast<unsigned char*>(&r12d151) = 0;
    *reinterpret_cast<int32_t*>(&r12_153) = reinterpret_cast<int32_t>(-r12d151);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_153) + 4) = 0;
    rdx154 = __intrinsic() << 1;
    *reinterpret_cast<int32_t*>(&rbp155) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx154) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp155) + 4) = 0;
    __asm__("xadd r14d, edx");
    rbx156 = rbx138 << 43;
    *reinterpret_cast<unsigned char*>(&r12_153) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_153) >> 1);
    __asm__("shrd rbx, rax, 0x1");
    __asm__("btc si, 0x1c");
    __asm__("shld bp, di, 0x1");
    *reinterpret_cast<uint32_t*>(&rsi157) = esi147 * 0x311555d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi157) + 4) = 0;
    zf158 = *reinterpret_cast<signed char*>(&rdx154) == *reinterpret_cast<signed char*>(&r14_142);
    if (zf158) {
        tmp8_159 = *reinterpret_cast<signed char*>(&rdx154);
        *reinterpret_cast<signed char*>(&r14_142) = tmp8_159;
    }
    if (!zf158) {
        r9_143 = rbp155;
    }
    tmp64_160 = rcx132 + r9_143;
    rcx161 = tmp64_160;
    if (tmp64_160 >= rcx132) {
        *reinterpret_cast<int32_t*>(&r12_153) = *reinterpret_cast<int32_t*>(&rdi150);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_153) + 4) = 0;
    }
    __asm__("rcl dil, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx156) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(-*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx156) + 1) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx161) + 1))));
    if (!*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx156) + 1)) {
        *reinterpret_cast<int32_t*>(&rbp155) = 0x2c1010d3;
    }
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&rbx156) = -1;
    }
    __asm__("ror si, 0xc2");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx161) + 1) = reinterpret_cast<unsigned char>(~*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx161) + 1));
    __asm__("rol si, 1");
    __asm__("shrd ebx, r11d, 0x1");
    __asm__("btc r13, rsi");
    *reinterpret_cast<int32_t*>(&r10_162) = *reinterpret_cast<signed char*>(&r14_142);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_162) + 4) = 0;
    __asm__("ror r13d, 0x76");
    *reinterpret_cast<int16_t*>(&rbx156) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbx156) << 1);
    __asm__("shrd rax, rax, cl");
    __asm__("shld r11w, r8w, 0x1");
    __asm__("rcl dil, 1");
    __asm__("ror r10w, 1");
    __asm__("shrd cx, r11w, 0x1");
    __asm__("ror r14, cl");
    rcx163 = rcx161 | 0xc000000000000000;
    __asm__("shld r12w, r14w, 0x1");
    __asm__("shld ebp, r12d, 0x9f");
    __asm__("bts r14d, 0x20");
    *reinterpret_cast<uint32_t*>(&rbx164) = *reinterpret_cast<int32_t*>(&rbx156) + *reinterpret_cast<int32_t*>(&r14_142) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx164) + 4) = 0;
    __asm__("shrd eax, r10d, 0x1");
    *reinterpret_cast<unsigned char*>(&r15_152) = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rcx163) <= 0);
    r15_165 = r15_152 | 0xc000000000000000;
    __asm__("shld rdi, r14, 0x89");
    *reinterpret_cast<uint16_t*>(&r13_128) = reinterpret_cast<uint16_t>(0x820e - *reinterpret_cast<int16_t*>(&rsi157));
    edx166 = __intrinsic();
    dx167 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&edx166) - 0x7ea7);
    if (*reinterpret_cast<signed char*>(&dx167) > *reinterpret_cast<signed char*>(&r10_162)) {
        *reinterpret_cast<uint32_t*>(&rsi157) = *reinterpret_cast<uint32_t*>(&rsi157);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi157) + 4) = 0;
    }
    if (*reinterpret_cast<signed char*>(&dx167) >= *reinterpret_cast<signed char*>(&r10_162)) {
    }
    __asm__("shld si, bp, 0x0");
    if (*reinterpret_cast<uint16_t*>(&r15_165) == *reinterpret_cast<uint16_t*>(&r10_162)) {
        tmp16_168 = *reinterpret_cast<uint16_t*>(&r15_165);
        *reinterpret_cast<uint16_t*>(&r15_165) = *reinterpret_cast<uint16_t*>(&r10_162);
        *reinterpret_cast<uint16_t*>(&r10_162) = tmp16_168;
    }
    __asm__("bts rbp, r12");
    *reinterpret_cast<uint16_t*>(&r15_165) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_165) + *reinterpret_cast<int16_t*>(&rbp155)) + __intrinsic());
    *reinterpret_cast<uint16_t*>(&r9_143) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_143) << 1);
    __asm__("ror r11, 0xf");
    __asm__("shld r12, rdi, 0x27");
    if (!__intrinsic()) {
        r9_143 = rdi150;
    }
    __asm__("ror ax, 1");
    __asm__("xadd r12, r8");
    __asm__("btc r11d, ecx");
    if (rdi150 == 0xf6af) {
        rdi150 = 0xf6af;
    }
    __asm__("rcl r12, 1");
    __asm__("bsr r11, r9");
    __asm__("rol r8w, 0xc7");
    *reinterpret_cast<int16_t*>(&edx166) = *reinterpret_cast<int16_t*>(&rdi150);
    *reinterpret_cast<int32_t*>(&r14_169) = *reinterpret_cast<int32_t*>(&r14_142) - *reinterpret_cast<int32_t*>(&r15_165);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_169) + 4) = 0;
    __asm__("btr rcx, r11");
    if (!__intrinsic()) {
        r12_153 = rbx164;
    }
    *reinterpret_cast<uint32_t*>(&rdx170) = edx166 - *reinterpret_cast<uint32_t*>(&rsi157);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx170) + 4) = 0;
    __asm__("btr r15d, r10d");
    __asm__("btc r10w, dx");
    __asm__("btc r15w, si");
    __asm__("rcr bl, 1");
    __asm__("rcr r13W, 1");
    __asm__("bsr rdx, rbx");
    r9d171 = *reinterpret_cast<uint32_t*>(&r9_143) + 1;
    esi172 = static_cast<int32_t>(rdx170 + rsi157 * 2 + 73);
    __asm__("bsr r10d, eax");
    __asm__("shld edx, eax, cl");
    __asm__("shld r11w, bp, cl");
    rax173 = 0;
    if (!__intrinsic()) {
        *reinterpret_cast<int16_t*>(&rdi150) = *reinterpret_cast<int16_t*>(&esi172);
    }
    __asm__("bsf cx, si");
    __asm__("btr rsi, rcx");
    r13_174 = r13_128 - (0x5b08a64a + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r13_128 < 0x5b08a64a + static_cast<uint64_t>(__intrinsic()))));
    __asm__("ror edx, 1");
    __asm__("shld r10w, dx, cl");
    __asm__("btr cx, ax");
    rbx175 = rbx164 >> 1;
    r12_176 = r12_153 - 1;
    __asm__("rcl r15b, 1");
    __asm__("rcl r15, 0x44");
    __asm__("cwd ");
    __asm__("bts r9w, bp");
    __asm__("rcr bx, 0xdc");
    *reinterpret_cast<uint16_t*>(&rax173) = reinterpret_cast<uint16_t>(0xd200 >> 36);
    __asm__("xadd dl, bh");
    *reinterpret_cast<uint32_t*>(&rax177) = *reinterpret_cast<int32_t*>(&rax173) + r9d171 + 1;
    __asm__("xadd cl, ch");
    tmp8_178 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax177) + 1)))));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx175) + 1) = tmp8_178;
    __asm__("shrd r12d, r8d, 0x1");
    if (tmp8_178 >= 0) {
    }
    *reinterpret_cast<int16_t*>(&r13_174) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r13_174) >> 0xff84);
    __asm__("btr r11d, r14d");
    __asm__("rcl si, 0x80");
    r11b179 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&r14_169) > 100);
    __asm__("rcl r9w, cl");
    __asm__("cwd ");
    __asm__("rcl r14b, 0x3b");
    __asm__("btc ax, 0x22");
    __asm__("shrd dx, dx, 0xa");
    rdx180 = __intrinsic();
    r13_181 = r13_174 + r13_174;
    *reinterpret_cast<unsigned char*>(&r12_176) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_176) + reinterpret_cast<unsigned char>(r11b179 - reinterpret_cast<unsigned char>(0x72 - reinterpret_cast<uint1_t>(r11b179 < 0x8f)))))) >> 1);
    rsi182 = *reinterpret_cast<uint16_t*>(&r14_169);
    __asm__("shrd ecx, ebx, 0x55");
    rcx183 = r14_169 + r12_176 * 4;
    *reinterpret_cast<int16_t*>(&rcx183) = 0;
    *reinterpret_cast<uint16_t*>(&rbx175) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx175) >> -94);
    __asm__("rol r8, 1");
    __asm__("btc r15d, ecx");
    *reinterpret_cast<uint16_t*>(&r15_165) = static_cast<uint16_t>(*reinterpret_cast<int32_t*>(&r15_165) + *reinterpret_cast<uint32_t*>(&rcx183) * 2 + 0x2127ce8e);
    __asm__("bsr r13W, r14w");
    __asm__("ror r9d, 1");
    __asm__("shld r15d, ecx, 0x8c");
    __asm__("xadd dh, dl");
    rbp184 = r14_169 + r15_165 * 2 + 0x9c;
    *reinterpret_cast<unsigned char*>(&rbx175) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx175) + reinterpret_cast<uint1_t>(!__intrinsic()));
    __asm__("btr r8, 0xfb");
    __asm__("shld bx, r10w, 0x1");
    __asm__("shld r14, r9, 0x1");
    __asm__("bsf bp, r9w");
    __asm__("btr r10, 0x3");
    rax185 = r13_181;
    __asm__("rcl ecx, 1");
    __asm__("rcl r13, 1");
    *reinterpret_cast<int16_t*>(&rax185) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax185) * *reinterpret_cast<signed char*>(&r10_162));
    r14_186 = r14_169 - r12_176;
    __asm__("bts r13, r12");
    __asm__("rcl r8, 1");
    __asm__("ror bx, cl");
    *reinterpret_cast<unsigned char*>(&rdx180) = 0;
    cf187 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rbx175) < 65);
    *reinterpret_cast<unsigned char*>(&rbx175) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx175) - reinterpret_cast<unsigned char>(65 + cf187));
    *reinterpret_cast<uint16_t*>(&r13_181) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_181) + *reinterpret_cast<uint16_t*>(&rsi182)) + cf187);
    __asm__("shrd r11, r14, 0x1");
    __asm__("btr r11w, 0x67");
    __asm__("rcl r15d, 1");
    __asm__("rcr bh, cl");
    r9w188 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r9d171) - 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax185) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax185) + 1) << 1);
    *reinterpret_cast<uint32_t*>(&rcx189) = (*reinterpret_cast<uint32_t*>(&rcx183) & 0xc8350eff) + *reinterpret_cast<int32_t*>(&r15_165);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx189) + 4) = 0;
    cf190 = reinterpret_cast<uint1_t>(rdx180 < 0x7ce7e52c);
    *reinterpret_cast<unsigned char*>(&r10_162) = __intrinsic();
    if (!cf190) {
        rsi182 = 0x3fffffffffffff00;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx189) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx189) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx175) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx189) + 1) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx175) + 1) + cf190))));
    if (!__intrinsic()) {
        rcx189 = r10_162;
    }
    r12_191 = r12_176 - 1;
    r11_192 = *reinterpret_cast<signed char*>(&rax185);
    __asm__("ror r11d, 1");
    rbx193 = rbx175 >> 1 >> *reinterpret_cast<unsigned char*>(&rcx189);
    __asm__("shld r11, rdi, 0x64");
    *reinterpret_cast<unsigned char*>(&r13_181) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_181) + 1);
    *reinterpret_cast<int32_t*>(&r11_194) = *reinterpret_cast<int32_t*>(&r11_192) << *reinterpret_cast<unsigned char*>(&rcx189);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_194) + 4) = 0;
    __asm__("rol r14b, 1");
    eax195 = *reinterpret_cast<int32_t*>(&rax185) - 0xc31632b + 1;
    __asm__("cwd ");
    *reinterpret_cast<int32_t*>(&rax196) = *reinterpret_cast<int16_t*>(&eax195);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax196) + 4) = 0;
    __asm__("btc r10d, r15d");
    __asm__("rol r14w, 1");
    rax197 = rax196 | 0xffffffff970c319f;
    tmp8_198 = *reinterpret_cast<unsigned char*>(&r10_162);
    *reinterpret_cast<unsigned char*>(&r10_162) = 0;
    *reinterpret_cast<unsigned char*>(&rdi150) = tmp8_198;
    *reinterpret_cast<signed char*>(&r14_186) = *reinterpret_cast<signed char*>(&r9w188);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx189) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx189) + 1) + 41) + 1);
    __asm__("rcl rsi, 1");
    __asm__("rol rcx, 0x68");
    ax199 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax197) | 0xc000);
    *reinterpret_cast<uint16_t*>(&rax197) = reinterpret_cast<uint16_t>(ax199 / ax199);
    *reinterpret_cast<uint32_t*>(&r9_200) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&rbx193)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_200) + 4) = 0;
    __asm__("rol r13d, cl");
    __asm__("rol r9, 1");
    *reinterpret_cast<uint16_t*>(&rsi182) = reinterpret_cast<uint16_t>(static_cast<int16_t>(0x3fffffffffffff00 + r11_194 * 4 - 0x261b849a) + *reinterpret_cast<uint16_t*>(&r13_181));
    __asm__("bts r9d, r11d");
    *reinterpret_cast<uint32_t*>(&rdi201) = *reinterpret_cast<int32_t*>(&rdi150) + 0x1d484294;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi201) + 4) = 0;
    cl202 = -*reinterpret_cast<unsigned char*>(&rcx189);
    __asm__("rcr r11, 1");
    __asm__("xadd al, dl");
    __asm__("rcr eax, 1");
    __asm__("ror r9w, cl");
    rax203 = rax197 << cl202 ^ rbx193;
    __asm__("ror r13b, cl");
    *reinterpret_cast<unsigned char*>(&r9_200) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_200) >> -90);
    *reinterpret_cast<unsigned char*>(&rcx189) = reinterpret_cast<unsigned char>(cl202 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx189) + 1));
    *reinterpret_cast<unsigned char*>(&r12_191) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_191) & 0xb9);
    __asm__("rcl r13W, 1");
    __asm__("rcr r14, 1");
    __asm__("rol ch, cl");
    *reinterpret_cast<int16_t*>(&rax203) = reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax203) * *reinterpret_cast<signed char*>(&r11_194)) - 1);
    *reinterpret_cast<int32_t*>(&rbp204) = *reinterpret_cast<int32_t*>(&rbp184) - 0x250b0523 + *reinterpret_cast<int32_t*>(&rsi182);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp204) + 4) = 0;
    __asm__("shrd r11, rcx, 0xa3");
    *reinterpret_cast<uint16_t*>(&r10_162) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_162) >> 68);
    *reinterpret_cast<uint16_t*>(&r12_191) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_191) - reinterpret_cast<uint16_t>(0x1c1f + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r12_191) < 0x1c20)));
    r10_205 = r10_162 | 0xc000000000000000;
    rdx206 = rax203 % r10_205;
    rax207 = rax203 / r10_205;
    *reinterpret_cast<uint16_t*>(&r11_194) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_194) & 0x73b6);
    __asm__("xadd bp, r9w");
    if (0) {
        rax207 = r12_191;
    }
    __asm__("rcr di, 1");
    *reinterpret_cast<uint16_t*>(&rax207) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax207) + 0x84b6)));
    rbp208 = ~rbp204;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&rax207) < reinterpret_cast<int16_t>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rax207) == 0)) {
        *reinterpret_cast<int32_t*>(&rax207) = *reinterpret_cast<int32_t*>(&r11_194);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax207) + 4) = 0;
    }
    __asm__("rcl dil, 0x5c");
    *reinterpret_cast<uint32_t*>(&r15_209) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&r13_181)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_209) + 4) = 0;
    __asm__("rcr r9, 1");
    *reinterpret_cast<unsigned char*>(&r13_181) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_181) - 53) + 1);
    r14_210 = -r14_186;
    rax211 = rax207 - (0x11f72b8b - static_cast<uint64_t>(reinterpret_cast<uint1_t>(rax207 < 0x11f72b8b - static_cast<uint64_t>(reinterpret_cast<uint1_t>(!!r14_186)))));
    if (1) {
        r15_209 = rcx189 + 0x6be71d99 + 1;
    }
    r13_212 = reinterpret_cast<int64_t>(r13_181) >> 1;
    *reinterpret_cast<uint16_t*>(&rax211) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax211) - reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rbp208) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rax211) < reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&rbp208) + 1))));
    rbx213 = 0x35ade7aa6721a5e4;
    cf214 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rdi201) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rdx206))));
    *reinterpret_cast<uint16_t*>(&rdi201) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi201) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx206) + cf214));
    sf215 = *reinterpret_cast<int16_t*>(&rdi201) < reinterpret_cast<int16_t>(static_cast<uint32_t>(cf214));
    if (!__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rdi201) = *reinterpret_cast<uint32_t*>(&r9_200);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi201) + 4) = 0;
    }
    if (sf215) {
        *reinterpret_cast<uint32_t*>(&rax211) = *reinterpret_cast<uint32_t*>(&rdi201);
    }
    *reinterpret_cast<uint32_t*>(&rbp216) = *reinterpret_cast<uint32_t*>(&rbp208) ^ *reinterpret_cast<uint32_t*>(&rdi201);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp216) + 4) = 0;
    __asm__("shld r10d, ebp, cl");
    *reinterpret_cast<int32_t*>(&r10_217) = *reinterpret_cast<int32_t*>(&r10_205) * 0xb0d82fc0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_217) + 4) = 0;
    rcx218 = rdi201;
    if (0x6721a5e4 == *reinterpret_cast<uint32_t*>(&r15_209)) {
        *reinterpret_cast<uint32_t*>(&rbx213) = *reinterpret_cast<uint32_t*>(&r15_209);
        *reinterpret_cast<uint32_t*>(&r15_209) = 0x6721a5e4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_209) + 4) = 0;
    }
    *reinterpret_cast<unsigned char*>(&rcx218) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx218) & 15);
    __asm__("shrd bp, dx, cl");
    rax219 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax211)));
    __asm__("ror edx, cl");
    __asm__("xadd r13W, cx");
    rcx220 = rcx218 << *reinterpret_cast<unsigned char*>(&rcx218);
    __asm__("xadd al, bh");
    r8_221 = 0x3fffffffffffffff & rax219;
    *reinterpret_cast<uint32_t*>(&r11_222) = *reinterpret_cast<int32_t*>(&r12_191) + *reinterpret_cast<uint32_t*>(&r8_221) * 8 - 0x4d3f33d8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_222) + 4) = 0;
    if (1) {
        *reinterpret_cast<uint16_t*>(&r14_210) = *reinterpret_cast<uint16_t*>(&rdx206);
    }
    *reinterpret_cast<unsigned char*>(&rsi182) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi182) >> *reinterpret_cast<signed char*>(&rcx220));
    *reinterpret_cast<unsigned char*>(&rax219) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax219) | *reinterpret_cast<unsigned char*>(&rbx213));
    __asm__("bsf dx, r10w");
    if (*reinterpret_cast<unsigned char*>(&rax219)) {
        *reinterpret_cast<uint32_t*>(&r8_221) = *reinterpret_cast<uint32_t*>(&r9_200);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_221) + 4) = 0;
    }
    *reinterpret_cast<uint32_t*>(&r13_223) = *reinterpret_cast<uint32_t*>(&r13_212) & 0x55b4cc0d;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_223) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rbx224) = *reinterpret_cast<uint32_t*>(&rbx213) - (0xb739dc7 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbx213) < 0xb739dc8));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx224) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx220) + 1) = 0;
    *reinterpret_cast<uint16_t*>(&r9_200) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r9_200) >> 1);
    __asm__("rcr r14d, cl");
    __asm__("shld rdi, r8, 0x1");
    *reinterpret_cast<unsigned char*>(&r12_191) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(__undefined()))));
    return rax219 + rbx224 + rcx220 + rdx206 + rbp216 + rsi182 + rdi201 + r8_221 + r9_200 + r14_210 + r11_222 + r12_191 + r13_223 + r10_217 + r15_209 + 0x6c95fefa6764b1ea;
}

uint64_t log_size_10_var_009(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t rcx4;
    uint64_t rsi5;
    int64_t r8_6;
    uint64_t r13_7;
    uint64_t r11_8;
    int64_t rdi9;
    int64_t r10_10;
    uint16_t di11;
    uint64_t rdx12;
    int64_t r13_13;
    uint32_t r14d14;
    int32_t r9d15;
    int64_t rcx16;
    uint16_t bp17;
    uint16_t dx18;
    uint32_t esi19;
    uint16_t tmp16_20;
    int64_t rbp21;
    int16_t bx22;
    uint64_t r14_23;
    int64_t r11_24;
    int64_t r13_25;
    uint32_t eax26;
    uint64_t rsi27;
    uint16_t tmp16_28;
    uint64_t rdx29;
    uint64_t r9_30;
    unsigned char tmp8_31;
    uint64_t rbx32;
    uint64_t rbx33;
    uint16_t ax34;
    int64_t r8_35;
    uint64_t r11_36;
    int16_t cx37;
    uint16_t tmp16_38;
    uint1_t cf39;
    uint1_t cf40;
    uint32_t r13d41;
    uint64_t r9_42;
    uint64_t r15_43;
    uint64_t r9_44;
    uint64_t rax45;
    uint64_t rdx46;
    int1_t less47;
    uint1_t cf48;
    uint64_t r11_49;
    uint64_t r15_50;
    int64_t r12_51;
    int64_t r10_52;
    uint64_t rax53;
    uint16_t cx54;
    uint64_t r9_55;
    int64_t r10_56;
    uint1_t cf57;
    unsigned char ch58;
    uint64_t r8_59;
    int64_t rcx60;
    uint64_t r9_61;
    int64_t rbx62;
    uint32_t tmp32_63;
    uint1_t cf64;
    uint64_t r13_65;
    uint1_t zf66;
    uint64_t tmp64_67;
    int64_t rbp68;
    uint64_t rbx69;
    unsigned char ah70;
    uint1_t cf71;
    int64_t r12_72;
    int64_t r11_73;
    uint32_t r9d74;
    uint64_t r10_75;
    uint64_t rbx76;
    uint64_t r9_77;
    uint64_t rdi78;
    uint64_t tmp64_79;
    uint64_t tmp64_80;
    uint16_t cx81;
    uint64_t r10_82;
    uint64_t r13_83;
    uint64_t rax84;
    uint64_t rdi85;
    unsigned char tmp8_86;
    uint1_t cf87;
    uint64_t r15_88;
    int64_t rbp89;
    uint64_t r8_90;
    uint64_t rax91;
    uint64_t rax92;
    int64_t rdx93;
    uint64_t r10_94;
    unsigned char tmp8_95;
    uint1_t cf96;
    int64_t rcx97;
    int64_t rdx98;
    uint64_t rbp99;
    uint32_t r8d100;
    uint64_t tmp64_101;
    uint64_t r12_102;
    int64_t rcx103;
    int64_t rdx104;
    int64_t r13_105;
    uint16_t cx106;
    uint16_t ax107;
    int64_t r14_108;
    int64_t rax109;
    uint32_t edx110;
    uint1_t cf111;
    uint64_t r10_112;
    int64_t r15_113;
    uint64_t r14_114;
    unsigned char tmp8_115;
    unsigned char tmp8_116;
    int64_t rdx117;
    uint64_t rax118;
    uint64_t rdi119;
    uint64_t r10_120;
    uint64_t r12_121;
    uint16_t di122;
    uint64_t r9_123;
    uint64_t r8_124;
    int64_t r10_125;
    uint64_t rbp126;
    uint1_t cf127;
    uint64_t rbp128;
    int64_t r15_129;
    uint16_t ax130;
    int16_t ax131;
    uint32_t tmp32_132;
    uint64_t rax133;
    int32_t esi134;
    uint64_t r14_135;
    int64_t rax136;
    int64_t rax137;
    uint64_t rbx138;
    uint32_t r13d139;
    int64_t rbp140;
    uint16_t r8w141;
    int16_t r11w142;
    int64_t rdx143;
    uint64_t r12_144;
    uint64_t r13_145;
    uint32_t eax146;
    int16_t r11w147;
    int64_t r14_148;
    uint32_t esi149;
    int32_t ecx150;
    int64_t rbx151;
    unsigned char tmp8_152;
    uint1_t cf153;
    unsigned char r8b154;
    uint64_t tmp64_155;
    uint64_t tmp64_156;
    uint64_t r9_157;
    uint32_t tmp32_158;
    int64_t r15_159;
    uint64_t r14_160;
    int16_t bx161;
    uint32_t eax162;
    int64_t rsi163;
    uint64_t rdx164;
    int64_t rax165;
    uint64_t r10_166;
    int64_t rbp167;
    int64_t rax168;
    unsigned char tmp8_169;
    uint1_t cf170;
    uint32_t r14d171;
    uint32_t tmp32_172;
    uint32_t r14d173;
    uint64_t rax174;
    int64_t rdx175;
    uint64_t rcx176;
    uint32_t edi177;
    uint16_t ax178;
    uint64_t r9_179;
    uint64_t rsi180;
    int64_t rdx181;
    uint64_t r11_182;
    uint16_t r11w183;
    uint64_t r8_184;
    uint64_t tmp64_185;
    uint64_t rcx186;
    uint64_t rax187;
    uint1_t cf188;
    uint64_t r13_189;
    uint64_t r13_190;
    uint16_t r8w191;
    int64_t rdi192;
    uint64_t r9_193;
    uint32_t edi194;
    uint64_t r12_195;
    int64_t rsi196;
    uint64_t rbp197;
    uint64_t tmp64_198;
    int64_t rbx199;
    uint1_t cf200;
    uint64_t r15_201;
    int64_t rsi202;
    uint16_t tmp16_203;
    uint64_t rax204;
    int64_t rdx205;
    uint64_t rax206;
    int64_t rdx207;
    uint64_t rdx208;
    uint64_t rdi209;
    uint1_t cf210;
    uint64_t rdi211;
    uint16_t bx212;
    unsigned char ah213;
    unsigned char tmp8_214;
    uint16_t ax215;
    int64_t r14_216;
    int64_t r10_217;
    unsigned char bl218;
    uint64_t r12_219;
    uint64_t rdi220;
    uint16_t r15w221;
    unsigned char tmp8_222;
    int64_t rdi223;
    uint64_t rdi224;
    unsigned char bh225;
    uint16_t ax226;
    uint16_t dx227;
    uint64_t rcx228;
    unsigned char bl229;
    int64_t rax230;
    uint64_t rax231;
    uint64_t rdx232;
    uint64_t r11_233;
    uint64_t r14_234;
    uint64_t rax235;
    uint32_t tmp32_236;
    int64_t rsi237;
    uint64_t r11_238;
    uint32_t edx239;
    int64_t rax240;
    uint64_t r10_241;
    uint32_t edx242;
    uint16_t ax243;
    int64_t r9_244;
    uint64_t rcx245;
    unsigned char tmp8_246;
    unsigned char tmp8_247;
    uint64_t r8_248;
    uint32_t eax249;
    int32_t r15d250;
    int64_t r15_251;
    int64_t rbx252;
    int64_t rax253;
    uint32_t ebp254;
    int64_t rcx255;
    signed char tmp8_256;
    int64_t r9_257;
    uint64_t rdi258;
    int64_t r13_259;
    int64_t rbp260;
    int64_t rdx261;
    uint16_t ax262;

    rbx3 = 0x85866a86bb909870;
    rcx4 = 0xed45bf413e687898;
    rsi5 = 0xaeddee1f0257a066;
    r8_6 = 0x67a1e4613074c1e1;
    r13_7 = 0x80161aed310b0f1b;
    __asm__("rcr r8w, 1");
    __asm__("bsf dx, di");
    __asm__("shld r8d, eax, 0x1");
    *reinterpret_cast<uint16_t*>(&rcx4) = 0x7897;
    __asm__("xadd rsi, rax");
    *reinterpret_cast<uint32_t*>(&r11_8) = 0x3c5c02ac >> 0x97;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_8) + 4) = 0;
    *reinterpret_cast<signed char*>(&rsi5) = -0x66;
    __asm__("rol edi, 1");
    if (!__intrinsic()) {
        r13_7 = rsi5;
    }
    *reinterpret_cast<uint32_t*>(&rdi9) = *reinterpret_cast<uint32_t*>(&rsi5) * 0xfc39347c;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = 0;
    __asm__("ror r11, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx4) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx4) + 1) - 0x7b) + static_cast<uint1_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi5) >> 0x7a)));
    __asm__("bsf r11d, ebp");
    if (0x3074c1e1 == *reinterpret_cast<uint32_t*>(&rdi9)) {
        *reinterpret_cast<uint32_t*>(&r8_6) = *reinterpret_cast<uint32_t*>(&rdi9);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_6) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rdi9) = 0x3074c1e1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = 0;
    }
    if (-14 == *reinterpret_cast<signed char*>(&r13_7)) {
        *reinterpret_cast<signed char*>(&r13_7) = -14;
    }
    *reinterpret_cast<unsigned char*>(&r11_8) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r11_8))) + __intrinsic());
    __asm__("shrd bx, dx, 0x1");
    __asm__("xadd dl, r12b");
    __asm__("rcl r13W, cl");
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r8_6) = *reinterpret_cast<uint16_t*>(&rcx4);
    }
    r10_10 = 0x2afefb25ce73e63e;
    di11 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi9) - reinterpret_cast<uint16_t>(0x1d8d + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rdi9) < reinterpret_cast<uint16_t>(0x1d8d + reinterpret_cast<uint1_t>(0xbdcc636d9978000a < r13_7)))));
    __asm__("ror ecx, 1");
    __asm__("bsr rbp, r11");
    if (1) {
        r13_7 = r11_8;
    }
    if (0) {
    }
    __asm__("btc eax, edi");
    __asm__("bts rsi, 0x7f");
    __asm__("rcl r8d, 0x58");
    __asm__("bts r8d, 0xeb");
    __asm__("btc eax, r11d");
    rdx12 = *reinterpret_cast<uint32_t*>(&rsi5) + *reinterpret_cast<int32_t*>(&r13_7) - 0xaf0856f;
    *reinterpret_cast<int32_t*>(&r13_13) = *reinterpret_cast<int32_t*>(&r13_7) - 0x133b0b8a;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_13) + 4) = 0;
    __asm__("rcr r15, 0xcb");
    *reinterpret_cast<unsigned char*>(&rcx4) = 7;
    __asm__("shrd dx, bp, cl");
    __asm__("rol rdx, cl");
    r14d14 = 0x94d2ffb7;
    __asm__("rol dx, 1");
    __asm__("rcl ebp, 1");
    __asm__("ror r10d, 0x3e");
    *reinterpret_cast<uint16_t*>(&r11_8) = 0x65;
    __asm__("shld r11, rdx, cl");
    r9d15 = 0x511e23e5;
    __asm__("xadd ax, r13W");
    *reinterpret_cast<int32_t*>(&rcx16) = *reinterpret_cast<int32_t*>(&rcx4) >> 0x72;
    __asm__("rol dl, 1");
    __asm__("cwd ");
    *reinterpret_cast<uint16_t*>(&r13_13) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_13) - reinterpret_cast<uint16_t>(0x5ce + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r13_13) < 0x5ce)));
    __asm__("rcr dil, 0x62");
    *reinterpret_cast<int16_t*>(&r14d14) = reinterpret_cast<int16_t>(-73 << *reinterpret_cast<unsigned char*>(&rcx16));
    bp17 = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx16) + 1)));
    dx18 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx12) | 0xab00);
    *reinterpret_cast<unsigned char*>(&r8_6) = __intrinsic();
    esi19 = *reinterpret_cast<uint32_t*>(&rsi5) - (0x3a2254b0 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rsi5) < 0xc5ddab51));
    tmp16_20 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(bp17 + 0xc53c) + 1);
    *reinterpret_cast<uint16_t*>(&rbp21) = tmp16_20;
    *reinterpret_cast<unsigned char*>(&bx22) = reinterpret_cast<uint1_t>(tmp16_20 < bp17);
    if (__intrinsic()) {
        *reinterpret_cast<uint16_t*>(&r13_13) = 0xe63e;
    }
    *reinterpret_cast<unsigned char*>(&r9d15) = reinterpret_cast<unsigned char>(0xe5 & *reinterpret_cast<unsigned char*>(&rbp21));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&bx22) + 1) = 1;
    *reinterpret_cast<uint32_t*>(&r14_23) = r14d14 | esi19;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_23) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r11_24) = *reinterpret_cast<uint32_t*>(&r11_8) - (0x6a42a24e - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r11_8) < 0x95bd5db3));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_24) + 4) = 0;
    r13_25 = r13_13 << *reinterpret_cast<unsigned char*>(&rcx16);
    __asm__("shrd rbx, r9, cl");
    eax26 = 0;
    *reinterpret_cast<uint32_t*>(&rsi27) = (esi19 | 0xf9b90067) >> -10;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi27) + 4) = 0;
    __asm__("shrd r8w, r12w, 0xd");
    __asm__("shrd r14d, r13d, 0xd0");
    __asm__("shld ecx, edi, 0x75");
    *reinterpret_cast<int16_t*>(&rbx3) = reinterpret_cast<int16_t>(bx22 * 0x5f80);
    tmp16_28 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(dx18 + 0x1336) + 1);
    *reinterpret_cast<uint16_t*>(&rdx12) = tmp16_28;
    *reinterpret_cast<uint16_t*>(&r8_6) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_6) - 0x46c2) + reinterpret_cast<uint1_t>(tmp16_28 < dx18));
    *reinterpret_cast<uint16_t*>(&rdi9) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(di11) >> 19) & *reinterpret_cast<uint16_t*>(&r9d15));
    __asm__("rol r10b, 0x8e");
    __asm__("bsr rax, r13");
    *reinterpret_cast<uint32_t*>(&rdx29) = *reinterpret_cast<uint32_t*>(&rdx12) | 0x7eb438fa;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&eax26) = 0;
    if (0) {
        eax26 = 0xce73e63e;
        *reinterpret_cast<uint32_t*>(&r10_10) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_10) + 4) = 0;
    }
    __asm__("bsr r9w, dx");
    r9_30 = *reinterpret_cast<unsigned char*>(&r9d15);
    *reinterpret_cast<unsigned char*>(&r14_23) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_23) - *reinterpret_cast<unsigned char*>(&rcx16));
    if (*reinterpret_cast<unsigned char*>(&eax26) == *reinterpret_cast<unsigned char*>(&rcx16)) {
        tmp8_31 = *reinterpret_cast<unsigned char*>(&eax26);
        *reinterpret_cast<unsigned char*>(&eax26) = *reinterpret_cast<unsigned char*>(&rcx16);
        *reinterpret_cast<unsigned char*>(&rcx16) = tmp8_31;
    }
    __asm__("shrd r13W, r13W, cl");
    __asm__("xadd r13b, r9b");
    *reinterpret_cast<unsigned char*>(&r8_6) = reinterpret_cast<unsigned char>(~*reinterpret_cast<unsigned char*>(&r8_6));
    __asm__("rcl cl, 0xf0");
    *reinterpret_cast<unsigned char*>(&rcx16) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx16) & 15) & 15);
    __asm__("shld dx, r13W, cl");
    __asm__("shld r14w, r15w, 0x1");
    __asm__("rcl esi, 0x64");
    __asm__("bts bx, r12w");
    __asm__("btc r12w, r10w");
    __asm__("rol rsi, 1");
    __asm__("rcr ecx, 0x89");
    *reinterpret_cast<int32_t*>(&rbx32) = *reinterpret_cast<int32_t*>(&rbx3) * 0xf54c121b + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx32) + 4) = 0;
    rbx33 = rbx32 & r14_23;
    ax34 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax26) * *reinterpret_cast<uint16_t*>(&r10_10));
    *reinterpret_cast<int16_t*>(&rdx29) = __intrinsic();
    __asm__("btr rcx, r12");
    __asm__("btc rdi, 0xe9");
    __asm__("shrd r10w, r13W, 0x1");
    __asm__("rcr r8w, 1");
    r8_35 = r8_6 - r11_24;
    __asm__("ror r10w, 1");
    *reinterpret_cast<uint32_t*>(&r11_36) = *reinterpret_cast<uint32_t*>(&r11_24) + *reinterpret_cast<uint32_t*>(&r10_10);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_36) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax34) + 1) = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r11_36) < reinterpret_cast<int32_t>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r11_36) == 0));
    __asm__("ror rsi, 0x34");
    __asm__("shld r14, rdi, 0x1");
    *reinterpret_cast<unsigned char*>(&rsi27) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi27) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx16) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rsi27) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rcx16))))));
    __asm__("rol r10w, cl");
    __asm__("shrd r12w, r15w, 0x5");
    __asm__("btc cx, 0x8c");
    *reinterpret_cast<int16_t*>(&r9_30) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r9_30) << 1);
    cx37 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rcx16) >> 1);
    *reinterpret_cast<signed char*>(&rdi9) = reinterpret_cast<signed char>(0 >> 0x81);
    tmp16_38 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_25) + *reinterpret_cast<uint16_t*>(&rsi27)) + static_cast<uint1_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rsi27) >> *reinterpret_cast<uint16_t*>(&r11_36))));
    cf39 = reinterpret_cast<uint1_t>(tmp16_38 < *reinterpret_cast<uint16_t*>(&r13_25));
    *reinterpret_cast<uint16_t*>(&r13_25) = tmp16_38;
    __asm__("ror r8b, 1");
    cf40 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r14_23) < reinterpret_cast<uint16_t>(0xda0 - cf39));
    *reinterpret_cast<uint16_t*>(&r14_23) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_23) - reinterpret_cast<uint16_t>(0xda0 - cf40));
    r13d41 = *reinterpret_cast<int32_t*>(&r13_25) - 0x79432b14 + cf40;
    r9_42 = r9_30 + 0x79a4fc73;
    __asm__("bsr r15w, r15w");
    __asm__("bsr edi, r15d");
    *reinterpret_cast<uint16_t*>(&rbx33) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&rbx33))) | *reinterpret_cast<uint16_t*>(&r9_42));
    *reinterpret_cast<int32_t*>(&r15_43) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_43) + 4) = 0;
    r9_44 = r10_10 + rbx33 * 8;
    *reinterpret_cast<uint16_t*>(&eax26) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(ax34));
    __asm__("xadd ch, dh");
    *reinterpret_cast<unsigned char*>(&r15_43) = __intrinsic();
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx33) + 1) = reinterpret_cast<uint1_t>(rdx29 > 0x481cfa8a);
    *reinterpret_cast<uint32_t*>(&rax45) = eax26 * *reinterpret_cast<uint32_t*>(&r8_35);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax45) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx46) = __intrinsic();
    __asm__("rcr di, 0xa1");
    __asm__("rol dl, cl");
    less47 = *reinterpret_cast<int16_t*>(&rax45) < *reinterpret_cast<int16_t*>(&r11_36);
    cf48 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rax45) < *reinterpret_cast<uint16_t*>(&r11_36));
    *reinterpret_cast<uint16_t*>(&rax45) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax45) - *reinterpret_cast<uint16_t*>(&r11_36));
    if (less47) {
        rax45 = r14_23;
    }
    __asm__("btr r10w, r9w");
    r11_49 = r11_36 - (r9_44 + reinterpret_cast<uint1_t>(r11_36 < r9_44 + cf48));
    if (!__intrinsic()) {
    }
    *reinterpret_cast<uint16_t*>(&r15_43) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_43) + 0x6376) + 1);
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&r15_43) < reinterpret_cast<int16_t>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r15_43) == 0)) {
        r13d41 = reinterpret_cast<uint32_t>(0xd4ec >> *reinterpret_cast<signed char*>(&cx37));
    }
    __asm__("shrd rax, r12, 0x1");
    r15_50 = r15_43;
    r12_51 = reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&r9_44) & 0x9dea);
    r10_52 = *reinterpret_cast<signed char*>(&r13d41);
    __asm__("shld r8, rsi, 0x1");
    rax53 = rax45 - (r11_49 + reinterpret_cast<uint1_t>(rax45 < r11_49 + 1));
    __asm__("bsf rcx, r12");
    *reinterpret_cast<unsigned char*>(&rbx33) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx33) - *reinterpret_cast<unsigned char*>(&r13d41));
    cx54 = 0;
    r9_55 = r11_49;
    *reinterpret_cast<int32_t*>(&r10_56) = *reinterpret_cast<int32_t*>(&r10_52);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_56) + 4) = 0;
    cf57 = reinterpret_cast<uint1_t>(!!*reinterpret_cast<int16_t*>(&r10_56));
    *reinterpret_cast<int16_t*>(&r10_56) = -*reinterpret_cast<int16_t*>(&r10_56);
    *reinterpret_cast<signed char*>(&r9_55) = 0;
    if (cf57 | reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&r10_56) == 0)) {
        r13d41 = *reinterpret_cast<uint32_t*>(&rbx33);
    }
    if (__intrinsic()) {
        rbx33 = r11_49;
    }
    ch58 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&cx54) + 1) - *reinterpret_cast<unsigned char*>(&rbx33));
    r8_59 = reinterpret_cast<uint64_t>(r8_35 >> 1);
    *reinterpret_cast<unsigned char*>(&r8_59) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8_59) - 0x7a) + 1);
    __asm__("rcr edx, cl");
    __asm__("btc dx, ax");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx60) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax53) | ch58);
    __asm__("shld r11, r9, 0x1");
    __asm__("shrd r9, rdx, 0x1");
    r9_61 = r9_55 << 1;
    __asm__("rcl r8, 0xad");
    *reinterpret_cast<uint32_t*>(&rbx62) = *reinterpret_cast<uint32_t*>(&rbx33) - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx62) + 4) = 0;
    tmp32_63 = r13d41 + *reinterpret_cast<uint32_t*>(&r12_51);
    cf64 = reinterpret_cast<uint1_t>(tmp32_63 < r13d41);
    *reinterpret_cast<uint32_t*>(&r13_65) = tmp32_63;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_65) + 4) = 0;
    __asm__("btc r15w, r9w");
    *reinterpret_cast<unsigned char*>(&rcx60) = reinterpret_cast<uint1_t>(cf64 | reinterpret_cast<uint1_t>(ch58 - 1 == 0));
    zf66 = reinterpret_cast<uint1_t>(r8_59 == r13_65);
    if (zf66) {
        tmp64_67 = r8_59;
        r8_59 = r13_65;
        r13_65 = tmp64_67;
    }
    *reinterpret_cast<unsigned char*>(&r13_65) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(__intrinsic() | zf66));
    __asm__("rol r10b, 1");
    __asm__("rcl r9d, 1");
    __asm__("rcr ch, 1");
    __asm__("ror bh, cl");
    __asm__("shrd r9d, ebx, cl");
    rbp68 = -0;
    rbx69 = rbx62 + 0x10f9bbf1;
    if (reinterpret_cast<int64_t>(rbx69) < reinterpret_cast<int64_t>(0) != __intrinsic()) {
        r8_59 = rbx69;
    }
    ah70 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax53) + 1) | 0xd2);
    __asm__("rcr r11w, 1");
    cf71 = reinterpret_cast<uint1_t>(ah70 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx69) + 1))));
    *reinterpret_cast<unsigned char*>(&r14_23) = cf71;
    if (ah70 <= reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx69) + 1) + cf71)) {
        *reinterpret_cast<uint16_t*>(&rsi27) = *reinterpret_cast<uint16_t*>(&r14_23);
    }
    if (cf71) {
        rsi27 = r14_23;
    }
    __asm__("rol r11d, 1");
    __asm__("shrd rbx, r11, 0x7d");
    __asm__("bsr r11, rcx");
    *reinterpret_cast<uint32_t*>(&r12_72) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&r13_65)));
    __asm__("btr cx, r8w");
    __asm__("bts r10w, r14w");
    if (0) {
        *reinterpret_cast<uint32_t*>(&r8_59) = *reinterpret_cast<uint32_t*>(&r14_23);
    }
    *reinterpret_cast<uint16_t*>(&r15_50) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_50) + *reinterpret_cast<int16_t*>(&r12_51)) + cf64) + 1);
    __asm__("ror rdi, 1");
    if (!__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rcx60) = *reinterpret_cast<int32_t*>(&r10_56);
    }
    *reinterpret_cast<unsigned char*>(&rsi27) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi27) + *reinterpret_cast<unsigned char*>(&r12_72)) + 1);
    if (*reinterpret_cast<uint32_t*>(&r13_65) == *reinterpret_cast<uint32_t*>(&r12_72)) {
        *reinterpret_cast<uint32_t*>(&r13_65) = *reinterpret_cast<uint32_t*>(&r12_72);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_65) + 4) = 0;
    }
    __asm__("shrd r9, rax, 0x1");
    *reinterpret_cast<uint32_t*>(&r11_73) = *reinterpret_cast<uint32_t*>(&r11_49) >> -37 ^ 0xa22de8ad;
    r9d74 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r9_61) + 0x49fb5c51);
    __asm__("shrd esi, r13d, 0x8b");
    *reinterpret_cast<int16_t*>(&rbp68) = 0;
    r10_75 = reinterpret_cast<uint64_t>(r10_56 - 0x77ef848a) & 0x71b67a1b;
    __asm__("ror sil, cl");
    __asm__("rcl r11b, 1");
    rbx76 = rsi27 * 0xffffffff97e7e086;
    if (!__intrinsic()) {
    }
    __asm__("rol r12, cl");
    *reinterpret_cast<uint32_t*>(&r9_77) = r9d74 - (*reinterpret_cast<uint32_t*>(&r10_75) + reinterpret_cast<uint1_t>(r9d74 < *reinterpret_cast<uint32_t*>(&r10_75)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_77) + 4) = 0;
    rdi78 = -rdi9 + 1;
    __asm__("rcr r15w, 1");
    *reinterpret_cast<unsigned char*>(&r15_50) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_50) + *reinterpret_cast<unsigned char*>(&r15_50)) + 1);
    *reinterpret_cast<unsigned char*>(&r8_59) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("rol dh, 1");
    __asm__("shrd r15d, r12d, cl");
    __asm__("shld r14d, edi, 0x1");
    *reinterpret_cast<unsigned char*>(&rcx60) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx60) & 15);
    __asm__("shld bx, r10w, cl");
    tmp64_79 = (rdi78 & 0xffffffff) << 32 | (rdi78 & 0xffffffff00000000) >> 32;
    tmp64_80 = (tmp64_79 & 0xffff0000ffff) << 16 | (tmp64_79 & 0xffff0000ffff0000) >> 16;
    __asm__("rcr ebx, cl");
    cx81 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rcx60) | 0x36f2);
    __asm__("rcr ah, 1");
    *reinterpret_cast<signed char*>(&r9_77) = 51;
    __asm__("rol dil, 0xff");
    r10_82 = (r10_75 & 0x7d478de2) << 1;
    *reinterpret_cast<int16_t*>(&rdx46) = __intrinsic();
    __asm__("rcl r9d, 1");
    __asm__("shld r11, r12, 0x68");
    __asm__("shrd r12w, ax, 0xd");
    __asm__("shrd ebx, r13d, 0x1");
    if (0) {
        rdx46 = r9_77;
    }
    r13_83 = r13_65 - (r9_77 + reinterpret_cast<uint1_t>(r13_65 < r9_77));
    __asm__("bts rbx, rcx");
    __asm__("rcl r12, cl");
    __asm__("rol ax, 0x28");
    if (1) {
        *reinterpret_cast<int32_t*>(&r15_50) = *reinterpret_cast<int32_t*>(&rdx46);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_50) + 4) = 0;
    }
    *reinterpret_cast<int32_t*>(&rax84) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&cx81) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax84) + 4) = 0;
    __asm__("shrd r9, r11, 0x1");
    *reinterpret_cast<uint16_t*>(&r8_59) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_59) | 0x13c8);
    __asm__("rol bp, 1");
    __asm__("rol r12d, 0x49");
    __asm__("btc r14d, 0xd7");
    __asm__("bsf r11w, r9w");
    rdi85 = ((tmp64_80 & 0xff00ff00ff00ff) << 8 | (tmp64_80 & 0xff00ff00ff00ff00) >> 8) >> 1;
    tmp8_86 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_50) + *reinterpret_cast<signed char*>(&rdx46));
    cf87 = reinterpret_cast<uint1_t>(tmp8_86 < *reinterpret_cast<unsigned char*>(&r15_50));
    *reinterpret_cast<unsigned char*>(&r15_50) = tmp8_86;
    r15_88 = r15_50 - (r14_23 + reinterpret_cast<uint1_t>(r15_50 < r14_23 + cf87));
    *reinterpret_cast<uint32_t*>(&rbp89) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp68) + 0x651806d1) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp89) + 4) = 0;
    __asm__("rcl r13, cl");
    *reinterpret_cast<uint32_t*>(&r8_90) = *reinterpret_cast<uint32_t*>(&r8_59) - 1;
    rax91 = rax84 ^ 0xa560fc4;
    *reinterpret_cast<int16_t*>(&rax91) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&rax91) * *reinterpret_cast<signed char*>(&r13_83));
    __asm__("rol r9, 1");
    *reinterpret_cast<uint16_t*>(&r10_82) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_82) | 0x4139);
    __asm__("ror dx, 1");
    __asm__("ror r14w, cl");
    *reinterpret_cast<unsigned char*>(&r15_88) = 0;
    rax92 = *reinterpret_cast<int32_t*>(&rax91) * r15_88;
    rdx93 = __intrinsic();
    __asm__("rol rax, 1");
    *reinterpret_cast<uint32_t*>(&r10_94) = *reinterpret_cast<uint32_t*>(&r10_82) | 0x12368d7b;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_94) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rdi85) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi85) + *reinterpret_cast<unsigned char*>(&rbp89)) + 1);
    __asm__("rcr r10d, 1");
    tmp8_95 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp89) + *reinterpret_cast<unsigned char*>(&rdi85));
    cf96 = reinterpret_cast<uint1_t>(tmp8_95 < *reinterpret_cast<unsigned char*>(&rbp89));
    *reinterpret_cast<unsigned char*>(&rbp89) = tmp8_95;
    *reinterpret_cast<unsigned char*>(&rdx93) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx93) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r10_94) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdx93) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&r10_94) + cf96))));
    *reinterpret_cast<int16_t*>(&r15_88) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r15_88) + 0x445);
    __asm__("rcr cx, cl");
    __asm__("rcr r8w, cl");
    __asm__("bts cx, r13W");
    *reinterpret_cast<unsigned char*>(&r15_88) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_88) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_88) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r15_88) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r15_88))))));
    __asm__("btc eax, r11d");
    *reinterpret_cast<uint16_t*>(&r13_83) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_83) >> 1);
    *reinterpret_cast<uint32_t*>(&rcx97) = *reinterpret_cast<uint32_t*>(&rdi85) + 32;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx97) + 4) = 0;
    __asm__("bts r10, 0x80");
    __asm__("rol r11, cl");
    if (*reinterpret_cast<signed char*>(&r11_73) == *reinterpret_cast<signed char*>(&r10_94)) {
        *reinterpret_cast<uint32_t*>(&r11_73) = *reinterpret_cast<uint32_t*>(&rdi85);
    }
    *reinterpret_cast<unsigned char*>(&rax92) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax92) - reinterpret_cast<unsigned char>(1 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rax92) < 1)));
    __asm__("ror dil, 0x7b");
    if (0) {
        r8_90 = r13_83;
    }
    __asm__("xadd bh, ah");
    __asm__("rcl cx, 1");
    __asm__("shrd eax, ebx, 0x1");
    __asm__("rcl sil, 1");
    *reinterpret_cast<int16_t*>(&rbx76) = static_cast<int16_t>(rcx97 + r15_88 * 2 + 0x36eb1b9b);
    __asm__("rol r10d, 0x35");
    *reinterpret_cast<uint32_t*>(&rdx98) = *reinterpret_cast<uint32_t*>(&rdx93) - (0x1e418814 - reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdx93) < 0xe1be77ec)) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx98) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax92) + 1) = 0;
    *reinterpret_cast<int16_t*>(&r15_88) = *reinterpret_cast<signed char*>(&rcx97);
    rbp99 = rbp89 + r15_88;
    __asm__("rcr r15d, 1");
    __asm__("cwd ");
    *reinterpret_cast<int16_t*>(&rbp99) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbp99) + 0x634f);
    __asm__("rcl r10w, 0x83");
    *reinterpret_cast<signed char*>(&r11_73) = 0;
    r8d100 = *reinterpret_cast<uint32_t*>(&r8_90) << *reinterpret_cast<unsigned char*>(&rcx97);
    __asm__("rcr si, cl");
    if (r10_94 == rbp99) {
        tmp64_101 = r10_94;
        r10_94 = rbp99;
        rbp99 = tmp64_101;
    }
    __asm__("rcr ah, 1");
    __asm__("btr r9, r15");
    r12_102 = r15_88 * 0xffffffffea8df14e;
    rcx103 = rcx97 >> 14;
    __asm__("rol r14, cl");
    *reinterpret_cast<uint16_t*>(&rdi85) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi85) - 0xfb0e);
    rdx104 = rdx98 - 1;
    __asm__("rcl si, cl");
    *reinterpret_cast<uint32_t*>(&r13_105) = r8d100 * 0xa60f885d;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_105) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r12_102) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_102) >> *reinterpret_cast<unsigned char*>(&rcx103));
    cx106 = static_cast<uint16_t>(*reinterpret_cast<uint32_t*>(&r11_73) + *reinterpret_cast<uint32_t*>(&rdi85) * 8);
    *reinterpret_cast<unsigned char*>(&cx106) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&cx106) | 0xc0);
    ax107 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&rax92) & 0x4f20) >> 1) << 1) & 0x3fff);
    *reinterpret_cast<uint16_t*>(&rdx104) = reinterpret_cast<uint16_t>(ax107 % static_cast<int16_t>(*reinterpret_cast<signed char*>(&cx106)));
    *reinterpret_cast<uint16_t*>(&rax92) = reinterpret_cast<uint16_t>(ax107 / static_cast<int16_t>(*reinterpret_cast<signed char*>(&cx106)));
    r14_108 = 0x5561a5ad9addba7d;
    __asm__("shld r12, r15, 0x21");
    __asm__("rol r10d, 0x7a");
    __asm__("shld si, cx, 0x4");
    *reinterpret_cast<uint32_t*>(&rax109) = *reinterpret_cast<int32_t*>(&rax92) * r8d100;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax109) + 4) = 0;
    edx110 = __intrinsic();
    __asm__("rol r11d, cl");
    __asm__("xadd r9b, r11b");
    *reinterpret_cast<signed char*>(&r14_108) = reinterpret_cast<signed char>(0x7d + *reinterpret_cast<signed char*>(&rbp99));
    __asm__("rcl bl, 0x59");
    if (*reinterpret_cast<uint16_t*>(&rdi85) == *reinterpret_cast<uint16_t*>(&r13_105)) {
        *reinterpret_cast<uint16_t*>(&rdi85) = *reinterpret_cast<uint16_t*>(&r13_105);
    }
    __asm__("rcr r15d, 1");
    __asm__("rol r9d, 1");
    __asm__("btc edi, 0xbd");
    *reinterpret_cast<uint16_t*>(&rax109) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax109) - 0x3caf)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx110) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx110) + 1) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax109) + 1));
    __asm__("bts r15d, r12d");
    __asm__("bsr rdi, rcx");
    cf111 = reinterpret_cast<uint1_t>(!!*reinterpret_cast<uint16_t*>(&rdi85));
    *reinterpret_cast<uint16_t*>(&rdi85) = -*reinterpret_cast<uint16_t*>(&rdi85);
    r10_112 = (reinterpret_cast<int64_t>(r10_94) >> 0x65) + 0x6d0a8dd6 + static_cast<uint64_t>(cf111);
    *reinterpret_cast<uint16_t*>(&r10_112) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_112) ^ *reinterpret_cast<uint16_t*>(&rdi85));
    if (1) {
        edx110 = *reinterpret_cast<uint32_t*>(&rbp99);
    }
    __asm__("btr r12w, r15w");
    r15_113 = r14_108;
    r14_114 = r15_88;
    *reinterpret_cast<int16_t*>(&rbp99) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbp99) - 1);
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax109) + 1) == *reinterpret_cast<unsigned char*>(&cx106)) {
        tmp8_115 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax109) + 1);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax109) + 1) = *reinterpret_cast<unsigned char*>(&cx106);
        *reinterpret_cast<unsigned char*>(&cx106) = tmp8_115;
    }
    tmp8_116 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8d100) + 0xb0) + 1);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx76) + 1) = *reinterpret_cast<unsigned char*>(&rax109);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx110) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx110) + 1) + *reinterpret_cast<signed char*>(&edx110)) + reinterpret_cast<uint1_t>(tmp8_116 < *reinterpret_cast<unsigned char*>(&r8d100)));
    if (__intrinsic()) {
    }
    *reinterpret_cast<uint32_t*>(&rdx117) = edx110 & 0x25db68e4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx117) + 4) = 0;
    __asm__("bsr ax, r10w");
    rax118 = reinterpret_cast<uint64_t>(rax109 * rdx117);
    *reinterpret_cast<uint32_t*>(&rdi119) = *reinterpret_cast<uint32_t*>(&rdi85) - (*reinterpret_cast<int32_t*>(&r15_113) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdi85) < *reinterpret_cast<int32_t*>(&r15_113) + 1));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi119) + 4) = 0;
    __asm__("ror rbx, 0x2d");
    r10_120 = r10_112 & 0xffffffffe143825a;
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(r10_120 == 0)))) {
    }
    *reinterpret_cast<uint32_t*>(&r12_121) = r8d100 + *reinterpret_cast<int32_t*>(&rdx104) * 2 + *reinterpret_cast<int32_t*>(&r12_102) * 8 + 0x81;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_121) + 4) = 0;
    di122 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi119) >> -30);
    *reinterpret_cast<uint16_t*>(&r13_105) = reinterpret_cast<uint16_t>(di122 * 0xa4cf);
    *reinterpret_cast<uint16_t*>(&rdi119) = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(di122) >> 1);
    *reinterpret_cast<int32_t*>(&r9_123) = *reinterpret_cast<int16_t*>(&rbx76);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_123) + 4) = 0;
    r8_124 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<signed char>(tmp8_116)));
    __asm__("ror r12w, 1");
    *reinterpret_cast<uint32_t*>(&r10_125) = *reinterpret_cast<uint32_t*>(&r10_120) - (0xbab9b7b + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r10_120) < 0xbab9b7b + reinterpret_cast<uint1_t>(!__intrinsic())));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_125) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r12_121) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_121) + *reinterpret_cast<uint16_t*>(&rdi119))));
    *reinterpret_cast<unsigned char*>(&rbx76) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx76) - *reinterpret_cast<unsigned char*>(&rax118));
    rbp126 = rbp99 << *reinterpret_cast<unsigned char*>(&cx106);
    __asm__("shrd bp, r10w, 0x6");
    *reinterpret_cast<unsigned char*>(&rdi119) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdi119) >> 1);
    __asm__("rol r10d, 0xa4");
    *reinterpret_cast<unsigned char*>(&rax118) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax118) & *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx76) + 1));
    __asm__("bts rdi, rcx");
    cf127 = reinterpret_cast<uint1_t>(rbp126 < 0xffffffff9f32ce85);
    rbp128 = rbp126 - (0x60cd317b - static_cast<uint64_t>(cf127));
    if (cf127) {
    }
    if (!(r10_125 - r13_105)) {
        *reinterpret_cast<uint16_t*>(&rax118) = *reinterpret_cast<uint16_t*>(&rdi119);
    }
    __asm__("ror r14, 1");
    r15_129 = r15_113 + 0x285cba59;
    *reinterpret_cast<int16_t*>(&r14_114) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r14_114) >> *reinterpret_cast<unsigned char*>(&cx106));
    __asm__("bsf r13, r12");
    __asm__("rol rbp, 0x88");
    __asm__("shld r11w, dx, 0x1");
    __asm__("rol r10, 1");
    *reinterpret_cast<signed char*>(&r12_121) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r12_121) >> 0x8c);
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r13_105) = *reinterpret_cast<uint32_t*>(&r14_114);
    }
    ax130 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax118) * *reinterpret_cast<uint16_t*>(&r15_129));
    ax131 = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax130) * *reinterpret_cast<signed char*>(&r8_124));
    __asm__("btc r13, 0xf3");
    __asm__("xadd ebx, eax");
    __asm__("bsr ecx, ecx");
    *reinterpret_cast<uint16_t*>(&rax118) = reinterpret_cast<uint16_t>(*reinterpret_cast<signed char*>(&ax131) * reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&rbp128))));
    if (*reinterpret_cast<uint32_t*>(&r13_105) == *reinterpret_cast<uint32_t*>(&r14_114)) {
        tmp32_132 = *reinterpret_cast<uint32_t*>(&r13_105);
        *reinterpret_cast<uint32_t*>(&r13_105) = *reinterpret_cast<uint32_t*>(&r14_114);
        *reinterpret_cast<uint32_t*>(&r14_114) = tmp32_132;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_114) + 4) = 0;
    }
    rax133 = rax118 ^ r12_121;
    esi134 = -1;
    __asm__("rol r14b, cl");
    r14_135 = r14_114 >> 1;
    __asm__("ror r15d, cl");
    *reinterpret_cast<int32_t*>(&rax136) = *reinterpret_cast<int32_t*>(&rax133) * *reinterpret_cast<int32_t*>(&r8_124);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax136) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&rcx103) = reinterpret_cast<uint16_t>(cx106 >> 1);
    rax137 = rax136 * rcx103;
    rbx138 = rbx76 + 1;
    r13d139 = *reinterpret_cast<uint32_t*>(&r13_105) << *reinterpret_cast<unsigned char*>(&rcx103);
    *reinterpret_cast<uint32_t*>(&rbp140) = *reinterpret_cast<uint32_t*>(&rbp128) >> -71;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp140) + 4) = 0;
    r8w141 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_124) << 1);
    __asm__("bsf rsi, rbx");
    __asm__("bsr bx, r10w");
    r11w142 = *reinterpret_cast<int16_t*>(&rbx138);
    *reinterpret_cast<uint16_t*>(&rax137) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax137) / 0xdbef);
    *reinterpret_cast<unsigned char*>(&rcx103) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx103) & 15);
    __asm__("shrd r8w, ax, cl");
    *reinterpret_cast<unsigned char*>(&rbx138) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbx138) ^ 0xac);
    *reinterpret_cast<uint32_t*>(&rdx143) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx143) + 4) = 0;
    r12_144 = r12_121 + rdx143;
    *reinterpret_cast<uint16_t*>(&r14_135) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_135) ^ *reinterpret_cast<uint16_t*>(&r9_123));
    __asm__("rcl r8d, 1");
    __asm__("rcr r9d, 0x97");
    __asm__("shrd rdi, r15, 0x99");
    *reinterpret_cast<uint32_t*>(&r13_145) = r13d139 + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_145) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&esi134) = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r13_145) < reinterpret_cast<int32_t>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r13_145) == 0));
    eax146 = *reinterpret_cast<int32_t*>(&rax137) * *reinterpret_cast<uint32_t*>(&rbp140) * *reinterpret_cast<uint32_t*>(&rdx143);
    r11w147 = reinterpret_cast<int16_t>(r11w142 + 1);
    *reinterpret_cast<uint32_t*>(&r14_148) = *reinterpret_cast<uint32_t*>(&r14_135) >> 73;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_148) + 4) = 0;
    esi149 = *reinterpret_cast<uint32_t*>(&rcx103);
    ecx150 = esi134;
    *reinterpret_cast<int32_t*>(&rbx151) = *reinterpret_cast<int32_t*>(&rbx138) + 0x381833fc;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx151) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r14_148) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r14_148) - reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi149) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r14_148) < reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&esi149))))));
    tmp8_152 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax146) + 1) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax146) + 1)) + 1);
    cf153 = reinterpret_cast<uint1_t>(tmp8_152 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax146) + 1));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax146) + 1) = tmp8_152;
    r8b154 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8w141) + 61) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx150) + 1) < reinterpret_cast<unsigned char>(0x65 + cf153)));
    tmp64_155 = (r9_123 & 0xffffffff) << 32;
    tmp64_156 = (tmp64_155 & 0xffff0000ffff) << 16 | (tmp64_155 & 0xffff0000ffff0000) >> 16;
    r9_157 = (tmp64_156 & 0xff00ff00ff00ff) << 8 | (tmp64_156 & 0xff00ff00ff00ff00) >> 8;
    __asm__("rcl rbp, 1");
    tmp32_158 = *reinterpret_cast<uint32_t*>(&r15_129) + *reinterpret_cast<uint32_t*>(&r13_145) + 1;
    *reinterpret_cast<uint32_t*>(&r15_159) = tmp32_158;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_159) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r11w147) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("rol r13d, 1");
    r14_160 = r14_148 - 0x7a7af73b + static_cast<uint64_t>(reinterpret_cast<uint1_t>(tmp32_158 < *reinterpret_cast<uint32_t*>(&r15_129)));
    __asm__("shld ecx, r10d, 0x1");
    bx161 = reinterpret_cast<int16_t>(r11w147 * 0xde9f);
    __asm__("bts ax, 0x25");
    __asm__("rcr r15w, 1");
    *reinterpret_cast<uint16_t*>(&esi149) = 0xe128;
    __asm__("shrd edi, eax, 0x1");
    *reinterpret_cast<unsigned char*>(&r8w141) = reinterpret_cast<unsigned char>(r8b154 - reinterpret_cast<unsigned char>(r8b154 + reinterpret_cast<uint1_t>(r8b154 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(r8b154)))));
    __asm__("rcl r10b, cl");
    __asm__("bts r12, 0x3");
    __asm__("rcl di, 1");
    *reinterpret_cast<unsigned char*>(&rbp140) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rbp140) ^ *reinterpret_cast<unsigned char*>(&eax146));
    __asm__("rcr r8, cl");
    __asm__("shrd si, di, cl");
    eax162 = eax146 * *reinterpret_cast<uint32_t*>(&rdi119);
    if (__intrinsic()) {
        r9_157 = rdi119;
    }
    *reinterpret_cast<int16_t*>(&r15_159) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r15_159) >> 1);
    *reinterpret_cast<uint32_t*>(&rsi163) = esi149 | 0xc0000000;
    *reinterpret_cast<uint32_t*>(&rdx164) = eax162 % *reinterpret_cast<uint32_t*>(&rsi163);
    *reinterpret_cast<uint32_t*>(&rax165) = eax162 / *reinterpret_cast<uint32_t*>(&rsi163);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax165) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rbp140) == *reinterpret_cast<uint32_t*>(&rsi163)) {
        *reinterpret_cast<uint32_t*>(&rbp140) = *reinterpret_cast<uint32_t*>(&rsi163);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp140) + 4) = 0;
    }
    if (!__intrinsic()) {
    }
    __asm__("rol r12d, 0x77");
    __asm__("ror bp, 1");
    *reinterpret_cast<unsigned char*>(&r13_145) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_145) + 40)));
    __asm__("rol r9b, 1");
    r10_166 = 0x415b0012 - *reinterpret_cast<uint32_t*>(&rdi119);
    rbp167 = rax165;
    rax168 = rbp140;
    __asm__("rol ah, cl");
    tmp8_169 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_159) + *reinterpret_cast<unsigned char*>(&r10_166))));
    cf170 = reinterpret_cast<uint1_t>(tmp8_169 < *reinterpret_cast<unsigned char*>(&r15_159));
    *reinterpret_cast<unsigned char*>(&r15_159) = tmp8_169;
    *reinterpret_cast<uint16_t*>(&r8_124) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(r8w141 + 0x7e12) - 0x5420) + cf170);
    *reinterpret_cast<unsigned char*>(&r12_144) = reinterpret_cast<uint1_t>(!__intrinsic());
    __asm__("rol dil, cl");
    r14d171 = *reinterpret_cast<uint32_t*>(&r14_160) >> 0x7d;
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx164) + 1) == *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&bx161) + 1)) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx164) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&bx161) + 1);
    }
    tmp32_172 = r14d171 + 0x10f4e08;
    r14d173 = tmp32_172;
    if (tmp32_172 >= r14d171) {
        rdx164 = r8_124;
    }
    __asm__("shld r10w, si, cl");
    __asm__("btr r14w, 0xef");
    *reinterpret_cast<unsigned char*>(&rax168) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(40 + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx164) + 1))));
    rax174 = reinterpret_cast<uint64_t>(rax168 * r15_159);
    rdx175 = __intrinsic();
    *reinterpret_cast<int32_t*>(&rcx176) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx175) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx176) + 4) = 0;
    edi177 = *reinterpret_cast<uint32_t*>(&rdi119) + 1 >> 1;
    *reinterpret_cast<uint16_t*>(&edi177) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi177) | 0xc000);
    ax178 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax174) / *reinterpret_cast<uint16_t*>(&edi177));
    r9_179 = r9_157 - rcx176;
    __asm__("rol r12d, 1");
    __asm__("shld r15, r15, cl");
    __asm__("btc cx, r11w");
    __asm__("ror r12, 1");
    rsi180 = r8_124;
    *reinterpret_cast<uint16_t*>(&rax174) = reinterpret_cast<uint16_t>(ax178 - reinterpret_cast<uint16_t>(0x1ae3 - reinterpret_cast<uint1_t>(ax178 < reinterpret_cast<uint16_t>(0x1ae3 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rbp167) < 0xa2)))));
    __asm__("xadd r15w, r9w");
    __asm__("rcr r14d, cl");
    rdx181 = *reinterpret_cast<int32_t*>(&r8_124);
    r11_182 = rsi180;
    __asm__("ror bl, 0xea");
    *reinterpret_cast<int16_t*>(&rcx176) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rsi180) * 0x2581);
    r11w183 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_182) & 0x78c5);
    *reinterpret_cast<unsigned char*>(&r10_166) = reinterpret_cast<uint1_t>(!!r11w183);
    __asm__("btc r9, 0x26");
    r8_184 = r8_124 + 0xffffffffc924b3d8 + 1;
    *reinterpret_cast<uint16_t*>(&r13_145) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r13_145) - reinterpret_cast<uint16_t>(0x57c6 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r13_145) < 0x57c6)));
    tmp64_185 = rcx176 + r10_166;
    rcx186 = tmp64_185;
    *reinterpret_cast<unsigned char*>(&rax174) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax174) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi180) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rax174) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi180) + reinterpret_cast<uint1_t>(tmp64_185 < rcx176)))));
    rax187 = rax174 | 0x59b539d7;
    cf188 = reinterpret_cast<uint1_t>(r13_145 < r9_179);
    r13_189 = r13_145 - (r9_179 + cf188);
    *reinterpret_cast<unsigned char*>(&r13_190) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13_189) - reinterpret_cast<unsigned char>(0x6f + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r13_189) < reinterpret_cast<unsigned char>(0x6f + cf188))));
    r8w191 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r8_184) | *reinterpret_cast<uint16_t*>(&r14d173));
    __asm__("rcl r11b, 1");
    __asm__("rcr bpl, cl");
    __asm__("bsf eax, r14d");
    *reinterpret_cast<int16_t*>(&rbp167) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbp167) << *reinterpret_cast<unsigned char*>(&rcx186));
    *reinterpret_cast<int16_t*>(&rbx151) = reinterpret_cast<int16_t>(reinterpret_cast<int16_t>(static_cast<uint16_t>(*reinterpret_cast<unsigned char*>(&rsi180))) >> 1);
    *reinterpret_cast<int16_t*>(&rdx181) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rdx181) - 0x633d);
    rdi192 = reinterpret_cast<int32_t>(edi177);
    __asm__("xadd r8d, ebp");
    *reinterpret_cast<uint16_t*>(&r10_166) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_166) - r8w191);
    *reinterpret_cast<uint32_t*>(&r9_193) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r9_179) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_193) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&r9_193)) {
        r13_190 = rcx186;
    }
    __asm__("bsf r12d, edi");
    *reinterpret_cast<int16_t*>(&r9_193) = reinterpret_cast<int16_t>(~*reinterpret_cast<int16_t*>(&r9_193));
    edi194 = *reinterpret_cast<uint32_t*>(&rdi192) - (0x57ad4692 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdi192) < 0x57ad4693));
    __asm__("shrd ecx, ebx, cl");
    r12_195 = r12_144 - 0x3634cf86;
    *reinterpret_cast<signed char*>(&r11w183) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&r11w183) + 81);
    *reinterpret_cast<uint32_t*>(&rsi196) = *reinterpret_cast<uint16_t*>(&r12_195);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi196) + 4) = 0;
    __asm__("rcr ebp, 0x13");
    __asm__("btc bx, 0x23");
    rbp197 = rbp167 - 0x23006b8c + static_cast<uint64_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r13_190) < 0x99));
    __asm__("ror bp, cl");
    if (r9_193 == rcx186) {
        tmp64_198 = r9_193;
        r9_193 = rcx186;
        rcx186 = tmp64_198;
    }
    __asm__("ror r11d, cl");
    __asm__("shrd ecx, ebx, cl");
    __asm__("rol r9w, cl");
    __asm__("btc r14, 0xb4");
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int64_t>(&rax187) + 1)) {
        *reinterpret_cast<int16_t*>(&edi194) = *reinterpret_cast<int16_t*>(&rsi196);
    }
    if (rbx151 == rdx181) {
        rbx151 = rdx181;
    }
    __asm__("xadd r15w, ax");
    *reinterpret_cast<int32_t*>(&rbx199) = *reinterpret_cast<int32_t*>(&rbx151) - 0x702c724c;
    __asm__("rcl ecx, cl");
    __asm__("btr dx, r10w");
    cf200 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r12_195) < 0x7d60);
    *reinterpret_cast<uint16_t*>(&r12_195) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_195) - 0x7d60);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx186) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx186) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax187) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx186) + 1) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax187) + 1) + cf200))));
    __asm__("bsr ecx, ebp");
    __asm__("rcr r15d, 1");
    __asm__("rcl r8w, cl");
    r15_201 = *reinterpret_cast<int32_t*>(&rax187) + *reinterpret_cast<uint32_t*>(&rcx186) * 4 + 0x9a;
    rsi202 = rsi196 + 1;
    if (*reinterpret_cast<uint16_t*>(&rbp197) == *reinterpret_cast<uint16_t*>(&r10_166)) {
        tmp16_203 = *reinterpret_cast<uint16_t*>(&rbp197);
        *reinterpret_cast<uint16_t*>(&rbp197) = *reinterpret_cast<uint16_t*>(&r10_166);
        *reinterpret_cast<uint16_t*>(&r10_166) = tmp16_203;
    }
    rax204 = rax187 * r9_193;
    rdx205 = __intrinsic();
    *reinterpret_cast<int32_t*>(&rax206) = *reinterpret_cast<int32_t*>(&rax204) * *reinterpret_cast<int32_t*>(&rdx205);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax206) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx207) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx207) + 4) = 0;
    rdx208 = rdx207 + r15_201 >> *reinterpret_cast<unsigned char*>(&rcx186);
    *reinterpret_cast<uint32_t*>(&rdi209) = edi194 + *reinterpret_cast<int32_t*>(&r12_195) + static_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rcx186) >> 89);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi209) + 4) = 0;
    cf210 = reinterpret_cast<uint1_t>(rdi209 < rax206);
    rdi211 = rdi209 - (rax206 + cf210);
    if (__intrinsic()) {
        rcx186 = r9_193;
    }
    *reinterpret_cast<unsigned char*>(&r15_201) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_201) >> 1);
    bx212 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbx199) - reinterpret_cast<uint16_t>(0x5fe2 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rbx199) < 0x5fe3)));
    ah213 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax206) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx186) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax206) + 1) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx186) + 1) + 1))));
    *reinterpret_cast<unsigned char*>(&rcx186) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx186) << *reinterpret_cast<unsigned char*>(&rcx186));
    __asm__("rol si, 0x74");
    __asm__("shrd r11, rbp, cl");
    *reinterpret_cast<uint16_t*>(&r11_182) = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(r11w183 - reinterpret_cast<uint16_t>(0x3872 + reinterpret_cast<uint1_t>(r11w183 < reinterpret_cast<uint16_t>(0x3872 + cf210)))) - *reinterpret_cast<uint16_t*>(&r15_201));
    if (*reinterpret_cast<unsigned char*>(&rcx186) == *reinterpret_cast<unsigned char*>(&r11_182)) {
        tmp8_214 = *reinterpret_cast<unsigned char*>(&rcx186);
        *reinterpret_cast<unsigned char*>(&rcx186) = *reinterpret_cast<unsigned char*>(&r11_182);
        *reinterpret_cast<unsigned char*>(&r11_182) = tmp8_214;
    }
    __asm__("bts rcx, rbp");
    *reinterpret_cast<unsigned char*>(&rdx208) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx208) - 0x6e) + __intrinsic());
    __asm__("ror ch, 1");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ax215) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(ah213 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx208) + 1))));
    *reinterpret_cast<uint32_t*>(&r14_216) = r14d173 - 0x40866c70 - *reinterpret_cast<int32_t*>(&rdi211);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_216) + 4) = 0;
    __asm__("rol rbx, cl");
    *reinterpret_cast<unsigned char*>(&ax215) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax206) ^ *reinterpret_cast<unsigned char*>(&rdx208));
    *reinterpret_cast<int32_t*>(&r10_217) = *reinterpret_cast<int32_t*>(&r10_166) >> -62;
    __asm__("btr r8, 0x13");
    __asm__("shld r9, r9, 0xc9");
    bl218 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&bx212) + reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi202) | 0x93)) & *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx208) + 1));
    __asm__("rcl r9d, cl");
    __asm__("bts r15, 0x40");
    __asm__("rcl r9w, cl");
    r12_219 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<signed char*>(&r8w191)));
    *reinterpret_cast<int16_t*>(&r14_216) = static_cast<int16_t>(*reinterpret_cast<uint32_t*>(&r9_193) + *reinterpret_cast<int32_t*>(&r11_182) * 2 + 0xec);
    *reinterpret_cast<uint16_t*>(&r8_184) = reinterpret_cast<uint16_t>(static_cast<int16_t>(*reinterpret_cast<signed char*>(&r8w191)));
    rdi220 = *reinterpret_cast<unsigned char*>(&ax215);
    r15w221 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r15_201) << *reinterpret_cast<unsigned char*>(&rcx186));
    if (*reinterpret_cast<unsigned char*>(&ax215) == *reinterpret_cast<unsigned char*>(&r8_184)) {
        tmp8_222 = *reinterpret_cast<unsigned char*>(&ax215);
        *reinterpret_cast<unsigned char*>(&ax215) = *reinterpret_cast<unsigned char*>(&r8_184);
        *reinterpret_cast<unsigned char*>(&r8_184) = tmp8_222;
    }
    __asm__("xadd ecx, ebp");
    *reinterpret_cast<int32_t*>(&rdi223) = *reinterpret_cast<int32_t*>(&rdi220) - 0x1fddcae8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi223) + 4) = 0;
    __asm__("bts rbx, 0xe5");
    *reinterpret_cast<unsigned char*>(&r11_182) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r11_182) + 23);
    rdi224 = reinterpret_cast<uint64_t>(rdi223 * 0xffffffffc81d9969);
    bh225 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&bx212) + 1) | 0xc0);
    ax226 = reinterpret_cast<uint16_t>(ax215 & 0x3fff);
    dx227 = reinterpret_cast<uint16_t>(ax226 % static_cast<int16_t>(reinterpret_cast<signed char>(bh225)));
    *reinterpret_cast<uint16_t*>(&rax206) = reinterpret_cast<uint16_t>(ax226 / static_cast<int16_t>(reinterpret_cast<signed char>(bh225)));
    __asm__("rol rcx, 1");
    *reinterpret_cast<uint16_t*>(&r12_219) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_219) - reinterpret_cast<uint16_t>(0x1292 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&r12_219) < 0x1292)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx199) + 1) = reinterpret_cast<unsigned char>(bh225 - reinterpret_cast<unsigned char>(bh225 + reinterpret_cast<uint1_t>(bh225 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(bh225)))));
    if (reinterpret_cast<uint1_t>(__intrinsic() != __intrinsic()) | reinterpret_cast<uint1_t>(-r14_216 == 0)) {
        *reinterpret_cast<uint32_t*>(&r9_193) = *reinterpret_cast<uint32_t*>(&r9_193);
    }
    if (reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&dx227) + 1) - *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax206) + 1)) >= reinterpret_cast<signed char>(0)) {
        r12_219 = r11_182;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx186) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx186) + 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx186) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx186) + 1) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx186) + 1) + 1)))) ^ bl218);
    if (*reinterpret_cast<signed char*>(&rdi224) > 62) {
    }
    *reinterpret_cast<uint32_t*>(&rcx228) = *reinterpret_cast<uint32_t*>(&rcx186) + 0x2a00ebb4;
    bl229 = reinterpret_cast<unsigned char>(bl218 + *reinterpret_cast<unsigned char*>(&rax206));
    if (reinterpret_cast<signed char>(bl229) >= reinterpret_cast<signed char>(0)) {
    }
    *reinterpret_cast<unsigned char*>(&rax206) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax206) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx199) + 1)) + 1);
    *reinterpret_cast<uint16_t*>(&rbp197) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp197) * 0xa502);
    __asm__("shld r9w, cx, 0x1");
    rax230 = *reinterpret_cast<int32_t*>(&rax206);
    __asm__("btr di, 0x35");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax230) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax230) + 1) - *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax230) + 1));
    *reinterpret_cast<signed char*>(&rax230) = 83;
    *reinterpret_cast<unsigned char*>(&rbx199) = reinterpret_cast<unsigned char>(bl229 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&dx227) + reinterpret_cast<uint1_t>(bl229 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&dx227))))));
    *reinterpret_cast<int32_t*>(&rax231) = *reinterpret_cast<int32_t*>(&rax230) * *reinterpret_cast<int32_t*>(&rax230);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax231) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx232) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx232) + 4) = 0;
    __asm__("ror ebx, cl");
    r11_233 = *reinterpret_cast<unsigned char*>(&r8_184);
    r14_234 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r8_184) - 0x5dbb388e);
    __asm__("bts rdi, 0x86");
    __asm__("rcr dil, 1");
    *reinterpret_cast<unsigned char*>(&r14_234) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r14_234) - *reinterpret_cast<unsigned char*>(&r12_219));
    if (!__intrinsic()) {
        rdx232 = rdi224;
    }
    rax235 = rax231 ^ r11_233;
    if (*reinterpret_cast<int16_t*>(&r10_217) > reinterpret_cast<int16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r14_234)))) {
        r11_233 = rdx232;
    }
    if (*reinterpret_cast<uint32_t*>(&r9_193) == *reinterpret_cast<uint32_t*>(&rdi224)) {
        tmp32_236 = *reinterpret_cast<uint32_t*>(&r9_193);
        *reinterpret_cast<uint32_t*>(&rdi224) = tmp32_236;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi224) + 4) = 0;
    }
    *reinterpret_cast<uint32_t*>(&rsi237) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx228) + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi237) + 4) = 0;
    __asm__("bts r8w, cx");
    __asm__("ror ebx, cl");
    *reinterpret_cast<uint16_t*>(&r11_233) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r11_233) & r15w221);
    *reinterpret_cast<unsigned char*>(&rcx228) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx228) & 15);
    __asm__("shld di, cx, cl");
    *reinterpret_cast<int16_t*>(&rdi224) = 0;
    __asm__("rol r14w, 1");
    if (0) {
        rcx228 = rax235;
    }
    *reinterpret_cast<uint32_t*>(&r11_238) = *reinterpret_cast<uint32_t*>(&r11_233) | 0xc0000000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_238) + 4) = 0;
    edx239 = *reinterpret_cast<uint32_t*>(&rax235) % *reinterpret_cast<uint32_t*>(&r11_238);
    *reinterpret_cast<uint32_t*>(&rax240) = *reinterpret_cast<uint32_t*>(&rax235) / *reinterpret_cast<uint32_t*>(&r11_238);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax240) + 4) = 0;
    *reinterpret_cast<uint16_t*>(&r12_219) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r12_219) | *reinterpret_cast<uint16_t*>(&rbp197));
    __asm__("rcl r8, 0x72");
    *reinterpret_cast<uint32_t*>(&r10_241) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_241) + 4) = 0;
    __asm__("ror eax, cl");
    __asm__("rol r11, cl");
    __asm__("rol r13, cl");
    __asm__("ror si, 1");
    *reinterpret_cast<unsigned char*>(&rcx228) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rcx228) >> 1);
    if (0 > *reinterpret_cast<uint16_t*>(&rbp197)) {
        *reinterpret_cast<uint32_t*>(&r10_241) = *reinterpret_cast<uint32_t*>(&rbp197);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_241) + 4) = 0;
    }
    *reinterpret_cast<int16_t*>(&edx239) = 0x2708;
    __asm__("btr r8w, 0xe5");
    edx242 = edx239 - (*reinterpret_cast<uint32_t*>(&rcx228) + reinterpret_cast<uint1_t>(edx239 < *reinterpret_cast<uint32_t*>(&rcx228)));
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rdi224) = *reinterpret_cast<uint32_t*>(&r11_238);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi224) + 4) = 0;
    }
    *reinterpret_cast<uint16_t*>(&r15_201) = reinterpret_cast<uint16_t>(r15w221 | 0xc000);
    ax243 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx199) + 1);
    __asm__("bsf r12, r11");
    __asm__("shld r13d, eax, 0xf7");
    *reinterpret_cast<int32_t*>(&r9_244) = *reinterpret_cast<signed char*>(&r10_241);
    rcx245 = *reinterpret_cast<uint16_t*>(&r14_234);
    tmp8_246 = *reinterpret_cast<unsigned char*>(&r9_244);
    *reinterpret_cast<unsigned char*>(&rcx245) = tmp8_246;
    *reinterpret_cast<int16_t*>(&rax240) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&ax243) * *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&ax243) + 1));
    __asm__("rcl r9, 1");
    if (!__intrinsic()) {
        rbx199 = rax240;
    }
    __asm__("rcl r14, 1");
    *reinterpret_cast<uint16_t*>(&rbp197) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rbp197) - reinterpret_cast<uint16_t>(0x8265 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&rbp197) < 0x8265)));
    if (*reinterpret_cast<unsigned char*>(&r8_184) == *reinterpret_cast<unsigned char*>(&rax240)) {
        tmp8_247 = *reinterpret_cast<unsigned char*>(&r8_184);
        *reinterpret_cast<unsigned char*>(&r8_184) = *reinterpret_cast<unsigned char*>(&rax240);
        *reinterpret_cast<unsigned char*>(&rax240) = tmp8_247;
    }
    r8_248 = *reinterpret_cast<uint16_t*>(&r8_184);
    __asm__("rcl dx, 1");
    __asm__("ror r12w, cl");
    eax249 = *reinterpret_cast<uint32_t*>(&rax240) - 1;
    r15d250 = *reinterpret_cast<int32_t*>(&r15_201) << *reinterpret_cast<unsigned char*>(&rcx245);
    __asm__("rcr bl, 1");
    __asm__("ror r14d, 0xb4");
    __asm__("shrd r15w, bx, 0xf");
    *reinterpret_cast<unsigned char*>(&eax249) = *reinterpret_cast<unsigned char*>(&rbx199);
    __asm__("shld r13d, r14d, 0x1");
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx245) + 1) = reinterpret_cast<signed char>(0 << *reinterpret_cast<unsigned char*>(&rcx245));
    *reinterpret_cast<int32_t*>(&r15_251) = r15d250 - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_251) + 4) = 0;
    __asm__("cdq ");
    if (*reinterpret_cast<int32_t*>(&r14_234) >= 0xde2fd297) {
    }
    if (*reinterpret_cast<int32_t*>(&r14_234) == 0xde2fd297) {
        edx242 = *reinterpret_cast<uint32_t*>(&r12_219);
    }
    __asm__("rol si, 1");
    __asm__("bsf r13, rsi");
    __asm__("shrd r9w, bp, 0x1");
    *reinterpret_cast<unsigned char*>(&r15_251) = reinterpret_cast<uint1_t>(reinterpret_cast<int16_t>(*reinterpret_cast<uint16_t*>(&r11_238) & 0xea8) < reinterpret_cast<int16_t>(0));
    *reinterpret_cast<signed char*>(&rdi224) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rdi224) >> -26) >> *reinterpret_cast<unsigned char*>(&rcx245));
    rbx252 = 0x9b51ff5721b2fd04;
    *reinterpret_cast<uint32_t*>(&rax253) = eax249 >> 24 | eax249 >> 8 & 0xff00 | eax249 << 8 & 0xff0000 | eax249 << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax253) + 4) = 0;
    __asm__("shrd r8d, ebx, 0x1");
    ebp254 = *reinterpret_cast<uint32_t*>(&rbp197) & *reinterpret_cast<uint32_t*>(&r8_248);
    *reinterpret_cast<unsigned char*>(&r12_219) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12_219) >> *reinterpret_cast<unsigned char*>(&rcx245));
    __asm__("bts edx, 0x1e");
    __asm__("rol r15, 0xdf");
    __asm__("shrd rdx, r9, 0x2c");
    *reinterpret_cast<uint32_t*>(&rcx255) = *reinterpret_cast<uint32_t*>(&rax253) + *reinterpret_cast<int32_t*>(&rcx245) * 8 + 0x39dd33b6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx255) + 4) = 0;
    __asm__("shrd r9, r9, 0x11");
    tmp8_256 = *reinterpret_cast<signed char*>(&r8_248);
    *reinterpret_cast<signed char*>(&r8_248) = *reinterpret_cast<signed char*>(&rax253);
    *reinterpret_cast<signed char*>(&rax253) = tmp8_256;
    __asm__("ror r11, 0x8a");
    r9_257 = rcx255 * 0x2d695007;
    rdi258 = rdi224 & 0xffffffffd6a00ef3;
    *reinterpret_cast<unsigned char*>(&rcx255) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx255) & 0xa3);
    __asm__("btc r12d, edi");
    __asm__("rcr r8d, cl");
    __asm__("btc r9, rcx");
    __asm__("rcr ecx, 1");
    *reinterpret_cast<uint32_t*>(&r13_259) = *reinterpret_cast<int32_t*>(&r14_234) + ebp254 + 0xd5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_259) + 4) = 0;
    if (1) {
        *reinterpret_cast<int16_t*>(&rcx255) = *reinterpret_cast<int16_t*>(&r15_251);
    }
    if (*reinterpret_cast<unsigned char*>(&rdi258) <= 0xe7) {
        r10_241 = rdi258;
    }
    __asm__("xadd rdx, rdi");
    *reinterpret_cast<uint16_t*>(&rax253) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax253) * *reinterpret_cast<int16_t*>(&r13_259));
    *reinterpret_cast<int16_t*>(&edx242) = __intrinsic();
    __asm__("rcl r9d, 1");
    *reinterpret_cast<int32_t*>(&rbp260) = reinterpret_cast<int32_t>(ebp254) >> *reinterpret_cast<unsigned char*>(&rcx255);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp260) + 4) = 0;
    __asm__("btr r9d, r12d");
    *reinterpret_cast<unsigned char*>(&r15_251) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r15_251) + 1);
    *reinterpret_cast<int16_t*>(&rsi237) = static_cast<int16_t>(*reinterpret_cast<int32_t*>(&r9_257) + *reinterpret_cast<uint32_t*>(&rax253));
    *reinterpret_cast<unsigned char*>(&rcx255) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx255) & 15);
    __asm__("shld r10w, cx, cl");
    *reinterpret_cast<int16_t*>(&r13_259) = 0;
    *reinterpret_cast<uint32_t*>(&rdx261) = edx242 - (*reinterpret_cast<uint32_t*>(&rsi237) + reinterpret_cast<uint1_t>(edx242 < *reinterpret_cast<uint32_t*>(&rsi237)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx261) + 4) = 0;
    __asm__("rcr cl, 1");
    __asm__("rol rbx, 1");
    ax262 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rax253) & 0xb583) & 0x3fff);
    *reinterpret_cast<uint16_t*>(&rdx261) = reinterpret_cast<uint16_t>(ax262 % -60);
    *reinterpret_cast<uint16_t*>(&rax253) = reinterpret_cast<uint16_t>(ax262 / -60);
    *reinterpret_cast<int16_t*>(&rbx252) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rcx255) + 1);
    __asm__("btc edx, r10d");
    __asm__("ror bl, 0x5c");
    __asm__("shld esi, eax, 0x5e");
    return rax253 + rbx252 + rcx255 + rdx261 + rbp260 + rsi237 + rdi258 + (r8_248 - (rdi258 + reinterpret_cast<uint1_t>(r8_248 < rdi258 + 1))) + r9_257 + r10_241 + (r11_238 - (0x3e3a441 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r11_238 < 0x3e3a441 + static_cast<uint64_t>(reinterpret_cast<uint1_t>(ebp254 < *reinterpret_cast<uint32_t*>(&rdi258))))))) + r12_219 + r13_259 + r14_234 + r15_251 - 0x50be7eb09e2a9221;
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

int64_t main(int64_t rdi, int64_t rsi);

void fun_4010b3() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    __asm__("cli ");
    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, 0x40aca0, 0x40ad10, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
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

void fun_40aca3(int32_t edi, int64_t rsi, int64_t rdx) {
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

void fun_40ad13() {
    __asm__("cli ");
    return;
}

void fun_40ad1b() {
    __asm__("cli ");
    return;
}

int64_t g40d010 = 0;

void fun_401036() {
    goto g40d010;
}

int64_t main(int64_t rdi, int64_t rsi) {
    uint64_t rax3;
    uint64_t rax4;
    uint64_t rax5;
    uint64_t rax6;
    uint64_t rax7;
    uint64_t rax8;
    uint64_t rax9;
    uint64_t rax10;
    uint64_t rax11;
    uint64_t rax12;

    rax3 = log_size_10_var_000(rdi, rsi);
    rax4 = log_size_10_var_001(rdi, rsi);
    rax5 = log_size_10_var_002(rdi, rsi);
    rax6 = log_size_10_var_003(rdi, rsi);
    rax7 = log_size_10_var_004(rdi, rsi);
    rax8 = log_size_10_var_005(rdi, rsi);
    rax9 = log_size_10_var_006(rdi, rsi);
    rax10 = log_size_10_var_007(rdi, rsi);
    rax11 = log_size_10_var_008(rdi, rsi);
    rax12 = log_size_10_var_009(rdi, rsi);
    if (rax3 + rax4 + rax5 + rax6 + rax7 + rax8 + rax9 + rax10 + rax11 + rax12) {
        fun_401030("sum==0", "source_complex_with_base_10_funcs_of_size_1024.c", 31, "main");
    } else {
        return 0;
    }
}
