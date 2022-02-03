
int64_t deregister_tm_clones() {
    int64_t rax1;

    *reinterpret_cast<int32_t*>(&rax1) = 0x4050c0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    if (1 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

int64_t memcpy = 0x401046;

void fun_401040(int64_t rdi, int64_t rsi, uint64_t rdx) {
    goto memcpy;
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

void main();

void fun_401053() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    __asm__("cli ");
    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, 0x402580, 0x4025f0, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void fun_401083() {
    __asm__("cli ");
    return;
}

/* completed.0 */
signed char completed_0 = 0;

int64_t fun_401103() {
    int1_t zf1;
    int64_t rax2;
    int64_t rax3;

    __asm__("cli ");
    zf1 = completed_0 == 0;
    if (!zf1) {
        return rax2;
    } else {
        rax3 = deregister_tm_clones();
        completed_0 = 1;
        return rax3;
    }
}

int64_t fun_401133() {
    __asm__("cli ");
    if (1 || 1) {
        return 0;
    } else {
        goto 0;
    }
}

void fun_40119b() {
    uint1_t zf1;

    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf1))) {
    }
}

void fun_4011a1() {
    int64_t rax1;
    int64_t rax2;

    *reinterpret_cast<int32_t*>(rax1 - 0x77) = *reinterpret_cast<int32_t*>(rax2 - 0x77) - 1;
    return;
}

/* main.counter */
unsigned char main_counter = 62;

signed char g4050be = 48;

