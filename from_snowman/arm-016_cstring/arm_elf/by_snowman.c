
void call_weak_fn();

void _init() {
    call_weak_fn();
    return;
}

int32_t __libc_start_main = 0x82b0;

void __libc_start_main(int32_t r0, int32_t r1) {
    int32_t pc3;

    pc3 = __libc_start_main;
    goto pc3;
}

/* $d */
int32_t d = 0x82d8;

int32_t g835c = 32;

int32_t __gmon_start__ = 0x82b0;

void call_weak_fn() {
    int32_t r3_1;
    int32_t r2_2;
    int32_t pc3;

    r3_1 = d;
    r2_2 = g835c;
    if (!*reinterpret_cast<int32_t*>(0x834c + r3_1 + r2_2)) {
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

int32_t putchar = 0x82b0;

void putchar(uint32_t r0) {
    int32_t pc2;

    pc2 = putchar;
    goto pc2;
}

int32_t strlen = 0x82b0;

uint32_t strlen(int32_t r0) {
    int32_t pc2;

    pc2 = strlen;
    goto pc2;
}

int32_t abort = 0x82b0;

int32_t abort() {
    int32_t pc1;

    pc1 = abort;
    goto pc1;
}

/* $d */
int32_t d = 0x8364;

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
        __asm__("ldrdeq r8, sb, [r0], -r8");
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
            goto addr_8420_4;
    } else {
        addr_8408_5:
        goto "P6";
    }
    goto addr_8408_5;
    addr_8420_4:
    __gmon_start__();
    goto addr_8408_5;
}

int32_t main() {
    uint32_t r0_1;
    uint32_t v2;
    uint32_t v3;

    r0_1 = strlen("Hello, World!");
    v2 = r0_1;
    v3 = 0;
    while (v3 >= v2) {
        putchar(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>("Hello, World!") + v3)));
        ++v3;
    }
    putchar(10);
    return 0;
}

/* $d */
int32_t d = 0x8070;

int32_t g8500 = 0x8064;

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
    r9_9 = g8500;
    _init();
    r9_10 = 0x84cc + r9_9;
    r5_11 = 0x84c4 + r5_6 - r9_10 >> 2;
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

int32_t g8334 = 0x8428;

void _start(int32_t r0) {
    int32_t r0_2;
    int32_t v3;
    int1_t z4;
    int1_t z5;
    int1_t z6;

    r0_2 = g8334;
    __libc_start_main(r0_2, v3);
    abort();
    if (z4) {
    }
    if (z5) {
    }
    if (!z6) 
        goto "???";
}
