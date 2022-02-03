
int64_t memcpy = 0x401046;

void fun_401040(uint64_t rdi, int64_t rsi, uint64_t rdx) {
    goto memcpy;
}

int64_t write = 0x401036;

int32_t fun_401030(int64_t rdi, uint64_t rsi) {
    goto write;
}

int64_t deregister_tm_clones() {
    int64_t rax1;

    *reinterpret_cast<int32_t*>(&rax1) = 0x415060;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    if (1 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

int64_t sprintf = 0x401056;

int32_t fun_401050(int64_t rdi, int64_t rsi, uint64_t rdx, uint64_t rcx, uint64_t r8, uint64_t r9, uint64_t a7, uint64_t a8, uint64_t a9, uint64_t a10, uint64_t a11, uint64_t a12, uint64_t a13, uint64_t a14, uint64_t a15, uint64_t a16, uint64_t a17, uint64_t a18, int64_t a19) {
    goto sprintf;
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

void fun_4018b3() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    __asm__("cli ");
    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, 0x4019a0, 0x401a10, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void fun_4018e3() {
    __asm__("cli ");
    return;
}

signed char __TMC_END__ = 0;

int64_t fun_401963() {
    int1_t zf1;
    int64_t rax2;
    int64_t rax3;

    __asm__("cli ");
    zf1 = __TMC_END__ == 0;
    if (!zf1) {
        return rax2;
    } else {
        rax3 = deregister_tm_clones();
        __TMC_END__ = 1;
        return rax3;
    }
}

int64_t fun_401993() {
    __asm__("cli ");
    if (1 || 1) {
        return 0;
    } else {
        goto 0;
    }
}

void _init();

void fun_4019a3(int32_t edi, int64_t rsi, int64_t rdx) {
    int64_t r14_4;
    int64_t r13_5;
    int32_t r12d6;
    int64_t rbx7;
    int64_t rdi8;

    __asm__("cli ");
    r14_4 = rdx;
    r13_5 = rsi;
    r12d6 = edi;
    _init();
    if (!0) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r12d6;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x403e10 + rbx7 * 8)(rdi8, r13_5, r14_4);
            ++rbx7;
        } while (1 != rbx7);
    }
    return;
}

void fun_401a13() {
    __asm__("cli ");
    return;
}

void fun_401a1b() {
    __asm__("cli ");
    return;
}

struct s0 {
    signed char[117] pad117;
    unsigned char f75;
    unsigned char f76;
};

struct s1 {
    signed char[30] pad30;
    unsigned char f1e;
    unsigned char f1f;
};

struct s2 {
    signed char[114] pad114;
    unsigned char f72;
    unsigned char f73;
};

struct s3 {
    signed char[101] pad101;
    unsigned char f65;
    unsigned char f66;
};

struct s4 {
    signed char[93] pad93;
    unsigned char f5d;
    unsigned char f5e;
};

struct s5 {
    signed char[90] pad90;
    unsigned char f5a;
    unsigned char f5b;
};

struct s6 {
    signed char[78] pad78;
    unsigned char f4e;
    unsigned char f4f;
};

struct s7 {
    signed char[75] pad75;
    unsigned char f4b;
    unsigned char f4c;
};

struct s8 {
    signed char[67] pad67;
    unsigned char f43;
    unsigned char f44;
};

struct s9 {
    signed char[51] pad51;
    unsigned char f33;
    unsigned char f34;
};

struct s10 {
    signed char[38] pad38;
    unsigned char f26;
    unsigned char f27;
};

struct s11 {
    unsigned char f0;
    signed char f1;
};

struct s12 {
    signed char[15] pad15;
    unsigned char ff;
    unsigned char f10;
};

struct s13 {
    signed char[12] pad12;
    unsigned char fc;
    unsigned char fd;
};

struct s14 {
    unsigned char f0;
    signed char f1;
};

struct s15 {
    signed char f0;
    signed char f1;
};

struct s16 {
    unsigned char f0;
    signed char f1;
};

struct s17 {
    unsigned char f0;
    signed char f1;
};

struct s18 {
    unsigned char f0;
    signed char f1;
};

struct s19 {
    unsigned char f0;
    signed char f1;
};

struct s20 {
    unsigned char f0;
    signed char f1;
};

struct s21 {
    unsigned char f0;
    signed char f1;
};

struct s22 {
    unsigned char f0;
    signed char f1;
};

