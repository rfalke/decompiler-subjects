
void call_weak_fn();

void _init() {
    call_weak_fn();
    return;
}

int32_t __libc_start_main = 0x8264;

void __libc_start_main(int32_t r0, int32_t r1) {
    int32_t pc3;

    pc3 = __libc_start_main;
    goto pc3;
}

/* $d */
int32_t d = 0x8410;

int32_t g82f8 = 24;

int32_t __gmon_start__ = 0x8264;

void call_weak_fn() {
    int32_t r3_1;
    int32_t r2_2;
    int32_t pc3;

    r3_1 = d;
    r2_2 = g82f8;
    if (!*reinterpret_cast<int32_t*>(0x82e8 + r3_1 + r2_2)) {
        return;
    } else {
        pc3 = __gmon_start__;
        goto pc3;
    }
}

/* $d */
int32_t d = 0x1071f;

void deregister_tm_clones() {
    int32_t r3_1;

    r3_1 = d;
    if (reinterpret_cast<uint32_t>(r3_1 - 0x1071c) <= 6) {
        return;
    } else {
        if (1) {
            return;
        } else {
            goto 0;
        }
    }
}

int32_t abort = 0x8264;

int32_t abort() {
    int32_t pc1;

    pc1 = abort;
    goto pc1;
}

/* $d */
int32_t d = 0x8484;

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
        return 0x1071c;
    } else {
        if (1) {
            return 0x1071c;
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
            goto addr_83bc_4;
    } else {
        addr_83a4_5:
        goto 0x832c;
    }
    goto addr_83a4_5;
    addr_83bc_4:
    __gmon_start__();
    goto addr_83a4_5;
}

int32_t do_switch(int32_t r0) {
    int32_t r3_2;

    if (r0 == 5) {
        *reinterpret_cast<int16_t*>(&r3_2) = reinterpret_cast<int16_t>("five");
        *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&r3_2) + 2) = 0;
    } else {
        if (r0 > 5) {
            if (r0 == 8) 
                goto label_7; else 
                goto addr_8428_8;
        } else {
            if (r0 == 2) {
                *reinterpret_cast<int16_t*>(&r3_2) = reinterpret_cast<int16_t>("two");
                *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&r3_2) + 2) = 0;
            } else {
                if (r0 > 2) {
                    if (r0 == 3) 
                        goto label_15; else 
                        goto addr_8414_16;
                } else {
                    if (!r0) {
                        *reinterpret_cast<int16_t*>(&r3_2) = reinterpret_cast<int16_t>("zero");
                        *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&r3_2) + 2) = 0;
                    } else {
                        if (r0 == 1) {
                            *reinterpret_cast<int16_t*>(&r3_2) = reinterpret_cast<int16_t>("one");
                            *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&r3_2) + 2) = 0;
                        } else {
                            goto addr_84f8_24;
                        }
                    }
                }
            }
        }
    }
    addr_8500_25:
    return r3_2;
    label_7:
    *reinterpret_cast<int16_t*>(&r3_2) = reinterpret_cast<int16_t>("eight");
    *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&r3_2) + 2) = 0;
    goto addr_8500_25;
    addr_8428_8:
    if (r0 > 8) {
        if (r0 != 10) 
            goto addr_844c_29;
    } else {
        if (r0 == 6) {
            *reinterpret_cast<int16_t*>(&r3_2) = reinterpret_cast<int16_t>("six");
            *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&r3_2) + 2) = 0;
            goto addr_8500_25;
        } else {
            if (r0 == 7) {
                *reinterpret_cast<int16_t*>(&r3_2) = reinterpret_cast<int16_t>("seven");
                *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&r3_2) + 2) = 0;
                goto addr_8500_25;
            } else {
                goto addr_84f8_24;
            }
        }
    }
    *reinterpret_cast<int16_t*>(&r3_2) = reinterpret_cast<int16_t>("ten");
    *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&r3_2) + 2) = 0;
    goto addr_8500_25;
    addr_844c_29:
    if (r0 < 10) {
        *reinterpret_cast<int16_t*>(&r3_2) = reinterpret_cast<int16_t>("nine");
        *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&r3_2) + 2) = 0;
        goto addr_8500_25;
    } else {
        if (r0 == 0x18894) {
            *reinterpret_cast<int16_t*>(&r3_2) = reinterpret_cast<int16_t>("stopyatsot");
            *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&r3_2) + 2) = 0;
            goto addr_8500_25;
        }
    }
    addr_84f8_24:
    *reinterpret_cast<int16_t*>(&r3_2) = reinterpret_cast<int16_t>("many");
    *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&r3_2) + 2) = 0;
    goto addr_8500_25;
    label_15:
    *reinterpret_cast<int16_t*>(&r3_2) = reinterpret_cast<int16_t>("three");
    *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&r3_2) + 2) = 0;
    goto addr_8500_25;
    addr_8414_16:
    if (r0 == 4) {
        *reinterpret_cast<int16_t*>(&r3_2) = reinterpret_cast<int16_t>("four");
        *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&r3_2) + 2) = 0;
        goto addr_8500_25;
    } else {
        goto addr_84f8_24;
    }
}

/* $d */
int16_t* d(int16_t* r0) {
    int1_t z2;
    int32_t r8_3;
    int32_t r12_4;
    int1_t z5;
    int32_t r8_6;

    if (z2) {
        *r0 = static_cast<int16_t>(r8_3);
        r0 = reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(r0) - r12_4);
    }
    if (z5) {
        *r0 = static_cast<int16_t>(r8_6);
        r0 = reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(r0) - reinterpret_cast<int32_t>(r0));
    }
    return r0;
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

int32_t g82d0 = 0x8510;

void _start(int32_t r0) {
    int32_t r0_2;
    int32_t v3;
    int1_t z4;
    int1_t z5;
    int1_t z6;

    r0_2 = g82d0;
    __libc_start_main(r0_2, v3);
    abort();
    if (z4) {
    }
    if (z5) {
    }
    if (!z6) 
        goto "???";
}

int32_t main() {
    return 0;
}

/* $d */
int32_t d = 0x80bc;

int32_t g8588 = 0x80b0;

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
    r9_9 = g8588;
    _init();
    r9_10 = 0x8554 + r9_9;
    r5_11 = 0x854c + r5_6 - r9_10 >> 2;
    if (z12) {
        return;
    } else {
        r4_13 = 0;
        while (++r4_13, *reinterpret_cast<int32_t*>(r9_10 + r4_13 << 2)(r6_5, r7_7, r8_8), r4_13 != r5_11) {
        }
        return;
    }
}
