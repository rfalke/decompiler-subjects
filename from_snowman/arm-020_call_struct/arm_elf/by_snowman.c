
void call_weak_fn();

void _init() {
    call_weak_fn();
    return;
}

int32_t abort = 0x8318;

int32_t abort() {
    int32_t pc1;

    pc1 = abort;
    goto pc1;
}

/* $d */
int32_t d = 0x8320;

int32_t g83ac = 24;

int32_t __gmon_start__ = 0x8318;

void call_weak_fn() {
    int32_t r3_1;
    int32_t r2_2;
    int32_t pc3;

    r3_1 = d;
    r2_2 = g83ac;
    if (!*reinterpret_cast<int32_t*>(0x839c + r3_1 + r2_2)) {
        return;
    } else {
        pc3 = __gmon_start__;
        goto pc3;
    }
}

/* $d */
int32_t d = 0x106e3;

void deregister_tm_clones() {
    int32_t r3_1;

    r3_1 = d;
    if (reinterpret_cast<uint32_t>(r3_1 - 0x106e0) <= 6) {
        return;
    } else {
        if (1) {
            return;
        } else {
            goto 0;
        }
    }
}

int32_t __libc_start_main = 0x8318;

void __libc_start_main(int32_t r0, int32_t r1) {
    int32_t pc3;

    pc3 = __libc_start_main;
    goto pc3;
}

/* f(A, B) */
void _Z1f1A1B(int32_t r0, int32_t r1, int32_t r2, int32_t r3) {
    __asm__("stm ip, {r0, r1}");
    __asm__("stm r1, {r2, r3}");
    return;
}

/* $d */
int32_t d = 0x8394;

/* $d */
void d();

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
        return 0x106e0;
    } else {
        if (1) {
            return 0x106e0;
        } else {
            goto 0;
        }
    }
}

unsigned char _edata = 0;

void __do_global_dtors_aux() {
    uint32_t r3_1;

    r3_1 = _edata;
    if (r3_1) {
        return;
    } else {
        deregister_tm_clones();
        _edata = 1;
        return;
    }
}

int32_t __JCR_END__ = 0;

void _ITM_registerTMCloneTable();

void frame_dummy() {
    int32_t r3_1;

    r3_1 = __JCR_END__;
    if (r3_1) {
        if (!1) 
            goto addr_8470_4;
    } else {
        addr_8458_5:
        goto 0x83e0;
    }
    goto addr_8458_5;
    addr_8470_4:
    _ITM_registerTMCloneTable();
    goto addr_8458_5;
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
void d() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

int32_t g8384 = 0x8518;

void _start(int32_t r0) {
    int32_t r0_2;
    int32_t v3;
    int1_t z4;
    int1_t z5;
    int1_t z6;

    r0_2 = g8384;
    __libc_start_main(r0_2, v3);
    abort();
    if (z4) {
    }
    if (z5) {
    }
    if (!z6) 
        goto "???";
}

/* g() */
void _Z1gv() {
    int32_t v1;

    *reinterpret_cast<int16_t*>(&v1) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v1) + 2) = 0;
    __asm__("stm r2, {r0, r1}");
    _Z1f1A1B(0, v1, 0, 0);
    return;
}

int32_t main() {
    return 0;
}

/* $d */
int32_t d = 0x8060;

int32_t g8590 = 0x8054;

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
    r9_9 = g8590;
    _init();
    r9_10 = 0x855c + r9_9;
    r5_11 = 0x8554 + r5_6 - r9_10 >> 2;
    if (z12) {
        return;
    } else {
        r4_13 = 0;
        while (++r4_13, *reinterpret_cast<int32_t*>(r9_10 + r4_13 << 2)(r6_5, r7_7, r8_8), r4_13 != r5_11) {
        }
        return;
    }
}
