
void call_weak_fn();

void _init() {
    call_weak_fn();
    return;
}

int32_t raise = 0x8288;

uint32_t raise(int32_t r0) {
    int32_t pc2;

    pc2 = raise;
    goto pc2;
}

/* $d */
int32_t d = 0x8510;

int32_t g8328 = 28;

int32_t __gmon_start__ = 0x8288;

void call_weak_fn() {
    int32_t r3_1;
    int32_t r2_2;
    int32_t pc3;

    r3_1 = d;
    r2_2 = g8328;
    if (!*reinterpret_cast<int32_t*>(0x8318 + r3_1 + r2_2)) {
        return;
    } else {
        pc3 = __gmon_start__;
        goto pc3;
    }
}

/* $d */
int32_t d = 0x10853;

void deregister_tm_clones() {
    int32_t r3_1;

    r3_1 = d;
    if (reinterpret_cast<uint32_t>(r3_1 - 0x10850) <= 6) {
        return;
    } else {
        if (1) {
            return;
        } else {
            goto 0;
        }
    }
}

/* .divsi3_skip_div0_test */
uint32_t divsi3_skip_div0_test(uint32_t r0, uint32_t r1) {
    uint32_t r12_3;
    int1_t n4;
    uint32_t r2_5;
    int1_t n6;
    uint32_t r3_7;
    int1_t z8;
    uint32_t r2_9;
    int1_t z10;
    uint32_t r0_11;

    r12_3 = r0 ^ r1;
    if (n4) {
        r1 = -r1;
    }
    r2_5 = r1 - 1;
    n6 = reinterpret_cast<int32_t>(r2_5) < reinterpret_cast<int32_t>(0);
    if (!r2_5) {
        __asm__("teq ip, r0");
        if (!n6) 
            goto addr_864c_6;
    } else {
        r3_7 = r0;
        if (n6) {
            r3_7 = -r0;
        }
        z8 = r3_7 == r1;
        if (r3_7 <= r1) 
            goto label_10; else 
            goto addr_8490_11;
    }
    r0 = -r0;
    addr_864c_6:
    return r0;
    label_10:
    if (r3_7 < r1) 
        goto addr_8654_14;
    r0 = 0;
    addr_8654_14:
    if (z8) {
        r0 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(r12_3) >> 31);
    }
    if (z8) {
        r0 = r0 | 1;
    }
    return r0;
    addr_8490_11:
    if (r1 & r2_5) {
        __asm__("clz r2, r3");
        __asm__("clz r0, r1");
        r2_9 = 31 - (r0 - r2_5);
        z10 = r2_9 == 0;
        if (!z10) {
            r2_9 = r2_9 + (r2_9 << 1);
        }
        if (!z10) {
            goto 0x84b8 + (r2_9 << 2);
        } else {
            __asm__("nop ");
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 31) {
                r3_7 = r3_7 - (r1 << 31);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 30) {
                r3_7 = r3_7 - (r1 << 30);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 29) {
                r3_7 = r3_7 - (r1 << 29);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 28) {
                r3_7 = r3_7 - (r1 << 28);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 27) {
                r3_7 = r3_7 - (r1 << 27);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 26) {
                r3_7 = r3_7 - (r1 << 26);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 25) {
                r3_7 = r3_7 - (r1 << 25);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 24) {
                r3_7 = r3_7 - (r1 << 24);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 23) {
                r3_7 = r3_7 - (r1 << 23);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 22) {
                r3_7 = r3_7 - (r1 << 22);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 21) {
                r3_7 = r3_7 - (r1 << 21);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 20) {
                r3_7 = r3_7 - (r1 << 20);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 19) {
                r3_7 = r3_7 - (r1 << 19);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 18) {
                r3_7 = r3_7 - (r1 << 18);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 17) {
                r3_7 = r3_7 - (r1 << 17);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 16) {
                r3_7 = r3_7 - (r1 << 16);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 15) {
                r3_7 = r3_7 - (r1 << 15);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 14) {
                r3_7 = r3_7 - (r1 << 14);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 13) {
                r3_7 = r3_7 - (r1 << 13);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 12) {
                r3_7 = r3_7 - (r1 << 12);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 11) {
                r3_7 = r3_7 - (r1 << 11);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 10) {
                r3_7 = r3_7 - (r1 << 10);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 9) {
                r3_7 = r3_7 - (r1 << 9);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 8) {
                r3_7 = r3_7 - (r1 << 8);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 7) {
                r3_7 = r3_7 - (r1 << 7);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 6) {
                r3_7 = r3_7 - (r1 << 6);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 5) {
                r3_7 = r3_7 - (r1 << 5);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 4) {
                r3_7 = r3_7 - (r1 << 4);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 3) {
                r3_7 = r3_7 - (r1 << 3);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 2) {
                r3_7 = r3_7 - (r1 << 2);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1 << 1) {
                r3_7 = r3_7 - (r1 << 1);
            }
            __asm__("adc r0, r0, r0");
            if (r3_7 < r1) {
            }
            if (__intrinsic()) {
            }
            return 0;
        }
    }
    __asm__("clz r2, r1");
    r0_11 = r3_7;
    if (!__intrinsic()) 
        goto addr_8674_93;
    r0_11 = -r0_11;
    addr_8674_93:
    return r0_11;
}