void fun_4011ae() {
    int64_t rcx1;
    int1_t less2;
    int64_t rax3;
    uint32_t r9d4;
    unsigned char* r11_5;
    uint32_t r13d6;
    unsigned char* rbp7;
    unsigned char* rbx8;
    unsigned char* r15_9;
    int64_t r10_10;
    uint64_t rdx11;
    unsigned char* rbp12;
    unsigned char* rbx13;
    uint32_t eax14;
    unsigned char* rax15;
    unsigned char* rdi16;
    uint32_t ecx17;
    uint64_t rdx18;
    uint64_t r8_19;
    unsigned char* rdi20;
    unsigned char* rcx21;
    unsigned char* rsi22;
    uint64_t r9_23;
    uint64_t r15_24;
    unsigned char* rcx25;
    unsigned char* rsi26;
    uint32_t eax27;
    unsigned char* rbx28;
    unsigned char* rax29;
    uint32_t ecx30;
    uint64_t rdx31;
    unsigned char* rbx32;
    unsigned char* rax33;
    unsigned char* rsi34;
    uint64_t r15_35;
    unsigned char* rax36;
    unsigned char* rsi37;
    uint32_t ecx38;
    unsigned char* rdi39;
    unsigned char* rcx40;
    uint32_t eax41;
    uint64_t rdx42;
    unsigned char* r15_43;
    unsigned char* rax44;
    unsigned char* rsi45;
    uint64_t rbp46;
    unsigned char* rax47;
    unsigned char* rsi48;
    uint32_t ecx49;
    unsigned char* rdi50;
    unsigned char* rcx51;
    uint32_t eax52;
    uint64_t rdx53;
    unsigned char* r15_54;
    unsigned char* rax55;
    uint64_t rsi56;
    unsigned char* rax57;
    unsigned char* rdx58;
    unsigned char* rcx59;
    uint32_t eax60;
    uint64_t rsi61;
    unsigned char* rax62;
    uint32_t ecx63;
    int32_t edx64;
    int64_t rcx65;
    unsigned char* r15_66;
    unsigned char al67;
    int64_t rcx68;
    unsigned char* r11_69;
    uint32_t r9d70;
    uint32_t r14d71;
    unsigned char* rcx72;
    unsigned char* rbx73;
    int64_t r10_74;
    uint64_t rbp75;
    unsigned char* rcx76;
    unsigned char* rbx77;
    uint32_t eax78;
    unsigned char* rax79;
    unsigned char* rdi80;
    uint32_t ecx81;
    uint64_t rdx82;
    uint64_t r8_83;
    unsigned char* rbp84;
    unsigned char* rax85;
    unsigned char* rbx86;
    uint64_t r9_87;
    uint64_t r13_88;
    unsigned char* rax89;
    unsigned char* rbx90;
    uint32_t ecx91;
    unsigned char* rsi92;
    unsigned char* rcx93;
    uint32_t eax94;
    uint64_t rdx95;
    unsigned char* rbp96;
    unsigned char* rax97;
    unsigned char* rdi98;
    uint64_t r13_99;
    unsigned char* rax100;
    unsigned char* rdi101;
    uint32_t ecx102;
    unsigned char* rsi103;
    unsigned char* rcx104;
    uint32_t eax105;
    uint64_t rdx106;
    unsigned char* rbx107;
    int64_t r12_108;
    unsigned char* rax109;
    unsigned char* rsi110;
    uint64_t r13_111;
    unsigned char* rax112;
    unsigned char* rsi113;
    uint32_t ecx114;
    unsigned char* rdi115;
    unsigned char* rcx116;
    uint32_t eax117;
    uint64_t rdx118;
    unsigned char* rbx119;
    unsigned char* rax120;
    unsigned char* rsi121;
    uint64_t r13_122;
    unsigned char* rax123;
    unsigned char* rsi124;
    uint32_t ecx125;
    unsigned char* rdi126;
    unsigned char* rcx127;
    uint32_t eax128;
    uint64_t rdx129;
    unsigned char* r13_130;
    unsigned char* rax131;
    unsigned char* rsi132;
    uint64_t rbp133;
    unsigned char* rax134;
    unsigned char* rsi135;
    uint32_t ecx136;
    unsigned char* rdi137;
    unsigned char* rcx138;
    uint32_t eax139;
    uint64_t rdx140;
    unsigned char* rax141;
    uint32_t ecx142;
    int32_t edx143;
    int64_t rcx144;
    unsigned char* rbx145;
    unsigned char* rax146;
    unsigned char* rsi147;
    uint64_t r13_148;
    unsigned char* rax149;
    unsigned char* rsi150;
    uint32_t ecx151;
    unsigned char* rdi152;
    unsigned char* rcx153;
    uint32_t eax154;
    uint64_t rdx155;
    unsigned char* rbx156;
    unsigned char* rax157;
    unsigned char* rsi158;
    uint64_t r13_159;
    unsigned char* rax160;
    unsigned char* rsi161;
    uint32_t ecx162;
    unsigned char* rdi163;
    unsigned char* rcx164;
    uint32_t eax165;
    uint64_t rdx166;
    unsigned char* rbx167;
    unsigned char* rax168;
    unsigned char* rsi169;
    uint64_t r13_170;
    unsigned char* rax171;
    unsigned char* rsi172;
    uint32_t ecx173;
    unsigned char* rdi174;
    unsigned char* rcx175;
    uint32_t eax176;
    uint64_t rdx177;
    unsigned char* r13_178;
    unsigned char* rax179;
    unsigned char* rsi180;
    uint64_t rbp181;
    unsigned char* rax182;
    unsigned char* rsi183;
    uint32_t ecx184;
    unsigned char* rdi185;
    unsigned char* rcx186;
    uint32_t eax187;
    uint64_t rdx188;
    unsigned char* r13_189;
    unsigned char* rax190;
    uint64_t rsi191;
    unsigned char* rax192;
    unsigned char* rdx193;
    unsigned char* rcx194;
    uint32_t eax195;
    uint64_t rsi196;
    int64_t r12_197;
    unsigned char* rax198;
    uint32_t ecx199;
    int32_t edx200;
    int64_t rcx201;
    uint32_t ecx202;
    uint32_t ecx203;

    if (!(rcx1 - 1)) {
        __asm__("repne ror byte [rax-0x7b], 1");
        __asm__("ror byte [rax+0xf], 0x49");
        __asm__("fldcw word [rcx]");
    }
    while (less2) {
        *reinterpret_cast<uint32_t*>(&rax3) = main_counter;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        r9d4 = 62 - *reinterpret_cast<uint32_t*>(&rax3);
        r11_5 = reinterpret_cast<unsigned char*>(rax3 + reinterpret_cast<uint64_t>("00000000000000000000000000000000000000000000000000000000000000"));
        r13d6 = r9d4 & 3;
        if (r13d6 == 1) {
            rbp7 = r11_5 + 1;
            rbx8 = r15_9 + 1;
            *r15_9 = *r11_5;
            *reinterpret_cast<uint32_t*>(&r10_10) = r9d4 & 0xfffffffc;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_10) + 4) = 0;
            if (*reinterpret_cast<uint32_t*>(&r10_10)) {
                addr_401287_6:
                *reinterpret_cast<uint32_t*>(&rdx11) = static_cast<uint32_t>(r10_10 - 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = 0;
                if (*reinterpret_cast<uint32_t*>(&rdx11) < 60) 
                    goto addr_4012ac_7;
                if (reinterpret_cast<uint64_t>(rbx8) >= reinterpret_cast<uint64_t>(rbp7) + rdx11 + 4) 
                    goto addr_401f6f_9;
                if (reinterpret_cast<uint64_t>(rbp7) >= reinterpret_cast<uint64_t>(rbx8) + rdx11 + 4) 
                    goto addr_401f6f_9;
            } else {
                goto addr_4012ce_12;
            }
        } else {
            rbp12 = r11_5;
            rbx13 = r15_9;
            if (r13d6 == 2) {
                addr_40126f_14:
                eax14 = *rbp12;
                rbp7 = rbp12 + 2;
                *rbx13 = *reinterpret_cast<unsigned char*>(&eax14);
                rbx8 = rbx13 + 2;
                goto addr_40127e_15;
            } else {
                rbp7 = r11_5;
                rbx8 = r15_9;
                if (r13d6 != 3) {
                    addr_40127e_15:
                    *reinterpret_cast<uint32_t*>(&r10_10) = r9d4 & 0xfffffffc;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_10) + 4) = 0;
                    if (!*reinterpret_cast<uint32_t*>(&r10_10)) 
                        goto addr_4012ce_12; else 
                        goto addr_401287_6;
                } else {
                    rbp12 = r11_5 + 1;
                    rbx13 = r15_9 + 1;
                    *r15_9 = *r11_5;
                    goto addr_40126f_14;
                }
            }
        }
        addr_4012ac_7:
        rax15 = rbx8;
        rdi16 = rbp7;
        ecx17 = *reinterpret_cast<uint32_t*>(&r10_10);
        *reinterpret_cast<uint32_t*>(&rdx18) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax15) + rdx18) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdi16) + rdx18);
            rdx18 = rdx18 + 4;
        } while (ecx17 != *reinterpret_cast<uint32_t*>(&rdx18));
        addr_4012ce_12:
        *reinterpret_cast<uint32_t*>(&r8_19) = r9d4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_19) + 4) = 0;
        rdi20 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(r15_9) + r8_19 + 2);
        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(r15_9) + r8_19) = 0xa31;
        if (r13d6 == 1) {
            rcx21 = r11_5 + 1;
            rsi22 = rdi20 + 1;
            *rdi20 = *r11_5;
            r9_23 = r8_19 + 2;
            if (*reinterpret_cast<uint32_t*>(&r10_10)) {
                addr_401323_21:
                *reinterpret_cast<uint32_t*>(&r15_24) = static_cast<uint32_t>(r10_10 - 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_24) + 4) = 0;
                if (*reinterpret_cast<uint32_t*>(&r15_24) < 60) 
                    goto addr_401349_22;
                if (reinterpret_cast<uint64_t>(rsi22) >= reinterpret_cast<uint64_t>(rcx21) + r15_24 + 4) 
                    goto addr_401fce_24;
                if (reinterpret_cast<uint64_t>(rcx21) >= reinterpret_cast<uint64_t>(rsi22) + r15_24 + 4) 
                    goto addr_401fce_24;
            } else {
                goto addr_40136e_27;
            }
        } else {
            rcx25 = r11_5;
            rsi26 = rdi20;
            if (r13d6 == 2) {
                addr_40130c_29:
                eax27 = *rcx25;
                rcx21 = rcx25 + 2;
                *rsi26 = *reinterpret_cast<unsigned char*>(&eax27);
                rsi22 = rsi26 + 2;
                goto addr_40131a_30;
            } else {
                rcx21 = r11_5;
                rsi22 = rdi20;
                if (r13d6 != 3) {
                    addr_40131a_30:
                    r9_23 = r8_19 + 2;
                    if (!*reinterpret_cast<uint32_t*>(&r10_10)) 
                        goto addr_40136e_27; else 
                        goto addr_401323_21;
                } else {
                    rcx25 = r11_5 + 1;
                    rsi26 = rdi20 + 1;
                    *rdi20 = *r11_5;
                    goto addr_40130c_29;
                }
            }
        }
        addr_401349_22:
        rbx28 = rsi22;
        rax29 = rcx21;
        ecx30 = *reinterpret_cast<uint32_t*>(&r10_10);
        *reinterpret_cast<uint32_t*>(&rdx31) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rbx28) + rdx31) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax29) + rdx31);
            rdx31 = rdx31 + 4;
        } while (ecx30 != *reinterpret_cast<uint32_t*>(&rdx31));
        addr_40136e_27:
        rbx32 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rdi20) + r9_23 + 5);
        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rdi20) + r8_19) = 0xa32;
        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rdi20) + r9_23 + 4) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdi20) + r9_23) = 0x7a7a6946;
        if (r13d6 == 1) {
            rax33 = r11_5 + 1;
            rsi34 = rbx32 + 1;
            *rbx32 = *r11_5;
            if (*reinterpret_cast<uint32_t*>(&r10_10)) {
                addr_4013ca_36:
                *reinterpret_cast<uint32_t*>(&r15_35) = static_cast<uint32_t>(r10_10 - 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_35) + 4) = 0;
                if (*reinterpret_cast<uint32_t*>(&r15_35) < 60) 
                    goto addr_4013f0_37;
                if (reinterpret_cast<uint64_t>(rsi34) >= reinterpret_cast<uint64_t>(rax33) + r15_35 + 4) 
                    goto addr_40202d_39;
                if (reinterpret_cast<uint64_t>(rax33) >= reinterpret_cast<uint64_t>(rsi34) + r15_35 + 4) 
                    goto addr_40202d_39;
            } else {
                goto addr_40140e_42;
            }
        } else {
            rax36 = r11_5;
            rsi37 = rbx32;
            if (r13d6 == 2) {
                addr_4013b7_44:
                ecx38 = *rax36;
                rax33 = rax36 + 2;
                *rsi37 = *reinterpret_cast<unsigned char*>(&ecx38);
                rsi34 = rsi37 + 2;
                goto addr_4013c5_45;
            } else {
                rax33 = r11_5;
                rsi34 = rbx32;
                if (r13d6 != 3) {
                    addr_4013c5_45:
                    if (!*reinterpret_cast<uint32_t*>(&r10_10)) 
                        goto addr_40140e_42; else 
                        goto addr_4013ca_36;
                } else {
                    rax36 = r11_5 + 1;
                    rsi37 = rbx32 + 1;
                    *rbx32 = *r11_5;
                    goto addr_4013b7_44;
                }
            }
        }
        addr_4013f0_37:
        rdi39 = rsi34;
        rcx40 = rax33;
        eax41 = *reinterpret_cast<uint32_t*>(&r10_10);
        *reinterpret_cast<uint32_t*>(&rdx42) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx42) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdi39) + rdx42) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx40) + rdx42);
            rdx42 = rdx42 + 4;
        } while (eax41 != *reinterpret_cast<uint32_t*>(&rdx42));
        addr_40140e_42:
        r15_43 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rbx32) + r9_23 + 10);
        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rbx32) + r8_19) = 0xa34;
        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rbx32) + r9_23 + 8) = 0xa7a;
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rbx32) + r9_23) = 0x7a69460a7a7a7542;
        if (r13d6 == 1) {
            rax44 = r11_5 + 1;
            rsi45 = r15_43 + 1;
            *r15_43 = *r11_5;
            if (*reinterpret_cast<uint32_t*>(&r10_10)) {
                addr_401473_51:
                *reinterpret_cast<uint32_t*>(&rbp46) = static_cast<uint32_t>(r10_10 - 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp46) + 4) = 0;
                if (*reinterpret_cast<uint32_t*>(&rbp46) < 60) 
                    goto addr_401498_52;
                if (reinterpret_cast<uint64_t>(rsi45) >= reinterpret_cast<uint64_t>(rax44) + rbp46 + 4) 
                    goto addr_40208d_54;
                if (reinterpret_cast<uint64_t>(rax44) >= reinterpret_cast<uint64_t>(rsi45) + rbp46 + 4) 
                    goto addr_40208d_54;
            } else {
                goto addr_4014be_57;
            }
        } else {
            rax47 = r11_5;
            rsi48 = r15_43;
            if (r13d6 == 2) {
                addr_401460_59:
                ecx49 = *rax47;
                rax44 = rax47 + 2;
                *rsi48 = *reinterpret_cast<unsigned char*>(&ecx49);
                rsi45 = rsi48 + 2;
                goto addr_40146e_60;
            } else {
                rax44 = r11_5;
                rsi45 = r15_43;
                if (r13d6 != 3) {
                    addr_40146e_60:
                    if (!*reinterpret_cast<uint32_t*>(&r10_10)) 
                        goto addr_4014be_57; else 
                        goto addr_401473_51;
                } else {
                    rax47 = r11_5 + 1;
                    rsi48 = r15_43 + 1;
                    *r15_43 = *r11_5;
                    goto addr_401460_59;
                }
            }
        }
        addr_401498_52:
        rdi50 = rsi45;
        rcx51 = rax44;
        eax52 = *reinterpret_cast<uint32_t*>(&r10_10);
        *reinterpret_cast<uint32_t*>(&rdx53) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx53) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdi50) + rdx53) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx51) + rdx53);
            rdx53 = rdx53 + 4;
        } while (eax52 != *reinterpret_cast<uint32_t*>(&rdx53));
        addr_4014be_57:
        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(r15_43) + r8_19) = 0xa37;
        r15_54 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(r15_43) + r9_23);
        if (r13d6 == 1) {
            ++r11_5;
            rax55 = r15_54 + 1;
            *r15_54 = *r11_5;
            if (*reinterpret_cast<uint32_t*>(&r10_10)) {
                addr_4015c8_66:
                *reinterpret_cast<uint32_t*>(&rsi56) = static_cast<uint32_t>(r10_10 - 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi56) + 4) = 0;
                if (*reinterpret_cast<uint32_t*>(&rsi56) < 60) 
                    goto addr_4015ed_67;
                if (reinterpret_cast<uint64_t>(rax55) >= reinterpret_cast<uint64_t>(r11_5) + rsi56 + 4) 
                    goto addr_4020dd_69;
                if (reinterpret_cast<uint64_t>(r11_5) >= reinterpret_cast<uint64_t>(rax55) + rsi56 + 4) 
                    goto addr_4020dd_69;
            } else {
                goto addr_40160e_72;
            }
        } else {
            if (r13d6 == 2) {
                rax57 = r15_54;
                goto addr_4015a3_75;
            } else {
                if (r13d6 != 3) {
                    rax55 = r15_54;
                    if (!*reinterpret_cast<uint32_t*>(&r10_10)) 
                        goto addr_40160e_72; else 
                        goto addr_4015c8_66;
                } else {
                    ++r11_5;
                    rax57 = r15_54 + 1;
                    *r15_54 = *r11_5;
                    goto addr_4015a3_75;
                }
            }
        }
        addr_4015ed_67:
        rdx58 = rax55;
        rcx59 = r11_5;
        eax60 = *reinterpret_cast<uint32_t*>(&r10_10);
        *reinterpret_cast<uint32_t*>(&rsi61) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi61) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx58) + rsi61) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx59) + rsi61);
            rsi61 = rsi61 + 4;
        } while (eax60 != *reinterpret_cast<uint32_t*>(&rsi61));
        addr_40160e_72:
        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(r15_54) + r8_19) = 0xa38;
        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(r15_54) + r9_23 + 8) = 0xa7a;
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r15_54) + r9_23) = 0x7a75420a7a7a6946;
        *reinterpret_cast<int32_t*>(&rax62) = reinterpret_cast<int32_t>("0");
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax62) + 4) = 0;
        *reinterpret_cast<signed char*>(&ecx63) = g4050be;
        if (*reinterpret_cast<signed char*>(&ecx63) == 57) {
            *reinterpret_cast<int32_t*>(&rax62) = reinterpret_cast<int32_t>("0");
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax62) + 4) = 0;
            edx64 = 60;
            do {
                *reinterpret_cast<int32_t*>(&rcx65) = edx64;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx65) + 4) = 0;
                *rax62 = 48;
                --edx64;
                rax62 = reinterpret_cast<unsigned char*>(rcx65 + reinterpret_cast<int64_t>("00000000000000000000000000000000000000000000000000000000000000"));
                ecx63 = *reinterpret_cast<unsigned char*>(rcx65 + reinterpret_cast<int64_t>("00000000000000000000000000000000000000000000000000000000000000"));
            } while (*reinterpret_cast<signed char*>(&ecx63) == 57);
        }
        r15_66 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(r15_54) + r9_23 + 10);
        *rax62 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&ecx63) + 1);
        al67 = main_counter;
        *reinterpret_cast<uint32_t*>(&rcx68) = al67;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx68) + 4) = 0;
        if (*reinterpret_cast<signed char*>(rcx68 + reinterpret_cast<int64_t>(">00000000000000000000000000000000000000000000000000000000000000")) != 48) {
            if (al67 == 1) 
                goto addr_402523_85;
            al67 = reinterpret_cast<unsigned char>(al67 - 1);
            *reinterpret_cast<uint32_t*>(&rcx68) = al67;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx68) + 4) = 0;
            main_counter = al67;
        }
        r11_69 = reinterpret_cast<unsigned char*>(rcx68 + reinterpret_cast<uint64_t>("00000000000000000000000000000000000000000000000000000000000000"));
        r9d70 = 62 - al67;
        r14d71 = r9d70 & 3;
        if (r14d71 == 1) {
            rcx72 = r11_69 + 1;
            rbx73 = r15_66 + 1;
            *r15_66 = *r11_69;
            *reinterpret_cast<uint32_t*>(&r10_74) = r9d70 & 0xfffffffc;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_74) + 4) = 0;
            if (*reinterpret_cast<uint32_t*>(&r10_74)) {
                addr_4016ea_89:
                *reinterpret_cast<uint32_t*>(&rbp75) = static_cast<uint32_t>(r10_74 - 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp75) + 4) = 0;
                if (*reinterpret_cast<uint32_t*>(&rbp75) < 60) 
                    goto addr_40170f_90;
                if (reinterpret_cast<uint64_t>(rbx73) >= reinterpret_cast<uint64_t>(rcx72) + rbp75 + 4) 
                    goto addr_40212f_92;
                if (reinterpret_cast<uint64_t>(rcx72) >= reinterpret_cast<uint64_t>(rbx73) + rbp75 + 4) 
                    goto addr_40212f_92;
            } else {
                goto addr_40172e_95;
            }
        } else {
            rcx76 = r11_69;
            rbx77 = r15_66;
            if (r14d71 == 2) {
                addr_4016d3_97:
                eax78 = *rcx76;
                rcx72 = rcx76 + 2;
                *rbx77 = *reinterpret_cast<unsigned char*>(&eax78);
                rbx73 = rbx77 + 2;
                goto addr_4016e1_98;
            } else {
                rcx72 = r11_69;
                rbx73 = r15_66;
                if (r14d71 != 3) {
                    addr_4016e1_98:
                    *reinterpret_cast<uint32_t*>(&r10_74) = r9d70 & 0xfffffffc;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_74) + 4) = 0;
                    if (!*reinterpret_cast<uint32_t*>(&r10_74)) 
                        goto addr_40172e_95; else 
                        goto addr_4016ea_89;
                } else {
                    rcx76 = r11_69 + 1;
                    rbx77 = r15_66 + 1;
                    *r15_66 = *r11_69;
                    goto addr_4016d3_97;
                }
            }
        }
        addr_40170f_90:
        rax79 = rbx73;
        rdi80 = rcx72;
        ecx81 = *reinterpret_cast<uint32_t*>(&r10_74);
        *reinterpret_cast<uint32_t*>(&rdx82) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx82) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax79) + rdx82) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdi80) + rdx82);
            rdx82 = rdx82 + 4;
        } while (ecx81 != *reinterpret_cast<uint32_t*>(&rdx82));
        addr_40172e_95:
        *reinterpret_cast<uint32_t*>(&r8_83) = r9d70;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_83) + 4) = 0;
        rbp84 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(r15_66) + r8_83 + 7);
        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(r15_66) + r8_83) = 0xa31;
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r15_66) + r8_83 + 2) = 0x7a7a6946;
        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(r15_66) + r8_83 + 6) = 10;
        if (r14d71 == 1) {
            rax85 = r11_69 + 1;
            rbx86 = rbp84 + 1;
            *rbp84 = *r11_69;
            r9_87 = r8_83 + 2;
            if (*reinterpret_cast<uint32_t*>(&r10_74)) {
                addr_401793_104:
                *reinterpret_cast<uint32_t*>(&r13_88) = static_cast<uint32_t>(r10_74 - 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_88) + 4) = 0;
                if (*reinterpret_cast<uint32_t*>(&r13_88) < 60) 
                    goto addr_4017b9_105;
                if (reinterpret_cast<uint64_t>(rbx86) >= reinterpret_cast<uint64_t>(rax85) + r13_88 + 4) 
                    goto addr_40217d_107;
                if (reinterpret_cast<uint64_t>(rax85) >= reinterpret_cast<uint64_t>(rbx86) + r13_88 + 4) 
                    goto addr_40217d_107;
            } else {
                goto addr_4017de_110;
            }
        } else {
            rax89 = r11_69;
            rbx90 = rbp84;
            if (r14d71 == 2) {
                addr_40177c_112:
                ecx91 = *rax89;
                rax85 = rax89 + 2;
                *rbx90 = *reinterpret_cast<unsigned char*>(&ecx91);
                rbx86 = rbx90 + 2;
                goto addr_40178a_113;
            } else {
                rax85 = r11_69;
                rbx86 = rbp84;
                if (r14d71 != 3) {
                    addr_40178a_113:
                    r9_87 = r8_83 + 2;
                    if (!*reinterpret_cast<uint32_t*>(&r10_74)) 
                        goto addr_4017de_110; else 
                        goto addr_401793_104;
                } else {
                    rax89 = r11_69 + 1;
                    rbx90 = rbp84 + 1;
                    *rbp84 = *r11_69;
                    goto addr_40177c_112;
                }
            }
        }
        addr_4017b9_105:
        rsi92 = rbx86;
        rcx93 = rax85;
        eax94 = *reinterpret_cast<uint32_t*>(&r10_74);
        *reinterpret_cast<uint32_t*>(&rdx95) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx95) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi92) + rdx95) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx93) + rdx95);
            rdx95 = rdx95 + 4;
        } while (eax94 != *reinterpret_cast<uint32_t*>(&rdx95));
        addr_4017de_110:
        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rbp84) + r8_83) = 0xa33;
        rbp96 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rbp84) + r9_87);
        if (r14d71 == 1) {
            rax97 = r11_69 + 1;
            rdi98 = rbp96 + 1;
            *rbp96 = *r11_69;
            if (*reinterpret_cast<uint32_t*>(&r10_74)) {
                addr_40182c_119:
                *reinterpret_cast<uint32_t*>(&r13_99) = static_cast<uint32_t>(r10_74 - 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_99) + 4) = 0;
                if (*reinterpret_cast<uint32_t*>(&r13_99) < 60) 
                    goto addr_401852_120;
                if (reinterpret_cast<uint64_t>(rdi98) >= reinterpret_cast<uint64_t>(rax97) + r13_99 + 4) 
                    goto addr_4021dd_122;
                if (reinterpret_cast<uint64_t>(rax97) >= reinterpret_cast<uint64_t>(rdi98) + r13_99 + 4) 
                    goto addr_4021dd_122;
            } else {
                goto addr_40186e_125;
            }
        } else {
            rax100 = r11_69;
            rdi101 = rbp96;
            if (r14d71 == 2) {
                addr_401819_127:
                ecx102 = *rax100;
                rax97 = rax100 + 2;
                *rdi101 = *reinterpret_cast<unsigned char*>(&ecx102);
                rdi98 = rdi101 + 2;
                goto addr_401827_128;
            } else {
                rax97 = r11_69;
                rdi98 = rbp96;
                if (r14d71 != 3) {
                    addr_401827_128:
                    if (!*reinterpret_cast<uint32_t*>(&r10_74)) 
                        goto addr_40186e_125; else 
                        goto addr_40182c_119;
                } else {
                    rax100 = r11_69 + 1;
                    rdi101 = rbp96 + 1;
                    *rbp96 = *r11_69;
                    goto addr_401819_127;
                }
            }
        }
        addr_401852_120:
        rsi103 = rdi98;
        rcx104 = rax97;
        eax105 = *reinterpret_cast<uint32_t*>(&r10_74);
        *reinterpret_cast<uint32_t*>(&rdx106) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx106) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi103) + rdx106) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx104) + rdx106);
            rdx106 = rdx106 + 4;
        } while (eax105 != *reinterpret_cast<uint32_t*>(&rdx106));
        addr_40186e_125:
        rbx107 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rbp96) + r9_87 + 9);
        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rbp96) + r8_83) = 0xa34;
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rbp96) + r9_87) = r12_108;
        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rbp96) + r9_87 + 8) = 10;
        if (r14d71 == 1) {
            rax109 = r11_69 + 1;
            rsi110 = rbx107 + 1;
            *rbx107 = *r11_69;
            if (*reinterpret_cast<uint32_t*>(&r10_74)) {
                addr_4018c8_134:
                *reinterpret_cast<uint32_t*>(&r13_111) = static_cast<uint32_t>(r10_74 - 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_111) + 4) = 0;
                if (*reinterpret_cast<uint32_t*>(&r13_111) < 60) 
                    goto addr_4018ee_135;
                if (reinterpret_cast<uint64_t>(rsi110) >= reinterpret_cast<uint64_t>(rax109) + r13_111 + 4) 
                    goto addr_40223d_137;
                if (reinterpret_cast<uint64_t>(rax109) >= reinterpret_cast<uint64_t>(rsi110) + r13_111 + 4) 
                    goto addr_40223d_137;
            } else {
                goto addr_40190e_140;
            }
        } else {
            rax112 = r11_69;
            rsi113 = rbx107;
            if (r14d71 == 2) {
                addr_4018b5_142:
                ecx114 = *rax112;
                rax109 = rax112 + 2;
                *rsi113 = *reinterpret_cast<unsigned char*>(&ecx114);
                rsi110 = rsi113 + 2;
                goto addr_4018c3_143;
            } else {
                rax109 = r11_69;
                rsi110 = rbx107;
                if (r14d71 != 3) {
                    addr_4018c3_143:
                    if (!*reinterpret_cast<uint32_t*>(&r10_74)) 
                        goto addr_40190e_140; else 
                        goto addr_4018c8_134;
                } else {
                    rax112 = r11_69 + 1;
                    rsi113 = rbx107 + 1;
                    *rbx107 = *r11_69;
                    goto addr_4018b5_142;
                }
            }
        }
        addr_4018ee_135:
        rdi115 = rsi110;
        rcx116 = rax109;
        eax117 = *reinterpret_cast<uint32_t*>(&r10_74);
        *reinterpret_cast<uint32_t*>(&rdx118) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx118) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdi115) + rdx118) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx116) + rdx118);
            rdx118 = rdx118 + 4;
        } while (eax117 != *reinterpret_cast<uint32_t*>(&rdx118));
        addr_40190e_140:
        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rbx107) + r8_83) = 0xa36;
        rbx119 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rbx107) + r9_87);
        if (r14d71 == 1) {
            rax120 = r11_69 + 1;
            rsi121 = rbx119 + 1;
            *rbx119 = *r11_69;
            if (*reinterpret_cast<uint32_t*>(&r10_74)) {
                addr_40195a_149:
                *reinterpret_cast<uint32_t*>(&r13_122) = static_cast<uint32_t>(r10_74 - 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_122) + 4) = 0;
                if (*reinterpret_cast<uint32_t*>(&r13_122) < 60) 
                    goto addr_401980_150;
                if (reinterpret_cast<uint64_t>(rsi121) >= reinterpret_cast<uint64_t>(rax120) + r13_122 + 4) 
                    goto addr_40229d_152;
                if (reinterpret_cast<uint64_t>(rax120) >= reinterpret_cast<uint64_t>(rsi121) + r13_122 + 4) 
                    goto addr_40229d_152;
            } else {
                goto addr_40199e_155;
            }
        } else {
            rax123 = r11_69;
            rsi124 = rbx119;
            if (r14d71 == 2) {
                addr_401947_157:
                ecx125 = *rax123;
                rax120 = rax123 + 2;
                *rsi124 = *reinterpret_cast<unsigned char*>(&ecx125);
                rsi121 = rsi124 + 2;
                goto addr_401955_158;
            } else {
                rax120 = r11_69;
                rsi121 = rbx119;
                if (r14d71 != 3) {
                    addr_401955_158:
                    if (!*reinterpret_cast<uint32_t*>(&r10_74)) 
                        goto addr_40199e_155; else 
                        goto addr_40195a_149;
                } else {
                    rax123 = r11_69 + 1;
                    rsi124 = rbx119 + 1;
                    *rbx119 = *r11_69;
                    goto addr_401947_157;
                }
            }
        }
        addr_401980_150:
        rdi126 = rsi121;
        rcx127 = rax120;
        eax128 = *reinterpret_cast<uint32_t*>(&r10_74);
        *reinterpret_cast<uint32_t*>(&rdx129) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx129) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdi126) + rdx129) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx127) + rdx129);
            rdx129 = rdx129 + 4;
        } while (eax128 != *reinterpret_cast<uint32_t*>(&rdx129));
        addr_40199e_155:
        r13_130 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rbx119) + r9_87 + 5);
        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rbx119) + r8_83) = 0xa37;
        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rbx119) + r9_87 + 4) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rbx119) + r9_87) = 0x7a7a6946;
        if (r14d71 == 1) {
            rax131 = r11_69 + 1;
            rsi132 = r13_130 + 1;
            *r13_130 = *r11_69;
            if (*reinterpret_cast<uint32_t*>(&r10_74)) {
                addr_4019fc_164:
                *reinterpret_cast<uint32_t*>(&rbp133) = static_cast<uint32_t>(r10_74 - 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp133) + 4) = 0;
                if (*reinterpret_cast<uint32_t*>(&rbp133) < 60) 
                    goto addr_401a21_165;
                if (reinterpret_cast<uint64_t>(rsi132) >= reinterpret_cast<uint64_t>(rax131) + rbp133 + 4) 
                    goto addr_4022fd_167;
                if (reinterpret_cast<uint64_t>(rax131) >= reinterpret_cast<uint64_t>(rsi132) + rbp133 + 4) 
                    goto addr_4022fd_167;
            } else {
                goto addr_401a3e_170;
            }
        } else {
            rax134 = r11_69;
            rsi135 = r13_130;
            if (r14d71 == 2) {
                addr_4019e9_172:
                ecx136 = *rax134;
                rax131 = rax134 + 2;
                *rsi135 = *reinterpret_cast<unsigned char*>(&ecx136);
                rsi132 = rsi135 + 2;
                goto addr_4019f7_173;
            } else {
                rax131 = r11_69;
                rsi132 = r13_130;
                if (r14d71 != 3) {
                    addr_4019f7_173:
                    if (!*reinterpret_cast<uint32_t*>(&r10_74)) 
                        goto addr_401a3e_170; else 
                        goto addr_4019fc_164;
                } else {
                    rax134 = r11_69 + 1;
                    rsi135 = r13_130 + 1;
                    *r13_130 = *r11_69;
                    goto addr_4019e9_172;
                }
            }
        }
        addr_401a21_165:
        rdi137 = rsi132;
        rcx138 = rax131;
        eax139 = *reinterpret_cast<uint32_t*>(&r10_74);
        *reinterpret_cast<uint32_t*>(&rdx140) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx140) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdi137) + rdx140) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx138) + rdx140);
            rdx140 = rdx140 + 4;
        } while (eax139 != *reinterpret_cast<uint32_t*>(&rdx140));
        addr_401a3e_170:
        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(r13_130) + r8_83) = 0xa39;
        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(r13_130) + r9_87 + 8) = 0xa7a;
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r13_130) + r9_87) = 0x7a69460a7a7a7542;
        *reinterpret_cast<int32_t*>(&rax141) = reinterpret_cast<int32_t>("0");
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax141) + 4) = 0;
        *reinterpret_cast<signed char*>(&ecx142) = g4050be;
        if (*reinterpret_cast<signed char*>(&ecx142) == 57) {
            *reinterpret_cast<int32_t*>(&rax141) = reinterpret_cast<int32_t>("0");
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax141) + 4) = 0;
            edx143 = 60;
            do {
                *reinterpret_cast<int32_t*>(&rcx144) = edx143;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx144) + 4) = 0;
                *rax141 = 48;
                --edx143;
                rax141 = reinterpret_cast<unsigned char*>(rcx144 + reinterpret_cast<int64_t>("00000000000000000000000000000000000000000000000000000000000000"));
                ecx142 = *reinterpret_cast<unsigned char*>(rcx144 + reinterpret_cast<int64_t>("00000000000000000000000000000000000000000000000000000000000000"));
            } while (*reinterpret_cast<signed char*>(&ecx142) == 57);
        }
        rbx145 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(r13_130) + r9_87 + 10);
        *rax141 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&ecx142) + 1);
        if (r14d71 == 1) {
            rax146 = r11_69 + 1;
            rsi147 = rbx145 + 1;
            *rbx145 = *r11_69;
            if (*reinterpret_cast<uint32_t*>(&r10_74)) {
                addr_401ae5_182:
                *reinterpret_cast<uint32_t*>(&r13_148) = static_cast<uint32_t>(r10_74 - 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_148) + 4) = 0;
                if (*reinterpret_cast<uint32_t*>(&r13_148) < 60) 
                    goto addr_401b0b_183;
                if (reinterpret_cast<uint64_t>(rsi147) >= reinterpret_cast<uint64_t>(rax146) + r13_148 + 4) 
                    goto addr_40234d_185;
                if (reinterpret_cast<uint64_t>(rax146) >= reinterpret_cast<uint64_t>(rsi147) + r13_148 + 4) 
                    goto addr_40234d_185;
            } else {
                goto addr_401b2e_188;
            }
        } else {
            rax149 = r11_69;
            rsi150 = rbx145;
            if (r14d71 == 2) {
                addr_401ad2_190:
                ecx151 = *rax149;
                rax146 = rax149 + 2;
                *rsi150 = *reinterpret_cast<unsigned char*>(&ecx151);
                rsi147 = rsi150 + 2;
                goto addr_401ae0_191;
            } else {
                rax146 = r11_69;
                rsi147 = rbx145;
                if (r14d71 != 3) {
                    addr_401ae0_191:
                    if (!*reinterpret_cast<uint32_t*>(&r10_74)) 
                        goto addr_401b2e_188; else 
                        goto addr_401ae5_182;
                } else {
                    rax149 = r11_69 + 1;
                    rsi150 = rbx145 + 1;
                    *rbx145 = *r11_69;
                    goto addr_401ad2_190;
                }
            }
        }
        addr_401b0b_183:
        rdi152 = rsi147;
        rcx153 = rax146;
        eax154 = *reinterpret_cast<uint32_t*>(&r10_74);
        *reinterpret_cast<uint32_t*>(&rdx155) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx155) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdi152) + rdx155) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx153) + rdx155);
            rdx155 = rdx155 + 4;
        } while (eax154 != *reinterpret_cast<uint32_t*>(&rdx155));
        addr_401b2e_188:
        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rbx145) + r8_83) = 0xa32;
        rbx156 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rbx145) + r9_87);
        if (r14d71 == 1) {
            rax157 = r11_69 + 1;
            rsi158 = rbx156 + 1;
            *rbx156 = *r11_69;
            if (*reinterpret_cast<uint32_t*>(&r10_74)) {
                addr_401b7a_197:
                *reinterpret_cast<uint32_t*>(&r13_159) = static_cast<uint32_t>(r10_74 - 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_159) + 4) = 0;
                if (*reinterpret_cast<uint32_t*>(&r13_159) < 60) 
                    goto addr_401ba0_198;
                if (reinterpret_cast<uint64_t>(rsi158) >= reinterpret_cast<uint64_t>(rax157) + r13_159 + 4) 
                    goto addr_4023ad_200;
                if (reinterpret_cast<uint64_t>(rax157) >= reinterpret_cast<uint64_t>(rsi158) + r13_159 + 4) 
                    goto addr_4023ad_200;
            } else {
                goto addr_401bbe_203;
            }
        } else {
            rax160 = r11_69;
            rsi161 = rbx156;
            if (r14d71 == 2) {
                addr_401b67_205:
                ecx162 = *rax160;
                rax157 = rax160 + 2;
                *rsi161 = *reinterpret_cast<unsigned char*>(&ecx162);
                rsi158 = rsi161 + 2;
                goto addr_401b75_206;
            } else {
                rax157 = r11_69;
                rsi158 = rbx156;
                if (r14d71 != 3) {
                    addr_401b75_206:
                    if (!*reinterpret_cast<uint32_t*>(&r10_74)) 
                        goto addr_401bbe_203; else 
                        goto addr_401b7a_197;
                } else {
                    rax160 = r11_69 + 1;
                    rsi161 = rbx156 + 1;
                    *rbx156 = *r11_69;
                    goto addr_401b67_205;
                }
            }
        }
        addr_401ba0_198:
        rdi163 = rsi158;
        rcx164 = rax157;
        eax165 = *reinterpret_cast<uint32_t*>(&r10_74);
        *reinterpret_cast<uint32_t*>(&rdx166) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx166) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdi163) + rdx166) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx164) + rdx166);
            rdx166 = rdx166 + 4;
        } while (eax165 != *reinterpret_cast<uint32_t*>(&rdx166));
        addr_401bbe_203:
        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rbx156) + r8_83) = 0xa33;
        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rbx156) + r9_87 + 8) = 0xa7a;
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rbx156) + r9_87) = 0x7a75420a7a7a6946;
        rbx167 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rbx156) + r9_87 + 10);
        if (r14d71 == 1) {
            rax168 = r11_69 + 1;
            rsi169 = rbx167 + 1;
            *rbx167 = *r11_69;
            if (*reinterpret_cast<uint32_t*>(&r10_74)) {
                addr_401c22_212:
                *reinterpret_cast<uint32_t*>(&r13_170) = static_cast<uint32_t>(r10_74 - 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_170) + 4) = 0;
                if (*reinterpret_cast<uint32_t*>(&r13_170) < 60) 
                    goto addr_401c48_213;
                if (reinterpret_cast<uint64_t>(rsi169) >= reinterpret_cast<uint64_t>(rax168) + r13_170 + 4) 
                    goto addr_40240d_215;
                if (reinterpret_cast<uint64_t>(rax168) >= reinterpret_cast<uint64_t>(rsi169) + r13_170 + 4) 
                    goto addr_40240d_215;
            } else {
                goto addr_401c6e_218;
            }
        } else {
            rax171 = r11_69;
            rsi172 = rbx167;
            if (r14d71 == 2) {
                addr_401c0f_220:
                ecx173 = *rax171;
                rax168 = rax171 + 2;
                *rsi172 = *reinterpret_cast<unsigned char*>(&ecx173);
                rsi169 = rsi172 + 2;
                goto addr_401c1d_221;
            } else {
                rax168 = r11_69;
                rsi169 = rbx167;
                if (r14d71 != 3) {
                    addr_401c1d_221:
                    if (!*reinterpret_cast<uint32_t*>(&r10_74)) 
                        goto addr_401c6e_218; else 
                        goto addr_401c22_212;
                } else {
                    rax171 = r11_69 + 1;
                    rsi172 = rbx167 + 1;
                    *rbx167 = *r11_69;
                    goto addr_401c0f_220;
                }
            }
        }
        addr_401c48_213:
        rdi174 = rsi169;
        rcx175 = rax168;
        eax176 = *reinterpret_cast<uint32_t*>(&r10_74);
        *reinterpret_cast<uint32_t*>(&rdx177) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx177) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdi174) + rdx177) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx175) + rdx177);
            rdx177 = rdx177 + 4;
        } while (eax176 != *reinterpret_cast<uint32_t*>(&rdx177));
        addr_401c6e_218:
        r13_178 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rbx167) + r9_87 + 5);
        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rbx167) + r8_83) = 0xa36;
        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rbx167) + r9_87 + 4) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rbx167) + r9_87) = 0x7a7a6946;
        if (r14d71 == 1) {
            rax179 = r11_69 + 1;
            rsi180 = r13_178 + 1;
            *r13_178 = *r11_69;
            if (*reinterpret_cast<uint32_t*>(&r10_74)) {
                addr_401ccc_227:
                *reinterpret_cast<uint32_t*>(&rbp181) = static_cast<uint32_t>(r10_74 - 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp181) + 4) = 0;
                if (*reinterpret_cast<uint32_t*>(&rbp181) < 60) 
                    goto addr_401cf1_228;
                if (reinterpret_cast<uint64_t>(rsi180) >= reinterpret_cast<uint64_t>(rax179) + rbp181 + 4) 
                    goto addr_40246d_230;
                if (reinterpret_cast<uint64_t>(rax179) >= reinterpret_cast<uint64_t>(rsi180) + rbp181 + 4) 
                    goto addr_40246d_230;
            } else {
                goto addr_401d0e_233;
            }
        } else {
            rax182 = r11_69;
            rsi183 = r13_178;
            if (r14d71 == 2) {
                addr_401cb9_235:
                ecx184 = *rax182;
                rax179 = rax182 + 2;
                *rsi183 = *reinterpret_cast<unsigned char*>(&ecx184);
                rsi180 = rsi183 + 2;
                goto addr_401cc7_236;
            } else {
                rax179 = r11_69;
                rsi180 = r13_178;
                if (r14d71 != 3) {
                    addr_401cc7_236:
                    if (!*reinterpret_cast<uint32_t*>(&r10_74)) 
                        goto addr_401d0e_233; else 
                        goto addr_401ccc_227;
                } else {
                    rax182 = r11_69 + 1;
                    rsi183 = r13_178 + 1;
                    *r13_178 = *r11_69;
                    goto addr_401cb9_235;
                }
            }
        }
        addr_401cf1_228:
        rdi185 = rsi180;
        rcx186 = rax179;
        eax187 = *reinterpret_cast<uint32_t*>(&r10_74);
        *reinterpret_cast<uint32_t*>(&rdx188) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx188) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdi185) + rdx188) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx186) + rdx188);
            rdx188 = rdx188 + 4;
        } while (eax187 != *reinterpret_cast<uint32_t*>(&rdx188));
        addr_401d0e_233:
        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(r13_178) + r8_83) = 0xa38;
        r13_189 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(r13_178) + r9_87);
        if (r14d71 == 1) {
            ++r11_69;
            rax190 = r13_189 + 1;
            *r13_189 = *r11_69;
            if (*reinterpret_cast<uint32_t*>(&r10_74)) {
                addr_401ed8_242:
                *reinterpret_cast<uint32_t*>(&rsi191) = static_cast<uint32_t>(r10_74 - 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi191) + 4) = 0;
                if (*reinterpret_cast<uint32_t*>(&rsi191) < 60) 
                    goto addr_401efd_243;
                if (reinterpret_cast<uint64_t>(rax190) >= reinterpret_cast<uint64_t>(r11_69) + rsi191 + 4) 
                    goto addr_4024bd_245;
                if (reinterpret_cast<uint64_t>(r11_69) >= reinterpret_cast<uint64_t>(rax190) + rsi191 + 4) 
                    goto addr_4024bd_245;
            } else {
                goto addr_401f1e_248;
            }
        } else {
            if (r14d71 == 2) {
                rax192 = r13_189;
                goto addr_401eb3_251;
            } else {
                if (r14d71 != 3) {
                    rax190 = r13_189;
                    if (!*reinterpret_cast<uint32_t*>(&r10_74)) 
                        goto addr_401f1e_248; else 
                        goto addr_401ed8_242;
                } else {
                    ++r11_69;
                    rax192 = r13_189 + 1;
                    *r13_189 = *r11_69;
                    goto addr_401eb3_251;
                }
            }
        }
        addr_401efd_243:
        rdx193 = rax190;
        rcx194 = r11_69;
        eax195 = *reinterpret_cast<uint32_t*>(&r10_74);
        *reinterpret_cast<uint32_t*>(&rsi196) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi196) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx193) + rsi196) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx194) + rsi196);
            rsi196 = rsi196 + 4;
        } while (eax195 != *reinterpret_cast<uint32_t*>(&rsi196));
        addr_401f1e_248:
        *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(r13_189) + r8_83) = 0xa39;
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r13_189) + r9_87) = r12_197;
        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(r13_189) + r9_87 + 8) = 10;
        *reinterpret_cast<int32_t*>(&rax198) = reinterpret_cast<int32_t>("0");
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax198) + 4) = 0;
        *reinterpret_cast<signed char*>(&ecx199) = g4050be;
        if (*reinterpret_cast<signed char*>(&ecx199) == 57) {
            *reinterpret_cast<int32_t*>(&rax198) = reinterpret_cast<int32_t>("0");
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax198) + 4) = 0;
            edx200 = 60;
            do {
                *reinterpret_cast<int32_t*>(&rcx201) = edx200;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx201) + 4) = 0;
                *rax198 = 48;
                --edx200;
                rax198 = reinterpret_cast<unsigned char*>(rcx201 + reinterpret_cast<int64_t>("00000000000000000000000000000000000000000000000000000000000000"));
                ecx199 = *reinterpret_cast<unsigned char*>(rcx201 + reinterpret_cast<int64_t>("00000000000000000000000000000000000000000000000000000000000000"));
            } while (*reinterpret_cast<signed char*>(&ecx199) == 57);
        }
        r15_9 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(r13_189) + r9_87 + 9);
        *rax198 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&ecx199) + 1);
        less2 = reinterpret_cast<int64_t>(r15_9 - 0x407000) < reinterpret_cast<int64_t>(0x10000);
        continue;
        addr_401eb3_251:
        ecx202 = *r11_69;
        r11_69 = r11_69 + 2;
        *rax192 = *reinterpret_cast<unsigned char*>(&ecx202);
        rax190 = rax192 + 2;
        if (*reinterpret_cast<uint32_t*>(&r10_74)) 
            goto addr_401ed8_242;
        goto addr_401f1e_248;
        addr_4015a3_75:
        ecx203 = *r11_5;
        r11_5 = r11_5 + 2;
        *rax57 = *reinterpret_cast<unsigned char*>(&ecx203);
        rax55 = rax57 + 2;
        if (*reinterpret_cast<uint32_t*>(&r10_10)) 
            goto addr_4015c8_66;
        goto addr_40160e_72;
    }
    addr_401f6f_9:
    addr_401fce_24:
    addr_40202d_39:
    addr_40208d_54:
    addr_4020dd_69:
    addr_402523_85:
    if (!(*reinterpret_cast<int32_t*>(&r15_66) - 0x407000)) {
    }
    addr_40212f_92:
    addr_40217d_107:
    addr_4021dd_122:
    addr_40223d_137:
    addr_40229d_152:
    addr_4022fd_167:
    addr_40234d_185:
    addr_4023ad_200:
    addr_40240d_215:
    addr_40246d_230:
    addr_4024bd_245:
}

