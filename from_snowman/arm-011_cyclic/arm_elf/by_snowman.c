
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
int32_t d = 0x841c;

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
int32_t d = 0x1072b;

void deregister_tm_clones() {
    int32_t r3_1;

    r3_1 = d;
    if (reinterpret_cast<uint32_t>(r3_1 - 0x10728) <= 6) {
        return;
    } else {
        if (1) {
            return;
        } else {
            goto 0;
        }
    }
}

int32_t g(int32_t r0, int32_t r1, int32_t r2, int32_t r3) {
    return 0x18894;
}

int32_t h() {
    return 0x18894;
}

void f(int32_t r0, int32_t r1, int32_t r2, int32_t r3) {
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t r0_9;
    int32_t r3_10;
    int32_t r0_11;
    int32_t r1_12;
    int32_t r2_13;
    int32_t r0_14;
    int32_t r3_15;
    int32_t r0_16;
    int32_t r0_17;

    v5 = r0;
    v6 = r1;
    v7 = r2;
    v8 = r3;
    while (v5) {
        ++v6;
    }
    while (v5) {
        ++v6;
        r2 = v6;
        if (r2 == v7) 
            goto addr_845c_9;
    }
    while (r0_9 = h(), r3_10 = r0_9, !!r3_10) {
        ++v5;
    }
    while (r0_11 = g(r0_9, r1, r2, r3_10), !!r0_11) {
        r0_9 = h();
        if (!r0_9) 
            goto addr_84bc_18;
        r3_10 = v5 + 1;
        v5 = r3_10;
    }
    addr_84bc_18:
    while (r1_12 = v5, r2_13 = v6, f(v8, r1_12, r2_13, v7), r0_14 = g(v8, r1_12, r2_13, v7), !!r0_14) {
    }
    while (!v5) {
        r0_14 = g(r0_14, r1_12, r2_13, v5);
        v8 = r0_14;
        r3_15 = v8;
        if (r3_15) 
            goto addr_8518_26;
        r3_15 = v5;
        if (!r3_15) 
            goto addr_852c_29;
    }
    f(v8, v7, v6, v5);
    addr_8570_32:
    return;
    addr_8518_26:
    r0_14 = h();
    addr_852c_29:
    while (r0_16 = g(r0_14, r1_12, r2_13, r3_15), r2_13 = r0_16, r2_13 - v6 == 0) {
        r0_17 = g(r0_16, r1_12, r2_13, r2_13 - v6);
        if (!r0_17) 
            goto label_35;
        r0_14 = h();
        r3_15 = r0_14;
        if (!r3_15) 
            goto addr_8570_32;
    }
    goto addr_8570_32;
    label_35:
    goto addr_8570_32;
    addr_845c_9:
    goto addr_8570_32;
}

int32_t abort = 0x8264;

int64_t* abort() {
    int32_t pc1;

    pc1 = abort;
    goto pc1;
}

/* $d */
int32_t d = 0x8490;

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
        return 0x10728;
    } else {
        if (1) {
            return 0x10728;
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
        goto "(7";
    }
    goto addr_83a4_5;
    addr_83bc_4:
    __gmon_start__();
    goto addr_83a4_5;
}

int32_t main() {
    return 0;
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

/* $d */
int32_t d = 0x8060;

int32_t g85f0 = 0x8054;

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
    r9_9 = g85f0;
    _init();
    r9_10 = 0x85bc + r9_9;
    r5_11 = 0x85b4 + r5_6 - r9_10 >> 2;
    if (z12) {
        return;
    } else {
        r4_13 = 0;
        while (++r4_13, *reinterpret_cast<int32_t*>(r9_10 + r4_13 << 2)(r6_5, r7_7, r8_8), r4_13 != r5_11) {
        }
        return;
    }
}

int32_t g82d0 = 0x8578;

void _start(int32_t r0) {
    int32_t r0_2;
    int32_t v3;
    int64_t* r0_4;
    int1_t z5;
    int64_t v6;
    int1_t z7;
    int1_t z8;

    r0_2 = g82d0;
    __libc_start_main(r0_2, v3);
    r0_4 = abort();
    if (z5) {
        *r0_4 = v6;
    }
    if (z7) {
    }
    if (!z8) 
        goto "???";
}