int32_t __libc_start_main = 0x8288;

void __libc_start_main(int32_t r0, int32_t r1) {
    int32_t pc3;

    pc3 = __libc_start_main;
    goto pc3;
}

uint32_t __aeabi_idivmod(uint32_t r0, uint32_t r1);

uint32_t gcd(uint32_t r0, uint32_t r1) {
    uint32_t r0_3;
    uint32_t r3_4;

    if (r1) {
        __aeabi_idivmod(r0, r1);
        r0_3 = gcd(r1, r1);
        r3_4 = r0_3;
    } else {
        r3_4 = r0;
    }
    return r3_4;
}

uint32_t __aeabi_idivmod(uint32_t r0, uint32_t r1) {
    uint32_t r0_3;
    uint32_t r0_4;

    if (r1) {
        r0_3 = divsi3_skip_div0_test(r0, r1);
        return r0_3;
    }
    if (reinterpret_cast<int32_t>(r0) <= reinterpret_cast<int32_t>(0)) 
        goto addr_8680_5;
    addr_8680_5:
    if (reinterpret_cast<int32_t>(r0) < reinterpret_cast<int32_t>(0)) {
    }
    r0_4 = raise(8);
    return r0_4;
}

int32_t abort = 0x8288;

int16_t* abort() {
    int32_t pc1;

    pc1 = abort;
    goto pc1;
}

/* $d */
int32_t d = 0x8590;

/* $d */
void d(int32_t r0);

/* $a */
void a() {
    int32_t lr1;

    lr1 = d;
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(d) + lr1 + 8);
}

/* $d */
void d(int32_t r0) {
    int1_t z2;
    int1_t z3;

    if (z2) {
    }
    if (!z3) 
        goto "???";
}

/* $d */
int32_t d() {
    int1_t z1;
    int1_t z2;

    if (z1) {
    }
    if (z2) {
        return 0x10850;
    } else {
        if (1) {
            return 0x10850;
        } else {
            goto 0;
        }
    }
}

unsigned char __TMC_END__ = 0;

void __do_global_dtors_aux() {
    uint32_t r3_1;

    r3_1 = __TMC_END__;
    if (r3_1) {
        return;
    } else {
        deregister_tm_clones();
        __TMC_END__ = 1;
        return;
    }
}

int32_t __JCR_END__ = 0;

void __gmon_start__();

void frame_dummy() {
    int32_t r3_1;

    r3_1 = __JCR_END__;
    if (r3_1) {
        if (!1) 
            goto addr_83ec_4;
    } else {
        addr_83d4_5:
        goto "P8";
    }
    goto addr_83d4_5;
    addr_83ec_4:
    __gmon_start__();
    goto addr_83d4_5;
}

/* $d */
void d(int32_t r0) {
    int1_t z2;
    int1_t z3;

    if (z2) {
    }
    if (z3) {
    }
    return;
}

void _fini() {
    return;
}

/* $d */
void d(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

int32_t main() {
    return 0;
}

/* $d */
int32_t d = 0x8060;

int32_t g8714 = 0x8054;

void __libc_csu_init(int32_t r0, int32_t r1, int32_t r2, int32_t r3) {
    int32_t r6_5;
    int32_t r5_6;
    int32_t r7_7;
    int32_t r8_8;
    int32_t r9_9;
    int32_t r9_10;
    int32_t r5_11;
    int1_t z12;
    int32_t r4_13;

    r6_5 = r0;
    r5_6 = d;
    r7_7 = r1;
    r8_8 = r2;
    r9_9 = g8714;
    _init();
    r9_10 = 0x86e0 + r9_9;
    r5_11 = 0x86d8 + r5_6 - r9_10 >> 2;
    if (z12) {
        return;
    } else {
        r4_13 = 0;
        while (++r4_13, *reinterpret_cast<int32_t*>(r9_10 + r4_13 << 2)(r6_5, r7_7, r8_8), r4_13 != r5_11) {
        }
        return;
    }
}

/* $d */
int32_t d = 0x8718;

int32_t g8300 = 0x844c;

void _start(int32_t r0) {
    int32_t r12_2;
    int32_t r0_3;
    int32_t v4;
    int16_t* r0_5;
    int1_t z6;
    uint32_t r8_7;
    uint32_t r8_8;
    uint32_t r7_9;
    int1_t z10;
    int1_t z11;

    r12_2 = d;
    r0_3 = g8300;
    __libc_start_main(r0_3, v4);
    r0_5 = abort();
    if (z6) {
        r8_7 = reinterpret_cast<uint32_t>(r0_5) & r8_8 << r7_9;
    }
    if (z10) {
        r8_7 = reinterpret_cast<uint32_t>(r0_5) & reinterpret_cast<uint32_t>(r12_2 >> 8);
    }
    if (!z11) 
        goto "???";
    *r0_5 = static_cast<int16_t>(r8_7);
}

void __aeabi_idiv() {
    int32_t r1_1;

    if (r1_1) 
        goto "???";
    goto 0x8678;
}