void fun_4011bb() {
    int1_t zf1;
    uint64_t rax2;
    int64_t r14_3;
    int64_t r14_4;
    uint64_t r14_5;
    int64_t r14_6;
    int64_t r15_7;

    if (!zf1) 
        goto 0x401190;
    rax2 = reinterpret_cast<uint64_t>(r14_3 + 0xffff);
    if (r14_4 >= 0) {
        rax2 = r14_5;
    }
    fun_401040(0x407000, 0x417000, r14_6 - (rax2 & 0xffffffffffff0000));
    if (r15_7 - 0x10000 - 0x407000 <= 0xffff) 
        goto 0x401221; else 
        goto "???";
}

void fun_401fa1() {
    unsigned char* rbp1;
    int64_t rsi2;
    signed char* rbp3;
    int64_t rsi4;
    signed char al5;
    uint1_t cf6;

    rbp1[rsi2 * 4] = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(rbp3[rsi4 * 4] + al5) + cf6);
}

void fun_401fa7() {
    void* rbp1;
    int64_t rsi2;
    void* rbp3;
    int64_t rsi4;
    signed char cl5;
    uint1_t cf6;

    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rbp1) + rsi2 * 4 + 32) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp3) + rsi4 * 4 + 32) + cl5) + cf6);
}

