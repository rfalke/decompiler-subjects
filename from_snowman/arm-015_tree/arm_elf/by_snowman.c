
void call_weak_fn();

void _init() {
    call_weak_fn();
    return;
}

struct s0 {
    int32_t f0;
    struct s0* f4;
    struct s0* f8;
};

int32_t printf = 0x82d4;

void printf(int32_t r0, struct s0* r1) {
    int32_t pc3;

    pc3 = printf;
    goto pc3;
}

/* $d */
int32_t d = 0x8408;

int32_t g838c = 36;

int32_t __gmon_start__ = 0x82d4;

void call_weak_fn() {
    int32_t r3_1;
    int32_t r2_2;
    int32_t pc3;

    r3_1 = d;
    r2_2 = g838c;
    if (!*reinterpret_cast<int32_t*>(0x837c + r3_1 + r2_2)) {
        return;
    } else {
        pc3 = __gmon_start__;
        goto pc3;
    }
}

/* $d */
int32_t d = 0x107b7;

void deregister_tm_clones() {
    int32_t r3_1;

    r3_1 = d;
    if (reinterpret_cast<uint32_t>(r3_1 - 0x107b4) <= 6) {
        return;
    } else {
        if (1) {
            return;
        } else {
            goto 0;
        }
    }
}

int32_t malloc = 0x82d4;

struct s0* malloc(int32_t r0, struct s0* r1) {
    int32_t pc3;

    pc3 = malloc;
    goto pc3;
}

void insert(struct s0** r0, struct s0* r1) {
    if (*r0) {
        if (r1->f0 < (*r0)->f0) 
            goto addr_84a8_4;
    } else {
        *r0 = r1;
        goto addr_84f8_6;
    }
    if (r1->f0 > (*r0)->f0) 
        goto addr_84e0_9;
    addr_84f8_6:
    return;
    addr_84e0_9:
    insert(&(*r0)->f4, r1);
    goto addr_84f8_6;
    addr_84a8_4:
    insert(&(*r0)->f8, r1);
    goto addr_84f8_6;
}

struct s1 {
    struct s0* f0;
    struct s1* f4;
    struct s1* f8;
};

void printout(struct s1* r0, struct s0* r1) {
    if (r0->f8) {
        printout(r0->f8, r1);
    }
    printf("%d\n", r0->f0);
    if (r0->f4) {
        printout(r0->f4, r0->f0);
    }
    return;
}

int32_t __libc_start_main = 0x82d4;

void __libc_start_main(int32_t r0, int32_t r1) {
    int32_t pc3;

    pc3 = __libc_start_main;
    goto pc3;
}

int32_t rand = 0x82d4;

int32_t rand() {
    int32_t pc1;

    pc1 = rand;
    goto pc1;
}

int32_t abort = 0x82d4;

int32_t abort() {
    int32_t pc1;

    pc1 = abort;
    goto pc1;
}

/* $d */
int32_t d = 0x84a0;

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
int32_t d(int32_t r0, int16_t* r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
        *r1 = static_cast<int16_t>(r0);
    }
    if (z4) {
        return 0x107b4;
    } else {
        if (1) {
            return 0x107b4;
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
            goto addr_8450_4;
    } else {
        addr_8438_5:
        goto 0x83c0;
    }
    goto addr_8438_5;
    addr_8450_4:
    __gmon_start__();
    goto addr_8438_5;
}

int32_t main() {
    void* r11_1;
    int32_t v2;
    struct s0* r1_3;
    struct s0* r0_4;
    int32_t r0_5;

    r11_1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 + 4);
    v2 = 1;
    while (v2 <= 10) {
        r0_4 = malloc(12, r1_3);
        r0_4->f4 = reinterpret_cast<struct s0*>(0);
        r0_4->f8 = r0_4->f4;
        r0_5 = rand();
        r0_4->f0 = r0_5;
        r1_3 = r0_4;
        insert(reinterpret_cast<int32_t>(r11_1) - 16, r1_3);
        ++v2;
    }
    printout(0, r1_3);
    return 0;
}

/* $d */
int32_t d = 0x8064;

int32_t g866c = 0x8058;

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
    r9_9 = g866c;
    _init();
    r9_10 = 0x8638 + r9_9;
    r5_11 = 0x8630 + r5_6 - r9_10 >> 2;
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

int32_t g8364 = 0x8570;

void _start(int32_t r0) {
    int32_t r0_2;
    int32_t v3;
    int1_t z4;
    int1_t z5;
    int1_t z6;

    r0_2 = g8364;
    __libc_start_main(r0_2, v3);
    abort();
    if (z4) {
    }
    if (z5) {
    }
    if (!z6) 
        goto "???";
}
