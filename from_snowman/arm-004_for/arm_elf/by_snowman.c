
void call_weak_fn();

void _init() {
    call_weak_fn();
    return;
}

int32_t puts = 0x8288;

void puts(int32_t r0) {
    int32_t pc2;

    pc2 = puts;
    goto pc2;
}

/* $d */
int32_t d = 0x82a0;

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
int32_t d = 0x105e3;

void deregister_tm_clones() {
    int32_t r3_1;

    r3_1 = d;
    if (reinterpret_cast<uint32_t>(r3_1 - 0x105e0) <= 6) {
        return;
    } else {
        if (1) {
            return;
        } else {
            goto 0;
        }
    }
}

int32_t __libc_start_main = 0x8288;

void __libc_start_main(int32_t r0, int32_t r1) {
    int32_t pc3;

    pc3 = __libc_start_main;
    goto pc3;
}

int32_t abort = 0x8288;

int64_t* abort() {
    int32_t pc1;

    pc1 = abort;
    goto pc1;
}

/* $d */
int32_t d = 0x8320;

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
        return 0x105e0;
    } else {
        if (1) {
            return 0x105e0;
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
        goto 0x835c;
    }
    goto addr_83d4_5;
    addr_83ec_4:
    __gmon_start__();
    goto addr_83d4_5;
}

int32_t main() {
    int32_t v1;

    v1 = 0;
    while (v1 <= 9) {
        puts("Hello!\n");
        ++v1;
    }
    return 0;
}

/* $d */
int32_t d = 0x8068;

int32_t g849c = 0x805c;

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
    r9_9 = g849c;
    _init();
    r9_10 = 0x8468 + r9_9;
    r5_11 = 0x8460 + r5_6 - r9_10 >> 2;
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

int32_t g8300 = 0x83f4;

void _start(int32_t r0) {
    int32_t r0_2;
    int32_t v3;
    int64_t* r0_4;
    int1_t z5;
    int64_t v6;
    int1_t z7;
    int1_t z8;

    r0_2 = g8300;
    __libc_start_main(r0_2, v3);
    r0_4 = abort();
    if (z5) {
        *reinterpret_cast<uint32_t*>(&v6) = reinterpret_cast<uint32_t>(r0_4) & reinterpret_cast<uint32_t>(r0_4) >> 9;
    }
    if (z7) {
        *r0_4 = v6;
    }
    if (!z8) 
        goto "???";
}