void fun_401fad() {
    uint32_t* rbx1;
    int64_t rsi2;
    int32_t* rbx3;
    int64_t rsi4;
    int32_t eax5;
    uint1_t cf6;

    rbx1[rsi2] = rbx3[rsi4] + eax5 + cf6;
}

void fun_401fb2() {
    void* rbx1;
    int64_t rsi2;
    void* rbx3;
    int64_t rsi4;
    int32_t ecx5;
    uint1_t cf6;
    int64_t rcx7;
    int64_t rsi8;
    int64_t rcx9;
    int64_t rdx10;

    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx1) + rsi2 * 4 + 32) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx3) + rsi4 * 4 + 32) + ecx5 + cf6;
    if (rcx7 != rsi8 + 16) 
        goto 0x401fa0;
    if (rcx9 != rdx10) 
        goto 0x4012b5;
    goto 0x4012ce;
}

void fun_402001() {
    unsigned char* rcx1;
    int64_t rbp2;
    signed char* rcx3;
    int64_t rbp4;
    signed char al5;
    uint1_t cf6;

    rcx1[rbp2 * 4] = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(rcx3[rbp4 * 4] + al5) + cf6);
}

void fun_402006() {
    void* rcx1;
    int64_t rbp2;
    void* rcx3;
    int64_t rbp4;
    signed char cl5;
    uint1_t cf6;

    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rcx1) + rbp2 * 4 + 32) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rcx3) + rbp4 * 4 + 32) + cl5) + cf6);
}

