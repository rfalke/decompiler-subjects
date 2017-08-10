
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
int32_t d = 0x82c4;

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
int32_t d = 0x105d3;

void deregister_tm_clones() {
    int32_t r3_1;

    r3_1 = d;
    if (reinterpret_cast<uint32_t>(r3_1 - 0x105d0) <= 6) {
        return;
    } else {
        if (1) {
            return;
        } else {
            goto 0;
        }
    }
}

int32_t fib(int32_t r0) {
    int32_t r0_2;
    int32_t r0_3;
    int32_t r3_4;

    if (r0 > 1) {
        r0_2 = fib(r0 - 1);
        r0_3 = fib(r0 - 2);
        r3_4 = r0_2 + r0_3;
    } else {
        r3_4 = r0;
    }
    return r3_4;
}

int32_t abort = 0x8264;

int32_t abort() {
    int32_t pc1;

    pc1 = abort;
    goto pc1;
}

/* $d */
int32_t d = 0x8338;

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
        __asm__("ldrdeq r0, r1, [r1], -r3");
    }
    if (z2) {
        return 0x105d0;
    } else {
        if (1) {
            return 0x105d0;
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

int32_t g82d0 = 0x8420;

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

/* $d */
int32_t d = 0x8060;

int32_t g8498 = 0x8054;

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
    r9_9 = g8498;
    _init();
    r9_10 = 0x8464 + r9_9;
    r5_11 = 0x845c + r5_6 - r9_10 >> 2;
    if (z12) {
        return;
    } else {
        r4_13 = 0;
        while (++r4_13, *reinterpret_cast<int32_t*>(r9_10 + r4_13 << 2)(r6_5, r7_7, r8_8), r4_13 != r5_11) {
        }
        return;
    }
}