struct s23 {
    unsigned char f0;
    signed char f1;
};

struct s24 {
    unsigned char f0;
    signed char f1;
};

struct s25 {
    unsigned char f0;
    signed char f1;
};

struct s26 {
    unsigned char f0;
    signed char f1;
};

struct s27 {
    unsigned char f0;
    signed char f1;
};

struct s28 {
    unsigned char f0;
    signed char f1;
};

void fun_4011ec() {
    int64_t v1;
    int64_t v2;
    int64_t rbp3;
    struct s0* v4;
    struct s1* r14_5;
    struct s2* v6;
    struct s2* tmp64_7;
    struct s3* v8;
    struct s4* v9;
    struct s5* v10;
    struct s6* v11;
    struct s6* tmp64_12;
    struct s7* v13;
    struct s8* v14;
    struct s9* v15;
    struct s10* v16;
    struct s11* v17;
    struct s12* v18;
    struct s13* v19;
    uint64_t rdx20;
    uint64_t v21;
    uint64_t rax22;
    int32_t eax23;
    uint64_t rdx24;
    uint64_t rbx25;
    uint64_t v26;
    uint64_t r15_27;
    uint64_t r12_28;
    struct s14* v29;
    struct s15* v30;
    struct s16* v31;
    struct s17* v32;
    struct s18* v33;
    struct s19* v34;
    struct s20* v35;
    struct s21* v36;
    struct s22* v37;
    struct s23* v38;
    uint64_t rdi39;
    uint64_t r13_40;
    uint32_t edx41;
    uint32_t edx42;
    struct s24* rax43;
    uint32_t edx44;
    struct s13* rax45;
    uint32_t edx46;
    uint32_t edx47;
    uint32_t edx48;
    uint32_t edx49;
    struct s12* rax50;
    uint32_t edx51;
    uint32_t edx52;
    struct s25* rax53;
    uint32_t edx54;
    uint32_t edx55;
    uint32_t edx56;
    uint32_t edx57;
    struct s26* rax58;
    uint32_t edx59;
    uint64_t rbx60;
    int32_t eax61;
    uint32_t edx62;
    uint32_t edx63;
    uint32_t edx64;
    uint32_t edx65;
    struct s27* rax66;
    uint32_t edx67;
    struct s10* rax68;
    uint32_t edx69;
    uint32_t edx70;
    uint32_t edx71;
    uint32_t edx72;
    struct s11* rax73;
    uint32_t edx74;
    struct s9* rcx75;
    uint32_t edx76;
    uint32_t eax77;
    uint32_t edx78;
    uint32_t eax79;
    struct s14* rax80;
    uint32_t eax81;
    uint32_t eax82;
    uint32_t edx83;
    struct s28* rax84;
    uint32_t edx85;
    uint32_t edx86;
    struct s8* rsi87;
    uint32_t eax88;
    uint32_t eax89;
    uint32_t edx90;
    uint32_t eax91;
    struct s16* rax92;
    struct s7* rdi93;
    uint32_t eax94;
    uint32_t eax95;
    uint32_t edx96;
    uint32_t eax97;
    struct s15* rax98;
    uint32_t edx99;
    struct s6* rcx100;
    uint32_t eax101;
    uint32_t eax102;
    uint32_t edx103;
    uint32_t eax104;
    struct s18* rax105;
    struct s5* rbx106;
    uint32_t eax107;
    uint32_t eax108;
    uint32_t edx109;
    uint32_t eax110;
    struct s17* rax111;
    uint32_t edx112;
    struct s4* rsi113;
    uint32_t eax114;
    uint32_t eax115;
    uint32_t edx116;
    uint32_t eax117;
    struct s19* rax118;
    struct s3* rdi119;
    uint32_t eax120;
    uint32_t eax121;
    uint32_t edx122;
    uint32_t eax123;
    struct s20* rax124;
    uint32_t edx125;
    struct s2* rcx126;
    uint32_t eax127;
    uint32_t eax128;
    uint32_t edx129;
    uint32_t eax130;
    struct s21* rax131;
    struct s0* rbx132;
    uint32_t eax133;
    uint32_t eax134;
    uint32_t edx135;
    uint32_t eax136;
    struct s22* rax137;
    uint32_t edx138;
    uint32_t edx139;
    uint32_t eax140;
    struct s23* rax141;
    uint32_t edx142;
    uint32_t edx143;
    uint32_t edx144;
    uint32_t edx145;
    uint32_t edx146;
    uint32_t edx147;
    uint32_t edx148;
    uint64_t rdx149;
    uint32_t edx150;
    uint32_t eax151;

    v1 = reinterpret_cast<int64_t>(__return_address());
    goto addr_4011f0_2;
    addr_401872_3:
    goto v2;
    while (++rbp3, v4 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(v4) + 16), r14_5 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(r14_5) + 5), v6 = tmp64_7, v8 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(v8) + 14), v9 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(v9) + 13), v10 = reinterpret_cast<struct s5*>(reinterpret_cast<int64_t>(v10) + 12), v11 = tmp64_12, v13 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(v13) + 10), v14 = reinterpret_cast<struct s8*>(reinterpret_cast<int64_t>(v14) + 9), v15 = reinterpret_cast<struct s9*>(reinterpret_cast<int64_t>(v15) + 7), v16 = reinterpret_cast<struct s10*>(reinterpret_cast<int64_t>(v16) + 6), v17 = v17 + 2, v18 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(v18) + 3), v19 = reinterpret_cast<struct s13*>(reinterpret_cast<int64_t>(v19) + 2), rbp3 != 19) {
        rdx20 = v21 + 2;
        rax22 = v21 + 1;
        eax23 = fun_401050(0x415080, "Buzz\n%llu1\nFizz\n%llu3\n%llu4\nFizzBuzz\n%llu6\n%llu7\nFizz\n%llu9\nBuzz\nFizz\n%llu2\n%llu3\nFizz\nBuzz\n%llu6\nFizz\n%llu8\n%llu9\nFizzBuzz\n%llu1\n%llu2\nFizz\n%llu4\nBuzz\nFizz\n%llu7\n%llu8\nFizz\n", v21, v21, v21, v21, v21, v21, rax22, rax22, rax22, rax22, rax22, rdx20, rdx20, rdx20, rdx20, rdx20, v1);
        rdx24 = v21 + v21 * 4;
        rbx25 = rdx24 + rdx24;
        v26 = rbx25;
        v21 = rbx25;
        if (rbx25 <= r15_27) 
            continue;
        r12_28 = reinterpret_cast<uint64_t>(static_cast<int64_t>(eax23));
        v29 = reinterpret_cast<struct s14*>(&v15->f33);
        v30 = reinterpret_cast<struct s15*>(rbp3 * 8 + 0x4150b6);
        v31 = reinterpret_cast<struct s16*>(&v14->f43);
        v32 = reinterpret_cast<struct s17*>(&v13->f4b);
        v33 = reinterpret_cast<struct s18*>(&v11->f4e);
        v34 = reinterpret_cast<struct s19*>(&v9->f5d);
        v35 = reinterpret_cast<struct s20*>(&v10->f5a);
        v36 = reinterpret_cast<struct s21*>(&v6->f72);
        v37 = reinterpret_cast<struct s22*>(&v8->f65);
        v38 = reinterpret_cast<struct s23*>(&v4->f75);
        while (1) {
            do {
                rdi39 = r13_40;
                r13_40 = r13_40 + r12_28;
                fun_401040(rdi39, 0x415080, r12_28);
                if (r13_40 < 0x414060) {
                    addr_4011f0_2:
                    edx41 = *reinterpret_cast<unsigned char*>(rbp3 + 0x415085);
                    if (*reinterpret_cast<signed char*>(&edx41) > 54) {
                        addr_4013fb_8:
                        edx42 = edx41 - 7;
                        rax43 = reinterpret_cast<struct s24*>(rbp3 + 0x415084);
                        *reinterpret_cast<unsigned char*>(rbp3 + 0x415085) = *reinterpret_cast<unsigned char*>(&edx42);
                        edx44 = *reinterpret_cast<unsigned char*>(rbp3 + 0x415084);
                        if (*reinterpret_cast<signed char*>(&edx44) == 57) {
                            do {
                                edx44 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax43) - 1);
                                rax43 = reinterpret_cast<struct s24*>(reinterpret_cast<int64_t>(rax43) - 1);
                                rax43->f1 = 48;
                            } while (*reinterpret_cast<signed char*>(&edx44) == 57);
                        }
                    } else {
                        addr_401200_11:
                        rax45 = v19;
                        edx46 = edx41 + 3;
                        *reinterpret_cast<unsigned char*>(rbp3 + 0x415085) = *reinterpret_cast<unsigned char*>(&edx46);
                        edx47 = rax45->fd;
                        if (*reinterpret_cast<signed char*>(&edx47) > 54) 
                            goto addr_401446_12; else 
                            goto addr_40121b_13;
                    }
                    edx48 = edx44 + 1;
                    rax43->f0 = *reinterpret_cast<unsigned char*>(&edx48);
                    rax45 = v19;
                    edx47 = rax45->fd;
                    if (*reinterpret_cast<signed char*>(&edx47) <= 54) {
                        addr_40121b_13:
                        edx49 = edx47 + 3;
                        rax45->fd = *reinterpret_cast<unsigned char*>(&edx49);
                        rax50 = v18;
                        edx51 = rax50->f10;
                        if (*reinterpret_cast<signed char*>(&edx51) > 54) {
                            addr_401486_15:
                            edx52 = edx51 - 7;
                            rax53 = reinterpret_cast<struct s25*>(&rax50->ff);
                            rax50->f10 = *reinterpret_cast<unsigned char*>(&edx52);
                            edx54 = rax50->ff;
                            if (*reinterpret_cast<signed char*>(&edx54) == 57) {
                                do {
                                    edx54 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax53) - 1);
                                    rax53 = reinterpret_cast<struct s25*>(reinterpret_cast<int64_t>(rax53) - 1);
                                    rax53->f1 = 48;
                                } while (*reinterpret_cast<signed char*>(&edx54) == 57);
                            }
                        } else {
                            addr_401233_18:
                            edx55 = edx51 + 3;
                            rax50->f10 = *reinterpret_cast<unsigned char*>(&edx55);
                            edx56 = *reinterpret_cast<unsigned char*>(rbp3 * 4 + 0x41509c);
                            if (*reinterpret_cast<signed char*>(&edx56) > 54) 
                                goto addr_4014c5_19; else 
                                goto addr_40124a_20;
                        }
                    } else {
                        addr_401446_12:
                        edx57 = edx47 - 7;
                        rax58 = reinterpret_cast<struct s26*>(&rax45->fc);
                        rax45->fd = *reinterpret_cast<unsigned char*>(&edx57);
                        edx59 = rax45->fc;
                        if (*reinterpret_cast<signed char*>(&edx59) == 57) {
                            do {
                                edx59 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax58) - 1);
                                rax58 = reinterpret_cast<struct s26*>(reinterpret_cast<int64_t>(rax58) - 1);
                                rax58->f1 = 48;
                            } while (*reinterpret_cast<signed char*>(&edx59) == 57);
                            goto addr_401470_23;
                        }
                    }
                } else {
                    *reinterpret_cast<int32_t*>(&rbx60) = reinterpret_cast<int32_t>("1\n2\nFizz\n4\nBuzz\nFizz\n7\n8\nFizz\n");
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx60) + 4) = 0;
                    while (1) {
                        eax61 = fun_401030(1, rbx60);
                        if (reinterpret_cast<uint1_t>(eax61 < 0) | reinterpret_cast<uint1_t>(eax61 == 0)) {
                            if (rbx60 >= 0x414060) 
                                goto addr_40189d_27;
                        } else {
                            rbx60 = rbx60 + static_cast<int64_t>(eax61);
                            if (rbx60 >= 0x414060) 
                                goto addr_4013cb_29;
                        }
                    }
                }
                edx62 = edx54 + 1;
                rax53->f0 = *reinterpret_cast<unsigned char*>(&edx62);
                edx56 = *reinterpret_cast<unsigned char*>(rbp3 * 4 + 0x41509c);
                if (*reinterpret_cast<signed char*>(&edx56) <= 54) {
                    addr_40124a_20:
                    edx63 = edx56 + 3;
                    *reinterpret_cast<signed char*>(rbp3 * 4 + 0x41509c) = *reinterpret_cast<signed char*>(&edx63);
                    edx64 = r14_5->f1f;
                    if (*reinterpret_cast<signed char*>(&edx64) > 54) {
                        addr_401502_31:
                        edx65 = edx64 - 7;
                        rax66 = reinterpret_cast<struct s27*>(&r14_5->f1e);
                        r14_5->f1f = *reinterpret_cast<unsigned char*>(&edx65);
                        edx67 = r14_5->f1e;
                        if (*reinterpret_cast<signed char*>(&edx67) == 57) {
                            do {
                                edx67 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax66) - 1);
                                rax66 = reinterpret_cast<struct s27*>(reinterpret_cast<int64_t>(rax66) - 1);
                                rax66->f1 = 48;
                            } while (*reinterpret_cast<signed char*>(&edx67) == 57);
                        }
                    } else {
                        addr_401262_34:
                        rax68 = v16;
                        edx69 = edx64 + 3;
                        r14_5->f1f = *reinterpret_cast<unsigned char*>(&edx69);
                        edx70 = rax68->f27;
                        if (*reinterpret_cast<signed char*>(&edx70) > 54) 
                            goto addr_401546_35; else 
                            goto addr_40127b_36;
                    }
                } else {
                    addr_4014c5_19:
                    edx71 = edx56 - 7;
                    *reinterpret_cast<signed char*>(rbp3 * 4 + 0x41509c) = *reinterpret_cast<signed char*>(&edx71);
                    edx72 = v17->f0;
                    rax73 = v17;
                    if (*reinterpret_cast<signed char*>(&edx72) == 57) {
                        do {
                            edx72 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax73) - 1);
                            rax73 = reinterpret_cast<struct s11*>(reinterpret_cast<int64_t>(rax73) - 1);
                            rax73->f1 = 48;
                        } while (*reinterpret_cast<signed char*>(&edx72) == 57);
                        goto addr_4014f0_39;
                    }
                }
                edx74 = edx67 + 1;
                rax66->f0 = *reinterpret_cast<unsigned char*>(&edx74);
                rax68 = v16;
                edx70 = rax68->f27;
                if (*reinterpret_cast<signed char*>(&edx70) <= 54) {
                    addr_40127b_36:
                    rcx75 = v15;
                    edx76 = edx70 + 3;
                    rax68->f27 = *reinterpret_cast<unsigned char*>(&edx76);
                    eax77 = rcx75->f34;
                    if (*reinterpret_cast<signed char*>(&eax77) > 54) {
                        addr_401585_41:
                        edx78 = rcx75->f33;
                        eax79 = eax77 - 7;
                        rcx75->f34 = *reinterpret_cast<unsigned char*>(&eax79);
                        rax80 = v29;
                        if (*reinterpret_cast<signed char*>(&edx78) == 57) {
                            do {
                                edx78 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax80) - 1);
                                rax80 = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(rax80) - 1);
                                rax80->f1 = 48;
                            } while (*reinterpret_cast<signed char*>(&edx78) == 57);
                        }
                    } else {
                        addr_401292_44:
                        eax81 = eax77 + 3;
                        rcx75->f34 = *reinterpret_cast<unsigned char*>(&eax81);
                        eax82 = *reinterpret_cast<unsigned char*>(rbp3 * 8 + 0x4150b7);
                        if (*reinterpret_cast<signed char*>(&eax82) > 54) 
                            goto addr_4015c4_45; else 
                            goto addr_4012a8_46;
                    }
                } else {
                    addr_401546_35:
                    edx83 = edx70 - 7;
                    rax84 = reinterpret_cast<struct s28*>(&rax68->f26);
                    rax68->f27 = *reinterpret_cast<unsigned char*>(&edx83);
                    edx85 = rax68->f26;
                    if (*reinterpret_cast<signed char*>(&edx85) == 57) {
                        do {
                            edx85 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax84) - 1);
                            rax84 = reinterpret_cast<struct s28*>(reinterpret_cast<int64_t>(rax84) - 1);
                            rax84->f1 = 48;
                        } while (*reinterpret_cast<signed char*>(&edx85) == 57);
                        goto addr_401570_49;
                    }
                }
                edx86 = edx78 + 1;
                rax80->f0 = *reinterpret_cast<unsigned char*>(&edx86);
                eax82 = *reinterpret_cast<unsigned char*>(rbp3 * 8 + 0x4150b7);
                if (*reinterpret_cast<signed char*>(&eax82) <= 54) {
                    addr_4012a8_46:
                    rsi87 = v14;
                    eax88 = eax82 + 3;
                    *reinterpret_cast<signed char*>(rbp3 * 8 + 0x4150b7) = *reinterpret_cast<signed char*>(&eax88);
                    eax89 = rsi87->f44;
                    if (*reinterpret_cast<signed char*>(&eax89) > 54) {
                        addr_401615_51:
                        edx90 = rsi87->f43;
                        eax91 = eax89 - 7;
                        rsi87->f44 = *reinterpret_cast<unsigned char*>(&eax91);
                        rax92 = v31;
                        if (*reinterpret_cast<signed char*>(&edx90) == 57) {
                            do {
                                edx90 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax92) - 1);
                                rax92 = reinterpret_cast<struct s16*>(reinterpret_cast<int64_t>(rax92) - 1);
                                rax92->f1 = 48;
                            } while (*reinterpret_cast<signed char*>(&edx90) == 57);
                        }
                    } else {
                        addr_4012c3_54:
                        rdi93 = v13;
                        eax94 = eax89 + 3;
                        rsi87->f44 = *reinterpret_cast<unsigned char*>(&eax94);
                        eax95 = rdi93->f4c;
                        if (*reinterpret_cast<signed char*>(&eax95) > 54) 
                            goto addr_401655_55; else 
                            goto addr_4012da_56;
                    }
                } else {
                    addr_4015c4_45:
                    edx96 = *reinterpret_cast<unsigned char*>(rbp3 * 8 + 0x4150b6);
                    eax97 = eax82 - 7;
                    *reinterpret_cast<signed char*>(rbp3 * 8 + 0x4150b7) = *reinterpret_cast<signed char*>(&eax97);
                    rax98 = v30;
                    if (*reinterpret_cast<signed char*>(&edx96) == 57) {
                        do {
                            edx96 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax98) - 1);
                            rax98 = reinterpret_cast<struct s15*>(reinterpret_cast<int64_t>(rax98) - 1);
                            rax98->f1 = 48;
                        } while (*reinterpret_cast<signed char*>(&edx96) == 57);
                        goto addr_401600_59;
                    }
                }
                rdi93 = v13;
                edx99 = edx90 + 1;
                rax92->f0 = *reinterpret_cast<unsigned char*>(&edx99);
                eax95 = rdi93->f4c;
                if (*reinterpret_cast<signed char*>(&eax95) <= 54) {
                    addr_4012da_56:
                    rcx100 = v11;
                    eax101 = eax95 + 3;
                    rdi93->f4c = *reinterpret_cast<unsigned char*>(&eax101);
                    eax102 = rcx100->f4f;
                    if (*reinterpret_cast<signed char*>(&eax102) > 54) {
                        addr_401695_61:
                        edx103 = rcx100->f4e;
                        eax104 = eax102 - 7;
                        rcx100->f4f = *reinterpret_cast<unsigned char*>(&eax104);
                        rax105 = v33;
                        if (*reinterpret_cast<signed char*>(&edx103) == 57) {
                            do {
                                edx103 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax105) - 1);
                                rax105 = reinterpret_cast<struct s18*>(reinterpret_cast<int64_t>(rax105) - 1);
                                rax105->f1 = 48;
                            } while (*reinterpret_cast<signed char*>(&edx103) == 57);
                        }
                    } else {
                        addr_4012f1_64:
                        rbx106 = v10;
                        eax107 = eax102 + 3;
                        rcx100->f4f = *reinterpret_cast<unsigned char*>(&eax107);
                        eax108 = rbx106->f5b;
                        if (*reinterpret_cast<signed char*>(&eax108) > 54) 
                            goto addr_4016d5_65; else 
                            goto addr_401308_66;
                    }
                } else {
                    addr_401655_55:
                    edx109 = rdi93->f4b;
                    eax110 = eax95 - 7;
                    rdi93->f4c = *reinterpret_cast<unsigned char*>(&eax110);
                    rax111 = v32;
                    if (*reinterpret_cast<signed char*>(&edx109) == 57) {
                        do {
                            edx109 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax111) - 1);
                            rax111 = reinterpret_cast<struct s17*>(reinterpret_cast<int64_t>(rax111) - 1);
                            rax111->f1 = 48;
                        } while (*reinterpret_cast<signed char*>(&edx109) == 57);
                        goto addr_401680_69;
                    }
                }
                rbx106 = v10;
                edx112 = edx103 + 1;
                rax105->f0 = *reinterpret_cast<unsigned char*>(&edx112);
                eax108 = rbx106->f5b;
                if (*reinterpret_cast<signed char*>(&eax108) <= 54) {
                    addr_401308_66:
                    rsi113 = v9;
                    eax114 = eax108 + 3;
                    rbx106->f5b = *reinterpret_cast<unsigned char*>(&eax114);
                    eax115 = rsi113->f5e;
                    if (*reinterpret_cast<signed char*>(&eax115) > 54) {
                        addr_401715_71:
                        edx116 = rsi113->f5d;
                        eax117 = eax115 - 7;
                        rsi113->f5e = *reinterpret_cast<unsigned char*>(&eax117);
                        rax118 = v34;
                        if (*reinterpret_cast<signed char*>(&edx116) == 57) {
                            do {
                                edx116 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax118) - 1);
                                rax118 = reinterpret_cast<struct s19*>(reinterpret_cast<int64_t>(rax118) - 1);
                                rax118->f1 = 48;
                            } while (*reinterpret_cast<signed char*>(&edx116) == 57);
                        }
                    } else {
                        addr_40131f_74:
                        rdi119 = v8;
                        eax120 = eax115 + 3;
                        rsi113->f5e = *reinterpret_cast<unsigned char*>(&eax120);
                        eax121 = rdi119->f66;
                        if (*reinterpret_cast<signed char*>(&eax121) > 54) 
                            goto addr_401755_75; else 
                            goto addr_401336_76;
                    }
                } else {
                    addr_4016d5_65:
                    edx122 = rbx106->f5a;
                    eax123 = eax108 - 7;
                    rbx106->f5b = *reinterpret_cast<unsigned char*>(&eax123);
                    rax124 = v35;
                    if (*reinterpret_cast<signed char*>(&edx122) == 57) {
                        do {
                            edx122 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax124) - 1);
                            rax124 = reinterpret_cast<struct s20*>(reinterpret_cast<int64_t>(rax124) - 1);
                            rax124->f1 = 48;
                        } while (*reinterpret_cast<signed char*>(&edx122) == 57);
                        goto addr_401700_79;
                    }
                }
                rdi119 = v8;
                edx125 = edx116 + 1;
                rax118->f0 = *reinterpret_cast<unsigned char*>(&edx125);
                eax121 = rdi119->f66;
                if (*reinterpret_cast<signed char*>(&eax121) <= 54) {
                    addr_401336_76:
                    rcx126 = v6;
                    eax127 = eax121 + 3;
                    rdi119->f66 = *reinterpret_cast<unsigned char*>(&eax127);
                    eax128 = rcx126->f73;
                    if (*reinterpret_cast<signed char*>(&eax128) > 54) {
                        addr_401795_81:
                        edx129 = rcx126->f72;
                        eax130 = eax128 - 7;
                        rcx126->f73 = *reinterpret_cast<unsigned char*>(&eax130);
                        rax131 = v36;
                        if (*reinterpret_cast<signed char*>(&edx129) == 57) {
                            do {
                                edx129 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax131) - 1);
                                rax131 = reinterpret_cast<struct s21*>(reinterpret_cast<int64_t>(rax131) - 1);
                                rax131->f1 = 48;
                            } while (*reinterpret_cast<signed char*>(&edx129) == 57);
                        }
                    } else {
                        addr_40134d_84:
                        rbx132 = v4;
                        eax133 = eax128 + 3;
                        rcx126->f73 = *reinterpret_cast<unsigned char*>(&eax133);
                        eax134 = rbx132->f76;
                        if (*reinterpret_cast<signed char*>(&eax134) > 54) 
                            goto addr_4017d5_85; else 
                            break;
                    }
                } else {
                    addr_401755_75:
                    edx135 = rdi119->f65;
                    eax136 = eax121 - 7;
                    rdi119->f66 = *reinterpret_cast<unsigned char*>(&eax136);
                    rax137 = v37;
                    if (*reinterpret_cast<signed char*>(&edx135) == 57) {
                        do {
                            edx135 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax137) - 1);
                            rax137 = reinterpret_cast<struct s22*>(reinterpret_cast<int64_t>(rax137) - 1);
                            rax137->f1 = 48;
                        } while (*reinterpret_cast<signed char*>(&edx135) == 57);
                        goto addr_401780_88;
                    }
                }
                rbx132 = v4;
                edx138 = edx129 + 1;
                rax131->f0 = *reinterpret_cast<unsigned char*>(&edx138);
                eax134 = rbx132->f76;
                if (*reinterpret_cast<signed char*>(&eax134) <= 54) 
                    break;
                addr_4017d5_85:
                edx139 = rbx132->f75;
                eax140 = eax134 - 7;
                rbx132->f76 = *reinterpret_cast<unsigned char*>(&eax140);
                rax141 = v38;
                if (*reinterpret_cast<signed char*>(&edx139) == 57) {
                    do {
                        edx139 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax141) - 1);
                        rax141 = reinterpret_cast<struct s23*>(reinterpret_cast<int64_t>(rax141) - 1);
                        rax141->f1 = 48;
                    } while (*reinterpret_cast<signed char*>(&edx139) == 57);
                    continue;
                }
                addr_401780_88:
                rcx126 = v6;
                edx142 = edx135 + 1;
                rax137->f0 = *reinterpret_cast<unsigned char*>(&edx142);
                eax128 = rcx126->f73;
                if (*reinterpret_cast<signed char*>(&eax128) <= 54) 
                    goto addr_40134d_84; else 
                    goto addr_401795_81;
                addr_401700_79:
                rsi113 = v9;
                edx143 = edx122 + 1;
                rax124->f0 = *reinterpret_cast<unsigned char*>(&edx143);
                eax115 = rsi113->f5e;
                if (*reinterpret_cast<signed char*>(&eax115) <= 54) 
                    goto addr_40131f_74; else 
                    goto addr_401715_71;
                addr_401680_69:
                rcx100 = v11;
                edx144 = edx109 + 1;
                rax111->f0 = *reinterpret_cast<unsigned char*>(&edx144);
                eax102 = rcx100->f4f;
                if (*reinterpret_cast<signed char*>(&eax102) <= 54) 
                    goto addr_4012f1_64; else 
                    goto addr_401695_61;
                addr_401600_59:
                rsi87 = v14;
                edx145 = edx96 + 1;
                rax98->f0 = *reinterpret_cast<signed char*>(&edx145);
                eax89 = rsi87->f44;
                if (*reinterpret_cast<signed char*>(&eax89) <= 54) 
                    goto addr_4012c3_54; else 
                    goto addr_401615_51;
                addr_401570_49:
                rcx75 = v15;
                edx146 = edx85 + 1;
                rax84->f0 = *reinterpret_cast<unsigned char*>(&edx146);
                eax77 = rcx75->f34;
                if (*reinterpret_cast<signed char*>(&eax77) <= 54) 
                    goto addr_401292_44; else 
                    goto addr_401585_41;
                addr_4014f0_39:
                edx147 = edx72 + 1;
                rax73->f0 = *reinterpret_cast<unsigned char*>(&edx147);
                edx64 = r14_5->f1f;
                if (*reinterpret_cast<signed char*>(&edx64) <= 54) 
                    goto addr_401262_34; else 
                    goto addr_401502_31;
                addr_401470_23:
                edx148 = edx59 + 1;
                rax58->f0 = *reinterpret_cast<unsigned char*>(&edx148);
                rax50 = v18;
                edx51 = rax50->f10;
                if (*reinterpret_cast<signed char*>(&edx51) <= 54) 
                    goto addr_401233_18; else 
                    goto addr_401486_15;
                addr_40189d_27:
                addr_4013cb_29:
                rdx149 = r13_40;
                r13_40 = r13_40 - 0x10000;
                fun_401040("1\n2\nFizz\n4\nBuzz\nFizz\n7\n8\nFizz\n", 0x414060, rdx149 - 0x414060);
                edx41 = *reinterpret_cast<unsigned char*>(rbp3 + 0x415085);
                if (*reinterpret_cast<signed char*>(&edx41) <= 54) 
                    goto addr_401200_11; else 
                    goto addr_4013fb_8;
                edx150 = edx139 + 1;
                r15_27 = r15_27 + 3;
                rax141->f0 = *reinterpret_cast<unsigned char*>(&edx150);
            } while (v26 > r15_27);
            break;
            eax151 = eax134 + 3;
            r15_27 = r15_27 + 3;
            rbx132->f76 = *reinterpret_cast<unsigned char*>(&eax151);
            if (v26 <= r15_27) 
                break;
        }
    }
    goto addr_401872_3;
}

int64_t g404010 = 0;

void fun_401046() {
    goto g404010;
}

void fun_401036() {
    goto 0x401020;
}

void fun_401056() {
    goto 0x401020;
}

void main() {
}