void fun_40200c() {
    uint32_t* rsi1;
    int64_t rbp2;
    int32_t* rsi3;
    int64_t rbp4;
    int32_t eax5;
    uint1_t cf6;

    rsi1[rbp2] = rsi3[rbp4] + eax5 + cf6;
}

void fun_402011() {
    void* rsi1;
    int64_t rbp2;
    void* rsi3;
    int64_t rbp4;
    int32_t ecx5;
    uint1_t cf6;
    int64_t rdx7;
    int64_t rbp8;
    int64_t rdx9;
    int64_t r15_10;

    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsi1) + rbp2 * 4 + 32) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi3) + rbp4 * 4 + 32) + ecx5 + cf6;
    if (rdx7 != rbp8 + 16) 
        goto 0x402000;
    if (rdx9 != r15_10) 
        goto 0x401352;
    goto 0x40136e;
}

void fun_402061() {
    unsigned char* rax1;
    int64_t rbp2;
    signed char* rax3;
    int64_t rbp4;
    signed char al5;
    uint1_t cf6;

    rax1[rbp2 * 4] = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(rax3[rbp4 * 4] + al5) + cf6);
}

void fun_402066() {
    void* rax1;
    int64_t rbp2;
    void* rax3;
    int64_t rbp4;
    signed char cl5;
    uint1_t cf6;

    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax1) + rbp2 * 4 + 32) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax3) + rbp4 * 4 + 32) + cl5) + cf6);
}

