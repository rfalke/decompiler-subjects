
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
int32_t d = 0x8344;

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
int32_t d = 0x10653;

void deregister_tm_clones() {
    int32_t r3_1;

    r3_1 = d;
    if (reinterpret_cast<uint32_t>(r3_1 - 0x10650) <= 6) {
        return;
    } else {
        if (1) {
            return;
        } else {
            goto 0;
        }
    }
}

int32_t h() {
    return 1;
}

int32_t g(int32_t r0, int32_t r1, int32_t r2, int32_t r3) {
    return r0 + r1 + r2 + r3;
}

int32_t abort = 0x8264;

int16_t* abort() {
    int32_t pc1;

    pc1 = abort;
    goto pc1;
}

/* $d */
int32_t d = 0x83b8;

/* $d */
void d(int16_t* r0);

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
        return 0x10650;
    } else {
        if (1) {
            return 0x10650;
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
        goto "P6";
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
void d(int16_t* r0) {
    int1_t z2;
    int32_t r8_3;

    if (!z2) 
        goto "???";
    *r0 = static_cast<int16_t>(r8_3);
}

int32_t f() {
    int32_t v1;
    int32_t r0_2;
    int32_t r0_3;
    int32_t v4;
    int32_t r0_5;

    v1 = 20;
    r0_2 = h();
    if (r0_2) {
        r0_3 = g(1, 2, 3, 4);
        v1 = 20 + r0_3;
    }
    v4 = v1 + 10;
    r0_5 = g(v4, v4, v4, v4);
    return r0_5;
}

/* $d */
int32_t d = 0x8060;

int32_t g8518 = 0x8054;

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
    r9_9 = g8518;
    _init();
    r9_10 = 0x84e4 + r9_9;
    r5_11 = 0x84dc + r5_6 - r9_10 >> 2;
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
uint32_t d = 0x851c;

int32_t g82d0 = 0x84a0;

void _start(int32_t r0) {
    uint32_t r12_2;
    int32_t r0_3;
    int32_t v4;
    int16_t* r0_5;
    int1_t z6;
    uint32_t r8_7;
    uint32_t r5_8;
    int1_t z9;
    int1_t z10;

    r12_2 = d;
    r0_3 = g82d0;
    __libc_start_main(r0_3, v4);
    r0_5 = abort();
    if (z6) {
        r8_7 = reinterpret_cast<uint32_t>(r0_5) & r12_2 << r5_8;
    }
    if (z9) {
        r8_7 = reinterpret_cast<uint32_t>(r0_5) & reinterpret_cast<uint32_t>(r0_5) >> 9;
    }
    if (!z10) 
        goto "???";
    *r0_5 = static_cast<int16_t>(r8_7);
}