void fun_40206c() {
    uint32_t* rsi1;
    int64_t rbp2;
    int32_t* rsi3;
    int64_t rbp4;
    int32_t eax5;
    uint1_t cf6;

    rsi1[rbp2] = rsi3[rbp4] + eax5 + cf6;
}

void fun_402071() {
    void* rsi1;
    int64_t rbp2;
    void* rsi3;
    int64_t rbp4;
    int32_t ecx5;
    uint1_t cf6;
    int64_t rdx7;
    int64_t rbp8;
    int64_t rdx9;
    int64_t r15_10;

    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsi1) + rbp2 * 4 + 32) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi3) + rbp4 * 4 + 32) + ecx5 + cf6;
    if (rdx7 != rbp8 + 16) 
        goto 0x402060;
    if (rdx9 != r15_10) 
        goto 0x4013f9;
    goto 0x40140e;
}

void fun_4020b1() {
    unsigned char* rax1;
    int64_t rbx2;
    signed char* rax3;
    int64_t rbx4;
    signed char al5;
    uint1_t cf6;

    rax1[rbx2 * 4] = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(rax3[rbx4 * 4] + al5) + cf6);
}

void fun_4020b6() {
    void* rax1;
    int64_t rbx2;
    void* rax3;
    int64_t rbx4;
    signed char cl5;
    uint1_t cf6;

    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax1) + rbx2 * 4 + 32) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax3) + rbx4 * 4 + 32) + cl5) + cf6);
}

void fun_4020bc() {
    uint32_t* rsi1;
    int64_t rbx2;
    int32_t* rsi3;
    int64_t rbx4;
    int32_t eax5;
    uint1_t cf6;

    rsi1[rbx2] = rsi3[rbx4] + eax5 + cf6;
}

void fun_4020c1() {
    void* rsi1;
    int64_t rbx2;
    void* rsi3;
    int64_t rbx4;
    int32_t ecx5;
    uint1_t cf6;
    int64_t rdx7;
    int64_t rbx8;
    int64_t rdx9;
    int64_t rbp10;

    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsi1) + rbx2 * 4 + 32) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi3) + rbx4 * 4 + 32) + ecx5 + cf6;
    if (rdx7 != rbx8 + 16) 
        goto 0x4020b0;
    if (rdx9 != rbp10) 
        goto 0x4014a1;
    goto 0x4014be;
}

void fun_402101() {
    int64_t rax1;
    int64_t rdx2;
    int64_t rax3;
    int64_t rdx4;

    *reinterpret_cast<int32_t*>(rax1 + rdx2 + 4) = *reinterpret_cast<int32_t*>(rax3 + rdx4 + 4) >> 0xffffff9b;
}

void fun_402107() {
    int64_t rax1;
    int64_t rdx2;
    int64_t rax3;
    int64_t rdx4;
    uint32_t* rax5;
    int64_t rbx6;
    int32_t* rax7;
    int64_t rbx8;
    int32_t eax9;

    *reinterpret_cast<int32_t*>(rax1 + rdx2 + 76) = *reinterpret_cast<int32_t*>(rax3 + rdx4 + 76) >> 0xffffff9b;
    rax5[rbx6] = reinterpret_cast<uint32_t>(rax7[rbx8] + eax9);
}

void fun_402113(int64_t rdi, int64_t rsi) {
    void* rax3;
    int64_t rbx4;
    void* rax5;
    int64_t rbx6;
    int32_t ecx7;
    uint1_t cf8;
    int64_t rbx9;

    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax3) + rbx4 * 4 + 32) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax5) + rbx6 * 4 + 32) + ecx7 + cf8;
    if (rdi != rbx9 + 16) 
        goto 0x402100;
    if (rdi != rsi) 
        goto 0x4015f3;
    goto 0x40160e;
}

void fun_402151() {
    unsigned char* rcx1;
    int64_t rsi2;
    signed char* rcx3;
    int64_t rsi4;
    signed char al5;
    uint1_t cf6;

    rcx1[rsi2 * 4] = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(rcx3[rsi4 * 4] + al5) + cf6);
}

void fun_402156() {
    void* rcx1;
    int64_t rsi2;
    void* rcx3;
    int64_t rsi4;
    signed char cl5;
    uint1_t cf6;

    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rcx1) + rsi2 * 4 + 32) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rcx3) + rsi4 * 4 + 32) + cl5) + cf6);
}

void fun_40215c() {
    uint32_t* rbx1;
    int64_t rsi2;
    int32_t* rbx3;
    int64_t rsi4;
    int32_t eax5;
    uint1_t cf6;

    rbx1[rsi2] = rbx3[rsi4] + eax5 + cf6;
}

void fun_402161() {
    void* rbx1;
    int64_t rsi2;
    void* rbx3;
    int64_t rsi4;
    int32_t ecx5;
    uint1_t cf6;
    int64_t rdx7;
    int64_t rsi8;
    int64_t rdx9;
    int64_t rbp10;

    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx1) + rsi2 * 4 + 32) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx3) + rsi4 * 4 + 32) + ecx5 + cf6;
    if (rdx7 != rsi8 + 16) 
        goto 0x402150;
    if (rdx9 != rbp10) 
        goto 0x401718;
    goto 0x40172e;
}

void fun_4021b1(int64_t rdi) {
    unsigned char* rax2;
    signed char* rax3;
    signed char al4;
    uint1_t cf5;

    rax2[rdi * 4] = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(rax3[rdi * 4] + al4) + cf5);
}

void fun_4021b6(int64_t rdi) {
    void* rax2;
    void* rax3;
    signed char cl4;
    uint1_t cf5;

    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax2) + rdi * 4 + 32) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax3) + rdi * 4 + 32) + cl4) + cf5);
}

void fun_4021bc(int64_t rdi) {
    uint32_t* rbx2;
    int32_t* rbx3;
    int32_t eax4;
    uint1_t cf5;

    rbx2[rdi] = rbx3[rdi] + eax4 + cf5;
}

void fun_4021c1(int64_t rdi) {
    void* rbx2;
    void* rbx3;
    int32_t ecx4;
    uint1_t cf5;
    int64_t rdx6;
    int64_t rdx7;
    int64_t r13_8;

    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx2) + rdi * 4 + 32) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx3) + rdi * 4 + 32) + ecx4 + cf5;
    if (rdx6 != rdi + 16) 
        goto 0x4021b0;
    if (rdx7 != r13_8) 
        goto 0x4017c2;
    goto 0x4017de;
}

void fun_402211() {
    unsigned char* rax1;
    int64_t rbx2;
    signed char* rax3;
    int64_t rbx4;
    signed char al5;
    uint1_t cf6;

    rax1[rbx2 * 4] = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(rax3[rbx4 * 4] + al5) + cf6);
}

void fun_402216() {
    void* rax1;
    int64_t rbx2;
    void* rax3;
    int64_t rbx4;
    signed char cl5;
    uint1_t cf6;

    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax1) + rbx2 * 4 + 32) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax3) + rbx4 * 4 + 32) + cl5) + cf6);
}

void fun_40221c(uint32_t* rdi) {
    int64_t rbx2;
    int64_t rbx3;
    int32_t eax4;
    uint1_t cf5;

    rdi[rbx2] = rdi[rbx3] + eax4 + cf5;
}

void fun_402221(void* rdi) {
    int64_t rbx2;
    int64_t rbx3;
    int32_t ecx4;
    uint1_t cf5;
    int64_t rdx6;
    int64_t rbx7;
    int64_t rdx8;
    int64_t r13_9;

    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + rbx2 * 4 + 32) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi) + rbx3 * 4 + 32) + ecx4 + cf5;
    if (rdx6 != rbx7 + 16) 
        goto 0x402210;
    if (rdx8 != r13_9) 
        goto 0x40185b;
    goto 0x40186e;
}

void fun_402271() {
    unsigned char* rax1;
    int64_t rbp2;
    signed char* rax3;
    int64_t rbp4;
    signed char al5;
    uint1_t cf6;

    rax1[rbp2 * 4] = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(rax3[rbp4 * 4] + al5) + cf6);
}

void fun_402276() {
    void* rax1;
    int64_t rbp2;
    void* rax3;
    int64_t rbp4;
    signed char cl5;
    uint1_t cf6;

    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax1) + rbp2 * 4 + 32) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax3) + rbp4 * 4 + 32) + cl5) + cf6);
}

void fun_40227c() {
    uint32_t* rsi1;
    int64_t rbp2;
    int32_t* rsi3;
    int64_t rbp4;
    int32_t eax5;
    uint1_t cf6;

    rsi1[rbp2] = rsi3[rbp4] + eax5 + cf6;
}

void fun_402281() {
    void* rsi1;
    int64_t rbp2;
    void* rsi3;
    int64_t rbp4;
    int32_t ecx5;
    uint1_t cf6;
    int64_t rdx7;
    int64_t rbp8;
    int64_t rdx9;
    int64_t r13_10;

    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsi1) + rbp2 * 4 + 32) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi3) + rbp4 * 4 + 32) + ecx5 + cf6;
    if (rdx7 != rbp8 + 16) 
        goto 0x402270;
    if (rdx9 != r13_10) 
        goto 0x4018f7;
    goto 0x40190e;
}

void fun_4022d1() {
    unsigned char* rax1;
    int64_t rbp2;
    signed char* rax3;
    int64_t rbp4;
    signed char al5;
    uint1_t cf6;

    rax1[rbp2 * 4] = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(rax3[rbp4 * 4] + al5) + cf6);
}

void fun_4022d6() {
    void* rax1;
    int64_t rbp2;
    void* rax3;
    int64_t rbp4;
    signed char cl5;
    uint1_t cf6;

    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax1) + rbp2 * 4 + 32) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax3) + rbp4 * 4 + 32) + cl5) + cf6);
}

void fun_4022dc() {
    uint32_t* rsi1;
    int64_t rbp2;
    int32_t* rsi3;
    int64_t rbp4;
    int32_t eax5;
    uint1_t cf6;

    rsi1[rbp2] = rsi3[rbp4] + eax5 + cf6;
}

void fun_4022e1() {
    void* rsi1;
    int64_t rbp2;
    void* rsi3;
    int64_t rbp4;
    int32_t ecx5;
    uint1_t cf6;
    int64_t rdx7;
    int64_t rbp8;
    int64_t rdx9;
    int64_t r13_10;

    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsi1) + rbp2 * 4 + 32) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi3) + rbp4 * 4 + 32) + ecx5 + cf6;
    if (rdx7 != rbp8 + 16) 
        goto 0x4022d0;
    if (rdx9 != r13_10) 
        goto 0x401989;
    goto 0x40199e;
}

void fun_402321() {
    unsigned char* rax1;
    int64_t rbx2;
    signed char* rax3;
    int64_t rbx4;
    signed char al5;
    uint1_t cf6;

    rax1[rbx2 * 4] = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(rax3[rbx4 * 4] + al5) + cf6);
}

void fun_402326() {
    void* rax1;
    int64_t rbx2;
    void* rax3;
    int64_t rbx4;
    signed char cl5;
    uint1_t cf6;

    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax1) + rbx2 * 4 + 32) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax3) + rbx4 * 4 + 32) + cl5) + cf6);
}

void fun_40232c() {
    uint32_t* rsi1;
    int64_t rbx2;
    int32_t* rsi3;
    int64_t rbx4;
    int32_t eax5;
    uint1_t cf6;

    rsi1[rbx2] = rsi3[rbx4] + eax5 + cf6;
}

void fun_402331() {
    void* rsi1;
    int64_t rbx2;
    void* rsi3;
    int64_t rbx4;
    int32_t ecx5;
    uint1_t cf6;
    int64_t rdx7;
    int64_t rbx8;
    int64_t rdx9;
    int64_t rbp10;

    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsi1) + rbx2 * 4 + 32) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi3) + rbx4 * 4 + 32) + ecx5 + cf6;
    if (rdx7 != rbx8 + 16) 
        goto 0x402320;
    if (rdx9 != rbp10) 
        goto 0x401a2a;
    goto 0x401a3e;
}

void fun_402381() {
    unsigned char* rax1;
    int64_t rbp2;
    signed char* rax3;
    int64_t rbp4;
    signed char al5;
    uint1_t cf6;

    rax1[rbp2 * 4] = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(rax3[rbp4 * 4] + al5) + cf6);
}

void fun_402386() {
    void* rax1;
    int64_t rbp2;
    void* rax3;
    int64_t rbp4;
    signed char cl5;
    uint1_t cf6;

    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax1) + rbp2 * 4 + 32) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax3) + rbp4 * 4 + 32) + cl5) + cf6);
}

void fun_40238c() {
    uint32_t* rsi1;
    int64_t rbp2;
    int32_t* rsi3;
    int64_t rbp4;
    int32_t eax5;
    uint1_t cf6;

    rsi1[rbp2] = rsi3[rbp4] + eax5 + cf6;
}

void fun_402391() {
    void* rsi1;
    int64_t rbp2;
    void* rsi3;
    int64_t rbp4;
    int32_t ecx5;
    uint1_t cf6;
    int64_t rdx7;
    int64_t rbp8;
    int64_t rdx9;
    int64_t r13_10;

    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsi1) + rbp2 * 4 + 32) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi3) + rbp4 * 4 + 32) + ecx5 + cf6;
    if (rdx7 != rbp8 + 16) 
        goto 0x402380;
    if (rdx9 != r13_10) 
        goto 0x401b14;
    goto 0x401b2e;
}

void fun_4023e1() {
    unsigned char* rax1;
    int64_t rbp2;
    signed char* rax3;
    int64_t rbp4;
    signed char al5;
    uint1_t cf6;

    rax1[rbp2 * 4] = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(rax3[rbp4 * 4] + al5) + cf6);
}

void fun_4023e6() {
    void* rax1;
    int64_t rbp2;
    void* rax3;
    int64_t rbp4;
    signed char cl5;
    uint1_t cf6;

    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax1) + rbp2 * 4 + 32) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax3) + rbp4 * 4 + 32) + cl5) + cf6);
}

void fun_4023ec() {
    uint32_t* rsi1;
    int64_t rbp2;
    int32_t* rsi3;
    int64_t rbp4;
    int32_t eax5;
    uint1_t cf6;

    rsi1[rbp2] = rsi3[rbp4] + eax5 + cf6;
}

void fun_4023f1() {
    void* rsi1;
    int64_t rbp2;
    void* rsi3;
    int64_t rbp4;
    int32_t ecx5;
    uint1_t cf6;
    int64_t rdx7;
    int64_t rbp8;
    int64_t rdx9;
    int64_t r13_10;

    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsi1) + rbp2 * 4 + 32) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi3) + rbp4 * 4 + 32) + ecx5 + cf6;
    if (rdx7 != rbp8 + 16) 
        goto 0x4023e0;
    if (rdx9 != r13_10) 
        goto 0x401ba9;
    goto 0x401bbe;
}

void fun_402441() {
    unsigned char* rax1;
    int64_t rbp2;
    signed char* rax3;
    int64_t rbp4;
    signed char al5;
    uint1_t cf6;

    rax1[rbp2 * 4] = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(rax3[rbp4 * 4] + al5) + cf6);
}

void fun_402446() {
    void* rax1;
    int64_t rbp2;
    void* rax3;
    int64_t rbp4;
    signed char cl5;
    uint1_t cf6;

    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax1) + rbp2 * 4 + 32) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax3) + rbp4 * 4 + 32) + cl5) + cf6);
}

void fun_40244c() {
    uint32_t* rsi1;
    int64_t rbp2;
    int32_t* rsi3;
    int64_t rbp4;
    int32_t eax5;
    uint1_t cf6;

    rsi1[rbp2] = rsi3[rbp4] + eax5 + cf6;
}

void fun_402451() {
    void* rsi1;
    int64_t rbp2;
    void* rsi3;
    int64_t rbp4;
    int32_t ecx5;
    uint1_t cf6;
    int64_t rdx7;
    int64_t rbp8;
    int64_t rdx9;
    int64_t r13_10;

    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsi1) + rbp2 * 4 + 32) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi3) + rbp4 * 4 + 32) + ecx5 + cf6;
    if (rdx7 != rbp8 + 16) 
        goto 0x402440;
    if (rdx9 != r13_10) 
        goto 0x401c51;
    goto 0x401c6e;
}

void fun_402491() {
    unsigned char* rax1;
    int64_t rbx2;
    signed char* rax3;
    int64_t rbx4;
    signed char al5;
    uint1_t cf6;

    rax1[rbx2 * 4] = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(rax3[rbx4 * 4] + al5) + cf6);
}

void fun_402496() {
    void* rax1;
    int64_t rbx2;
    void* rax3;
    int64_t rbx4;
    signed char cl5;
    uint1_t cf6;

    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax1) + rbx2 * 4 + 32) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax3) + rbx4 * 4 + 32) + cl5) + cf6);
}

void fun_40249c() {
    uint32_t* rsi1;
    int64_t rbx2;
    int32_t* rsi3;
    int64_t rbx4;
    int32_t eax5;
    uint1_t cf6;

    rsi1[rbx2] = rsi3[rbx4] + eax5 + cf6;
}

void fun_4024a1() {
    void* rsi1;
    int64_t rbx2;
    void* rsi3;
    int64_t rbx4;
    int32_t ecx5;
    uint1_t cf6;
    int64_t rdx7;
    int64_t rbx8;
    int64_t rdx9;
    int64_t rbp10;

    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsi1) + rbx2 * 4 + 32) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi3) + rbx4 * 4 + 32) + ecx5 + cf6;
    if (rdx7 != rbx8 + 16) 
        goto 0x402490;
    if (rdx9 != rbp10) 
        goto 0x401cfa;
    goto 0x401d0e;
}

void fun_4024e1() {
    int64_t rax1;
    int64_t rdx2;
    int64_t rax3;
    int64_t rdx4;

    *reinterpret_cast<int32_t*>(rax1 + rdx2 + 4) = *reinterpret_cast<int32_t*>(rax3 + rdx4 + 4) >> 0xffffff9b;
}

void fun_4024e7() {
    int64_t rax1;
    int64_t rdx2;
    int64_t rax3;
    int64_t rdx4;
    uint32_t* rax5;
    int64_t rbx6;
    int32_t* rax7;
    int64_t rbx8;
    int32_t eax9;

    *reinterpret_cast<int32_t*>(rax1 + rdx2 + 76) = *reinterpret_cast<int32_t*>(rax3 + rdx4 + 76) >> 0xffffff9b;
    rax5[rbx6] = reinterpret_cast<uint32_t>(rax7[rbx8] + eax9);
}

void fun_4024f3(int64_t rdi, int64_t rsi) {
    void* rax3;
    int64_t rbx4;
    void* rax5;
    int64_t rbx6;
    int32_t ecx7;
    uint1_t cf8;
    int64_t rbx9;

    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax3) + rbx4 * 4 + 32) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax5) + rbx6 * 4 + 32) + ecx7 + cf8;
    if (rdi != rbx9 + 16) 
        goto 0x4024e0;
    if (rdi != rsi) 
        goto 0x401f03;
    goto 0x401f1e;
}

void fun_40253c() {
    uint1_t zf1;

    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf1))) 
        goto 0x402527;
    __asm__("in eax, dx");
}

void fun_402542() {
    int64_t rax1;
    int64_t rax2;

    *reinterpret_cast<int32_t*>(rax1 - 0x77) = *reinterpret_cast<int32_t*>(rax2 - 0x77) - 1;
    return;
}

void fun_40254f() {
    int64_t rcx1;
    int64_t rdi2;
    int32_t r12d3;
    int64_t* r15_4;
    int64_t rbx5;
    int64_t r13_6;
    int64_t r14_7;
    int64_t rbp8;
    int64_t v9;
    int1_t zf10;

    if (rcx1 - 1) {
        do {
            *reinterpret_cast<int32_t*>(&rdi2) = r12d3;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = 0;
            r15_4[rbx5](rdi2, r13_6, r14_7);
            ++rbx5;
        } while (rbp8 != rbx5);
        goto v9;
    } else {
        __asm__("repne ror byte [rax-0x7b], 1");
        __asm__("ror byte [rax+0xf], 0x49");
        __asm__("fld dword [rcx+0x29]");
        __asm__("xlatb ");
        if (!zf10) 
            goto 0x402530; else 
            goto "???";
    }
}

void fun_402570() {
    uint1_t zf1;

    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf1))) 
        goto 0x402536;
}

void _init();

void fun_402583(int32_t edi, int64_t rsi, int64_t rdx) {
    __asm__("cli ");
    _init();
    if (0) 
        goto 0x4025d6;
}

void fun_4025f3() {
    __asm__("cli ");
    return;
}

void fun_4025fb() {
    __asm__("cli ");
    return;
}

int64_t write = 0x401036;

void fun_401030() {
    goto write;
}

void main() {
}

void fun_4011a7() {
}

void fun_402548() {
}

int64_t g405010 = 0;

void fun_401036() {
    goto g405010;
}

void fun_401046() {
    goto 0x401020;
}
